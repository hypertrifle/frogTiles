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
namespace phoenix{

Void ColorHSL_obj::__construct(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__l,hx::Null< Float >  __o__a)
{
HX_STACK_FRAME("phoenix.ColorHSL","new",0xdf8aadaf,"phoenix.ColorHSL.new","phoenix/Color.hx",281,0xf59e6b1b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__h,"_h")
HX_STACK_ARG(__o__s,"_s")
HX_STACK_ARG(__o__l,"_l")
HX_STACK_ARG(__o__a,"_a")
Float _h = __o__h.Default(((Float)0.0));
Float _s = __o__s.Default(((Float)1.0));
Float _l = __o__l.Default(((Float)1.0));
Float _a = __o__a.Default(((Float)1.0));
{
	HX_STACK_LINE(285)
	this->l = ((Float)1.0);
	HX_STACK_LINE(284)
	this->s = ((Float)1.0);
	HX_STACK_LINE(283)
	this->h = ((Float)0.0);
	HX_STACK_LINE(305)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(307)
	this->is_hsl = true;
	HX_STACK_LINE(309)
	Float tmp = _h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	this->set_h(tmp);
	HX_STACK_LINE(310)
	Float tmp1 = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(310)
	this->set_s(tmp1);
	HX_STACK_LINE(311)
	Float tmp2 = _l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(311)
	this->set_l(tmp2);
	HX_STACK_LINE(312)
	this->a = _a;
	HX_STACK_LINE(314)
	this->_refresh();
}
;
	return null();
}

//ColorHSL_obj::~ColorHSL_obj() { }

Dynamic ColorHSL_obj::__CreateEmpty() { return  new ColorHSL_obj; }
hx::ObjectPtr< ColorHSL_obj > ColorHSL_obj::__new(hx::Null< Float >  __o__h,hx::Null< Float >  __o__s,hx::Null< Float >  __o__l,hx::Null< Float >  __o__a)
{  hx::ObjectPtr< ColorHSL_obj > _result_ = new ColorHSL_obj();
	_result_->__construct(__o__h,__o__s,__o__l,__o__a);
	return _result_;}

Dynamic ColorHSL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorHSL_obj > _result_ = new ColorHSL_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Float ColorHSL_obj::set_h( Float _h){
	HX_STACK_FRAME("phoenix.ColorHSL","set_h",0xbad3aa5a,"phoenix.ColorHSL.set_h","phoenix/Color.hx",287,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_LINE(288)
	this->h = _h;
	HX_STACK_LINE(289)
	this->_refresh();
	HX_STACK_LINE(290)
	Float tmp = _h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSL_obj,set_h,return )

Float ColorHSL_obj::set_s( Float _s){
	HX_STACK_FRAME("phoenix.ColorHSL","set_s",0xbad3aa65,"phoenix.ColorHSL.set_s","phoenix/Color.hx",292,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(293)
	this->s = _s;
	HX_STACK_LINE(294)
	this->_refresh();
	HX_STACK_LINE(295)
	Float tmp = _s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSL_obj,set_s,return )

Float ColorHSL_obj::set_l( Float _l){
	HX_STACK_FRAME("phoenix.ColorHSL","set_l",0xbad3aa5e,"phoenix.ColorHSL.set_l","phoenix/Color.hx",297,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_l,"_l")
	HX_STACK_LINE(298)
	this->l = _l;
	HX_STACK_LINE(299)
	this->_refresh();
	HX_STACK_LINE(300)
	Float tmp = _l;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSL_obj,set_l,return )

::phoenix::Color ColorHSL_obj::set( Dynamic _h,Dynamic _s,Dynamic _l,Dynamic _a){
	HX_STACK_FRAME("phoenix.ColorHSL","set",0xdf8e78f1,"phoenix.ColorHSL.set","phoenix/Color.hx",318,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_ARG(_s,"_s")
	HX_STACK_ARG(_l,"_l")
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(320)
	Float tmp = this->h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	Float _seth = tmp;		HX_STACK_VAR(_seth,"_seth");
	HX_STACK_LINE(321)
	Float tmp1 = this->s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	Float _sets = tmp1;		HX_STACK_VAR(_sets,"_sets");
	HX_STACK_LINE(322)
	Float tmp2 = this->l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	Float _setl = tmp2;		HX_STACK_VAR(_setl,"_setl");
	HX_STACK_LINE(323)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	Float _seta = tmp3;		HX_STACK_VAR(_seta,"_seta");
	HX_STACK_LINE(326)
	bool tmp4 = (_h != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(326)
	if ((tmp4)){
		HX_STACK_LINE(326)
		_seth = _h;
	}
	HX_STACK_LINE(327)
	bool tmp5 = (_s != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(327)
	if ((tmp5)){
		HX_STACK_LINE(327)
		_sets = _s;
	}
	HX_STACK_LINE(328)
	bool tmp6 = (_l != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(328)
	if ((tmp6)){
		HX_STACK_LINE(328)
		_setl = _l;
	}
	HX_STACK_LINE(329)
	bool tmp7 = (_a != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(329)
	if ((tmp7)){
		HX_STACK_LINE(329)
		_seta = _a;
	}
	HX_STACK_LINE(331)
	Float tmp8 = _seth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(331)
	this->set_h(tmp8);
	HX_STACK_LINE(332)
	Float tmp9 = _sets;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(332)
	this->set_s(tmp9);
	HX_STACK_LINE(333)
	Float tmp10 = _setl;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(333)
	this->set_l(tmp10);
	HX_STACK_LINE(334)
	this->a = _seta;
	HX_STACK_LINE(336)
	this->_refresh();
	HX_STACK_LINE(338)
	return hx::ObjectPtr<OBJ_>(this);
}


::luxe::tween::actuators::IGenericActuator ColorHSL_obj::tween( Dynamic __o__time_in_seconds,Dynamic _dest,hx::Null< bool >  __o__override){
Dynamic _time_in_seconds = __o__time_in_seconds.Default(((Float)0.5));
bool _override = __o__override.Default(true);
	HX_STACK_FRAME("phoenix.ColorHSL","tween",0x5a14b97a,"phoenix.ColorHSL.tween","phoenix/Color.hx",342,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_time_in_seconds,"_time_in_seconds")
	HX_STACK_ARG(_dest,"_dest")
	HX_STACK_ARG(_override,"_override")
{
		HX_STACK_LINE(344)
		Dynamic tmp = _time_in_seconds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		Dynamic tmp1 = _dest;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(344)
		bool tmp2 = _override;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		this->super::tween(tmp,tmp1,tmp2);
		HX_STACK_LINE(346)
		bool tmp3 = (_dest != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(346)
		if ((tmp3)){
			HX_STACK_LINE(348)
			Float tmp4 = this->h;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(348)
			Float _dest_h = tmp4;		HX_STACK_VAR(_dest_h,"_dest_h");
			HX_STACK_LINE(349)
			Float tmp5 = this->s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(349)
			Float _dest_s = tmp5;		HX_STACK_VAR(_dest_s,"_dest_s");
			HX_STACK_LINE(350)
			Float tmp6 = this->l;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(350)
			Float _dest_l = tmp6;		HX_STACK_VAR(_dest_l,"_dest_l");
			HX_STACK_LINE(351)
			Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(351)
			Float _dest_a = tmp7;		HX_STACK_VAR(_dest_a,"_dest_a");
			HX_STACK_LINE(353)
			bool _change_h = false;		HX_STACK_VAR(_change_h,"_change_h");
			HX_STACK_LINE(354)
			bool _change_s = false;		HX_STACK_VAR(_change_s,"_change_s");
			HX_STACK_LINE(355)
			bool _change_l = false;		HX_STACK_VAR(_change_l,"_change_l");
			HX_STACK_LINE(356)
			bool _change_a = false;		HX_STACK_VAR(_change_a,"_change_a");
			HX_STACK_LINE(358)
			Dynamic tmp8 = _dest;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(358)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::phoenix::ColorHSL >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(358)
			if ((tmp9)){
				HX_STACK_LINE(360)
				_dest_h = _dest->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(361)
				_dest_s = _dest->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(362)
				_dest_l = _dest->__Field(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(363)
				_dest_a = _dest->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );
				HX_STACK_LINE(365)
				_change_h = true;
				HX_STACK_LINE(366)
				_change_s = true;
				HX_STACK_LINE(367)
				_change_l = true;
				HX_STACK_LINE(368)
				_change_a = true;
			}
			else{
				HX_STACK_LINE(372)
				bool tmp10 = (_dest->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(372)
				if ((tmp10)){
					HX_STACK_LINE(372)
					_dest_h = _dest->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(372)
					_change_h = true;
				}
				HX_STACK_LINE(373)
				bool tmp11 = (_dest->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(373)
				if ((tmp11)){
					HX_STACK_LINE(373)
					_dest_s = _dest->__Field(HX_HCSTRING("s","\x73","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(373)
					_change_s = true;
				}
				HX_STACK_LINE(374)
				bool tmp12 = (_dest->__Field(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(374)
				if ((tmp12)){
					HX_STACK_LINE(374)
					_dest_l = _dest->__Field(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(374)
					_change_l = true;
				}
				HX_STACK_LINE(375)
				bool tmp13 = (_dest->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(375)
				if ((tmp13)){
					HX_STACK_LINE(375)
					_dest_a = _dest->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(375)
					_change_a = true;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Color.hx",379,0xf59e6b1b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(379)
			Dynamic tmp10 = _Function_2_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(379)
			Dynamic _properties = tmp10;		HX_STACK_VAR(_properties,"_properties");
			HX_STACK_LINE(381)
			bool tmp11 = _change_h;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(381)
			if ((tmp11)){
				HX_STACK_LINE(381)
				_properties->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = _dest_h;
			}
			HX_STACK_LINE(382)
			bool tmp12 = _change_s;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(382)
			if ((tmp12)){
				HX_STACK_LINE(382)
				_properties->__FieldRef(HX_HCSTRING("s","\x73","\x00","\x00","\x00")) = _dest_s;
			}
			HX_STACK_LINE(383)
			bool tmp13 = _change_l;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(383)
			if ((tmp13)){
				HX_STACK_LINE(383)
				_properties->__FieldRef(HX_HCSTRING("l","\x6c","\x00","\x00","\x00")) = _dest_l;
			}
			HX_STACK_LINE(384)
			bool tmp14 = _change_a;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			if ((tmp14)){
				HX_STACK_LINE(384)
				_properties->__FieldRef(HX_HCSTRING("a","\x61","\x00","\x00","\x00")) = _dest_a;
			}
			HX_STACK_LINE(386)
			Dynamic tmp15 = _time_in_seconds;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(386)
			Dynamic tmp16 = _properties;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(386)
			bool tmp17 = _override;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(386)
			::luxe::tween::actuators::IGenericActuator tmp18 = ::luxe::tween::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp15,tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(386)
			return tmp18;
		}
		else{
			HX_STACK_LINE(389)
			HX_STACK_DO_THROW(HX_HCSTRING(" Warning: Color.tween passed a null destination ","\x3e","\x4f","\x7a","\x3d"));
		}
		HX_STACK_LINE(346)
		return null();
	}
}


::phoenix::ColorHSL ColorHSL_obj::_refresh( ){
	HX_STACK_FRAME("phoenix.ColorHSL","_refresh",0xd8d2b7ad,"phoenix.ColorHSL._refresh","phoenix/Color.hx",394,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(396)
	this->refreshing = true;
	HX_STACK_LINE(397)
	this->super::fromColorHSL(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(398)
	this->refreshing = false;
	HX_STACK_LINE(400)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorHSL_obj,_refresh,return )

::phoenix::Color ColorHSL_obj::clone( ){
	HX_STACK_FRAME("phoenix.ColorHSL","clone",0x8907226c,"phoenix.ColorHSL.clone","phoenix/Color.hx",403,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	Float tmp = this->h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	Float tmp1 = this->s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	Float tmp2 = this->l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(404)
	::phoenix::ColorHSL tmp4 = ::phoenix::ColorHSL_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(404)
	return tmp4;
}


::phoenix::Color ColorHSL_obj::toColor( ){
	HX_STACK_FRAME("phoenix.ColorHSL","toColor",0xd3f1eeb7,"phoenix.ColorHSL.toColor","phoenix/Color.hx",407,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(408)
	::phoenix::ColorHSL tmp = this->_refresh();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	::phoenix::Color tmp1 = ((::phoenix::Color)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(408)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorHSL_obj,toColor,return )

::phoenix::ColorHSL ColorHSL_obj::fromColor( ::phoenix::Color _color){
	HX_STACK_FRAME("phoenix.ColorHSL","fromColor",0x073f9e28,"phoenix.ColorHSL.fromColor","phoenix/Color.hx",411,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_color,"_color")
	HX_STACK_LINE(413)
	Float tmp = _color->maxRGB();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(413)
	Float max = tmp;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(414)
	Float tmp1 = _color->minRGB();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(414)
	Float min = tmp1;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(415)
	Float tmp2 = (max + min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(415)
	Float add = tmp2;		HX_STACK_VAR(add,"add");
	HX_STACK_LINE(416)
	Float tmp3 = (max - min);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(416)
	Float sub = tmp3;		HX_STACK_VAR(sub,"sub");
	HX_STACK_LINE(418)
	Float _h = (int)0;		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(419)
	bool tmp4 = (max == min);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(419)
	if ((tmp4)){
		HX_STACK_LINE(420)
		_h = (int)0;
	}
	else{
		HX_STACK_LINE(421)
		bool tmp5 = (max == _color->r);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(421)
		if ((tmp5)){
			HX_STACK_LINE(422)
			Float tmp6 = (_color->g - _color->b);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(422)
			Float tmp7 = ((int)60 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(422)
			Float tmp8 = sub;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(422)
			Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(422)
			Float tmp10 = (tmp9 + (int)360);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(422)
			Float tmp11 = hx::Mod(tmp10,(int)360);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(422)
			_h = tmp11;
		}
		else{
			HX_STACK_LINE(423)
			bool tmp6 = (max == _color->g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(423)
			if ((tmp6)){
				HX_STACK_LINE(424)
				Float tmp7 = (_color->b - _color->r);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(424)
				Float tmp8 = ((int)60 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(424)
				Float tmp9 = sub;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(424)
				Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(424)
				Float tmp11 = (tmp10 + (int)120);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(424)
				_h = tmp11;
			}
			else{
				HX_STACK_LINE(425)
				bool tmp7 = (max == _color->b);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(425)
				if ((tmp7)){
					HX_STACK_LINE(426)
					Float tmp8 = (_color->r - _color->g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(426)
					Float tmp9 = ((int)60 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(426)
					Float tmp10 = sub;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(426)
					Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(426)
					Float tmp12 = (tmp11 + (int)240);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(426)
					_h = tmp12;
				}
			}
		}
	}
	HX_STACK_LINE(429)
	Float tmp5 = (Float(add) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(429)
	Float _l = tmp5;		HX_STACK_VAR(_l,"_l");
	HX_STACK_LINE(431)
	bool tmp6 = (max == min);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(431)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(431)
	if ((tmp6)){
		HX_STACK_LINE(432)
		tmp7 = (int)0;
	}
	else{
		HX_STACK_LINE(433)
		Float tmp8 = this->l;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(433)
		Float tmp9 = ((Float)0.5);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(433)
		bool tmp10 = (tmp8 <= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(433)
		if ((tmp10)){
			HX_STACK_LINE(434)
			tmp7 = (Float(sub) / Float(add));
		}
		else{
			HX_STACK_LINE(436)
			Float tmp11 = sub;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(436)
			Float tmp12 = ((int)2 - add);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(436)
			tmp7 = (Float(tmp11) / Float(tmp12));
		}
	}
	HX_STACK_LINE(431)
	Float _s = tmp7;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(439)
	Float tmp8 = _h;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(439)
	this->set_h(tmp8);
	HX_STACK_LINE(440)
	Float tmp9 = _s;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(440)
	this->set_s(tmp9);
	HX_STACK_LINE(441)
	Float tmp10 = _l;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(441)
	this->set_l(tmp10);
	HX_STACK_LINE(442)
	this->a = _color->a;
	HX_STACK_LINE(444)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorHSL_obj,fromColor,return )

::String ColorHSL_obj::toString( ){
	HX_STACK_FRAME("phoenix.ColorHSL","toString",0xea6854fd,"phoenix.ColorHSL.toString","phoenix/Color.hx",448,0xf59e6b1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(449)
	Float tmp = this->h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(449)
	::String tmp1 = (HX_HCSTRING("{ h:","\x57","\xe1","\x65","\x51") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	::String tmp2 = (tmp1 + HX_HCSTRING(" , s:","\xfb","\x9f","\x00","\x8a"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(449)
	Float tmp3 = this->s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(449)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(449)
	::String tmp5 = (tmp4 + HX_HCSTRING(" , l:","\xe2","\x99","\x00","\x8a"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(449)
	Float tmp6 = this->l;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(449)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(449)
	::String tmp8 = (tmp7 + HX_HCSTRING(" , a:","\x4d","\x90","\x00","\x8a"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(449)
	Float tmp9 = this->a;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(449)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(449)
	::String tmp11 = (tmp10 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(449)
	return tmp11;
}



ColorHSL_obj::ColorHSL_obj()
{
}

Dynamic ColorHSL_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"l") ) { return l; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		if (HX_FIELD_EQ(inName,"set_s") ) { return set_s_dyn(); }
		if (HX_FIELD_EQ(inName,"set_l") ) { return set_l_dyn(); }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorHSL_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { if (inCallProp == hx::paccAlways) return set_h(inValue);h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { if (inCallProp == hx::paccAlways) return set_s(inValue);s=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"l") ) { if (inCallProp == hx::paccAlways) return set_l(inValue);l=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorHSL_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColorHSL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorHSL_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ColorHSL_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ColorHSL_obj,l),HX_HCSTRING("l","\x6c","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("l","\x6c","\x00","\x00","\x00"),
	HX_HCSTRING("set_h","\x4b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_s","\x56","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_l","\x4f","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("_refresh","\x5c","\x33","\xd9","\x26"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toColor","\xe8","\xbd","\xe0","\x16"),
	HX_HCSTRING("fromColor","\x99","\x5b","\xe5","\xfe"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorHSL_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorHSL_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorHSL_obj::__mClass;

void ColorHSL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.ColorHSL","\x3d","\xaa","\xc0","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColorHSL_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorHSL_obj >;
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
