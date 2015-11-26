#include <hxcpp.h>

#ifndef INCLUDED_snow_modules_openal_AL
#include <snow/modules/openal/AL.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALHelper
#include <snow/modules/openal/ALHelper.h>
#endif
namespace snow{
namespace modules{
namespace openal{

Void ALHelper_obj::__construct()
{
	return null();
}

//ALHelper_obj::~ALHelper_obj() { }

Dynamic ALHelper_obj::__CreateEmpty() { return  new ALHelper_obj; }
hx::ObjectPtr< ALHelper_obj > ALHelper_obj::__new()
{  hx::ObjectPtr< ALHelper_obj > _result_ = new ALHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALHelper_obj > _result_ = new ALHelper_obj();
	_result_->__construct();
	return _result_;}

Void ALHelper_obj::default_source_setup( int source){
{
		HX_STACK_FRAME("snow.modules.openal.ALHelper","default_source_setup",0x830c0385,"snow.modules.openal.ALHelper.default_source_setup","snow/modules/openal/ALHelper.hx",14,0xa099c7df)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(17)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		int tmp1 = ::snow::modules::openal::AL_obj::PITCH;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		::snow::modules::openal::AL_obj::sourcef(tmp,tmp1,((Float)1.0));
		HX_STACK_LINE(19)
		int tmp2 = source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		int tmp3 = ::snow::modules::openal::AL_obj::GAIN;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		::snow::modules::openal::AL_obj::sourcef(tmp2,tmp3,((Float)1.0));
		HX_STACK_LINE(21)
		int tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		int tmp5 = ::snow::modules::openal::AL_obj::POSITION;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		::snow::modules::openal::AL_obj::source3f(tmp4,tmp5,((Float)0.0),((Float)0.0),((Float)0.0));
		HX_STACK_LINE(22)
		int tmp6 = source;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		int tmp7 = ::snow::modules::openal::AL_obj::VELOCITY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		::snow::modules::openal::AL_obj::source3f(tmp6,tmp7,((Float)0.0),((Float)0.0),((Float)0.0));
		HX_STACK_LINE(24)
		int tmp8 = source;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		int tmp9 = ::snow::modules::openal::AL_obj::LOOPING;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		int tmp10 = ::snow::modules::openal::AL_obj::FALSE;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(24)
		::snow::modules::openal::AL_obj::sourcei(tmp8,tmp9,tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALHelper_obj,default_source_setup,(void))

int ALHelper_obj::determine_format( Dynamic _info){
	HX_STACK_FRAME("snow.modules.openal.ALHelper","determine_format",0xf9124fd1,"snow.modules.openal.ALHelper.determine_format","snow/modules/openal/ALHelper.hx",29,0xa099c7df)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_LINE(32)
	int tmp = ::snow::modules::openal::AL_obj::FORMAT_MONO16;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	int format = tmp;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(35)
	int tmp1 = _info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	bool tmp2 = (tmp1 > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	if ((tmp2)){
		HX_STACK_LINE(36)
		int tmp3 = _info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		bool tmp4 = (tmp3 == (int)8);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		if ((tmp4)){
			HX_STACK_LINE(37)
			int tmp5 = ::snow::modules::openal::AL_obj::FORMAT_STEREO8;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			format = tmp5;
			HX_STACK_LINE(138)
			Dynamic();
		}
		else{
			HX_STACK_LINE(40)
			int tmp5 = ::snow::modules::openal::AL_obj::FORMAT_STEREO16;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			format = tmp5;
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
	else{
		HX_STACK_LINE(44)
		int tmp3 = _info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		bool tmp4 = (tmp3 == (int)8);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		if ((tmp4)){
			HX_STACK_LINE(45)
			int tmp5 = ::snow::modules::openal::AL_obj::FORMAT_MONO8;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			format = tmp5;
			HX_STACK_LINE(138)
			Dynamic();
		}
		else{
			HX_STACK_LINE(48)
			int tmp5 = ::snow::modules::openal::AL_obj::FORMAT_MONO16;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			format = tmp5;
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
	HX_STACK_LINE(53)
	int tmp3 = format;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALHelper_obj,determine_format,return )


ALHelper_obj::ALHelper_obj()
{
}

bool ALHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"determine_format") ) { outValue = determine_format_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"default_source_setup") ) { outValue = default_source_setup_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALHelper_obj::__mClass,"__mClass");
};

#endif

hx::Class ALHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("default_source_setup","\x57","\xd2","\x58","\x23"),
	HX_HCSTRING("determine_format","\xa3","\xcd","\xb6","\xf6"),
	::String(null()) };

void ALHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.openal.ALHelper","\x00","\xfa","\x7a","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALHelper_obj >;
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

} // end namespace snow
} // end namespace modules
} // end namespace openal
