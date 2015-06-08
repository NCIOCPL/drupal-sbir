<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>  
  <div<?php print $content_attributes; ?>>    
    <?php if ($breadcrumb): ?>
              <!--<div id="breadcrumb" class="grid-<?php print $columns; ?>"><?php print $breadcrumb; ?></div>-->
    <?php endif; ?>    
    <?php if ($messages): ?>
      <div id="messages" class="grid-<?php print $columns; ?>"><?php print $messages; ?></div>
    <?php endif; ?>
    <?php print $content; ?>
    <?php
    if ((arg(0) == "search") &&
        arg(1) == "node" &&
        arg(2) == "") :
      ?>
      <div class="block block-system block-main block-system-main odd block-without-title" id="block-system-main">
        <div class="block-inner clearfix">
          <div class="content clearfix">
            <h2>Your search yielded no results</h2>
            <ul>
              <li>Check if your spelling is correct.</li>
              <li>Remove quotes around phrases to search for each word individually. <em>bike shed</em> will often show more results than <em>"bike shed"</em>.</li>
              <li>Consider loosening your query with <em>OR</em>. <em>bike OR shed</em> will often show more results than <em>bike shed</em>.</li>
            </ul>
          </div>
        </div>
      </div>      
    <?php endif; ?>
  </div>
  <?php if ($wrapper): ?></div><?php endif; ?>