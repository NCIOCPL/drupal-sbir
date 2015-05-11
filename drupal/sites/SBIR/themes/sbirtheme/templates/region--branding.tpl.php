<?php global $base_url; ?>
<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($linked_logo_img || $site_name || $site_slogan): ?>
      <div class="branding-data clearfix">
        <?php if ($linked_logo_img): ?>
          <div class="logo-img">
            <a href="/" rel="home" title="">        
              <svg width="458" height="100">
              <image alt="National Cancer Institute - SBIR Development Center" xlink:href="<?php echo $base_url; ?>/sites/SBIR/themes/sbirtheme/sbir-logo.svg" src="<?php echo $base_url; ?>/sites/SBIR/themes/sbirtheme/logo.png" width="458" height="100" />
              </svg>        
            </a>
            <?php //print $linked_logo_img; ?>
          </div>
        <?php endif; ?>
        <?php if ($site_name || $site_slogan): ?>
          <?php $class = $site_name_hidden && $site_slogan_hidden ? ' element-invisible' : ''; ?>
          <hgroup class="site-name-slogan<?php print $class; ?>">        
            <?php if ($site_name): ?>
              <?php $class = $site_name_hidden ? ' element-invisible' : ''; ?>
              <?php if ($is_front): ?>        
                <h1 class="site-name<?php print $class; ?>"><?php print $linked_site_name; ?></h1>
              <?php else: ?>
                <h2 class="site-name<?php print $class; ?>"><?php print $linked_site_name; ?></h2>
              <?php endif; ?>
            <?php endif; ?>
            <?php if ($site_slogan): ?>
              <?php $class = $site_slogan_hidden ? ' element-invisible' : ''; ?>
              <h6 class="site-slogan<?php print $class; ?>"><?php print $site_slogan; ?></h6>
            <?php endif; ?>
          </hgroup>
        <?php endif; ?>
      </div>
    <?php endif; ?>
    <div id="social-media">
      <?php print $content; ?>
    </div>
  </div>
</div>