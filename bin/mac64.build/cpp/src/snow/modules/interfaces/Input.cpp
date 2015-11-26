#include <hxcpp.h>

#ifndef INCLUDED_snow_modules_interfaces_Input
#include <snow/modules/interfaces/Input.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
namespace snow{
namespace modules{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	HX_HCSTRING("unlisten","\x60","\xf7","\x40","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.interfaces.Input","\x68","\x80","\xe7","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace modules
} // end namespace interfaces
