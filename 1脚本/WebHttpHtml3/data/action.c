Action()
{

	lr_think_time(25);

	lr_start_transaction("Search");

	web_custom_request("ChatMng.logout.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.logout.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/Phomepage.html\nhttpSessionId=\nscriptSessionId=AE6A2718173C1F426BE10BD68F8D1ACC98\nc0-scriptName=ChatMng\nc0-methodName=logout\nc0-id=0\nc0-param0=string:17449\nc0-param1=string:YS\nc0-param2=boolean:false\nbatchId=2\n", 
		LAST);

	web_reg_find("Text=SCHOLAT Ñ§ÕßÍø", 
		LAST);

	web_url("portalSearchScholarS.html", 
		"URL=http://www.scholat.com/portalSearchScholarS.html?q=%E6%9D%8E%E7%A5%BA", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/images/scholat_scholar.png", "Referer=http://www.scholat.com/portalSearchScholarS.html?q=%E6%9D%8E%E7%A5%BA", ENDITEM, 
		LAST);

	lr_end_transaction("Search",LR_AUTO);

	return 0;
}
