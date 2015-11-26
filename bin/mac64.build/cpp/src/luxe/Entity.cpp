#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap
#include <luxe/structural/OrderedMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMapIterator
#include <luxe/structural/OrderedMapIterator.h>
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
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
namespace luxe{

Void Entity_obj::__construct(Dynamic _options,Dynamic _pos_info)
{
HX_STACK_FRAME("luxe.Entity","new",0x3aab5f6d,"luxe.Entity.new","luxe/Entity.hx",22,0x55caa482)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
HX_STACK_ARG(_pos_info,"_pos_info")
{
	HX_STACK_LINE(244)
	this->component_count = (int)0;
	HX_STACK_LINE(45)
	this->active = true;
	HX_STACK_LINE(39)
	this->fixed_rate = ((Float)0);
	HX_STACK_LINE(36)
	this->started = false;
	HX_STACK_LINE(34)
	this->inited = false;
	HX_STACK_LINE(32)
	this->destroyed = false;
	HX_STACK_LINE(130)
	super::__construct(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),null());
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		::luxe::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		::String tmp = _g->get_name();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::String tmp1 = this->get_id();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		::String tmp2 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::String tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		_g->set_name(tmp3);
	}
	HX_STACK_LINE(135)
	this->options = _options;
	HX_STACK_LINE(139)
	::luxe::components::Components tmp = ::luxe::components::Components_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	this->_components = tmp;
	HX_STACK_LINE(140)
	this->children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(141)
	::luxe::Events tmp1 = ::luxe::Events_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	this->events = tmp1;
	HX_STACK_LINE(143)
	Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	if ((tmp3)){
		HX_STACK_LINE(143)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		tmp4 = (tmp6->__Field(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(143)
		tmp4 = false;
	}
	HX_STACK_LINE(143)
	if ((tmp4)){
		HX_STACK_LINE(144)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(144)
		this->set_transform(tmp5->__Field(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"), hx::paccDynamic ));
	}
	else{
		HX_STACK_LINE(146)
		::phoenix::Transform tmp5 = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		this->set_transform(tmp5);
	}
	HX_STACK_LINE(150)
	{
		HX_STACK_LINE(150)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(150)
		bool tmp6 = (_this->_pos_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		if ((tmp6)){
			HX_STACK_LINE(150)
			_this->_pos_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(150)
		Dynamic tmp7 = this->set_pos_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		_this->_pos_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(151)
		bool tmp6 = (_this->_scale_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		if ((tmp6)){
			HX_STACK_LINE(151)
			_this->_scale_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(151)
		Dynamic tmp7 = this->set_scale_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		_this->_scale_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(152)
		bool tmp6 = (_this->_origin_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		if ((tmp6)){
			HX_STACK_LINE(152)
			_this->_origin_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(152)
		Dynamic tmp7 = this->set_origin_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(152)
		_this->_origin_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(153)
		bool tmp6 = (_this->_parent_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		if ((tmp6)){
			HX_STACK_LINE(153)
			_this->_parent_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(153)
		Dynamic tmp7 = this->set_parent_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		_this->_parent_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(154)
		bool tmp6 = (_this->_rotation_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		if ((tmp6)){
			HX_STACK_LINE(154)
			_this->_rotation_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(154)
		Dynamic tmp7 = this->set_rotation_from_transform_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		_this->_rotation_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(156)
	Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(156)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(156)
	if ((tmp6)){
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			bool tmp8 = (tmp7->__Field(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(160)
			if ((tmp8)){
				HX_STACK_LINE(160)
				Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(160)
				tmp9->__FieldRef(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f")) = false;
			}
			HX_STACK_LINE(160)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(160)
			tmp9->__Field(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f"), hx::paccDynamic );
		}
		HX_STACK_LINE(162)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		bool tmp8 = (tmp7->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(162)
		if ((tmp8)){
			HX_STACK_LINE(163)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(163)
			this->set_name(tmp9->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));
			HX_STACK_LINE(164)
			Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(164)
			if ((tmp10->__Field(HX_HCSTRING("name_unique","\xc5","\xe1","\x83","\x6f"), hx::paccDynamic ))){
				HX_STACK_LINE(165)
				::luxe::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(165)
				::String tmp11 = _g->get_name();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(165)
				::String tmp12 = this->get_id();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(165)
				::String tmp13 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(165)
				::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(165)
				_g->set_name(tmp14);
			}
		}
		HX_STACK_LINE(170)
		Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		bool tmp10 = (tmp9->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(170)
		if ((tmp10)){
			HX_STACK_LINE(171)
			Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(171)
			::phoenix::Vector _op = tmp11->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_op,"_op");
			HX_STACK_LINE(172)
			::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(_op->x,_op->y,_op->z,_op->w);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(172)
			this->set_pos(tmp12);
		}
		HX_STACK_LINE(175)
		Dynamic tmp11 = this->options;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		bool tmp12 = (tmp11->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(175)
		if ((tmp12)){
			HX_STACK_LINE(176)
			Dynamic tmp13 = this->options;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			::phoenix::Vector _os = tmp13->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(_os,"_os");
			HX_STACK_LINE(177)
			::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new(_os->x,_os->y,_os->z,_os->w);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(177)
			this->set_scale(tmp14);
		}
		HX_STACK_LINE(184)
		bool _should_add = true;		HX_STACK_VAR(_should_add,"_should_add");
		HX_STACK_LINE(186)
		Dynamic tmp13 = this->options;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(186)
		bool tmp14 = (tmp13->__Field(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(186)
		if ((tmp14)){
			HX_STACK_LINE(187)
			Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(187)
			bool tmp16 = (tmp15->__Field(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(187)
			if ((tmp16)){
				HX_STACK_LINE(188)
				_should_add = false;
				HX_STACK_LINE(171)
				Dynamic();
			}
		}
		HX_STACK_LINE(193)
		Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(193)
		bool tmp16 = (tmp15->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(193)
		if ((tmp16)){
			HX_STACK_LINE(195)
			_should_add = false;
			HX_STACK_LINE(196)
			Dynamic tmp17 = this->options;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(196)
			this->set_parent(tmp17->__Field(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"), hx::paccDynamic ));
			HX_STACK_LINE(171)
			Dynamic();
		}
		HX_STACK_LINE(201)
		bool tmp17 = _should_add;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(201)
		if ((tmp17)){
			HX_STACK_LINE(203)
			Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(203)
			bool tmp19 = (tmp18->__Field(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(203)
			if ((tmp19)){
				HX_STACK_LINE(204)
				Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(204)
				this->set_scene(tmp20->__Field(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"), hx::paccDynamic ));
				HX_STACK_LINE(171)
				Dynamic();
			}
			else{
				HX_STACK_LINE(207)
				::luxe::Scene tmp20 = ::Luxe_obj::scene;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(207)
				this->set_scene(tmp20);
				HX_STACK_LINE(171)
				Dynamic();
			}
		}
	}
	else{
		HX_STACK_LINE(215)
		::luxe::Scene tmp7 = ::Luxe_obj::scene;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		this->set_scene(tmp7);
		HX_STACK_LINE(171)
		Dynamic();
	}
	HX_STACK_LINE(223)
	::luxe::Scene tmp7 = this->get_scene();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(223)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(223)
	if ((tmp8)){
		HX_STACK_LINE(227)
		::luxe::Scene tmp9 = this->get_scene();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(227)
		Dynamic tmp10 = _pos_info;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(227)
		tmp9->add(hx::ObjectPtr<OBJ_>(this),tmp10);
	}
	else{
		HX_STACK_LINE(171)
		Dynamic();
	}
	HX_STACK_LINE(171)
	Dynamic();
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(Dynamic _options,Dynamic _pos_info)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(_options,_pos_info);
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Entity_obj::init( ){
{
		HX_STACK_FRAME("luxe.Entity","init",0x1800d763,"luxe.Entity.init","luxe/Entity.hx",67,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,init,(void))

Void Entity_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Entity","update",0xab291d1c,"luxe.Entity.update","luxe/Entity.hx",69,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,update,(void))

Void Entity_obj::onfixedupdate( Float rate){
{
		HX_STACK_FRAME("luxe.Entity","onfixedupdate",0xe3a5550b,"luxe.Entity.onfixedupdate","luxe/Entity.hx",71,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rate,"rate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onfixedupdate,(void))

Void Entity_obj::onreset( ){
{
		HX_STACK_FRAME("luxe.Entity","onreset",0x64d911dd,"luxe.Entity.onreset","luxe/Entity.hx",74,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,onreset,(void))

Void Entity_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Entity","ondestroy",0xde639488,"luxe.Entity.ondestroy","luxe/Entity.hx",76,0x55caa482)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,ondestroy,(void))

Void Entity_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onkeyup",0x5d0f9dc8,"luxe.Entity.onkeyup","luxe/Entity.hx",79,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onkeyup,(void))

Void Entity_obj::onkeydown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onkeydown",0x6b4ba50f,"luxe.Entity.onkeydown","luxe/Entity.hx",81,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onkeydown,(void))

Void Entity_obj::ontextinput( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontextinput",0xbd8ecb4b,"luxe.Entity.ontextinput","luxe/Entity.hx",83,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontextinput,(void))

Void Entity_obj::oninputdown( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","oninputdown",0x1870707a,"luxe.Entity.oninputdown","luxe/Entity.hx",86,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,oninputdown,(void))

Void Entity_obj::oninputup( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","oninputup",0x8dfc2873,"luxe.Entity.oninputup","luxe/Entity.hx",88,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,oninputup,(void))

Void Entity_obj::onmousedown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmousedown",0xfd9a6c15,"luxe.Entity.onmousedown","luxe/Entity.hx",91,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousedown,(void))

Void Entity_obj::onmouseup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmouseup",0x7a50774e,"luxe.Entity.onmouseup","luxe/Entity.hx",93,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmouseup,(void))

Void Entity_obj::onmousemove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmousemove",0x038d56c4,"luxe.Entity.onmousemove","luxe/Entity.hx",95,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousemove,(void))

Void Entity_obj::onmousewheel( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onmousewheel",0xd572fd88,"luxe.Entity.onmousewheel","luxe/Entity.hx",97,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onmousewheel,(void))

Void Entity_obj::ontouchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchdown",0x16b242af,"luxe.Entity.ontouchdown","luxe/Entity.hx",100,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchdown,(void))

Void Entity_obj::ontouchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchup",0x92d59368,"luxe.Entity.ontouchup","luxe/Entity.hx",102,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchup,(void))

Void Entity_obj::ontouchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ontouchmove",0x1ca52d5e,"luxe.Entity.ontouchmove","luxe/Entity.hx",104,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ontouchmove,(void))

Void Entity_obj::ongamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepadup",0x58e9584a,"luxe.Entity.ongamepadup","luxe/Entity.hx",107,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepadup,(void))

Void Entity_obj::ongamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepaddown",0x5cea8411,"luxe.Entity.ongamepaddown","luxe/Entity.hx",109,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepaddown,(void))

Void Entity_obj::ongamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepadaxis",0x5af5a850,"luxe.Entity.ongamepadaxis","luxe/Entity.hx",111,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepadaxis,(void))

Void Entity_obj::ongamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","ongamepaddevice",0x8cf1f205,"luxe.Entity.ongamepaddevice","luxe/Entity.hx",113,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,ongamepaddevice,(void))

Void Entity_obj::onwindowmoved( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowmoved",0xdf0e38d1,"luxe.Entity.onwindowmoved","luxe/Entity.hx",116,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowmoved,(void))

Void Entity_obj::onwindowresized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowresized",0x8286ac0e,"luxe.Entity.onwindowresized","luxe/Entity.hx",118,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowresized,(void))

Void Entity_obj::onwindowsized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowsized",0x4f817521,"luxe.Entity.onwindowsized","luxe/Entity.hx",120,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowsized,(void))

Void Entity_obj::onwindowminimized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowminimized",0xaf3c0f24,"luxe.Entity.onwindowminimized","luxe/Entity.hx",122,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowminimized,(void))

Void Entity_obj::onwindowrestored( Dynamic event){
{
		HX_STACK_FRAME("luxe.Entity","onwindowrestored",0x017cc778,"luxe.Entity.onwindowrestored","luxe/Entity.hx",124,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,onwindowrestored,(void))

Dynamic Entity_obj::add( Dynamic _component){
	HX_STACK_FRAME("luxe.Entity","add",0x3aa1812e,"luxe.Entity.add","luxe/Entity.hx",245,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_component,"_component")
	HX_STACK_LINE(246)
	(this->component_count)++;
	HX_STACK_LINE(247)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	Dynamic tmp1 = _component;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	Dynamic tmp2 = tmp->add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,add,return )

bool Entity_obj::remove( ::String _name){
	HX_STACK_FRAME("luxe.Entity","remove",0x28ac3357,"luxe.Entity.remove","luxe/Entity.hx",251,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(252)
	(this->component_count)--;
	HX_STACK_LINE(253)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,remove,return )

Dynamic Entity_obj::get( ::String _name,Dynamic __o__in_children){
Dynamic _in_children = __o__in_children.Default(false);
	HX_STACK_FRAME("luxe.Entity","get",0x3aa60fa3,"luxe.Entity.get","luxe/Entity.hx",257,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_in_children,"_in_children")
{
		HX_STACK_LINE(258)
		::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		Dynamic tmp2 = _in_children;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		Dynamic tmp3 = tmp->get(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,get,return )

cpp::ArrayBase Entity_obj::get_any( ::String _name,Dynamic __o__in_children,Dynamic __o__first_only){
Dynamic _in_children = __o__in_children.Default(false);
Dynamic _first_only = __o__first_only.Default(true);
	HX_STACK_FRAME("luxe.Entity","get_any",0xa1bf5d10,"luxe.Entity.get_any","luxe/Entity.hx",262,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_in_children,"_in_children")
	HX_STACK_ARG(_first_only,"_first_only")
{
		HX_STACK_LINE(263)
		::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		Dynamic tmp2 = _in_children;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		Dynamic tmp3 = _first_only;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		return tmp->get_any(tmp1,tmp2,tmp3);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,get_any,return )

bool Entity_obj::has( ::String _name){
	HX_STACK_FRAME("luxe.Entity","has",0x3aa6ce67,"luxe.Entity.has","luxe/Entity.hx",267,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(268)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,has,return )

Void Entity_obj::_init( ){
{
		HX_STACK_FRAME("luxe.Entity","_init",0x236f833c,"luxe.Entity._init","luxe/Entity.hx",276,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		this->init();
		HX_STACK_LINE(286)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),286,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		this->emit((int)2,null(),tmp);
		HX_STACK_LINE(288)
		int tmp1 = this->component_count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		if ((tmp2)){
			HX_STACK_LINE(290)
			::luxe::components::Components tmp3 = this->_components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			::luxe::structural::OrderedMap tmp4 = tmp3->components;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			::luxe::structural::OrderedMapIterator tmp5 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			::luxe::structural::OrderedMapIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(290)
			while((true)){
				HX_STACK_LINE(290)
				int tmp6 = _g->index;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(290)
				int tmp7 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(290)
				bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(290)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(290)
				if ((tmp9)){
					HX_STACK_LINE(290)
					break;
				}
				HX_STACK_LINE(290)
				::luxe::Component tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					int tmp11 = (_g->index)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(290)
					::String tmp12 = _g->map->_keys->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(290)
					::String key = tmp12;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(290)
					::haxe::ds::StringMap tmp13 = _g->map->map;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(290)
					::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(290)
					::luxe::Component tmp15 = tmp13->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(290)
					tmp10 = tmp15;
				}
				HX_STACK_LINE(290)
				::luxe::Component _component = tmp10;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(292)
				_component->init();
			}
		}
		HX_STACK_LINE(297)
		int tmp3 = this->children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		if ((tmp4)){
			HX_STACK_LINE(298)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(298)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(298)
			while((true)){
				HX_STACK_LINE(298)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(298)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(298)
				if ((tmp6)){
					HX_STACK_LINE(298)
					break;
				}
				HX_STACK_LINE(298)
				::luxe::Entity tmp7 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(298)
				::luxe::Entity _child = tmp7;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(298)
				++(_g);
				HX_STACK_LINE(300)
				_child->_init();
			}
		}
		HX_STACK_LINE(305)
		this->inited = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_init,(void))

Void Entity_obj::_reset( Dynamic _){
{
		HX_STACK_FRAME("luxe.Entity","_reset",0x06d32823,"luxe.Entity._reset","luxe/Entity.hx",310,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(315)
		this->onreset();
		HX_STACK_LINE(317)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),317,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_reset","\x10","\x91","\xaf","\xe2"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(317)
		this->emit((int)3,null(),tmp);
		HX_STACK_LINE(319)
		int tmp1 = this->component_count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		if ((tmp2)){
			HX_STACK_LINE(320)
			::luxe::components::Components tmp3 = this->_components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(320)
			::luxe::structural::OrderedMap tmp4 = tmp3->components;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			::luxe::structural::OrderedMapIterator tmp5 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(320)
			::luxe::structural::OrderedMapIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(320)
			while((true)){
				HX_STACK_LINE(320)
				int tmp6 = _g->index;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(320)
				int tmp7 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(320)
				bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(320)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(320)
				if ((tmp9)){
					HX_STACK_LINE(320)
					break;
				}
				HX_STACK_LINE(320)
				::luxe::Component tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(320)
				{
					HX_STACK_LINE(320)
					int tmp11 = (_g->index)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(320)
					::String tmp12 = _g->map->_keys->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(320)
					::String key = tmp12;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(320)
					::haxe::ds::StringMap tmp13 = _g->map->map;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(320)
					::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(320)
					::luxe::Component tmp15 = tmp13->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(320)
					tmp10 = tmp15;
				}
				HX_STACK_LINE(320)
				::luxe::Component _component = tmp10;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(322)
				_component->onreset();
			}
		}
		HX_STACK_LINE(327)
		int tmp3 = this->children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(327)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(327)
		if ((tmp4)){
			HX_STACK_LINE(328)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(328)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(328)
			while((true)){
				HX_STACK_LINE(328)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(328)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(328)
				if ((tmp6)){
					HX_STACK_LINE(328)
					break;
				}
				HX_STACK_LINE(328)
				::luxe::Entity tmp7 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(328)
				::luxe::Entity _child = tmp7;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(328)
				++(_g);
				HX_STACK_LINE(329)
				Dynamic tmp8 = _;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(329)
				_child->_reset(tmp8);
				HX_STACK_LINE(138)
				Dynamic();
			}
		}
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			Float tmp5 = this->fixed_rate;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(335)
			Float _rate = tmp5;		HX_STACK_VAR(_rate,"_rate");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::snow::api::Timer tmp6 = this->fixed_rate_timer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(335)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				if ((tmp7)){
					HX_STACK_LINE(335)
					::snow::api::Timer tmp8 = this->fixed_rate_timer;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(335)
					tmp8->stop();
					HX_STACK_LINE(335)
					this->fixed_rate_timer = null();
				}
			}
			HX_STACK_LINE(335)
			bool tmp6 = (_rate != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(335)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(335)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(335)
			if ((tmp7)){
				HX_STACK_LINE(335)
				::luxe::Entity tmp9 = this->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(335)
				::luxe::Entity tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				::luxe::Entity tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(335)
				tmp8 = (tmp11 == null());
			}
			else{
				HX_STACK_LINE(335)
				tmp8 = false;
			}
			HX_STACK_LINE(335)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(335)
			if ((tmp8)){
				HX_STACK_LINE(335)
				bool tmp10 = this->destroyed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(335)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(335)
				tmp9 = !(tmp12);
			}
			else{
				HX_STACK_LINE(335)
				tmp9 = false;
			}
			HX_STACK_LINE(335)
			if ((tmp9)){
				HX_STACK_LINE(335)
				::snow::api::Timer tmp10 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				this->fixed_rate_timer = tmp10;
				HX_STACK_LINE(335)
				Dynamic tmp11 = this->_fixed_update_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(335)
				::snow::api::Timer tmp12 = this->fixed_rate_timer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(335)
				tmp12->run = tmp11;
			}
		}
		HX_STACK_LINE(338)
		this->started = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_reset,(void))

Void Entity_obj::destroy( Dynamic __o__from_parent){
Dynamic _from_parent = __o__from_parent.Default(false);
	HX_STACK_FRAME("luxe.Entity","destroy",0x9f86c687,"luxe.Entity.destroy","luxe/Entity.hx",343,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from_parent,"_from_parent")
{
		HX_STACK_LINE(348)
		int tmp = this->children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(348)
		if ((tmp1)){
			HX_STACK_LINE(349)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(349)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(349)
			while((true)){
				HX_STACK_LINE(349)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(349)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(349)
				if ((tmp3)){
					HX_STACK_LINE(349)
					break;
				}
				HX_STACK_LINE(349)
				::luxe::Entity tmp4 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(349)
				::luxe::Entity _child = tmp4;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(349)
				++(_g);
				HX_STACK_LINE(351)
				_child->destroy(true);
			}
		}
		HX_STACK_LINE(356)
		this->children = null();
		HX_STACK_LINE(357)
		this->children = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(359)
		int tmp2 = this->component_count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(359)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		if ((tmp3)){
			HX_STACK_LINE(360)
			::luxe::components::Components tmp4 = this->_components;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(360)
			::luxe::structural::OrderedMap tmp5 = tmp4->components;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(360)
			::luxe::structural::OrderedMapIterator tmp6 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(360)
			::luxe::structural::OrderedMapIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(360)
			while((true)){
				HX_STACK_LINE(360)
				int tmp7 = _g->index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(360)
				int tmp8 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(360)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(360)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(360)
				if ((tmp10)){
					HX_STACK_LINE(360)
					break;
				}
				HX_STACK_LINE(360)
				::luxe::Component tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(360)
				{
					HX_STACK_LINE(360)
					int tmp12 = (_g->index)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(360)
					::String tmp13 = _g->map->_keys->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(360)
					::String key = tmp13;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(360)
					::haxe::ds::StringMap tmp14 = _g->map->map;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(360)
					::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(360)
					::luxe::Component tmp16 = tmp14->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(360)
					tmp11 = tmp16;
				}
				HX_STACK_LINE(360)
				::luxe::Component _component = tmp11;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(362)
				_component->onremoved();
				HX_STACK_LINE(363)
				_component->ondestroy();
			}
		}
		HX_STACK_LINE(368)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),368,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		this->emit((int)8,null(),tmp4);
		HX_STACK_LINE(370)
		this->ondestroy();
		HX_STACK_LINE(373)
		::luxe::Entity tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(373)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(373)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(373)
		if ((tmp6)){
			HX_STACK_LINE(373)
			Dynamic tmp8 = _from_parent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(373)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(373)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(373)
			tmp7 = false;
		}
		HX_STACK_LINE(373)
		if ((tmp7)){
			HX_STACK_LINE(375)
			::luxe::Entity tmp8 = this->get_parent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(375)
			tmp8->_remove_child(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::snow::api::Timer tmp8 = this->fixed_rate_timer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(379)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(379)
			if ((tmp9)){
				HX_STACK_LINE(379)
				::snow::api::Timer tmp10 = this->fixed_rate_timer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(379)
				tmp10->stop();
				HX_STACK_LINE(379)
				this->fixed_rate_timer = null();
			}
		}
		HX_STACK_LINE(382)
		this->destroyed = true;
		HX_STACK_LINE(383)
		this->inited = false;
		HX_STACK_LINE(384)
		this->started = false;
		HX_STACK_LINE(389)
		::luxe::Scene tmp8 = this->get_scene();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(389)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(389)
		if ((tmp9)){
			HX_STACK_LINE(390)
			::luxe::Scene tmp10 = this->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(390)
			tmp10->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(394)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(394)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(394)
		if ((tmp11)){
			HX_STACK_LINE(395)
			::luxe::Events tmp12 = this->events;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(395)
			tmp12->destroy();
			HX_STACK_LINE(396)
			this->events = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,destroy,(void))

Void Entity_obj::_update( Float dt){
{
		HX_STACK_FRAME("luxe.Entity","_update",0x707d3135,"luxe.Entity._update","luxe/Entity.hx",402,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(404)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(404)
		if ((tmp)){
			HX_STACK_LINE(406)
			return null();
		}
		HX_STACK_LINE(409)
		bool tmp1 = this->get_active();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(409)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(409)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(409)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(409)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(409)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(409)
		if ((tmp5)){
			HX_STACK_LINE(409)
			bool tmp7 = this->inited;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(409)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(409)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(409)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(409)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(409)
			tmp6 = !(tmp11);
		}
		else{
			HX_STACK_LINE(409)
			tmp6 = true;
		}
		HX_STACK_LINE(409)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(409)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(409)
		if ((tmp7)){
			HX_STACK_LINE(409)
			bool tmp9 = this->started;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(409)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(409)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(409)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(409)
			tmp8 = true;
		}
		HX_STACK_LINE(409)
		if ((tmp8)){
			HX_STACK_LINE(410)
			return null();
		}
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			::phoenix::Transform tmp9 = this->get_transform();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(416)
			::phoenix::Transform _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(416)
			bool tmp10 = (_this->parent != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(416)
			if ((tmp10)){
				HX_STACK_LINE(416)
				bool tmp11 = _this->parent->dirty;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				if ((tmp11)){
					HX_STACK_LINE(416)
					_this->parent->clean();
				}
			}
			HX_STACK_LINE(416)
			bool tmp11 = _this->dirty;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(416)
			if ((tmp11)){
				HX_STACK_LINE(416)
				bool tmp13 = _this->_cleaning;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(416)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(416)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(416)
				tmp12 = false;
			}
			HX_STACK_LINE(416)
			if ((tmp12)){
				HX_STACK_LINE(416)
				_this->clean();
			}
		}
		HX_STACK_LINE(419)
		Float tmp9 = dt;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(419)
		this->update(tmp9);
		HX_STACK_LINE(421)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(421)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(421)
		if ((tmp11)){
			HX_STACK_LINE(423)
			::luxe::Events tmp12 = this->events;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(423)
			tmp12->process();
		}
		HX_STACK_LINE(427)
		int tmp12 = this->component_count;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(427)
		bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(427)
		if ((tmp13)){
			HX_STACK_LINE(428)
			::luxe::components::Components tmp14 = this->_components;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(428)
			::luxe::structural::OrderedMap tmp15 = tmp14->components;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(428)
			::luxe::structural::OrderedMapIterator tmp16 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(428)
			::luxe::structural::OrderedMapIterator _g = tmp16;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(428)
			while((true)){
				HX_STACK_LINE(428)
				int tmp17 = _g->index;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(428)
				int tmp18 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(428)
				bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(428)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(428)
				if ((tmp20)){
					HX_STACK_LINE(428)
					break;
				}
				HX_STACK_LINE(428)
				::luxe::Component tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					int tmp22 = (_g->index)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(428)
					::String tmp23 = _g->map->_keys->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(428)
					::String key = tmp23;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(428)
					::haxe::ds::StringMap tmp24 = _g->map->map;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(428)
					::String tmp25 = key;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(428)
					::luxe::Component tmp26 = tmp24->get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(428)
					tmp21 = tmp26;
				}
				HX_STACK_LINE(428)
				::luxe::Component _component = tmp21;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(429)
				Float tmp22 = dt;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(429)
				_component->update(tmp22);
			}
		}
		HX_STACK_LINE(434)
		int tmp14 = this->children->length;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(434)
		bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(434)
		if ((tmp15)){
			HX_STACK_LINE(435)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(435)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(435)
			while((true)){
				HX_STACK_LINE(435)
				bool tmp16 = (_g < _g1->length);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(435)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(435)
				if ((tmp17)){
					HX_STACK_LINE(435)
					break;
				}
				HX_STACK_LINE(435)
				::luxe::Entity tmp18 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(435)
				::luxe::Entity _child = tmp18;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(435)
				++(_g);
				HX_STACK_LINE(436)
				Float tmp19 = dt;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(436)
				_child->_update(tmp19);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_update,(void))

Void Entity_obj::_fixed_update( ){
{
		HX_STACK_FRAME("luxe.Entity","_fixed_update",0x8f91c8e0,"luxe.Entity._fixed_update","luxe/Entity.hx",445,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(447)
		bool tmp = this->destroyed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(447)
		if ((tmp)){
			HX_STACK_LINE(448)
			return null();
		}
		HX_STACK_LINE(451)
		bool tmp1 = this->get_active();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(451)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(451)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(451)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(451)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(451)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(451)
		if ((tmp5)){
			HX_STACK_LINE(451)
			bool tmp7 = this->inited;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(451)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(451)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(451)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(451)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(451)
			tmp6 = !(tmp11);
		}
		else{
			HX_STACK_LINE(451)
			tmp6 = true;
		}
		HX_STACK_LINE(451)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(451)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(451)
		if ((tmp7)){
			HX_STACK_LINE(451)
			bool tmp9 = this->started;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(451)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(451)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(451)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(451)
			tmp8 = true;
		}
		HX_STACK_LINE(451)
		if ((tmp8)){
			HX_STACK_LINE(452)
			return null();
		}
		HX_STACK_LINE(457)
		Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),457,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_fixed_update","\x93","\x07","\x46","\x99"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(457)
		this->emit((int)7,null(),tmp9);
		HX_STACK_LINE(459)
		Float tmp10 = this->fixed_rate;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(459)
		this->onfixedupdate(tmp10);
		HX_STACK_LINE(461)
		int tmp11 = this->component_count;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(461)
		bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(461)
		if ((tmp12)){
			HX_STACK_LINE(462)
			::luxe::components::Components tmp13 = this->_components;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(462)
			::luxe::structural::OrderedMap tmp14 = tmp13->components;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(462)
			::luxe::structural::OrderedMapIterator tmp15 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(462)
			::luxe::structural::OrderedMapIterator _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(462)
			while((true)){
				HX_STACK_LINE(462)
				int tmp16 = _g->index;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(462)
				int tmp17 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(462)
				bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(462)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(462)
				if ((tmp19)){
					HX_STACK_LINE(462)
					break;
				}
				HX_STACK_LINE(462)
				::luxe::Component tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(462)
				{
					HX_STACK_LINE(462)
					int tmp21 = (_g->index)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(462)
					::String tmp22 = _g->map->_keys->__GetItem(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(462)
					::String key = tmp22;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(462)
					::haxe::ds::StringMap tmp23 = _g->map->map;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(462)
					::String tmp24 = key;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(462)
					::luxe::Component tmp25 = tmp23->get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(462)
					tmp20 = tmp25;
				}
				HX_STACK_LINE(462)
				::luxe::Component _component = tmp20;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(463)
				Float tmp21 = this->fixed_rate;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(463)
				_component->onfixedupdate(tmp21);
			}
		}
		HX_STACK_LINE(467)
		int tmp13 = this->children->length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(467)
		bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(467)
		if ((tmp14)){
			HX_STACK_LINE(468)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(468)
			Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(468)
			while((true)){
				HX_STACK_LINE(468)
				bool tmp15 = (_g < _g1->length);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(468)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(468)
				if ((tmp16)){
					HX_STACK_LINE(468)
					break;
				}
				HX_STACK_LINE(468)
				::luxe::Entity tmp17 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(468)
				::luxe::Entity _child = tmp17;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(468)
				++(_g);
				HX_STACK_LINE(469)
				_child->_fixed_update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_fixed_update,(void))

::luxe::Emitter Entity_obj::_find_emit_source( Dynamic __o__from_unlisten){
Dynamic _from_unlisten = __o__from_unlisten.Default(false);
	HX_STACK_FRAME("luxe.Entity","_find_emit_source",0x482d2e6d,"luxe.Entity._find_emit_source","luxe/Entity.hx",477,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from_unlisten,"_from_unlisten")
{
		HX_STACK_LINE(479)
		::luxe::Scene source = null();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(481)
		::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		if ((tmp1)){
			HX_STACK_LINE(483)
			::luxe::Scene tmp2 = this->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(483)
			source = tmp2;
		}
		else{
			HX_STACK_LINE(485)
			::luxe::Entity tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(485)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(485)
			if ((tmp3)){
				HX_STACK_LINE(487)
				bool looking = true;		HX_STACK_VAR(looking,"looking");
				HX_STACK_LINE(488)
				::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(488)
				::luxe::Entity _parent = tmp4;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(490)
				while((true)){
					HX_STACK_LINE(490)
					bool tmp5 = looking;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(490)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(490)
					if ((tmp6)){
						HX_STACK_LINE(490)
						break;
					}
					HX_STACK_LINE(493)
					::luxe::Scene tmp7 = _parent->get_scene();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(493)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(493)
					if ((tmp8)){
						HX_STACK_LINE(495)
						::luxe::Entity tmp9 = _parent->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(495)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(495)
						if ((tmp10)){
							HX_STACK_LINE(496)
							Dynamic tmp11 = _from_unlisten;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(496)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(496)
							if ((tmp12)){
								HX_STACK_LINE(497)
								::String tmp13 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(497)
								Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),497,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(497)
								::haxe::Log_obj::trace(tmp13,tmp14);
							}
							HX_STACK_LINE(499)
							looking = false;
							HX_STACK_LINE(500)
							break;
						}
						else{
							HX_STACK_LINE(504)
							::luxe::Entity tmp11 = this->get_parent();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(504)
							::luxe::Entity tmp12 = tmp11->get_parent();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(504)
							_parent = tmp12;
						}
					}
					else{
						HX_STACK_LINE(509)
						::luxe::Scene tmp9 = _parent->get_scene();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(509)
						source = tmp9;
						HX_STACK_LINE(510)
						looking = false;
						HX_STACK_LINE(511)
						break;
					}
				}
			}
			else{
				HX_STACK_LINE(518)
				Dynamic tmp4 = _from_unlisten;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(518)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(518)
				if ((tmp5)){
					HX_STACK_LINE(519)
					::String tmp6 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(519)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),519,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(519)
					::haxe::Log_obj::trace(tmp6,tmp7);
				}
			}
		}
		HX_STACK_LINE(523)
		::luxe::Scene tmp2 = source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(523)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_find_emit_source,return )

Void Entity_obj::_listen( int _event,Dynamic _handler,Dynamic __o__self){
Dynamic _self = __o__self.Default(false);
	HX_STACK_FRAME("luxe.Entity","_listen",0xd9717373,"luxe.Entity._listen","luxe/Entity.hx",528,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_ARG(_self,"_self")
{
		HX_STACK_LINE(538)
		Dynamic tmp = _self;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(538)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(538)
		if ((tmp1)){
			HX_STACK_LINE(539)
			int tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(539)
			Dynamic tmp3 = _handler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(539)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),539,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(539)
			this->on(tmp2,tmp3,tmp4);
		}
		HX_STACK_LINE(542)
		::luxe::Scene tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(542)
		{
			HX_STACK_LINE(542)
			::luxe::Scene source = null();		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(542)
			::luxe::Scene tmp3 = this->get_scene();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(542)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(542)
			if ((tmp4)){
				HX_STACK_LINE(542)
				::luxe::Scene tmp5 = this->get_scene();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(542)
				source = tmp5;
			}
			else{
				HX_STACK_LINE(542)
				::luxe::Entity tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(542)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(542)
				if ((tmp6)){
					HX_STACK_LINE(542)
					bool looking = true;		HX_STACK_VAR(looking,"looking");
					HX_STACK_LINE(542)
					::luxe::Entity tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(542)
					::luxe::Entity _parent = tmp7;		HX_STACK_VAR(_parent,"_parent");
					HX_STACK_LINE(542)
					while((true)){
						HX_STACK_LINE(542)
						bool tmp8 = looking;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(542)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(542)
						if ((tmp9)){
							HX_STACK_LINE(542)
							break;
						}
						HX_STACK_LINE(542)
						::luxe::Scene tmp10 = _parent->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(542)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(542)
						if ((tmp11)){
							HX_STACK_LINE(542)
							::luxe::Entity tmp12 = _parent->get_parent();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(542)
							bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(542)
							if ((tmp13)){
								HX_STACK_LINE(542)
								bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(542)
								if ((tmp14)){
									HX_STACK_LINE(542)
									::String tmp15 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(542)
									Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),497,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(542)
									::haxe::Log_obj::trace(tmp15,tmp16);
								}
								HX_STACK_LINE(542)
								looking = false;
								HX_STACK_LINE(542)
								break;
							}
							else{
								HX_STACK_LINE(542)
								::luxe::Entity tmp14 = this->get_parent();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(542)
								::luxe::Entity tmp15 = tmp14->get_parent();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(542)
								_parent = tmp15;
							}
						}
						else{
							HX_STACK_LINE(542)
							::luxe::Scene tmp12 = _parent->get_scene();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(542)
							source = tmp12;
							HX_STACK_LINE(542)
							looking = false;
							HX_STACK_LINE(542)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(542)
					bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(542)
					if ((tmp7)){
						HX_STACK_LINE(542)
						::String tmp8 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(542)
						Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),519,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(542)
						::haxe::Log_obj::trace(tmp8,tmp9);
					}
				}
			}
			HX_STACK_LINE(542)
			tmp2 = source;
		}
		HX_STACK_LINE(542)
		::luxe::Emitter source = ((::luxe::Emitter)(tmp2));		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(546)
		bool tmp3 = (source != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(546)
		if ((tmp3)){
			HX_STACK_LINE(547)
			int tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(547)
			switch( (int)(tmp4)){
				case (int)13: {
					HX_STACK_LINE(549)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(549)
					Dynamic tmp6 = this->_keyup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(549)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),549,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(549)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(550)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(550)
					Dynamic tmp6 = this->_keydown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(550)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),550,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(550)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(551)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(551)
					Dynamic tmp6 = this->_textinput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(551)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),551,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(551)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(553)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(553)
					Dynamic tmp6 = this->_mousedown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(553)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),553,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(553)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(554)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(554)
					Dynamic tmp6 = this->_mouseup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(554)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),554,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(554)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)19: {
					HX_STACK_LINE(555)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(555)
					Dynamic tmp6 = this->_mousemove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(555)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),555,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(555)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(556)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(556)
					Dynamic tmp6 = this->_mousewheel_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(556)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),556,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(556)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)21: {
					HX_STACK_LINE(558)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(558)
					Dynamic tmp6 = this->_touchdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(558)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),558,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(558)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)22: {
					HX_STACK_LINE(559)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(559)
					Dynamic tmp6 = this->_touchup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(559)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),559,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(559)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)23: {
					HX_STACK_LINE(560)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(560)
					Dynamic tmp6 = this->_touchmove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(560)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),560,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(560)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(562)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(562)
					Dynamic tmp6 = this->_inputup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(562)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),562,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(562)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(563)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(563)
					Dynamic tmp6 = this->_inputdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(563)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),563,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(563)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)25: {
					HX_STACK_LINE(565)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(565)
					Dynamic tmp6 = this->_gamepaddown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(565)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),565,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(565)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)26: {
					HX_STACK_LINE(566)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(566)
					Dynamic tmp6 = this->_gamepadup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(566)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),566,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(566)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)24: {
					HX_STACK_LINE(567)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(567)
					Dynamic tmp6 = this->_gamepadaxis_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(567)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),567,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(567)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(568)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(568)
					Dynamic tmp6 = this->_gamepaddevice_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(568)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),568,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(568)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)29: {
					HX_STACK_LINE(570)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(570)
					Dynamic tmp6 = this->_windowmoved_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(570)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),570,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(570)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)30: {
					HX_STACK_LINE(571)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(571)
					Dynamic tmp6 = this->_windowresized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(571)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),571,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(571)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)31: {
					HX_STACK_LINE(572)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(572)
					Dynamic tmp6 = this->_windowsized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(572)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),572,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(572)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(573)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(573)
					Dynamic tmp6 = this->_windowminimized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(573)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),573,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(573)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)33: {
					HX_STACK_LINE(574)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(574)
					Dynamic tmp6 = this->_windowrestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(574)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),574,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(574)
					source->on(tmp5,tmp6,tmp7);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,_listen,(void))

Void Entity_obj::_unlisten( int _event,Dynamic _handler,Dynamic __o__self){
Dynamic _self = __o__self.Default(false);
	HX_STACK_FRAME("luxe.Entity","_unlisten",0xe95ac58c,"luxe.Entity._unlisten","luxe/Entity.hx",584,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_event,"_event")
	HX_STACK_ARG(_handler,"_handler")
	HX_STACK_ARG(_self,"_self")
{
		HX_STACK_LINE(586)
		::luxe::Scene tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			::luxe::Scene source = null();		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(586)
			::luxe::Scene tmp1 = this->get_scene();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(586)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(586)
			if ((tmp2)){
				HX_STACK_LINE(586)
				::luxe::Scene tmp3 = this->get_scene();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(586)
				source = tmp3;
			}
			else{
				HX_STACK_LINE(586)
				::luxe::Entity tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(586)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(586)
				if ((tmp4)){
					HX_STACK_LINE(586)
					bool looking = true;		HX_STACK_VAR(looking,"looking");
					HX_STACK_LINE(586)
					::luxe::Entity tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(586)
					::luxe::Entity _parent = tmp5;		HX_STACK_VAR(_parent,"_parent");
					HX_STACK_LINE(586)
					while((true)){
						HX_STACK_LINE(586)
						bool tmp6 = looking;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(586)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(586)
						if ((tmp7)){
							HX_STACK_LINE(586)
							break;
						}
						HX_STACK_LINE(586)
						::luxe::Scene tmp8 = _parent->get_scene();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(586)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(586)
						if ((tmp9)){
							HX_STACK_LINE(586)
							::luxe::Entity tmp10 = _parent->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(586)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(586)
							if ((tmp11)){
								HX_STACK_LINE(586)
								bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(586)
								if ((tmp12)){
									HX_STACK_LINE(586)
									::String tmp13 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(586)
									Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),497,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(586)
									::haxe::Log_obj::trace(tmp13,tmp14);
								}
								HX_STACK_LINE(586)
								looking = false;
								HX_STACK_LINE(586)
								break;
							}
							else{
								HX_STACK_LINE(586)
								::luxe::Entity tmp12 = this->get_parent();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(586)
								::luxe::Entity tmp13 = tmp12->get_parent();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(586)
								_parent = tmp13;
							}
						}
						else{
							HX_STACK_LINE(586)
							::luxe::Scene tmp10 = _parent->get_scene();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(586)
							source = tmp10;
							HX_STACK_LINE(586)
							looking = false;
							HX_STACK_LINE(586)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(586)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(586)
					if ((tmp5)){
						HX_STACK_LINE(586)
						::String tmp6 = HX_HCSTRING("   i / entity / entity has no parent or scene, currently no core events will reach it.","\xbc","\x45","\x22","\xef");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(586)
						Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),519,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(586)
						::haxe::Log_obj::trace(tmp6,tmp7);
					}
				}
			}
			HX_STACK_LINE(586)
			tmp = source;
		}
		HX_STACK_LINE(586)
		::luxe::Emitter source = ((::luxe::Emitter)(tmp));		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(590)
		Dynamic tmp1 = _self;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(590)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(590)
		if ((tmp2)){
			HX_STACK_LINE(591)
			int tmp3 = _event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(591)
			Dynamic tmp4 = _handler;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(591)
			Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),591,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(591)
			this->off(tmp3,tmp4,tmp5);
		}
		HX_STACK_LINE(594)
		bool tmp3 = (source != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		if ((tmp3)){
			HX_STACK_LINE(595)
			int tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(595)
			switch( (int)(tmp4)){
				case (int)13: {
					HX_STACK_LINE(597)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(597)
					Dynamic tmp6 = this->_keyup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(597)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),597,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(597)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(598)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(598)
					Dynamic tmp6 = this->_keydown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(598)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),598,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(598)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(599)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(599)
					Dynamic tmp6 = this->_textinput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(599)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),599,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(599)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(601)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(601)
					Dynamic tmp6 = this->_mousedown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(601)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),601,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(601)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(602)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(602)
					Dynamic tmp6 = this->_mouseup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(602)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),602,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(602)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)19: {
					HX_STACK_LINE(603)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(603)
					Dynamic tmp6 = this->_mousemove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(603)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),603,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(603)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(604)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(604)
					Dynamic tmp6 = this->_mousewheel_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(604)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),604,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(604)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)21: {
					HX_STACK_LINE(606)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(606)
					Dynamic tmp6 = this->_touchdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(606)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),606,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(606)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)22: {
					HX_STACK_LINE(607)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(607)
					Dynamic tmp6 = this->_touchup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(607)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),607,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(607)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)23: {
					HX_STACK_LINE(608)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(608)
					Dynamic tmp6 = this->_touchmove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(608)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),608,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(608)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(610)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(610)
					Dynamic tmp6 = this->_inputup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(610)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),610,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(610)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(611)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(611)
					Dynamic tmp6 = this->_inputdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(611)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),611,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(611)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)25: {
					HX_STACK_LINE(613)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(613)
					Dynamic tmp6 = this->_gamepaddown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(613)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),613,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(613)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)26: {
					HX_STACK_LINE(614)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(614)
					Dynamic tmp6 = this->_gamepadup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(614)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),614,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(614)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)24: {
					HX_STACK_LINE(615)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(615)
					Dynamic tmp6 = this->_gamepadaxis_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(615)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),615,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(615)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(616)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(616)
					Dynamic tmp6 = this->_gamepaddevice_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(616)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),616,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(616)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)29: {
					HX_STACK_LINE(618)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(618)
					Dynamic tmp6 = this->_windowmoved_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(618)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),618,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(618)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)30: {
					HX_STACK_LINE(619)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(619)
					Dynamic tmp6 = this->_windowresized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(619)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),619,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(619)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)31: {
					HX_STACK_LINE(620)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(620)
					Dynamic tmp6 = this->_windowsized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(620)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),620,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(620)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(621)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(621)
					Dynamic tmp6 = this->_windowminimized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(621)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),621,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(621)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)33: {
					HX_STACK_LINE(622)
					int tmp5 = _event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(622)
					Dynamic tmp6 = this->_windowrestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(622)
					Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),622,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(622)
					source->off(tmp5,tmp6,tmp7);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,_unlisten,(void))

Void Entity_obj::_detach_scene( ){
{
		HX_STACK_FRAME("luxe.Entity","_detach_scene",0xe66c124c,"luxe.Entity._detach_scene","luxe/Entity.hx",632,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(634)
		::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(634)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(634)
		if ((tmp1)){
			HX_STACK_LINE(636)
			::luxe::Scene tmp2 = this->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(636)
			Dynamic tmp3 = this->_reset_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(636)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),636,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(636)
			tmp2->off((int)3,tmp3,tmp4);
			HX_STACK_LINE(637)
			::luxe::Scene tmp5 = this->get_scene();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(637)
			Dynamic tmp6 = this->destroy_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(637)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),637,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(637)
			tmp5->off((int)8,tmp6,tmp7);
			HX_STACK_LINE(640)
			::luxe::Scene tmp8 = this->get_scene();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(640)
			Dynamic tmp9 = this->_keyup_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(640)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),640,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(640)
			tmp8->off((int)13,tmp9,tmp10);
			HX_STACK_LINE(641)
			::luxe::Scene tmp11 = this->get_scene();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(641)
			Dynamic tmp12 = this->_keydown_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(641)
			Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),641,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(641)
			tmp11->off((int)12,tmp12,tmp13);
			HX_STACK_LINE(642)
			::luxe::Scene tmp14 = this->get_scene();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(642)
			Dynamic tmp15 = this->_textinput_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(642)
			Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),642,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(642)
			tmp14->off((int)14,tmp15,tmp16);
			HX_STACK_LINE(643)
			::luxe::Scene tmp17 = this->get_scene();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(643)
			Dynamic tmp18 = this->_mousedown_dyn();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(643)
			Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),643,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(643)
			tmp17->off((int)17,tmp18,tmp19);
			HX_STACK_LINE(644)
			::luxe::Scene tmp20 = this->get_scene();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(644)
			Dynamic tmp21 = this->_mouseup_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(644)
			Dynamic tmp22 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),644,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(644)
			tmp20->off((int)18,tmp21,tmp22);
			HX_STACK_LINE(645)
			::luxe::Scene tmp23 = this->get_scene();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(645)
			Dynamic tmp24 = this->_mousemove_dyn();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(645)
			Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),645,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(645)
			tmp23->off((int)19,tmp24,tmp25);
			HX_STACK_LINE(646)
			::luxe::Scene tmp26 = this->get_scene();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(646)
			Dynamic tmp27 = this->_mousewheel_dyn();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(646)
			Dynamic tmp28 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),646,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(646)
			tmp26->off((int)20,tmp27,tmp28);
			HX_STACK_LINE(647)
			::luxe::Scene tmp29 = this->get_scene();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(647)
			Dynamic tmp30 = this->_touchdown_dyn();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(647)
			Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),647,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(647)
			tmp29->off((int)21,tmp30,tmp31);
			HX_STACK_LINE(648)
			::luxe::Scene tmp32 = this->get_scene();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(648)
			Dynamic tmp33 = this->_touchup_dyn();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(648)
			Dynamic tmp34 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),648,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(648)
			tmp32->off((int)22,tmp33,tmp34);
			HX_STACK_LINE(649)
			::luxe::Scene tmp35 = this->get_scene();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(649)
			Dynamic tmp36 = this->_touchmove_dyn();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(649)
			Dynamic tmp37 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),649,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(649)
			tmp35->off((int)23,tmp36,tmp37);
			HX_STACK_LINE(650)
			::luxe::Scene tmp38 = this->get_scene();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(650)
			Dynamic tmp39 = this->_inputup_dyn();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(650)
			Dynamic tmp40 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),650,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(650)
			tmp38->off((int)16,tmp39,tmp40);
			HX_STACK_LINE(651)
			::luxe::Scene tmp41 = this->get_scene();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(651)
			Dynamic tmp42 = this->_inputdown_dyn();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(651)
			Dynamic tmp43 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),651,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(651)
			tmp41->off((int)15,tmp42,tmp43);
			HX_STACK_LINE(652)
			::luxe::Scene tmp44 = this->get_scene();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(652)
			Dynamic tmp45 = this->_gamepaddown_dyn();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(652)
			Dynamic tmp46 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),652,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(652)
			tmp44->off((int)25,tmp45,tmp46);
			HX_STACK_LINE(653)
			::luxe::Scene tmp47 = this->get_scene();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(653)
			Dynamic tmp48 = this->_gamepadup_dyn();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(653)
			Dynamic tmp49 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),653,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(653)
			tmp47->off((int)26,tmp48,tmp49);
			HX_STACK_LINE(654)
			::luxe::Scene tmp50 = this->get_scene();		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(654)
			Dynamic tmp51 = this->_gamepadaxis_dyn();		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(654)
			Dynamic tmp52 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),654,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(654)
			tmp50->off((int)24,tmp51,tmp52);
			HX_STACK_LINE(655)
			::luxe::Scene tmp53 = this->get_scene();		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(655)
			Dynamic tmp54 = this->_gamepaddevice_dyn();		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(655)
			Dynamic tmp55 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),655,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(655)
			tmp53->off((int)27,tmp54,tmp55);
			HX_STACK_LINE(656)
			::luxe::Scene tmp56 = this->get_scene();		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(656)
			Dynamic tmp57 = this->_windowmoved_dyn();		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(656)
			Dynamic tmp58 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),656,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(656)
			tmp56->off((int)29,tmp57,tmp58);
			HX_STACK_LINE(657)
			::luxe::Scene tmp59 = this->get_scene();		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(657)
			Dynamic tmp60 = this->_windowresized_dyn();		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(657)
			Dynamic tmp61 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),657,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(657)
			tmp59->off((int)30,tmp60,tmp61);
			HX_STACK_LINE(658)
			::luxe::Scene tmp62 = this->get_scene();		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(658)
			Dynamic tmp63 = this->_windowsized_dyn();		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(658)
			Dynamic tmp64 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),658,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(658)
			tmp62->off((int)31,tmp63,tmp64);
			HX_STACK_LINE(659)
			::luxe::Scene tmp65 = this->get_scene();		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(659)
			Dynamic tmp66 = this->_windowminimized_dyn();		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(659)
			Dynamic tmp67 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),659,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(659)
			tmp65->off((int)32,tmp66,tmp67);
			HX_STACK_LINE(660)
			::luxe::Scene tmp68 = this->get_scene();		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(660)
			Dynamic tmp69 = this->_windowrestored_dyn();		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(660)
			Dynamic tmp70 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),660,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"));		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(660)
			tmp68->off((int)33,tmp69,tmp70);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_detach_scene,(void))

Void Entity_obj::_attach_scene( ){
{
		HX_STACK_FRAME("luxe.Entity","_attach_scene",0xae36123e,"luxe.Entity._attach_scene","luxe/Entity.hx",666,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(668)
		::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(668)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(668)
		if ((tmp1)){
			HX_STACK_LINE(669)
			::luxe::Scene tmp2 = this->get_scene();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(669)
			Dynamic tmp3 = this->_reset_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(669)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),669,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_attach_scene","\xf1","\x50","\xea","\xb7"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(669)
			tmp2->on((int)3,tmp3,tmp4);
			HX_STACK_LINE(670)
			::luxe::Scene tmp5 = this->get_scene();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(670)
			Dynamic tmp6 = this->destroy_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(670)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),670,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_attach_scene","\xf1","\x50","\xea","\xb7"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(670)
			tmp5->on((int)8,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_attach_scene,(void))

Void Entity_obj::_keyup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_keyup",0xff09b40e,"luxe.Entity._keyup","luxe/Entity.hx",677,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(679)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(679)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(679)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(679)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(679)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(679)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(679)
		if ((tmp4)){
			HX_STACK_LINE(679)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(679)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(679)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(679)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(679)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(679)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(679)
			tmp5 = true;
		}
		HX_STACK_LINE(679)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(679)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(679)
		if ((tmp6)){
			HX_STACK_LINE(679)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(679)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(679)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(679)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(679)
			tmp7 = true;
		}
		HX_STACK_LINE(679)
		if ((tmp7)){
			HX_STACK_LINE(680)
			return null();
		}
		HX_STACK_LINE(685)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(685)
		this->onkeyup(tmp8);
		HX_STACK_LINE(686)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(686)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),686,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_keyup","\xfb","\x1c","\xe6","\xda"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(686)
		this->emit((int)13,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_keyup,(void))

Void Entity_obj::_keydown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_keydown",0x10ac58d5,"luxe.Entity._keydown","luxe/Entity.hx",690,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(692)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(692)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(692)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(692)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(692)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(692)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(692)
		if ((tmp4)){
			HX_STACK_LINE(692)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(692)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(692)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(692)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(692)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(692)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(692)
			tmp5 = true;
		}
		HX_STACK_LINE(692)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(692)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(692)
		if ((tmp6)){
			HX_STACK_LINE(692)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(692)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(692)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(692)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(692)
			tmp7 = true;
		}
		HX_STACK_LINE(692)
		if ((tmp7)){
			HX_STACK_LINE(693)
			return null();
		}
		HX_STACK_LINE(698)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(698)
		this->onkeydown(tmp8);
		HX_STACK_LINE(699)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(699)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),699,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_keydown","\x02","\x97","\x26","\xeb"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(699)
		this->emit((int)12,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_keydown,(void))

Void Entity_obj::_textinput( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_textinput",0x03587c91,"luxe.Entity._textinput","luxe/Entity.hx",703,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(705)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(705)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(705)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(705)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(705)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(705)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(705)
		if ((tmp4)){
			HX_STACK_LINE(705)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(705)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(705)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(705)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(705)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(705)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(705)
			tmp5 = true;
		}
		HX_STACK_LINE(705)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(705)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(705)
		if ((tmp6)){
			HX_STACK_LINE(705)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(705)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(705)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(705)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(705)
			tmp7 = true;
		}
		HX_STACK_LINE(705)
		if ((tmp7)){
			HX_STACK_LINE(706)
			return null();
		}
		HX_STACK_LINE(711)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(711)
		this->ontextinput(tmp8);
		HX_STACK_LINE(712)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(712)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),712,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_textinput","\xfe","\x5f","\x80","\x1f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(712)
		this->emit((int)14,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_textinput,(void))

Void Entity_obj::_mousedown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousedown",0x43641d5b,"luxe.Entity._mousedown","luxe/Entity.hx",719,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(721)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(721)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(721)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(721)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(721)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(721)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(721)
		if ((tmp4)){
			HX_STACK_LINE(721)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(721)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(721)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(721)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(721)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(721)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(721)
			tmp5 = true;
		}
		HX_STACK_LINE(721)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(721)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(721)
		if ((tmp6)){
			HX_STACK_LINE(721)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(721)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(721)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(721)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(721)
			tmp7 = true;
		}
		HX_STACK_LINE(721)
		if ((tmp7)){
			HX_STACK_LINE(722)
			return null();
		}
		HX_STACK_LINE(727)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(727)
		this->onmousedown(tmp8);
		HX_STACK_LINE(728)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(728)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),728,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_mousedown","\xc8","\x00","\x8c","\x5f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(728)
		this->emit((int)17,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousedown,(void))

Void Entity_obj::_mouseup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mouseup",0x1fb12b14,"luxe.Entity._mouseup","luxe/Entity.hx",733,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(735)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(735)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(735)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(735)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(735)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(735)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(735)
		if ((tmp4)){
			HX_STACK_LINE(735)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(735)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(735)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(735)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(735)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(735)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(735)
			tmp5 = true;
		}
		HX_STACK_LINE(735)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(735)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(735)
		if ((tmp6)){
			HX_STACK_LINE(735)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(735)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(735)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(735)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(735)
			tmp7 = true;
		}
		HX_STACK_LINE(735)
		if ((tmp7)){
			HX_STACK_LINE(736)
			return null();
		}
		HX_STACK_LINE(741)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(741)
		this->onmouseup(tmp8);
		HX_STACK_LINE(742)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(742)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),742,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_mouseup","\x41","\x69","\x2b","\xfa"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(742)
		this->emit((int)18,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mouseup,(void))

Void Entity_obj::_mousewheel( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousewheel",0xa0246982,"luxe.Entity._mousewheel","luxe/Entity.hx",746,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(748)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(748)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(748)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(748)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(748)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(748)
		if ((tmp4)){
			HX_STACK_LINE(748)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(748)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(748)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(748)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(748)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(748)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(748)
			tmp5 = true;
		}
		HX_STACK_LINE(748)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(748)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(748)
		if ((tmp6)){
			HX_STACK_LINE(748)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(748)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(748)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(748)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(748)
			tmp7 = true;
		}
		HX_STACK_LINE(748)
		if ((tmp7)){
			HX_STACK_LINE(749)
			return null();
		}
		HX_STACK_LINE(754)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(754)
		this->onmousewheel(tmp8);
		HX_STACK_LINE(755)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(755)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),755,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_mousewheel","\x75","\x85","\xe3","\x26"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(755)
		this->emit((int)20,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousewheel,(void))

Void Entity_obj::_mousemove( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_mousemove",0x4957080a,"luxe.Entity._mousemove","luxe/Entity.hx",759,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(761)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(761)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(761)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(761)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(761)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(761)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(761)
		if ((tmp4)){
			HX_STACK_LINE(761)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(761)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(761)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(761)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(761)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(761)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(761)
			tmp5 = true;
		}
		HX_STACK_LINE(761)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(761)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(761)
		if ((tmp6)){
			HX_STACK_LINE(761)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(761)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(761)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(761)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(761)
			tmp7 = true;
		}
		HX_STACK_LINE(761)
		if ((tmp7)){
			HX_STACK_LINE(762)
			return null();
		}
		HX_STACK_LINE(767)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(767)
		this->onmousemove(tmp8);
		HX_STACK_LINE(768)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(768)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),768,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_mousemove","\x77","\xeb","\x7e","\x65"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(768)
		this->emit((int)19,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_mousemove,(void))

Void Entity_obj::_touchdown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchdown",0x5c7bf3f5,"luxe.Entity._touchdown","luxe/Entity.hx",773,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(775)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(775)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(775)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(775)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(775)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(775)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(775)
		if ((tmp4)){
			HX_STACK_LINE(775)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(775)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(775)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(775)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(775)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(775)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(775)
			tmp5 = true;
		}
		HX_STACK_LINE(775)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(775)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(775)
		if ((tmp6)){
			HX_STACK_LINE(775)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(775)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(775)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(775)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(775)
			tmp7 = true;
		}
		HX_STACK_LINE(775)
		if ((tmp7)){
			HX_STACK_LINE(776)
			return null();
		}
		HX_STACK_LINE(781)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(781)
		this->ontouchdown(tmp8);
		HX_STACK_LINE(782)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(782)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),782,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_touchdown","\x62","\xd7","\xa3","\x78"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(782)
		this->emit((int)21,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchdown,(void))

Void Entity_obj::_touchup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchup",0x3836472e,"luxe.Entity._touchup","luxe/Entity.hx",786,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(788)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(788)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(788)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(788)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(788)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(788)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(788)
		if ((tmp4)){
			HX_STACK_LINE(788)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(788)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(788)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(788)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(788)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(788)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(788)
			tmp5 = true;
		}
		HX_STACK_LINE(788)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(788)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(788)
		if ((tmp6)){
			HX_STACK_LINE(788)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(788)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(788)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(788)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(788)
			tmp7 = true;
		}
		HX_STACK_LINE(788)
		if ((tmp7)){
			HX_STACK_LINE(789)
			return null();
		}
		HX_STACK_LINE(794)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(794)
		this->ontouchup(tmp8);
		HX_STACK_LINE(795)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(795)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),795,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_touchup","\x5b","\x85","\xb0","\x12"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(795)
		this->emit((int)22,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchup,(void))

Void Entity_obj::_touchmove( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_touchmove",0x626edea4,"luxe.Entity._touchmove","luxe/Entity.hx",799,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(801)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(801)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(801)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(801)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(801)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(801)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(801)
		if ((tmp4)){
			HX_STACK_LINE(801)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(801)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(801)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(801)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(801)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(801)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(801)
			tmp5 = true;
		}
		HX_STACK_LINE(801)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(801)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(801)
		if ((tmp6)){
			HX_STACK_LINE(801)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(801)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(801)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(801)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(801)
			tmp7 = true;
		}
		HX_STACK_LINE(801)
		if ((tmp7)){
			HX_STACK_LINE(802)
			return null();
		}
		HX_STACK_LINE(807)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(807)
		this->ontouchmove(tmp8);
		HX_STACK_LINE(808)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(808)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),808,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_touchmove","\x11","\xc2","\x96","\x7e"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(808)
		this->emit((int)23,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_touchmove,(void))

Void Entity_obj::_gamepadaxis( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepadaxis",0xeb82b716,"luxe.Entity._gamepadaxis","luxe/Entity.hx",813,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(815)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(815)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(815)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(815)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(815)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(815)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(815)
		if ((tmp4)){
			HX_STACK_LINE(815)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(815)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(815)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(815)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(815)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(815)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(815)
			tmp5 = true;
		}
		HX_STACK_LINE(815)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(815)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(815)
		if ((tmp6)){
			HX_STACK_LINE(815)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(815)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(815)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(815)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(815)
			tmp7 = true;
		}
		HX_STACK_LINE(815)
		if ((tmp7)){
			HX_STACK_LINE(816)
			return null();
		}
		HX_STACK_LINE(821)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(821)
		this->ongamepadaxis(tmp8);
		HX_STACK_LINE(822)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(822)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),822,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_gamepadaxis","\xc3","\x0f","\xfc","\x4b"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(822)
		this->emit((int)24,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepadaxis,(void))

Void Entity_obj::_gamepaddown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepaddown",0xed7792d7,"luxe.Entity._gamepaddown","luxe/Entity.hx",826,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(828)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(828)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(828)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(828)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(828)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(828)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(828)
		if ((tmp4)){
			HX_STACK_LINE(828)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(828)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(828)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(828)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(828)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(828)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(828)
			tmp5 = true;
		}
		HX_STACK_LINE(828)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(828)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(828)
		if ((tmp6)){
			HX_STACK_LINE(828)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(828)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(828)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(828)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(828)
			tmp7 = true;
		}
		HX_STACK_LINE(828)
		if ((tmp7)){
			HX_STACK_LINE(829)
			return null();
		}
		HX_STACK_LINE(834)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(834)
		this->ongamepaddown(tmp8);
		HX_STACK_LINE(835)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(835)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),835,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_gamepaddown","\x84","\xeb","\xf0","\x4d"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(835)
		this->emit((int)25,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepaddown,(void))

