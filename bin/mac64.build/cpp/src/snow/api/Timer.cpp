#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
namespace snow{
namespace api{

Void Timer_obj::__construct(Float _time)
{
HX_STACK_FRAME("snow.api.Timer","new",0x41f1af18,"snow.api.Timer.new","snow/api/Timer.hx",15,0x0ea8a1da)
HX_STACK_THIS(this)
HX_STACK_ARG(_time,"_time")
{
	HX_STACK_LINE(17)
	this->time = _time;
	HX_STACK_LINE(18)
	::snow::api::Timer_obj::running_timers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(19)
	::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	Float tmp2 = this->time;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	this->fire_at = tmp3;
	HX_STACK_LINE(20)
	this->running = true;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float _time)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(_time);
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_FRAME("snow.api.Timer","run",0x41f4c603,"snow.api.Timer.run","snow/api/Timer.hx",32,0x0ea8a1da)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Void Timer_obj::stop( ){
{
		HX_STACK_FRAME("snow.api.Timer","stop",0x74e0f24a,"snow.api.Timer.stop","snow/api/Timer.hx",34,0x0ea8a1da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		bool tmp = this->running;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		if ((tmp)){
			HX_STACK_LINE(37)
			this->running = false;
			HX_STACK_LINE(38)
			::snow::api::Timer_obj::running_timers->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Array< ::Dynamic > Timer_obj::running_timers;

Dynamic Timer_obj::measure( Dynamic f,Dynamic pos){
	HX_STACK_FRAME("snow.api.Timer","measure",0xf7899616,"snow.api.Timer.measure","snow/api/Timer.hx",24,0x0ea8a1da)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(25)
	::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	Float t0 = tmp1;		HX_STACK_VAR(t0,"t0");
	HX_STACK_LINE(26)
	Dynamic tmp2 = f();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	Dynamic r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(27)
	::snow::core::native::Core tmp3 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	Float tmp4 = tmp3->timestamp();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	Float tmp5 = t0;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	::String tmp7 = (tmp6 + HX_HCSTRING("s","\x73","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(27)
	Dynamic tmp8 = pos;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	::haxe::Log_obj::trace(tmp7,tmp8);
	HX_STACK_LINE(28)
	Dynamic tmp9 = r;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(28)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Void Timer_obj::update( ){
{
		HX_STACK_FRAME("snow.api.Timer","update",0x9c85aa51,"snow.api.Timer.update","snow/api/Timer.hx",44,0x0ea8a1da)
		HX_STACK_LINE(46)
		::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		Float now = tmp1;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			Array< ::Dynamic > _g1 = ::snow::api::Timer_obj::running_timers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(48)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(48)
				if ((tmp3)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				::snow::api::Timer tmp4 = _g1->__get(_g).StaticCast< ::snow::api::Timer >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				::snow::api::Timer timer = tmp4;		HX_STACK_VAR(timer,"timer");
				HX_STACK_LINE(48)
				++(_g);
				HX_STACK_LINE(49)
				bool tmp5 = timer->running;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(49)
				if ((tmp5)){
					HX_STACK_LINE(50)
					bool tmp6 = (timer->fire_at < now);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(50)
					if ((tmp6)){
						HX_STACK_LINE(51)
						hx::AddEq(timer->fire_at,timer->time);
						HX_STACK_LINE(52)
						timer->run();
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,update,(void))

::snow::api::Timer Timer_obj::delay( Float _time,Dynamic _f){
	HX_STACK_FRAME("snow.api.Timer","delay",0x2303d43b,"snow.api.Timer.delay","snow/api/Timer.hx",60,0x0ea8a1da)
	HX_STACK_ARG(_time,"_time")
	HX_STACK_ARG(_f,"_f")
	HX_STACK_LINE(62)
	::snow::api::Timer tmp = ::snow::api::Timer_obj::__new(_time);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::snow::api::Timer t = tmp;		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,_f,::snow::api::Timer,t)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Timer.hx",63,0x0ea8a1da)
		{
			HX_STACK_LINE(64)
			t->stop();
			HX_STACK_LINE(65)
			_f().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(63)
	t->run =  Dynamic(new _Function_1_1(_f,t));
	HX_STACK_LINE(68)
	::snow::api::Timer tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(fire_at,"fire_at");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(fire_at,"fire_at");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(run,"run");
}

Dynamic Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fire_at") ) { return fire_at; }
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
	}
	return super::__Field(inName,inCallProp);
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { outValue = measure_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"running_timers") ) { outValue = running_timers; return true;  }
	}
	return false;
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fire_at") ) { fire_at=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Timer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"running_timers") ) { running_timers=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("fire_at","\x1c","\x4d","\xbf","\x73"));
	outFields->push(HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Timer_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsFloat,(int)offsetof(Timer_obj,fire_at),HX_HCSTRING("fire_at","\x1c","\x4d","\xbf","\x73")},
	{hx::fsBool,(int)offsetof(Timer_obj,running),HX_HCSTRING("running","\xff","\x6d","\x69","\xeb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,run),HX_HCSTRING("run","\x4b","\xe7","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Timer_obj::running_timers,HX_HCSTRING("running_timers","\x8e","\xfe","\xd6","\x44")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("fire_at","\x1c","\x4d","\xbf","\x73"),
	HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Timer_obj::running_timers,"running_timers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Timer_obj::running_timers,"running_timers");
};

#endif

hx::Class Timer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("running_timers","\x8e","\xfe","\xd6","\x44"),
	HX_HCSTRING("measure","\x5e","\xfb","\xe9","\x3c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	::String(null()) };

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.Timer","\x26","\x83","\xfe","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &Timer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
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

void Timer_obj::__boot()
{
	running_timers= Array_obj< ::Dynamic >::__new();
}

} // end namespace snow
} // end namespace api
