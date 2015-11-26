#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_OpenGLProfile_Impl_
#include <snow/types/_Types/OpenGLProfile_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void OpenGLProfile_Impl__obj::__construct()
{
	return null();
}

//OpenGLProfile_Impl__obj::~OpenGLProfile_Impl__obj() { }

Dynamic OpenGLProfile_Impl__obj::__CreateEmpty() { return  new OpenGLProfile_Impl__obj; }
hx::ObjectPtr< OpenGLProfile_Impl__obj > OpenGLProfile_Impl__obj::__new()
{  hx::ObjectPtr< OpenGLProfile_Impl__obj > _result_ = new OpenGLProfile_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic OpenGLProfile_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenGLProfile_Impl__obj > _result_ = new OpenGLProfile_Impl__obj();
	_result_->__construct();
	return _result_;}

int OpenGLProfile_Impl__obj::compatibility;

int OpenGLProfile_Impl__obj::core;

::String OpenGLProfile_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.OpenGLProfile_Impl_","toString",0xfae03454,"snow.types._Types.OpenGLProfile_Impl_.toString","snow/types/Types.hx",272,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(273)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(274)
			tmp1 = HX_HCSTRING("compatibility","\x30","\xc4","\x1a","\x4d");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(275)
			tmp1 = HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41");
		}
		;break;
		default: {
			HX_STACK_LINE(276)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(273)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenGLProfile_Impl__obj,toString,return )


OpenGLProfile_Impl__obj::OpenGLProfile_Impl__obj()
{
}

bool OpenGLProfile_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &OpenGLProfile_Impl__obj::compatibility,HX_HCSTRING("compatibility","\x30","\xc4","\x1a","\x4d")},
	{hx::fsInt,(void *) &OpenGLProfile_Impl__obj::core,HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenGLProfile_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpenGLProfile_Impl__obj::compatibility,"compatibility");
	HX_MARK_MEMBER_NAME(OpenGLProfile_Impl__obj::core,"core");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenGLProfile_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpenGLProfile_Impl__obj::compatibility,"compatibility");
	HX_VISIT_MEMBER_NAME(OpenGLProfile_Impl__obj::core,"core");
};

#endif

hx::Class OpenGLProfile_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("compatibility","\x30","\xc4","\x1a","\x4d"),
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void OpenGLProfile_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.OpenGLProfile_Impl_","\xc6","\x11","\xbe","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OpenGLProfile_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OpenGLProfile_Impl__obj >;
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

void OpenGLProfile_Impl__obj::__boot()
{
	compatibility= (int)0;
	core= (int)1;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
