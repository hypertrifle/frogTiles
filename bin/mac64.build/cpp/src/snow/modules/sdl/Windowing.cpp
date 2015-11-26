#include <hxcpp.h>

#ifndef INCLUDED_snow_core_native_window_Windowing
#include <snow/core/native/window/Windowing.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Windowing
#include <snow/modules/interfaces/Windowing.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Windowing
#include <snow/modules/sdl/Windowing.h>
#endif
#ifndef INCLUDED_snow_system_window_Windowing
#include <snow/system/window/Windowing.h>
#endif
namespace snow{
namespace modules{
namespace sdl{

Void Windowing_obj::__construct(::snow::_system::window::Windowing _system)
{
HX_STACK_FRAME("snow.modules.sdl.Windowing","new",0x3b259c3f,"snow.modules.sdl.Windowing.new","snow/modules/sdl/Windowing.hx",8,0x516c7a94)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
{
	HX_STACK_LINE(8)
	::snow::_system::window::Windowing tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	super::__construct(tmp);
}
;
	return null();
}

//Windowing_obj::~Windowing_obj() { }

Dynamic Windowing_obj::__CreateEmpty() { return  new Windowing_obj; }
hx::ObjectPtr< Windowing_obj > Windowing_obj::__new(::snow::_system::window::Windowing _system)
{  hx::ObjectPtr< Windowing_obj > _result_ = new Windowing_obj();
	_result_->__construct(_system);
	return _result_;}

Dynamic Windowing_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Windowing_obj > _result_ = new Windowing_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Windowing_obj::Windowing_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Windowing_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Windowing_obj::__mClass,"__mClass");
};

#endif

hx::Class Windowing_obj::__mClass;

void Windowing_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.sdl.Windowing","\xcd","\x10","\x7d","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Windowing_obj >;
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
} // end namespace modules
} // end namespace sdl
