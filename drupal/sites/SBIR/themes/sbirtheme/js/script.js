(function ($) {
  $(document).ready(function () {

    // remove footer field from left home page block if the
    // footer is empty
    $('.home-left-block-body .views-field-field-footer').each(function () {
      if ($(this).children('.field-content').html().length == 0) {
        $(this).remove();
      }
    });
    $('#resources-for').parent().parent().css('padding', '0 20px 10px 20px');

    // dropdown menu should be at least as wide
    // as the top level menu item
    dropdown_menus = $('#zone-menu-wrapper #zone-menu #region-menu #block-superfish-1 li.sf-depth-1>ul');
    $(dropdown_menus).each(function () {
      jQuery(this).css('width', '200px');

      level_one_width = $(this).parent().css('width');

      if (parseInt(level_one_width) > 200) {
        $(this).css('width', parseInt(level_one_width) + 5 + "px");
      }
    });

    // massage the footer menu
    $('<br /><br />').insertAfter('.footer-break-point');
    $('<sup class="sup">&reg;</sup>').insertAfter('a[title="NIH ... Turning Discovery Into Health"]');
    $('a[title="NIH ... Turning Discovery Into Health"]').parent().css('padding-top', '15px');

    // adjust width of grid-9 to 960px if there is no left nav
    if ($('.panel-panel.grid-3').children().html() == "") {
      $('.container-12 .grid-9 ').addClass('full-width');
    }

    // align the dates with the body text
    if ($('.panel-panel.grid-9').length) {
      var offset = $('.panel-panel.grid-9').offset().left;
      $('div#sbir-dates').css('margin-left', offset + 20 + 'px');
    }

    //$('#zone-footer-wrapper a').attr('target', '');
    
    // resize the width of the image div
    // to match the with of the actual image    
    $('.image').each(function () {
      $(this).css('width', $(this).find('img').css('width'));
    });    
  });
}(jQuery));