#ifndef INCLUDED_snow_api_Debug
#define INCLUDED_snow_api_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,api,Debug)
namespace snow{
namespace api{


class HXCPP_CLASS_ATTRIBUTES  Debug_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.api.Debug")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Debug_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Debug_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Debug","\x33","\xc2","\x4c","\x6a"); }

		static void __boot();
		static int _level;
		static Array< ::String > _filter;
		static Array< ::String > _exclude;
		static int _log_width;
		static ::String _get_spacing( ::String _file);
		static Dynamic _get_spacing_dyn();

};

} // end namespace snow
} // end namespace api

#endif /* INCLUDED_snow_api_Debug */ 
