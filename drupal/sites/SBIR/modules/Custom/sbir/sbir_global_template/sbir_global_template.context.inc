<?php

/**
 * Implements hook_context_default_contexts().
 */
function sbir_global_template_context_default_contexts() {
  $export = array();

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'global';
$context->description = 'Global';
$context->tag = '';
$context->conditions = array(
  'sitewide' => array(
    'values' => array(
      1 => 1,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'menu-menu-social-media' => array(
        'module' => 'menu',
        'delta' => 'menu-social-media',
        'region' => 'branding',
        'weight' => '-10',
      ),
      'search-form' => array(
        'module' => 'search',
        'delta' => 'form',
        'region' => 'branding',
        'weight' => '-9',
      ),
      'superfish-1' => array(
        'module' => 'superfish',
        'delta' => '1',
        'region' => 'menu',
        'weight' => '-9',
      ),
      'block-1' => array(
        'module' => 'block',
        'delta' => '1',
        'region' => 'header_first',
        'weight' => '-10',
      ),
      'menu-menu-footer-menu' => array(
        'module' => 'menu',
        'delta' => 'menu-footer-menu',
        'region' => 'footer_first',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  $export['global'] = $context;

  return $export;
}
