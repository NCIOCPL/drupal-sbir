(function ($) {
  $(document).ready(function () {
    function toggleSection(currentIndex) {
      jQuery('#toptoc ul li a').removeClass('active');
      jQuery('#toptoc ul li a[href="#section_' + currentIndex + '"]').addClass('active');
      jQuery('.accordion>section').hide();
      jQuery('.accordion>section').removeClass('active');
      jQuery('#section_' + currentIndex).show();
      jQuery('#section_' + currentIndex).addClass('active');
    }
    // give each item in the table of contents an id based on the item's ordinal position
    jQuery('#toptoc>ul>li').each(function () {
      // jQuery(this).attr('id', 'toptoc_' + parseInt(jQuery(this).index() + 1));
    });

    // give each section an id, mapping it to the toc by ordinal position
    jQuery('.accordion>section').each(function () {
      jQuery(this).attr('id', 'section_' + parseInt(jQuery(this).index() + 1));
    });

    // append the current pager to the bottom of the page
    jQuery('.accordion>section').each(function () {

      var prevSection = jQuery(this).prev();
      var nextSection = jQuery(this).next();
//console.log(typeof prevSection.attr('id'));
      if (typeof prevSection.attr('id') == 'string') {
        //alert(jQuery(this).attr('id'));
        prevSectionId = prevSection.attr('id');
        //alert(prevSectionId);
        prevSectionTitle = prevSection.children().first().text();
        jQuery('#section_' + parseInt(jQuery(this).index() + 1)).append('<div class="toptoc-pager"><div><a href="#' + prevSectionId + '">&lt; Previous section</a><em> ' + prevSectionTitle + '</em></div></div>');
      }

      if (typeof nextSection.attr('id') == 'string') {
        nextSectionId = nextSection.attr('id');
        nextSectionTitle = nextSection.children().first().text();
        jQuery('#section_' + parseInt(jQuery(this).index() + 1)).append('<div class="toptoc-pager"><div><a href="#' + nextSectionId + '">Next section &gt;</a><em> ' + nextSectionTitle + '</em></div></div>');
      }

      // insert a 'top' link next to each section
      /*
      var topLink = "<div><div><a class=\"toplink\" href=\"#toptoc\">Top</a></div></div>";
      jQuery(topLink).insertAfter(jQuery(this).children('h2'));
      */
    });
    

    // wrap each item in the toc in an anchor tag whose href targets the id of the section
    jQuery('#toptoc ul li').html(function (_, html) {
      return html.replace(jQuery(this).text(), '<a href="#section_' + parseInt(jQuery(this).index() + 1) + '">' + jQuery(this).text() + '</a>');
    });

    // after a toc link is clicked, toggle the visibility of the sections
    jQuery('#toptoc ul li a').click(function () {
      toggleSection(jQuery(this).parent().index() + 1);
    });

    // after a pager link is clicked, toggle the visibility of the sections
    jQuery('.toptoc-pager a').click(function () {
      var hrefParts = jQuery(this).attr('href').split('_');
      var index = hrefParts[1];

      toggleSection(index);
    });

    // append 'view all' link to the toc
    jQuery('#toptoc>ul').append('<li><a id="toptoc-view-all" href="#">View All Sections</a></li>');

    // bind click event to 'view all' link
    jQuery('#toptoc-view-all').click(function () {
      jQuery('.accordion>section').show();
      jQuery('.toptoc-pager').remove();
    })

    // setup initial state of the sections and toc
    jQuery('.accordion>section').hide();
    jQuery('.accordion>section').first().show();
  });
}(jQuery));