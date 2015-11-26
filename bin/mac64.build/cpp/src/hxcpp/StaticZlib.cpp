#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_StaticZlib
#include <hxcpp/StaticZlib.h>
#endif
extern "C" int zlib_register_prims();
namespace hxcpp{

Void StaticZlib_obj::__construct()
{
	return null();
}

//StaticZlib_obj::~StaticZlib_obj() { }

Dynamic StaticZlib_obj::__CreateEmpty() { return  new StaticZlib_obj; }
hx::ObjectPtr< StaticZlib_obj > StaticZlib_obj::__new()
{  hx::ObjectPtr< StaticZlib_obj > _result_ = new StaticZlib_obj();
	_result_->__construct();
	return _result_;}

Dynamic StaticZlib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StaticZlib_obj > _result_ = new StaticZlib_obj();
	_result_->__construct();
	return _result_;}

void StaticZlib_obj::__init__() {
HX_STACK_FRAME("hxcpp.StaticZlib","__init__",0x1c6d618a,"hxcpp.StaticZlib.__init__","hxcpp/StaticZlib.hx",19,0xe631eb29)
{
	HX_STACK_LINE(19)
	zlib_register_prims();;
}
}


StaticZlib_obj::StaticZlib_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticZlib_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticZlib_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticZlib_obj::__mClass;

void StaticZlib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hxcpp.StaticZlib","\x74","\x4b","\xcc","\x23");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StaticZlib_obj >;
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

} // end namespace hxcpp
