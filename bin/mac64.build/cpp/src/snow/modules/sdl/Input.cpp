#include <hxcpp.h>

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
namespace snow{
namespace modules{
namespace sdl{

Void Input_obj::__construct(::snow::_system::input::Input _system)
{
HX_STACK_FRAME("snow.modules.sdl.Input","new",0x0c45b3d7,"snow.modules.sdl.Input.new","snow/modules/sdl/Input.hx",8,0xc2f5207c)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
{
	HX_STACK_LINE(8)
	::snow::_system::input::Input tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	super::__construct(tmp);
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::snow::_system::input::Input _system)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(_system);
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Input_obj::on_event( Dynamic event){
{
		HX_STACK_FRAME("snow.modules.sdl.Input","on_event",0xbe93bee3,"snow.modules.sdl.Input.on_event","snow/modules/sdl/Input.hx",10,0xc2f5207c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(12)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		this->super::on_event(tmp);
		HX_STACK_LINE(15)
		bool tmp1 = (event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		if ((tmp1)){
			HX_STACK_LINE(16)
			return null();
		}
		HX_STACK_LINE(19)
		Dynamic _event = event->__Field(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"), hx::paccDynamic );		HX_STACK_VAR(_event,"_event");
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			Dynamic _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			bool tmp2 = (_g != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(20)
			if ((tmp2)){
				HX_STACK_LINE(20)
				Dynamic tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(20)
				switch( (int)(tmp3)){
					case (int)1: {
						HX_STACK_LINE(21)
						Dynamic _event1 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event1,"_event1");
						HX_STACK_LINE(21)
						{
							HX_STACK_LINE(21)
							int _g1 = _event1->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(21)
							int tmp4 = _g1;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(21)
							switch( (int)(tmp4)){
								case (int)768: {
									HX_STACK_LINE(21)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(21)
									int tmp6 = _event1->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("sym","\x07","\xad","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(21)
									int tmp7 = _event1->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(21)
									bool tmp8 = _event1->__Field(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(21)
									Dynamic tmp9 = _event1;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(21)
									Dynamic tmp10 = this->get_key_mod_state(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(21)
									Dynamic tmp11 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(21)
									Dynamic tmp12 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(21)
									tmp5->__Field(HX_HCSTRING("dispatch_key_down_event","\x42","\x92","\xf5","\x8f"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp10,tmp11,tmp12);
								}
								;break;
								case (int)769: {
									HX_STACK_LINE(21)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(21)
									int tmp6 = _event1->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("sym","\x07","\xad","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(21)
									int tmp7 = _event1->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(21)
									bool tmp8 = _event1->__Field(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(21)
									Dynamic tmp9 = _event1;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(21)
									Dynamic tmp10 = this->get_key_mod_state(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(21)
									Dynamic tmp11 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(21)
									Dynamic tmp12 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(21)
									tmp5->__Field(HX_HCSTRING("dispatch_key_up_event","\xbb","\x85","\xda","\x71"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp10,tmp11,tmp12);
								}
								;break;
								case (int)770: case (int)771: {
									HX_STACK_LINE(21)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(21)
									::String tmp6 = _event1->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(21)
									bool tmp7 = (_event1->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(21)
									int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(21)
									if ((tmp7)){
										HX_STACK_LINE(21)
										tmp8 = (int)0;
									}
									else{
										HX_STACK_LINE(21)
										tmp8 = _event1->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );
									}
									HX_STACK_LINE(21)
									bool tmp9 = (_event1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(21)
									int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(21)
									if ((tmp9)){
										HX_STACK_LINE(21)
										tmp10 = (int)0;
									}
									else{
										HX_STACK_LINE(21)
										tmp10 = _event1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									}
									HX_STACK_LINE(21)
									bool tmp11 = (_event1->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)770);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(21)
									int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(21)
									if ((tmp11)){
										HX_STACK_LINE(21)
										tmp12 = (int)1;
									}
									else{
										HX_STACK_LINE(21)
										tmp12 = (int)2;
									}
									HX_STACK_LINE(21)
									Dynamic tmp13 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(21)
									Dynamic tmp14 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(21)
									tmp5->__Field(HX_HCSTRING("dispatch_text_event","\x6d","\x80","\x5a","\x1c"), hx::paccDynamic )(tmp6,tmp8,tmp10,tmp12,tmp13,tmp14);
								}
								;break;
							}
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(22)
						Dynamic _event1 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event1,"_event1");
						HX_STACK_LINE(22)
						{
							HX_STACK_LINE(22)
							int _g1 = _event1->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(22)
							int tmp4 = _g1;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(22)
							switch( (int)(tmp4)){
								case (int)1792: {
									HX_STACK_LINE(22)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(22)
									Float tmp6 = _event1->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(22)
									Float tmp7 = _event1->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(22)
									int tmp8 = _event1->__Field(HX_HCSTRING("finger_id","\xf1","\x31","\xf7","\x01"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(22)
									Dynamic tmp9 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(22)
									tmp5->__Field(HX_HCSTRING("dispatch_touch_down_event","\x62","\x4b","\x89","\xb1"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp9);
								}
								;break;
								case (int)1793: {
									HX_STACK_LINE(22)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(22)
									Float tmp6 = _event1->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(22)
									Float tmp7 = _event1->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(22)
									int tmp8 = _event1->__Field(HX_HCSTRING("finger_id","\xf1","\x31","\xf7","\x01"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(22)
									Dynamic tmp9 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(22)
									tmp5->__Field(HX_HCSTRING("dispatch_touch_up_event","\xdb","\xb6","\xe7","\xd0"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp9);
								}
								;break;
								case (int)1794: {
									HX_STACK_LINE(22)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(22)
									Float tmp6 = _event1->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(22)
									Float tmp7 = _event1->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(22)
									Dynamic tmp8 = _event1->__Field(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(22)
									Dynamic tmp9 = _event1->__Field(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(22)
									int tmp10 = _event1->__Field(HX_HCSTRING("finger_id","\xf1","\x31","\xf7","\x01"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(22)
									Dynamic tmp11 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(22)
									tmp5->__Field(HX_HCSTRING("dispatch_touch_move_event","\x51","\xe3","\xb3","\xc4"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
								}
								;break;
							}
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(23)
						Dynamic _event1 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event1,"_event1");
						HX_STACK_LINE(23)
						{
							HX_STACK_LINE(23)
							int _g1 = _event1->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(23)
							int tmp4 = _g1;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(23)
							switch( (int)(tmp4)){
								case (int)1618: {
									HX_STACK_LINE(23)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(23)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(23)
									Dynamic tmp7 = _event1->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(23)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(23)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_button_up_event","\x80","\x00","\xd7","\x72"), hx::paccDynamic )(tmp6,tmp7,(int)0,tmp8);
								}
								;break;
								case (int)1617: {
									HX_STACK_LINE(23)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(23)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(23)
									Dynamic tmp7 = _event1->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(23)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(23)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_button_down_event","\x47","\x08","\x1a","\x25"), hx::paccDynamic )(tmp6,tmp7,(int)1,tmp8);
								}
								;break;
								case (int)1616: {
									HX_STACK_LINE(23)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(23)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(23)
									Dynamic tmp7 = _event1->__Field(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(23)
									Dynamic tmp8 = _event1->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(23)
									Dynamic tmp9 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(23)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_axis_event","\x7f","\xca","\x44","\x96"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp9);
								}
								;break;
								case (int)1619: {
									HX_STACK_LINE(23)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(23)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(23)
									::String tmp7 = _event1->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(23)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(23)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp6,tmp7,(int)1,tmp8);
								}
								;break;
								case (int)1620: {
									HX_STACK_LINE(23)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(23)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(23)
									::String tmp7 = _event1->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(23)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(23)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp6,tmp7,(int)2,tmp8);
								}
								;break;
								case (int)1621: {
									HX_STACK_LINE(23)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(23)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(23)
									::String tmp7 = _event1->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(23)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(23)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp6,tmp7,(int)3,tmp8);
								}
								;break;
							}
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(24)
						Dynamic _event1 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event1,"_event1");
						HX_STACK_LINE(24)
						{
							HX_STACK_LINE(24)
							int _g1 = _event1->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(24)
							int tmp4 = _g1;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(24)
							switch( (int)(tmp4)){
								case (int)1024: {
									HX_STACK_LINE(24)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(24)
									int tmp6 = _event1->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(24)
									int tmp7 = _event1->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(24)
									Dynamic tmp8 = _event1->__Field(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(24)
									Dynamic tmp9 = _event1->__Field(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(24)
									Dynamic tmp10 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(24)
									Dynamic tmp11 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(24)
									tmp5->__Field(HX_HCSTRING("dispatch_mouse_move_event","\xab","\x52","\x2c","\xe9"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
								}
								;break;
								case (int)1025: {
									HX_STACK_LINE(24)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(24)
									int tmp6 = _event1->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(24)
									int tmp7 = _event1->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(24)
									Dynamic tmp8 = _event1->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(24)
									Dynamic tmp9 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(24)
									Dynamic tmp10 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(24)
									tmp5->__Field(HX_HCSTRING("dispatch_mouse_down_event","\xbc","\xba","\x01","\xd6"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp9,tmp10);
								}
								;break;
								case (int)1026: {
									HX_STACK_LINE(24)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(24)
									int tmp6 = _event1->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(24)
									int tmp7 = _event1->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(24)
									Dynamic tmp8 = _event1->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(24)
									Dynamic tmp9 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(24)
									Dynamic tmp10 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(24)
									tmp5->__Field(HX_HCSTRING("dispatch_mouse_up_event","\xb5","\xbb","\x31","\x4b"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp9,tmp10);
								}
								;break;
								case (int)1027: {
									HX_STACK_LINE(24)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(24)
									int tmp6 = _event1->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(24)
									int tmp7 = _event1->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(24)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(24)
									Dynamic tmp9 = _event->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(24)
									tmp5->__Field(HX_HCSTRING("dispatch_mouse_wheel_event","\xd7","\xbb","\x13","\xda"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp9);
								}
								;break;
							}
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(25)
						Dynamic _event1 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event1,"_event1");
						HX_STACK_LINE(25)
						{
							HX_STACK_LINE(25)
							int _g1 = _event1->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(25)
							int tmp4 = _g1;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(25)
							switch( (int)(tmp4)){
								case (int)1536: {
									HX_STACK_LINE(25)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(25)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(25)
									Dynamic tmp7 = _event1->__Field(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(25)
									Dynamic tmp8 = _event1->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(25)
									Dynamic tmp9 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(25)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_axis_event","\x7f","\xca","\x44","\x96"), hx::paccDynamic )(tmp6,tmp7,tmp8,tmp9);
								}
								;break;
								case (int)1539: {
									HX_STACK_LINE(25)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(25)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(25)
									Dynamic tmp7 = _event1->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(25)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(25)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_button_down_event","\x47","\x08","\x1a","\x25"), hx::paccDynamic )(tmp6,tmp7,(int)1,tmp8);
								}
								;break;
								case (int)1540: {
									HX_STACK_LINE(25)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(25)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(25)
									Dynamic tmp7 = _event1->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(25)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(25)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_button_up_event","\x80","\x00","\xd7","\x72"), hx::paccDynamic )(tmp6,tmp7,(int)0,tmp8);
								}
								;break;
								case (int)1541: {
									HX_STACK_LINE(25)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(25)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(25)
									::String tmp7 = _event1->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(25)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(25)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp6,tmp7,(int)1,tmp8);
								}
								;break;
								case (int)1542: {
									HX_STACK_LINE(25)
									::snow::_system::input::Input tmp5 = this->_system;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(25)
									int tmp6 = _event1->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(25)
									::String tmp7 = _event1->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(25)
									Dynamic tmp8 = _event->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(25)
									tmp5->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp6,tmp7,(int)2,tmp8);
								}
								;break;
								case (int)1537: {
								}
								;break;
								case (int)1538: {
								}
								;break;
							}
						}
					}
					;break;
					case (int)0: {
					}
					;break;
					default: {
					}
				}
			}
			else{
			}
		}
	}
return null();
}


Void Input_obj::handle_controller_ev( Dynamic _input){
{
		HX_STACK_FRAME("snow.modules.sdl.Input","handle_controller_ev",0x22f87006,"snow.modules.sdl.Input.handle_controller_ev","snow/modules/sdl/Input.hx",32,0xc2f5207c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_input,"_input")
		HX_STACK_LINE(34)
		Dynamic _event = _input->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event,"_event");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(37)
			switch( (int)(tmp)){
				case (int)1618: {
					HX_STACK_LINE(39)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(40)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(41)
					Dynamic tmp3 = _event->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(43)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(39)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_button_up_event","\x80","\x00","\xd7","\x72"), hx::paccDynamic )(tmp2,tmp3,(int)0,tmp4);
				}
				;break;
				case (int)1617: {
					HX_STACK_LINE(47)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(48)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(49)
					Dynamic tmp3 = _event->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(51)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(47)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_button_down_event","\x47","\x08","\x1a","\x25"), hx::paccDynamic )(tmp2,tmp3,(int)1,tmp4);
				}
				;break;
				case (int)1616: {
					HX_STACK_LINE(55)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(56)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(57)
					Dynamic tmp3 = _event->__Field(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(58)
					Dynamic tmp4 = _event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(59)
					Dynamic tmp5 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(55)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_axis_event","\x7f","\xca","\x44","\x96"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp5);
				}
				;break;
				case (int)1619: {
					HX_STACK_LINE(63)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(64)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(65)
					::String tmp3 = _event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(67)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(63)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp2,tmp3,(int)1,tmp4);
				}
				;break;
				case (int)1620: {
					HX_STACK_LINE(71)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(72)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(73)
					::String tmp3 = _event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(75)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(71)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp2,tmp3,(int)2,tmp4);
				}
				;break;
				case (int)1621: {
					HX_STACK_LINE(79)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(80)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(81)
					::String tmp3 = _event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(83)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(79)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp2,tmp3,(int)3,tmp4);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handle_controller_ev,(void))

Void Input_obj::handle_joystick_ev( Dynamic _input){
{
		HX_STACK_FRAME("snow.modules.sdl.Input","handle_joystick_ev",0x80215366,"snow.modules.sdl.Input.handle_joystick_ev","snow/modules/sdl/Input.hx",90,0xc2f5207c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_input,"_input")
		HX_STACK_LINE(92)
		Dynamic _event = _input->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event,"_event");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			int _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(94)
			switch( (int)(tmp)){
				case (int)1536: {
					HX_STACK_LINE(97)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(98)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(99)
					Dynamic tmp3 = _event->__Field(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(100)
					Dynamic tmp4 = _event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(101)
					Dynamic tmp5 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(97)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_axis_event","\x7f","\xca","\x44","\x96"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp5);
				}
				;break;
				case (int)1539: {
					HX_STACK_LINE(104)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(105)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(106)
					Dynamic tmp3 = _event->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(108)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(104)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_button_down_event","\x47","\x08","\x1a","\x25"), hx::paccDynamic )(tmp2,tmp3,(int)1,tmp4);
				}
				;break;
				case (int)1540: {
					HX_STACK_LINE(111)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(112)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(113)
					Dynamic tmp3 = _event->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(115)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(111)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_button_up_event","\x80","\x00","\xd7","\x72"), hx::paccDynamic )(tmp2,tmp3,(int)0,tmp4);
				}
				;break;
				case (int)1541: {
					HX_STACK_LINE(118)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(119)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(120)
					::String tmp3 = _event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(122)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(118)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp2,tmp3,(int)1,tmp4);
				}
				;break;
				case (int)1542: {
					HX_STACK_LINE(126)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(127)
					int tmp2 = _event->__Field(HX_HCSTRING("which","\xdd","\x3b","\xbd","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(128)
					::String tmp3 = _event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(130)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(126)
					tmp1->__Field(HX_HCSTRING("dispatch_gamepad_device_event","\xf4","\x26","\xd5","\xbb"), hx::paccDynamic )(tmp2,tmp3,(int)2,tmp4);
				}
				;break;
				case (int)1537: {
				}
				;break;
				case (int)1538: {
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handle_joystick_ev,(void))

Void Input_obj::handle_mouse_ev( Dynamic _input){
{
		HX_STACK_FRAME("snow.modules.sdl.Input","handle_mouse_ev",0xe58d7639,"snow.modules.sdl.Input.handle_mouse_ev","snow/modules/sdl/Input.hx",140,0xc2f5207c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_input,"_input")
		HX_STACK_LINE(142)
		Dynamic _event = _input->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event,"_event");
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			int _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(144)
			int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(144)
			switch( (int)(tmp)){
				case (int)1024: {
					HX_STACK_LINE(146)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(147)
					int tmp2 = _event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(148)
					int tmp3 = _event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(149)
					Dynamic tmp4 = _event->__Field(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(150)
					Dynamic tmp5 = _event->__Field(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(151)
					Dynamic tmp6 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(152)
					Dynamic tmp7 = _input->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(146)
					tmp1->__Field(HX_HCSTRING("dispatch_mouse_move_event","\xab","\x52","\x2c","\xe9"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
				}
				;break;
				case (int)1025: {
					HX_STACK_LINE(156)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(157)
					int tmp2 = _event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(158)
					int tmp3 = _event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(159)
					Dynamic tmp4 = _event->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(160)
					Dynamic tmp5 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(161)
					Dynamic tmp6 = _input->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(156)
					tmp1->__Field(HX_HCSTRING("dispatch_mouse_down_event","\xbc","\xba","\x01","\xd6"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)1026: {
					HX_STACK_LINE(165)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(166)
					int tmp2 = _event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(167)
					int tmp3 = _event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(168)
					Dynamic tmp4 = _event->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(169)
					Dynamic tmp5 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(170)
					Dynamic tmp6 = _input->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(165)
					tmp1->__Field(HX_HCSTRING("dispatch_mouse_up_event","\xb5","\xbb","\x31","\x4b"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)1027: {
					HX_STACK_LINE(174)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(175)
					int tmp2 = _event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(176)
					int tmp3 = _event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(177)
					Dynamic tmp4 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(178)
					Dynamic tmp5 = _input->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(174)
					tmp1->__Field(HX_HCSTRING("dispatch_mouse_wheel_event","\xd7","\xbb","\x13","\xda"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp5);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handle_mouse_ev,(void))

Void Input_obj::handle_touch_ev( Dynamic _input){
{
		HX_STACK_FRAME("snow.modules.sdl.Input","handle_touch_ev",0x4180f0df,"snow.modules.sdl.Input.handle_touch_ev","snow/modules/sdl/Input.hx",185,0xc2f5207c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_input,"_input")
		HX_STACK_LINE(191)
		Dynamic _event = _input->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event,"_event");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(193)
			switch( (int)(tmp)){
				case (int)1792: {
					HX_STACK_LINE(195)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(196)
					Float tmp2 = _event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(197)
					Float tmp3 = _event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(198)
					int tmp4 = _event->__Field(HX_HCSTRING("finger_id","\xf1","\x31","\xf7","\x01"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(199)
					Dynamic tmp5 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(195)
					tmp1->__Field(HX_HCSTRING("dispatch_touch_down_event","\x62","\x4b","\x89","\xb1"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp5);
				}
				;break;
				case (int)1793: {
					HX_STACK_LINE(203)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(204)
					Float tmp2 = _event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(205)
					Float tmp3 = _event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(206)
					int tmp4 = _event->__Field(HX_HCSTRING("finger_id","\xf1","\x31","\xf7","\x01"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(207)
					Dynamic tmp5 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(203)
					tmp1->__Field(HX_HCSTRING("dispatch_touch_up_event","\xdb","\xb6","\xe7","\xd0"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp5);
				}
				;break;
				case (int)1794: {
					HX_STACK_LINE(211)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(212)
					Float tmp2 = _event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(213)
					Float tmp3 = _event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(214)
					Dynamic tmp4 = _event->__Field(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(215)
					Dynamic tmp5 = _event->__Field(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(216)
					int tmp6 = _event->__Field(HX_HCSTRING("finger_id","\xf1","\x31","\xf7","\x01"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(217)
					Dynamic tmp7 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(211)
					tmp1->__Field(HX_HCSTRING("dispatch_touch_move_event","\x51","\xe3","\xb3","\xc4"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handle_touch_ev,(void))

Void Input_obj::handle_key_ev( Dynamic _input){
{
		HX_STACK_FRAME("snow.modules.sdl.Input","handle_key_ev",0xdd35c37f,"snow.modules.sdl.Input.handle_key_ev","snow/modules/sdl/Input.hx",224,0xc2f5207c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_input,"_input")
		HX_STACK_LINE(226)
		Dynamic _event = _input->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(_event,"_event");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			int _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(228)
			int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(228)
			switch( (int)(tmp)){
				case (int)768: {
					HX_STACK_LINE(230)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(231)
					int tmp2 = _event->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("sym","\x07","\xad","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(232)
					int tmp3 = _event->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(233)
					bool tmp4 = _event->__Field(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(234)
					Dynamic tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(234)
					Dynamic tmp6 = this->get_key_mod_state(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(235)
					Dynamic tmp7 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(236)
					Dynamic tmp8 = _input->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(230)
					tmp1->__Field(HX_HCSTRING("dispatch_key_down_event","\x42","\x92","\xf5","\x8f"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp6,tmp7,tmp8);
				}
				;break;
				case (int)769: {
					HX_STACK_LINE(240)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(241)
					int tmp2 = _event->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("sym","\x07","\xad","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(242)
					int tmp3 = _event->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(243)
					bool tmp4 = _event->__Field(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(244)
					Dynamic tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(244)
					Dynamic tmp6 = this->get_key_mod_state(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(245)
					Dynamic tmp7 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(246)
					Dynamic tmp8 = _input->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(240)
					tmp1->__Field(HX_HCSTRING("dispatch_key_up_event","\xbb","\x85","\xda","\x71"), hx::paccDynamic )(tmp2,tmp3,tmp4,tmp6,tmp7,tmp8);
				}
				;break;
				case (int)770: case (int)771: {
					HX_STACK_LINE(250)
					::snow::_system::input::Input tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(251)
					::String tmp2 = _event->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(252)
					bool tmp3 = (_event->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(252)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(252)
					if ((tmp3)){
						HX_STACK_LINE(252)
						tmp4 = (int)0;
					}
					else{
						HX_STACK_LINE(252)
						tmp4 = _event->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );
					}
					HX_STACK_LINE(253)
					bool tmp5 = (_event->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(253)
					int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(253)
					if ((tmp5)){
						HX_STACK_LINE(253)
						tmp6 = (int)0;
					}
					else{
						HX_STACK_LINE(253)
						tmp6 = _event->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					}
					HX_STACK_LINE(254)
					bool tmp7 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)770);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(254)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(254)
					if ((tmp7)){
						HX_STACK_LINE(254)
						tmp8 = (int)1;
					}
					else{
						HX_STACK_LINE(254)
						tmp8 = (int)2;
					}
					HX_STACK_LINE(255)
					Dynamic tmp9 = _input->__Field(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(256)
					Dynamic tmp10 = _input->__Field(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(250)
					tmp1->__Field(HX_HCSTRING("dispatch_text_event","\x6d","\x80","\x5a","\x1c"), hx::paccDynamic )(tmp2,tmp4,tmp6,tmp8,tmp9,tmp10);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handle_key_ev,(void))

Dynamic Input_obj::get_key_mod_state( Dynamic _event){
	HX_STACK_FRAME("snow.modules.sdl.Input","get_key_mod_state",0xce7ca4c2,"snow.modules.sdl.Input.get_key_mod_state","snow/modules/sdl/Input.hx",265,0xc2f5207c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(267)
	bool tmp = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)769);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
	if ((tmp1)){
		HX_STACK_LINE(267)
		tmp2 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)768);
	}
	else{
		HX_STACK_LINE(267)
		tmp2 = true;
	}
	HX_STACK_LINE(267)
	if ((tmp2)){
		HX_STACK_LINE(269)
		int tmp3 = _event->__Field(HX_HCSTRING("keysym","\xc8","\xb0","\xfa","\x3f"), hx::paccDynamic )->__Field(HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(269)
		int mod_value = tmp3;		HX_STACK_VAR(mod_value,"mod_value");
		HX_STACK_LINE(273)
		bool tmp4 = (mod_value == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		bool tmp5 = (mod_value == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		bool tmp6 = (mod_value == (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(277)
		bool tmp7 = (mod_value == (int)64);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(278)
		bool tmp8 = (mod_value == (int)128);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(279)
		bool tmp9 = (mod_value == (int)256);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(280)
		bool tmp10 = (mod_value == (int)512);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(281)
		bool tmp11 = (mod_value == (int)1024);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(282)
		bool tmp12 = (mod_value == (int)2048);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(284)
		bool tmp13 = (mod_value == (int)4096);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(285)
		bool tmp14 = (mod_value == (int)8192);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(286)
		bool tmp15 = (mod_value == (int)16384);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(288)
		bool tmp16 = (mod_value == (int)64);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(288)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(288)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(288)
		if ((tmp17)){
			HX_STACK_LINE(288)
			tmp18 = (mod_value == (int)128);
		}
		else{
			HX_STACK_LINE(288)
			tmp18 = true;
		}
		HX_STACK_LINE(289)
		bool tmp19 = (mod_value == (int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(289)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(289)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(289)
		if ((tmp20)){
			HX_STACK_LINE(289)
			tmp21 = (mod_value == (int)2);
		}
		else{
			HX_STACK_LINE(289)
			tmp21 = true;
		}
		HX_STACK_LINE(290)
		bool tmp22 = (mod_value == (int)256);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(290)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(290)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(290)
		if ((tmp23)){
			HX_STACK_LINE(290)
			tmp24 = (mod_value == (int)512);
		}
		else{
			HX_STACK_LINE(290)
			tmp24 = true;
		}
		HX_STACK_LINE(291)
		bool tmp25 = (mod_value == (int)1024);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(291)
		bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(291)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(291)
		if ((tmp26)){
			HX_STACK_LINE(291)
			tmp27 = (mod_value == (int)2048);
		}
		else{
			HX_STACK_LINE(291)
			tmp27 = true;
		}
		struct _Function_2_1{
			inline static Dynamic Block( bool &tmp5,bool &tmp6,bool &tmp13,bool &tmp9,bool &tmp11,bool &tmp4,bool &tmp10,bool &tmp21,bool &tmp24,bool &tmp15,bool &tmp7,bool &tmp8,bool &tmp12,bool &tmp18,bool &tmp27,bool &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Input.hx",271,0xc2f5207c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49") , tmp4,false);
					__result->Add(HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa") , tmp5,false);
					__result->Add(HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10") , tmp6,false);
					__result->Add(HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71") , tmp7,false);
					__result->Add(HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5") , tmp8,false);
					__result->Add(HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47") , tmp9,false);
					__result->Add(HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b") , tmp10,false);
					__result->Add(HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77") , tmp11,false);
					__result->Add(HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec") , tmp12,false);
					__result->Add(HX_HCSTRING("num","\x46","\xde","\x53","\x00") , tmp13,false);
					__result->Add(HX_HCSTRING("caps","\x21","\x1c","\xba","\x41") , tmp14,false);
					__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , tmp15,false);
					__result->Add(HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41") , tmp18,false);
					__result->Add(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c") , tmp21,false);
					__result->Add(HX_HCSTRING("alt","\x29","\xf9","\x49","\x00") , tmp24,false);
					__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , tmp27,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(271)
		Dynamic tmp28 = _Function_2_1::Block(tmp5,tmp6,tmp13,tmp9,tmp11,tmp4,tmp10,tmp21,tmp24,tmp15,tmp7,tmp8,tmp12,tmp18,tmp27,tmp14);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(271)
		return tmp28;
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/modules/sdl/Input.hx",298,0xc2f5207c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49") , true,false);
					__result->Add(HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa") , false,false);
					__result->Add(HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10") , false,false);
					__result->Add(HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71") , false,false);
					__result->Add(HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5") , false,false);
					__result->Add(HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47") , false,false);
					__result->Add(HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b") , false,false);
					__result->Add(HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77") , false,false);
					__result->Add(HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec") , false,false);
					__result->Add(HX_HCSTRING("num","\x46","\xde","\x53","\x00") , false,false);
					__result->Add(HX_HCSTRING("caps","\x21","\x1c","\xba","\x41") , false,false);
					__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , false,false);
					__result->Add(HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41") , false,false);
					__result->Add(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c") , false,false);
					__result->Add(HX_HCSTRING("alt","\x29","\xf9","\x49","\x00") , false,false);
					__result->Add(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(298)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		return tmp3;
	}
	HX_STACK_LINE(267)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,get_key_mod_state,return )


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handle_key_ev") ) { return handle_key_ev_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handle_mouse_ev") ) { return handle_mouse_ev_dyn(); }
		if (HX_FIELD_EQ(inName,"handle_touch_ev") ) { return handle_touch_ev_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_key_mod_state") ) { return get_key_mod_state_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handle_joystick_ev") ) { return handle_joystick_ev_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"handle_controller_ev") ) { return handle_controller_ev_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("handle_controller_ev","\x5d","\xa9","\xc5","\x84"),
	HX_HCSTRING("handle_joystick_ev","\xfd","\xb8","\x18","\x29"),
	HX_HCSTRING("handle_mouse_ev","\x42","\xbc","\x58","\x18"),
	HX_HCSTRING("handle_touch_ev","\xe8","\x36","\x4c","\x74"),
	HX_HCSTRING("handle_key_ev","\x48","\x45","\x86","\xf9"),
	HX_HCSTRING("get_key_mod_state","\x0b","\x3f","\x2c","\xbf"),
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
	__mClass->mName = HX_HCSTRING("snow.modules.sdl.Input","\x65","\x7c","\xa3","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
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
} // end namespace modules
} // end namespace sdl