Void Entity_obj::_gamepadup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepadup",0x9eb30990,"luxe.Entity._gamepadup","luxe/Entity.hx",839,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(841)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(841)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(841)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(841)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(841)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(841)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(841)
		if ((tmp4)){
			HX_STACK_LINE(841)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(841)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(841)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(841)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(841)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(841)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(841)
			tmp5 = true;
		}
		HX_STACK_LINE(841)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(841)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(841)
		if ((tmp6)){
			HX_STACK_LINE(841)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(841)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(841)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(841)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(841)
			tmp7 = true;
		}
		HX_STACK_LINE(841)
		if ((tmp7)){
			HX_STACK_LINE(842)
			return null();
		}
		HX_STACK_LINE(847)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(847)
		this->ongamepadup(tmp8);
		HX_STACK_LINE(848)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(848)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),848,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_gamepadup","\xfd","\xec","\xda","\xba"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(848)
		this->emit((int)26,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepadup,(void))

Void Entity_obj::_gamepaddevice( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_gamepaddevice",0x25f4be4b,"luxe.Entity._gamepaddevice","luxe/Entity.hx",852,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(854)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(854)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(854)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(854)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(854)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(854)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(854)
		if ((tmp4)){
			HX_STACK_LINE(854)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(854)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(854)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(854)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(854)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(854)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(854)
			tmp5 = true;
		}
		HX_STACK_LINE(854)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(854)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(854)
		if ((tmp6)){
			HX_STACK_LINE(854)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(854)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(854)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(854)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(854)
			tmp7 = true;
		}
		HX_STACK_LINE(854)
		if ((tmp7)){
			HX_STACK_LINE(855)
			return null();
		}
		HX_STACK_LINE(860)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(860)
		this->ongamepaddevice(tmp8);
		HX_STACK_LINE(861)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(861)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),861,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_gamepaddevice","\x38","\x5c","\xf7","\x99"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(861)
		this->emit((int)27,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_gamepaddevice,(void))

