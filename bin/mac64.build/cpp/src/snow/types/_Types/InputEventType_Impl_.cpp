#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_InputEventType_Impl_
#include <snow/types/_Types/InputEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void InputEventType_Impl__obj::__construct()
{
	return null();
}

//InputEventType_Impl__obj::~InputEventType_Impl__obj() { }

Dynamic InputEventType_Impl__obj::__CreateEmpty() { return  new InputEventType_Impl__obj; }
hx::ObjectPtr< InputEventType_Impl__obj > InputEventType_Impl__obj::__new()
{  hx::ObjectPtr< InputEventType_Impl__obj > _result_ = new InputEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic InputEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputEventType_Impl__obj > _result_ = new InputEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int InputEventType_Impl__obj::unknown;

int InputEventType_Impl__obj::key;

int InputEventType_Impl__obj::mouse;

int InputEventType_Impl__obj::touch;

int InputEventType_Impl__obj::joystick;

int InputEventType_Impl__obj::controller;

::String InputEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.InputEventType_Impl_","toString",0xa3bfcb1c,"snow.types._Types.InputEventType_Impl_.toString","snow/types/Types.hx",646,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(647)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(647)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(648)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(649)
			tmp1 = HX_HCSTRING("key","\x9f","\x89","\x51","\x00");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(650)
			tmp1 = HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(651)
			tmp1 = HX_HCSTRING("touch","\xbf","\x17","\x33","\x14");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(652)
			tmp1 = HX_HCSTRING("joystick","\xbc","\xe0","\xf1","\x9b");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(653)
			tmp1 = HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04");
		}
		;break;
		default: {
			HX_STACK_LINE(654)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(647)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputEventType_Impl__obj,toString,return )


InputEventType_Impl__obj::InputEventType_Impl__obj()
{
}

bool InputEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &InputEventType_Impl__obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::key,HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::mouse,HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::touch,HX_HCSTRING("touch","\xbf","\x17","\x33","\x14")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::joystick,HX_HCSTRING("joystick","\xbc","\xe0","\xf1","\x9b")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::controller,HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::key,"key");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::touch,"touch");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::joystick,"joystick");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::controller,"controller");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::key,"key");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::touch,"touch");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::joystick,"joystick");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::controller,"controller");
};

#endif

hx::Class InputEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("touch","\xbf","\x17","\x33","\x14"),
	HX_HCSTRING("joystick","\xbc","\xe0","\xf1","\x9b"),
	HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void InputEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.InputEventType_Impl_","\xfe","\x73","\x4c","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InputEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InputEventType_Impl__obj >;
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

void InputEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	key= (int)1;
	mouse= (int)2;
	touch= (int)3;
	joystick= (int)4;
	controller= (int)5;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
