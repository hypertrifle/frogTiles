#ifndef INCLUDED_snow_api_DebugError
#define INCLUDED_snow_api_DebugError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,api,DebugError)
namespace snow{
namespace api{


class DebugError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DebugError_obj OBJ_;

	public:
		DebugError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("snow.api.DebugError","\x74","\xf9","\x3f","\x20"); }
		::String __ToString() const { return HX_HCSTRING("DebugError.","\xf9","\xe1","\x0d","\x3e") + tag; }

		static ::snow::api::DebugError assertion(::String expr);
		static Dynamic assertion_dyn();
		static ::snow::api::DebugError null_assertion(::String expr);
		static Dynamic null_assertion_dyn();
};

} // end namespace snow
} // end namespace api

#endif /* INCLUDED_snow_api_DebugError */ 