Void Entity_obj::_windowmoved( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowmoved",0x6f9b4797,"luxe.Entity._windowmoved","luxe/Entity.hx",867,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(869)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(869)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(869)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(869)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(869)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(869)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(869)
		if ((tmp4)){
			HX_STACK_LINE(869)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(869)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(869)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(869)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(869)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(869)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(869)
			tmp5 = true;
		}
		HX_STACK_LINE(869)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(869)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(869)
		if ((tmp6)){
			HX_STACK_LINE(869)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(869)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(869)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(869)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(869)
			tmp7 = true;
		}
		HX_STACK_LINE(869)
		if ((tmp7)){
			HX_STACK_LINE(870)
			return null();
		}
		HX_STACK_LINE(875)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(875)
		this->onwindowmoved(tmp8);
		HX_STACK_LINE(876)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(876)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),876,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_windowmoved","\x44","\xa0","\x14","\xd0"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(876)
		this->emit((int)29,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowmoved,(void))

Void Entity_obj::_windowresized( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowresized",0x1b897854,"luxe.Entity._windowresized","luxe/Entity.hx",880,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(882)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(882)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(882)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(882)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(882)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(882)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(882)
		if ((tmp4)){
			HX_STACK_LINE(882)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(882)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(882)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(882)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(882)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(882)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(882)
			tmp5 = true;
		}
		HX_STACK_LINE(882)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(882)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(882)
		if ((tmp6)){
			HX_STACK_LINE(882)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(882)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(882)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(882)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(882)
			tmp7 = true;
		}
		HX_STACK_LINE(882)
		if ((tmp7)){
			HX_STACK_LINE(883)
			return null();
		}
		HX_STACK_LINE(888)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(888)
		this->onwindowresized(tmp8);
		HX_STACK_LINE(889)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(889)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),889,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_windowresized","\x41","\x16","\x8c","\x8f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(889)
		this->emit((int)30,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowresized,(void))

