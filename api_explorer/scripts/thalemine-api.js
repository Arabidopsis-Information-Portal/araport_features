(function (window, $, undefined) {
  $(function() {
    var $mainEl = $('#thalemine-api');
    var iframe = document.createElement('iframe');
    iframe.src = 'https://iodocs.araport.org/thalemine/docs#/';
    iframe.className = 'embed-responsive-item';
    iframe.onload = function() {
      if (Agave.token && Agave.token.accessToken) {
        iframe.contentWindow.postMessage(
          Agave.token.accessToken,
          "https://iodocs.araport.org"
        )
      } else {
        $mainEl.before('<div class="alert alert-warning">Please <a href="/user/login?destination=' + window.location.pathname + '">log in</a> to interact with the API Console.</div>');
      }
    };
    $mainEl.addClass('embed-responsive').css({'padding-bottom':'100%'}).append(iframe);
  });
})(window, jQuery);