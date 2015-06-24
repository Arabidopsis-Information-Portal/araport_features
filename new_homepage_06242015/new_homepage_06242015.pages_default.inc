<?php
/**
 * @file
 * new_homepage_06242015.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function new_homepage_06242015_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'new_homepage';
  $page->task = 'page';
  $page->admin_title = 'New Homepage';
  $page->admin_description = 'New Homepage Design';
  $page->path = 'optionE';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_new_homepage__panel_context_16bac9a8-a665-4fbb-9acb-8e4e8f4196f5';
  $handler->task = 'page';
  $handler->subtask = 'new_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 4,
          1 => 3,
          2 => 'main-row',
          3 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'araport_whereabouts',
          1 => 'conferences_and_workshops',
          2 => 'job_posting',
          3 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Job Postings',
        'width' => '25.970173046532672',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'job_posting' => array(
        'type' => 'region',
        'title' => 'News and Events',
        'width' => '28.370342453687396',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'conferences_and_workshops' => array(
        'type' => 'region',
        'title' => 'Conferences and Workshops',
        'width' => '24.753552411158825',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'araport_whereabouts' => array(
        'type' => 'region',
        'title' => 'Araport Whereabouts',
        'width' => '20.90593208862199',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'box_1',
          1 => 'jbrowse_box',
          2 => 'science_apps_box',
          3 => 'blast_box',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'box_1' => array(
        'type' => 'region',
        'title' => 'Thalemine Box',
        'width' => '20.97932384262825',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'jbrowse_box' => array(
        'type' => 'region',
        'title' => 'JBrowse Box',
        'width' => '24.959396982177992',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'science_apps_box' => array(
        'type' => 'region',
        'title' => 'Blast Box',
        'width' => '26.968350282713537',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'blast_box' => array(
        'type' => 'region',
        'title' => 'App Store Box',
        'width' => '27.092928892480213',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'search_options',
          1 => 'welcome_box',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'search_options' => array(
        'type' => 'region',
        'title' => 'Search Options',
        'width' => '62.90658436528234',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'welcome_box' => array(
        'type' => 'region',
        'title' => 'Welcome Box',
        'width' => '37.09341563471766',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'bottom' => NULL,
      'job_posting' => NULL,
      'conferences_and_workshops' => NULL,
      'araport_whereabouts' => NULL,
      'box_1' => NULL,
      'jbrowse_box' => NULL,
      'science_apps_box' => NULL,
      'blast_box' => NULL,
      'search_options' => array(
        'style' => 'Main_Search_Region',
      ),
      'welcome_box' => NULL,
    ),
    'search_options' => array(
      'style' => 'stylizer',
    ),
    'welcome_box' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4c8a6f60-f233-449c-8d94-a075befa6942';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c4b8c283-17f6-4526-ae49-6032364cdd78';
    $pane->panel = 'araport_whereabouts';
    $pane->type = 'views';
    $pane->subtype = 'news_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Araport News',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'community-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4b8c283-17f6-4526-ae49-6032364cdd78';
    $display->content['new-c4b8c283-17f6-4526-ae49-6032364cdd78'] = $pane;
    $display->panels['araport_whereabouts'][0] = 'new-c4b8c283-17f6-4526-ae49-6032364cdd78';
    $pane = new stdClass();
    $pane->pid = 'new-8aaecbc5-848b-43a0-8c51-568964febdf5';
    $pane->panel = 'blast_box';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Top Box 3 Title',
      'title' => '',
      'body' => '<div class="top-box">
<h2>APP STORE</h2>
</div>

<div class="top-box3-block" onclick="window.open(\'apps/catalog\')" style="cursor: pointer;"></div>

<div class="top-box-desc" onclick="window.open(\'apps/catalog\')" style="cursor: pointer;"><p>Click to build your own analysis tools and share your data.</p></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'top-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8aaecbc5-848b-43a0-8c51-568964febdf5';
    $display->content['new-8aaecbc5-848b-43a0-8c51-568964febdf5'] = $pane;
    $display->panels['blast_box'][0] = 'new-8aaecbc5-848b-43a0-8c51-568964febdf5';
    $pane = new stdClass();
    $pane->pid = 'new-5bdf5f0f-db5d-42d9-827b-a39c25aaac90';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Featured Topic',
      'title' => '',
      'body' => '<div class="featured-topic">
<a href="arabidopsis-firsts-table"><h2>Featured Topic: Arabidopsis Firsts</h2></a>
<p>This topic captures responses to the question posed to the Newsgroup last month: "What are some seminal contributions to plant biology and to science in general coming first from Arabidopsis?" Comments and additions are welcome. Please&nbsp;<a class="comment-button" href="user/register">REGISTER&nbsp;<i class="fa fa-pencil-square"></a>&nbsp;or&nbsp;<a class="comment-button" href="user/login">LOGIN&nbsp;<i class="fa fa-lock"></a> to post comments.</p>

</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5bdf5f0f-db5d-42d9-827b-a39c25aaac90';
    $display->content['new-5bdf5f0f-db5d-42d9-827b-a39c25aaac90'] = $pane;
    $display->panels['bottom'][0] = 'new-5bdf5f0f-db5d-42d9-827b-a39c25aaac90';
    $pane = new stdClass();
    $pane->pid = 'new-9af7d717-4af1-45ad-aaee-d7ed2244f77e';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'frontpage_arabidopsis_firsts_table';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9af7d717-4af1-45ad-aaee-d7ed2244f77e';
    $display->content['new-9af7d717-4af1-45ad-aaee-d7ed2244f77e'] = $pane;
    $display->panels['bottom'][1] = 'new-9af7d717-4af1-45ad-aaee-d7ed2244f77e';
    $pane = new stdClass();
    $pane->pid = 'new-be582c47-0d59-479a-bb3b-8b1df456b968';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Front More Linkout',
      'title' => '',
      'body' => '<a class="registration-button" href="arabidopsis-firsts-table">VIEW MORE&nbsp;<i class="fa fa-forumbee"></a>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'be582c47-0d59-479a-bb3b-8b1df456b968';
    $display->content['new-be582c47-0d59-479a-bb3b-8b1df456b968'] = $pane;
    $display->panels['bottom'][2] = 'new-be582c47-0d59-479a-bb3b-8b1df456b968';
    $pane = new stdClass();
    $pane->pid = 'new-bb4f454e-b7cb-40ad-a8e8-e6291742080e';
    $pane->panel = 'box_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Top Box 1',
      'title' => '',
      'body' => '<div class="top-box">
<h2>THALEMINE</h2>
</div>

<div class="top-box1-block" onclick="window.open(\'https://apps.araport.org/thalemine/begin.do\')";" style="cursor: pointer;"></div>

<div class="top-box-desc" onclick="window.open(\'https://apps.araport.org/thalemine/begin.do\')" style="cursor: pointer;"><p>Click to analyze gene lists or drill down to gene reports.</p></div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bb4f454e-b7cb-40ad-a8e8-e6291742080e';
    $display->content['new-bb4f454e-b7cb-40ad-a8e8-e6291742080e'] = $pane;
    $display->panels['box_1'][0] = 'new-bb4f454e-b7cb-40ad-a8e8-e6291742080e';
    $pane = new stdClass();
    $pane->pid = 'new-26d2d5b1-f30a-4633-a0de-1b3fdecfec7c';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'job_postings_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Job Postings',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'community-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26d2d5b1-f30a-4633-a0de-1b3fdecfec7c';
    $display->content['new-26d2d5b1-f30a-4633-a0de-1b3fdecfec7c'] = $pane;
    $display->panels['center'][0] = 'new-26d2d5b1-f30a-4633-a0de-1b3fdecfec7c';
    $pane = new stdClass();
    $pane->pid = 'new-a63e20e0-f976-4808-a4ea-2b4259698eec';
    $pane->panel = 'conferences_and_workshops';
    $pane->type = 'views';
    $pane->subtype = 'conferences_and_meetings_titles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Conferences and Meetings',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'community-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a63e20e0-f976-4808-a4ea-2b4259698eec';
    $display->content['new-a63e20e0-f976-4808-a4ea-2b4259698eec'] = $pane;
    $display->panels['conferences_and_workshops'][0] = 'new-a63e20e0-f976-4808-a4ea-2b4259698eec';
    $pane = new stdClass();
    $pane->pid = 'new-f81db044-9229-4870-85b2-3a58f047f0c3';
    $pane->panel = 'jbrowse_box';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Top Box 2',
      'title' => '',
      'body' => '<div class="top-box">
<h2>JBROWSE</h2>
</div>

<div class="top-box2-block" onclick="window.open(\'https://apps.araport.org/jbrowse/?data=arabidopsis&loc=Chr1%3A24330919..24334427&tracks=TAIR10_genome%2CTAIR10_genes%2CMAKER_EST_FLcDNA_est2genome%2CMAKER_protein2genome&highlight=\')" style="cursor: pointer;"></div>

<div class="top-box-desc" onclick="window.open(\'https://apps.araport.org/jbrowse/?data=arabidopsis&loc=Chr1%3A24330919..24334427&tracks=TAIR10_genome%2CTAIR10_genes%2CMAKER_EST_FLcDNA_est2genome%2CMAKER_protein2genome&highlight=\')" style="cursor: pointer;"><p>Click to browse gene structures and other annotation.</p></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'top-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f81db044-9229-4870-85b2-3a58f047f0c3';
    $display->content['new-f81db044-9229-4870-85b2-3a58f047f0c3'] = $pane;
    $display->panels['jbrowse_box'][0] = 'new-f81db044-9229-4870-85b2-3a58f047f0c3';
    $pane = new stdClass();
    $pane->pid = 'new-b1726d3f-2c5d-4050-a833-caa8ae0eadca';
    $pane->panel = 'job_posting';
    $pane->type = 'views';
    $pane->subtype = 'community_overview_news_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Community News',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'community-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1726d3f-2c5d-4050-a833-caa8ae0eadca';
    $display->content['new-b1726d3f-2c5d-4050-a833-caa8ae0eadca'] = $pane;
    $display->panels['job_posting'][0] = 'new-b1726d3f-2c5d-4050-a833-caa8ae0eadca';
    $pane = new stdClass();
    $pane->pid = 'new-efc6a258-0d27-4e7b-8a30-6df6ea6e8170';
    $pane->panel = 'science_apps_box';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Top Box 4 Title',
      'title' => '',
      'body' => '<div class="top-box">
<h2>BLAST</h2>
</div>

<div class="top-box4-block" onclick="window.open(\'welcome-blast\')" style="cursor: pointer;"></div>

<div class="top-box-desc" onclick="window.open(\'welcome-blast\')" style="cursor: pointer;"><p>Click to align your sequence to the Col-0 genome.</p></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'top-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'efc6a258-0d27-4e7b-8a30-6df6ea6e8170';
    $display->content['new-efc6a258-0d27-4e7b-8a30-6df6ea6e8170'] = $pane;
    $display->panels['science_apps_box'][0] = 'new-efc6a258-0d27-4e7b-8a30-6df6ea6e8170';
    $pane = new stdClass();
    $pane->pid = 'new-20c78078-5550-4758-8af3-34c9511b7b05';
    $pane->panel = 'search_options';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Search_Option_Tabs',
      'title' => '',
      'body' => '<ul class="nav nav-tabs" role="tablist">
    <li role="presentation" class="active"><a href="#simple-search" aria-controls="simple-search" role="tab" data-toggle="tab">ALL</a></li>
    <li role="presentation"><a href="#thalemine-search" aria-controls="thalemine-search" role="tab" data-toggle="tab">THALEMINE</a></li>
    <li role="presentation"><a href="#browser-search" aria-controls="browser-search" role="tab" data-toggle="tab">JBROWSE</a></li>
</ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20c78078-5550-4758-8af3-34c9511b7b05';
    $display->content['new-20c78078-5550-4758-8af3-34c9511b7b05'] = $pane;
    $display->panels['search_options'][0] = 'new-20c78078-5550-4758-8af3-34c9511b7b05';
    $pane = new stdClass();
    $pane->pid = 'new-78b05d54-3a88-4dff-9ed7-30b1ce76e25c';
    $pane->panel = 'search_options';
    $pane->type = 'panels_mini';
    $pane->subtype = 'search_options_minipanel';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78b05d54-3a88-4dff-9ed7-30b1ce76e25c';
    $display->content['new-78b05d54-3a88-4dff-9ed7-30b1ce76e25c'] = $pane;
    $display->panels['search_options'][1] = 'new-78b05d54-3a88-4dff-9ed7-30b1ce76e25c';
    $pane = new stdClass();
    $pane->pid = 'new-816982b5-1ae9-4e74-80b2-afe4cd2993d0';
    $pane->panel = 'welcome_box';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Welcome Box',
      'title' => '',
      'body' => '<div class="frontpage-welcome-region">
<h2>New to Araport?</h2>
<p>Araport is a one-stop-shop for <em>Arabidopsis thaliana</em> genomics. Araport offers gene and protein reports with orthology, expression, interactions and the latest annotation, plus analysis tools, community apps, and web services. Araport is 100% free and open-source. Registered members can save their analysis, publish science apps, and post announcements. <a class="right-side-readmore" href="about">READ MORE&nbsp;<i class="fa fa-dedent "></p>

<div class="frontpage-registration-buttons">
<a class="registration-button" href="user/register">REGISTER&nbsp;<i class="fa fa-pencil-square"></a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a class="registration-button" href="user/login">LOGIN&nbsp;<i class="fa fa-lock"></a>
</div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '816982b5-1ae9-4e74-80b2-afe4cd2993d0';
    $display->content['new-816982b5-1ae9-4e74-80b2-afe4cd2993d0'] = $pane;
    $display->panels['welcome_box'][0] = 'new-816982b5-1ae9-4e74-80b2-afe4cd2993d0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['new_homepage'] = $page;

  return $pages;

}
