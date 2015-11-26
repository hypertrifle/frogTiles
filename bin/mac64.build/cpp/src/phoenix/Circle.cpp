#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_phoenix_Circle
#include <phoenix/Circle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Circle_obj::__construct(Dynamic __o__x,Dynamic __o__y,Dynamic __o__r)
{
HX_STACK_FRAME("phoenix.Circle","new",0x7a9201a1,"phoenix.Circle.new","phoenix/Circle.hx",10,0x7ad044ce)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__x,"_x")
HX_STACK_ARG(__o__y,"_y")
HX_STACK_ARG(__o__r,"_r")
Dynamic _x = __o__x.Default(0);
Dynamic _y = __o__y.Default(0);
Dynamic _r = __o__r.Default(0);
{
	HX_STACK_LINE(11)
	this->x = _x;
	HX_STACK_LINE(12)
	this->y = _y;
	HX_STACK_LINE(13)
	this->r = _r;
}
;
	return null();
}

//Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(Dynamic __o__x,Dynamic __o__y,Dynamic __o__r)
{  hx::ObjectPtr< Circle_obj > _result_ = new Circle_obj();
	_result_->__construct(__o__x,__o__y,__o__r);
	return _result_;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > _result_ = new Circle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String Circle_obj::toString( ){
	HX_STACK_FRAME("phoenix.Circle","toString",0x575173cb,"phoenix.Circle.toString","phoenix/Circle.hx",16,0x7ad044ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	::String tmp1 = (HX_HCSTRING("{ x:","\x47","\xef","\x65","\x51") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	::String tmp2 = (tmp1 + HX_HCSTRING(", y:","\x15","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	::String tmp5 = (tmp4 + HX_HCSTRING(", r:","\xfc","\x0e","\x2e","\x1d"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(17)
	Float tmp6 = this->r;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(17)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(17)
	::String tmp8 = (tmp7 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(17)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,toString,return )

bool Circle_obj::point_inside( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Circle","point_inside",0x7f85e5ea,"phoenix.Circle.point_inside","phoenix/Circle.hx",20,0x7ad044ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(22)
	Float tmp = _p->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	Float tmp3 = _p->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(tmp2,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(22)
	::phoenix::Vector diff = tmp6;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(24)
	Float tmp7 = (diff->x * diff->x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	Float tmp8 = (diff->y * diff->y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(24)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(24)
	Float tmp10 = (diff->z * diff->z);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(24)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(24)
	Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(24)
	Float tmp13 = this->r;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(24)
	bool tmp14 = (tmp12 <= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(24)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,point_inside,return )

::phoenix::Circle Circle_obj::clone( ){
	HX_STACK_FRAME("phoenix.Circle","clone",0x7380d6de,"phoenix.Circle.clone","phoenix/Circle.hx",28,0x7ad044ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Float tmp2 = this->r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	::phoenix::Circle tmp3 = ::phoenix::Circle_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,clone,return )

::phoenix::Circle Circle_obj::set( Dynamic _x,Dynamic _y,Dynamic _r){
	HX_STACK_FRAME("phoenix.Circle","set",0x7a95cce3,"phoenix.Circle.set","phoenix/Circle.hx",32,0x7ad044ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(33)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Float _setx = tmp;		HX_STACK_VAR(_setx,"_setx");
	HX_STACK_LINE(34)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	Float _sety = tmp1;		HX_STACK_VAR(_sety,"_sety");
	HX_STACK_LINE(35)
	Float tmp2 = this->r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	Float _setr = tmp2;		HX_STACK_VAR(_setr,"_setr");
	HX_STACK_LINE(38)
	bool tmp3 = (_x != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	if ((tmp3)){
		HX_STACK_LINE(38)
		_setx = _x;
	}
	HX_STACK_LINE(39)
	bool tmp4 = (_y != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	if ((tmp4)){
		HX_STACK_LINE(39)
		_sety = _y;
	}
	HX_STACK_LINE(40)
	bool tmp5 = (_r != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	if ((tmp5)){
		HX_STACK_LINE(40)
		_setr = _r;
	}
	HX_STACK_LINE(42)
	this->x = _setx;
	HX_STACK_LINE(43)
	this->y = _sety;
	HX_STACK_LINE(44)
	this->r = _setr;
	HX_STACK_LINE(46)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Circle_obj,set,return )


Circle_obj::Circle_obj()
{
}

Dynamic Circle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Circle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Circle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Circle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Circle_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("point_inside","\x4b","\xc7","\xa9","\x1d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#endif

hx::Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Circle","\x2f","\x9d","\xee","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Circle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Circle_obj >;
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
