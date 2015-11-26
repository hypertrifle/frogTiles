#ifndef INCLUDED_snow_core_native_window_Windowing
#define INCLUDED_snow_core_native_window_Windowing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_interfaces_Windowing
#include <snow/modules/interfaces/Windowing.h>
#endif
HX_DECLARE_CLASS4(snow,core,native,window,Windowing)
HX_DECLARE_CLASS3(snow,modules,interfaces,Windowing)
HX_DECLARE_CLASS3(snow,_system,window,Window)
HX_DECLARE_CLASS3(snow,_system,window,Windowing)
namespace snow{
namespace core{
namespace native{
namespace window{


class HXCPP_CLASS_ATTRIBUTES  Windowing_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Windowing_obj OBJ_;
		Windowing_obj();
		Void __construct(::snow::_system::window::Windowing _system);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.window.Windowing")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Windowing_obj > __new(::snow::_system::window::Windowing _system);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Windowing_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::snow::modules::interfaces::Windowing_obj *();
		::String __ToString() const { return HX_HCSTRING("Windowing","\xd2","\x6e","\x17","\x38"); }

		static void __boot();
		::snow::_system::window::Windowing _system;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void on_event( Dynamic event);
		Dynamic on_event_dyn();

		virtual Void listen( ::snow::_system::window::Window window);
		Dynamic listen_dyn();

		virtual Void unlisten( ::snow::_system::window::Window window);
		Dynamic unlisten_dyn();

		virtual Void create( Dynamic render_config,Dynamic config,Dynamic on_created);
		Dynamic create_dyn();

		virtual Void close( ::snow::_system::window::Window window);
		Dynamic close_dyn();

		virtual Void show( ::snow::_system::window::Window window);
		Dynamic show_dyn();

		virtual Void destroy_window( ::snow::_system::window::Window window);
		Dynamic destroy_window_dyn();

		virtual Void update_window( ::snow::_system::window::Window window);
		Dynamic update_window_dyn();

		virtual Void render( ::snow::_system::window::Window window);
		Dynamic render_dyn();

		virtual Void swap( ::snow::_system::window::Window window);
		Dynamic swap_dyn();

		virtual Void simple_message( ::snow::_system::window::Window window,::String message,::String title);
		Dynamic simple_message_dyn();

		virtual Void set_size( ::snow::_system::window::Window window,int w,int h);
		Dynamic set_size_dyn();

		virtual Void set_position( ::snow::_system::window::Window window,int x,int y);
		Dynamic set_position_dyn();

		virtual Void set_title( ::snow::_system::window::Window window,::String title);
		Dynamic set_title_dyn();

		virtual Void set_max_size( ::snow::_system::window::Window window,int w,int h);
		Dynamic set_max_size_dyn();

		virtual Void set_min_size( ::snow::_system::window::Window window,int w,int h);
		Dynamic set_min_size_dyn();

		virtual Void fullscreen( ::snow::_system::window::Window window,bool fullscreen);
		Dynamic fullscreen_dyn();

		virtual Void bordered( ::snow::_system::window::Window window,bool bordered);
		Dynamic bordered_dyn();

		virtual Void grab( ::snow::_system::window::Window window,bool grabbed);
		Dynamic grab_dyn();

		virtual Void set_cursor_position( ::snow::_system::window::Window window,int x,int y);
		Dynamic set_cursor_position_dyn();

		virtual Void system_lock_cursor( bool enable);
		Dynamic system_lock_cursor_dyn();

		virtual Void system_enable_cursor( bool enable);
		Dynamic system_enable_cursor_dyn();

		virtual int system_enable_vsync( bool enable);
		Dynamic system_enable_vsync_dyn();

		virtual int display_count( );
		Dynamic display_count_dyn();

		virtual int display_mode_count( int display);
		Dynamic display_mode_count_dyn();

		virtual Dynamic display_native_mode( int display);
		Dynamic display_native_mode_dyn();

		virtual Dynamic display_current_mode( int display);
		Dynamic display_current_mode_dyn();

		virtual Dynamic display_mode( int display,int mode_index);
		Dynamic display_mode_dyn();

