#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_FileEventType_Impl_
#include <snow/types/_Types/FileEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void FileEventType_Impl__obj::__construct()
{
	return null();
}

//FileEventType_Impl__obj::~FileEventType_Impl__obj() { }

Dynamic FileEventType_Impl__obj::__CreateEmpty() { return  new FileEventType_Impl__obj; }
hx::ObjectPtr< FileEventType_Impl__obj > FileEventType_Impl__obj::__new()
{  hx::ObjectPtr< FileEventType_Impl__obj > _result_ = new FileEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FileEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileEventType_Impl__obj > _result_ = new FileEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int FileEventType_Impl__obj::unknown;

int FileEventType_Impl__obj::modify;

int FileEventType_Impl__obj::remove;

int FileEventType_Impl__obj::create;

int FileEventType_Impl__obj::drop;

::String FileEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.FileEventType_Impl_","toString",0xe830b4b6,"snow.types._Types.FileEventType_Impl_.toString","snow/types/Types.hx",677,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(678)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(678)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(678)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(679)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(680)
			tmp1 = HX_HCSTRING("modify","\x7a","\x14","\xca","\xc0");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(681)
			tmp1 = HX_HCSTRING("remove","\x44","\x9c","\x88","\x04");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(682)
			tmp1 = HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(683)
			tmp1 = HX_HCSTRING("drop","\x2f","\x38","\x70","\x42");
		}
		;break;
		default: {
			HX_STACK_LINE(684)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(678)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileEventType_Impl__obj,toString,return )


FileEventType_Impl__obj::FileEventType_Impl__obj()
{
}

bool FileEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &FileEventType_Impl__obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &FileEventType_Impl__obj::modify,HX_HCSTRING("modify","\x7a","\x14","\xca","\xc0")},
	{hx::fsInt,(void *) &FileEventType_Impl__obj::remove,HX_HCSTRING("remove","\x44","\x9c","\x88","\x04")},
	{hx::fsInt,(void *) &FileEventType_Impl__obj::create,HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c")},
	{hx::fsInt,(void *) &FileEventType_Impl__obj::drop,HX_HCSTRING("drop","\x2f","\x38","\x70","\x42")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::modify,"modify");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::remove,"remove");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::create,"create");
	HX_MARK_MEMBER_NAME(FileEventType_Impl__obj::drop,"drop");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::modify,"modify");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::remove,"remove");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::create,"create");
	HX_VISIT_MEMBER_NAME(FileEventType_Impl__obj::drop,"drop");
};

#endif

hx::Class FileEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("modify","\x7a","\x14","\xca","\xc0"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("drop","\x2f","\x38","\x70","\x42"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void FileEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.FileEventType_Impl_","\xa4","\x25","\xc7","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileEventType_Impl__obj >;
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

void FileEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	modify= (int)1;
	remove= (int)2;
	create= (int)3;
	drop= (int)4;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
