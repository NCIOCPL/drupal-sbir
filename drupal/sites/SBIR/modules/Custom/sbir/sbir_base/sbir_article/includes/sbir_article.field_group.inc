<?php
function article_create_field_groups() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_meta|node|sbir_article|form';
  $field_group->group_name = 'group_news_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sbir_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Meta',
    'weight' => '5',
    'children' => array(
      0 => 'meta_description',
      1 => 'meta_keywords',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-news-meta field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_news_meta|node|sbir_article|form'] = $field_group;

  return $export;
}