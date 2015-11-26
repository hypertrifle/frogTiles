#ifndef INCLUDED_snow_api__Debug_LogError
#define INCLUDED_snow_api__Debug_LogError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,api,_Debug,LogError)
namespace snow{
namespace api{
namespace _Debug{


class LogError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LogError_obj OBJ_;

	public:
		LogError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("snow.api._Debug.LogError","\xbf","\xe9","\xb8","\x18"); }
		::String __ToString() const { return HX_HCSTRING("LogError.","\xea","\x66","\xaa","\xad") + tag; }

		static ::snow::api::_Debug::LogError RequireString(::String detail);
		static Dynamic RequireString_dyn();
};

} // end namespace snow
} // end namespace api
} // end namespace _Debug

#endif /* INCLUDED_snow_api__Debug_LogError */ 
