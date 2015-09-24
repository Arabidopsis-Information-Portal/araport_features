<div id="<?php print $namespace . '-' . $name . $version ?>" class="service col-lg-3 col-md-4 col-sm-6" data-namespace="<?php print $namespace ?>" data-service="<?php print $name ?>" data-version="<?php print $version ?>" <?php if (strpos($namespace, 'dev') !== FALSE || strpos($namespace, 'test') !== FALSE): ?> style="display:none"<?php endif; ?> >
  <div class="thumbnail">
    <?php if ($icon) { ?>
      <img src="data:image/png;base64,<?php print $icon ?>" style="height:60px">
    <?php } else { ?>
      <div class="text-center text-muted"><i class="fa fa-puzzle-piece" style="height:60px;font-size:60px;"></i></div>
    <?php } ?>

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
        <?php endif; ?>
        &nbsp;
      </p>

      <p class="service-description"><?php print $description ?></p>
      <?php
        global $user;
        if ($user->uid) {
          $user_logged_in = true;
        } else {
          $user_logged_in = false;
        }
      ?>
      <p class="text-center">
        <button class="btn btn-default btn-xs" name="more-service">More Information</button>
        <button class="btn btn-primary btn-xs" name="try-service"><?php if ($user_logged_in) { ?>Try this service<?php } else { ?>Log in to try this service<?php } ?></button></p>
      </p>
    </div>
  </div>
</div>
