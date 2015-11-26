#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_SystemEventType_Impl_
#include <snow/types/_Types/SystemEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void SystemEventType_Impl__obj::__construct()
{
	return null();
}

//SystemEventType_Impl__obj::~SystemEventType_Impl__obj() { }

Dynamic SystemEventType_Impl__obj::__CreateEmpty() { return  new SystemEventType_Impl__obj; }
hx::ObjectPtr< SystemEventType_Impl__obj > SystemEventType_Impl__obj::__new()
{  hx::ObjectPtr< SystemEventType_Impl__obj > _result_ = new SystemEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic SystemEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemEventType_Impl__obj > _result_ = new SystemEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int SystemEventType_Impl__obj::unknown;

int SystemEventType_Impl__obj::init;

int SystemEventType_Impl__obj::ready;

int SystemEventType_Impl__obj::update;

int SystemEventType_Impl__obj::shutdown;

int SystemEventType_Impl__obj::window;

int SystemEventType_Impl__obj::input;

int SystemEventType_Impl__obj::quit;

int SystemEventType_Impl__obj::app_terminating;

int SystemEventType_Impl__obj::app_lowmemory;

int SystemEventType_Impl__obj::app_willenterbackground;

int SystemEventType_Impl__obj::app_didenterbackground;

int SystemEventType_Impl__obj::app_willenterforeground;

int SystemEventType_Impl__obj::app_didenterforeground;

int SystemEventType_Impl__obj::file;

::String SystemEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.SystemEventType_Impl_","toString",0xaaa8fb29,"snow.types._Types.SystemEventType_Impl_.toString","snow/types/Types.hx",537,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(538)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(538)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(539)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(540)
			tmp1 = HX_HCSTRING("init","\x10","\x3b","\xbb","\x45");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(541)
			tmp1 = HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(542)
			tmp1 = HX_HCSTRING("update","\x09","\x86","\x05","\x87");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(543)
			tmp1 = HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(544)
			tmp1 = HX_HCSTRING("window","\xf0","\x93","\x8c","\x52");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(545)
			tmp1 = HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(546)
			tmp1 = HX_HCSTRING("quit","\xcf","\x3f","\x0a","\x4b");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(547)
			tmp1 = HX_HCSTRING("app_terminating","\x00","\x4e","\xfc","\x45");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(548)
			tmp1 = HX_HCSTRING("app_lowmemory","\x37","\xb2","\x92","\x12");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(549)
			tmp1 = HX_HCSTRING("app_willenterbackground","\x56","\x2e","\xbc","\xdd");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(550)
			tmp1 = HX_HCSTRING("app_didenterbackground","\xc5","\x60","\x0c","\x7f");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(551)
			tmp1 = HX_HCSTRING("app_willenterforeground","\x2b","\xb3","\x8d","\xc8");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(552)
			tmp1 = HX_HCSTRING("app_didenterforeground","\x9a","\xe5","\xdd","\x69");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(553)
			tmp1 = HX_HCSTRING("file","\x7c","\xce","\xbb","\x43");
		}
		;break;
		default: {
			HX_STACK_LINE(554)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(538)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemEventType_Impl__obj,toString,return )


SystemEventType_Impl__obj::SystemEventType_Impl__obj()
{
}

bool SystemEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::init,HX_HCSTRING("init","\x10","\x3b","\xbb","\x45")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::ready,HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::update,HX_HCSTRING("update","\x09","\x86","\x05","\x87")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::shutdown,HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::window,HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::input,HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::quit,HX_HCSTRING("quit","\xcf","\x3f","\x0a","\x4b")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::app_terminating,HX_HCSTRING("app_terminating","\x00","\x4e","\xfc","\x45")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::app_lowmemory,HX_HCSTRING("app_lowmemory","\x37","\xb2","\x92","\x12")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::app_willenterbackground,HX_HCSTRING("app_willenterbackground","\x56","\x2e","\xbc","\xdd")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::app_didenterbackground,HX_HCSTRING("app_didenterbackground","\xc5","\x60","\x0c","\x7f")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::app_willenterforeground,HX_HCSTRING("app_willenterforeground","\x2b","\xb3","\x8d","\xc8")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::app_didenterforeground,HX_HCSTRING("app_didenterforeground","\x9a","\xe5","\xdd","\x69")},
	{hx::fsInt,(void *) &SystemEventType_Impl__obj::file,HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::init,"init");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::ready,"ready");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::update,"update");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::shutdown,"shutdown");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::window,"window");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::input,"input");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::quit,"quit");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_terminating,"app_terminating");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_lowmemory,"app_lowmemory");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_willenterbackground,"app_willenterbackground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_didenterbackground,"app_didenterbackground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_willenterforeground,"app_willenterforeground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::app_didenterforeground,"app_didenterforeground");
	HX_MARK_MEMBER_NAME(SystemEventType_Impl__obj::file,"file");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::init,"init");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::ready,"ready");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::update,"update");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::shutdown,"shutdown");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::window,"window");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::input,"input");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::quit,"quit");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_terminating,"app_terminating");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_lowmemory,"app_lowmemory");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_willenterbackground,"app_willenterbackground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_didenterbackground,"app_didenterbackground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_willenterforeground,"app_willenterforeground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::app_didenterforeground,"app_didenterforeground");
	HX_VISIT_MEMBER_NAME(SystemEventType_Impl__obj::file,"file");
};

#endif

hx::Class SystemEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("quit","\xcf","\x3f","\x0a","\x4b"),
	HX_HCSTRING("app_terminating","\x00","\x4e","\xfc","\x45"),
	HX_HCSTRING("app_lowmemory","\x37","\xb2","\x92","\x12"),
	HX_HCSTRING("app_willenterbackground","\x56","\x2e","\xbc","\xdd"),
	HX_HCSTRING("app_didenterbackground","\xc5","\x60","\x0c","\x7f"),
	HX_HCSTRING("app_willenterforeground","\x2b","\xb3","\x8d","\xc8"),
	HX_HCSTRING("app_didenterforeground","\x9a","\xe5","\xdd","\x69"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void SystemEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.SystemEventType_Impl_","\x91","\x79","\x5d","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SystemEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SystemEventType_Impl__obj >;
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

void SystemEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	init= (int)1;
	ready= (int)2;
	update= (int)3;
	shutdown= (int)4;
	window= (int)5;
	input= (int)6;
	quit= (int)7;
	app_terminating= (int)8;
	app_lowmemory= (int)9;
	app_willenterbackground= (int)10;
	app_didenterbackground= (int)11;
	app_willenterforeground= (int)12;
	app_didenterforeground= (int)13;
	file= (int)14;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
