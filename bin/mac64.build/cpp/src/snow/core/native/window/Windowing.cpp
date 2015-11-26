#include <hxcpp.h>

#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_snow_core_native_window_Windowing
#include <snow/core/native/window/Windowing.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Windowing
#include <snow/modules/interfaces/Windowing.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
#ifndef INCLUDED_snow_system_window_Windowing
#include <snow/system/window/Windowing.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace window{

Void Windowing_obj::__construct(::snow::_system::window::Windowing _system)
{
HX_STACK_FRAME("snow.core.native.window.Windowing","new",0xf90964b9,"snow.core.native.window.Windowing.new","snow/core/native/window/Windowing.hx",19,0x38afcb57)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
{
	HX_STACK_LINE(19)
	this->_system = _system;
}
;
	return null();
}

//Windowing_obj::~Windowing_obj() { }

Dynamic Windowing_obj::__CreateEmpty() { return  new Windowing_obj; }
hx::ObjectPtr< Windowing_obj > Windowing_obj::__new(::snow::_system::window::Windowing _system)
{  hx::ObjectPtr< Windowing_obj > _result_ = new Windowing_obj();
	_result_->__construct(_system);
	return _result_;}

Dynamic Windowing_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Windowing_obj > _result_ = new Windowing_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Windowing_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::modules::interfaces::Windowing_obj)) return operator ::snow::modules::interfaces::Windowing_obj *();
	return super::__ToInterface(inType);
}

Windowing_obj::operator ::snow::modules::interfaces::Windowing_obj *()
	{ return new ::snow::modules::interfaces::Windowing_delegate_< Windowing_obj >(this); }
