<?php

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

function nci_framework_drush_command() {
    $items = array();

    $items['framework-check-dependencies'] = array(
      'description' => "Checks the dependencies of desired modules.",
      'arguments' => array(
        'path' => "The parent path of all modules to check, usually a specific site's directory.",
      ),
      'examples' => array(
        'drush framework-check-dependencies sites/mynci.cancer.gov' => 'Checks the dependencies of all modules found under the mynci directory.',
      ),
      'aliases' => array('frcd'),
      //'bootstrap' => DRUPAL_BOOTSTRAP_FULL,
      //'drupal dependencies' => array(),//'nci_framework'),
    );
    
    $items['framework-check-modules'] = array(
      'description' => "Checks for the existence of the provided modules.",
      'arguments' => array(
        'module_list' => 'A comma-delimited list of the modules to check.',
      ),
      'options' => array(
        'file' => array(
          'description' => 'An optional file, filled with module names one per line.',
          'example_value' => '~/mynci_modules',
          'value' => 'optional',
        ),
      ),
      'examples' => array(
        'drush framework-check-modules workbench_moderation,workbench_access' =>
        'Checks for the existence of the workbench moderation and access modules.',
      ),
      'aliases' => array('frcm'),
      //'bootstrap' => DRUPAL_BOOTSTRAP_FULL,
      //'drupal dependencies' => array(),//'nci_framework'),
    );

    return $items;
}

function drush_nci_framework_framework_check_dependencies($path = null) {
    drupal_set_message("Checking module dependencies!");
    $modules = system_rebuild_module_data();
    
    if($path) {
        $matches = array();
        $requires = array();
        foreach($modules as $name => $data) {
            if(strpos($data->uri, $path) !== false) {
                $matches[$name] = $name;
                $requires = array_merge($requires, $data->requires);
            }
        }
        
        // remove all modules that match the pattern from the requirements
        $external_requires = array_diff_key($requires, $matches);
        asort($external_requires);
        
        // dig up the information for these required modules
        $required_data = array();
        $missing_modules = array();
        foreach ($external_requires as $name => $data) {
            if (isset($modules[$name])) {
                if ($modules[$name]->info['package'] != 'Core') {
                    $display = $modules[$name]->info['name'] . " ($name-" . $modules[$name]->info['version'] . ")";
                    $required_data[$name] = $display;
                }
            }
            else
            {
                $missing_modules[$name] = $name;
            }
        }
        
        drupal_set_message("Found the following required modules:\n" . 
            implode("\n", $required_data) . "\n");
        
        if (!empty($missing_modules)) {
            drupal_set_message("Missing modules:\n" . 
                implode(', ', $missing_modules), 'warning');
            return 1;
        }
    }
    
    return 0;
}

function drush_nci_framework_framework_check_modules($module_list = null) {
    $desired_modules = array();
    $filename = drush_get_option('file');
    
    if ($filename && $fh = fopen($filename, "r")) {
        while (!feof($fh)) {
            $line = fgets($fh);
            if($line) {
                $desired_modules[] = trim($line);
            }
        }

        fclose($fh);
    }
    
    if($module_list && is_string($module_list)) {
        $listed_modules = explode(',', $module_list);
        $desired_modules = array_merge($desired_modules, $listed_modules);
    }

    if(empty($desired_modules)){
        drupal_set_message('No modules provided!', 'warning');
        return;
    }
    
    drupal_set_message("Checking module existence:");

    $modules = system_rebuild_module_data();
    $matching_modules = array();
    $missing_modules = array();
    $wrong_version = array();
    
    foreach ($desired_modules as $module) {
        // test if the module has a version specified
        list($name, $version) = split('-', $module, 2);

        if (isset($modules[$name])) {
            if (empty($version)) {
                $matching_modules[] = $module . '-' . $modules[$name]->info['version'];
            }
            else if ($modules[$name]->info['version'] == $version) {
                $matching_modules[] = $module;
            }else {
                $wrong_version[$module] = "$module (found "
                    . $modules[$name]->info['version']
                    . ')';
            }
        } else {
            $missing_modules[] = $module;
        }
    }


    if (!empty($matching_modules)) {
        drupal_set_message("Matched the following modules and versions:\n" .
            implode(', ', $matching_modules) . "\n");
    }

    if (!empty($missing_modules)) {
        drupal_set_message("Missing modules:\n" .
            implode(', ', $missing_modules) . "\n", 'warning');
    }

    if (!empty($wrong_version)) {
        drupal_set_message("Modules with mismatched versions:\n" .
            implode(', ', $wrong_version), 'warning');
    }
}