<?php

$view = new view();
$view->name = 'event';
$view->description = 'Includes all view that are related to events';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Event';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Event';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Event Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'sbir_standard',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '1000',
);
/* Sort criterion: Content: Event Date - end date (field_event_date:value2) */
$handler->display->display_options['sorts']['field_event_date_value2']['id'] = 'field_event_date_value2';
$handler->display->display_options['sorts']['field_event_date_value2']['table'] = 'field_data_field_event_date';
$handler->display->display_options['sorts']['field_event_date_value2']['field'] = 'field_event_date_value2';
$handler->display->display_options['sorts']['field_event_date_value2']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'sbir_event' => 'sbir_event',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Event Date - end date (field_event_date:value2) */
$handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['operator'] = '<=';
$handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
$handler->display->display_options['filters']['field_event_date_value2']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
$handler->display->display_options['filters']['field_event_date_value2']['year_range'] = '-10:+10';
/* Filter criterion: Content: Event Date -  start date (field_event_date) */
$handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
$handler->display->display_options['filters']['field_event_date_value']['operator'] = '<';
$handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
$handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
$handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-10:+10';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

/* Display: Recent Events */
$handler = $view->new_display('panel_pane', 'Recent Events', 'recent');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Recent Events';
$handler->display->display_options['display_description'] = 'Recent Events';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit Event';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Event Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'sbir_standard',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '1000',
);
/* Field: Content: ICS File */
$handler->display->display_options['fields']['field_ics_file']['id'] = 'field_ics_file';
$handler->display->display_options['fields']['field_ics_file']['table'] = 'field_data_field_ics_file';
$handler->display->display_options['fields']['field_ics_file']['field'] = 'field_ics_file';
$handler->display->display_options['fields']['field_ics_file']['label'] = '';
$handler->display->display_options['fields']['field_ics_file']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ics_file']['alter']['text'] = '<a title="Add to Calendar" href="[field_ics_file]">Add to Calendar</a>';
$handler->display->display_options['fields']['field_ics_file']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ics_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ics_file']['type'] = 'file_url_plain';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'sbir_event' => 'sbir_event',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Event Date - end date (field_event_date:value2) */
$handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2']['operator'] = '<=';
$handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
$handler->display->display_options['filters']['field_event_date_value2']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
$handler->display->display_options['filters']['field_event_date_value2']['year_range'] = '-10:+10';
/* Filter criterion: Content: Event Date -  start date (field_event_date) */
$handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
$handler->display->display_options['filters']['field_event_date_value']['operator'] = '<';
$handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
$handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
$handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-10:+10';
/* Filter criterion: Content: Event Date - end date (field_event_date:value2) */
$handler->display->display_options['filters']['field_event_date_value2_1']['id'] = 'field_event_date_value2_1';
$handler->display->display_options['filters']['field_event_date_value2_1']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value2_1']['field'] = 'field_event_date_value2';
$handler->display->display_options['filters']['field_event_date_value2_1']['operator'] = '>';
$handler->display->display_options['filters']['field_event_date_value2_1']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_event_date_value2_1']['default_date'] = 'now - 730 day';
$handler->display->display_options['pane_category']['name'] = 'SBIR Views';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;

/* Display: Upcoming Events */
$handler = $view->new_display('panel_pane', 'Upcoming Events', 'upcoming');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'Upcoming Events';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit Event';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Event Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'sbir_standard_long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '1000',
);
/* Field: Content: ICS File */
$handler->display->display_options['fields']['field_ics_file']['id'] = 'field_ics_file';
$handler->display->display_options['fields']['field_ics_file']['table'] = 'field_data_field_ics_file';
$handler->display->display_options['fields']['field_ics_file']['field'] = 'field_ics_file';
$handler->display->display_options['fields']['field_ics_file']['label'] = '';
$handler->display->display_options['fields']['field_ics_file']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ics_file']['alter']['text'] = '<a title="Add to Calendar" href="[field_ics_file]">Add to Calendar</a>';
$handler->display->display_options['fields']['field_ics_file']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ics_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ics_file']['type'] = 'file_url_plain';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Event Date -  start date (field_event_date) */
$handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'sbir_event' => 'sbir_event',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Event Date -  start date (field_event_date) */
$handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
$handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
$handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
$handler->display->display_options['filters']['field_event_date_value']['operator'] = '>';
$handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
$handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
$handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-10:+10';
$handler->display->display_options['pane_category']['name'] = 'SBIR Views';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;

/* Display: Event Details */
$handler = $view->new_display('panel_pane', 'Event Details', 'details');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Event Details';
$handler->display->display_options['display_description'] = 'Event Details';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Event Date */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'sbir_standard',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: ICS File */
$handler->display->display_options['fields']['field_ics_file']['id'] = 'field_ics_file';
$handler->display->display_options['fields']['field_ics_file']['table'] = 'field_data_field_ics_file';
$handler->display->display_options['fields']['field_ics_file']['field'] = 'field_ics_file';
$handler->display->display_options['fields']['field_ics_file']['label'] = '';
$handler->display->display_options['fields']['field_ics_file']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_ics_file']['alter']['text'] = '<a title="Add to Calendar" href="[field_ics_file]">Add to Calendar</a>';
$handler->display->display_options['fields']['field_ics_file']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_ics_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_ics_file']['type'] = 'file_url_plain';
/* Field: Content: Venue */
$handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
$handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
$handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
$handler->display->display_options['fields']['field_venue']['label'] = '';
$handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
/* Field: Content: Street Address */
$handler->display->display_options['fields']['field_street_address']['id'] = 'field_street_address';
$handler->display->display_options['fields']['field_street_address']['table'] = 'field_data_field_street_address';
$handler->display->display_options['fields']['field_street_address']['field'] = 'field_street_address';
$handler->display->display_options['fields']['field_street_address']['label'] = '';
$handler->display->display_options['fields']['field_street_address']['element_label_colon'] = FALSE;
/* Field: Content: City */
$handler->display->display_options['fields']['field_city']['id'] = 'field_city';
$handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
$handler->display->display_options['fields']['field_city']['field'] = 'field_city';
$handler->display->display_options['fields']['field_city']['label'] = '';
$handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
/* Field: Content: State */
$handler->display->display_options['fields']['field_state']['id'] = 'field_state';
$handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
$handler->display->display_options['fields']['field_state']['field'] = 'field_state';
$handler->display->display_options['fields']['field_state']['label'] = '';
$handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
/* Field: Content: Zip Code */
$handler->display->display_options['fields']['field_zip_code']['id'] = 'field_zip_code';
$handler->display->display_options['fields']['field_zip_code']['table'] = 'field_data_field_zip_code';
$handler->display->display_options['fields']['field_zip_code']['field'] = 'field_zip_code';
$handler->display->display_options['fields']['field_zip_code']['label'] = '';
$handler->display->display_options['fields']['field_zip_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_zip_code']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_city], [field_state] [field_zip_code]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '150',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'sbir_event' => 'sbir_event',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['pane_category']['name'] = 'SBIR Views';
$handler->display->display_options['pane_category']['weight'] = '0';
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;
