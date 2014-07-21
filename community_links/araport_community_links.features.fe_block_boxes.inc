<?php
/**
 * @file
 * araport_community_links.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function araport_community_links_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Post a Link';
  $fe_block_boxes->format = 'formatted_text';
  $fe_block_boxes->machine_name = 'post_community_link';
  $fe_block_boxes->body = '<a href="/node/add/aip-external-link" class="btn btn-lg btn-block btn-success"><i class="glyphicon glyphicon-plus"></i> Post a Link</a>';

  $export['post_community_link'] = $fe_block_boxes;

  return $export;
}
