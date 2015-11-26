#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_BezierPath
#include <luxe/tween/BezierPath.h>
#endif
#ifndef INCLUDED_luxe_tween_LinearPath
#include <luxe/tween/LinearPath.h>
#endif
namespace luxe{
namespace tween{

Void LinearPath_obj::__construct(Float end,Float strength)
{
HX_STACK_FRAME("luxe.tween.LinearPath","new",0xd2e8f697,"luxe.tween.LinearPath.new","luxe/tween/MotionPath.hx",230,0x24788886)
HX_STACK_THIS(this)
HX_STACK_ARG(end,"end")
HX_STACK_ARG(strength,"strength")
{
	HX_STACK_LINE(232)
	Float tmp = end;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	Float tmp1 = strength;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	super::__construct(tmp,(int)0,tmp1);
}
;
	return null();
}

//LinearPath_obj::~LinearPath_obj() { }

Dynamic LinearPath_obj::__CreateEmpty() { return  new LinearPath_obj; }
hx::ObjectPtr< LinearPath_obj > LinearPath_obj::__new(Float end,Float strength)
{  hx::ObjectPtr< LinearPath_obj > _result_ = new LinearPath_obj();
	_result_->__construct(end,strength);
	return _result_;}

Dynamic LinearPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearPath_obj > _result_ = new LinearPath_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Float LinearPath_obj::calculate( Float start,Float k){
	HX_STACK_FRAME("luxe.tween.LinearPath","calculate",0x947cbedd,"luxe.tween.LinearPath.calculate","luxe/tween/MotionPath.hx",237,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(239)
	Float tmp = start;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	Float tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	Float tmp2 = this->end;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	Float tmp3 = start;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(239)
	Float tmp5 = (tmp1 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(239)
	Float tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(239)
	return tmp6;
}



LinearPath_obj::LinearPath_obj()
{
}

Dynamic LinearPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#endif

hx::Class LinearPath_obj::__mClass;

void LinearPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.LinearPath","\x25","\x5f","\x3e","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LinearPath_obj >;
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
