<?php

/**
 * Array of taxonomy vocabularies for this content type.
 */
function create_area_of_interest_vocabulary() {
  $vocabularies = array(
    'sbir_area_of_interest' => array(
      'name' => 'Area of Interest',
      'machine_name' => 'sbir_area_of_interest',
      'description' => 'This vocabulary defines area of interest within the Health & Sciences industry.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );

  foreach ($vocabularies as $value) {
    $vocabulary = (object) $value;
    sbir_base_update_vocabulary($vocabulary);
  }
}
