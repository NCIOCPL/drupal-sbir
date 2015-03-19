<?php
function grantee_create_field_groups() {
 $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grantee_meta|node|grantee|form';
  $field_group->group_name = 'group_grantee_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sbir_grantee';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '4',
    'children' => array(
      0 => 'meta_abstract',
      1 => 'meta_canonical',
      2 => 'meta_copyright',
      3 => 'meta_description',
      4 => 'meta_keywords',
      5 => 'meta_revisit_after',
      6 => 'meta_robots',
      7 => 'meta_meta_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-grantee-meta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_grantee_meta|node|grantee|form'] = $field_group;

  return $export;
}
