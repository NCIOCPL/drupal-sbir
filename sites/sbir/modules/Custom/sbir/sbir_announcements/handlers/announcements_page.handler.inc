<?php

$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_dc0632b8-e6a4-479d-8733-336123de8f6d';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = -27;
$handler->conf = array(
  'title' => 'Announcements Page',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'sbir_basic_page' => 'sbir_basic_page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'newsevents/announcements',
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
$display->uuid = '6363f12f-daf4-4ada-9c49-0f365a4f30ba';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-5628b969-cd5e-4b07-a260-e9bfd565f698';
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
$pane->css = array(
  'css_id' => 'left-nav',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '5628b969-cd5e-4b07-a260-e9bfd565f698';
$display->content['new-5628b969-cd5e-4b07-a260-e9bfd565f698'] = $pane;
$display->panels['left'][0] = 'new-5628b969-cd5e-4b07-a260-e9bfd565f698';
$pane = new stdClass();
$pane->pid = 'new-2e7b0160-af56-42e6-8ef2-a784af9b1d1c';
$pane->panel = 'right';
$pane->type = 'page_breadcrumb';
$pane->subtype = 'page_breadcrumb';
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
$pane->uuid = '2e7b0160-af56-42e6-8ef2-a784af9b1d1c';
$display->content['new-2e7b0160-af56-42e6-8ef2-a784af9b1d1c'] = $pane;
$display->panels['right'][0] = 'new-2e7b0160-af56-42e6-8ef2-a784af9b1d1c';
$pane = new stdClass();
$pane->pid = 'new-8b6e23d3-acb2-4405-92e8-77337240dab5';
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
$pane->position = 1;
$pane->locks = array();
$pane->uuid = '8b6e23d3-acb2-4405-92e8-77337240dab5';
$display->content['new-8b6e23d3-acb2-4405-92e8-77337240dab5'] = $pane;
$display->panels['right'][1] = 'new-8b6e23d3-acb2-4405-92e8-77337240dab5';
$pane = new stdClass();
$pane->pid = 'new-d7e94959-eef1-4cd5-87ab-6bed73b69554';
$pane->panel = 'right';
$pane->type = 'node_body';
$pane->subtype = 'node_body';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'sanitize' => 1,
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
$pane->position = 2;
$pane->locks = array();
$pane->uuid = 'd7e94959-eef1-4cd5-87ab-6bed73b69554';
$display->content['new-d7e94959-eef1-4cd5-87ab-6bed73b69554'] = $pane;
$display->panels['right'][2] = 'new-d7e94959-eef1-4cd5-87ab-6bed73b69554';
$pane = new stdClass();
$pane->pid = 'new-08f94852-25e6-4f75-b631-0bba6682e895';
$pane->panel = 'right';
$pane->type = 'views_panes';
$pane->subtype = 'announcement-all';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 1,
  'override_title_text' => '',
  'override_title_heading' => 'h2',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 3;
$pane->locks = array();
$pane->uuid = '08f94852-25e6-4f75-b631-0bba6682e895';
$display->content['new-08f94852-25e6-4f75-b631-0bba6682e895'] = $pane;
$display->panels['right'][3] = 'new-08f94852-25e6-4f75-b631-0bba6682e895';
$pane = new stdClass();
$pane->pid = 'new-4c59ca05-5ae8-4bda-a6c3-07d6b7d2a604';
$pane->panel = 'right';
$pane->type = 'entity_field';
$pane->subtype = 'node:field_footer';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'label' => 'hidden',
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
$pane->position = 4;
$pane->locks = array();
$pane->uuid = '4c59ca05-5ae8-4bda-a6c3-07d6b7d2a604';
$display->content['new-4c59ca05-5ae8-4bda-a6c3-07d6b7d2a604'] = $pane;
$display->panels['right'][4] = 'new-4c59ca05-5ae8-4bda-a6c3-07d6b7d2a604';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-5628b969-cd5e-4b07-a260-e9bfd565f698';
$handler->conf['display'] = $display;
