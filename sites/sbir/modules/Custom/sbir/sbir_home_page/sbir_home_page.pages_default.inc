<?php
/**
 * Implementation of hook_default_page_manager_pages().
 */
function sbir_home_page_default_page_manager_pages() {
  $files = file_scan_directory(drupal_get_path('module', 'sbir_home_page'). '/pages', '/.page.inc/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($page)) {
      $pages[$file->name] = $page;
    }   
  }
  return $pages;
}