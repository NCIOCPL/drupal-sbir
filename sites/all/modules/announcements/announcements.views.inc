<?php
/**
 * @file
 * Enables the creation of announcement pages with a title, abstract, body, author and date.
 */

/**
 * Implements hook_views_data().
 */
function announcements_views_data() {
  // Basic table information.
  // ----------------------------------------------------------------
  // announcements table
  $data['announcements']['table']['group']  = t('Announcements');
  $data['announcements']['table']['join'] = array(
    // ...to the node table
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  // Abstract.
  $data['announcements']['abstract'] = array(
    'title' => t('Abstract'),
    'help' => t('Short summary of the announcement.'),
    'field' => array(
      //      'handler' => 'views_handler_field_announcements',
      'click sortable' => TRUE,
    ),
    'filter' => array('handler' => 'views_handler_filter_string'),
    'sort' => array('handler' => 'views_handler_sort'),
  );

  // Publish_date.
  $data['announcements']['publish_date'] = array(
    'title' => t('Publish_date'),
    'help' => t('The date when the announcement will become active.'),
    'field' => array(
      //      'handler' => 'views_handler_field_announcements',
      'click sortable' => TRUE,
    ),
    'filter' => array('handler' => 'views_handler_filter_date'),
    'sort' => array('handler' => 'views_handler_sort'),
    'skip base' => 'announcements',
  );

  // Expiration_date.
  $data['announcements']['expiration_date'] = array(
    'title' => t('Expiration_date'),
    'help' => t('The date when the announcement will expire.'),
    'field' => array(
      //      'handler' => 'views_handler_field_announcements',
      'click sortable' => TRUE,
    ),
    'filter' => array('handler' => 'views_handler_filter_date'),
    'sort' => array('handler' => 'views_handler_sort'),
    'skip base' => 'announcements',
  );

  return $data;
}
