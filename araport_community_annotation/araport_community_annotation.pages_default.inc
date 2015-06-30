<?php
/**
 * @file
 * araport_community_annotation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function araport_community_annotation_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'community_annotation';
  $page->task = 'page';
  $page->admin_title = 'Community Annotation';
  $page->admin_description = '';
  $page->path = 'community/annotation';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_community_annotation__panel_context_7a715bb3-5ad5-4d23-87e8-7f478e204571';
  $handler->task = 'page';
  $handler->subtask = 'community_annotation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Community Annotation';
  $display->uuid = '3f8943bb-bb77-42f5-9682-8d07b210ad7d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-95217db1-ddb7-4268-9415-7b251bce02a2';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'To begin',
      'body' => '* Register to become an Araport Community Curator
* Receive login credentials from Araport
* Familiarize yourself with the <a href="http://genomearchitect.org/web_apollo_user_guide">Web Apollo User Guide</a> to learn how to manually curate in Web Apollo
* Sign in to Web Apollo and start working on your favourite genes
* <a href="/contact">Contact us</a> if you have any further questions',
      'format' => 'formatted_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95217db1-ddb7-4268-9415-7b251bce02a2';
    $display->content['new-95217db1-ddb7-4268-9415-7b251bce02a2'] = $pane;
    $display->panels['left'][0] = 'new-95217db1-ddb7-4268-9415-7b251bce02a2';
    $pane = new stdClass();
    $pane->pid = 'new-61c78676-85e0-4b1e-b230-bdd5b419f99e';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 9,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Annotation Guidelines',
      'body' => '<small>Now that you are familiar with the environment of the Web Apollo and ready to start, please curate in accordance with the following guidelines:</small>

<dl>
<dt>Adding functional information to an existing gene</dt>
<dd>
<ul><li>Add functional description (metadata) about the existing genes in the right-click Information Editor (see below).</li></ul>
<ul><li>Place the information in the ‘gene\' section except for the isoform-specific function which should be placed in the ‘mRNA’ section.</li></ul>
</dd>

<dt>Modifying the gene structure of an existing gene</dt>
<dd>
<ul><li>You may use existing evidence tracks or upload your own BAM/GFF files <a href=https://www.araport.org/help/faq#t349n244>(How?)</a> to modify gene structure. If you choose to use a external evidence, you must provide a copy of the evidence to Araport.</li>
<li>Record information about your modifications in the \'gene\' section of the Information Editor.</li></ul>
</dd>

<dt>Adding a new isoform</dt>
<dd>
<ul><li>Move the existing isoform to the user-created annotations track and <b>duplicate</b> the model. Otherwise the original isoform will be replaced and NOT be included in the final set.</li>
<li>Perform gene structure modifications and name each new isoform with the suffix ‘-2’, ‘-1’, etc.</li></ul>
</dd>

<dt>Adding a new gene</dt>
<dd>
<ul><li>Add information to both the ‘gene’ and ‘mRNA’ sections of the Information Editor (below).</li></ul>
</dd>

<dt>Delete a gene</dt>
<dd>
<ul><li>Elevate the gene prediction to the User-created annotations track.</li>
<li>In the Information Editor Status section, select the "Delete” radio button. Add information that supports your claim in the comments section.</li></ul>
</dd>
</dl>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '61c78676-85e0-4b1e-b230-bdd5b419f99e';
    $display->content['new-61c78676-85e0-4b1e-b230-bdd5b419f99e'] = $pane;
    $display->panels['left'][1] = 'new-61c78676-85e0-4b1e-b230-bdd5b419f99e';
    $pane = new stdClass();
    $pane->pid = 'new-417af293-f81f-437b-b2cf-99f7b2bdc664';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 9,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'The Information Editor',
      'title' => 'The Information Editor',
      'body' => '<dl>
The default is empty so you will see most of the fields blank. Below is a sample filled form for illustration purposes.
<img src="/sites/default/files/WebApolloInformationEditor.png" title="A sample illustrating how to fill the information editor" alt="Web Apollo Information Editor" />
</dl>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '417af293-f81f-437b-b2cf-99f7b2bdc664';
    $display->content['new-417af293-f81f-437b-b2cf-99f7b2bdc664'] = $pane;
    $display->panels['left'][2] = 'new-417af293-f81f-437b-b2cf-99f7b2bdc664';
    $pane = new stdClass();
    $pane->pid = 'new-78b5554f-756f-4e4c-ac83-1e11cf0326ee';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 9,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Curator Register Button',
      'title' => '',
      'body' => '<a href="/community/annotation/register" class="btn btn-primary btn-lg btn-block">Register as a Curator</a>',
      'format' => 'formatted_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78b5554f-756f-4e4c-ac83-1e11cf0326ee';
    $display->content['new-78b5554f-756f-4e4c-ac83-1e11cf0326ee'] = $pane;
    $display->panels['right'][0] = 'new-78b5554f-756f-4e4c-ac83-1e11cf0326ee';
    $pane = new stdClass();
    $pane->pid = 'new-7b1f39cd-392f-4213-8f75-b01730df6f81';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 9,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Access WebApollo',
      'title' => '',
      'body' => '<a href="https://apps.araport.org/WebApollo/" class="btn btn-primary btn-lg btn-block">Access WebApollo</a>',
      'format' => 'formatted_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b1f39cd-392f-4213-8f75-b01730df6f81';
    $display->content['new-7b1f39cd-392f-4213-8f75-b01730df6f81'] = $pane;
    $display->panels['right'][1] = 'new-7b1f39cd-392f-4213-8f75-b01730df6f81';
    $pane = new stdClass();
    $pane->pid = 'new-29208627-16ee-46b9-8404-7efa282e1302';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Header',
      'title' => '',
      'body' => '<p class="lead">Greetings <i>Arabidopsis</i> researchers!</p>
Welcome to the  Araport Curation Community Portal. The portal uses <a href="http://apollo.berkeleybop.org/">Web Apollo</a> which has a JBrowse interface and allows users to edit gene models based upon various sources of evidence available as browser tracks. Web Apollo allows changes made by one user are instantly viewable by others, allowing the community to see and share annotation updates in real-time - just like Google Doc.
What will happen to your curation? Curators at Araport will regularly review community curation, and publish as a community curation track at <a href="https://apps.araport.org/jbrowse/?data=arabidopsis" target="_blank">JBrowse</a>, and attribute the contributors.',
      'format' => 'formatted_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '29208627-16ee-46b9-8404-7efa282e1302';
    $display->content['new-29208627-16ee-46b9-8404-7efa282e1302'] = $pane;
    $display->panels['top'][0] = 'new-29208627-16ee-46b9-8404-7efa282e1302';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['community_annotation'] = $page;

  return $pages;

}
