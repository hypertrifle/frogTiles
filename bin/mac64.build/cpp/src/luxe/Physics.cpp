#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
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

Void Physics_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Physics","new",0x78e08861,"luxe.Physics.new","luxe/Physics.hx",17,0xe794c970)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(34)
	this->step_delta = ((Float)0.0166666666666666664);
	HX_STACK_LINE(32)
	this->step_rate = ((Float)0.0166666666666666664);
	HX_STACK_LINE(41)
	this->core = _core;
}
;
	return null();
}

//Physics_obj::~Physics_obj() { }

Dynamic Physics_obj::__CreateEmpty() { return  new Physics_obj; }
hx::ObjectPtr< Physics_obj > Physics_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Physics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Physics_obj > _result_ = new Physics_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Physics_obj::init( ){
{
		HX_STACK_FRAME("luxe.Physics","init",0x484f83ef,"luxe.Physics.init","luxe/Physics.hx",47,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->engines = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,init,(void))

Void Physics_obj::reset( ){
{
		HX_STACK_FRAME("luxe.Physics","reset",0x25f3c410,"luxe.Physics.reset","luxe/Physics.hx",59,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::snow::api::Timer tmp = this->timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		if ((tmp1)){
			HX_STACK_LINE(63)
			::snow::api::Timer tmp2 = this->timer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			tmp2->stop();
			HX_STACK_LINE(64)
			this->timer = null();
		}
		HX_STACK_LINE(67)
		Float tmp2 = this->step_rate;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		if ((tmp3)){
			HX_STACK_LINE(70)
			::luxe::Timer tmp4 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			Float tmp5 = this->step_rate;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			Dynamic tmp6 = this->fixed_update_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			::snow::api::Timer tmp7 = tmp4->schedule(tmp5,tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			this->timer = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,reset,(void))

Void Physics_obj::fixed_update( ){
{
		HX_STACK_FRAME("luxe.Physics","fixed_update",0x133e3493,"luxe.Physics.fixed_update","luxe/Physics.hx",79,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::String tmp1 = ::luxe::Physics_obj::tag_physics;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		tmp->start(tmp1,null());
		HX_STACK_LINE(83)
		this->update();
		HX_STACK_LINE(85)
		::luxe::Debug tmp2 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::String tmp3 = ::luxe::Physics_obj::tag_physics;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		tmp2->end(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,fixed_update,(void))

Dynamic Physics_obj::add_engine( ::hx::Class type,Dynamic _data){
	HX_STACK_FRAME("luxe.Physics","add_engine",0x7161177f,"luxe.Physics.add_engine","luxe/Physics.hx",90,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_LINE(92)
	::hx::Class tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	Dynamic tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new().Add(_data));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	Dynamic _engine_instance = tmp1;		HX_STACK_VAR(_engine_instance,"_engine_instance");
	HX_STACK_LINE(93)
	::luxe::PhysicsEngine _physics_engine = ((::luxe::PhysicsEngine)(_engine_instance));		HX_STACK_VAR(_physics_engine,"_physics_engine");
	HX_STACK_LINE(96)
	_physics_engine->init();
	HX_STACK_LINE(99)
	::luxe::PhysicsEngine tmp2 = _physics_engine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	this->engines->push(tmp2);
	HX_STACK_LINE(102)
	Dynamic tmp3 = _engine_instance;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Physics_obj,add_engine,return )

Void Physics_obj::update( ){
{
		HX_STACK_FRAME("luxe.Physics","update",0x8de504a8,"luxe.Physics.update","luxe/Physics.hx",108,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		Array< ::Dynamic > _g1 = this->engines;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(108)
		while((true)){
			HX_STACK_LINE(108)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(108)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			if ((tmp1)){
				HX_STACK_LINE(108)
				break;
			}
			HX_STACK_LINE(108)
			::luxe::PhysicsEngine tmp2 = _g1->__get(_g).StaticCast< ::luxe::PhysicsEngine >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			::luxe::PhysicsEngine engine = tmp2;		HX_STACK_VAR(engine,"engine");
			HX_STACK_LINE(108)
			++(_g);
			HX_STACK_LINE(109)
			engine->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,update,(void))

Void Physics_obj::process( ){
{
		HX_STACK_FRAME("luxe.Physics","process",0xedf9eef0,"luxe.Physics.process","luxe/Physics.hx",114,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(114)
		Array< ::Dynamic > _g1 = this->engines;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(114)
		while((true)){
			HX_STACK_LINE(114)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(114)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(114)
			if ((tmp1)){
				HX_STACK_LINE(114)
				break;
			}
			HX_STACK_LINE(114)
			::luxe::PhysicsEngine tmp2 = _g1->__get(_g).StaticCast< ::luxe::PhysicsEngine >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			::luxe::PhysicsEngine engine = tmp2;		HX_STACK_VAR(engine,"engine");
			HX_STACK_LINE(114)
			++(_g);
			HX_STACK_LINE(115)
			engine->process();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,process,(void))

Void Physics_obj::render( ){
{
		HX_STACK_FRAME("luxe.Physics","render",0x0c08e9f5,"luxe.Physics.render","luxe/Physics.hx",120,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		Array< ::Dynamic > _g1 = this->engines;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(120)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(120)
			if ((tmp1)){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			::luxe::PhysicsEngine tmp2 = _g1->__get(_g).StaticCast< ::luxe::PhysicsEngine >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			::luxe::PhysicsEngine engine = tmp2;		HX_STACK_VAR(engine,"engine");
			HX_STACK_LINE(120)
			++(_g);
			HX_STACK_LINE(121)
			engine->render();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,render,(void))

Void Physics_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Physics","destroy",0x2135797b,"luxe.Physics.destroy","luxe/Physics.hx",125,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		::snow::api::Timer tmp = this->timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		if ((tmp1)){
			HX_STACK_LINE(128)
			::snow::api::Timer tmp2 = this->timer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			tmp2->stop();
		}
		HX_STACK_LINE(131)
		this->timer = null();
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			Array< ::Dynamic > _g1 = this->engines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(133)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(133)
				if ((tmp3)){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				::luxe::PhysicsEngine tmp4 = _g1->__get(_g).StaticCast< ::luxe::PhysicsEngine >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(133)
				::luxe::PhysicsEngine engine = tmp4;		HX_STACK_VAR(engine,"engine");
				HX_STACK_LINE(133)
				++(_g);
				HX_STACK_LINE(134)
				engine->destroy();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Physics_obj,destroy,(void))

Float Physics_obj::set_step_rate( Float _rate){
	HX_STACK_FRAME("luxe.Physics","set_step_rate",0x5fde6d17,"luxe.Physics.set_step_rate","luxe/Physics.hx",140,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rate,"_rate")
	HX_STACK_LINE(143)
	this->step_rate = _rate;
	HX_STACK_LINE(144)
	Float tmp = this->step_rate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	this->step_delta = tmp;
	HX_STACK_LINE(147)
	this->reset();
	HX_STACK_LINE(149)
	Float tmp1 = this->step_rate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Physics_obj,set_step_rate,return )

::String Physics_obj::tag_physics;


Physics_obj::Physics_obj()
{
}

void Physics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Physics);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(engines,"engines");
	HX_MARK_MEMBER_NAME(step_rate,"step_rate");
	HX_MARK_MEMBER_NAME(step_delta,"step_delta");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void Physics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(engines,"engines");
	HX_VISIT_MEMBER_NAME(step_rate,"step_rate");
	HX_VISIT_MEMBER_NAME(step_delta,"step_delta");
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

Dynamic Physics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"engines") ) { return engines; }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"step_rate") ) { return step_rate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"step_delta") ) { return step_delta; }
		if (HX_FIELD_EQ(inName,"add_engine") ) { return add_engine_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fixed_update") ) { return fixed_update_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_step_rate") ) { return set_step_rate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Physics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"tag_physics") ) { outValue = tag_physics; return true;  }
	}
	return false;
}

Dynamic Physics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::snow::api::Timer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"engines") ) { engines=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"step_rate") ) { if (inCallProp == hx::paccAlways) return set_step_rate(inValue);step_rate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"step_delta") ) { step_delta=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Physics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"tag_physics") ) { tag_physics=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Physics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("engines","\x71","\x82","\x3a","\xf7"));
	outFields->push(HX_HCSTRING("step_rate","\xf3","\x93","\xf3","\xdb"));
	outFields->push(HX_HCSTRING("step_delta","\x85","\x97","\x30","\x8c"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Physics_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Physics_obj,engines),HX_HCSTRING("engines","\x71","\x82","\x3a","\xf7")},
	{hx::fsFloat,(int)offsetof(Physics_obj,step_rate),HX_HCSTRING("step_rate","\xf3","\x93","\xf3","\xdb")},
	{hx::fsFloat,(int)offsetof(Physics_obj,step_delta),HX_HCSTRING("step_delta","\x85","\x97","\x30","\x8c")},
	{hx::fsObject /*::snow::api::Timer*/ ,(int)offsetof(Physics_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Physics_obj::tag_physics,HX_HCSTRING("tag_physics","\xa2","\xd6","\x2a","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("engines","\x71","\x82","\x3a","\xf7"),
	HX_HCSTRING("step_rate","\xf3","\x93","\xf3","\xdb"),
	HX_HCSTRING("step_delta","\x85","\x97","\x30","\x8c"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("fixed_update","\xb4","\x74","\xd7","\xb6"),
	HX_HCSTRING("add_engine","\x60","\x5d","\x34","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_step_rate","\xd6","\x49","\x5d","\xe2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Physics_obj::tag_physics,"tag_physics");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Physics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Physics_obj::tag_physics,"tag_physics");
};

#endif

hx::Class Physics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tag_physics","\xa2","\xd6","\x2a","\x18"),
	::String(null()) };

void Physics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Physics","\xef","\xc3","\x42","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Physics_obj::__GetStatic;
	__mClass->mSetStaticField = &Physics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Physics_obj >;
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

void Physics_obj::__boot()
{
	tag_physics= HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe");
}

} // end namespace luxe
