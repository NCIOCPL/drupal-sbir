<?php

$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__email_change';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = -28;
$handler->conf = array(
  'title' => 'Email Change',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'email_change',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'emailchange',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
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
$display->uuid = '56ad0ddc-7dab-47da-be67-946a430da9fc';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-47e082df-5f6c-4c4a-9154-96dd77c0e2bf';
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
    'depth' => '2',
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'main-menu',
    'parent_mlid' => '0',
    'override_title' => 0,
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
  $pane->uuid = '47e082df-5f6c-4c4a-9154-96dd77c0e2bf';
  $display->content['new-47e082df-5f6c-4c4a-9154-96dd77c0e2bf'] = $pane;
  $display->panels['left'][0] = 'new-47e082df-5f6c-4c4a-9154-96dd77c0e2bf';
  $pane = new stdClass();
  $pane->pid = 'new-d163cd0e-ad5a-4ead-81a9-57a4df7b6abe';
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
  $pane->uuid = 'd163cd0e-ad5a-4ead-81a9-57a4df7b6abe';
  $display->content['new-d163cd0e-ad5a-4ead-81a9-57a4df7b6abe'] = $pane;
  $display->panels['right'][0] = 'new-d163cd0e-ad5a-4ead-81a9-57a4df7b6abe';
  $pane = new stdClass();
  $pane->pid = 'new-01685c4b-c4ec-4565-b4c9-56dd5f209ee7';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '01685c4b-c4ec-4565-b4c9-56dd5f209ee7';
  $display->content['new-01685c4b-c4ec-4565-b4c9-56dd5f209ee7'] = $pane;
  $display->panels['right'][1] = 'new-01685c4b-c4ec-4565-b4c9-56dd5f209ee7';
  $pane = new stdClass();
  $pane->pid = 'new-d4af3d15-9ec1-454f-946a-dab885669041';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'sbir_email_notifications-email_notification_update_block';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd4af3d15-9ec1-454f-946a-dab885669041';
  $display->content['new-d4af3d15-9ec1-454f-946a-dab885669041'] = $pane;
  $display->panels['right'][2] = 'new-d4af3d15-9ec1-454f-946a-dab885669041';
  $pane = new stdClass();
  $pane->pid = 'new-b86f5f4a-8080-42bf-a684-06d088ab72a7';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_footer';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b86f5f4a-8080-42bf-a684-06d088ab72a7';
  $display->content['new-b86f5f4a-8080-42bf-a684-06d088ab72a7'] = $pane;
  $display->panels['right'][3] = 'new-b86f5f4a-8080-42bf-a684-06d088ab72a7';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-47e082df-5f6c-4c4a-9154-96dd77c0e2bf';
$handler->conf['display'] = $display;
