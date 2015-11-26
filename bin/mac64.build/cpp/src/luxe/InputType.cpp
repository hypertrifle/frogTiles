#include <hxcpp.h>

#ifndef INCLUDED_luxe_InputType
#include <luxe/InputType.h>
#endif
namespace luxe{

::luxe::InputType InputType_obj::gamepad;

::luxe::InputType InputType_obj::keys;

::luxe::InputType InputType_obj::mouse;

::luxe::InputType InputType_obj::touch;

HX_DEFINE_CREATE_ENUM(InputType_obj)

int InputType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")) return 3;
	if (inName==HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")) return 2;
	if (inName==HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")) return 0;
	if (inName==HX_HCSTRING("touch","\xbf","\x17","\x33","\x14")) return 1;
	return super::__FindIndex(inName);
}

int InputType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")) return 0;
	if (inName==HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")) return 0;
	if (inName==HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")) return 0;
	if (inName==HX_HCSTRING("touch","\xbf","\x17","\x33","\x14")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic InputType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")) return gamepad;
	if (inName==HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")) return keys;
	if (inName==HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")) return mouse;
	if (inName==HX_HCSTRING("touch","\xbf","\x17","\x33","\x14")) return touch;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("touch","\xbf","\x17","\x33","\x14"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputType_obj::gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(InputType_obj::keys,"keys");
	HX_MARK_MEMBER_NAME(InputType_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(InputType_obj::touch,"touch");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InputType_obj::gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(InputType_obj::keys,"keys");
	HX_VISIT_MEMBER_NAME(InputType_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(InputType_obj::touch,"touch");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class InputType_obj::__mClass;

Dynamic __Create_InputType_obj() { return new InputType_obj; }

void InputType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe.InputType","\x0c","\x55","\xfc","\xee"), hx::TCanCast< InputType_obj >,sStaticFields,sMemberFields,
	&__Create_InputType_obj, &__Create,
	&super::__SGetClass(), &CreateInputType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void InputType_obj::__boot()
{
hx::Static(gamepad) = hx::CreateEnum< InputType_obj >(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),3);
hx::Static(keys) = hx::CreateEnum< InputType_obj >(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),2);
hx::Static(mouse) = hx::CreateEnum< InputType_obj >(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),0);
hx::Static(touch) = hx::CreateEnum< InputType_obj >(HX_HCSTRING("touch","\xbf","\x17","\x33","\x14"),1);
}


} // end namespace luxe
