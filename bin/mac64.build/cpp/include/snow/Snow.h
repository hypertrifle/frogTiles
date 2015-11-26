#ifndef INCLUDED_snow_Snow
#define INCLUDED_snow_Snow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,core,native,Core)
HX_DECLARE_CLASS3(snow,_system,assets,Assets)
HX_DECLARE_CLASS3(snow,_system,audio,Audio)
HX_DECLARE_CLASS3(snow,_system,input,Input)
HX_DECLARE_CLASS3(snow,_system,io,IO)
HX_DECLARE_CLASS3(snow,_system,window,Window)
HX_DECLARE_CLASS3(snow,_system,window,Windowing)
namespace snow{


class HXCPP_CLASS_ATTRIBUTES  Snow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Snow_obj OBJ_;
		Snow_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.Snow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Snow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Snow_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Snow","\xa3","\x8e","\x30","\x37"); }

		::snow::App host;
		Dynamic config;
		Dynamic snow_config;
		bool freeze;
		::snow::_system::io::IO io;
		::snow::_system::input::Input input;
		::snow::_system::assets::Assets assets;
		::snow::_system::audio::Audio audio;
		::snow::_system::window::Windowing windowing;
		::String platform;
		::String os;
		bool debug;
		bool shutting_down;
		bool has_shutdown;
		::snow::_system::window::Window window;
		bool was_ready;
		bool is_ready;
		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void dispatch_system_event( Dynamic _event);
		Dynamic dispatch_system_event_dyn();

		virtual Void init( Dynamic _snow_config,::snow::App _host);
		Dynamic init_dyn();

		virtual Void on_snow_init( );
		Dynamic on_snow_init_dyn();

		virtual Void on_snow_ready( );
		Dynamic on_snow_ready_dyn();

		virtual Void do_internal_update( Float dt);
		Dynamic do_internal_update_dyn();

		virtual Void on_ready( );
		Dynamic on_ready_dyn();

		virtual Void on_snow_update( );
		Dynamic on_snow_update_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void cycle_next_queue( );
		Dynamic cycle_next_queue_dyn();

		virtual Void cycle_defer_queue( );
		Dynamic cycle_defer_queue_dyn();

		virtual Void setup_app_path( );
		Dynamic setup_app_path_dyn();

		virtual ::snow::api::Promise setup_configs( );
		Dynamic setup_configs_dyn();

		virtual Void setup_host_config( );
		Dynamic setup_host_config_dyn();

		virtual Void setup_default_window( );
		Dynamic setup_default_window_dyn();

		virtual Dynamic default_config( );
		Dynamic default_config_dyn();

		virtual ::snow::api::Promise default_runtime_config( );
		Dynamic default_runtime_config_dyn();

		virtual Dynamic default_render_config( );
		Dynamic default_render_config_dyn();

		virtual Dynamic default_window_config( );
		Dynamic default_window_config_dyn();

		virtual bool set_freeze( bool _freeze);
		Dynamic set_freeze_dyn();

		virtual Float get_time( );
		Dynamic get_time_dyn();

		virtual ::String get_uniqueid( );
		Dynamic get_uniqueid_dyn();

		virtual ::String make_uniqueid( Dynamic val);
		Dynamic make_uniqueid_dyn();

		virtual ::String _typename( Dynamic t);
		Dynamic _typename_dyn();

		static ::snow::core::native::Core core;
		static cpp::ArrayBase next_queue;
		static cpp::ArrayBase defer_queue;
		static Void next( Dynamic func);
		static Dynamic next_dyn();

		static Void defer( Dynamic func);
		static Dynamic defer_dyn();

		static Float get_timestamp( );
		static Dynamic get_timestamp_dyn();

};

} // end namespace snow

#endif /* INCLUDED_snow_Snow */ 