Void Entity_obj::_windowsized( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowsized",0xe00e83e7,"luxe.Entity._windowsized","luxe/Entity.hx",893,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(895)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(895)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(895)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(895)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(895)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(895)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(895)
		if ((tmp4)){
			HX_STACK_LINE(895)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(895)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(895)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(895)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(895)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(895)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(895)
			tmp5 = true;
		}
		HX_STACK_LINE(895)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(895)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(895)
		if ((tmp6)){
			HX_STACK_LINE(895)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(895)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(895)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(895)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(895)
			tmp7 = true;
		}
		HX_STACK_LINE(895)
		if ((tmp7)){
			HX_STACK_LINE(896)
			return null();
		}
		HX_STACK_LINE(901)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(901)
		this->onwindowsized(tmp8);
		HX_STACK_LINE(902)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(902)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),902,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_windowsized","\x94","\xdc","\x87","\x40"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(902)
		this->emit((int)31,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowsized,(void))

Void Entity_obj::_windowminimized( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowminimized",0xa7bef8ea,"luxe.Entity._windowminimized","luxe/Entity.hx",906,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(908)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(908)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(908)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(908)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(908)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(908)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(908)
		if ((tmp4)){
			HX_STACK_LINE(908)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(908)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(908)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(908)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(908)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(908)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(908)
			tmp5 = true;
		}
		HX_STACK_LINE(908)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(908)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(908)
		if ((tmp6)){
			HX_STACK_LINE(908)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(908)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(908)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(908)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(908)
			tmp7 = true;
		}
		HX_STACK_LINE(908)
		if ((tmp7)){
			HX_STACK_LINE(909)
			return null();
		}
		HX_STACK_LINE(914)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(914)
		this->onwindowminimized(tmp8);
		HX_STACK_LINE(915)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(915)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),915,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_windowminimized","\x17","\xac","\x16","\x18"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(915)
		this->emit((int)32,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowminimized,(void))

