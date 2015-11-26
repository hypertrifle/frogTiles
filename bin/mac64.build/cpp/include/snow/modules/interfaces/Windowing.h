#ifndef INCLUDED_snow_modules_interfaces_Windowing
#define INCLUDED_snow_modules_interfaces_Windowing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,modules,interfaces,Windowing)
HX_DECLARE_CLASS3(snow,_system,window,Window)
namespace snow{
namespace modules{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  Windowing_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Windowing_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void init( )=0;
		virtual Dynamic init_dyn()=0;
		virtual Void update( )=0;
		virtual Dynamic update_dyn()=0;
		virtual Void destroy( )=0;
		virtual Dynamic destroy_dyn()=0;
		virtual Void on_event( Dynamic event)=0;
		virtual Dynamic on_event_dyn()=0;
		virtual Void listen( ::snow::_system::window::Window window)=0;
		virtual Dynamic listen_dyn()=0;
		virtual Void unlisten( ::snow::_system::window::Window window)=0;
		virtual Dynamic unlisten_dyn()=0;
		virtual Void create( Dynamic render_config,Dynamic config,Dynamic on_created)=0;
		virtual Dynamic create_dyn()=0;
		virtual Void close( ::snow::_system::window::Window window)=0;
		virtual Dynamic close_dyn()=0;
		virtual Void show( ::snow::_system::window::Window window)=0;
		virtual Dynamic show_dyn()=0;
		virtual Void destroy_window( ::snow::_system::window::Window window)=0;
		virtual Dynamic destroy_window_dyn()=0;
		virtual Void update_window( ::snow::_system::window::Window window)=0;
		virtual Dynamic update_window_dyn()=0;
		virtual Void render( ::snow::_system::window::Window window)=0;
		virtual Dynamic render_dyn()=0;
		virtual Void swap( ::snow::_system::window::Window window)=0;
		virtual Dynamic swap_dyn()=0;
		virtual Void simple_message( ::snow::_system::window::Window window,::String message,::String title)=0;
		virtual Dynamic simple_message_dyn()=0;
		virtual Void set_size( ::snow::_system::window::Window window,int w,int h)=0;
		virtual Dynamic set_size_dyn()=0;
		virtual Void set_position( ::snow::_system::window::Window window,int x,int y)=0;
		virtual Dynamic set_position_dyn()=0;
		virtual Void set_title( ::snow::_system::window::Window window,::String title)=0;
		virtual Dynamic set_title_dyn()=0;
		virtual Void set_max_size( ::snow::_system::window::Window window,int w,int h)=0;
		virtual Dynamic set_max_size_dyn()=0;
		virtual Void set_min_size( ::snow::_system::window::Window window,int w,int h)=0;
		virtual Dynamic set_min_size_dyn()=0;
		virtual Void fullscreen( ::snow::_system::window::Window window,bool fullscreen)=0;
		virtual Dynamic fullscreen_dyn()=0;
		virtual Void bordered( ::snow::_system::window::Window window,bool bordered)=0;
		virtual Dynamic bordered_dyn()=0;
		virtual Void grab( ::snow::_system::window::Window window,bool grabbed)=0;
		virtual Dynamic grab_dyn()=0;
		virtual Void set_cursor_position( ::snow::_system::window::Window window,int x,int y)=0;
		virtual Dynamic set_cursor_position_dyn()=0;
		virtual Void system_enable_cursor( bool enable)=0;
		virtual Dynamic system_enable_cursor_dyn()=0;
		virtual Void system_lock_cursor( bool enable)=0;
		virtual Dynamic system_lock_cursor_dyn()=0;
		virtual int system_enable_vsync( bool enable)=0;
		virtual Dynamic system_enable_vsync_dyn()=0;
		virtual int display_count( )=0;
		virtual Dynamic display_count_dyn()=0;
		virtual int display_mode_count( int display)=0;
		virtual Dynamic display_mode_count_dyn()=0;
		virtual Dynamic display_native_mode( int display)=0;
		virtual Dynamic display_native_mode_dyn()=0;
		virtual Dynamic display_current_mode( int display)=0;
		virtual Dynamic display_current_mode_dyn()=0;
		virtual Dynamic display_mode( int display,int mode_index)=0;
		virtual Dynamic display_mode_dyn()=0;
		virtual Dynamic display_bounds( int display)=0;
		virtual Dynamic display_bounds_dyn()=0;
		virtual ::String display_name( int display)=0;
		virtual Dynamic display_name_dyn()=0;
};

#define DELEGATE_snow_modules_interfaces_Windowing \
virtual Void init( ) { return mDelegate->init();}  \
virtual Dynamic init_dyn() { return mDelegate->init_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual Void destroy( ) { return mDelegate->destroy();}  \
virtual Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}  \
virtual Void on_event( Dynamic event) { return mDelegate->on_event(event);}  \
virtual Dynamic on_event_dyn() { return mDelegate->on_event_dyn();}  \
virtual Void listen( ::snow::_system::window::Window window) { return mDelegate->listen(window);}  \
virtual Dynamic listen_dyn() { return mDelegate->listen_dyn();}  \
virtual Void unlisten( ::snow::_system::window::Window window) { return mDelegate->unlisten(window);}  \
virtual Dynamic unlisten_dyn() { return mDelegate->unlisten_dyn();}  \
virtual Void create( Dynamic render_config,Dynamic config,Dynamic on_created) { return mDelegate->create(render_config,config,on_created);}  \
virtual Dynamic create_dyn() { return mDelegate->create_dyn();}  \
virtual Void close( ::snow::_system::window::Window window) { return mDelegate->close(window);}  \
virtual Dynamic close_dyn() { return mDelegate->close_dyn();}  \
virtual Void show( ::snow::_system::window::Window window) { return mDelegate->show(window);}  \
virtual Dynamic show_dyn() { return mDelegate->show_dyn();}  \
virtual Void destroy_window( ::snow::_system::window::Window window) { return mDelegate->destroy_window(window);}  \
virtual Dynamic destroy_window_dyn() { return mDelegate->destroy_window_dyn();}  \
virtual Void update_window( ::snow::_system::window::Window window) { return mDelegate->update_window(window);}  \
virtual Dynamic update_window_dyn() { return mDelegate->update_window_dyn();}  \
virtual Void render( ::snow::_system::window::Window window) { return mDelegate->render(window);}  \
virtual Dynamic render_dyn() { return mDelegate->render_dyn();}  \
virtual Void swap( ::snow::_system::window::Window window) { return mDelegate->swap(window);}  \
virtual Dynamic swap_dyn() { return mDelegate->swap_dyn();}  \
virtual Void simple_message( ::snow::_system::window::Window window,::String message,::String title) { return mDelegate->simple_message(window,message,title);}  \
virtual Dynamic simple_message_dyn() { return mDelegate->simple_message_dyn();}  \
virtual Void set_size( ::snow::_system::window::Window window,int w,int h) { return mDelegate->set_size(window,w,h);}  \
virtual Dynamic set_size_dyn() { return mDelegate->set_size_dyn();}  \
virtual Void set_position( ::snow::_system::window::Window window,int x,int y) { return mDelegate->set_position(window,x,y);}  \
virtual Dynamic set_position_dyn() { return mDelegate->set_position_dyn();}  \
virtual Void set_title( ::snow::_system::window::Window window,::String title) { return mDelegate->set_title(window,title);}  \
virtual Dynamic set_title_dyn() { return mDelegate->set_title_dyn();}  \
virtual Void set_max_size( ::snow::_system::window::Window window,int w,int h) { return mDelegate->set_max_size(window,w,h);}  \
virtual Dynamic set_max_size_dyn() { return mDelegate->set_max_size_dyn();}  \
virtual Void set_min_size( ::snow::_system::window::Window window,int w,int h) { return mDelegate->set_min_size(window,w,h);}  \
virtual Dynamic set_min_size_dyn() { return mDelegate->set_min_size_dyn();}  \
virtual Void fullscreen( ::snow::_system::window::Window window,bool fullscreen) { return mDelegate->fullscreen(window,fullscreen);}  \
virtual Dynamic fullscreen_dyn() { return mDelegate->fullscreen_dyn();}  \
virtual Void bordered( ::snow::_system::window::Window window,bool bordered) { return mDelegate->bordered(window,bordered);}  \
virtual Dynamic bordered_dyn() { return mDelegate->bordered_dyn();}  \
virtual Void grab( ::snow::_system::window::Window window,bool grabbed) { return mDelegate->grab(window,grabbed);}  \
virtual Dynamic grab_dyn() { return mDelegate->grab_dyn();}  \
virtual Void set_cursor_position( ::snow::_system::window::Window window,int x,int y) { return mDelegate->set_cursor_position(window,x,y);}  \
virtual Dynamic set_cursor_position_dyn() { return mDelegate->set_cursor_position_dyn();}  \
virtual Void system_enable_cursor( bool enable) { return mDelegate->system_enable_cursor(enable);}  \
virtual Dynamic system_enable_cursor_dyn() { return mDelegate->system_enable_cursor_dyn();}  \
virtual Void system_lock_cursor( bool enable) { return mDelegate->system_lock_cursor(enable);}  \
virtual Dynamic system_lock_cursor_dyn() { return mDelegate->system_lock_cursor_dyn();}  \
virtual int system_enable_vsync( bool enable) { return mDelegate->system_enable_vsync(enable);}  \
virtual Dynamic system_enable_vsync_dyn() { return mDelegate->system_enable_vsync_dyn();}  \
virtual int display_count( ) { return mDelegate->display_count();}  \
virtual Dynamic display_count_dyn() { return mDelegate->display_count_dyn();}  \
virtual int display_mode_count( int display) { return mDelegate->display_mode_count(display);}  \
virtual Dynamic display_mode_count_dyn() { return mDelegate->display_mode_count_dyn();}  \
virtual Dynamic display_native_mode( int display) { return mDelegate->display_native_mode(display);}  \
virtual Dynamic display_native_mode_dyn() { return mDelegate->display_native_mode_dyn();}  \
virtual Dynamic display_current_mode( int display) { return mDelegate->display_current_mode(display);}  \
virtual Dynamic display_current_mode_dyn() { return mDelegate->display_current_mode_dyn();}  \
virtual Dynamic display_mode( int display,int mode_index) { return mDelegate->display_mode(display,mode_index);}  \
virtual Dynamic display_mode_dyn() { return mDelegate->display_mode_dyn();}  \
virtual Dynamic display_bounds( int display) { return mDelegate->display_bounds(display);}  \
virtual Dynamic display_bounds_dyn() { return mDelegate->display_bounds_dyn();}  \
virtual ::String display_name( int display) { return mDelegate->display_name(display);}  \
virtual Dynamic display_name_dyn() { return mDelegate->display_name_dyn();}  \


template<typename IMPL>
class Windowing_delegate_ : public Windowing_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Windowing_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_snow_modules_interfaces_Windowing
};

} // end namespace snow
} // end namespace modules
} // end namespace interfaces

#endif /* INCLUDED_snow_modules_interfaces_Windowing */ 
