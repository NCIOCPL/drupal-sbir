<?php
function announcement_create_field_groups() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_announcement_meta|node|sbir_announcement|form';
  $field_group->group_name = 'group_announcement_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sbir_announcement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '3',
    'children' => array(
      0 => 'meta_description',
      1 => 'meta_keywords',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-announcement-meta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_announcement_meta|node|sbir_announcement|form'] = $field_group;

  return $export;
}
