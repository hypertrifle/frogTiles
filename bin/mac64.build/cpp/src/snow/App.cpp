#include <hxcpp.h>

#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
#ifndef INCLUDED_snow_system_window_Windowing
#include <snow/system/window/Windowing.h>
#endif
namespace snow{

Void App_obj::__construct()
{
HX_STACK_FRAME("snow.App","new",0x90aac908,"snow.App.new","snow/App.hx",10,0xf7b8a629)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(50)
	this->next_render = ((Float)0);
	HX_STACK_LINE(48)
	this->next_tick = ((Float)0);
	HX_STACK_LINE(43)
	this->alpha = ((Float)1.0);
	HX_STACK_LINE(41)
	this->cur_frame_start = ((Float)0.0);
	HX_STACK_LINE(39)
	this->current_time = ((Float)0);
	HX_STACK_LINE(37)
	this->last_frame_start = ((Float)0.0);
	HX_STACK_LINE(35)
	this->delta_sim = ((Float)0.0166666666666666664);
	HX_STACK_LINE(33)
	this->delta_time = ((Float)0.0166666666666666664);
	HX_STACK_LINE(28)
	this->max_frame_time = ((Float)0.25);
	HX_STACK_LINE(26)
	this->update_rate = ((Float)0);
	HX_STACK_LINE(24)
	this->render_rate = ((Float)-1);
	HX_STACK_LINE(22)
	this->fixed_delta = ((Float)0);
	HX_STACK_LINE(20)
	this->timescale = ((Float)1);
}
;
	return null();
}

//App_obj::~App_obj() { }

Dynamic App_obj::__CreateEmpty() { return  new App_obj; }
hx::ObjectPtr< App_obj > App_obj::__new()
{  hx::ObjectPtr< App_obj > _result_ = new App_obj();
	_result_->__construct();
	return _result_;}

Dynamic App_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< App_obj > _result_ = new App_obj();
	_result_->__construct();
	return _result_;}

Dynamic App_obj::config( Dynamic config){
	HX_STACK_FRAME("snow.App","config",0xed32371a,"snow.App.config","snow/App.hx",58,0xf7b8a629)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(58)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,config,return )

