#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_snow_system_input_Keycodes
#include <snow/system/input/Keycodes.h>
#endif
#ifndef INCLUDED_snow_system_input_Scancodes
#include <snow/system/input/Scancodes.h>
#endif
namespace snow{
namespace _system{
namespace input{

Void Keycodes_obj::__construct()
{
	return null();
}

//Keycodes_obj::~Keycodes_obj() { }

Dynamic Keycodes_obj::__CreateEmpty() { return  new Keycodes_obj; }
hx::ObjectPtr< Keycodes_obj > Keycodes_obj::__new()
{  hx::ObjectPtr< Keycodes_obj > _result_ = new Keycodes_obj();
	_result_->__construct();
	return _result_;}

Dynamic Keycodes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Keycodes_obj > _result_ = new Keycodes_obj();
	_result_->__construct();
	return _result_;}

int Keycodes_obj::from_scan( int scancode){
	HX_STACK_FRAME("snow.system.input.Keycodes","from_scan",0x035368a3,"snow.system.input.Keycodes.from_scan","snow/system/input/Keycodes.hx",9,0x16a6697e)
	HX_STACK_ARG(scancode,"scancode")
	HX_STACK_LINE(10)
	int tmp = scancode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	int tmp1 = ::snow::_system::input::Scancodes_obj::MASK;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keycodes_obj,from_scan,return )

int Keycodes_obj::to_scan( int keycode){
	HX_STACK_FRAME("snow.system.input.Keycodes","to_scan",0xed3afcb2,"snow.system.input.Keycodes.to_scan","snow/system/input/Keycodes.hx",16,0x16a6697e)
	HX_STACK_ARG(keycode,"keycode")
	HX_STACK_LINE(20)
	int tmp = keycode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	int tmp1 = ::snow::_system::input::Scancodes_obj::MASK;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	if ((tmp3)){
		HX_STACK_LINE(21)
		int tmp4 = keycode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		int tmp5 = ::snow::_system::input::Scancodes_obj::MASK;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		int tmp6 = ~(int)(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(21)
		int tmp7 = (int(tmp4) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(21)
		return tmp7;
	}
	HX_STACK_LINE(26)
	int tmp4 = keycode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	switch( (int)(tmp4)){
		case (int)13: {
			HX_STACK_LINE(27)
			int tmp5 = ::snow::_system::input::Scancodes_obj::enter;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			return tmp5;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(28)
			int tmp5 = ::snow::_system::input::Scancodes_obj::escape;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(28)
			return tmp5;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(29)
			int tmp5 = ::snow::_system::input::Scancodes_obj::backspace;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			return tmp5;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(30)
			int tmp5 = ::snow::_system::input::Scancodes_obj::tab;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			return tmp5;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(31)
			int tmp5 = ::snow::_system::input::Scancodes_obj::space;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			return tmp5;
		}
		;break;
		case (int)47: {
			HX_STACK_LINE(32)
			int tmp5 = ::snow::_system::input::Scancodes_obj::slash;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(32)
			return tmp5;
		}
		;break;
		case (int)48: {
			HX_STACK_LINE(33)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_0;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			return tmp5;
		}
		;break;
		case (int)49: {
			HX_STACK_LINE(34)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(34)
			return tmp5;
		}
		;break;
		case (int)50: {
			HX_STACK_LINE(35)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			return tmp5;
		}
		;break;
		case (int)51: {
			HX_STACK_LINE(36)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			return tmp5;
		}
		;break;
		case (int)52: {
			HX_STACK_LINE(37)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			return tmp5;
		}
		;break;
		case (int)53: {
			HX_STACK_LINE(38)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			return tmp5;
		}
		;break;
		case (int)54: {
			HX_STACK_LINE(39)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_6;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			return tmp5;
		}
		;break;
		case (int)55: {
			HX_STACK_LINE(40)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_7;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			return tmp5;
		}
		;break;
		case (int)56: {
			HX_STACK_LINE(41)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_8;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			return tmp5;
		}
		;break;
		case (int)57: {
			HX_STACK_LINE(42)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_9;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			return tmp5;
		}
		;break;
		case (int)59: {
			HX_STACK_LINE(43)
			int tmp5 = ::snow::_system::input::Scancodes_obj::semicolon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			return tmp5;
		}
		;break;
		case (int)61: {
			HX_STACK_LINE(44)
			int tmp5 = ::snow::_system::input::Scancodes_obj::equals;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			return tmp5;
		}
		;break;
		case (int)91: {
			HX_STACK_LINE(45)
			int tmp5 = ::snow::_system::input::Scancodes_obj::leftbracket;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			return tmp5;
		}
		;break;
		case (int)92: {
			HX_STACK_LINE(46)
			int tmp5 = ::snow::_system::input::Scancodes_obj::backslash;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			return tmp5;
		}
		;break;
		case (int)93: {
			HX_STACK_LINE(47)
			int tmp5 = ::snow::_system::input::Scancodes_obj::rightbracket;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			return tmp5;
		}
		;break;
		case (int)96: {
			HX_STACK_LINE(48)
			int tmp5 = ::snow::_system::input::Scancodes_obj::grave;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			return tmp5;
		}
		;break;
		case (int)97: {
			HX_STACK_LINE(49)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			return tmp5;
		}
		;break;
		case (int)98: {
			HX_STACK_LINE(50)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_b;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			return tmp5;
		}
		;break;
		case (int)99: {
			HX_STACK_LINE(51)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_c;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			return tmp5;
		}
		;break;
		case (int)100: {
			HX_STACK_LINE(52)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_d;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			return tmp5;
		}
		;break;
		case (int)101: {
			HX_STACK_LINE(53)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_e;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			return tmp5;
		}
		;break;
		case (int)102: {
			HX_STACK_LINE(54)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_f;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			return tmp5;
		}
		;break;
		case (int)103: {
			HX_STACK_LINE(55)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			return tmp5;
		}
		;break;
		case (int)104: {
			HX_STACK_LINE(56)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_h;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			return tmp5;
		}
		;break;
		case (int)105: {
			HX_STACK_LINE(57)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			return tmp5;
		}
		;break;
		case (int)106: {
			HX_STACK_LINE(58)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_j;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			return tmp5;
		}
		;break;
		case (int)107: {
			HX_STACK_LINE(59)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_k;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			return tmp5;
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(60)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_l;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			return tmp5;
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(61)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_m;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			return tmp5;
		}
		;break;
		case (int)110: {
			HX_STACK_LINE(62)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			return tmp5;
		}
		;break;
		case (int)111: {
			HX_STACK_LINE(63)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_o;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			return tmp5;
		}
		;break;
		case (int)112: {
			HX_STACK_LINE(64)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_p;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			return tmp5;
		}
		;break;
		case (int)113: {
			HX_STACK_LINE(65)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_q;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			return tmp5;
		}
		;break;
		case (int)114: {
			HX_STACK_LINE(66)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_r;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			return tmp5;
		}
		;break;
		case (int)115: {
			HX_STACK_LINE(67)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			return tmp5;
		}
		;break;
		case (int)116: {
			HX_STACK_LINE(68)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			return tmp5;
		}
		;break;
		case (int)117: {
			HX_STACK_LINE(69)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_u;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			return tmp5;
		}
		;break;
		case (int)118: {
			HX_STACK_LINE(70)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_v;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			return tmp5;
		}
		;break;
		case (int)119: {
			HX_STACK_LINE(71)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_w;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			return tmp5;
		}
		;break;
		case (int)120: {
			HX_STACK_LINE(72)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			return tmp5;
		}
		;break;
		case (int)121: {
			HX_STACK_LINE(73)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			return tmp5;
		}
		;break;
		case (int)122: {
			HX_STACK_LINE(74)
			int tmp5 = ::snow::_system::input::Scancodes_obj::key_z;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			return tmp5;
		}
		;break;
	}
	HX_STACK_LINE(106)
	int tmp5 = ::snow::_system::input::Scancodes_obj::unknown;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(106)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keycodes_obj,to_scan,return )

::String Keycodes_obj::name( int keycode){
	HX_STACK_FRAME("snow.system.input.Keycodes","name",0xf179c2fa,"snow.system.input.Keycodes.name","snow/system/input/Keycodes.hx",111,0x16a6697e)
	HX_STACK_ARG(keycode,"keycode")
	HX_STACK_LINE(116)
	int tmp = keycode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1 = ::snow::_system::input::Scancodes_obj::MASK;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	if ((tmp3)){
		HX_STACK_LINE(117)
		int tmp4 = keycode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		int tmp5 = ::snow::_system::input::Scancodes_obj::MASK;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		int tmp6 = ~(int)(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		int tmp7 = (int(tmp4) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		::String tmp8 = ::snow::_system::input::Scancodes_obj::name(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		return tmp8;
	}
	HX_STACK_LINE(120)
	int tmp4 = keycode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	switch( (int)(tmp4)){
		case (int)13: {
			HX_STACK_LINE(122)
			int tmp5 = ::snow::_system::input::Scancodes_obj::enter;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			::String tmp6 = ::snow::_system::input::Scancodes_obj::name(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			return tmp6;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(123)
			int tmp5 = ::snow::_system::input::Scancodes_obj::escape;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			::String tmp6 = ::snow::_system::input::Scancodes_obj::name(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			return tmp6;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(124)
			int tmp5 = ::snow::_system::input::Scancodes_obj::backspace;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			::String tmp6 = ::snow::_system::input::Scancodes_obj::name(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			return tmp6;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(125)
			int tmp5 = ::snow::_system::input::Scancodes_obj::tab;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			::String tmp6 = ::snow::_system::input::Scancodes_obj::name(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			return tmp6;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(126)
			int tmp5 = ::snow::_system::input::Scancodes_obj::space;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			::String tmp6 = ::snow::_system::input::Scancodes_obj::name(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			return tmp6;
		}
		;break;
		case (int)127: {
			HX_STACK_LINE(127)
			int tmp5 = ::snow::_system::input::Scancodes_obj::_delete;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			::String tmp6 = ::snow::_system::input::Scancodes_obj::name(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(127)
			return tmp6;
		}
		;break;
		default: {
			HX_STACK_LINE(131)
			::haxe::Utf8 tmp5 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			::haxe::Utf8 decoder = tmp5;		HX_STACK_VAR(decoder,"decoder");
			HX_STACK_LINE(132)
			int tmp6 = keycode;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(132)
			decoder->addChar(tmp6);
			HX_STACK_LINE(134)
			::String tmp7 = decoder->toString();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			return tmp7;
		}
	}
	HX_STACK_LINE(120)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keycodes_obj,name,return )

int Keycodes_obj::unknown;

int Keycodes_obj::enter;

int Keycodes_obj::escape;

int Keycodes_obj::backspace;

int Keycodes_obj::tab;

int Keycodes_obj::space;

int Keycodes_obj::exclaim;

int Keycodes_obj::quotedbl;

int Keycodes_obj::hash;

int Keycodes_obj::percent;

int Keycodes_obj::dollar;

int Keycodes_obj::ampersand;

int Keycodes_obj::quote;

int Keycodes_obj::leftparen;

int Keycodes_obj::rightparen;

int Keycodes_obj::asterisk;

int Keycodes_obj::plus;

int Keycodes_obj::comma;

int Keycodes_obj::minus;

int Keycodes_obj::period;

int Keycodes_obj::slash;

int Keycodes_obj::key_0;

int Keycodes_obj::key_1;

int Keycodes_obj::key_2;

int Keycodes_obj::key_3;

int Keycodes_obj::key_4;

int Keycodes_obj::key_5;

int Keycodes_obj::key_6;

int Keycodes_obj::key_7;

int Keycodes_obj::key_8;

int Keycodes_obj::key_9;

int Keycodes_obj::colon;

int Keycodes_obj::semicolon;

int Keycodes_obj::less;

int Keycodes_obj::equals;

int Keycodes_obj::greater;

int Keycodes_obj::question;

int Keycodes_obj::at;

int Keycodes_obj::leftbracket;

int Keycodes_obj::backslash;

int Keycodes_obj::rightbracket;

int Keycodes_obj::caret;

int Keycodes_obj::underscore;

int Keycodes_obj::backquote;

int Keycodes_obj::key_a;

int Keycodes_obj::key_b;

int Keycodes_obj::key_c;

int Keycodes_obj::key_d;

int Keycodes_obj::key_e;

int Keycodes_obj::key_f;

int Keycodes_obj::key_g;

int Keycodes_obj::key_h;

int Keycodes_obj::key_i;

int Keycodes_obj::key_j;

int Keycodes_obj::key_k;

int Keycodes_obj::key_l;

int Keycodes_obj::key_m;

int Keycodes_obj::key_n;

int Keycodes_obj::key_o;

int Keycodes_obj::key_p;

int Keycodes_obj::key_q;

int Keycodes_obj::key_r;

int Keycodes_obj::key_s;

int Keycodes_obj::key_t;

int Keycodes_obj::key_u;

int Keycodes_obj::key_v;

int Keycodes_obj::key_w;

int Keycodes_obj::key_x;

int Keycodes_obj::key_y;

int Keycodes_obj::key_z;

int Keycodes_obj::capslock;

int Keycodes_obj::f1;

int Keycodes_obj::f2;

int Keycodes_obj::f3;

int Keycodes_obj::f4;

int Keycodes_obj::f5;

int Keycodes_obj::f6;

int Keycodes_obj::f7;

int Keycodes_obj::f8;

int Keycodes_obj::f9;

int Keycodes_obj::f10;

int Keycodes_obj::f11;

int Keycodes_obj::f12;

int Keycodes_obj::printscreen;

int Keycodes_obj::scrolllock;

int Keycodes_obj::pause;

int Keycodes_obj::insert;

int Keycodes_obj::home;

int Keycodes_obj::pageup;

int Keycodes_obj::_delete;

int Keycodes_obj::end;

int Keycodes_obj::pagedown;

int Keycodes_obj::right;

int Keycodes_obj::left;

int Keycodes_obj::down;

int Keycodes_obj::up;

int Keycodes_obj::numlockclear;

int Keycodes_obj::kp_divide;

int Keycodes_obj::kp_multiply;

int Keycodes_obj::kp_minus;

int Keycodes_obj::kp_plus;

int Keycodes_obj::kp_enter;

int Keycodes_obj::kp_1;

int Keycodes_obj::kp_2;

int Keycodes_obj::kp_3;

int Keycodes_obj::kp_4;

int Keycodes_obj::kp_5;

int Keycodes_obj::kp_6;

int Keycodes_obj::kp_7;

int Keycodes_obj::kp_8;

int Keycodes_obj::kp_9;

int Keycodes_obj::kp_0;

int Keycodes_obj::kp_period;

int Keycodes_obj::application;

int Keycodes_obj::power;

int Keycodes_obj::kp_equals;

int Keycodes_obj::f13;

int Keycodes_obj::f14;

int Keycodes_obj::f15;

int Keycodes_obj::f16;

int Keycodes_obj::f17;

int Keycodes_obj::f18;

int Keycodes_obj::f19;

int Keycodes_obj::f20;

int Keycodes_obj::f21;

int Keycodes_obj::f22;

int Keycodes_obj::f23;

int Keycodes_obj::f24;

int Keycodes_obj::execute;

int Keycodes_obj::help;

int Keycodes_obj::menu;

int Keycodes_obj::select;

int Keycodes_obj::stop;

int Keycodes_obj::again;

int Keycodes_obj::undo;

int Keycodes_obj::cut;

int Keycodes_obj::copy;

int Keycodes_obj::paste;

int Keycodes_obj::find;

int Keycodes_obj::mute;

int Keycodes_obj::volumeup;

int Keycodes_obj::volumedown;

int Keycodes_obj::kp_comma;

int Keycodes_obj::kp_equalsas400;

int Keycodes_obj::alterase;

int Keycodes_obj::sysreq;

int Keycodes_obj::cancel;

int Keycodes_obj::clear;

int Keycodes_obj::prior;

int Keycodes_obj::return2;

int Keycodes_obj::separator;

int Keycodes_obj::out;

int Keycodes_obj::oper;

int Keycodes_obj::clearagain;

int Keycodes_obj::crsel;

int Keycodes_obj::exsel;

int Keycodes_obj::kp_00;

int Keycodes_obj::kp_000;

int Keycodes_obj::thousandsseparator;

int Keycodes_obj::decimalseparator;

int Keycodes_obj::currencyunit;

int Keycodes_obj::currencysubunit;

int Keycodes_obj::kp_leftparen;

int Keycodes_obj::kp_rightparen;

int Keycodes_obj::kp_leftbrace;

int Keycodes_obj::kp_rightbrace;

int Keycodes_obj::kp_tab;

int Keycodes_obj::kp_backspace;

int Keycodes_obj::kp_a;

int Keycodes_obj::kp_b;

int Keycodes_obj::kp_c;

int Keycodes_obj::kp_d;

int Keycodes_obj::kp_e;

int Keycodes_obj::kp_f;

int Keycodes_obj::kp_xor;

int Keycodes_obj::kp_power;

int Keycodes_obj::kp_percent;

int Keycodes_obj::kp_less;

int Keycodes_obj::kp_greater;

int Keycodes_obj::kp_ampersand;

int Keycodes_obj::kp_dblampersand;

int Keycodes_obj::kp_verticalbar;

int Keycodes_obj::kp_dblverticalbar;

int Keycodes_obj::kp_colon;

int Keycodes_obj::kp_hash;

int Keycodes_obj::kp_space;

int Keycodes_obj::kp_at;

int Keycodes_obj::kp_exclam;

int Keycodes_obj::kp_memstore;

int Keycodes_obj::kp_memrecall;

int Keycodes_obj::kp_memclear;

int Keycodes_obj::kp_memadd;

int Keycodes_obj::kp_memsubtract;

int Keycodes_obj::kp_memmultiply;

int Keycodes_obj::kp_memdivide;

int Keycodes_obj::kp_plusminus;

int Keycodes_obj::kp_clear;

int Keycodes_obj::kp_clearentry;

int Keycodes_obj::kp_binary;

int Keycodes_obj::kp_octal;

int Keycodes_obj::kp_decimal;

int Keycodes_obj::kp_hexadecimal;

int Keycodes_obj::lctrl;

int Keycodes_obj::lshift;

int Keycodes_obj::lalt;

int Keycodes_obj::lmeta;

int Keycodes_obj::rctrl;

int Keycodes_obj::rshift;

int Keycodes_obj::ralt;

int Keycodes_obj::rmeta;

int Keycodes_obj::mode;

int Keycodes_obj::audionext;

int Keycodes_obj::audioprev;

int Keycodes_obj::audiostop;

int Keycodes_obj::audioplay;

int Keycodes_obj::audiomute;

int Keycodes_obj::mediaselect;

int Keycodes_obj::www;

int Keycodes_obj::mail;

int Keycodes_obj::calculator;

int Keycodes_obj::computer;

int Keycodes_obj::ac_search;

int Keycodes_obj::ac_home;

int Keycodes_obj::ac_back;

int Keycodes_obj::ac_forward;

int Keycodes_obj::ac_stop;

int Keycodes_obj::ac_refresh;

int Keycodes_obj::ac_bookmarks;

int Keycodes_obj::brightnessdown;

int Keycodes_obj::brightnessup;

int Keycodes_obj::displayswitch;

int Keycodes_obj::kbdillumtoggle;

int Keycodes_obj::kbdillumdown;

int Keycodes_obj::kbdillumup;

int Keycodes_obj::eject;

int Keycodes_obj::sleep;


Keycodes_obj::Keycodes_obj()
{
}

bool Keycodes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { outValue = at; return true;  }
		if (HX_FIELD_EQ(inName,"f1") ) { outValue = f1; return true;  }
		if (HX_FIELD_EQ(inName,"f2") ) { outValue = f2; return true;  }
		if (HX_FIELD_EQ(inName,"f3") ) { outValue = f3; return true;  }
		if (HX_FIELD_EQ(inName,"f4") ) { outValue = f4; return true;  }
		if (HX_FIELD_EQ(inName,"f5") ) { outValue = f5; return true;  }
		if (HX_FIELD_EQ(inName,"f6") ) { outValue = f6; return true;  }
		if (HX_FIELD_EQ(inName,"f7") ) { outValue = f7; return true;  }
		if (HX_FIELD_EQ(inName,"f8") ) { outValue = f8; return true;  }
		if (HX_FIELD_EQ(inName,"f9") ) { outValue = f9; return true;  }
		if (HX_FIELD_EQ(inName,"up") ) { outValue = up; return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tab") ) { outValue = tab; return true;  }
		if (HX_FIELD_EQ(inName,"f10") ) { outValue = f10; return true;  }
		if (HX_FIELD_EQ(inName,"f11") ) { outValue = f11; return true;  }
		if (HX_FIELD_EQ(inName,"f12") ) { outValue = f12; return true;  }
		if (HX_FIELD_EQ(inName,"end") ) { outValue = end; return true;  }
		if (HX_FIELD_EQ(inName,"f13") ) { outValue = f13; return true;  }
		if (HX_FIELD_EQ(inName,"f14") ) { outValue = f14; return true;  }
		if (HX_FIELD_EQ(inName,"f15") ) { outValue = f15; return true;  }
		if (HX_FIELD_EQ(inName,"f16") ) { outValue = f16; return true;  }
		if (HX_FIELD_EQ(inName,"f17") ) { outValue = f17; return true;  }
		if (HX_FIELD_EQ(inName,"f18") ) { outValue = f18; return true;  }
		if (HX_FIELD_EQ(inName,"f19") ) { outValue = f19; return true;  }
		if (HX_FIELD_EQ(inName,"f20") ) { outValue = f20; return true;  }
		if (HX_FIELD_EQ(inName,"f21") ) { outValue = f21; return true;  }
		if (HX_FIELD_EQ(inName,"f22") ) { outValue = f22; return true;  }
		if (HX_FIELD_EQ(inName,"f23") ) { outValue = f23; return true;  }
		if (HX_FIELD_EQ(inName,"f24") ) { outValue = f24; return true;  }
		if (HX_FIELD_EQ(inName,"cut") ) { outValue = cut; return true;  }
		if (HX_FIELD_EQ(inName,"out") ) { outValue = out; return true;  }
		if (HX_FIELD_EQ(inName,"www") ) { outValue = www; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { outValue = name_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hash") ) { outValue = hash; return true;  }
		if (HX_FIELD_EQ(inName,"plus") ) { outValue = plus; return true;  }
		if (HX_FIELD_EQ(inName,"less") ) { outValue = less; return true;  }
		if (HX_FIELD_EQ(inName,"home") ) { outValue = home; return true;  }
		if (HX_FIELD_EQ(inName,"left") ) { outValue = left; return true;  }
		if (HX_FIELD_EQ(inName,"down") ) { outValue = down; return true;  }
		if (HX_FIELD_EQ(inName,"kp_1") ) { outValue = kp_1; return true;  }
		if (HX_FIELD_EQ(inName,"kp_2") ) { outValue = kp_2; return true;  }
		if (HX_FIELD_EQ(inName,"kp_3") ) { outValue = kp_3; return true;  }
		if (HX_FIELD_EQ(inName,"kp_4") ) { outValue = kp_4; return true;  }
		if (HX_FIELD_EQ(inName,"kp_5") ) { outValue = kp_5; return true;  }
		if (HX_FIELD_EQ(inName,"kp_6") ) { outValue = kp_6; return true;  }
		if (HX_FIELD_EQ(inName,"kp_7") ) { outValue = kp_7; return true;  }
		if (HX_FIELD_EQ(inName,"kp_8") ) { outValue = kp_8; return true;  }
		if (HX_FIELD_EQ(inName,"kp_9") ) { outValue = kp_9; return true;  }
		if (HX_FIELD_EQ(inName,"kp_0") ) { outValue = kp_0; return true;  }
		if (HX_FIELD_EQ(inName,"help") ) { outValue = help; return true;  }
		if (HX_FIELD_EQ(inName,"menu") ) { outValue = menu; return true;  }
		if (HX_FIELD_EQ(inName,"stop") ) { outValue = stop; return true;  }
		if (HX_FIELD_EQ(inName,"undo") ) { outValue = undo; return true;  }
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy; return true;  }
		if (HX_FIELD_EQ(inName,"find") ) { outValue = find; return true;  }
		if (HX_FIELD_EQ(inName,"mute") ) { outValue = mute; return true;  }
		if (HX_FIELD_EQ(inName,"oper") ) { outValue = oper; return true;  }
		if (HX_FIELD_EQ(inName,"kp_a") ) { outValue = kp_a; return true;  }
		if (HX_FIELD_EQ(inName,"kp_b") ) { outValue = kp_b; return true;  }
		if (HX_FIELD_EQ(inName,"kp_c") ) { outValue = kp_c; return true;  }
		if (HX_FIELD_EQ(inName,"kp_d") ) { outValue = kp_d; return true;  }
		if (HX_FIELD_EQ(inName,"kp_e") ) { outValue = kp_e; return true;  }
		if (HX_FIELD_EQ(inName,"kp_f") ) { outValue = kp_f; return true;  }
		if (HX_FIELD_EQ(inName,"lalt") ) { outValue = lalt; return true;  }
		if (HX_FIELD_EQ(inName,"ralt") ) { outValue = ralt; return true;  }
		if (HX_FIELD_EQ(inName,"mode") ) { outValue = mode; return true;  }
		if (HX_FIELD_EQ(inName,"mail") ) { outValue = mail; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { outValue = enter; return true;  }
		if (HX_FIELD_EQ(inName,"space") ) { outValue = space; return true;  }
		if (HX_FIELD_EQ(inName,"quote") ) { outValue = quote; return true;  }
		if (HX_FIELD_EQ(inName,"comma") ) { outValue = comma; return true;  }
		if (HX_FIELD_EQ(inName,"minus") ) { outValue = minus; return true;  }
		if (HX_FIELD_EQ(inName,"slash") ) { outValue = slash; return true;  }
		if (HX_FIELD_EQ(inName,"key_0") ) { outValue = key_0; return true;  }
		if (HX_FIELD_EQ(inName,"key_1") ) { outValue = key_1; return true;  }
		if (HX_FIELD_EQ(inName,"key_2") ) { outValue = key_2; return true;  }
		if (HX_FIELD_EQ(inName,"key_3") ) { outValue = key_3; return true;  }
		if (HX_FIELD_EQ(inName,"key_4") ) { outValue = key_4; return true;  }
		if (HX_FIELD_EQ(inName,"key_5") ) { outValue = key_5; return true;  }
		if (HX_FIELD_EQ(inName,"key_6") ) { outValue = key_6; return true;  }
		if (HX_FIELD_EQ(inName,"key_7") ) { outValue = key_7; return true;  }
		if (HX_FIELD_EQ(inName,"key_8") ) { outValue = key_8; return true;  }
		if (HX_FIELD_EQ(inName,"key_9") ) { outValue = key_9; return true;  }
		if (HX_FIELD_EQ(inName,"colon") ) { outValue = colon; return true;  }
		if (HX_FIELD_EQ(inName,"caret") ) { outValue = caret; return true;  }
		if (HX_FIELD_EQ(inName,"key_a") ) { outValue = key_a; return true;  }
		if (HX_FIELD_EQ(inName,"key_b") ) { outValue = key_b; return true;  }
		if (HX_FIELD_EQ(inName,"key_c") ) { outValue = key_c; return true;  }
		if (HX_FIELD_EQ(inName,"key_d") ) { outValue = key_d; return true;  }
		if (HX_FIELD_EQ(inName,"key_e") ) { outValue = key_e; return true;  }
		if (HX_FIELD_EQ(inName,"key_f") ) { outValue = key_f; return true;  }
		if (HX_FIELD_EQ(inName,"key_g") ) { outValue = key_g; return true;  }
		if (HX_FIELD_EQ(inName,"key_h") ) { outValue = key_h; return true;  }
		if (HX_FIELD_EQ(inName,"key_i") ) { outValue = key_i; return true;  }
		if (HX_FIELD_EQ(inName,"key_j") ) { outValue = key_j; return true;  }
		if (HX_FIELD_EQ(inName,"key_k") ) { outValue = key_k; return true;  }
		if (HX_FIELD_EQ(inName,"key_l") ) { outValue = key_l; return true;  }
		if (HX_FIELD_EQ(inName,"key_m") ) { outValue = key_m; return true;  }
		if (HX_FIELD_EQ(inName,"key_n") ) { outValue = key_n; return true;  }
		if (HX_FIELD_EQ(inName,"key_o") ) { outValue = key_o; return true;  }
		if (HX_FIELD_EQ(inName,"key_p") ) { outValue = key_p; return true;  }
		if (HX_FIELD_EQ(inName,"key_q") ) { outValue = key_q; return true;  }
		if (HX_FIELD_EQ(inName,"key_r") ) { outValue = key_r; return true;  }
		if (HX_FIELD_EQ(inName,"key_s") ) { outValue = key_s; return true;  }
		if (HX_FIELD_EQ(inName,"key_t") ) { outValue = key_t; return true;  }
		if (HX_FIELD_EQ(inName,"key_u") ) { outValue = key_u; return true;  }
		if (HX_FIELD_EQ(inName,"key_v") ) { outValue = key_v; return true;  }
		if (HX_FIELD_EQ(inName,"key_w") ) { outValue = key_w; return true;  }
		if (HX_FIELD_EQ(inName,"key_x") ) { outValue = key_x; return true;  }
		if (HX_FIELD_EQ(inName,"key_y") ) { outValue = key_y; return true;  }
		if (HX_FIELD_EQ(inName,"key_z") ) { outValue = key_z; return true;  }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause; return true;  }
		if (HX_FIELD_EQ(inName,"right") ) { outValue = right; return true;  }
		if (HX_FIELD_EQ(inName,"power") ) { outValue = power; return true;  }
		if (HX_FIELD_EQ(inName,"again") ) { outValue = again; return true;  }
		if (HX_FIELD_EQ(inName,"paste") ) { outValue = paste; return true;  }
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear; return true;  }
		if (HX_FIELD_EQ(inName,"prior") ) { outValue = prior; return true;  }
		if (HX_FIELD_EQ(inName,"crsel") ) { outValue = crsel; return true;  }
		if (HX_FIELD_EQ(inName,"exsel") ) { outValue = exsel; return true;  }
		if (HX_FIELD_EQ(inName,"kp_00") ) { outValue = kp_00; return true;  }
		if (HX_FIELD_EQ(inName,"kp_at") ) { outValue = kp_at; return true;  }
		if (HX_FIELD_EQ(inName,"lctrl") ) { outValue = lctrl; return true;  }
		if (HX_FIELD_EQ(inName,"lmeta") ) { outValue = lmeta; return true;  }
		if (HX_FIELD_EQ(inName,"rctrl") ) { outValue = rctrl; return true;  }
		if (HX_FIELD_EQ(inName,"rmeta") ) { outValue = rmeta; return true;  }
		if (HX_FIELD_EQ(inName,"eject") ) { outValue = eject; return true;  }
		if (HX_FIELD_EQ(inName,"sleep") ) { outValue = sleep; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { outValue = escape; return true;  }
		if (HX_FIELD_EQ(inName,"dollar") ) { outValue = dollar; return true;  }
		if (HX_FIELD_EQ(inName,"period") ) { outValue = period; return true;  }
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals; return true;  }
		if (HX_FIELD_EQ(inName,"insert") ) { outValue = insert; return true;  }
		if (HX_FIELD_EQ(inName,"pageup") ) { outValue = pageup; return true;  }
		if (HX_FIELD_EQ(inName,"delete") ) { outValue = _delete; return true;  }
		if (HX_FIELD_EQ(inName,"select") ) { outValue = select; return true;  }
		if (HX_FIELD_EQ(inName,"sysreq") ) { outValue = sysreq; return true;  }
		if (HX_FIELD_EQ(inName,"cancel") ) { outValue = cancel; return true;  }
		if (HX_FIELD_EQ(inName,"kp_000") ) { outValue = kp_000; return true;  }
		if (HX_FIELD_EQ(inName,"kp_tab") ) { outValue = kp_tab; return true;  }
		if (HX_FIELD_EQ(inName,"kp_xor") ) { outValue = kp_xor; return true;  }
		if (HX_FIELD_EQ(inName,"lshift") ) { outValue = lshift; return true;  }
		if (HX_FIELD_EQ(inName,"rshift") ) { outValue = rshift; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"to_scan") ) { outValue = to_scan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unknown") ) { outValue = unknown; return true;  }
		if (HX_FIELD_EQ(inName,"exclaim") ) { outValue = exclaim; return true;  }
		if (HX_FIELD_EQ(inName,"percent") ) { outValue = percent; return true;  }
		if (HX_FIELD_EQ(inName,"greater") ) { outValue = greater; return true;  }
		if (HX_FIELD_EQ(inName,"kp_plus") ) { outValue = kp_plus; return true;  }
		if (HX_FIELD_EQ(inName,"execute") ) { outValue = execute; return true;  }
		if (HX_FIELD_EQ(inName,"return2") ) { outValue = return2; return true;  }
		if (HX_FIELD_EQ(inName,"kp_less") ) { outValue = kp_less; return true;  }
		if (HX_FIELD_EQ(inName,"kp_hash") ) { outValue = kp_hash; return true;  }
		if (HX_FIELD_EQ(inName,"ac_home") ) { outValue = ac_home; return true;  }
		if (HX_FIELD_EQ(inName,"ac_back") ) { outValue = ac_back; return true;  }
		if (HX_FIELD_EQ(inName,"ac_stop") ) { outValue = ac_stop; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quotedbl") ) { outValue = quotedbl; return true;  }
		if (HX_FIELD_EQ(inName,"asterisk") ) { outValue = asterisk; return true;  }
		if (HX_FIELD_EQ(inName,"question") ) { outValue = question; return true;  }
		if (HX_FIELD_EQ(inName,"capslock") ) { outValue = capslock; return true;  }
		if (HX_FIELD_EQ(inName,"pagedown") ) { outValue = pagedown; return true;  }
		if (HX_FIELD_EQ(inName,"kp_minus") ) { outValue = kp_minus; return true;  }
		if (HX_FIELD_EQ(inName,"kp_enter") ) { outValue = kp_enter; return true;  }
		if (HX_FIELD_EQ(inName,"volumeup") ) { outValue = volumeup; return true;  }
		if (HX_FIELD_EQ(inName,"kp_comma") ) { outValue = kp_comma; return true;  }
		if (HX_FIELD_EQ(inName,"alterase") ) { outValue = alterase; return true;  }
		if (HX_FIELD_EQ(inName,"kp_power") ) { outValue = kp_power; return true;  }
		if (HX_FIELD_EQ(inName,"kp_colon") ) { outValue = kp_colon; return true;  }
		if (HX_FIELD_EQ(inName,"kp_space") ) { outValue = kp_space; return true;  }
		if (HX_FIELD_EQ(inName,"kp_clear") ) { outValue = kp_clear; return true;  }
		if (HX_FIELD_EQ(inName,"kp_octal") ) { outValue = kp_octal; return true;  }
		if (HX_FIELD_EQ(inName,"computer") ) { outValue = computer; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_scan") ) { outValue = from_scan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"backspace") ) { outValue = backspace; return true;  }
		if (HX_FIELD_EQ(inName,"ampersand") ) { outValue = ampersand; return true;  }
		if (HX_FIELD_EQ(inName,"leftparen") ) { outValue = leftparen; return true;  }
		if (HX_FIELD_EQ(inName,"semicolon") ) { outValue = semicolon; return true;  }
		if (HX_FIELD_EQ(inName,"backslash") ) { outValue = backslash; return true;  }
		if (HX_FIELD_EQ(inName,"backquote") ) { outValue = backquote; return true;  }
		if (HX_FIELD_EQ(inName,"kp_divide") ) { outValue = kp_divide; return true;  }
		if (HX_FIELD_EQ(inName,"kp_period") ) { outValue = kp_period; return true;  }
		if (HX_FIELD_EQ(inName,"kp_equals") ) { outValue = kp_equals; return true;  }
		if (HX_FIELD_EQ(inName,"separator") ) { outValue = separator; return true;  }
		if (HX_FIELD_EQ(inName,"kp_exclam") ) { outValue = kp_exclam; return true;  }
		if (HX_FIELD_EQ(inName,"kp_memadd") ) { outValue = kp_memadd; return true;  }
		if (HX_FIELD_EQ(inName,"kp_binary") ) { outValue = kp_binary; return true;  }
		if (HX_FIELD_EQ(inName,"audionext") ) { outValue = audionext; return true;  }
		if (HX_FIELD_EQ(inName,"audioprev") ) { outValue = audioprev; return true;  }
		if (HX_FIELD_EQ(inName,"audiostop") ) { outValue = audiostop; return true;  }
		if (HX_FIELD_EQ(inName,"audioplay") ) { outValue = audioplay; return true;  }
		if (HX_FIELD_EQ(inName,"audiomute") ) { outValue = audiomute; return true;  }
		if (HX_FIELD_EQ(inName,"ac_search") ) { outValue = ac_search; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightparen") ) { outValue = rightparen; return true;  }
		if (HX_FIELD_EQ(inName,"underscore") ) { outValue = underscore; return true;  }
		if (HX_FIELD_EQ(inName,"scrolllock") ) { outValue = scrolllock; return true;  }
		if (HX_FIELD_EQ(inName,"volumedown") ) { outValue = volumedown; return true;  }
		if (HX_FIELD_EQ(inName,"clearagain") ) { outValue = clearagain; return true;  }
		if (HX_FIELD_EQ(inName,"kp_percent") ) { outValue = kp_percent; return true;  }
		if (HX_FIELD_EQ(inName,"kp_greater") ) { outValue = kp_greater; return true;  }
		if (HX_FIELD_EQ(inName,"kp_decimal") ) { outValue = kp_decimal; return true;  }
		if (HX_FIELD_EQ(inName,"calculator") ) { outValue = calculator; return true;  }
		if (HX_FIELD_EQ(inName,"ac_forward") ) { outValue = ac_forward; return true;  }
		if (HX_FIELD_EQ(inName,"ac_refresh") ) { outValue = ac_refresh; return true;  }
		if (HX_FIELD_EQ(inName,"kbdillumup") ) { outValue = kbdillumup; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftbracket") ) { outValue = leftbracket; return true;  }
		if (HX_FIELD_EQ(inName,"printscreen") ) { outValue = printscreen; return true;  }
		if (HX_FIELD_EQ(inName,"kp_multiply") ) { outValue = kp_multiply; return true;  }
		if (HX_FIELD_EQ(inName,"application") ) { outValue = application; return true;  }
		if (HX_FIELD_EQ(inName,"kp_memstore") ) { outValue = kp_memstore; return true;  }
		if (HX_FIELD_EQ(inName,"kp_memclear") ) { outValue = kp_memclear; return true;  }
		if (HX_FIELD_EQ(inName,"mediaselect") ) { outValue = mediaselect; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightbracket") ) { outValue = rightbracket; return true;  }
		if (HX_FIELD_EQ(inName,"numlockclear") ) { outValue = numlockclear; return true;  }
		if (HX_FIELD_EQ(inName,"currencyunit") ) { outValue = currencyunit; return true;  }
		if (HX_FIELD_EQ(inName,"kp_leftparen") ) { outValue = kp_leftparen; return true;  }
		if (HX_FIELD_EQ(inName,"kp_leftbrace") ) { outValue = kp_leftbrace; return true;  }
		if (HX_FIELD_EQ(inName,"kp_backspace") ) { outValue = kp_backspace; return true;  }
		if (HX_FIELD_EQ(inName,"kp_ampersand") ) { outValue = kp_ampersand; return true;  }
		if (HX_FIELD_EQ(inName,"kp_memrecall") ) { outValue = kp_memrecall; return true;  }
		if (HX_FIELD_EQ(inName,"kp_memdivide") ) { outValue = kp_memdivide; return true;  }
		if (HX_FIELD_EQ(inName,"kp_plusminus") ) { outValue = kp_plusminus; return true;  }
		if (HX_FIELD_EQ(inName,"ac_bookmarks") ) { outValue = ac_bookmarks; return true;  }
		if (HX_FIELD_EQ(inName,"brightnessup") ) { outValue = brightnessup; return true;  }
		if (HX_FIELD_EQ(inName,"kbdillumdown") ) { outValue = kbdillumdown; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kp_rightparen") ) { outValue = kp_rightparen; return true;  }
		if (HX_FIELD_EQ(inName,"kp_rightbrace") ) { outValue = kp_rightbrace; return true;  }
		if (HX_FIELD_EQ(inName,"kp_clearentry") ) { outValue = kp_clearentry; return true;  }
		if (HX_FIELD_EQ(inName,"displayswitch") ) { outValue = displayswitch; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"kp_equalsas400") ) { outValue = kp_equalsas400; return true;  }
		if (HX_FIELD_EQ(inName,"kp_verticalbar") ) { outValue = kp_verticalbar; return true;  }
		if (HX_FIELD_EQ(inName,"kp_memsubtract") ) { outValue = kp_memsubtract; return true;  }
		if (HX_FIELD_EQ(inName,"kp_memmultiply") ) { outValue = kp_memmultiply; return true;  }
		if (HX_FIELD_EQ(inName,"kp_hexadecimal") ) { outValue = kp_hexadecimal; return true;  }
		if (HX_FIELD_EQ(inName,"brightnessdown") ) { outValue = brightnessdown; return true;  }
		if (HX_FIELD_EQ(inName,"kbdillumtoggle") ) { outValue = kbdillumtoggle; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currencysubunit") ) { outValue = currencysubunit; return true;  }
		if (HX_FIELD_EQ(inName,"kp_dblampersand") ) { outValue = kp_dblampersand; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"decimalseparator") ) { outValue = decimalseparator; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"kp_dblverticalbar") ) { outValue = kp_dblverticalbar; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"thousandsseparator") ) { outValue = thousandsseparator; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Keycodes_obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &Keycodes_obj::enter,HX_HCSTRING("enter","\x18","\x6d","\x86","\x70")},
	{hx::fsInt,(void *) &Keycodes_obj::escape,HX_HCSTRING("escape","\x81","\x43","\xda","\xda")},
	{hx::fsInt,(void *) &Keycodes_obj::backspace,HX_HCSTRING("backspace","\x3f","\x85","\xea","\xca")},
	{hx::fsInt,(void *) &Keycodes_obj::tab,HX_HCSTRING("tab","\x55","\x5a","\x58","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::space,HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsInt,(void *) &Keycodes_obj::exclaim,HX_HCSTRING("exclaim","\x29","\x96","\x23","\xab")},
	{hx::fsInt,(void *) &Keycodes_obj::quotedbl,HX_HCSTRING("quotedbl","\x72","\xc1","\xba","\xaf")},
	{hx::fsInt,(void *) &Keycodes_obj::hash,HX_HCSTRING("hash","\xce","\x2f","\x08","\x45")},
	{hx::fsInt,(void *) &Keycodes_obj::percent,HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78")},
	{hx::fsInt,(void *) &Keycodes_obj::dollar,HX_HCSTRING("dollar","\x7c","\xcc","\xdf","\x2c")},
	{hx::fsInt,(void *) &Keycodes_obj::ampersand,HX_HCSTRING("ampersand","\x35","\x6c","\x5e","\xcb")},
	{hx::fsInt,(void *) &Keycodes_obj::quote,HX_HCSTRING("quote","\x3c","\x23","\xf2","\x5d")},
	{hx::fsInt,(void *) &Keycodes_obj::leftparen,HX_HCSTRING("leftparen","\xa3","\x02","\x08","\x3f")},
	{hx::fsInt,(void *) &Keycodes_obj::rightparen,HX_HCSTRING("rightparen","\xae","\xfa","\xec","\x2c")},
	{hx::fsInt,(void *) &Keycodes_obj::asterisk,HX_HCSTRING("asterisk","\x72","\x6c","\xca","\x2e")},
	{hx::fsInt,(void *) &Keycodes_obj::plus,HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a")},
	{hx::fsInt,(void *) &Keycodes_obj::comma,HX_HCSTRING("comma","\xd5","\x31","\x5d","\x4a")},
	{hx::fsInt,(void *) &Keycodes_obj::minus,HX_HCSTRING("minus","\x70","\x80","\x68","\x08")},
	{hx::fsInt,(void *) &Keycodes_obj::period,HX_HCSTRING("period","\x01","\x61","\x1b","\x3b")},
	{hx::fsInt,(void *) &Keycodes_obj::slash,HX_HCSTRING("slash","\x3d","\xc0","\xc1","\x7e")},
	{hx::fsInt,(void *) &Keycodes_obj::key_0,HX_HCSTRING("key_0","\x50","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_1,HX_HCSTRING("key_1","\x51","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_2,HX_HCSTRING("key_2","\x52","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_3,HX_HCSTRING("key_3","\x53","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_4,HX_HCSTRING("key_4","\x54","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_5,HX_HCSTRING("key_5","\x55","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_6,HX_HCSTRING("key_6","\x56","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_7,HX_HCSTRING("key_7","\x57","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_8,HX_HCSTRING("key_8","\x58","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_9,HX_HCSTRING("key_9","\x59","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::colon,HX_HCSTRING("colon","\x5f","\x71","\x5c","\x4a")},
	{hx::fsInt,(void *) &Keycodes_obj::semicolon,HX_HCSTRING("semicolon","\x31","\x16","\xd2","\x4d")},
	{hx::fsInt,(void *) &Keycodes_obj::less,HX_HCSTRING("less","\x59","\x13","\xb0","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::equals,HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf")},
	{hx::fsInt,(void *) &Keycodes_obj::greater,HX_HCSTRING("greater","\xfa","\x90","\xc0","\xb7")},
	{hx::fsInt,(void *) &Keycodes_obj::question,HX_HCSTRING("question","\x26","\x9b","\xb0","\x26")},
	{hx::fsInt,(void *) &Keycodes_obj::at,HX_HCSTRING("at","\xf3","\x54","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::leftbracket,HX_HCSTRING("leftbracket","\x01","\x9d","\xc8","\xcd")},
	{hx::fsInt,(void *) &Keycodes_obj::backslash,HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8")},
	{hx::fsInt,(void *) &Keycodes_obj::rightbracket,HX_HCSTRING("rightbracket","\xcc","\xed","\xe3","\xb8")},
	{hx::fsInt,(void *) &Keycodes_obj::caret,HX_HCSTRING("caret","\x83","\xf9","\x1f","\x41")},
	{hx::fsInt,(void *) &Keycodes_obj::underscore,HX_HCSTRING("underscore","\x3a","\xeb","\xf8","\x52")},
	{hx::fsInt,(void *) &Keycodes_obj::backquote,HX_HCSTRING("backquote","\xb5","\x1b","\x76","\xa7")},
	{hx::fsInt,(void *) &Keycodes_obj::key_a,HX_HCSTRING("key_a","\x81","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_b,HX_HCSTRING("key_b","\x82","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_c,HX_HCSTRING("key_c","\x83","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_d,HX_HCSTRING("key_d","\x84","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_e,HX_HCSTRING("key_e","\x85","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_f,HX_HCSTRING("key_f","\x86","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_g,HX_HCSTRING("key_g","\x87","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_h,HX_HCSTRING("key_h","\x88","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_i,HX_HCSTRING("key_i","\x89","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_j,HX_HCSTRING("key_j","\x8a","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_k,HX_HCSTRING("key_k","\x8b","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_l,HX_HCSTRING("key_l","\x8c","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_m,HX_HCSTRING("key_m","\x8d","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_n,HX_HCSTRING("key_n","\x8e","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_o,HX_HCSTRING("key_o","\x8f","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_p,HX_HCSTRING("key_p","\x90","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_q,HX_HCSTRING("key_q","\x91","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_r,HX_HCSTRING("key_r","\x92","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_s,HX_HCSTRING("key_s","\x93","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_t,HX_HCSTRING("key_t","\x94","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_u,HX_HCSTRING("key_u","\x95","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_v,HX_HCSTRING("key_v","\x96","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_w,HX_HCSTRING("key_w","\x97","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_x,HX_HCSTRING("key_x","\x98","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_y,HX_HCSTRING("key_y","\x99","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::key_z,HX_HCSTRING("key_z","\x9a","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Keycodes_obj::capslock,HX_HCSTRING("capslock","\x8c","\xdc","\xe8","\x26")},
	{hx::fsInt,(void *) &Keycodes_obj::f1,HX_HCSTRING("f1","\x0b","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f2,HX_HCSTRING("f2","\x0c","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f3,HX_HCSTRING("f3","\x0d","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f4,HX_HCSTRING("f4","\x0e","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f5,HX_HCSTRING("f5","\x0f","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f6,HX_HCSTRING("f6","\x10","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f7,HX_HCSTRING("f7","\x11","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f8,HX_HCSTRING("f8","\x12","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f9,HX_HCSTRING("f9","\x13","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f10,HX_HCSTRING("f10","\xc5","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f11,HX_HCSTRING("f11","\xc6","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f12,HX_HCSTRING("f12","\xc7","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::printscreen,HX_HCSTRING("printscreen","\x59","\x73","\x40","\x3a")},
	{hx::fsInt,(void *) &Keycodes_obj::scrolllock,HX_HCSTRING("scrolllock","\x78","\xfe","\x9d","\x1a")},
	{hx::fsInt,(void *) &Keycodes_obj::pause,HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd")},
	{hx::fsInt,(void *) &Keycodes_obj::insert,HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d")},
	{hx::fsInt,(void *) &Keycodes_obj::home,HX_HCSTRING("home","\x1f","\xca","\x12","\x45")},
	{hx::fsInt,(void *) &Keycodes_obj::pageup,HX_HCSTRING("pageup","\x6a","\xb2","\x38","\xe6")},
	{hx::fsInt,(void *) &Keycodes_obj::_delete,HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a")},
	{hx::fsInt,(void *) &Keycodes_obj::end,HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::pagedown,HX_HCSTRING("pagedown","\x31","\xa6","\x5c","\x60")},
	{hx::fsInt,(void *) &Keycodes_obj::right,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsInt,(void *) &Keycodes_obj::left,HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::down,HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")},
	{hx::fsInt,(void *) &Keycodes_obj::up,HX_HCSTRING("up","\x5b","\x66","\x00","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::numlockclear,HX_HCSTRING("numlockclear","\xbc","\xea","\xac","\xf5")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_divide,HX_HCSTRING("kp_divide","\x13","\x12","\x82","\x5e")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_multiply,HX_HCSTRING("kp_multiply","\x3e","\x1f","\xae","\xdf")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_minus,HX_HCSTRING("kp_minus","\x16","\x6f","\xc9","\x1d")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_plus,HX_HCSTRING("kp_plus","\x74","\x67","\xdc","\x26")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_enter,HX_HCSTRING("kp_enter","\xbe","\x5b","\xe7","\x85")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_1,HX_HCSTRING("kp_1","\xd7","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_2,HX_HCSTRING("kp_2","\xd8","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_3,HX_HCSTRING("kp_3","\xd9","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_4,HX_HCSTRING("kp_4","\xda","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_5,HX_HCSTRING("kp_5","\xdb","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_6,HX_HCSTRING("kp_6","\xdc","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_7,HX_HCSTRING("kp_7","\xdd","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_8,HX_HCSTRING("kp_8","\xde","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_9,HX_HCSTRING("kp_9","\xdf","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_0,HX_HCSTRING("kp_0","\xd6","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_period,HX_HCSTRING("kp_period","\x9b","\x43","\x8b","\xda")},
	{hx::fsInt,(void *) &Keycodes_obj::application,HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsInt,(void *) &Keycodes_obj::power,HX_HCSTRING("power","\x05","\x4c","\x9a","\xc6")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_equals,HX_HCSTRING("kp_equals","\xd9","\xd0","\x62","\x5f")},
	{hx::fsInt,(void *) &Keycodes_obj::f13,HX_HCSTRING("f13","\xc8","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f14,HX_HCSTRING("f14","\xc9","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f15,HX_HCSTRING("f15","\xca","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f16,HX_HCSTRING("f16","\xcb","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f17,HX_HCSTRING("f17","\xcc","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f18,HX_HCSTRING("f18","\xcd","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f19,HX_HCSTRING("f19","\xce","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f20,HX_HCSTRING("f20","\xa4","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f21,HX_HCSTRING("f21","\xa5","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f22,HX_HCSTRING("f22","\xa6","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f23,HX_HCSTRING("f23","\xa7","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::f24,HX_HCSTRING("f24","\xa8","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::execute,HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc")},
	{hx::fsInt,(void *) &Keycodes_obj::help,HX_HCSTRING("help","\xc1","\x32","\x0b","\x45")},
	{hx::fsInt,(void *) &Keycodes_obj::menu,HX_HCSTRING("menu","\x9f","\x45","\x59","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::select,HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a")},
	{hx::fsInt,(void *) &Keycodes_obj::stop,HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c")},
	{hx::fsInt,(void *) &Keycodes_obj::again,HX_HCSTRING("again","\x60","\x35","\x3d","\x1e")},
	{hx::fsInt,(void *) &Keycodes_obj::undo,HX_HCSTRING("undo","\x24","\xc6","\xa9","\x4d")},
	{hx::fsInt,(void *) &Keycodes_obj::cut,HX_HCSTRING("cut","\x82","\x85","\x4b","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::copy,HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41")},
	{hx::fsInt,(void *) &Keycodes_obj::paste,HX_HCSTRING("paste","\x53","\x53","\x56","\xbd")},
	{hx::fsInt,(void *) &Keycodes_obj::find,HX_HCSTRING("find","\x39","\xd0","\xbb","\x43")},
	{hx::fsInt,(void *) &Keycodes_obj::mute,HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::volumeup,HX_HCSTRING("volumeup","\xb5","\x3a","\xd5","\x39")},
	{hx::fsInt,(void *) &Keycodes_obj::volumedown,HX_HCSTRING("volumedown","\x3c","\x17","\x64","\x3a")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_comma,HX_HCSTRING("kp_comma","\x7b","\x20","\xbe","\x5f")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_equalsas400,HX_HCSTRING("kp_equalsas400","\x09","\xea","\xe5","\xc1")},
	{hx::fsInt,(void *) &Keycodes_obj::alterase,HX_HCSTRING("alterase","\x1d","\x1b","\xae","\x0b")},
	{hx::fsInt,(void *) &Keycodes_obj::sysreq,HX_HCSTRING("sysreq","\x71","\x12","\xe1","\xf2")},
	{hx::fsInt,(void *) &Keycodes_obj::cancel,HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8")},
	{hx::fsInt,(void *) &Keycodes_obj::clear,HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::prior,HX_HCSTRING("prior","\x0a","\x59","\x8b","\xc8")},
	{hx::fsInt,(void *) &Keycodes_obj::return2,HX_HCSTRING("return2","\x82","\x75","\xc2","\xfe")},
	{hx::fsInt,(void *) &Keycodes_obj::separator,HX_HCSTRING("separator","\x65","\x60","\x7f","\x31")},
	{hx::fsInt,(void *) &Keycodes_obj::out,HX_HCSTRING("out","\x8e","\xa0","\x54","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::oper,HX_HCSTRING("oper","\xce","\x03","\xb4","\x49")},
	{hx::fsInt,(void *) &Keycodes_obj::clearagain,HX_HCSTRING("clearagain","\xb3","\x04","\x1a","\x60")},
	{hx::fsInt,(void *) &Keycodes_obj::crsel,HX_HCSTRING("crsel","\x4b","\x5c","\x5d","\x4c")},
	{hx::fsInt,(void *) &Keycodes_obj::exsel,HX_HCSTRING("exsel","\x07","\xcd","\x21","\x77")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_00,HX_HCSTRING("kp_00","\x9a","\x37","\x30","\xe6")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_000,HX_HCSTRING("kp_000","\x56","\x6f","\x00","\x84")},
	{hx::fsInt,(void *) &Keycodes_obj::thousandsseparator,HX_HCSTRING("thousandsseparator","\xf0","\x9f","\x19","\x09")},
	{hx::fsInt,(void *) &Keycodes_obj::decimalseparator,HX_HCSTRING("decimalseparator","\xb4","\x11","\xc3","\x9e")},
	{hx::fsInt,(void *) &Keycodes_obj::currencyunit,HX_HCSTRING("currencyunit","\x55","\x4e","\xf3","\xe0")},
	{hx::fsInt,(void *) &Keycodes_obj::currencysubunit,HX_HCSTRING("currencysubunit","\xd3","\x28","\x44","\x32")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_leftparen,HX_HCSTRING("kp_leftparen","\x49","\x3c","\xfc","\x76")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_rightparen,HX_HCSTRING("kp_rightparen","\x48","\x32","\xab","\xea")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_leftbrace,HX_HCSTRING("kp_leftbrace","\xb2","\xd5","\x8f","\x72")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_rightbrace,HX_HCSTRING("kp_rightbrace","\xb1","\xcb","\x3e","\xe6")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_tab,HX_HCSTRING("kp_tab","\x7b","\x33","\x34","\x84")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_backspace,HX_HCSTRING("kp_backspace","\xe5","\xbe","\xde","\x02")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_a,HX_HCSTRING("kp_a","\x07","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_b,HX_HCSTRING("kp_b","\x08","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_c,HX_HCSTRING("kp_c","\x09","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_d,HX_HCSTRING("kp_d","\x0a","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_e,HX_HCSTRING("kp_e","\x0b","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_f,HX_HCSTRING("kp_f","\x0c","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_xor,HX_HCSTRING("kp_xor","\xc1","\x48","\x37","\x84")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_power,HX_HCSTRING("kp_power","\xab","\x3a","\xfb","\xdb")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_percent,HX_HCSTRING("kp_percent","\xeb","\x0e","\x51","\x5b")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_less,HX_HCSTRING("kp_less","\x73","\x3b","\x32","\x24")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_greater,HX_HCSTRING("kp_greater","\x20","\xf5","\x36","\x9a")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_ampersand,HX_HCSTRING("kp_ampersand","\xdb","\xa5","\x52","\x03")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_dblampersand,HX_HCSTRING("kp_dblampersand","\x61","\xb1","\x23","\x42")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_verticalbar,HX_HCSTRING("kp_verticalbar","\x43","\x12","\x24","\x2c")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_dblverticalbar,HX_HCSTRING("kp_dblverticalbar","\x49","\x8b","\xf3","\x89")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_colon,HX_HCSTRING("kp_colon","\x05","\x60","\xbd","\x5f")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_hash,HX_HCSTRING("kp_hash","\xe8","\x57","\x8a","\x21")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_space,HX_HCSTRING("kp_space","\x6c","\x7b","\xc7","\x96")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_at,HX_HCSTRING("kp_at","\x8d","\x62","\x30","\xe6")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_exclam,HX_HCSTRING("kp_exclam","\x62","\x58","\x53","\x5b")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memstore,HX_HCSTRING("kp_memstore","\xc6","\x16","\x90","\x20")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memrecall,HX_HCSTRING("kp_memrecall","\x4c","\x57","\x2a","\x4c")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memclear,HX_HCSTRING("kp_memclear","\x72","\x74","\xd5","\xe4")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memadd,HX_HCSTRING("kp_memadd","\xc6","\x01","\x25","\xa4")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memsubtract,HX_HCSTRING("kp_memsubtract","\x4f","\x8f","\xa2","\xcd")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memmultiply,HX_HCSTRING("kp_memmultiply","\x5f","\xfc","\x1d","\x70")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_memdivide,HX_HCSTRING("kp_memdivide","\xf4","\xb4","\x5a","\x0d")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_plusminus,HX_HCSTRING("kp_plusminus","\x7c","\x94","\x9c","\xa7")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_clear,HX_HCSTRING("kp_clear","\x33","\x60","\xbc","\x5d")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_clearentry,HX_HCSTRING("kp_clearentry","\x5f","\x7f","\x21","\x70")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_binary,HX_HCSTRING("kp_binary","\x9b","\x9e","\x7b","\x8c")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_octal,HX_HCSTRING("kp_octal","\x71","\xcc","\xa3","\x40")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_decimal,HX_HCSTRING("kp_decimal","\xb7","\x18","\x4a","\xc9")},
	{hx::fsInt,(void *) &Keycodes_obj::kp_hexadecimal,HX_HCSTRING("kp_hexadecimal","\x51","\x77","\x89","\xf4")},
	{hx::fsInt,(void *) &Keycodes_obj::lctrl,HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71")},
	{hx::fsInt,(void *) &Keycodes_obj::lshift,HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa")},
	{hx::fsInt,(void *) &Keycodes_obj::lalt,HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47")},
	{hx::fsInt,(void *) &Keycodes_obj::lmeta,HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77")},
	{hx::fsInt,(void *) &Keycodes_obj::rctrl,HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5")},
	{hx::fsInt,(void *) &Keycodes_obj::rshift,HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10")},
	{hx::fsInt,(void *) &Keycodes_obj::ralt,HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b")},
	{hx::fsInt,(void *) &Keycodes_obj::rmeta,HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec")},
	{hx::fsInt,(void *) &Keycodes_obj::mode,HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::audionext,HX_HCSTRING("audionext","\xc9","\x20","\xdf","\x7d")},
	{hx::fsInt,(void *) &Keycodes_obj::audioprev,HX_HCSTRING("audioprev","\xc9","\x5a","\x3b","\x7f")},
	{hx::fsInt,(void *) &Keycodes_obj::audiostop,HX_HCSTRING("audiostop","\xd8","\x8b","\x38","\x81")},
	{hx::fsInt,(void *) &Keycodes_obj::audioplay,HX_HCSTRING("audioplay","\xca","\xc9","\x36","\x7f")},
	{hx::fsInt,(void *) &Keycodes_obj::audiomute,HX_HCSTRING("audiomute","\xaf","\x0a","\x42","\x7d")},
	{hx::fsInt,(void *) &Keycodes_obj::mediaselect,HX_HCSTRING("mediaselect","\xe0","\xe2","\xe7","\xc3")},
	{hx::fsInt,(void *) &Keycodes_obj::www,HX_HCSTRING("www","\x57","\xb4","\x5a","\x00")},
	{hx::fsInt,(void *) &Keycodes_obj::mail,HX_HCSTRING("mail","\x37","\x38","\x56","\x48")},
	{hx::fsInt,(void *) &Keycodes_obj::calculator,HX_HCSTRING("calculator","\x02","\x2d","\xd8","\xb7")},
	{hx::fsInt,(void *) &Keycodes_obj::computer,HX_HCSTRING("computer","\x1b","\x41","\xc6","\x85")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_search,HX_HCSTRING("ac_search","\x65","\x9c","\x69","\xdd")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_home,HX_HCSTRING("ac_home","\xdc","\x9d","\x1a","\x4f")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_back,HX_HCSTRING("ac_back","\xe4","\xad","\x18","\x4b")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_forward,HX_HCSTRING("ac_forward","\x28","\x42","\x16","\x8f")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_stop,HX_HCSTRING("ac_stop","\xbf","\xc3","\x63","\x56")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_refresh,HX_HCSTRING("ac_refresh","\x3e","\x3a","\x6c","\x96")},
	{hx::fsInt,(void *) &Keycodes_obj::ac_bookmarks,HX_HCSTRING("ac_bookmarks","\x20","\x12","\x98","\x7b")},
	{hx::fsInt,(void *) &Keycodes_obj::brightnessdown,HX_HCSTRING("brightnessdown","\xb3","\x42","\xe9","\x8a")},
	{hx::fsInt,(void *) &Keycodes_obj::brightnessup,HX_HCSTRING("brightnessup","\x6c","\xca","\x4d","\xcf")},
	{hx::fsInt,(void *) &Keycodes_obj::displayswitch,HX_HCSTRING("displayswitch","\xb6","\x91","\x47","\x52")},
	{hx::fsInt,(void *) &Keycodes_obj::kbdillumtoggle,HX_HCSTRING("kbdillumtoggle","\x48","\x0a","\x5b","\x21")},
	{hx::fsInt,(void *) &Keycodes_obj::kbdillumdown,HX_HCSTRING("kbdillumdown","\x16","\x6e","\x75","\xeb")},
	{hx::fsInt,(void *) &Keycodes_obj::kbdillumup,HX_HCSTRING("kbdillumup","\x0f","\x47","\x07","\x31")},
	{hx::fsInt,(void *) &Keycodes_obj::eject,HX_HCSTRING("eject","\x11","\x2f","\xd6","\x6d")},
	{hx::fsInt,(void *) &Keycodes_obj::sleep,HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keycodes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Keycodes_obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::enter,"enter");
	HX_MARK_MEMBER_NAME(Keycodes_obj::escape,"escape");
	HX_MARK_MEMBER_NAME(Keycodes_obj::backspace,"backspace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::tab,"tab");
	HX_MARK_MEMBER_NAME(Keycodes_obj::space,"space");
	HX_MARK_MEMBER_NAME(Keycodes_obj::exclaim,"exclaim");
	HX_MARK_MEMBER_NAME(Keycodes_obj::quotedbl,"quotedbl");
	HX_MARK_MEMBER_NAME(Keycodes_obj::hash,"hash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::percent,"percent");
	HX_MARK_MEMBER_NAME(Keycodes_obj::dollar,"dollar");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ampersand,"ampersand");
	HX_MARK_MEMBER_NAME(Keycodes_obj::quote,"quote");
	HX_MARK_MEMBER_NAME(Keycodes_obj::leftparen,"leftparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rightparen,"rightparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::asterisk,"asterisk");
	HX_MARK_MEMBER_NAME(Keycodes_obj::plus,"plus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::comma,"comma");
	HX_MARK_MEMBER_NAME(Keycodes_obj::minus,"minus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::period,"period");
	HX_MARK_MEMBER_NAME(Keycodes_obj::slash,"slash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_0,"key_0");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_1,"key_1");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_2,"key_2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_3,"key_3");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_4,"key_4");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_5,"key_5");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_6,"key_6");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_7,"key_7");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_8,"key_8");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_9,"key_9");
	HX_MARK_MEMBER_NAME(Keycodes_obj::colon,"colon");
	HX_MARK_MEMBER_NAME(Keycodes_obj::semicolon,"semicolon");
	HX_MARK_MEMBER_NAME(Keycodes_obj::less,"less");
	HX_MARK_MEMBER_NAME(Keycodes_obj::equals,"equals");
	HX_MARK_MEMBER_NAME(Keycodes_obj::greater,"greater");
	HX_MARK_MEMBER_NAME(Keycodes_obj::question,"question");
	HX_MARK_MEMBER_NAME(Keycodes_obj::at,"at");
	HX_MARK_MEMBER_NAME(Keycodes_obj::leftbracket,"leftbracket");
	HX_MARK_MEMBER_NAME(Keycodes_obj::backslash,"backslash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rightbracket,"rightbracket");
	HX_MARK_MEMBER_NAME(Keycodes_obj::caret,"caret");
	HX_MARK_MEMBER_NAME(Keycodes_obj::underscore,"underscore");
	HX_MARK_MEMBER_NAME(Keycodes_obj::backquote,"backquote");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_a,"key_a");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_b,"key_b");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_c,"key_c");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_d,"key_d");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_e,"key_e");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_f,"key_f");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_g,"key_g");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_h,"key_h");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_i,"key_i");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_j,"key_j");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_k,"key_k");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_l,"key_l");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_m,"key_m");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_n,"key_n");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_o,"key_o");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_p,"key_p");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_q,"key_q");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_r,"key_r");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_s,"key_s");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_t,"key_t");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_u,"key_u");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_v,"key_v");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_w,"key_w");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_x,"key_x");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_y,"key_y");
	HX_MARK_MEMBER_NAME(Keycodes_obj::key_z,"key_z");
	HX_MARK_MEMBER_NAME(Keycodes_obj::capslock,"capslock");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f1,"f1");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f2,"f2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f3,"f3");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f4,"f4");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f5,"f5");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f6,"f6");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f7,"f7");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f8,"f8");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f9,"f9");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f10,"f10");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f11,"f11");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f12,"f12");
	HX_MARK_MEMBER_NAME(Keycodes_obj::printscreen,"printscreen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::scrolllock,"scrolllock");
	HX_MARK_MEMBER_NAME(Keycodes_obj::pause,"pause");
	HX_MARK_MEMBER_NAME(Keycodes_obj::insert,"insert");
	HX_MARK_MEMBER_NAME(Keycodes_obj::home,"home");
	HX_MARK_MEMBER_NAME(Keycodes_obj::pageup,"pageup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::_delete,"delete");
	HX_MARK_MEMBER_NAME(Keycodes_obj::end,"end");
	HX_MARK_MEMBER_NAME(Keycodes_obj::pagedown,"pagedown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::right,"right");
	HX_MARK_MEMBER_NAME(Keycodes_obj::left,"left");
	HX_MARK_MEMBER_NAME(Keycodes_obj::down,"down");
	HX_MARK_MEMBER_NAME(Keycodes_obj::up,"up");
	HX_MARK_MEMBER_NAME(Keycodes_obj::numlockclear,"numlockclear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_divide,"kp_divide");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_multiply,"kp_multiply");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_minus,"kp_minus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_plus,"kp_plus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_enter,"kp_enter");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_1,"kp_1");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_2,"kp_2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_3,"kp_3");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_4,"kp_4");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_5,"kp_5");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_6,"kp_6");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_7,"kp_7");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_8,"kp_8");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_9,"kp_9");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_0,"kp_0");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_period,"kp_period");
	HX_MARK_MEMBER_NAME(Keycodes_obj::application,"application");
	HX_MARK_MEMBER_NAME(Keycodes_obj::power,"power");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_equals,"kp_equals");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f13,"f13");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f14,"f14");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f15,"f15");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f16,"f16");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f17,"f17");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f18,"f18");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f19,"f19");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f20,"f20");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f21,"f21");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f22,"f22");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f23,"f23");
	HX_MARK_MEMBER_NAME(Keycodes_obj::f24,"f24");
	HX_MARK_MEMBER_NAME(Keycodes_obj::execute,"execute");
	HX_MARK_MEMBER_NAME(Keycodes_obj::help,"help");
	HX_MARK_MEMBER_NAME(Keycodes_obj::menu,"menu");
	HX_MARK_MEMBER_NAME(Keycodes_obj::select,"select");
	HX_MARK_MEMBER_NAME(Keycodes_obj::stop,"stop");
	HX_MARK_MEMBER_NAME(Keycodes_obj::again,"again");
	HX_MARK_MEMBER_NAME(Keycodes_obj::undo,"undo");
	HX_MARK_MEMBER_NAME(Keycodes_obj::cut,"cut");
	HX_MARK_MEMBER_NAME(Keycodes_obj::copy,"copy");
	HX_MARK_MEMBER_NAME(Keycodes_obj::paste,"paste");
	HX_MARK_MEMBER_NAME(Keycodes_obj::find,"find");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mute,"mute");
	HX_MARK_MEMBER_NAME(Keycodes_obj::volumeup,"volumeup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::volumedown,"volumedown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_comma,"kp_comma");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_MARK_MEMBER_NAME(Keycodes_obj::alterase,"alterase");
	HX_MARK_MEMBER_NAME(Keycodes_obj::sysreq,"sysreq");
	HX_MARK_MEMBER_NAME(Keycodes_obj::cancel,"cancel");
	HX_MARK_MEMBER_NAME(Keycodes_obj::clear,"clear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::prior,"prior");
	HX_MARK_MEMBER_NAME(Keycodes_obj::return2,"return2");
	HX_MARK_MEMBER_NAME(Keycodes_obj::separator,"separator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::out,"out");
	HX_MARK_MEMBER_NAME(Keycodes_obj::oper,"oper");
	HX_MARK_MEMBER_NAME(Keycodes_obj::clearagain,"clearagain");
	HX_MARK_MEMBER_NAME(Keycodes_obj::crsel,"crsel");
	HX_MARK_MEMBER_NAME(Keycodes_obj::exsel,"exsel");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_00,"kp_00");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_000,"kp_000");
	HX_MARK_MEMBER_NAME(Keycodes_obj::thousandsseparator,"thousandsseparator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::decimalseparator,"decimalseparator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::currencyunit,"currencyunit");
	HX_MARK_MEMBER_NAME(Keycodes_obj::currencysubunit,"currencysubunit");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_leftparen,"kp_leftparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_rightparen,"kp_rightparen");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_tab,"kp_tab");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_backspace,"kp_backspace");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_a,"kp_a");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_b,"kp_b");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_c,"kp_c");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_d,"kp_d");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_e,"kp_e");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_f,"kp_f");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_xor,"kp_xor");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_power,"kp_power");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_percent,"kp_percent");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_less,"kp_less");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_greater,"kp_greater");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_ampersand,"kp_ampersand");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_colon,"kp_colon");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_hash,"kp_hash");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_space,"kp_space");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_at,"kp_at");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_exclam,"kp_exclam");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memstore,"kp_memstore");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memrecall,"kp_memrecall");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memclear,"kp_memclear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memadd,"kp_memadd");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_memdivide,"kp_memdivide");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_plusminus,"kp_plusminus");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_clear,"kp_clear");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_clearentry,"kp_clearentry");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_binary,"kp_binary");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_octal,"kp_octal");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_decimal,"kp_decimal");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lctrl,"lctrl");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lshift,"lshift");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lalt,"lalt");
	HX_MARK_MEMBER_NAME(Keycodes_obj::lmeta,"lmeta");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rctrl,"rctrl");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rshift,"rshift");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ralt,"ralt");
	HX_MARK_MEMBER_NAME(Keycodes_obj::rmeta,"rmeta");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mode,"mode");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audionext,"audionext");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audioprev,"audioprev");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audiostop,"audiostop");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audioplay,"audioplay");
	HX_MARK_MEMBER_NAME(Keycodes_obj::audiomute,"audiomute");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mediaselect,"mediaselect");
	HX_MARK_MEMBER_NAME(Keycodes_obj::www,"www");
	HX_MARK_MEMBER_NAME(Keycodes_obj::mail,"mail");
	HX_MARK_MEMBER_NAME(Keycodes_obj::calculator,"calculator");
	HX_MARK_MEMBER_NAME(Keycodes_obj::computer,"computer");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_search,"ac_search");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_home,"ac_home");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_back,"ac_back");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_forward,"ac_forward");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_stop,"ac_stop");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_refresh,"ac_refresh");
	HX_MARK_MEMBER_NAME(Keycodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_MARK_MEMBER_NAME(Keycodes_obj::brightnessdown,"brightnessdown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::brightnessup,"brightnessup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::displayswitch,"displayswitch");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kbdillumdown,"kbdillumdown");
	HX_MARK_MEMBER_NAME(Keycodes_obj::kbdillumup,"kbdillumup");
	HX_MARK_MEMBER_NAME(Keycodes_obj::eject,"eject");
	HX_MARK_MEMBER_NAME(Keycodes_obj::sleep,"sleep");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keycodes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::enter,"enter");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::escape,"escape");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::backspace,"backspace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::tab,"tab");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::space,"space");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::exclaim,"exclaim");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::quotedbl,"quotedbl");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::hash,"hash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::percent,"percent");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::dollar,"dollar");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ampersand,"ampersand");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::quote,"quote");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::leftparen,"leftparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rightparen,"rightparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::asterisk,"asterisk");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::plus,"plus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::comma,"comma");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::minus,"minus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::period,"period");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::slash,"slash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_0,"key_0");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_1,"key_1");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_2,"key_2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_3,"key_3");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_4,"key_4");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_5,"key_5");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_6,"key_6");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_7,"key_7");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_8,"key_8");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_9,"key_9");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::colon,"colon");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::semicolon,"semicolon");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::less,"less");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::equals,"equals");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::greater,"greater");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::question,"question");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::at,"at");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::leftbracket,"leftbracket");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::backslash,"backslash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rightbracket,"rightbracket");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::caret,"caret");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::underscore,"underscore");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::backquote,"backquote");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_a,"key_a");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_b,"key_b");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_c,"key_c");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_d,"key_d");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_e,"key_e");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_f,"key_f");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_g,"key_g");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_h,"key_h");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_i,"key_i");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_j,"key_j");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_k,"key_k");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_l,"key_l");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_m,"key_m");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_n,"key_n");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_o,"key_o");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_p,"key_p");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_q,"key_q");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_r,"key_r");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_s,"key_s");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_t,"key_t");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_u,"key_u");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_v,"key_v");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_w,"key_w");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_x,"key_x");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_y,"key_y");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::key_z,"key_z");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::capslock,"capslock");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f1,"f1");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f2,"f2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f3,"f3");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f4,"f4");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f5,"f5");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f6,"f6");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f7,"f7");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f8,"f8");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f9,"f9");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f10,"f10");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f11,"f11");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f12,"f12");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::printscreen,"printscreen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::scrolllock,"scrolllock");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::pause,"pause");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::insert,"insert");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::home,"home");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::pageup,"pageup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::_delete,"delete");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::end,"end");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::pagedown,"pagedown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::right,"right");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::left,"left");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::down,"down");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::up,"up");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::numlockclear,"numlockclear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_divide,"kp_divide");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_multiply,"kp_multiply");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_minus,"kp_minus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_plus,"kp_plus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_enter,"kp_enter");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_1,"kp_1");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_2,"kp_2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_3,"kp_3");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_4,"kp_4");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_5,"kp_5");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_6,"kp_6");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_7,"kp_7");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_8,"kp_8");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_9,"kp_9");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_0,"kp_0");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_period,"kp_period");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::power,"power");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_equals,"kp_equals");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f13,"f13");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f14,"f14");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f15,"f15");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f16,"f16");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f17,"f17");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f18,"f18");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f19,"f19");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f20,"f20");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f21,"f21");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f22,"f22");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f23,"f23");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::f24,"f24");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::execute,"execute");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::help,"help");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::menu,"menu");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::select,"select");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::stop,"stop");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::again,"again");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::undo,"undo");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::cut,"cut");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::copy,"copy");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::paste,"paste");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::find,"find");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mute,"mute");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::volumeup,"volumeup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::volumedown,"volumedown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_comma,"kp_comma");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::alterase,"alterase");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::sysreq,"sysreq");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::cancel,"cancel");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::clear,"clear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::prior,"prior");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::return2,"return2");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::separator,"separator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::out,"out");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::oper,"oper");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::clearagain,"clearagain");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::crsel,"crsel");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::exsel,"exsel");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_00,"kp_00");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_000,"kp_000");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::thousandsseparator,"thousandsseparator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::decimalseparator,"decimalseparator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::currencyunit,"currencyunit");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::currencysubunit,"currencysubunit");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_leftparen,"kp_leftparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_rightparen,"kp_rightparen");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_tab,"kp_tab");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_backspace,"kp_backspace");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_a,"kp_a");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_b,"kp_b");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_c,"kp_c");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_d,"kp_d");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_e,"kp_e");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_f,"kp_f");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_xor,"kp_xor");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_power,"kp_power");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_percent,"kp_percent");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_less,"kp_less");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_greater,"kp_greater");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_ampersand,"kp_ampersand");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_colon,"kp_colon");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_hash,"kp_hash");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_space,"kp_space");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_at,"kp_at");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_exclam,"kp_exclam");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memstore,"kp_memstore");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memrecall,"kp_memrecall");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memclear,"kp_memclear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memadd,"kp_memadd");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_memdivide,"kp_memdivide");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_plusminus,"kp_plusminus");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_clear,"kp_clear");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_clearentry,"kp_clearentry");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_binary,"kp_binary");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_octal,"kp_octal");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_decimal,"kp_decimal");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lctrl,"lctrl");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lshift,"lshift");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lalt,"lalt");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::lmeta,"lmeta");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rctrl,"rctrl");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rshift,"rshift");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ralt,"ralt");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::rmeta,"rmeta");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mode,"mode");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audionext,"audionext");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audioprev,"audioprev");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audiostop,"audiostop");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audioplay,"audioplay");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::audiomute,"audiomute");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mediaselect,"mediaselect");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::www,"www");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::mail,"mail");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::calculator,"calculator");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::computer,"computer");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_search,"ac_search");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_home,"ac_home");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_back,"ac_back");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_forward,"ac_forward");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_stop,"ac_stop");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_refresh,"ac_refresh");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::brightnessdown,"brightnessdown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::brightnessup,"brightnessup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::displayswitch,"displayswitch");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kbdillumdown,"kbdillumdown");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::kbdillumup,"kbdillumup");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::eject,"eject");
	HX_VISIT_MEMBER_NAME(Keycodes_obj::sleep,"sleep");
};

