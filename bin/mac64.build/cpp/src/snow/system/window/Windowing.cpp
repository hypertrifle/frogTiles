#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_native_window_Windowing
#include <snow/core/native/window/Windowing.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Windowing
#include <snow/modules/interfaces/Windowing.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Windowing
#include <snow/modules/sdl/Windowing.h>
#endif
#ifndef INCLUDED_snow_system_input_Input
#include <snow/system/input/Input.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
#ifndef INCLUDED_snow_system_window_Windowing
#include <snow/system/window/Windowing.h>
#endif
#ifndef INCLUDED_snow_system_window__Windowing_WindowHandleMap
#include <snow/system/window/_Windowing/WindowHandleMap.h>
#endif
namespace snow{
namespace _system{
namespace window{

Void Windowing_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.system.window.Windowing","new",0xc9cb7f3a,"snow.system.window.Windowing.new","snow/system/window/Windowing.hx",13,0x84f7a4d7)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(20)
	this->window_count = (int)0;
	HX_STACK_LINE(31)
	this->app = _app;
	HX_STACK_LINE(32)
	::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		tmp = tmp2;
	}
	HX_STACK_LINE(32)
	this->window_list = tmp;
	HX_STACK_LINE(33)
	::snow::_system::window::_Windowing::WindowHandleMap tmp1 = ::snow::_system::window::_Windowing::WindowHandleMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	this->window_handles = tmp1;
	HX_STACK_LINE(35)
	::snow::modules::sdl::Windowing tmp2 = ::snow::modules::sdl::Windowing_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	this->module = tmp2;
	HX_STACK_LINE(37)
	::snow::modules::sdl::Windowing tmp3 = this->module;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	tmp3->init();
}
;
	return null();
}

//Windowing_obj::~Windowing_obj() { }

