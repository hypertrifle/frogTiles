#ifndef INCLUDED_luxe__Log_LogError
#define INCLUDED_luxe__Log_LogError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,_Log,LogError)
namespace luxe{
namespace _Log{


class LogError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LogError_obj OBJ_;

	public:
		LogError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("luxe._Log.LogError","\x35","\x86","\x82","\x81"); }
		::String __ToString() const { return HX_HCSTRING("LogError.","\xea","\x66","\xaa","\xad") + tag; }

		static ::luxe::_Log::LogError RequireString(::String detail);
		static Dynamic RequireString_dyn();
};

} // end namespace luxe
} // end namespace _Log

#endif /* INCLUDED_luxe__Log_LogError */ 
