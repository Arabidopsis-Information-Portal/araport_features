<div id="thalemine-api"></div>

<script type="text/javascript">
(function (window, $, undefined) {
  $(function() {
    var $mainEl = $('#thalemine-api');
    if (Agave.token && Agave.token.accessToken) {
      var iframe = document.createElement('iframe');
      iframe.src = 'https://iodocs.araport.org/thalemine/docs#/';
      iframe.className = 'embed-responsive-item';
      iframe.onload = function() {
        iframe.contentWindow.postMessage(
          Agave.token.accessToken,
          "https://iodocs.araport.org"
        )
      };
      $mainEl.addClass('embed-responsive').css({'padding-bottom':'100%'}).append(iframe);
    } else {
      $mainEl.append('<div class="alert alert-danger"><a href="/user/login?destination=' + window.location.pathname + '">Log in</a> to interact with the API Console.</div>');
    }
  });
})(window, jQuery);
</script>
