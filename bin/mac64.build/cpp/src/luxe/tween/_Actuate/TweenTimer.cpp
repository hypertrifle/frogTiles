#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween__Actuate_TweenTimer
#include <luxe/tween/_Actuate/TweenTimer.h>
#endif
namespace luxe{
namespace tween{
namespace _Actuate{

Void TweenTimer_obj::__construct(Float progress)
{
HX_STACK_FRAME("luxe.tween._Actuate.TweenTimer","new",0x58e5f5ef,"luxe.tween._Actuate.TweenTimer.new","luxe/tween/Actuate.hx",376,0x5242ff4c)
HX_STACK_THIS(this)
HX_STACK_ARG(progress,"progress")
{
	HX_STACK_LINE(376)
	this->progress = progress;
}
;
	return null();
}

//TweenTimer_obj::~TweenTimer_obj() { }

Dynamic TweenTimer_obj::__CreateEmpty() { return  new TweenTimer_obj; }
hx::ObjectPtr< TweenTimer_obj > TweenTimer_obj::__new(Float progress)
{  hx::ObjectPtr< TweenTimer_obj > _result_ = new TweenTimer_obj();
	_result_->__construct(progress);
	return _result_;}

Dynamic TweenTimer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TweenTimer_obj > _result_ = new TweenTimer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


TweenTimer_obj::TweenTimer_obj()
{
}

Dynamic TweenTimer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return progress; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TweenTimer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TweenTimer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TweenTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TweenTimer_obj,progress),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenTimer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenTimer_obj::__mClass,"__mClass");
};

#endif

hx::Class TweenTimer_obj::__mClass;

void TweenTimer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween._Actuate.TweenTimer","\x7d","\xd2","\x42","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TweenTimer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TweenTimer_obj >;
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
} // end namespace _Actuate
