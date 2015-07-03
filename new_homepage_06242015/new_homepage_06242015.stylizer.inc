<?php
/**
 * @file
 * new_homepage_06242015.stylizer.inc
 */

/**
 * Implements hook_default_stylizer().
 */
function new_homepage_06242015_default_stylizer() {
  $export = array();

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'Front_Page_Search_Options';
  $style->admin_title = 'Front Page Search Options';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'Front_Page_Search_Options',
    'style_base' => 'region_plain_box',
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#000000',
    ),
    'font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => '',
      'style' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
  );
  $export['Front_Page_Search_Options'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'Main_Register_Region';
  $style->admin_title = 'Main Register Region';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'Main_Register_Region',
    'style_base' => 'region_plain_box',
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#000000',
    ),
    'font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => '',
      'style' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
  );
  $export['Main_Register_Region'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'Main_Search_Region';
  $style->admin_title = 'Main Search Region';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'Main_Search_Region',
    'style_base' => 'region_plain_box',
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#000000',
    ),
    'font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => '',
      'style' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
  );
  $export['Main_Search_Region'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'Search Region 1';
  $style->admin_title = 'Search Region 1';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'Search Region 1',
    'style_base' => 'region_plain_box',
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
      'border' => '#000000',
    ),
    'font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => '',
      'style' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
  );
  $export['Search Region 1'] = $style;

  return $export;
}
