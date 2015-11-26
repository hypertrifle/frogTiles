#include <hxcpp.h>

#ifndef INCLUDED_luxe__Events_EventConnection
#include <luxe/_Events/EventConnection.h>
#endif
namespace luxe{
namespace _Events{

Void EventConnection_obj::__construct(::String _id,::String _event_name,Dynamic _listener)
{
HX_STACK_FRAME("luxe._Events.EventConnection","new",0x937c525c,"luxe._Events.EventConnection.new","luxe/Events.hx",324,0xab6dc64c)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_event_name,"_event_name")
HX_STACK_ARG(_listener,"_listener")
{
	HX_STACK_LINE(326)
	this->id = _id;
	HX_STACK_LINE(327)
	this->listener = _listener;
	HX_STACK_LINE(328)
	this->event_name = _event_name;
}
;
	return null();
}

//EventConnection_obj::~EventConnection_obj() { }

Dynamic EventConnection_obj::__CreateEmpty() { return  new EventConnection_obj; }
hx::ObjectPtr< EventConnection_obj > EventConnection_obj::__new(::String _id,::String _event_name,Dynamic _listener)
{  hx::ObjectPtr< EventConnection_obj > _result_ = new EventConnection_obj();
	_result_->__construct(_id,_event_name,_listener);
	return _result_;}

Dynamic EventConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventConnection_obj > _result_ = new EventConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


EventConnection_obj::EventConnection_obj()
{
}

void EventConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventConnection);
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(event_name,"event_name");
	HX_MARK_END_CLASS();
}

void EventConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(event_name,"event_name");
}

Dynamic EventConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"event_name") ) { return event_name; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"event_name") ) { event_name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EventConnection_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void EventConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("event_name","\xd0","\x27","\x3e","\xe5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EventConnection_obj,listener),HX_HCSTRING("listener","\x74","\x00","\x32","\x38")},
	{hx::fsString,(int)offsetof(EventConnection_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(EventConnection_obj,event_name),HX_HCSTRING("event_name","\xd0","\x27","\x3e","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("listener","\x74","\x00","\x32","\x38"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("event_name","\xd0","\x27","\x3e","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventConnection_obj::__mClass,"__mClass");
};

#endif

hx::Class EventConnection_obj::__mClass;

void EventConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe._Events.EventConnection","\x6a","\x34","\x9d","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &EventConnection_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventConnection_obj >;
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
} // end namespace _Events
