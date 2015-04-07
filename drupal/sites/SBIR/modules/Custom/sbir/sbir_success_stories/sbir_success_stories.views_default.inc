<?php
/**
* Implements hook_views_default_views().
**/
function sbir_success_stories_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'sbir_success_stories'). '/views', '/.view.inc/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }
  return $views;
}