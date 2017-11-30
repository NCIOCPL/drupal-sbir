<?php
/**
 * @file
 * Enables the creation of announcement pages with a title, abstract, body, author and date.
 */

/**
 * Settings (admin) form.
 *
 * This function provides an administrative interface for controlling
 * various settings for the announcement module.
 *
 * @return
 *   An array of the elements to render the settings interface.
 */
function announcements_settings($form, &$form_state) {
  drupal_add_css(drupal_get_path('module', 'announcements') . '/announcements.css');
  $form = array();
  $noyes = array(t('No'), t('Yes'));

  $form['announcements_per_page'] = array(
    '#type' => 'textfield',
    '#title' => t('Announcements per page'),
    '#default_value' => variable_get('announcements_per_page', variable_get('default_nodes_main', 10)),
    '#description' => t('The maximum number of items listed on the announcements page.'),
    '#required' => FALSE,
    '#size' => 6,
  );

  $intervals = array(
    '+1 day' => t('1 day'),
    '+1 week' => t('1 week'),
    '+2 week' => t('2 weeks'),
    '+1 month' => t('1 month'),
    '+2 month' => t('2 months'),
    '+3 month' => t('3 months'),
    '+6 month' => t('6 months'),
    '+1 year' => t('1 year'),
  );
  $form['announcements_interval'] = array(
    '#type' => 'radios',
    '#options' => $intervals,
    '#title' => t('Default duration of announcement'),
    '#default_value' => variable_get('announcements_interval', '+1 month'),
    '#description' => t('This will be added to the current date to set the default ending date.'),
    '#attributes' => array('class' => array('container-inline')),
  );

  $form['announcements_allow_expire'] = array(
    '#type' => 'radios',
    '#options' => $noyes,
    '#title' => t('Allow setting the expiration date'),
    '#default_value' => (int) variable_get('announcements_allow_expire', 1),
    '#description' => t('Do you want the user to be allowed to set the ending date?'),
    '#attributes' => array('class' => array('container-inline')),
  );

  $form['announcements_edit_link'] = array(
    '#type' => 'radios',
    '#options' => $noyes,
    '#title' => t('Provide "edit" link'),
    '#default_value' => (int) variable_get('announcements_edit_link', 0),
    '#description' => t('Do you want an "edit" link generated for each announcement?'),
    '#attributes' => array('class' => array('container-inline')),
  );

  $form['announcements_show_abstract'] = array(
    '#type' => 'radios',
    '#options' => $noyes,
    '#title' => t('Show abstract in view mode'),
    '#default_value' => (int) variable_get('announcements_show_abstract', 1),
    '#description' => t('Do you want the abstract when using announcement/xxx?'),
    '#attributes' => array('class' => array('container-inline')),
  );

  $form['announcements_page_order'] = array(
    '#type' => 'radios',
    '#options' => _announcements_sorts(),
    '#title' => t('Sort order'),
    '#default_value' => variable_get('announcements_page_order', 'n.sticky DESC, n.changed DESC'),
    '#description' => t('This will determine the sort order for the announcements page..'),
  );

  return system_settings_form($form);
}
