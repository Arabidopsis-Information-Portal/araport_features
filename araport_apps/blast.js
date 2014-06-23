(function ($) {
  //app template
  var BLAST = {
    "name": "blastn-demo-01",
    "appId": "ncbi-blastn-2.2.29",
    "queue": "normal",
    "nodeCount": 1,
    "maxMemoryPerNode": 1,
    "processorsPerNode": 1,
    "requestedTime": "00:10:00",
    "archive": false,
    "archivePath": "vaughn/archive/jobs/blastn-demo-01",
    "archiveSystem": "araport-storage-00",
    "notifications": [],
    "parameters" : {
    	"database": "TAIR10_cdna_20101214_updated",
    	"evalue": 0.001,
    	"format":"HTML",
    	"ungapped":false,
    	"matrix":"BLOSUM62",
    	"filter":true,
    	"lowercase_masking":false
    },
    "inputs": {
		"query": "agave://araport-storage-00/apps/ncbi-blast-2.2.29/fwa.nt.fa"
    }
  };

  
  Drupal.behaviors.araport_apps = {
    
    attach: function (context, settings) {
      //on form change add class to form element to pick out and add to app description
      $('form', context).change(function (event) {
        console.log(event.target);
        $(event.target).addClass("form-changed");
      });
      
      //gather the items that have changed in the advanced form and add just those for the app submit
      $('.form-submit', context).click(function (event) {
        event.preventDefault();
        //var things = $('.form-changed').parents('#edit-blast-options');
        var changedAdvOptions = $('.advanced-blast-options').find('.form-changed');
        console.log("length is " + changedAdvOptions.length);
        for(var i =0; i < changedAdvOptions.length; i++) {
          //console.log(changedAdvOptions[i].name + ' = ' + changedAdvOptions[i].value);
          BLAST['parameters'][changedAdvOptions[i].name] = changedAdvOptions[i].value;
        }
        console.log(BLAST['parameters']);
      });
    }
  };
  
  function assembleBlast(monkey) {
    console.log(monkey);
  }  

  
})(jQuery);