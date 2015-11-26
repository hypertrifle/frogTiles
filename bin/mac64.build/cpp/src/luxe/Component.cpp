#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{

Void Component_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Component","new",0xd6098d57,"luxe.Component.new","luxe/Component.hx",98,0xa970277a)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(100)
	::String _name = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_name,"_name");
	HX_STACK_LINE(102)
	bool tmp = (_options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	if ((tmp)){
		HX_STACK_LINE(103)
		bool tmp1 = (_options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		if ((tmp1)){
			HX_STACK_LINE(104)
			_name = _options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
		}
	}
	HX_STACK_LINE(108)
	bool tmp1 = (_name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	if ((tmp1)){
		HX_STACK_LINE(108)
		::luxe::utils::Utils tmp3 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		tmp2 = tmp3->uniqueid(null());
	}
	else{
		HX_STACK_LINE(108)
		tmp2 = _name;
	}
	HX_STACK_LINE(108)
	super::__construct(tmp2,null());
}
;
	return null();
}

//Component_obj::~Component_obj() { }

Dynamic Component_obj::__CreateEmpty() { return  new Component_obj; }
hx::ObjectPtr< Component_obj > Component_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Component_obj > _result_ = new Component_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Component_obj::init( ){
{
		HX_STACK_FRAME("luxe.Component","init",0x6f0ad639,"luxe.Component.init","luxe/Component.hx",33,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,init,(void))

Void Component_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Component","update",0x57d0fd72,"luxe.Component.update","luxe/Component.hx",35,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,update,(void))

Void Component_obj::onadded( ){
{
		HX_STACK_FRAME("luxe.Component","onadded",0x009107b8,"luxe.Component.onadded","luxe/Component.hx",38,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onadded,(void))

Void Component_obj::onremoved( ){
{
		HX_STACK_FRAME("luxe.Component","onremoved",0x6b3a0098,"luxe.Component.onremoved","luxe/Component.hx",40,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onremoved,(void))

Void Component_obj::onfixedupdate( Float rate){
{
		HX_STACK_FRAME("luxe.Component","onfixedupdate",0x84abcb75,"luxe.Component.onfixedupdate","luxe/Component.hx",43,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rate,"rate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onfixedupdate,(void))

Void Component_obj::onreset( ){
{
		HX_STACK_FRAME("luxe.Component","onreset",0xcb157cc7,"luxe.Component.onreset","luxe/Component.hx",45,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,onreset,(void))

Void Component_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Component","ondestroy",0x9cc00df2,"luxe.Component.ondestroy","luxe/Component.hx",47,0xa970277a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,ondestroy,(void))

Void Component_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onkeyup",0xc34c08b2,"luxe.Component.onkeyup","luxe/Component.hx",50,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onkeyup,(void))

Void Component_obj::onkeydown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onkeydown",0x29a81e79,"luxe.Component.onkeydown","luxe/Component.hx",52,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onkeydown,(void))

Void Component_obj::ontextinput( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ontextinput",0x270bf335,"luxe.Component.ontextinput","luxe/Component.hx",54,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ontextinput,(void))

Void Component_obj::oninputdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","oninputdown",0x81ed9864,"luxe.Component.oninputdown","luxe/Component.hx",57,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,oninputdown,(void))

Void Component_obj::oninputup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","oninputup",0x4c58a1dd,"luxe.Component.oninputup","luxe/Component.hx",59,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,oninputup,(void))

Void Component_obj::onmousedown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onmousedown",0x671793ff,"luxe.Component.onmousedown","luxe/Component.hx",62,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onmousedown,(void))

Void Component_obj::onmouseup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onmouseup",0x38acf0b8,"luxe.Component.onmouseup","luxe/Component.hx",64,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onmouseup,(void))

Void Component_obj::onmousemove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onmousemove",0x6d0a7eae,"luxe.Component.onmousemove","luxe/Component.hx",66,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onmousemove,(void))

Void Component_obj::onmousewheel( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onmousewheel",0xb978c25e,"luxe.Component.onmousewheel","luxe/Component.hx",68,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onmousewheel,(void))

Void Component_obj::ontouchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ontouchdown",0x802f6a99,"luxe.Component.ontouchdown","luxe/Component.hx",71,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ontouchdown,(void))

Void Component_obj::ontouchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ontouchup",0x51320cd2,"luxe.Component.ontouchup","luxe/Component.hx",73,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ontouchup,(void))

Void Component_obj::ontouchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ontouchmove",0x86225548,"luxe.Component.ontouchmove","luxe/Component.hx",75,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ontouchmove,(void))

Void Component_obj::ongamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ongamepadup",0xc2668034,"luxe.Component.ongamepadup","luxe/Component.hx",78,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ongamepadup,(void))

Void Component_obj::ongamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ongamepaddown",0xfdf0fa7b,"luxe.Component.ongamepaddown","luxe/Component.hx",80,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ongamepaddown,(void))

Void Component_obj::ongamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ongamepadaxis",0xfbfc1eba,"luxe.Component.ongamepadaxis","luxe/Component.hx",82,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ongamepadaxis,(void))

Void Component_obj::ongamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","ongamepaddevice",0x555256ef,"luxe.Component.ongamepaddevice","luxe/Component.hx",84,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,ongamepaddevice,(void))

Void Component_obj::onwindowmoved( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onwindowmoved",0x8014af3b,"luxe.Component.onwindowmoved","luxe/Component.hx",87,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onwindowmoved,(void))

Void Component_obj::onwindowresized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onwindowresized",0x4ae710f8,"luxe.Component.onwindowresized","luxe/Component.hx",89,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onwindowresized,(void))

Void Component_obj::onwindowsized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onwindowsized",0xf087eb8b,"luxe.Component.onwindowsized","luxe/Component.hx",91,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onwindowsized,(void))

Void Component_obj::onwindowminimized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onwindowminimized",0x9c2f028e,"luxe.Component.onwindowminimized","luxe/Component.hx",93,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onwindowminimized,(void))

Void Component_obj::onwindowrestored( Dynamic event){
{
		HX_STACK_FRAME("luxe.Component","onwindowrestored",0x8d74af4e,"luxe.Component.onwindowrestored","luxe/Component.hx",95,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,onwindowrestored,(void))

Dynamic Component_obj::add( Dynamic component){
	HX_STACK_FRAME("luxe.Component","add",0xd5ffaf18,"luxe.Component.add","luxe/Component.hx",115,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(component,"component")
	HX_STACK_LINE(116)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::luxe::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(116)
		(_this->component_count)++;
		HX_STACK_LINE(116)
		Dynamic tmp2 = component;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		tmp = _this->_components->add(tmp2);
	}
	HX_STACK_LINE(116)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,add,return )

bool Component_obj::remove( ::String _name){
	HX_STACK_FRAME("luxe.Component","remove",0xd55413ad,"luxe.Component.remove","luxe/Component.hx",120,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(121)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		::luxe::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(121)
		(_this->component_count)--;
		HX_STACK_LINE(121)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		tmp = _this->_components->remove(tmp2);
	}
	HX_STACK_LINE(121)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,remove,return )

Dynamic Component_obj::get( ::String _name,Dynamic __o_in_children){
Dynamic in_children = __o_in_children.Default(false);
	HX_STACK_FRAME("luxe.Component","get",0xd6043d8d,"luxe.Component.get","luxe/Component.hx",125,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(in_children,"in_children")
{
		HX_STACK_LINE(126)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			::luxe::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(126)
			::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			Dynamic tmp3 = in_children;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			tmp = _this->_components->get(tmp2,tmp3);
		}
		HX_STACK_LINE(126)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Component_obj,get,return )

cpp::ArrayBase Component_obj::get_any( ::String _name,Dynamic __o_in_children,Dynamic __o_first_only){
Dynamic in_children = __o_in_children.Default(false);
Dynamic first_only = __o_first_only.Default(true);
	HX_STACK_FRAME("luxe.Component","get_any",0x07fbc7fa,"luxe.Component.get_any","luxe/Component.hx",131,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(in_children,"in_children")
	HX_STACK_ARG(first_only,"first_only")
{
		HX_STACK_LINE(131)
		::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		::luxe::Entity _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(131)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		Dynamic tmp2 = in_children;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		Dynamic tmp3 = first_only;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		return _this->_components->get_any(tmp1,tmp2,tmp3);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Component_obj,get_any,return )

bool Component_obj::has( ::String _name){
	HX_STACK_FRAME("luxe.Component","has",0xd604fc51,"luxe.Component.has","luxe/Component.hx",135,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(136)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		::luxe::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(136)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		tmp = _this->_components->has(tmp2);
	}
	HX_STACK_LINE(136)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,has,return )

Void Component_obj::_detach_entity( ){
{
		HX_STACK_FRAME("luxe.Component","_detach_entity",0xc314e079,"luxe.Component._detach_entity","luxe/Component.hx",143,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		if ((tmp1)){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,_detach_entity,(void))

Void Component_obj::_attach_entity( ){
{
		HX_STACK_FRAME("luxe.Component","_attach_entity",0xcc0ad447,"luxe.Component._attach_entity","luxe/Component.hx",151,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		if ((tmp1)){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,_attach_entity,(void))

::luxe::Entity Component_obj::set_entity( ::luxe::Entity _entity){
	HX_STACK_FRAME("luxe.Component","set_entity",0xaf870149,"luxe.Component.set_entity","luxe/Component.hx",159,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_entity,"_entity")
	HX_STACK_LINE(161)
	this->_detach_entity();
	HX_STACK_LINE(163)
	this->entity = _entity;
	HX_STACK_LINE(165)
	this->_attach_entity();
	HX_STACK_LINE(167)
	::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_entity,return )

::luxe::Entity Component_obj::get_entity( ){
	HX_STACK_FRAME("luxe.Component","get_entity",0xac0962d5,"luxe.Component.get_entity","luxe/Component.hx",171,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	::luxe::Entity tmp = this->entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_entity,return )

::phoenix::Vector Component_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Component","set_pos",0xfb08bbae,"luxe.Component.set_pos","luxe/Component.hx",179,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(180)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(180)
			_this1->pos = _p;
			HX_STACK_LINE(180)
			bool tmp3 = (_p != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			if ((tmp3)){
				HX_STACK_LINE(180)
				::phoenix::Vector tmp4 = _this1->pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(180)
				Dynamic tmp5 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(180)
				::phoenix::Vector_obj::Listen(tmp4,tmp5);
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					bool tmp6 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(180)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(180)
					if ((tmp6)){
						HX_STACK_LINE(180)
						bool tmp8 = _this1->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(180)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(180)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(180)
						tmp7 = false;
					}
					HX_STACK_LINE(180)
					if ((tmp7)){
						HX_STACK_LINE(180)
						::phoenix::Vector tmp8 = _this1->pos;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(180)
						_this1->pos_changed(tmp8);
					}
				}
			}
			HX_STACK_LINE(180)
			tmp = _this1->pos;
		}
	}
	HX_STACK_LINE(180)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_pos,return )

::phoenix::Vector Component_obj::get_pos( ){
	HX_STACK_FRAME("luxe.Component","get_pos",0x08072aa2,"luxe.Component.get_pos","luxe/Component.hx",183,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(184)
		tmp = _this->local->pos;
	}
	HX_STACK_LINE(184)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_pos,return )

::phoenix::Quaternion Component_obj::set_rotation( ::phoenix::Quaternion _r){
	HX_STACK_FRAME("luxe.Component","set_rotation",0x562580e4,"luxe.Component.set_rotation","luxe/Component.hx",187,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(188)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(188)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(188)
			_this1->rotation = _r;
			HX_STACK_LINE(188)
			bool tmp3 = (_r != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			if ((tmp3)){
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
					HX_STACK_LINE(188)
					Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(188)
					_q->listen_x = listener;
					HX_STACK_LINE(188)
					_q->listen_y = listener;
					HX_STACK_LINE(188)
					_q->listen_z = listener;
					HX_STACK_LINE(188)
					_q->listen_w = listener;
				}
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					bool tmp4 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(188)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(188)
					if ((tmp4)){
						HX_STACK_LINE(188)
						bool tmp6 = _this1->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(188)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(188)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(188)
						tmp5 = false;
					}
					HX_STACK_LINE(188)
					if ((tmp5)){
						HX_STACK_LINE(188)
						::phoenix::Quaternion tmp6 = _this1->rotation;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(188)
						_this1->rotation_changed(tmp6);
					}
				}
			}
			HX_STACK_LINE(188)
			tmp = _this1->rotation;
		}
	}
	HX_STACK_LINE(188)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_rotation,return )

::phoenix::Quaternion Component_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.Component","get_rotation",0x412c5d70,"luxe.Component.get_rotation","luxe/Component.hx",191,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(192)
		tmp = _this->local->rotation;
	}
	HX_STACK_LINE(192)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_rotation,return )

::phoenix::Vector Component_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("luxe.Component","set_scale",0x0da96724,"luxe.Component.set_scale","luxe/Component.hx",195,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(196)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(196)
			_this1->scale = _s;
			HX_STACK_LINE(196)
			bool tmp3 = (_s != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			if ((tmp3)){
				HX_STACK_LINE(196)
				::phoenix::Vector tmp4 = _this1->scale;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(196)
				Dynamic tmp5 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				::phoenix::Vector_obj::Listen(tmp4,tmp5);
				HX_STACK_LINE(196)
				{
					HX_STACK_LINE(196)
					bool tmp6 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(196)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(196)
					if ((tmp6)){
						HX_STACK_LINE(196)
						bool tmp8 = _this1->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(196)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(196)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(196)
						tmp7 = false;
					}
					HX_STACK_LINE(196)
					if ((tmp7)){
						HX_STACK_LINE(196)
						::phoenix::Vector tmp8 = _this1->scale;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(196)
						_this1->scale_changed(tmp8);
					}
				}
			}
			HX_STACK_LINE(196)
			tmp = _this1->scale;
		}
	}
	HX_STACK_LINE(196)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_scale,return )

::phoenix::Vector Component_obj::get_scale( ){
	HX_STACK_FRAME("luxe.Component","get_scale",0x2a587b18,"luxe.Component.get_scale","luxe/Component.hx",199,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(200)
		tmp = _this->local->scale;
	}
	HX_STACK_LINE(200)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_scale,return )

::phoenix::Vector Component_obj::set_origin( ::phoenix::Vector _o){
	HX_STACK_FRAME("luxe.Component","set_origin",0xf56c080c,"luxe.Component.set_origin","luxe/Component.hx",203,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_o,"_o")
	HX_STACK_LINE(204)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			_this->dirty = true;
			HX_STACK_LINE(204)
			bool tmp3 = _this->dirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			if ((tmp4)){
				HX_STACK_LINE(204)
				bool tmp6 = _this->_setup;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(204)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(204)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(204)
				tmp5 = !(tmp8);
			}
			else{
				HX_STACK_LINE(204)
				tmp5 = false;
			}
			HX_STACK_LINE(204)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			if ((tmp6)){
				HX_STACK_LINE(204)
				tmp7 = (_this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(204)
				tmp7 = false;
			}
			HX_STACK_LINE(204)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			if ((tmp7)){
				HX_STACK_LINE(204)
				int tmp9 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(204)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(204)
				tmp8 = (tmp10 > (int)0);
			}
			else{
				HX_STACK_LINE(204)
				tmp8 = false;
			}
			HX_STACK_LINE(204)
			if ((tmp8)){
				HX_STACK_LINE(204)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(204)
				cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(204)
				while((true)){
					HX_STACK_LINE(204)
					bool tmp9 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(204)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(204)
					if ((tmp10)){
						HX_STACK_LINE(204)
						break;
					}
					HX_STACK_LINE(204)
					Dynamic tmp11 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(204)
					Dynamic _handler = tmp11;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(204)
					++(_g);
					HX_STACK_LINE(204)
					bool tmp12 = (_handler != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(204)
					if ((tmp12)){
						HX_STACK_LINE(204)
						::phoenix::Transform tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(204)
						_handler(tmp13).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(204)
			_this->dirty;
		}
		HX_STACK_LINE(204)
		_this->origin = _o;
		HX_STACK_LINE(204)
		bool tmp3 = (_this->_origin_handlers != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		if ((tmp3)){
			HX_STACK_LINE(204)
			int tmp5 = _this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			tmp4 = (tmp6 > (int)0);
		}
		else{
			HX_STACK_LINE(204)
			tmp4 = false;
		}
		HX_STACK_LINE(204)
		if ((tmp4)){
			HX_STACK_LINE(204)
			::phoenix::Vector _origin = _this->origin;		HX_STACK_VAR(_origin,"_origin");
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(204)
				cpp::ArrayBase _g1 = _this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(204)
				while((true)){
					HX_STACK_LINE(204)
					bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(204)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(204)
					if ((tmp6)){
						HX_STACK_LINE(204)
						break;
					}
					HX_STACK_LINE(204)
					Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(204)
					Dynamic _handler = tmp7;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(204)
					++(_g);
					HX_STACK_LINE(204)
					bool tmp8 = (_handler != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(204)
					if ((tmp8)){
						HX_STACK_LINE(204)
						::phoenix::Vector tmp9 = _origin;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(204)
						_handler(tmp9).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(204)
		tmp = _this->origin;
	}
	HX_STACK_LINE(204)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_origin,return )

::phoenix::Vector Component_obj::get_origin( ){
	HX_STACK_FRAME("luxe.Component","get_origin",0xf1ee6998,"luxe.Component.get_origin","luxe/Component.hx",207,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		::luxe::Entity tmp1 = this->get_entity();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		::phoenix::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(208)
		tmp = _this->origin;
	}
	HX_STACK_LINE(208)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_origin,return )

::phoenix::Transform Component_obj::set_transform( ::phoenix::Transform _o){
	HX_STACK_FRAME("luxe.Component","set_transform",0xe34f1b06,"luxe.Component.set_transform","luxe/Component.hx",211,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_o,"_o")
	HX_STACK_LINE(212)
	::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	::phoenix::Transform tmp1 = _o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	::phoenix::Transform tmp2 = tmp->set_transform(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_transform,return )

::phoenix::Transform Component_obj::get_transform( ){
	HX_STACK_FRAME("luxe.Component","get_transform",0x9e4938fa,"luxe.Component.get_transform","luxe/Component.hx",215,0xa970277a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	::luxe::Entity tmp = this->get_entity();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	::phoenix::Transform tmp1 = tmp->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_transform,return )

Void Component_obj::entity_pos_change( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Component","entity_pos_change",0x9c9e560e,"luxe.Component.entity_pos_change","luxe/Component.hx",219,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_pos_change,(void))

Void Component_obj::entity_scale_change( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("luxe.Component","entity_scale_change",0xfdc47a98,"luxe.Component.entity_scale_change","luxe/Component.hx",220,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_scale_change,(void))

Void Component_obj::entity_rotation_change( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Component","entity_rotation_change",0x04de4e9e,"luxe.Component.entity_rotation_change","luxe/Component.hx",221,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_rotation_change,(void))

Void Component_obj::entity_origin_change( ::phoenix::Vector _origin){
{
		HX_STACK_FRAME("luxe.Component","entity_origin_change",0x15b289b6,"luxe.Component.entity_origin_change","luxe/Component.hx",222,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_origin,"_origin")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_origin_change,(void))

Void Component_obj::entity_parent_change( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("luxe.Component","entity_parent_change",0x7adf4ef2,"luxe.Component.entity_parent_change","luxe/Component.hx",223,0xa970277a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,entity_parent_change,(void))


Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_MEMBER_NAME(transform,"transform");
	::luxe::ID_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entity,"entity");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	::luxe::ID_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Component_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return get_pos(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return get_scale(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return inCallProp == hx::paccAlways ? get_entity() : entity; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return get_origin(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onadded") ) { return onadded_dyn(); }
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_any") ) { return get_any_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_entity") ) { return set_entity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_entity") ) { return get_entity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onfixedupdate") ) { return onfixedupdate_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowmoved") ) { return onwindowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_detach_entity") ) { return _detach_entity_dyn(); }
		if (HX_FIELD_EQ(inName,"_attach_entity") ) { return _attach_entity_dyn(); }
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
		if (HX_FIELD_EQ(inName,"entity_pos_change") ) { return entity_pos_change_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"entity_scale_change") ) { return entity_scale_change_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"entity_origin_change") ) { return entity_origin_change_dyn(); }
		if (HX_FIELD_EQ(inName,"entity_parent_change") ) { return entity_parent_change_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entity_rotation_change") ) { return entity_rotation_change_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { if (inCallProp == hx::paccAlways) return set_entity(inValue);entity=inValue.Cast< ::luxe::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return set_origin(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Component_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Entity*/ ,(int)offsetof(Component_obj,entity),HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")},
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Component_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	HX_HCSTRING("onfixedupdate","\xbe","\x93","\x59","\xed"),
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
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("get_any","\x83","\xc3","\xbe","\x26"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("_detach_entity","\x10","\x58","\x76","\xf2"),
	HX_HCSTRING("_attach_entity","\xde","\x4b","\x6c","\xfb"),
	HX_HCSTRING("set_entity","\x60","\x21","\x21","\xf9"),
	HX_HCSTRING("get_entity","\xec","\x82","\xa3","\xf5"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("set_origin","\x23","\x28","\x06","\x3f"),
	HX_HCSTRING("get_origin","\xaf","\x89","\x88","\x3b"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("entity_pos_change","\xd7","\x76","\x10","\x8c"),
	HX_HCSTRING("entity_scale_change","\xa1","\x1f","\x97","\x46"),
	HX_HCSTRING("entity_rotation_change","\x35","\xb5","\x73","\xa1"),
	HX_HCSTRING("entity_origin_change","\x8d","\x4c","\x30","\x85"),
	HX_HCSTRING("entity_parent_change","\xc9","\x11","\x5d","\xea"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#endif

hx::Class Component_obj::__mClass;

void Component_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Component","\xe5","\x95","\x1c","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Component_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Component_obj >;
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
