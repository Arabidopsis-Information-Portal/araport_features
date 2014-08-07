(function($, undefined){
  'use strict';
  Drupal.behaviors.araportDownloads = {
    attach: function (context, settings) {
      $('[data-araport-curl]').each(function(i,o) {
        var link, container, trigger, command;

        link = $(o);
        container = link.parent();
        trigger = $('<a>').attr('title','Download with cURL').html('<i class="fa fa-terminal"></i>');

        container.append('&nbsp;').append(trigger);
        trigger.tooltip();

        command = $('<div style="display:none;" class="well well-sm">').html('<p>Copy this command and paste into a terminal window to download using cURL.</p><textarea class="form-control">'+link.attr('data-araport-curl')+'</textarea>');
        trigger.on('click', function() {
          command.toggle();
          command.find('textarea')[0].select();
        });
        container.append(command);
      });
    }
  };

})(jQuery);
