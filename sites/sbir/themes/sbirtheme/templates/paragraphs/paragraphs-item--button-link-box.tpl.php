<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php
$card_url = $field_link[0]['url'];
$card_link_text = $field_link[0]['title'];
$card_link_attributes = $field_link['attributes'];
if (isset($field_email_subject) || isset($field_email_body)) {
  $card_url .= '?';
  if (isset($field_email_subject)) {
      $card_link_subject =$field_email_subject[0]['safe_value'];
      $card_url .= 'subject=' . urlencode($card_link_subject);
} else
    {
      $card_link_subject ='';
    };
if (isset($field_email_body)) {
  $card_link_body = $field_email_body[0]['safe_value'];
  $card_url .= '&body=' . urlencode($card_link_body);
} else
{
  $card_link_body ='';
};
    }




?>
  <div class="<?php print $classes; ?>" <?php print $attributes; ?>>
    <div class="content"<?php print $content_attributes; ?>>
      <div class="sbir-button-link-box-title centered-container">
        <h2 class="sbir-promotional-h2"><?php print render($content['field_title']); ?></h2>
      </div>
      <div class="sbir-button-link-box-text-container">
        <div class="sbir-button-link-box-text">
          <?php print render($content['field_text']); ?>
        </div>
        <div class="centered-container top-padding">
          <div class="red-button sbir-button-link-box-button">
            <a href="<?php print $card_url; ?>" <?php print $card_link_attributes; ?>>
              <?php print $card_link_text; ?>
            </a>
          </div>
        </div>
      </div>
    </div>
  </div>