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
    jQuery('.accordion>section').each(function () {
      jQuery(this).attr('id', 'section_' + parseInt(jQuery(this).index() + 1));
    });

    // append the current pager to the bottom of the page
    jQuery('.accordion>section').each(function () {

      var prevSection = jQuery(this).prev();
      var nextSection = jQuery(this).next();

      if (typeof prevSection.attr('id') == 'string') {
        //alert(jQuery(this).attr('id'));
        prevSectionId = prevSection.attr('id');

        //alert(prevSectionId);;
        prevSectionTitle = prevSection.children().first().next().text();
        jQuery(this).append('<div class="toptoc-pager"><div><span class="toptoclink" id="pager_' + prevSectionId + '">&lt; Previous section</span><em> ' + prevSectionTitle + '</em></div></div>');
      }

      if (typeof nextSection.attr('id') == 'string') {
        nextSectionId = nextSection.attr('id');
        nextSectionTitle = nextSection.children().first().next().text();
        jQuery(this).append('<div class="toptoc-pager"><div><span class="toptoclink" id="pager_' + nextSectionId + '">Next section &gt;</span><em> ' + nextSectionTitle + '</em></div></div>');
      }

      // insert a 'top' link next to each section
      /*
      var topLink = "<div><div><a class=\"toplink\" href=\"#toptoc\">Top</a></div></div>";
      jQuery(topLink).insertAfter(jQuery(this).children('h2'));
      */
    });
    

    // wrap each item in the toc in an anchor tag whose href targets the id of the section
    jQuery('#toptoc ul li').html(function (_, html) {
      return html.replace(jQuery(this).text(), '<span class="toptoclink" id="link_section_' + parseInt(jQuery(this).index() + 1) + '">' + jQuery(this).text() + '</span>');
    });

    // after a toc link is clicked, toggle the visibility of the sections
    jQuery('#toptoc ul li span').click(function () {
      toggleSection(jQuery(this).parent().index() + 1);
    });

    // after a pager link is clicked, toggle the visibility of the sections
    jQuery('.toptoc-pager div span').click(function () {
      var idParts = jQuery(this).attr('id').split('_');
      var index = idParts[2];
      console.log(index);

      toggleSection(index);
    });

    // append 'view all' link to the toc
    jQuery('#toptoc>ul').append('<li id="toptoc-view-all"><span>View All Sections</span></li>');

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