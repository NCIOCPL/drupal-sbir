<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
  <head<?php print $rdf->profile; ?>>
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>  
    <?php print $styles; ?>
    <link href='https://fonts.googleapis.com/css?family=Montserrat:400,700' rel='stylesheet' type='text/css'>
    <?php print $scripts; ?>
    <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
  </head>
  <body<?php print $attributes; ?>>
    <div id="skip-link">
      <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    </div>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>

    <!-- Display the HHS Clearance Disclaimer //-->
    <?php $show_disclaimer = variable_get('hhs_clearance_disclaimer', FALSE); ?>
    <?php if ($show_disclaimer): ?>
      <div id="hhs-disclaimer">
        <p>
        This site is undergoing remediation for compliance with Section 508.
        The remediation will be complete by July 31, 2015.</p>
        <p>In the interim, should you require any accessibility assistance with any content, please contact NCI SBIR & STTR</p>
        <p>at <a href="mailto:ncisbir@mail.nih.gov">ncisbir@mail.nih.gov</a>.</p>
      </div>
    <?php endif; ?>

    <?php
    global $base_url;
    $theme_path = $base_url . "/" . drupal_get_path('theme', 'sbirtheme');
    ?>

    <script>
      // Exit Disclaimer Adder
      //  This script looks for urls where the href points to websites not in the federal domain (.gov) and if it finds one, it appends an image to the link.  The image itself links to the exit disclaimer page.

      //The three tests in the filter fuction test for the following criteria
      // !/https?\:\/\/([a-zA-Z0-9\-]+\.)+gov/.test(this.href) : The href is a valid url that does not end in .gov
      jQuery(document).ready(function ($) {

        var path = 'http://www.cancer.gov/policies/linking';
        var altText = 'Exit Disclaimer';

        $("a").filter(function () {
          return /^https?\:\/\/([a-zA-Z0-9\-]+\.)+/.test(this.href) && !/^https?\:\/\/([a-zA-Z0-9\-]+\.)+gov/.test(this.href) && this.href != "" && this.href.indexOf(location.protocol + "//" + location.hostname) != 0 && !$(this).hasClass("add_this_btn") && !$(this).hasClass("no-exit-notification")
        }).attr('target', '_blank').after(' <a class="exitNotification" href=' + path + '><img title=' + '"' + altText + '"' + '  alt=' + '"' + altText + '"' + ' src="<?php echo $theme_path; ?>/images/exit_small.png" /></a>');
        if ($('.with-image').length == 0) {
          $('.list-spacer-image').addClass('image-collapsed');
          $('.list-item-with-image').addClass('text-collapsed');
        }

      });
    </script>

    <?php global $base_url; ?>
    <?php
    if ($base_url == 'http://sbir.cancer.gov' || $base_url == 'https://sbir.cancer.gov' || $base_url == 'http://www.sbir.cancer.gov' || $base_url == 'https://www.sbir.cancer.gov'
    ):
      ?>
      <script language="JavaScript" type="text/javascript" src="http://static.cancer.gov/webanalytics/WA_SBIR_PageLoad.js"></script>
    <?php endif; ?>
  </body>
</html>