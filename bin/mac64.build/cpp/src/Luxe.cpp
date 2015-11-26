#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_IO
#include <luxe/IO.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif

Void Luxe_obj::__construct()
{
	return null();
}

//Luxe_obj::~Luxe_obj() { }

Dynamic Luxe_obj::__CreateEmpty() { return  new Luxe_obj; }
hx::ObjectPtr< Luxe_obj > Luxe_obj::__new()
{  hx::ObjectPtr< Luxe_obj > _result_ = new Luxe_obj();
	_result_->__construct();
	return _result_;}

Dynamic Luxe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Luxe_obj > _result_ = new Luxe_obj();
	_result_->__construct();
	return _result_;}

::luxe::Core Luxe_obj::core;

::luxe::Debug Luxe_obj::debug;

::luxe::IO Luxe_obj::io;

::luxe::Draw Luxe_obj::draw;

::luxe::Audio Luxe_obj::audio;

::luxe::Timer Luxe_obj::timer;

::luxe::Events Luxe_obj::events;

::luxe::Input Luxe_obj::input;

::luxe::Scene Luxe_obj::scene;

::luxe::utils::Utils Luxe_obj::utils;

::luxe::Physics Luxe_obj::physics;

::luxe::Camera Luxe_obj::camera;

::luxe::Resources Luxe_obj::resources;

::phoenix::Renderer Luxe_obj::renderer;

::String Luxe_obj::version;

::String Luxe_obj::build;

