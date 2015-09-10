
   <div id="<?php print $namespace . '-' . $name . $version ?>" class="service col-lg-3 col-md-4 col-sm-6" data-namespace="<?php print $namespace ?>" data-service="<?php print $name ?>" data-version="<?php print $version ?>"
            <?php if (strpos($namespace, 'dev') !== FALSE || strpos($namespace, 'test') !== FALSE): ?> style="display:none"<?php endif; ?> >
      <div class="thumbnail">
         <?php if ($icon != null): ?>
         <img src="data:image/png;base64,<?php print $icon ?>" style="height:60px">
         <?php endif; ?>
         <!-- if no icon: -->
         <?php if ($icon == null): ?>
         <div class="text-center text-muted"><i class="fa fa-puzzle-piece" style="height:60px;font-size:60px;"></i></div>
         <?php endif; ?>            
         <!-- if no icon: -->

         <div class="caption">
             <?php if (strpos($namespace, 'dev') !== FALSE || strpos($namespace, 'test') !== FALSE): ?>
               <span class="label label-warning pull-right">development</span>
            <?php endif; ?>
            <h5><small><?php print $namespace . '/' ?></small><br><?php print $name  ?></h5>
            <h6><?php print $version ?></h6>
            
            <p class="tags">
               <?php if ($tags): ?>
               <i class="fa fa-tag"></i>
               <?php foreach ($tags as $tag): ?>
                <small class="tag"><?php print $tag ?></small>,
                <?php endforeach; ?>
                 <?php endif; ?>&nbsp;
            </p>
           
            <p class="service-description"><?php print $description ?></p>
            <?php
            global $user;
            if ( $user->uid ) {
              $user_logged_in = true;
            }
            else {
              $user_logged_in = false;
            }
            ?>
             <?php if ($user_logged_in): ?>
               <p class="text-center"><button class="btn btn-default btn-xs" name="more-service">More Information</button> <button class="btn btn-primary btn-xs" name="try-service">Try this service</button></p>
             <?php else: ?>
               <p class="text-center"><button class="btn btn-default btn-xs" name="more-service">Log-in for more Information</button> <button class="btn btn-primary btn-xs" name="try-service">Log-in to try this service</button></p>
             <?php endif; ?>             
         </div>
      </div>
   </div>
