<?php
/**
 * @file
 * new_homepage_06242015.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function new_homepage_06242015_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_app-store:apps/catalog
  $menu_links['main-menu_app-store:apps/catalog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'apps/catalog',
    'router_path' => 'apps/catalog',
    'link_title' => 'App Store',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_app-store:apps/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tools:data',
  );
  // Exported menu link: main-menu_ask-a-question:questions/continue_ask
  $menu_links['main-menu_ask-a-question:questions/continue_ask'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'questions/continue_ask',
    'router_path' => 'questions/continue_ask',
    'link_title' => 'Ask a Question',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ask-a-question:questions/continue_ask',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_help:node/131',
  );
  // Exported menu link: main-menu_browser-comparison:node/61
  $menu_links['main-menu_browser-comparison:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'Browser Comparison',
    'options' => array(
      'attributes' => array(
        'title' => 'Arabidopsis thaliana genome browsers',
      ),
      'identifier' => 'main-menu_browser-comparison:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_help:node/131',
  );
  // Exported menu link: main-menu_faq:faq-page
  $menu_links['main-menu_faq:faq-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faq:faq-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_help:node/131',
  );
  // Exported menu link: main-menu_gbrowse-i-classfa-fa-external-linki-:https://apps.araport.org/gb2/gbrowse/arabidopsis/
  $menu_links['main-menu_gbrowse-i-classfa-fa-external-linki-:https://apps.araport.org/gb2/gbrowse/arabidopsis/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://apps.araport.org/gb2/gbrowse/arabidopsis/',
    'router_path' => '',
    'link_title' => 'GBrowse <i class="fa fa-external-link"></i> ',
    'options' => array(
      'attributes' => array(
        'title' => 'Link to TAIR10-sourced Arabidopsis thaliana GBrowse',
      ),
      'html' => 1,
      'identifier' => 'main-menu_gbrowse-i-classfa-fa-external-linki-:https://apps.araport.org/gb2/gbrowse/arabidopsis/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tools:data',
  );
  // Exported menu link: main-menu_help:node/131
  $menu_links['main-menu_help:node/131'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/131',
    'router_path' => 'node/%',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_help:node/131',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_i-classfa-fa-home-fa-lgi:<front>
  $menu_links['main-menu_i-classfa-fa-home-fa-lgi:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => '<i class="fa fa-home fa-lg"></i>',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
      'identifier' => 'main-menu_i-classfa-fa-home-fa-lgi:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_jbrowse-i-classfa-fa-external-linki-:https://apps.araport.org/jbrowse/?data=arabidopsis&loc=Chr1:24330920..24334428&tracks=TAIR10_genome,TAIR10_genes,MAKER_EST_FLcDNA_est2genome,MAKER_protein2genome&highlight=
  $menu_links['main-menu_jbrowse-i-classfa-fa-external-linki-:https://apps.araport.org/jbrowse/?data=arabidopsis&loc=Chr1:24330920..24334428&tracks=TAIR10_genome,TAIR10_genes,MAKER_EST_FLcDNA_est2genome,MAKER_protein2genome&highlight='] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://apps.araport.org/jbrowse/?data=arabidopsis&loc=Chr1:24330920..24334428&tracks=TAIR10_genome,TAIR10_genes,MAKER_EST_FLcDNA_est2genome,MAKER_protein2genome&highlight=',
    'router_path' => '',
    'link_title' => 'JBrowse <i class="fa fa-external-link"></i> ',
    'options' => array(
      'attributes' => array(
        'title' => 'Link to TAIR10-sourced Arabidopsis thaliana Jbrowse ',
      ),
      'html' => 1,
      'identifier' => 'main-menu_jbrowse-i-classfa-fa-external-linki-:https://apps.araport.org/jbrowse/?data=arabidopsis&loc=Chr1:24330920..24334428&tracks=TAIR10_genome,TAIR10_genes,MAKER_EST_FLcDNA_est2genome,MAKER_protein2genome&highlight=',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tools:data',
  );
  // Exported menu link: main-menu_my-workspace:workspace
  $menu_links['main-menu_my-workspace:workspace'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'workspace',
    'router_path' => 'workspace',
    'link_title' => 'My Workspace',
    'options' => array(
      'attributes' => array(
        'title' => 'Link to user workspace',
      ),
      'identifier' => 'main-menu_my-workspace:workspace',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tools:data',
  );
  // Exported menu link: main-menu_thalemine-i-classfa-fa-external-linki-:http://apps.araport.org/thalemine
  $menu_links['main-menu_thalemine-i-classfa-fa-external-linki-:http://apps.araport.org/thalemine'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://apps.araport.org/thalemine',
    'router_path' => '',
    'link_title' => 'Thalemine <i class="fa fa-external-link"></i> ',
    'options' => array(
      'attributes' => array(
        'title' => 'Arabidopsis-specific Intermine query interface.',
      ),
      'html' => 1,
      'identifier' => 'main-menu_thalemine-i-classfa-fa-external-linki-:http://apps.araport.org/thalemine',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tools:data',
  );
  // Exported menu link: main-menu_thalemine-user-guide:node/63
  $menu_links['main-menu_thalemine-user-guide:node/63'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'Thalemine User Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_thalemine-user-guide:node/63',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_help:node/131',
  );
  // Exported menu link: main-menu_tools:data
  $menu_links['main-menu_tools:data'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data',
    'router_path' => 'data',
    'link_title' => 'Tools',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tools:data',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<i class="fa fa-home fa-lg"></i>');
  t('App Store');
  t('Ask a Question');
  t('Browser Comparison');
  t('FAQ');
  t('GBrowse <i class="fa fa-external-link"></i> ');
  t('Help');
  t('JBrowse <i class="fa fa-external-link"></i> ');
  t('My Workspace');
  t('Thalemine <i class="fa fa-external-link"></i> ');
  t('Thalemine User Guide');
  t('Tools');


  return $menu_links;
}
