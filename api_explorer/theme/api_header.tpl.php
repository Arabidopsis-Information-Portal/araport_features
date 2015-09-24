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
