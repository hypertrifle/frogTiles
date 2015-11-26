#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_WindowEventType_Impl_
#include <snow/types/_Types/WindowEventType_Impl_.h>
#endif
namespace snow{
namespace types{
namespace _Types{

Void WindowEventType_Impl__obj::__construct()
{
	return null();
}

//WindowEventType_Impl__obj::~WindowEventType_Impl__obj() { }

Dynamic WindowEventType_Impl__obj::__CreateEmpty() { return  new WindowEventType_Impl__obj; }
hx::ObjectPtr< WindowEventType_Impl__obj > WindowEventType_Impl__obj::__new()
{  hx::ObjectPtr< WindowEventType_Impl__obj > _result_ = new WindowEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic WindowEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowEventType_Impl__obj > _result_ = new WindowEventType_Impl__obj();
	_result_->__construct();
	return _result_;}

int WindowEventType_Impl__obj::unknown;

int WindowEventType_Impl__obj::created;

int WindowEventType_Impl__obj::shown;

int WindowEventType_Impl__obj::hidden;

int WindowEventType_Impl__obj::exposed;

int WindowEventType_Impl__obj::moved;

int WindowEventType_Impl__obj::resized;

int WindowEventType_Impl__obj::size_changed;

int WindowEventType_Impl__obj::minimized;

int WindowEventType_Impl__obj::maximized;

int WindowEventType_Impl__obj::restored;

int WindowEventType_Impl__obj::enter;

int WindowEventType_Impl__obj::leave;

int WindowEventType_Impl__obj::focus_gained;

int WindowEventType_Impl__obj::focus_lost;

int WindowEventType_Impl__obj::close;

int WindowEventType_Impl__obj::destroy;

::String WindowEventType_Impl__obj::toString( int this1){
	HX_STACK_FRAME("snow.types._Types.WindowEventType_Impl_","toString",0x2ba9332a,"snow.types._Types.WindowEventType_Impl_.toString","snow/types/Types.hx",601,0x72b41ce7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(602)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(602)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(603)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(604)
			tmp1 = HX_HCSTRING("created","\xe8","\xb5","\x6a","\x11");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(605)
			tmp1 = HX_HCSTRING("shown","\xd1","\x88","\x27","\x7c");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(606)
			tmp1 = HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(607)
			tmp1 = HX_HCSTRING("exposed","\xa0","\x69","\x62","\x29");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(608)
			tmp1 = HX_HCSTRING("moved","\x33","\xcc","\x65","\x0c");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(609)
			tmp1 = HX_HCSTRING("resized","\xf0","\x5b","\x73","\x63");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(610)
			tmp1 = HX_HCSTRING("size_changed","\x36","\xd4","\x78","\x47");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(611)
			tmp1 = HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(612)
			tmp1 = HX_HCSTRING("maximized","\x18","\x0e","\xe1","\xfe");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(613)
			tmp1 = HX_HCSTRING("restored","\x56","\xfd","\xa9","\xef");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(614)
			tmp1 = HX_HCSTRING("enter","\x18","\x6d","\x86","\x70");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(615)
			tmp1 = HX_HCSTRING("leave","\xf7","\x34","\x53","\x72");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(616)
			tmp1 = HX_HCSTRING("focus_gained","\x65","\x83","\x53","\x46");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(617)
			tmp1 = HX_HCSTRING("focus_lost","\xeb","\xf6","\xfc","\x29");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(618)
			tmp1 = HX_HCSTRING("close","\xb8","\x17","\x63","\x48");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(619)
			tmp1 = HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24");
		}
		;break;
		default: {
			HX_STACK_LINE(620)
			tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + this1);
		}
	}
	HX_STACK_LINE(602)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WindowEventType_Impl__obj,toString,return )


WindowEventType_Impl__obj::WindowEventType_Impl__obj()
{
}

bool WindowEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::unknown,HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::created,HX_HCSTRING("created","\xe8","\xb5","\x6a","\x11")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::shown,HX_HCSTRING("shown","\xd1","\x88","\x27","\x7c")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::hidden,HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::exposed,HX_HCSTRING("exposed","\xa0","\x69","\x62","\x29")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::moved,HX_HCSTRING("moved","\x33","\xcc","\x65","\x0c")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::resized,HX_HCSTRING("resized","\xf0","\x5b","\x73","\x63")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::size_changed,HX_HCSTRING("size_changed","\x36","\xd4","\x78","\x47")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::minimized,HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::maximized,HX_HCSTRING("maximized","\x18","\x0e","\xe1","\xfe")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::restored,HX_HCSTRING("restored","\x56","\xfd","\xa9","\xef")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::enter,HX_HCSTRING("enter","\x18","\x6d","\x86","\x70")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::leave,HX_HCSTRING("leave","\xf7","\x34","\x53","\x72")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::focus_gained,HX_HCSTRING("focus_gained","\x65","\x83","\x53","\x46")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::focus_lost,HX_HCSTRING("focus_lost","\xeb","\xf6","\xfc","\x29")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::close,HX_HCSTRING("close","\xb8","\x17","\x63","\x48")},
	{hx::fsInt,(void *) &WindowEventType_Impl__obj::destroy,HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::unknown,"unknown");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::created,"created");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::shown,"shown");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::hidden,"hidden");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::exposed,"exposed");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::moved,"moved");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::resized,"resized");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::size_changed,"size_changed");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::minimized,"minimized");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::maximized,"maximized");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::restored,"restored");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::enter,"enter");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::leave,"leave");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::focus_gained,"focus_gained");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::focus_lost,"focus_lost");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::close,"close");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::destroy,"destroy");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::unknown,"unknown");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::created,"created");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::shown,"shown");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::hidden,"hidden");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::exposed,"exposed");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::moved,"moved");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::resized,"resized");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::size_changed,"size_changed");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::minimized,"minimized");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::maximized,"maximized");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::restored,"restored");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::enter,"enter");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::leave,"leave");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::focus_gained,"focus_gained");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::focus_lost,"focus_lost");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::close,"close");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::destroy,"destroy");
};

