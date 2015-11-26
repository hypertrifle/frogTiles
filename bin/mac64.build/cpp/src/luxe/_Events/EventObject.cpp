#include <hxcpp.h>

#ifndef INCLUDED_luxe__Events_EventObject
#include <luxe/_Events/EventObject.h>
#endif
namespace luxe{
namespace _Events{

Void EventObject_obj::__construct(::String _id,::String _event_name,Dynamic _event_properties)
{
HX_STACK_FRAME("luxe._Events.EventObject","new",0xc4a57f7d,"luxe._Events.EventObject.new","luxe/Events.hx",343,0xab6dc64c)
HX_STACK_THIS(this)
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_event_name,"_event_name")
HX_STACK_ARG(_event_properties,"_event_properties")
{
	HX_STACK_LINE(345)
	this->id = _id;
	HX_STACK_LINE(346)
	this->name = _event_name;
	HX_STACK_LINE(347)
	this->properties = _event_properties;
}
;
	return null();
}

//EventObject_obj::~EventObject_obj() { }

Dynamic EventObject_obj::__CreateEmpty() { return  new EventObject_obj; }
hx::ObjectPtr< EventObject_obj > EventObject_obj::__new(::String _id,::String _event_name,Dynamic _event_properties)
{  hx::ObjectPtr< EventObject_obj > _result_ = new EventObject_obj();
	_result_->__construct(_id,_event_name,_event_properties);
	return _result_;}

Dynamic EventObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventObject_obj > _result_ = new EventObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


EventObject_obj::EventObject_obj()
{
}

void EventObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventObject);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void EventObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic EventObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EventObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void EventObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(EventObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(EventObject_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EventObject_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventObject_obj::__mClass,"__mClass");
};

#endif

hx::Class EventObject_obj::__mClass;

void EventObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe._Events.EventObject","\x0b","\xfd","\xbe","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &EventObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventObject_obj >;
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
