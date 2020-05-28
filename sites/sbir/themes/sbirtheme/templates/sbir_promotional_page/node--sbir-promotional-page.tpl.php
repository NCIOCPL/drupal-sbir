<article<?php print $attributes; ?>>
    <div<?php print $content_attributes; ?>>
        <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
      //  print render($content);
        ?>

        <?php if (!empty($content['field_header_image'])): ?>
            <div class="responsive-image-container">
                <?php print render($content['field_header_image']); ?>
            </div>
        <?php endif; ?>

        <?php if (!empty($content['field_display_title'])): ?>
            <h1 class="sbir-promotional-h1"><?php print render($content['field_display_title']); ?></h1>
        <?php endif; ?>

        <?php if (!empty($content['field_long_display_title'])): ?>
            <div class="centered-container">
                <h1 class="sbir-promotional-h1"><?php print render($content['field_long_display_title']); ?></h1>
            </div>
        <?php endif; ?>

        <?php if (!empty($content['body'])): ?>
            <?php print render($content['body']); ?>
        <?php endif; ?>

        <?php if (!empty($content['field_button_link_box'])): ?>
            <div class=" top-and-bottom-padding-thicker">
                <?php print render($content['field_button_link_box']); ?>
            </div>
        <?php endif; ?>

        <?php if (!empty($content['field_icon_box_section'])): ?>
            <?php print render($content['field_icon_box_section']); ?>
        <?php endif; ?>
    </div>

    <div class="clearfix">
        <?php if (!empty($content['links'])): ?>
            <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
        <?php endif; ?>

        <?php print render($content['comments']); ?>
    </div>
</article>