Void App_obj::ready( ){
{
		HX_STACK_FRAME("snow.App","ready",0x753f130b,"snow.App.ready","snow/App.hx",60,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ready,(void))

Void App_obj::update( Float dt){
{
		HX_STACK_FRAME("snow.App","update",0xac656661,"snow.App.update","snow/App.hx",62,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,update,(void))

Void App_obj::ondestroy( ){
{
		HX_STACK_FRAME("snow.App","ondestroy",0xb8d6a463,"snow.App.ondestroy","snow/App.hx",64,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ondestroy,(void))

Void App_obj::onevent( Dynamic event){
{
		HX_STACK_FRAME("snow.App","onevent",0x07596343,"snow.App.onevent","snow/App.hx",66,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(App_obj,onevent,(void))

Void App_obj::ontickstart( ){
{
		HX_STACK_FRAME("snow.App","ontickstart",0x0f08438e,"snow.App.ontickstart","snow/App.hx",69,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ontickstart,(void))

Void App_obj::ontickend( ){
{
		HX_STACK_FRAME("snow.App","ontickend",0xaf357007,"snow.App.ontickend","snow/App.hx",71,0xf7b8a629)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,ontickend,(void))

Void App_obj::onkeydown( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onkeydown",0x45beb4ea,"snow.App.onkeydown","snow/App.hx",74,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,onkeydown,(void))

Void App_obj::onkeyup( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onkeyup",0x709370e3,"snow.App.onkeyup","snow/App.hx",76,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,onkeyup,(void))

Void App_obj::ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","ontextinput",0x66c9c7e6,"snow.App.ontextinput","snow/App.hx",78,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,ontextinput,(void))

Void App_obj::onmousedown( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmousedown",0xa6d568b0,"snow.App.onmousedown","snow/App.hx",81,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(App_obj,onmousedown,(void))

Void App_obj::onmouseup( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmouseup",0x54c38729,"snow.App.onmouseup","snow/App.hx",83,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(App_obj,onmouseup,(void))

Void App_obj::onmousewheel( int x,int y,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmousewheel",0x3fd5088d,"snow.App.onmousewheel","snow/App.hx",85,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,onmousewheel,(void))

Void App_obj::onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.App","onmousemove",0xacc8535f,"snow.App.onmousemove","snow/App.hx",87,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xrel,"xrel")
		HX_STACK_ARG(yrel,"yrel")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,onmousemove,(void))

Void App_obj::ontouchdown( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ontouchdown",0xbfed3f4a,"snow.App.ontouchdown","snow/App.hx",90,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ontouchdown,(void))

Void App_obj::ontouchup( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ontouchup",0x6d48a343,"snow.App.ontouchup","snow/App.hx",92,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ontouchup,(void))

Void App_obj::ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ontouchmove",0xc5e029f9,"snow.App.ontouchmove","snow/App.hx",94,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(App_obj,ontouchmove,(void))

Void App_obj::ongamepadaxis( int gamepad,int axis,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepadaxis",0x065d41ab,"snow.App.ongamepadaxis","snow/App.hx",97,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepadaxis,(void))

Void App_obj::ongamepaddown( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepaddown",0x08521d6c,"snow.App.ongamepaddown","snow/App.hx",99,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepaddown,(void))

Void App_obj::ongamepadup( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepadup",0x022454e5,"snow.App.ongamepadup","snow/App.hx",101,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepadup,(void))

Void App_obj::ongamepaddevice( int gamepad,::String id,int type,Float timestamp){
{
		HX_STACK_FRAME("snow.App","ongamepaddevice",0x9476d820,"snow.App.ongamepaddevice","snow/App.hx",104,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(App_obj,ongamepaddevice,(void))

Void App_obj::on_internal_init( ){
{
		HX_STACK_FRAME("snow.App","on_internal_init",0x4744ba8a,"snow.App.on_internal_init","snow/App.hx",113,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		this->cur_frame_start = tmp1;
		HX_STACK_LINE(116)
		Float tmp2 = this->cur_frame_start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		this->last_frame_start = tmp2;
		HX_STACK_LINE(117)
		this->current_time = (int)0;
		HX_STACK_LINE(118)
		this->delta_time = ((Float)0.016);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,on_internal_init,(void))

Void App_obj::on_internal_update( ){
{
		HX_STACK_FRAME("snow.App","on_internal_update",0x1d895803,"snow.App.on_internal_update","snow/App.hx",123,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		Float tmp = this->update_rate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(127)
			::snow::core::native::Core tmp2 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			Float tmp3 = tmp2->timestamp();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			Float tmp4 = this->next_tick;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			if ((tmp5)){
				HX_STACK_LINE(128)
				return null();
			}
			HX_STACK_LINE(131)
			::snow::core::native::Core tmp6 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			Float tmp7 = tmp6->timestamp();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			Float tmp8 = this->update_rate;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			this->next_tick = tmp9;
		}
		HX_STACK_LINE(136)
		::snow::core::native::Core tmp2 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		Float tmp3 = tmp2->timestamp();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		this->cur_frame_start = tmp3;
		HX_STACK_LINE(138)
		Float tmp4 = this->cur_frame_start;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		Float tmp5 = this->last_frame_start;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		this->delta_time = tmp6;
		HX_STACK_LINE(140)
		Float tmp7 = this->cur_frame_start;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		this->last_frame_start = tmp7;
		HX_STACK_LINE(143)
		Float tmp8 = this->delta_time;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		Float tmp9 = this->max_frame_time;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(143)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(143)
		if ((tmp10)){
			HX_STACK_LINE(144)
			Float tmp11 = this->max_frame_time;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			this->delta_time = tmp11;
		}
		HX_STACK_LINE(148)
		Float tmp11 = this->fixed_delta;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(148)
		bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(148)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(148)
		if ((tmp12)){
			HX_STACK_LINE(148)
			tmp13 = this->delta_time;
		}
		else{
			HX_STACK_LINE(148)
			tmp13 = this->fixed_delta;
		}
		HX_STACK_LINE(148)
		Float used_delta = tmp13;		HX_STACK_VAR(used_delta,"used_delta");
		HX_STACK_LINE(150)
		Float tmp14 = this->timescale;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(150)
		hx::MultEq(used_delta,tmp14);
		HX_STACK_LINE(152)
		this->delta_sim = used_delta;
		HX_STACK_LINE(155)
		hx::AddEq(this->current_time,used_delta);
		HX_STACK_LINE(157)
		::snow::Snow tmp15 = this->app;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(157)
		Float tmp16 = used_delta;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(157)
		tmp15->do_internal_update(tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,on_internal_update,(void))

Void App_obj::on_internal_render( ){
{
		HX_STACK_FRAME("snow.App","on_internal_render",0x9bad3d50,"snow.App.on_internal_render","snow/App.hx",162,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		Float tmp = this->render_rate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		if ((tmp1)){
			HX_STACK_LINE(166)
			Float tmp2 = this->render_rate;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			if ((tmp4)){
				HX_STACK_LINE(166)
				Float tmp6 = this->next_render;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				::snow::core::native::Core tmp8 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				::snow::core::native::Core tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				Float tmp10 = tmp9->timestamp();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(166)
				tmp5 = (tmp7 < tmp11);
			}
			else{
				HX_STACK_LINE(166)
				tmp5 = true;
			}
			HX_STACK_LINE(166)
			if ((tmp5)){
				HX_STACK_LINE(167)
				{
					HX_STACK_LINE(167)
					::snow::Snow tmp6 = this->app;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(167)
					tmp6->windowing->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
				}
				HX_STACK_LINE(168)
				Float tmp6 = this->render_rate;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(168)
				hx::AddEq(this->next_render,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(App_obj,on_internal_render,(void))


App_obj::App_obj()
{
}

void App_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(App);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(timescale,"timescale");
	HX_MARK_MEMBER_NAME(fixed_delta,"fixed_delta");
	HX_MARK_MEMBER_NAME(render_rate,"render_rate");
	HX_MARK_MEMBER_NAME(update_rate,"update_rate");
	HX_MARK_MEMBER_NAME(max_frame_time,"max_frame_time");
	HX_MARK_MEMBER_NAME(delta_time,"delta_time");
	HX_MARK_MEMBER_NAME(delta_sim,"delta_sim");
	HX_MARK_MEMBER_NAME(last_frame_start,"last_frame_start");
	HX_MARK_MEMBER_NAME(current_time,"current_time");
	HX_MARK_MEMBER_NAME(cur_frame_start,"cur_frame_start");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(next_tick,"next_tick");
	HX_MARK_MEMBER_NAME(next_render,"next_render");
	HX_MARK_END_CLASS();
}

void App_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(timescale,"timescale");
	HX_VISIT_MEMBER_NAME(fixed_delta,"fixed_delta");
	HX_VISIT_MEMBER_NAME(render_rate,"render_rate");
	HX_VISIT_MEMBER_NAME(update_rate,"update_rate");
	HX_VISIT_MEMBER_NAME(max_frame_time,"max_frame_time");
	HX_VISIT_MEMBER_NAME(delta_time,"delta_time");
	HX_VISIT_MEMBER_NAME(delta_sim,"delta_sim");
	HX_VISIT_MEMBER_NAME(last_frame_start,"last_frame_start");
	HX_VISIT_MEMBER_NAME(current_time,"current_time");
	HX_VISIT_MEMBER_NAME(cur_frame_start,"cur_frame_start");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(next_tick,"next_tick");
	HX_VISIT_MEMBER_NAME(next_render,"next_render");
}

Dynamic App_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timescale") ) { return timescale; }
		if (HX_FIELD_EQ(inName,"delta_sim") ) { return delta_sim; }
		if (HX_FIELD_EQ(inName,"next_tick") ) { return next_tick; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"ontickend") ) { return ontickend_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"delta_time") ) { return delta_time; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { return fixed_delta; }
		if (HX_FIELD_EQ(inName,"render_rate") ) { return render_rate; }
		if (HX_FIELD_EQ(inName,"update_rate") ) { return update_rate; }
		if (HX_FIELD_EQ(inName,"next_render") ) { return next_render; }
		if (HX_FIELD_EQ(inName,"ontickstart") ) { return ontickstart_dyn(); }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_time") ) { return current_time; }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"max_frame_time") ) { return max_frame_time; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_frame_start") ) { return cur_frame_start; }
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"last_frame_start") ) { return last_frame_start; }
		if (HX_FIELD_EQ(inName,"on_internal_init") ) { return on_internal_init_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"on_internal_update") ) { return on_internal_update_dyn(); }
		if (HX_FIELD_EQ(inName,"on_internal_render") ) { return on_internal_render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic App_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timescale") ) { timescale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delta_sim") ) { delta_sim=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next_tick") ) { next_tick=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"delta_time") ) { delta_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixed_delta") ) { fixed_delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render_rate") ) { render_rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"update_rate") ) { update_rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next_render") ) { next_render=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_time") ) { current_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"max_frame_time") ) { max_frame_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_frame_start") ) { cur_frame_start=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"last_frame_start") ) { last_frame_start=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool App_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void App_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("timescale","\x5d","\x33","\x92","\x9a"));
	outFields->push(HX_HCSTRING("fixed_delta","\xad","\xb7","\xaa","\xba"));
	outFields->push(HX_HCSTRING("render_rate","\xa9","\x2b","\x39","\x37"));
	outFields->push(HX_HCSTRING("update_rate","\x16","\x68","\x20","\x51"));
	outFields->push(HX_HCSTRING("max_frame_time","\x9a","\xe9","\x07","\x46"));
	outFields->push(HX_HCSTRING("delta_time","\xf4","\x1c","\x03","\x18"));
	outFields->push(HX_HCSTRING("delta_sim","\x10","\x28","\xa9","\xfc"));
	outFields->push(HX_HCSTRING("last_frame_start","\xe7","\xf4","\x6d","\x1a"));
	outFields->push(HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3"));
	outFields->push(HX_HCSTRING("cur_frame_start","\x11","\x87","\xed","\x35"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("next_tick","\x69","\x89","\x25","\x14"));
	outFields->push(HX_HCSTRING("next_render","\x62","\xcc","\x98","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(App_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsFloat,(int)offsetof(App_obj,timescale),HX_HCSTRING("timescale","\x5d","\x33","\x92","\x9a")},
	{hx::fsFloat,(int)offsetof(App_obj,fixed_delta),HX_HCSTRING("fixed_delta","\xad","\xb7","\xaa","\xba")},
	{hx::fsFloat,(int)offsetof(App_obj,render_rate),HX_HCSTRING("render_rate","\xa9","\x2b","\x39","\x37")},
	{hx::fsFloat,(int)offsetof(App_obj,update_rate),HX_HCSTRING("update_rate","\x16","\x68","\x20","\x51")},
	{hx::fsFloat,(int)offsetof(App_obj,max_frame_time),HX_HCSTRING("max_frame_time","\x9a","\xe9","\x07","\x46")},
	{hx::fsFloat,(int)offsetof(App_obj,delta_time),HX_HCSTRING("delta_time","\xf4","\x1c","\x03","\x18")},
	{hx::fsFloat,(int)offsetof(App_obj,delta_sim),HX_HCSTRING("delta_sim","\x10","\x28","\xa9","\xfc")},
	{hx::fsFloat,(int)offsetof(App_obj,last_frame_start),HX_HCSTRING("last_frame_start","\xe7","\xf4","\x6d","\x1a")},
	{hx::fsFloat,(int)offsetof(App_obj,current_time),HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3")},
	{hx::fsFloat,(int)offsetof(App_obj,cur_frame_start),HX_HCSTRING("cur_frame_start","\x11","\x87","\xed","\x35")},
	{hx::fsFloat,(int)offsetof(App_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(App_obj,next_tick),HX_HCSTRING("next_tick","\x69","\x89","\x25","\x14")},
	{hx::fsFloat,(int)offsetof(App_obj,next_render),HX_HCSTRING("next_render","\x62","\xcc","\x98","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("timescale","\x5d","\x33","\x92","\x9a"),
	HX_HCSTRING("fixed_delta","\xad","\xb7","\xaa","\xba"),
	HX_HCSTRING("render_rate","\xa9","\x2b","\x39","\x37"),
	HX_HCSTRING("update_rate","\x16","\x68","\x20","\x51"),
	HX_HCSTRING("max_frame_time","\x9a","\xe9","\x07","\x46"),
	HX_HCSTRING("delta_time","\xf4","\x1c","\x03","\x18"),
	HX_HCSTRING("delta_sim","\x10","\x28","\xa9","\xfc"),
	HX_HCSTRING("last_frame_start","\xe7","\xf4","\x6d","\x1a"),
	HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3"),
	HX_HCSTRING("cur_frame_start","\x11","\x87","\xed","\x35"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("next_tick","\x69","\x89","\x25","\x14"),
	HX_HCSTRING("next_render","\x62","\xcc","\x98","\x7c"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("ontickstart","\xe6","\x62","\x8c","\xec"),
	HX_HCSTRING("ontickend","\x5f","\x89","\x3e","\x25"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"),
	HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("on_internal_init","\x32","\xfc","\xd7","\x2a"),
	HX_HCSTRING("on_internal_update","\xab","\x53","\xae","\x7d"),
	HX_HCSTRING("on_internal_render","\xf8","\x38","\xd2","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(App_obj::__mClass,"__mClass");
};

#endif

hx::Class App_obj::__mClass;

void App_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.App","\x16","\xe5","\xc7","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &App_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< App_obj >;
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
