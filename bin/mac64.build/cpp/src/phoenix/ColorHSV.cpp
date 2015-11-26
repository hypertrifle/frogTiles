#include <hxcpp.h>

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

Void ColorHSV_obj::__construct(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__v,hx::Null< Float >  __o__a)
{
HX_STACK_FRAME("phoenix.ColorHSV","new",0xa18c7ab9,"phoenix.ColorHSV.new","phoenix/Color.hx",456,0xf59e6b1b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__h,"_h")
HX_STACK_ARG(__o__s,"_s")
HX_STACK_ARG(__o__v,"_v")
HX_STACK_ARG(__o__a,"_a")
Float _h = __o__h.Default(((Float)0.0));
Float _s = __o__s.Default(((Float)0.0));
Float _v = __o__v.Default(((Float)1.0));
Float _a = __o__a.Default(((Float)1.0));
{
	HX_STACK_LINE(460)
	this->v = ((Float)1.0);
	HX_STACK_LINE(459)
	this->s = ((Float)0.0);
	HX_STACK_LINE(458)
	this->h = ((Float)0.0);
	HX_STACK_LINE(480)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(482)
	this->is_hsv = true;
	HX_STACK_LINE(484)
	Float tmp = _h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	this->set_h(tmp);
	HX_STACK_LINE(485)
	Float tmp1 = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(485)
	this->set_s(tmp1);
	HX_STACK_LINE(486)
	Float tmp2 = _v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(486)
	this->set_v(tmp2);
	HX_STACK_LINE(487)
	this->a = _a;
	HX_STACK_LINE(489)
	this->_refresh();
}
;
	return null();
}

//ColorHSV_obj::~ColorHSV_obj() { }

Dynamic ColorHSV_obj::__CreateEmpty() { return  new ColorHSV_obj; }
hx::ObjectPtr< ColorHSV_obj > ColorHSV_obj::__new(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__v,hx::Null< Float >  __o__a)
{  hx::ObjectPtr< ColorHSV_obj > _result_ = new ColorHSV_obj();
	_result_->__construct(__o__h,__o__s,__o__v,__o__a);
	return _result_;}

