(function ($) {
  $(document).ready(function () {

    // on node edit forms, hide the description
    // field for menu items
   // $('.form-item-menu-description').hide();

    // turn off autocomplete for all password fields
    $('input[type="password"]').attr('autocomplete', 'off');
  });
  
  $('a[href="/admin/structure/menu"]').parent().hide();
  $('.page-admin-structure ul.admin-list li').css('border', 'none');
}(jQuery));