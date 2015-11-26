#include <hxcpp.h>

#ifndef INCLUDED_snow_system_input_Scancodes
#include <snow/system/input/Scancodes.h>
#endif
namespace snow{
namespace _system{
namespace input{

Void Scancodes_obj::__construct()
{
	return null();
}

//Scancodes_obj::~Scancodes_obj() { }

Dynamic Scancodes_obj::__CreateEmpty() { return  new Scancodes_obj; }
hx::ObjectPtr< Scancodes_obj > Scancodes_obj::__new()
{  hx::ObjectPtr< Scancodes_obj > _result_ = new Scancodes_obj();
	_result_->__construct();
	return _result_;}

Dynamic Scancodes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scancodes_obj > _result_ = new Scancodes_obj();
	_result_->__construct();
	return _result_;}

::String Scancodes_obj::name( int scancode){
	HX_STACK_FRAME("snow.system.input.Scancodes","name",0x95a33848,"snow.system.input.Scancodes.name","snow/system/input/Keycodes.hx",402,0x16a6697e)
	HX_STACK_ARG(scancode,"scancode")
	HX_STACK_LINE(404)
	::String res = null();		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(406)
	bool tmp = (scancode >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	if ((tmp)){
		HX_STACK_LINE(406)
		int tmp2 = scancode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(406)
		int tmp3 = ::snow::_system::input::Scancodes_obj::scancode_names->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(406)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(406)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(406)
		tmp1 = false;
	}
	HX_STACK_LINE(406)
	if ((tmp1)){
		HX_STACK_LINE(407)
		::String tmp2 = ::snow::_system::input::Scancodes_obj::scancode_names->__get(scancode);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(407)
		res = tmp2;
	}
	HX_STACK_LINE(410)
	bool tmp2 = (res != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(410)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(410)
	if ((tmp2)){
		HX_STACK_LINE(410)
		tmp3 = res;
	}
	else{
		HX_STACK_LINE(410)
		tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(410)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scancodes_obj,name,return )

int Scancodes_obj::MASK;

int Scancodes_obj::unknown;

int Scancodes_obj::key_a;

int Scancodes_obj::key_b;

int Scancodes_obj::key_c;

int Scancodes_obj::key_d;

int Scancodes_obj::key_e;

int Scancodes_obj::key_f;

int Scancodes_obj::key_g;

int Scancodes_obj::key_h;

int Scancodes_obj::key_i;

int Scancodes_obj::key_j;

int Scancodes_obj::key_k;

int Scancodes_obj::key_l;

int Scancodes_obj::key_m;

int Scancodes_obj::key_n;

int Scancodes_obj::key_o;

int Scancodes_obj::key_p;

int Scancodes_obj::key_q;

int Scancodes_obj::key_r;

int Scancodes_obj::key_s;

int Scancodes_obj::key_t;

int Scancodes_obj::key_u;

int Scancodes_obj::key_v;

int Scancodes_obj::key_w;

int Scancodes_obj::key_x;

int Scancodes_obj::key_y;

int Scancodes_obj::key_z;

int Scancodes_obj::key_1;

int Scancodes_obj::key_2;

int Scancodes_obj::key_3;

int Scancodes_obj::key_4;

int Scancodes_obj::key_5;

int Scancodes_obj::key_6;

int Scancodes_obj::key_7;

int Scancodes_obj::key_8;

int Scancodes_obj::key_9;

int Scancodes_obj::key_0;

int Scancodes_obj::enter;

int Scancodes_obj::escape;

int Scancodes_obj::backspace;

int Scancodes_obj::tab;

int Scancodes_obj::space;

int Scancodes_obj::minus;

int Scancodes_obj::equals;

int Scancodes_obj::leftbracket;

int Scancodes_obj::rightbracket;

int Scancodes_obj::backslash;

int Scancodes_obj::nonushash;

int Scancodes_obj::semicolon;

int Scancodes_obj::apostrophe;

int Scancodes_obj::grave;

int Scancodes_obj::comma;

int Scancodes_obj::period;

int Scancodes_obj::slash;

int Scancodes_obj::capslock;

int Scancodes_obj::f1;

int Scancodes_obj::f2;

int Scancodes_obj::f3;

int Scancodes_obj::f4;

int Scancodes_obj::f5;

int Scancodes_obj::f6;

int Scancodes_obj::f7;

int Scancodes_obj::f8;

int Scancodes_obj::f9;

int Scancodes_obj::f10;

int Scancodes_obj::f11;

int Scancodes_obj::f12;

int Scancodes_obj::printscreen;

int Scancodes_obj::scrolllock;

int Scancodes_obj::pause;

int Scancodes_obj::insert;

int Scancodes_obj::home;

int Scancodes_obj::pageup;

int Scancodes_obj::_delete;

int Scancodes_obj::end;

int Scancodes_obj::pagedown;

int Scancodes_obj::right;

int Scancodes_obj::left;

int Scancodes_obj::down;

int Scancodes_obj::up;

int Scancodes_obj::numlockclear;

int Scancodes_obj::kp_divide;

int Scancodes_obj::kp_multiply;

int Scancodes_obj::kp_minus;

int Scancodes_obj::kp_plus;

int Scancodes_obj::kp_enter;

int Scancodes_obj::kp_1;

int Scancodes_obj::kp_2;

int Scancodes_obj::kp_3;

int Scancodes_obj::kp_4;

int Scancodes_obj::kp_5;

int Scancodes_obj::kp_6;

int Scancodes_obj::kp_7;

int Scancodes_obj::kp_8;

int Scancodes_obj::kp_9;

int Scancodes_obj::kp_0;

int Scancodes_obj::kp_period;

int Scancodes_obj::nonusbackslash;

int Scancodes_obj::application;

int Scancodes_obj::power;

int Scancodes_obj::kp_equals;

int Scancodes_obj::f13;

int Scancodes_obj::f14;

int Scancodes_obj::f15;

int Scancodes_obj::f16;

int Scancodes_obj::f17;

int Scancodes_obj::f18;

int Scancodes_obj::f19;

int Scancodes_obj::f20;

int Scancodes_obj::f21;

int Scancodes_obj::f22;

int Scancodes_obj::f23;

int Scancodes_obj::f24;

int Scancodes_obj::execute;

int Scancodes_obj::help;

int Scancodes_obj::menu;

int Scancodes_obj::select;

int Scancodes_obj::stop;

int Scancodes_obj::again;

int Scancodes_obj::undo;

int Scancodes_obj::cut;

int Scancodes_obj::copy;

int Scancodes_obj::paste;

int Scancodes_obj::find;

int Scancodes_obj::mute;

int Scancodes_obj::volumeup;

int Scancodes_obj::volumedown;

int Scancodes_obj::kp_comma;

int Scancodes_obj::kp_equalsas400;

int Scancodes_obj::international1;

int Scancodes_obj::international2;

int Scancodes_obj::international3;

int Scancodes_obj::international4;

int Scancodes_obj::international5;

int Scancodes_obj::international6;

int Scancodes_obj::international7;

int Scancodes_obj::international8;

int Scancodes_obj::international9;

int Scancodes_obj::lang1;

int Scancodes_obj::lang2;

int Scancodes_obj::lang3;

int Scancodes_obj::lang4;

int Scancodes_obj::lang5;

int Scancodes_obj::lang6;

int Scancodes_obj::lang7;

int Scancodes_obj::lang8;

int Scancodes_obj::lang9;

int Scancodes_obj::alterase;

int Scancodes_obj::sysreq;

int Scancodes_obj::cancel;

int Scancodes_obj::clear;

int Scancodes_obj::prior;

int Scancodes_obj::return2;

int Scancodes_obj::separator;

int Scancodes_obj::out;

int Scancodes_obj::oper;

int Scancodes_obj::clearagain;

int Scancodes_obj::crsel;

int Scancodes_obj::exsel;

int Scancodes_obj::kp_00;

int Scancodes_obj::kp_000;

int Scancodes_obj::thousandsseparator;

int Scancodes_obj::decimalseparator;

int Scancodes_obj::currencyunit;

int Scancodes_obj::currencysubunit;

int Scancodes_obj::kp_leftparen;

int Scancodes_obj::kp_rightparen;

int Scancodes_obj::kp_leftbrace;

int Scancodes_obj::kp_rightbrace;

int Scancodes_obj::kp_tab;

int Scancodes_obj::kp_backspace;

int Scancodes_obj::kp_a;

int Scancodes_obj::kp_b;

int Scancodes_obj::kp_c;

int Scancodes_obj::kp_d;

int Scancodes_obj::kp_e;

int Scancodes_obj::kp_f;

int Scancodes_obj::kp_xor;

int Scancodes_obj::kp_power;

int Scancodes_obj::kp_percent;

int Scancodes_obj::kp_less;

int Scancodes_obj::kp_greater;

int Scancodes_obj::kp_ampersand;

int Scancodes_obj::kp_dblampersand;

int Scancodes_obj::kp_verticalbar;

int Scancodes_obj::kp_dblverticalbar;

int Scancodes_obj::kp_colon;

int Scancodes_obj::kp_hash;

int Scancodes_obj::kp_space;

int Scancodes_obj::kp_at;

int Scancodes_obj::kp_exclam;

int Scancodes_obj::kp_memstore;

int Scancodes_obj::kp_memrecall;

int Scancodes_obj::kp_memclear;

int Scancodes_obj::kp_memadd;

int Scancodes_obj::kp_memsubtract;

int Scancodes_obj::kp_memmultiply;

int Scancodes_obj::kp_memdivide;

int Scancodes_obj::kp_plusminus;

int Scancodes_obj::kp_clear;

int Scancodes_obj::kp_clearentry;

int Scancodes_obj::kp_binary;

int Scancodes_obj::kp_octal;

int Scancodes_obj::kp_decimal;

int Scancodes_obj::kp_hexadecimal;

int Scancodes_obj::lctrl;

int Scancodes_obj::lshift;

int Scancodes_obj::lalt;

int Scancodes_obj::lmeta;

int Scancodes_obj::rctrl;

int Scancodes_obj::rshift;

int Scancodes_obj::ralt;

int Scancodes_obj::rmeta;

int Scancodes_obj::mode;

int Scancodes_obj::audionext;

int Scancodes_obj::audioprev;

int Scancodes_obj::audiostop;

int Scancodes_obj::audioplay;

int Scancodes_obj::audiomute;

int Scancodes_obj::mediaselect;

int Scancodes_obj::www;

int Scancodes_obj::mail;

int Scancodes_obj::calculator;

int Scancodes_obj::computer;

int Scancodes_obj::ac_search;

int Scancodes_obj::ac_home;

int Scancodes_obj::ac_back;

int Scancodes_obj::ac_forward;

int Scancodes_obj::ac_stop;

int Scancodes_obj::ac_refresh;

int Scancodes_obj::ac_bookmarks;

int Scancodes_obj::brightnessdown;

int Scancodes_obj::brightnessup;

int Scancodes_obj::displayswitch;

int Scancodes_obj::kbdillumtoggle;

int Scancodes_obj::kbdillumdown;

int Scancodes_obj::kbdillumup;

int Scancodes_obj::eject;

int Scancodes_obj::sleep;

int Scancodes_obj::app1;

int Scancodes_obj::app2;

Array< ::String > Scancodes_obj::scancode_names;


Scancodes_obj::Scancodes_obj()
{
}

bool Scancodes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
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
		if (HX_FIELD_EQ(inName,"MASK") ) { outValue = MASK; return true;  }
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
		if (HX_FIELD_EQ(inName,"app1") ) { outValue = app1; return true;  }
		if (HX_FIELD_EQ(inName,"app2") ) { outValue = app2; return true;  }
		break;
	case 5:
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
		if (HX_FIELD_EQ(inName,"key_1") ) { outValue = key_1; return true;  }
		if (HX_FIELD_EQ(inName,"key_2") ) { outValue = key_2; return true;  }
		if (HX_FIELD_EQ(inName,"key_3") ) { outValue = key_3; return true;  }
		if (HX_FIELD_EQ(inName,"key_4") ) { outValue = key_4; return true;  }
		if (HX_FIELD_EQ(inName,"key_5") ) { outValue = key_5; return true;  }
		if (HX_FIELD_EQ(inName,"key_6") ) { outValue = key_6; return true;  }
		if (HX_FIELD_EQ(inName,"key_7") ) { outValue = key_7; return true;  }
		if (HX_FIELD_EQ(inName,"key_8") ) { outValue = key_8; return true;  }
		if (HX_FIELD_EQ(inName,"key_9") ) { outValue = key_9; return true;  }
		if (HX_FIELD_EQ(inName,"key_0") ) { outValue = key_0; return true;  }
		if (HX_FIELD_EQ(inName,"enter") ) { outValue = enter; return true;  }
		if (HX_FIELD_EQ(inName,"space") ) { outValue = space; return true;  }
		if (HX_FIELD_EQ(inName,"minus") ) { outValue = minus; return true;  }
		if (HX_FIELD_EQ(inName,"grave") ) { outValue = grave; return true;  }
		if (HX_FIELD_EQ(inName,"comma") ) { outValue = comma; return true;  }
		if (HX_FIELD_EQ(inName,"slash") ) { outValue = slash; return true;  }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause; return true;  }
		if (HX_FIELD_EQ(inName,"right") ) { outValue = right; return true;  }
		if (HX_FIELD_EQ(inName,"power") ) { outValue = power; return true;  }
		if (HX_FIELD_EQ(inName,"again") ) { outValue = again; return true;  }
		if (HX_FIELD_EQ(inName,"paste") ) { outValue = paste; return true;  }
		if (HX_FIELD_EQ(inName,"lang1") ) { outValue = lang1; return true;  }
		if (HX_FIELD_EQ(inName,"lang2") ) { outValue = lang2; return true;  }
		if (HX_FIELD_EQ(inName,"lang3") ) { outValue = lang3; return true;  }
		if (HX_FIELD_EQ(inName,"lang4") ) { outValue = lang4; return true;  }
		if (HX_FIELD_EQ(inName,"lang5") ) { outValue = lang5; return true;  }
		if (HX_FIELD_EQ(inName,"lang6") ) { outValue = lang6; return true;  }
		if (HX_FIELD_EQ(inName,"lang7") ) { outValue = lang7; return true;  }
		if (HX_FIELD_EQ(inName,"lang8") ) { outValue = lang8; return true;  }
		if (HX_FIELD_EQ(inName,"lang9") ) { outValue = lang9; return true;  }
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
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals; return true;  }
		if (HX_FIELD_EQ(inName,"period") ) { outValue = period; return true;  }
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
		if (HX_FIELD_EQ(inName,"unknown") ) { outValue = unknown; return true;  }
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
		if (HX_FIELD_EQ(inName,"backspace") ) { outValue = backspace; return true;  }
		if (HX_FIELD_EQ(inName,"backslash") ) { outValue = backslash; return true;  }
		if (HX_FIELD_EQ(inName,"nonushash") ) { outValue = nonushash; return true;  }
		if (HX_FIELD_EQ(inName,"semicolon") ) { outValue = semicolon; return true;  }
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
		if (HX_FIELD_EQ(inName,"apostrophe") ) { outValue = apostrophe; return true;  }
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
		if (HX_FIELD_EQ(inName,"nonusbackslash") ) { outValue = nonusbackslash; return true;  }
		if (HX_FIELD_EQ(inName,"kp_equalsas400") ) { outValue = kp_equalsas400; return true;  }
		if (HX_FIELD_EQ(inName,"international1") ) { outValue = international1; return true;  }
		if (HX_FIELD_EQ(inName,"international2") ) { outValue = international2; return true;  }
		if (HX_FIELD_EQ(inName,"international3") ) { outValue = international3; return true;  }
		if (HX_FIELD_EQ(inName,"international4") ) { outValue = international4; return true;  }
		if (HX_FIELD_EQ(inName,"international5") ) { outValue = international5; return true;  }
		if (HX_FIELD_EQ(inName,"international6") ) { outValue = international6; return true;  }
		if (HX_FIELD_EQ(inName,"international7") ) { outValue = international7; return true;  }
		if (HX_FIELD_EQ(inName,"international8") ) { outValue = international8; return true;  }
		if (HX_FIELD_EQ(inName,"international9") ) { outValue = international9; return true;  }
		if (HX_FIELD_EQ(inName,"kp_verticalbar") ) { outValue = kp_verticalbar; return true;  }
		if (HX_FIELD_EQ(inName,"kp_memsubtract") ) { outValue = kp_memsubtract; return true;  }
		if (HX_FIELD_EQ(inName,"kp_memmultiply") ) { outValue = kp_memmultiply; return true;  }
		if (HX_FIELD_EQ(inName,"kp_hexadecimal") ) { outValue = kp_hexadecimal; return true;  }
		if (HX_FIELD_EQ(inName,"brightnessdown") ) { outValue = brightnessdown; return true;  }
		if (HX_FIELD_EQ(inName,"kbdillumtoggle") ) { outValue = kbdillumtoggle; return true;  }
		if (HX_FIELD_EQ(inName,"scancode_names") ) { outValue = scancode_names; return true;  }
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
	{hx::fsInt,(void *) &Scancodes_obj::MASK,HX_HCSTRING("MASK","\xec","\x08","\x17","\x33")},
	{hx::fsInt,(void *) &Scancodes_obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &Scancodes_obj::key_a,HX_HCSTRING("key_a","\x81","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_b,HX_HCSTRING("key_b","\x82","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_c,HX_HCSTRING("key_c","\x83","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_d,HX_HCSTRING("key_d","\x84","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_e,HX_HCSTRING("key_e","\x85","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_f,HX_HCSTRING("key_f","\x86","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_g,HX_HCSTRING("key_g","\x87","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_h,HX_HCSTRING("key_h","\x88","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_i,HX_HCSTRING("key_i","\x89","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_j,HX_HCSTRING("key_j","\x8a","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_k,HX_HCSTRING("key_k","\x8b","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_l,HX_HCSTRING("key_l","\x8c","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_m,HX_HCSTRING("key_m","\x8d","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_n,HX_HCSTRING("key_n","\x8e","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_o,HX_HCSTRING("key_o","\x8f","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_p,HX_HCSTRING("key_p","\x90","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_q,HX_HCSTRING("key_q","\x91","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_r,HX_HCSTRING("key_r","\x92","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_s,HX_HCSTRING("key_s","\x93","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_t,HX_HCSTRING("key_t","\x94","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_u,HX_HCSTRING("key_u","\x95","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_v,HX_HCSTRING("key_v","\x96","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_w,HX_HCSTRING("key_w","\x97","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_x,HX_HCSTRING("key_x","\x98","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_y,HX_HCSTRING("key_y","\x99","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_z,HX_HCSTRING("key_z","\x9a","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_1,HX_HCSTRING("key_1","\x51","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_2,HX_HCSTRING("key_2","\x52","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_3,HX_HCSTRING("key_3","\x53","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_4,HX_HCSTRING("key_4","\x54","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_5,HX_HCSTRING("key_5","\x55","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_6,HX_HCSTRING("key_6","\x56","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_7,HX_HCSTRING("key_7","\x57","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_8,HX_HCSTRING("key_8","\x58","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_9,HX_HCSTRING("key_9","\x59","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::key_0,HX_HCSTRING("key_0","\x50","\xc2","\xfe","\xde")},
	{hx::fsInt,(void *) &Scancodes_obj::enter,HX_HCSTRING("enter","\x18","\x6d","\x86","\x70")},
	{hx::fsInt,(void *) &Scancodes_obj::escape,HX_HCSTRING("escape","\x81","\x43","\xda","\xda")},
	{hx::fsInt,(void *) &Scancodes_obj::backspace,HX_HCSTRING("backspace","\x3f","\x85","\xea","\xca")},
	{hx::fsInt,(void *) &Scancodes_obj::tab,HX_HCSTRING("tab","\x55","\x5a","\x58","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::space,HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsInt,(void *) &Scancodes_obj::minus,HX_HCSTRING("minus","\x70","\x80","\x68","\x08")},
	{hx::fsInt,(void *) &Scancodes_obj::equals,HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf")},
	{hx::fsInt,(void *) &Scancodes_obj::leftbracket,HX_HCSTRING("leftbracket","\x01","\x9d","\xc8","\xcd")},
	{hx::fsInt,(void *) &Scancodes_obj::rightbracket,HX_HCSTRING("rightbracket","\xcc","\xed","\xe3","\xb8")},
	{hx::fsInt,(void *) &Scancodes_obj::backslash,HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8")},
	{hx::fsInt,(void *) &Scancodes_obj::nonushash,HX_HCSTRING("nonushash","\xf9","\xbd","\xb1","\x92")},
	{hx::fsInt,(void *) &Scancodes_obj::semicolon,HX_HCSTRING("semicolon","\x31","\x16","\xd2","\x4d")},
	{hx::fsInt,(void *) &Scancodes_obj::apostrophe,HX_HCSTRING("apostrophe","\xef","\x32","\xa1","\xef")},
	{hx::fsInt,(void *) &Scancodes_obj::grave,HX_HCSTRING("grave","\x85","\x14","\xea","\x99")},
	{hx::fsInt,(void *) &Scancodes_obj::comma,HX_HCSTRING("comma","\xd5","\x31","\x5d","\x4a")},
	{hx::fsInt,(void *) &Scancodes_obj::period,HX_HCSTRING("period","\x01","\x61","\x1b","\x3b")},
	{hx::fsInt,(void *) &Scancodes_obj::slash,HX_HCSTRING("slash","\x3d","\xc0","\xc1","\x7e")},
	{hx::fsInt,(void *) &Scancodes_obj::capslock,HX_HCSTRING("capslock","\x8c","\xdc","\xe8","\x26")},
	{hx::fsInt,(void *) &Scancodes_obj::f1,HX_HCSTRING("f1","\x0b","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f2,HX_HCSTRING("f2","\x0c","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f3,HX_HCSTRING("f3","\x0d","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f4,HX_HCSTRING("f4","\x0e","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f5,HX_HCSTRING("f5","\x0f","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f6,HX_HCSTRING("f6","\x10","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f7,HX_HCSTRING("f7","\x11","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f8,HX_HCSTRING("f8","\x12","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f9,HX_HCSTRING("f9","\x13","\x59","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f10,HX_HCSTRING("f10","\xc5","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f11,HX_HCSTRING("f11","\xc6","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f12,HX_HCSTRING("f12","\xc7","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::printscreen,HX_HCSTRING("printscreen","\x59","\x73","\x40","\x3a")},
	{hx::fsInt,(void *) &Scancodes_obj::scrolllock,HX_HCSTRING("scrolllock","\x78","\xfe","\x9d","\x1a")},
	{hx::fsInt,(void *) &Scancodes_obj::pause,HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd")},
	{hx::fsInt,(void *) &Scancodes_obj::insert,HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d")},
	{hx::fsInt,(void *) &Scancodes_obj::home,HX_HCSTRING("home","\x1f","\xca","\x12","\x45")},
	{hx::fsInt,(void *) &Scancodes_obj::pageup,HX_HCSTRING("pageup","\x6a","\xb2","\x38","\xe6")},
	{hx::fsInt,(void *) &Scancodes_obj::_delete,HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::end,HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::pagedown,HX_HCSTRING("pagedown","\x31","\xa6","\x5c","\x60")},
	{hx::fsInt,(void *) &Scancodes_obj::right,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsInt,(void *) &Scancodes_obj::left,HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::down,HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")},
	{hx::fsInt,(void *) &Scancodes_obj::up,HX_HCSTRING("up","\x5b","\x66","\x00","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::numlockclear,HX_HCSTRING("numlockclear","\xbc","\xea","\xac","\xf5")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_divide,HX_HCSTRING("kp_divide","\x13","\x12","\x82","\x5e")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_multiply,HX_HCSTRING("kp_multiply","\x3e","\x1f","\xae","\xdf")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_minus,HX_HCSTRING("kp_minus","\x16","\x6f","\xc9","\x1d")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_plus,HX_HCSTRING("kp_plus","\x74","\x67","\xdc","\x26")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_enter,HX_HCSTRING("kp_enter","\xbe","\x5b","\xe7","\x85")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_1,HX_HCSTRING("kp_1","\xd7","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_2,HX_HCSTRING("kp_2","\xd8","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_3,HX_HCSTRING("kp_3","\xd9","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_4,HX_HCSTRING("kp_4","\xda","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_5,HX_HCSTRING("kp_5","\xdb","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_6,HX_HCSTRING("kp_6","\xdc","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_7,HX_HCSTRING("kp_7","\xdd","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_8,HX_HCSTRING("kp_8","\xde","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_9,HX_HCSTRING("kp_9","\xdf","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_0,HX_HCSTRING("kp_0","\xd6","\x23","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_period,HX_HCSTRING("kp_period","\x9b","\x43","\x8b","\xda")},
	{hx::fsInt,(void *) &Scancodes_obj::nonusbackslash,HX_HCSTRING("nonusbackslash","\xab","\xee","\x91","\x34")},
	{hx::fsInt,(void *) &Scancodes_obj::application,HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsInt,(void *) &Scancodes_obj::power,HX_HCSTRING("power","\x05","\x4c","\x9a","\xc6")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_equals,HX_HCSTRING("kp_equals","\xd9","\xd0","\x62","\x5f")},
	{hx::fsInt,(void *) &Scancodes_obj::f13,HX_HCSTRING("f13","\xc8","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f14,HX_HCSTRING("f14","\xc9","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f15,HX_HCSTRING("f15","\xca","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f16,HX_HCSTRING("f16","\xcb","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f17,HX_HCSTRING("f17","\xcc","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f18,HX_HCSTRING("f18","\xcd","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f19,HX_HCSTRING("f19","\xce","\x90","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f20,HX_HCSTRING("f20","\xa4","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f21,HX_HCSTRING("f21","\xa5","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f22,HX_HCSTRING("f22","\xa6","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f23,HX_HCSTRING("f23","\xa7","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::f24,HX_HCSTRING("f24","\xa8","\x91","\x4d","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::execute,HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc")},
	{hx::fsInt,(void *) &Scancodes_obj::help,HX_HCSTRING("help","\xc1","\x32","\x0b","\x45")},
	{hx::fsInt,(void *) &Scancodes_obj::menu,HX_HCSTRING("menu","\x9f","\x45","\x59","\x48")},
	{hx::fsInt,(void *) &Scancodes_obj::select,HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::stop,HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c")},
	{hx::fsInt,(void *) &Scancodes_obj::again,HX_HCSTRING("again","\x60","\x35","\x3d","\x1e")},
	{hx::fsInt,(void *) &Scancodes_obj::undo,HX_HCSTRING("undo","\x24","\xc6","\xa9","\x4d")},
	{hx::fsInt,(void *) &Scancodes_obj::cut,HX_HCSTRING("cut","\x82","\x85","\x4b","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::copy,HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41")},
	{hx::fsInt,(void *) &Scancodes_obj::paste,HX_HCSTRING("paste","\x53","\x53","\x56","\xbd")},
	{hx::fsInt,(void *) &Scancodes_obj::find,HX_HCSTRING("find","\x39","\xd0","\xbb","\x43")},
	{hx::fsInt,(void *) &Scancodes_obj::mute,HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48")},
	{hx::fsInt,(void *) &Scancodes_obj::volumeup,HX_HCSTRING("volumeup","\xb5","\x3a","\xd5","\x39")},
	{hx::fsInt,(void *) &Scancodes_obj::volumedown,HX_HCSTRING("volumedown","\x3c","\x17","\x64","\x3a")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_comma,HX_HCSTRING("kp_comma","\x7b","\x20","\xbe","\x5f")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_equalsas400,HX_HCSTRING("kp_equalsas400","\x09","\xea","\xe5","\xc1")},
	{hx::fsInt,(void *) &Scancodes_obj::international1,HX_HCSTRING("international1","\x23","\x61","\xf9","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::international2,HX_HCSTRING("international2","\x24","\x61","\xf9","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::international3,HX_HCSTRING("international3","\x25","\x61","\xf9","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::international4,HX_HCSTRING("international4","\x26","\x61","\xf9","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::international5,HX_HCSTRING("international5","\x27","\x61","\xf9","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::international6,HX_HCSTRING("international6","\x28","\x61","\xf9","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::international7,HX_HCSTRING("international7","\x29","\x61","\xf9","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::international8,HX_HCSTRING("international8","\x2a","\x61","\xf9","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::international9,HX_HCSTRING("international9","\x2b","\x61","\xf9","\x6a")},
	{hx::fsInt,(void *) &Scancodes_obj::lang1,HX_HCSTRING("lang1","\x83","\x2a","\xb8","\x6f")},
	{hx::fsInt,(void *) &Scancodes_obj::lang2,HX_HCSTRING("lang2","\x84","\x2a","\xb8","\x6f")},
	{hx::fsInt,(void *) &Scancodes_obj::lang3,HX_HCSTRING("lang3","\x85","\x2a","\xb8","\x6f")},
	{hx::fsInt,(void *) &Scancodes_obj::lang4,HX_HCSTRING("lang4","\x86","\x2a","\xb8","\x6f")},
	{hx::fsInt,(void *) &Scancodes_obj::lang5,HX_HCSTRING("lang5","\x87","\x2a","\xb8","\x6f")},
	{hx::fsInt,(void *) &Scancodes_obj::lang6,HX_HCSTRING("lang6","\x88","\x2a","\xb8","\x6f")},
	{hx::fsInt,(void *) &Scancodes_obj::lang7,HX_HCSTRING("lang7","\x89","\x2a","\xb8","\x6f")},
	{hx::fsInt,(void *) &Scancodes_obj::lang8,HX_HCSTRING("lang8","\x8a","\x2a","\xb8","\x6f")},
	{hx::fsInt,(void *) &Scancodes_obj::lang9,HX_HCSTRING("lang9","\x8b","\x2a","\xb8","\x6f")},
	{hx::fsInt,(void *) &Scancodes_obj::alterase,HX_HCSTRING("alterase","\x1d","\x1b","\xae","\x0b")},
	{hx::fsInt,(void *) &Scancodes_obj::sysreq,HX_HCSTRING("sysreq","\x71","\x12","\xe1","\xf2")},
	{hx::fsInt,(void *) &Scancodes_obj::cancel,HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8")},
	{hx::fsInt,(void *) &Scancodes_obj::clear,HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48")},
	{hx::fsInt,(void *) &Scancodes_obj::prior,HX_HCSTRING("prior","\x0a","\x59","\x8b","\xc8")},
	{hx::fsInt,(void *) &Scancodes_obj::return2,HX_HCSTRING("return2","\x82","\x75","\xc2","\xfe")},
	{hx::fsInt,(void *) &Scancodes_obj::separator,HX_HCSTRING("separator","\x65","\x60","\x7f","\x31")},
	{hx::fsInt,(void *) &Scancodes_obj::out,HX_HCSTRING("out","\x8e","\xa0","\x54","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::oper,HX_HCSTRING("oper","\xce","\x03","\xb4","\x49")},
	{hx::fsInt,(void *) &Scancodes_obj::clearagain,HX_HCSTRING("clearagain","\xb3","\x04","\x1a","\x60")},
	{hx::fsInt,(void *) &Scancodes_obj::crsel,HX_HCSTRING("crsel","\x4b","\x5c","\x5d","\x4c")},
	{hx::fsInt,(void *) &Scancodes_obj::exsel,HX_HCSTRING("exsel","\x07","\xcd","\x21","\x77")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_00,HX_HCSTRING("kp_00","\x9a","\x37","\x30","\xe6")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_000,HX_HCSTRING("kp_000","\x56","\x6f","\x00","\x84")},
	{hx::fsInt,(void *) &Scancodes_obj::thousandsseparator,HX_HCSTRING("thousandsseparator","\xf0","\x9f","\x19","\x09")},
	{hx::fsInt,(void *) &Scancodes_obj::decimalseparator,HX_HCSTRING("decimalseparator","\xb4","\x11","\xc3","\x9e")},
	{hx::fsInt,(void *) &Scancodes_obj::currencyunit,HX_HCSTRING("currencyunit","\x55","\x4e","\xf3","\xe0")},
	{hx::fsInt,(void *) &Scancodes_obj::currencysubunit,HX_HCSTRING("currencysubunit","\xd3","\x28","\x44","\x32")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_leftparen,HX_HCSTRING("kp_leftparen","\x49","\x3c","\xfc","\x76")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_rightparen,HX_HCSTRING("kp_rightparen","\x48","\x32","\xab","\xea")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_leftbrace,HX_HCSTRING("kp_leftbrace","\xb2","\xd5","\x8f","\x72")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_rightbrace,HX_HCSTRING("kp_rightbrace","\xb1","\xcb","\x3e","\xe6")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_tab,HX_HCSTRING("kp_tab","\x7b","\x33","\x34","\x84")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_backspace,HX_HCSTRING("kp_backspace","\xe5","\xbe","\xde","\x02")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_a,HX_HCSTRING("kp_a","\x07","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_b,HX_HCSTRING("kp_b","\x08","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_c,HX_HCSTRING("kp_c","\x09","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_d,HX_HCSTRING("kp_d","\x0a","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_e,HX_HCSTRING("kp_e","\x0b","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_f,HX_HCSTRING("kp_f","\x0c","\x24","\x0f","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_xor,HX_HCSTRING("kp_xor","\xc1","\x48","\x37","\x84")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_power,HX_HCSTRING("kp_power","\xab","\x3a","\xfb","\xdb")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_percent,HX_HCSTRING("kp_percent","\xeb","\x0e","\x51","\x5b")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_less,HX_HCSTRING("kp_less","\x73","\x3b","\x32","\x24")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_greater,HX_HCSTRING("kp_greater","\x20","\xf5","\x36","\x9a")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_ampersand,HX_HCSTRING("kp_ampersand","\xdb","\xa5","\x52","\x03")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_dblampersand,HX_HCSTRING("kp_dblampersand","\x61","\xb1","\x23","\x42")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_verticalbar,HX_HCSTRING("kp_verticalbar","\x43","\x12","\x24","\x2c")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_dblverticalbar,HX_HCSTRING("kp_dblverticalbar","\x49","\x8b","\xf3","\x89")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_colon,HX_HCSTRING("kp_colon","\x05","\x60","\xbd","\x5f")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_hash,HX_HCSTRING("kp_hash","\xe8","\x57","\x8a","\x21")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_space,HX_HCSTRING("kp_space","\x6c","\x7b","\xc7","\x96")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_at,HX_HCSTRING("kp_at","\x8d","\x62","\x30","\xe6")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_exclam,HX_HCSTRING("kp_exclam","\x62","\x58","\x53","\x5b")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_memstore,HX_HCSTRING("kp_memstore","\xc6","\x16","\x90","\x20")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_memrecall,HX_HCSTRING("kp_memrecall","\x4c","\x57","\x2a","\x4c")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_memclear,HX_HCSTRING("kp_memclear","\x72","\x74","\xd5","\xe4")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_memadd,HX_HCSTRING("kp_memadd","\xc6","\x01","\x25","\xa4")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_memsubtract,HX_HCSTRING("kp_memsubtract","\x4f","\x8f","\xa2","\xcd")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_memmultiply,HX_HCSTRING("kp_memmultiply","\x5f","\xfc","\x1d","\x70")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_memdivide,HX_HCSTRING("kp_memdivide","\xf4","\xb4","\x5a","\x0d")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_plusminus,HX_HCSTRING("kp_plusminus","\x7c","\x94","\x9c","\xa7")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_clear,HX_HCSTRING("kp_clear","\x33","\x60","\xbc","\x5d")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_clearentry,HX_HCSTRING("kp_clearentry","\x5f","\x7f","\x21","\x70")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_binary,HX_HCSTRING("kp_binary","\x9b","\x9e","\x7b","\x8c")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_octal,HX_HCSTRING("kp_octal","\x71","\xcc","\xa3","\x40")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_decimal,HX_HCSTRING("kp_decimal","\xb7","\x18","\x4a","\xc9")},
	{hx::fsInt,(void *) &Scancodes_obj::kp_hexadecimal,HX_HCSTRING("kp_hexadecimal","\x51","\x77","\x89","\xf4")},
	{hx::fsInt,(void *) &Scancodes_obj::lctrl,HX_HCSTRING("lctrl","\x17","\x2f","\x0f","\x71")},
	{hx::fsInt,(void *) &Scancodes_obj::lshift,HX_HCSTRING("lshift","\x96","\xe4","\xad","\xaa")},
	{hx::fsInt,(void *) &Scancodes_obj::lalt,HX_HCSTRING("lalt","\x3d","\x04","\xad","\x47")},
	{hx::fsInt,(void *) &Scancodes_obj::lmeta,HX_HCSTRING("lmeta","\x31","\xf1","\x9f","\x77")},
	{hx::fsInt,(void *) &Scancodes_obj::rctrl,HX_HCSTRING("rctrl","\x1d","\xaa","\x76","\xe5")},
	{hx::fsInt,(void *) &Scancodes_obj::rshift,HX_HCSTRING("rshift","\xd0","\x0e","\xd2","\x10")},
	{hx::fsInt,(void *) &Scancodes_obj::ralt,HX_HCSTRING("ralt","\xf7","\x4b","\xa4","\x4b")},
	{hx::fsInt,(void *) &Scancodes_obj::rmeta,HX_HCSTRING("rmeta","\x37","\x6c","\x07","\xec")},
	{hx::fsInt,(void *) &Scancodes_obj::mode,HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsInt,(void *) &Scancodes_obj::audionext,HX_HCSTRING("audionext","\xc9","\x20","\xdf","\x7d")},
	{hx::fsInt,(void *) &Scancodes_obj::audioprev,HX_HCSTRING("audioprev","\xc9","\x5a","\x3b","\x7f")},
	{hx::fsInt,(void *) &Scancodes_obj::audiostop,HX_HCSTRING("audiostop","\xd8","\x8b","\x38","\x81")},
	{hx::fsInt,(void *) &Scancodes_obj::audioplay,HX_HCSTRING("audioplay","\xca","\xc9","\x36","\x7f")},
	{hx::fsInt,(void *) &Scancodes_obj::audiomute,HX_HCSTRING("audiomute","\xaf","\x0a","\x42","\x7d")},
	{hx::fsInt,(void *) &Scancodes_obj::mediaselect,HX_HCSTRING("mediaselect","\xe0","\xe2","\xe7","\xc3")},
	{hx::fsInt,(void *) &Scancodes_obj::www,HX_HCSTRING("www","\x57","\xb4","\x5a","\x00")},
	{hx::fsInt,(void *) &Scancodes_obj::mail,HX_HCSTRING("mail","\x37","\x38","\x56","\x48")},
	{hx::fsInt,(void *) &Scancodes_obj::calculator,HX_HCSTRING("calculator","\x02","\x2d","\xd8","\xb7")},
	{hx::fsInt,(void *) &Scancodes_obj::computer,HX_HCSTRING("computer","\x1b","\x41","\xc6","\x85")},
	{hx::fsInt,(void *) &Scancodes_obj::ac_search,HX_HCSTRING("ac_search","\x65","\x9c","\x69","\xdd")},
	{hx::fsInt,(void *) &Scancodes_obj::ac_home,HX_HCSTRING("ac_home","\xdc","\x9d","\x1a","\x4f")},
	{hx::fsInt,(void *) &Scancodes_obj::ac_back,HX_HCSTRING("ac_back","\xe4","\xad","\x18","\x4b")},
	{hx::fsInt,(void *) &Scancodes_obj::ac_forward,HX_HCSTRING("ac_forward","\x28","\x42","\x16","\x8f")},
	{hx::fsInt,(void *) &Scancodes_obj::ac_stop,HX_HCSTRING("ac_stop","\xbf","\xc3","\x63","\x56")},
	{hx::fsInt,(void *) &Scancodes_obj::ac_refresh,HX_HCSTRING("ac_refresh","\x3e","\x3a","\x6c","\x96")},
	{hx::fsInt,(void *) &Scancodes_obj::ac_bookmarks,HX_HCSTRING("ac_bookmarks","\x20","\x12","\x98","\x7b")},
	{hx::fsInt,(void *) &Scancodes_obj::brightnessdown,HX_HCSTRING("brightnessdown","\xb3","\x42","\xe9","\x8a")},
	{hx::fsInt,(void *) &Scancodes_obj::brightnessup,HX_HCSTRING("brightnessup","\x6c","\xca","\x4d","\xcf")},
	{hx::fsInt,(void *) &Scancodes_obj::displayswitch,HX_HCSTRING("displayswitch","\xb6","\x91","\x47","\x52")},
	{hx::fsInt,(void *) &Scancodes_obj::kbdillumtoggle,HX_HCSTRING("kbdillumtoggle","\x48","\x0a","\x5b","\x21")},
	{hx::fsInt,(void *) &Scancodes_obj::kbdillumdown,HX_HCSTRING("kbdillumdown","\x16","\x6e","\x75","\xeb")},
	{hx::fsInt,(void *) &Scancodes_obj::kbdillumup,HX_HCSTRING("kbdillumup","\x0f","\x47","\x07","\x31")},
	{hx::fsInt,(void *) &Scancodes_obj::eject,HX_HCSTRING("eject","\x11","\x2f","\xd6","\x6d")},
	{hx::fsInt,(void *) &Scancodes_obj::sleep,HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e")},
	{hx::fsInt,(void *) &Scancodes_obj::app1,HX_HCSTRING("app1","\x70","\x10","\x73","\x40")},
	{hx::fsInt,(void *) &Scancodes_obj::app2,HX_HCSTRING("app2","\x71","\x10","\x73","\x40")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Scancodes_obj::scancode_names,HX_HCSTRING("scancode_names","\xb3","\xc3","\xf8","\xdb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scancodes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scancodes_obj::MASK,"MASK");
	HX_MARK_MEMBER_NAME(Scancodes_obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_a,"key_a");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_b,"key_b");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_c,"key_c");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_d,"key_d");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_e,"key_e");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_f,"key_f");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_g,"key_g");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_h,"key_h");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_i,"key_i");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_j,"key_j");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_k,"key_k");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_l,"key_l");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_m,"key_m");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_n,"key_n");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_o,"key_o");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_p,"key_p");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_q,"key_q");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_r,"key_r");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_s,"key_s");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_t,"key_t");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_u,"key_u");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_v,"key_v");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_w,"key_w");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_x,"key_x");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_y,"key_y");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_z,"key_z");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_1,"key_1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_2,"key_2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_3,"key_3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_4,"key_4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_5,"key_5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_6,"key_6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_7,"key_7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_8,"key_8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_9,"key_9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::key_0,"key_0");
	HX_MARK_MEMBER_NAME(Scancodes_obj::enter,"enter");
	HX_MARK_MEMBER_NAME(Scancodes_obj::escape,"escape");
	HX_MARK_MEMBER_NAME(Scancodes_obj::backspace,"backspace");
	HX_MARK_MEMBER_NAME(Scancodes_obj::tab,"tab");
	HX_MARK_MEMBER_NAME(Scancodes_obj::space,"space");
	HX_MARK_MEMBER_NAME(Scancodes_obj::minus,"minus");
	HX_MARK_MEMBER_NAME(Scancodes_obj::equals,"equals");
	HX_MARK_MEMBER_NAME(Scancodes_obj::leftbracket,"leftbracket");
	HX_MARK_MEMBER_NAME(Scancodes_obj::rightbracket,"rightbracket");
	HX_MARK_MEMBER_NAME(Scancodes_obj::backslash,"backslash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::nonushash,"nonushash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::semicolon,"semicolon");
	HX_MARK_MEMBER_NAME(Scancodes_obj::apostrophe,"apostrophe");
	HX_MARK_MEMBER_NAME(Scancodes_obj::grave,"grave");
	HX_MARK_MEMBER_NAME(Scancodes_obj::comma,"comma");
	HX_MARK_MEMBER_NAME(Scancodes_obj::period,"period");
	HX_MARK_MEMBER_NAME(Scancodes_obj::slash,"slash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::capslock,"capslock");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f1,"f1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f2,"f2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f3,"f3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f4,"f4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f5,"f5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f6,"f6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f7,"f7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f8,"f8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f9,"f9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f10,"f10");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f11,"f11");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f12,"f12");
	HX_MARK_MEMBER_NAME(Scancodes_obj::printscreen,"printscreen");
	HX_MARK_MEMBER_NAME(Scancodes_obj::scrolllock,"scrolllock");
	HX_MARK_MEMBER_NAME(Scancodes_obj::pause,"pause");
	HX_MARK_MEMBER_NAME(Scancodes_obj::insert,"insert");
	HX_MARK_MEMBER_NAME(Scancodes_obj::home,"home");
	HX_MARK_MEMBER_NAME(Scancodes_obj::pageup,"pageup");
	HX_MARK_MEMBER_NAME(Scancodes_obj::_delete,"delete");
	HX_MARK_MEMBER_NAME(Scancodes_obj::end,"end");
	HX_MARK_MEMBER_NAME(Scancodes_obj::pagedown,"pagedown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::right,"right");
	HX_MARK_MEMBER_NAME(Scancodes_obj::left,"left");
	HX_MARK_MEMBER_NAME(Scancodes_obj::down,"down");
	HX_MARK_MEMBER_NAME(Scancodes_obj::up,"up");
	HX_MARK_MEMBER_NAME(Scancodes_obj::numlockclear,"numlockclear");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_divide,"kp_divide");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_multiply,"kp_multiply");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_minus,"kp_minus");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_plus,"kp_plus");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_enter,"kp_enter");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_1,"kp_1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_2,"kp_2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_3,"kp_3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_4,"kp_4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_5,"kp_5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_6,"kp_6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_7,"kp_7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_8,"kp_8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_9,"kp_9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_0,"kp_0");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_period,"kp_period");
	HX_MARK_MEMBER_NAME(Scancodes_obj::nonusbackslash,"nonusbackslash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::application,"application");
	HX_MARK_MEMBER_NAME(Scancodes_obj::power,"power");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_equals,"kp_equals");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f13,"f13");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f14,"f14");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f15,"f15");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f16,"f16");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f17,"f17");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f18,"f18");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f19,"f19");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f20,"f20");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f21,"f21");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f22,"f22");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f23,"f23");
	HX_MARK_MEMBER_NAME(Scancodes_obj::f24,"f24");
	HX_MARK_MEMBER_NAME(Scancodes_obj::execute,"execute");
	HX_MARK_MEMBER_NAME(Scancodes_obj::help,"help");
	HX_MARK_MEMBER_NAME(Scancodes_obj::menu,"menu");
	HX_MARK_MEMBER_NAME(Scancodes_obj::select,"select");
	HX_MARK_MEMBER_NAME(Scancodes_obj::stop,"stop");
	HX_MARK_MEMBER_NAME(Scancodes_obj::again,"again");
	HX_MARK_MEMBER_NAME(Scancodes_obj::undo,"undo");
	HX_MARK_MEMBER_NAME(Scancodes_obj::cut,"cut");
	HX_MARK_MEMBER_NAME(Scancodes_obj::copy,"copy");
	HX_MARK_MEMBER_NAME(Scancodes_obj::paste,"paste");
	HX_MARK_MEMBER_NAME(Scancodes_obj::find,"find");
	HX_MARK_MEMBER_NAME(Scancodes_obj::mute,"mute");
	HX_MARK_MEMBER_NAME(Scancodes_obj::volumeup,"volumeup");
	HX_MARK_MEMBER_NAME(Scancodes_obj::volumedown,"volumedown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_comma,"kp_comma");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international1,"international1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international2,"international2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international3,"international3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international4,"international4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international5,"international5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international6,"international6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international7,"international7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international8,"international8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::international9,"international9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang1,"lang1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang2,"lang2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang3,"lang3");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang4,"lang4");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang5,"lang5");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang6,"lang6");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang7,"lang7");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang8,"lang8");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lang9,"lang9");
	HX_MARK_MEMBER_NAME(Scancodes_obj::alterase,"alterase");
	HX_MARK_MEMBER_NAME(Scancodes_obj::sysreq,"sysreq");
	HX_MARK_MEMBER_NAME(Scancodes_obj::cancel,"cancel");
	HX_MARK_MEMBER_NAME(Scancodes_obj::clear,"clear");
	HX_MARK_MEMBER_NAME(Scancodes_obj::prior,"prior");
	HX_MARK_MEMBER_NAME(Scancodes_obj::return2,"return2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::separator,"separator");
	HX_MARK_MEMBER_NAME(Scancodes_obj::out,"out");
	HX_MARK_MEMBER_NAME(Scancodes_obj::oper,"oper");
	HX_MARK_MEMBER_NAME(Scancodes_obj::clearagain,"clearagain");
	HX_MARK_MEMBER_NAME(Scancodes_obj::crsel,"crsel");
	HX_MARK_MEMBER_NAME(Scancodes_obj::exsel,"exsel");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_00,"kp_00");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_000,"kp_000");
	HX_MARK_MEMBER_NAME(Scancodes_obj::thousandsseparator,"thousandsseparator");
	HX_MARK_MEMBER_NAME(Scancodes_obj::decimalseparator,"decimalseparator");
	HX_MARK_MEMBER_NAME(Scancodes_obj::currencyunit,"currencyunit");
	HX_MARK_MEMBER_NAME(Scancodes_obj::currencysubunit,"currencysubunit");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_leftparen,"kp_leftparen");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_rightparen,"kp_rightparen");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_tab,"kp_tab");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_backspace,"kp_backspace");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_a,"kp_a");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_b,"kp_b");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_c,"kp_c");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_d,"kp_d");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_e,"kp_e");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_f,"kp_f");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_xor,"kp_xor");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_power,"kp_power");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_percent,"kp_percent");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_less,"kp_less");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_greater,"kp_greater");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_ampersand,"kp_ampersand");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_colon,"kp_colon");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_hash,"kp_hash");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_space,"kp_space");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_at,"kp_at");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_exclam,"kp_exclam");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memstore,"kp_memstore");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memrecall,"kp_memrecall");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memclear,"kp_memclear");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memadd,"kp_memadd");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_memdivide,"kp_memdivide");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_plusminus,"kp_plusminus");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_clear,"kp_clear");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_clearentry,"kp_clearentry");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_binary,"kp_binary");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_octal,"kp_octal");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_decimal,"kp_decimal");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lctrl,"lctrl");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lshift,"lshift");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lalt,"lalt");
	HX_MARK_MEMBER_NAME(Scancodes_obj::lmeta,"lmeta");
	HX_MARK_MEMBER_NAME(Scancodes_obj::rctrl,"rctrl");
	HX_MARK_MEMBER_NAME(Scancodes_obj::rshift,"rshift");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ralt,"ralt");
	HX_MARK_MEMBER_NAME(Scancodes_obj::rmeta,"rmeta");
	HX_MARK_MEMBER_NAME(Scancodes_obj::mode,"mode");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audionext,"audionext");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audioprev,"audioprev");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audiostop,"audiostop");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audioplay,"audioplay");
	HX_MARK_MEMBER_NAME(Scancodes_obj::audiomute,"audiomute");
	HX_MARK_MEMBER_NAME(Scancodes_obj::mediaselect,"mediaselect");
	HX_MARK_MEMBER_NAME(Scancodes_obj::www,"www");
	HX_MARK_MEMBER_NAME(Scancodes_obj::mail,"mail");
	HX_MARK_MEMBER_NAME(Scancodes_obj::calculator,"calculator");
	HX_MARK_MEMBER_NAME(Scancodes_obj::computer,"computer");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_search,"ac_search");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_home,"ac_home");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_back,"ac_back");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_forward,"ac_forward");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_stop,"ac_stop");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_refresh,"ac_refresh");
	HX_MARK_MEMBER_NAME(Scancodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_MARK_MEMBER_NAME(Scancodes_obj::brightnessdown,"brightnessdown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::brightnessup,"brightnessup");
	HX_MARK_MEMBER_NAME(Scancodes_obj::displayswitch,"displayswitch");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kbdillumdown,"kbdillumdown");
	HX_MARK_MEMBER_NAME(Scancodes_obj::kbdillumup,"kbdillumup");
	HX_MARK_MEMBER_NAME(Scancodes_obj::eject,"eject");
	HX_MARK_MEMBER_NAME(Scancodes_obj::sleep,"sleep");
	HX_MARK_MEMBER_NAME(Scancodes_obj::app1,"app1");
	HX_MARK_MEMBER_NAME(Scancodes_obj::app2,"app2");
	HX_MARK_MEMBER_NAME(Scancodes_obj::scancode_names,"scancode_names");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scancodes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::MASK,"MASK");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_a,"key_a");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_b,"key_b");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_c,"key_c");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_d,"key_d");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_e,"key_e");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_f,"key_f");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_g,"key_g");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_h,"key_h");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_i,"key_i");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_j,"key_j");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_k,"key_k");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_l,"key_l");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_m,"key_m");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_n,"key_n");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_o,"key_o");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_p,"key_p");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_q,"key_q");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_r,"key_r");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_s,"key_s");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_t,"key_t");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_u,"key_u");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_v,"key_v");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_w,"key_w");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_x,"key_x");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_y,"key_y");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_z,"key_z");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_1,"key_1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_2,"key_2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_3,"key_3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_4,"key_4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_5,"key_5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_6,"key_6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_7,"key_7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_8,"key_8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_9,"key_9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::key_0,"key_0");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::enter,"enter");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::escape,"escape");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::backspace,"backspace");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::tab,"tab");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::space,"space");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::minus,"minus");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::equals,"equals");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::leftbracket,"leftbracket");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::rightbracket,"rightbracket");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::backslash,"backslash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::nonushash,"nonushash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::semicolon,"semicolon");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::apostrophe,"apostrophe");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::grave,"grave");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::comma,"comma");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::period,"period");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::slash,"slash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::capslock,"capslock");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f1,"f1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f2,"f2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f3,"f3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f4,"f4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f5,"f5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f6,"f6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f7,"f7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f8,"f8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f9,"f9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f10,"f10");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f11,"f11");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f12,"f12");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::printscreen,"printscreen");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::scrolllock,"scrolllock");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::pause,"pause");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::insert,"insert");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::home,"home");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::pageup,"pageup");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::_delete,"delete");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::end,"end");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::pagedown,"pagedown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::right,"right");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::left,"left");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::down,"down");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::up,"up");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::numlockclear,"numlockclear");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_divide,"kp_divide");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_multiply,"kp_multiply");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_minus,"kp_minus");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_plus,"kp_plus");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_enter,"kp_enter");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_1,"kp_1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_2,"kp_2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_3,"kp_3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_4,"kp_4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_5,"kp_5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_6,"kp_6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_7,"kp_7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_8,"kp_8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_9,"kp_9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_0,"kp_0");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_period,"kp_period");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::nonusbackslash,"nonusbackslash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::power,"power");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_equals,"kp_equals");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f13,"f13");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f14,"f14");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f15,"f15");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f16,"f16");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f17,"f17");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f18,"f18");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f19,"f19");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f20,"f20");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f21,"f21");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f22,"f22");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f23,"f23");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::f24,"f24");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::execute,"execute");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::help,"help");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::menu,"menu");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::select,"select");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::stop,"stop");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::again,"again");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::undo,"undo");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::cut,"cut");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::copy,"copy");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::paste,"paste");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::find,"find");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::mute,"mute");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::volumeup,"volumeup");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::volumedown,"volumedown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_comma,"kp_comma");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_equalsas400,"kp_equalsas400");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international1,"international1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international2,"international2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international3,"international3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international4,"international4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international5,"international5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international6,"international6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international7,"international7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international8,"international8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::international9,"international9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang1,"lang1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang2,"lang2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang3,"lang3");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang4,"lang4");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang5,"lang5");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang6,"lang6");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang7,"lang7");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang8,"lang8");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lang9,"lang9");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::alterase,"alterase");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::sysreq,"sysreq");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::cancel,"cancel");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::clear,"clear");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::prior,"prior");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::return2,"return2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::separator,"separator");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::out,"out");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::oper,"oper");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::clearagain,"clearagain");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::crsel,"crsel");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::exsel,"exsel");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_00,"kp_00");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_000,"kp_000");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::thousandsseparator,"thousandsseparator");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::decimalseparator,"decimalseparator");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::currencyunit,"currencyunit");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::currencysubunit,"currencysubunit");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_leftparen,"kp_leftparen");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_rightparen,"kp_rightparen");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_leftbrace,"kp_leftbrace");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_rightbrace,"kp_rightbrace");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_tab,"kp_tab");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_backspace,"kp_backspace");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_a,"kp_a");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_b,"kp_b");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_c,"kp_c");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_d,"kp_d");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_e,"kp_e");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_f,"kp_f");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_xor,"kp_xor");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_power,"kp_power");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_percent,"kp_percent");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_less,"kp_less");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_greater,"kp_greater");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_ampersand,"kp_ampersand");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_dblampersand,"kp_dblampersand");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_verticalbar,"kp_verticalbar");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_dblverticalbar,"kp_dblverticalbar");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_colon,"kp_colon");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_hash,"kp_hash");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_space,"kp_space");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_at,"kp_at");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_exclam,"kp_exclam");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memstore,"kp_memstore");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memrecall,"kp_memrecall");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memclear,"kp_memclear");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memadd,"kp_memadd");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memsubtract,"kp_memsubtract");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memmultiply,"kp_memmultiply");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_memdivide,"kp_memdivide");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_plusminus,"kp_plusminus");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_clear,"kp_clear");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_clearentry,"kp_clearentry");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_binary,"kp_binary");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_octal,"kp_octal");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_decimal,"kp_decimal");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kp_hexadecimal,"kp_hexadecimal");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lctrl,"lctrl");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lshift,"lshift");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lalt,"lalt");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::lmeta,"lmeta");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::rctrl,"rctrl");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::rshift,"rshift");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ralt,"ralt");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::rmeta,"rmeta");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::mode,"mode");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audionext,"audionext");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audioprev,"audioprev");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audiostop,"audiostop");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audioplay,"audioplay");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::audiomute,"audiomute");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::mediaselect,"mediaselect");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::www,"www");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::mail,"mail");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::calculator,"calculator");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::computer,"computer");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_search,"ac_search");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_home,"ac_home");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_back,"ac_back");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_forward,"ac_forward");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_stop,"ac_stop");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_refresh,"ac_refresh");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::ac_bookmarks,"ac_bookmarks");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::brightnessdown,"brightnessdown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::brightnessup,"brightnessup");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::displayswitch,"displayswitch");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kbdillumtoggle,"kbdillumtoggle");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kbdillumdown,"kbdillumdown");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::kbdillumup,"kbdillumup");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::eject,"eject");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::sleep,"sleep");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::app1,"app1");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::app2,"app2");
	HX_VISIT_MEMBER_NAME(Scancodes_obj::scancode_names,"scancode_names");
};

