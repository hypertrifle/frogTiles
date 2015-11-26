#include <hxcpp.h>

#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
namespace luxe{

Void Timer_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Timer","new",0xbef5cc5f,"luxe.Timer.new","luxe/Timer.hx",14,0x545f8cf2)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(15)
	this->core = _core;
	HX_STACK_LINE(16)
	this->timers = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Timer_obj::init( ){
{
		HX_STACK_FRAME("luxe.Timer","init",0x54d5be31,"luxe.Timer.init","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,init,(void))

Void Timer_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Timer","destroy",0xae6f9479,"luxe.Timer.destroy","luxe/Timer.hx",25,0x545f8cf2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->reset();
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,destroy,(void))

Void Timer_obj::process( ){
{
		HX_STACK_FRAME("luxe.Timer","process",0x7b3409ee,"luxe.Timer.process","luxe/Timer.hx",32,0x545f8cf2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,process,(void))

Void Timer_obj::reset( ){
{
		HX_STACK_FRAME("luxe.Timer","reset",0x0ee0838e,"luxe.Timer.reset","luxe/Timer.hx",37,0x545f8cf2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(39)
			Array< ::Dynamic > _g1 = this->timers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(39)
			while((true)){
				HX_STACK_LINE(39)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(39)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(39)
				if ((tmp1)){
					HX_STACK_LINE(39)
					break;
				}
				HX_STACK_LINE(39)
				::snow::api::Timer tmp2 = _g1->__get(_g).StaticCast< ::snow::api::Timer >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(39)
				::snow::api::Timer t = tmp2;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(39)
				++(_g);
				HX_STACK_LINE(40)
				t->stop();
				HX_STACK_LINE(41)
				t = null();
			}
		}
		HX_STACK_LINE(44)
		this->timers = null();
		HX_STACK_LINE(45)
		this->timers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,reset,(void))

::snow::api::Timer Timer_obj::schedule( Float _time_in_seconds,Dynamic _on_time,Dynamic __o_repeat){
Dynamic repeat = __o_repeat.Default(false);
	HX_STACK_FRAME("luxe.Timer","schedule",0xe7cff1f8,"luxe.Timer.schedule","luxe/Timer.hx",49,0x545f8cf2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_time_in_seconds,"_time_in_seconds")
	HX_STACK_ARG(_on_time,"_on_time")
	HX_STACK_ARG(repeat,"repeat")
{
		HX_STACK_LINE(49)
		::luxe::Timer _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		::snow::api::Timer tmp = ::snow::api::Timer_obj::__new(_time_in_seconds);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::snow::api::Timer t = tmp;		HX_STACK_VAR(t,"t");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,::luxe::Timer,_g,Dynamic,_on_time,Dynamic,repeat,::snow::api::Timer,t)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Timer.hx",53,0x545f8cf2)
			{
				HX_STACK_LINE(54)
				Dynamic tmp1 = repeat;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				if ((tmp2)){
					HX_STACK_LINE(55)
					t->stop();
					HX_STACK_LINE(56)
					::snow::api::Timer tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(56)
					_g->timers->remove(tmp3);
				}
				HX_STACK_LINE(58)
				_on_time().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(53)
		t->run =  Dynamic(new _Function_1_1(_g,_on_time,repeat,t));
		HX_STACK_LINE(61)
		::snow::api::Timer tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		this->timers->push(tmp1);
		HX_STACK_LINE(63)
		::snow::api::Timer tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Timer_obj,schedule,return )


Timer_obj::Timer_obj()
{
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(timers,"timers");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(timers,"timers");
}

Dynamic Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"timers") ) { return timers; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"schedule") ) { return schedule_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"timers") ) { timers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Timer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("timers","\x0e","\x0d","\xd2","\x1e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Timer_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Timer_obj,timers),HX_HCSTRING("timers","\x0e","\x0d","\xd2","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("timers","\x0e","\x0d","\xd2","\x1e"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("schedule","\x57","\xca","\x7e","\xc5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

hx::Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Timer","\xed","\xb0","\x2a","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Timer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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

} // end namespace luxe
