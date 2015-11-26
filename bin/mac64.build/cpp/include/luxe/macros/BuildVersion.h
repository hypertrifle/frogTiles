#ifndef INCLUDED_luxe_macros_BuildVersion
#define INCLUDED_luxe_macros_BuildVersion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,macros,BuildVersion)
namespace luxe{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES  BuildVersion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BuildVersion_obj OBJ_;
		BuildVersion_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.macros.BuildVersion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BuildVersion_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BuildVersion_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BuildVersion","\xaa","\x61","\x5c","\x57"); }

		static void __boot();
		static bool _save;
		static ::String try_git( ::String root);
		static Dynamic try_git_dyn();

};

} // end namespace luxe
} // end namespace macros

#endif /* INCLUDED_luxe_macros_BuildVersion */ 
