#ifndef INCLUDED_snow_core_native_Core
#define INCLUDED_snow_core_native_Core

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,core,native,Core)
namespace snow{
namespace core{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  Core_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Core_obj OBJ_;
		Core_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.Core")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Core_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Core_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Core","\x7f","\xe9","\x9d","\x2c"); }

		static void __boot();
		::snow::Snow app;
		Float start_timestamp;
		virtual Void init( Dynamic _event_handler);
		Dynamic init_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual Float timestamp( );
		Dynamic timestamp_dyn();

		virtual Void set_os( );
		Dynamic set_os_dyn();

		static Dynamic snow_init;
		static Dynamic &snow_init_dyn() { return snow_init;}
		static Dynamic snow_shutdown;
		static Dynamic &snow_shutdown_dyn() { return snow_shutdown;}
		static Dynamic snow_timestamp;
		static Dynamic &snow_timestamp_dyn() { return snow_timestamp;}
};

} // end namespace snow
} // end namespace core
} // end namespace native

#endif /* INCLUDED_snow_core_native_Core */ 
