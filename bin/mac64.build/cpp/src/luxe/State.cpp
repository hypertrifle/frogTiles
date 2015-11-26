#include <hxcpp.h>

#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_State
#include <luxe/State.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
namespace luxe{

Void State_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.State","new",0xf15298ab,"luxe.State.new","luxe/States.hx",15,0xdf083bc3)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(20)
	this->inited = false;
	HX_STACK_LINE(19)
	this->enabled = false;
	HX_STACK_LINE(18)
	this->active = false;
	HX_STACK_LINE(24)
	::String tmp = _options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	super::__construct(tmp,null());
}
;
	return null();
}

//State_obj::~State_obj() { }

Dynamic State_obj::__CreateEmpty() { return  new State_obj; }
hx::ObjectPtr< State_obj > State_obj::__new(Dynamic _options)
{  hx::ObjectPtr< State_obj > _result_ = new State_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic State_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< State_obj > _result_ = new State_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void State_obj::enable( Dynamic _enable_with){
{
		HX_STACK_FRAME("luxe.State","enable",0x9e88e718,"luxe.State.enable","luxe/States.hx",28,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enable_with,"_enable_with")
		HX_STACK_LINE(30)
		::luxe::States tmp = this->machine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Dynamic tmp2 = _enable_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		tmp->enable(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,enable,(void))

Void State_obj::disable( Dynamic _disable_with){
{
		HX_STACK_FRAME("luxe.State","disable",0x4c68b3b3,"luxe.State.disable","luxe/States.hx",34,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_disable_with,"_disable_with")
		HX_STACK_LINE(36)
		::luxe::States tmp = this->machine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		Dynamic tmp2 = _disable_with;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		tmp->disable(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,disable,(void))

Void State_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.State","destroy",0xbf9676c5,"luxe.State.destroy","luxe/States.hx",40,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::luxe::States tmp = this->machine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		tmp->kill(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,destroy,(void))

Void State_obj::init( ){
{
		HX_STACK_FRAME("luxe.State","init",0x33abb465,"luxe.State.init","luxe/States.hx",47,0xdf083bc3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,init,(void))

Void State_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.State","update",0x2d06be9e,"luxe.State.update","luxe/States.hx",48,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,update,(void))

Void State_obj::onfixedupdate( ){
{
		HX_STACK_FRAME("luxe.State","onfixedupdate",0xcccbc7c9,"luxe.State.onfixedupdate","luxe/States.hx",50,0xdf083bc3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,onfixedupdate,(void))

Void State_obj::onleave( Dynamic d){
{
		HX_STACK_FRAME("luxe.State","onleave",0x1073ad43,"luxe.State.onleave","luxe/States.hx",53,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onleave,(void))

Void State_obj::onenter( Dynamic d){
{
		HX_STACK_FRAME("luxe.State","onenter",0x0ea6e564,"luxe.State.onenter","luxe/States.hx",54,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onenter,(void))

Void State_obj::onenabled( Dynamic d){
{
		HX_STACK_FRAME("luxe.State","onenabled",0x3f9927cd,"luxe.State.onenabled","luxe/States.hx",55,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onenabled,(void))

Void State_obj::ondisabled( Dynamic d){
{
		HX_STACK_FRAME("luxe.State","ondisabled",0xf5bb00b0,"luxe.State.ondisabled","luxe/States.hx",56,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,ondisabled,(void))

Void State_obj::onadded( ){
{
		HX_STACK_FRAME("luxe.State","onadded",0xba644d0c,"luxe.State.onadded","luxe/States.hx",57,0xdf083bc3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,onadded,(void))

Void State_obj::onremoved( ){
{
		HX_STACK_FRAME("luxe.State","onremoved",0xb46842ec,"luxe.State.onremoved","luxe/States.hx",58,0xdf083bc3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,onremoved,(void))

Void State_obj::onrender( ){
{
		HX_STACK_FRAME("luxe.State","onrender",0xc372358a,"luxe.State.onrender","luxe/States.hx",60,0xdf083bc3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,onrender,(void))

Void State_obj::onprerender( ){
{
		HX_STACK_FRAME("luxe.State","onprerender",0x35669605,"luxe.State.onprerender","luxe/States.hx",61,0xdf083bc3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,onprerender,(void))

Void State_obj::onpostrender( ){
{
		HX_STACK_FRAME("luxe.State","onpostrender",0x8a196bea,"luxe.State.onpostrender","luxe/States.hx",62,0xdf083bc3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,onpostrender,(void))

Void State_obj::onreset( ){
{
		HX_STACK_FRAME("luxe.State","onreset",0x84e8c21b,"luxe.State.onreset","luxe/States.hx",65,0xdf083bc3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,onreset,(void))

Void State_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.State","ondestroy",0xe5ee5046,"luxe.State.ondestroy","luxe/States.hx",66,0xdf083bc3)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,ondestroy,(void))

Void State_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onkeyup",0x7d1f4e06,"luxe.State.onkeyup","luxe/States.hx",69,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onkeyup,(void))

Void State_obj::onkeydown( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onkeydown",0x72d660cd,"luxe.State.onkeydown","luxe/States.hx",70,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onkeydown,(void))

Void State_obj::ontextinput( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","ontextinput",0xca0e7289,"luxe.State.ontextinput","luxe/States.hx",71,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,ontextinput,(void))

Void State_obj::oninputdown( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.State","oninputdown",0x24f017b8,"luxe.State.oninputdown","luxe/States.hx",73,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(State_obj,oninputdown,(void))

Void State_obj::oninputup( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.State","oninputup",0x9586e431,"luxe.State.oninputup","luxe/States.hx",74,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(State_obj,oninputup,(void))

Void State_obj::onmousedown( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onmousedown",0x0a1a1353,"luxe.State.onmousedown","luxe/States.hx",76,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onmousedown,(void))

Void State_obj::onmouseup( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onmouseup",0x81db330c,"luxe.State.onmouseup","luxe/States.hx",77,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onmouseup,(void))

Void State_obj::onmousemove( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onmousemove",0x100cfe02,"luxe.State.onmousemove","luxe/States.hx",78,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onmousemove,(void))

Void State_obj::onmousewheel( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onmousewheel",0xb8a5ac8a,"luxe.State.onmousewheel","luxe/States.hx",79,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onmousewheel,(void))

Void State_obj::ontouchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","ontouchdown",0x2331e9ed,"luxe.State.ontouchdown","luxe/States.hx",81,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,ontouchdown,(void))

Void State_obj::ontouchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","ontouchup",0x9a604f26,"luxe.State.ontouchup","luxe/States.hx",82,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,ontouchup,(void))

Void State_obj::ontouchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","ontouchmove",0x2924d49c,"luxe.State.ontouchmove","luxe/States.hx",83,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,ontouchmove,(void))

Void State_obj::ongamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","ongamepadup",0x6568ff88,"luxe.State.ongamepadup","luxe/States.hx",85,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,ongamepadup,(void))

Void State_obj::ongamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","ongamepaddown",0x4610f6cf,"luxe.State.ongamepaddown","luxe/States.hx",86,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,ongamepaddown,(void))

Void State_obj::ongamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","ongamepadaxis",0x441c1b0e,"luxe.State.ongamepadaxis","luxe/States.hx",87,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,ongamepadaxis,(void))

Void State_obj::ongamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","ongamepaddevice",0xe2a91043,"luxe.State.ongamepaddevice","luxe/States.hx",88,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,ongamepaddevice,(void))

Void State_obj::onwindowmoved( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onwindowmoved",0xc834ab8f,"luxe.State.onwindowmoved","luxe/States.hx",90,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onwindowmoved,(void))

Void State_obj::onwindowresized( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onwindowresized",0xd83dca4c,"luxe.State.onwindowresized","luxe/States.hx",91,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onwindowresized,(void))

Void State_obj::onwindowsized( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onwindowsized",0x38a7e7df,"luxe.State.onwindowsized","luxe/States.hx",92,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onwindowsized,(void))

Void State_obj::onwindowminimized( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onwindowminimized",0x37a5b8e2,"luxe.State.onwindowminimized","luxe/States.hx",93,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onwindowminimized,(void))

Void State_obj::onwindowrestored( Dynamic event){
{
		HX_STACK_FRAME("luxe.State","onwindowrestored",0xac001f7a,"luxe.State.onwindowrestored","luxe/States.hx",94,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,onwindowrestored,(void))

Void State_obj::_init( ){
{
		HX_STACK_FRAME("luxe.State","_init",0x3d4607fa,"luxe.State._init","luxe/States.hx",99,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		if ((tmp1)){
			HX_STACK_LINE(101)
			this->inited = true;
			HX_STACK_LINE(102)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,_init,(void))


State_obj::State_obj()
{
}

void State_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(State);
	HX_MARK_MEMBER_NAME(machine,"machine");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(inited,"inited");
	::luxe::ID_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void State_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(machine,"machine");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	::luxe::ID_obj::__Visit(HX_VISIT_ARG);
}

Dynamic State_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_init") ) { return _init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"machine") ) { return machine; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onleave") ) { return onleave_dyn(); }
		if (HX_FIELD_EQ(inName,"onenter") ) { return onenter_dyn(); }
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onrender") ) { return onrender_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onenabled") ) { return onenabled_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ondisabled") ) { return ondisabled_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onprerender") ) { return onprerender_dyn(); }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onpostrender") ) { return onpostrender_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onfixedupdate") ) { return onfixedupdate_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowmoved") ) { return onwindowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowresized") ) { return onwindowresized_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onwindowrestored") ) { return onwindowrestored_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onwindowminimized") ) { return onwindowminimized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic State_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"machine") ) { machine=inValue.Cast< ::luxe::States >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool State_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void State_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("machine","\x87","\x3b","\xfb","\xc2"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::States*/ ,(int)offsetof(State_obj,machine),HX_HCSTRING("machine","\x87","\x3b","\xfb","\xc2")},
	{hx::fsBool,(int)offsetof(State_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(State_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsBool,(int)offsetof(State_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("machine","\x87","\x3b","\xfb","\xc2"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onfixedupdate","\xbe","\x93","\x59","\xed"),
	HX_HCSTRING("onleave","\x78","\x63","\x63","\x75"),
	HX_HCSTRING("onenter","\x99","\x9b","\x96","\x73"),
	HX_HCSTRING("onenabled","\x42","\x95","\x8a","\x88"),
	HX_HCSTRING("ondisabled","\x9b","\x59","\x09","\x80"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	HX_HCSTRING("onrender","\xb5","\xed","\x41","\xb0"),
	HX_HCSTRING("onprerender","\xba","\x0a","\xa6","\xaf"),
	HX_HCSTRING("onpostrender","\x95","\x15","\x60","\x07"),
	HX_HCSTRING("onreset","\x50","\x78","\xd8","\xe9"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("oninputdown","\x6d","\x8c","\x2f","\x9f"),
	HX_HCSTRING("oninputup","\xa6","\x51","\x78","\xde"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"),
	HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("onwindowmoved","\x84","\x77","\xc2","\xe8"),
	HX_HCSTRING("onwindowresized","\x81","\x3d","\xce","\x90"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	HX_HCSTRING("onwindowminimized","\x57","\x23","\xa1","\x8b"),
	HX_HCSTRING("onwindowrestored","\xa5","\x7a","\xd4","\x71"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#endif

hx::Class State_obj::__mClass;

void State_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.State","\x39","\x67","\x00","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &State_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< State_obj >;
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
