#include <hxcpp.h>

#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
namespace luxe{

::luxe::InteractState InteractState_obj::axis;

::luxe::InteractState InteractState_obj::down;

::luxe::InteractState InteractState_obj::move;

::luxe::InteractState InteractState_obj::none;

::luxe::InteractState InteractState_obj::unknown;

::luxe::InteractState InteractState_obj::up;

::luxe::InteractState InteractState_obj::wheel;

HX_DEFINE_CREATE_ENUM(InteractState_obj)

int InteractState_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")) return 6;
	if (inName==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")) return 2;
	if (inName==HX_HCSTRING("move","\x11","\xe3","\x60","\x48")) return 4;
	if (inName==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) return 1;
	if (inName==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")) return 0;
	if (inName==HX_HCSTRING("up","\x5b","\x66","\x00","\x00")) return 3;
	if (inName==HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")) return 5;
	return super::__FindIndex(inName);
}

int InteractState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")) return 0;
	if (inName==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")) return 0;
	if (inName==HX_HCSTRING("move","\x11","\xe3","\x60","\x48")) return 0;
	if (inName==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) return 0;
	if (inName==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")) return 0;
	if (inName==HX_HCSTRING("up","\x5b","\x66","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic InteractState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")) return axis;
	if (inName==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")) return down;
	if (inName==HX_HCSTRING("move","\x11","\xe3","\x60","\x48")) return move;
	if (inName==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) return none;
	if (inName==HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")) return unknown;
	if (inName==HX_HCSTRING("up","\x5b","\x66","\x00","\x00")) return up;
	if (inName==HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")) return wheel;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractState_obj::axis,"axis");
	HX_MARK_MEMBER_NAME(InteractState_obj::down,"down");
	HX_MARK_MEMBER_NAME(InteractState_obj::move,"move");
	HX_MARK_MEMBER_NAME(InteractState_obj::none,"none");
	HX_MARK_MEMBER_NAME(InteractState_obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(InteractState_obj::up,"up");
	HX_MARK_MEMBER_NAME(InteractState_obj::wheel,"wheel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InteractState_obj::axis,"axis");
	HX_VISIT_MEMBER_NAME(InteractState_obj::down,"down");
	HX_VISIT_MEMBER_NAME(InteractState_obj::move,"move");
	HX_VISIT_MEMBER_NAME(InteractState_obj::none,"none");
	HX_VISIT_MEMBER_NAME(InteractState_obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(InteractState_obj::up,"up");
	HX_VISIT_MEMBER_NAME(InteractState_obj::wheel,"wheel");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class InteractState_obj::__mClass;

Dynamic __Create_InteractState_obj() { return new InteractState_obj; }

void InteractState_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe.InteractState","\xa3","\x7f","\xee","\x4b"), hx::TCanCast< InteractState_obj >,sStaticFields,sMemberFields,
	&__Create_InteractState_obj, &__Create,
	&super::__SGetClass(), &CreateInteractState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void InteractState_obj::__boot()
{
hx::Static(axis) = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),6);
hx::Static(down) = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),2);
hx::Static(move) = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),4);
hx::Static(none) = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),1);
hx::Static(unknown) = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),0);
hx::Static(up) = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),3);
hx::Static(wheel) = hx::CreateEnum< InteractState_obj >(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"),5);
}


} // end namespace luxe
