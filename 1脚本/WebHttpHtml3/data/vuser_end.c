vuser_end()
{

	web_url("logout.html", 
		"URL=http://www.scholat.com/logout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/portalSearchScholarS.html?q=%E6%9D%8E%E7%A5%BA", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}