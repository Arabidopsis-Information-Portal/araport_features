<?php
/**
 * @file
 * new_homepage_06242015.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function new_homepage_06242015_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'all_search_form';
  $mini->category = 'Search Forms';
  $mini->admin_title = 'All Search Form';
  $mini->admin_description = 'Search for drupal site content, Thalemine and JBrowse';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => array(
        'style' => 'Search Region 1',
      ),
    ),
    'middle' => array(
      'style' => 'stylizer',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bed66596-c0f8-49a2-b20b-bd16dcf0af41';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e6afaec2-54db-4b10-beb2-a95e67fb3cda';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'Front-Search-Box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e6afaec2-54db-4b10-beb2-a95e67fb3cda';
    $display->content['new-e6afaec2-54db-4b10-beb2-a95e67fb3cda'] = $pane;
    $display->panels['middle'][0] = 'new-e6afaec2-54db-4b10-beb2-a95e67fb3cda';
    $pane = new stdClass();
    $pane->pid = 'new-867c2f8a-f928-4617-a8e9-bc66b1f47a1b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'All Search Examples',
      'title' => '',
      'body' => '<p>&nbsp;Search Thalemine, JBrowse, other content<br /><i class="fa fa-1x fa-arrow-circle-up"></i>&nbsp;Search by identifiers or keywords e.g. AT4G19020 or epigenetic</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'Search-Examples',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '867c2f8a-f928-4617-a8e9-bc66b1f47a1b';
    $display->content['new-867c2f8a-f928-4617-a8e9-bc66b1f47a1b'] = $pane;
    $display->panels['middle'][1] = 'new-867c2f8a-f928-4617-a8e9-bc66b1f47a1b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['all_search_form'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'jbrowse_search_form';
  $mini->category = 'Search Forms';
  $mini->admin_title = 'JBrowse Search_Form';
  $mini->admin_description = 'Search form for JBrowse index';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'stylizer:Search Region 1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fc0c1355-a304-4ee0-a4a3-b73ea1dfd84b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3131fa9b-5b38-44ef-b091-71d068767a68';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'JBrowse Search',
      'title' => '',
      'body' => '<form class="search-form clearfix" action="/search/jbrowse" method="post" id="search-form" accept-charset="UTF-8">
   <div class="input-group">
     <input placeholder="Search by names, identifiers, keywords ..." class="form-control form-text" id="edit-keys" name="keys" value="" size="40" maxlength="255" type="text">
      <span class="input-group-btn">
       <button type="submit" class="btn btn-default"><i class="icon glyphicon glyphicon-search" aria-hidden="true"></i></button>
      </span>
      <input class="element-invisible btn btn-primary form-submit" id="edit-submit" name="op" value="Search" type="submit">
   </div>
</form>

<div class="Search-Examples">
<p>&nbsp;Search JBrowse core tracks.<br /><i class="fa fa-1x fa-arrow-circle-up"></i>&nbsp;Search by identifiers or keywords e.g. LFY or AT5G61850 or floral meristem</p>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'Front-Search-Box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3131fa9b-5b38-44ef-b091-71d068767a68';
    $display->content['new-3131fa9b-5b38-44ef-b091-71d068767a68'] = $pane;
    $display->panels['middle'][0] = 'new-3131fa9b-5b38-44ef-b091-71d068767a68';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['jbrowse_search_form'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'search_options_minipanel';
  $mini->category = 'Search Forms';
  $mini->admin_title = 'Search Options Minipanel';
  $mini->admin_description = 'Search options minipanel';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => NULL,
      'default' => NULL,
    ),
    'middle' => array(
      'style' => 'stylizer:Front_Page_Search_Options',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b5a2ab77-006d-47b7-82fe-b11bc5e68d3b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-214661db-8487-47c4-8267-2f1371e2f0c5';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'all_search_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'simple-search',
      'css_class' => 'tab-pane active',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '214661db-8487-47c4-8267-2f1371e2f0c5';
    $display->content['new-214661db-8487-47c4-8267-2f1371e2f0c5'] = $pane;
    $display->panels['middle'][0] = 'new-214661db-8487-47c4-8267-2f1371e2f0c5';
    $pane = new stdClass();
    $pane->pid = 'new-ac34e001-07a6-4a0f-a94b-b94be64f6c28';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'thalemine_search_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'thalemine-search',
      'css_class' => 'tab-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ac34e001-07a6-4a0f-a94b-b94be64f6c28';
    $display->content['new-ac34e001-07a6-4a0f-a94b-b94be64f6c28'] = $pane;
    $display->panels['middle'][1] = 'new-ac34e001-07a6-4a0f-a94b-b94be64f6c28';
    $pane = new stdClass();
    $pane->pid = 'new-80b066b9-8014-4f78-a8c3-431f9a3fc5d2';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'jbrowse_search_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'browser-search',
      'css_class' => 'tab-pane',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '80b066b9-8014-4f78-a8c3-431f9a3fc5d2';
    $display->content['new-80b066b9-8014-4f78-a8c3-431f9a3fc5d2'] = $pane;
    $display->panels['middle'][2] = 'new-80b066b9-8014-4f78-a8c3-431f9a3fc5d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-214661db-8487-47c4-8267-2f1371e2f0c5';
  $mini->display = $display;
  $export['search_options_minipanel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'thalemine_search_form';
  $mini->category = 'Search Forms';
  $mini->admin_title = 'Thalemine Search Form';
  $mini->admin_description = 'Search form for Thalemine index';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => 'stylizer:Search Region 1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0f09c563-2762-4caf-82c2-896261ab5035';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ae067da9-c080-4cb0-8d3c-f0a73ec698ea';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Thalemine Search',
      'title' => '',
      'body' => '<form class="search-form clearfix" action="/search/thalemine" method="post" id="search-form" accept-charset="UTF-8"><div>
   <div class="input-group">
     <input placeholder="Search by names, identifiers, keywords ..." class="form-control form-text" id="edit-keys" name="keys" value="" size="40" maxlength="255" type="text">
      <span class="input-group-btn">
       <button type="submit" class="btn btn-default"><i class="icon glyphicon glyphicon-search" aria-hidden="true"></i></button>
      </span>
      <input class="element-invisible btn btn-primary form-submit" id="edit-submit" name="op" value="Search" type="submit">
   </div>
</form>

<div class="Search-Examples">
<p>&nbsp;Search Thalemine database.<br /><i class="fa fa-1x fa-arrow-circle-up"></i>&nbsp;Search by identifiers or keywords e.g. AT3G24650 or FT or lateral root development</p>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'Front-Search-Box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ae067da9-c080-4cb0-8d3c-f0a73ec698ea';
    $display->content['new-ae067da9-c080-4cb0-8d3c-f0a73ec698ea'] = $pane;
    $display->panels['middle'][0] = 'new-ae067da9-c080-4cb0-8d3c-f0a73ec698ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['thalemine_search_form'] = $mini;

  return $export;
}
