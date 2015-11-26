#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_tween_Actuate
#include <luxe/tween/Actuate.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_ColorHSL
#include <phoenix/ColorHSL.h>
#endif
#ifndef INCLUDED_phoenix_ColorHSV
#include <phoenix/ColorHSV.h>
#endif
namespace phoenix{

Void Color_obj::__construct(hx::Null< Float >  __o__r,hx::Null< Float >  __o__g,hx::Null< Float >  __o__b,hx::Null< Float >  __o__a)
{
HX_STACK_FRAME("phoenix.Color","new",0x34b95216,"phoenix.Color.new","phoenix/Color.hx",10,0xf59e6b1b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__r,"_r")
HX_STACK_ARG(__o__g,"_g")
HX_STACK_ARG(__o__b,"_b")
HX_STACK_ARG(__o__a,"_a")
Float _r = __o__r.Default(((Float)1.0));
Float _g = __o__g.Default(((Float)1.0));
Float _b = __o__b.Default(((Float)1.0));
Float _a = __o__a.Default(((Float)1.0));
{
	HX_STACK_LINE(20)
	this->refreshing = false;
	HX_STACK_LINE(19)
	this->is_hsv = false;
	HX_STACK_LINE(18)
	this->is_hsl = false;
	HX_STACK_LINE(16)
	this->a = ((Float)1.0);
	HX_STACK_LINE(14)
	this->b = ((Float)1.0);
	HX_STACK_LINE(13)
	this->g = ((Float)1.0);
	HX_STACK_LINE(12)
	this->r = ((Float)1.0);
	HX_STACK_LINE(24)
	Float tmp = _r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->set_r(tmp);
	HX_STACK_LINE(25)
	Float tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	this->set_g(tmp1);
	HX_STACK_LINE(26)
	Float tmp2 = _b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	this->set_b(tmp2);
	HX_STACK_LINE(27)
	this->a = _a;
}
;
	return null();
}

//Color_obj::~Color_obj() { }

Dynamic Color_obj::__CreateEmpty() { return  new Color_obj; }
hx::ObjectPtr< Color_obj > Color_obj::__new(hx::Null< Float >  __o__r,hx::Null< Float >  __o__g,hx::Null< Float >  __o__b,hx::Null< Float >  __o__a)
{  hx::ObjectPtr< Color_obj > _result_ = new Color_obj();
	_result_->__construct(__o__r,__o__g,__o__b,__o__a);
	return _result_;}

Dynamic Color_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Color_obj > _result_ = new Color_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Float Color_obj::set_r( Float _r){
	HX_STACK_FRAME("phoenix.Color","set_r",0xb441768b,"phoenix.Color.set_r","phoenix/Color.hx",31,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(32)
	this->r = _r;
	HX_STACK_LINE(34)
	bool tmp = this->refreshing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	if ((tmp1)){
		HX_STACK_LINE(35)
		bool tmp2 = this->is_hsl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(36)
			::phoenix::ColorHSL colorhsl = ((::phoenix::ColorHSL)(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(colorhsl,"colorhsl");
			HX_STACK_LINE(37)
			colorhsl->fromColor(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(38)
			bool tmp3 = this->is_hsv;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			if ((tmp3)){
				HX_STACK_LINE(39)
				::phoenix::ColorHSV colorhsv = ((::phoenix::ColorHSV)(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(colorhsv,"colorhsv");
				HX_STACK_LINE(40)
				colorhsv->fromColor(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(44)
	Float tmp2 = this->r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_r,return )

Float Color_obj::set_g( Float _g){
	HX_STACK_FRAME("phoenix.Color","set_g",0xb4417680,"phoenix.Color.set_g","phoenix/Color.hx",46,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_g,"_g")
	HX_STACK_LINE(47)
	this->g = _g;
	HX_STACK_LINE(49)
	bool tmp = this->refreshing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(50)
		bool tmp2 = this->is_hsl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		if ((tmp2)){
			HX_STACK_LINE(51)
			::phoenix::ColorHSL colorhsl = ((::phoenix::ColorHSL)(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(colorhsl,"colorhsl");
			HX_STACK_LINE(52)
			colorhsl->fromColor(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(53)
			bool tmp3 = this->is_hsv;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			if ((tmp3)){
				HX_STACK_LINE(54)
				::phoenix::ColorHSV colorhsv = ((::phoenix::ColorHSV)(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(colorhsv,"colorhsv");
				HX_STACK_LINE(55)
				colorhsv->fromColor(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(59)
	Float tmp2 = this->g;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_g,return )

Float Color_obj::set_b( Float _b){
	HX_STACK_FRAME("phoenix.Color","set_b",0xb441767b,"phoenix.Color.set_b","phoenix/Color.hx",61,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(62)
	this->b = _b;
	HX_STACK_LINE(64)
	bool tmp = this->refreshing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	if ((tmp1)){
		HX_STACK_LINE(65)
		bool tmp2 = this->is_hsl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(66)
			::phoenix::ColorHSL colorhsl = ((::phoenix::ColorHSL)(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(colorhsl,"colorhsl");
			HX_STACK_LINE(67)
			colorhsl->fromColor(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(68)
			bool tmp3 = this->is_hsv;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			if ((tmp3)){
				HX_STACK_LINE(69)
				::phoenix::ColorHSV colorhsv = ((::phoenix::ColorHSV)(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(colorhsv,"colorhsv");
				HX_STACK_LINE(70)
				colorhsv->fromColor(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(74)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set_b,return )

::phoenix::Color Color_obj::set( Dynamic _r,Dynamic _g,Dynamic _b,Dynamic _a){
	HX_STACK_FRAME("phoenix.Color","set",0x34bd1d58,"phoenix.Color.set","phoenix/Color.hx",82,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_ARG(_g,"_g")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(84)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	Float _setr = tmp;		HX_STACK_VAR(_setr,"_setr");
	HX_STACK_LINE(85)
	Float tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	Float _setg = tmp1;		HX_STACK_VAR(_setg,"_setg");
	HX_STACK_LINE(86)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	Float _setb = tmp2;		HX_STACK_VAR(_setb,"_setb");
	HX_STACK_LINE(87)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	Float _seta = tmp3;		HX_STACK_VAR(_seta,"_seta");
	HX_STACK_LINE(90)
	bool tmp4 = (_r != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(90)
	if ((tmp4)){
		HX_STACK_LINE(90)
		_setr = _r;
	}
	HX_STACK_LINE(91)
	bool tmp5 = (_g != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(91)
	if ((tmp5)){
		HX_STACK_LINE(91)
		_setg = _g;
	}
	HX_STACK_LINE(92)
	bool tmp6 = (_b != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(92)
	if ((tmp6)){
		HX_STACK_LINE(92)
		_setb = _b;
	}
	HX_STACK_LINE(93)
	bool tmp7 = (_a != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(93)
	if ((tmp7)){
		HX_STACK_LINE(93)
		_seta = _a;
	}
	HX_STACK_LINE(95)
	Float tmp8 = _setr;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(95)
	this->set_r(tmp8);
	HX_STACK_LINE(96)
	Float tmp9 = _setg;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(96)
	this->set_g(tmp9);
	HX_STACK_LINE(97)
	Float tmp10 = _setb;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(97)
	this->set_b(tmp10);
	HX_STACK_LINE(98)
	this->a = _seta;
	HX_STACK_LINE(100)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Color_obj,set,return )

Float Color_obj::maxRGB( ){
	HX_STACK_FRAME("phoenix.Color","maxRGB",0x53e29ed3,"phoenix.Color.maxRGB","phoenix/Color.hx",103,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	Float tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	Float tmp3 = ::Math_obj::max(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	Float tmp4 = ::Math_obj::max(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,maxRGB,return )

Float Color_obj::minRGB( ){
	HX_STACK_FRAME("phoenix.Color","minRGB",0xe87b20a5,"phoenix.Color.minRGB","phoenix/Color.hx",107,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	Float tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	Float tmp3 = ::Math_obj::min(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	Float tmp4 = ::Math_obj::min(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,minRGB,return )

::luxe::tween::actuators::IGenericActuator Color_obj::tween( Dynamic __o__time_in_seconds,Dynamic _properties_to_tween,hx::Null< bool >  __o__override){
Dynamic _time_in_seconds = __o__time_in_seconds.Default(((Float)0.5));
bool _override = __o__override.Default(true);
	HX_STACK_FRAME("phoenix.Color","tween",0x538285a1,"phoenix.Color.tween","phoenix/Color.hx",111,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_time_in_seconds,"_time_in_seconds")
	HX_STACK_ARG(_properties_to_tween,"_properties_to_tween")
	HX_STACK_ARG(_override,"_override")
{
		HX_STACK_LINE(113)
		bool tmp = (_properties_to_tween != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		if ((tmp)){
			HX_STACK_LINE(115)
			Float tmp1 = this->r;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(115)
			Float _dest_r = tmp1;		HX_STACK_VAR(_dest_r,"_dest_r");
			HX_STACK_LINE(116)
			Float tmp2 = this->g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			Float _dest_g = tmp2;		HX_STACK_VAR(_dest_g,"_dest_g");
			HX_STACK_LINE(117)
			Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			Float _dest_b = tmp3;		HX_STACK_VAR(_dest_b,"_dest_b");
			HX_STACK_LINE(118)
			Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			Float _dest_a = tmp4;		HX_STACK_VAR(_dest_a,"_dest_a");
			HX_STACK_LINE(120)
			bool _change_r = false;		HX_STACK_VAR(_change_r,"_change_r");
			HX_STACK_LINE(121)
			bool _change_g = false;		HX_STACK_VAR(_change_g,"_change_g");
			HX_STACK_LINE(122)
			bool _change_b = false;		HX_STACK_VAR(_change_b,"_change_b");
			HX_STACK_LINE(123)
			bool _change_a = false;		HX_STACK_VAR(_change_a,"_change_a");
			HX_STACK_LINE(125)
			Dynamic tmp5 = _properties_to_tween;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::phoenix::Color >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			if ((tmp6)){
				HX_STACK_LINE(127)
				_dest_r = _properties_to_tween->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(128)
				_dest_g = _properties_to_tween->__Field(HX_HCSTRING("g","\x67","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(129)
				_dest_b = _properties_to_tween->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(130)
				_dest_a = _properties_to_tween->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(132)
				_change_r = true;
				HX_STACK_LINE(133)
				_change_g = true;
				HX_STACK_LINE(134)
				_change_b = true;
				HX_STACK_LINE(135)
				_change_a = true;
			}
			else{
				HX_STACK_LINE(139)
				bool tmp7 = (_properties_to_tween->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				if ((tmp7)){
					HX_STACK_LINE(139)
					_dest_r = _properties_to_tween->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(139)
					_change_r = true;
				}
				HX_STACK_LINE(140)
				bool tmp8 = (_properties_to_tween->__Field(HX_HCSTRING("g","\x67","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(140)
				if ((tmp8)){
					HX_STACK_LINE(140)
					_dest_g = _properties_to_tween->__Field(HX_HCSTRING("g","\x67","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(140)
					_change_g = true;
				}
				HX_STACK_LINE(141)
				bool tmp9 = (_properties_to_tween->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(141)
				if ((tmp9)){
					HX_STACK_LINE(141)
					_dest_b = _properties_to_tween->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(141)
					_change_b = true;
				}
				HX_STACK_LINE(142)
				bool tmp10 = (_properties_to_tween->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(142)
				if ((tmp10)){
					HX_STACK_LINE(142)
					_dest_a = _properties_to_tween->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(142)
					_change_a = true;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Color.hx",146,0xf59e6b1b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(146)
			Dynamic tmp7 = _Function_2_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			Dynamic _properties = tmp7;		HX_STACK_VAR(_properties,"_properties");
			HX_STACK_LINE(148)
			bool tmp8 = _change_r;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(148)
			if ((tmp8)){
				HX_STACK_LINE(148)
				_properties->__FieldRef(HX_HCSTRING("r","\x72","\x00","\x00","\x00")) = _dest_r;
			}
			HX_STACK_LINE(149)
			bool tmp9 = _change_g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(149)
			if ((tmp9)){
				HX_STACK_LINE(149)
				_properties->__FieldRef(HX_HCSTRING("g","\x67","\x00","\x00","\x00")) = _dest_g;
			}
			HX_STACK_LINE(150)
			bool tmp10 = _change_b;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(150)
			if ((tmp10)){
				HX_STACK_LINE(150)
				_properties->__FieldRef(HX_HCSTRING("b","\x62","\x00","\x00","\x00")) = _dest_b;
			}
			HX_STACK_LINE(151)
			bool tmp11 = _change_a;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(151)
			if ((tmp11)){
				HX_STACK_LINE(151)
				_properties->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = _dest_a;
			}
			HX_STACK_LINE(153)
			Dynamic tmp12 = _time_in_seconds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(153)
			Dynamic tmp13 = _properties;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(153)
			bool tmp14 = _override;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(153)
			::luxe::tween::actuators::IGenericActuator tmp15 = ::luxe::tween::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp12,tmp13,tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(153)
			return tmp15;
		}
		else{
			HX_STACK_LINE(156)
			HX_STACK_DO_THROW(HX_HCSTRING(" Warning: Color.tween passed a null destination ","\x3e","\x4f","\x7a","\x3d"));
		}
		HX_STACK_LINE(113)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Color_obj,tween,return )

::phoenix::Color Color_obj::clone( ){
	HX_STACK_FRAME("phoenix.Color","clone",0x8274ee93,"phoenix.Color.clone","phoenix/Color.hx",161,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	Float tmp1 = this->g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(162)
	::phoenix::Color tmp4 = ::phoenix::Color_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(162)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,clone,return )

::phoenix::Color Color_obj::rgb( hx::Null< int >  __o__rgb){
int _rgb = __o__rgb.Default(16777215);
	HX_STACK_FRAME("phoenix.Color","rgb",0x34bc5cc3,"phoenix.Color.rgb","phoenix/Color.hx",165,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rgb,"_rgb")
{
		HX_STACK_LINE(166)
		int tmp = _rgb;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		this->from_int(tmp);
		HX_STACK_LINE(167)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,rgb,return )

::phoenix::ColorHSL Color_obj::toColorHSL( ){
	HX_STACK_FRAME("phoenix.Color","toColorHSL",0x639d8f03,"phoenix.Color.toColorHSL","phoenix/Color.hx",170,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	::phoenix::ColorHSL tmp = ::phoenix::ColorHSL_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	::phoenix::ColorHSL tmp1 = tmp->fromColor(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,toColorHSL,return )

::phoenix::ColorHSV Color_obj::toColorHSV( ){
	HX_STACK_FRAME("phoenix.Color","toColorHSV",0x639d8f0d,"phoenix.Color.toColorHSV","phoenix/Color.hx",174,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	::phoenix::ColorHSV tmp = ::phoenix::ColorHSV_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	::phoenix::ColorHSV tmp1 = tmp->fromColor(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,toColorHSV,return )

Void Color_obj::fromColorHSV( ::phoenix::ColorHSV _color_hsv){
{
		HX_STACK_FRAME("phoenix.Color","fromColorHSV",0xfc51ac7c,"phoenix.Color.fromColorHSV","phoenix/Color.hx",178,0xf59e6b1b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_color_hsv,"_color_hsv")
		HX_STACK_LINE(180)
		Float tmp = hx::Mod(_color_hsv->h,(int)360);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		Float tmp1 = (Float(tmp) / Float((int)60));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		Float d = tmp1;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(182)
		bool tmp2 = (d < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		if ((tmp2)){
			HX_STACK_LINE(183)
			hx::AddEq(d,(int)6);
		}
		HX_STACK_LINE(186)
		Float tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		int hf = tmp4;		HX_STACK_VAR(hf,"hf");
		HX_STACK_LINE(187)
		int tmp5 = hx::Mod(hf,(int)6);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		int hi = tmp5;		HX_STACK_VAR(hi,"hi");
		HX_STACK_LINE(188)
		Float tmp6 = (d - hf);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		Float f = tmp6;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(190)
		Float v = _color_hsv->v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(191)
		Float tmp7 = _color_hsv->v;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		Float tmp8 = ((int)1 - _color_hsv->s);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(191)
		Float p = tmp9;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(192)
		Float tmp10 = _color_hsv->v;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(192)
		Float tmp11 = (f * _color_hsv->s);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(192)
		Float tmp12 = ((int)1 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(192)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(192)
		Float q = tmp13;		HX_STACK_VAR(q,"q");
		HX_STACK_LINE(193)
		Float tmp14 = _color_hsv->v;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(193)
		Float tmp15 = ((int)1 - f);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(193)
		Float tmp16 = _color_hsv->s;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(193)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(193)
		Float tmp18 = ((int)1 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(193)
		Float tmp19 = (tmp14 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(193)
		Float t = tmp19;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(195)
		int tmp20 = hi;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(195)
		switch( (int)(tmp20)){
			case (int)0: {
				HX_STACK_LINE(196)
				Float tmp21 = v;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(196)
				this->set_r(tmp21);
				HX_STACK_LINE(196)
				Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(196)
				this->set_g(tmp22);
				HX_STACK_LINE(196)
				Float tmp23 = p;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(196)
				this->set_b(tmp23);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(197)
				Float tmp21 = q;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(197)
				this->set_r(tmp21);
				HX_STACK_LINE(197)
				Float tmp22 = v;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(197)
				this->set_g(tmp22);
				HX_STACK_LINE(197)
				Float tmp23 = p;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(197)
				this->set_b(tmp23);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(198)
				Float tmp21 = p;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(198)
				this->set_r(tmp21);
				HX_STACK_LINE(198)
				Float tmp22 = v;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(198)
				this->set_g(tmp22);
				HX_STACK_LINE(198)
				Float tmp23 = t;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(198)
				this->set_b(tmp23);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(199)
				Float tmp21 = p;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(199)
				this->set_r(tmp21);
				HX_STACK_LINE(199)
				Float tmp22 = q;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(199)
				this->set_g(tmp22);
				HX_STACK_LINE(199)
				Float tmp23 = v;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(199)
				this->set_b(tmp23);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(200)
				Float tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(200)
				this->set_r(tmp21);
				HX_STACK_LINE(200)
				Float tmp22 = p;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(200)
				this->set_g(tmp22);
				HX_STACK_LINE(200)
				Float tmp23 = v;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(200)
				this->set_b(tmp23);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(201)
				Float tmp21 = v;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(201)
				this->set_r(tmp21);
				HX_STACK_LINE(201)
				Float tmp22 = p;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(201)
				this->set_g(tmp22);
				HX_STACK_LINE(201)
				Float tmp23 = q;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(201)
				this->set_b(tmp23);
			}
			;break;
		}
		HX_STACK_LINE(204)
		this->a = _color_hsv->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,fromColorHSV,(void))

::phoenix::Color Color_obj::fromColorHSL( ::phoenix::ColorHSL _color_hsl){
	HX_STACK_FRAME("phoenix.Color","fromColorHSL",0xfc51ac72,"phoenix.Color.fromColorHSL","phoenix/Color.hx",208,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color_hsl,"_color_hsl")
	HX_STACK_LINE(210)
	Float q = (int)1;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(212)
	Float tmp = _color_hsl->l;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	Float tmp1 = ((Float)0.5);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	if ((tmp2)){
		HX_STACK_LINE(213)
		Float tmp3 = _color_hsl->l;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		Float tmp4 = ((int)1 + _color_hsl->s);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		q = tmp5;
	}
	else{
		HX_STACK_LINE(215)
		Float tmp3 = (_color_hsl->l + _color_hsl->s);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		Float tmp4 = (_color_hsl->l * _color_hsl->s);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(215)
		q = tmp5;
	}
	HX_STACK_LINE(218)
	Float tmp3 = ((int)2 * _color_hsl->l);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	Float tmp4 = q;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	Float p = tmp5;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(219)
	Float tmp6 = hx::Mod(_color_hsl->h,(int)360);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(219)
	Float tmp7 = (Float(tmp6) / Float((int)360));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(219)
	Float hk = tmp7;		HX_STACK_VAR(hk,"hk");
	HX_STACK_LINE(221)
	Float tmp8 = hk;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(221)
	Float tmp9 = ((Float)0.333333333333333315);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(221)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(221)
	Float tr = tmp10;		HX_STACK_VAR(tr,"tr");
	HX_STACK_LINE(222)
	Float tg = hk;		HX_STACK_VAR(tg,"tg");
	HX_STACK_LINE(223)
	Float tmp11 = hk;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(223)
	Float tmp12 = ((Float)0.333333333333333315);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(223)
	Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(223)
	Float tb = tmp13;		HX_STACK_VAR(tb,"tb");
	HX_STACK_LINE(225)
	Array< Float > tc = Array_obj< Float >::__new().Add(tr).Add(tg).Add(tb);		HX_STACK_VAR(tc,"tc");
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(227)
		int _g = tc->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(227)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(227)
			if ((tmp15)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(227)
			int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(227)
			int n = tmp16;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(229)
			Float tmp17 = tc->__get(n);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(229)
			Float t = tmp17;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(231)
			bool tmp18 = (t < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(231)
			if ((tmp18)){
				HX_STACK_LINE(231)
				hx::AddEq(t,(int)1);
			}
			HX_STACK_LINE(232)
			bool tmp19 = (t > (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(232)
			if ((tmp19)){
				HX_STACK_LINE(232)
				hx::SubEq(t,(int)1);
			}
			HX_STACK_LINE(234)
			Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(234)
			Float tmp21 = ((Float)0.166666666666666657);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(234)
			bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(234)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(234)
			if ((tmp22)){
				HX_STACK_LINE(235)
				Float tmp24 = p;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(235)
				Float tmp25 = (q - p);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(235)
				Float tmp26 = (tmp25 * (int)6);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(235)
				Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(235)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(235)
				tmp23 = (tmp24 + tmp28);
			}
			else{
				HX_STACK_LINE(236)
				Float tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(236)
				Float tmp25 = ((Float)0.5);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(236)
				bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(236)
				if ((tmp26)){
					HX_STACK_LINE(237)
					tmp23 = q;
				}
				else{
					HX_STACK_LINE(238)
					Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(238)
					Float tmp28 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(238)
					bool tmp29 = (tmp27 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(238)
					if ((tmp29)){
						HX_STACK_LINE(239)
						Float tmp30 = p;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(239)
						Float tmp31 = (q - p);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(239)
						Float tmp32 = (tmp31 * (int)6);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(239)
						Float tmp33 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(239)
						Float tmp34 = t;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(239)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(239)
						Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(239)
						tmp23 = (tmp30 + tmp36);
					}
					else{
						HX_STACK_LINE(241)
						tmp23 = p;
					}
				}
			}
			HX_STACK_LINE(234)
			tc[n] = tmp23;
		}
	}
	HX_STACK_LINE(247)
	Float tmp14 = tc->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(247)
	this->set_r(tmp14);
	HX_STACK_LINE(248)
	Float tmp15 = tc->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(248)
	this->set_g(tmp15);
	HX_STACK_LINE(249)
	Float tmp16 = tc->__get((int)2);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(249)
	this->set_b(tmp16);
	HX_STACK_LINE(251)
	this->a = _color_hsl->a;
	HX_STACK_LINE(253)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,fromColorHSL,return )

::String Color_obj::toString( ){
	HX_STACK_FRAME("phoenix.Color","toString",0xc4695b36,"phoenix.Color.toString","phoenix/Color.hx",258,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	Float tmp = this->r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	::String tmp1 = (HX_HCSTRING("{ r:","\x0d","\xea","\x65","\x51") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	::String tmp2 = (tmp1 + HX_HCSTRING(" , g:","\x87","\x95","\x00","\x8a"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	Float tmp3 = this->g;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(259)
	::String tmp5 = (tmp4 + HX_HCSTRING(" , b:","\x2c","\x91","\x00","\x8a"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(259)
	Float tmp6 = this->b;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(259)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(259)
	::String tmp8 = (tmp7 + HX_HCSTRING(" , a:","\x4d","\x90","\x00","\x8a"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(259)
	Float tmp9 = this->a;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(259)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(259)
	::String tmp11 = (tmp10 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(259)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Color_obj,toString,return )

Void Color_obj::from_int( int _i){
{
		HX_STACK_FRAME("phoenix.Color","from_int",0x3e087ee4,"phoenix.Color.from_int","phoenix/Color.hx",262,0xf59e6b1b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_i,"_i")
		HX_STACK_LINE(264)
		int tmp = (int(_i) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		int _r = tmp;		HX_STACK_VAR(_r,"_r");
		HX_STACK_LINE(265)
		int tmp1 = (int(_i) >> int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		int tmp3 = (int(_i) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		int _b = tmp3;		HX_STACK_VAR(_b,"_b");
		HX_STACK_LINE(269)
		Float tmp4 = (Float(_r) / Float((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(269)
		this->set_r(tmp4);
		HX_STACK_LINE(270)
		Float tmp5 = (Float(_g) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(270)
		this->set_g(tmp5);
		HX_STACK_LINE(271)
		Float tmp6 = (Float(_b) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		this->set_b(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,from_int,(void))

::phoenix::Color Color_obj::random( Dynamic __o__include_alpha){
Dynamic _include_alpha = __o__include_alpha.Default(false);
	HX_STACK_FRAME("phoenix.Color","random",0x4d1d160d,"phoenix.Color.random","phoenix/Color.hx",78,0xf59e6b1b)
	HX_STACK_ARG(_include_alpha,"_include_alpha")
{
		HX_STACK_LINE(79)
		Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		Dynamic tmp3 = _include_alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		if ((tmp3)){
			HX_STACK_LINE(79)
			tmp4 = ::Math_obj::random();
		}
		else{
			HX_STACK_LINE(79)
			tmp4 = ((Float)1.0);
		}
		HX_STACK_LINE(79)
		::phoenix::Color tmp5 = ::phoenix::Color_obj::__new(tmp,tmp1,tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_obj,random,return )


Color_obj::Color_obj()
{
}

Dynamic Color_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"rgb") ) { return rgb_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_r") ) { return set_r_dyn(); }
		if (HX_FIELD_EQ(inName,"set_g") ) { return set_g_dyn(); }
		if (HX_FIELD_EQ(inName,"set_b") ) { return set_b_dyn(); }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"is_hsl") ) { return is_hsl; }
		if (HX_FIELD_EQ(inName,"is_hsv") ) { return is_hsv; }
		if (HX_FIELD_EQ(inName,"maxRGB") ) { return maxRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"minRGB") ) { return minRGB_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"from_int") ) { return from_int_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"refreshing") ) { return refreshing; }
		if (HX_FIELD_EQ(inName,"toColorHSL") ) { return toColorHSL_dyn(); }
		if (HX_FIELD_EQ(inName,"toColorHSV") ) { return toColorHSV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromColorHSV") ) { return fromColorHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"fromColorHSL") ) { return fromColorHSL_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Color_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { outValue = random_dyn(); return true;  }
	}
	return false;
}

Dynamic Color_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { if (inCallProp == hx::paccAlways) return set_r(inValue);r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { if (inCallProp == hx::paccAlways) return set_g(inValue);g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == hx::paccAlways) return set_b(inValue);b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"is_hsl") ) { is_hsl=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"is_hsv") ) { is_hsv=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"refreshing") ) { refreshing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Color_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Color_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("is_hsl","\xec","\x2c","\xa8","\x71"));
	outFields->push(HX_HCSTRING("is_hsv","\xf6","\x2c","\xa8","\x71"));
	outFields->push(HX_HCSTRING("refreshing","\xe7","\x8d","\x3e","\x07"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Color_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Color_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Color_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Color_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Color_obj,is_hsl),HX_HCSTRING("is_hsl","\xec","\x2c","\xa8","\x71")},
	{hx::fsBool,(int)offsetof(Color_obj,is_hsv),HX_HCSTRING("is_hsv","\xf6","\x2c","\xa8","\x71")},
	{hx::fsBool,(int)offsetof(Color_obj,refreshing),HX_HCSTRING("refreshing","\xe7","\x8d","\x3e","\x07")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("is_hsl","\xec","\x2c","\xa8","\x71"),
	HX_HCSTRING("is_hsv","\xf6","\x2c","\xa8","\x71"),
	HX_HCSTRING("refreshing","\xe7","\x8d","\x3e","\x07"),
	HX_HCSTRING("set_r","\x55","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_g","\x4a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_b","\x45","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("maxRGB","\xc9","\xaa","\x54","\xbe"),
	HX_HCSTRING("minRGB","\x9b","\x2c","\xed","\x52"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00"),
	HX_HCSTRING("toColorHSL","\xf9","\xcd","\x03","\xfc"),
	HX_HCSTRING("toColorHSV","\x03","\xce","\x03","\xfc"),
	HX_HCSTRING("fromColorHSV","\xf2","\x14","\xfe","\x29"),
	HX_HCSTRING("fromColorHSL","\xe8","\x14","\xfe","\x29"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("from_int","\x5a","\xf4","\x0d","\xb2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_obj::__mClass,"__mClass");
};

#endif

hx::Class Color_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	::String(null()) };

void Color_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Color","\x24","\x4f","\x3d","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Color_obj::__GetStatic;
	__mClass->mSetStaticField = &Color_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Color_obj >;
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

} // end namespace phoenix
