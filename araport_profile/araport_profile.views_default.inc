<?php
/**
 * @file
 * araport_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function araport_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'profile' => 'profile',
  );
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: Profile: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<b>Phone</b> <a href="tel:[field_phone]">[field_phone]</a><br>';
  /* Field: Profile: Mobile phone */
  $handler->display->display_options['fields']['field_mobile_phone']['id'] = 'field_mobile_phone';
  $handler->display->display_options['fields']['field_mobile_phone']['table'] = 'field_data_field_mobile_phone';
  $handler->display->display_options['fields']['field_mobile_phone']['field'] = 'field_mobile_phone';
  $handler->display->display_options['fields']['field_mobile_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_mobile_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mobile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mobile_phone']['alter']['text'] = '<b>Mobile</b> <a href="tel:[field_mobile_phone]">[field_mobile_phone]</a><br>';
  /* Field: Profile: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  /* Field: Profile: State/Province */
  $handler->display->display_options['fields']['field_state_province']['id'] = 'field_state_province';
  $handler->display->display_options['fields']['field_state_province']['table'] = 'field_data_field_state_province';
  $handler->display->display_options['fields']['field_state_province']['field'] = 'field_state_province';
  $handler->display->display_options['fields']['field_state_province']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_state_province']['exclude'] = TRUE;
  /* Field: Profile: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = '<address>
<strong>Location</strong><br>
[field_city], [field_state_province], [field_country]
</address>';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  /* Field: Profile: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Profile: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<address>
<strong>Full name</strong><br>
[field_first_name] [field_last_name]<br><br>
[field_phone]
[field_mobile_phone]
</address>';
  /* Field: Profile: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['text'] = '[field_department]<br>';
  /* Field: Profile: Occupation */
  $handler->display->display_options['fields']['field_occupation']['id'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['table'] = 'field_data_field_occupation';
  $handler->display->display_options['fields']['field_occupation']['field'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_occupation']['exclude'] = TRUE;
  /* Field: Profile: Company or Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution']['alter']['text'] = '<address>
<strong>[field_institution]</strong><br>
[field_department]
<i>[field_occupation]</i>
</address>';
  /* Field: Profile: Funding agencies */
  $handler->display->display_options['fields']['field_funding_agencies']['id'] = 'field_funding_agencies';
  $handler->display->display_options['fields']['field_funding_agencies']['table'] = 'field_data_field_funding_agencies';
  $handler->display->display_options['fields']['field_funding_agencies']['field'] = 'field_funding_agencies';
  $handler->display->display_options['fields']['field_funding_agencies']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_funding_agencies']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_agencies']['empty'] = '<i>Not specified</i>';
  $handler->display->display_options['fields']['field_funding_agencies']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_funding_agencies']['separator'] = '<br>';
  /* Field: Profile: Research area(s) */
  $handler->display->display_options['fields']['field_research_areas']['id'] = 'field_research_areas';
  $handler->display->display_options['fields']['field_research_areas']['table'] = 'field_data_field_research_areas';
  $handler->display->display_options['fields']['field_research_areas']['field'] = 'field_research_areas';
  $handler->display->display_options['fields']['field_research_areas']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_research_areas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_research_areas']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_research_areas']['alter']['text'] = '<h5>Research areas</h5>
[field_research_areas]';
  $handler->display->display_options['fields']['field_research_areas']['empty'] = '<i>Not specified</i>';
  $handler->display->display_options['fields']['field_research_areas']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_research_areas']['multi_type'] = 'ul';
  /* Field: Output HTML */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Output HTML';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
  <div class="col-md-6">
    <h3>Personal info</h3>
    <hr>
    <div class="row">
      <div class="col-xs-6">
        [picture]
      </div>
      <div class="col-xs-6">
        [field_last_name]
        [field_country]
      </div>
    </div>
  </div>

  <div class="col-md-6">
    <h3>Professional info</h3>
    <hr>
    <h4>Company/Institution</h4>
    [field_institution]
    <h4>Funding agencies</h4>
    [field_funding_agencies]
    <h4>Research areas</h4>
    [field_research_areas]
  </div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['user_profile'] = $view;

  return $export;
}
