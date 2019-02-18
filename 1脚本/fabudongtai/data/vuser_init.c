/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 2079
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_add_cookie("course=clanguage; DOMAIN=www.scholat.com");

	web_url("www.scholat.com", 
		"URL=http://www.scholat.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/portal_new/images/course.png", ENDITEM, 
		"Url=/portal_new/images/Invite.png", ENDITEM, 
		"Url=/portal_new/images/team.png", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	lr_think_time(9);

	web_link("Login", 
		"Text=Login", 
		"Snapshot=t2.inf", 
		LAST);

	lr_start_transaction("Login");

	web_submit_form("Auth.html", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=j_username", "Value=lqlz", ENDITEM, 
		"Name=j_password_ext", "Value=1183285704ll", ENDITEM, 
		"Name=j_passdec", "Value=72308B68B8B911983C3DA559ED6A1A8BF90C59E1FF370157", ENDITEM, 
		LAST);

	web_url("AuthCookie.html", 
		"URL=http://www.scholat.com/AuthCookie.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/common/layer/skin/layer.css", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/common/layer/skin/default/xubox_ico0.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/images/space/headbg.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/template/homepage/bgimages/29.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/course/layer/skin/layer.css", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/course/layer/skin/layer.ext.css", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/calendar/imgs/calendar-icon.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/calendar/images/noMsg.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/ext-2.0.2/resources/images/default/qtip/tip-sprite.gif", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/ext-2.0.2/resources/images/default/qtip/tip-anchor-sprite.gif", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/chatjs/swf/soundmanager2.swf", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/chatjs/icons/tonline.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/ext-2.0.2/resources/images/default/panel/tool-sprites.gif", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=//chatjs/icons/online-avatar.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/s_icon/huangzhihao_1444124176867.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/ext-2.0.2/resources/images/default/tree/leaf.gif", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/chatjs/icons/team.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/calendar/images/remind.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/images/homepage/addfriend.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/s_icon/chenjingfen_1434872125499.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/s_icon/guobanghong_1527731669788.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/s_icon/mozhaoxian_1444843385058.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/images/default.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		LAST);

	web_custom_request("SharePatent_ajax.html", 
		"URL=http://www.scholat.com//SharePatent_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("emailM-getUnreadCount_ajax.html", 
		"URL=http://www.scholat.com//emailM-getUnreadCount_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("calendarCourse-getTodayCourse_ajax.html", 
		"URL=http://www.scholat.com/calendarCourse-getTodayCourse_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getDynamicMessagesMobile_ajax.html", 
		"URL=http://www.scholat.com//getDynamicMessagesMobile_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getAllAddFriendsMsg_ajax.html", 
		"URL=http://www.scholat.com//getAllAddFriendsMsg_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("mobileCalendarShare_ajax.html", 
		"URL=http://www.scholat.com//mobileCalendarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("AllScholarShare_ajax.html", 
		"URL=http://www.scholat.com//AllScholarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("ScholarUserType_ajax.html", 
		"URL=http://www.scholat.com//ScholarUserType_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("ChatMng.update.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.update.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/Phomepage.html\nhttpSessionId=\nscriptSessionId=A4418185C2A1E52D2513C482A418D4F423\nc0-scriptName=ChatMng\nc0-methodName=update\nc0-id=0\nc0-param0=string:Yj\nc0-param1=string:.%2F%2Fimages%2Fdefault.png\nc0-param2=boolean:false\nbatchId=1\n", 
		LAST);

	web_submit_data("FriendTreeActionForChat.html", 
		"Action=http://www.scholat.com/FriendTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-12", ENDITEM, 
		LAST);

	web_submit_data("TeamTreeActionForChat.html", 
		"Action=http://www.scholat.com/TeamTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-14", ENDITEM, 
		LAST);

	web_submit_data("RecentTreeActionForChat.html", 
		"Action=http://www.scholat.com/RecentTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-13", ENDITEM, 
		LAST);

	web_custom_request("getAllCourseInvitationsAndApplications_ajax.html", 
		"URL=http://www.scholat.com//getAllCourseInvitationsAndApplications_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("CalendarAjaxService.getRemindCalendars.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/CalendarAjaxService.getRemindCalendars.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/Phomepage.html\nhttpSessionId=\nscriptSessionId=A4418185C2A1E52D2513C482A418D4F423\nc0-scriptName=CalendarAjaxService\nc0-methodName=getRemindCalendars\nc0-id=0\nbatchId=0\n", 
		LAST);

	web_custom_request("recommendFriendsByJs_ajax.html", 
		"URL=http://www.scholat.com/recommendFriendsByJs_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getLatestVisitors.html", 
		"URL=http://www.scholat.com/getLatestVisitors.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_think_time(42);

	web_url("addPostMessage.html", 
		"URL=http://www.scholat.com/addPostMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("addPostMessage.html_2", 
		"URL=http://www.scholat.com/addPostMessage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/common/ueditor1_3_6/themes/default/css/ueditor.css", ENDITEM, 
		"Url=/common/ueditor1_3_6/themes/default/images/icons.gif", ENDITEM, 
		"Url=/common/ueditor1_3_6/themes/default/images/icons.png", ENDITEM, 
		"Url=/common/ueditor1_3_6/themes/iframe.css", ENDITEM, 
		"Url=/common/ueditor1_3_6/themes/default/images/scale.png", ENDITEM, 
		LAST);

	web_custom_request("AllScholarShare_ajax.html_2", 
		"URL=http://www.scholat.com//AllScholarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("mobileCalendarShare_ajax.html_2", 
		"URL=http://www.scholat.com//mobileCalendarShare_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getAllAddFriendsMsg_ajax.html_2", 
		"URL=http://www.scholat.com//getAllAddFriendsMsg_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("ScholarUserType_ajax.html_2", 
		"URL=http://www.scholat.com//ScholarUserType_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("SharePatent_ajax.html_2", 
		"URL=http://www.scholat.com//SharePatent_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("emailM-getUnreadCount_ajax.html_2", 
		"URL=http://www.scholat.com//emailM-getUnreadCount_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("ChatMng.update.dwr_2", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.update.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/addPostMessage.html\nhttpSessionId=\nscriptSessionId=6D374C29FD8103ED0445E295F95E1B04946\nc0-scriptName=ChatMng\nc0-methodName=update\nc0-id=0\nc0-param0=string:CI\nc0-param1=string:.%2F%2Fimages%2Fdefault.png\nc0-param2=boolean:false\nbatchId=0\n", 
		LAST);

	web_submit_data("TeamTreeActionForChat.html_2", 
		"Action=http://www.scholat.com/TeamTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-14", ENDITEM, 
		LAST);

	web_submit_data("RecentTreeActionForChat.html_2", 
		"Action=http://www.scholat.com/RecentTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-13", ENDITEM, 
		LAST);

	web_submit_data("FriendTreeActionForChat.html_2", 
		"Action=http://www.scholat.com/FriendTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-12", ENDITEM, 
		LAST);

	web_custom_request("getDynamicMessagesMobile_ajax.html_2", 
		"URL=http://www.scholat.com//getDynamicMessagesMobile_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getAllCourseInvitationsAndApplications_ajax.html_2", 
		"URL=http://www.scholat.com//getAllCourseInvitationsAndApplications_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("checkLimitCondition.html", 
		"URL=http://www.scholat.com/checkLimitCondition.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("checkMobileApplyInfo_ajax.html", 
		"URL=http://www.scholat.com//checkMobileApplyInfo_ajax.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_cookie("title=1; DOMAIN=www.scholat.com");

	lr_think_time(5);

	web_custom_request("showteamworkListByUsername.html", 
		"URL=http://www.scholat.com/showteamworkListByUsername.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		LAST);

	web_custom_request("showteamworkListByUsername.html_2", 
		"URL=http://www.scholat.com/showteamworkListByUsername.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/addPostMessage.html", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		LAST);

	return 0;
}
