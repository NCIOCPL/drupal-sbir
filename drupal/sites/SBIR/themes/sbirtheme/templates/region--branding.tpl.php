<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($linked_logo_img || $site_name || $site_slogan): ?>
      <div class="branding-data clearfix">
        <?php if ($linked_logo_img): ?>
          <div class="logo-img">
            <?php //print $linked_logo_img; ?>
            <div class="logo-img">
              <a href="/" rel="home" title="NCI: SBIR & STTR">
                <img src="/sites/SBIR/themes/sbirtheme/logo.png" alt="SBIR Development Center" id="logo">
        <?php if ($site_name || $site_slogan): ?>
          <?php $class = $site_name_hidden && $site_slogan_hidden ? ' element-invisible' : ''; ?>
          <hgroup class="site-name-slogan<?php print $class; ?>">        
            <?php if ($site_name): ?>
              <span id="institute-name">National Cancer Institute</span>
              <?php $class = $site_name_hidden ? ' element-invisible' : ''; ?>
              <?php if ($is_front): ?>        
                <h1 class="site-name<?php print $class; ?>"><?php print 'SBIR Development Center'; ?></h1>
              <?php else: ?>
                <h2 class="site-name<?php print $class; ?>"><?php print 'SBIR Development Center'; ?></h2>
              <?php endif; ?>
            <?php endif; ?>
            <?php if ($site_slogan): ?>
              <?php $class = $site_slogan_hidden ? ' element-invisible' : ''; ?>
              <h6 class="site-slogan<?php print $class; ?>"><?php print $site_slogan; ?></h6>
            <?php endif; ?>
          </hgroup>
        <?php endif; ?>                
              </a>
            </div>
          </div>
        <?php endif; ?>
      </div>
      <div id="social-media">
        <?php print $content; ?>
      </div>
    <?php endif; ?>
  </div>
</div>