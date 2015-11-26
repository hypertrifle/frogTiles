#include <hxcpp.h>

#ifndef INCLUDED_luxe_macros_BuildVersion
#include <luxe/macros/BuildVersion.h>
#endif
namespace luxe{
namespace macros{

Void BuildVersion_obj::__construct()
{
	return null();
}

//BuildVersion_obj::~BuildVersion_obj() { }

Dynamic BuildVersion_obj::__CreateEmpty() { return  new BuildVersion_obj; }
hx::ObjectPtr< BuildVersion_obj > BuildVersion_obj::__new()
{  hx::ObjectPtr< BuildVersion_obj > _result_ = new BuildVersion_obj();
	_result_->__construct();
	return _result_;}

Dynamic BuildVersion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BuildVersion_obj > _result_ = new BuildVersion_obj();
	_result_->__construct();
	return _result_;}

bool BuildVersion_obj::_save;

::String BuildVersion_obj::try_git( ::String root){
	HX_STACK_FRAME("luxe.macros.BuildVersion","try_git",0xaec0ed39,"luxe.macros.BuildVersion.try_git","luxe/macros/BuildVersion.hx",70,0x8b16c365)
	HX_STACK_ARG(root,"root")
	HX_STACK_LINE(70)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BuildVersion_obj,try_git,return )


BuildVersion_obj::BuildVersion_obj()
{
}

bool BuildVersion_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_save") ) { outValue = _save; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"try_git") ) { outValue = try_git_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &BuildVersion_obj::_save,HX_HCSTRING("_save","\x1c","\xa7","\x5e","\xff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BuildVersion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BuildVersion_obj::_save,"_save");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BuildVersion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BuildVersion_obj::_save,"_save");
};

#endif

hx::Class BuildVersion_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_save","\x1c","\xa7","\x5e","\xff"),
	HX_HCSTRING("try_git","\xce","\xeb","\xfe","\x56"),
	::String(null()) };

void BuildVersion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.macros.BuildVersion","\xd9","\x7e","\x61","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BuildVersion_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BuildVersion_obj >;
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

void BuildVersion_obj::__boot()
{
	_save= false;
}

} // end namespace luxe
} // end namespace macros
