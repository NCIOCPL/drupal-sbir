<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
  <head<?php print $rdf->profile; ?>>
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>  
    <?php print $styles; ?>
    <!--<link href='http://fonts.googleapis.com/css?family=Montserrat:400,700' rel='stylesheet' type='text/css'>-->
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

    <?php
    global $base_url;
    $theme_path = $base_url . "/" . drupal_get_path('theme', 'sbirtheme');
    ?>
    <!--
    <script>
      // Exit Disclaimer Adder
      //  This script looks for urls where the href points to websites not in the federal domain (.gov) and if it finds one, it appends an image to the link.  The image itself links to the exit disclaimer page.

      //The three tests in the filter fuction test for the following criteria
      // !/https?\:\/\/([a-zA-Z0-9\-]+\.)+gov/.test(this.href) : The href is a valid url that does not end in .gov
      jQuery(document).ready(function ($) {

        var path = $('meta[name="english-linking-policy"]').attr('content');
        var altText = 'Exit Disclaimer';

        $("a").filter(function () {
          return /^https?\:\/\/([a-zA-Z0-9\-]+\.)+/.test(this.href) && !/^https?\:\/\/([a-zA-Z0-9\-]+\.)+gov/.test(this.href) && this.href != "" && this.href.indexOf(location.protocol + "//" + location.hostname) != 0 && !$(this).hasClass("add_this_btn") && !$(this).hasClass("no-exit-notification")
        }).after(' <a class="exitNotification" href=' + path + '><img title=' + '"' + altText + '"' + '  alt=' + '"' + altText + '"' + ' src="<?php echo $theme_path; ?>/images/exit_small.png" /></a>');
        if ($('.with-image').length == 0) {
          $('.list-spacer-image').addClass('image-collapsed');
          $('.list-item-with-image').addClass('text-collapsed');
        }

      });
    </script>

<script language="JavaScript" type="text/javascript" src="http://static.cancer.gov/webanalytics/WA_SBIR_PageLoad.js"></script>
-->
  </body>
</html>