Void Windowing_obj::init( ){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","init",0xebe77497,"snow.core.native.window.Windowing.init","snow/core/native/window/Windowing.hx",21,0x38afcb57)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,init,(void))

Void Windowing_obj::update( ){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","update",0x3bd86f50,"snow.core.native.window.Windowing.update","snow/core/native/window/Windowing.hx",22,0x38afcb57)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,update,(void))

Void Windowing_obj::destroy( ){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","destroy",0xa83f61d3,"snow.core.native.window.Windowing.destroy","snow/core/native/window/Windowing.hx",23,0x38afcb57)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,destroy,(void))

Void Windowing_obj::on_event( Dynamic event){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","on_event",0xdb199ac1,"snow.core.native.window.Windowing.on_event","snow/core/native/window/Windowing.hx",24,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,on_event,(void))

Void Windowing_obj::listen( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","listen",0xa4ccb18e,"snow.core.native.window.Windowing.listen","snow/core/native/window/Windowing.hx",26,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,listen,(void))

Void Windowing_obj::unlisten( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","unlisten",0xb0960067,"snow.core.native.window.Windowing.unlisten","snow/core/native/window/Windowing.hx",27,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,unlisten,(void))

Void Windowing_obj::create( Dynamic render_config,Dynamic config,Dynamic on_created){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","create",0x30e25043,"snow.core.native.window.Windowing.create","snow/core/native/window/Windowing.hx",29,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(render_config,"render_config")
		HX_STACK_ARG(config,"config")
		HX_STACK_ARG(on_created,"on_created")
		HX_STACK_LINE(30)
		Dynamic tmp = render_config;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Dynamic tmp2 = on_created;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		::snow::core::native::window::Windowing_obj::snow_window_create(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Windowing_obj,create,(void))

Void Windowing_obj::close( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","close",0x08e93451,"snow.core.native.window.Windowing.close","snow/core/native/window/Windowing.hx",33,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(34)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::snow::core::native::window::Windowing_obj::snow_window_close(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,close,(void))

Void Windowing_obj::show( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","show",0xf27f0e84,"snow.core.native.window.Windowing.show","snow/core/native/window/Windowing.hx",37,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(38)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::snow::core::native::window::Windowing_obj::snow_window_show(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,show,(void))

Void Windowing_obj::destroy_window( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","destroy_window",0x7076741c,"snow.core.native.window.Windowing.destroy_window","snow/core/native/window/Windowing.hx",41,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(42)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::snow::core::native::window::Windowing_obj::snow_window_destroy_window(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,destroy_window,(void))

Void Windowing_obj::update_window( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","update_window",0xef6ac03f,"snow.core.native.window.Windowing.update_window","snow/core/native/window/Windowing.hx",45,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(46)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::snow::core::native::window::Windowing_obj::snow_window_update(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,update_window,(void))

Void Windowing_obj::render( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","render",0xb9fc549d,"snow.core.native.window.Windowing.render","snow/core/native/window/Windowing.hx",49,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(50)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::snow::core::native::window::Windowing_obj::snow_window_render(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,render,(void))

Void Windowing_obj::swap( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","swap",0xf28a641a,"snow.core.native.window.Windowing.swap","snow/core/native/window/Windowing.hx",53,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(54)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		::snow::core::native::window::Windowing_obj::snow_window_swap(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,swap,(void))

Void Windowing_obj::simple_message( ::snow::_system::window::Window window,::String message,::String __o_title){
::String title = __o_title.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("snow.core.native.window.Windowing","simple_message",0xac6b1dc1,"snow.core.native.window.Windowing.simple_message","snow/core/native/window/Windowing.hx",57,0x38afcb57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(window,"window")
	HX_STACK_ARG(message,"message")
	HX_STACK_ARG(title,"title")
{
		HX_STACK_LINE(58)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::String tmp1 = message;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		::String tmp2 = title;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::snow::core::native::window::Windowing_obj::snow_window_simple_message(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Windowing_obj,simple_message,(void))

Void Windowing_obj::set_size( ::snow::_system::window::Window window,int w,int h){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","set_size",0x38c0bec5,"snow.core.native.window.Windowing.set_size","snow/core/native/window/Windowing.hx",61,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(62)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		int tmp1 = w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		int tmp2 = h;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		::snow::core::native::window::Windowing_obj::snow_window_set_size(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Windowing_obj,set_size,(void))

Void Windowing_obj::set_position( ::snow::_system::window::Window window,int x,int y){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","set_position",0x44e910ad,"snow.core.native.window.Windowing.set_position","snow/core/native/window/Windowing.hx",65,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(66)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		::snow::core::native::window::Windowing_obj::snow_window_set_position(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Windowing_obj,set_position,(void))

Void Windowing_obj::set_title( ::snow::_system::window::Window window,::String title){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","set_title",0x03483b14,"snow.core.native.window.Windowing.set_title","snow/core/native/window/Windowing.hx",69,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(title,"title")
		HX_STACK_LINE(70)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::String tmp1 = title;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::snow::core::native::window::Windowing_obj::snow_window_set_title(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Windowing_obj,set_title,(void))

Void Windowing_obj::set_max_size( ::snow::_system::window::Window window,int w,int h){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","set_max_size",0x90430f80,"snow.core.native.window.Windowing.set_max_size","snow/core/native/window/Windowing.hx",73,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(74)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		int tmp1 = w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		int tmp2 = h;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		::snow::core::native::window::Windowing_obj::snow_window_set_max_size(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Windowing_obj,set_max_size,(void))

Void Windowing_obj::set_min_size( ::snow::_system::window::Window window,int w,int h){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","set_min_size",0xdd5d29d2,"snow.core.native.window.Windowing.set_min_size","snow/core/native/window/Windowing.hx",77,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(78)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		int tmp1 = w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		int tmp2 = h;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		::snow::core::native::window::Windowing_obj::snow_window_set_min_size(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Windowing_obj,set_min_size,(void))

Void Windowing_obj::fullscreen( ::snow::_system::window::Window window,bool fullscreen){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","fullscreen",0xbe22d302,"snow.core.native.window.Windowing.fullscreen","snow/core/native/window/Windowing.hx",81,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(fullscreen,"fullscreen")
		HX_STACK_LINE(82)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		bool tmp1 = fullscreen;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Dynamic tmp2 = window->__Field(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"), hx::paccDynamic )->__Field(HX_HCSTRING("fullscreen_desktop","\x98","\x8c","\x6e","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		if ((tmp2)){
			HX_STACK_LINE(82)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(82)
			tmp3 = (int)1;
		}
		HX_STACK_LINE(82)
		::snow::core::native::window::Windowing_obj::snow_window_fullscreen(tmp,tmp1,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Windowing_obj,fullscreen,(void))

Void Windowing_obj::bordered( ::snow::_system::window::Window window,bool bordered){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","bordered",0x174dc152,"snow.core.native.window.Windowing.bordered","snow/core/native/window/Windowing.hx",85,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(bordered,"bordered")
		HX_STACK_LINE(86)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		bool tmp1 = bordered;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		::snow::core::native::window::Windowing_obj::snow_window_bordered(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Windowing_obj,bordered,(void))

Void Windowing_obj::grab( ::snow::_system::window::Window window,bool grabbed){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","grab",0xea980953,"snow.core.native.window.Windowing.grab","snow/core/native/window/Windowing.hx",89,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(grabbed,"grabbed")
		HX_STACK_LINE(90)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		bool tmp1 = grabbed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		::snow::core::native::window::Windowing_obj::snow_window_grab(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Windowing_obj,grab,(void))

Void Windowing_obj::set_cursor_position( ::snow::_system::window::Window window,int x,int y){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","set_cursor_position",0x79efd6ee,"snow.core.native.window.Windowing.set_cursor_position","snow/core/native/window/Windowing.hx",93,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(94)
		Dynamic tmp = window->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::snow::core::native::window::Windowing_obj::snow_window_set_cursor_position(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Windowing_obj,set_cursor_position,(void))

Void Windowing_obj::system_lock_cursor( bool enable){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","system_lock_cursor",0x2589cf21,"snow.core.native.window.Windowing.system_lock_cursor","snow/core/native/window/Windowing.hx",101,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(102)
		bool tmp = enable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::snow::core::native::window::Windowing_obj::snow_system_lock_cursor(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,system_lock_cursor,(void))

Void Windowing_obj::system_enable_cursor( bool enable){
{
		HX_STACK_FRAME("snow.core.native.window.Windowing","system_enable_cursor",0xc7d53b49,"snow.core.native.window.Windowing.system_enable_cursor","snow/core/native/window/Windowing.hx",106,0x38afcb57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enable,"enable")
		HX_STACK_LINE(107)
		bool tmp = enable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::snow::core::native::window::Windowing_obj::snow_system_show_cursor(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,system_enable_cursor,(void))

int Windowing_obj::system_enable_vsync( bool enable){
	HX_STACK_FRAME("snow.core.native.window.Windowing","system_enable_vsync",0x376210be,"snow.core.native.window.Windowing.system_enable_vsync","snow/core/native/window/Windowing.hx",111,0x38afcb57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(enable,"enable")
	HX_STACK_LINE(112)
	bool tmp = enable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	int tmp1 = ::snow::core::native::window::Windowing_obj::snow_system_enable_vsync(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,system_enable_vsync,return )

int Windowing_obj::display_count( ){
	HX_STACK_FRAME("snow.core.native.window.Windowing","display_count",0x0362b16b,"snow.core.native.window.Windowing.display_count","snow/core/native/window/Windowing.hx",119,0x38afcb57)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	int tmp = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_count();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Windowing_obj,display_count,return )

int Windowing_obj::display_mode_count( int display){
	HX_STACK_FRAME("snow.core.native.window.Windowing","display_mode_count",0x919de997,"snow.core.native.window.Windowing.display_mode_count","snow/core/native/window/Windowing.hx",123,0x38afcb57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(124)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	int tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_mode_count(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_mode_count,return )

Dynamic Windowing_obj::display_native_mode( int display){
	HX_STACK_FRAME("snow.core.native.window.Windowing","display_native_mode",0x36accbe7,"snow.core.native.window.Windowing.display_native_mode","snow/core/native/window/Windowing.hx",127,0x38afcb57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(128)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	Dynamic tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_native_mode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_native_mode,return )

Dynamic Windowing_obj::display_current_mode( int display){
	HX_STACK_FRAME("snow.core.native.window.Windowing","display_current_mode",0xc714034d,"snow.core.native.window.Windowing.display_current_mode","snow/core/native/window/Windowing.hx",131,0x38afcb57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(132)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	Dynamic tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_current_mode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_current_mode,return )

Dynamic Windowing_obj::display_mode( int display,int mode_index){
	HX_STACK_FRAME("snow.core.native.window.Windowing","display_mode",0x2478ee47,"snow.core.native.window.Windowing.display_mode","snow/core/native/window/Windowing.hx",135,0x38afcb57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_ARG(mode_index,"mode_index")
	HX_STACK_LINE(136)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	int tmp1 = mode_index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	Dynamic tmp2 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_mode(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Windowing_obj,display_mode,return )

Dynamic Windowing_obj::display_bounds( int display){
	HX_STACK_FRAME("snow.core.native.window.Windowing","display_bounds",0x8c9d2259,"snow.core.native.window.Windowing.display_bounds","snow/core/native/window/Windowing.hx",139,0x38afcb57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(140)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	Dynamic tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_bounds(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_bounds,return )

::String Windowing_obj::display_name( int display){
	HX_STACK_FRAME("snow.core.native.window.Windowing","display_name",0x25178d2f,"snow.core.native.window.Windowing.display_name","snow/core/native/window/Windowing.hx",143,0x38afcb57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_LINE(144)
	int tmp = display;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	::String tmp1 = ::snow::core::native::window::Windowing_obj::snow_desktop_get_display_name(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Windowing_obj,display_name,return )

Dynamic Windowing_obj::snow_window_create;

Dynamic Windowing_obj::snow_window_close;

Dynamic Windowing_obj::snow_window_show;

Dynamic Windowing_obj::snow_window_destroy_window;

Dynamic Windowing_obj::snow_window_update;

Dynamic Windowing_obj::snow_window_render;

Dynamic Windowing_obj::snow_window_swap;

Dynamic Windowing_obj::snow_window_simple_message;

Dynamic Windowing_obj::snow_window_set_size;

Dynamic Windowing_obj::snow_window_set_position;

Dynamic Windowing_obj::snow_window_set_title;

Dynamic Windowing_obj::snow_window_set_max_size;

Dynamic Windowing_obj::snow_window_set_min_size;

Dynamic Windowing_obj::snow_window_fullscreen;

Dynamic Windowing_obj::snow_window_bordered;

Dynamic Windowing_obj::snow_window_grab;

Dynamic Windowing_obj::snow_window_set_cursor_position;

Dynamic Windowing_obj::snow_system_show_cursor;

Dynamic Windowing_obj::snow_system_lock_cursor;

Dynamic Windowing_obj::snow_system_enable_vsync;

Dynamic Windowing_obj::snow_desktop_get_display_count;

Dynamic Windowing_obj::snow_desktop_get_display_mode_count;

Dynamic Windowing_obj::snow_desktop_get_display_native_mode;

Dynamic Windowing_obj::snow_desktop_get_display_current_mode;

Dynamic Windowing_obj::snow_desktop_get_display_mode;

Dynamic Windowing_obj::snow_desktop_get_display_bounds;

Dynamic Windowing_obj::snow_desktop_get_display_name;


Windowing_obj::Windowing_obj()
{
}

void Windowing_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Windowing);
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_END_CLASS();
}

void Windowing_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
}

Dynamic Windowing_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"grab") ) { return grab_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"bordered") ) { return bordered_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return fullscreen_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max_size") ) { return set_max_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min_size") ) { return set_min_size_dyn(); }
		if (HX_FIELD_EQ(inName,"display_mode") ) { return display_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"display_name") ) { return display_name_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"update_window") ) { return update_window_dyn(); }
		if (HX_FIELD_EQ(inName,"display_count") ) { return display_count_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroy_window") ) { return destroy_window_dyn(); }
		if (HX_FIELD_EQ(inName,"simple_message") ) { return simple_message_dyn(); }
		if (HX_FIELD_EQ(inName,"display_bounds") ) { return display_bounds_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"system_lock_cursor") ) { return system_lock_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"display_mode_count") ) { return display_mode_count_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_cursor_position") ) { return set_cursor_position_dyn(); }
		if (HX_FIELD_EQ(inName,"system_enable_vsync") ) { return system_enable_vsync_dyn(); }
		if (HX_FIELD_EQ(inName,"display_native_mode") ) { return display_native_mode_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"system_enable_cursor") ) { return system_enable_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"display_current_mode") ) { return display_current_mode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Windowing_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"snow_window_show") ) { outValue = snow_window_show; return true;  }
		if (HX_FIELD_EQ(inName,"snow_window_swap") ) { outValue = snow_window_swap; return true;  }
		if (HX_FIELD_EQ(inName,"snow_window_grab") ) { outValue = snow_window_grab; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_window_close") ) { outValue = snow_window_close; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"snow_window_create") ) { outValue = snow_window_create; return true;  }
		if (HX_FIELD_EQ(inName,"snow_window_update") ) { outValue = snow_window_update; return true;  }
		if (HX_FIELD_EQ(inName,"snow_window_render") ) { outValue = snow_window_render; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_window_set_size") ) { outValue = snow_window_set_size; return true;  }
		if (HX_FIELD_EQ(inName,"snow_window_bordered") ) { outValue = snow_window_bordered; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_window_set_title") ) { outValue = snow_window_set_title; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"snow_window_fullscreen") ) { outValue = snow_window_fullscreen; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"snow_system_show_cursor") ) { outValue = snow_system_show_cursor; return true;  }
		if (HX_FIELD_EQ(inName,"snow_system_lock_cursor") ) { outValue = snow_system_lock_cursor; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"snow_window_set_position") ) { outValue = snow_window_set_position; return true;  }
		if (HX_FIELD_EQ(inName,"snow_window_set_max_size") ) { outValue = snow_window_set_max_size; return true;  }
		if (HX_FIELD_EQ(inName,"snow_window_set_min_size") ) { outValue = snow_window_set_min_size; return true;  }
		if (HX_FIELD_EQ(inName,"snow_system_enable_vsync") ) { outValue = snow_system_enable_vsync; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"snow_window_destroy_window") ) { outValue = snow_window_destroy_window; return true;  }
		if (HX_FIELD_EQ(inName,"snow_window_simple_message") ) { outValue = snow_window_simple_message; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_mode") ) { outValue = snow_desktop_get_display_mode; return true;  }
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_name") ) { outValue = snow_desktop_get_display_name; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_count") ) { outValue = snow_desktop_get_display_count; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_window_set_cursor_position") ) { outValue = snow_window_set_cursor_position; return true;  }
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_bounds") ) { outValue = snow_desktop_get_display_bounds; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_mode_count") ) { outValue = snow_desktop_get_display_mode_count; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_native_mode") ) { outValue = snow_desktop_get_display_native_mode; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_current_mode") ) { outValue = snow_desktop_get_display_current_mode; return true;  }
	}
	return false;
}

Dynamic Windowing_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::snow::_system::window::Windowing >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Windowing_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"snow_window_show") ) { snow_window_show=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_window_swap") ) { snow_window_swap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_window_grab") ) { snow_window_grab=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_window_close") ) { snow_window_close=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"snow_window_create") ) { snow_window_create=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_window_update") ) { snow_window_update=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_window_render") ) { snow_window_render=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_window_set_size") ) { snow_window_set_size=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_window_bordered") ) { snow_window_bordered=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_window_set_title") ) { snow_window_set_title=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"snow_window_fullscreen") ) { snow_window_fullscreen=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"snow_system_show_cursor") ) { snow_system_show_cursor=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_system_lock_cursor") ) { snow_system_lock_cursor=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"snow_window_set_position") ) { snow_window_set_position=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_window_set_max_size") ) { snow_window_set_max_size=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_window_set_min_size") ) { snow_window_set_min_size=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_system_enable_vsync") ) { snow_system_enable_vsync=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"snow_window_destroy_window") ) { snow_window_destroy_window=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_window_simple_message") ) { snow_window_simple_message=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_mode") ) { snow_desktop_get_display_mode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_name") ) { snow_desktop_get_display_name=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_count") ) { snow_desktop_get_display_count=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_window_set_cursor_position") ) { snow_window_set_cursor_position=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_bounds") ) { snow_desktop_get_display_bounds=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_mode_count") ) { snow_desktop_get_display_mode_count=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_native_mode") ) { snow_desktop_get_display_native_mode=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"snow_desktop_get_display_current_mode") ) { snow_desktop_get_display_current_mode=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Windowing_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::_system::window::Windowing*/ ,(int)offsetof(Windowing_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_create,HX_HCSTRING("snow_window_create","\xaf","\xd4","\x20","\x3d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_close,HX_HCSTRING("snow_window_close","\x65","\x21","\x7a","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_show,HX_HCSTRING("snow_window_show","\xf0","\x5f","\x75","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_destroy_window,HX_HCSTRING("snow_window_destroy_window","\x88","\x44","\xb1","\x62")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_update,HX_HCSTRING("snow_window_update","\xbc","\xf3","\x16","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_render,HX_HCSTRING("snow_window_render","\x09","\xd9","\x3a","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_swap,HX_HCSTRING("snow_window_swap","\x86","\xb5","\x80","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_simple_message,HX_HCSTRING("snow_window_simple_message","\x2d","\xee","\xa5","\x9e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_set_size,HX_HCSTRING("snow_window_set_size","\x31","\x36","\xfa","\xb4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_set_position,HX_HCSTRING("snow_window_set_position","\x19","\xae","\xf0","\xaf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_set_title,HX_HCSTRING("snow_window_set_title","\x28","\x42","\x57","\x39")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_set_max_size,HX_HCSTRING("snow_window_set_max_size","\xec","\xac","\x4a","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_set_min_size,HX_HCSTRING("snow_window_set_min_size","\x3e","\xc7","\x64","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_fullscreen,HX_HCSTRING("snow_window_fullscreen","\x6e","\xfd","\x39","\xd5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_bordered,HX_HCSTRING("snow_window_bordered","\xbe","\x38","\x87","\x93")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_grab,HX_HCSTRING("snow_window_grab","\xbf","\x5a","\x8e","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_window_set_cursor_position,HX_HCSTRING("snow_window_set_cursor_position","\x02","\xff","\x0d","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_system_show_cursor,HX_HCSTRING("snow_system_show_cursor","\x04","\x24","\x3d","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_system_lock_cursor,HX_HCSTRING("snow_system_lock_cursor","\xd6","\x36","\x83","\xe5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_system_enable_vsync,HX_HCSTRING("snow_system_enable_vsync","\x69","\x67","\xa3","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_desktop_get_display_count,HX_HCSTRING("snow_desktop_get_display_count","\xca","\x78","\xee","\x1b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_desktop_get_display_mode_count,HX_HCSTRING("snow_desktop_get_display_mode_count","\xd8","\x09","\xe8","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_desktop_get_display_native_mode,HX_HCSTRING("snow_desktop_get_display_native_mode","\x86","\xe4","\x3e","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_desktop_get_display_current_mode,HX_HCSTRING("snow_desktop_get_display_current_mode","\xce","\x75","\x57","\x16")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_desktop_get_display_mode,HX_HCSTRING("snow_desktop_get_display_mode","\xc8","\x77","\xe5","\xaa")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_desktop_get_display_bounds,HX_HCSTRING("snow_desktop_get_display_bounds","\x1a","\xce","\x5f","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Windowing_obj::snow_desktop_get_display_name,HX_HCSTRING("snow_desktop_get_display_name","\xb0","\x16","\x84","\xab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	HX_HCSTRING("unlisten","\x60","\xf7","\x40","\xf2"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("destroy_window","\xd5","\x6b","\x1e","\x60"),
	HX_HCSTRING("update_window","\xa6","\xe2","\x20","\xbf"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("simple_message","\x7a","\x15","\x13","\x9c"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("set_title","\xfb","\x5d","\x35","\x37"),
	HX_HCSTRING("set_max_size","\xf9","\x76","\x67","\xe0"),
	HX_HCSTRING("set_min_size","\x4b","\x91","\x81","\x2d"),
	HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"),
	HX_HCSTRING("bordered","\x4b","\xb8","\xf8","\x58"),
	HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"),
	HX_HCSTRING("set_cursor_position","\x95","\x40","\x0e","\x8b"),
	HX_HCSTRING("system_lock_cursor","\x5a","\x97","\x1a","\xf3"),
	HX_HCSTRING("system_enable_cursor","\xc2","\x43","\x53","\xb1"),
	HX_HCSTRING("system_enable_vsync","\x65","\x7a","\x80","\x48"),
	HX_HCSTRING("display_count","\xd2","\xd3","\x18","\xd3"),
	HX_HCSTRING("display_mode_count","\xd0","\xb1","\x2e","\x5f"),
	HX_HCSTRING("display_native_mode","\x8e","\x35","\xcb","\x47"),
	HX_HCSTRING("display_current_mode","\xc6","\x0b","\x92","\xb0"),
	HX_HCSTRING("display_mode","\xc0","\x55","\x9d","\x74"),
	HX_HCSTRING("display_bounds","\x12","\x1a","\x45","\x7c"),
	HX_HCSTRING("display_name","\xa8","\xf4","\x3b","\x75"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Windowing_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_create,"snow_window_create");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_close,"snow_window_close");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_show,"snow_window_show");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_destroy_window,"snow_window_destroy_window");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_update,"snow_window_update");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_render,"snow_window_render");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_swap,"snow_window_swap");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_simple_message,"snow_window_simple_message");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_set_size,"snow_window_set_size");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_set_position,"snow_window_set_position");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_set_title,"snow_window_set_title");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_set_max_size,"snow_window_set_max_size");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_set_min_size,"snow_window_set_min_size");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_fullscreen,"snow_window_fullscreen");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_bordered,"snow_window_bordered");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_grab,"snow_window_grab");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_window_set_cursor_position,"snow_window_set_cursor_position");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_system_show_cursor,"snow_system_show_cursor");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_system_lock_cursor,"snow_system_lock_cursor");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_system_enable_vsync,"snow_system_enable_vsync");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_count,"snow_desktop_get_display_count");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_mode_count,"snow_desktop_get_display_mode_count");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_native_mode,"snow_desktop_get_display_native_mode");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_current_mode,"snow_desktop_get_display_current_mode");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_mode,"snow_desktop_get_display_mode");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_bounds,"snow_desktop_get_display_bounds");
	HX_MARK_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_name,"snow_desktop_get_display_name");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Windowing_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_create,"snow_window_create");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_close,"snow_window_close");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_show,"snow_window_show");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_destroy_window,"snow_window_destroy_window");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_update,"snow_window_update");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_render,"snow_window_render");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_swap,"snow_window_swap");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_simple_message,"snow_window_simple_message");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_set_size,"snow_window_set_size");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_set_position,"snow_window_set_position");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_set_title,"snow_window_set_title");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_set_max_size,"snow_window_set_max_size");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_set_min_size,"snow_window_set_min_size");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_fullscreen,"snow_window_fullscreen");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_bordered,"snow_window_bordered");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_grab,"snow_window_grab");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_window_set_cursor_position,"snow_window_set_cursor_position");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_system_show_cursor,"snow_system_show_cursor");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_system_lock_cursor,"snow_system_lock_cursor");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_system_enable_vsync,"snow_system_enable_vsync");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_count,"snow_desktop_get_display_count");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_mode_count,"snow_desktop_get_display_mode_count");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_native_mode,"snow_desktop_get_display_native_mode");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_current_mode,"snow_desktop_get_display_current_mode");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_mode,"snow_desktop_get_display_mode");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_bounds,"snow_desktop_get_display_bounds");
	HX_VISIT_MEMBER_NAME(Windowing_obj::snow_desktop_get_display_name,"snow_desktop_get_display_name");
};