Void Entity_obj::_windowrestored( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_windowrestored",0x4aecb872,"luxe.Entity._windowrestored","luxe/Entity.hx",919,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(921)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(921)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(921)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(921)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(921)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(921)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(921)
		if ((tmp4)){
			HX_STACK_LINE(921)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(921)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(921)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(921)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(921)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(921)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(921)
			tmp5 = true;
		}
		HX_STACK_LINE(921)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(921)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(921)
		if ((tmp6)){
			HX_STACK_LINE(921)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(921)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(921)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(921)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(921)
			tmp7 = true;
		}
		HX_STACK_LINE(921)
		if ((tmp7)){
			HX_STACK_LINE(922)
			return null();
		}
		HX_STACK_LINE(927)
		Dynamic tmp8 = _event;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(927)
		this->onwindowrestored(tmp8);
		HX_STACK_LINE(928)
		Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(928)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),928,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_windowrestored","\xe5","\x49","\x34","\x59"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(928)
		this->emit((int)33,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_windowrestored,(void))

Void Entity_obj::_inputdown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_inputdown",0x5e3a21c0,"luxe.Entity._inputdown","luxe/Entity.hx",934,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(936)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(936)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(936)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(936)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(936)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(936)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(936)
		if ((tmp4)){
			HX_STACK_LINE(936)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(936)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(936)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(936)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(936)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(936)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(936)
			tmp5 = true;
		}
		HX_STACK_LINE(936)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(936)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(936)
		if ((tmp6)){
			HX_STACK_LINE(936)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(936)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(936)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(936)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(936)
			tmp7 = true;
		}
		HX_STACK_LINE(936)
		if ((tmp7)){
			HX_STACK_LINE(937)
			return null();
		}
		HX_STACK_LINE(942)
		::String tmp8 = _event->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(942)
		Dynamic tmp9 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(942)
		this->oninputdown(tmp8,tmp9);
		HX_STACK_LINE(943)
		Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(943)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),943,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_inputdown","\x2d","\x05","\x62","\x7a"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(943)
		this->emit((int)15,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_inputdown,(void))

Void Entity_obj::_inputup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Entity","_inputup",0x335cdc39,"luxe.Entity._inputup","luxe/Entity.hx",947,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(949)
		bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(949)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(949)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(949)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(949)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(949)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(949)
		if ((tmp4)){
			HX_STACK_LINE(949)
			bool tmp6 = this->inited;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(949)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(949)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(949)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(949)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(949)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(949)
			tmp5 = true;
		}
		HX_STACK_LINE(949)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(949)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(949)
		if ((tmp6)){
			HX_STACK_LINE(949)
			bool tmp8 = this->started;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(949)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(949)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(949)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(949)
			tmp7 = true;
		}
		HX_STACK_LINE(949)
		if ((tmp7)){
			HX_STACK_LINE(950)
			return null();
		}
		HX_STACK_LINE(955)
		::String tmp8 = _event->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(955)
		Dynamic tmp9 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(955)
		this->oninputup(tmp8,tmp9);
		HX_STACK_LINE(956)
		Dynamic tmp10 = _event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(956)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),956,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_inputup","\x66","\x1a","\xd7","\x0d"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(956)
		this->emit((int)16,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_inputup,(void))

