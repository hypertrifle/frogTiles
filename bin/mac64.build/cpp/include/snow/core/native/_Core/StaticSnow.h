#ifndef INCLUDED_snow_core_native__Core_StaticSnow
#define INCLUDED_snow_core_native__Core_StaticSnow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(snow,core,native,_Core,StaticSnow)
namespace snow{
namespace core{
namespace native{
namespace _Core{


class HXCPP_CLASS_ATTRIBUTES  StaticSnow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StaticSnow_obj OBJ_;
		StaticSnow_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.core.native._Core.StaticSnow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StaticSnow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticSnow_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("StaticSnow","\x71","\x5e","\xb4","\xa4"); }

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace _Core

#endif /* INCLUDED_snow_core_native__Core_StaticSnow */ 
