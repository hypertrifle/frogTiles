#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_PhysicsEngine
#include <luxe/PhysicsEngine.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{

Void PhysicsEngine_obj::__construct()
{
HX_STACK_FRAME("luxe.PhysicsEngine","new",0x3df79a83,"luxe.PhysicsEngine.new","luxe/Physics.hx",160,0xe794c970)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(166)
	this->draw = true;
	HX_STACK_LINE(164)
	this->paused = false;
	HX_STACK_LINE(162)
	this->name = HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc");
	HX_STACK_LINE(170)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new((int)0,((Float)-9.8),(int)0,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	this->set_gravity(tmp);
	HX_STACK_LINE(171)
	Dynamic tmp1 = this->_render_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	::Luxe_obj::on((int)10,tmp1);
}
;
	return null();
}

//PhysicsEngine_obj::~PhysicsEngine_obj() { }

Dynamic PhysicsEngine_obj::__CreateEmpty() { return  new PhysicsEngine_obj; }
hx::ObjectPtr< PhysicsEngine_obj > PhysicsEngine_obj::__new()
{  hx::ObjectPtr< PhysicsEngine_obj > _result_ = new PhysicsEngine_obj();
	_result_->__construct();
	return _result_;}

Dynamic PhysicsEngine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicsEngine_obj > _result_ = new PhysicsEngine_obj();
	_result_->__construct();
	return _result_;}

Void PhysicsEngine_obj::init( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","init",0xf7684f8d,"luxe.PhysicsEngine.init","luxe/Physics.hx",175,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,init,(void))

Void PhysicsEngine_obj::_render( Dynamic _){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","_render",0xd6f79498,"luxe.PhysicsEngine._render","luxe/Physics.hx",181,0xe794c970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(181)
		this->render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsEngine_obj,_render,(void))

Void PhysicsEngine_obj::process( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","process",0x54a1ba12,"luxe.PhysicsEngine.process","luxe/Physics.hx",185,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,process,(void))

Void PhysicsEngine_obj::update( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","update",0xcd7e73c6,"luxe.PhysicsEngine.update","luxe/Physics.hx",189,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,update,(void))

Void PhysicsEngine_obj::render( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","render",0x4ba25913,"luxe.PhysicsEngine.render","luxe/Physics.hx",193,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,render,(void))

Void PhysicsEngine_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.PhysicsEngine","destroy",0x87dd449d,"luxe.PhysicsEngine.destroy","luxe/Physics.hx",197,0xe794c970)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,destroy,(void))

bool PhysicsEngine_obj::get_paused( ){
	HX_STACK_FRAME("luxe.PhysicsEngine","get_paused",0x8cbac0b4,"luxe.PhysicsEngine.get_paused","luxe/Physics.hx",203,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,get_paused,return )

bool PhysicsEngine_obj::set_paused( Dynamic _pause){
	HX_STACK_FRAME("luxe.PhysicsEngine","set_paused",0x90385f28,"luxe.PhysicsEngine.set_paused","luxe/Physics.hx",209,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pause,"_pause")
	HX_STACK_LINE(211)
	bool tmp = this->paused = _pause;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsEngine_obj,set_paused,return )

bool PhysicsEngine_obj::get_draw( ){
	HX_STACK_FRAME("luxe.PhysicsEngine","get_draw",0x4b087e8a,"luxe.PhysicsEngine.get_draw","luxe/Physics.hx",215,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	bool tmp = this->draw;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,get_draw,return )

bool PhysicsEngine_obj::set_draw( bool _draw){
	HX_STACK_FRAME("luxe.PhysicsEngine","set_draw",0xf965d7fe,"luxe.PhysicsEngine.set_draw","luxe/Physics.hx",221,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_draw,"_draw")
	HX_STACK_LINE(223)
	bool tmp = this->draw = _draw;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsEngine_obj,set_draw,return )

::phoenix::Vector PhysicsEngine_obj::get_gravity( ){
	HX_STACK_FRAME("luxe.PhysicsEngine","get_gravity",0x6a78f388,"luxe.PhysicsEngine.get_gravity","luxe/Physics.hx",227,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	::phoenix::Vector tmp = this->gravity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsEngine_obj,get_gravity,return )

::phoenix::Vector PhysicsEngine_obj::set_gravity( ::phoenix::Vector _gravity){
	HX_STACK_FRAME("luxe.PhysicsEngine","set_gravity",0x74e5fa94,"luxe.PhysicsEngine.set_gravity","luxe/Physics.hx",233,0xe794c970)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_gravity,"_gravity")
	HX_STACK_LINE(235)
	::phoenix::Vector tmp = this->gravity = _gravity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PhysicsEngine_obj,set_gravity,return )


PhysicsEngine_obj::PhysicsEngine_obj()
{
}

void PhysicsEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsEngine);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(draw,"draw");
	HX_MARK_END_CLASS();
}

void PhysicsEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(draw,"draw");
}

Dynamic PhysicsEngine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"draw") ) { return inCallProp == hx::paccAlways ? get_draw() : draw; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return inCallProp == hx::paccAlways ? get_paused() : paused; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return inCallProp == hx::paccAlways ? get_gravity() : gravity; }
		if (HX_FIELD_EQ(inName,"_render") ) { return _render_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_draw") ) { return get_draw_dyn(); }
		if (HX_FIELD_EQ(inName,"set_draw") ) { return set_draw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicsEngine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw") ) { if (inCallProp == hx::paccAlways) return set_draw(inValue);draw=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == hx::paccAlways) return set_paused(inValue);paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp == hx::paccAlways) return set_gravity(inValue);gravity=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PhysicsEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PhysicsEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"));
	outFields->push(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(PhysicsEngine_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsBool,(int)offsetof(PhysicsEngine_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(PhysicsEngine_obj,gravity),HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77")},
	{hx::fsBool,(int)offsetof(PhysicsEngine_obj,draw),HX_HCSTRING("draw","\x04","\x2c","\x70","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("_render","\xf5","\x7c","\xa0","\x73"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_paused","\x77","\xb0","\x0b","\xe0"),
	HX_HCSTRING("set_paused","\xeb","\x4e","\x89","\xe3"),
	HX_HCSTRING("get_draw","\x8d","\xe7","\x2a","\xc2"),
	HX_HCSTRING("set_draw","\x01","\x41","\x88","\x70"),
	HX_HCSTRING("get_gravity","\x65","\xce","\xf9","\xfd"),
	HX_HCSTRING("set_gravity","\x71","\xd5","\x66","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsEngine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsEngine_obj::__mClass,"__mClass");
};

#endif

hx::Class PhysicsEngine_obj::__mClass;

void PhysicsEngine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.PhysicsEngine","\x11","\x9d","\xd9","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PhysicsEngine_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PhysicsEngine_obj >;
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
