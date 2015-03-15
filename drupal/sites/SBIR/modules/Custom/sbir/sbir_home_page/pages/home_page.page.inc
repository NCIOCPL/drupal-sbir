<?php

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'home_page';
$page->task = 'page';
$page->admin_title = 'Home Page';
$page->admin_description = 'Home Page';
$page->path = 'home';
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
$handler->name = 'page_home_page_panel_context';
$handler->task = 'page';
$handler->subtask = 'home_page';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Home Page',
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
$display->layout = '12_twocol_8_4';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
    'left' => NULL,
    'right' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = 'd5ef9c42-7078-4b99-8672-3445cfae2f0f';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-8acab359-896d-4e8c-a1c8-096a772dd544';
$pane->panel = 'left';
$pane->type = 'views_panes';
$pane->subtype = 'home_page-left_blocks';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 1,
  'override_title_text' => '',
  'override_title_heading' => 'h1',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '8acab359-896d-4e8c-a1c8-096a772dd544';
$display->content['new-8acab359-896d-4e8c-a1c8-096a772dd544'] = $pane;
$display->panels['left'][0] = 'new-8acab359-896d-4e8c-a1c8-096a772dd544';
$pane = new stdClass();
$pane->pid = 'new-825888a5-46b6-4a16-96fd-08accad25bf4';
$pane->panel = 'right';
$pane->type = 'views_panes';
$pane->subtype = 'announcement-latest';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '825888a5-46b6-4a16-96fd-08accad25bf4';
$display->content['new-825888a5-46b6-4a16-96fd-08accad25bf4'] = $pane;
$display->panels['right'][0] = 'new-825888a5-46b6-4a16-96fd-08accad25bf4';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
