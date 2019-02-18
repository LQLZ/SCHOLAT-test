Action()
{

	lr_think_time(17);

	lr_start_transaction("fabudongtai");

	web_custom_request("ChatMng.logout.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.logout.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/addPostMessage.html\nhttpSessionId=\nscriptSessionId=6D374C29FD8103ED0445E295F95E1B04946\nc0-scriptName=ChatMng\nc0-methodName=logout\nc0-id=0\nc0-param0=string:17449\nc0-param1=string:CI\nc0-param2=boolean:false\nbatchId=1\n", 
		LAST);

	web_submit_data("savePostMessage.html", 
		"Action=http://www.scholat.com/savePostMessage.html", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=postMessage.id", "Value=", ENDITEM, 
		"Name=postMessage.userId", "Value=", ENDITEM, 
		"Name=teamworkIds", "Value=", ENDITEM, 
		"Name=pushToMyTeams", "Value=", ENDITEM, 
		"Name=courseIds", "Value=", ENDITEM, 
		"Name=pushToCourse", "Value=", ENDITEM, 
		"Name=collectPMId", "Value=", ENDITEM, 
		"Name=postMessage.title", "Value=1", ENDITEM, 
		"Name=postMessage.security", "Value=0", ENDITEM, 
		"Name=topTime", "Value=on", ENDITEM, 
		"Name=discuss", "Value=on", ENDITEM, 
		"Name=security797", "Value=0", ENDITEM, 
		"Name=postMessage.content", "Value=<p>1</p>", ENDITEM, 
		LAST);

	web_url("postMessage.html", 
		"URL=http://www.scholat.com/postMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/images/loadingAnimation.gif", ENDITEM, 
		LAST);

	web_custom_request("getDynamicMessagesMobile_ajax.html_3", 
		"URL=http://www.scholat.com//getDynamicMessagesMobile_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getAllAddFriendsMsg_ajax.html_3", 
		"URL=http://www.scholat.com//getAllAddFriendsMsg_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("AllScholarShare_ajax.html_3", 
		"URL=http://www.scholat.com//AllScholarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("SharePatent_ajax.html_3", 
		"URL=http://www.scholat.com//SharePatent_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("mobileCalendarShare_ajax.html_3", 
		"URL=http://www.scholat.com//mobileCalendarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("emailM-getUnreadCount_ajax.html_3", 
		"URL=http://www.scholat.com//emailM-getUnreadCount_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("checkMobileApplyInfo_ajax.html_2", 
		"URL=http://www.scholat.com//checkMobileApplyInfo_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getAllCourseInvitationsAndApplications_ajax.html_3", 
		"URL=http://www.scholat.com//getAllCourseInvitationsAndApplications_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("ScholarUserType_ajax.html_3", 
		"URL=http://www.scholat.com//ScholarUserType_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("ChatMng.update.dwr_3", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.update.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/postMessage.html\nhttpSessionId=\nscriptSessionId=577845DE2AE9B6CB4CC2B93E6DC8C040841\nc0-scriptName=ChatMng\nc0-methodName=update\nc0-id=0\nc0-param0=string:fQ\nc0-param1=string:.%2F%2Fimages%2Fdefault.png\nc0-param2=boolean:false\nbatchId=0\n", 
		LAST);

	web_submit_data("TeamTreeActionForChat.html_3", 
		"Action=http://www.scholat.com/TeamTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-14", ENDITEM, 
		LAST);

	web_submit_data("RecentTreeActionForChat.html_3", 
		"Action=http://www.scholat.com/RecentTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-13", ENDITEM, 
		LAST);

	web_submit_data("FriendTreeActionForChat.html_3", 
		"Action=http://www.scholat.com/FriendTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/postMessage.html", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-12", ENDITEM, 
		LAST);

	web_find("Text Check", "What=SCHOLAT Ñ§ÕßÍø", LAST);

	lr_end_transaction("fabudongtai",LR_AUTO);

	return 0;
}
