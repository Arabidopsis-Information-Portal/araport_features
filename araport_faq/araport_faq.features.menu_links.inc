<?php
/**
 * @file
 * araport_faq.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function araport_faq_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-help-menu_faq:faq-page
  $menu_links['menu-help-menu_faq:faq-page'] = array(
    'menu_name' => 'menu-help-menu',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-help-menu_faq:faq-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'menu-help-menu_help:node/18',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');


  return $menu_links;
}
