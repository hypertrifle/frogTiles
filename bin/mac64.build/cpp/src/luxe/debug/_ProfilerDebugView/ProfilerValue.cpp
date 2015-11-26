#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerBar
#include <luxe/debug/_ProfilerDebugView/ProfilerBar.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerValue
#include <luxe/debug/_ProfilerDebugView/ProfilerValue.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
namespace luxe{
namespace debug{
namespace _ProfilerDebugView{

Void ProfilerValue_obj::__construct(::String _name,::luxe::debug::_ProfilerDebugView::ProfilerBar _bar)
{
HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerValue","new",0xd1df7caf,"luxe.debug._ProfilerDebugView.ProfilerValue.new","luxe/debug/ProfilerDebugView.hx",250,0xef83e3c4)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_bar,"_bar")
{
	HX_STACK_LINE(260)
	this->accum = ((Float)0);
	HX_STACK_LINE(259)
	this->count = (int)0;
	HX_STACK_LINE(258)
	this->hidden = false;
	HX_STACK_LINE(257)
	this->avg = (int)10;
	HX_STACK_LINE(255)
	this->start = ((Float)0.0);
	HX_STACK_LINE(263)
	this->name = _name;
	HX_STACK_LINE(263)
	this->bar = _bar;
	HX_STACK_LINE(264)
	this->history = Array_obj< Float >::__new();
	HX_STACK_LINE(265)
	this->offsets = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//ProfilerValue_obj::~ProfilerValue_obj() { }

Dynamic ProfilerValue_obj::__CreateEmpty() { return  new ProfilerValue_obj; }
hx::ObjectPtr< ProfilerValue_obj > ProfilerValue_obj::__new(::String _name,::luxe::debug::_ProfilerDebugView::ProfilerBar _bar)
{  hx::ObjectPtr< ProfilerValue_obj > _result_ = new ProfilerValue_obj();
	_result_->__construct(_name,_bar);
	return _result_;}

Dynamic ProfilerValue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProfilerValue_obj > _result_ = new ProfilerValue_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ProfilerValue_obj::set( ){
{
		HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerValue","set",0xd1e347f1,"luxe.debug._ProfilerDebugView.ProfilerValue.set","luxe/debug/ProfilerDebugView.hx",268,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		Float tmp2 = this->start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		Float _t = tmp3;		HX_STACK_VAR(_t,"_t");
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			Array< ::Dynamic > _g1 = this->offsets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(273)
			while((true)){
				HX_STACK_LINE(273)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				if ((tmp5)){
					HX_STACK_LINE(273)
					break;
				}
				HX_STACK_LINE(273)
				::luxe::debug::_ProfilerDebugView::ProfilerValue tmp6 = _g1->__get(_g).StaticCast< ::luxe::debug::_ProfilerDebugView::ProfilerValue >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(273)
				::luxe::debug::_ProfilerDebugView::ProfilerValue _offset = tmp6;		HX_STACK_VAR(_offset,"_offset");
				HX_STACK_LINE(273)
				++(_g);
				HX_STACK_LINE(274)
				int tmp7 = _offset->history->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(274)
				int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(274)
				Float tmp9 = _offset->history->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(274)
				hx::SubEq(_t,tmp9);
			}
		}
		HX_STACK_LINE(278)
		Float tmp4 = _t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(278)
		this->history->push(tmp4);
		HX_STACK_LINE(280)
		int tmp5 = this->history->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(280)
		int tmp6 = this->avg;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(280)
		bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		if ((tmp7)){
			HX_STACK_LINE(281)
			this->history->shift();
		}
		HX_STACK_LINE(284)
		(this->count)++;
		HX_STACK_LINE(286)
		int tmp8 = this->count;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(286)
		int tmp9 = this->avg;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(286)
		bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(286)
		if ((tmp10)){
			HX_STACK_LINE(287)
			Float tmp11 = this->accum;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(287)
			int tmp12 = this->avg;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(287)
			Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(287)
			Float __t = tmp13;		HX_STACK_VAR(__t,"__t");
			HX_STACK_LINE(288)
			::luxe::debug::_ProfilerDebugView::ProfilerBar tmp14 = this->bar;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(288)
			Float tmp15 = __t;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(288)
			tmp14->set_value(tmp15);
			HX_STACK_LINE(289)
			this->accum = (int)0;
			HX_STACK_LINE(290)
			this->count = (int)0;
		}
		HX_STACK_LINE(293)
		hx::AddEq(this->accum,_t);
		HX_STACK_LINE(295)
		::luxe::debug::_ProfilerDebugView::ProfilerBar tmp11 = this->bar;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(295)
		bool tmp12 = tmp11->visible;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(295)
		if ((tmp12)){
			HX_STACK_LINE(296)
			::luxe::debug::_ProfilerDebugView::ProfilerBar tmp13 = this->bar;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(296)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				Float tmp15 = ::Math_obj::pow((int)10,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(296)
				Float n = tmp15;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(296)
				Float tmp16 = (_t * (int)1000);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(296)
				Float tmp17 = n;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(296)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(296)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(296)
				Float tmp20 = n;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(296)
				tmp14 = (Float(tmp19) / Float(tmp20));
			}
			HX_STACK_LINE(296)
			::String tmp15 = ::Std_obj::string(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(296)
			tmp13->set_text(tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerValue_obj,set,(void))


ProfilerValue_obj::ProfilerValue_obj()
{
}

void ProfilerValue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProfilerValue);
	HX_MARK_MEMBER_NAME(offsets,"offsets");
	HX_MARK_MEMBER_NAME(bar,"bar");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(avg,"avg");
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(accum,"accum");
	HX_MARK_END_CLASS();
}

void ProfilerValue_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offsets,"offsets");
	HX_VISIT_MEMBER_NAME(bar,"bar");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(avg,"avg");
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(accum,"accum");
}

Dynamic ProfilerValue_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { return bar; }
		if (HX_FIELD_EQ(inName,"avg") ) { return avg; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		if (HX_FIELD_EQ(inName,"accum") ) { return accum; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { return hidden; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsets") ) { return offsets; }
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProfilerValue_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { bar=inValue.Cast< ::luxe::debug::_ProfilerDebugView::ProfilerBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"avg") ) { avg=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accum") ) { accum=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsets") ) { offsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProfilerValue_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ProfilerValue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("offsets","\x80","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("avg","\xd2","\x01","\x4a","\x00"));
	outFields->push(HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	outFields->push(HX_HCSTRING("accum","\xd9","\xe9","\x99","\x1b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ProfilerValue_obj,offsets),HX_HCSTRING("offsets","\x80","\x09","\x65","\xd7")},
	{hx::fsObject /*::luxe::debug::_ProfilerDebugView::ProfilerBar*/ ,(int)offsetof(ProfilerValue_obj,bar),HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00")},
	{hx::fsString,(int)offsetof(ProfilerValue_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsFloat,(int)offsetof(ProfilerValue_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ProfilerValue_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsInt,(int)offsetof(ProfilerValue_obj,avg),HX_HCSTRING("avg","\xd2","\x01","\x4a","\x00")},
	{hx::fsBool,(int)offsetof(ProfilerValue_obj,hidden),HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c")},
	{hx::fsInt,(int)offsetof(ProfilerValue_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsFloat,(int)offsetof(ProfilerValue_obj,accum),HX_HCSTRING("accum","\xd9","\xe9","\x99","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("offsets","\x80","\x09","\x65","\xd7"),
	HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("avg","\xd2","\x01","\x4a","\x00"),
	HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("accum","\xd9","\xe9","\x99","\x1b"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProfilerValue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProfilerValue_obj::__mClass,"__mClass");
};

#endif

hx::Class ProfilerValue_obj::__mClass;

void ProfilerValue_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug._ProfilerDebugView.ProfilerValue","\x3d","\xf9","\xc1","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ProfilerValue_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProfilerValue_obj >;
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

} // end namespace luxe
} // end namespace debug
} // end namespace _ProfilerDebugView
