<?php
/**
 * Implementation of hook_default_page_manager_handlers()().
 */

function sbir_success_stories_default_page_manager_handlers() {

  $files = file_scan_directory(drupal_get_path('module', 'sbir_success_stories'). '/handlers', '/.handler.inc/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($handler)) {
      $pages[$file->name] = $handler;
    }   
  }
  return $pages;
}