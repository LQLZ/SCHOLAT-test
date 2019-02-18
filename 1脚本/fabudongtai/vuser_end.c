vuser_end()
{

	lr_think_time(23);

	web_url("logout.html", 
		"URL=http://www.scholat.com/logout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_url("logout.html_2", 
		"URL=http://www.scholat.com/logout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}