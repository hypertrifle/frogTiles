#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_GamepadDeviceEventType_Impl_
#include <snow/types/_Types/GamepadDeviceEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void GamepadDeviceEventType_Impl__obj::__construct()
{
	return null();
}

//GamepadDeviceEventType_Impl__obj::~GamepadDeviceEventType_Impl__obj() { }

Dynamic GamepadDeviceEventType_Impl__obj::__CreateEmpty() { return  new GamepadDeviceEventType_Impl__obj; }
hx::ObjectPtr< GamepadDeviceEventType_Impl__obj > GamepadDeviceEventType_Impl__obj::__new()
{  hx::ObjectPtr< GamepadDeviceEventType_Impl__obj > _result_ = new GamepadDeviceEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GamepadDeviceEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadDeviceEventType_Impl__obj > _result_ = new GamepadDeviceEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int GamepadDeviceEventType_Impl__obj::unknown;

int GamepadDeviceEventType_Impl__obj::device_added;

int GamepadDeviceEventType_Impl__obj::device_removed;

int GamepadDeviceEventType_Impl__obj::device_remapped;

::String GamepadDeviceEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.GamepadDeviceEventType_Impl_","toString",0xecb3f229,"snow.types._Types.GamepadDeviceEventType_Impl_.toString","snow/types/Types.hx",442,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(443)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(443)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(444)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(445)
			tmp1 = HX_HCSTRING("device_added","\x17","\x8d","\x83","\x4c");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(446)
			tmp1 = HX_HCSTRING("device_removed","\xb7","\xdb","\xdf","\x7c");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(447)
			tmp1 = HX_HCSTRING("device_remapped","\xaf","\x57","\x75","\xb3");
		}
		;break;
		default: {
			HX_STACK_LINE(448)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(443)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GamepadDeviceEventType_Impl__obj,toString,return )


GamepadDeviceEventType_Impl__obj::GamepadDeviceEventType_Impl__obj()
{
}

bool GamepadDeviceEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &GamepadDeviceEventType_Impl__obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &GamepadDeviceEventType_Impl__obj::device_added,HX_HCSTRING("device_added","\x17","\x8d","\x83","\x4c")},
	{hx::fsInt,(void *) &GamepadDeviceEventType_Impl__obj::device_removed,HX_HCSTRING("device_removed","\xb7","\xdb","\xdf","\x7c")},
	{hx::fsInt,(void *) &GamepadDeviceEventType_Impl__obj::device_remapped,HX_HCSTRING("device_remapped","\xaf","\x57","\x75","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_added,"device_added");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_removed,"device_removed");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_remapped,"device_remapped");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_added,"device_added");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_removed,"device_removed");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::device_remapped,"device_remapped");
};

#endif

hx::Class GamepadDeviceEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("device_added","\x17","\x8d","\x83","\x4c"),
	HX_HCSTRING("device_removed","\xb7","\xdb","\xdf","\x7c"),
	HX_HCSTRING("device_remapped","\xaf","\x57","\x75","\xb3"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GamepadDeviceEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.GamepadDeviceEventType_Impl_","\x91","\x62","\x8d","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GamepadDeviceEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GamepadDeviceEventType_Impl__obj >;
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

void GamepadDeviceEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	device_added= (int)1;
	device_removed= (int)2;
	device_remapped= (int)3;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
