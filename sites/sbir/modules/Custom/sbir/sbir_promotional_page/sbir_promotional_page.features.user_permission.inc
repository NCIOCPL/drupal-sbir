<?php
/**
 * @file
 * sbir_promotional_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sbir_promotional_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'create sbir_promotional_page content'.
  $permissions['create sbir_promotional_page content'] = array(
    'name' => 'create sbir_promotional_page content',
    'roles' => array(
      'advanced content editor' => 'advanced content editor',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
      'site moderator' => 'site moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sbir_promotional_page content'.
  $permissions['delete any sbir_promotional_page content'] = array(
    'name' => 'delete any sbir_promotional_page content',
    'roles' => array(
      'advanced content editor' => 'advanced content editor',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
      'site moderator' => 'site moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sbir_promotional_page content'.
  $permissions['delete own sbir_promotional_page content'] = array(
    'name' => 'delete own sbir_promotional_page content',
    'roles' => array(
      'advanced content editor' => 'advanced content editor',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
      'site moderator' => 'site moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sbir_promotional_page content'.
  $permissions['edit any sbir_promotional_page content'] = array(
    'name' => 'edit any sbir_promotional_page content',
    'roles' => array(
      'advanced content editor' => 'advanced content editor',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
      'site moderator' => 'site moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sbir_promotional_page content'.
  $permissions['edit own sbir_promotional_page content'] = array(
    'name' => 'edit own sbir_promotional_page content',
    'roles' => array(
      'advanced content editor' => 'advanced content editor',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
      'site moderator' => 'site moderator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
