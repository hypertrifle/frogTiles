#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
#ifndef INCLUDED_snow_core_native_window_Windowing
#include <snow/core/native/window/Windowing.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Windowing
#include <snow/modules/interfaces/Windowing.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
#ifndef INCLUDED_snow_system_window_Windowing
#include <snow/system/window/Windowing.h>
#endif
namespace snow{
namespace _system{
namespace window{

Void Window_obj::__construct(::snow::_system::window::Windowing _system,Dynamic _config)
{
HX_STACK_FRAME("snow.system.window.Window","new",0x3f564ccc,"snow.system.window.Window.new","snow/system/window/Window.hx",13,0x55ef7a23)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_config,"_config")
{
	HX_STACK_LINE(62)
	this->internal_resize = false;
	HX_STACK_LINE(61)
	this->internal_position = false;
	HX_STACK_LINE(60)
	this->minimized = false;
	HX_STACK_LINE(56)
	this->closed = true;
	HX_STACK_LINE(54)
	this->auto_render = true;
	HX_STACK_LINE(52)
	this->auto_swap = true;
	HX_STACK_LINE(44)
	this->height = (int)0;
	HX_STACK_LINE(43)
	this->width = (int)0;
	HX_STACK_LINE(42)
	this->y = (int)0;
	HX_STACK_LINE(41)
	this->x = (int)0;
	HX_STACK_LINE(38)
	this->fullscreen = false;
	HX_STACK_LINE(36)
	this->grab = false;
	HX_STACK_LINE(34)
	this->bordered = true;
	HX_STACK_LINE(32)
	this->title = HX_HCSTRING("snow window","\xed","\xaf","\x44","\x16");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/window/Window.hx",66,0x55ef7a23)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , (int)0,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(66)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	this->set_max_size(tmp);
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/window/Window.hx",67,0x55ef7a23)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , (int)0,false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(67)
	Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	this->set_min_size(tmp1);
	HX_STACK_LINE(69)
	this->_system = _system;
	HX_STACK_LINE(70)
	this->asked_config = _config;
	HX_STACK_LINE(71)
	this->config = _config;
	HX_STACK_LINE(74)
	Dynamic tmp2 = this->config;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	if ((tmp4)){
		HX_STACK_LINE(75)
		Dynamic tmp5 = this->config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		tmp5->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)536805376;
	}
	HX_STACK_LINE(78)
	Dynamic tmp5 = this->config;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(78)
	bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(78)
	if ((tmp7)){
		HX_STACK_LINE(79)
		Dynamic tmp8 = this->config;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		tmp8->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)536805376;
	}
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		::snow::_system::window::Windowing tmp8 = this->_system;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		Dynamic tmp9 = tmp8->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		Dynamic tmp10 = tmp9->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		Dynamic tmp11 = _config;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		Dynamic tmp12 = this->on_window_created_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(82)
		::snow::core::native::window::Windowing_obj::snow_window_create(tmp10,tmp11,tmp12);
	}
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(::snow::_system::window::Windowing _system,Dynamic _config)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(_system,_config);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Window_obj::on_window_created( Dynamic _handle,int _id,Dynamic _configs){
{
		HX_STACK_FRAME("snow.system.window.Window","on_window_created",0x8d21f725,"snow.system.window.Window.on_window_created","snow/system/window/Window.hx",86,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_handle,"_handle")
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_configs,"_configs")
		HX_STACK_LINE(88)
		this->id = _id;
		HX_STACK_LINE(89)
		this->handle = _handle;
		HX_STACK_LINE(91)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(92)
			::String tmp2 = HX_HCSTRING("   i / window / failed to create window","\x59","\xe6","\x0b","\xc2");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Window.hx","\xae","\xa4","\xea","\x37"),92,HX_HCSTRING("snow.system.window.Window","\xda","\x36","\x6d","\x3d"),HX_HCSTRING("on_window_created","\xb9","\x15","\x17","\x13"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			::haxe::Log_obj::trace(tmp2,tmp3);
			HX_STACK_LINE(93)
			return null();
		}
		HX_STACK_LINE(96)
		this->closed = false;
		HX_STACK_LINE(98)
		this->config = _configs->__Field(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"), hx::paccDynamic );
		HX_STACK_LINE(100)
		::snow::_system::window::Windowing tmp2 = this->_system;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		tmp3->__FieldRef(HX_HCSTRING("render","\x56","\x6b","\x29","\x05")) = _configs->__Field(HX_HCSTRING("render_config","\xcb","\xb3","\xe5","\x64"), hx::paccDynamic );
		HX_STACK_LINE(104)
		this->internal_position = true;
		HX_STACK_LINE(105)
		Dynamic tmp4 = this->config;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		this->set_x(tmp5);
		HX_STACK_LINE(106)
		Dynamic tmp6 = this->config;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		this->set_y(tmp7);
		HX_STACK_LINE(107)
		this->internal_position = false;
		HX_STACK_LINE(109)
		this->internal_resize = true;
		HX_STACK_LINE(110)
		Dynamic tmp8 = this->config;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(110)
		Dynamic tmp9 = tmp8->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(110)
		this->set_width(tmp9);
		HX_STACK_LINE(111)
		Dynamic tmp10 = this->config;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(111)
		Dynamic tmp11 = tmp10->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(111)
		this->set_height(tmp11);
		HX_STACK_LINE(112)
		this->internal_resize = false;
		HX_STACK_LINE(120)
		int tmp12 = _id;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(121)
		::snow::core::native::Core tmp13 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(121)
		Float tmp14 = tmp13->timestamp();		HX_STACK_VAR(tmp14,"tmp14");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/window/Window.hx",122,0x55ef7a23)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(122)
		Dynamic tmp15 = _Function_1_1::Block();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(122)
		Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_2{
			inline static Dynamic Block( int &tmp12,Dynamic &tmp16,Float &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/window/Window.hx",118,0x55ef7a23)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)1,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , tmp12,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp14,false);
					__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , tmp16,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(118)
		Dynamic tmp17 = _Function_1_2::Block(tmp12,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(118)
		this->on_event(tmp17);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Window_obj,on_window_created,(void))

Void Window_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.system.window.Window","on_event",0xa5cb8dce,"snow.system.window.Window.on_event","snow/system/window/Window.hx",130,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			Dynamic _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			bool tmp = (_g != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(134)
			if ((tmp)){
				HX_STACK_LINE(134)
				Dynamic tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(134)
				switch( (int)(tmp1)){
					case (int)5: {
						HX_STACK_LINE(138)
						this->internal_position = true;
						HX_STACK_LINE(139)
						this->set_position(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(140)
						this->internal_position = false;
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(146)
						this->internal_resize = true;
						HX_STACK_LINE(147)
						this->set_size(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(148)
						this->internal_resize = false;
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(154)
						this->internal_resize = true;
						HX_STACK_LINE(155)
						this->set_size(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(156)
						this->internal_resize = false;
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(162)
						this->minimized = true;
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(168)
						this->minimized = false;
					}
					;break;
					default: {
					}
				}
			}
			else{
			}
		}
		HX_STACK_LINE(176)
		Dynamic tmp = this->onevent_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		if ((tmp1)){
			HX_STACK_LINE(177)
			Dynamic tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(177)
			this->onevent(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,on_event,(void))

Void Window_obj::update( ){
{
		HX_STACK_FRAME("snow.system.window.Window","update",0x531b951d,"snow.system.window.Window.update","snow/system/window/Window.hx",182,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		if ((tmp1)){
			HX_STACK_LINE(184)
			bool tmp3 = this->closed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(184)
			tmp2 = false;
		}
		HX_STACK_LINE(184)
		if ((tmp2)){
			HX_STACK_LINE(185)
			Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			::snow::core::native::window::Windowing_obj::snow_window_update(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,update,(void))

Void Window_obj::render( ){
{
		HX_STACK_FRAME("snow.system.window.Window","render",0xd13f7a6a,"snow.system.window.Window.render","snow/system/window/Window.hx",192,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		bool tmp = this->minimized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		if ((tmp1)){
			HX_STACK_LINE(194)
			tmp2 = this->closed;
		}
		else{
			HX_STACK_LINE(194)
			tmp2 = true;
		}
		HX_STACK_LINE(194)
		if ((tmp2)){
			HX_STACK_LINE(195)
			return null();
		}
		HX_STACK_LINE(198)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		if ((tmp4)){
			HX_STACK_LINE(199)
			return null();
		}
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			Dynamic tmp5 = this->handle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			::snow::core::native::window::Windowing_obj::snow_window_render(tmp5);
		}
		HX_STACK_LINE(204)
		Dynamic tmp5 = this->onrender_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		if ((tmp6)){
			HX_STACK_LINE(206)
			this->onrender(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(208)
			bool tmp7 = this->auto_swap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			if ((tmp7)){
				HX_STACK_LINE(209)
				this->swap();
			}
			HX_STACK_LINE(212)
			return null();
		}
		HX_STACK_LINE(216)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear_color((int)0,(int)0,(int)0,((Float)1.0));
		HX_STACK_LINE(217)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear((int)16384);
		HX_STACK_LINE(219)
		bool tmp7 = this->auto_swap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(219)
		if ((tmp7)){
			HX_STACK_LINE(220)
			this->swap();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,render,(void))

Void Window_obj::swap( ){
{
		HX_STACK_FRAME("snow.system.window.Window","swap",0x2f888ca7,"snow.system.window.Window.swap","snow/system/window/Window.hx",226,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(228)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(228)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		if ((tmp3)){
			HX_STACK_LINE(228)
			tmp4 = this->closed;
		}
		else{
			HX_STACK_LINE(228)
			tmp4 = true;
		}
		HX_STACK_LINE(228)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(228)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(228)
		if ((tmp5)){
			HX_STACK_LINE(228)
			tmp6 = this->minimized;
		}
		else{
			HX_STACK_LINE(228)
			tmp6 = true;
		}
		HX_STACK_LINE(228)
		if ((tmp6)){
			HX_STACK_LINE(229)
			return null();
		}
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			Dynamic tmp7 = this->handle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(232)
			::snow::core::native::window::Windowing_obj::snow_window_swap(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,swap,(void))

Void Window_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.window.Window","destroy",0xebbd4f66,"snow.system.window.Window.destroy","snow/system/window/Window.hx",237,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		this->closed = true;
		HX_STACK_LINE(241)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		if ((tmp1)){
			HX_STACK_LINE(242)
			return null();
		}
		HX_STACK_LINE(245)
		::snow::_system::window::Windowing tmp2 = this->_system;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		tmp2->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(247)
			::snow::core::native::window::Windowing_obj::snow_window_destroy_window(tmp3);
		}
		HX_STACK_LINE(249)
		this->handle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,destroy,(void))

Void Window_obj::close( ){
{
		HX_STACK_FRAME("snow.system.window.Window","close",0x2a4e8724,"snow.system.window.Window.close","snow/system/window/Window.hx",254,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		this->closed = true;
		HX_STACK_LINE(258)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		if ((tmp1)){
			HX_STACK_LINE(259)
			return null();
		}
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			::snow::core::native::window::Windowing_obj::snow_window_close(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

Void Window_obj::show( ){
{
		HX_STACK_FRAME("snow.system.window.Window","show",0x2f7d3711,"snow.system.window.Window.show","snow/system/window/Window.hx",267,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(269)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		if ((tmp1)){
			HX_STACK_LINE(270)
			return null();
		}
		HX_STACK_LINE(273)
		this->closed = false;
		HX_STACK_LINE(275)
		{
			HX_STACK_LINE(275)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(275)
			::snow::core::native::window::Windowing_obj::snow_window_show(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,show,(void))

Void Window_obj::simple_message( ::String message,::String __o_title){
::String title = __o_title.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("snow.system.window.Window","simple_message",0x0e2c588e,"snow.system.window.Window.simple_message","snow/system/window/Window.hx",280,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(message,"message")
	HX_STACK_ARG(title,"title")
{
		HX_STACK_LINE(282)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		if ((tmp1)){
			HX_STACK_LINE(283)
			return null();
		}
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			::String tmp3 = message;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			::String tmp4 = title;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			::snow::core::native::window::Windowing_obj::snow_window_simple_message(tmp2,tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,simple_message,(void))

bool Window_obj::get_fullscreen( ){
	HX_STACK_FRAME("snow.system.window.Window","get_fullscreen",0xe1c30598,"snow.system.window.Window.get_fullscreen","snow/system/window/Window.hx",290,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	bool tmp = this->fullscreen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_fullscreen,return )

bool Window_obj::set_fullscreen( bool _enable){
	HX_STACK_FRAME("snow.system.window.Window","set_fullscreen",0x01e2ee0c,"snow.system.window.Window.set_fullscreen","snow/system/window/Window.hx",297,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_enable,"_enable")
	HX_STACK_LINE(299)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	if ((tmp1)){
		HX_STACK_LINE(300)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(300)
		bool tmp3 = _enable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(300)
		Dynamic tmp4 = this->config;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(300)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("fullscreen_desktop","\x98","\x8c","\x6e","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(300)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(300)
		if ((tmp5)){
			HX_STACK_LINE(300)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(300)
			tmp6 = (int)1;
		}
		HX_STACK_LINE(300)
		::snow::core::native::window::Windowing_obj::snow_window_fullscreen(tmp2,tmp3,tmp6);
	}
	HX_STACK_LINE(303)
	bool tmp2 = this->fullscreen = _enable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(303)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_fullscreen,return )

bool Window_obj::get_bordered( ){
	HX_STACK_FRAME("snow.system.window.Window","get_bordered",0x104b0268,"snow.system.window.Window.get_bordered","snow/system/window/Window.hx",307,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	bool tmp = this->bordered;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_bordered,return )

bool Window_obj::get_grab( ){
	HX_STACK_FRAME("snow.system.window.Window","get_grab",0x4d2d8769,"snow.system.window.Window.get_grab","snow/system/window/Window.hx",313,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	bool tmp = this->grab;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_grab,return )

Dynamic Window_obj::get_max_size( ){
	HX_STACK_FRAME("snow.system.window.Window","get_max_size",0xcda6e999,"snow.system.window.Window.get_max_size","snow/system/window/Window.hx",319,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(321)
	Dynamic tmp = this->max_size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_max_size,return )

Dynamic Window_obj::get_min_size( ){
	HX_STACK_FRAME("snow.system.window.Window","get_min_size",0x1ac103eb,"snow.system.window.Window.get_min_size","snow/system/window/Window.hx",325,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(327)
	Dynamic tmp = this->min_size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_min_size,return )

::String Window_obj::get_title( ){
	HX_STACK_FRAME("snow.system.window.Window","get_title",0xb0fa075b,"snow.system.window.Window.get_title","snow/system/window/Window.hx",331,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(333)
	::String tmp = this->title;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(333)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_title,return )

::String Window_obj::set_title( ::String _title){
	HX_STACK_FRAME("snow.system.window.Window","set_title",0x944af367,"snow.system.window.Window.set_title","snow/system/window/Window.hx",337,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
	HX_STACK_LINE(339)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(339)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	if ((tmp1)){
		HX_STACK_LINE(340)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(340)
		::String tmp3 = _title;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(340)
		::snow::core::native::window::Windowing_obj::snow_window_set_title(tmp2,tmp3);
	}
	HX_STACK_LINE(343)
	::String tmp2 = this->title = _title;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(343)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_title,return )

int Window_obj::set_x( int _x){
	HX_STACK_FRAME("snow.system.window.Window","set_x",0x5c1b0ac7,"snow.system.window.Window.set_x","snow/system/window/Window.hx",347,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(349)
	this->x = _x;
	HX_STACK_LINE(351)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(351)
	if ((tmp1)){
		HX_STACK_LINE(351)
		bool tmp3 = this->internal_position;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(351)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(351)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(351)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(351)
		tmp2 = false;
	}
	HX_STACK_LINE(351)
	if ((tmp2)){
		HX_STACK_LINE(352)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		int tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(352)
		int tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(352)
		::snow::core::native::window::Windowing_obj::snow_window_set_position(tmp3,tmp4,tmp5);
	}
	HX_STACK_LINE(355)
	int tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(355)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_x,return )

int Window_obj::set_y( int _y){
	HX_STACK_FRAME("snow.system.window.Window","set_y",0x5c1b0ac8,"snow.system.window.Window.set_y","snow/system/window/Window.hx",359,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(361)
	this->y = _y;
	HX_STACK_LINE(363)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	if ((tmp1)){
		HX_STACK_LINE(363)
		bool tmp3 = this->internal_position;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(363)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(363)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(363)
		tmp2 = false;
	}
	HX_STACK_LINE(363)
	if ((tmp2)){
		HX_STACK_LINE(364)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		int tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		int tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(364)
		::snow::core::native::window::Windowing_obj::snow_window_set_position(tmp3,tmp4,tmp5);
	}
	HX_STACK_LINE(367)
	int tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(367)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_y,return )

int Window_obj::set_width( int _width){
	HX_STACK_FRAME("snow.system.window.Window","set_width",0x4e7293d5,"snow.system.window.Window.set_width","snow/system/window/Window.hx",371,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_width,"_width")
	HX_STACK_LINE(373)
	this->width = _width;
	HX_STACK_LINE(375)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(375)
	if ((tmp1)){
		HX_STACK_LINE(375)
		bool tmp3 = this->internal_resize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(375)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(375)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(375)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(375)
		tmp2 = false;
	}
	HX_STACK_LINE(375)
	if ((tmp2)){
		HX_STACK_LINE(376)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(376)
		int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(376)
		int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(376)
		::snow::core::native::window::Windowing_obj::snow_window_set_size(tmp3,tmp4,tmp5);
	}
	HX_STACK_LINE(379)
	int tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(379)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_width,return )

int Window_obj::set_height( int _height){
	HX_STACK_FRAME("snow.system.window.Window","set_height",0x0c1e3f38,"snow.system.window.Window.set_height","snow/system/window/Window.hx",383,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_height,"_height")
	HX_STACK_LINE(385)
	this->height = _height;
	HX_STACK_LINE(387)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(387)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(387)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(387)
	if ((tmp1)){
		HX_STACK_LINE(387)
		bool tmp3 = this->internal_resize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(387)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(387)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(387)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(387)
		tmp2 = false;
	}
	HX_STACK_LINE(387)
	if ((tmp2)){
		HX_STACK_LINE(388)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(388)
		int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(388)
		::snow::core::native::window::Windowing_obj::snow_window_set_size(tmp3,tmp4,tmp5);
	}
	HX_STACK_LINE(391)
	int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(391)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_height,return )

Void Window_obj::set_cursor_position( int _x,int _y){
{
		HX_STACK_FRAME("snow.system.window.Window","set_cursor_position",0xc6a55501,"snow.system.window.Window.set_cursor_position","snow/system/window/Window.hx",395,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(397)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		if ((tmp1)){
			HX_STACK_LINE(397)
			bool tmp3 = this->closed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(397)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(397)
			tmp2 = false;
		}
		HX_STACK_LINE(397)
		if ((tmp2)){
			HX_STACK_LINE(398)
			Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(398)
			int tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(398)
			int tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(398)
			::snow::core::native::window::Windowing_obj::snow_window_set_cursor_position(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,set_cursor_position,(void))

Void Window_obj::set_position( int _x,int _y){
{
		HX_STACK_FRAME("snow.system.window.Window","set_position",0x97460e3a,"snow.system.window.Window.set_position","snow/system/window/Window.hx",403,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(406)
		bool tmp = this->internal_position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		bool last_internal_position_flag = tmp;		HX_STACK_VAR(last_internal_position_flag,"last_internal_position_flag");
		HX_STACK_LINE(409)
		this->internal_position = true;
		HX_STACK_LINE(410)
		int tmp1 = _x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		this->set_x(tmp1);
		HX_STACK_LINE(411)
		int tmp2 = _y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		this->set_y(tmp2);
		HX_STACK_LINE(412)
		this->internal_position = last_internal_position_flag;
		HX_STACK_LINE(415)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(415)
		if ((tmp4)){
			HX_STACK_LINE(415)
			bool tmp6 = this->internal_position;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(415)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(415)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(415)
			tmp5 = false;
		}
		HX_STACK_LINE(415)
		if ((tmp5)){
			HX_STACK_LINE(416)
			Dynamic tmp6 = this->handle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			int tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			int tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(416)
			::snow::core::native::window::Windowing_obj::snow_window_set_position(tmp6,tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,set_position,(void))

Void Window_obj::set_size( int _width,int _height){
{
		HX_STACK_FRAME("snow.system.window.Window","set_size",0x0372b1d2,"snow.system.window.Window.set_size","snow/system/window/Window.hx",421,0x55ef7a23)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_width,"_width")
		HX_STACK_ARG(_height,"_height")
		HX_STACK_LINE(424)
		bool tmp = this->internal_resize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(424)
		bool last_internal_resize_flag = tmp;		HX_STACK_VAR(last_internal_resize_flag,"last_internal_resize_flag");
		HX_STACK_LINE(427)
		this->internal_resize = true;
		HX_STACK_LINE(428)
		int tmp1 = _width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		this->set_width(tmp1);
		HX_STACK_LINE(429)
		int tmp2 = _height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(429)
		this->set_height(tmp2);
		HX_STACK_LINE(430)
		this->internal_resize = last_internal_resize_flag;
		HX_STACK_LINE(432)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(432)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(432)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(432)
		if ((tmp4)){
			HX_STACK_LINE(432)
			bool tmp6 = this->internal_resize;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(432)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(432)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(432)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(432)
			tmp5 = false;
		}
		HX_STACK_LINE(432)
		if ((tmp5)){
			HX_STACK_LINE(433)
			Dynamic tmp6 = this->handle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(433)
			int tmp7 = _width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(433)
			int tmp8 = _height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(433)
			::snow::core::native::window::Windowing_obj::snow_window_set_size(tmp6,tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,set_size,(void))

Dynamic Window_obj::set_max_size( Dynamic _size){
	HX_STACK_FRAME("snow.system.window.Window","set_max_size",0xe2a00d0d,"snow.system.window.Window.set_max_size","snow/system/window/Window.hx",438,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(440)
	Dynamic tmp = this->get_max_size();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(440)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(440)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(440)
	if ((tmp1)){
		HX_STACK_LINE(440)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(440)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(440)
		tmp2 = (tmp4 != null());
	}
	else{
		HX_STACK_LINE(440)
		tmp2 = false;
	}
	HX_STACK_LINE(440)
	if ((tmp2)){
		HX_STACK_LINE(441)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		int tmp4 = _size->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		int tmp5 = _size->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(441)
		::snow::core::native::window::Windowing_obj::snow_window_set_max_size(tmp3,tmp4,tmp5);
	}
	HX_STACK_LINE(444)
	Dynamic tmp3 = this->max_size = _size;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(444)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_max_size,return )

Dynamic Window_obj::set_min_size( Dynamic _size){
	HX_STACK_FRAME("snow.system.window.Window","set_min_size",0x2fba275f,"snow.system.window.Window.set_min_size","snow/system/window/Window.hx",448,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(450)
	Dynamic tmp = this->get_min_size();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(450)
	if ((tmp1)){
		HX_STACK_LINE(450)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(450)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(450)
		tmp2 = (tmp4 != null());
	}
	else{
		HX_STACK_LINE(450)
		tmp2 = false;
	}
	HX_STACK_LINE(450)
	if ((tmp2)){
		HX_STACK_LINE(451)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(451)
		int tmp4 = _size->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(451)
		int tmp5 = _size->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(451)
		::snow::core::native::window::Windowing_obj::snow_window_set_min_size(tmp3,tmp4,tmp5);
	}
	HX_STACK_LINE(454)
	Dynamic tmp3 = this->min_size = _size;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(454)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_min_size,return )

bool Window_obj::set_bordered( bool _bordered){
	HX_STACK_FRAME("snow.system.window.Window","set_bordered",0x254425dc,"snow.system.window.Window.set_bordered","snow/system/window/Window.hx",458,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bordered,"_bordered")
	HX_STACK_LINE(460)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(460)
	if ((tmp1)){
		HX_STACK_LINE(461)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(461)
		bool tmp3 = _bordered;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(461)
		::snow::core::native::window::Windowing_obj::snow_window_bordered(tmp2,tmp3);
	}
	HX_STACK_LINE(464)
	bool tmp2 = this->bordered = _bordered;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(464)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_bordered,return )

bool Window_obj::set_grab( bool _grab){
	HX_STACK_FRAME("snow.system.window.Window","set_grab",0xfb8ae0dd,"snow.system.window.Window.set_grab","snow/system/window/Window.hx",468,0x55ef7a23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_grab,"_grab")
	HX_STACK_LINE(470)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	if ((tmp1)){
		HX_STACK_LINE(471)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(471)
		bool tmp3 = _grab;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(471)
		::snow::core::native::window::Windowing_obj::snow_window_grab(tmp2,tmp3);
	}
	HX_STACK_LINE(474)
	bool tmp2 = this->grab = _grab;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(474)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_grab,return )


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_MEMBER_NAME(asked_config,"asked_config");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(onevent,"onevent");
	HX_MARK_MEMBER_NAME(onrender,"onrender");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(bordered,"bordered");
	HX_MARK_MEMBER_NAME(grab,"grab");
	HX_MARK_MEMBER_NAME(fullscreen,"fullscreen");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(max_size,"max_size");
	HX_MARK_MEMBER_NAME(min_size,"min_size");
	HX_MARK_MEMBER_NAME(auto_swap,"auto_swap");
	HX_MARK_MEMBER_NAME(auto_render,"auto_render");
	HX_MARK_MEMBER_NAME(closed,"closed");
	HX_MARK_MEMBER_NAME(minimized,"minimized");
	HX_MARK_MEMBER_NAME(internal_position,"internal_position");
	HX_MARK_MEMBER_NAME(internal_resize,"internal_resize");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(_system,"system");
	HX_VISIT_MEMBER_NAME(asked_config,"asked_config");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(onevent,"onevent");
	HX_VISIT_MEMBER_NAME(onrender,"onrender");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(bordered,"bordered");
	HX_VISIT_MEMBER_NAME(grab,"grab");
	HX_VISIT_MEMBER_NAME(fullscreen,"fullscreen");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(max_size,"max_size");
	HX_VISIT_MEMBER_NAME(min_size,"min_size");
	HX_VISIT_MEMBER_NAME(auto_swap,"auto_swap");
	HX_VISIT_MEMBER_NAME(auto_render,"auto_render");
	HX_VISIT_MEMBER_NAME(closed,"closed");
	HX_VISIT_MEMBER_NAME(minimized,"minimized");
	HX_VISIT_MEMBER_NAME(internal_position,"internal_position");
	HX_VISIT_MEMBER_NAME(internal_resize,"internal_resize");
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { return inCallProp == hx::paccAlways ? get_grab() : grab; }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return inCallProp == hx::paccAlways ? get_title() : title; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"closed") ) { return closed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onrender") ) { return onrender; }
		if (HX_FIELD_EQ(inName,"bordered") ) { return inCallProp == hx::paccAlways ? get_bordered() : bordered; }
		if (HX_FIELD_EQ(inName,"max_size") ) { return inCallProp == hx::paccAlways ? get_max_size() : max_size; }
		if (HX_FIELD_EQ(inName,"min_size") ) { return inCallProp == hx::paccAlways ? get_min_size() : min_size; }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		if (HX_FIELD_EQ(inName,"get_grab") ) { return get_grab_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_grab") ) { return set_grab_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"auto_swap") ) { return auto_swap; }
		if (HX_FIELD_EQ(inName,"minimized") ) { return minimized; }
		if (HX_FIELD_EQ(inName,"get_title") ) { return get_title_dyn(); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return inCallProp == hx::paccAlways ? get_fullscreen() : fullscreen; }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"auto_render") ) { return auto_render; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"asked_config") ) { return asked_config; }
		if (HX_FIELD_EQ(inName,"get_bordered") ) { return get_bordered_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max_size") ) { return get_max_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_min_size") ) { return get_min_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max_size") ) { return set_max_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min_size") ) { return set_min_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bordered") ) { return set_bordered_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"simple_message") ) { return simple_message_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"internal_resize") ) { return internal_resize; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"internal_position") ) { return internal_position; }
		if (HX_FIELD_EQ(inName,"on_window_created") ) { return on_window_created_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_cursor_position") ) { return set_cursor_position_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { if (inCallProp == hx::paccAlways) return set_grab(inValue);grab=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return set_title(inValue);title=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::snow::_system::window::Windowing >(); return inValue; }
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closed") ) { closed=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onevent") ) { onevent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onrender") ) { onrender=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bordered") ) { if (inCallProp == hx::paccAlways) return set_bordered(inValue);bordered=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_size") ) { if (inCallProp == hx::paccAlways) return set_max_size(inValue);max_size=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"min_size") ) { if (inCallProp == hx::paccAlways) return set_min_size(inValue);min_size=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"auto_swap") ) { auto_swap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minimized") ) { minimized=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) return set_fullscreen(inValue);fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"auto_render") ) { auto_render=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"asked_config") ) { asked_config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"internal_resize") ) { internal_resize=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"internal_position") ) { internal_position=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Window_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	outFields->push(HX_HCSTRING("asked_config","\x89","\x3b","\xcf","\xf3"));
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("bordered","\x4b","\xb8","\xf8","\x58"));
	outFields->push(HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"));
	outFields->push(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("max_size","\x7c","\x9f","\x54","\x16"));
	outFields->push(HX_HCSTRING("min_size","\xce","\xb9","\x6e","\x63"));
	outFields->push(HX_HCSTRING("auto_swap","\xa3","\x14","\x4d","\x4a"));
	outFields->push(HX_HCSTRING("auto_render","\x66","\xf9","\x32","\x8c"));
	outFields->push(HX_HCSTRING("closed","\xac","\xa9","\x51","\x0e"));
	outFields->push(HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"));
	outFields->push(HX_HCSTRING("internal_position","\x2b","\xe1","\x53","\xf3"));
	outFields->push(HX_HCSTRING("internal_resize","\xf6","\x15","\x2c","\xd6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Window_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::snow::_system::window::Windowing*/ ,(int)offsetof(Window_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,asked_config),HX_HCSTRING("asked_config","\x89","\x3b","\xcf","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,onevent),HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,onrender),HX_HCSTRING("onrender","\xb5","\xed","\x41","\xb0")},
	{hx::fsString,(int)offsetof(Window_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsBool,(int)offsetof(Window_obj,bordered),HX_HCSTRING("bordered","\x4b","\xb8","\xf8","\x58")},
	{hx::fsBool,(int)offsetof(Window_obj,grab),HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44")},
	{hx::fsBool,(int)offsetof(Window_obj,fullscreen),HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")},
	{hx::fsInt,(int)offsetof(Window_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Window_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Window_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Window_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,max_size),HX_HCSTRING("max_size","\x7c","\x9f","\x54","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,min_size),HX_HCSTRING("min_size","\xce","\xb9","\x6e","\x63")},
	{hx::fsBool,(int)offsetof(Window_obj,auto_swap),HX_HCSTRING("auto_swap","\xa3","\x14","\x4d","\x4a")},
	{hx::fsBool,(int)offsetof(Window_obj,auto_render),HX_HCSTRING("auto_render","\x66","\xf9","\x32","\x8c")},
	{hx::fsBool,(int)offsetof(Window_obj,closed),HX_HCSTRING("closed","\xac","\xa9","\x51","\x0e")},
	{hx::fsBool,(int)offsetof(Window_obj,minimized),HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28")},
	{hx::fsBool,(int)offsetof(Window_obj,internal_position),HX_HCSTRING("internal_position","\x2b","\xe1","\x53","\xf3")},
	{hx::fsBool,(int)offsetof(Window_obj,internal_resize),HX_HCSTRING("internal_resize","\xf6","\x15","\x2c","\xd6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("asked_config","\x89","\x3b","\xcf","\xf3"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("onrender","\xb5","\xed","\x41","\xb0"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("bordered","\x4b","\xb8","\xf8","\x58"),
	HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"),
	HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("max_size","\x7c","\x9f","\x54","\x16"),
	HX_HCSTRING("min_size","\xce","\xb9","\x6e","\x63"),
	HX_HCSTRING("auto_swap","\xa3","\x14","\x4d","\x4a"),
	HX_HCSTRING("auto_render","\x66","\xf9","\x32","\x8c"),
	HX_HCSTRING("closed","\xac","\xa9","\x51","\x0e"),
	HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"),
	HX_HCSTRING("internal_position","\x2b","\xe1","\x53","\xf3"),
	HX_HCSTRING("internal_resize","\xf6","\x15","\x2c","\xd6"),
	HX_HCSTRING("on_window_created","\xb9","\x15","\x17","\x13"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("simple_message","\x7a","\x15","\x13","\x9c"),
	HX_HCSTRING("get_fullscreen","\x84","\xc2","\xa9","\x6f"),
	HX_HCSTRING("set_fullscreen","\xf8","\xaa","\xc9","\x8f"),
	HX_HCSTRING("get_bordered","\x54","\x6c","\x12","\x0e"),
	HX_HCSTRING("get_grab","\x55","\x8b","\x26","\xc4"),
	HX_HCSTRING("get_max_size","\x85","\x53","\x6e","\xcb"),
	HX_HCSTRING("get_min_size","\xd7","\x6d","\x88","\x18"),
	HX_HCSTRING("get_title","\xef","\x71","\xe4","\x53"),
	HX_HCSTRING("set_title","\xfb","\x5d","\x35","\x37"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("set_cursor_position","\x95","\x40","\x0e","\x8b"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_max_size","\xf9","\x76","\x67","\xe0"),
	HX_HCSTRING("set_min_size","\x4b","\x91","\x81","\x2d"),
	HX_HCSTRING("set_bordered","\xc8","\x8f","\x0b","\x23"),
	HX_HCSTRING("set_grab","\xc9","\xe4","\x83","\x72"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

hx::Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.window.Window","\xda","\x36","\x6d","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Window_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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
