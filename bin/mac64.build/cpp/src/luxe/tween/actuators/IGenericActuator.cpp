#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
namespace luxe{
namespace tween{
namespace actuators{


static ::String sMemberFields[] = {
	HX_HCSTRING("autoVisible","\xc3","\x1c","\x08","\x89"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onRepeat","\xda","\x8d","\x29","\xe6"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("reflect","\x3d","\x84","\x29","\xe9"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("timescale","\x5d","\x33","\x92","\x9a"),
	HX_HCSTRING("smartRotation","\x67","\xa0","\x05","\x41"),
	HX_HCSTRING("snapping","\xbc","\x35","\xb9","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGenericActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGenericActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class IGenericActuator_obj::__mClass;

void IGenericActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.actuators.IGenericActuator","\xd6","\x6c","\x4f","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IGenericActuator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators
