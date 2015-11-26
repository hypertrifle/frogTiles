#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_native_input_Input
#include <snow/core/native/input/Input.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Input
#include <snow/modules/interfaces/Input.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_Input
#include <snow/modules/sdl/Input.h>
#endif
#ifndef INCLUDED_snow_system_input_Input
#include <snow/system/input/Input.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
namespace snow{
namespace _system{
namespace input{

Void Input_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.system.input.Input","new",0xfa3f3984,"snow.system.input.Input.new","snow/system/input/Input.hx",16,0x35f6b58d)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(519)
	this->touch_count = (int)0;
	HX_STACK_LINE(26)
	this->app = _app;
	HX_STACK_LINE(28)
	::snow::modules::sdl::Input tmp = ::snow::modules::sdl::Input_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	this->module = tmp;
	HX_STACK_LINE(30)
	::snow::modules::sdl::Input tmp1 = this->module;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	tmp1->init();
	HX_STACK_LINE(34)
	::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(34)
	this->key_code_pressed = tmp2;
	HX_STACK_LINE(35)
	::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(35)
	this->key_code_down = tmp3;
	HX_STACK_LINE(36)
	::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(36)
	this->key_code_released = tmp4;
	HX_STACK_LINE(38)
	::haxe::ds::IntMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::haxe::ds::IntMap tmp6 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		::haxe::ds::IntMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(38)
	this->scan_code_pressed = tmp5;
	HX_STACK_LINE(39)
	::haxe::ds::IntMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::haxe::ds::IntMap tmp7 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		::haxe::ds::IntMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		tmp6 = tmp8;
	}
	HX_STACK_LINE(39)
	this->scan_code_down = tmp6;
	HX_STACK_LINE(40)
	::haxe::ds::IntMap tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::haxe::ds::IntMap tmp8 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		::haxe::ds::IntMap tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		tmp7 = tmp9;
	}
	HX_STACK_LINE(40)
	this->scan_code_released = tmp7;
	HX_STACK_LINE(44)
	::haxe::ds::IntMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::haxe::ds::IntMap tmp9 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		::haxe::ds::IntMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		tmp8 = tmp10;
	}
	HX_STACK_LINE(44)
	this->mouse_button_pressed = tmp8;
	HX_STACK_LINE(45)
	::haxe::ds::IntMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::haxe::ds::IntMap tmp10 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		::haxe::ds::IntMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		tmp9 = tmp11;
	}
	HX_STACK_LINE(45)
	this->mouse_button_down = tmp9;
	HX_STACK_LINE(46)
	::haxe::ds::IntMap tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::haxe::ds::IntMap tmp11 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		::haxe::ds::IntMap tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		tmp10 = tmp12;
	}
	HX_STACK_LINE(46)
	this->mouse_button_released = tmp10;
	HX_STACK_LINE(50)
	::haxe::ds::IntMap tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::haxe::ds::IntMap tmp12 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(50)
		::haxe::ds::IntMap tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(50)
		tmp11 = tmp13;
	}
	HX_STACK_LINE(50)
	this->gamepad_button_pressed = tmp11;
	HX_STACK_LINE(51)
	::haxe::ds::IntMap tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::haxe::ds::IntMap tmp13 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		::haxe::ds::IntMap tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		tmp12 = tmp14;
	}
	HX_STACK_LINE(51)
	this->gamepad_button_down = tmp12;
	HX_STACK_LINE(52)
	::haxe::ds::IntMap tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::haxe::ds::IntMap tmp14 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(52)
		::haxe::ds::IntMap tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(52)
		tmp13 = tmp15;
	}
	HX_STACK_LINE(52)
	this->gamepad_button_released = tmp13;
	HX_STACK_LINE(53)
	::haxe::ds::IntMap tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::haxe::ds::IntMap tmp15 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(53)
		::haxe::ds::IntMap tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(53)
		tmp14 = tmp16;
	}
	HX_STACK_LINE(53)
	this->gamepad_axis_values = tmp14;
	HX_STACK_LINE(57)
	::haxe::ds::IntMap tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::haxe::ds::IntMap tmp16 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(57)
		::haxe::ds::IntMap tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(57)
		tmp15 = tmp17;
	}
	HX_STACK_LINE(57)
	this->touches_down = tmp15;
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Input_obj::keypressed( int _code){
	HX_STACK_FRAME("snow.system.input.Input","keypressed",0x80790e3f,"snow.system.input.Input.keypressed","snow/system/input/Input.hx",68,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(69)
	::haxe::ds::IntMap tmp = this->key_code_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keypressed,return )

bool Input_obj::keyreleased( int _code){
	HX_STACK_FRAME("snow.system.input.Input","keyreleased",0xf0497680,"snow.system.input.Input.keyreleased","snow/system/input/Input.hx",73,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(74)
	::haxe::ds::IntMap tmp = this->key_code_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyreleased,return )

bool Input_obj::keydown( int _code){
	HX_STACK_FRAME("snow.system.input.Input","keydown",0x4a2f08a5,"snow.system.input.Input.keydown","snow/system/input/Input.hx",78,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(79)
	::haxe::ds::IntMap tmp = this->key_code_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keydown,return )

bool Input_obj::scanpressed( int _code){
	HX_STACK_FRAME("snow.system.input.Input","scanpressed",0x06b25be9,"snow.system.input.Input.scanpressed","snow/system/input/Input.hx",83,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(84)
	::haxe::ds::IntMap tmp = this->scan_code_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanpressed,return )

bool Input_obj::scanreleased( int _code){
	HX_STACK_FRAME("snow.system.input.Input","scanreleased",0xdc341d96,"snow.system.input.Input.scanreleased","snow/system/input/Input.hx",88,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(89)
	::haxe::ds::IntMap tmp = this->scan_code_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scanreleased,return )

bool Input_obj::scandown( int _code){
	HX_STACK_FRAME("snow.system.input.Input","scandown",0x3786ecbb,"snow.system.input.Input.scandown","snow/system/input/Input.hx",93,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_code,"_code")
	HX_STACK_LINE(94)
	::haxe::ds::IntMap tmp = this->scan_code_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	int tmp1 = _code;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,scandown,return )

bool Input_obj::mousepressed( int _button){
	HX_STACK_FRAME("snow.system.input.Input","mousepressed",0xd4934d79,"snow.system.input.Input.mousepressed","snow/system/input/Input.hx",100,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(101)
	::haxe::ds::IntMap tmp = this->mouse_button_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	int tmp1 = _button;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousepressed,return )

bool Input_obj::mousereleased( int _button){
	HX_STACK_FRAME("snow.system.input.Input","mousereleased",0x33268a06,"snow.system.input.Input.mousereleased","snow/system/input/Input.hx",105,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(106)
	::haxe::ds::IntMap tmp = this->mouse_button_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	int tmp1 = _button;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousereleased,return )

bool Input_obj::mousedown( int _button){
	HX_STACK_FRAME("snow.system.input.Input","mousedown",0xe6ce612b,"snow.system.input.Input.mousedown","snow/system/input/Input.hx",110,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(111)
	::haxe::ds::IntMap tmp = this->mouse_button_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	int tmp1 = _button;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,mousedown,return )

bool Input_obj::gamepadpressed( int _gamepad,int _button){
	HX_STACK_FRAME("snow.system.input.Input","gamepadpressed",0x426d597d,"snow.system.input.Input.gamepadpressed","snow/system/input/Input.hx",117,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(119)
	::haxe::ds::IntMap tmp = this->gamepad_button_pressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	int tmp1 = _gamepad;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	::haxe::ds::IntMap _gamepad_state = tmp2;		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(120)
	bool tmp3 = (_gamepad_state != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	if ((tmp3)){
		HX_STACK_LINE(120)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		tmp4 = _gamepad_state->exists(tmp5);
	}
	else{
		HX_STACK_LINE(120)
		tmp4 = false;
	}
	HX_STACK_LINE(120)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadpressed,return )

bool Input_obj::gamepadreleased( int _gamepad,int _button){
	HX_STACK_FRAME("snow.system.input.Input","gamepadreleased",0xe4170182,"snow.system.input.Input.gamepadreleased","snow/system/input/Input.hx",125,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(127)
	::haxe::ds::IntMap tmp = this->gamepad_button_released;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	int tmp1 = _gamepad;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	::haxe::ds::IntMap _gamepad_state = tmp2;		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(128)
	bool tmp3 = (_gamepad_state != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	if ((tmp3)){
		HX_STACK_LINE(128)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		tmp4 = _gamepad_state->exists(tmp5);
	}
	else{
		HX_STACK_LINE(128)
		tmp4 = false;
	}
	HX_STACK_LINE(128)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadreleased,return )

bool Input_obj::gamepaddown( int _gamepad,int _button){
	HX_STACK_FRAME("snow.system.input.Input","gamepaddown",0xf2d66aa7,"snow.system.input.Input.gamepaddown","snow/system/input/Input.hx",133,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_button,"_button")
	HX_STACK_LINE(135)
	::haxe::ds::IntMap tmp = this->gamepad_button_down;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	int tmp1 = _gamepad;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	::haxe::ds::IntMap _gamepad_state = tmp2;		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(136)
	bool tmp3 = (_gamepad_state != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	if ((tmp3)){
		HX_STACK_LINE(136)
		int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		tmp4 = _gamepad_state->exists(tmp5);
	}
	else{
		HX_STACK_LINE(136)
		tmp4 = false;
	}
	HX_STACK_LINE(136)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepaddown,return )

Float Input_obj::gamepadaxis( int _gamepad,int _axis){
	HX_STACK_FRAME("snow.system.input.Input","gamepadaxis",0xf0e18ee6,"snow.system.input.Input.gamepadaxis","snow/system/input/Input.hx",141,0x35f6b58d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gamepad,"_gamepad")
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_LINE(143)
	::haxe::ds::IntMap tmp = this->gamepad_axis_values;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	int tmp1 = _gamepad;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	::haxe::ds::IntMap tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	::haxe::ds::IntMap _gamepad_state = tmp2;		HX_STACK_VAR(_gamepad_state,"_gamepad_state");
	HX_STACK_LINE(144)
	bool tmp3 = (_gamepad_state != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(144)
	if ((tmp3)){
		HX_STACK_LINE(145)
		int tmp4 = _axis;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		bool tmp5 = _gamepad_state->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		if ((tmp5)){
			HX_STACK_LINE(146)
			int tmp6 = _axis;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			Dynamic tmp7 = _gamepad_state->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			return tmp8;
		}
	}
	HX_STACK_LINE(150)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,gamepadaxis,return )

Void Input_obj::dispatch_key_down_event( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_key_down_event",0x6a85e566,"snow.system.input.Input.dispatch_key_down_event","snow/system/input/Input.hx",155,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(158)
		bool tmp = repeat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		if ((tmp1)){
			HX_STACK_LINE(160)
			::haxe::ds::IntMap tmp2 = this->key_code_pressed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			int tmp3 = keycode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			tmp2->set(tmp3,false);
			HX_STACK_LINE(162)
			::haxe::ds::IntMap tmp4 = this->key_code_down;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			int tmp5 = keycode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			tmp4->set(tmp5,true);
			HX_STACK_LINE(164)
			::haxe::ds::IntMap tmp6 = this->scan_code_pressed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			int tmp7 = scancode;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(164)
			tmp6->set(tmp7,false);
			HX_STACK_LINE(166)
			::haxe::ds::IntMap tmp8 = this->scan_code_down;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(166)
			int tmp9 = scancode;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(166)
			tmp8->set(tmp9,true);
		}
		HX_STACK_LINE(170)
		::snow::Snow tmp2 = this->app;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		int tmp3 = keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		int tmp4 = scancode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		bool tmp5 = repeat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		Dynamic tmp6 = mod;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		Float tmp7 = timestamp;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		int tmp8 = window_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		tmp2->host->onkeydown(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_key_down_event,(void))

Void Input_obj::dispatch_key_up_event( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_key_up_event",0x55ab07df,"snow.system.input.Input.dispatch_key_up_event","snow/system/input/Input.hx",175,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(178)
		::haxe::ds::IntMap tmp = this->key_code_released;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		int tmp1 = keycode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		tmp->set(tmp1,false);
		HX_STACK_LINE(180)
		::haxe::ds::IntMap tmp2 = this->key_code_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		int tmp3 = keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		tmp2->remove(tmp3);
		HX_STACK_LINE(183)
		::haxe::ds::IntMap tmp4 = this->scan_code_released;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		int tmp5 = scancode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		tmp4->set(tmp5,false);
		HX_STACK_LINE(185)
		::haxe::ds::IntMap tmp6 = this->scan_code_down;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		int tmp7 = scancode;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		tmp6->remove(tmp7);
		HX_STACK_LINE(189)
		::snow::Snow tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(189)
		int tmp9 = keycode;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(189)
		int tmp10 = scancode;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(189)
		bool tmp11 = repeat;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(189)
		Dynamic tmp12 = mod;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(189)
		Float tmp13 = timestamp;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(189)
		int tmp14 = window_id;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(189)
		tmp8->host->onkeyup(tmp9,tmp10,tmp11,tmp12,tmp13,tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_key_up_event,(void))

Void Input_obj::dispatch_text_event( ::String text,int start,int length,int type,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_text_event",0x47b17191,"snow.system.input.Input.dispatch_text_event","snow/system/input/Input.hx",194,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(196)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		::String tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		int tmp2 = start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		int tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		int tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		Float tmp5 = timestamp;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		int tmp6 = window_id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		tmp->host->ontextinput(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_text_event,(void))

Void Input_obj::dispatch_mouse_move_event( int x,int y,int xrel,int yrel,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_mouse_move_event",0xc6d2b6cf,"snow.system.input.Input.dispatch_mouse_move_event","snow/system/input/Input.hx",202,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xrel,"xrel")
		HX_STACK_ARG(yrel,"yrel")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(204)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		int tmp3 = xrel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		int tmp4 = yrel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		Float tmp5 = timestamp;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		int tmp6 = window_id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		tmp->host->onmousemove(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_mouse_move_event,(void))

Void Input_obj::dispatch_mouse_down_event( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_mouse_down_event",0xb3a81ee0,"snow.system.input.Input.dispatch_mouse_down_event","snow/system/input/Input.hx",209,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(212)
		::haxe::ds::IntMap tmp = this->mouse_button_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		tmp->set(tmp1,false);
		HX_STACK_LINE(214)
		::haxe::ds::IntMap tmp2 = this->mouse_button_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		int tmp3 = button;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(214)
		tmp2->set(tmp3,true);
		HX_STACK_LINE(217)
		::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		int tmp7 = button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		Float tmp8 = timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		int tmp9 = window_id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(217)
		tmp4->host->onmousedown(tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,dispatch_mouse_down_event,(void))

Void Input_obj::dispatch_mouse_up_event( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_mouse_up_event",0x25c20ed9,"snow.system.input.Input.dispatch_mouse_up_event","snow/system/input/Input.hx",222,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(225)
		::haxe::ds::IntMap tmp = this->mouse_button_released;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		tmp->set(tmp1,false);
		HX_STACK_LINE(227)
		::haxe::ds::IntMap tmp2 = this->mouse_button_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		int tmp3 = button;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		tmp2->remove(tmp3);
		HX_STACK_LINE(230)
		::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(230)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(230)
		int tmp7 = button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(230)
		Float tmp8 = timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(230)
		int tmp9 = window_id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(230)
		tmp4->host->onmouseup(tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Input_obj,dispatch_mouse_up_event,(void))

Void Input_obj::dispatch_mouse_wheel_event( int x,int y,Float timestamp,int window_id){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_mouse_wheel_event",0xee04f733,"snow.system.input.Input.dispatch_mouse_wheel_event","snow/system/input/Input.hx",235,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(237)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		Float tmp3 = timestamp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		int tmp4 = window_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		tmp->host->onmousewheel(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_mouse_wheel_event,(void))

Void Input_obj::dispatch_touch_down_event( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_touch_down_event",0x8f2faf86,"snow.system.input.Input.dispatch_touch_down_event","snow/system/input/Input.hx",242,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(244)
		::haxe::ds::IntMap tmp = this->touches_down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		int tmp1 = touch_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		if ((tmp3)){
			HX_STACK_LINE(245)
			(this->touch_count)++;
			HX_STACK_LINE(246)
			::haxe::ds::IntMap tmp4 = this->touches_down;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			int tmp5 = touch_id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(246)
			tmp4->set(tmp5,true);
		}
		HX_STACK_LINE(249)
		::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(249)
		int tmp7 = touch_id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(249)
		Float tmp8 = timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(249)
		tmp4->host->ontouchdown(tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_touch_down_event,(void))

Void Input_obj::dispatch_touch_up_event( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_touch_up_event",0xab7809ff,"snow.system.input.Input.dispatch_touch_up_event","snow/system/input/Input.hx",254,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(256)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		int tmp3 = touch_id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		Float tmp4 = timestamp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(256)
		tmp->host->ontouchup(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(258)
		::haxe::ds::IntMap tmp5 = this->touches_down;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		int tmp6 = touch_id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		bool tmp7 = tmp5->remove(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(258)
		if ((tmp7)){
			HX_STACK_LINE(259)
			(this->touch_count)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_touch_up_event,(void))

Void Input_obj::dispatch_touch_move_event( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_touch_move_event",0xa25a4775,"snow.system.input.Input.dispatch_touch_move_event","snow/system/input/Input.hx",265,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(267)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		Float tmp3 = dx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		Float tmp4 = dy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		int tmp5 = touch_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(267)
		Float tmp6 = timestamp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(267)
		tmp->host->ontouchmove(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Input_obj,dispatch_touch_move_event,(void))

Void Input_obj::dispatch_gamepad_axis_event( int gamepad,int axis,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_gamepad_axis_event",0xf5677fa3,"snow.system.input.Input.dispatch_gamepad_axis_event","snow/system/input/Input.hx",272,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(275)
		::haxe::ds::IntMap tmp = this->gamepad_axis_values;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		if ((tmp3)){
			HX_STACK_LINE(276)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(276)
			{
				HX_STACK_LINE(276)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(276)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(276)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(276)
			::haxe::ds::IntMap value1 = tmp4;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(276)
			::haxe::ds::IntMap tmp5 = this->gamepad_axis_values;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(276)
			int tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(276)
			::haxe::ds::IntMap tmp7 = value1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(276)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			::haxe::ds::IntMap tmp4 = this->gamepad_axis_values;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(280)
			int tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			::haxe::ds::IntMap tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(280)
			::haxe::IMap this1 = tmp6;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(280)
			int tmp7 = axis;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(280)
			Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(280)
			this1->set(tmp7,tmp8);
		}
		HX_STACK_LINE(282)
		::snow::Snow tmp4 = this->app;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		int tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(282)
		int tmp6 = axis;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(282)
		Float tmp8 = timestamp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(282)
		tmp4->host->ongamepadaxis(tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_axis_event,(void))

Void Input_obj::dispatch_gamepad_button_down_event( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_gamepad_button_down_event",0x83ffffa3,"snow.system.input.Input.dispatch_gamepad_button_down_event","snow/system/input/Input.hx",287,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(290)
		::haxe::ds::IntMap tmp = this->gamepad_button_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		if ((tmp3)){
			HX_STACK_LINE(291)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(291)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(291)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(291)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(291)
			::haxe::ds::IntMap value1 = tmp4;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(291)
			::haxe::ds::IntMap tmp5 = this->gamepad_button_pressed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			int tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(291)
			::haxe::ds::IntMap tmp7 = value1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(291)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(294)
		::haxe::ds::IntMap tmp4 = this->gamepad_button_down;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(294)
		int tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(294)
		bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(294)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(294)
		if ((tmp7)){
			HX_STACK_LINE(295)
			::haxe::ds::IntMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(295)
			{
				HX_STACK_LINE(295)
				::haxe::ds::IntMap tmp9 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(295)
				::haxe::ds::IntMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(295)
				tmp8 = tmp10;
			}
			HX_STACK_LINE(295)
			::haxe::ds::IntMap value1 = tmp8;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(295)
			::haxe::ds::IntMap tmp9 = this->gamepad_button_down;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(295)
			int tmp10 = gamepad;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(295)
			::haxe::ds::IntMap tmp11 = value1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(295)
			tmp9->set(tmp10,tmp11);
		}
		HX_STACK_LINE(299)
		{
			HX_STACK_LINE(299)
			::haxe::ds::IntMap tmp8 = this->gamepad_button_pressed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(299)
			int tmp9 = gamepad;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(299)
			::haxe::ds::IntMap tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(299)
			::haxe::IMap this1 = tmp10;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(299)
			int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(299)
			this1->set(tmp11,false);
		}
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(301)
			::haxe::ds::IntMap tmp8 = this->gamepad_button_down;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			int tmp9 = gamepad;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(301)
			::haxe::ds::IntMap tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(301)
			::haxe::IMap this1 = tmp10;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(301)
			int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(301)
			this1->set(tmp11,true);
		}
		HX_STACK_LINE(304)
		::snow::Snow tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(304)
		int tmp9 = gamepad;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(304)
		int tmp10 = button;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(304)
		Float tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(304)
		Float tmp12 = timestamp;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(304)
		tmp8->host->ongamepaddown(tmp9,tmp10,tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_button_down_event,(void))

Void Input_obj::dispatch_gamepad_button_up_event( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_gamepad_button_up_event",0xf59d28dc,"snow.system.input.Input.dispatch_gamepad_button_up_event","snow/system/input/Input.hx",309,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(313)
		::haxe::ds::IntMap tmp = this->gamepad_button_released;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(313)
		if ((tmp3)){
			HX_STACK_LINE(314)
			::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(314)
				::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(314)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(314)
			::haxe::ds::IntMap value1 = tmp4;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(314)
			::haxe::ds::IntMap tmp5 = this->gamepad_button_released;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(314)
			int tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(314)
			::haxe::ds::IntMap tmp7 = value1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(314)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(317)
		::haxe::ds::IntMap tmp4 = this->gamepad_button_down;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(317)
		int tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(317)
		bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		if ((tmp7)){
			HX_STACK_LINE(318)
			::haxe::ds::IntMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(318)
			{
				HX_STACK_LINE(318)
				::haxe::ds::IntMap tmp9 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(318)
				::haxe::ds::IntMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(318)
				tmp8 = tmp10;
			}
			HX_STACK_LINE(318)
			::haxe::ds::IntMap value1 = tmp8;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(318)
			::haxe::ds::IntMap tmp9 = this->gamepad_button_down;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(318)
			int tmp10 = gamepad;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(318)
			::haxe::ds::IntMap tmp11 = value1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(318)
			tmp9->set(tmp10,tmp11);
		}
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			::haxe::ds::IntMap tmp8 = this->gamepad_button_released;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(322)
			int tmp9 = gamepad;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(322)
			::haxe::ds::IntMap tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(322)
			::haxe::IMap this1 = tmp10;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(322)
			int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(322)
			this1->set(tmp11,false);
		}
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			::haxe::ds::IntMap tmp8 = this->gamepad_button_down;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(324)
			int tmp9 = gamepad;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			::haxe::ds::IntMap tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			::haxe::IMap this1 = tmp10;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(324)
			int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(324)
			this1->remove(tmp11);
		}
		HX_STACK_LINE(326)
		::snow::Snow tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(326)
		int tmp9 = gamepad;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(326)
		int tmp10 = button;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(326)
		Float tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(326)
		Float tmp12 = timestamp;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(326)
		tmp8->host->ongamepadup(tmp9,tmp10,tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_button_up_event,(void))

Void Input_obj::dispatch_gamepad_device_event( int gamepad,::String id,int type,Float timestamp){
{
		HX_STACK_FRAME("snow.system.input.Input","dispatch_gamepad_device_event",0x30ea6d18,"snow.system.input.Input.dispatch_gamepad_device_event","snow/system/input/Input.hx",331,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(333)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		int tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		int tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		Float tmp4 = timestamp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(333)
		tmp->host->ongamepaddevice(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,dispatch_gamepad_device_event,(void))

Void Input_obj::listen( ::snow::_system::window::Window _window){
{
		HX_STACK_FRAME("snow.system.input.Input","listen",0x3a21ada3,"snow.system.input.Input.listen","snow/system/input/Input.hx",340,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_window,"_window")
		HX_STACK_LINE(342)
		::snow::modules::sdl::Input tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		::snow::_system::window::Window tmp1 = _window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		tmp->listen(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,listen,(void))

Void Input_obj::unlisten( ::snow::_system::window::Window _window){
{
		HX_STACK_FRAME("snow.system.input.Input","unlisten",0x0231ebbc,"snow.system.input.Input.unlisten","snow/system/input/Input.hx",347,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_window,"_window")
		HX_STACK_LINE(349)
		::snow::modules::sdl::Input tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		::snow::_system::window::Window tmp1 = _window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		tmp->unlisten(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,unlisten,(void))

Void Input_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.system.input.Input","on_event",0x2cb58616,"snow.system.input.Input.on_event","snow/system/input/Input.hx",354,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(356)
		::snow::modules::sdl::Input tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		Dynamic tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		tmp->on_event(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,on_event,(void))

Void Input_obj::update( ){
{
		HX_STACK_FRAME("snow.system.input.Input","update",0xd12d6b65,"snow.system.input.Input.update","snow/system/input/Input.hx",362,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(364)
		::snow::modules::sdl::Input tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		tmp->update();
		HX_STACK_LINE(366)
		this->_update_keystate();
		HX_STACK_LINE(367)
		this->_update_gamepadstate();
		HX_STACK_LINE(368)
		this->_update_mousestate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.input.Input","destroy",0xbd46f81e,"snow.system.input.Input.destroy","snow/system/input/Input.hx",373,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(375)
		::snow::modules::sdl::Input tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		tmp->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,destroy,(void))

Void Input_obj::_update_mousestate( ){
{
		HX_STACK_FRAME("snow.system.input.Input","_update_mousestate",0xde99ff9f,"snow.system.input.Input._update_mousestate","snow/system/input/Input.hx",382,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
		::haxe::ds::IntMap tmp = this->mouse_button_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(386)
				::haxe::ds::IntMap tmp2 = this->mouse_button_pressed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(386)
				int tmp3 = _code;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(386)
				Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(386)
				Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(386)
				if ((tmp5)){
					HX_STACK_LINE(387)
					::haxe::ds::IntMap tmp6 = this->mouse_button_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(387)
					int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(387)
					tmp6->remove(tmp7);
				}
				else{
					HX_STACK_LINE(389)
					::haxe::ds::IntMap tmp6 = this->mouse_button_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(389)
					int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(389)
					tmp6->set(tmp7,true);
				}
			}
;
		}
		HX_STACK_LINE(394)
		::haxe::ds::IntMap tmp2 = this->mouse_button_released;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(394)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp3);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(396)
				::haxe::ds::IntMap tmp4 = this->mouse_button_released;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(396)
				int tmp5 = _code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(396)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(396)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(396)
				if ((tmp7)){
					HX_STACK_LINE(397)
					::haxe::ds::IntMap tmp8 = this->mouse_button_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(397)
					int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(397)
					tmp8->remove(tmp9);
				}
				else{
					HX_STACK_LINE(399)
					::haxe::ds::IntMap tmp8 = this->mouse_button_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(399)
					int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(399)
					tmp8->set(tmp9,true);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,_update_mousestate,(void))

Void Input_obj::_update_gamepadstate( ){
{
		HX_STACK_FRAME("snow.system.input.Input","_update_gamepadstate",0x96c90e63,"snow.system.input.Input._update_gamepadstate","snow/system/input/Input.hx",407,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(409)
		::haxe::ds::IntMap tmp = this->gamepad_button_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(409)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(409)
		for(::cpp::FastIterator_obj< ::haxe::ds::IntMap > *__it = ::cpp::CreateFastIterator< ::haxe::ds::IntMap >(tmp1);  __it->hasNext(); ){
			::haxe::ds::IntMap _gamepad_pressed = __it->next();
			{
				HX_STACK_LINE(410)
				Dynamic tmp2 = _gamepad_pressed->keys();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(410)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp2);  __it->hasNext(); ){
					int _button = __it->next();
					{
						HX_STACK_LINE(412)
						int tmp3 = _button;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(412)
						Dynamic tmp4 = _gamepad_pressed->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(412)
						Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(412)
						if ((tmp5)){
							HX_STACK_LINE(413)
							int tmp6 = _button;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(413)
							_gamepad_pressed->remove(tmp6);
						}
						else{
							HX_STACK_LINE(415)
							int tmp6 = _button;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(415)
							_gamepad_pressed->set(tmp6,true);
						}
					}
;
				}
			}
;
		}
		HX_STACK_LINE(421)
		::haxe::ds::IntMap tmp2 = this->gamepad_button_released;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(421)
		Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(421)
		for(::cpp::FastIterator_obj< ::haxe::ds::IntMap > *__it = ::cpp::CreateFastIterator< ::haxe::ds::IntMap >(tmp3);  __it->hasNext(); ){
			::haxe::ds::IntMap _gamepad_released = __it->next();
			{
				HX_STACK_LINE(422)
				Dynamic tmp4 = _gamepad_released->keys();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp4);  __it->hasNext(); ){
					int _button = __it->next();
					{
						HX_STACK_LINE(424)
						int tmp5 = _button;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(424)
						Dynamic tmp6 = _gamepad_released->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(424)
						Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(424)
						if ((tmp7)){
							HX_STACK_LINE(425)
							int tmp8 = _button;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(425)
							_gamepad_released->remove(tmp8);
						}
						else{
							HX_STACK_LINE(427)
							int tmp8 = _button;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(427)
							_gamepad_released->set(tmp8,true);
						}
					}
;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,_update_gamepadstate,(void))

Void Input_obj::_update_keystate( ){
{
		HX_STACK_FRAME("snow.system.input.Input","_update_keystate",0x7c3b8725,"snow.system.input.Input._update_keystate","snow/system/input/Input.hx",436,0x35f6b58d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(441)
		::haxe::ds::IntMap tmp = this->key_code_pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(443)
				::haxe::ds::IntMap tmp2 = this->key_code_pressed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(443)
				int tmp3 = _code;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(443)
				Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(443)
				Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(443)
				if ((tmp5)){
					HX_STACK_LINE(444)
					::haxe::ds::IntMap tmp6 = this->key_code_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(444)
					int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(444)
					tmp6->remove(tmp7);
				}
				else{
					HX_STACK_LINE(446)
					::haxe::ds::IntMap tmp6 = this->key_code_pressed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(446)
					int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(446)
					tmp6->set(tmp7,true);
				}
			}
;
		}
		HX_STACK_LINE(454)
		::haxe::ds::IntMap tmp2 = this->key_code_released;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(454)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(454)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp3);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(456)
				::haxe::ds::IntMap tmp4 = this->key_code_released;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(456)
				int tmp5 = _code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(456)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(456)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(456)
				if ((tmp7)){
					HX_STACK_LINE(457)
					::haxe::ds::IntMap tmp8 = this->key_code_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(457)
					int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(457)
					tmp8->remove(tmp9);
				}
				else{
					HX_STACK_LINE(459)
					::haxe::ds::IntMap tmp8 = this->key_code_released;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(459)
					int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(459)
					tmp8->set(tmp9,true);
				}
			}
;
		}
		HX_STACK_LINE(469)
		::haxe::ds::IntMap tmp4 = this->scan_code_pressed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(469)
		Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(469)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp5);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(471)
				::haxe::ds::IntMap tmp6 = this->scan_code_pressed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(471)
				int tmp7 = _code;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(471)
				Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(471)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(471)
				if ((tmp9)){
					HX_STACK_LINE(472)
					::haxe::ds::IntMap tmp10 = this->scan_code_pressed;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(472)
					int tmp11 = _code;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(472)
					tmp10->remove(tmp11);
				}
				else{
					HX_STACK_LINE(474)
					::haxe::ds::IntMap tmp10 = this->scan_code_pressed;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(474)
					int tmp11 = _code;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(474)
					tmp10->set(tmp11,true);
				}
			}
;
		}
		HX_STACK_LINE(482)
		::haxe::ds::IntMap tmp6 = this->scan_code_released;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(482)
		Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(482)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp7);  __it->hasNext(); ){
			int _code = __it->next();
			{
				HX_STACK_LINE(484)
				::haxe::ds::IntMap tmp8 = this->scan_code_released;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(484)
				int tmp9 = _code;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(484)
				Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(484)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(484)
				if ((tmp11)){
					HX_STACK_LINE(485)
					::haxe::ds::IntMap tmp12 = this->scan_code_released;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(485)
					int tmp13 = _code;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(485)
					tmp12->remove(tmp13);
				}
				else{
					HX_STACK_LINE(487)
					::haxe::ds::IntMap tmp12 = this->scan_code_released;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(487)
					int tmp13 = _code;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(487)
					tmp12->set(tmp13,true);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,_update_keystate,(void))


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(key_code_down,"key_code_down");
	HX_MARK_MEMBER_NAME(key_code_pressed,"key_code_pressed");
	HX_MARK_MEMBER_NAME(key_code_released,"key_code_released");
	HX_MARK_MEMBER_NAME(scan_code_down,"scan_code_down");
	HX_MARK_MEMBER_NAME(scan_code_pressed,"scan_code_pressed");
	HX_MARK_MEMBER_NAME(scan_code_released,"scan_code_released");
	HX_MARK_MEMBER_NAME(mouse_button_down,"mouse_button_down");
	HX_MARK_MEMBER_NAME(mouse_button_pressed,"mouse_button_pressed");
	HX_MARK_MEMBER_NAME(mouse_button_released,"mouse_button_released");
	HX_MARK_MEMBER_NAME(gamepad_button_down,"gamepad_button_down");
	HX_MARK_MEMBER_NAME(gamepad_button_pressed,"gamepad_button_pressed");
	HX_MARK_MEMBER_NAME(gamepad_button_released,"gamepad_button_released");
	HX_MARK_MEMBER_NAME(gamepad_axis_values,"gamepad_axis_values");
	HX_MARK_MEMBER_NAME(touch_count,"touch_count");
	HX_MARK_MEMBER_NAME(touches_down,"touches_down");
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(key_code_down,"key_code_down");
	HX_VISIT_MEMBER_NAME(key_code_pressed,"key_code_pressed");
	HX_VISIT_MEMBER_NAME(key_code_released,"key_code_released");
	HX_VISIT_MEMBER_NAME(scan_code_down,"scan_code_down");
	HX_VISIT_MEMBER_NAME(scan_code_pressed,"scan_code_pressed");
	HX_VISIT_MEMBER_NAME(scan_code_released,"scan_code_released");
	HX_VISIT_MEMBER_NAME(mouse_button_down,"mouse_button_down");
	HX_VISIT_MEMBER_NAME(mouse_button_pressed,"mouse_button_pressed");
	HX_VISIT_MEMBER_NAME(mouse_button_released,"mouse_button_released");
	HX_VISIT_MEMBER_NAME(gamepad_button_down,"gamepad_button_down");
	HX_VISIT_MEMBER_NAME(gamepad_button_pressed,"gamepad_button_pressed");
	HX_VISIT_MEMBER_NAME(gamepad_button_released,"gamepad_button_released");
	HX_VISIT_MEMBER_NAME(gamepad_axis_values,"gamepad_axis_values");
	HX_VISIT_MEMBER_NAME(touch_count,"touch_count");
	HX_VISIT_MEMBER_NAME(touches_down,"touches_down");
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scandown") ) { return scandown_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keypressed") ) { return keypressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyreleased") ) { return keyreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"scanpressed") ) { return scanpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"touch_count") ) { return touch_count; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scanreleased") ) { return scanreleased_dyn(); }
		if (HX_FIELD_EQ(inName,"mousepressed") ) { return mousepressed_dyn(); }
		if (HX_FIELD_EQ(inName,"touches_down") ) { return touches_down; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mousereleased") ) { return mousereleased_dyn(); }
		if (HX_FIELD_EQ(inName,"key_code_down") ) { return key_code_down; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gamepadpressed") ) { return gamepadpressed_dyn(); }
		if (HX_FIELD_EQ(inName,"scan_code_down") ) { return scan_code_down; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gamepadreleased") ) { return gamepadreleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_update_keystate") ) { return _update_keystate_dyn(); }
		if (HX_FIELD_EQ(inName,"key_code_pressed") ) { return key_code_pressed; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"key_code_released") ) { return key_code_released; }
		if (HX_FIELD_EQ(inName,"scan_code_pressed") ) { return scan_code_pressed; }
		if (HX_FIELD_EQ(inName,"mouse_button_down") ) { return mouse_button_down; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_update_mousestate") ) { return _update_mousestate_dyn(); }
		if (HX_FIELD_EQ(inName,"scan_code_released") ) { return scan_code_released; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"dispatch_text_event") ) { return dispatch_text_event_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepad_button_down") ) { return gamepad_button_down; }
		if (HX_FIELD_EQ(inName,"gamepad_axis_values") ) { return gamepad_axis_values; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_update_gamepadstate") ) { return _update_gamepadstate_dyn(); }
		if (HX_FIELD_EQ(inName,"mouse_button_pressed") ) { return mouse_button_pressed; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dispatch_key_up_event") ) { return dispatch_key_up_event_dyn(); }
		if (HX_FIELD_EQ(inName,"mouse_button_released") ) { return mouse_button_released; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"gamepad_button_pressed") ) { return gamepad_button_pressed; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"dispatch_key_down_event") ) { return dispatch_key_down_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_mouse_up_event") ) { return dispatch_mouse_up_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_touch_up_event") ) { return dispatch_touch_up_event_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepad_button_released") ) { return gamepad_button_released; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"dispatch_mouse_move_event") ) { return dispatch_mouse_move_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_mouse_down_event") ) { return dispatch_mouse_down_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_touch_down_event") ) { return dispatch_touch_down_event_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch_touch_move_event") ) { return dispatch_touch_move_event_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"dispatch_mouse_wheel_event") ) { return dispatch_mouse_wheel_event_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_axis_event") ) { return dispatch_gamepad_axis_event_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_device_event") ) { return dispatch_gamepad_device_event_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_button_up_event") ) { return dispatch_gamepad_button_up_event_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"dispatch_gamepad_button_down_event") ) { return dispatch_gamepad_button_down_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::modules::sdl::Input >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touch_count") ) { touch_count=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touches_down") ) { touches_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"key_code_down") ) { key_code_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"scan_code_down") ) { scan_code_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"key_code_pressed") ) { key_code_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"key_code_released") ) { key_code_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scan_code_pressed") ) { scan_code_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse_button_down") ) { mouse_button_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"scan_code_released") ) { scan_code_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"gamepad_button_down") ) { gamepad_button_down=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamepad_axis_values") ) { gamepad_axis_values=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mouse_button_pressed") ) { mouse_button_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouse_button_released") ) { mouse_button_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"gamepad_button_pressed") ) { gamepad_button_pressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"gamepad_button_released") ) { gamepad_button_released=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Input_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	outFields->push(HX_HCSTRING("key_code_down","\x14","\xe2","\xe5","\x52"));
	outFields->push(HX_HCSTRING("key_code_pressed","\x30","\x84","\x2e","\x06"));
	outFields->push(HX_HCSTRING("key_code_released","\x6f","\x33","\x5b","\x69"));
	outFields->push(HX_HCSTRING("scan_code_down","\x72","\x17","\x32","\x08"));
	outFields->push(HX_HCSTRING("scan_code_pressed","\x92","\x7d","\xd3","\xee"));
	outFields->push(HX_HCSTRING("scan_code_released","\xcd","\x6f","\x10","\x11"));
	outFields->push(HX_HCSTRING("mouse_button_down","\xb5","\x4c","\x86","\x45"));
	outFields->push(HX_HCSTRING("mouse_button_pressed","\x2f","\xb4","\x97","\xf2"));
	outFields->push(HX_HCSTRING("mouse_button_released","\x90","\x02","\xfc","\x58"));
	outFields->push(HX_HCSTRING("gamepad_button_down","\x31","\xe1","\xea","\x9e"));
	outFields->push(HX_HCSTRING("gamepad_button_pressed","\x33","\x15","\x3e","\xb5"));
	outFields->push(HX_HCSTRING("gamepad_button_released","\x0c","\x85","\xea","\xe7"));
	outFields->push(HX_HCSTRING("gamepad_axis_values","\x22","\xbb","\xf8","\xda"));
	outFields->push(HX_HCSTRING("touch_count","\x0f","\x7d","\xec","\x76"));
	outFields->push(HX_HCSTRING("touches_down","\x34","\x5b","\x92","\xb5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Input_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsObject /*::snow::modules::sdl::Input*/ ,(int)offsetof(Input_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,key_code_down),HX_HCSTRING("key_code_down","\x14","\xe2","\xe5","\x52")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,key_code_pressed),HX_HCSTRING("key_code_pressed","\x30","\x84","\x2e","\x06")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,key_code_released),HX_HCSTRING("key_code_released","\x6f","\x33","\x5b","\x69")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,scan_code_down),HX_HCSTRING("scan_code_down","\x72","\x17","\x32","\x08")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,scan_code_pressed),HX_HCSTRING("scan_code_pressed","\x92","\x7d","\xd3","\xee")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,scan_code_released),HX_HCSTRING("scan_code_released","\xcd","\x6f","\x10","\x11")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,mouse_button_down),HX_HCSTRING("mouse_button_down","\xb5","\x4c","\x86","\x45")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,mouse_button_pressed),HX_HCSTRING("mouse_button_pressed","\x2f","\xb4","\x97","\xf2")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,mouse_button_released),HX_HCSTRING("mouse_button_released","\x90","\x02","\xfc","\x58")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_button_down),HX_HCSTRING("gamepad_button_down","\x31","\xe1","\xea","\x9e")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_button_pressed),HX_HCSTRING("gamepad_button_pressed","\x33","\x15","\x3e","\xb5")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_button_released),HX_HCSTRING("gamepad_button_released","\x0c","\x85","\xea","\xe7")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,gamepad_axis_values),HX_HCSTRING("gamepad_axis_values","\x22","\xbb","\xf8","\xda")},
	{hx::fsInt,(int)offsetof(Input_obj,touch_count),HX_HCSTRING("touch_count","\x0f","\x7d","\xec","\x76")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Input_obj,touches_down),HX_HCSTRING("touches_down","\x34","\x5b","\x92","\xb5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("keypressed","\xe3","\x4a","\x1d","\xdb"),
	HX_HCSTRING("keyreleased","\x5c","\x49","\x5a","\xe5"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("scanpressed","\xc5","\x2e","\xc3","\xfb"),
	HX_HCSTRING("scanreleased","\x3a","\xcb","\xdb","\x55"),
	HX_HCSTRING("scandown","\x5f","\xf8","\x95","\x27"),
	HX_HCSTRING("mousepressed","\x1d","\xfb","\x3a","\x4e"),
	HX_HCSTRING("mousereleased","\xe2","\xcb","\x36","\x2c"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("gamepadpressed","\x21","\xb8","\x96","\x37"),
	HX_HCSTRING("gamepadreleased","\x5e","\x72","\x20","\x73"),
	HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"),
	HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"),
	HX_HCSTRING("dispatch_key_down_event","\x42","\x92","\xf5","\x8f"),
	HX_HCSTRING("dispatch_key_up_event","\xbb","\x85","\xda","\x71"),
	HX_HCSTRING("dispatch_text_event","\x6d","\x80","\x5a","\x1c"),
	HX_HCSTRING("dispatch_mouse_move_event","\xab","\x52","\x2c","\xe9"),
	HX_HCSTRING("dispatch_mouse_down_event","\xbc","\xba","\x01","\xd6"),
	HX_HCSTRING("dispatch_mouse_up_event","\xb5","\xbb","\x31","\x4b"),
	HX_HCSTRING("dispatch_mouse_wheel_event","\xd7","\xbb","\x13","\xda"),
	HX_HCSTRING("dispatch_touch_down_event","\x62","\x4b","\x89","\xb1"),
	HX_HCSTRING("dispatch_touch_up_event","\xdb","\xb6","\xe7","\xd0"),
	HX_HCSTRING("dispatch_touch_move_event","\x51","\xe3","\xb3","\xc4"),
	HX_HCSTRING("dispatch_gamepad_axis_event","\x7f","\xca","\x44","\x96"),
	HX_HCSTRING("dispatch_gamepad_button_down_event","\x47","\x08","\x1a","\x25"),
	HX_HCSTRING("dispatch_gamepad_button_up_event","\x80","\x00","\xd7","\x72"),
	HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"),
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	HX_HCSTRING("unlisten","\x60","\xf7","\x40","\xf2"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("_update_mousestate","\x43","\x80","\x81","\x34"),
	HX_HCSTRING("_update_gamepadstate","\x07","\x00","\x0d","\xd6"),
	HX_HCSTRING("_update_keystate","\xc9","\xd6","\x74","\x15"),
	HX_HCSTRING("key_code_down","\x14","\xe2","\xe5","\x52"),
	HX_HCSTRING("key_code_pressed","\x30","\x84","\x2e","\x06"),
	HX_HCSTRING("key_code_released","\x6f","\x33","\x5b","\x69"),
	HX_HCSTRING("scan_code_down","\x72","\x17","\x32","\x08"),
	HX_HCSTRING("scan_code_pressed","\x92","\x7d","\xd3","\xee"),
	HX_HCSTRING("scan_code_released","\xcd","\x6f","\x10","\x11"),
	HX_HCSTRING("mouse_button_down","\xb5","\x4c","\x86","\x45"),
	HX_HCSTRING("mouse_button_pressed","\x2f","\xb4","\x97","\xf2"),
	HX_HCSTRING("mouse_button_released","\x90","\x02","\xfc","\x58"),
	HX_HCSTRING("gamepad_button_down","\x31","\xe1","\xea","\x9e"),
	HX_HCSTRING("gamepad_button_pressed","\x33","\x15","\x3e","\xb5"),
	HX_HCSTRING("gamepad_button_released","\x0c","\x85","\xea","\xe7"),
	HX_HCSTRING("gamepad_axis_values","\x22","\xbb","\xf8","\xda"),
	HX_HCSTRING("touch_count","\x0f","\x7d","\xec","\x76"),
	HX_HCSTRING("touches_down","\x34","\x5b","\x92","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.input.Input","\x92","\x67","\xc3","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Input_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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
} // end namespace input
