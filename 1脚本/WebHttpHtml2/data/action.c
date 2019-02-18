Action()
{

	lr_think_time(33);

	lr_start_transaction("SeeImfo");

	web_url("editUserProfile.html", 
		"URL=http://www.scholat.com/editUserProfile.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("getDynamicMessagesMobile.html_2", 
		"URL=http://www.scholat.com//getDynamicMessagesMobile.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/editUserProfile.html", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getAllAddFriendsMsg.html_2", 
		"URL=http://www.scholat.com//getAllAddFriendsMsg.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/editUserProfile.html", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=http://202.116.32.240/scholat/images/avatar/bgshadow.gif", "Referer=http://www.scholat.com/setavatar.html?currentPicUrl=/images/default.png", ENDITEM, 
		"Url=../teamwork/img/FileBtn.jpg", "Referer=http://www.scholat.com/setavatar.html?currentPicUrl=/images/default.png", ENDITEM, 
		"Url=http://202.116.32.240/scholat/images/avatar/canvas.png", "Referer=http://www.scholat.com/setavatar.html?currentPicUrl=/images/default.png", ENDITEM, 
		"Url=http://202.116.32.240/scholat/images/avatar/packslider.png", "Referer=http://www.scholat.com/setavatar.html?currentPicUrl=/images/default.png", ENDITEM, 
		"Url=http://202.116.32.240/scholat/images/avatar/track.png", "Referer=http://www.scholat.com/setavatar.html?currentPicUrl=/images/default.png", ENDITEM, 
		LAST);

	web_custom_request("ChatMng.update.dwr_2", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.update.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/editUserProfile.html", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/editUserProfile.html\nhttpSessionId=\nscriptSessionId=38B3B13B296435551AAE4D33227ABFDB486\nc0-scriptName=ChatMng\nc0-methodName=update\nc0-id=0\nc0-param0=string:Xn\nc0-param1=string:.%2F%2Fimages%2Fdefault.png\nc0-param2=boolean:false\nbatchId=0\n", 
		LAST);

	web_submit_data("FriendTreeActionForChat.html_2", 
		"Action=http://www.scholat.com/FriendTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/editUserProfile.html", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-12", ENDITEM, 
		LAST);

	web_submit_data("RecentTreeActionForChat.html_2", 
		"Action=http://www.scholat.com/RecentTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/editUserProfile.html", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-13", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_submit_data("TeamTreeActionForChat.html_2", 
		"Action=http://www.scholat.com/TeamTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/editUserProfile.html", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-14", ENDITEM, 
		LAST);

	web_find("Text Check", "What=ÐÕÃû/Name", LAST);

	web_find("Text Check", "What=Please upload your avatar file", LAST);

	web_find("Text Check", "What=SCHOLAT Ñ§ÕßÍø", LAST);

	lr_end_transaction("SeeImfo",LR_AUTO);

	return 0;
}
