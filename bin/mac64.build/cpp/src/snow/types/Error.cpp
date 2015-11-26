#include <hxcpp.h>

#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace snow{
namespace types{

::snow::types::Error  Error_obj::error(Dynamic value)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),0,hx::DynamicArray(0,1).Add(value)); }

::snow::types::Error  Error_obj::init(Dynamic value)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),1,hx::DynamicArray(0,1).Add(value)); }

::snow::types::Error  Error_obj::parse(Dynamic value)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),3,hx::DynamicArray(0,1).Add(value)); }

::snow::types::Error  Error_obj::windowing(Dynamic value)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("windowing","\xf2","\x8e","\x44","\x96"),2,hx::DynamicArray(0,1).Add(value)); }

HX_DEFINE_CREATE_ENUM(Error_obj)

int Error_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")) return 0;
	if (inName==HX_HCSTRING("init","\x10","\x3b","\xbb","\x45")) return 1;
	if (inName==HX_HCSTRING("parse","\x33","\x90","\x55","\xbd")) return 3;
	if (inName==HX_HCSTRING("windowing","\xf2","\x8e","\x44","\x96")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,error,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,init,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,parse,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,windowing,return)

int Error_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")) return 1;
	if (inName==HX_HCSTRING("init","\x10","\x3b","\xbb","\x45")) return 1;
	if (inName==HX_HCSTRING("parse","\x33","\x90","\x55","\xbd")) return 1;
	if (inName==HX_HCSTRING("windowing","\xf2","\x8e","\x44","\x96")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Error_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")) return error_dyn();
	if (inName==HX_HCSTRING("init","\x10","\x3b","\xbb","\x45")) return init_dyn();
	if (inName==HX_HCSTRING("parse","\x33","\x90","\x55","\xbd")) return parse_dyn();
	if (inName==HX_HCSTRING("windowing","\xf2","\x8e","\x44","\x96")) return windowing_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("windowing","\xf2","\x8e","\x44","\x96"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Error_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Error_obj::__mClass;

Dynamic __Create_Error_obj() { return new Error_obj; }

void Error_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("snow.types.Error","\x88","\xb3","\x2e","\x60"), hx::TCanCast< Error_obj >,sStaticFields,sMemberFields,
	&__Create_Error_obj, &__Create,
	&super::__SGetClass(), &CreateError_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Error_obj::__boot()
{
}


} // end namespace snow
} // end namespace types
