<?php
$view = new view();
$view->name = 'home_page';
$view->description = 'Includes views that appear on the home page';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Home Page';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Home Page';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'panelizer_node_view';
$handler->display->display_options['row_options']['render_anything'] = 0;
/* Relationship: Nodequeue: Queue */
$handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
$handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
$handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
  'home_page_blocks' => 'home_page_blocks',
  'success_stories' => 0,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Nodequeue: Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

/* Display: Left Blocks */
$handler = $view->new_display('panel_pane', 'Left Blocks', 'panel_pane_1');
$handler->display->display_options['display_description'] = 'Left Blocks';
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
