(function ($) {
  $(document).ready(function () {
    function toggleSection(currentIndex) {

      jQuery('#toptoc ul li').removeClass('active');
      jQuery('#link_section_' + currentIndex).parent().addClass('active');
      jQuery('.accordion>section').hide();
      jQuery('.accordion>section').removeClass('active');
      jQuery('#section_' + currentIndex).show();
      jQuery('#section_' + currentIndex).addClass('active');
      jQuery('.toptoc-pager').show();

      // scroll to top of the page
      window.scrollTo(0, 0);
    }
    // give each item in the table of contents an id based on the item's ordinal position
    jQuery('#toptoc>ul>li').each(function () {
      // jQuery(this).attr('id', 'toptoc_' + parseInt(jQuery(this).index() + 1));
    });

    // give each section an id, mapping it to the toc by ordinal position
    var i = 1;
    jQuery('.accordion>section').each(function () {
      jQuery(this).attr('id', 'section_' + i++);
    });

    // append the current pager to the bottom of the page
    jQuery('.accordion>section').each(function () {
      var idParts = $(this).attr('id').split('_');
      var thisIndex = idParts[1];
      var prevSection = jQuery("#section_" + parseInt(parseInt(thisIndex) - 1));
      var nextSection = jQuery("#section_" + parseInt(parseInt(thisIndex) + 1));

      if (typeof prevSection.attr('id') == 'string') {
        prevSectionId = prevSection.attr('id');
        prevSectionTitle = prevSection.find('h3').first().text();
        jQuery(this).append('<div class="toptoc-pager"><div><span class="toptoclink" id="pager_' + prevSectionId + '"><a href="#zone-content-wrapper">&lt; Previous section</a></span><em> ' + prevSectionTitle + '</em></div></div>');
      }

      if (typeof nextSection.attr('id') == 'string') {
        nextSectionId = nextSection.attr('id');
        nextSectionTitle = nextSection.find('h3').first().text();
        jQuery(this).append('<div class="toptoc-pager"><div><span class="toptoclink" id="pager_' + nextSectionId + '"><a href="#zone-content-wrapper">Next section &gt;</a></span><em> ' + nextSectionTitle + '</em></div></div>');
      }

      // insert a 'top' link next to each section
      //var topLink = "<div><div><a class=\"toplink\" href=\"#toptoc\">Top</a></div></div>";
      //jQuery(topLink).insertAfter(jQuery(this).children('h2'));
    });

    // wrap each item in the toc in an anchor tag whose href targets the id of the section
    jQuery('#toptoc ul li').html(function (_, html) {
      return html.replace(jQuery(this).text(), '<span class="toptoclink" id="link_section_' + parseInt(jQuery(this).index() + 1) + '"><a href="#zone-content-wrapper">' + jQuery(this).text() + '</a></span>');
    });

    // after a toc link is clicked, toggle the visibility of the sections
    jQuery('#toptoc ul li span').click(function () {
      toggleSection(jQuery(this).parent().index() + 1);
    });

    // after a pager link is clicked, toggle the visibility of the sections
    jQuery('.toptoc-pager div span').click(function () {
      var idParts = jQuery(this).attr('id').split('_');
      var index = idParts[2];

      toggleSection(index);
    });

    // append 'view all' link to the toc
    jQuery('#toptoc>ul').append('<li id="toptoc-view-all"><span><a href="#zone-content-wrapper">View All Sections</a></span></li>');

    // bind click event to 'view all' link
    jQuery('#toptoc-view-all span').click(function () {
      jQuery('.accordion>section').show();
      jQuery('.toptoc-pager').hide();
      jQuery('#toptoc li').removeClass('active');
      jQuery(this).parent().addClass('active');

      // scroll to top of the page
      window.scrollTo(0, 0);
    })

    // setup initial state of the sections and toc
    jQuery('.accordion>section').hide();
    jQuery('.accordion>section').first().show();

    // made the first item in the toc active upon page load
    jQuery('#toptoc ul li').first().addClass('active');

    jQuery('section>br').remove();
  });
}(jQuery));