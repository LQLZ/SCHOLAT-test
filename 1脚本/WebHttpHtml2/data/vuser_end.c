vuser_end()
{

	lr_think_time(47);

	web_custom_request("ChatMng.logout.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.logout.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/editUserProfile.html", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/editUserProfile.html\nhttpSessionId=\nscriptSessionId=38B3B13B296435551AAE4D33227ABFDB486\nc0-scriptName=ChatMng\nc0-methodName=logout\nc0-id=0\nc0-param0=string:17449\nc0-param1=string:Xn\nc0-param2=boolean:false\nbatchId=1\n", 
		LAST);

	web_url("logout.html", 
		"URL=http://www.scholat.com/logout.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/editUserProfile.html", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}