#endif

hx::Class WindowEventType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("created","\xe8","\xb5","\x6a","\x11"),
	HX_HCSTRING("shown","\xd1","\x88","\x27","\x7c"),
	HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"),
	HX_HCSTRING("exposed","\xa0","\x69","\x62","\x29"),
	HX_HCSTRING("moved","\x33","\xcc","\x65","\x0c"),
	HX_HCSTRING("resized","\xf0","\x5b","\x73","\x63"),
	HX_HCSTRING("size_changed","\x36","\xd4","\x78","\x47"),
	HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"),
	HX_HCSTRING("maximized","\x18","\x0e","\xe1","\xfe"),
	HX_HCSTRING("restored","\x56","\xfd","\xa9","\xef"),
	HX_HCSTRING("enter","\x18","\x6d","\x86","\x70"),
	HX_HCSTRING("leave","\xf7","\x34","\x53","\x72"),
	HX_HCSTRING("focus_gained","\x65","\x83","\x53","\x46"),
	HX_HCSTRING("focus_lost","\xeb","\xf6","\xfc","\x29"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void WindowEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.WindowEventType_Impl_","\xb0","\x45","\xa8","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WindowEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WindowEventType_Impl__obj >;
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

void WindowEventType_Impl__obj::__boot()
{
	unknown= (int)0;
	created= (int)1;
	shown= (int)2;
	hidden= (int)3;
	exposed= (int)4;
	moved= (int)5;
	resized= (int)6;
	size_changed= (int)7;
	minimized= (int)8;
	maximized= (int)9;
	restored= (int)10;
	enter= (int)11;
	leave= (int)12;
	focus_gained= (int)13;
	focus_lost= (int)14;
	close= (int)15;
	destroy= (int)16;
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