Dynamic Windowing_obj::__CreateEmpty() { return  new Windowing_obj; }
hx::ObjectPtr< Windowing_obj > Windowing_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Windowing_obj > _result_ = new Windowing_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Windowing_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Windowing_obj > _result_ = new Windowing_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::snow::_system::window::Window Windowing_obj::create( Dynamic _config){
	HX_STACK_FRAME("snow.system.window.Windowing","create",0x4a30fc62,"snow.system.window.Windowing.create","snow/system/window/Windowing.hx",44,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_config,"_config")
	HX_STACK_LINE(46)
	::snow::_system::window::Window tmp = ::snow::_system::window::Window_obj::__new(hx::ObjectPtr<OBJ_>(this),_config);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::snow::_system::window::Window _window = tmp;		HX_STACK_VAR(_window,"_window");
	HX_STACK_LINE(48)
	::haxe::ds::IntMap tmp1 = this->window_list;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	int tmp2 = _window->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	::snow::_system::window::Window tmp3 = _window;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	tmp1->set(tmp2,tmp3);
	HX_STACK_LINE(49)
	::snow::_system::window::_Windowing::WindowHandleMap tmp4 = this->window_handles;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	Dynamic tmp5 = _window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	int tmp6 = _window->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(49)
	tmp4->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp5,tmp6);
	HX_STACK_LINE(50)
	(this->window_count)++;
	HX_STACK_LINE(54)
	::snow::modules::sdl::Windowing tmp7 = this->module;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	::snow::_system::window::Window tmp8 = _window;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	tmp7->listen(tmp8);
	HX_STACK_LINE(58)
	bool tmp9 = (_config->__Field(HX_HCSTRING("no_input","\x4c","\x92","\x80","\x55"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(58)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(58)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(58)
	if ((tmp10)){
		HX_STACK_LINE(58)
		tmp11 = (_config->__Field(HX_HCSTRING("no_input","\x4c","\x92","\x80","\x55"), hx::paccDynamic ) == false);
	}
	else{
		HX_STACK_LINE(58)
		tmp11 = true;
	}
	HX_STACK_LINE(58)
	if ((tmp11)){
		HX_STACK_LINE(59)
		::snow::Snow tmp12 = this->app;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(59)
		::snow::_system::window::Window tmp13 = _window;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(59)
		tmp12->input->__Field(HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"), hx::paccDynamic )(tmp13);
	}
	HX_STACK_LINE(62)
	::snow::_system::window::Window tmp12 = _window;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(62)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,create,return )

Void Windowing_obj::remove( ::snow::_system::window::Window _window){
{
		HX_STACK_FRAME("snow.system.window.Windowing","remove",0xd2aa31aa,"snow.system.window.Windowing.remove","snow/system/window/Windowing.hx",68,0x84f7a4d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_window,"_window")
		HX_STACK_LINE(70)
		::haxe::ds::IntMap tmp = this->window_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		int tmp1 = _window->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		tmp->remove(tmp1);
		HX_STACK_LINE(71)
		::snow::_system::window::_Windowing::WindowHandleMap tmp2 = this->window_handles;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		Dynamic tmp3 = _window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		tmp2->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(72)
		(this->window_count)--;
		HX_STACK_LINE(74)
		::snow::modules::sdl::Windowing tmp4 = this->module;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		::snow::_system::window::Window tmp5 = _window;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		tmp4->unlisten(tmp5);
		HX_STACK_LINE(76)
		Dynamic tmp6 = _window->__Field(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"), hx::paccDynamic )->__Field(HX_HCSTRING("no_input","\x4c","\x92","\x80","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		if ((tmp8)){
			HX_STACK_LINE(76)
			Dynamic tmp10 = _window->__Field(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"), hx::paccDynamic )->__Field(HX_HCSTRING("no_input","\x4c","\x92","\x80","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(76)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(76)
			tmp9 = (tmp11 == false);
		}
		else{
			HX_STACK_LINE(76)
			tmp9 = true;
		}
		HX_STACK_LINE(76)
		if ((tmp9)){
			HX_STACK_LINE(77)
			::snow::Snow tmp10 = this->app;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(77)
			::snow::_system::window::Window tmp11 = _window;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(77)
			tmp10->input->__Field(HX_HCSTRING("unlisten","\x60","\xf7","\x40","\xf2"), hx::paccDynamic )(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,remove,(void))

::snow::_system::window::Window Windowing_obj::window_from_handle( Dynamic _handle){
	HX_STACK_FRAME("snow.system.window.Windowing","window_from_handle",0x07df5174,"snow.system.window.Windowing.window_from_handle","snow/system/window/Windowing.hx",83,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_handle,"_handle")
	HX_STACK_LINE(85)
	::snow::_system::window::_Windowing::WindowHandleMap tmp = this->window_handles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	Dynamic tmp1 = _handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	bool tmp2 = tmp->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	if ((tmp2)){
		HX_STACK_LINE(86)
		::snow::_system::window::_Windowing::WindowHandleMap tmp3 = this->window_handles;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		Dynamic tmp4 = _handle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		Dynamic tmp5 = tmp3->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		Dynamic _id = tmp5;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(87)
		::haxe::ds::IntMap tmp6 = this->window_list;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		Dynamic tmp7 = _id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		::snow::_system::window::Window tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		::snow::_system::window::Window tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(87)
		return tmp9;
	}
	HX_STACK_LINE(90)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,window_from_handle,return )

::snow::_system::window::Window Windowing_obj::window_from_id( int _id){
	HX_STACK_FRAME("snow.system.window.Windowing","window_from_id",0x975c53a7,"snow.system.window.Windowing.window_from_id","snow/system/window/Windowing.hx",95,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(97)
	::haxe::ds::IntMap tmp = this->window_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	int tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	::snow::_system::window::Window tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	::snow::_system::window::Window tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,window_from_id,return )

int Windowing_obj::enable_vsync( bool _enable){
	HX_STACK_FRAME("snow.system.window.Windowing","enable_vsync",0xdc160dbb,"snow.system.window.Windowing.enable_vsync","snow/system/window/Windowing.hx",104,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_enable,"_enable")
	HX_STACK_LINE(106)
	bool tmp = _enable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	int tmp1 = ::snow::core::native::window::Windowing_obj::snow_system_enable_vsync(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,enable_vsync,return )

Void Windowing_obj::enable_cursor( bool _enable){
{
		HX_STACK_FRAME("snow.system.window.Windowing","enable_cursor",0x409e9bac,"snow.system.window.Windowing.enable_cursor","snow/system/window/Windowing.hx",113,0x84f7a4d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enable,"_enable")
		HX_STACK_LINE(113)
		bool tmp = _enable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		::snow::core::native::window::Windowing_obj::snow_system_show_cursor(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,enable_cursor,(void))

Void Windowing_obj::enable_cursor_lock( bool _enable){
{
		HX_STACK_FRAME("snow.system.window.Windowing","enable_cursor_lock",0xd3ba4c9e,"snow.system.window.Windowing.enable_cursor_lock","snow/system/window/Windowing.hx",120,0x84f7a4d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enable,"_enable")
		HX_STACK_LINE(120)
		bool tmp = _enable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		::snow::core::native::window::Windowing_obj::snow_system_lock_cursor(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,enable_cursor_lock,(void))

int Windowing_obj::display_count( ){
	HX_STACK_FRAME("snow.system.window.Windowing","display_count",0xa19d572c,"snow.system.window.Windowing.display_count","snow/system/window/Windowing.hx",129,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	int tmp = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_count();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,display_count,return )

int Windowing_obj::display_mode_count( int display){
	HX_STACK_FRAME("snow.system.window.Windowing","display_mode_count",0x2e8dc836,"snow.system.window.Windowing.display_mode_count","snow/system/window/Windowing.hx",134,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(135)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	int tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_mode_count(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_mode_count,return )

Dynamic Windowing_obj::display_native_mode( int display){
	HX_STACK_FRAME("snow.system.window.Windowing","display_native_mode",0xeb9fb868,"snow.system.window.Windowing.display_native_mode","snow/system/window/Windowing.hx",139,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(140)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	Dynamic tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_native_mode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_native_mode,return )

Dynamic Windowing_obj::display_current_mode( int display){
	HX_STACK_FRAME("snow.system.window.Windowing","display_current_mode",0x66b007ac,"snow.system.window.Windowing.display_current_mode","snow/system/window/Windowing.hx",144,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(145)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	Dynamic tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_current_mode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_current_mode,return )

Dynamic Windowing_obj::display_mode( int display,int mode_index){
	HX_STACK_FRAME("snow.system.window.Windowing","display_mode",0xa129fba6,"snow.system.window.Windowing.display_mode","snow/system/window/Windowing.hx",149,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_ARG(mode_index,"mode_index")
	HX_STACK_LINE(150)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	int tmp1 = mode_index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	Dynamic tmp2 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_mode(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Windowing_obj,display_mode,return )

Dynamic Windowing_obj::display_bounds( int display){
	HX_STACK_FRAME("snow.system.window.Windowing","display_bounds",0x61b38578,"snow.system.window.Windowing.display_bounds","snow/system/window/Windowing.hx",154,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(155)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	Dynamic tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_bounds(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_bounds,return )

::String Windowing_obj::display_name( int display){
	HX_STACK_FRAME("snow.system.window.Windowing","display_name",0xa1c89a8e,"snow.system.window.Windowing.display_name","snow/system/window/Windowing.hx",159,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(160)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	::String tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_name(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_name,return )

Void Windowing_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.system.window.Windowing","on_event",0xe682cca0,"snow.system.window.Windowing.on_event","snow/system/window/Windowing.hx",167,0x84f7a4d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(169)
		bool tmp = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)5);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		if ((tmp)){
			HX_STACK_LINE(171)
			Dynamic _window_event = _event->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(_window_event,"_window_event");
			HX_STACK_LINE(173)
			::haxe::ds::IntMap tmp1 = this->window_list;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(173)
			Dynamic tmp2 = _window_event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			::snow::_system::window::Window tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			::snow::_system::window::Window _window = tmp3;		HX_STACK_VAR(_window,"_window");
			HX_STACK_LINE(175)
			bool tmp4 = (_window != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			if ((tmp4)){
				HX_STACK_LINE(176)
				Dynamic tmp5 = _window_event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(176)
				_window->__Field(HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"), hx::paccDynamic )(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,on_event,(void))

Void Windowing_obj::update( ){
{
		HX_STACK_FRAME("snow.system.window.Windowing","update",0x55271b6f,"snow.system.window.Windowing.update","snow/system/window/Windowing.hx",184,0x84f7a4d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		::snow::modules::sdl::Windowing tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		tmp->update();
		HX_STACK_LINE(188)
		::haxe::ds::IntMap tmp1 = this->window_list;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		Dynamic tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		for(::cpp::FastIterator_obj< ::snow::_system::window::Window > *__it = ::cpp::CreateFastIterator< ::snow::_system::window::Window >(tmp2);  __it->hasNext(); ){
			::snow::_system::window::Window window = __it->next();
			window->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
		}
		HX_STACK_LINE(192)
		::haxe::ds::IntMap tmp3 = this->window_list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		Dynamic tmp4 = tmp3->iterator();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		for(::cpp::FastIterator_obj< ::snow::_system::window::Window > *__it = ::cpp::CreateFastIterator< ::snow::_system::window::Window >(tmp4);  __it->hasNext(); ){
			::snow::_system::window::Window window = __it->next();
			{
				HX_STACK_LINE(193)
				bool tmp5 = window->__Field(HX_HCSTRING("auto_render","\x66","\xf9","\x32","\x8c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				if ((tmp5)){
					HX_STACK_LINE(194)
					window->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,update,(void))

Void Windowing_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.window.Windowing","destroy",0xb3c750d4,"snow.system.window.Windowing.destroy","snow/system/window/Windowing.hx",201,0x84f7a4d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		::snow::modules::sdl::Windowing tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		tmp->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,destroy,(void))


Windowing_obj::Windowing_obj()
{
}

void Windowing_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Windowing);
	HX_MARK_MEMBER_NAME(window_list,"window_list");
	HX_MARK_MEMBER_NAME(window_handles,"window_handles");
	HX_MARK_MEMBER_NAME(window_count,"window_count");
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_END_CLASS();
}

void Windowing_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window_list,"window_list");
	HX_VISIT_MEMBER_NAME(window_handles,"window_handles");
	HX_VISIT_MEMBER_NAME(window_count,"window_count");
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(module,"module");
}

Dynamic Windowing_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"window_list") ) { return window_list; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"window_count") ) { return window_count; }
		if (HX_FIELD_EQ(inName,"enable_vsync") ) { return enable_vsync_dyn(); }
		if (HX_FIELD_EQ(inName,"display_mode") ) { return display_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"display_name") ) { return display_name_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"enable_cursor") ) { return enable_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"display_count") ) { return display_count_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"window_handles") ) { return window_handles; }
		if (HX_FIELD_EQ(inName,"window_from_id") ) { return window_from_id_dyn(); }
		if (HX_FIELD_EQ(inName,"display_bounds") ) { return display_bounds_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"window_from_handle") ) { return window_from_handle_dyn(); }
		if (HX_FIELD_EQ(inName,"enable_cursor_lock") ) { return enable_cursor_lock_dyn(); }
		if (HX_FIELD_EQ(inName,"display_mode_count") ) { return display_mode_count_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"display_native_mode") ) { return display_native_mode_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"display_current_mode") ) { return display_current_mode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Windowing_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::modules::sdl::Windowing >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"window_list") ) { window_list=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"window_count") ) { window_count=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"window_handles") ) { window_handles=inValue.Cast< ::snow::_system::window::_Windowing::WindowHandleMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Windowing_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Windowing_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("window_list","\x4d","\x5e","\x69","\x58"));
	outFields->push(HX_HCSTRING("window_handles","\x3c","\x0d","\xb8","\x9f"));
	outFields->push(HX_HCSTRING("window_count","\x00","\xb4","\x26","\xd9"));
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Windowing_obj,window_list),HX_HCSTRING("window_list","\x4d","\x5e","\x69","\x58")},
	{hx::fsObject /*::snow::_system::window::_Windowing::WindowHandleMap*/ ,(int)offsetof(Windowing_obj,window_handles),HX_HCSTRING("window_handles","\x3c","\x0d","\xb8","\x9f")},
	{hx::fsInt,(int)offsetof(Windowing_obj,window_count),HX_HCSTRING("window_count","\x00","\xb4","\x26","\xd9")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Windowing_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsObject /*::snow::modules::sdl::Windowing*/ ,(int)offsetof(Windowing_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("window_list","\x4d","\x5e","\x69","\x58"),
	HX_HCSTRING("window_handles","\x3c","\x0d","\xb8","\x9f"),
	HX_HCSTRING("window_count","\x00","\xb4","\x26","\xd9"),
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("window_from_handle","\x0e","\x3b","\x80","\x38"),
	HX_HCSTRING("window_from_id","\x41","\xe8","\xed","\xb1"),
	HX_HCSTRING("enable_vsync","\xd5","\x67","\x89","\xaf"),
	HX_HCSTRING("enable_cursor","\x52","\x18","\x1a","\x72"),
	HX_HCSTRING("enable_cursor_lock","\x38","\x36","\x5b","\x04"),
	HX_HCSTRING("display_count","\xd2","\xd3","\x18","\xd3"),
	HX_HCSTRING("display_mode_count","\xd0","\xb1","\x2e","\x5f"),
	HX_HCSTRING("display_native_mode","\x8e","\x35","\xcb","\x47"),
	HX_HCSTRING("display_current_mode","\xc6","\x0b","\x92","\xb0"),
	HX_HCSTRING("display_mode","\xc0","\x55","\x9d","\x74"),
	HX_HCSTRING("display_bounds","\x12","\x1a","\x45","\x7c"),
	HX_HCSTRING("display_name","\xa8","\xf4","\x3b","\x75"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Windowing_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Windowing_obj::__mClass,"__mClass");
};

#endif

hx::Class Windowing_obj::__mClass;

void Windowing_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.window.Windowing","\x48","\x1a","\xa1","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Windowing_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Windowing_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace system
} // end namespace window
