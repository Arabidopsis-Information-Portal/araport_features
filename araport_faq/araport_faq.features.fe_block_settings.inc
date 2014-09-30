<?php
/**
 * @file
 * araport_faq.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function araport_faq_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['faq-faq_categories'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'faq_categories',
    'module' => 'faq',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'araport_theme' => array(
        'region' => '',
        'status' => 0,
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
    'visibility' => 0,
  );

  $export['views-faq-faq_random'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'faq-faq_random',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'araport_theme' => array(
        'region' => '',
        'status' => 0,
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
    'visibility' => 0,
  );

  $export['views-faq-faq_recent'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'faq-faq_recent',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'araport_theme' => array(
        'region' => '',
        'status' => 0,
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
    'visibility' => 0,
  );

  return $export;
}
