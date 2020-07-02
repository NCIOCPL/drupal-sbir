// Version 2.1

/*var domain = location.hostname,
    preScriptElement = document.createElement("script"),
    scodeScriptElement = document.createElement("script"),
    postScriptElement = document.createElement("script");


preScriptElement.src = "//" + domain + "/webanalytics/WA_SBIR_Pre.js";
scodeScriptElement.src = "//" + domain + "/webanalytics/s_code.js";
postScriptElement.src = "//" + domain + "/webanalytics/WA_SBIR_Post.js";

preScriptElement.type = 'text/javascript';
scodeScriptElement.src = 'text/javascript';
postScriptElement.src = 'text/javascript';

document.head.appendChild(preScriptElement);
document.head.appendChild(scodeScriptElement);
document.head.appendChild(postScriptElement);
*/
//document.write('<script type="text/javascript" src="/sites/sbir/themes/sbirtheme/js/WA_SBIR_Pre.js" ></script>');
//document.write('<script type="text/javascript" src="/sites/sbir/themes/sbirtheme/js/s_code.js" ></script>');
//document.write('<script type="text/javascript" src="/sites/sbir/themes/sbirtheme/js/WA_SBIR_Post.js" ></script>');

document.write('<script type="text/javascript" src="//static.cancer.gov/webanalytics/WA_SBIR_Pre.js" ></script>');
document.write('<script type="text/javascript" src="//static.cancer.gov/webanalytics/s_code.js" ></script>');
document.write('<script type="text/javascript" src="//static.cancer.gov/webanalytics/WA_SBIR_Post.js" ></script>');

var s = document.createElement('script');
s.type='text/javascript';
s.id="_fed_an_ua_tag";
s.src='https://dap.digitalgov.gov/Universal-Federated-Analytics-Min.js?agency=HHS&subagency=NCI';
document.head.appendChild(s);

// Add the line below just before the end body tag to execute Omniture page-load event:
// <script language="JavaScript" type="text/javascript" src="//static.cancer.gov/webanalytics/WA_SBIR_PageLoad.js"></script>