Dynamic ColorHSV_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorHSV_obj > _result_ = new ColorHSV_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Float ColorHSV_obj::set_h( Float _h){
	HX_STACK_FRAME("phoenix.ColorHSV","set_h",0x5aaa4de4,"phoenix.ColorHSV.set_h","phoenix/Color.hx",462,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_LINE(463)
	this->h = _h;
	HX_STACK_LINE(464)
	this->_refresh();
	HX_STACK_LINE(465)
	Float tmp = _h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(465)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSV_obj,set_h,return )

Float ColorHSV_obj::set_s( Float _s){
	HX_STACK_FRAME("phoenix.ColorHSV","set_s",0x5aaa4def,"phoenix.ColorHSV.set_s","phoenix/Color.hx",467,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(468)
	this->s = _s;
	HX_STACK_LINE(469)
	this->_refresh();
	HX_STACK_LINE(470)
	Float tmp = this->s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSV_obj,set_s,return )

Float ColorHSV_obj::set_v( Float _v){
	HX_STACK_FRAME("phoenix.ColorHSV","set_v",0x5aaa4df2,"phoenix.ColorHSV.set_v","phoenix/Color.hx",472,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(473)
	this->v = _v;
	HX_STACK_LINE(474)
	this->_refresh();
	HX_STACK_LINE(475)
	Float tmp = this->v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(475)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSV_obj,set_v,return )

::phoenix::Color ColorHSV_obj::set( Dynamic _h,Dynamic _s,Dynamic _v,Dynamic _a){
	HX_STACK_FRAME("phoenix.ColorHSV","set",0xa19045fb,"phoenix.ColorHSV.set","phoenix/Color.hx",493,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_ARG(_s,"_s")
	HX_STACK_ARG(_v,"_v")
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(495)
	Float tmp = this->h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	Float _seth = tmp;		HX_STACK_VAR(_seth,"_seth");
	HX_STACK_LINE(496)
	Float tmp1 = this->s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	Float _sets = tmp1;		HX_STACK_VAR(_sets,"_sets");
	HX_STACK_LINE(497)
	Float tmp2 = this->v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(497)
	Float _setv = tmp2;		HX_STACK_VAR(_setv,"_setv");
	HX_STACK_LINE(498)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(498)
	Float _seta = tmp3;		HX_STACK_VAR(_seta,"_seta");
	HX_STACK_LINE(501)
	bool tmp4 = (_h != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(501)
	if ((tmp4)){
		HX_STACK_LINE(501)
		_seth = _h;
	}
	HX_STACK_LINE(502)
	bool tmp5 = (_s != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(502)
	if ((tmp5)){
		HX_STACK_LINE(502)
		_sets = _s;
	}
	HX_STACK_LINE(503)
	bool tmp6 = (_v != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(503)
	if ((tmp6)){
		HX_STACK_LINE(503)
		_setv = _v;
	}
	HX_STACK_LINE(504)
	bool tmp7 = (_a != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(504)
	if ((tmp7)){
		HX_STACK_LINE(504)
		_seta = _a;
	}
	HX_STACK_LINE(506)
	Float tmp8 = _seth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(506)
	this->set_h(tmp8);
	HX_STACK_LINE(507)
	Float tmp9 = _sets;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(507)
	this->set_s(tmp9);
	HX_STACK_LINE(508)
	Float tmp10 = _setv;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(508)
	this->set_v(tmp10);
	HX_STACK_LINE(509)
	this->a = _seta;
	HX_STACK_LINE(512)
	this->_refresh();
	HX_STACK_LINE(514)
	return hx::ObjectPtr<OBJ_>(this);
}


::luxe::tween::actuators::IGenericActuator ColorHSV_obj::tween( Dynamic __o__time_in_seconds,Dynamic _dest,hx::Null< bool >  __o__override){
Dynamic _time_in_seconds = __o__time_in_seconds.Default(((Float)0.5));
bool _override = __o__override.Default(true);
	HX_STACK_FRAME("phoenix.ColorHSV","tween",0xf9eb5d04,"phoenix.ColorHSV.tween","phoenix/Color.hx",518,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_time_in_seconds,"_time_in_seconds")
	HX_STACK_ARG(_dest,"_dest")
	HX_STACK_ARG(_override,"_override")
{
		HX_STACK_LINE(520)
		Dynamic tmp = _time_in_seconds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(520)
		Dynamic tmp1 = _dest;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(520)
		bool tmp2 = _override;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(520)
		this->super::tween(tmp,tmp1,tmp2);
		HX_STACK_LINE(522)
		bool tmp3 = (_dest != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(522)
		if ((tmp3)){
			HX_STACK_LINE(524)
			Float tmp4 = this->h;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(524)
			Float _dest_h = tmp4;		HX_STACK_VAR(_dest_h,"_dest_h");
			HX_STACK_LINE(525)
			Float tmp5 = this->s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(525)
			Float _dest_s = tmp5;		HX_STACK_VAR(_dest_s,"_dest_s");
			HX_STACK_LINE(526)
			Float tmp6 = this->v;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(526)
			Float _dest_v = tmp6;		HX_STACK_VAR(_dest_v,"_dest_v");
			HX_STACK_LINE(527)
			Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(527)
			Float _dest_a = tmp7;		HX_STACK_VAR(_dest_a,"_dest_a");
			HX_STACK_LINE(529)
			bool _change_h = false;		HX_STACK_VAR(_change_h,"_change_h");
			HX_STACK_LINE(530)
			bool _change_s = false;		HX_STACK_VAR(_change_s,"_change_s");
			HX_STACK_LINE(531)
			bool _change_v = false;		HX_STACK_VAR(_change_v,"_change_v");
			HX_STACK_LINE(532)
			bool _change_a = false;		HX_STACK_VAR(_change_a,"_change_a");
			HX_STACK_LINE(534)
			Dynamic tmp8 = _dest;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(534)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::phoenix::ColorHSV >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(534)
			if ((tmp9)){
				HX_STACK_LINE(536)
				_dest_h = _dest->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(537)
				_dest_s = _dest->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(538)
				_dest_v = _dest->__Field(HX_HCSTRING("v","\x76","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(539)
				_dest_a = _dest->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(541)
				_change_h = true;
				HX_STACK_LINE(542)
				_change_s = true;
				HX_STACK_LINE(543)
				_change_v = true;
				HX_STACK_LINE(544)
				_change_a = true;
			}
			else{
				HX_STACK_LINE(548)
				bool tmp10 = (_dest->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(548)
				if ((tmp10)){
					HX_STACK_LINE(548)
					_dest_h = _dest->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(548)
					_change_h = true;
				}
				HX_STACK_LINE(549)
				bool tmp11 = (_dest->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(549)
				if ((tmp11)){
					HX_STACK_LINE(549)
					_dest_s = _dest->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(549)
					_change_s = true;
				}
				HX_STACK_LINE(550)
				bool tmp12 = (_dest->__Field(HX_HCSTRING("v","\x76","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(550)
				if ((tmp12)){
					HX_STACK_LINE(550)
					_dest_v = _dest->__Field(HX_HCSTRING("v","\x76","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(550)
					_change_v = true;
				}
				HX_STACK_LINE(551)
				bool tmp13 = (_dest->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(551)
				if ((tmp13)){
					HX_STACK_LINE(551)
					_dest_a = _dest->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(551)
					_change_a = true;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Color.hx",555,0xf59e6b1b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(555)
			Dynamic tmp10 = _Function_2_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(555)
			Dynamic _properties = tmp10;		HX_STACK_VAR(_properties,"_properties");
			HX_STACK_LINE(557)
			bool tmp11 = _change_h;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(557)
			if ((tmp11)){
				HX_STACK_LINE(557)
				_properties->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = _dest_h;
			}
			HX_STACK_LINE(558)
			bool tmp12 = _change_s;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(558)
			if ((tmp12)){
				HX_STACK_LINE(558)
				_properties->__FieldRef(HX_HCSTRING("s","\x73","\x00","\x00","\x00")) = _dest_s;
			}
			HX_STACK_LINE(559)
			bool tmp13 = _change_v;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(559)
			if ((tmp13)){
				HX_STACK_LINE(559)
				_properties->__FieldRef(HX_HCSTRING("v","\x76","\x00","\x00","\x00")) = _dest_v;
			}
			HX_STACK_LINE(560)
			bool tmp14 = _change_a;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(560)
			if ((tmp14)){
				HX_STACK_LINE(560)
				_properties->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = _dest_a;
			}
			HX_STACK_LINE(562)
			Dynamic tmp15 = _time_in_seconds;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(562)
			Dynamic tmp16 = _properties;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(562)
			bool tmp17 = _override;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(562)
			::luxe::tween::actuators::IGenericActuator tmp18 = ::luxe::tween::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp15,tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(562)
			return tmp18;
		}
		else{
			HX_STACK_LINE(565)
			HX_STACK_DO_THROW(HX_HCSTRING(" Warning: Color.tween passed a null destination ","\x3e","\x4f","\x7a","\x3d"));
		}
		HX_STACK_LINE(522)
		return null();
	}
}


::phoenix::ColorHSV ColorHSV_obj::_refresh( ){
	HX_STACK_FRAME("phoenix.ColorHSV","_refresh",0x5bbb6663,"phoenix.ColorHSV._refresh","phoenix/Color.hx",570,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(572)
	this->refreshing = true;
	HX_STACK_LINE(573)
	this->super::fromColorHSV(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(574)
	this->refreshing = false;
	HX_STACK_LINE(576)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorHSV_obj,_refresh,return )

::phoenix::Color ColorHSV_obj::clone( ){
	HX_STACK_FRAME("phoenix.ColorHSV","clone",0x28ddc5f6,"phoenix.ColorHSV.clone","phoenix/Color.hx",579,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(580)
	Float tmp = this->h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	Float tmp1 = this->s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(580)
	Float tmp2 = this->v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(580)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(580)
	::phoenix::ColorHSV tmp4 = ::phoenix::ColorHSV_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(580)
	return tmp4;
}


::phoenix::Color ColorHSV_obj::toColor( ){
	HX_STACK_FRAME("phoenix.ColorHSV","toColor",0x116008c1,"phoenix.ColorHSV.toColor","phoenix/Color.hx",583,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(585)
	::phoenix::ColorHSV tmp = this->_refresh();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(585)
	::phoenix::Color tmp1 = ((::phoenix::Color)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(585)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorHSV_obj,toColor,return )

::phoenix::ColorHSL ColorHSV_obj::toColorHSL( ){
	HX_STACK_FRAME("phoenix.ColorHSV","toColorHSL",0xd41e10c0,"phoenix.ColorHSV.toColorHSL","phoenix/Color.hx",588,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(589)
	this->_refresh();
	HX_STACK_LINE(590)
	::phoenix::ColorHSL tmp = this->super::toColorHSL();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	return tmp;
}


::phoenix::Color ColorHSV_obj::fromColorHSL( ::phoenix::ColorHSL _color_hsl){
	HX_STACK_FRAME("phoenix.ColorHSV","fromColorHSL",0xef43d76f,"phoenix.ColorHSV.fromColorHSL","phoenix/Color.hx",593,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color_hsl,"_color_hsl")
	HX_STACK_LINE(595)
	_color_hsl->_refresh();
	HX_STACK_LINE(596)
	::phoenix::Color tmp = ((::phoenix::Color)(_color_hsl));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(596)
	::phoenix::ColorHSV tmp1 = this->fromColor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	return tmp1;
}


::phoenix::ColorHSV ColorHSV_obj::fromColor( ::phoenix::Color _color){
	HX_STACK_FRAME("phoenix.ColorHSV","fromColor",0x0fefceb2,"phoenix.ColorHSV.fromColor","phoenix/Color.hx",599,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color,"_color")
	HX_STACK_LINE(601)
	Float tmp = _color->maxRGB();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(601)
	Float max = tmp;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(602)
	Float tmp1 = _color->minRGB();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	Float min = tmp1;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(603)
	Float tmp2 = (max + min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(603)
	Float add = tmp2;		HX_STACK_VAR(add,"add");
	HX_STACK_LINE(604)
	Float tmp3 = (max - min);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(604)
	Float sub = tmp3;		HX_STACK_VAR(sub,"sub");
	HX_STACK_LINE(606)
	Float _h = (int)0;		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(608)
	bool tmp4 = (max == min);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(608)
	if ((tmp4)){
		HX_STACK_LINE(609)
		_h = (int)0;
	}
	else{
		HX_STACK_LINE(610)
		bool tmp5 = (max == _color->r);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(610)
		if ((tmp5)){
			HX_STACK_LINE(611)
			Float tmp6 = (_color->g - _color->b);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(611)
			Float tmp7 = ((int)60 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(611)
			Float tmp8 = sub;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(611)
			Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(611)
			Float tmp10 = (tmp9 + (int)360);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(611)
			Float tmp11 = hx::Mod(tmp10,(int)360);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(611)
			_h = tmp11;
		}
		else{
			HX_STACK_LINE(612)
			bool tmp6 = (max == _color->g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(612)
			if ((tmp6)){
				HX_STACK_LINE(613)
				Float tmp7 = (_color->b - _color->r);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(613)
				Float tmp8 = ((int)60 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(613)
				Float tmp9 = sub;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(613)
				Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(613)
				Float tmp11 = (tmp10 + (int)120);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(613)
				_h = tmp11;
			}
			else{
				HX_STACK_LINE(614)
				bool tmp7 = (max == _color->b);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(614)
				if ((tmp7)){
					HX_STACK_LINE(615)
					Float tmp8 = (_color->r - _color->g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(615)
					Float tmp9 = ((int)60 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(615)
					Float tmp10 = sub;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(615)
					Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(615)
					Float tmp12 = (tmp11 + (int)240);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(615)
					_h = tmp12;
				}
			}
		}
	}
	HX_STACK_LINE(618)
	bool tmp5 = (max == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(618)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(618)
	if ((tmp5)){
		HX_STACK_LINE(619)
		tmp6 = (int)0;
	}
	else{
		HX_STACK_LINE(621)
		Float tmp7 = (Float(min) / Float(max));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(621)
		tmp6 = ((int)1 - tmp7);
	}
	HX_STACK_LINE(618)
	Float _s = tmp6;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(624)
	Float tmp7 = _h;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(624)
	this->set_h(tmp7);
	HX_STACK_LINE(625)
	Float tmp8 = _s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(625)
	this->set_s(tmp8);
	HX_STACK_LINE(626)
	Float tmp9 = max;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(626)
	this->set_v(tmp9);
	HX_STACK_LINE(627)
	this->a = _color->a;
	HX_STACK_LINE(629)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSV_obj,fromColor,return )

::String ColorHSV_obj::toString( ){
	HX_STACK_FRAME("phoenix.ColorHSV","toString",0x6d5103b3,"phoenix.ColorHSV.toString","phoenix/Color.hx",633,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(634)
	Float tmp = this->h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(634)
	::String tmp1 = (HX_HCSTRING("{ h:","\x57","\xe1","\x65","\x51") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(634)
	::String tmp2 = (tmp1 + HX_HCSTRING(" , s:","\xfb","\x9f","\x00","\x8a"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(634)
	Float tmp3 = this->s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(634)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(634)
	::String tmp5 = (tmp4 + HX_HCSTRING(" , v:","\x98","\xa2","\x00","\x8a"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(634)
	Float tmp6 = this->v;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(634)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(634)
	::String tmp8 = (tmp7 + HX_HCSTRING(" , a:","\x4d","\x90","\x00","\x8a"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(634)
	Float tmp9 = this->a;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(634)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(634)
	::String tmp11 = (tmp10 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(634)
	return tmp11;
}



ColorHSV_obj::ColorHSV_obj()
{
}

Dynamic ColorHSV_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"v") ) { return v; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		if (HX_FIELD_EQ(inName,"set_s") ) { return set_s_dyn(); }
		if (HX_FIELD_EQ(inName,"set_v") ) { return set_v_dyn(); }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toColor") ) { return toColor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_refresh") ) { return _refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromColor") ) { return fromColor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toColorHSL") ) { return toColorHSL_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromColorHSL") ) { return fromColorHSL_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorHSV_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { if (inCallProp == hx::paccAlways) return set_h(inValue);h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { if (inCallProp == hx::paccAlways) return set_s(inValue);s=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { if (inCallProp == hx::paccAlways) return set_v(inValue);v=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorHSV_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColorHSV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorHSV_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ColorHSV_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ColorHSV_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	HX_HCSTRING("set_h","\x4b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_s","\x56","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_v","\x59","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("_refresh","\x5c","\x33","\xd9","\x26"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toColor","\xe8","\xbd","\xe0","\x16"),
	HX_HCSTRING("toColorHSL","\xf9","\xcd","\x03","\xfc"),
	HX_HCSTRING("fromColorHSL","\xe8","\x14","\xfe","\x29"),
	HX_HCSTRING("fromColor","\x99","\x5b","\xe5","\xfe"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorHSV_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorHSV_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorHSV_obj::__mClass;

void ColorHSV_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.ColorHSV","\x47","\xaa","\xc0","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColorHSV_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorHSV_obj >;
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
