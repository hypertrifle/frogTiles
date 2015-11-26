#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe__Events_EventConnection
#include <luxe/_Events/EventConnection.h>
#endif
#ifndef INCLUDED_luxe__Events_EventObject
#include <luxe/_Events/EventObject.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
namespace luxe{

Void Events_obj::__construct()
{
HX_STACK_FRAME("luxe.Events","new",0xd3c5ce63,"luxe.Events.new","luxe/Events.hx",22,0xab6dc64c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		tmp = tmp2;
	}
	HX_STACK_LINE(25)
	this->event_connections = tmp;
	HX_STACK_LINE(26)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(26)
	this->event_slots = tmp1;
	HX_STACK_LINE(27)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(27)
	this->event_filters = tmp2;
	HX_STACK_LINE(28)
	::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(28)
	this->event_queue = tmp3;
	HX_STACK_LINE(29)
	::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(29)
	this->event_schedules = tmp4;
}
;
	return null();
}

//Events_obj::~Events_obj() { }

Dynamic Events_obj::__CreateEmpty() { return  new Events_obj; }
hx::ObjectPtr< Events_obj > Events_obj::__new()
{  hx::ObjectPtr< Events_obj > _result_ = new Events_obj();
	_result_->__construct();
	return _result_;}

Dynamic Events_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Events_obj > _result_ = new Events_obj();
	_result_->__construct();
	return _result_;}

Void Events_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Events","destroy",0x8602e87d,"luxe.Events.destroy","luxe/Events.hx",36,0xab6dc64c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,destroy,(void))

