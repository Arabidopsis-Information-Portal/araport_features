<?php
/**
 * @file
 * araport_syndication.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function araport_syndication_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'garnet_community_blog_importer';
  $feeds_importer->config = array(
    'name' => 'GARNet Community Blog Importer',
    'description' => 'GARNet Community Blog Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'author_name',
            'target' => 'field_remote_author',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'tags',
            'target' => 'field_garnet_category',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'url',
            'target' => 'field_syndicated_url',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 1,
          ),
          7 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'garnet_blog_post',
      ),
    ),
    'content_type' => 'feed',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['garnet_community_blog_importer'] = $feeds_importer;

  return $export;
}
