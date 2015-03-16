<?php
/**
* Implements hook_views_default_views().
**/
function sbir_home_page_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'sbir_home_page'). '/views', '/.view.inc/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }
  return $views;
}