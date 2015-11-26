#ifndef INCLUDED_snow_modules_openal_ALHelper
#define INCLUDED_snow_modules_openal_ALHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,modules,openal,ALHelper)
namespace snow{
namespace modules{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  ALHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALHelper_obj OBJ_;
		ALHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.modules.openal.ALHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALHelper","\xb9","\x2c","\x11","\x17"); }

		static Void default_source_setup( int source);
		static Dynamic default_source_setup_dyn();

		static int determine_format( Dynamic _info);
		static Dynamic determine_format_dyn();

};

} // end namespace snow
} // end namespace modules
} // end namespace openal

#endif /* INCLUDED_snow_modules_openal_ALHelper */ 
