#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_utils_Random
#include <luxe/utils/Random.h>
#endif
namespace luxe{
namespace utils{

Void Random_obj::__construct(Float _initial_seed)
{
HX_STACK_FRAME("luxe.utils.Random","new",0x045e4f6a,"luxe.utils.Random.new","luxe/utils/Random.hx",17,0x7d2aac44)
HX_STACK_THIS(this)
HX_STACK_ARG(_initial_seed,"_initial_seed")
{
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(21)
		bool tmp = (_initial_seed > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( initial negative seed will return negative random results, if this was intentional, define luxe_random_allow_negative_seed","\xe4","\x89","\x71","\x8a");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(20)
			::String tmp4 = (HX_HCSTRING("_initial_seed > 0","\x59","\x32","\x8a","\x1b") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(20)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(26)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		Float tmp1 = this->seed = _initial_seed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		this->initial = tmp1;
		HX_STACK_LINE(26)
		tmp = this->initial;
	}
	HX_STACK_LINE(26)
	this->seed = tmp;
}
;
	return null();
}

//Random_obj::~Random_obj() { }

Dynamic Random_obj::__CreateEmpty() { return  new Random_obj; }
hx::ObjectPtr< Random_obj > Random_obj::__new(Float _initial_seed)
{  hx::ObjectPtr< Random_obj > _result_ = new Random_obj();
	_result_->__construct(_initial_seed);
	return _result_;}

Dynamic Random_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Random_obj > _result_ = new Random_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Float Random_obj::get( ){
	HX_STACK_FRAME("luxe.utils.Random","get",0x0458ffa0,"luxe.utils.Random.get","luxe/utils/Random.hx",32,0x7d2aac44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	Float tmp = this->seed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Float tmp1 = (tmp * (int)16807);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	Float tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	Float tmp3 = this->seed = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	Float tmp4 = (Float(tmp3) / Float((int)2147483647));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	Float tmp5 = (tmp4 + ((Float)0.000000000233));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Random_obj,get,return )

Float Random_obj::_float( Float min,Dynamic max){
	HX_STACK_FRAME("luxe.utils.Random","float",0xfd869b26,"luxe.utils.Random.float","luxe/utils/Random.hx",38,0x7d2aac44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(39)
	bool tmp = (max == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	if ((tmp)){
		HX_STACK_LINE(39)
		max = min;
		HX_STACK_LINE(39)
		min = (int)0;
	}
	HX_STACK_LINE(40)
	Float tmp1 = this->seed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	Float tmp2 = (tmp1 * (int)16807);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	Float tmp3 = hx::Mod(tmp2,(int)2147483647);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	Float tmp4 = this->seed = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	Float tmp5 = (Float(tmp4) / Float((int)2147483647));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	Float tmp6 = (tmp5 + ((Float)0.000000000233));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	Float tmp7 = (max - min);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	Float tmp9 = min;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(40)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(40)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(Random_obj,_float,return )

int Random_obj::_int( Float min,Dynamic max){
	HX_STACK_FRAME("luxe.utils.Random","int",0x045a8bf9,"luxe.utils.Random.int","luxe/utils/Random.hx",45,0x7d2aac44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(46)
	bool tmp = (max == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(46)
		max = min;
		HX_STACK_LINE(46)
		min = (int)0;
	}
	HX_STACK_LINE(47)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		Float min1 = min;		HX_STACK_VAR(min1,"min1");
		HX_STACK_LINE(47)
		Dynamic max1 = max;		HX_STACK_VAR(max1,"max1");
		HX_STACK_LINE(47)
		bool tmp2 = (max1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		if ((tmp2)){
			HX_STACK_LINE(47)
			max1 = min1;
			HX_STACK_LINE(47)
			min1 = (int)0;
		}
		HX_STACK_LINE(47)
		Float tmp3 = this->seed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		Float tmp4 = (tmp3 * (int)16807);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		Float tmp5 = hx::Mod(tmp4,(int)2147483647);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		Float tmp6 = this->seed = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		Float tmp7 = (Float(tmp6) / Float((int)2147483647));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		Float tmp8 = (tmp7 + ((Float)0.000000000233));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		Float tmp9 = (max1 - min1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(47)
		Float tmp11 = min1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(47)
		tmp1 = (tmp10 + tmp11);
	}
	HX_STACK_LINE(47)
	int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Random_obj,_int,return )

bool Random_obj::_bool( hx::Null< Float >  __o_chance){
Float chance = __o_chance.Default(((Float)0.5));
	HX_STACK_FRAME("luxe.utils.Random","bool",0xc6402de0,"luxe.utils.Random.bool","luxe/utils/Random.hx",52,0x7d2aac44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(chance,"chance")
{
		HX_STACK_LINE(53)
		Float tmp = this->seed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		Float tmp1 = (tmp * (int)16807);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		Float tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		Float tmp3 = this->seed = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		Float tmp4 = (Float(tmp3) / Float((int)2147483647));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		Float tmp5 = (tmp4 + ((Float)0.000000000233));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		Float tmp6 = chance;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Random_obj,_bool,return )

int Random_obj::sign( hx::Null< Float >  __o_chance){
Float chance = __o_chance.Default(((Float)0.5));
	HX_STACK_FRAME("luxe.utils.Random","sign",0xd17839f3,"luxe.utils.Random.sign","luxe/utils/Random.hx",58,0x7d2aac44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(chance,"chance")
{
		HX_STACK_LINE(59)
		Float tmp = this->seed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		Float tmp1 = (tmp * (int)16807);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Float tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Float tmp3 = this->seed = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		Float tmp4 = (Float(tmp3) / Float((int)2147483647));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		Float tmp5 = (tmp4 + ((Float)0.000000000233));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		Float tmp6 = chance;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		if ((tmp7)){
			HX_STACK_LINE(59)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(59)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(59)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Random_obj,sign,return )

int Random_obj::bit( hx::Null< Float >  __o_chance){
Float chance = __o_chance.Default(((Float)0.5));
	HX_STACK_FRAME("luxe.utils.Random","bit",0x045537d7,"luxe.utils.Random.bit","luxe/utils/Random.hx",64,0x7d2aac44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(chance,"chance")
{
		HX_STACK_LINE(65)
		Float tmp = this->seed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		Float tmp1 = (tmp * (int)16807);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		Float tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		Float tmp3 = this->seed = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		Float tmp4 = (Float(tmp3) / Float((int)2147483647));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		Float tmp5 = (tmp4 + ((Float)0.000000000233));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		Float tmp6 = chance;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		if ((tmp7)){
			HX_STACK_LINE(65)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(65)
			tmp8 = (int)0;
		}
		HX_STACK_LINE(65)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Random_obj,bit,return )

Void Random_obj::reset( ){
{
		HX_STACK_FRAME("luxe.utils.Random","reset",0xe1b81f59,"luxe.utils.Random.reset","luxe/utils/Random.hx",69,0x7d2aac44)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		Float tmp = this->seed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		Float s = tmp;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Float tmp1 = this->seed = s;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			this->initial = tmp1;
			HX_STACK_LINE(71)
			this->initial;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Random_obj,reset,(void))

Float Random_obj::set_initial( Float _initial){
	HX_STACK_FRAME("luxe.utils.Random","set_initial",0x7a9610b1,"luxe.utils.Random.set_initial","luxe/utils/Random.hx",79,0x7d2aac44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_initial,"_initial")
	HX_STACK_LINE(80)
	Float tmp = this->seed = _initial;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	this->initial = tmp;
	HX_STACK_LINE(81)
	Float tmp1 = this->initial;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Random_obj,set_initial,return )


Random_obj::Random_obj()
{
}

Dynamic Random_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		if (HX_FIELD_EQ(inName,"bit") ) { return bit_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { return _bool_dyn(); }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"seed") ) { return seed; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"initial") ) { return initial; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_initial") ) { return set_initial_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Random_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seed") ) { seed=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"initial") ) { if (inCallProp == hx::paccAlways) return set_initial(inValue);initial=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Random_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Random_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("seed","\x71","\x85","\x50","\x4c"));
	outFields->push(HX_HCSTRING("initial","\x84","\x10","\x9f","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Random_obj,seed),HX_HCSTRING("seed","\x71","\x85","\x50","\x4c")},
	{hx::fsFloat,(int)offsetof(Random_obj,initial),HX_HCSTRING("initial","\x84","\x10","\x9f","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("sign","\x3d","\x90","\x53","\x4c"),
	HX_HCSTRING("bit","\xcd","\xb8","\x4a","\x00"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("seed","\x71","\x85","\x50","\x4c"),
	HX_HCSTRING("initial","\x84","\x10","\x9f","\xcb"),
	HX_HCSTRING("set_initial","\xa7","\x77","\x06","\x5c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Random_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Random_obj::__mClass,"__mClass");
};

#endif

hx::Class Random_obj::__mClass;

void Random_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.Random","\x78","\x12","\x1c","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Random_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Random_obj >;
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
} // end namespace utils
