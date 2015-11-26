#include <hxcpp.h>

#ifndef INCLUDED_luxe__Log_LogError
#include <luxe/_Log/LogError.h>
#endif
namespace luxe{
namespace _Log{

::luxe::_Log::LogError  LogError_obj::RequireString(::String detail)
	{ return hx::CreateEnum< LogError_obj >(HX_HCSTRING("RequireString","\xf6","\xed","\x9b","\xb7"),0,hx::DynamicArray(0,1).Add(detail)); }

HX_DEFINE_CREATE_ENUM(LogError_obj)

int LogError_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("RequireString","\xf6","\xed","\x9b","\xb7")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LogError_obj,RequireString,return)

int LogError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("RequireString","\xf6","\xed","\x9b","\xb7")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic LogError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("RequireString","\xf6","\xed","\x9b","\xb7")) return RequireString_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("RequireString","\xf6","\xed","\x9b","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogError_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class LogError_obj::__mClass;

Dynamic __Create_LogError_obj() { return new LogError_obj; }

void LogError_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe._Log.LogError","\x35","\x86","\x82","\x81"), hx::TCanCast< LogError_obj >,sStaticFields,sMemberFields,
	&__Create_LogError_obj, &__Create,
	&super::__SGetClass(), &CreateLogError_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void LogError_obj::__boot()
{
}


} // end namespace luxe
} // end namespace _Log
