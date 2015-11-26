#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_TextEventType_Impl_
#include <snow/types/_Types/TextEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void TextEventType_Impl__obj::__construct()
{
	return null();
}

//TextEventType_Impl__obj::~TextEventType_Impl__obj() { }

Dynamic TextEventType_Impl__obj::__CreateEmpty() { return  new TextEventType_Impl__obj; }
hx::ObjectPtr< TextEventType_Impl__obj > TextEventType_Impl__obj::__new()
{  hx::ObjectPtr< TextEventType_Impl__obj > _result_ = new TextEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TextEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEventType_Impl__obj > _result_ = new TextEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int TextEventType_Impl__obj::unknown;

int TextEventType_Impl__obj::edit;

int TextEventType_Impl__obj::input;

::String TextEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.TextEventType_Impl_","toString",0xe75afde7,"snow.types._Types.TextEventType_Impl_.toString","snow/types/Types.hx",419,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(420)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(420)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(421)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(422)
			tmp1 = HX_HCSTRING("edit","\x0a","\xca","\x0e","\x43");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(423)
			tmp1 = HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe");
		}
		;break;
		default: {
			HX_STACK_LINE(424)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(420)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEventType_Impl__obj,toString,return )


TextEventType_Impl__obj::TextEventType_Impl__obj()
{
}

bool TextEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &TextEventType_Impl__obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &TextEventType_Impl__obj::edit,HX_HCSTRING("edit","\x0a","\xca","\x0e","\x43")},
	{hx::fsInt,(void *) &TextEventType_Impl__obj::input,HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::edit,"edit");
	HX_MARK_MEMBER_NAME(TextEventType_Impl__obj::input,"input");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::edit,"edit");
	HX_VISIT_MEMBER_NAME(TextEventType_Impl__obj::input,"input");
};

#endif

hx::Class TextEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("edit","\x0a","\xca","\x0e","\x43"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void TextEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.TextEventType_Impl_","\x93","\xc6","\x2e","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextEventType_Impl__obj >;
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

void TextEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	edit= (int)1;
	input= (int)2;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
