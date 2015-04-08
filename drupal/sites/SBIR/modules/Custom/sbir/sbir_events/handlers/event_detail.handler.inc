<?php

$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__event';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = -24;
$handler->conf = array(
  'title' => 'Event',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'event',
  'access' => array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'sbir_event' => 'sbir_event',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  ),
);
$display = new panels_display();
$display->layout = 'omega_12_twocol_3_9';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'left' => NULL,
    'right' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = 'f4c1a97a-b6a8-4edc-a1c5-ad7e12be457c';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-478f1529-3fb3-49bd-8dcf-b047ff461578';
  $pane->panel = 'left';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'main-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '2',
    'follow' => 0,
    'depth' => '0',
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'main-menu',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'left-nav',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '478f1529-3fb3-49bd-8dcf-b047ff461578';
  $display->content['new-478f1529-3fb3-49bd-8dcf-b047ff461578'] = $pane;
  $display->panels['left'][0] = 'new-478f1529-3fb3-49bd-8dcf-b047ff461578';
  $pane = new stdClass();
  $pane->pid = 'new-d9b351a7-02af-4ae5-8b61-42e20f02752c';
  $pane->panel = 'right';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
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
  $pane->uuid = 'd9b351a7-02af-4ae5-8b61-42e20f02752c';
  $display->content['new-d9b351a7-02af-4ae5-8b61-42e20f02752c'] = $pane;
  $display->panels['right'][0] = 'new-d9b351a7-02af-4ae5-8b61-42e20f02752c';
  $pane = new stdClass();
  $pane->pid = 'new-479d2c68-2f2c-4963-8bad-3409bd5d45f8';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'event-details';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '479d2c68-2f2c-4963-8bad-3409bd5d45f8';
  $display->content['new-479d2c68-2f2c-4963-8bad-3409bd5d45f8'] = $pane;
  $display->panels['right'][1] = 'new-479d2c68-2f2c-4963-8bad-3409bd5d45f8';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-478f1529-3fb3-49bd-8dcf-b047ff461578';
$handler->conf['display'] = $display;
