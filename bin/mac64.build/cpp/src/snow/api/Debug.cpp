#include <hxcpp.h>

#ifndef INCLUDED_snow_api_Debug
#include <snow/api/Debug.h>
#endif
namespace snow{
namespace api{

Void Debug_obj::__construct()
{
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new()
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

int Debug_obj::_level;

Array< ::String > Debug_obj::_filter;

Array< ::String > Debug_obj::_exclude;

int Debug_obj::_log_width;

::String Debug_obj::_get_spacing( ::String _file){
	HX_STACK_FRAME("snow.api.Debug","_get_spacing",0x9b233895,"snow.api.Debug._get_spacing","snow/api/Debug.hx",242,0x9e629c0c)
	HX_STACK_ARG(_file,"_file")
	HX_STACK_LINE(244)
	::String _spaces = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_spaces,"_spaces");
	HX_STACK_LINE(247)
	int tmp = (_file.length + (int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	int _trace_length = tmp;		HX_STACK_VAR(_trace_length,"_trace_length");
	HX_STACK_LINE(248)
	int tmp1 = ::snow::api::Debug_obj::_log_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	int tmp2 = _trace_length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(248)
	int _diff = tmp3;		HX_STACK_VAR(_diff,"_diff");
	HX_STACK_LINE(249)
	bool tmp4 = (_diff > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(249)
	if ((tmp4)){
		HX_STACK_LINE(250)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(250)
		while((true)){
			HX_STACK_LINE(250)
			bool tmp5 = (_g < _diff);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(250)
			if ((tmp6)){
				HX_STACK_LINE(250)
				break;
			}
			HX_STACK_LINE(250)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(250)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(251)
			hx::AddEq(_spaces,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
	}
	HX_STACK_LINE(255)
	::String tmp5 = _spaces;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(255)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,_get_spacing,return )


Debug_obj::Debug_obj()
{
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { outValue = _level; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { outValue = _filter; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_exclude") ) { outValue = _exclude; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_log_width") ) { outValue = _log_width; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_get_spacing") ) { outValue = _get_spacing_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Debug_obj::_level,HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Debug_obj::_filter,HX_HCSTRING("_filter","\x57","\x31","\xac","\xf3")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Debug_obj::_exclude,HX_HCSTRING("_exclude","\x5b","\x18","\xeb","\xe4")},
	{hx::fsInt,(void *) &Debug_obj::_log_width,HX_HCSTRING("_log_width","\x8c","\x08","\xc7","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debug_obj::_level,"_level");
	HX_MARK_MEMBER_NAME(Debug_obj::_filter,"_filter");
	HX_MARK_MEMBER_NAME(Debug_obj::_exclude,"_exclude");
	HX_MARK_MEMBER_NAME(Debug_obj::_log_width,"_log_width");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debug_obj::_level,"_level");
	HX_VISIT_MEMBER_NAME(Debug_obj::_filter,"_filter");
	HX_VISIT_MEMBER_NAME(Debug_obj::_exclude,"_exclude");
	HX_VISIT_MEMBER_NAME(Debug_obj::_log_width,"_log_width");
};

#endif

hx::Class Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e"),
	HX_HCSTRING("_filter","\x57","\x31","\xac","\xf3"),
	HX_HCSTRING("_exclude","\x5b","\x18","\xeb","\xe4"),
	HX_HCSTRING("_log_width","\x8c","\x08","\xc7","\xa7"),
	HX_HCSTRING("_get_spacing","\x9b","\x41","\xbf","\x7d"),
	::String(null()) };

void Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.Debug","\xb4","\x15","\xe8","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Debug_obj >;
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

void Debug_obj::__boot()
{
	_level= (int)1;
	_log_width= (int)16;
}

} // end namespace snow
} // end namespace api
