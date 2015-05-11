<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Implements hook_breadcrumb().
 */
function sbirtheme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (count($breadcrumb) == 1) {
    //return;
  }

  //dpm(sizeof($breadcrumb));
  if (!empty($breadcrumb) /* && sizeof($breadcrumb) > 0 */) {
    // Adding the title of the current page to the breadcrumb.
    if (isset($GLOBALS['_GET']['q'])) {
      $q = $GLOBALS['_GET']['q'];
      $menu_item = menu_get_item($q);
      $menu_item = db_query('SELECT link_title FROM {menu_links}'
          . ' WHERE link_path = :path'
          . ' LIMIT 0, 1', array(':path' => $q))->fetchAssoc();

      if (isset($menu_item['link_title'])) {
        $breadcrumb[] = $menu_item['link_title'];
        //print $menu_item['title'];exit;
      }
      else {
        $breadcrumb[] = drupal_get_title();
      }
    }
    else {
      $breadcrumb[] = drupal_get_title();
    }

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    //$output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
    $output .= '<div class="breadcrumb">' . implode('&nbsp;&nbsp;\&nbsp;&nbsp;', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * Implements hook_validate().
 */
function sbirtheme_validate($node, $form, $form_state) {
  
}

/*
 * Implements hook_block_view
 */

function sbirtheme_block_view_alter(&$data, $block) {
  //dpm($block->delta);
  if ($block->delta == 'menu-social-media') {
    foreach ($data['content'] as $key => $value) {
      if (is_numeric($key) && is_array($value) && isset($value['#title'])) {
        $title = $value['#title'];
        if ($title == 'Sign Up for Updates') {
          $data['content'][$key]['#attributes']['class'][] = 'email-link';
          $data['content'][$key]['#attributes']['class'][] = 'social-media-link';
        }
        if ($title == 'Connect with us on LinkedIn') {
          $data['content'][$key]['#attributes']['class'][] = 'linkedin-link';
          $data['content'][$key]['#attributes']['class'][] = 'social-media-link';
        }
        if ($title == 'Follow us on Twitter') {
          $data['content'][$key]['#attributes']['class'][] = 'twitter-link';
          $data['content'][$key]['#attributes']['class'][] = 'social-media-link';
        }
      }
    }

    $follow_us = array(
      '#markup' => '<span class="follow-us-text">Follow Us:</span>'
    );
    // $data['content'][] = $follow_us;
    array_unshift($data['content'], $follow_us);
  }

  if ($block->delta == 'menu-social-media') {
    foreach ($data['content'] as $key => $value) {
      if (is_numeric($key) && is_array($value) && isset($value['#title'])) {
        //dpm($value);
        $title = $value['#title'];
        if ($title == 'Site Map' || $title == 'Connect with us on LinkedIn') {
          $data['content'][$key]['#attributes']['class'][] = 'with-image';
        }
      }
    }
  }

  if ($block->delta == 'menu-footer-menu') {
    foreach ($data['content'] as $key => $value) {
      if (is_numeric($key) && is_array($value) && isset($value['#title'])) {
        //dpm($value);
        $title = $value['#title'];
        if ($title == 'Site Map' || $title == 'USA.gov') {
          $data['content'][$key]['#attributes']['class'][] = 'footer-break-point';
        }
        /*
          if ($title == 'NIH ... Turning Discovery Into Health') {
          $data['content'][$key]['#attributes']['class'][] = 'discovery';
          }
         */
      }
    }
  }
}

function sbirtheme_form_alter(&$form, &$form_state, $form_id) {

  if ($form_id == "search_form") {
    unset($form['advanced']);
    unset($form['basic']);
    //dpm($form);
  }

//make local copy of form_id
  $test_form_id = $form_id;

  //overwrite all different node type forms to "node_form"
  //so only nodes will have this checkbox
  if (substr($test_form_id, -10) == '_node_form') {
    $test_form_id = 'node_form';
  }

  //Also this variant was proposed
  /*
    if( $form['#id'] == 'node-form' ){
    $test_form_id = 'node_form';
    }
   */

  switch ($test_form_id) {

    case 'node_form':

      //get mlid, if mlid captured
      //this is node editing action
      $mlid = 0;
      if (isset($form['menu']['#item']['mlid']) &&
          $form['menu']['#item']['mlid'] > 0) {
        $mlid = $form['menu']['#item']['mlid'];
        $menuItem = menu_link_load($mlid);
      }

      //add dummy hidden/enabled checkbox and
      //use previous value for checkbox status if available
      $form['menu']['d6_enabled'] = array(
        '#type' => 'checkbox',
        '#title' => t('enabled'),
        '#default_value' => ($mlid == 0 ? 1 : ($menuItem['hidden'] ? 0 : 1) ),
        '#description' =>
        t('Menu items that are not enabled will not be listed in any menu.'),
      );
      break;
  }
}

/**
 * Implements hook_preprocess_search_results().
 */
function sbirtheme_preprocess_search_results(&$vars) {
  // search.module shows 10 items per page (this isn't customizable)
  $itemsPerPage = 10;

  // Determine which page is being viewed
  // If $_REQUEST['page'] is not set, we are on page 1
  $currentPage = (isset($_REQUEST['page']) ? $_REQUEST['page'] : 0) + 1;

  // Get the total number of results from the global pager
  $total = isset($GLOBALS['pager_total_items'][0]) ? $GLOBALS['pager_total_items'][0] : 0;

  // get search term
  $searchTerm = request_path();
  $searchTerm = ltrim(substr($searchTerm, strrpos($searchTerm, '/')), '/');

  // Determine which results are being shown ("Showing results x through y")
  $start = (10 * $currentPage) - 9;
  // If on the last page, only go up to $total, not the total that COULD be
  // shown on the page. This prevents things like "Displaying 11-20 of 17".
  $end = (($itemsPerPage * $currentPage) >= $total) ? $total : ($itemsPerPage * $currentPage);

  // If there is more than one page of results:
  if ($total > $itemsPerPage) {
    $vars['search_totals'] = t('Results !start - !end of !total for:', array(
      '!start' => $start,
      '!end' => $end,
      '!total' => $total
    ));
    $vars['search_term'] = t(' !term', array(
      '!term' => $searchTerm
    ));
  }
  else {
    // Only one page of results, so make it simpler
    $vars['search_totals'] = t('Results !start - !end of !total for:', array(
      '!start' => $start,
      '!end' => $end,
      '!total' => $total
    ));
    $vars['search_term'] = t(' !term', array(
      '!term' => $searchTerm
    ));
  }
}

/*
function sbirtheme_menu_link__menu_footer_menu(array $variables) {
  dpm($variables);
}
*/