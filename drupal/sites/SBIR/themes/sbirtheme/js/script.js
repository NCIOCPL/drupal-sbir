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
    dropdown_menus = $('#zone-menu-wrapper #zone-menu #region-menu #block-superfish-1 li.sf-depth-1 ul');
    $(dropdown_menus).each(function () {
      level_one_menu_item = $(this).prev();
      width = level_one_menu_item.css('width');
      //console.log(width);
      $(this).css('width', width);
    });

    // massage the footer menu
    $('<br /><br />').insertAfter('.footer-break-point');
    $('<sup class="sup">&reg;</sup>').insertAfter('a[title="NIH ... Turning Discovery Into Health"]');
    $('a[title="NIH ... Turning Discovery Into Health"]').parent().css('padding-top', '15px');

    // adjust width of grid-9 to 960px if there is no left nav
    if (jQuery('.grid-3').children().html() == "") {
      $('.grid-9').css('width', '960px');
    }

    var offset = $('.grid-9').offset().left;
    $('div#sbir-dates').css('margin-left', offset + 20 + 'px');
  });
}(jQuery));