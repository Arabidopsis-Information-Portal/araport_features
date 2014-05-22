<?php
/**
 * @file
 * araport_preview2.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function araport_preview2_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-help-menu_about-the-project:about
  $menu_links['menu-help-menu_about-the-project:about'] = array(
    'menu_name' => 'menu-help-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About the Project',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-help-menu_about-the-project:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-help-menu_about:about',
  );
  // Exported menu link: menu-help-menu_about:about
  $menu_links['menu-help-menu_about:about'] = array(
    'menu_name' => 'menu-help-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-help-menu_about:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-help-menu_contact:mailto:araport@jcvi.org
  $menu_links['menu-help-menu_contact:mailto:araport@jcvi.org'] = array(
    'menu_name' => 'menu-help-menu',
    'link_path' => 'mailto:araport@jcvi.org',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-help-menu_contact:mailto:araport@jcvi.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-help-menu_help:node/18
  $menu_links['menu-help-menu_help:node/18'] = array(
    'menu_name' => 'menu-help-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-help-menu_help:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-help-menu_release-notes:release-notes
  $menu_links['menu-help-menu_release-notes:release-notes'] = array(
    'menu_name' => 'menu-help-menu',
    'link_path' => 'release-notes',
    'router_path' => 'release-notes',
    'link_title' => 'Release Notes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-help-menu_release-notes:release-notes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'menu-help-menu_about:about',
  );
  // Exported menu link: user-menu_log-in:user/login
  $menu_links['user-menu_log-in:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'identifier' => 'user-menu_log-in:user/login',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_register:user/register
  $menu_links['user-menu_register:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_register:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('About the Project');
  t('Contact');
  t('Help');
  t('Log in');
  t('Log out');
  t('Register');
  t('Release Notes');
  t('User account');


  return $menu_links;
}
