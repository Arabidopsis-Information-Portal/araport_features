<?php
/**
 * @file
 * araport_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function araport_profile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Profile panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Profile',
        'keyword' => 'profile',
        'name' => 'entity:profile2',
        'entity_id' => '1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%profile:field-first-name %profile:field-last-name <small>| %user:name</small>';
  $display->uuid = '35871225-3d2e-41c3-b699-4bbf63156b57';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c8794daa-e3e0-4151-9532-b23451130dc2';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:user_1.uid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c8794daa-e3e0-4151-9532-b23451130dc2';
    $display->content['new-c8794daa-e3e0-4151-9532-b23451130dc2'] = $pane;
    $display->panels['middle'][0] = 'new-c8794daa-e3e0-4151-9532-b23451130dc2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c8794daa-e3e0-4151-9532-b23451130dc2';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}
