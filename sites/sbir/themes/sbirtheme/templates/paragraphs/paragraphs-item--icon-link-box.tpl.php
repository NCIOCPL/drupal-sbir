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
 * <a href="<?php print $card_url; ?>"  <?php print $card_link_attributes; ?>><?php print $card_link_text; ?></a>
 */
?>
<?php
$card_url = $field_link[0]['url'];
$card_link_text = $field_link[0]['title'];
$card_link_attributes = $field_link['attributes'];
?>
<a href="<?php print $card_url ?>" class="sbir-icon-box-link-hover-underline" <?php print $card_link_attributes; ?>>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
      <?php
      $field_icon = strip_tags(strtolower(render($content['field_icon'])));
      $icon_class = str_replace(" ","-",$field_icon) . "-icon";
      $card_identifier_raw = strip_tags(strtolower(render($content['field_link'])));
      //$card_identifier = str_replace(" ","-",$card_identifier_raw) . rand();
      $card_identifier = str_replace("?","",str_replace(" ","-",$card_identifier_raw));
      ?>
      <div class="centered-container bottom-padding vertical-center-container">
          <div class="<?php print render($icon_class); ?>"></div>
      </div>

    <div class="sbir-icon-box-link" id="<?php print $card_identifier; ?>">
        <?php print $card_link_text; ?>
    </div>
  </div>
</div>
</a>