Float Entity_obj::get_fixed_rate( ){
	HX_STACK_FRAME("luxe.Entity","get_fixed_rate",0x56a59b27,"luxe.Entity.get_fixed_rate","luxe/Entity.hx",963,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(965)
	Float tmp = this->fixed_rate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(965)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_fixed_rate,return )

Float Entity_obj::set_fixed_rate( Float _rate){
	HX_STACK_FRAME("luxe.Entity","set_fixed_rate",0x76c5839b,"luxe.Entity.set_fixed_rate","luxe/Entity.hx",969,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rate,"_rate")
	HX_STACK_LINE(971)
	this->fixed_rate = _rate;
	HX_STACK_LINE(973)
	bool tmp = this->started;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(973)
	if ((tmp)){
		HX_STACK_LINE(974)
		{
			HX_STACK_LINE(974)
			::snow::api::Timer tmp1 = this->fixed_rate_timer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(974)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(974)
			if ((tmp2)){
				HX_STACK_LINE(974)
				::snow::api::Timer tmp3 = this->fixed_rate_timer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(974)
				tmp3->stop();
				HX_STACK_LINE(974)
				this->fixed_rate_timer = null();
			}
		}
		HX_STACK_LINE(974)
		bool tmp1 = (_rate != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(974)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(974)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(974)
		if ((tmp2)){
			HX_STACK_LINE(974)
			::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(974)
			::luxe::Entity tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(974)
			::luxe::Entity tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(974)
			tmp3 = (tmp6 == null());
		}
		else{
			HX_STACK_LINE(974)
			tmp3 = false;
		}
		HX_STACK_LINE(974)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(974)
		if ((tmp3)){
			HX_STACK_LINE(974)
			bool tmp5 = this->destroyed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(974)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(974)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(974)
			tmp4 = !(tmp7);
		}
		else{
			HX_STACK_LINE(974)
			tmp4 = false;
		}
		HX_STACK_LINE(974)
		if ((tmp4)){
			HX_STACK_LINE(974)
			::snow::api::Timer tmp5 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(974)
			this->fixed_rate_timer = tmp5;
			HX_STACK_LINE(974)
			Dynamic tmp6 = this->_fixed_update_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(974)
			::snow::api::Timer tmp7 = this->fixed_rate_timer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(974)
			tmp7->run = tmp6;
		}
	}
	HX_STACK_LINE(977)
	Float tmp1 = this->fixed_rate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(977)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_fixed_rate,return )

Void Entity_obj::_stop_fixed_rate_timer( ){
{
		HX_STACK_FRAME("luxe.Entity","_stop_fixed_rate_timer",0xf4198482,"luxe.Entity._stop_fixed_rate_timer","luxe/Entity.hx",981,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_LINE(983)
		::snow::api::Timer tmp = this->fixed_rate_timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(983)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(983)
		if ((tmp1)){
			HX_STACK_LINE(984)
			::snow::api::Timer tmp2 = this->fixed_rate_timer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(984)
			tmp2->stop();
			HX_STACK_LINE(985)
			this->fixed_rate_timer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,_stop_fixed_rate_timer,(void))

Void Entity_obj::_set_fixed_rate_timer( Float _rate,Dynamic _pos){
{
		HX_STACK_FRAME("luxe.Entity","_set_fixed_rate_timer",0x33475eba,"luxe.Entity._set_fixed_rate_timer","luxe/Entity.hx",990,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rate,"_rate")
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(992)
		{
			HX_STACK_LINE(992)
			::snow::api::Timer tmp = this->fixed_rate_timer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(992)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(992)
			if ((tmp1)){
				HX_STACK_LINE(992)
				::snow::api::Timer tmp2 = this->fixed_rate_timer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(992)
				tmp2->stop();
				HX_STACK_LINE(992)
				this->fixed_rate_timer = null();
			}
		}
		HX_STACK_LINE(997)
		bool tmp = (_rate != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(997)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(997)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(997)
		if ((tmp1)){
			HX_STACK_LINE(997)
			::luxe::Entity tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(997)
			::luxe::Entity tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(997)
			::luxe::Entity tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(997)
			tmp2 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(997)
			tmp2 = false;
		}
		HX_STACK_LINE(997)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(997)
		if ((tmp2)){
			HX_STACK_LINE(997)
			bool tmp4 = this->destroyed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(997)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(997)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(997)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(997)
			tmp3 = false;
		}
		HX_STACK_LINE(997)
		if ((tmp3)){
			HX_STACK_LINE(998)
			::snow::api::Timer tmp4 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(998)
			this->fixed_rate_timer = tmp4;
			HX_STACK_LINE(999)
			Dynamic tmp5 = this->_fixed_update_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(999)
			::snow::api::Timer tmp6 = this->fixed_rate_timer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(999)
			tmp6->run = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,_set_fixed_rate_timer,(void))

::luxe::structural::OrderedMap Entity_obj::get_components( ){
	HX_STACK_FRAME("luxe.Entity","get_components",0x5c119f72,"luxe.Entity.get_components","luxe/Entity.hx",1006,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1007)
	::luxe::components::Components tmp = this->_components;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1007)
	::luxe::structural::OrderedMap tmp1 = tmp->components;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1007)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_components,return )

Void Entity_obj::_add_child( ::luxe::Entity child){
{
		HX_STACK_FRAME("luxe.Entity","_add_child",0x04ab4a12,"luxe.Entity._add_child","luxe/Entity.hx",1013,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(1015)
		::luxe::Entity tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1015)
		this->children->push(tmp);
		HX_STACK_LINE(1020)
		::luxe::Scene tmp1 = child->get_scene();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1020)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1020)
		if ((tmp2)){
			HX_STACK_LINE(1022)
			::luxe::Scene tmp3 = child->get_scene();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1022)
			::luxe::Entity tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1022)
			bool tmp5 = tmp3->remove(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1022)
			bool removed = tmp5;		HX_STACK_VAR(removed,"removed");
		}
		else{
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_add_child,(void))

Void Entity_obj::_remove_child( ::luxe::Entity child){
{
		HX_STACK_FRAME("luxe.Entity","_remove_child",0x54f46c4d,"luxe.Entity._remove_child","luxe/Entity.hx",1030,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(1032)
		::luxe::Entity tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1032)
		this->children->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,_remove_child,(void))

Void Entity_obj::set_pos_from_transform( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Entity","set_pos_from_transform",0x2a7e6b72,"luxe.Entity.set_pos_from_transform","luxe/Entity.hx",1038,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(1041)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1041)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1041)
		if ((tmp1)){
			HX_STACK_LINE(1042)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1042)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1042)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1042)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1042)
			while((true)){
				HX_STACK_LINE(1042)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1042)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1042)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1042)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1042)
				if ((tmp8)){
					HX_STACK_LINE(1042)
					break;
				}
				HX_STACK_LINE(1042)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1042)
				{
					HX_STACK_LINE(1042)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1042)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1042)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1042)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1042)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1042)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1042)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1042)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1043)
				::phoenix::Vector tmp10 = _pos;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1043)
				_component->entity_pos_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pos_from_transform,(void))

Void Entity_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Entity","set_rotation_from_transform",0xf7a74368,"luxe.Entity.set_rotation_from_transform","luxe/Entity.hx",1049,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(1052)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1052)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1052)
		if ((tmp1)){
			HX_STACK_LINE(1053)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1053)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1053)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1053)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1053)
			while((true)){
				HX_STACK_LINE(1053)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1053)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1053)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1053)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1053)
				if ((tmp8)){
					HX_STACK_LINE(1053)
					break;
				}
				HX_STACK_LINE(1053)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1053)
				{
					HX_STACK_LINE(1053)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1053)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1053)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1053)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1053)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1053)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1053)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1053)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1054)
				::phoenix::Quaternion tmp10 = _rotation;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1054)
				_component->entity_rotation_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_rotation_from_transform,(void))

Void Entity_obj::set_scale_from_transform( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("luxe.Entity","set_scale_from_transform",0x0154d33c,"luxe.Entity.set_scale_from_transform","luxe/Entity.hx",1060,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(1063)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1063)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1063)
		if ((tmp1)){
			HX_STACK_LINE(1064)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1064)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1064)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1064)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1064)
			while((true)){
				HX_STACK_LINE(1064)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1064)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1064)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1064)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1064)
				if ((tmp8)){
					HX_STACK_LINE(1064)
					break;
				}
				HX_STACK_LINE(1064)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1064)
				{
					HX_STACK_LINE(1064)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1064)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1064)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1064)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1064)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1064)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1064)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1064)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1065)
				::phoenix::Vector tmp10 = _scale;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1065)
				_component->entity_scale_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scale_from_transform,(void))

Void Entity_obj::set_origin_from_transform( ::phoenix::Vector _origin){
{
		HX_STACK_FRAME("luxe.Entity","set_origin_from_transform",0x1a1cb7c0,"luxe.Entity.set_origin_from_transform","luxe/Entity.hx",1071,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_origin,"_origin")
		HX_STACK_LINE(1074)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1074)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1074)
		if ((tmp1)){
			HX_STACK_LINE(1075)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1075)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1075)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1075)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1075)
			while((true)){
				HX_STACK_LINE(1075)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1075)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1075)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1075)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1075)
				if ((tmp8)){
					HX_STACK_LINE(1075)
					break;
				}
				HX_STACK_LINE(1075)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1075)
				{
					HX_STACK_LINE(1075)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1075)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1075)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1075)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1075)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1075)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1075)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1075)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1076)
				::phoenix::Vector tmp10 = _origin;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1076)
				_component->entity_origin_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_origin_from_transform,(void))

Void Entity_obj::set_parent_from_transform( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("luxe.Entity","set_parent_from_transform",0xc1ab18fc,"luxe.Entity.set_parent_from_transform","luxe/Entity.hx",1082,0x55caa482)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
		HX_STACK_LINE(1085)
		int tmp = this->component_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1085)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1085)
		if ((tmp1)){
			HX_STACK_LINE(1086)
			::luxe::components::Components tmp2 = this->_components;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1086)
			::luxe::structural::OrderedMap tmp3 = tmp2->components;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1086)
			::luxe::structural::OrderedMapIterator tmp4 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1086)
			::luxe::structural::OrderedMapIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1086)
			while((true)){
				HX_STACK_LINE(1086)
				int tmp5 = _g->index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1086)
				int tmp6 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1086)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1086)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1086)
				if ((tmp8)){
					HX_STACK_LINE(1086)
					break;
				}
				HX_STACK_LINE(1086)
				::luxe::Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1086)
				{
					HX_STACK_LINE(1086)
					int tmp10 = (_g->index)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1086)
					::String tmp11 = _g->map->_keys->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1086)
					::String key = tmp11;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1086)
					::haxe::ds::StringMap tmp12 = _g->map->map;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1086)
					::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1086)
					::luxe::Component tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1086)
					tmp9 = tmp14;
				}
				HX_STACK_LINE(1086)
				::luxe::Component _component = tmp9;		HX_STACK_VAR(_component,"_component");
				HX_STACK_LINE(1087)
				::phoenix::Transform tmp10 = _parent;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1087)
				_component->entity_parent_change(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_parent_from_transform,(void))

::phoenix::Vector Entity_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Entity","set_pos",0x94cc50c4,"luxe.Entity.set_pos","luxe/Entity.hx",1095,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(1097)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1097)
	{
		HX_STACK_LINE(1097)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1097)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1097)
		{
			HX_STACK_LINE(1097)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1097)
			_this1->pos = _p;
			HX_STACK_LINE(1097)
			bool tmp2 = (_p != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1097)
			if ((tmp2)){
				HX_STACK_LINE(1097)
				::phoenix::Vector tmp3 = _this1->pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1097)
				Dynamic tmp4 = _this1->_pos_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1097)
				::phoenix::Vector_obj::Listen(tmp3,tmp4);
				HX_STACK_LINE(1097)
				{
					HX_STACK_LINE(1097)
					bool tmp5 = (_this1->pos_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1097)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1097)
					if ((tmp5)){
						HX_STACK_LINE(1097)
						bool tmp7 = _this1->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1097)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1097)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(1097)
						tmp6 = false;
					}
					HX_STACK_LINE(1097)
					if ((tmp6)){
						HX_STACK_LINE(1097)
						::phoenix::Vector tmp7 = _this1->pos;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1097)
						_this1->pos_changed(tmp7);
					}
				}
			}
			HX_STACK_LINE(1097)
			tmp = _this1->pos;
		}
	}
	HX_STACK_LINE(1097)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_pos,return )

::phoenix::Vector Entity_obj::get_pos( ){
	HX_STACK_FRAME("luxe.Entity","get_pos",0xa1cabfb8,"luxe.Entity.get_pos","luxe/Entity.hx",1101,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1103)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1103)
	{
		HX_STACK_LINE(1103)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1103)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1103)
		tmp = _this->local->pos;
	}
	HX_STACK_LINE(1103)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_pos,return )

::phoenix::Quaternion Entity_obj::set_rotation( ::phoenix::Quaternion _r){
	HX_STACK_FRAME("luxe.Entity","set_rotation",0x721fbc0e,"luxe.Entity.set_rotation","luxe/Entity.hx",1109,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(1111)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1111)
	{
		HX_STACK_LINE(1111)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1111)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1111)
		{
			HX_STACK_LINE(1111)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1111)
			_this1->rotation = _r;
			HX_STACK_LINE(1111)
			bool tmp2 = (_r != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1111)
			if ((tmp2)){
				HX_STACK_LINE(1111)
				{
					HX_STACK_LINE(1111)
					::phoenix::Quaternion _q = _this1->rotation;		HX_STACK_VAR(_q,"_q");
					HX_STACK_LINE(1111)
					Dynamic listener = _this1->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(1111)
					_q->listen_x = listener;
					HX_STACK_LINE(1111)
					_q->listen_y = listener;
					HX_STACK_LINE(1111)
					_q->listen_z = listener;
					HX_STACK_LINE(1111)
					_q->listen_w = listener;
				}
				HX_STACK_LINE(1111)
				{
					HX_STACK_LINE(1111)
					bool tmp3 = (_this1->rotation_changed != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1111)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1111)
					if ((tmp3)){
						HX_STACK_LINE(1111)
						bool tmp5 = _this1->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1111)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1111)
						tmp4 = !(tmp6);
					}
					else{
						HX_STACK_LINE(1111)
						tmp4 = false;
					}
					HX_STACK_LINE(1111)
					if ((tmp4)){
						HX_STACK_LINE(1111)
						::phoenix::Quaternion tmp5 = _this1->rotation;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1111)
						_this1->rotation_changed(tmp5);
					}
				}
			}
			HX_STACK_LINE(1111)
			tmp = _this1->rotation;
		}
	}
	HX_STACK_LINE(1111)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_rotation,return )

