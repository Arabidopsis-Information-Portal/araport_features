(function(window, $, moment, undefined) {
  var $mainEl;
  var showDevelopmentApis = false;
  var services = window.services;
  var displayServices;

  var serviceTags = function serviceTags(srv) {
    var tags;
    if (srv.tags.length > 0) {
      tags = '<i class="fa fa-tag"></i> ' + $.map(srv.tags, function(t) {
        return '<small class="tag">' + t + '</small>';
      }).join(', ');
    } else {
      tags = '&nbsp;';
    }
    return tags;
  };

  var serviceSources = function serviceSources(srv) {
    return _.map(srv.sources, function(s) {
      var source = ['<address>'];

      if (s.uri) {
        source.push('<strong><a href="' + s.uri + '">' + (s.title || s.uri) + '</a></strong><br>');
      } else if (s.title) {
        source.push('<strong>' + s.title + '</strong><br>');
      }

      if (s.description) {
        source.push(s.description + '<br>')
      }

      if (s.provider_email) {
        source.push('<a href="mailto:' + s.provider_email + '">' + (s.provider_name || s.provider_email) + '</a><br>');
      } else if (s.provider_name) {
        source.push(s.provider_name + '<br>');
      }

      if (s.sponsor_uri) {
        source.push('<a href="' + s.sponsor_uri + '">' + (s.sponsor_organization_name || s.sponsor_uri) + '</a><br>');
      } else if (s.sponsor_organization_name) {
        source.push(s.sponsor_organization_name + '<br>');
      }

      if (s.license) {
        source.push(s.license);
      }
      source.push('</address>');

      return source.join('');
    }).join('');
  };

  function isDev(srv) {
    if (srv.namespace.indexOf('dev') > -1 || srv.namespace.indexOf('test') > -1) {
      return true;
    }
  }

  var templateService = function templateService(srv) {
    return [
      '<div class="service col-lg-3 col-md-4 col-sm-6" ',
      'data-namespace="', srv.namespace, '" ',
      'data-service="', srv.name, '" ',
      'data-version="', srv.version, '">',
      '<div class="thumbnail">', (srv.icon ? '<img src="data:image/png;base64,' + srv.icon + '" style="height:60px">' : '<div class="text-center text-muted"><i class="fa fa-puzzle-piece" style="height:60px;font-size:60px;"></i></div>'),
      '<div class="caption">', (isDev(srv) ? '<span class="label label-warning pull-right">development</span>' : ''),
      '<h5><small>', srv.namespace, '/</small><br>', srv.name, '</h5>',
      '<h6>version ', srv.version, '</h6>',
      '<p class="tags">', serviceTags(srv), '</p>',
      '<p class="service-description">', (srv.description || ''), '</p><p class="text-center">',
      '<button class="btn btn-default btn-xs" name="more-service">More Information</button> ',
      '<button class="btn btn-primary btn-xs" name="try-service">' + (Agave.token ? 'Try this service' : 'Log in to try') + '</button>',
      '</p></div></div></div>'
    ].join('');
  };

  var templateMoreService = function templateMoreService(srv) {
    var output = [
      '<div id="community-data-service-overlay"><div id="community-data-service-wrapper"><div class="pull-right"><button name="close-service" class="btn btn-danger">&times <span class="sr-only">Close</span></button></div><div id="service-more-info">',
      '<h1><small>', srv.namespace, '/</small>', srv.name, '</h1>'
    ];

    if (srv.description) {
      output.push('<p class="lead">' + srv.description + '</p>');
    }

    var tags = serviceTags(srv);
    if (tags) {
      output.push('<p>' + tags + '</p>');
    }

    var sources = serviceSources(srv);
    if (sources) {
      output.push('<section><h3>Source(s)</h3>' + sources + '</section>');
    }

    if (srv.registration_timestamp) {
      output.push('<hr><footer><small>Registered: ' + moment(srv.registration_timestamp).format('LL') + '</small></footer>');
    }

    output.push('</div></div></div>');
    return output.join('');
  };

  var closeService = function closeService() {
    $('#community-data-service-overlay').remove();
    $(document).off('keyup.service');
  };

  var lazyGetIcons = function lazyGetIcons(displayServices) {
    return Promise.all(
      _.map(displayServices, function(service) {
        service.icon = '';
        return new Promise(function(resolve) {
          var xhr = new XMLHttpRequest();
          xhr.onreadystatechange = function() {
            if (this.readyState === 4) {
              if (this.status === 200) {
                service.icon = URL.createObjectURL(this.response);
              }
              resolve(service);
            }
          };
          xhr.open('get', service.self + '/icon');
          xhr.setRequestHeader('Authorization', 'Bearer ' + Agave.token.accessToken);
          xhr.responseType = 'blob';
          xhr.send();
        });
      })
    );
  };

  var filterServices = function filterServices(term) {
    return new Promise(function(resolve) {
      var tokens = [];
      _.each(term.split(/\s*("[^"]+")\s*/), function(token) {
        if (token) {
          var tmp = /"([^"]+)"/.exec(token);
          if (tmp) {
            tokens.push(tmp[1]);
          } else {
            tokens = tokens.concat(token.split(' '));
          }
        }
      });
      tokens = _.chain(tokens).compact().unique().value();
      if (tokens.length > 0) {
        displayServices = _.filter(services, function(service) {
          var stringified = JSON.stringify(service, ['namespace', 'name', 'tags', 'description', 'type', 'version', 'sources', 'authors']);
          for (var i = 0; i < tokens.length; i++) {
            // attribute filter
            var token = tokens[i].trim();
            if (/\w+:/.test(token)) {
              var parts = token.split(':');
              var attr = parts[0];
              var val = parts[1];
              if (attr in service && new RegExp(val).test(service[attr])) {
                return true;
              }
            }
            // general filter
            else {
              if (new RegExp(token).test(stringified)) {
                return true;
              }
            }
          }
          return false;
        });
      } else {
        displayServices = services;
      }

      resolve(displayServices);
    });
  };
  filterServices = _.throttle(filterServices, 100);

  var renderServices = function renderServices(services) {
    var renderSet;
    return new Promise(function(resolve) {
      $mainEl.empty();
      if (showDevelopmentApis) {
        renderSet = services;
      } else {
        renderSet = _.filter(services, function(s) {
          return !isDev(s);
        });
      }
      _.each(renderSet, function(s) {
        try {
          $mainEl.append(templateService(s));
        } catch (e) {
          console.log(e);
          console.log(s);
        }
      });
      resolve(true);
    });
  };

  var getServiceForEl = function getServiceForEl(el) {
    var n = el.attr('data-namespace');
    var s = el.attr('data-service');
    var v = el.attr('data-version');
    var servForEl = _.findWhere(services, {
      namespace: n,
      name: s,
      version: v
    });
    if (servForEl) {
      return servForEl;
    }
    var v = Number(v);
    return _.findWhere(services, {
      namespace: n,
      name: s,
      version: v
    });
  };

  var bindServiceEvents = function bindServiceEvents() {
    return new Promise(function(resolve) {
      $('button[name="try-service"]').on('click', function(e) {
        e.preventDefault();
        if (Drupal.settings.agave.token) {
          var service = getServiceForEl($(this).closest('.service'));
          if (service) {
            tryService(service);
          } else {
            // console.error('Unexpected: could not find service', e);
          }
        } else {
          window.location = '/user/login?destination=' + window.location.pathname;
        }
      });
      $('button[name="more-service"]').on('click', function(e) {
        e.preventDefault();
        var service = getServiceForEl($(this).closest('.service'));
        if (service) {
          moreService(service);
        } else {
          // console.error('Unexpected: could not find service', e);
        }
      });
      resolve(true);
    });
  };

  var getProvenanceRender = function getProvenanceRender(service) {
    return new Promise(function(resolve, reject) {
      if (! Agave.token) {
        reject('Agave.token is null');
        return;
      }

      if (service._provenance) {
        var provImg = document.createElement('img');
        provImg.src = service._provenance;
        resolve(provImg);
      } else {
        var xhr = new XMLHttpRequest();
        xhr.onreadystatechange = function() {
          if (this.readyState === 4) {
            if (this.status === 200) {
              service._provenance = URL.createObjectURL(this.response);
              var provImg = document.createElement('img');
              provImg.src = service._provenance;
              resolve(provImg);
            } else {
              reject(this.responseText);
            }
          }
        };
        xhr.open('get', service.self + '/prov?format=png');
        xhr.setRequestHeader('Authorization', 'Bearer ' + Agave.token.accessToken);
        xhr.responseType = 'blob';
        xhr.send();
      }
    });
  };

  var moreService = function moreService(service) {
    $('body').append(templateMoreService(service));
    $('#community-data-service-wrapper').css({
      'marginTop': (window.scrollY + 100) + 'px'
    });

    // provenance
    console.log(service);
    getProvenanceRender(service).then(
      function(provImg) {
        $('#service-provenance-graph').append(provImg);
      },
      function(error) {
        console.error(error);
      });

    $('#community-data-service-overlay').on('click', function(e) {
      if (e.target === e.currentTarget) {
        closeService();
      }
    });
    $('button[name="close-service"]').on('click', closeService);
    $(document).on('keyup.service', function(e) {
      if (e.keyCode == 27) {
        closeService();
      }
    });
  };

  var tryService = function tryService(service) {
    Agave.api.adama.docs({
      namespace: service.namespace,
      service: service.name + '_v' + service.version
    }, function(resp) {
      $('body').append('<div id="community-data-service-overlay"><div id="community-data-service-wrapper"><div class="pull-right"><button name="close-service" class="btn btn-danger">&times <span class="sr-only">Close</span></button></div><div class="swagger-section"><div id="message-bar" class="swagger-ui-wrap">&nbsp;</div><div id="swagger-ui-container" class="swagger-ui-wrap"></div></div></div></div>');
      $('#community-data-service-wrapper').css({
        'marginTop': (window.scrollY + 100) + 'px'
      });
      window.swaggerUi = new SwaggerUi({
        dom_id: "swagger-ui-container",
        spec: resp.obj,
        docExpansion: 'full',
        supportedSubmitMethods: ['get', 'post', 'put', 'delete', 'patch'],
        onComplete: function(swaggerApi, swaggerUi) {
          var apiKeyAuth = new SwaggerClient.ApiKeyAuthorization("Authorization", "Bearer " + Agave.token.accessToken, "header");
          window.swaggerUi.api.clientAuthorizations.add("Authorization", apiKeyAuth);
          $('pre code').each(function(i, e) {
            hljs.highlightBlock(e)
          });
        },
        onFailure: function(data) {
          window.alert("Unable to Load SwaggerUI");
        },
        docExpansion: "list",
        sorter: "alpha",
        validatorUrl: null
      });

      window.swaggerUi.load();

      $('#community-data-service-overlay').on('click', function(e) {
        if (e.target === e.currentTarget) {
          closeService();
        }
      });
      $('button[name="close-service"]').on('click', closeService);
      $(document).on('keyup.service', function(e) {
        if (e.keyCode == 27) {
          closeService();
        }
      });
    });
  };

  $(function() {
    $mainEl = $('#services');
    displayServices = services;

    bindServiceEvents();
    $('input[name=filter_apis]').on('input', function(e) {
      filterServices(this.value).then(renderServices).then(bindServiceEvents);
    });

    $('input[name=show_dev_apis]').on('change', function() {
      showDevelopmentApis = $(this).is(':checked');
      renderServices(displayServices).then(bindServiceEvents);
    });
  });
})(window, jQuery, moment);
