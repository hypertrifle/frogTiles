#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
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
namespace luxe{
namespace tween{
namespace actuators{

Void SimpleActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","new",0x5028008c,"luxe.tween.actuators.SimpleActuator.new","luxe/tween/actuators/SimpleActuator.hx",18,0x1966fbc1)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(41)
	this->has_timescaled_starttime = false;
	HX_STACK_LINE(45)
	this->active = true;
	HX_STACK_LINE(46)
	this->propertyDetails = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(47)
	this->sendChange = false;
	HX_STACK_LINE(48)
	this->paused = false;
	HX_STACK_LINE(49)
	this->cacheVisible = false;
	HX_STACK_LINE(50)
	this->initialized = false;
	HX_STACK_LINE(51)
	this->setVisible = false;
	HX_STACK_LINE(52)
	this->toggleVisible = false;
	HX_STACK_LINE(54)
	::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	this->startTime = tmp1;
	HX_STACK_LINE(56)
	Dynamic tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	Float tmp3 = duration;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	Dynamic tmp4 = properties;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	super::__construct(tmp2,tmp3,tmp4);
	HX_STACK_LINE(58)
	bool tmp5 = ::luxe::tween::actuators::SimpleActuator_obj::addedEvent;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	if ((tmp6)){
		HX_STACK_LINE(60)
		::luxe::tween::actuators::SimpleActuator_obj::addedEvent = true;
		HX_STACK_LINE(61)
		Dynamic tmp7 = ::luxe::tween::actuators::SimpleActuator_obj::on_internal_update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		::Luxe_obj::on((int)4,tmp7);
	}
}
;
	return null();
}

//SimpleActuator_obj::~SimpleActuator_obj() { }

Dynamic SimpleActuator_obj::__CreateEmpty() { return  new SimpleActuator_obj; }
hx::ObjectPtr< SimpleActuator_obj > SimpleActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< SimpleActuator_obj > _result_ = new SimpleActuator_obj();
	_result_->__construct(target,duration,properties);
	return _result_;}

Dynamic SimpleActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleActuator_obj > _result_ = new SimpleActuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::luxe::tween::actuators::IGenericActuator SimpleActuator_obj::autoVisible( Dynamic value){
	HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","autoVisible",0x520a58ef,"luxe.tween.actuators.SimpleActuator.autoVisible","luxe/tween/actuators/SimpleActuator.hx",71,0x1966fbc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(73)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	if ((tmp)){
		HX_STACK_LINE(75)
		value = true;
	}
	HX_STACK_LINE(79)
	this->_autoVisible = value;
	HX_STACK_LINE(81)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	if ((tmp2)){
		HX_STACK_LINE(83)
		this->toggleVisible = false;
		HX_STACK_LINE(85)
		bool tmp3 = this->setVisible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		if ((tmp3)){
			HX_STACK_LINE(87)
			Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			Dynamic target = tmp4;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(87)
			bool tmp5 = this->cacheVisible;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			Dynamic value1 = tmp5;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(87)
			Dynamic tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			bool tmp7 = ::Reflect_obj::hasField(tmp6,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			if ((tmp7)){
				HX_STACK_LINE(87)
				Dynamic tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				Dynamic tmp9 = value1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				::Reflect_obj::setField(tmp8,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),tmp9);
			}
			else{
				HX_STACK_LINE(87)
				Dynamic tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				Dynamic tmp9 = value1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				::Reflect_obj::setProperty(tmp8,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),tmp9);
			}
		}
	}
	HX_STACK_LINE(93)
	return hx::ObjectPtr<OBJ_>(this);
}


::luxe::tween::actuators::IGenericActuator SimpleActuator_obj::delay( Float duration){
	HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","delay",0xe8886aaf,"luxe.tween.actuators.SimpleActuator.delay","luxe/tween/actuators/SimpleActuator.hx",101,0x1966fbc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(103)
	this->_delay = duration;
	HX_STACK_LINE(104)
	Float tmp = this->startTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	this->timeOffset = tmp2;
	HX_STACK_LINE(106)
	return hx::ObjectPtr<OBJ_>(this);
}


