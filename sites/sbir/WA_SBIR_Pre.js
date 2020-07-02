var wa_production_report_suite = 'nciod-nciofficeofthedirector,ncienterprise';
var wa_dev_report_suite = 'nciod-nciofficeofthedirector-dev,ncienterprise-dev';
var wa_channel = 'OD - SBIR';
var wa_search_function_name = 'search';
var wa_production_url_match = 'sbir.cancer.gov';
var wa_linkInternalFilters = 'javascript:,';
var currentHostname = location.hostname.toLowerCase();
wa_linkInternalFilters += currentHostname;
var wa_is_production_report_suite = false;
var wa_p30 = "";
var wa_p44 = "";
var wa_hier2 = "";
var page_URL = document.URL;

if (page_URL.indexOf(wa_production_url_match) != -1) {
    // production
    var s_account = wa_production_report_suite;
}
else {
    // non-production
    var s_account = wa_dev_report_suite;
}

var pageNameOverride = currentHostname + location.pathname.toLowerCase();