<?php
/**
 * @file
 * Alpha's theme implementation to display a single Drupal page.
 */
?>
<div<?php print $attributes; ?>>
  <?php if (isset($page['header'])) : ?>
    <?php print render($page['header']); ?>
  <?php endif; ?>

  <?php if (isset($page['content'])) : ?>
    <?php print render($page['content']); ?>
    <?php if (isset($node->field_date_display_mode)): ?>
      <?php $date_count = sizeof($node->field_date_display_mode); ?>
      <?php if ($date_count > 0): ?>
        <div id="sbir-dates">
          <?php $has_posted = FALSE; ?>
          <?php $has_updated = FALSE; ?>
          <?php $has_reviewed = FALSE; ?>
          <?php foreach ($node->field_date_display_mode['und'] as $date_type): ?>
            <?php if ($date_type['value'] == 'posted' && isset($node->field_posted_date['und'])): ?>
              <?php $has_posted = TRUE; ?>
              <?php $converted_date = format_date($node->field_posted_date['und'][0]['value'], 'sbir_standard'); ?>
              <div id="sbir-posted-date" class="sbir-date"><span>Posted:</span> <?php print $converted_date; ?></div>
            <?php endif; ?>
            <?php if ($date_type['value'] == 'updated' && isset($node->field_updated_date['und'])): ?>
              <?php $has_updated = TRUE; ?>
              <?php $converted_date = format_date($node->field_updated_date['und'][0]['value'], 'sbir_standard'); ?>
              <div id="sbir-updated-date" class="sbir-date">
                <?php if ($has_posted): ?>
                  &nbsp;&nbsp;|&nbsp;&nbsp;
                <?php endif; ?>
                <span>Updated:</span> <?php print $converted_date; ?></div>
            <?php endif; ?>   
            <?php if ($date_type['value'] == 'reviewed' && isset($node->field_reviewed_date['und'])): ?>
              <?php $converted_date = format_date($node->field_reviewed_date['und'][0]['value'], 'sbir_standard'); ?>
              <div id="sbir-reviewed-date" class="sbir-date">
                <?php if ($has_posted || $has_updated): ?>
                  &nbsp;&nbsp;|&nbsp;&nbsp;
                <?php endif; ?>            
                <span>Reviewed:</span> <?php print $converted_date; ?></div>
            <?php endif; ?>                   
          <?php endforeach; ?>
        </div>
      <?php endif; ?>  
    <?php endif; ?>
  <?php endif; ?>
  <?php if (isset($page['footer'])) : ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>
</div>