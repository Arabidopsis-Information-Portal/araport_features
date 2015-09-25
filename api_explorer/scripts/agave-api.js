$(function () {
  if (! (Agave.token && Agave.token.accessToken)) {
    $('#message-bar').before('<div class="alert alert-warning">Please <a href="/user/login?destination=' + window.location.pathname + '">log in</a> to interact with the API Console.</div>');
  }

  window.swaggerUi = new SwaggerUi({
    url: "https://api.araport.org/docs/v2/agaveapi.json",
    dom_id: "swagger-ui-container",
    supportedSubmitMethods: ['get', 'post', 'put', 'delete'],
    onComplete: function(swaggerApi, swaggerUi){
      $('pre code').each(function(i, e) {
        hljs.highlightBlock(e)
      });

      if (Agave.token && Agave.token.accessToken) {
        var apiKeyAuth = new SwaggerClient.ApiKeyAuthorization("Authorization", "Bearer " + Agave.token.accessToken, "header");
        window.swaggerUi.api.clientAuthorizations.add("Authorization", apiKeyAuth);
      }
    },
    onFailure: function(data) {
      log("Unable to Load SwaggerUI");
    },
    docExpansion: "none",
    sorter : "alpha"
  });
  window.swaggerUi.load();
});