Void Luxe_obj::on( int event,Dynamic handler){
{
		HX_STACK_FRAME("Luxe","on",0x7b1beab7,"Luxe.on","Luxe.hx",86,0x7b1be4a8)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(87)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Luxe.hx","\xa8","\xe4","\x1b","\x7b"),87,HX_HCSTRING("Luxe","\xd6","\x67","\x95","\x32"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		tmp->emitter->on(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Luxe_obj,on,(void))

bool Luxe_obj::off( int event,Dynamic handler){
	HX_STACK_FRAME("Luxe","off",0x3d516ed7,"Luxe.off","Luxe.hx",91,0x7b1be4a8)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(92)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Luxe.hx","\xa8","\xe4","\x1b","\x7b"),92,HX_HCSTRING("Luxe","\xd6","\x67","\x95","\x32"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	bool tmp4 = tmp->emitter->off(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Luxe_obj,off,return )

Void Luxe_obj::next( Dynamic func){
{
		HX_STACK_FRAME("Luxe","next",0x6945a48b,"Luxe.next","Luxe.hx",98,0x7b1be4a8)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(98)
		bool tmp = (func != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		if ((tmp)){
			HX_STACK_LINE(98)
			Dynamic tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,next,(void))

Void Luxe_obj::shutdown( ){
{
		HX_STACK_FRAME("Luxe","shutdown",0x59b2c82e,"Luxe.shutdown","Luxe.hx",103,0x7b1be4a8)
		HX_STACK_LINE(105)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		tmp->shutdown();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,shutdown,(void))

Void Luxe_obj::showConsole( bool _show){
{
		HX_STACK_FRAME("Luxe","showConsole",0xc5540b42,"Luxe.showConsole","Luxe.hx",110,0x7b1be4a8)
		HX_STACK_ARG(_show,"_show")
		HX_STACK_LINE(112)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		bool tmp1 = _show;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		tmp->show_console(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,showConsole,(void))

::snow::Snow Luxe_obj::get_snow( ){
	HX_STACK_FRAME("Luxe","get_snow",0xbab8e9a4,"Luxe.get_snow","Luxe.hx",119,0x7b1be4a8)
	HX_STACK_LINE(119)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	::snow::Snow tmp1 = tmp->app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_snow,return )

::luxe::Screen Luxe_obj::get_screen( ){
	HX_STACK_FRAME("Luxe","get_screen",0x36878ccd,"Luxe.get_screen","Luxe.hx",121,0x7b1be4a8)
	HX_STACK_LINE(121)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	::luxe::Screen tmp1 = tmp->screen;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_screen,return )

Float Luxe_obj::get_time( ){
	HX_STACK_FRAME("Luxe","get_time",0xbb5e532e,"Luxe.get_time","Luxe.hx",123,0x7b1be4a8)
	HX_STACK_LINE(123)
	::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_time,return )

Float Luxe_obj::get_timescale( ){
	HX_STACK_FRAME("Luxe","get_timescale",0xcc0e349c,"Luxe.get_timescale","Luxe.hx",125,0x7b1be4a8)
	HX_STACK_LINE(125)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	Float tmp1 = tmp->timescale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_timescale,return )

Float Luxe_obj::get_fixed_delta( ){
	HX_STACK_FRAME("Luxe","get_fixed_delta",0x4418c6ac,"Luxe.get_fixed_delta","Luxe.hx",127,0x7b1be4a8)
	HX_STACK_LINE(127)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	Float tmp1 = tmp->fixed_delta;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_fixed_delta,return )

Float Luxe_obj::get_update_rate( ){
	HX_STACK_FRAME("Luxe","get_update_rate",0xda8e7715,"Luxe.get_update_rate","Luxe.hx",129,0x7b1be4a8)
	HX_STACK_LINE(129)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	Float tmp1 = tmp->update_rate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_update_rate,return )

Float Luxe_obj::get_max_frame_time( ){
	HX_STACK_FRAME("Luxe","get_max_frame_time",0xbee403fb,"Luxe.get_max_frame_time","Luxe.hx",131,0x7b1be4a8)
	HX_STACK_LINE(131)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	Float tmp1 = tmp->max_frame_time;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_max_frame_time,return )

Float Luxe_obj::get_dt( ){
	HX_STACK_FRAME("Luxe","get_dt",0xb22c2471,"Luxe.get_dt","Luxe.hx",133,0x7b1be4a8)
	HX_STACK_LINE(133)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	Float tmp1 = tmp->delta_time;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_dt,return )

Float Luxe_obj::get_delta_sim( ){
	HX_STACK_FRAME("Luxe","get_delta_sim",0x2e25294f,"Luxe.get_delta_sim","Luxe.hx",135,0x7b1be4a8)
	HX_STACK_LINE(135)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	Float tmp1 = tmp->delta_sim;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_delta_sim,return )

Float Luxe_obj::get_last_frame_start( ){
	HX_STACK_FRAME("Luxe","get_last_frame_start",0x964e2988,"Luxe.get_last_frame_start","Luxe.hx",137,0x7b1be4a8)
	HX_STACK_LINE(137)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	Float tmp1 = tmp->last_frame_start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_last_frame_start,return )

Float Luxe_obj::get_current_time( ){
	HX_STACK_FRAME("Luxe","get_current_time",0x6acb6d34,"Luxe.get_current_time","Luxe.hx",139,0x7b1be4a8)
	HX_STACK_LINE(139)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	Float tmp1 = tmp->current_time;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_current_time,return )

Float Luxe_obj::get_cur_frame_start( ){
	HX_STACK_FRAME("Luxe","get_cur_frame_start",0x7da88190,"Luxe.get_cur_frame_start","Luxe.hx",141,0x7b1be4a8)
	HX_STACK_LINE(141)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	Float tmp1 = tmp->cur_frame_start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_cur_frame_start,return )

Float Luxe_obj::get_alpha( ){
	HX_STACK_FRAME("Luxe","get_alpha",0x488b5d1d,"Luxe.get_alpha","Luxe.hx",143,0x7b1be4a8)
	HX_STACK_LINE(143)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	Float tmp1 = tmp->alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Luxe_obj,get_alpha,return )

Float Luxe_obj::set_timescale( Float value){
	HX_STACK_FRAME("Luxe","set_timescale",0x111416a8,"Luxe.set_timescale","Luxe.hx",146,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(146)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	Float tmp1 = tmp->timescale = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_timescale,return )

Float Luxe_obj::set_fixed_delta( Float value){
	HX_STACK_FRAME("Luxe","set_fixed_delta",0x3fe443b8,"Luxe.set_fixed_delta","Luxe.hx",148,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(148)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	Float tmp1 = tmp->fixed_delta = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_fixed_delta,return )

Float Luxe_obj::set_update_rate( Float value){
	HX_STACK_FRAME("Luxe","set_update_rate",0xd659f421,"Luxe.set_update_rate","Luxe.hx",150,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(150)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	Float tmp1 = tmp->update_rate = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_update_rate,return )

Float Luxe_obj::set_max_frame_time( Float value){
	HX_STACK_FRAME("Luxe","set_max_frame_time",0x9b93366f,"Luxe.set_max_frame_time","Luxe.hx",152,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(152)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	Float tmp1 = tmp->max_frame_time = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_max_frame_time,return )

Float Luxe_obj::set_dt( Float value){
	HX_STACK_FRAME("Luxe","set_dt",0x7e7478e5,"Luxe.set_dt","Luxe.hx",154,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(154)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	Float tmp1 = tmp->delta_time = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_dt,return )

Float Luxe_obj::set_delta_sim( Float value){
	HX_STACK_FRAME("Luxe","set_delta_sim",0x732b0b5b,"Luxe.set_delta_sim","Luxe.hx",156,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(156)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	Float tmp1 = tmp->delta_sim = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_delta_sim,return )

Float Luxe_obj::set_last_frame_start( Float value){
	HX_STACK_FRAME("Luxe","set_last_frame_start",0x6305e0fc,"Luxe.set_last_frame_start","Luxe.hx",158,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(158)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	Float tmp1 = tmp->last_frame_start = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_last_frame_start,return )

Float Luxe_obj::set_current_time( Float value){
	HX_STACK_FRAME("Luxe","set_current_time",0xc10d5aa8,"Luxe.set_current_time","Luxe.hx",160,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(160)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	Float tmp1 = tmp->current_time = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_current_time,return )

Float Luxe_obj::set_cur_frame_start( Float value){
	HX_STACK_FRAME("Luxe","set_cur_frame_start",0xba45749c,"Luxe.set_cur_frame_start","Luxe.hx",162,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(162)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	Float tmp1 = tmp->cur_frame_start = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_cur_frame_start,return )

Float Luxe_obj::set_alpha( Float value){
	HX_STACK_FRAME("Luxe","set_alpha",0x2bdc4929,"Luxe.set_alpha","Luxe.hx",164,0x7b1be4a8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(164)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	Float tmp1 = tmp->alpha = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Luxe_obj,set_alpha,return )


Luxe_obj::Luxe_obj()
{
}

bool Luxe_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { outValue = io; return true;  }
		if (HX_FIELD_EQ(inName,"dt") ) { if (inCallProp == hx::paccAlways) { outValue = get_dt(); return true; } }
		if (HX_FIELD_EQ(inName,"on") ) { outValue = on_dyn(); return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { outValue = off_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { outValue = core; return true;  }
		if (HX_FIELD_EQ(inName,"draw") ) { outValue = draw; return true;  }
		if (HX_FIELD_EQ(inName,"snow") ) { if (inCallProp == hx::paccAlways) { outValue = get_snow(); return true; } }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == hx::paccAlways) { outValue = get_time(); return true; } }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug; return true;  }
		if (HX_FIELD_EQ(inName,"audio") ) { outValue = audio; return true;  }
		if (HX_FIELD_EQ(inName,"timer") ) { outValue = timer; return true;  }
		if (HX_FIELD_EQ(inName,"input") ) { outValue = input; return true;  }
		if (HX_FIELD_EQ(inName,"scene") ) { outValue = scene; return true;  }
		if (HX_FIELD_EQ(inName,"utils") ) { outValue = utils; return true;  }
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build; return true;  }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) { outValue = get_alpha(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { outValue = events; return true;  }
		if (HX_FIELD_EQ(inName,"camera") ) { outValue = camera; return true;  }
		if (HX_FIELD_EQ(inName,"screen") ) { if (inCallProp == hx::paccAlways) { outValue = get_screen(); return true; } }
		if (HX_FIELD_EQ(inName,"get_dt") ) { outValue = get_dt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_dt") ) { outValue = set_dt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"physics") ) { outValue = physics; return true;  }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { outValue = renderer; return true;  }
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_snow") ) { outValue = get_snow_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_time") ) { outValue = get_time_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resources") ) { outValue = resources; return true;  }
		if (HX_FIELD_EQ(inName,"timescale") ) { if (inCallProp == hx::paccAlways) { outValue = get_timescale(); return true; } }
		if (HX_FIELD_EQ(inName,"delta_sim") ) { if (inCallProp == hx::paccAlways) { outValue = get_delta_sim(); return true; } }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { outValue = set_alpha_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_screen") ) { outValue = get_screen_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { if (inCallProp == hx::paccAlways) { outValue = get_fixed_delta(); return true; } }
		if (HX_FIELD_EQ(inName,"update_rate") ) { if (inCallProp == hx::paccAlways) { outValue = get_update_rate(); return true; } }
		if (HX_FIELD_EQ(inName,"showConsole") ) { outValue = showConsole_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_time") ) { if (inCallProp == hx::paccAlways) { outValue = get_current_time(); return true; } }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_timescale") ) { outValue = get_timescale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_delta_sim") ) { outValue = get_delta_sim_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_timescale") ) { outValue = set_timescale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_delta_sim") ) { outValue = set_delta_sim_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"max_frame_time") ) { if (inCallProp == hx::paccAlways) { outValue = get_max_frame_time(); return true; } }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_frame_start") ) { if (inCallProp == hx::paccAlways) { outValue = get_cur_frame_start(); return true; } }
		if (HX_FIELD_EQ(inName,"get_fixed_delta") ) { outValue = get_fixed_delta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_update_rate") ) { outValue = get_update_rate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fixed_delta") ) { outValue = set_fixed_delta_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_update_rate") ) { outValue = set_update_rate_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"last_frame_start") ) { if (inCallProp == hx::paccAlways) { outValue = get_last_frame_start(); return true; } }
		if (HX_FIELD_EQ(inName,"get_current_time") ) { outValue = get_current_time_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_current_time") ) { outValue = set_current_time_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_max_frame_time") ) { outValue = get_max_frame_time_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_max_frame_time") ) { outValue = set_max_frame_time_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_cur_frame_start") ) { outValue = get_cur_frame_start_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_cur_frame_start") ) { outValue = set_cur_frame_start_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_last_frame_start") ) { outValue = get_last_frame_start_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_last_frame_start") ) { outValue = set_last_frame_start_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(void *) &Luxe_obj::core,HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*::luxe::Debug*/ ,(void *) &Luxe_obj::debug,HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{hx::fsObject /*::luxe::IO*/ ,(void *) &Luxe_obj::io,HX_HCSTRING("io","\xe6","\x5b","\x00","\x00")},
	{hx::fsObject /*::luxe::Draw*/ ,(void *) &Luxe_obj::draw,HX_HCSTRING("draw","\x04","\x2c","\x70","\x42")},
	{hx::fsObject /*::luxe::Audio*/ ,(void *) &Luxe_obj::audio,HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsObject /*::luxe::Timer*/ ,(void *) &Luxe_obj::timer,HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*::luxe::Events*/ ,(void *) &Luxe_obj::events,HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{hx::fsObject /*::luxe::Input*/ ,(void *) &Luxe_obj::input,HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::luxe::Scene*/ ,(void *) &Luxe_obj::scene,HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsObject /*::luxe::utils::Utils*/ ,(void *) &Luxe_obj::utils,HX_HCSTRING("utils","\x31","\xaa","\xde","\xaa")},
	{hx::fsObject /*::luxe::Physics*/ ,(void *) &Luxe_obj::physics,HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe")},
	{hx::fsObject /*::luxe::Camera*/ ,(void *) &Luxe_obj::camera,HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::luxe::Resources*/ ,(void *) &Luxe_obj::resources,HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(void *) &Luxe_obj::renderer,HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsString,(void *) &Luxe_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(void *) &Luxe_obj::build,HX_HCSTRING("build","\x2e","\xdb","\xea","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Luxe_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Luxe_obj::core,"core");
	HX_MARK_MEMBER_NAME(Luxe_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(Luxe_obj::io,"io");
	HX_MARK_MEMBER_NAME(Luxe_obj::draw,"draw");
	HX_MARK_MEMBER_NAME(Luxe_obj::audio,"audio");
	HX_MARK_MEMBER_NAME(Luxe_obj::timer,"timer");
	HX_MARK_MEMBER_NAME(Luxe_obj::events,"events");
	HX_MARK_MEMBER_NAME(Luxe_obj::input,"input");
	HX_MARK_MEMBER_NAME(Luxe_obj::scene,"scene");
	HX_MARK_MEMBER_NAME(Luxe_obj::utils,"utils");
	HX_MARK_MEMBER_NAME(Luxe_obj::physics,"physics");
	HX_MARK_MEMBER_NAME(Luxe_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(Luxe_obj::resources,"resources");
	HX_MARK_MEMBER_NAME(Luxe_obj::renderer,"renderer");
	HX_MARK_MEMBER_NAME(Luxe_obj::version,"version");
	HX_MARK_MEMBER_NAME(Luxe_obj::build,"build");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Luxe_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Luxe_obj::core,"core");
	HX_VISIT_MEMBER_NAME(Luxe_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(Luxe_obj::io,"io");
	HX_VISIT_MEMBER_NAME(Luxe_obj::draw,"draw");
	HX_VISIT_MEMBER_NAME(Luxe_obj::audio,"audio");
	HX_VISIT_MEMBER_NAME(Luxe_obj::timer,"timer");
	HX_VISIT_MEMBER_NAME(Luxe_obj::events,"events");
	HX_VISIT_MEMBER_NAME(Luxe_obj::input,"input");
	HX_VISIT_MEMBER_NAME(Luxe_obj::scene,"scene");
	HX_VISIT_MEMBER_NAME(Luxe_obj::utils,"utils");
	HX_VISIT_MEMBER_NAME(Luxe_obj::physics,"physics");
	HX_VISIT_MEMBER_NAME(Luxe_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(Luxe_obj::resources,"resources");
	HX_VISIT_MEMBER_NAME(Luxe_obj::renderer,"renderer");
	HX_VISIT_MEMBER_NAME(Luxe_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Luxe_obj::build,"build");
};

#endif

hx::Class Luxe_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("utils","\x31","\xaa","\xde","\xaa"),
	HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("showConsole","\xda","\x87","\x71","\xf5"),
	HX_HCSTRING("get_snow","\x0c","\x1e","\x12","\xcc"),
	HX_HCSTRING("get_screen","\x35","\xab","\xe4","\x37"),
	HX_HCSTRING("get_time","\x96","\x87","\xb7","\xcc"),
	HX_HCSTRING("get_timescale","\x34","\x07","\xf6","\x5b"),
	HX_HCSTRING("get_fixed_delta","\x44","\x6f","\x8c","\x7b"),
	HX_HCSTRING("get_update_rate","\xad","\x1f","\x02","\x12"),
	HX_HCSTRING("get_max_frame_time","\x63","\xca","\xa1","\xe1"),
	HX_HCSTRING("get_dt","\xd9","\xee","\x2f","\xa3"),
	HX_HCSTRING("get_delta_sim","\xe7","\xfb","\x0c","\xbe"),
	HX_HCSTRING("get_last_frame_start","\xf0","\x59","\xd8","\x38"),
	HX_HCSTRING("get_current_time","\x9c","\x49","\x8b","\xb8"),
	HX_HCSTRING("get_cur_frame_start","\x28","\x56","\xf8","\xc0"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_timescale","\x40","\xe9","\xfb","\xa0"),
	HX_HCSTRING("set_fixed_delta","\x50","\xec","\x57","\x77"),
	HX_HCSTRING("set_update_rate","\xb9","\x9c","\xcd","\x0d"),
	HX_HCSTRING("set_max_frame_time","\xd7","\xfc","\x50","\xbe"),
	HX_HCSTRING("set_dt","\x4d","\x43","\x78","\x6f"),
	HX_HCSTRING("set_delta_sim","\xf3","\xdd","\x12","\x03"),
	HX_HCSTRING("set_last_frame_start","\x64","\x11","\x90","\x05"),
	HX_HCSTRING("set_current_time","\x10","\x37","\xcd","\x0e"),
	HX_HCSTRING("set_cur_frame_start","\x34","\x49","\x95","\xfd"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	::String(null()) };

void Luxe_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Luxe","\xd6","\x67","\x95","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Luxe_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Luxe_obj >;
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

void Luxe_obj::__boot()
{
	version= HX_HCSTRING("dev","\xd5","\x39","\x4c","\x00");
	build= HX_HCSTRING("+96eddacfdc","\x46","\x7b","\x72","\xdb");
}

