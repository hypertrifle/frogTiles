#include <hxcpp.h>

#ifndef INCLUDED_snow_modules_interfaces_Windowing
#include <snow/modules/interfaces/Windowing.h>
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
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("destroy_window","\xd5","\x6b","\x1e","\x60"),
	HX_HCSTRING("update_window","\xa6","\xe2","\x20","\xbf"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("simple_message","\x7a","\x15","\x13","\x9c"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("set_title","\xfb","\x5d","\x35","\x37"),
	HX_HCSTRING("set_max_size","\xf9","\x76","\x67","\xe0"),
	HX_HCSTRING("set_min_size","\x4b","\x91","\x81","\x2d"),
	HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"),
	HX_HCSTRING("bordered","\x4b","\xb8","\xf8","\x58"),
	HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"),
	HX_HCSTRING("set_cursor_position","\x95","\x40","\x0e","\x8b"),
	HX_HCSTRING("system_enable_cursor","\xc2","\x43","\x53","\xb1"),
	HX_HCSTRING("system_lock_cursor","\x5a","\x97","\x1a","\xf3"),
	HX_HCSTRING("system_enable_vsync","\x65","\x7a","\x80","\x48"),
	HX_HCSTRING("display_count","\xd2","\xd3","\x18","\xd3"),
	HX_HCSTRING("display_mode_count","\xd0","\xb1","\x2e","\x5f"),
	HX_HCSTRING("display_native_mode","\x8e","\x35","\xcb","\x47"),
	HX_HCSTRING("display_current_mode","\xc6","\x0b","\x92","\xb0"),
	HX_HCSTRING("display_mode","\xc0","\x55","\x9d","\x74"),
	HX_HCSTRING("display_bounds","\x12","\x1a","\x45","\x7c"),
	HX_HCSTRING("display_name","\xa8","\xf4","\x3b","\x75"),
	::String(null()) };

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
	__mClass->mName = HX_HCSTRING("snow.modules.interfaces.Windowing","\x50","\xd2","\x46","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Windowing_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace modules
} // end namespace interfaces
