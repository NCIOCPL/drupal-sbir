<?php

$view = new view();
$view->name = 'banner';
$view->description = 'A View that displays a banner';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Banner';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Dummy Text';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Dummy Text';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Field: Content: Banner */
$handler->display->display_options['fields']['field_banner']['id'] = 'field_banner';
$handler->display->display_options['fields']['field_banner']['table'] = 'field_data_field_banner';
$handler->display->display_options['fields']['field_banner']['field'] = 'field_banner';
$handler->display->display_options['fields']['field_banner']['label'] = '';
$handler->display->display_options['fields']['field_banner']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_banner']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_banner']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit Banner';
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
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'banner');
