<?php
/**
 * @file
 * araport_answers.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function araport_answers_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_answer_pattern';
  $strongarm->value = 'ask/[node:field-answer-question:nid]/[node:nid]/[node:field-answer-question:title]';
  $export['pathauto_node_answer_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_question_pattern';
  $strongarm->value = 'ask/[node:nid]/[node:title]';
  $export['pathauto_node_question_pattern'] = $strongarm;

  return $export;
}
