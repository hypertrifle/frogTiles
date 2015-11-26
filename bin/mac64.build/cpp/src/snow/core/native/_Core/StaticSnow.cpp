#include <hxcpp.h>

#ifndef INCLUDED_snow_core_native__Core_StaticSnow
#include <snow/core/native/_Core/StaticSnow.h>
#endif
extern "C" void snow_register_prims();
namespace snow{
namespace core{
namespace native{
namespace _Core{

Void StaticSnow_obj::__construct()
{
	return null();
}

//StaticSnow_obj::~StaticSnow_obj() { }

Dynamic StaticSnow_obj::__CreateEmpty() { return  new StaticSnow_obj; }
hx::ObjectPtr< StaticSnow_obj > StaticSnow_obj::__new()
{  hx::ObjectPtr< StaticSnow_obj > _result_ = new StaticSnow_obj();
	_result_->__construct();
	return _result_;}

Dynamic StaticSnow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticSnow_obj > _result_ = new StaticSnow_obj();
	_result_->__construct();
	return _result_;}

void StaticSnow_obj::__init__() {
HX_STACK_FRAME("snow.core.native._Core.StaticSnow","__init__",0xd8e4020a,"snow.core.native._Core.StaticSnow.__init__","snow/core/native/Core.hx",154,0x64f2480b)
{
	HX_STACK_LINE(154)
	snow_register_prims();;
}
}


StaticSnow_obj::StaticSnow_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticSnow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticSnow_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticSnow_obj::__mClass;

void StaticSnow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native._Core.StaticSnow","\xf4","\xba","\xab","\x82");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StaticSnow_obj >;
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

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace _Core