#endif

hx::Class Scancodes_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("MASK","\xec","\x08","\x17","\x33"),
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
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
	HX_HCSTRING("key_1","\x51","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_2","\x52","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_3","\x53","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_4","\x54","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_5","\x55","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_6","\x56","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_7","\x57","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_8","\x58","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_9","\x59","\xc2","\xfe","\xde"),
	HX_HCSTRING("key_0","\x50","\xc2","\xfe","\xde"),
	HX_HCSTRING("enter","\x18","\x6d","\x86","\x70"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("backspace","\x3f","\x85","\xea","\xca"),
	HX_HCSTRING("tab","\x55","\x5a","\x58","\x00"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("minus","\x70","\x80","\x68","\x08"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("leftbracket","\x01","\x9d","\xc8","\xcd"),
	HX_HCSTRING("rightbracket","\xcc","\xed","\xe3","\xb8"),
	HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"),
	HX_HCSTRING("nonushash","\xf9","\xbd","\xb1","\x92"),
	HX_HCSTRING("semicolon","\x31","\x16","\xd2","\x4d"),
	HX_HCSTRING("apostrophe","\xef","\x32","\xa1","\xef"),
	HX_HCSTRING("grave","\x85","\x14","\xea","\x99"),
	HX_HCSTRING("comma","\xd5","\x31","\x5d","\x4a"),
	HX_HCSTRING("period","\x01","\x61","\x1b","\x3b"),
	HX_HCSTRING("slash","\x3d","\xc0","\xc1","\x7e"),
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
	HX_HCSTRING("nonusbackslash","\xab","\xee","\x91","\x34"),
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
	HX_HCSTRING("international1","\x23","\x61","\xf9","\x6a"),
	HX_HCSTRING("international2","\x24","\x61","\xf9","\x6a"),
	HX_HCSTRING("international3","\x25","\x61","\xf9","\x6a"),
	HX_HCSTRING("international4","\x26","\x61","\xf9","\x6a"),
	HX_HCSTRING("international5","\x27","\x61","\xf9","\x6a"),
	HX_HCSTRING("international6","\x28","\x61","\xf9","\x6a"),
	HX_HCSTRING("international7","\x29","\x61","\xf9","\x6a"),
	HX_HCSTRING("international8","\x2a","\x61","\xf9","\x6a"),
	HX_HCSTRING("international9","\x2b","\x61","\xf9","\x6a"),
	HX_HCSTRING("lang1","\x83","\x2a","\xb8","\x6f"),
	HX_HCSTRING("lang2","\x84","\x2a","\xb8","\x6f"),
	HX_HCSTRING("lang3","\x85","\x2a","\xb8","\x6f"),
	HX_HCSTRING("lang4","\x86","\x2a","\xb8","\x6f"),
	HX_HCSTRING("lang5","\x87","\x2a","\xb8","\x6f"),
	HX_HCSTRING("lang6","\x88","\x2a","\xb8","\x6f"),
	HX_HCSTRING("lang7","\x89","\x2a","\xb8","\x6f"),
	HX_HCSTRING("lang8","\x8a","\x2a","\xb8","\x6f"),
	HX_HCSTRING("lang9","\x8b","\x2a","\xb8","\x6f"),
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
	HX_HCSTRING("app1","\x70","\x10","\x73","\x40"),
	HX_HCSTRING("app2","\x71","\x10","\x73","\x40"),
	HX_HCSTRING("scancode_names","\xb3","\xc3","\xf8","\xdb"),
	::String(null()) };

void Scancodes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.input.Scancodes","\x91","\x5b","\x60","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Scancodes_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Scancodes_obj >;
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

void Scancodes_obj::__boot()
{
	MASK= (int)1073741824;
	unknown= (int)0;
	key_a= (int)4;
	key_b= (int)5;
	key_c= (int)6;
	key_d= (int)7;
	key_e= (int)8;
	key_f= (int)9;
	key_g= (int)10;
	key_h= (int)11;
	key_i= (int)12;
	key_j= (int)13;
	key_k= (int)14;
	key_l= (int)15;
	key_m= (int)16;
	key_n= (int)17;
	key_o= (int)18;
	key_p= (int)19;
	key_q= (int)20;
	key_r= (int)21;
	key_s= (int)22;
	key_t= (int)23;
	key_u= (int)24;
	key_v= (int)25;
	key_w= (int)26;
	key_x= (int)27;
	key_y= (int)28;
	key_z= (int)29;
	key_1= (int)30;
	key_2= (int)31;
	key_3= (int)32;
	key_4= (int)33;
	key_5= (int)34;
	key_6= (int)35;
	key_7= (int)36;
	key_8= (int)37;
	key_9= (int)38;
	key_0= (int)39;
	enter= (int)40;
	escape= (int)41;
	backspace= (int)42;
	tab= (int)43;
	space= (int)44;
	minus= (int)45;
	equals= (int)46;
	leftbracket= (int)47;
	rightbracket= (int)48;
	backslash= (int)49;
	nonushash= (int)50;
	semicolon= (int)51;
	apostrophe= (int)52;
	grave= (int)53;
	comma= (int)54;
	period= (int)55;
	slash= (int)56;
	capslock= (int)57;
	f1= (int)58;
	f2= (int)59;
	f3= (int)60;
	f4= (int)61;
	f5= (int)62;
	f6= (int)63;
	f7= (int)64;
	f8= (int)65;
	f9= (int)66;
	f10= (int)67;
	f11= (int)68;
	f12= (int)69;
	printscreen= (int)70;
	scrolllock= (int)71;
	pause= (int)72;
	insert= (int)73;
	home= (int)74;
	pageup= (int)75;
	_delete= (int)76;
	end= (int)77;
	pagedown= (int)78;
	right= (int)79;
	left= (int)80;
	down= (int)81;
	up= (int)82;
	numlockclear= (int)83;
	kp_divide= (int)84;
	kp_multiply= (int)85;
	kp_minus= (int)86;
	kp_plus= (int)87;
	kp_enter= (int)88;
	kp_1= (int)89;
	kp_2= (int)90;
	kp_3= (int)91;
	kp_4= (int)92;
	kp_5= (int)93;
	kp_6= (int)94;
	kp_7= (int)95;
	kp_8= (int)96;
	kp_9= (int)97;
	kp_0= (int)98;
	kp_period= (int)99;
	nonusbackslash= (int)100;
	application= (int)101;
	power= (int)102;
	kp_equals= (int)103;
	f13= (int)104;
	f14= (int)105;
	f15= (int)106;
	f16= (int)107;
	f17= (int)108;
	f18= (int)109;
	f19= (int)110;
	f20= (int)111;
	f21= (int)112;
	f22= (int)113;
	f23= (int)114;
	f24= (int)115;
	execute= (int)116;
	help= (int)117;
	menu= (int)118;
	select= (int)119;
	stop= (int)120;
	again= (int)121;
	undo= (int)122;
	cut= (int)123;
	copy= (int)124;
	paste= (int)125;
	find= (int)126;
	mute= (int)127;
	volumeup= (int)128;
	volumedown= (int)129;
	kp_comma= (int)133;
	kp_equalsas400= (int)134;
	international1= (int)135;
	international2= (int)136;
	international3= (int)137;
	international4= (int)138;
	international5= (int)139;
	international6= (int)140;
	international7= (int)141;
	international8= (int)142;
	international9= (int)143;
	lang1= (int)144;
	lang2= (int)145;
	lang3= (int)146;
	lang4= (int)147;
	lang5= (int)148;
	lang6= (int)149;
	lang7= (int)150;
	lang8= (int)151;
	lang9= (int)152;
	alterase= (int)153;
	sysreq= (int)154;
	cancel= (int)155;
	clear= (int)156;
	prior= (int)157;
	return2= (int)158;
	separator= (int)159;
	out= (int)160;
	oper= (int)161;
	clearagain= (int)162;
	crsel= (int)163;
	exsel= (int)164;
	kp_00= (int)176;
	kp_000= (int)177;
	thousandsseparator= (int)178;
	decimalseparator= (int)179;
	currencyunit= (int)180;
	currencysubunit= (int)181;
	kp_leftparen= (int)182;
	kp_rightparen= (int)183;
	kp_leftbrace= (int)184;
	kp_rightbrace= (int)185;
	kp_tab= (int)186;
	kp_backspace= (int)187;
	kp_a= (int)188;
	kp_b= (int)189;
	kp_c= (int)190;
	kp_d= (int)191;
	kp_e= (int)192;
	kp_f= (int)193;
	kp_xor= (int)194;
	kp_power= (int)195;
	kp_percent= (int)196;
	kp_less= (int)197;
	kp_greater= (int)198;
	kp_ampersand= (int)199;
	kp_dblampersand= (int)200;
	kp_verticalbar= (int)201;
	kp_dblverticalbar= (int)202;
	kp_colon= (int)203;
	kp_hash= (int)204;
	kp_space= (int)205;
	kp_at= (int)206;
	kp_exclam= (int)207;
	kp_memstore= (int)208;
	kp_memrecall= (int)209;
	kp_memclear= (int)210;
	kp_memadd= (int)211;
	kp_memsubtract= (int)212;
	kp_memmultiply= (int)213;
	kp_memdivide= (int)214;
	kp_plusminus= (int)215;
	kp_clear= (int)216;
	kp_clearentry= (int)217;
	kp_binary= (int)218;
	kp_octal= (int)219;
	kp_decimal= (int)220;
	kp_hexadecimal= (int)221;
	lctrl= (int)224;
	lshift= (int)225;
	lalt= (int)226;
	lmeta= (int)227;
	rctrl= (int)228;
	rshift= (int)229;
	ralt= (int)230;
	rmeta= (int)231;
	mode= (int)257;
	audionext= (int)258;
	audioprev= (int)259;
	audiostop= (int)260;
	audioplay= (int)261;
	audiomute= (int)262;
	mediaselect= (int)263;
	www= (int)264;
	mail= (int)265;
	calculator= (int)266;
	computer= (int)267;
	ac_search= (int)268;
	ac_home= (int)269;
	ac_back= (int)270;
	ac_forward= (int)271;
	ac_stop= (int)272;
	ac_refresh= (int)273;
	ac_bookmarks= (int)274;
	brightnessdown= (int)275;
	brightnessup= (int)276;
	displayswitch= (int)277;
	kbdillumtoggle= (int)278;
	kbdillumdown= (int)279;
	kbdillumup= (int)280;
	eject= (int)281;
	sleep= (int)282;
	app1= (int)283;
	app2= (int)284;
	scancode_names= Array_obj< ::String >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(HX_HCSTRING("A","\x41","\x00","\x00","\x00")).Add(HX_HCSTRING("B","\x42","\x00","\x00","\x00")).Add(HX_HCSTRING("C","\x43","\x00","\x00","\x00")).Add(HX_HCSTRING("D","\x44","\x00","\x00","\x00")).Add(HX_HCSTRING("E","\x45","\x00","\x00","\x00")).Add(HX_HCSTRING("F","\x46","\x00","\x00","\x00")).Add(HX_HCSTRING("G","\x47","\x00","\x00","\x00")).Add(HX_HCSTRING("H","\x48","\x00","\x00","\x00")).Add(HX_HCSTRING("I","\x49","\x00","\x00","\x00")).Add(HX_HCSTRING("J","\x4a","\x00","\x00","\x00")).Add(HX_HCSTRING("K","\x4b","\x00","\x00","\x00")).Add(HX_HCSTRING("L","\x4c","\x00","\x00","\x00")).Add(HX_HCSTRING("M","\x4d","\x00","\x00","\x00")).Add(HX_HCSTRING("N","\x4e","\x00","\x00","\x00")).Add(HX_HCSTRING("O","\x4f","\x00","\x00","\x00")).Add(HX_HCSTRING("P","\x50","\x00","\x00","\x00")).Add(HX_HCSTRING("Q","\x51","\x00","\x00","\x00")).Add(HX_HCSTRING("R","\x52","\x00","\x00","\x00")).Add(HX_HCSTRING("S","\x53","\x00","\x00","\x00")).Add(HX_HCSTRING("T","\x54","\x00","\x00","\x00")).Add(HX_HCSTRING("U","\x55","\x00","\x00","\x00")).Add(HX_HCSTRING("V","\x56","\x00","\x00","\x00")).Add(HX_HCSTRING("W","\x57","\x00","\x00","\x00")).Add(HX_HCSTRING("X","\x58","\x00","\x00","\x00")).Add(HX_HCSTRING("Y","\x59","\x00","\x00","\x00")).Add(HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")).Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("2","\x32","\x00","\x00","\x00")).Add(HX_HCSTRING("3","\x33","\x00","\x00","\x00")).Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("5","\x35","\x00","\x00","\x00")).Add(HX_HCSTRING("6","\x36","\x00","\x00","\x00")).Add(HX_HCSTRING("7","\x37","\x00","\x00","\x00")).Add(HX_HCSTRING("8","\x38","\x00","\x00","\x00")).Add(HX_HCSTRING("9","\x39","\x00","\x00","\x00")).Add(HX_HCSTRING("0","\x30","\x00","\x00","\x00")).Add(HX_HCSTRING("Enter","\xf8","\xdc","\xb3","\x03")).Add(HX_HCSTRING("Escape","\xa1","\xb7","\x6e","\x0f")).Add(HX_HCSTRING("Backspace","\x1f","\x65","\xbd","\x6c")).Add(HX_HCSTRING("Tab","\x35","\x12","\x40","\x00")).Add(HX_HCSTRING("Space","\xa6","\xfc","\x93","\x14")).Add(HX_HCSTRING("-","\x2d","\x00","\x00","\x00")).Add(HX_HCSTRING("=","\x3d","\x00","\x00","\x00")).Add(HX_HCSTRING("[","\x5b","\x00","\x00","\x00")).Add(HX_HCSTRING("]","\x5d","\x00","\x00","\x00")).Add(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00")).Add(HX_HCSTRING("#","\x23","\x00","\x00","\x00")).Add(HX_HCSTRING(";","\x3b","\x00","\x00","\x00")).Add(HX_HCSTRING("'","\x27","\x00","\x00","\x00")).Add(HX_HCSTRING("`","\x60","\x00","\x00","\x00")).Add(HX_HCSTRING(",","\x2c","\x00","\x00","\x00")).Add(HX_HCSTRING(".","\x2e","\x00","\x00","\x00")).Add(HX_HCSTRING("/","\x2f","\x00","\x00","\x00")).Add(HX_HCSTRING("CapsLock","\xcc","\xc4","\x73","\xeb")).Add(HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")).Add(HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")).Add(HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")).Add(HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")).Add(HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")).Add(HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")).Add(HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")).Add(HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")).Add(HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")).Add(HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")).Add(HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")).Add(HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")).Add(HX_HCSTRING("PrintScreen","\x59","\x7f","\x07","\x53")).Add(HX_HCSTRING("ScrollLock","\xb8","\x2e","\x28","\xfc")).Add(HX_HCSTRING("Pause","\xd6","\x46","\x85","\x50")).Add(HX_HCSTRING("Insert","\x59","\xb7","\x71","\xd2")).Add(HX_HCSTRING("Home","\x3f","\xf6","\xeb","\x2f")).Add(HX_HCSTRING("PageUp","\xaa","\x0a","\xcd","\x1a")).Add(HX_HCSTRING("Delete","\x4b","\x34","\x6d","\x9f")).Add(HX_HCSTRING("End","\xbb","\xbb","\x34","\x00")).Add(HX_HCSTRING("PageDown","\x71","\x8e","\xe7","\x24")).Add(HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c")).Add(HX_HCSTRING("Left","\x27","\x34","\x89","\x32")).Add(HX_HCSTRING("Down","\x82","\x24","\x47","\x2d")).Add(HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00")).Add(HX_HCSTRING("Numlock","\x11","\x3d","\xb0","\x7d")).Add(HX_HCSTRING("Keypad /","\x43","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad *","\x3e","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad -","\x41","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad +","\x3f","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad Enter","\x0c","\x11","\x45","\x01")).Add(HX_HCSTRING("Keypad 1","\x45","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad 2","\x46","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad 3","\x47","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad 4","\x48","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad 5","\x49","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad 6","\x4a","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad 7","\x4b","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad 8","\x4c","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad 9","\x4d","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad 0","\x44","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad .","\x42","\x9a","\x38","\x48")).Add(null()).Add(HX_HCSTRING("Application","\x30","\x43","\x71","\x0e")).Add(HX_HCSTRING("Power","\xe5","\xbb","\xc7","\x59")).Add(HX_HCSTRING("Keypad =","\x51","\x9a","\x38","\x48")).Add(HX_HCSTRING("F13","\xa8","\x48","\x35","\x00")).Add(HX_HCSTRING("F14","\xa9","\x48","\x35","\x00")).Add(HX_HCSTRING("F15","\xaa","\x48","\x35","\x00")).Add(HX_HCSTRING("F16","\xab","\x48","\x35","\x00")).Add(HX_HCSTRING("F17","\xac","\x48","\x35","\x00")).Add(HX_HCSTRING("F18","\xad","\x48","\x35","\x00")).Add(HX_HCSTRING("F19","\xae","\x48","\x35","\x00")).Add(HX_HCSTRING("F20","\x84","\x49","\x35","\x00")).Add(HX_HCSTRING("F21","\x85","\x49","\x35","\x00")).Add(HX_HCSTRING("F22","\x86","\x49","\x35","\x00")).Add(HX_HCSTRING("F23","\x87","\x49","\x35","\x00")).Add(HX_HCSTRING("F24","\x88","\x49","\x35","\x00")).Add(HX_HCSTRING("Execute","\x15","\x32","\x5e","\x99")).Add(HX_HCSTRING("Help","\xe1","\x5e","\xe4","\x2f")).Add(HX_HCSTRING("Menu","\xbf","\x71","\x32","\x33")).Add(HX_HCSTRING("Select","\x1c","\x8f","\xc7","\x9e")).Add(HX_HCSTRING("Stop","\x22","\x1c","\x35","\x37")).Add(HX_HCSTRING("Again","\x40","\xa5","\x6a","\xb1")).Add(HX_HCSTRING("Undo","\x44","\xf2","\x82","\x38")).Add(HX_HCSTRING("Cut","\x62","\x3d","\x33","\x00")).Add(HX_HCSTRING("Copy","\xd5","\xe7","\x9d","\x2c")).Add(HX_HCSTRING("Paste","\x33","\xc3","\x83","\x50")).Add(HX_HCSTRING("Find","\x59","\xfc","\x94","\x2e")).Add(HX_HCSTRING("Mute","\xf9","\x9a","\x3e","\x33")).Add(HX_HCSTRING("VolumeUp","\xf5","\xda","\x86","\x13")).Add(HX_HCSTRING("VolumeDown","\x7c","\x47","\xee","\x1b")).Add(null()).Add(null()).Add(null()).Add(HX_HCSTRING("Keypad ,","\x40","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad = (AS400)","\xc0","\xed","\x65","\xc7")).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(HX_HCSTRING("AltErase","\x1d","\x47","\x8d","\x78")).Add(HX_HCSTRING("SysReq","\x71","\x3e","\x5d","\x27")).Add(HX_HCSTRING("Cancel","\x9a","\x61","\xc8","\xec")).Add(HX_HCSTRING("Clear","\x6d","\xe1","\x88","\xdb")).Add(HX_HCSTRING("Prior","\xea","\xc8","\xb8","\x5b")).Add(HX_HCSTRING("Enter","\xf8","\xdc","\xb3","\x03")).Add(HX_HCSTRING("Separator","\x45","\x40","\x52","\xd3")).Add(HX_HCSTRING("Out","\x6e","\x58","\x3c","\x00")).Add(HX_HCSTRING("Oper","\xee","\x2f","\x8d","\x34")).Add(HX_HCSTRING("Clear / Again","\xdc","\xd8","\x30","\xe7")).Add(HX_HCSTRING("CrSel","\x0b","\x84","\x72","\xdf")).Add(HX_HCSTRING("ExSel","\xc7","\xf4","\x36","\x0a")).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(HX_HCSTRING("Keypad 00","\x6c","\x61","\x4e","\xe9")).Add(HX_HCSTRING("Keypad 000","\x44","\xdd","\x46","\x3b")).Add(HX_HCSTRING("ThousandsSeparator","\xf0","\xa3","\x6e","\x5e")).Add(HX_HCSTRING("DecimalSeparator","\xb4","\xcd","\x90","\x5a")).Add(HX_HCSTRING("CurrencyUnit","\x95","\xc6","\xde","\x93")).Add(HX_HCSTRING("CurrencySubUnit","\xb3","\x84","\xfa","\x4a")).Add(HX_HCSTRING("Keypad (","\x3c","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad )","\x3d","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad {","\x8f","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad }","\x91","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad Tab","\x49","\x59","\x62","\x3b")).Add(HX_HCSTRING("Keypad Backspace","\x33","\x33","\xfc","\x60")).Add(HX_HCSTRING("Keypad A","\x55","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad B","\x56","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad C","\x57","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad D","\x58","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad E","\x59","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad F","\x5a","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad XOR","\x8f","\x52","\x65","\x3b")).Add(HX_HCSTRING("Keypad ^","\x72","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad %","\x39","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad <","\x50","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad >","\x52","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad &","\x3a","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad &&","\xac","\x58","\x4e","\xe9")).Add(HX_HCSTRING("Keypad |","\x90","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad ||","\xec","\xa3","\x4e","\xe9")).Add(HX_HCSTRING("Keypad :","\x4e","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad #","\x37","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad Space","\xba","\x30","\x25","\x12")).Add(HX_HCSTRING("Keypad @","\x54","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad !","\x35","\x9a","\x38","\x48")).Add(HX_HCSTRING("Keypad MemStore","\x18","\x96","\xad","\xc7")).Add(HX_HCSTRING("Keypad MemRecall","\xba","\x3f","\xdc","\xde")).Add(HX_HCSTRING("Keypad MemClear","\xc4","\xf3","\xf2","\x8b")).Add(HX_HCSTRING("Keypad MemAdd","\x98","\xa8","\xad","\x1a")).Add(HX_HCSTRING("Keypad MemSubtract","\x3d","\xef","\xf1","\xde")).Add(HX_HCSTRING("Keypad MemMultiply","\x4d","\x5c","\x6d","\x81")).Add(HX_HCSTRING("Keypad MemDivide","\x62","\x9d","\x0c","\xa0")).Add(HX_HCSTRING("Keypad +/-","\x1d","\x11","\x43","\x3b")).Add(HX_HCSTRING("Keypad Clear","\x81","\x15","\x1a","\xd9")).Add(HX_HCSTRING("Keypad ClearEntry","\x31","\x3f","\xf7","\xfe")).Add(HX_HCSTRING("Keypad Binary","\x8d","\x8d","\x1c","\x03")).Add(HX_HCSTRING("Keypad Octal","\xbf","\x81","\x01","\xbc")).Add(HX_HCSTRING("Keypad Decimal","\x85","\x3d","\x7a","\x1f")).Add(HX_HCSTRING("Keypad Hexadecimal","\x1f","\x1b","\x27","\x2c")).Add(null()).Add(null()).Add(HX_HCSTRING("Left Ctrl","\x64","\xa3","\xf9","\xbc")).Add(HX_HCSTRING("Left Shift","\xa9","\x33","\xe9","\xcb")).Add(HX_HCSTRING("Left Alt","\x90","\x58","\x2c","\x0b")).Add(HX_HCSTRING("Left Meta","\x7e","\x65","\x8a","\xc3")).Add(HX_HCSTRING("Right Ctrl","\xaf","\xbf","\xbc","\xff")).Add(HX_HCSTRING("Right Shift","\xfe","\xd8","\xde","\xf3")).Add(HX_HCSTRING("Right Alt","\xa5","\x8e","\x18","\x37")).Add(HX_HCSTRING("Right Meta","\xc9","\x81","\x4d","\x06")).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(HX_HCSTRING("ModeSwitch","\xd7","\xc1","\xcc","\x06")).Add(HX_HCSTRING("AudioNext","\xc9","\x2c","\x8b","\x0a")).Add(HX_HCSTRING("AudioPrev","\xc9","\x66","\xe7","\x0b")).Add(HX_HCSTRING("AudioStop","\xd8","\x97","\xe4","\x0d")).Add(HX_HCSTRING("AudioPlay","\xca","\xd5","\xe2","\x0b")).Add(HX_HCSTRING("AudioMute","\xaf","\x16","\xee","\x09")).Add(HX_HCSTRING("MediaSelect","\xe0","\xee","\xae","\xdc")).Add(HX_HCSTRING("WWW","\x37","\x50","\x42","\x00")).Add(HX_HCSTRING("Mail","\x57","\x64","\x2f","\x33")).Add(HX_HCSTRING("Calculator","\x22","\x31","\x89","\xae")).Add(HX_HCSTRING("Computer","\x3b","\xfd","\x77","\x5f")).Add(HX_HCSTRING("AC Search","\x06","\x73","\xba","\x51")).Add(HX_HCSTRING("AC Home","\x3d","\xda","\x9a","\xf5")).Add(HX_HCSTRING("AC Back","\x45","\xea","\x98","\xf1")).Add(HX_HCSTRING("AC Forward","\x67","\x38","\x81","\xe1")).Add(HX_HCSTRING("AC Stop","\x20","\x00","\xe4","\xfc")).Add(HX_HCSTRING("AC Refresh","\x7d","\x30","\xd7","\xe8")).Add(HX_HCSTRING("AC Bookmarks","\x1f","\x56","\x5c","\x77")).Add(HX_HCSTRING("BrightnessDown","\xf3","\x02","\x18","\x20")).Add(HX_HCSTRING("BrightnessUp","\xac","\xfa","\x5f","\x97")).Add(HX_HCSTRING("DisplaySwitch","\xb6","\x55","\xcc","\xce")).Add(HX_HCSTRING("KBDIllumToggle","\x68","\x46","\x7a","\xf4")).Add(HX_HCSTRING("KBDIllumDown","\x36","\x62","\x17","\x1b")).Add(HX_HCSTRING("KBDIllumUp","\x2f","\xf3","\x8d","\x70")).Add(HX_HCSTRING("Eject","\xf1","\x9e","\x03","\x01")).Add(HX_HCSTRING("Sleep","\xf7","\x2c","\xf2","\x11"));
}

} // end namespace snow
} // end namespace system
} // end namespace input
