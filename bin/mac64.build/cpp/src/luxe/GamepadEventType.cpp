#include <hxcpp.h>

#ifndef INCLUDED_luxe_GamepadEventType
#include <luxe/GamepadEventType.h>
#endif
namespace luxe{

::luxe::GamepadEventType GamepadEventType_obj::axis;

::luxe::GamepadEventType GamepadEventType_obj::button;

::luxe::GamepadEventType GamepadEventType_obj::device_added;

::luxe::GamepadEventType GamepadEventType_obj::device_remapped;

::luxe::GamepadEventType GamepadEventType_obj::device_removed;

::luxe::GamepadEventType GamepadEventType_obj::unknown;

HX_DEFINE_CREATE_ENUM(GamepadEventType_obj)

int GamepadEventType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")) return 1;
	if (inName==HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")) return 2;
	if (inName==HX_HCSTRING("device_added","\x17","\x8d","\x83","\x4c")) return 3;
	if (inName==HX_HCSTRING("device_remapped","\xaf","\x57","\x75","\xb3")) return 5;
	if (inName==HX_HCSTRING("device_removed","\xb7","\xdb","\xdf","\x7c")) return 4;
	if (inName==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")) return 0;
	return super::__FindIndex(inName);
}

int GamepadEventType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")) return 0;
	if (inName==HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")) return 0;
	if (inName==HX_HCSTRING("device_added","\x17","\x8d","\x83","\x4c")) return 0;
	if (inName==HX_HCSTRING("device_remapped","\xaf","\x57","\x75","\xb3")) return 0;
	if (inName==HX_HCSTRING("device_removed","\xb7","\xdb","\xdf","\x7c")) return 0;
	if (inName==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GamepadEventType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")) return axis;
	if (inName==HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")) return button;
	if (inName==HX_HCSTRING("device_added","\x17","\x8d","\x83","\x4c")) return device_added;
	if (inName==HX_HCSTRING("device_remapped","\xaf","\x57","\x75","\xb3")) return device_remapped;
	if (inName==HX_HCSTRING("device_removed","\xb7","\xdb","\xdf","\x7c")) return device_removed;
	if (inName==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")) return unknown;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("device_added","\x17","\x8d","\x83","\x4c"),
	HX_HCSTRING("device_removed","\xb7","\xdb","\xdf","\x7c"),
	HX_HCSTRING("device_remapped","\xaf","\x57","\x75","\xb3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadEventType_obj::axis,"axis");
	HX_MARK_MEMBER_NAME(GamepadEventType_obj::button,"button");
	HX_MARK_MEMBER_NAME(GamepadEventType_obj::device_added,"device_added");
	HX_MARK_MEMBER_NAME(GamepadEventType_obj::device_remapped,"device_remapped");
	HX_MARK_MEMBER_NAME(GamepadEventType_obj::device_removed,"device_removed");
	HX_MARK_MEMBER_NAME(GamepadEventType_obj::unknown,"unknown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadEventType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamepadEventType_obj::axis,"axis");
	HX_VISIT_MEMBER_NAME(GamepadEventType_obj::button,"button");
	HX_VISIT_MEMBER_NAME(GamepadEventType_obj::device_added,"device_added");
	HX_VISIT_MEMBER_NAME(GamepadEventType_obj::device_remapped,"device_remapped");
	HX_VISIT_MEMBER_NAME(GamepadEventType_obj::device_removed,"device_removed");
	HX_VISIT_MEMBER_NAME(GamepadEventType_obj::unknown,"unknown");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GamepadEventType_obj::__mClass;

Dynamic __Create_GamepadEventType_obj() { return new GamepadEventType_obj; }

void GamepadEventType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe.GamepadEventType","\xeb","\x2e","\x24","\x55"), hx::TCanCast< GamepadEventType_obj >,sStaticFields,sMemberFields,
	&__Create_GamepadEventType_obj, &__Create,
	&super::__SGetClass(), &CreateGamepadEventType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GamepadEventType_obj::__boot()
{
hx::Static(axis) = hx::CreateEnum< GamepadEventType_obj >(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),1);
hx::Static(button) = hx::CreateEnum< GamepadEventType_obj >(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),2);
hx::Static(device_added) = hx::CreateEnum< GamepadEventType_obj >(HX_HCSTRING("device_added","\x17","\x8d","\x83","\x4c"),3);
hx::Static(device_remapped) = hx::CreateEnum< GamepadEventType_obj >(HX_HCSTRING("device_remapped","\xaf","\x57","\x75","\xb3"),5);
hx::Static(device_removed) = hx::CreateEnum< GamepadEventType_obj >(HX_HCSTRING("device_removed","\xb7","\xdb","\xdf","\x7c"),4);
hx::Static(unknown) = hx::CreateEnum< GamepadEventType_obj >(HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),0);
}


} // end namespace luxe
