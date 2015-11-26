#include <hxcpp.h>

#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
namespace snow{
namespace api{

::snow::api::DebugError  DebugError_obj::assertion(::String expr)
	{ return hx::CreateEnum< DebugError_obj >(HX_HCSTRING("assertion","\xc2","\xc6","\xfc","\x9f"),0,hx::DynamicArray(0,1).Add(expr)); }

::snow::api::DebugError  DebugError_obj::null_assertion(::String expr)
	{ return hx::CreateEnum< DebugError_obj >(HX_HCSTRING("null_assertion","\xca","\xef","\xa9","\x9d"),1,hx::DynamicArray(0,1).Add(expr)); }

HX_DEFINE_CREATE_ENUM(DebugError_obj)

int DebugError_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("assertion","\xc2","\xc6","\xfc","\x9f")) return 0;
	if (inName==HX_HCSTRING("null_assertion","\xca","\xef","\xa9","\x9d")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DebugError_obj,assertion,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DebugError_obj,null_assertion,return)

int DebugError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("assertion","\xc2","\xc6","\xfc","\x9f")) return 1;
	if (inName==HX_HCSTRING("null_assertion","\xca","\xef","\xa9","\x9d")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic DebugError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("assertion","\xc2","\xc6","\xfc","\x9f")) return assertion_dyn();
	if (inName==HX_HCSTRING("null_assertion","\xca","\xef","\xa9","\x9d")) return null_assertion_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("assertion","\xc2","\xc6","\xfc","\x9f"),
	HX_HCSTRING("null_assertion","\xca","\xef","\xa9","\x9d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebugError_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class DebugError_obj::__mClass;

Dynamic __Create_DebugError_obj() { return new DebugError_obj; }

void DebugError_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("snow.api.DebugError","\x74","\xf9","\x3f","\x20"), hx::TCanCast< DebugError_obj >,sStaticFields,sMemberFields,
	&__Create_DebugError_obj, &__Create,
	&super::__SGetClass(), &CreateDebugError_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DebugError_obj::__boot()
{
}


} // end namespace snow
} // end namespace api