#endif

hx::Class Windowing_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("snow_window_create","\xaf","\xd4","\x20","\x3d"),
	HX_HCSTRING("snow_window_close","\x65","\x21","\x7a","\x3b"),
	HX_HCSTRING("snow_window_show","\xf0","\x5f","\x75","\x17"),
	HX_HCSTRING("snow_window_destroy_window","\x88","\x44","\xb1","\x62"),
	HX_HCSTRING("snow_window_update","\xbc","\xf3","\x16","\x48"),
	HX_HCSTRING("snow_window_render","\x09","\xd9","\x3a","\xc6"),
	HX_HCSTRING("snow_window_swap","\x86","\xb5","\x80","\x17"),
	HX_HCSTRING("snow_window_simple_message","\x2d","\xee","\xa5","\x9e"),
	HX_HCSTRING("snow_window_set_size","\x31","\x36","\xfa","\xb4"),
	HX_HCSTRING("snow_window_set_position","\x19","\xae","\xf0","\xaf"),
	HX_HCSTRING("snow_window_set_title","\x28","\x42","\x57","\x39"),
	HX_HCSTRING("snow_window_set_max_size","\xec","\xac","\x4a","\xfb"),
	HX_HCSTRING("snow_window_set_min_size","\x3e","\xc7","\x64","\x48"),
	HX_HCSTRING("snow_window_fullscreen","\x6e","\xfd","\x39","\xd5"),
	HX_HCSTRING("snow_window_bordered","\xbe","\x38","\x87","\x93"),
	HX_HCSTRING("snow_window_grab","\xbf","\x5a","\x8e","\x0f"),
	HX_HCSTRING("snow_window_set_cursor_position","\x02","\xff","\x0d","\x9f"),
	HX_HCSTRING("snow_system_show_cursor","\x04","\x24","\x3d","\xbb"),
	HX_HCSTRING("snow_system_lock_cursor","\xd6","\x36","\x83","\xe5"),
	HX_HCSTRING("snow_system_enable_vsync","\x69","\x67","\xa3","\x71"),
	HX_HCSTRING("snow_desktop_get_display_count","\xca","\x78","\xee","\x1b"),
	HX_HCSTRING("snow_desktop_get_display_mode_count","\xd8","\x09","\xe8","\xa1"),
	HX_HCSTRING("snow_desktop_get_display_native_mode","\x86","\xe4","\x3e","\x67"),
	HX_HCSTRING("snow_desktop_get_display_current_mode","\xce","\x75","\x57","\x16"),
	HX_HCSTRING("snow_desktop_get_display_mode","\xc8","\x77","\xe5","\xaa"),
	HX_HCSTRING("snow_desktop_get_display_bounds","\x1a","\xce","\x5f","\xee"),
	HX_HCSTRING("snow_desktop_get_display_name","\xb0","\x16","\x84","\xab"),
	::String(null()) };

