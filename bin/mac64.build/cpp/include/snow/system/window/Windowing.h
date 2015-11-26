#ifndef INCLUDED_snow_system_window_Windowing
#define INCLUDED_snow_system_window_Windowing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS4(snow,core,native,window,Windowing)
HX_DECLARE_CLASS3(snow,modules,interfaces,Windowing)
HX_DECLARE_CLASS3(snow,modules,sdl,Windowing)
HX_DECLARE_CLASS3(snow,_system,window,Window)
HX_DECLARE_CLASS3(snow,_system,window,Windowing)
HX_DECLARE_CLASS4(snow,_system,window,_Windowing,WindowHandleMap)
namespace snow{
namespace _system{
namespace window{


class HXCPP_CLASS_ATTRIBUTES  Windowing_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Windowing_obj OBJ_;
		Windowing_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.system.window.Windowing")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Windowing_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Windowing_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Windowing","\xd2","\x6e","\x17","\x38"); }

		::haxe::ds::IntMap window_list;
		::snow::_system::window::_Windowing::WindowHandleMap window_handles;
		int window_count;
		::snow::Snow app;
		::snow::modules::sdl::Windowing module;
		virtual ::snow::_system::window::Window create( Dynamic _config);
		Dynamic create_dyn();

		virtual Void remove( ::snow::_system::window::Window _window);
		Dynamic remove_dyn();

		virtual ::snow::_system::window::Window window_from_handle( Dynamic _handle);
		Dynamic window_from_handle_dyn();

		virtual ::snow::_system::window::Window window_from_id( int _id);
		Dynamic window_from_id_dyn();

		virtual int enable_vsync( bool _enable);
		Dynamic enable_vsync_dyn();

		virtual Void enable_cursor( bool _enable);
		Dynamic enable_cursor_dyn();

		virtual Void enable_cursor_lock( bool _enable);
		Dynamic enable_cursor_lock_dyn();

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

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace snow
} // end namespace system
} // end namespace window

#endif /* INCLUDED_snow_system_window_Windowing */ 
