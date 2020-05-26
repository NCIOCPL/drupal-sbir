<?php
/**
 * @file
 * sbir_promotional_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function sbir_promotional_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__promotional-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Promotional Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'promotional-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'sbir_promotional_page' => 'sbir_promotional_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__promotional-page';
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
  $pane->pid = 'new-6563e746-42f8-4c19-9605-e4c9f130864a';
  $pane->panel = 'right';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '6563e746-42f8-4c19-9605-e4c9f130864a';
  $display->content['new-6563e746-42f8-4c19-9605-e4c9f130864a'] = $pane;
  $display->panels['right'][1] = 'new-6563e746-42f8-4c19-9605-e4c9f130864a';
  $pane = new stdClass();
  $pane->pid = 'new-4c59ca05-5ae8-4bda-a6c3-07d6b7d2a604';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_footer';
  $pane->shown = FALSE;
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4c59ca05-5ae8-4bda-a6c3-07d6b7d2a604';
  $display->content['new-4c59ca05-5ae8-4bda-a6c3-07d6b7d2a604'] = $pane;
  $display->panels['right'][2] = 'new-4c59ca05-5ae8-4bda-a6c3-07d6b7d2a604';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-5628b969-cd5e-4b07-a260-e9bfd565f698';
  $handler->conf['display'] = $display;
  $export['node_view__promotional-page'] = $handler;

  return $export;
}
