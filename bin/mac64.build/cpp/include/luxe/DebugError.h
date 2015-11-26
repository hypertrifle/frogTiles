#ifndef INCLUDED_luxe_DebugError
#define INCLUDED_luxe_DebugError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,DebugError)
namespace luxe{


class DebugError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DebugError_obj OBJ_;

	public:
		DebugError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("luxe.DebugError","\x4d","\x7a","\xd5","\x06"); }
		::String __ToString() const { return HX_HCSTRING("DebugError.","\xf9","\xe1","\x0d","\x3e") + tag; }

		static ::luxe::DebugError assertion(::String expr);
		static Dynamic assertion_dyn();
		static ::luxe::DebugError null_assertion(::String expr);
		static Dynamic null_assertion_dyn();
};

} // end namespace luxe

#endif /* INCLUDED_luxe_DebugError */ 
