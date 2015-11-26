#include <hxcpp.h>

#ifndef INCLUDED_snow_api_PromiseError
#include <snow/api/PromiseError.h>
#endif
namespace snow{
namespace api{

::snow::api::PromiseError  PromiseError_obj::UnhandledPromiseRejection(Dynamic err)
	{ return hx::CreateEnum< PromiseError_obj >(HX_HCSTRING("UnhandledPromiseRejection","\x31","\x51","\xd8","\x4e"),0,hx::DynamicArray(0,1).Add(err)); }

HX_DEFINE_CREATE_ENUM(PromiseError_obj)

int PromiseError_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("UnhandledPromiseRejection","\x31","\x51","\xd8","\x4e")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(PromiseError_obj,UnhandledPromiseRejection,return)

int PromiseError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("UnhandledPromiseRejection","\x31","\x51","\xd8","\x4e")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic PromiseError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("UnhandledPromiseRejection","\x31","\x51","\xd8","\x4e")) return UnhandledPromiseRejection_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("UnhandledPromiseRejection","\x31","\x51","\xd8","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PromiseError_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class PromiseError_obj::__mClass;

Dynamic __Create_PromiseError_obj() { return new PromiseError_obj; }

void PromiseError_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("snow.api.PromiseError","\xec","\x16","\x5a","\x49"), hx::TCanCast< PromiseError_obj >,sStaticFields,sMemberFields,
	&__Create_PromiseError_obj, &__Create,
	&super::__SGetClass(), &CreatePromiseError_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void PromiseError_obj::__boot()
{
}


} // end namespace snow
} // end namespace api
