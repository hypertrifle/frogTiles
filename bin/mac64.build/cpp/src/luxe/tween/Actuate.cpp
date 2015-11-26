#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_luxe_tween_Actuate
#include <luxe/tween/Actuate.h>
#endif
#ifndef INCLUDED_luxe_tween__Actuate_TweenTimer
#include <luxe/tween/_Actuate/TweenTimer.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_MethodActuator
#include <luxe/tween/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_MotionPathActuator
#include <luxe/tween/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_Quad
#include <luxe/tween/easing/Quad.h>
#endif
namespace luxe{
namespace tween{

Void Actuate_obj::__construct()
{
	return null();
}

//Actuate_obj::~Actuate_obj() { }

Dynamic Actuate_obj::__CreateEmpty() { return  new Actuate_obj; }
hx::ObjectPtr< Actuate_obj > Actuate_obj::__new()
{  hx::ObjectPtr< Actuate_obj > _result_ = new Actuate_obj();
	_result_->__construct();
	return _result_;}

Dynamic Actuate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actuate_obj > _result_ = new Actuate_obj();
	_result_->__construct();
	return _result_;}

::hx::Class Actuate_obj::defaultActuator;

::luxe::tween::easing::IEasing Actuate_obj::defaultEase;

::haxe::ds::ObjectMap Actuate_obj::targetLibraries;

::luxe::tween::actuators::IGenericActuator Actuate_obj::apply( Dynamic target,Dynamic properties,::hx::Class customActuator){
	HX_STACK_FRAME("luxe.tween.Actuate","apply",0x8cce36b4,"luxe.tween.Actuate.apply","luxe/tween/Actuate.hx",30,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(customActuator,"customActuator")
	HX_STACK_LINE(32)
	Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Dynamic tmp1 = properties;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	::luxe::tween::Actuate_obj::stop(tmp,tmp1,null(),null());
	HX_STACK_LINE(34)
	bool tmp2 = (customActuator == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	if ((tmp2)){
		HX_STACK_LINE(36)
		::hx::Class tmp3 = ::luxe::tween::Actuate_obj::defaultActuator;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		customActuator = tmp3;
	}
	HX_STACK_LINE(40)
	::hx::Class tmp3 = customActuator;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	::luxe::tween::actuators::GenericActuator tmp4 = ::Type_obj::createInstance(tmp3,cpp::ArrayBase_obj::__new().Add(target).Add((int)0).Add(properties));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	::luxe::tween::actuators::GenericActuator actuator = tmp4;		HX_STACK_VAR(actuator,"actuator");
	HX_STACK_LINE(41)
	actuator->apply();
	HX_STACK_LINE(43)
	::luxe::tween::actuators::GenericActuator tmp5 = actuator;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,apply,return )

Array< ::Dynamic > Actuate_obj::getLibrary( Dynamic target,hx::Null< bool >  __o_allowCreation){
bool allowCreation = __o_allowCreation.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","getLibrary",0xfcd89dff,"luxe.tween.Actuate.getLibrary","luxe/tween/Actuate.hx",48,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(allowCreation,"allowCreation")
{
		HX_STACK_LINE(50)
		::haxe::ds::ObjectMap tmp = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		if ((tmp4)){
			HX_STACK_LINE(50)
			tmp5 = allowCreation;
		}
		else{
			HX_STACK_LINE(50)
			tmp5 = false;
		}
		HX_STACK_LINE(50)
		if ((tmp5)){
			HX_STACK_LINE(52)
			::haxe::ds::ObjectMap tmp6 = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			tmp6->set(tmp7,Array_obj< ::Dynamic >::__new());
		}
		HX_STACK_LINE(56)
		::haxe::ds::ObjectMap tmp6 = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		return tmp6->get(tmp7);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,getLibrary,return )

::luxe::tween::actuators::IGenericActuator Actuate_obj::motionPath( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","motionPath",0xaa6ddbf5,"luxe.tween.Actuate.motionPath","luxe/tween/Actuate.hx",69,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(overwrite,"overwrite")
{
		HX_STACK_LINE(71)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		::luxe::tween::actuators::IGenericActuator tmp4 = ::luxe::tween::Actuate_obj::tween(tmp,tmp1,tmp2,tmp3,hx::ClassOf< ::luxe::tween::actuators::MotionPathActuator >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,motionPath,return )

Void Actuate_obj::pause( Dynamic target){
{
		HX_STACK_FRAME("luxe.tween.Actuate","pause",0x25ea883c,"luxe.tween.Actuate.pause","luxe/tween/Actuate.hx",81,0x5242ff4c)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(83)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::luxe::tween::actuators::GenericActuator >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		if ((tmp1)){
			HX_STACK_LINE(85)
			::luxe::tween::actuators::GenericActuator tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			tmp2 = hx::TCast< ::luxe::tween::actuators::GenericActuator >::cast(target);
			HX_STACK_LINE(85)
			tmp2->pause();
		}
		else{
			HX_STACK_LINE(89)
			Dynamic tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			Array< ::Dynamic > library = ::luxe::tween::Actuate_obj::getLibrary(tmp2,false);		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(91)
			bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			if ((tmp3)){
				HX_STACK_LINE(93)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(93)
				while((true)){
					HX_STACK_LINE(93)
					bool tmp4 = (_g < library->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(93)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(93)
					if ((tmp5)){
						HX_STACK_LINE(93)
						break;
					}
					HX_STACK_LINE(93)
					::luxe::tween::actuators::GenericActuator tmp6 = library->__get(_g).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					::luxe::tween::actuators::GenericActuator actuator = tmp6;		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(93)
					++(_g);
					HX_STACK_LINE(95)
					actuator->pause();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,pause,(void))

Void Actuate_obj::pauseAll( ){
{
		HX_STACK_FRAME("luxe.tween.Actuate","pauseAll",0xf534f645,"luxe.tween.Actuate.pauseAll","luxe/tween/Actuate.hx",106,0x5242ff4c)
		HX_STACK_LINE(108)
		::haxe::ds::ObjectMap tmp = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >(tmp1);  __it->hasNext(); ){
			Array< ::Dynamic > library = __it->next();
			{
				HX_STACK_LINE(110)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(110)
				while((true)){
					HX_STACK_LINE(110)
					bool tmp2 = (_g < library->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(110)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(110)
					if ((tmp3)){
						HX_STACK_LINE(110)
						break;
					}
					HX_STACK_LINE(110)
					::luxe::tween::actuators::GenericActuator tmp4 = library->__get(_g).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(110)
					::luxe::tween::actuators::GenericActuator actuator = tmp4;		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(110)
					++(_g);
					HX_STACK_LINE(112)
					actuator->pause();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,pauseAll,(void))

Void Actuate_obj::reset( ){
{
		HX_STACK_FRAME("luxe.tween.Actuate","reset",0x4f5afb15,"luxe.tween.Actuate.reset","luxe/tween/Actuate.hx",124,0x5242ff4c)
		HX_STACK_LINE(126)
		::haxe::ds::ObjectMap tmp = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >(tmp1);  __it->hasNext(); ){
			Array< ::Dynamic > library = __it->next();
			{
				HX_STACK_LINE(128)
				int tmp2 = (library->length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(128)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(129)
				while((true)){
					HX_STACK_LINE(129)
					bool tmp3 = (i >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(129)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(129)
					if ((tmp4)){
						HX_STACK_LINE(129)
						break;
					}
					HX_STACK_LINE(130)
					::luxe::tween::actuators::GenericActuator tmp5 = library->__get(i).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(130)
					tmp5->stop(null(),false,false);
					HX_STACK_LINE(131)
					(i)--;
				}
			}
;
		}
		HX_STACK_LINE(136)
		::haxe::ds::ObjectMap tmp2 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		::luxe::tween::Actuate_obj::targetLibraries = tmp2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,reset,(void))

Void Actuate_obj::resume( Dynamic target){
{
		HX_STACK_FRAME("luxe.tween.Actuate","resume",0x204cd5a7,"luxe.tween.Actuate.resume","luxe/tween/Actuate.hx",145,0x5242ff4c)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(147)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::luxe::tween::actuators::GenericActuator >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		if ((tmp1)){
			HX_STACK_LINE(149)
			::luxe::tween::actuators::GenericActuator tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			tmp2 = hx::TCast< ::luxe::tween::actuators::GenericActuator >::cast(target);
			HX_STACK_LINE(149)
			tmp2->resume();
		}
		else{
			HX_STACK_LINE(153)
			Dynamic tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			Array< ::Dynamic > library = ::luxe::tween::Actuate_obj::getLibrary(tmp2,false);		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(155)
			bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			if ((tmp3)){
				HX_STACK_LINE(157)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(157)
				while((true)){
					HX_STACK_LINE(157)
					bool tmp4 = (_g < library->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(157)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(157)
					if ((tmp5)){
						HX_STACK_LINE(157)
						break;
					}
					HX_STACK_LINE(157)
					::luxe::tween::actuators::GenericActuator tmp6 = library->__get(_g).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(157)
					::luxe::tween::actuators::GenericActuator actuator = tmp6;		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(157)
					++(_g);
					HX_STACK_LINE(159)
					actuator->resume();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,resume,(void))

Void Actuate_obj::resumeAll( ){
{
		HX_STACK_FRAME("luxe.tween.Actuate","resumeAll",0x503a9dba,"luxe.tween.Actuate.resumeAll","luxe/tween/Actuate.hx",170,0x5242ff4c)
		HX_STACK_LINE(172)
		::haxe::ds::ObjectMap tmp = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >(tmp1);  __it->hasNext(); ){
			Array< ::Dynamic > library = __it->next();
			{
				HX_STACK_LINE(174)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(174)
				while((true)){
					HX_STACK_LINE(174)
					bool tmp2 = (_g < library->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(174)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(174)
					if ((tmp3)){
						HX_STACK_LINE(174)
						break;
					}
					HX_STACK_LINE(174)
					::luxe::tween::actuators::GenericActuator tmp4 = library->__get(_g).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(174)
					::luxe::tween::actuators::GenericActuator actuator = tmp4;		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(174)
					++(_g);
					HX_STACK_LINE(176)
					actuator->resume();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,resumeAll,(void))

Void Actuate_obj::stop( Dynamic target,Dynamic properties,hx::Null< bool >  __o_complete,hx::Null< bool >  __o_sendEvent){
bool complete = __o_complete.Default(false);
bool sendEvent = __o_sendEvent.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","stop",0x64ef897c,"luxe.tween.Actuate.stop","luxe/tween/Actuate.hx",192,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(complete,"complete")
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(194)
		bool tmp = (target != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		if ((tmp)){
			HX_STACK_LINE(196)
			Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(196)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::luxe::tween::actuators::GenericActuator >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(196)
			if ((tmp2)){
				HX_STACK_LINE(198)
				::luxe::tween::actuators::GenericActuator tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(198)
				tmp3 = hx::TCast< ::luxe::tween::actuators::GenericActuator >::cast(target);
				HX_STACK_LINE(198)
				bool tmp4 = complete;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(198)
				bool tmp5 = sendEvent;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(198)
				tmp3->stop(null(),tmp4,tmp5);
			}
			else{
				HX_STACK_LINE(202)
				Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				Array< ::Dynamic > library = ::luxe::tween::Actuate_obj::getLibrary(tmp3,false);		HX_STACK_VAR(library,"library");
				HX_STACK_LINE(204)
				bool tmp4 = (library != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(204)
				if ((tmp4)){
					HX_STACK_LINE(206)
					Dynamic tmp5 = properties;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(206)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(206)
					if ((tmp6)){
						struct _Function_5_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/Actuate.hx",208,0x5242ff4c)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(208)
						Dynamic tmp7 = _Function_5_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(208)
						Dynamic temp = tmp7;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(209)
						Dynamic tmp8 = temp;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(209)
						Dynamic tmp9 = properties;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(209)
						::Reflect_obj::setField(tmp8,tmp9,null());
						HX_STACK_LINE(210)
						properties = temp;
					}
					else{
						HX_STACK_LINE(212)
						Dynamic tmp7 = properties;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(212)
						bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(212)
						if ((tmp8)){
							struct _Function_6_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/Actuate.hx",214,0x5242ff4c)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(214)
							Dynamic tmp9 = _Function_6_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(214)
							Dynamic temp = tmp9;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(216)
								cpp::ArrayBase _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(216)
								_g1 = hx::TCastToArray(properties);
								HX_STACK_LINE(216)
								while((true)){
									HX_STACK_LINE(216)
									bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(216)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(216)
									if ((tmp11)){
										HX_STACK_LINE(216)
										break;
									}
									HX_STACK_LINE(216)
									Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(216)
									Dynamic property = tmp12;		HX_STACK_VAR(property,"property");
									HX_STACK_LINE(216)
									++(_g);
									HX_STACK_LINE(218)
									Dynamic tmp13 = temp;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(218)
									Dynamic tmp14 = property;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(218)
									::Reflect_obj::setField(tmp13,tmp14,null());
								}
							}
							HX_STACK_LINE(222)
							properties = temp;
						}
					}
					HX_STACK_LINE(226)
					int tmp7 = (library->length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(226)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(227)
					while((true)){
						HX_STACK_LINE(227)
						bool tmp8 = (i >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(227)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(227)
						if ((tmp9)){
							HX_STACK_LINE(227)
							break;
						}
						HX_STACK_LINE(228)
						::luxe::tween::actuators::GenericActuator tmp10 = library->__get(i).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(228)
						Dynamic tmp11 = properties;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(228)
						bool tmp12 = complete;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(228)
						bool tmp13 = sendEvent;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(228)
						tmp10->stop(tmp11,tmp12,tmp13);
						HX_STACK_LINE(229)
						(i)--;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,stop,(void))

::luxe::tween::actuators::IGenericActuator Actuate_obj::timer( Float duration,::hx::Class customActuator){
	HX_STACK_FRAME("luxe.tween.Actuate","timer",0x78c8710b,"luxe.tween.Actuate.timer","luxe/tween/Actuate.hx",248,0x5242ff4c)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(customActuator,"customActuator")
	HX_STACK_LINE(250)
	::luxe::tween::_Actuate::TweenTimer tmp = ::luxe::tween::_Actuate::TweenTimer_obj::__new((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	::luxe::tween::_Actuate::TweenTimer tmp2 = ::luxe::tween::_Actuate::TweenTimer_obj::__new((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(250)
	::hx::Class tmp3 = customActuator;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(250)
	::luxe::tween::actuators::IGenericActuator tmp4 = ::luxe::tween::Actuate_obj::tween(tmp,tmp1,tmp2,false,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(250)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,timer,return )

::luxe::tween::actuators::IGenericActuator Actuate_obj::tween( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  __o_overwrite,::hx::Class customActuator){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","tween",0x82035bb1,"luxe.tween.Actuate.tween","luxe/tween/Actuate.hx",266,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(overwrite,"overwrite")
	HX_STACK_ARG(customActuator,"customActuator")
{
		HX_STACK_LINE(268)
		bool tmp = (target != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(268)
		if ((tmp)){
			HX_STACK_LINE(270)
			bool tmp1 = (duration > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			if ((tmp1)){
				HX_STACK_LINE(272)
				bool tmp2 = (customActuator == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(272)
				if ((tmp2)){
					HX_STACK_LINE(274)
					::hx::Class tmp3 = ::luxe::tween::Actuate_obj::defaultActuator;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(274)
					customActuator = tmp3;
				}
				HX_STACK_LINE(278)
				::hx::Class tmp3 = customActuator;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(278)
				::luxe::tween::actuators::GenericActuator tmp4 = ::Type_obj::createInstance(tmp3,cpp::ArrayBase_obj::__new().Add(target).Add(duration).Add(properties));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(278)
				::luxe::tween::actuators::GenericActuator actuator = tmp4;		HX_STACK_VAR(actuator,"actuator");
				HX_STACK_LINE(279)
				Dynamic tmp5 = actuator->target;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				Array< ::Dynamic > library = ::luxe::tween::Actuate_obj::getLibrary(tmp5,null());		HX_STACK_VAR(library,"library");
				HX_STACK_LINE(281)
				bool tmp6 = overwrite;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(281)
				if ((tmp6)){
					HX_STACK_LINE(283)
					int tmp7 = (library->length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(283)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(285)
					while((true)){
						HX_STACK_LINE(285)
						bool tmp8 = (i >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(285)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(285)
						if ((tmp9)){
							HX_STACK_LINE(285)
							break;
						}
						HX_STACK_LINE(286)
						::luxe::tween::actuators::GenericActuator tmp10 = library->__get(i).StaticCast< ::luxe::tween::actuators::GenericActuator >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(286)
						Dynamic tmp11 = actuator->properties;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(286)
						tmp10->stop(tmp11,false,false);
						HX_STACK_LINE(287)
						(i)--;
					}
					HX_STACK_LINE(290)
					Dynamic tmp8 = actuator->target;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(290)
					library = ::luxe::tween::Actuate_obj::getLibrary(tmp8,null());
				}
				HX_STACK_LINE(294)
				::luxe::tween::actuators::GenericActuator tmp7 = actuator;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(294)
				library->push(tmp7);
				HX_STACK_LINE(295)
				actuator->move();
				HX_STACK_LINE(310)
				::luxe::tween::actuators::GenericActuator tmp8 = actuator;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(310)
				return tmp8;
			}
			else{
				HX_STACK_LINE(314)
				Dynamic tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(314)
				Dynamic tmp3 = properties;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(314)
				::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(314)
				::luxe::tween::actuators::IGenericActuator tmp5 = ::luxe::tween::Actuate_obj::apply(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(314)
				return tmp5;
			}
		}
		HX_STACK_LINE(320)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,tween,return )

Void Actuate_obj::unload( ::luxe::tween::actuators::GenericActuator actuator){
{
		HX_STACK_FRAME("luxe.tween.Actuate","unload",0x7d550cf9,"luxe.tween.Actuate.unload","luxe/tween/Actuate.hx",325,0x5242ff4c)
		HX_STACK_ARG(actuator,"actuator")
		HX_STACK_LINE(327)
		Dynamic target = actuator->target;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(329)
		::haxe::ds::ObjectMap tmp = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		if ((tmp2)){
			HX_STACK_LINE(331)
			::haxe::ds::ObjectMap tmp3 = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(331)
			Dynamic tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(331)
			::luxe::tween::actuators::GenericActuator tmp5 = actuator;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(331)
			tmp3->get(tmp4)->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp5);
			HX_STACK_LINE(333)
			::haxe::ds::ObjectMap tmp6 = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(333)
			Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(333)
			int tmp8 = tmp6->get(tmp7)->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(333)
			bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(333)
			if ((tmp9)){
				HX_STACK_LINE(335)
				::haxe::ds::ObjectMap tmp10 = ::luxe::tween::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				Dynamic tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(335)
				tmp10->remove(tmp11);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,unload,(void))

::luxe::tween::actuators::IGenericActuator Actuate_obj::update( Dynamic target,Float duration,cpp::ArrayBase start,cpp::ArrayBase end,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("luxe.tween.Actuate","update",0x9ecdf203,"luxe.tween.Actuate.update","luxe/tween/Actuate.hx",354,0x5242ff4c)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(overwrite,"overwrite")
{
		struct _Function_1_1{
			inline static Dynamic Block( cpp::ArrayBase &end,cpp::ArrayBase &start){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/Actuate.hx",356,0x5242ff4c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("start","\x62","\x74","\x0b","\x84") , start,false);
					__result->Add(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00") , end,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(356)
		Dynamic tmp = _Function_1_1::Block(end,start);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		Dynamic properties = tmp;		HX_STACK_VAR(properties,"properties");
		HX_STACK_LINE(358)
		Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		Float tmp2 = duration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		Dynamic tmp3 = properties;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(358)
		bool tmp4 = overwrite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(358)
		::luxe::tween::actuators::IGenericActuator tmp5 = ::luxe::tween::Actuate_obj::tween(tmp1,tmp2,tmp3,tmp4,hx::ClassOf< ::luxe::tween::actuators::MethodActuator >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(358)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,update,return )


Actuate_obj::Actuate_obj()
{
}

bool Actuate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { outValue = stop_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { outValue = apply_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"timer") ) { outValue = timer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unload") ) { outValue = unload_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pauseAll") ) { outValue = pauseAll_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resumeAll") ) { outValue = resumeAll_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"motionPath") ) { outValue = motionPath_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { outValue = defaultEase; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultActuator") ) { outValue = defaultActuator; return true;  }
		if (HX_FIELD_EQ(inName,"targetLibraries") ) { outValue = targetLibraries; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(void *) &Actuate_obj::defaultActuator,HX_HCSTRING("defaultActuator","\x1a","\xbb","\xb5","\xe9")},
	{hx::fsObject /*::luxe::tween::easing::IEasing*/ ,(void *) &Actuate_obj::defaultEase,HX_HCSTRING("defaultEase","\x4f","\x85","\xcb","\x14")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &Actuate_obj::targetLibraries,HX_HCSTRING("targetLibraries","\x88","\xca","\xb7","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actuate_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_MARK_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actuate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_VISIT_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#endif

hx::Class Actuate_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultActuator","\x1a","\xbb","\xb5","\xe9"),
	HX_HCSTRING("defaultEase","\x4f","\x85","\xcb","\x14"),
	HX_HCSTRING("targetLibraries","\x88","\xca","\xb7","\x7d"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("motionPath","\xfb","\xea","\x66","\x3c"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("pauseAll","\xcb","\x17","\x7e","\x09"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("resumeAll","\x74","\xd1","\xee","\xfb"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

void Actuate_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.Actuate","\x34","\x39","\x1b","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Actuate_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Actuate_obj >;
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

void Actuate_obj::__boot()
{
	defaultActuator= ((::hx::Class)(hx::ClassOf< ::luxe::tween::actuators::SimpleActuator >()));
	defaultEase= ::luxe::tween::easing::Quad_obj::get_easeOut();
	targetLibraries= ::haxe::ds::ObjectMap_obj::__new();
}

} // end namespace luxe
} // end namespace tween
