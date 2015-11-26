#ifndef INCLUDED_snow_types_Error
#define INCLUDED_snow_types_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,types,Error)
namespace snow{
namespace types{


class Error_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Error_obj OBJ_;

	public:
		Error_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("snow.types.Error","\x88","\xb3","\x2e","\x60"); }
		::String __ToString() const { return HX_HCSTRING("Error.","\x86","\xf7","\xfc","\x85") + tag; }

		static ::snow::types::Error error(Dynamic value);
		static Dynamic error_dyn();
		static ::snow::types::Error init(Dynamic value);
		static Dynamic init_dyn();
		static ::snow::types::Error parse(Dynamic value);
		static Dynamic parse_dyn();
		static ::snow::types::Error windowing(Dynamic value);
		static Dynamic windowing_dyn();
};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_Error */ 