void Windowing_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.window.Windowing","\x47","\x94","\x00","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Windowing_obj::__GetStatic;
	__mClass->mSetStaticField = &Windowing_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
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

void Windowing_obj::__boot()
{
	snow_window_create= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_create","\xaf","\xd4","\x20","\x3d"),(int)3);
	snow_window_close= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_close","\x65","\x21","\x7a","\x3b"),(int)1);
	snow_window_show= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_show","\xf0","\x5f","\x75","\x17"),(int)1);
	snow_window_destroy_window= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_destroy_window","\x88","\x44","\xb1","\x62"),(int)1);
	snow_window_update= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_update","\xbc","\xf3","\x16","\x48"),(int)1);
	snow_window_render= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_render","\x09","\xd9","\x3a","\xc6"),(int)1);
	snow_window_swap= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_swap","\x86","\xb5","\x80","\x17"),(int)1);
	snow_window_simple_message= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_simple_message","\x2d","\xee","\xa5","\x9e"),(int)3);
	snow_window_set_size= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_set_size","\x31","\x36","\xfa","\xb4"),(int)3);
	snow_window_set_position= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_set_position","\x19","\xae","\xf0","\xaf"),(int)3);
	snow_window_set_title= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_set_title","\x28","\x42","\x57","\x39"),(int)2);
	snow_window_set_max_size= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_set_max_size","\xec","\xac","\x4a","\xfb"),(int)3);
	snow_window_set_min_size= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_set_min_size","\x3e","\xc7","\x64","\x48"),(int)3);
	snow_window_fullscreen= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_fullscreen","\x6e","\xfd","\x39","\xd5"),(int)3);
	snow_window_bordered= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_bordered","\xbe","\x38","\x87","\x93"),(int)2);
	snow_window_grab= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_grab","\xbf","\x5a","\x8e","\x0f"),(int)2);
	snow_window_set_cursor_position= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_window_set_cursor_position","\x02","\xff","\x0d","\x9f"),(int)3);
	snow_system_show_cursor= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_system_show_cursor","\x04","\x24","\x3d","\xbb"),(int)1);
	snow_system_lock_cursor= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_system_lock_cursor","\xd6","\x36","\x83","\xe5"),(int)1);
	snow_system_enable_vsync= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_system_enable_vsync","\x69","\x67","\xa3","\x71"),(int)1);
	snow_desktop_get_display_count= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_desktop_get_display_count","\xca","\x78","\xee","\x1b"),(int)0);
	snow_desktop_get_display_mode_count= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_desktop_get_display_mode_count","\xd8","\x09","\xe8","\xa1"),(int)1);
	snow_desktop_get_display_native_mode= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_desktop_get_display_native_mode","\x86","\xe4","\x3e","\x67"),(int)1);
	snow_desktop_get_display_current_mode= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_desktop_get_display_current_mode","\xce","\x75","\x57","\x16"),(int)1);
	snow_desktop_get_display_mode= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_desktop_get_display_mode","\xc8","\x77","\xe5","\xaa"),(int)2);
	snow_desktop_get_display_bounds= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_desktop_get_display_bounds","\x1a","\xce","\x5f","\xee"),(int)1);
	snow_desktop_get_display_name= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_desktop_get_display_name","\xb0","\x16","\x84","\xab"),(int)1);
}

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace window
