<?php
/**
 * @file
 * araport_syndication.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function araport_syndication_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'garnet_community_blog_importer-tags-explode';
  $feeds_tamper->importer = 'garnet_community_blog_importer';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Explode';
  $export['garnet_community_blog_importer-tags-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'garnet_community_blog_importer-tags-implode';
  $feeds_tamper->importer = 'garnet_community_blog_importer';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => ',',
    'real_glue' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Implode';
  $export['garnet_community_blog_importer-tags-implode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'garnet_community_blog_importer-tags-keyword_filter';
  $feeds_tamper->importer = 'garnet_community_blog_importer';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'keyword_filter';
  $feeds_tamper->settings = array(
    'words' => 'Global',
    'word_boundaries' => 0,
    'exact' => 0,
    'case_sensitive' => 1,
    'invert' => 0,
    'word_list' => array(
      0 => 'Global',
    ),
    'regex' => FALSE,
    'func' => 'mb_strpos',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Keyword filter';
  $export['garnet_community_blog_importer-tags-keyword_filter'] = $feeds_tamper;

  return $export;
}