#endif

hx::Class Keycodes_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("from_scan","\xb2","\x93","\xbb","\x20"),
	HX_HCSTRING("to_scan","\x01","\xf6","\xb6","\x38"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("enter","\x18","\x6d","\x86","\x70"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("backspace","\x3f","\x85","\xea","\xca"),
	HX_HCSTRING("tab","\x55","\x5a","\x58","\x00"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("exclaim","\x29","\x96","\x23","\xab"),
	HX_HCSTRING("quotedbl","\x72","\xc1","\xba","\xaf"),
	HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"),
	HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"),
	HX_HCSTRING("dollar","\x7c","\xcc","\xdf","\x2c"),
	HX_HCSTRING("ampersand","\x35","\x6c","\x5e","\xcb"),
	HX_HCSTRING("quote","\x3c","\x23","\xf2","\x5d"),
	HX_HCSTRING("leftparen","\xa3","\x02","\x08","\x3f"),
	HX_HCSTRING("rightparen","\xae","\xfa","\xec","\x2c"),
	HX_HCSTRING("asterisk","\x72","\x6c","\xca","\x2e"),
	HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a"),
	HX_HCSTRING("comma","\xd5","\x31","\x5d","\x4a"),
	HX_HCSTRING("minus","\x70","\x80","\x68","\x08"),
	HX_HCSTRING("period","\x01","\x61","\x1b","\x3b"),
	HX_HCSTRING("slash","\x3d","\xc0","\xc1","\x7e"),
	HX_HCSTRING("key_0","\x50","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_1","\x51","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_2","\x52","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_3","\x53","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_4","\x54","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_5","\x55","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_6","\x56","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_7","\x57","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_8","\x58","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_9","\x59","\xc2","\xfe","\xde"),
	HX_HCSTRING("colon","\x5f","\x71","\x5c","\x4a"),
	HX_HCSTRING("semicolon","\x31","\x16","\xd2","\x4d"),
	HX_HCSTRING("less","\x59","\x13","\xb0","\x47"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("greater","\xfa","\x90","\xc0","\xb7"),
	HX_HCSTRING("question","\x26","\x9b","\xb0","\x26"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("leftbracket","\x01","\x9d","\xc8","\xcd"),
	HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"),
	HX_HCSTRING("rightbracket","\xcc","\xed","\xe3","\xb8"),
	HX_HCSTRING("caret","\x83","\xf9","\x1f","\x41"),
	HX_HCSTRING("underscore","\x3a","\xeb","\xf8","\x52"),
	HX_HCSTRING("backquote","\xb5","\x1b","\x76","\xa7"),
	HX_HCSTRING("key_a","\x81","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_b","\x82","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_c","\x83","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_d","\x84","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_e","\x85","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_f","\x86","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_g","\x87","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_h","\x88","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_i","\x89","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_j","\x8a","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_k","\x8b","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_l","\x8c","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_m","\x8d","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_n","\x8e","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_o","\x8f","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_p","\x90","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_q","\x91","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_r","\x92","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_s","\x93","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_t","\x94","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_u","\x95","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_v","\x96","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_w","\x97","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_x","\x98","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_y","\x99","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_z","\x9a","\xc2","\xfe","\xde"),
	HX_HCSTRING("capslock","\x8c","\xdc","\xe8","\x26"),
	HX_HCSTRING("f1","\x0b","\x59","\x00","\x00"),
	HX_HCSTRING("f2","\x0c","\x59","\x00","\x00"),
	HX_HCSTRING("f3","\x0d","\x59","\x00","\x00"),
	HX_HCSTRING("f4","\x0e","\x59","\x00","\x00"),
	HX_HCSTRING("f5","\x0f","\x59","\x00","\x00"),
	HX_HCSTRING("f6","\x10","\x59","\x00","\x00"),
	HX_HCSTRING("f7","\x11","\x59","\x00","\x00"),
	HX_HCSTRING("f8","\x12","\x59","\x00","\x00"),
	HX_HCSTRING("f9","\x13","\x59","\x00","\x00"),
	HX_HCSTRING("f10","\xc5","\x90","\x4d","\x00"),
	HX_HCSTRING("f11","\xc6","\x90","\x4d","\x00"),
	HX_HCSTRING("f12","\xc7","\x90","\x4d","\x00"),
	HX_HCSTRING("printscreen","\x59","\x73","\x40","\x3a"),
	HX_HCSTRING("scrolllock","\x78","\xfe","\x9d","\x1a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("home","\x1f","\xca","\x12","\x45"),
	HX_HCSTRING("pageup","\x6a","\xb2","\x38","\xe6"),
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("pagedown","\x31","\xa6","\x5c","\x60"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),
	HX_HCSTRING("numlockclear","\xbc","\xea","\xac","\xf5"),
	HX_HCSTRING("kp_divide","\x13","\x12","\x82","\x5e"),
	HX_HCSTRING("kp_multiply","\x3e","\x1f","\xae","\xdf"),
	HX_HCSTRING("kp_minus","\x16","\x6f","\xc9","\x1d"),
	HX_HCSTRING("kp_plus","\x74","\x67","\xdc","\x26"),
	HX_HCSTRING("kp_enter","\xbe","\x5b","\xe7","\x85"),
	HX_HCSTRING("kp_1","\xd7","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_2","\xd8","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_3","\xd9","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_4","\xda","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_5","\xdb","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_6","\xdc","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_7","\xdd","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_8","\xde","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_9","\xdf","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_0","\xd6","\x23","\x0f","\x47"),
	HX_HCSTRING("kp_period","\x9b","\x43","\x8b","\xda"),
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("power","\x05","\x4c","\x9a","\xc6"),
	HX_HCSTRING("kp_equals","\xd9","\xd0","\x62","\x5f"),
	HX_HCSTRING("f13","\xc8","\x90","\x4d","\x00"),
	HX_HCSTRING("f14","\xc9","\x90","\x4d","\x00"),
	HX_HCSTRING("f15","\xca","\x90","\x4d","\x00"),
	HX_HCSTRING("f16","\xcb","\x90","\x4d","\x00"),
	HX_HCSTRING("f17","\xcc","\x90","\x4d","\x00"),
	HX_HCSTRING("f18","\xcd","\x90","\x4d","\x00"),
	HX_HCSTRING("f19","\xce","\x90","\x4d","\x00"),
	HX_HCSTRING("f20","\xa4","\x91","\x4d","\x00"),
	HX_HCSTRING("f21","\xa5","\x91","\x4d","\x00"),
	HX_HCSTRING("f22","\xa6","\x91","\x4d","\x00"),
	HX_HCSTRING("f23","\xa7","\x91","\x4d","\x00"),
	HX_HCSTRING("f24","\xa8","\x91","\x4d","\x00"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),
	HX_HCSTRING("menu","\x9f","\x45","\x59","\x48"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("again","\x60","\x35","\x3d","\x1e"),
	HX_HCSTRING("undo","\x24","\xc6","\xa9","\x4d"),
	HX_HCSTRING("cut","\x82","\x85","\x4b","\x00"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("paste","\x53","\x53","\x56","\xbd"),
	HX_HCSTRING("find","\x39","\xd0","\xbb","\x43"),
	HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"),
	HX_HCSTRING("volumeup","\xb5","\x3a","\xd5","\x39"),
	HX_HCSTRING("volumedown","\x3c","\x17","\x64","\x3a"),
	HX_HCSTRING("kp_comma","\x7b","\x20","\xbe","\x5f"),
	HX_HCSTRING("kp_equalsas400","\x09","\xea","\xe5","\xc1"),
	HX_HCSTRING("alterase","\x1d","\x1b","\xae","\x0b"),
	HX_HCSTRING("sysreq","\x71","\x12","\xe1","\xf2"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("prior","\x0a","\x59","\x8b","\xc8"),
	HX_HCSTRING("return2","\x82","\x75","\xc2","\xfe"),
	HX_HCSTRING("separator","\x65","\x60","\x7f","\x31"),
	HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"),
	HX_HCSTRING("oper","\xce","\x03","\xb4","\x49"),
	HX_HCSTRING("clearagain","\xb3","\x04","\x1a","\x60"),
	HX_HCSTRING("crsel","\x4b","\x5c","\x5d","\x4c"),
	HX_HCSTRING("exsel","\x07","\xcd","\x21","\x77"),
	HX_HCSTRING("kp_00","\x9a","\x37","\x30","\xe6"),
	HX_HCSTRING("kp_000","\x56","\x6f","\x00","\x84"),
	HX_HCSTRING("thousandsseparator","\xf0","\x9f","\x19","\x09"),
	HX_HCSTRING("decimalseparator","\xb4","\x11","\xc3","\x9e"),
	HX_HCSTRING("currencyunit","\x55","\x4e","\xf3","\xe0"),
	HX_HCSTRING("currencysubunit","\xd3","\x28","\x44","\x32"),
	HX_HCSTRING("kp_leftparen","\x49","\x3c","\xfc","\x76"),
	HX_HCSTRING("kp_rightparen","\x48","\x32","\xab","\xea"),
	HX_HCSTRING("kp_leftbrace","\xb2","\xd5","\x8f","\x72"),
	HX_HCSTRING("kp_rightbrace","\xb1","\xcb","\x3e","\xe6"),
	HX_HCSTRING("kp_tab","\x7b","\x33","\x34","\x84"),
	HX_HCSTRING("kp_backspace","\xe5","\xbe","\xde","\x02"),
	HX_HCSTRING("kp_a","\x07","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_b","\x08","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_c","\x09","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_d","\x0a","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_e","\x0b","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_f","\x0c","\x24","\x0f","\x47"),
	HX_HCSTRING("kp_xor","\xc1","\x48","\x37","\x84"),
	HX_HCSTRING("kp_power","\xab","\x3a","\xfb","\xdb"),
	HX_HCSTRING("kp_percent","\xeb","\x0e","\x51","\x5b"),
	HX_HCSTRING("kp_less","\x73","\x3b","\x32","\x24"),
	HX_HCSTRING("kp_greater","\x20","\xf5","\x36","\x9a"),
	HX_HCSTRING("kp_ampersand","\xdb","\xa5","\x52","\x03"),
	HX_HCSTRING("kp_dblampersand","\x61","\xb1","\x23","\x42"),
	HX_HCSTRING("kp_verticalbar","\x43","\x12","\x24","\x2c"),
	HX_HCSTRING("kp_dblverticalbar","\x49","\x8b","\xf3","\x89"),
	HX_HCSTRING("kp_colon","\x05","\x60","\xbd","\x5f"),
	HX_HCSTRING("kp_hash","\xe8","\x57","\x8a","\x21"),
	HX_HCSTRING("kp_space","\x6c","\x7b","\xc7","\x96"),
	HX_HCSTRING("kp_at","\x8d","\x62","\x30","\xe6"),
	HX_HCSTRING("kp_exclam","\x62","\x58","\x53","\x5b"),
	HX_HCSTRING("kp_memstore","\xc6","\x16","\x90","\x20"),
	HX_HCSTRING("kp_memrecall","\x4c","\x57","\x2a","\x4c"),
	HX_HCSTRING("kp_memclear","\x72","\x74","\xd5","\xe4"),
	HX_HCSTRING("kp_memadd","\xc6","\x01","\x25","\xa4"),
	HX_HCSTRING("kp_memsubtract","\x4f","\x8f","\xa2","\xcd"),
	HX_HCSTRING("kp_memmultiply","\x5f","\xfc","\x1d","\x70"),
	HX_HCSTRING("kp_memdivide","\xf4","\xb4","\x5a","\x0d"),
	HX_HCSTRING("kp_plusminus","\x7c","\x94","\x9c","\xa7"),
	HX_HCSTRING("kp_clear","\x33","\x60","\xbc","\x5d"),
	HX_HCSTRING("kp_clearentry","\x5f","\x7f","\x21","\x70"),
	HX_HCSTRING("kp_binary","\x9b","\x9e","\x7b","\x8c"),
	HX_HCSTRING("kp_octal","\x71","\xcc","\xa3","\x40"),
	HX_HCSTRING("kp_decimal","\xb7","\x18","\x4a","\xc9"),
	HX_HCSTRING("kp_hexadecimal","\x51","\x77","\x89","\xf4"),
	HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71"),
	HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa"),
	HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47"),
	HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77"),
	HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5"),
	HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10"),
	HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b"),
	HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("audionext","\xc9","\x20","\xdf","\x7d"),
	HX_HCSTRING("audioprev","\xc9","\x5a","\x3b","\x7f"),
	HX_HCSTRING("audiostop","\xd8","\x8b","\x38","\x81"),
	HX_HCSTRING("audioplay","\xca","\xc9","\x36","\x7f"),
	HX_HCSTRING("audiomute","\xaf","\x0a","\x42","\x7d"),
	HX_HCSTRING("mediaselect","\xe0","\xe2","\xe7","\xc3"),
	HX_HCSTRING("www","\x57","\xb4","\x5a","\x00"),
	HX_HCSTRING("mail","\x37","\x38","\x56","\x48"),
	HX_HCSTRING("calculator","\x02","\x2d","\xd8","\xb7"),
	HX_HCSTRING("computer","\x1b","\x41","\xc6","\x85"),
	HX_HCSTRING("ac_search","\x65","\x9c","\x69","\xdd"),
	HX_HCSTRING("ac_home","\xdc","\x9d","\x1a","\x4f"),
	HX_HCSTRING("ac_back","\xe4","\xad","\x18","\x4b"),
	HX_HCSTRING("ac_forward","\x28","\x42","\x16","\x8f"),
	HX_HCSTRING("ac_stop","\xbf","\xc3","\x63","\x56"),
	HX_HCSTRING("ac_refresh","\x3e","\x3a","\x6c","\x96"),
	HX_HCSTRING("ac_bookmarks","\x20","\x12","\x98","\x7b"),
	HX_HCSTRING("brightnessdown","\xb3","\x42","\xe9","\x8a"),
	HX_HCSTRING("brightnessup","\x6c","\xca","\x4d","\xcf"),
	HX_HCSTRING("displayswitch","\xb6","\x91","\x47","\x52"),
	HX_HCSTRING("kbdillumtoggle","\x48","\x0a","\x5b","\x21"),
	HX_HCSTRING("kbdillumdown","\x16","\x6e","\x75","\xeb"),
	HX_HCSTRING("kbdillumup","\x0f","\x47","\x07","\x31"),
	HX_HCSTRING("eject","\x11","\x2f","\xd6","\x6d"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	::String(null()) };

void Keycodes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.input.Keycodes","\x1f","\xce","\xb9","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Keycodes_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Keycodes_obj >;
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

void Keycodes_obj::__boot()
{
	unknown= (int)0;
	enter= (int)13;
	escape= (int)27;
	backspace= (int)8;
	tab= (int)9;
	space= (int)32;
	exclaim= (int)33;
	quotedbl= (int)34;
	hash= (int)35;
	percent= (int)37;
	dollar= (int)36;
	ampersand= (int)38;
	quote= (int)39;
	leftparen= (int)40;
	rightparen= (int)41;
	asterisk= (int)42;
	plus= (int)43;
	comma= (int)44;
	minus= (int)45;
	period= (int)46;
	slash= (int)47;
	key_0= (int)48;
	key_1= (int)49;
	key_2= (int)50;
	key_3= (int)51;
	key_4= (int)52;
	key_5= (int)53;
	key_6= (int)54;
	key_7= (int)55;
	key_8= (int)56;
	key_9= (int)57;
	colon= (int)58;
	semicolon= (int)59;
	less= (int)60;
	equals= (int)61;
	greater= (int)62;
	question= (int)63;
	at= (int)64;
	leftbracket= (int)91;
	backslash= (int)92;
	rightbracket= (int)93;
	caret= (int)94;
	underscore= (int)95;
	backquote= (int)96;
	key_a= (int)97;
	key_b= (int)98;
	key_c= (int)99;
	key_d= (int)100;
	key_e= (int)101;
	key_f= (int)102;
	key_g= (int)103;
	key_h= (int)104;
	key_i= (int)105;
	key_j= (int)106;
	key_k= (int)107;
	key_l= (int)108;
	key_m= (int)109;
	key_n= (int)110;
	key_o= (int)111;
	key_p= (int)112;
	key_q= (int)113;
	key_r= (int)114;
	key_s= (int)115;
	key_t= (int)116;
	key_u= (int)117;
	key_v= (int)118;
	key_w= (int)119;
	key_x= (int)120;
	key_y= (int)121;
	key_z= (int)122;
struct _Function_0_1{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",217,0x16a6697e)
		{
			HX_STACK_LINE(217)
			int tmp = ::snow::_system::input::Scancodes_obj::capslock;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(217)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	capslock= _Function_0_1::Block();
struct _Function_0_2{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",219,0x16a6697e)
		{
			HX_STACK_LINE(219)
			int tmp = ::snow::_system::input::Scancodes_obj::f1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(219)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f1= _Function_0_2::Block();
struct _Function_0_3{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",220,0x16a6697e)
		{
			HX_STACK_LINE(220)
			int tmp = ::snow::_system::input::Scancodes_obj::f2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(220)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f2= _Function_0_3::Block();
struct _Function_0_4{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",221,0x16a6697e)
		{
			HX_STACK_LINE(221)
			int tmp = ::snow::_system::input::Scancodes_obj::f3;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(221)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f3= _Function_0_4::Block();
struct _Function_0_5{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",222,0x16a6697e)
		{
			HX_STACK_LINE(222)
			int tmp = ::snow::_system::input::Scancodes_obj::f4;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(222)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f4= _Function_0_5::Block();
struct _Function_0_6{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",223,0x16a6697e)
		{
			HX_STACK_LINE(223)
			int tmp = ::snow::_system::input::Scancodes_obj::f5;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(223)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f5= _Function_0_6::Block();
struct _Function_0_7{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",224,0x16a6697e)
		{
			HX_STACK_LINE(224)
			int tmp = ::snow::_system::input::Scancodes_obj::f6;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(224)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f6= _Function_0_7::Block();
struct _Function_0_8{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",225,0x16a6697e)
		{
			HX_STACK_LINE(225)
			int tmp = ::snow::_system::input::Scancodes_obj::f7;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(225)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f7= _Function_0_8::Block();
struct _Function_0_9{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",226,0x16a6697e)
		{
			HX_STACK_LINE(226)
			int tmp = ::snow::_system::input::Scancodes_obj::f8;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(226)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f8= _Function_0_9::Block();
struct _Function_0_10{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",227,0x16a6697e)
		{
			HX_STACK_LINE(227)
			int tmp = ::snow::_system::input::Scancodes_obj::f9;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(227)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f9= _Function_0_10::Block();
struct _Function_0_11{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",228,0x16a6697e)
		{
			HX_STACK_LINE(228)
			int tmp = ::snow::_system::input::Scancodes_obj::f10;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(228)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f10= _Function_0_11::Block();
struct _Function_0_12{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",229,0x16a6697e)
		{
			HX_STACK_LINE(229)
			int tmp = ::snow::_system::input::Scancodes_obj::f11;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(229)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f11= _Function_0_12::Block();
struct _Function_0_13{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",230,0x16a6697e)
		{
			HX_STACK_LINE(230)
			int tmp = ::snow::_system::input::Scancodes_obj::f12;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(230)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f12= _Function_0_13::Block();
struct _Function_0_14{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",232,0x16a6697e)
		{
			HX_STACK_LINE(232)
			int tmp = ::snow::_system::input::Scancodes_obj::printscreen;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(232)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	printscreen= _Function_0_14::Block();
struct _Function_0_15{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",233,0x16a6697e)
		{
			HX_STACK_LINE(233)
			int tmp = ::snow::_system::input::Scancodes_obj::scrolllock;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(233)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	scrolllock= _Function_0_15::Block();
struct _Function_0_16{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",234,0x16a6697e)
		{
			HX_STACK_LINE(234)
			int tmp = ::snow::_system::input::Scancodes_obj::pause;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(234)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	pause= _Function_0_16::Block();
struct _Function_0_17{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",235,0x16a6697e)
		{
			HX_STACK_LINE(235)
			int tmp = ::snow::_system::input::Scancodes_obj::insert;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(235)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	insert= _Function_0_17::Block();
struct _Function_0_18{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",236,0x16a6697e)
		{
			HX_STACK_LINE(236)
			int tmp = ::snow::_system::input::Scancodes_obj::home;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(236)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	home= _Function_0_18::Block();
struct _Function_0_19{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",237,0x16a6697e)
		{
			HX_STACK_LINE(237)
			int tmp = ::snow::_system::input::Scancodes_obj::pageup;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(237)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	pageup= _Function_0_19::Block();
	_delete= (int)127;
struct _Function_0_20{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",239,0x16a6697e)
		{
			HX_STACK_LINE(239)
			int tmp = ::snow::_system::input::Scancodes_obj::end;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(239)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	end= _Function_0_20::Block();
struct _Function_0_21{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",240,0x16a6697e)
		{
			HX_STACK_LINE(240)
			int tmp = ::snow::_system::input::Scancodes_obj::pagedown;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(240)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	pagedown= _Function_0_21::Block();
struct _Function_0_22{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",241,0x16a6697e)
		{
			HX_STACK_LINE(241)
			int tmp = ::snow::_system::input::Scancodes_obj::right;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(241)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	right= _Function_0_22::Block();
struct _Function_0_23{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",242,0x16a6697e)
		{
			HX_STACK_LINE(242)
			int tmp = ::snow::_system::input::Scancodes_obj::left;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(242)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	left= _Function_0_23::Block();
struct _Function_0_24{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",243,0x16a6697e)
		{
			HX_STACK_LINE(243)
			int tmp = ::snow::_system::input::Scancodes_obj::down;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(243)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	down= _Function_0_24::Block();
struct _Function_0_25{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",244,0x16a6697e)
		{
			HX_STACK_LINE(244)
			int tmp = ::snow::_system::input::Scancodes_obj::up;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(244)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	up= _Function_0_25::Block();
struct _Function_0_26{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",246,0x16a6697e)
		{
			HX_STACK_LINE(246)
			int tmp = ::snow::_system::input::Scancodes_obj::numlockclear;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(246)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	numlockclear= _Function_0_26::Block();
struct _Function_0_27{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",247,0x16a6697e)
		{
			HX_STACK_LINE(247)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_divide;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(247)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_divide= _Function_0_27::Block();
struct _Function_0_28{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",248,0x16a6697e)
		{
			HX_STACK_LINE(248)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_multiply;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(248)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_multiply= _Function_0_28::Block();
struct _Function_0_29{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",249,0x16a6697e)
		{
			HX_STACK_LINE(249)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_minus;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(249)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_minus= _Function_0_29::Block();
struct _Function_0_30{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",250,0x16a6697e)
		{
			HX_STACK_LINE(250)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_plus;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(250)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_plus= _Function_0_30::Block();
struct _Function_0_31{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",251,0x16a6697e)
		{
			HX_STACK_LINE(251)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_enter;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(251)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_enter= _Function_0_31::Block();
struct _Function_0_32{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",252,0x16a6697e)
		{
			HX_STACK_LINE(252)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(252)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_1= _Function_0_32::Block();
struct _Function_0_33{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",253,0x16a6697e)
		{
			HX_STACK_LINE(253)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(253)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_2= _Function_0_33::Block();
struct _Function_0_34{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",254,0x16a6697e)
		{
			HX_STACK_LINE(254)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_3;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(254)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_3= _Function_0_34::Block();
struct _Function_0_35{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",255,0x16a6697e)
		{
			HX_STACK_LINE(255)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_4;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(255)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_4= _Function_0_35::Block();
struct _Function_0_36{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",256,0x16a6697e)
		{
			HX_STACK_LINE(256)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_5;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(256)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_5= _Function_0_36::Block();
struct _Function_0_37{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",257,0x16a6697e)
		{
			HX_STACK_LINE(257)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_6;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(257)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_6= _Function_0_37::Block();
struct _Function_0_38{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",258,0x16a6697e)
		{
			HX_STACK_LINE(258)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_7;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(258)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_7= _Function_0_38::Block();
struct _Function_0_39{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",259,0x16a6697e)
		{
			HX_STACK_LINE(259)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_8;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(259)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_8= _Function_0_39::Block();
struct _Function_0_40{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",260,0x16a6697e)
		{
			HX_STACK_LINE(260)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_9;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(260)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_9= _Function_0_40::Block();
struct _Function_0_41{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",261,0x16a6697e)
		{
			HX_STACK_LINE(261)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_0;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(261)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_0= _Function_0_41::Block();
struct _Function_0_42{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",262,0x16a6697e)
		{
			HX_STACK_LINE(262)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_period;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(262)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_period= _Function_0_42::Block();
struct _Function_0_43{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",264,0x16a6697e)
		{
			HX_STACK_LINE(264)
			int tmp = ::snow::_system::input::Scancodes_obj::application;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(264)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	application= _Function_0_43::Block();
struct _Function_0_44{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",265,0x16a6697e)
		{
			HX_STACK_LINE(265)
			int tmp = ::snow::_system::input::Scancodes_obj::power;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(265)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	power= _Function_0_44::Block();
struct _Function_0_45{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",266,0x16a6697e)
		{
			HX_STACK_LINE(266)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_equals;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(266)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_equals= _Function_0_45::Block();
struct _Function_0_46{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",267,0x16a6697e)
		{
			HX_STACK_LINE(267)
			int tmp = ::snow::_system::input::Scancodes_obj::f13;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(267)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f13= _Function_0_46::Block();
struct _Function_0_47{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",268,0x16a6697e)
		{
			HX_STACK_LINE(268)
			int tmp = ::snow::_system::input::Scancodes_obj::f14;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(268)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f14= _Function_0_47::Block();
struct _Function_0_48{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",269,0x16a6697e)
		{
			HX_STACK_LINE(269)
			int tmp = ::snow::_system::input::Scancodes_obj::f15;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(269)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f15= _Function_0_48::Block();
struct _Function_0_49{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",270,0x16a6697e)
		{
			HX_STACK_LINE(270)
			int tmp = ::snow::_system::input::Scancodes_obj::f16;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(270)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f16= _Function_0_49::Block();
struct _Function_0_50{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",271,0x16a6697e)
		{
			HX_STACK_LINE(271)
			int tmp = ::snow::_system::input::Scancodes_obj::f17;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(271)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f17= _Function_0_50::Block();
struct _Function_0_51{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",272,0x16a6697e)
		{
			HX_STACK_LINE(272)
			int tmp = ::snow::_system::input::Scancodes_obj::f18;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f18= _Function_0_51::Block();
struct _Function_0_52{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",273,0x16a6697e)
		{
			HX_STACK_LINE(273)
			int tmp = ::snow::_system::input::Scancodes_obj::f19;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f19= _Function_0_52::Block();
struct _Function_0_53{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",274,0x16a6697e)
		{
			HX_STACK_LINE(274)
			int tmp = ::snow::_system::input::Scancodes_obj::f20;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(274)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f20= _Function_0_53::Block();
struct _Function_0_54{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",275,0x16a6697e)
		{
			HX_STACK_LINE(275)
			int tmp = ::snow::_system::input::Scancodes_obj::f21;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(275)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f21= _Function_0_54::Block();
struct _Function_0_55{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",276,0x16a6697e)
		{
			HX_STACK_LINE(276)
			int tmp = ::snow::_system::input::Scancodes_obj::f22;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(276)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f22= _Function_0_55::Block();
struct _Function_0_56{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",277,0x16a6697e)
		{
			HX_STACK_LINE(277)
			int tmp = ::snow::_system::input::Scancodes_obj::f23;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(277)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f23= _Function_0_56::Block();
struct _Function_0_57{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",278,0x16a6697e)
		{
			HX_STACK_LINE(278)
			int tmp = ::snow::_system::input::Scancodes_obj::f24;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(278)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	f24= _Function_0_57::Block();
struct _Function_0_58{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",279,0x16a6697e)
		{
			HX_STACK_LINE(279)
			int tmp = ::snow::_system::input::Scancodes_obj::execute;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(279)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	execute= _Function_0_58::Block();
struct _Function_0_59{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",280,0x16a6697e)
		{
			HX_STACK_LINE(280)
			int tmp = ::snow::_system::input::Scancodes_obj::help;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(280)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	help= _Function_0_59::Block();
struct _Function_0_60{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",281,0x16a6697e)
		{
			HX_STACK_LINE(281)
			int tmp = ::snow::_system::input::Scancodes_obj::menu;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(281)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	menu= _Function_0_60::Block();
struct _Function_0_61{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",282,0x16a6697e)
		{
			HX_STACK_LINE(282)
			int tmp = ::snow::_system::input::Scancodes_obj::select;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(282)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	select= _Function_0_61::Block();
struct _Function_0_62{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",283,0x16a6697e)
		{
			HX_STACK_LINE(283)
			int tmp = ::snow::_system::input::Scancodes_obj::stop;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(283)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	stop= _Function_0_62::Block();
struct _Function_0_63{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",284,0x16a6697e)
		{
			HX_STACK_LINE(284)
			int tmp = ::snow::_system::input::Scancodes_obj::again;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(284)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	again= _Function_0_63::Block();
struct _Function_0_64{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",285,0x16a6697e)
		{
			HX_STACK_LINE(285)
			int tmp = ::snow::_system::input::Scancodes_obj::undo;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(285)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	undo= _Function_0_64::Block();
struct _Function_0_65{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",286,0x16a6697e)
		{
			HX_STACK_LINE(286)
			int tmp = ::snow::_system::input::Scancodes_obj::cut;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(286)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	cut= _Function_0_65::Block();
struct _Function_0_66{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",287,0x16a6697e)
		{
			HX_STACK_LINE(287)
			int tmp = ::snow::_system::input::Scancodes_obj::copy;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(287)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	copy= _Function_0_66::Block();
struct _Function_0_67{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",288,0x16a6697e)
		{
			HX_STACK_LINE(288)
			int tmp = ::snow::_system::input::Scancodes_obj::paste;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(288)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	paste= _Function_0_67::Block();
struct _Function_0_68{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",289,0x16a6697e)
		{
			HX_STACK_LINE(289)
			int tmp = ::snow::_system::input::Scancodes_obj::find;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(289)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	find= _Function_0_68::Block();
struct _Function_0_69{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",290,0x16a6697e)
		{
			HX_STACK_LINE(290)
			int tmp = ::snow::_system::input::Scancodes_obj::mute;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(290)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	mute= _Function_0_69::Block();
struct _Function_0_70{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",291,0x16a6697e)
		{
			HX_STACK_LINE(291)
			int tmp = ::snow::_system::input::Scancodes_obj::volumeup;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(291)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	volumeup= _Function_0_70::Block();
struct _Function_0_71{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",292,0x16a6697e)
		{
			HX_STACK_LINE(292)
			int tmp = ::snow::_system::input::Scancodes_obj::volumedown;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(292)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	volumedown= _Function_0_71::Block();
struct _Function_0_72{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",293,0x16a6697e)
		{
			HX_STACK_LINE(293)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_comma;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(293)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_comma= _Function_0_72::Block();
struct _Function_0_73{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",294,0x16a6697e)
		{
			HX_STACK_LINE(294)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_equalsas400;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(294)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_equalsas400= _Function_0_73::Block();
struct _Function_0_74{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",296,0x16a6697e)
		{
			HX_STACK_LINE(296)
			int tmp = ::snow::_system::input::Scancodes_obj::alterase;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(296)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	alterase= _Function_0_74::Block();
struct _Function_0_75{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",297,0x16a6697e)
		{
			HX_STACK_LINE(297)
			int tmp = ::snow::_system::input::Scancodes_obj::sysreq;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(297)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	sysreq= _Function_0_75::Block();
struct _Function_0_76{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",298,0x16a6697e)
		{
			HX_STACK_LINE(298)
			int tmp = ::snow::_system::input::Scancodes_obj::cancel;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(298)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	cancel= _Function_0_76::Block();
struct _Function_0_77{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",299,0x16a6697e)
		{
			HX_STACK_LINE(299)
			int tmp = ::snow::_system::input::Scancodes_obj::clear;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(299)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	clear= _Function_0_77::Block();
struct _Function_0_78{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",300,0x16a6697e)
		{
			HX_STACK_LINE(300)
			int tmp = ::snow::_system::input::Scancodes_obj::prior;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(300)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	prior= _Function_0_78::Block();
struct _Function_0_79{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",301,0x16a6697e)
		{
			HX_STACK_LINE(301)
			int tmp = ::snow::_system::input::Scancodes_obj::return2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(301)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	return2= _Function_0_79::Block();
struct _Function_0_80{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",302,0x16a6697e)
		{
			HX_STACK_LINE(302)
			int tmp = ::snow::_system::input::Scancodes_obj::separator;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(302)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	separator= _Function_0_80::Block();
struct _Function_0_81{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",303,0x16a6697e)
		{
			HX_STACK_LINE(303)
			int tmp = ::snow::_system::input::Scancodes_obj::out;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(303)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	out= _Function_0_81::Block();
struct _Function_0_82{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",304,0x16a6697e)
		{
			HX_STACK_LINE(304)
			int tmp = ::snow::_system::input::Scancodes_obj::oper;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(304)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	oper= _Function_0_82::Block();
struct _Function_0_83{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",305,0x16a6697e)
		{
			HX_STACK_LINE(305)
			int tmp = ::snow::_system::input::Scancodes_obj::clearagain;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(305)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	clearagain= _Function_0_83::Block();
struct _Function_0_84{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",306,0x16a6697e)
		{
			HX_STACK_LINE(306)
			int tmp = ::snow::_system::input::Scancodes_obj::crsel;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(306)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	crsel= _Function_0_84::Block();
struct _Function_0_85{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",307,0x16a6697e)
		{
			HX_STACK_LINE(307)
			int tmp = ::snow::_system::input::Scancodes_obj::exsel;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(307)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	exsel= _Function_0_85::Block();
struct _Function_0_86{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",309,0x16a6697e)
		{
			HX_STACK_LINE(309)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_00;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(309)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_00= _Function_0_86::Block();
struct _Function_0_87{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",310,0x16a6697e)
		{
			HX_STACK_LINE(310)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_000;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(310)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_000= _Function_0_87::Block();
struct _Function_0_88{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",311,0x16a6697e)
		{
			HX_STACK_LINE(311)
			int tmp = ::snow::_system::input::Scancodes_obj::thousandsseparator;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(311)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	thousandsseparator= _Function_0_88::Block();
struct _Function_0_89{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",312,0x16a6697e)
		{
			HX_STACK_LINE(312)
			int tmp = ::snow::_system::input::Scancodes_obj::decimalseparator;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(312)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	decimalseparator= _Function_0_89::Block();
struct _Function_0_90{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",313,0x16a6697e)
		{
			HX_STACK_LINE(313)
			int tmp = ::snow::_system::input::Scancodes_obj::currencyunit;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(313)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	currencyunit= _Function_0_90::Block();
struct _Function_0_91{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",314,0x16a6697e)
		{
			HX_STACK_LINE(314)
			int tmp = ::snow::_system::input::Scancodes_obj::currencysubunit;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(314)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	currencysubunit= _Function_0_91::Block();
struct _Function_0_92{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",315,0x16a6697e)
		{
			HX_STACK_LINE(315)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_leftparen;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(315)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_leftparen= _Function_0_92::Block();
struct _Function_0_93{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",316,0x16a6697e)
		{
			HX_STACK_LINE(316)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_rightparen;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(316)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_rightparen= _Function_0_93::Block();
struct _Function_0_94{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",317,0x16a6697e)
		{
			HX_STACK_LINE(317)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_leftbrace;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(317)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_leftbrace= _Function_0_94::Block();
struct _Function_0_95{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",318,0x16a6697e)
		{
			HX_STACK_LINE(318)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_rightbrace;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(318)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_rightbrace= _Function_0_95::Block();
struct _Function_0_96{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",319,0x16a6697e)
		{
			HX_STACK_LINE(319)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_tab;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(319)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_tab= _Function_0_96::Block();
struct _Function_0_97{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",320,0x16a6697e)
		{
			HX_STACK_LINE(320)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_backspace;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(320)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_backspace= _Function_0_97::Block();
struct _Function_0_98{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",321,0x16a6697e)
		{
			HX_STACK_LINE(321)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_a;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(321)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_a= _Function_0_98::Block();
struct _Function_0_99{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",322,0x16a6697e)
		{
			HX_STACK_LINE(322)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_b;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(322)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_b= _Function_0_99::Block();
struct _Function_0_100{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",323,0x16a6697e)
		{
			HX_STACK_LINE(323)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_c;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(323)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_c= _Function_0_100::Block();
struct _Function_0_101{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",324,0x16a6697e)
		{
			HX_STACK_LINE(324)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_d;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(324)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_d= _Function_0_101::Block();
struct _Function_0_102{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",325,0x16a6697e)
		{
			HX_STACK_LINE(325)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_e;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(325)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_e= _Function_0_102::Block();
struct _Function_0_103{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",326,0x16a6697e)
		{
			HX_STACK_LINE(326)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_f;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(326)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_f= _Function_0_103::Block();
struct _Function_0_104{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",327,0x16a6697e)
		{
			HX_STACK_LINE(327)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_xor;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(327)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_xor= _Function_0_104::Block();
struct _Function_0_105{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",328,0x16a6697e)
		{
			HX_STACK_LINE(328)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_power;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(328)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_power= _Function_0_105::Block();
struct _Function_0_106{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",329,0x16a6697e)
		{
			HX_STACK_LINE(329)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_percent;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(329)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_percent= _Function_0_106::Block();
struct _Function_0_107{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",330,0x16a6697e)
		{
			HX_STACK_LINE(330)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_less;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(330)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_less= _Function_0_107::Block();
struct _Function_0_108{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",331,0x16a6697e)
		{
			HX_STACK_LINE(331)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_greater;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(331)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_greater= _Function_0_108::Block();
struct _Function_0_109{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",332,0x16a6697e)
		{
			HX_STACK_LINE(332)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_ampersand;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(332)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_ampersand= _Function_0_109::Block();
struct _Function_0_110{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",333,0x16a6697e)
		{
			HX_STACK_LINE(333)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_dblampersand;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(333)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_dblampersand= _Function_0_110::Block();
struct _Function_0_111{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",334,0x16a6697e)
		{
			HX_STACK_LINE(334)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_verticalbar;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(334)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_verticalbar= _Function_0_111::Block();
struct _Function_0_112{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",335,0x16a6697e)
		{
			HX_STACK_LINE(335)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_dblverticalbar;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(335)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_dblverticalbar= _Function_0_112::Block();
struct _Function_0_113{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",336,0x16a6697e)
		{
			HX_STACK_LINE(336)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_colon;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(336)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_colon= _Function_0_113::Block();
struct _Function_0_114{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",337,0x16a6697e)
		{
			HX_STACK_LINE(337)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_hash;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(337)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_hash= _Function_0_114::Block();
struct _Function_0_115{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",338,0x16a6697e)
		{
			HX_STACK_LINE(338)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_space;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(338)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_space= _Function_0_115::Block();
struct _Function_0_116{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",339,0x16a6697e)
		{
			HX_STACK_LINE(339)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_at;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(339)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_at= _Function_0_116::Block();
struct _Function_0_117{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",340,0x16a6697e)
		{
			HX_STACK_LINE(340)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_exclam;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(340)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_exclam= _Function_0_117::Block();
struct _Function_0_118{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",341,0x16a6697e)
		{
			HX_STACK_LINE(341)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_memstore;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(341)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_memstore= _Function_0_118::Block();
struct _Function_0_119{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",342,0x16a6697e)
		{
			HX_STACK_LINE(342)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_memrecall;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(342)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_memrecall= _Function_0_119::Block();
struct _Function_0_120{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",343,0x16a6697e)
		{
			HX_STACK_LINE(343)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_memclear;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(343)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_memclear= _Function_0_120::Block();
struct _Function_0_121{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",344,0x16a6697e)
		{
			HX_STACK_LINE(344)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_memadd;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(344)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_memadd= _Function_0_121::Block();
struct _Function_0_122{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",345,0x16a6697e)
		{
			HX_STACK_LINE(345)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_memsubtract;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(345)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_memsubtract= _Function_0_122::Block();
struct _Function_0_123{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",346,0x16a6697e)
		{
			HX_STACK_LINE(346)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_memmultiply;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(346)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_memmultiply= _Function_0_123::Block();
struct _Function_0_124{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",347,0x16a6697e)
		{
			HX_STACK_LINE(347)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_memdivide;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(347)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_memdivide= _Function_0_124::Block();
struct _Function_0_125{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",348,0x16a6697e)
		{
			HX_STACK_LINE(348)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_plusminus;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(348)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_plusminus= _Function_0_125::Block();
struct _Function_0_126{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",349,0x16a6697e)
		{
			HX_STACK_LINE(349)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_clear;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(349)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_clear= _Function_0_126::Block();
struct _Function_0_127{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",350,0x16a6697e)
		{
			HX_STACK_LINE(350)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_clearentry;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(350)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_clearentry= _Function_0_127::Block();
struct _Function_0_128{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",351,0x16a6697e)
		{
			HX_STACK_LINE(351)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_binary;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(351)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_binary= _Function_0_128::Block();
struct _Function_0_129{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",352,0x16a6697e)
		{
			HX_STACK_LINE(352)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_octal;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(352)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_octal= _Function_0_129::Block();
struct _Function_0_130{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",353,0x16a6697e)
		{
			HX_STACK_LINE(353)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_decimal;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(353)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_decimal= _Function_0_130::Block();
struct _Function_0_131{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",354,0x16a6697e)
		{
			HX_STACK_LINE(354)
			int tmp = ::snow::_system::input::Scancodes_obj::kp_hexadecimal;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(354)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kp_hexadecimal= _Function_0_131::Block();
struct _Function_0_132{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",356,0x16a6697e)
		{
			HX_STACK_LINE(356)
			int tmp = ::snow::_system::input::Scancodes_obj::lctrl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(356)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	lctrl= _Function_0_132::Block();
struct _Function_0_133{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",357,0x16a6697e)
		{
			HX_STACK_LINE(357)
			int tmp = ::snow::_system::input::Scancodes_obj::lshift;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(357)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	lshift= _Function_0_133::Block();
struct _Function_0_134{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",358,0x16a6697e)
		{
			HX_STACK_LINE(358)
			int tmp = ::snow::_system::input::Scancodes_obj::lalt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(358)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	lalt= _Function_0_134::Block();
struct _Function_0_135{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",359,0x16a6697e)
		{
			HX_STACK_LINE(359)
			int tmp = ::snow::_system::input::Scancodes_obj::lmeta;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(359)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	lmeta= _Function_0_135::Block();
struct _Function_0_136{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",360,0x16a6697e)
		{
			HX_STACK_LINE(360)
			int tmp = ::snow::_system::input::Scancodes_obj::rctrl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(360)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	rctrl= _Function_0_136::Block();
struct _Function_0_137{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",361,0x16a6697e)
		{
			HX_STACK_LINE(361)
			int tmp = ::snow::_system::input::Scancodes_obj::rshift;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(361)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	rshift= _Function_0_137::Block();
struct _Function_0_138{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",362,0x16a6697e)
		{
			HX_STACK_LINE(362)
			int tmp = ::snow::_system::input::Scancodes_obj::ralt;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(362)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	ralt= _Function_0_138::Block();
struct _Function_0_139{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",363,0x16a6697e)
		{
			HX_STACK_LINE(363)
			int tmp = ::snow::_system::input::Scancodes_obj::rmeta;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(363)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	rmeta= _Function_0_139::Block();
struct _Function_0_140{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",365,0x16a6697e)
		{
			HX_STACK_LINE(365)
			int tmp = ::snow::_system::input::Scancodes_obj::mode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(365)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	mode= _Function_0_140::Block();
struct _Function_0_141{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",367,0x16a6697e)
		{
			HX_STACK_LINE(367)
			int tmp = ::snow::_system::input::Scancodes_obj::audionext;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(367)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	audionext= _Function_0_141::Block();
struct _Function_0_142{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",368,0x16a6697e)
		{
			HX_STACK_LINE(368)
			int tmp = ::snow::_system::input::Scancodes_obj::audioprev;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(368)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	audioprev= _Function_0_142::Block();
struct _Function_0_143{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",369,0x16a6697e)
		{
			HX_STACK_LINE(369)
			int tmp = ::snow::_system::input::Scancodes_obj::audiostop;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(369)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	audiostop= _Function_0_143::Block();
struct _Function_0_144{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",370,0x16a6697e)
		{
			HX_STACK_LINE(370)
			int tmp = ::snow::_system::input::Scancodes_obj::audioplay;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(370)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	audioplay= _Function_0_144::Block();
struct _Function_0_145{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",371,0x16a6697e)
		{
			HX_STACK_LINE(371)
			int tmp = ::snow::_system::input::Scancodes_obj::audiomute;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(371)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	audiomute= _Function_0_145::Block();
struct _Function_0_146{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",372,0x16a6697e)
		{
			HX_STACK_LINE(372)
			int tmp = ::snow::_system::input::Scancodes_obj::mediaselect;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(372)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	mediaselect= _Function_0_146::Block();
struct _Function_0_147{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",373,0x16a6697e)
		{
			HX_STACK_LINE(373)
			int tmp = ::snow::_system::input::Scancodes_obj::www;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(373)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	www= _Function_0_147::Block();
struct _Function_0_148{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",374,0x16a6697e)
		{
			HX_STACK_LINE(374)
			int tmp = ::snow::_system::input::Scancodes_obj::mail;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(374)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	mail= _Function_0_148::Block();
struct _Function_0_149{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",375,0x16a6697e)
		{
			HX_STACK_LINE(375)
			int tmp = ::snow::_system::input::Scancodes_obj::calculator;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(375)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	calculator= _Function_0_149::Block();
struct _Function_0_150{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",376,0x16a6697e)
		{
			HX_STACK_LINE(376)
			int tmp = ::snow::_system::input::Scancodes_obj::computer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(376)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	computer= _Function_0_150::Block();
struct _Function_0_151{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",377,0x16a6697e)
		{
			HX_STACK_LINE(377)
			int tmp = ::snow::_system::input::Scancodes_obj::ac_search;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(377)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	ac_search= _Function_0_151::Block();
struct _Function_0_152{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",378,0x16a6697e)
		{
			HX_STACK_LINE(378)
			int tmp = ::snow::_system::input::Scancodes_obj::ac_home;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(378)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	ac_home= _Function_0_152::Block();
struct _Function_0_153{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",379,0x16a6697e)
		{
			HX_STACK_LINE(379)
			int tmp = ::snow::_system::input::Scancodes_obj::ac_back;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(379)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	ac_back= _Function_0_153::Block();
struct _Function_0_154{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",380,0x16a6697e)
		{
			HX_STACK_LINE(380)
			int tmp = ::snow::_system::input::Scancodes_obj::ac_forward;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(380)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	ac_forward= _Function_0_154::Block();
struct _Function_0_155{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",381,0x16a6697e)
		{
			HX_STACK_LINE(381)
			int tmp = ::snow::_system::input::Scancodes_obj::ac_stop;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(381)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	ac_stop= _Function_0_155::Block();
struct _Function_0_156{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",382,0x16a6697e)
		{
			HX_STACK_LINE(382)
			int tmp = ::snow::_system::input::Scancodes_obj::ac_refresh;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(382)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	ac_refresh= _Function_0_156::Block();
struct _Function_0_157{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",383,0x16a6697e)
		{
			HX_STACK_LINE(383)
			int tmp = ::snow::_system::input::Scancodes_obj::ac_bookmarks;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(383)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	ac_bookmarks= _Function_0_157::Block();
struct _Function_0_158{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",385,0x16a6697e)
		{
			HX_STACK_LINE(385)
			int tmp = ::snow::_system::input::Scancodes_obj::brightnessdown;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(385)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	brightnessdown= _Function_0_158::Block();
struct _Function_0_159{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",386,0x16a6697e)
		{
			HX_STACK_LINE(386)
			int tmp = ::snow::_system::input::Scancodes_obj::brightnessup;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(386)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	brightnessup= _Function_0_159::Block();
struct _Function_0_160{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",387,0x16a6697e)
		{
			HX_STACK_LINE(387)
			int tmp = ::snow::_system::input::Scancodes_obj::displayswitch;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(387)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	displayswitch= _Function_0_160::Block();
struct _Function_0_161{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",388,0x16a6697e)
		{
			HX_STACK_LINE(388)
			int tmp = ::snow::_system::input::Scancodes_obj::kbdillumtoggle;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(388)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kbdillumtoggle= _Function_0_161::Block();
struct _Function_0_162{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",389,0x16a6697e)
		{
			HX_STACK_LINE(389)
			int tmp = ::snow::_system::input::Scancodes_obj::kbdillumdown;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(389)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kbdillumdown= _Function_0_162::Block();
struct _Function_0_163{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",390,0x16a6697e)
		{
			HX_STACK_LINE(390)
			int tmp = ::snow::_system::input::Scancodes_obj::kbdillumup;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(390)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	kbdillumup= _Function_0_163::Block();
struct _Function_0_164{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",391,0x16a6697e)
		{
			HX_STACK_LINE(391)
			int tmp = ::snow::_system::input::Scancodes_obj::eject;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(391)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	eject= _Function_0_164::Block();
struct _Function_0_165{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/system/input/Keycodes.hx",392,0x16a6697e)
		{
			HX_STACK_LINE(392)
			int tmp = ::snow::_system::input::Scancodes_obj::sleep;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(392)
			return ::snow::_system::input::Keycodes_obj::from_scan(tmp);
		}
		return null();
	}
};
	sleep= _Function_0_165::Block();
}

} // end namespace snow
} // end namespace system
} // end namespace input