::phoenix::Quaternion Entity_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.Entity","get_rotation",0x5d26989a,"luxe.Entity.get_rotation","luxe/Entity.hx",1115,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1117)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1117)
	{
		HX_STACK_LINE(1117)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1117)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1117)
		tmp = _this->local->rotation;
	}
	HX_STACK_LINE(1117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_rotation,return )

::phoenix::Vector Entity_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("luxe.Entity","set_scale",0x4f4cedba,"luxe.Entity.set_scale","luxe/Entity.hx",1123,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(1125)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1125)
	{
		HX_STACK_LINE(1125)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1125)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1125)
		{
			HX_STACK_LINE(1125)
			::phoenix::Spatial _this1 = _this->local;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1125)
			_this1->scale = _s;
			HX_STACK_LINE(1125)
			bool tmp2 = (_s != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1125)
			if ((tmp2)){
				HX_STACK_LINE(1125)
				::phoenix::Vector tmp3 = _this1->scale;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1125)
				Dynamic tmp4 = _this1->_scale_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1125)
				::phoenix::Vector_obj::Listen(tmp3,tmp4);
				HX_STACK_LINE(1125)
				{
					HX_STACK_LINE(1125)
					bool tmp5 = (_this1->scale_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1125)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1125)
					if ((tmp5)){
						HX_STACK_LINE(1125)
						bool tmp7 = _this1->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1125)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1125)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(1125)
						tmp6 = false;
					}
					HX_STACK_LINE(1125)
					if ((tmp6)){
						HX_STACK_LINE(1125)
						::phoenix::Vector tmp7 = _this1->scale;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1125)
						_this1->scale_changed(tmp7);
					}
				}
			}
			HX_STACK_LINE(1125)
			tmp = _this1->scale;
		}
	}
	HX_STACK_LINE(1125)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scale,return )

::phoenix::Vector Entity_obj::get_scale( ){
	HX_STACK_FRAME("luxe.Entity","get_scale",0x6bfc01ae,"luxe.Entity.get_scale","luxe/Entity.hx",1129,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1131)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	{
		HX_STACK_LINE(1131)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1131)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1131)
		tmp = _this->local->scale;
	}
	HX_STACK_LINE(1131)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scale,return )

::phoenix::Vector Entity_obj::set_origin( ::phoenix::Vector _origin){
	HX_STACK_FRAME("luxe.Entity","set_origin",0x22de44b6,"luxe.Entity.set_origin","luxe/Entity.hx",1137,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_origin,"_origin")
	HX_STACK_LINE(1139)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1139)
	{
		HX_STACK_LINE(1139)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1139)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1139)
		{
			HX_STACK_LINE(1139)
			_this->dirty = true;
			HX_STACK_LINE(1139)
			bool tmp2 = _this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1139)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1139)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1139)
			if ((tmp3)){
				HX_STACK_LINE(1139)
				bool tmp5 = _this->_setup;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1139)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1139)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1139)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(1139)
				tmp4 = false;
			}
			HX_STACK_LINE(1139)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1139)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1139)
			if ((tmp5)){
				HX_STACK_LINE(1139)
				tmp6 = (_this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(1139)
				tmp6 = false;
			}
			HX_STACK_LINE(1139)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1139)
			if ((tmp6)){
				HX_STACK_LINE(1139)
				int tmp8 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1139)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1139)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(1139)
				tmp7 = false;
			}
			HX_STACK_LINE(1139)
			if ((tmp7)){
				HX_STACK_LINE(1139)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1139)
				cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1139)
				while((true)){
					HX_STACK_LINE(1139)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1139)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1139)
					if ((tmp9)){
						HX_STACK_LINE(1139)
						break;
					}
					HX_STACK_LINE(1139)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1139)
					Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1139)
					++(_g);
					HX_STACK_LINE(1139)
					bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1139)
					if ((tmp11)){
						HX_STACK_LINE(1139)
						::phoenix::Transform tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1139)
						_handler(tmp12).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(1139)
			_this->dirty;
		}
		HX_STACK_LINE(1139)
		_this->origin = _origin;
		HX_STACK_LINE(1139)
		bool tmp2 = (_this->_origin_handlers != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1139)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1139)
		if ((tmp2)){
			HX_STACK_LINE(1139)
			int tmp4 = _this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1139)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1139)
			tmp3 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(1139)
			tmp3 = false;
		}
		HX_STACK_LINE(1139)
		if ((tmp3)){
			HX_STACK_LINE(1139)
			::phoenix::Vector _origin1 = _this->origin;		HX_STACK_VAR(_origin1,"_origin1");
			HX_STACK_LINE(1139)
			{
				HX_STACK_LINE(1139)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1139)
				cpp::ArrayBase _g1 = _this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1139)
				while((true)){
					HX_STACK_LINE(1139)
					bool tmp4 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1139)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1139)
					if ((tmp5)){
						HX_STACK_LINE(1139)
						break;
					}
					HX_STACK_LINE(1139)
					Dynamic tmp6 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1139)
					Dynamic _handler = tmp6;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1139)
					++(_g);
					HX_STACK_LINE(1139)
					bool tmp7 = (_handler != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1139)
					if ((tmp7)){
						HX_STACK_LINE(1139)
						::phoenix::Vector tmp8 = _origin1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1139)
						_handler(tmp8).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(1139)
		tmp = _this->origin;
	}
	HX_STACK_LINE(1139)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_origin,return )

::phoenix::Vector Entity_obj::get_origin( ){
	HX_STACK_FRAME("luxe.Entity","get_origin",0x1f60a642,"luxe.Entity.get_origin","luxe/Entity.hx",1144,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1146)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1146)
	{
		HX_STACK_LINE(1146)
		::phoenix::Transform tmp1 = this->get_transform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1146)
		::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1146)
		tmp = _this->origin;
	}
	HX_STACK_LINE(1146)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_origin,return )

::phoenix::Transform Entity_obj::set_transform( ::phoenix::Transform _transform){
	HX_STACK_FRAME("luxe.Entity","set_transform",0x4248a49c,"luxe.Entity.set_transform","luxe/Entity.hx",1152,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_transform,"_transform")
	HX_STACK_LINE(1154)
	::phoenix::Transform tmp = this->transform = _transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_transform,return )

::phoenix::Transform Entity_obj::get_transform( ){
	HX_STACK_FRAME("luxe.Entity","get_transform",0xfd42c290,"luxe.Entity.get_transform","luxe/Entity.hx",1159,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1161)
	::phoenix::Transform tmp = this->transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1161)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_transform,return )

::luxe::Entity Entity_obj::set_parent( ::luxe::Entity other){
	HX_STACK_FRAME("luxe.Entity","set_parent",0xc55b2ffa,"luxe.Entity.set_parent","luxe/Entity.hx",1167,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(1169)
	{
		HX_STACK_LINE(1169)
		bool tmp = (other != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1169)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1169)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( Entity setting itself as parent makes no sense","\x46","\xc2","\x5f","\x7a");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1169)
			::String tmp4 = (HX_HCSTRING("other != this","\xb2","\xe2","\x97","\xd0") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1169)
			::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1169)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(1175)
	::luxe::Entity tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1175)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1175)
	if ((tmp1)){
		HX_STACK_LINE(1176)
		::luxe::Entity tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1176)
		tmp2->_remove_child(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(1180)
	this->parent = other;
	HX_STACK_LINE(1184)
	::luxe::Entity tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1184)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1184)
	if ((tmp3)){
		HX_STACK_LINE(1185)
		::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1185)
		tmp4->_add_child(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(1186)
		{
			HX_STACK_LINE(1186)
			::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1186)
			::phoenix::Transform _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1186)
			::luxe::Entity tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1186)
			::phoenix::Transform tmp7 = tmp6->get_transform();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1186)
			::phoenix::Transform _p = tmp7;		HX_STACK_VAR(_p,"_p");
			HX_STACK_LINE(1186)
			{
				HX_STACK_LINE(1186)
				_this->dirty = true;
				HX_STACK_LINE(1186)
				bool tmp8 = _this->dirty;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1186)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1186)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1186)
				if ((tmp9)){
					HX_STACK_LINE(1186)
					bool tmp11 = _this->_setup;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1186)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1186)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1186)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(1186)
					tmp10 = false;
				}
				HX_STACK_LINE(1186)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1186)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1186)
				if ((tmp11)){
					HX_STACK_LINE(1186)
					tmp12 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(1186)
					tmp12 = false;
				}
				HX_STACK_LINE(1186)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1186)
				if ((tmp12)){
					HX_STACK_LINE(1186)
					int tmp14 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1186)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1186)
					tmp13 = (tmp15 > (int)0);
				}
				else{
					HX_STACK_LINE(1186)
					tmp13 = false;
				}
				HX_STACK_LINE(1186)
				if ((tmp13)){
					HX_STACK_LINE(1186)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1186)
					cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1186)
					while((true)){
						HX_STACK_LINE(1186)
						bool tmp14 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1186)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1186)
						if ((tmp15)){
							HX_STACK_LINE(1186)
							break;
						}
						HX_STACK_LINE(1186)
						Dynamic tmp16 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1186)
						Dynamic _handler = tmp16;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(1186)
						++(_g);
						HX_STACK_LINE(1186)
						bool tmp17 = (_handler != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1186)
						if ((tmp17)){
							HX_STACK_LINE(1186)
							::phoenix::Transform tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1186)
							_handler(tmp18).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(1186)
				_this->dirty;
			}
			HX_STACK_LINE(1186)
			bool tmp8 = (_this->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1186)
			if ((tmp8)){
				HX_STACK_LINE(1186)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(1186)
				bool tmp9 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1186)
				if ((tmp9)){
					HX_STACK_LINE(1186)
					false;
				}
				else{
					HX_STACK_LINE(1186)
					Dynamic tmp10 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1186)
					_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp10);
				}
			}
			HX_STACK_LINE(1186)
			_this->parent = _p;
			HX_STACK_LINE(1186)
			bool tmp9 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1186)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1186)
			if ((tmp9)){
				HX_STACK_LINE(1186)
				int tmp11 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1186)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1186)
				tmp10 = (tmp12 > (int)0);
			}
			else{
				HX_STACK_LINE(1186)
				tmp10 = false;
			}
			HX_STACK_LINE(1186)
			if ((tmp10)){
				HX_STACK_LINE(1186)
				::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(1186)
				{
					HX_STACK_LINE(1186)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1186)
					cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1186)
					while((true)){
						HX_STACK_LINE(1186)
						bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1186)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1186)
						if ((tmp12)){
							HX_STACK_LINE(1186)
							break;
						}
						HX_STACK_LINE(1186)
						Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1186)
						Dynamic _handler = tmp13;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(1186)
						++(_g);
						HX_STACK_LINE(1186)
						bool tmp14 = (_handler != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1186)
						if ((tmp14)){
							HX_STACK_LINE(1186)
							::phoenix::Transform tmp15 = _parent;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1186)
							_handler(tmp15).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(1186)
			bool tmp11 = (_this->parent != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1186)
			if ((tmp11)){
				HX_STACK_LINE(1186)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(1186)
				bool tmp12 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1186)
				if ((tmp12)){
					HX_STACK_LINE(1186)
					_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(1186)
				Dynamic tmp13 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1186)
				_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
			}
			HX_STACK_LINE(1186)
			_this->parent;
		}
	}
	else{
		HX_STACK_LINE(1188)
		::phoenix::Transform tmp4 = this->get_transform();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1188)
		::phoenix::Transform _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1188)
		{
			HX_STACK_LINE(1188)
			_this->dirty = true;
			HX_STACK_LINE(1188)
			bool tmp5 = _this->dirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1188)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1188)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1188)
			if ((tmp6)){
				HX_STACK_LINE(1188)
				bool tmp8 = _this->_setup;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1188)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1188)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1188)
				tmp7 = !(tmp10);
			}
			else{
				HX_STACK_LINE(1188)
				tmp7 = false;
			}
			HX_STACK_LINE(1188)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1188)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1188)
			if ((tmp8)){
				HX_STACK_LINE(1188)
				tmp9 = (_this->_dirty_handlers != null());
			}
			else{
				HX_STACK_LINE(1188)
				tmp9 = false;
			}
			HX_STACK_LINE(1188)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1188)
			if ((tmp9)){
				HX_STACK_LINE(1188)
				int tmp11 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1188)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1188)
				tmp10 = (tmp12 > (int)0);
			}
			else{
				HX_STACK_LINE(1188)
				tmp10 = false;
			}
			HX_STACK_LINE(1188)
			if ((tmp10)){
				HX_STACK_LINE(1188)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1188)
				cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1188)
				while((true)){
					HX_STACK_LINE(1188)
					bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1188)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1188)
					if ((tmp12)){
						HX_STACK_LINE(1188)
						break;
					}
					HX_STACK_LINE(1188)
					Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1188)
					Dynamic _handler = tmp13;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1188)
					++(_g);
					HX_STACK_LINE(1188)
					bool tmp14 = (_handler != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1188)
					if ((tmp14)){
						HX_STACK_LINE(1188)
						::phoenix::Transform tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1188)
						_handler(tmp15).Cast< Void >();
					}
				}
			}
			HX_STACK_LINE(1188)
			_this->dirty;
		}
		HX_STACK_LINE(1188)
		bool tmp5 = (_this->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1188)
		if ((tmp5)){
			HX_STACK_LINE(1188)
			::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1188)
			bool tmp6 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1188)
			if ((tmp6)){
				HX_STACK_LINE(1188)
				false;
			}
			else{
				HX_STACK_LINE(1188)
				Dynamic tmp7 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1188)
				_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp7);
			}
		}
		HX_STACK_LINE(1188)
		_this->parent = null();
		HX_STACK_LINE(1188)
		bool tmp6 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1188)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1188)
		if ((tmp6)){
			HX_STACK_LINE(1188)
			int tmp8 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1188)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1188)
			tmp7 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(1188)
			tmp7 = false;
		}
		HX_STACK_LINE(1188)
		if ((tmp7)){
			HX_STACK_LINE(1188)
			::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
			HX_STACK_LINE(1188)
			{
				HX_STACK_LINE(1188)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1188)
				cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1188)
				while((true)){
					HX_STACK_LINE(1188)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1188)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1188)
					if ((tmp9)){
						HX_STACK_LINE(1188)
						break;
					}
					HX_STACK_LINE(1188)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1188)
					Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
					HX_STACK_LINE(1188)
					++(_g);
					HX_STACK_LINE(1188)
					bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1188)
					if ((tmp11)){
						HX_STACK_LINE(1188)
						::phoenix::Transform tmp12 = _parent;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1188)
						_handler(tmp12).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(1188)
		bool tmp8 = (_this->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1188)
		if ((tmp8)){
			HX_STACK_LINE(1188)
			::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(1188)
			bool tmp9 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1188)
			if ((tmp9)){
				HX_STACK_LINE(1188)
				_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
			}
			HX_STACK_LINE(1188)
			Dynamic tmp10 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1188)
			_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
		}
		HX_STACK_LINE(1188)
		_this->parent;
	}
	HX_STACK_LINE(1191)
	::luxe::Entity tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1191)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_parent,return )

