/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 2079
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("www.scholat.com", 
		"URL=http://www.scholat.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/portal_new/images/course.png", ENDITEM, 
		"Url=/portal_new/images/team.png", ENDITEM, 
		"Url=/portal_new/images/Invite.png", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	lr_think_time(35);

	web_link("Login", 
		"Text=Login", 
		"Snapshot=t27.inf", 
		LAST);

	lr_start_transaction("Login");

	web_submit_form("Auth.html", 
		"Snapshot=t28.inf", 
		ITEMDATA, 
		"Name=j_username", "Value=lqlz", ENDITEM, 
		"Name=j_password_ext", "Value=1183285704ll", ENDITEM, 
		"Name=j_passdec", "Value=E67B690D0BA684C018D5B28B8A8A5D6C39B5C804FE96C972", ENDITEM, 
		EXTRARES, 
		"Url=/common/layer/skin/layer.css", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/common/layer/skin/default/xubox_ico0.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=http://202.116.32.240/scholat/template/homepage/bgimages/29.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=http://202.116.32.240/scholat/images/space/headbg.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=http://202.116.32.240/scholat/course/layer/skin/layer.gzcss", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=http://202.116.32.240/scholat/course/layer/skin/layer.ext.gzcss", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=http://202.116.32.240/scholat/calendar/imgs/calendar-icon.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=http://202.116.32.240/scholat/ext-2.0.2/resources/images/default/qtip/tip-sprite.gif", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/calendar/images/noMsg.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=http://202.116.32.240/scholat/ext-2.0.2/resources/images/default/qtip/tip-anchor-sprite.gif", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/chatjs/swf/soundmanager2.swf", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/c_icon/php13_1701101719332372.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/c_icon/rjgz_1512282310222538.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/c_icon/sesm_1515425018875.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/images/space/getmoreinfo.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/images/default.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/s_icon/mozhaoxian_1444843385058.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/s_icon/huangzhihao_1444124176867.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/calendar/images/remind.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/images/homepage/addfriend.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/s_icon/tangdeyu_1438955936206.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/resources/s_icon/guobanghong_1527731669788.jpg", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/chatjs/icons/tonline.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=http://202.116.32.240/scholat/ext-2.0.2/resources/images/default/panel/tool-sprites.gif", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=/chatjs/icons/team.png", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		"Url=http://202.116.32.240/scholat/ext-2.0.2/resources/images/default/tree/leaf.gif", "Referer=http://www.scholat.com/Phomepage.html", ENDITEM, 
		LAST);

	web_custom_request("calendarCourse-getTodayCourse.html", 
		"URL=http://www.scholat.com/calendarCourse-getTodayCourse.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getDynamicMessagesMobile.html", 
		"URL=http://www.scholat.com//getDynamicMessagesMobile.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("ScholarUserType.html", 
		"URL=http://www.scholat.com//ScholarUserType.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_submit_data("getFreshEventByJs_Page.html", 
		"Action=http://www.scholat.com/getFreshEventByJs_Page.html", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=freshEventDynamicBegin", "Value=0", ENDITEM, 
		"Name=freshEventTeamBegin", "Value=0", ENDITEM, 
		"Name=freshEventCourseBegin", "Value=0", ENDITEM, 
		LAST);

	web_custom_request("getLatestVisitors.html", 
		"URL=http://www.scholat.com/getLatestVisitors.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("CalendarAjaxService.getRemindCalendars.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/CalendarAjaxService.getRemindCalendars.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/Phomepage.html\nhttpSessionId=\nscriptSessionId=AE6A2718173C1F426BE10BD68F8D1ACC98\nc0-scriptName=CalendarAjaxService\nc0-methodName=getRemindCalendars\nc0-id=0\nbatchId=0\n", 
		LAST);

	web_custom_request("ChatMng.update.dwr", 
		"URL=http://www.scholat.com/dwr/call/plaincall/ChatMng.update.dwr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=callCount=1\npage=/Phomepage.html\nhttpSessionId=\nscriptSessionId=AE6A2718173C1F426BE10BD68F8D1ACC98\nc0-scriptName=ChatMng\nc0-methodName=update\nc0-id=0\nc0-param0=string:YS\nc0-param1=string:.%2F%2Fimages%2Fdefault.png\nc0-param2=boolean:false\nbatchId=1\n", 
		LAST);

	web_custom_request("recommendFriendsByJs.html", 
		"URL=http://www.scholat.com/recommendFriendsByJs.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_submit_data("TeamTreeActionForChat.html", 
		"Action=http://www.scholat.com/TeamTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-14", ENDITEM, 
		LAST);

	web_submit_data("FriendTreeActionForChat.html", 
		"Action=http://www.scholat.com/FriendTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-12", ENDITEM, 
		LAST);

	web_submit_data("RecentTreeActionForChat.html", 
		"Action=http://www.scholat.com/RecentTreeActionForChat.html?acc_id=17449", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=node", "Value=xnode-13", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_custom_request("getAllAddFriendsMsg.html", 
		"URL=http://www.scholat.com//getAllAddFriendsMsg.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("emailM-getUnreadCount.html", 
		"URL=http://www.scholat.com//emailM-getUnreadCount.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("mobileCalendarShare.html", 
		"URL=http://www.scholat.com//mobileCalendarShare.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("SharePatent.html", 
		"URL=http://www.scholat.com//SharePatent.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("getAllCourseInvitationsAndApplications.html", 
		"URL=http://www.scholat.com//getAllCourseInvitationsAndApplications.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("AllScholarShare.html", 
		"URL=http://www.scholat.com//AllScholarShare.html", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.scholat.com/Phomepage.html", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	return 0;
}
