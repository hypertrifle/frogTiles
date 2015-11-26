#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_AssetType_Impl_
#include <snow/types/_Types/AssetType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void AssetType_Impl__obj::__construct()
{
	return null();
}

//AssetType_Impl__obj::~AssetType_Impl__obj() { }

Dynamic AssetType_Impl__obj::__CreateEmpty() { return  new AssetType_Impl__obj; }
hx::ObjectPtr< AssetType_Impl__obj > AssetType_Impl__obj::__new()
{  hx::ObjectPtr< AssetType_Impl__obj > _result_ = new AssetType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetType_Impl__obj > _result_ = new AssetType_Impl__obj();
	_result_->__construct();
	return _result_;}

int AssetType_Impl__obj::unknown;

int AssetType_Impl__obj::bytes;

int AssetType_Impl__obj::text;

int AssetType_Impl__obj::json;

int AssetType_Impl__obj::image;

int AssetType_Impl__obj::audio;

::String AssetType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.AssetType_Impl_","toString",0xe543b804,"snow.types._Types.AssetType_Impl_.toString","snow/types/Types.hx",55,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(56)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(57)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(58)
			tmp1 = HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(59)
			tmp1 = HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(60)
			tmp1 = HX_HCSTRING("json","\x28","\x42","\x68","\x46");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(61)
			tmp1 = HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(62)
			tmp1 = HX_HCSTRING("audio","\xd6","\x78","\x80","\x27");
		}
		;break;
		default: {
			HX_STACK_LINE(63)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(56)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetType_Impl__obj,toString,return )


AssetType_Impl__obj::AssetType_Impl__obj()
{
}

bool AssetType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &AssetType_Impl__obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::bytes,HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::text,HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::json,HX_HCSTRING("json","\x28","\x42","\x68","\x46")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::image,HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsInt,(void *) &AssetType_Impl__obj::audio,HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::bytes,"bytes");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::text,"text");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::json,"json");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::image,"image");
	HX_MARK_MEMBER_NAME(AssetType_Impl__obj::audio,"audio");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::bytes,"bytes");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::text,"text");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::json,"json");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::image,"image");
	HX_VISIT_MEMBER_NAME(AssetType_Impl__obj::audio,"audio");
};

#endif

hx::Class AssetType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("json","\x28","\x42","\x68","\x46"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void AssetType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.AssetType_Impl_","\x16","\xc4","\x99","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetType_Impl__obj >;
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

void AssetType_Impl__obj::__boot()
{
	unknown= (int)0;
	bytes= (int)1;
	text= (int)2;
	json= (int)3;
	image= (int)4;
	audio= (int)5;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
