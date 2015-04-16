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
    $breadcrumb[] = drupal_get_title();

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    //$output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
    $output .= '<div class="breadcrumb">' . implode(' <b>\</b> ', $breadcrumb) . '</div>';
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
  if ($block->delta == 'menu-social-media') {
    foreach ($data['content'] as $key => $value) {
      if (is_numeric($key) && is_array($value) && isset($value['#localized_options']['attributes']['title'])) {
        $title = $value['#localized_options']['attributes']['title'];
        if ($title == 'Sign Up for Updates') {
          $data['content'][$key]['#attributes']['class'][] = 'email-link';
        }
        if ($title == 'Connect with us on LinkedIn') {
          $data['content'][$key]['#attributes']['class'][] = 'linkedin-link';
        }
        if ($title == 'Follow us on Twitter') {
          $data['content'][$key]['#attributes']['class'][] = 'twitter-link';
        }
      }
    }
    $follow_us = array(
      '#markup' => '<span class="follow-us-text">Follow Us:</span>'
    );
    // $data['content'][] = $follow_us;
    array_unshift($data['content'], $follow_us);
  }
}

function sbirtheme_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == "search_form") {
    unset($form['advanced']);
    unset($form['basic']);
    //dpm($form);
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
  $total = $GLOBALS['pager_total_items'][0];

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
    $vars['search_totals'] = t('Results !start - !end of !total for: !term', array(
      '!start' => $start,
      '!end' => $end,
      '!total' => $total,
      '!term' => $searchTerm,
    ));
  }
  else {
    // Only one page of results, so make it simpler
    $vars['search_totals'] = t('Results !start - !end of !total for: !term', array(
      '!start' => $start,
      '!end' => $end,
      '!total' => $total,
      '!term' => $searchTerm,
    ));
  }
}
