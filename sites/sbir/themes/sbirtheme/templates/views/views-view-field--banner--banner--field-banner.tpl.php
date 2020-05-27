<?php
/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php
if (isset($row->field_field_banner[0])):
$file = file_load($row->field_field_banner[0]['raw']['fid']);
$url = file_create_url($file->uri);
?>
<?php //print $output; ?>
<div class="views-row views-row-1 views-row-odd views-row-first views-row-last">
  <div class="views-field views-field-field-banner">
    <div class="field-content">
      <img src="<?php print $url; ?>" alt="SBIR Banner" title="SBIR Banner">
    </div>
  </div>
</div>
<?php endif; ?>