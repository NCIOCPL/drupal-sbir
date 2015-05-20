(function ($) {
  $(document).ready(function () {

    // on node edit forms, hide the description
    // field for menu items
    $('.form-item-menu-description').hide();

    // turn off autocomplete for all password fields
    $('input[type="password"]').attr('autocomplete', 'off');

    // resize the width of the image div
    // to match the with of the actual image
    $('.image').each(function () {
      $(this).css('width', $(this).find('img').css('width'));
    });
  });
}(jQuery));