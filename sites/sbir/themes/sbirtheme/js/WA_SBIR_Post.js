// Version 2.1
s.linkInternalFilters = wa_linkInternalFilters;
s.channel=wa_channel;

if (wa_p30 != "")
    s.prop30 = wa_p30;

if (wa_p44 != "")
    s.prop44 = wa_p44;

s.hier2= wa_channel + '|' + wa_p30 + '|' + wa_p44;

s.events='event1';
var s_code=s.t();if(s_code)document.write(s_code);

var NCIAnalytics = {

    SiteSearch : function() {
        // stub for old site search
    },

    SiteSearchWithValue : function(sender, value) {
        var s=s_gi(s_account);
        s.linkTrackVars='channel,prop14,eVar14,events';
        s.linkTrackEvents='event2';
        s.prop14=value;
        s.eVar14=value;
        s.channel=wa_channel;
        s.events='event2';
        s.tl(this,'o',wa_search_function_name);
    },

    SiteSearchInternal : function() {

        var searchValue = '';
        for(i=0; i< document.forms[0].elements.length; i++) {
            if(document.forms[0].elements[i].type == "text")
                searchValue = document.forms[0].elements[i].value;
        }

        if(searchValue!='') {
            var s=s_gi(s_account);
            s.linkTrackVars='channel,prop14,eVar14,events';
            s.linkTrackEvents='event2';
            s.prop14=s.eVar14=searchValue;
            s.channel=wa_channel;
            s.events='event2';
            s.tl(true,'o',wa_search_function_name);
        }
    },

    DownloadLink : function(linkHref,linkName){
        s.linkTrackVars='events,prop74,eVar74,prop21,eVar20,prop69,eVar69';
        var hrefExtension = linkHref.split('.').pop().toLowerCase();

        if (hrefExtension  == 'pdf')  {
            s.linkTrackEvents='event6';
            s.events='event6';
        } else if (hrefExtension  == 'mobi')  {
            s.linkTrackEvents='event21';
            s.events='event21';
        } else if (hrefExtension  == 'epub')  {
            s.linkTrackEvents='event23';
            s.events='event23';
        }
    },

    TrackDownloads : function() {

        var myLinks = document.links;
        for(var i=0;i < myLinks.length;i++) {
            var linkDownloadFileTypeArray = s.linkDownloadFileTypes.split(",");
            var doIt = false;
            for(var j=0; j< linkDownloadFileTypeArray.length; j++) {

                if(myLinks[i].href.indexOf(linkDownloadFileTypeArray[j]) > -1) {
                    doIt = true;
                    break;
                }
            }
            if (doIt) {
                var thehref = linkName = '';
                thehref = myLinks[i].href.toString();
                linkName = myLinks[i].innerHTML;
                var f =function(thehref,linkName){return function(){NCIAnalytics.DownloadLink(thehref,linkName);};}(thehref,linkName);
                myLinks[i].onclick = f;
            }
        }
    },

    GenericSiteSearch : function() {
        var forms = document.forms;
        var par = '';
        var f =function(par){return function(){NCIAnalytics.SiteSearchInternal(par);};}(par);

        if(typeof forms[0] != 'undefined')  {
            if (forms[0].addEventListener) {
                forms[0].addEventListener('submit', f, false);
            } else {
                forms[0].attachEvent('onsubmit', f);
            }
        }

    },


    PromotionalLinks : function(){
        jQuery('.sbir-button-link-box-button').bind("click", function(event){
            s.linkTrackVars='events,prop66,prop67';
            s.events='event17';
            s.linkTrackEvents='event17';
            s.prop66 = 'welanding_emailbutton';
            //s.prop67 = document.URL;
            s.prop67="D=pageName";
            s.tl(this,'o','Promotional Contact Button');
            window.console&&console.log('button link box-link clicked','s.events ', s.events,"s.prop66",s.prop66,"s.prop67 ",s.prop67);
            return true;
        });
        jQuery('.sbir-icon-box-link-hover-underline').bind("click", function(event){
            s.linkTrackVars='events,prop66,prop67';
            var boxId = event.currentTarget.id;
            window.console&&console.log('event.target.id', event.target.id, "event",event);
            s.events='event27';
            s.linkTrackEvents='event27';
            s.prop66 = 'welanding_' + boxId;
            //s.prop67 = document.URL;
            s.prop67="D=pageName";
            s.tl(this,'o','Promotional Icon Box');
            window.console&&console.log('icon box-link clicked', 's.events ', s.events,"s.prop66",s.prop66,"s.prop67 ",s.prop67);
            return true;
        });
    },


    PageAnalytics : function() {
        NCIAnalytics.GenericSiteSearch();
        NCIAnalytics.TrackDownloads();
        NCIAnalytics.PromotionalLinks();
    }

};

if (window.addEventListener) // W3C standard
{
    window.addEventListener('load', function(){NCIAnalytics.PageAnalytics();}, false);
}
else if (window.attachEvent) // Microsoft
{
    window.attachEvent('onload', function(){NCIAnalytics.PageAnalytics();});
}



