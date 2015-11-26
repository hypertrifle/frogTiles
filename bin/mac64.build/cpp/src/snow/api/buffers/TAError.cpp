#include <hxcpp.h>

#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
namespace snow{
namespace api{
namespace buffers{

::snow::api::buffers::TAError TAError_obj::RangeError;

HX_DEFINE_CREATE_ENUM(TAError_obj)

int TAError_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("RangeError","\xeb","\xac","\x85","\x3c")) return 0;
	return super::__FindIndex(inName);
}

int TAError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("RangeError","\xeb","\xac","\x85","\x3c")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TAError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("RangeError","\xeb","\xac","\x85","\x3c")) return RangeError;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("RangeError","\xeb","\xac","\x85","\x3c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TAError_obj::RangeError,"RangeError");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TAError_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TAError_obj::RangeError,"RangeError");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TAError_obj::__mClass;

Dynamic __Create_TAError_obj() { return new TAError_obj; }

void TAError_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("snow.api.buffers.TAError","\xe1","\x15","\xb8","\x2f"), hx::TCanCast< TAError_obj >,sStaticFields,sMemberFields,
	&__Create_TAError_obj, &__Create,
	&super::__SGetClass(), &CreateTAError_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TAError_obj::__boot()
{
hx::Static(RangeError) = hx::CreateEnum< TAError_obj >(HX_HCSTRING("RangeError","\xeb","\xac","\x85","\x3c"),0);
}


} // end namespace snow
} // end namespace api
} // end namespace buffers