Dynamic SimpleActuator_obj::getField( Dynamic target,::String propertyName){
	HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","getField",0xe91c5498,"luxe.tween.actuators.SimpleActuator.getField","luxe/tween/actuators/SimpleActuator.hx",111,0x1966fbc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(propertyName,"propertyName")
	HX_STACK_LINE(114)
	Dynamic value = null();		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(116)
	Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	::String tmp1 = propertyName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	if ((tmp2)){
		HX_STACK_LINE(118)
		Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		Dynamic tmp5 = ::Reflect_obj::field(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		value = tmp5;
	}
	else{
		HX_STACK_LINE(122)
		Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		Dynamic tmp5 = ::Reflect_obj::getProperty(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		value = tmp5;
	}
	HX_STACK_LINE(126)
	Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,getField,return )

Void SimpleActuator_obj::initialize( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","initialize",0x49789ea4,"luxe.tween.actuators.SimpleActuator.initialize","luxe/tween/actuators/SimpleActuator.hx",131,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		::luxe::tween::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(134)
		Float start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(136)
			while((true)){
				HX_STACK_LINE(136)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(136)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(136)
				if ((tmp2)){
					HX_STACK_LINE(136)
					break;
				}
				HX_STACK_LINE(136)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(136)
				::String i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(136)
				++(_g);
				HX_STACK_LINE(138)
				bool isField = true;		HX_STACK_VAR(isField,"isField");
				HX_STACK_LINE(140)
				Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(140)
				::String tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				bool tmp6 = ::Reflect_obj::hasField(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				if ((tmp6)){
					HX_STACK_LINE(144)
					Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(144)
					::String tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(144)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(144)
					start = tmp9;
				}
				else{
					HX_STACK_LINE(148)
					isField = false;
					HX_STACK_LINE(149)
					Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(149)
					::String tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(149)
					Dynamic tmp9 = ::Reflect_obj::getProperty(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(149)
					start = tmp9;
				}
				HX_STACK_LINE(154)
				Float tmp7 = start;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				if ((tmp8)){
					HX_STACK_LINE(156)
					Dynamic tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(156)
					::String tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(156)
					Float tmp11 = start;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(156)
					Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						Dynamic tmp13 = this->properties;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(156)
						Dynamic target = tmp13;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(156)
						Dynamic value = null();		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(156)
						Dynamic tmp14 = target;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(156)
						::String tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(156)
						bool tmp16 = ::Reflect_obj::hasField(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(156)
						if ((tmp16)){
							HX_STACK_LINE(156)
							Dynamic tmp17 = target;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(156)
							::String tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(156)
							Dynamic tmp19 = ::Reflect_obj::field(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(156)
							value = tmp19;
						}
						else{
							HX_STACK_LINE(156)
							Dynamic tmp17 = target;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(156)
							::String tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(156)
							Dynamic tmp19 = ::Reflect_obj::getProperty(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(156)
							value = tmp19;
						}
						HX_STACK_LINE(156)
						tmp12 = value;
					}
					HX_STACK_LINE(156)
					Float tmp13 = start;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(156)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(156)
					bool tmp15 = isField;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(156)
					::luxe::tween::actuators::PropertyDetails tmp16 = ::luxe::tween::actuators::PropertyDetails_obj::__new(tmp9,tmp10,tmp11,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(156)
					details = tmp16;
					HX_STACK_LINE(157)
					::luxe::tween::actuators::PropertyDetails tmp17 = details;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(157)
					this->propertyDetails->push(tmp17);
				}
			}
		}
		HX_STACK_LINE(163)
		int tmp = this->propertyDetails->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		this->detailsLength = tmp;
		HX_STACK_LINE(164)
		this->initialized = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleActuator_obj,initialize,(void))

Void SimpleActuator_obj::move( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","move",0xd236d965,"luxe.tween.actuators.SimpleActuator.move","luxe/tween/actuators/SimpleActuator.hx",169,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		if ((tmp2)){
			HX_STACK_LINE(171)
			Dynamic tmp4 = this->properties;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			tmp3 = ::Reflect_obj::hasField(tmp6,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
		}
		else{
			HX_STACK_LINE(171)
			tmp3 = false;
		}
		HX_STACK_LINE(171)
		this->toggleVisible = tmp3;
		HX_STACK_LINE(173)
		bool tmp4 = this->toggleVisible;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		if ((tmp5)){
			HX_STACK_LINE(173)
			Dynamic tmp7 = this->properties;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(173)
			tmp6 = (tmp9->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic ) != (int)0);
		}
		else{
			HX_STACK_LINE(173)
			tmp6 = false;
		}
		HX_STACK_LINE(173)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		if ((tmp6)){
			HX_STACK_LINE(173)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			{
				HX_STACK_LINE(173)
				Dynamic tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(173)
				Dynamic target = tmp10;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(173)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(173)
				Dynamic tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(173)
				Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				bool tmp13 = ::Reflect_obj::hasField(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(173)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(173)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(173)
				if ((tmp15)){
					HX_STACK_LINE(173)
					Dynamic tmp16 = target;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					Dynamic tmp18 = ::Reflect_obj::field(tmp17,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					value = tmp19;
				}
				else{
					HX_STACK_LINE(173)
					Dynamic tmp16 = target;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(173)
					Dynamic tmp18 = ::Reflect_obj::getProperty(tmp17,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(173)
					Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(173)
					value = tmp19;
				}
				HX_STACK_LINE(173)
				tmp8 = value;
			}
			HX_STACK_LINE(173)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(173)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(173)
			tmp7 = false;
		}
		HX_STACK_LINE(173)
		if ((tmp7)){
			HX_STACK_LINE(175)
			this->setVisible = true;
			HX_STACK_LINE(176)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				Dynamic tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				Dynamic target = tmp9;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(176)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(176)
				Dynamic tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(176)
				bool tmp11 = ::Reflect_obj::hasField(tmp10,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(176)
				if ((tmp11)){
					HX_STACK_LINE(176)
					Dynamic tmp12 = target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(176)
					Dynamic tmp13 = ::Reflect_obj::field(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					value = tmp13;
				}
				else{
					HX_STACK_LINE(176)
					Dynamic tmp12 = target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(176)
					Dynamic tmp13 = ::Reflect_obj::getProperty(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					value = tmp13;
				}
				HX_STACK_LINE(176)
				tmp8 = value;
			}
			HX_STACK_LINE(176)
			this->cacheVisible = tmp8;
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				Dynamic tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(177)
				Dynamic target = tmp9;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(177)
				Dynamic tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(177)
				bool tmp11 = ::Reflect_obj::hasField(tmp10,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(177)
				if ((tmp11)){
					HX_STACK_LINE(177)
					Dynamic tmp12 = target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(177)
					::Reflect_obj::setField(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),true);
				}
				else{
					HX_STACK_LINE(177)
					Dynamic tmp12 = target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(177)
					::Reflect_obj::setProperty(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),true);
				}
			}
		}
		HX_STACK_LINE(181)
		Float tmp8 = this->startTime;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		this->timeOffset = tmp8;
		HX_STACK_LINE(182)
		::luxe::tween::actuators::SimpleActuator_obj::actuators->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(183)
		++(::luxe::tween::actuators::SimpleActuator_obj::actuatorsLength);
	}
return null();
}


::luxe::tween::actuators::IGenericActuator SimpleActuator_obj::onUpdate( Dynamic handler,cpp::ArrayBase parameters){
	HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","onUpdate",0xef642cdc,"luxe.tween.actuators.SimpleActuator.onUpdate","luxe/tween/actuators/SimpleActuator.hx",191,0x1966fbc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(193)
	this->_onUpdate = handler;
	HX_STACK_LINE(195)
	bool tmp = (parameters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	if ((tmp)){
		HX_STACK_LINE(197)
		this->_onUpdateParams = cpp::ArrayBase_obj::__new();
	}
	else{
		HX_STACK_LINE(201)
		this->_onUpdateParams = parameters;
	}
	HX_STACK_LINE(205)
	this->sendChange = true;
	HX_STACK_LINE(207)
	return hx::ObjectPtr<OBJ_>(this);
}


Void SimpleActuator_obj::pause( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","pause",0xceb96a22,"luxe.tween.actuators.SimpleActuator.pause","luxe/tween/actuators/SimpleActuator.hx",212,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(214)
		this->paused = true;
		HX_STACK_LINE(216)
		bool tmp = this->timescaled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		if ((tmp)){
			HX_STACK_LINE(216)
			tmp1 = ::luxe::tween::actuators::SimpleActuator_obj::update_timer;
		}
		else{
			HX_STACK_LINE(216)
			tmp1 = ::luxe::tween::actuators::SimpleActuator_obj::current_time;
		}
		HX_STACK_LINE(216)
		this->pauseTime = tmp1;
	}
return null();
}


Void SimpleActuator_obj::resume( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","resume",0x2c839d01,"luxe.tween.actuators.SimpleActuator.resume","luxe/tween/actuators/SimpleActuator.hx",221,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(223)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		if ((tmp)){
			HX_STACK_LINE(225)
			this->paused = false;
			HX_STACK_LINE(227)
			bool tmp1 = this->timescaled;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			if ((tmp1)){
				HX_STACK_LINE(227)
				tmp2 = ::luxe::tween::actuators::SimpleActuator_obj::update_timer;
			}
			else{
				HX_STACK_LINE(227)
				tmp2 = ::luxe::tween::actuators::SimpleActuator_obj::current_time;
			}
			HX_STACK_LINE(227)
			Float tmp3 = this->pauseTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			Float tmp5 = (Float(tmp4) / Float((int)1000));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			hx::AddEq(this->timeOffset,tmp5);
		}
	}
return null();
}


Void SimpleActuator_obj::setField( Dynamic target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","setField",0x9779ae0c,"luxe.tween.actuators.SimpleActuator.setField","luxe/tween/actuators/SimpleActuator.hx",235,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(237)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		::String tmp1 = propertyName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		if ((tmp2)){
			HX_STACK_LINE(239)
			Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(239)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			::Reflect_obj::setField(tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(243)
			Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(243)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(243)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(243)
			::Reflect_obj::setProperty(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField,(void))

Void SimpleActuator_obj::setProperty( ::luxe::tween::actuators::PropertyDetails details,Dynamic value){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","setProperty",0xa59b4e43,"luxe.tween.actuators.SimpleActuator.setProperty","luxe/tween/actuators/SimpleActuator.hx",250,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(details,"details")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(252)
		bool tmp = details->isField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		if ((tmp)){
			HX_STACK_LINE(254)
			Dynamic tmp1 = details->target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(254)
			::String tmp2 = details->propertyName;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(254)
			Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(254)
			::Reflect_obj::setProperty(tmp1,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(258)
			Dynamic tmp1 = details->target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(258)
			::String tmp2 = details->propertyName;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(258)
			::Reflect_obj::setProperty(tmp1,tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,setProperty,(void))

Void SimpleActuator_obj::stop( Dynamic properties,bool complete,bool sendEvent){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","stop",0xd631e656,"luxe.tween.actuators.SimpleActuator.stop","luxe/tween/actuators/SimpleActuator.hx",265,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_ARG(complete,"complete")
		HX_STACK_ARG(sendEvent,"sendEvent")
		HX_STACK_LINE(267)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		if ((tmp)){
			HX_STACK_LINE(269)
			bool tmp1 = (properties == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			if ((tmp1)){
				HX_STACK_LINE(271)
				this->active = false;
				HX_STACK_LINE(273)
				bool tmp2 = complete;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(273)
				if ((tmp2)){
					HX_STACK_LINE(275)
					this->apply();
				}
				HX_STACK_LINE(279)
				bool tmp3 = sendEvent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				this->complete(tmp3);
				HX_STACK_LINE(280)
				return null();
			}
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(284)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(284)
				Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(284)
				Array< ::String > _g1 = ::Reflect_obj::fields(tmp2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(284)
				while((true)){
					HX_STACK_LINE(284)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(284)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(284)
					if ((tmp4)){
						HX_STACK_LINE(284)
						break;
					}
					HX_STACK_LINE(284)
					::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(284)
					::String i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(284)
					++(_g);
					HX_STACK_LINE(286)
					Dynamic tmp6 = this->properties;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(286)
					::String tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(286)
					bool tmp8 = ::Reflect_obj::hasField(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(286)
					if ((tmp8)){
						HX_STACK_LINE(288)
						this->active = false;
						HX_STACK_LINE(290)
						bool tmp9 = complete;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(290)
						if ((tmp9)){
							HX_STACK_LINE(292)
							this->apply();
						}
						HX_STACK_LINE(296)
						bool tmp10 = sendEvent;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(296)
						this->complete(tmp10);
						HX_STACK_LINE(297)
						return null();
					}
				}
			}
		}
	}
return null();
}


Void SimpleActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","update",0xab04b95d,"luxe.tween.actuators.SimpleActuator.update","luxe/tween/actuators/SimpleActuator.hx",307,0x1966fbc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(310)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		if ((tmp1)){
			HX_STACK_LINE(312)
			::luxe::tween::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(313)
			Float easing;		HX_STACK_VAR(easing,"easing");
			HX_STACK_LINE(314)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(316)
			Float tmp2 = currentTime;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(316)
			Float tmp3 = this->timeOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(316)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			Float tmp5 = this->duration;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(316)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(316)
			Float tweenPosition = tmp6;		HX_STACK_VAR(tweenPosition,"tweenPosition");
			HX_STACK_LINE(318)
			bool tmp7 = (tweenPosition > (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(318)
			if ((tmp7)){
				HX_STACK_LINE(320)
				tweenPosition = (int)1;
			}
			HX_STACK_LINE(324)
			bool tmp8 = this->initialized;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(324)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			if ((tmp9)){
				HX_STACK_LINE(326)
				this->initialize();
			}
			HX_STACK_LINE(330)
			bool tmp10 = this->special;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(330)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(330)
			if ((tmp11)){
				HX_STACK_LINE(332)
				::luxe::tween::easing::IEasing tmp12 = this->_ease;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(332)
				Float tmp13 = tweenPosition;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(332)
				Float tmp14 = tmp12->calculate(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(332)
				easing = tmp14;
				HX_STACK_LINE(334)
				{
					HX_STACK_LINE(334)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(334)
					int tmp15 = this->detailsLength;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(334)
					int _g = tmp15;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(334)
					while((true)){
						HX_STACK_LINE(334)
						bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(334)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(334)
						if ((tmp17)){
							HX_STACK_LINE(334)
							break;
						}
						HX_STACK_LINE(334)
						int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(334)
						int i1 = tmp18;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(336)
						::luxe::tween::actuators::PropertyDetails tmp19 = this->propertyDetails->__get(i1).StaticCast< ::luxe::tween::actuators::PropertyDetails >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(336)
						details = tmp19;
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							Float tmp20 = details->start;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(337)
							Float tmp21 = (details->change * easing);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(337)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(337)
							Dynamic value = tmp22;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(337)
							bool tmp23 = details->isField;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(337)
							if ((tmp23)){
								HX_STACK_LINE(337)
								Dynamic tmp24 = details->target;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(337)
								::String tmp25 = details->propertyName;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(337)
								Dynamic tmp26 = value;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(337)
								::Reflect_obj::setProperty(tmp24,tmp25,tmp26);
							}
							else{
								HX_STACK_LINE(337)
								Dynamic tmp24 = details->target;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(337)
								::String tmp25 = details->propertyName;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(337)
								Dynamic tmp26 = value;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(337)
								::Reflect_obj::setProperty(tmp24,tmp25,tmp26);
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(343)
				bool tmp12 = this->_reverse;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(343)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(343)
				if ((tmp13)){
					HX_STACK_LINE(345)
					::luxe::tween::easing::IEasing tmp14 = this->_ease;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(345)
					Float tmp15 = tweenPosition;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(345)
					Float tmp16 = tmp14->calculate(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(345)
					easing = tmp16;
				}
				else{
					HX_STACK_LINE(349)
					::luxe::tween::easing::IEasing tmp14 = this->_ease;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(349)
					Float tmp15 = ((int)1 - tweenPosition);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(349)
					Float tmp16 = tmp14->calculate(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(349)
					easing = tmp16;
				}
				HX_STACK_LINE(353)
				Float endValue;		HX_STACK_VAR(endValue,"endValue");
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(355)
					int tmp14 = this->detailsLength;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(355)
					int _g = tmp14;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(355)
					while((true)){
						HX_STACK_LINE(355)
						bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(355)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(355)
						if ((tmp16)){
							HX_STACK_LINE(355)
							break;
						}
						HX_STACK_LINE(355)
						int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(355)
						int i1 = tmp17;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(357)
						::luxe::tween::actuators::PropertyDetails tmp18 = this->propertyDetails->__get(i1).StaticCast< ::luxe::tween::actuators::PropertyDetails >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(357)
						details = tmp18;
						HX_STACK_LINE(359)
						bool tmp19 = this->_smartRotation;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(359)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(359)
						if ((tmp19)){
							HX_STACK_LINE(359)
							bool tmp21 = (details->propertyName == HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(359)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(359)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(359)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(359)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(359)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(359)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(359)
							bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(359)
							if ((tmp28)){
								HX_STACK_LINE(359)
								bool tmp29 = (details->propertyName == HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(359)
								tmp27 = tmp29;
							}
							else{
								HX_STACK_LINE(359)
								tmp27 = true;
							}
							HX_STACK_LINE(359)
							bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(359)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(359)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(359)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(359)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(359)
							bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(359)
							if ((tmp34)){
								HX_STACK_LINE(359)
								bool tmp35 = (details->propertyName == HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(359)
								tmp33 = tmp35;
							}
							else{
								HX_STACK_LINE(359)
								tmp33 = true;
							}
							HX_STACK_LINE(359)
							bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(359)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(359)
							bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(359)
							bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(359)
							if ((tmp38)){
								HX_STACK_LINE(359)
								tmp20 = (details->propertyName == HX_HCSTRING("rotationZ","\x5c","\x59","\xef","\x6c"));
							}
							else{
								HX_STACK_LINE(359)
								tmp20 = true;
							}
						}
						else{
							HX_STACK_LINE(359)
							tmp20 = false;
						}
						HX_STACK_LINE(359)
						if ((tmp20)){
							HX_STACK_LINE(361)
							Float tmp21 = hx::Mod(details->change,(int)360);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(361)
							Float rotation = tmp21;		HX_STACK_VAR(rotation,"rotation");
							HX_STACK_LINE(363)
							bool tmp22 = (rotation > (int)180);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(363)
							if ((tmp22)){
								HX_STACK_LINE(365)
								hx::SubEq(rotation,(int)360);
							}
							else{
								HX_STACK_LINE(367)
								bool tmp23 = (rotation < (int)-180);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(367)
								if ((tmp23)){
									HX_STACK_LINE(369)
									hx::AddEq(rotation,(int)360);
								}
							}
							HX_STACK_LINE(373)
							Float tmp23 = details->start;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(373)
							Float tmp24 = (rotation * easing);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(373)
							Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(373)
							endValue = tmp25;
						}
						else{
							HX_STACK_LINE(377)
							Float tmp21 = details->start;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(377)
							Float tmp22 = (details->change * easing);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(377)
							Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(377)
							endValue = tmp23;
						}
						HX_STACK_LINE(381)
						bool tmp21 = this->_snapping;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(381)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(381)
						if ((tmp22)){
							HX_STACK_LINE(383)
							bool tmp23 = details->isField;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(383)
							if ((tmp23)){
								HX_STACK_LINE(383)
								Dynamic tmp24 = details->target;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(383)
								::String tmp25 = details->propertyName;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(383)
								Float tmp26 = endValue;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(383)
								::Reflect_obj::setProperty(tmp24,tmp25,tmp26);
							}
							else{
								HX_STACK_LINE(383)
								Dynamic tmp24 = details->target;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(383)
								::String tmp25 = details->propertyName;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(383)
								Float tmp26 = endValue;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(383)
								::Reflect_obj::setProperty(tmp24,tmp25,tmp26);
							}
						}
						else{
							HX_STACK_LINE(387)
							Float tmp23 = endValue;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(387)
							int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(387)
							Dynamic value = tmp24;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(387)
							bool tmp25 = details->isField;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(387)
							if ((tmp25)){
								HX_STACK_LINE(387)
								Dynamic tmp26 = details->target;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(387)
								::String tmp27 = details->propertyName;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(387)
								Dynamic tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(387)
								::Reflect_obj::setProperty(tmp26,tmp27,tmp28);
							}
							else{
								HX_STACK_LINE(387)
								Dynamic tmp26 = details->target;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(387)
								::String tmp27 = details->propertyName;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(387)
								Dynamic tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(387)
								::Reflect_obj::setProperty(tmp26,tmp27,tmp28);
							}
						}
					}
				}
			}
			HX_STACK_LINE(395)
			bool tmp12 = (tweenPosition == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(395)
			if ((tmp12)){
				HX_STACK_LINE(397)
				int tmp13 = this->_repeat;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(397)
				bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(397)
				if ((tmp14)){
					HX_STACK_LINE(399)
					this->active = false;
					HX_STACK_LINE(401)
					bool tmp15 = this->toggleVisible;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(401)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(401)
					if ((tmp15)){
						HX_STACK_LINE(401)
						Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(401)
						{
							HX_STACK_LINE(401)
							Dynamic tmp18 = this->target;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(401)
							Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(401)
							Dynamic target = tmp19;		HX_STACK_VAR(target,"target");
							HX_STACK_LINE(401)
							Dynamic value = null();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(401)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(401)
							Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(401)
							bool tmp22 = ::Reflect_obj::hasField(tmp21,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(401)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(401)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(401)
							if ((tmp24)){
								HX_STACK_LINE(401)
								Dynamic tmp25 = target;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(401)
								Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(401)
								Dynamic tmp27 = ::Reflect_obj::field(tmp26,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(401)
								Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(401)
								value = tmp28;
							}
							else{
								HX_STACK_LINE(401)
								Dynamic tmp25 = target;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(401)
								Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(401)
								Dynamic tmp27 = ::Reflect_obj::getProperty(tmp26,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(401)
								Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(401)
								value = tmp28;
							}
							HX_STACK_LINE(401)
							tmp17 = value;
						}
						HX_STACK_LINE(401)
						tmp16 = (tmp17 == (int)0);
					}
					else{
						HX_STACK_LINE(401)
						tmp16 = false;
					}
					HX_STACK_LINE(401)
					if ((tmp16)){
						HX_STACK_LINE(403)
						Dynamic tmp17 = this->target;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(403)
						Dynamic target = tmp17;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(403)
						Dynamic tmp18 = target;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(403)
						bool tmp19 = ::Reflect_obj::hasField(tmp18,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(403)
						if ((tmp19)){
							HX_STACK_LINE(403)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(403)
							::Reflect_obj::setField(tmp20,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),false);
						}
						else{
							HX_STACK_LINE(403)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(403)
							::Reflect_obj::setProperty(tmp20,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),false);
						}
					}
					HX_STACK_LINE(407)
					this->complete(true);
					HX_STACK_LINE(408)
					return null();
				}
				else{
					HX_STACK_LINE(412)
					Dynamic tmp15 = this->_onRepeat;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(412)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(412)
					if ((tmp16)){
						HX_STACK_LINE(414)
						Dynamic tmp17 = this->_onRepeat;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(414)
						Dynamic method = tmp17;		HX_STACK_VAR(method,"method");
						HX_STACK_LINE(414)
						cpp::ArrayBase params = this->_onRepeatParams;		HX_STACK_VAR(params,"params");
						HX_STACK_LINE(414)
						bool tmp18 = (params == null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(414)
						if ((tmp18)){
							HX_STACK_LINE(414)
							params = cpp::ArrayBase_obj::__new();
						}
						HX_STACK_LINE(414)
						Dynamic tmp19 = method;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(414)
						Dynamic tmp20 = method;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(414)
						::Reflect_obj::callMethod(tmp19,tmp20,params);
					}
					HX_STACK_LINE(418)
					bool tmp17 = this->_reflect;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(418)
					if ((tmp17)){
						HX_STACK_LINE(420)
						bool tmp18 = this->_reverse;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(420)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(420)
						this->_reverse = tmp19;
					}
					HX_STACK_LINE(424)
					this->startTime = currentTime;
					HX_STACK_LINE(425)
					Float tmp18 = this->startTime;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(425)
					Float tmp19 = this->_delay;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(425)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(425)
					this->timeOffset = tmp20;
					HX_STACK_LINE(427)
					int tmp21 = this->_repeat;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(427)
					bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(427)
					if ((tmp22)){
						HX_STACK_LINE(429)
						(this->_repeat)--;
					}
				}
			}
			HX_STACK_LINE(437)
			bool tmp13 = this->sendChange;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(437)
			if ((tmp13)){
				HX_STACK_LINE(439)
				this->change();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,update,(void))

Array< ::Dynamic > SimpleActuator_obj::actuators;

int SimpleActuator_obj::actuatorsLength;

bool SimpleActuator_obj::addedEvent;

::haxe::Timer SimpleActuator_obj::timer;

Float SimpleActuator_obj::update_timer;

Float SimpleActuator_obj::current_time;

Void SimpleActuator_obj::on_internal_update( Dynamic _){
{
		HX_STACK_FRAME("luxe.tween.actuators.SimpleActuator","on_internal_update",0x605734ff,"luxe.tween.actuators.SimpleActuator.on_internal_update","luxe/tween/actuators/SimpleActuator.hx",454,0x1966fbc1)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(456)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(456)
		hx::AddEq(::luxe::tween::actuators::SimpleActuator_obj::update_timer,tmp->delta_time);
		HX_STACK_LINE(457)
		::snow::core::native::Core tmp1 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(457)
		Float tmp2 = tmp1->timestamp();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(457)
		::luxe::tween::actuators::SimpleActuator_obj::current_time = tmp2;
		HX_STACK_LINE(459)
		Float tmp3 = ::luxe::tween::actuators::SimpleActuator_obj::current_time;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(459)
		Float currentTime = tmp3;		HX_STACK_VAR(currentTime,"currentTime");
		HX_STACK_LINE(461)
		::luxe::tween::actuators::SimpleActuator actuator;		HX_STACK_VAR(actuator,"actuator");
		HX_STACK_LINE(463)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(464)
		bool cleanup = false;		HX_STACK_VAR(cleanup,"cleanup");
		HX_STACK_LINE(466)
		{
			HX_STACK_LINE(466)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(466)
			int tmp4 = ::luxe::tween::actuators::SimpleActuator_obj::actuatorsLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(466)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(466)
			while((true)){
				HX_STACK_LINE(466)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(466)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(466)
				if ((tmp6)){
					HX_STACK_LINE(466)
					break;
				}
				HX_STACK_LINE(466)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(466)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(468)
				::luxe::tween::actuators::SimpleActuator tmp8 = ::luxe::tween::actuators::SimpleActuator_obj::actuators->__get(j).StaticCast< ::luxe::tween::actuators::SimpleActuator >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(468)
				actuator = tmp8;
				HX_STACK_LINE(470)
				bool tmp9 = (actuator != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(470)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(470)
				if ((tmp9)){
					HX_STACK_LINE(470)
					tmp10 = actuator->active;
				}
				else{
					HX_STACK_LINE(470)
					tmp10 = false;
				}
				HX_STACK_LINE(470)
				if ((tmp10)){
					HX_STACK_LINE(472)
					bool tmp11 = actuator->timescaled;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(472)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(472)
					if ((tmp11)){
						HX_STACK_LINE(472)
						tmp12 = ::luxe::tween::actuators::SimpleActuator_obj::update_timer;
					}
					else{
						HX_STACK_LINE(472)
						tmp12 = ::luxe::tween::actuators::SimpleActuator_obj::current_time;
					}
					HX_STACK_LINE(472)
					currentTime = tmp12;
					HX_STACK_LINE(474)
					bool tmp13 = actuator->timescaled;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(474)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(474)
					if ((tmp13)){
						HX_STACK_LINE(474)
						bool tmp15 = actuator->has_timescaled_starttime;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(474)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(474)
						tmp14 = !(tmp16);
					}
					else{
						HX_STACK_LINE(474)
						tmp14 = false;
					}
					HX_STACK_LINE(474)
					if ((tmp14)){
						HX_STACK_LINE(475)
						actuator->has_timescaled_starttime = true;
						HX_STACK_LINE(476)
						Float tmp15 = ::luxe::tween::actuators::SimpleActuator_obj::update_timer;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(476)
						actuator->startTime = tmp15;
						HX_STACK_LINE(477)
						actuator->timeOffset = actuator->startTime;
					}
					HX_STACK_LINE(480)
					bool tmp15 = (currentTime > actuator->timeOffset);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(480)
					if ((tmp15)){
						HX_STACK_LINE(481)
						Float tmp16 = currentTime;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(481)
						actuator->update(tmp16);
					}
					HX_STACK_LINE(484)
					(j)++;
				}
				else{
					HX_STACK_LINE(488)
					int tmp11 = j;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(488)
					::luxe::tween::actuators::SimpleActuator_obj::actuators->splice(tmp11,(int)1);
					HX_STACK_LINE(489)
					--(::luxe::tween::actuators::SimpleActuator_obj::actuatorsLength);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,on_internal_update,(void))


SimpleActuator_obj::SimpleActuator_obj()
{
}

void SimpleActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleActuator);
	HX_MARK_MEMBER_NAME(timeOffset,"timeOffset");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_MARK_MEMBER_NAME(detailsLength,"detailsLength");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_MARK_MEMBER_NAME(sendChange,"sendChange");
	HX_MARK_MEMBER_NAME(setVisible,"setVisible");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(toggleVisible,"toggleVisible");
	HX_MARK_MEMBER_NAME(has_timescaled_starttime,"has_timescaled_starttime");
	::luxe::tween::actuators::GenericActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timeOffset,"timeOffset");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_VISIT_MEMBER_NAME(detailsLength,"detailsLength");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_VISIT_MEMBER_NAME(sendChange,"sendChange");
	HX_VISIT_MEMBER_NAME(setVisible,"setVisible");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(toggleVisible,"toggleVisible");
	HX_VISIT_MEMBER_NAME(has_timescaled_starttime,"has_timescaled_starttime");
	::luxe::tween::actuators::GenericActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getField") ) { return getField_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"setField") ) { return setField_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return pauseTime; }
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return timeOffset; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { return sendChange; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return autoVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { return cacheVisible; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { return detailsLength; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return toggleVisible; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { return propertyDetails; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"has_timescaled_starttime") ) { return has_timescaled_starttime; }
	}
	return super::__Field(inName,inCallProp);
}

bool SimpleActuator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { outValue = timer; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { outValue = actuators; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { outValue = addedEvent; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"update_timer") ) { outValue = update_timer; return true;  }
		if (HX_FIELD_EQ(inName,"current_time") ) { outValue = current_time; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { outValue = actuatorsLength; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"on_internal_update") ) { outValue = on_internal_update_dyn(); return true;  }
	}
	return false;
}

Dynamic SimpleActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { timeOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { sendChange=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { setVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { cacheVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { detailsLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { toggleVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { propertyDetails=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"has_timescaled_starttime") ) { has_timescaled_starttime=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimpleActuator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=ioValue.Cast< ::haxe::Timer >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { actuators=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { addedEvent=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"update_timer") ) { update_timer=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"current_time") ) { current_time=ioValue.Cast< Float >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { actuatorsLength=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void SimpleActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("timeOffset","\x80","\xdf","\x08","\xfe"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("cacheVisible","\x50","\xb2","\x89","\x51"));
	outFields->push(HX_HCSTRING("detailsLength","\x48","\xe3","\xc3","\x98"));
	outFields->push(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"));
	outFields->push(HX_HCSTRING("propertyDetails","\xed","\xa0","\x48","\x71"));
	outFields->push(HX_HCSTRING("sendChange","\xd8","\xb8","\xc8","\x58"));
	outFields->push(HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6"));
	outFields->push(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"));
	outFields->push(HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"));
	outFields->push(HX_HCSTRING("has_timescaled_starttime","\x9c","\x8a","\x6a","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,timeOffset),HX_HCSTRING("timeOffset","\x80","\xdf","\x08","\xfe")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,cacheVisible),HX_HCSTRING("cacheVisible","\x50","\xb2","\x89","\x51")},
	{hx::fsInt,(int)offsetof(SimpleActuator_obj,detailsLength),HX_HCSTRING("detailsLength","\x48","\xe3","\xc3","\x98")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,initialized),HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,pauseTime),HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SimpleActuator_obj,propertyDetails),HX_HCSTRING("propertyDetails","\xed","\xa0","\x48","\x71")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,sendChange),HX_HCSTRING("sendChange","\xd8","\xb8","\xc8","\x58")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,setVisible),HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6")},
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,startTime),HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,toggleVisible),HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,has_timescaled_starttime),HX_HCSTRING("has_timescaled_starttime","\x9c","\x8a","\x6a","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &SimpleActuator_obj::actuators,HX_HCSTRING("actuators","\x1a","\x95","\x55","\xd2")},
	{hx::fsInt,(void *) &SimpleActuator_obj::actuatorsLength,HX_HCSTRING("actuatorsLength","\xa0","\x6d","\xfd","\xca")},
	{hx::fsBool,(void *) &SimpleActuator_obj::addedEvent,HX_HCSTRING("addedEvent","\x3a","\x2b","\xd3","\x06")},
	{hx::fsObject /*::haxe::Timer*/ ,(void *) &SimpleActuator_obj::timer,HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsFloat,(void *) &SimpleActuator_obj::update_timer,HX_HCSTRING("update_timer","\xcf","\x39","\x4c","\xd7")},
	{hx::fsFloat,(void *) &SimpleActuator_obj::current_time,HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("timeOffset","\x80","\xdf","\x08","\xfe"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("cacheVisible","\x50","\xb2","\x89","\x51"),
	HX_HCSTRING("detailsLength","\x48","\xe3","\xc3","\x98"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"),
	HX_HCSTRING("propertyDetails","\xed","\xa0","\x48","\x71"),
	HX_HCSTRING("sendChange","\xd8","\xb8","\xc8","\x58"),
	HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6"),
	HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"),
	HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"),
	HX_HCSTRING("has_timescaled_starttime","\x9c","\x8a","\x6a","\xa7"),
	HX_HCSTRING("autoVisible","\xc3","\x1c","\x08","\x89"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("getField","\x44","\xa4","\x6a","\x60"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("setField","\xb8","\xfd","\xc7","\x0e"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::timer,"timer");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::update_timer,"update_timer");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::current_time,"current_time");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::timer,"timer");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::update_timer,"update_timer");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::current_time,"current_time");
};

#endif

hx::Class SimpleActuator_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("actuators","\x1a","\x95","\x55","\xd2"),
	HX_HCSTRING("actuatorsLength","\xa0","\x6d","\xfd","\xca"),
	HX_HCSTRING("addedEvent","\x3a","\x2b","\xd3","\x06"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("update_timer","\xcf","\x39","\x4c","\xd7"),
	HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3"),
	HX_HCSTRING("on_internal_update","\xab","\x53","\xae","\x7d"),
	::String(null()) };

void SimpleActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.actuators.SimpleActuator","\x9a","\x0a","\xea","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimpleActuator_obj::__GetStatic;
	__mClass->mSetStaticField = &SimpleActuator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SimpleActuator_obj >;
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

void SimpleActuator_obj::__boot()
{
	actuators= Array_obj< ::Dynamic >::__new();
	actuatorsLength= (int)0;
	addedEvent= false;
	update_timer= ((Float)0);
	current_time= ((Float)0);
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators
