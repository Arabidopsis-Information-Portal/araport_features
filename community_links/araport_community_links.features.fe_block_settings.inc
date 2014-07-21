<?php
/**
 * @file
 * araport_community_links.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function araport_community_links_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-post_community_link'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'post_community_link',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'links',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'araport_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'araport_theme',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Post a Link',
    'visibility' => 1,
  );

  $export['views-aip_links-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'aip_links-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'links',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'araport_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'araport_theme',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
