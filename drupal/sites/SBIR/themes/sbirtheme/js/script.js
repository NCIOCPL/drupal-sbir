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
}(jQuery));