
            <?php
            global $user;
            if ( $user->uid ) {
              $user_logged_in = true;
            }
            else {
              $user_logged_in = false;
            }
            ?>
<form>
   <div class="row">
      <div class="col-md-6">
         <div class="form-group">
            <div class="input-group"> <span class="input-group-addon"><i class="fa fa-search"></i><span class="sr-only">Filter</span></span> <input type="text" placeholder="Filter APIs..." name="filter_apis" class="form-control"> </div>
            <p class="help-block"> You can filter APIs by namespace, service, description, tags, etc. Filter with free text or target specific fields, for example, with <code>namespace:aip</code> or <code>tags:expression</code>. </p>
         </div>
      </div>
      <div class="col-md-6">
         <div class="form-group">
            <div class="checkbox"> <label> <input type="checkbox" name="show_dev_apis"> Show <b>development</b> APIs </label> </div>
            <p class="help-block"> Namespaces with "-dev" or "-test" are considered "development" APIs and are hidden by default. These are APIs that may be changing rapidly and may not be stable enought for production. </p>
         </div>
      </div>
   </div>
</form>

<div id="services" class="row">
   <!-- begin apps -->
   <?php print $app_content ?>
   <!-- end apps -->
</div>
<link href='/sites/all/libraries/swagger-ui-2.1.0/dist/css/screen.css' media='screen' rel='stylesheet' type='text/css'/>
<style>
  .swagger-section .swagger-ui-wrap {
    max-width: inherit;
  }
  .swagger-section #resources {
    padding: 0;
  }
  .swagger-section #message-bar {
    min-height: 0;
    padding: 0;
    text-align: inherit;
  }
  .swagger-section #message-bar a {
    color: inherit;
  }
  .loading:before {
    content: "Loading Community Data APIs...";
    font-size: 2em;
    display: block;
    text-align: center;
    margin: 1em 0;
  }
  @media(min-width:768px) {
    .service-description {
      height: 4.3em;
      overflow: hidden;
      position: relative;
    }
    .service-description:after {
      position: absolute;
      content: '';
      display: block;
      width: 100%;
      height: 1.5em;
      bottom: 0;
      background-image: linear-gradient(to bottom, rgba(255,255,255,0), white);
    }
  }
  #community-data-service-overlay {
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    left: 0;
    background-color: rgba(0,0,0,0.1);
    z-index: 10000;
  }
  #community-data-service-wrapper {
    background-color: #fff;
    border: 1px solid #333;
    box-shadow: 0 0 3px rgba(0,0,0,0.5);
    width: 90%;
    margin: 100px auto;
    padding: 20px;
    min-height: 100px;
  }
  .service .tags {
    white-space: nowrap;
    overflow: hidden;
  }
  .service .img-wrapper {
    height: 80px;
  }
</style>

<script src="/sites/all/libraries/es6-promise/promise.min.js" type="text/javascript"></script>
<script>
  ES6Promise.polyfill();
  var $ = jQuery;
  $.browser = {
    msie: false
  };
</script>
<script src='/sites/all/libraries/swagger-ui-2.1.0/dist/lib/jquery.slideto.min.js' type='text/javascript'></script>
<script src='/sites/all/libraries/swagger-ui-2.1.0/dist/lib/jquery.wiggle.min.js' type='text/javascript'></script>
<script src='/sites/all/libraries/swagger-ui-2.1.0/dist/lib/jquery.ba-bbq.min.js' type='text/javascript'></script>
<script src='/sites/all/libraries/swagger-ui-2.1.0/dist/lib/handlebars-2.0.0.js' type='text/javascript'></script>
<script src='/sites/all/libraries/swagger-ui-2.1.0/dist/lib/underscore-min.js' type='text/javascript'></script>
<script src='/sites/all/libraries/swagger-ui-2.1.0/dist/lib/backbone-min.js' type='text/javascript'></script>
<script src='/sites/all/libraries/swagger-ui-2.1.0/dist/swagger-ui.js' type='text/javascript'></script>
<script src='/sites/all/libraries/swagger-ui-2.1.0/dist/lib/highlight.7.3.pack.js' type='text/javascript'></script>
<script src='/sites/all/libraries/swagger-ui-2.1.0/dist/lib/marked.js' type='text/javascript'></script>