		virtual Dynamic display_bounds( int display);
		Dynamic display_bounds_dyn();

		virtual ::String display_name( int display);
		Dynamic display_name_dyn();

		static Dynamic snow_window_create;
		static Dynamic &snow_window_create_dyn() { return snow_window_create;}
		static Dynamic snow_window_close;
		static Dynamic &snow_window_close_dyn() { return snow_window_close;}
		static Dynamic snow_window_show;
		static Dynamic &snow_window_show_dyn() { return snow_window_show;}
		static Dynamic snow_window_destroy_window;
		static Dynamic &snow_window_destroy_window_dyn() { return snow_window_destroy_window;}
		static Dynamic snow_window_update;
		static Dynamic &snow_window_update_dyn() { return snow_window_update;}
		static Dynamic snow_window_render;
		static Dynamic &snow_window_render_dyn() { return snow_window_render;}
		static Dynamic snow_window_swap;
		static Dynamic &snow_window_swap_dyn() { return snow_window_swap;}
		static Dynamic snow_window_simple_message;
		static Dynamic &snow_window_simple_message_dyn() { return snow_window_simple_message;}
		static Dynamic snow_window_set_size;
		static Dynamic &snow_window_set_size_dyn() { return snow_window_set_size;}
		static Dynamic snow_window_set_position;
		static Dynamic &snow_window_set_position_dyn() { return snow_window_set_position;}
		static Dynamic snow_window_set_title;
		static Dynamic &snow_window_set_title_dyn() { return snow_window_set_title;}
		static Dynamic snow_window_set_max_size;
		static Dynamic &snow_window_set_max_size_dyn() { return snow_window_set_max_size;}
		static Dynamic snow_window_set_min_size;
		static Dynamic &snow_window_set_min_size_dyn() { return snow_window_set_min_size;}
		static Dynamic snow_window_fullscreen;
		static Dynamic &snow_window_fullscreen_dyn() { return snow_window_fullscreen;}
		static Dynamic snow_window_bordered;
		static Dynamic &snow_window_bordered_dyn() { return snow_window_bordered;}
		static Dynamic snow_window_grab;
		static Dynamic &snow_window_grab_dyn() { return snow_window_grab;}
		static Dynamic snow_window_set_cursor_position;
		static Dynamic &snow_window_set_cursor_position_dyn() { return snow_window_set_cursor_position;}
		static Dynamic snow_system_show_cursor;
		static Dynamic &snow_system_show_cursor_dyn() { return snow_system_show_cursor;}
		static Dynamic snow_system_lock_cursor;
		static Dynamic &snow_system_lock_cursor_dyn() { return snow_system_lock_cursor;}
		static Dynamic snow_system_enable_vsync;
		static Dynamic &snow_system_enable_vsync_dyn() { return snow_system_enable_vsync;}
		static Dynamic snow_desktop_get_display_count;
		static Dynamic &snow_desktop_get_display_count_dyn() { return snow_desktop_get_display_count;}
		static Dynamic snow_desktop_get_display_mode_count;
		static Dynamic &snow_desktop_get_display_mode_count_dyn() { return snow_desktop_get_display_mode_count;}
		static Dynamic snow_desktop_get_display_native_mode;
		static Dynamic &snow_desktop_get_display_native_mode_dyn() { return snow_desktop_get_display_native_mode;}
		static Dynamic snow_desktop_get_display_current_mode;
		static Dynamic &snow_desktop_get_display_current_mode_dyn() { return snow_desktop_get_display_current_mode;}
		static Dynamic snow_desktop_get_display_mode;
		static Dynamic &snow_desktop_get_display_mode_dyn() { return snow_desktop_get_display_mode;}
		static Dynamic snow_desktop_get_display_bounds;
		static Dynamic &snow_desktop_get_display_bounds_dyn() { return snow_desktop_get_display_bounds;}
		static Dynamic snow_desktop_get_display_name;
		static Dynamic &snow_desktop_get_display_name_dyn() { return snow_desktop_get_display_name;}
};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace window

#endif /* INCLUDED_snow_core_native_window_Windowing */ 
