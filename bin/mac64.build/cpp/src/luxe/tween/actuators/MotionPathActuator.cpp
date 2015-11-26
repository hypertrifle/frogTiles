#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_luxe_tween_IComponentPath
#include <luxe/tween/IComponentPath.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_MotionPathActuator
#include <luxe/tween/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyPathDetails
#include <luxe/tween/actuators/PropertyPathDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
namespace luxe{
namespace tween{
namespace actuators{

Void MotionPathActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("luxe.tween.actuators.MotionPathActuator","new",0x32176455,"luxe.tween.actuators.MotionPathActuator.new","luxe/tween/actuators/MotionPathActuator.hx",13,0xdb065698)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(15)
	Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//MotionPathActuator_obj::~MotionPathActuator_obj() { }

Dynamic MotionPathActuator_obj::__CreateEmpty() { return  new MotionPathActuator_obj; }
hx::ObjectPtr< MotionPathActuator_obj > MotionPathActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< MotionPathActuator_obj > _result_ = new MotionPathActuator_obj();
	_result_->__construct(target,duration,properties);
	return _result_;}

Dynamic MotionPathActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MotionPathActuator_obj > _result_ = new MotionPathActuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void MotionPathActuator_obj::apply( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.MotionPathActuator","apply",0xfd03c0a3,"luxe.tween.actuators.MotionPathActuator.apply","luxe/tween/actuators/MotionPathActuator.hx",22,0xdb065698)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		while((true)){
			HX_STACK_LINE(22)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(22)
			if ((tmp2)){
				HX_STACK_LINE(22)
				break;
			}
			HX_STACK_LINE(22)
			::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(22)
			::String propertyName = tmp3;		HX_STACK_VAR(propertyName,"propertyName");
			HX_STACK_LINE(22)
			++(_g);
			HX_STACK_LINE(24)
			Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			::String tmp5 = propertyName;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(24)
			bool tmp6 = ::Reflect_obj::hasField(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			if ((tmp6)){
				HX_STACK_LINE(26)
				Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(26)
				::String tmp8 = propertyName;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(26)
				Dynamic tmp9 = this->properties;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(26)
				::String tmp10 = propertyName;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(26)
				Dynamic tmp11 = ::Reflect_obj::field(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(26)
				::luxe::tween::IComponentPath tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(26)
				tmp12 = hx::TCast< ::luxe::tween::IComponentPath >::cast(tmp11);
				HX_STACK_LINE(26)
				Float tmp13 = tmp12->get_end();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(26)
				::Reflect_obj::setField(tmp7,tmp8,tmp13);
			}
			else{
				HX_STACK_LINE(30)
				Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(30)
				::String tmp8 = propertyName;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				Dynamic tmp9 = this->properties;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(30)
				::String tmp10 = propertyName;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(30)
				Dynamic tmp11 = ::Reflect_obj::field(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(30)
				::luxe::tween::IComponentPath tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(30)
				tmp12 = hx::TCast< ::luxe::tween::IComponentPath >::cast(tmp11);
				HX_STACK_LINE(30)
				Float tmp13 = tmp12->get_end();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(30)
				::Reflect_obj::setProperty(tmp7,tmp8,tmp13);
			}
		}
	}
return null();
}


Void MotionPathActuator_obj::initialize( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.MotionPathActuator","initialize",0x7e2735fb,"luxe.tween.actuators.MotionPathActuator.initialize","luxe/tween/actuators/MotionPathActuator.hx",39,0xdb065698)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::luxe::tween::actuators::PropertyPathDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(42)
		::luxe::tween::IComponentPath path;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				if ((tmp2)){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				::String propertyName = tmp3;		HX_STACK_VAR(propertyName,"propertyName");
				HX_STACK_LINE(44)
				++(_g);
				HX_STACK_LINE(46)
				Dynamic tmp4 = this->properties;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(46)
				::String tmp5 = propertyName;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(46)
				Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				::luxe::tween::IComponentPath tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				tmp7 = hx::TCast< ::luxe::tween::IComponentPath >::cast(tmp6);
				HX_STACK_LINE(46)
				path = tmp7;
				HX_STACK_LINE(48)
				bool tmp8 = (path != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				if ((tmp8)){
					HX_STACK_LINE(50)
					bool isField = true;		HX_STACK_VAR(isField,"isField");
					HX_STACK_LINE(52)
					Dynamic tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(52)
					::String tmp10 = propertyName;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(52)
					bool tmp11 = ::Reflect_obj::hasField(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(52)
					if ((tmp11)){
						HX_STACK_LINE(54)
						Dynamic tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(54)
						::String tmp13 = propertyName;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(54)
						Dynamic tmp14 = ::Reflect_obj::field(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(54)
						path->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp14;
					}
					else{
						HX_STACK_LINE(58)
						isField = false;
						HX_STACK_LINE(59)
						Dynamic tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(59)
						::String tmp13 = propertyName;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(59)
						Dynamic tmp14 = ::Reflect_obj::getProperty(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(59)
						path->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp14;
					}
					HX_STACK_LINE(64)
					Dynamic tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(64)
					::String tmp13 = propertyName;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(64)
					::luxe::tween::IComponentPath tmp14 = path;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(64)
					bool tmp15 = isField;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(64)
					::luxe::tween::actuators::PropertyPathDetails tmp16 = ::luxe::tween::actuators::PropertyPathDetails_obj::__new(tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(64)
					details = tmp16;
					HX_STACK_LINE(65)
					::luxe::tween::actuators::PropertyPathDetails tmp17 = details;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(65)
					this->propertyDetails->push(tmp17);
				}
			}
		}
		HX_STACK_LINE(71)
		int tmp = this->propertyDetails->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		this->detailsLength = tmp;
		HX_STACK_LINE(72)
		this->initialized = true;
	}
return null();
}


Void MotionPathActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("luxe.tween.actuators.MotionPathActuator","update",0x5d711934,"luxe.tween.actuators.MotionPathActuator.update","luxe/tween/actuators/MotionPathActuator.hx",77,0xdb065698)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(79)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		if ((tmp1)){
			HX_STACK_LINE(81)
			::luxe::tween::actuators::PropertyPathDetails details;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(82)
			Float easing;		HX_STACK_VAR(easing,"easing");
			HX_STACK_LINE(84)
			Float tmp2 = currentTime;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			Float tmp3 = this->timeOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			Float tmp5 = this->duration;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			Float tweenPosition = tmp6;		HX_STACK_VAR(tweenPosition,"tweenPosition");
			HX_STACK_LINE(86)
			bool tmp7 = (tweenPosition > (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(86)
			if ((tmp7)){
				HX_STACK_LINE(88)
				tweenPosition = (int)1;
			}
			HX_STACK_LINE(92)
			bool tmp8 = this->initialized;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(92)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(92)
			if ((tmp9)){
				HX_STACK_LINE(94)
				this->initialize();
			}
			HX_STACK_LINE(98)
			bool tmp10 = this->special;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			if ((tmp11)){
				HX_STACK_LINE(100)
				::luxe::tween::easing::IEasing tmp12 = this->_ease;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(100)
				Float tmp13 = tweenPosition;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(100)
				Float tmp14 = tmp12->calculate(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(100)
				easing = tmp14;
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(102)
					Array< ::Dynamic > _g1 = this->propertyDetails;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(102)
					while((true)){
						HX_STACK_LINE(102)
						bool tmp15 = (_g < _g1->length);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(102)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(102)
						if ((tmp16)){
							HX_STACK_LINE(102)
							break;
						}
						HX_STACK_LINE(102)
						::luxe::tween::actuators::PropertyDetails tmp17 = _g1->__get(_g).StaticCast< ::luxe::tween::actuators::PropertyDetails >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(102)
						::luxe::tween::actuators::PropertyDetails details1 = tmp17;		HX_STACK_VAR(details1,"details1");
						HX_STACK_LINE(102)
						++(_g);
						HX_STACK_LINE(104)
						bool tmp18 = details1->isField;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(104)
						if ((tmp18)){
							HX_STACK_LINE(106)
							Dynamic tmp19 = details1->target;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(106)
							::String tmp20 = details1->propertyName;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(106)
							::luxe::tween::actuators::PropertyPathDetails tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(106)
							tmp21 = hx::TCast< ::luxe::tween::actuators::PropertyPathDetails >::cast(details1);
							HX_STACK_LINE(106)
							Float tmp22 = easing;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(106)
							Float tmp23 = tmp21->path->calculate(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(106)
							::Reflect_obj::setField(tmp19,tmp20,tmp23);
						}
						else{
							HX_STACK_LINE(110)
							Dynamic tmp19 = details1->target;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(110)
							::String tmp20 = details1->propertyName;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(110)
							::luxe::tween::actuators::PropertyPathDetails tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(110)
							tmp21 = hx::TCast< ::luxe::tween::actuators::PropertyPathDetails >::cast(details1);
							HX_STACK_LINE(110)
							Float tmp22 = easing;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(110)
							Float tmp23 = tmp21->path->calculate(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(110)
							::Reflect_obj::setProperty(tmp19,tmp20,tmp23);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(118)
				bool tmp12 = this->_reverse;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(118)
				if ((tmp13)){
					HX_STACK_LINE(120)
					::luxe::tween::easing::IEasing tmp14 = this->_ease;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(120)
					Float tmp15 = tweenPosition;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(120)
					Float tmp16 = tmp14->calculate(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(120)
					easing = tmp16;
				}
				else{
					HX_STACK_LINE(124)
					::luxe::tween::easing::IEasing tmp14 = this->_ease;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(124)
					Float tmp15 = ((int)1 - tweenPosition);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(124)
					Float tmp16 = tmp14->calculate(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(124)
					easing = tmp16;
				}
				HX_STACK_LINE(128)
				Float endValue;		HX_STACK_VAR(endValue,"endValue");
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(130)
					Array< ::Dynamic > _g1 = this->propertyDetails;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(130)
					while((true)){
						HX_STACK_LINE(130)
						bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(130)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(130)
						if ((tmp15)){
							HX_STACK_LINE(130)
							break;
						}
						HX_STACK_LINE(130)
						::luxe::tween::actuators::PropertyDetails tmp16 = _g1->__get(_g).StaticCast< ::luxe::tween::actuators::PropertyDetails >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(130)
						::luxe::tween::actuators::PropertyDetails details1 = tmp16;		HX_STACK_VAR(details1,"details1");
						HX_STACK_LINE(130)
						++(_g);
						HX_STACK_LINE(132)
						bool tmp17 = this->_snapping;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(132)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(132)
						if ((tmp18)){
							HX_STACK_LINE(134)
							bool tmp19 = details1->isField;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(134)
							if ((tmp19)){
								HX_STACK_LINE(136)
								Dynamic tmp20 = details1->target;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(136)
								::String tmp21 = details1->propertyName;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(136)
								::luxe::tween::actuators::PropertyPathDetails tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(136)
								tmp22 = hx::TCast< ::luxe::tween::actuators::PropertyPathDetails >::cast(details1);
								HX_STACK_LINE(136)
								Float tmp23 = easing;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(136)
								Float tmp24 = tmp22->path->calculate(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(136)
								::Reflect_obj::setField(tmp20,tmp21,tmp24);
							}
							else{
								HX_STACK_LINE(140)
								Dynamic tmp20 = details1->target;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(140)
								::String tmp21 = details1->propertyName;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(140)
								::luxe::tween::actuators::PropertyPathDetails tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(140)
								tmp22 = hx::TCast< ::luxe::tween::actuators::PropertyPathDetails >::cast(details1);
								HX_STACK_LINE(140)
								Float tmp23 = easing;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(140)
								Float tmp24 = tmp22->path->calculate(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(140)
								::Reflect_obj::setProperty(tmp20,tmp21,tmp24);
							}
						}
						else{
							HX_STACK_LINE(146)
							bool tmp19 = details1->isField;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(146)
							if ((tmp19)){
								HX_STACK_LINE(148)
								Dynamic tmp20 = details1->target;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(148)
								::String tmp21 = details1->propertyName;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(148)
								::luxe::tween::actuators::PropertyPathDetails tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(148)
								tmp22 = hx::TCast< ::luxe::tween::actuators::PropertyPathDetails >::cast(details1);
								HX_STACK_LINE(148)
								Float tmp23 = easing;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(148)
								Float tmp24 = tmp22->path->calculate(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(148)
								int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(148)
								::Reflect_obj::setField(tmp20,tmp21,tmp25);
							}
							else{
								HX_STACK_LINE(152)
								Dynamic tmp20 = details1->target;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(152)
								::String tmp21 = details1->propertyName;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(152)
								::luxe::tween::actuators::PropertyPathDetails tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(152)
								tmp22 = hx::TCast< ::luxe::tween::actuators::PropertyPathDetails >::cast(details1);
								HX_STACK_LINE(152)
								Float tmp23 = easing;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(152)
								Float tmp24 = tmp22->path->calculate(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(152)
								int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(152)
								::Reflect_obj::setProperty(tmp20,tmp21,tmp25);
							}
						}
					}
				}
			}
			HX_STACK_LINE(163)
			bool tmp12 = (tweenPosition == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(163)
			if ((tmp12)){
				HX_STACK_LINE(165)
				int tmp13 = this->_repeat;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(165)
				bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(165)
				if ((tmp14)){
					HX_STACK_LINE(167)
					this->active = false;
					HX_STACK_LINE(169)
					bool tmp15 = this->toggleVisible;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(169)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(169)
					if ((tmp15)){
						HX_STACK_LINE(169)
						Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(169)
						{
							HX_STACK_LINE(169)
							Dynamic tmp18 = this->target;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(169)
							Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(169)
							Dynamic target = tmp19;		HX_STACK_VAR(target,"target");
							HX_STACK_LINE(169)
							Dynamic value = null();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(169)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(169)
							Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(169)
							bool tmp22 = ::Reflect_obj::hasField(tmp21,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(169)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(169)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(169)
							if ((tmp24)){
								HX_STACK_LINE(169)
								Dynamic tmp25 = target;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(169)
								Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(169)
								Dynamic tmp27 = ::Reflect_obj::field(tmp26,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(169)
								Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(169)
								value = tmp28;
							}
							else{
								HX_STACK_LINE(169)
								Dynamic tmp25 = target;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(169)
								Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(169)
								Dynamic tmp27 = ::Reflect_obj::getProperty(tmp26,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(169)
								Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(169)
								value = tmp28;
							}
							HX_STACK_LINE(169)
							tmp17 = value;
						}
						HX_STACK_LINE(169)
						tmp16 = (tmp17 == (int)0);
					}
					else{
						HX_STACK_LINE(169)
						tmp16 = false;
					}
					HX_STACK_LINE(169)
					if ((tmp16)){
						HX_STACK_LINE(171)
						Dynamic tmp17 = this->target;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(171)
						Dynamic target = tmp17;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(171)
						Dynamic tmp18 = target;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(171)
						bool tmp19 = ::Reflect_obj::hasField(tmp18,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(171)
						if ((tmp19)){
							HX_STACK_LINE(171)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(171)
							::Reflect_obj::setField(tmp20,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),false);
						}
						else{
							HX_STACK_LINE(171)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(171)
							::Reflect_obj::setProperty(tmp20,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),false);
						}
					}
					HX_STACK_LINE(175)
					this->complete(true);
					HX_STACK_LINE(176)
					return null();
				}
				else{
					HX_STACK_LINE(180)
					bool tmp15 = this->_reflect;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(180)
					if ((tmp15)){
						HX_STACK_LINE(182)
						bool tmp16 = this->_reverse;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(182)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						this->_reverse = tmp17;
					}
					HX_STACK_LINE(186)
					this->startTime = currentTime;
					HX_STACK_LINE(187)
					Float tmp16 = this->startTime;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(187)
					Float tmp17 = this->_delay;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(187)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(187)
					this->timeOffset = tmp18;
					HX_STACK_LINE(189)
					int tmp19 = this->_repeat;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(189)
					bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(189)
					if ((tmp20)){
						HX_STACK_LINE(191)
						(this->_repeat)--;
					}
				}
			}
			HX_STACK_LINE(199)
			bool tmp13 = this->sendChange;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(199)
			if ((tmp13)){
				HX_STACK_LINE(201)
				this->change();
			}
		}
	}
return null();
}



MotionPathActuator_obj::MotionPathActuator_obj()
{
}

Dynamic MotionPathActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class MotionPathActuator_obj::__mClass;

void MotionPathActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.actuators.MotionPathActuator","\xe3","\x95","\x77","\x23");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MotionPathActuator_obj >;
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

} // end namespace luxe
} // end namespace tween
} // end namespace actuators
