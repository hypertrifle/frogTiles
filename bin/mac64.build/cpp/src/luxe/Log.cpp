#include <hxcpp.h>

#ifndef INCLUDED_luxe_Log
#include <luxe/Log.h>
#endif
namespace luxe{

Void Log_obj::__construct()
{
	return null();
}

//Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new()
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

int Log_obj::_level;

Array< ::String > Log_obj::_filter;

Array< ::String > Log_obj::_exclude;

int Log_obj::_log_width;

::String Log_obj::_get_spacing( ::String _file){
	HX_STACK_FRAME("luxe.Log","_get_spacing",0xfd25c79d,"luxe.Log._get_spacing","luxe/Log.hx",250,0xe5312153)
	HX_STACK_ARG(_file,"_file")
	HX_STACK_LINE(252)
	::String _spaces = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_spaces,"_spaces");
	HX_STACK_LINE(255)
	int tmp = (_file.length + (int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	int _trace_length = tmp;		HX_STACK_VAR(_trace_length,"_trace_length");
	HX_STACK_LINE(256)
	int tmp1 = ::luxe::Log_obj::_log_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	int tmp2 = _trace_length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(256)
	int _diff = tmp3;		HX_STACK_VAR(_diff,"_diff");
	HX_STACK_LINE(257)
	bool tmp4 = (_diff > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(257)
	if ((tmp4)){
		HX_STACK_LINE(258)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			bool tmp5 = (_g < _diff);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			if ((tmp6)){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(258)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(259)
			hx::AddEq(_spaces,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
	}
	HX_STACK_LINE(263)
	::String tmp5 = _spaces;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(263)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,_get_spacing,return )


Log_obj::Log_obj()
{
}

bool Log_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &Log_obj::_level,HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Log_obj::_filter,HX_HCSTRING("_filter","\x57","\x31","\xac","\xf3")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Log_obj::_exclude,HX_HCSTRING("_exclude","\x5b","\x18","\xeb","\xe4")},
	{hx::fsInt,(void *) &Log_obj::_log_width,HX_HCSTRING("_log_width","\x8c","\x08","\xc7","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::_level,"_level");
	HX_MARK_MEMBER_NAME(Log_obj::_filter,"_filter");
	HX_MARK_MEMBER_NAME(Log_obj::_exclude,"_exclude");
	HX_MARK_MEMBER_NAME(Log_obj::_log_width,"_log_width");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::_level,"_level");
	HX_VISIT_MEMBER_NAME(Log_obj::_filter,"_filter");
	HX_VISIT_MEMBER_NAME(Log_obj::_exclude,"_exclude");
	HX_VISIT_MEMBER_NAME(Log_obj::_log_width,"_log_width");
};

#endif

hx::Class Log_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e"),
	HX_HCSTRING("_filter","\x57","\x31","\xac","\xf3"),
	HX_HCSTRING("_exclude","\x5b","\x18","\xeb","\xe4"),
	HX_HCSTRING("_log_width","\x8c","\x08","\xc7","\xa7"),
	HX_HCSTRING("_get_spacing","\x9b","\x41","\xbf","\x7d"),
	::String(null()) };

void Log_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Log","\xac","\x2b","\x85","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Log_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Log_obj >;
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

void Log_obj::__boot()
{
	_level= (int)1;
	_log_width= (int)16;
}

} // end namespace luxe