Void Events_obj::clear( ){
{
		HX_STACK_FRAME("luxe.Events","clear",0x5acb3650,"luxe.Events.clear","luxe/Events.hx",41,0xab6dc64c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		::haxe::ds::StringMap tmp = this->event_schedules;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		for(::cpp::FastIterator_obj< ::snow::api::Timer > *__it = ::cpp::CreateFastIterator< ::snow::api::Timer >(tmp1);  __it->hasNext(); ){
			::snow::api::Timer schedule = __it->next();
			{
				HX_STACK_LINE(44)
				schedule->stop();
				HX_STACK_LINE(45)
				schedule = null();
			}
;
		}
		HX_STACK_LINE(48)
		::haxe::ds::StringMap tmp2 = this->event_connections;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
			::String connection = __it->next();
			{
				HX_STACK_LINE(49)
				::haxe::ds::StringMap tmp4 = this->event_connections;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				::String tmp5 = connection;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(49)
				tmp4->remove(tmp5);
			}
;
		}
		HX_STACK_LINE(52)
		::haxe::ds::StringMap tmp4 = this->event_filters;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp5);  __it->hasNext(); ){
			::String filter = __it->next();
			{
				HX_STACK_LINE(53)
				::haxe::ds::StringMap tmp6 = this->event_filters;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				::String tmp7 = filter;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				tmp6->remove(tmp7);
			}
;
		}
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp6 = this->event_slots;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp7);  __it->hasNext(); ){
			::String slot = __it->next();
			{
				HX_STACK_LINE(57)
				::haxe::ds::StringMap tmp8 = this->event_slots;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				::String tmp9 = slot;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				tmp8->remove(tmp9);
			}
;
		}
		HX_STACK_LINE(60)
		::haxe::ds::StringMap tmp8 = this->event_queue;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		Dynamic tmp9 = tmp8->keys();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp9);  __it->hasNext(); ){
			::String event = __it->next();
			{
				HX_STACK_LINE(61)
				::haxe::ds::StringMap tmp10 = this->event_queue;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(61)
				::String tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(61)
				tmp10->remove(tmp11);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,clear,(void))

bool Events_obj::does_filter_event( ::String _filter,::String _event){
	HX_STACK_FRAME("luxe.Events","does_filter_event",0xeac610dc,"luxe.Events.does_filter_event","luxe/Events.hx",67,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_filter,"_filter")
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(69)
	::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("\\*","\x4e","\x50","\x00","\x00"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::EReg _replace_stars = tmp;		HX_STACK_VAR(_replace_stars,"_replace_stars");
	HX_STACK_LINE(70)
	::String tmp1 = _filter;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	::String tmp2 = _replace_stars->replace(tmp1,HX_HCSTRING(".*?","\x83","\x0c","\x23","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	::String _final_filter = tmp2;		HX_STACK_VAR(_final_filter,"_final_filter");
	HX_STACK_LINE(71)
	::EReg tmp3 = ::EReg_obj::__new(_final_filter,HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	::EReg _final_search = tmp3;		HX_STACK_VAR(_final_search,"_final_search");
	HX_STACK_LINE(73)
	::String tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	bool tmp5 = _final_search->match(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,does_filter_event,return )

::String Events_obj::listen( ::String _event_name,Dynamic _listener){
	HX_STACK_FRAME("luxe.Events","listen",0xff562e24,"luxe.Events.listen","luxe/Events.hx",81,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event_name,"_event_name")
	HX_STACK_ARG(_listener,"_listener")
	HX_STACK_LINE(84)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	::String id = tmp1;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(85)
	::luxe::_Events::EventConnection tmp2 = ::luxe::_Events::EventConnection_obj::__new(id,_event_name,_listener);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	::luxe::_Events::EventConnection connection = tmp2;		HX_STACK_VAR(connection,"connection");
	HX_STACK_LINE(88)
	::haxe::ds::StringMap tmp3 = this->event_connections;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(88)
	::luxe::_Events::EventConnection tmp5 = connection;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	tmp3->set(tmp4,tmp5);
	HX_STACK_LINE(93)
	::EReg tmp6 = ::EReg_obj::__new(HX_HCSTRING("\\*","\x4e","\x50","\x00","\x00"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	::EReg _has_stars = tmp6;		HX_STACK_VAR(_has_stars,"_has_stars");
	HX_STACK_LINE(94)
	::String tmp7 = _event_name;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(94)
	bool tmp8 = _has_stars->match(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(94)
	if ((tmp8)){
		HX_STACK_LINE(97)
		::haxe::ds::StringMap tmp9 = this->event_filters;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		::String tmp10 = _event_name;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(97)
		bool tmp11 = tmp9->exists(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(97)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(97)
		if ((tmp12)){
			HX_STACK_LINE(99)
			::haxe::ds::StringMap tmp13 = this->event_filters;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(99)
			::String tmp14 = _event_name;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(99)
			tmp13->set(tmp14,Array_obj< ::Dynamic >::__new());
		}
		HX_STACK_LINE(103)
		::haxe::ds::StringMap tmp13 = this->event_filters;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(103)
		::String tmp14 = _event_name;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(103)
		::luxe::_Events::EventConnection tmp15 = connection;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(103)
		((Array< ::Dynamic >)(tmp13->get(tmp14)))->push(tmp15);
	}
	else{
		HX_STACK_LINE(108)
		::haxe::ds::StringMap tmp9 = this->event_slots;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(108)
		::String tmp10 = _event_name;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(108)
		bool tmp11 = tmp9->exists(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(108)
		if ((tmp12)){
			HX_STACK_LINE(110)
			::haxe::ds::StringMap tmp13 = this->event_slots;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(110)
			::String tmp14 = _event_name;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(110)
			tmp13->set(tmp14,Array_obj< ::Dynamic >::__new());
		}
		HX_STACK_LINE(114)
		::haxe::ds::StringMap tmp13 = this->event_slots;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(114)
		::String tmp14 = _event_name;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(114)
		::luxe::_Events::EventConnection tmp15 = connection;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(114)
		((Array< ::Dynamic >)(tmp13->get(tmp14)))->push(tmp15);
	}
	HX_STACK_LINE(119)
	::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(119)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,listen,return )

bool Events_obj::unlisten( ::String event_id){
	HX_STACK_FRAME("luxe.Events","unlisten",0xdde84e7d,"luxe.Events.unlisten","luxe/Events.hx",126,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event_id,"event_id")
	HX_STACK_LINE(128)
	::haxe::ds::StringMap tmp = this->event_connections;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	::String tmp1 = event_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	if ((tmp2)){
		HX_STACK_LINE(130)
		::haxe::ds::StringMap tmp3 = this->event_connections;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		::String tmp4 = event_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		::luxe::_Events::EventConnection tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		::luxe::_Events::EventConnection connection = tmp5;		HX_STACK_VAR(connection,"connection");
		HX_STACK_LINE(131)
		::haxe::ds::StringMap tmp6 = this->event_slots;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		::String tmp7 = connection->event_name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		Array< ::Dynamic > event_slot = ((Array< ::Dynamic >)(tmp6->get(tmp7)));		HX_STACK_VAR(event_slot,"event_slot");
		HX_STACK_LINE(133)
		bool tmp8 = (event_slot != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		if ((tmp8)){
			HX_STACK_LINE(134)
			::luxe::_Events::EventConnection tmp9 = connection;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			event_slot->remove(tmp9);
			HX_STACK_LINE(135)
			return true;
		}
		else{
			HX_STACK_LINE(137)
			::haxe::ds::StringMap tmp9 = this->event_filters;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			::String tmp10 = connection->event_name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(137)
			Array< ::Dynamic > event_filter = ((Array< ::Dynamic >)(tmp9->get(tmp10)));		HX_STACK_VAR(event_filter,"event_filter");
			HX_STACK_LINE(138)
			bool tmp11 = (event_filter != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(138)
			if ((tmp11)){
				HX_STACK_LINE(139)
				::luxe::_Events::EventConnection tmp12 = connection;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(139)
				event_filter->remove(tmp12);
				HX_STACK_LINE(140)
				return true;
			}
			else{
				HX_STACK_LINE(142)
				return false;
			}
		}
		HX_STACK_LINE(146)
		return true;
	}
	else{
		HX_STACK_LINE(149)
		return false;
	}
	HX_STACK_LINE(128)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,unlisten,return )

::String Events_obj::queue( ::String event_name,Dynamic properties){
	HX_STACK_FRAME("luxe.Events","queue",0x705a5254,"luxe.Events.queue","luxe/Events.hx",158,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event_name,"event_name")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(160)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	::String id = tmp1;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(163)
	::luxe::_Events::EventObject tmp2 = ::luxe::_Events::EventObject_obj::__new(id,event_name,properties);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	::luxe::_Events::EventObject event = tmp2;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(166)
	::haxe::ds::StringMap tmp3 = this->event_queue;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	::luxe::_Events::EventObject tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	tmp3->set(tmp4,tmp5);
	HX_STACK_LINE(169)
	::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(169)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,queue,return )

bool Events_obj::dequeue( ::String event_id){
	HX_STACK_FRAME("luxe.Events","dequeue",0x5fd51df3,"luxe.Events.dequeue","luxe/Events.hx",174,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event_id,"event_id")
	HX_STACK_LINE(176)
	::haxe::ds::StringMap tmp = this->event_queue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	::String tmp1 = event_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	if ((tmp2)){
		HX_STACK_LINE(178)
		::haxe::ds::StringMap tmp3 = this->event_queue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		::String tmp4 = event_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		::luxe::_Events::EventObject tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		::luxe::_Events::EventObject event = tmp5;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(179)
		event = null();
		HX_STACK_LINE(181)
		::haxe::ds::StringMap tmp6 = this->event_queue;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(181)
		::String tmp7 = event_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		tmp6->remove(tmp7);
		HX_STACK_LINE(183)
		return true;
	}
	HX_STACK_LINE(187)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,dequeue,return )

Void Events_obj::process( ){
{
		HX_STACK_FRAME("luxe.Events","process",0x52c75df2,"luxe.Events.process","luxe/Events.hx",193,0xab6dc64c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		::haxe::ds::StringMap tmp = this->event_queue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		for(::cpp::FastIterator_obj< ::luxe::_Events::EventObject > *__it = ::cpp::CreateFastIterator< ::luxe::_Events::EventObject >(tmp1);  __it->hasNext(); ){
			::luxe::_Events::EventObject event = __it->next();
			{
				HX_STACK_LINE(197)
				::String tmp2 = event->name;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(197)
				Dynamic tmp3 = event->properties;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(197)
				this->fire(tmp2,tmp3,null());
			}
;
		}
		HX_STACK_LINE(201)
		::haxe::ds::StringMap tmp2 = this->event_queue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		bool tmp4 = tmp3->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		if ((tmp4)){
			HX_STACK_LINE(203)
			this->event_queue = null();
			HX_STACK_LINE(204)
			::haxe::ds::StringMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(204)
				::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(204)
				tmp5 = tmp7;
			}
			HX_STACK_LINE(204)
			this->event_queue = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,process,(void))

bool Events_obj::fire( ::String _event_name,Dynamic _properties,Dynamic __o__tag){
Dynamic _tag = __o__tag.Default(false);
	HX_STACK_FRAME("luxe.Events","fire",0x74081853,"luxe.Events.fire","luxe/Events.hx",214,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event_name,"_event_name")
	HX_STACK_ARG(_properties,"_properties")
	HX_STACK_ARG(_tag,"_tag")
{
		HX_STACK_LINE(216)
		bool _fired = false;		HX_STACK_VAR(_fired,"_fired");
		HX_STACK_LINE(219)
		::haxe::ds::StringMap tmp = this->event_filters;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >(tmp1);  __it->hasNext(); ){
			Array< ::Dynamic > _filter = __it->next();
			{
				HX_STACK_LINE(221)
				bool tmp2 = (_filter->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(221)
				if ((tmp2)){
					HX_STACK_LINE(223)
					::luxe::_Events::EventConnection tmp3 = _filter->__get((int)0).StaticCast< ::luxe::_Events::EventConnection >();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(223)
					::String _filter_name = tmp3->event_name;		HX_STACK_VAR(_filter_name,"_filter_name");
					HX_STACK_LINE(224)
					::String tmp4 = _filter_name;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(224)
					::String tmp5 = _event_name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(224)
					bool tmp6 = this->does_filter_event(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(224)
					if ((tmp6)){
						HX_STACK_LINE(226)
						Dynamic tmp7 = _tag;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(226)
						if ((tmp7)){
							HX_STACK_LINE(227)
							Dynamic tmp8 = _properties;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(227)
							::String tmp9 = _event_name;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(227)
							int tmp10 = _filter->length;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(227)
							Dynamic tmp11 = this->tag_properties(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(227)
							_properties = tmp11;
						}
						HX_STACK_LINE(230)
						{
							HX_STACK_LINE(230)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(230)
							while((true)){
								HX_STACK_LINE(230)
								bool tmp8 = (_g < _filter->length);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(230)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(230)
								if ((tmp9)){
									HX_STACK_LINE(230)
									break;
								}
								HX_STACK_LINE(230)
								::luxe::_Events::EventConnection tmp10 = _filter->__get(_g).StaticCast< ::luxe::_Events::EventConnection >();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(230)
								::luxe::_Events::EventConnection _connection = tmp10;		HX_STACK_VAR(_connection,"_connection");
								HX_STACK_LINE(230)
								++(_g);
								HX_STACK_LINE(231)
								Dynamic tmp11 = _properties;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(231)
								_connection->listener(tmp11);
							}
						}
						HX_STACK_LINE(234)
						_fired = true;
					}
				}
			}
;
		}
		HX_STACK_LINE(241)
		::haxe::ds::StringMap tmp2 = this->event_slots;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		::String tmp3 = _event_name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(241)
		if ((tmp4)){
			HX_STACK_LINE(244)
			::haxe::ds::StringMap tmp5 = this->event_slots;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(244)
			::String tmp6 = _event_name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			Array< ::Dynamic > connections = ((Array< ::Dynamic >)(tmp5->get(tmp6)));		HX_STACK_VAR(connections,"connections");
			HX_STACK_LINE(246)
			Dynamic tmp7 = _tag;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(246)
			if ((tmp7)){
				HX_STACK_LINE(247)
				Dynamic tmp8 = _properties;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(247)
				::String tmp9 = _event_name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(247)
				int tmp10 = connections->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(247)
				Dynamic tmp11 = this->tag_properties(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(247)
				_properties = tmp11;
			}
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(251)
				while((true)){
					HX_STACK_LINE(251)
					bool tmp8 = (_g < connections->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(251)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(251)
					if ((tmp9)){
						HX_STACK_LINE(251)
						break;
					}
					HX_STACK_LINE(251)
					::luxe::_Events::EventConnection tmp10 = connections->__get(_g).StaticCast< ::luxe::_Events::EventConnection >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(251)
					::luxe::_Events::EventConnection connection = tmp10;		HX_STACK_VAR(connection,"connection");
					HX_STACK_LINE(251)
					++(_g);
					HX_STACK_LINE(252)
					Dynamic tmp11 = _properties;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(252)
					connection->listener(tmp11);
				}
			}
			HX_STACK_LINE(255)
			_fired = true;
		}
		HX_STACK_LINE(259)
		bool tmp5 = _fired;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Events_obj,fire,return )

::String Events_obj::schedule( Float time,::String event_name,Dynamic properties){
	HX_STACK_FRAME("luxe.Events","schedule",0xb1262174,"luxe.Events.schedule","luxe/Events.hx",267,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(event_name,"event_name")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(269)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	::String id = tmp1;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(271)
	::luxe::Timer tmp2 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	Float tmp3 = time;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(271)
	Dynamic tmp4 = this->fire_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(271)
	::String tmp5 = event_name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(271)
	Dynamic tmp6 = properties;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(271)
	Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(271)
	{
		HX_STACK_LINE(271)
		Dynamic f = tmp4;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(271)
		::String a1 = tmp5;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(271)
		Dynamic a2 = tmp6;		HX_STACK_VAR(a2,"a2");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::String,a1,Dynamic,f,Dynamic,a2)
		int __ArgCount() const { return 0; }
		bool run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Events.hx",271,0xab6dc64c)
			{
				HX_STACK_LINE(271)
				::String tmp8 = a1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(271)
				Dynamic tmp9 = a2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(271)
				bool tmp10 = f(tmp8,tmp9,null()).Cast< bool >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(271)
				return tmp10;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(271)
		tmp7 =  Dynamic(new _Function_2_1(a1,f,a2));
	}
	HX_STACK_LINE(271)
	::snow::api::Timer tmp8 = tmp2->schedule(tmp3,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(271)
	::snow::api::Timer _timer = tmp8;		HX_STACK_VAR(_timer,"_timer");
	HX_STACK_LINE(273)
	::haxe::ds::StringMap tmp9 = this->event_schedules;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(273)
	::String tmp10 = id;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(273)
	::snow::api::Timer tmp11 = _timer;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(273)
	tmp9->set(tmp10,tmp11);
	HX_STACK_LINE(275)
	::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(275)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC3(Events_obj,schedule,return )

bool Events_obj::unschedule( ::String schedule_id){
	HX_STACK_FRAME("luxe.Events","unschedule",0xf0c3ca0d,"luxe.Events.unschedule","luxe/Events.hx",282,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(schedule_id,"schedule_id")
	HX_STACK_LINE(284)
	::haxe::ds::StringMap tmp = this->event_schedules;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	::String tmp1 = schedule_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(284)
	if ((tmp2)){
		HX_STACK_LINE(286)
		::haxe::ds::StringMap tmp3 = this->event_schedules;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		::String tmp4 = schedule_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(286)
		::snow::api::Timer tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(286)
		::snow::api::Timer timer = tmp5;		HX_STACK_VAR(timer,"timer");
		HX_STACK_LINE(288)
		timer->stop();
		HX_STACK_LINE(290)
		::haxe::ds::StringMap tmp6 = this->event_schedules;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(290)
		::String tmp7 = schedule_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(290)
		tmp6->remove(tmp7);
		HX_STACK_LINE(292)
		return true;
	}
	HX_STACK_LINE(295)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,unschedule,return )

Dynamic Events_obj::tag_properties( Dynamic _properties,::String _name,int _count){
	HX_STACK_FRAME("luxe.Events","tag_properties",0x704843d5,"luxe.Events.tag_properties","luxe/Events.hx",301,0xab6dc64c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_properties,"_properties")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_count,"_count")
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		bool tmp = (_properties == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		if ((tmp)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Events.hx",303,0xab6dc64c)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(303)
			Dynamic tmp1 = _Function_3_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(303)
			_properties = tmp1;
		}
		HX_STACK_LINE(303)
		_properties;
	}
	HX_STACK_LINE(306)
	Dynamic tmp = _properties;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	::Reflect_obj::setField(tmp,HX_HCSTRING("_event_name_","\x90","\x5c","\x2e","\x17"),tmp1);
	HX_STACK_LINE(308)
	Dynamic tmp2 = _properties;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(308)
	int tmp3 = _count;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(308)
	::Reflect_obj::setField(tmp2,HX_HCSTRING("_event_connection_count_","\xcd","\x68","\xf2","\xd6"),tmp3);
	HX_STACK_LINE(310)
	Dynamic tmp4 = _properties;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(310)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Events_obj,tag_properties,return )


Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(event_queue,"event_queue");
	HX_MARK_MEMBER_NAME(event_connections,"event_connections");
	HX_MARK_MEMBER_NAME(event_slots,"event_slots");
	HX_MARK_MEMBER_NAME(event_filters,"event_filters");
	HX_MARK_MEMBER_NAME(event_schedules,"event_schedules");
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(event_queue,"event_queue");
	HX_VISIT_MEMBER_NAME(event_connections,"event_connections");
	HX_VISIT_MEMBER_NAME(event_slots,"event_slots");
	HX_VISIT_MEMBER_NAME(event_filters,"event_filters");
	HX_VISIT_MEMBER_NAME(event_schedules,"event_schedules");
}

Dynamic Events_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dequeue") ) { return dequeue_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"schedule") ) { return schedule_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unschedule") ) { return unschedule_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"event_queue") ) { return event_queue; }
		if (HX_FIELD_EQ(inName,"event_slots") ) { return event_slots; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"event_filters") ) { return event_filters; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tag_properties") ) { return tag_properties_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"event_schedules") ) { return event_schedules; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"event_connections") ) { return event_connections; }
		if (HX_FIELD_EQ(inName,"does_filter_event") ) { return does_filter_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Events_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"event_queue") ) { event_queue=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event_slots") ) { event_slots=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"event_filters") ) { event_filters=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"event_schedules") ) { event_schedules=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"event_connections") ) { event_connections=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Events_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("event_queue","\x6c","\xac","\x8a","\x78"));
	outFields->push(HX_HCSTRING("event_connections","\xb0","\xaf","\xa0","\x64"));
	outFields->push(HX_HCSTRING("event_slots","\x90","\x7f","\x6c","\x99"));
	outFields->push(HX_HCSTRING("event_filters","\x56","\x6d","\x50","\x23"));
	outFields->push(HX_HCSTRING("event_schedules","\x97","\x6a","\x3a","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_queue),HX_HCSTRING("event_queue","\x6c","\xac","\x8a","\x78")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_connections),HX_HCSTRING("event_connections","\xb0","\xaf","\xa0","\x64")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_slots),HX_HCSTRING("event_slots","\x90","\x7f","\x6c","\x99")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_filters),HX_HCSTRING("event_filters","\x56","\x6d","\x50","\x23")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Events_obj,event_schedules),HX_HCSTRING("event_schedules","\x97","\x6a","\x3a","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("event_queue","\x6c","\xac","\x8a","\x78"),
	HX_HCSTRING("event_connections","\xb0","\xaf","\xa0","\x64"),
	HX_HCSTRING("event_slots","\x90","\x7f","\x6c","\x99"),
	HX_HCSTRING("event_filters","\x56","\x6d","\x50","\x23"),
	HX_HCSTRING("event_schedules","\x97","\x6a","\x3a","\x12"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("does_filter_event","\x99","\xb3","\x20","\xec"),
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	HX_HCSTRING("unlisten","\x60","\xf7","\x40","\xf2"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("dequeue","\x70","\x62","\x58","\xfe"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("schedule","\x57","\xca","\x7e","\xc5"),
	HX_HCSTRING("unschedule","\xb0","\xb1","\x42","\x4b"),
	HX_HCSTRING("tag_properties","\xf8","\x38","\x17","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Events_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Events_obj::__mClass,"__mClass");
};

#endif

hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Events","\xf1","\x60","\xc8","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Events_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Events_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
