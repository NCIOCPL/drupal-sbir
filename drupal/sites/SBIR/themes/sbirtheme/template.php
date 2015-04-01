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
      if (is_numeric($key) && is_array($value)
          && isset($value['#localized_options']['attributes']['title'])) {
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
