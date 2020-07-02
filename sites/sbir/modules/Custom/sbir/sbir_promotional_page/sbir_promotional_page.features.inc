<?php
/**
 * @file
 * sbir_promotional_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sbir_promotional_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sbir_promotional_page_node_info() {
  $items = array(
    'sbir_promotional_page' => array(
      'name' => t('Promotional Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function sbir_promotional_page_paragraphs_info() {
  $items = array(
    'button_link_box' => array(
      'name' => 'Button Link Box',
      'bundle' => 'button_link_box',
      'locked' => '1',
    ),
    'icon_box_section' => array(
      'name' => 'Icon Box Section',
      'bundle' => 'icon_box_section',
      'locked' => '1',
    ),
    'icon_link_box' => array(
      'name' => 'Icon Link Box',
      'bundle' => 'icon_link_box',
      'locked' => '1',
    ),
  );
  return $items;
}
