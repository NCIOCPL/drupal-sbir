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

function create_area_of_interest_terms() {
  $vocab_object = sbir_base_get_vocabulary_by_name("sbir_area_of_interest");

  if (!isset($vocab_object)) {
    return;
  }

  $vid = $vocab_object->vid;

  $areas_of_interest = array(
    'Bioinformatics',
    'Biologics',
    'Budget Tracking',
    'Cancer Biology',
    'Cancer Control & Prevention',
    'Cancer Diagnostics',
    'Cancer Imaging',
    'Cancer Prevention',
    'Cancer/Biological Imaging',
    'Cell Based Therapies',
    'Clinical Trials',
    'Devices',
    'Digital Health',
    'E-Health',
    'Early-stage Drug Development',
    'Epidemiology',
    'Immunotherapeutics',
    'Immunotherapy',
    'In-Vitro Diagnostics',
    'Molecular Imaging',
    'Monoclonal Antibodies',
    'Nanotherapeutics',
    'Portfolio Analysis',
    'Program Analysis',
    'Program Specialist',
    'Proteomics',
    'Radiation Therapy',
    'Research Tools',
    'SBIR Investor Forum',
    'Scientific Communications',
    'Small Molecules',
    'Social Media',
    'Special Initiatives',
    'Stem Cells',
    'Success Stories',
    'Theranostics',
    'Therapeutics',
  );

  foreach ($areas_of_interest as $area_of_interest) {
    taxonomy_term_save((object) array(
          'name' => $area_of_interest,
          'vid' => $vid,
    ));
  }
}
