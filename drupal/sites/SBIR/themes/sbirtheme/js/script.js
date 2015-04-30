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
  });
  $('<br /><br />').insertAfter('.footer-break-point');

  //dropdown menu should be at least as wide
  // as the top level menu item
  dropdown_menus = $('#zone-menu-wrapper #zone-menu #region-menu #block-superfish-1 li.sf-depth-1 ul');
  $(dropdown_menus).each(function () {
    level_one_menu_item = $(this).prev();
    console.log(level_one_menu_item.css('width'));
  });
}(jQuery));