::luxe::Entity Entity_obj::get_parent( ){
	HX_STACK_FRAME("luxe.Entity","get_parent",0xc1dd9186,"luxe.Entity.get_parent","luxe/Entity.hx",1195,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1197)
	::luxe::Entity tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1197)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_parent,return )

::luxe::Scene Entity_obj::set_scene( ::luxe::Scene _scene){
	HX_STACK_FRAME("luxe.Entity","set_scene",0x4f4ff87c,"luxe.Entity.set_scene","luxe/Entity.hx",1203,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_scene,"_scene")
	HX_STACK_LINE(1205)
	this->_detach_scene();
	HX_STACK_LINE(1207)
	this->scene = _scene;
	HX_STACK_LINE(1209)
	this->_attach_scene();
	HX_STACK_LINE(1211)
	::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1211)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_scene,return )

::luxe::Scene Entity_obj::get_scene( ){
	HX_STACK_FRAME("luxe.Entity","get_scene",0x6bff0c70,"luxe.Entity.get_scene","luxe/Entity.hx",1215,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1217)
	::luxe::Scene tmp = this->scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1217)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scene,return )

::String Entity_obj::set_name( ::String _name){
	HX_STACK_FRAME("luxe.Entity","set_name",0x9c9d491b,"luxe.Entity.set_name","luxe/Entity.hx",1223,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(1225)
	{
		HX_STACK_LINE(1225)
		bool tmp = (_name == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1225)
		if ((tmp)){
			HX_STACK_LINE(1225)
			::String tmp1 = HX_HCSTRING("_name was null","\x94","\x35","\xd3","\x43");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1225)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1225)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(1227)
	::luxe::Scene tmp = this->get_scene();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1227)
	::luxe::Scene _scene = tmp;		HX_STACK_VAR(_scene,"_scene");
	HX_STACK_LINE(1229)
	bool tmp1 = (_scene != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1229)
	if ((tmp1)){
		HX_STACK_LINE(1230)
		{
			HX_STACK_LINE(1230)
			::String tmp2 = this->get_name();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1230)
			::String key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(1230)
			::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1230)
			_scene->entities->remove(tmp3);
		}
		HX_STACK_LINE(1231)
		{
			HX_STACK_LINE(1231)
			::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1231)
			bool tmp3 = _scene->entities->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1231)
			if ((tmp3)){
				HX_STACK_LINE(1231)
				::String tmp4 = _scene->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1231)
				::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1231)
				::String tmp6 = (tmp5 + HX_HCSTRING(" / adding a second entity named ","\x25","\x7f","\xee","\xd9"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1231)
				::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1231)
				::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1231)
				::String tmp9 = (tmp8 + HX_HCSTRING("!\n                This will replace the existing one, possibly leaving the previous one in limbo.","\x8a","\x82","\xfa","\x6f"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1231)
				::String tmp10 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1231)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),91,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1231)
				::haxe::Log_obj::trace(tmp10,tmp11);
			}
		}
		HX_STACK_LINE(1232)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1232)
		_scene->entities->set(tmp2,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(1233)
		_scene->_has_changed = true;
	}
	HX_STACK_LINE(1236)
	::String tmp2 = this->name = _name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1236)
	return tmp2;
}


bool Entity_obj::set_active( bool _active){
	HX_STACK_FRAME("luxe.Entity","set_active",0xee236c96,"luxe.Entity.set_active","luxe/Entity.hx",1242,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_active,"_active")
	HX_STACK_LINE(1244)
	bool tmp = this->active = _active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1244)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_active,return )

bool Entity_obj::get_active( ){
	HX_STACK_FRAME("luxe.Entity","get_active",0xeaa5ce22,"luxe.Entity.get_active","luxe/Entity.hx",1248,0x55caa482)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1250)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1250)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_active,return )


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(fixed_rate,"fixed_rate");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(_components,"_components");
	HX_MARK_MEMBER_NAME(fixed_rate_timer,"fixed_rate_timer");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(component_count,"component_count");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(fixed_rate,"fixed_rate");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(_components,"_components");
	HX_VISIT_MEMBER_NAME(fixed_rate_timer,"fixed_rate_timer");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(component_count,"component_count");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"scene") ) { return inCallProp == hx::paccAlways ? get_scene() : scene; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return get_scale(); }
		if (HX_FIELD_EQ(inName,"_init") ) { return _init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp == hx::paccAlways ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"active") ) { return inCallProp == hx::paccAlways ? get_active() : active; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return get_origin(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return _reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyup") ) { return _keyup_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_any") ) { return get_any_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"_listen") ) { return _listen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"_keydown") ) { return _keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mouseup") ) { return _mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchup") ) { return _touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"_inputup") ) { return _inputup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"transform") ) { return inCallProp == hx::paccAlways ? get_transform() : transform; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		if (HX_FIELD_EQ(inName,"_unlisten") ) { return _unlisten_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { if (inCallProp == hx::paccAlways) return get_components(); }
		if (HX_FIELD_EQ(inName,"fixed_rate") ) { return inCallProp == hx::paccAlways ? get_fixed_rate() : fixed_rate; }
		if (HX_FIELD_EQ(inName,"_textinput") ) { return _textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousedown") ) { return _mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousemove") ) { return _mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchdown") ) { return _touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchmove") ) { return _touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepadup") ) { return _gamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"_inputdown") ) { return _inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"_add_child") ) { return _add_child_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_components") ) { return _components; }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"_mousewheel") ) { return _mousewheel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepadaxis") ) { return _gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepaddown") ) { return _gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowmoved") ) { return _windowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowsized") ) { return _windowsized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onfixedupdate") ) { return onfixedupdate_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowmoved") ) { return onwindowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
		if (HX_FIELD_EQ(inName,"_fixed_update") ) { return _fixed_update_dyn(); }
		if (HX_FIELD_EQ(inName,"_detach_scene") ) { return _detach_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_attach_scene") ) { return _attach_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_remove_child") ) { return _remove_child_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_gamepaddevice") ) { return _gamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowresized") ) { return _windowresized_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fixed_rate") ) { return get_fixed_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fixed_rate") ) { return set_fixed_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_components") ) { return get_components_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"onwindowresized") ) { return onwindowresized_dyn(); }
		if (HX_FIELD_EQ(inName,"component_count") ) { return component_count; }
		if (HX_FIELD_EQ(inName,"_windowrestored") ) { return _windowrestored_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fixed_rate_timer") ) { return fixed_rate_timer; }
		if (HX_FIELD_EQ(inName,"onwindowrestored") ) { return onwindowrestored_dyn(); }
		if (HX_FIELD_EQ(inName,"_windowminimized") ) { return _windowminimized_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onwindowminimized") ) { return onwindowminimized_dyn(); }
		if (HX_FIELD_EQ(inName,"_find_emit_source") ) { return _find_emit_source_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_set_fixed_rate_timer") ) { return _set_fixed_rate_timer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_stop_fixed_rate_timer") ) { return _stop_fixed_rate_timer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos_from_transform") ) { return set_pos_from_transform_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_scale_from_transform") ) { return set_scale_from_transform_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_origin_from_transform") ) { return set_origin_from_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent_from_transform") ) { return set_parent_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == hx::paccAlways) return set_scene(inValue);scene=inValue.Cast< ::luxe::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::luxe::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return set_parent(inValue);parent=inValue.Cast< ::luxe::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return set_active(inValue);active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return set_origin(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue);transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixed_rate") ) { if (inCallProp == hx::paccAlways) return set_fixed_rate(inValue);fixed_rate=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_components") ) { _components=inValue.Cast< ::luxe::components::Components >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"component_count") ) { component_count=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fixed_rate_timer") ) { fixed_rate_timer=inValue.Cast< ::snow::api::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Entity_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("components","\x16","\xb5","\x1e","\x5a"));
	outFields->push(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	outFields->push(HX_HCSTRING("fixed_rate","\xcb","\xb0","\xb2","\x54"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("_components","\x35","\x82","\xa8","\x2c"));
	outFields->push(HX_HCSTRING("fixed_rate_timer","\x11","\xe2","\x78","\xad"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("component_count","\x8d","\x28","\x8b","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Events*/ ,(int)offsetof(Entity_obj,events),HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Entity_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsBool,(int)offsetof(Entity_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{hx::fsBool,(int)offsetof(Entity_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsBool,(int)offsetof(Entity_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{hx::fsFloat,(int)offsetof(Entity_obj,fixed_rate),HX_HCSTRING("fixed_rate","\xcb","\xb0","\xb2","\x54")},
	{hx::fsObject /*::luxe::Entity*/ ,(int)offsetof(Entity_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::luxe::Scene*/ ,(int)offsetof(Entity_obj,scene),HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsBool,(int)offsetof(Entity_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Entity_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsObject /*::luxe::components::Components*/ ,(int)offsetof(Entity_obj,_components),HX_HCSTRING("_components","\x35","\x82","\xa8","\x2c")},
	{hx::fsObject /*::snow::api::Timer*/ ,(int)offsetof(Entity_obj,fixed_rate_timer),HX_HCSTRING("fixed_rate_timer","\x11","\xe2","\x78","\xad")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Entity_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsInt,(int)offsetof(Entity_obj,component_count),HX_HCSTRING("component_count","\x8d","\x28","\x8b","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("fixed_rate","\xcb","\xb0","\xb2","\x54"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("_components","\x35","\x82","\xa8","\x2c"),
	HX_HCSTRING("fixed_rate_timer","\x11","\xe2","\x78","\xad"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
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
	HX_HCSTRING("component_count","\x8d","\x28","\x8b","\xe8"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("get_any","\x83","\xc3","\xbe","\x26"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	HX_HCSTRING("_reset","\x10","\x91","\xaf","\xe2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"),
	HX_HCSTRING("_fixed_update","\x93","\x07","\x46","\x99"),
	HX_HCSTRING("_find_emit_source","\xa0","\x42","\x92","\x24"),
	HX_HCSTRING("_listen","\xe6","\xd9","\x70","\x5e"),
	HX_HCSTRING("_unlisten","\xbf","\xee","\xd6","\x39"),
	HX_HCSTRING("_detach_scene","\xff","\x50","\x20","\xf0"),
	HX_HCSTRING("_attach_scene","\xf1","\x50","\xea","\xb7"),
	HX_HCSTRING("_keyup","\xfb","\x1c","\xe6","\xda"),
	HX_HCSTRING("_keydown","\x02","\x97","\x26","\xeb"),
	HX_HCSTRING("_textinput","\xfe","\x5f","\x80","\x1f"),
	HX_HCSTRING("_mousedown","\xc8","\x00","\x8c","\x5f"),
	HX_HCSTRING("_mouseup","\x41","\x69","\x2b","\xfa"),
	HX_HCSTRING("_mousewheel","\x75","\x85","\xe3","\x26"),
	HX_HCSTRING("_mousemove","\x77","\xeb","\x7e","\x65"),
	HX_HCSTRING("_touchdown","\x62","\xd7","\xa3","\x78"),
	HX_HCSTRING("_touchup","\x5b","\x85","\xb0","\x12"),
	HX_HCSTRING("_touchmove","\x11","\xc2","\x96","\x7e"),
	HX_HCSTRING("_gamepadaxis","\xc3","\x0f","\xfc","\x4b"),
	HX_HCSTRING("_gamepaddown","\x84","\xeb","\xf0","\x4d"),
	HX_HCSTRING("_gamepadup","\xfd","\xec","\xda","\xba"),
	HX_HCSTRING("_gamepaddevice","\x38","\x5c","\xf7","\x99"),
	HX_HCSTRING("_windowmoved","\x44","\xa0","\x14","\xd0"),
	HX_HCSTRING("_windowresized","\x41","\x16","\x8c","\x8f"),
	HX_HCSTRING("_windowsized","\x94","\xdc","\x87","\x40"),
	HX_HCSTRING("_windowminimized","\x17","\xac","\x16","\x18"),
	HX_HCSTRING("_windowrestored","\xe5","\x49","\x34","\x59"),
	HX_HCSTRING("_inputdown","\x2d","\x05","\x62","\x7a"),
	HX_HCSTRING("_inputup","\x66","\x1a","\xd7","\x0d"),
	HX_HCSTRING("get_fixed_rate","\x14","\x39","\xa8","\xca"),
	HX_HCSTRING("set_fixed_rate","\x88","\x21","\xc8","\xea"),
	HX_HCSTRING("_stop_fixed_rate_timer","\x6f","\x57","\xff","\x90"),
	HX_HCSTRING("_set_fixed_rate_timer","\x6d","\x08","\x36","\x07"),
	HX_HCSTRING("get_components","\x5f","\x3d","\x14","\xd0"),
	HX_HCSTRING("_add_child","\x7f","\x2d","\xd3","\x20"),
	HX_HCSTRING("_remove_child","\x00","\xab","\xa8","\x5e"),
	HX_HCSTRING("set_pos_from_transform","\x5f","\x3e","\x64","\xc7"),
	HX_HCSTRING("set_rotation_from_transform","\x5b","\xb5","\xfc","\x30"),
	HX_HCSTRING("set_scale_from_transform","\x69","\xfb","\x86","\x01"),
	HX_HCSTRING("set_origin_from_transform","\xf3","\xb6","\xcd","\x45"),
	HX_HCSTRING("set_parent_from_transform","\x2f","\x18","\x5c","\xed"),
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
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("set_scene","\xaf","\x21","\xcc","\x9f"),
	HX_HCSTRING("get_scene","\xa3","\x35","\x7b","\xbc"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("get_active","\x8f","\xb1","\xcd","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#endif

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Entity_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
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
