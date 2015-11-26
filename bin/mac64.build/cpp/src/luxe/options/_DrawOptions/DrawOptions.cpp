#include <hxcpp.h>

#ifndef INCLUDED_luxe_options__DrawOptions_DrawOptions
#include <luxe/options/_DrawOptions/DrawOptions.h>
#endif
namespace luxe{
namespace options{
namespace _DrawOptions{

Void DrawOptions_obj::__construct()
{
	return null();
}

//DrawOptions_obj::~DrawOptions_obj() { }

Dynamic DrawOptions_obj::__CreateEmpty() { return  new DrawOptions_obj; }
hx::ObjectPtr< DrawOptions_obj > DrawOptions_obj::__new()
{  hx::ObjectPtr< DrawOptions_obj > _result_ = new DrawOptions_obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawOptions_obj > _result_ = new DrawOptions_obj();
	_result_->__construct();
	return _result_;}


DrawOptions_obj::DrawOptions_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class DrawOptions_obj::__mClass;

void DrawOptions_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.options._DrawOptions.DrawOptions","\x0f","\x4f","\xbe","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawOptions_obj >;
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
} // end namespace options
} // end namespace _DrawOptions