<script type="text/javascript">
(function(window, $, undefined) {

  var $mainEl;
  var showDevelopmentApis = false;
  //var jsonTExt = ;
  var services = <?php print $services ?>;
  var displayServices;

  var serviceTags = function serviceTags(srv) {
    var tags;
    if (srv.tags.length > 0) {
      tags = '<i class="fa fa-tag"></i> ' + $.map(srv.tags, function(t) { return '<small class="tag">' + t + '</small>'; }).join(', ');
    } else {
      tags = '&nbsp;';
    }
    return tags;
  };

  function isDev(srv){
         if(srv.namespace.indexOf('dev') > -1 || srv.namespace.indexOf('test') > -1){
           return true;
         }   
  }

  var templateService = function templateService(srv) {
    return [
        '<div class="service col-lg-3 col-md-4 col-sm-6" ',
        'data-namespace="', srv.namespace, '" ',
        'data-service="', srv.name, '" ',
        'data-version="', srv.version, '">',
        '<div class="thumbnail">',
        (srv.icon ? '<img src="data:image/png;base64,' + srv.icon + '" style="height:60px">' : '<div class="text-center text-muted"><i class="fa fa-puzzle-piece" style="height:60px;font-size:60px;"></i></div>'),
        '<div class="caption">',
        (isDev(srv) ? '<span class="label label-warning pull-right">development</span>' : ''),
        '<h5><small>', srv.namespace, '/</small><br>', srv.name, '</h5>',
        '<h6>version ', srv.version,'</h6>',
        '<p class="tags">', serviceTags(srv), '</p>',
        '<p class="service-description">', (srv.description || ''), '</p><p class="text-center">',
        '<button class="btn btn-default btn-xs" name="more-service">More Information</button> ',
        '<button class="btn btn-primary btn-xs" name="try-service">Try this service</button>',
        '</p></div></div></div>'
      ].join('');
  };

  var templateMoreService = function templateMoreService(srv) {
    var authors = _.map(srv.authors, function(a) {
      a.sponsor_organization = a.sponsor_organization || a.sponsor_organization_name;
      return '<li><a href="mailto:' + a.email + '">' + a.name + '</a>, <a href="' + a.sponsor_uri + '">' + (a.sponsor_organization || a.sponsor_uri) + '</a></li>'
    }).join('');

    return [
      '<div id="community-data-service-overlay"><div id="community-data-service-wrapper"><div class="pull-right"><button name="close-service" class="btn btn-danger">&times <span class="sr-only">Close</span></button></div><div id="service-more-info">',
      '<h1><small>', srv.namespace, '/</small>', srv.name, '</h1>',
      '<p class="lead">', srv.description, '</p>',
      '<p>', serviceTags(srv), '</p>',
      '<section><h3>Authors</h3><ul class="list-unstyled">', (authors || '<li>unknown</li>'), '</ul></section>',
      '<section><h3>Repository</h3><a href="', srv.git_repository, '">', srv.git_repository, '</a> ',
      '<span class="label label-default">', (srv.git_branch || 'master'), '</span>',
      '</section><section><h3>Provenance</h3>',
      '<div id="service-provenance-graph" class="thumbnail"></div></section>',
      '<hr><footer><small>Registered: ', (srv.registration_timestamp ? new Date(srv.registration_timestamp).toLocaleString() : 'unknown'), '</small></footer>',
      '</div></div></div>'
      ].join('');
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
          return ! isDev(s);
        });
      }
      _.each(renderSet, function(s) {
        $mainEl.append(templateService(s));
      });
      resolve(true);
    });
  };

  var getServiceForEl = function getServiceForEl(el) {
    var n = el.attr('data-namespace');
    var s = el.attr('data-service');
    var v = el.attr('data-version');
    var servForEl = _.findWhere(services, {namespace:n, name:s, version:v});
    if(servForEl)
    {
      return servForEl;
    }
     var v = Number(v);
    return _.findWhere(services, {namespace:n, name:s, version:v});
  };

  var bindServiceEvents = function bindServiceEvents() {
   console.log("binding service events");
    return new Promise(function(resolve) {
      console.log("in Promise resolve");
      console.log("finding button[name=try-service]" + $('button[name="try-service"]'));
      $('button[name="try-service"]').on('click', function(e) {
         console.log("in on click");
         e.preventDefault();
         <?php if (!$user_logged_in): ?>
            window.location = '/user/login?destination=' + window.location.pathname;
         <?php else: ?>
        try{
        console.log("finding closest service: " + $(this).closest('.service'));
         } catch(e){
            console.error(e);
         }
        var service = getServiceForEl($(this).closest('.service'));
        if (service) {
          tryService(service);
        } else {
          console.error('Unexpected: could not find service', e);
        }
        <?php endif; ?> 
      });
      $('button[name="more-service"]').on('click', function(e) {
        e.preventDefault();
         <?php if (!$user_logged_in): ?>
            window.location = '/user/login?destination=' + window.location.pathname
        <?php else: ?>        
        var service = getServiceForEl($(this).closest('.service'));
        if (service) {
          moreService(service);
        } else {
          console.error('Unexpected: could not find service', e);
        }
        <?php endif; ?> 
      });
      resolve(true);
    });
  };

  var getProvenanceRender = function getProvenanceRender(service) {
    return new Promise(function(resolve, reject) {
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
    $('#community-data-service-wrapper').css({'marginTop': (window.scrollY + 100) + 'px'});

    // provenance
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
    Agave.api.adama.docs({namespace: service.namespace, service: service.name + '_v' + service.version}, function (resp) {
      $('body').append('<div id="community-data-service-overlay"><div id="community-data-service-wrapper"><div class="pull-right"><button name="close-service" class="btn btn-danger">&times <span class="sr-only">Close</span></button></div><div class="swagger-section"><div id="message-bar" class="swagger-ui-wrap">&nbsp;</div><div id="swagger-ui-container" class="swagger-ui-wrap"></div></div></div></div>');
      $('#community-data-service-wrapper').css({'marginTop': (window.scrollY + 100) + 'px'});
      window.swaggerUi = new SwaggerUi({
        dom_id: "swagger-ui-container",
        spec: resp.obj,
        docExpansion: 'full',
        supportedSubmitMethods: ['get', 'post', 'put', 'delete', 'patch'],
        onComplete: function(swaggerApi, swaggerUi){
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
        sorter : "alpha",
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
})(window, jQuery);
</script>