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
$page->menu = array(
  'type' => 'none',
  'title' => 'Home',
  'name' => 'main-menu',
  'weight' => '0',
  'parent' => array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
  ),
);
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
  $pane->pid = 'new-e61c0a5b-18fb-4247-ae90-e758e011eed3';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'home_page-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-signup-promo pane-gray-promo',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e61c0a5b-18fb-4247-ae90-e758e011eed3';
  $display->content['new-e61c0a5b-18fb-4247-ae90-e758e011eed3'] = $pane;
  $display->panels['right'][0] = 'new-e61c0a5b-18fb-4247-ae90-e758e011eed3';
  $pane = new stdClass();
  $pane->pid = 'new-825888a5-46b6-4a16-96fd-08accad25bf4';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'announcement-latest';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Latest Announcements',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '825888a5-46b6-4a16-96fd-08accad25bf4';
  $display->content['new-825888a5-46b6-4a16-96fd-08accad25bf4'] = $pane;
  $display->panels['right'][1] = 'new-825888a5-46b6-4a16-96fd-08accad25bf4';
  $pane = new stdClass();
  $pane->pid = 'new-caa72b46-a88d-4be5-a2e1-06664906db40';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'home_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-video-promo pane-gray-promo',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'caa72b46-a88d-4be5-a2e1-06664906db40';
  $display->content['new-caa72b46-a88d-4be5-a2e1-06664906db40'] = $pane;
  $display->panels['right'][2] = 'new-caa72b46-a88d-4be5-a2e1-06664906db40';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
