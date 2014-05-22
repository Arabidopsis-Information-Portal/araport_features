<?php
/**
 * @file
 * araport_preview2.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function araport_preview2_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-help-menu.
  $menus['menu-help-menu'] = array(
    'menu_name' => 'menu-help-menu',
    'title' => 'Help menu',
    'description' => 'The <em>Help</em> menu is provides users easy, quick links to find help.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Help menu');
  t('The <em>Help</em> menu is provides users easy, quick links to find help.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
