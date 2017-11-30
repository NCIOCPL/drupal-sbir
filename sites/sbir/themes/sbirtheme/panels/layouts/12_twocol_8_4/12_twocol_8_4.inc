<?php
/**
 * @file
 * 12_twocol_8_4.inc
 */

/**
 * Implements hook_panels_layouts().
 */
function sbirtheme_12_twocol_8_4_panels_layouts() {
  $items['12_twocol_8_4'] = array(
    'title' => t('12_twocol_8_4'),
    'category' => t('SBIR'),
    'icon' => 'homepage.png',
    'theme' => '12_twocol_8_4',
    'css' => '../sbir_panels_admin_12.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side')
    ),
  );

  return $items;
}
