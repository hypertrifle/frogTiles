#ifndef INCLUDED_snow_AppFixedTimestep
#define INCLUDED_snow_AppFixedTimestep

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,AppFixedTimestep)
namespace snow{


class HXCPP_CLASS_ATTRIBUTES  AppFixedTimestep_obj : public ::snow::App_obj{
	public:
		typedef ::snow::App_obj super;
		typedef AppFixedTimestep_obj OBJ_;
		AppFixedTimestep_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.AppFixedTimestep")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AppFixedTimestep_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppFixedTimestep_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AppFixedTimestep","\x2c","\xa6","\xd1","\x7e"); }

		Float frame_time;
		Float overflow;
		virtual Void on_internal_init( );

		virtual Void on_internal_update( );

};

} // end namespace snow

#endif /* INCLUDED_snow_AppFixedTimestep */ 
