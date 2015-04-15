<?php

$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__sign_up_for_updates';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = -29;
$handler->conf = array(
  'title' => 'Email Signup',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'sign_up_for_updates',
  'access' => array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'emailsignup',
        ),
        'context' => 'empty',
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
    'middle' => NULL,
    'left' => NULL,
    'right' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '13bd476b-aa67-438e-810d-a62d8751986d';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-d4b04c6f-0d6e-43c8-8ad9-05c270703125';
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
$pane->uuid = 'd4b04c6f-0d6e-43c8-8ad9-05c270703125';
$display->content['new-d4b04c6f-0d6e-43c8-8ad9-05c270703125'] = $pane;
$display->panels['left'][0] = 'new-d4b04c6f-0d6e-43c8-8ad9-05c270703125';
$pane = new stdClass();
$pane->pid = 'new-6e8bf68a-7cbd-4a92-b424-f390f2895a60';
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
$pane->uuid = '6e8bf68a-7cbd-4a92-b424-f390f2895a60';
$display->content['new-6e8bf68a-7cbd-4a92-b424-f390f2895a60'] = $pane;
$display->panels['right'][0] = 'new-6e8bf68a-7cbd-4a92-b424-f390f2895a60';
$pane = new stdClass();
$pane->pid = 'new-7ee551b3-c00d-48fe-9efe-0e43ed1e469e';
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
$pane->uuid = '7ee551b3-c00d-48fe-9efe-0e43ed1e469e';
$display->content['new-7ee551b3-c00d-48fe-9efe-0e43ed1e469e'] = $pane;
$display->panels['right'][1] = 'new-7ee551b3-c00d-48fe-9efe-0e43ed1e469e';
$pane = new stdClass();
$pane->pid = 'new-3d1d5e2e-09e8-4bd7-ba0f-ca9942da6525';
$pane->panel = 'right';
$pane->type = 'block';
$pane->subtype = 'sbir_email_notifications-email_notification_add_block';
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
$pane->uuid = '3d1d5e2e-09e8-4bd7-ba0f-ca9942da6525';
$display->content['new-3d1d5e2e-09e8-4bd7-ba0f-ca9942da6525'] = $pane;
$display->panels['right'][2] = 'new-3d1d5e2e-09e8-4bd7-ba0f-ca9942da6525';
$pane = new stdClass();
$pane->pid = 'new-e13b13cb-8968-4ab0-ae10-7e60c408876b';
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
$pane->uuid = 'e13b13cb-8968-4ab0-ae10-7e60c408876b';
$display->content['new-e13b13cb-8968-4ab0-ae10-7e60c408876b'] = $pane;
$display->panels['right'][3] = 'new-e13b13cb-8968-4ab0-ae10-7e60c408876b';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
