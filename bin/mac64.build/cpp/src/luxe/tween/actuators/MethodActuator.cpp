#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif
namespace luxe{
namespace tween{
namespace actuators{

Void MethodActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("luxe.tween.actuators.MethodActuator","new",0xa2bcbdbb,"luxe.tween.actuators.MethodActuator.new","luxe/tween/actuators/MethodActuator.hx",15,0x77e83972)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(17)
	this->currentParameters = Dynamic( Array_obj<Dynamic>::__new() );
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/tween/actuators/MethodActuator.hx",18,0x77e83972)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	this->tweenProperties = tmp;
	HX_STACK_LINE(20)
	Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	Float tmp2 = duration;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	Dynamic tmp3 = properties;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	super::__construct(tmp1,tmp2,tmp3);
	HX_STACK_LINE(22)
	Dynamic tmp4 = properties;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(22)
	if ((tmp6)){
		HX_STACK_LINE(24)
		Dynamic tmp7 = this->properties;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		tmp7->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = Dynamic( Array_obj<Dynamic>::__new() );
	}
	HX_STACK_LINE(28)
	Dynamic tmp7 = properties;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	bool tmp8 = ::Reflect_obj::hasField(tmp7,HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(28)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(28)
	if ((tmp9)){
		HX_STACK_LINE(30)
		Dynamic tmp10 = this->properties;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(30)
		Dynamic tmp11 = this->properties;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(30)
		tmp11->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp10->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(34)
		Dynamic tmp10 = this->properties;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		int _g = ((int)(tmp10->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(34)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(34)
			if ((tmp12)){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(34)
			int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(34)
			int i = tmp13;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(36)
			this->currentParameters->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(null());
		}
	}
}
;
	return null();
}

//MethodActuator_obj::~MethodActuator_obj() { }

Dynamic MethodActuator_obj::__CreateEmpty() { return  new MethodActuator_obj; }
hx::ObjectPtr< MethodActuator_obj > MethodActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< MethodActuator_obj > _result_ = new MethodActuator_obj();
	_result_->__construct(target,duration,properties);
	return _result_;}

Dynamic MethodActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MethodActuator_obj > _result_ = new MethodActuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void MethodActuator_obj::apply( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.MethodActuator","apply",0xe4bebf89,"luxe.tween.actuators.MethodActuator.apply","luxe/tween/actuators/MethodActuator.hx",45,0x77e83972)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		Dynamic tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Dynamic method = tmp;		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(45)
		Dynamic tmp1 = this->properties;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		cpp::ArrayBase params = tmp1->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(45)
		bool tmp2 = (params == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		if ((tmp2)){
			HX_STACK_LINE(45)
			params = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(45)
		Dynamic tmp3 = method;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		Dynamic tmp4 = method;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		::Reflect_obj::callMethod(tmp3,tmp4,params);
	}
return null();
}


Void MethodActuator_obj::complete( hx::Null< bool >  __o_sendEvent){
bool sendEvent = __o_sendEvent.Default(true);
	HX_STACK_FRAME("luxe.tween.actuators.MethodActuator","complete",0x1b5dc97e,"luxe.tween.actuators.MethodActuator.complete","luxe/tween/actuators/MethodActuator.hx",50,0x77e83972)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(52)
			int _g = ((int)(tmp->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(52)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				if ((tmp2)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(54)
				Dynamic tmp4 = this->tweenProperties;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				::String tmp5 = (HX_HCSTRING("param","\x8d","\x80","\x55","\xbd") + i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				hx::IndexRef((this->currentParameters).mPtr,i) = tmp6;
			}
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Dynamic tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(58)
			Dynamic method = tmp;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(58)
			cpp::ArrayBase params = this->currentParameters;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(58)
			bool tmp1 = (params == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			if ((tmp1)){
				HX_STACK_LINE(58)
				params = cpp::ArrayBase_obj::__new();
			}
			HX_STACK_LINE(58)
			Dynamic tmp2 = method;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			Dynamic tmp3 = method;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			::Reflect_obj::callMethod(tmp2,tmp3,params);
		}
		HX_STACK_LINE(60)
		bool tmp = sendEvent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		this->super::complete(tmp);
	}
return null();
}


Void MethodActuator_obj::initialize( ){
{
		HX_STACK_FRAME("luxe.tween.actuators.MethodActuator","initialize",0xefe87555,"luxe.tween.actuators.MethodActuator.initialize","luxe/tween/actuators/MethodActuator.hx",65,0x77e83972)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		::luxe::tween::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(68)
		::String propertyName;		HX_STACK_VAR(propertyName,"propertyName");
		HX_STACK_LINE(69)
		Dynamic start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			int _g = ((int)(tmp->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			while((true)){
				HX_STACK_LINE(71)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(71)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(71)
				if ((tmp2)){
					HX_STACK_LINE(71)
					break;
				}
				HX_STACK_LINE(71)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(73)
				::String tmp4 = (HX_HCSTRING("param","\x8d","\x80","\x55","\xbd") + i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				propertyName = tmp4;
				HX_STACK_LINE(74)
				Dynamic tmp5 = this->properties;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				start = tmp6;
				HX_STACK_LINE(76)
				Dynamic tmp7 = this->tweenProperties;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				::String tmp8 = propertyName;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(76)
				Dynamic tmp9 = start;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(76)
				::Reflect_obj::setField(tmp7,tmp8,tmp9);
				HX_STACK_LINE(78)
				Dynamic tmp10 = start;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(78)
				bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(78)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(78)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(78)
				if ((tmp13)){
					HX_STACK_LINE(78)
					Dynamic tmp15 = start;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(78)
					Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(78)
					tmp14 = ::Std_obj::is(tmp16,hx::ClassOf< ::Int >());
				}
				else{
					HX_STACK_LINE(78)
					tmp14 = true;
				}
				HX_STACK_LINE(78)
				if ((tmp14)){
					HX_STACK_LINE(80)
					Dynamic tmp15 = this->tweenProperties;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(80)
					::String tmp16 = propertyName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(80)
					Dynamic tmp17 = start;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(80)
					Dynamic tmp18 = this->properties;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(80)
					Float tmp19 = tmp18->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(80)
					Dynamic tmp20 = start;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(80)
					Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(80)
					::luxe::tween::actuators::PropertyDetails tmp22 = ::luxe::tween::actuators::PropertyDetails_obj::__new(tmp15,tmp16,tmp17,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(80)
					details = tmp22;
					HX_STACK_LINE(81)
					::luxe::tween::actuators::PropertyDetails tmp23 = details;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(81)
					this->propertyDetails->push(tmp23);
				}
			}
		}
		HX_STACK_LINE(87)
		int tmp = this->propertyDetails->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		this->detailsLength = tmp;
		HX_STACK_LINE(88)
		this->initialized = true;
	}
return null();
}


Void MethodActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("luxe.tween.actuators.MethodActuator","update",0x3955238e,"luxe.tween.actuators.MethodActuator.update","luxe/tween/actuators/MethodActuator.hx",93,0x77e83972)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(95)
		Float tmp = currentTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		this->super::update(tmp);
		HX_STACK_LINE(97)
		bool tmp1 = this->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		if ((tmp1)){
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(99)
				Dynamic tmp2 = this->properties;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(99)
				int _g = ((int)(tmp2->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(99)
				while((true)){
					HX_STACK_LINE(99)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(99)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(99)
					if ((tmp4)){
						HX_STACK_LINE(99)
						break;
					}
					HX_STACK_LINE(99)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(99)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(101)
					Dynamic tmp6 = this->tweenProperties;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(101)
					::String tmp7 = (HX_HCSTRING("param","\x8d","\x80","\x55","\xbd") + i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(101)
					Dynamic tmp8 = ::Reflect_obj::field(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(101)
					hx::IndexRef((this->currentParameters).mPtr,i) = tmp8;
				}
			}
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				Dynamic tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				Dynamic method = tmp2;		HX_STACK_VAR(method,"method");
				HX_STACK_LINE(105)
				cpp::ArrayBase params = this->currentParameters;		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(105)
				bool tmp3 = (params == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(105)
				if ((tmp3)){
					HX_STACK_LINE(105)
					params = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(105)
				Dynamic tmp4 = method;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				Dynamic tmp5 = method;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				::Reflect_obj::callMethod(tmp4,tmp5,params);
			}
		}
	}
return null();
}



MethodActuator_obj::MethodActuator_obj()
{
}

void MethodActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodActuator);
	HX_MARK_MEMBER_NAME(currentParameters,"currentParameters");
	HX_MARK_MEMBER_NAME(tweenProperties,"tweenProperties");
	::luxe::tween::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MethodActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentParameters,"currentParameters");
	HX_VISIT_MEMBER_NAME(tweenProperties,"tweenProperties");
	::luxe::tween::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MethodActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { return tweenProperties; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { return currentParameters; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MethodActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { tweenProperties=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { currentParameters=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MethodActuator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MethodActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentParameters","\x43","\x40","\xb4","\x28"));
	outFields->push(HX_HCSTRING("tweenProperties","\x3e","\xfe","\x5f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(MethodActuator_obj,currentParameters),HX_HCSTRING("currentParameters","\x43","\x40","\xb4","\x28")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MethodActuator_obj,tweenProperties),HX_HCSTRING("tweenProperties","\x3e","\xfe","\x5f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentParameters","\x43","\x40","\xb4","\x28"),
	HX_HCSTRING("tweenProperties","\x3e","\xfe","\x5f","\x2d"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MethodActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MethodActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class MethodActuator_obj::__mClass;

void MethodActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.actuators.MethodActuator","\x49","\xc4","\x0e","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MethodActuator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MethodActuator_obj >;
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
