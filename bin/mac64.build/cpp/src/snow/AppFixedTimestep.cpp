#include <hxcpp.h>

#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_AppFixedTimestep
#include <snow/AppFixedTimestep.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
namespace snow{

Void AppFixedTimestep_obj::__construct()
{
HX_STACK_FRAME("snow.AppFixedTimestep","new",0x0797a4e9,"snow.AppFixedTimestep.new","snow/App.hx",181,0xf7b8a629)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(186)
	this->overflow = ((Float)0.0);
	HX_STACK_LINE(184)
	this->frame_time = ((Float)0.0167);
	HX_STACK_LINE(181)
	super::__construct();
}
;
	return null();
}

//AppFixedTimestep_obj::~AppFixedTimestep_obj() { }

Dynamic AppFixedTimestep_obj::__CreateEmpty() { return  new AppFixedTimestep_obj; }
hx::ObjectPtr< AppFixedTimestep_obj > AppFixedTimestep_obj::__new()
{  hx::ObjectPtr< AppFixedTimestep_obj > _result_ = new AppFixedTimestep_obj();
	_result_->__construct();
	return _result_;}

Dynamic AppFixedTimestep_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppFixedTimestep_obj > _result_ = new AppFixedTimestep_obj();
	_result_->__construct();
	return _result_;}

Void AppFixedTimestep_obj::on_internal_init( ){
{
		HX_STACK_FRAME("snow.AppFixedTimestep","on_internal_init",0x4d814609,"snow.AppFixedTimestep.on_internal_init","snow/App.hx",189,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		this->super::on_internal_init();
		HX_STACK_LINE(193)
		Float tmp = ((Float)0.0166666666666666664);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		this->frame_time = tmp;
		HX_STACK_LINE(194)
		::snow::core::native::Core tmp1 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		Float tmp2 = tmp1->timestamp();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		this->last_frame_start = tmp2;
	}
return null();
}


Void AppFixedTimestep_obj::on_internal_update( ){
{
		HX_STACK_FRAME("snow.AppFixedTimestep","on_internal_update",0x949f0142,"snow.AppFixedTimestep.on_internal_update","snow/App.hx",201,0xf7b8a629)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(203)
		this->cur_frame_start = tmp1;
		HX_STACK_LINE(204)
		Float tmp2 = this->cur_frame_start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		Float tmp3 = this->last_frame_start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		this->delta_time = tmp4;
		HX_STACK_LINE(205)
		Float tmp5 = this->delta_time;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		Float tmp6 = this->timescale;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(205)
		this->delta_sim = tmp7;
		HX_STACK_LINE(207)
		Float tmp8 = this->delta_sim;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		Float tmp9 = this->max_frame_time;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(207)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(207)
		if ((tmp10)){
			HX_STACK_LINE(208)
			Float tmp11 = this->max_frame_time;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(208)
			this->delta_sim = tmp11;
		}
		HX_STACK_LINE(211)
		Float tmp11 = this->cur_frame_start;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		this->last_frame_start = tmp11;
		HX_STACK_LINE(213)
		Float tmp12 = this->delta_sim;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(213)
		hx::AddEq(this->overflow,tmp12);
		HX_STACK_LINE(215)
		while((true)){
			HX_STACK_LINE(215)
			Float tmp13 = this->overflow;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(215)
			Float tmp14 = this->frame_time;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(215)
			bool tmp15 = (tmp13 >= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(215)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(215)
			if ((tmp16)){
				HX_STACK_LINE(215)
				break;
			}
			HX_STACK_LINE(217)
			::snow::Snow tmp17 = this->app;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(217)
			Float tmp18 = this->frame_time;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(217)
			Float tmp19 = this->timescale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(217)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(217)
			tmp17->do_internal_update(tmp20);
			HX_STACK_LINE(219)
			Float tmp21 = this->frame_time;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(219)
			Float tmp22 = this->timescale;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(219)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(219)
			hx::AddEq(this->current_time,tmp23);
			HX_STACK_LINE(221)
			Float tmp24 = this->frame_time;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(221)
			Float tmp25 = this->timescale;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(221)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(221)
			hx::SubEq(this->overflow,tmp26);
		}
		HX_STACK_LINE(226)
		Float tmp13 = this->overflow;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(226)
		Float tmp14 = this->frame_time;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(226)
		Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(226)
		this->alpha = tmp15;
	}
return null();
}



AppFixedTimestep_obj::AppFixedTimestep_obj()
{
}

Dynamic AppFixedTimestep_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overflow") ) { return overflow; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frame_time") ) { return frame_time; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"on_internal_init") ) { return on_internal_init_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"on_internal_update") ) { return on_internal_update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppFixedTimestep_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overflow") ) { overflow=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frame_time") ) { frame_time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AppFixedTimestep_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AppFixedTimestep_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frame_time","\x9f","\xac","\x06","\x50"));
	outFields->push(HX_HCSTRING("overflow","\x42","\xe3","\x3b","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AppFixedTimestep_obj,frame_time),HX_HCSTRING("frame_time","\x9f","\xac","\x06","\x50")},
	{hx::fsFloat,(int)offsetof(AppFixedTimestep_obj,overflow),HX_HCSTRING("overflow","\x42","\xe3","\x3b","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frame_time","\x9f","\xac","\x06","\x50"),
	HX_HCSTRING("overflow","\x42","\xe3","\x3b","\x41"),
	HX_HCSTRING("on_internal_init","\x32","\xfc","\xd7","\x2a"),
	HX_HCSTRING("on_internal_update","\xab","\x53","\xae","\x7d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppFixedTimestep_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppFixedTimestep_obj::__mClass,"__mClass");
};

#endif

hx::Class AppFixedTimestep_obj::__mClass;

void AppFixedTimestep_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.AppFixedTimestep","\x77","\xfc","\xfe","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AppFixedTimestep_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AppFixedTimestep_obj >;
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
