jQuery(document).ready(function () {
  
  // on node edit forms, hide the description
  // field for menu items
  jQuery('.form-item-menu-description').hide();
  
    // turn off autocomplete for all password fields
    jQuery('input[type="password"]').attr('autocomplete', 'off');  
});
