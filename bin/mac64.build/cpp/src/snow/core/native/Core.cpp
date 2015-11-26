#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
namespace snow{
namespace core{
namespace native{

Void Core_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.core.native.Core","new",0x23444664,"snow.core.native.Core.new","snow/core/native/Core.hx",21,0x64f2480b)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(24)
	this->start_timestamp = ((Float)0.0);
	HX_STACK_LINE(28)
	this->app = _app;
	HX_STACK_LINE(30)
	this->set_os();
}
;
	return null();
}

//Core_obj::~Core_obj() { }

Dynamic Core_obj::__CreateEmpty() { return  new Core_obj; }
hx::ObjectPtr< Core_obj > Core_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Core_obj > _result_ = new Core_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Core_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Core_obj > _result_ = new Core_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Core_obj::init( Dynamic _event_handler){
{
		HX_STACK_FRAME("snow.core.native.Core","init",0xb532088c,"snow.core.native.Core.init","snow/core/native/Core.hx",34,0x64f2480b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event_handler,"_event_handler")
		HX_STACK_LINE(36)
		Float tmp = this->timestamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		this->start_timestamp = tmp;
		HX_STACK_LINE(38)
		Dynamic tmp1 = _event_handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		Dynamic tmp3 = tmp2->snow_config->__Field(HX_HCSTRING("has_loop","\xa9","\x9c","\xf3","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/Core.hx",38,0x64f2480b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("has_loop","\xa9","\x9c","\xf3","\xf3") , tmp3,false);
					__result->Add(HX_HCSTRING("log_level","\x49","\xec","\x24","\xf4") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		Dynamic tmp4 = _Function_1_1::Block(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::snow::core::native::Core_obj::snow_init(tmp1,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,init,(void))

Void Core_obj::shutdown( ){
{
		HX_STACK_FRAME("snow.core.native.Core","shutdown",0x581d3812,"snow.core.native.Core.shutdown","snow/core/native/Core.hx",47,0x64f2480b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		::snow::core::native::Core_obj::snow_shutdown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,shutdown,(void))

Float Core_obj::timestamp( ){
	HX_STACK_FRAME("snow.core.native.Core","timestamp",0x27d1a5da,"snow.core.native.Core.timestamp","snow/core/native/Core.hx",51,0x64f2480b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	Float tmp = ::snow::core::native::Core_obj::snow_timestamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Float now = tmp;		HX_STACK_VAR(now,"now");
	HX_STACK_LINE(54)
	Float tmp1 = now;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	Float tmp2 = this->start_timestamp;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,timestamp,return )

Void Core_obj::set_os( ){
{
		HX_STACK_FRAME("snow.core.native.Core","set_os",0xc45a715d,"snow.core.native.Core.set_os","snow/core/native/Core.hx",58,0x64f2480b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		tmp->os = HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,set_os,(void))

Dynamic Core_obj::snow_init;

Dynamic Core_obj::snow_shutdown;

Dynamic Core_obj::snow_timestamp;


Core_obj::Core_obj()
{
}

void Core_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Core);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(start_timestamp,"start_timestamp");
	HX_MARK_END_CLASS();
}

void Core_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(start_timestamp,"start_timestamp");
}

Dynamic Core_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_os") ) { return set_os_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"start_timestamp") ) { return start_timestamp; }
	}
	return super::__Field(inName,inCallProp);
}

bool Core_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"snow_init") ) { outValue = snow_init; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snow_shutdown") ) { outValue = snow_shutdown; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snow_timestamp") ) { outValue = snow_timestamp; return true;  }
	}
	return false;
}

Dynamic Core_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"start_timestamp") ) { start_timestamp=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Core_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"snow_init") ) { snow_init=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snow_shutdown") ) { snow_shutdown=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snow_timestamp") ) { snow_timestamp=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Core_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("start_timestamp","\x79","\xd3","\xfa","\x3e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Core_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsFloat,(int)offsetof(Core_obj,start_timestamp),HX_HCSTRING("start_timestamp","\x79","\xd3","\xfa","\x3e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Core_obj::snow_init,HX_HCSTRING("snow_init","\x8c","\xf9","\x31","\xeb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Core_obj::snow_shutdown,HX_HCSTRING("snow_shutdown","\x12","\xa9","\x69","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Core_obj::snow_timestamp,HX_HCSTRING("snow_timestamp","\xda","\x14","\x68","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("start_timestamp","\x79","\xd3","\xfa","\x3e"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("set_os","\xe1","\x4c","\x78","\x6f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Core_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Core_obj::snow_init,"snow_init");
	HX_MARK_MEMBER_NAME(Core_obj::snow_shutdown,"snow_shutdown");
	HX_MARK_MEMBER_NAME(Core_obj::snow_timestamp,"snow_timestamp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Core_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Core_obj::snow_init,"snow_init");
	HX_VISIT_MEMBER_NAME(Core_obj::snow_shutdown,"snow_shutdown");
	HX_VISIT_MEMBER_NAME(Core_obj::snow_timestamp,"snow_timestamp");
};

#endif

hx::Class Core_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("snow_init","\x8c","\xf9","\x31","\xeb"),
	HX_HCSTRING("snow_shutdown","\x12","\xa9","\x69","\x8b"),
	HX_HCSTRING("snow_timestamp","\xda","\x14","\x68","\xd7"),
	::String(null()) };

void Core_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.Core","\x72","\x84","\x48","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Core_obj::__GetStatic;
	__mClass->mSetStaticField = &Core_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Core_obj >;
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

void Core_obj::__boot()
{
	snow_init= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_init","\x8c","\xf9","\x31","\xeb"),(int)2);
	snow_shutdown= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_shutdown","\x12","\xa9","\x69","\x8b"),(int)0);
	snow_timestamp= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_timestamp","\xda","\x14","\x68","\xd7"),(int)0);
}

} // end namespace snow
} // end namespace core
} // end namespace native
