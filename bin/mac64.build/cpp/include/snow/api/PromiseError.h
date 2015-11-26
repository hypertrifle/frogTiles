#ifndef INCLUDED_snow_api_PromiseError
#define INCLUDED_snow_api_PromiseError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,api,PromiseError)
namespace snow{
namespace api{


class PromiseError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef PromiseError_obj OBJ_;

	public:
		PromiseError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("snow.api.PromiseError","\xec","\x16","\x5a","\x49"); }
		::String __ToString() const { return HX_HCSTRING("PromiseError.","\x41","\xbb","\x2d","\xf8") + tag; }

		static ::snow::api::PromiseError UnhandledPromiseRejection(Dynamic err);
		static Dynamic UnhandledPromiseRejection_dyn();
};

} // end namespace snow
} // end namespace api

#endif /* INCLUDED_snow_api_PromiseError */ 
