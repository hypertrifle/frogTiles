#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
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
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
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
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_SceneDebugView
#include <luxe/debug/SceneDebugView.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap
#include <luxe/structural/OrderedMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMapIterator
#include <luxe/structural/OrderedMapIterator.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
namespace luxe{

Void Scene_obj::__construct(::String __o__name)
{
HX_STACK_FRAME("luxe.Scene","new",0x652ab566,"luxe.Scene.new","luxe/Scene.hx",10,0x14d4e1cb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__name,"_name")
::String _name = __o__name.Default(HX_HCSTRING("untitled scene","\xd1","\x1d","\x02","\xcb"));
{
	HX_STACK_LINE(97)
	this->entity_count = (int)0;
	HX_STACK_LINE(28)
	this->_has_changed = false;
	HX_STACK_LINE(19)
	this->length = (int)0;
	HX_STACK_LINE(17)
	this->started = false;
	HX_STACK_LINE(15)
	this->inited = false;
	HX_STACK_LINE(34)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	super::__construct(tmp,null());
	HX_STACK_LINE(36)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(36)
	this->entities = tmp1;
	HX_STACK_LINE(38)
	this->_delayed_init_entities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(39)
	this->_delayed_reset_entities = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Dynamic tmp3 = this->init_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		tmp2->emitter->on((int)2,tmp3,tmp4);
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		Dynamic tmp3 = this->_destroy_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		tmp2->emitter->on((int)8,tmp3,tmp4);
	}
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		Dynamic tmp3 = this->update_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		tmp2->emitter->on((int)6,tmp3,tmp4);
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		Dynamic tmp3 = this->prerender_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		tmp2->emitter->on((int)9,tmp3,tmp4);
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		Dynamic tmp3 = this->postrender_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		tmp2->emitter->on((int)11,tmp3,tmp4);
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		Dynamic tmp3 = this->render_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		tmp2->emitter->on((int)10,tmp3,tmp4);
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		Dynamic tmp3 = this->keydown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		tmp2->emitter->on((int)12,tmp3,tmp4);
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		Dynamic tmp3 = this->keyup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		tmp2->emitter->on((int)13,tmp3,tmp4);
	}
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		Dynamic tmp3 = this->textinput_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		tmp2->emitter->on((int)14,tmp3,tmp4);
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		Dynamic tmp3 = this->inputup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		tmp2->emitter->on((int)16,tmp3,tmp4);
	}
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		Dynamic tmp3 = this->inputdown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		tmp2->emitter->on((int)15,tmp3,tmp4);
	}
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		Dynamic tmp3 = this->mouseup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		tmp2->emitter->on((int)18,tmp3,tmp4);
	}
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		Dynamic tmp3 = this->mousedown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		tmp2->emitter->on((int)17,tmp3,tmp4);
	}
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Dynamic tmp3 = this->mousemove_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		tmp2->emitter->on((int)19,tmp3,tmp4);
	}
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Dynamic tmp3 = this->mousewheel_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		tmp2->emitter->on((int)20,tmp3,tmp4);
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Dynamic tmp3 = this->touchup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		tmp2->emitter->on((int)22,tmp3,tmp4);
	}
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		Dynamic tmp3 = this->touchdown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		tmp2->emitter->on((int)21,tmp3,tmp4);
	}
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		Dynamic tmp3 = this->touchmove_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		tmp2->emitter->on((int)23,tmp3,tmp4);
	}
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		Dynamic tmp3 = this->gamepadup_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		tmp2->emitter->on((int)26,tmp3,tmp4);
	}
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		Dynamic tmp3 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		tmp2->emitter->on((int)25,tmp3,tmp4);
	}
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		Dynamic tmp3 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		tmp2->emitter->on((int)24,tmp3,tmp4);
	}
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		Dynamic tmp3 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		tmp2->emitter->on((int)27,tmp3,tmp4);
	}
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		Dynamic tmp3 = this->windowmoved_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		tmp2->emitter->on((int)29,tmp3,tmp4);
	}
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		Dynamic tmp3 = this->windowresized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		tmp2->emitter->on((int)30,tmp3,tmp4);
	}
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		Dynamic tmp3 = this->windowsized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		tmp2->emitter->on((int)31,tmp3,tmp4);
	}
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		Dynamic tmp3 = this->windowminimized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		tmp2->emitter->on((int)32,tmp3,tmp4);
	}
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		Dynamic tmp3 = this->windowrestored_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		tmp2->emitter->on((int)33,tmp3,tmp4);
	}
	HX_STACK_LINE(77)
	::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	bool tmp3 = tmp2->inited;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	if ((tmp3)){
		HX_STACK_LINE(78)
		this->init(null());
	}
	HX_STACK_LINE(81)
	::luxe::Core tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	::luxe::debug::SceneDebugView tmp5 = tmp4->debug->get_view(HX_HCSTRING("Scenes","\xc7","\xbd","\x60","\x73"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	::luxe::debug::SceneDebugView _view = tmp5;		HX_STACK_VAR(_view,"_view");
	HX_STACK_LINE(82)
	bool tmp6 = (_view != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(82)
	if ((tmp6)){
		HX_STACK_LINE(83)
		_view->add_scene(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new(::String __o__name)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct(__o__name);
	return _result_;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Scene_obj::handle_duplicate_warning( ::String _name){
{
		HX_STACK_FRAME("luxe.Scene","handle_duplicate_warning",0x3544440b,"luxe.Scene.handle_duplicate_warning","luxe/Scene.hx",89,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(90)
		::haxe::ds::StringMap tmp = this->entities;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(91)
			::String tmp3 = this->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::String tmp5 = (tmp4 + HX_HCSTRING(" / adding a second entity named ","\x25","\x7f","\xee","\xd9"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			::String tmp8 = (tmp7 + HX_HCSTRING("!\n                This will replace the existing one, possibly leaving the previous one in limbo.","\x8a","\x82","\xfa","\x6f"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			::String tmp9 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),91,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(91)
			::haxe::Log_obj::trace(tmp9,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,handle_duplicate_warning,(void))

Void Scene_obj::add( ::luxe::Entity entity,Dynamic pos){
{
		HX_STACK_FRAME("luxe.Scene","add",0x6520d727,"luxe.Scene.add","luxe/Scene.hx",98,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entity,"entity")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			bool tmp = (entity == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(100)
			if ((tmp)){
				HX_STACK_LINE(230)
				::String tmp1 = HX_HCSTRING(" ( can't put entity in a scene if the entity is null.","\x59","\x09","\x49","\xef");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(230)
				::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				::String tmp3 = (HX_HCSTRING("entity was null","\x7b","\xc9","\xa5","\xaf") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::String tmp = entity->get_name();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(104)
			::String _name = tmp;		HX_STACK_VAR(_name,"_name");
			HX_STACK_LINE(104)
			::haxe::ds::StringMap tmp1 = this->entities;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			if ((tmp3)){
				HX_STACK_LINE(104)
				::String tmp4 = this->get_name();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				::String tmp6 = (tmp5 + HX_HCSTRING(" / adding a second entity named ","\x25","\x7f","\xee","\xd9"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(104)
				::String tmp9 = (tmp8 + HX_HCSTRING("!\n                This will replace the existing one, possibly leaving the previous one in limbo.","\x8a","\x82","\xfa","\x6f"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(104)
				::String tmp10 = (HX_HCSTRING("    i / scene / ","\xcd","\x27","\xce","\x13") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(104)
				Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),91,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(104)
				::haxe::Log_obj::trace(tmp10,tmp11);
			}
		}
		HX_STACK_LINE(106)
		entity->set_scene(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::String tmp = entity->get_name();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			::String key = tmp;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(107)
			::haxe::ds::StringMap tmp1 = this->entities;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			::luxe::Entity tmp3 = entity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			tmp1->set(tmp2,tmp3);
		}
		HX_STACK_LINE(108)
		(this->entity_count)++;
		HX_STACK_LINE(111)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		if ((tmp)){
			HX_STACK_LINE(113)
			::luxe::Entity tmp1 = entity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			this->_delayed_init_entities->push(tmp1);
		}
		HX_STACK_LINE(116)
		bool tmp1 = this->started;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		if ((tmp1)){
			HX_STACK_LINE(118)
			::luxe::Entity tmp2 = entity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			this->_delayed_reset_entities->push(tmp2);
		}
		HX_STACK_LINE(121)
		this->_has_changed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,add,(void))

bool Scene_obj::remove( ::luxe::Entity entity){
	HX_STACK_FRAME("luxe.Scene","remove",0x2b461efe,"luxe.Scene.remove","luxe/Scene.hx",126,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(entity,"entity")
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		bool tmp = (entity == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( can't remove entity from a scene if the entity is null.","\x09","\x82","\x06","\xc0");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			::String tmp3 = (HX_HCSTRING("entity was null","\x7b","\xc9","\xa5","\xaf") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(130)
	this->_has_changed = true;
	HX_STACK_LINE(132)
	::luxe::Scene tmp = entity->get_scene();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	if ((tmp1)){
		HX_STACK_LINE(134)
		entity->set_scene(null());
		HX_STACK_LINE(135)
		(this->entity_count)--;
		HX_STACK_LINE(136)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::String tmp3 = entity->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			::String key = tmp3;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(136)
			::haxe::ds::StringMap tmp4 = this->entities;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			tmp2 = tmp4->remove(tmp5);
		}
		HX_STACK_LINE(136)
		return tmp2;
	}
	else{
		HX_STACK_LINE(140)
		::String tmp2 = HX_HCSTRING("    i / scene / can't remove the entity from this scene, it is not mine (entity.scene != this)","\x6b","\xc2","\xc4","\xef");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),140,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		::haxe::Log_obj::trace(tmp2,tmp3);
		HX_STACK_LINE(141)
		return false;
	}
	HX_STACK_LINE(145)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,return )

Dynamic Scene_obj::get( ::String _name){
	HX_STACK_FRAME("luxe.Scene","get",0x6525659c,"luxe.Scene.get","luxe/Scene.hx",149,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(151)
	::haxe::ds::StringMap tmp = this->entities;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	::luxe::Entity tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(151)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,get,return )

Void Scene_obj::empty( ){
{
		HX_STACK_FRAME("luxe.Scene","empty",0xe3f8ed13,"luxe.Scene.empty","luxe/Scene.hx",160,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		int tmp = this->entity_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		if ((tmp1)){
			HX_STACK_LINE(172)
			::haxe::ds::StringMap tmp2 = this->entities;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp3);  __it->hasNext(); ){
				::luxe::Entity entity = __it->next();
				{
					HX_STACK_LINE(173)
					bool tmp4 = (entity != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(173)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(173)
					if ((tmp4)){
						HX_STACK_LINE(173)
						::luxe::Entity tmp6 = entity;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(173)
						::luxe::Camera tmp7 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(173)
						::luxe::Camera tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(173)
						tmp5 = (tmp6 != tmp8);
					}
					else{
						HX_STACK_LINE(173)
						tmp5 = false;
					}
					HX_STACK_LINE(173)
					if ((tmp5)){
						HX_STACK_LINE(174)
						::luxe::Entity tmp6 = entity;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(174)
						this->remove(tmp6);
						HX_STACK_LINE(175)
						entity->destroy(null());
						HX_STACK_LINE(176)
						entity = null();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,empty,(void))

Array< ::Dynamic > Scene_obj::get_named_like( ::String _name,Array< ::Dynamic > into){
	HX_STACK_FRAME("luxe.Scene","get_named_like",0x42ca57e0,"luxe.Scene.get_named_like","luxe/Scene.hx",194,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(into,"into")
	HX_STACK_LINE(196)
	int tmp = this->entity_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	if ((tmp1)){
		HX_STACK_LINE(197)
		::String tmp2 = (HX_HCSTRING("^((?:","\x79","\xa1","\x39","\x3a") + _name);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		::String tmp3 = (tmp2 + HX_HCSTRING(")[.]{1})","\x63","\xe3","\x56","\x33"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		::EReg tmp4 = ::EReg_obj::__new(tmp3,HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		::EReg _filter = tmp4;		HX_STACK_VAR(_filter,"_filter");
		HX_STACK_LINE(198)
		::haxe::ds::StringMap tmp5 = this->entities;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(198)
		Dynamic tmp6 = tmp5->iterator();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp6);  __it->hasNext(); ){
			::luxe::Entity _entity = __it->next();
			{
				HX_STACK_LINE(199)
				::String tmp7 = _entity->get_name();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(199)
				bool tmp8 = _filter->match(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(199)
				if ((tmp8)){
					HX_STACK_LINE(200)
					::luxe::Entity tmp9 = _entity;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(200)
					into->push(tmp9);
				}
			}
;
		}
	}
	HX_STACK_LINE(205)
	return into;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,get_named_like,return )

Void Scene_obj::render( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","render",0x2be6ee10,"luxe.Scene.render","luxe/Scene.hx",211,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(213)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),213,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		this->emit((int)10,null(),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,render,(void))

Void Scene_obj::prerender( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","prerender",0x8547753f,"luxe.Scene.prerender","luxe/Scene.hx",217,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(219)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),219,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("prerender","\xb9","\x07","\x36","\x2f"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		this->emit((int)9,null(),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,prerender,(void))

Void Scene_obj::postrender( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","postrender",0x1efbdf70,"luxe.Scene.postrender","luxe/Scene.hx",223,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(225)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),225,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("postrender","\xb6","\x77","\xcd","\x25"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		this->emit((int)11,null(),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,postrender,(void))

Void Scene_obj::keydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","keydown",0x70831d87,"luxe.Scene.keydown","luxe/Scene.hx",231,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(235)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),235,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		this->emit((int)12,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,keydown,(void))

Void Scene_obj::keyup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","keyup",0x531d8840,"luxe.Scene.keyup","luxe/Scene.hx",239,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(243)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),243,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		this->emit((int)13,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,keyup,(void))

Void Scene_obj::textinput( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","textinput",0x19ef51c3,"luxe.Scene.textinput","luxe/Scene.hx",247,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(251)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),251,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		this->emit((int)14,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,textinput,(void))

Void Scene_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mousedown",0x59faf28d,"luxe.Scene.mousedown","luxe/Scene.hx",257,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(261)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),261,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		this->emit((int)17,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousedown,(void))

Void Scene_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mousewheel",0x4d882010,"luxe.Scene.mousewheel","luxe/Scene.hx",265,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(269)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),269,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		this->emit((int)20,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousewheel,(void))

Void Scene_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mouseup",0x7f87efc6,"luxe.Scene.mouseup","luxe/Scene.hx",273,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(277)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),277,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		this->emit((int)18,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mouseup,(void))

Void Scene_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.Scene","mousemove",0x5feddd3c,"luxe.Scene.mousemove","luxe/Scene.hx",281,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(285)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),285,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		this->emit((int)19,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,mousemove,(void))

Void Scene_obj::touchdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","touchdown",0x7312c927,"luxe.Scene.touchdown","luxe/Scene.hx",291,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(293)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),293,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("touchdown","\xa1","\x5b","\x01","\x1d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		this->emit((int)21,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchdown,(void))

Void Scene_obj::touchup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","touchup",0x980d0be0,"luxe.Scene.touchup","luxe/Scene.hx",297,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(299)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),299,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("touchup","\xda","\x2b","\xf8","\xd8"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		this->emit((int)22,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchup,(void))

Void Scene_obj::touchmove( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","touchmove",0x7905b3d6,"luxe.Scene.touchmove","luxe/Scene.hx",303,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(305)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),305,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("touchmove","\x50","\x46","\xf4","\x22"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		this->emit((int)23,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,touchmove,(void))

Void Scene_obj::gamepadaxis( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepadaxis",0xf55ebcc8,"luxe.Scene.gamepadaxis","luxe/Scene.hx",311,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(313)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),313,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		this->emit((int)24,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepadaxis,(void))

Void Scene_obj::gamepadup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepadup",0xb549dec2,"luxe.Scene.gamepadup","luxe/Scene.hx",317,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(319)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),319,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("gamepadup","\x3c","\x71","\x38","\x5f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		this->emit((int)26,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepadup,(void))

Void Scene_obj::gamepaddown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepaddown",0xf7539889,"luxe.Scene.gamepaddown","luxe/Scene.hx",323,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(325)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),325,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		this->emit((int)25,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepaddown,(void))

Void Scene_obj::gamepaddevice( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","gamepaddevice",0x6323147d,"luxe.Scene.gamepaddevice","luxe/Scene.hx",329,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(331)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),331,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("gamepaddevice","\xf7","\x6b","\xa5","\x5b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		this->emit((int)27,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,gamepaddevice,(void))

Void Scene_obj::windowmoved( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowmoved",0x79774d49,"luxe.Scene.windowmoved","luxe/Scene.hx",338,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(340)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),340,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("windowmoved","\x43","\xf2","\x0a","\x6a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		this->emit((int)29,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowmoved,(void))

Void Scene_obj::windowresized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowresized",0x58b7ce86,"luxe.Scene.windowresized","luxe/Scene.hx",344,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(346)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),346,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("windowresized","\x00","\x26","\x3a","\x51"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		this->emit((int)30,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowresized,(void))

Void Scene_obj::windowsized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowsized",0xe9ea8999,"luxe.Scene.windowsized","luxe/Scene.hx",350,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(352)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),352,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("windowsized","\x93","\x2e","\x7e","\xda"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		this->emit((int)31,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowsized,(void))

Void Scene_obj::windowminimized( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowminimized",0x4dd4bf9c,"luxe.Scene.windowminimized","luxe/Scene.hx",356,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(358)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),358,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("windowminimized","\x96","\x69","\x37","\x2d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		this->emit((int)32,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowminimized,(void))

Void Scene_obj::windowrestored( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","windowrestored",0x9649ce00,"luxe.Scene.windowrestored","luxe/Scene.hx",362,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(364)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),364,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("windowrestored","\x46","\x01","\xd4","\x0f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		this->emit((int)33,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,windowrestored,(void))

Void Scene_obj::inputdown( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","inputdown",0x74d0f6f2,"luxe.Scene.inputdown","luxe/Scene.hx",370,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(372)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),372,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("inputdown","\x6c","\x89","\xbf","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		this->emit((int)15,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,inputdown,(void))

Void Scene_obj::inputup( Dynamic event){
{
		HX_STACK_FRAME("luxe.Scene","inputup",0x9333a0eb,"luxe.Scene.inputup","luxe/Scene.hx",376,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(378)
		Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),378,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("inputup","\xe5","\xc0","\x1e","\xd4"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		this->emit((int)16,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,inputup,(void))

Void Scene_obj::_destroy( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","_destroy",0xd16dabb5,"luxe.Scene._destroy","luxe/Scene.hx",386,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(386)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,_destroy,(void))

Void Scene_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Scene","destroy",0xe39b0d00,"luxe.Scene.destroy","luxe/Scene.hx",390,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(392)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		Dynamic tmp1 = this->init_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(392)
		tmp->emitter->off((int)2,tmp1,tmp2);
		HX_STACK_LINE(393)
		::luxe::Core tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		Dynamic tmp4 = this->_destroy_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(393)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(393)
		tmp3->emitter->off((int)8,tmp4,tmp5);
		HX_STACK_LINE(394)
		::luxe::Core tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(394)
		Dynamic tmp7 = this->update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(394)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(394)
		tmp6->emitter->off((int)6,tmp7,tmp8);
		HX_STACK_LINE(396)
		::luxe::Core tmp9 = ::Luxe_obj::core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(396)
		Dynamic tmp10 = this->prerender_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(396)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(396)
		tmp9->emitter->off((int)9,tmp10,tmp11);
		HX_STACK_LINE(397)
		::luxe::Core tmp12 = ::Luxe_obj::core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(397)
		Dynamic tmp13 = this->postrender_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(397)
		Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(397)
		tmp12->emitter->off((int)11,tmp13,tmp14);
		HX_STACK_LINE(398)
		::luxe::Core tmp15 = ::Luxe_obj::core;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(398)
		Dynamic tmp16 = this->render_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(398)
		Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(398)
		tmp15->emitter->off((int)10,tmp16,tmp17);
		HX_STACK_LINE(400)
		::luxe::Core tmp18 = ::Luxe_obj::core;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(400)
		Dynamic tmp19 = this->keydown_dyn();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(400)
		Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(400)
		tmp18->emitter->off((int)12,tmp19,tmp20);
		HX_STACK_LINE(401)
		::luxe::Core tmp21 = ::Luxe_obj::core;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(401)
		Dynamic tmp22 = this->keyup_dyn();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(401)
		Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(401)
		tmp21->emitter->off((int)13,tmp22,tmp23);
		HX_STACK_LINE(402)
		::luxe::Core tmp24 = ::Luxe_obj::core;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(402)
		Dynamic tmp25 = this->textinput_dyn();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(402)
		Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(402)
		tmp24->emitter->off((int)14,tmp25,tmp26);
		HX_STACK_LINE(404)
		::luxe::Core tmp27 = ::Luxe_obj::core;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(404)
		Dynamic tmp28 = this->inputup_dyn();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(404)
		Dynamic tmp29 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(404)
		tmp27->emitter->off((int)16,tmp28,tmp29);
		HX_STACK_LINE(405)
		::luxe::Core tmp30 = ::Luxe_obj::core;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(405)
		Dynamic tmp31 = this->inputdown_dyn();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(405)
		Dynamic tmp32 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(405)
		tmp30->emitter->off((int)15,tmp31,tmp32);
		HX_STACK_LINE(407)
		::luxe::Core tmp33 = ::Luxe_obj::core;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(407)
		Dynamic tmp34 = this->mouseup_dyn();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(407)
		Dynamic tmp35 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(407)
		tmp33->emitter->off((int)18,tmp34,tmp35);
		HX_STACK_LINE(408)
		::luxe::Core tmp36 = ::Luxe_obj::core;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(408)
		Dynamic tmp37 = this->mousedown_dyn();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(408)
		Dynamic tmp38 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(408)
		tmp36->emitter->off((int)17,tmp37,tmp38);
		HX_STACK_LINE(409)
		::luxe::Core tmp39 = ::Luxe_obj::core;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(409)
		Dynamic tmp40 = this->mousemove_dyn();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(409)
		Dynamic tmp41 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(409)
		tmp39->emitter->off((int)19,tmp40,tmp41);
		HX_STACK_LINE(410)
		::luxe::Core tmp42 = ::Luxe_obj::core;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(410)
		Dynamic tmp43 = this->mousewheel_dyn();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(410)
		Dynamic tmp44 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(410)
		tmp42->emitter->off((int)20,tmp43,tmp44);
		HX_STACK_LINE(412)
		::luxe::Core tmp45 = ::Luxe_obj::core;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(412)
		Dynamic tmp46 = this->touchup_dyn();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(412)
		Dynamic tmp47 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(412)
		tmp45->emitter->off((int)22,tmp46,tmp47);
		HX_STACK_LINE(413)
		::luxe::Core tmp48 = ::Luxe_obj::core;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(413)
		Dynamic tmp49 = this->touchdown_dyn();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(413)
		Dynamic tmp50 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(413)
		tmp48->emitter->off((int)21,tmp49,tmp50);
		HX_STACK_LINE(414)
		::luxe::Core tmp51 = ::Luxe_obj::core;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(414)
		Dynamic tmp52 = this->touchmove_dyn();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(414)
		Dynamic tmp53 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(414)
		tmp51->emitter->off((int)23,tmp52,tmp53);
		HX_STACK_LINE(416)
		::luxe::Core tmp54 = ::Luxe_obj::core;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(416)
		Dynamic tmp55 = this->gamepadup_dyn();		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(416)
		Dynamic tmp56 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(416)
		tmp54->emitter->off((int)26,tmp55,tmp56);
		HX_STACK_LINE(417)
		::luxe::Core tmp57 = ::Luxe_obj::core;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(417)
		Dynamic tmp58 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(417)
		Dynamic tmp59 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(417)
		tmp57->emitter->off((int)25,tmp58,tmp59);
		HX_STACK_LINE(418)
		::luxe::Core tmp60 = ::Luxe_obj::core;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(418)
		Dynamic tmp61 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(418)
		Dynamic tmp62 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(418)
		tmp60->emitter->off((int)24,tmp61,tmp62);
		HX_STACK_LINE(419)
		::luxe::Core tmp63 = ::Luxe_obj::core;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(419)
		Dynamic tmp64 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(419)
		Dynamic tmp65 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(419)
		tmp63->emitter->off((int)27,tmp64,tmp65);
		HX_STACK_LINE(421)
		::luxe::Core tmp66 = ::Luxe_obj::core;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(421)
		Dynamic tmp67 = this->windowmoved_dyn();		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(421)
		Dynamic tmp68 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(421)
		tmp66->emitter->off((int)29,tmp67,tmp68);
		HX_STACK_LINE(422)
		::luxe::Core tmp69 = ::Luxe_obj::core;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(422)
		Dynamic tmp70 = this->windowresized_dyn();		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(422)
		Dynamic tmp71 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(422)
		tmp69->emitter->off((int)30,tmp70,tmp71);
		HX_STACK_LINE(423)
		::luxe::Core tmp72 = ::Luxe_obj::core;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(423)
		Dynamic tmp73 = this->windowsized_dyn();		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(423)
		Dynamic tmp74 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(423)
		tmp72->emitter->off((int)31,tmp73,tmp74);
		HX_STACK_LINE(424)
		::luxe::Core tmp75 = ::Luxe_obj::core;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(424)
		Dynamic tmp76 = this->windowminimized_dyn();		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(424)
		Dynamic tmp77 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(424)
		tmp75->emitter->off((int)32,tmp76,tmp77);
		HX_STACK_LINE(425)
		::luxe::Core tmp78 = ::Luxe_obj::core;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(425)
		Dynamic tmp79 = this->windowrestored_dyn();		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(425)
		Dynamic tmp80 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(425)
		tmp78->emitter->off((int)33,tmp79,tmp80);
		HX_STACK_LINE(427)
		Dynamic tmp81 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),427,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"));		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(427)
		this->emit((int)8,null(),tmp81);
		HX_STACK_LINE(429)
		::luxe::Core tmp82 = ::Luxe_obj::core;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(429)
		::luxe::debug::SceneDebugView tmp83 = tmp82->debug->get_view(HX_HCSTRING("Scenes","\xc7","\xbd","\x60","\x73"));		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(429)
		::luxe::debug::SceneDebugView _view = tmp83;		HX_STACK_VAR(_view,"_view");
		HX_STACK_LINE(430)
		bool tmp84 = (_view != null());		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(430)
		if ((tmp84)){
			HX_STACK_LINE(431)
			_view->remove_scene(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,destroy,(void))

bool Scene_obj::_do_init( ){
	HX_STACK_FRAME("luxe.Scene","_do_init",0x45b3463f,"luxe.Scene._do_init","luxe/Scene.hx",436,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(438)
	int tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(438)
	int _before_count = tmp;		HX_STACK_VAR(_before_count,"_before_count");
	HX_STACK_LINE(440)
	int tmp1 = this->entity_count;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(440)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(440)
	if ((tmp2)){
		HX_STACK_LINE(441)
		::haxe::ds::StringMap tmp3 = this->entities;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		Dynamic tmp4 = tmp3->iterator();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp4);  __it->hasNext(); ){
			::luxe::Entity entity = __it->next();
			{
				HX_STACK_LINE(442)
				bool tmp5 = (entity != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(442)
				if ((tmp5)){
					HX_STACK_LINE(443)
					bool tmp6 = entity->inited;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(443)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(443)
					if ((tmp7)){
						HX_STACK_LINE(445)
						entity->init();
						HX_STACK_LINE(445)
						Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),286,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(445)
						entity->emit((int)2,null(),tmp8);
						HX_STACK_LINE(445)
						bool tmp9 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(445)
						if ((tmp9)){
							HX_STACK_LINE(445)
							::luxe::structural::OrderedMap tmp10 = entity->_components->components;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(445)
							::luxe::structural::OrderedMapIterator tmp11 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(445)
							::luxe::structural::OrderedMapIterator _g = tmp11;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(445)
							while((true)){
								HX_STACK_LINE(445)
								int tmp12 = _g->index;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(445)
								int tmp13 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(445)
								bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(445)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(445)
								if ((tmp15)){
									HX_STACK_LINE(445)
									break;
								}
								HX_STACK_LINE(445)
								::luxe::Component tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									int tmp17 = (_g->index)++;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(445)
									::String tmp18 = _g->map->_keys->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(445)
									::String key = tmp18;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(445)
									::haxe::ds::StringMap tmp19 = _g->map->map;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(445)
									::String tmp20 = key;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(445)
									::luxe::Component tmp21 = tmp19->get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(445)
									tmp16 = tmp21;
								}
								HX_STACK_LINE(445)
								::luxe::Component _component = tmp16;		HX_STACK_VAR(_component,"_component");
								HX_STACK_LINE(445)
								_component->init();
							}
						}
						HX_STACK_LINE(445)
						int tmp10 = entity->children->length;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(445)
						bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(445)
						if ((tmp11)){
							HX_STACK_LINE(445)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(445)
							Array< ::Dynamic > _g1 = entity->children;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(445)
							while((true)){
								HX_STACK_LINE(445)
								bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(445)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(445)
								if ((tmp13)){
									HX_STACK_LINE(445)
									break;
								}
								HX_STACK_LINE(445)
								::luxe::Entity tmp14 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(445)
								::luxe::Entity _child = tmp14;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(445)
								++(_g);
								HX_STACK_LINE(445)
								_child->_init();
							}
						}
						HX_STACK_LINE(445)
						entity->inited = true;
					}
				}
			}
;
		}
	}
	HX_STACK_LINE(451)
	int tmp3 = this->get_length();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(451)
	int _after_count = tmp3;		HX_STACK_VAR(_after_count,"_after_count");
	HX_STACK_LINE(453)
	bool tmp4 = (_before_count != _after_count);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(453)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,_do_init,return )

Void Scene_obj::init( Dynamic _){
{
		HX_STACK_FRAME("luxe.Scene","init",0x1cecbb4a,"luxe.Scene.init","luxe/Scene.hx",459,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(461)
		bool keep_going = true;		HX_STACK_VAR(keep_going,"keep_going");
		HX_STACK_LINE(462)
		while((true)){
			HX_STACK_LINE(462)
			bool tmp = keep_going;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(462)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(462)
			if ((tmp1)){
				HX_STACK_LINE(462)
				break;
			}
			HX_STACK_LINE(463)
			bool tmp2 = this->_do_init();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(463)
			keep_going = tmp2;
		}
		HX_STACK_LINE(466)
		this->inited = true;
		HX_STACK_LINE(468)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),468,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(468)
		this->emit((int)2,null(),tmp);
		HX_STACK_LINE(470)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,init,(void))

Void Scene_obj::reset( ){
{
		HX_STACK_FRAME("luxe.Scene","reset",0x5ae6fc55,"luxe.Scene.reset","luxe/Scene.hx",475,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(477)
		this->started = false;
		HX_STACK_LINE(479)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),479,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(479)
		this->emit((int)3,null(),tmp);
		HX_STACK_LINE(481)
		this->started = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,reset,(void))

Void Scene_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Scene","update",0xadc308c3,"luxe.Scene.update","luxe/Scene.hx",485,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(487)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(487)
		::String tmp1 = this->get_name();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		::String tmp2 = (HX_HCSTRING("scene.","\x62","\x49","\xcc","\x3e") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(487)
		tmp->debug->start(tmp2,null());
		HX_STACK_LINE(490)
		this->handle_delayed_additions();
		HX_STACK_LINE(492)
		Float tmp3 = dt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Scene.hx","\x12","\xfd","\x2c","\x9b"),492,HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(492)
		this->emit((int)6,tmp3,tmp4);
		HX_STACK_LINE(495)
		int tmp5 = this->entity_count;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(495)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(495)
		if ((tmp6)){
			HX_STACK_LINE(496)
			::haxe::ds::StringMap tmp7 = this->entities;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(496)
			Dynamic tmp8 = tmp7->iterator();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(496)
			for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp8);  __it->hasNext(); ){
				::luxe::Entity entity = __it->next();
				{
					HX_STACK_LINE(497)
					bool tmp9 = (entity != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(497)
					if ((tmp9)){
						HX_STACK_LINE(498)
						bool tmp10 = entity->destroyed;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(498)
						if ((tmp10)){
							HX_STACK_LINE(498)
							Dynamic();
						}
						else{
							HX_STACK_LINE(498)
							bool tmp11 = entity->get_active();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(498)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(498)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(498)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(498)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(498)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(498)
							if ((tmp15)){
								HX_STACK_LINE(498)
								bool tmp17 = entity->inited;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(498)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(498)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(498)
								tmp16 = !(tmp19);
							}
							else{
								HX_STACK_LINE(498)
								tmp16 = true;
							}
							HX_STACK_LINE(498)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(498)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(498)
							if ((tmp17)){
								HX_STACK_LINE(498)
								bool tmp19 = entity->started;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(498)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(498)
								tmp18 = !(tmp20);
							}
							else{
								HX_STACK_LINE(498)
								tmp18 = true;
							}
							HX_STACK_LINE(498)
							if ((tmp18)){
								HX_STACK_LINE(498)
								Dynamic();
							}
							else{
								HX_STACK_LINE(498)
								{
									HX_STACK_LINE(498)
									::phoenix::Transform tmp19 = entity->get_transform();		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(498)
									::phoenix::Transform _this = tmp19;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(498)
									bool tmp20 = (_this->parent != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(498)
									if ((tmp20)){
										HX_STACK_LINE(498)
										bool tmp21 = _this->parent->dirty;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(498)
										if ((tmp21)){
											HX_STACK_LINE(498)
											_this->parent->clean();
										}
									}
									HX_STACK_LINE(498)
									bool tmp21 = _this->dirty;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(498)
									bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(498)
									if ((tmp21)){
										HX_STACK_LINE(498)
										bool tmp23 = _this->_cleaning;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(498)
										bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(498)
										tmp22 = !(tmp24);
									}
									else{
										HX_STACK_LINE(498)
										tmp22 = false;
									}
									HX_STACK_LINE(498)
									if ((tmp22)){
										HX_STACK_LINE(498)
										_this->clean();
									}
								}
								HX_STACK_LINE(498)
								Float tmp19 = dt;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(498)
								entity->update(tmp19);
								HX_STACK_LINE(498)
								bool tmp20 = (entity->events != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(498)
								if ((tmp20)){
									HX_STACK_LINE(498)
									entity->events->process();
								}
								HX_STACK_LINE(498)
								bool tmp21 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(498)
								if ((tmp21)){
									HX_STACK_LINE(498)
									::luxe::structural::OrderedMap tmp22 = entity->_components->components;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(498)
									::luxe::structural::OrderedMapIterator tmp23 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(498)
									::luxe::structural::OrderedMapIterator _g = tmp23;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(498)
									while((true)){
										HX_STACK_LINE(498)
										int tmp24 = _g->index;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(498)
										int tmp25 = _g->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(498)
										bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(498)
										bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(498)
										if ((tmp27)){
											HX_STACK_LINE(498)
											break;
										}
										HX_STACK_LINE(498)
										::luxe::Component tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(498)
										{
											HX_STACK_LINE(498)
											int tmp29 = (_g->index)++;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(498)
											::String tmp30 = _g->map->_keys->__GetItem(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(498)
											::String key = tmp30;		HX_STACK_VAR(key,"key");
											HX_STACK_LINE(498)
											::haxe::ds::StringMap tmp31 = _g->map->map;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(498)
											::String tmp32 = key;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(498)
											::luxe::Component tmp33 = tmp31->get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(498)
											tmp28 = tmp33;
										}
										HX_STACK_LINE(498)
										::luxe::Component _component = tmp28;		HX_STACK_VAR(_component,"_component");
										HX_STACK_LINE(498)
										Float tmp29 = dt;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(498)
										_component->update(tmp29);
									}
								}
								HX_STACK_LINE(498)
								int tmp22 = entity->children->length;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(498)
								bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(498)
								if ((tmp23)){
									HX_STACK_LINE(498)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(498)
									Array< ::Dynamic > _g1 = entity->children;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(498)
									while((true)){
										HX_STACK_LINE(498)
										bool tmp24 = (_g < _g1->length);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(498)
										bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(498)
										if ((tmp25)){
											HX_STACK_LINE(498)
											break;
										}
										HX_STACK_LINE(498)
										::luxe::Entity tmp26 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(498)
										::luxe::Entity _child = tmp26;		HX_STACK_VAR(_child,"_child");
										HX_STACK_LINE(498)
										++(_g);
										HX_STACK_LINE(498)
										Float tmp27 = dt;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(498)
										_child->_update(tmp27);
									}
								}
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(503)
		::luxe::Core tmp7 = ::Luxe_obj::core;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(503)
		::String tmp8 = this->get_name();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(503)
		::String tmp9 = (HX_HCSTRING("scene.","\x62","\x49","\xcc","\x3e") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(503)
		tmp7->debug->end(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,update,(void))

Void Scene_obj::handle_delayed_additions( ){
{
		HX_STACK_FRAME("luxe.Scene","handle_delayed_additions",0xbf640c7d,"luxe.Scene.handle_delayed_additions","luxe/Scene.hx",507,0x14d4e1cb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(509)
		int tmp = this->_delayed_init_entities->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(509)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(509)
		if ((tmp2)){
			HX_STACK_LINE(509)
			int tmp4 = this->_delayed_reset_entities->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(509)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(509)
			tmp3 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(509)
			tmp3 = true;
		}
		HX_STACK_LINE(509)
		if ((tmp3)){
			HX_STACK_LINE(138)
			Dynamic();
		}
		HX_STACK_LINE(513)
		int tmp4 = this->_delayed_init_entities->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(513)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(513)
		if ((tmp5)){
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(514)
				Array< ::Dynamic > _g1 = this->_delayed_init_entities;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(514)
				while((true)){
					HX_STACK_LINE(514)
					bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(514)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(514)
					if ((tmp7)){
						HX_STACK_LINE(514)
						break;
					}
					HX_STACK_LINE(514)
					::luxe::Entity tmp8 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(514)
					::luxe::Entity entity = tmp8;		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(514)
					++(_g);
					HX_STACK_LINE(515)
					bool tmp9 = entity->inited;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(515)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(515)
					if ((tmp10)){
						HX_STACK_LINE(517)
						entity->init();
						HX_STACK_LINE(517)
						Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),286,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						entity->emit((int)2,null(),tmp11);
						HX_STACK_LINE(517)
						bool tmp12 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(517)
						if ((tmp12)){
							HX_STACK_LINE(517)
							::luxe::structural::OrderedMap tmp13 = entity->_components->components;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(517)
							::luxe::structural::OrderedMapIterator tmp14 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(517)
							::luxe::structural::OrderedMapIterator _g2 = tmp14;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(517)
							while((true)){
								HX_STACK_LINE(517)
								int tmp15 = _g2->index;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(517)
								int tmp16 = _g2->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(517)
								bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(517)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(517)
								if ((tmp18)){
									HX_STACK_LINE(517)
									break;
								}
								HX_STACK_LINE(517)
								::luxe::Component tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(517)
								{
									HX_STACK_LINE(517)
									int tmp20 = (_g2->index)++;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(517)
									::String tmp21 = _g2->map->_keys->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(517)
									::String key = tmp21;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(517)
									::haxe::ds::StringMap tmp22 = _g2->map->map;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(517)
									::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(517)
									::luxe::Component tmp24 = tmp22->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(517)
									tmp19 = tmp24;
								}
								HX_STACK_LINE(517)
								::luxe::Component _component = tmp19;		HX_STACK_VAR(_component,"_component");
								HX_STACK_LINE(517)
								_component->init();
							}
						}
						HX_STACK_LINE(517)
						int tmp13 = entity->children->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(517)
						bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(517)
						if ((tmp14)){
							HX_STACK_LINE(517)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(517)
							Array< ::Dynamic > _g11 = entity->children;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(517)
							while((true)){
								HX_STACK_LINE(517)
								bool tmp15 = (_g2 < _g11->length);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(517)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(517)
								if ((tmp16)){
									HX_STACK_LINE(517)
									break;
								}
								HX_STACK_LINE(517)
								::luxe::Entity tmp17 = _g11->__get(_g2).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(517)
								::luxe::Entity _child = tmp17;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(517)
								++(_g2);
								HX_STACK_LINE(517)
								_child->_init();
							}
						}
						HX_STACK_LINE(517)
						entity->inited = true;
					}
					else{
						HX_STACK_LINE(138)
						Dynamic();
					}
				}
			}
			HX_STACK_LINE(522)
			int tmp6 = this->_delayed_init_entities->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(522)
			this->_delayed_init_entities->splice((int)0,tmp6);
		}
		HX_STACK_LINE(525)
		int tmp6 = this->_delayed_reset_entities->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(525)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(525)
		if ((tmp7)){
			HX_STACK_LINE(526)
			{
				HX_STACK_LINE(526)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(526)
				Array< ::Dynamic > _g1 = this->_delayed_reset_entities;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(526)
				while((true)){
					HX_STACK_LINE(526)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(526)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(526)
					if ((tmp9)){
						HX_STACK_LINE(526)
						break;
					}
					HX_STACK_LINE(526)
					::luxe::Entity tmp10 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(526)
					::luxe::Entity entity = tmp10;		HX_STACK_VAR(entity,"entity");
					HX_STACK_LINE(526)
					++(_g);
					HX_STACK_LINE(528)
					{
						HX_STACK_LINE(528)
						entity->onreset();
						HX_STACK_LINE(528)
						Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Entity.hx","\x5b","\x67","\x8a","\x5c"),317,HX_HCSTRING("luxe.Entity","\xfb","\x24","\x7a","\x64"),HX_HCSTRING("_reset","\x10","\x91","\xaf","\xe2"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(528)
						entity->emit((int)3,null(),tmp11);
						HX_STACK_LINE(528)
						bool tmp12 = (entity->component_count > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(528)
						if ((tmp12)){
							HX_STACK_LINE(528)
							::luxe::structural::OrderedMap tmp13 = entity->_components->components;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(528)
							::luxe::structural::OrderedMapIterator tmp14 = ::luxe::structural::OrderedMapIterator_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(528)
							::luxe::structural::OrderedMapIterator _g2 = tmp14;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(528)
							while((true)){
								HX_STACK_LINE(528)
								int tmp15 = _g2->index;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(528)
								int tmp16 = _g2->map->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(528)
								bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(528)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(528)
								if ((tmp18)){
									HX_STACK_LINE(528)
									break;
								}
								HX_STACK_LINE(528)
								::luxe::Component tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(528)
								{
									HX_STACK_LINE(528)
									int tmp20 = (_g2->index)++;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(528)
									::String tmp21 = _g2->map->_keys->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(528)
									::String key = tmp21;		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(528)
									::haxe::ds::StringMap tmp22 = _g2->map->map;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(528)
									::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(528)
									::luxe::Component tmp24 = tmp22->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(528)
									tmp19 = tmp24;
								}
								HX_STACK_LINE(528)
								::luxe::Component _component = tmp19;		HX_STACK_VAR(_component,"_component");
								HX_STACK_LINE(528)
								_component->onreset();
							}
						}
						HX_STACK_LINE(528)
						int tmp13 = entity->children->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(528)
						bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(528)
						if ((tmp14)){
							HX_STACK_LINE(528)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(528)
							Array< ::Dynamic > _g11 = entity->children;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(528)
							while((true)){
								HX_STACK_LINE(528)
								bool tmp15 = (_g2 < _g11->length);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(528)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(528)
								if ((tmp16)){
									HX_STACK_LINE(528)
									break;
								}
								HX_STACK_LINE(528)
								::luxe::Entity tmp17 = _g11->__get(_g2).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(528)
								::luxe::Entity _child = tmp17;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(528)
								++(_g2);
								HX_STACK_LINE(528)
								_child->_reset(null());
								HX_STACK_LINE(528)
								Dynamic();
							}
						}
						HX_STACK_LINE(528)
						{
							HX_STACK_LINE(528)
							Float _rate = entity->fixed_rate;		HX_STACK_VAR(_rate,"_rate");
							HX_STACK_LINE(528)
							{
								HX_STACK_LINE(528)
								bool tmp15 = (entity->fixed_rate_timer != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(528)
								if ((tmp15)){
									HX_STACK_LINE(528)
									entity->fixed_rate_timer->stop();
									HX_STACK_LINE(528)
									entity->fixed_rate_timer = null();
								}
							}
							HX_STACK_LINE(528)
							bool tmp15 = (_rate != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(528)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(528)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(528)
							if ((tmp16)){
								HX_STACK_LINE(528)
								::luxe::Entity tmp18 = entity->get_parent();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(528)
								::luxe::Entity tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(528)
								::luxe::Entity tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(528)
								tmp17 = (tmp20 == null());
							}
							else{
								HX_STACK_LINE(528)
								tmp17 = false;
							}
							HX_STACK_LINE(528)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(528)
							if ((tmp17)){
								HX_STACK_LINE(528)
								bool tmp19 = entity->destroyed;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(528)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(528)
								tmp18 = !(tmp20);
							}
							else{
								HX_STACK_LINE(528)
								tmp18 = false;
							}
							HX_STACK_LINE(528)
							if ((tmp18)){
								HX_STACK_LINE(528)
								::snow::api::Timer tmp19 = ::snow::api::Timer_obj::__new(_rate);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(528)
								entity->fixed_rate_timer = tmp19;
								HX_STACK_LINE(528)
								entity->fixed_rate_timer->run = entity->_fixed_update_dyn();
							}
						}
						HX_STACK_LINE(528)
						entity->started = true;
					}
				}
			}
			HX_STACK_LINE(530)
			int tmp8 = this->_delayed_reset_entities->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(530)
			this->_delayed_reset_entities->splice((int)0,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,handle_delayed_additions,(void))

int Scene_obj::get_length( ){
	HX_STACK_FRAME("luxe.Scene","get_length",0x88bd6c69,"luxe.Scene.get_length","luxe/Scene.hx",535,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(537)
	::haxe::ds::StringMap tmp = this->entities;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	Dynamic tmp1 = ((Dynamic)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(537)
	int tmp2 = ::Lambda_obj::count(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(537)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_length,return )

::String Scene_obj::toString( ){
	HX_STACK_FRAME("luxe.Scene","toString",0xab9df5e6,"luxe.Scene.toString","luxe/Scene.hx",541,0x14d4e1cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(543)
	::String tmp = this->get_name();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(543)
	::String tmp1 = (HX_HCSTRING("luxe Scene: ","\x68","\x44","\x23","\xa6") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(543)
	::String tmp2 = (tmp1 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(543)
	int tmp3 = this->get_length();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(543)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(543)
	::String tmp5 = (tmp4 + HX_HCSTRING(" entities / id: ","\xb1","\x20","\xb8","\xc4"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(543)
	::String tmp6 = this->get_id();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(543)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(543)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,toString,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(entities,"entities");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_delayed_init_entities,"_delayed_init_entities");
	HX_MARK_MEMBER_NAME(_delayed_reset_entities,"_delayed_reset_entities");
	HX_MARK_MEMBER_NAME(_has_changed,"_has_changed");
	HX_MARK_MEMBER_NAME(entity_count,"entity_count");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entities,"entities");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_delayed_init_entities,"_delayed_init_entities");
	HX_VISIT_MEMBER_NAME(_delayed_reset_entities,"_delayed_reset_entities");
	HX_VISIT_MEMBER_NAME(_has_changed,"_has_changed");
	HX_VISIT_MEMBER_NAME(entity_count,"entity_count");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"touchup") ) { return touchup_dyn(); }
		if (HX_FIELD_EQ(inName,"inputup") ) { return inputup_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { return entities; }
		if (HX_FIELD_EQ(inName,"_destroy") ) { return _destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_do_init") ) { return _do_init_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"prerender") ) { return prerender_dyn(); }
		if (HX_FIELD_EQ(inName,"textinput") ) { return textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"touchdown") ) { return touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchmove") ) { return touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadup") ) { return gamepadup_dyn(); }
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postrender") ) { return postrender_dyn(); }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"windowmoved") ) { return windowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"windowsized") ) { return windowsized_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_has_changed") ) { return _has_changed; }
		if (HX_FIELD_EQ(inName,"entity_count") ) { return entity_count; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepaddevice") ) { return gamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"windowresized") ) { return windowresized_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_named_like") ) { return get_named_like_dyn(); }
		if (HX_FIELD_EQ(inName,"windowrestored") ) { return windowrestored_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"windowminimized") ) { return windowminimized_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_delayed_init_entities") ) { return _delayed_init_entities; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_delayed_reset_entities") ) { return _delayed_reset_entities; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"handle_duplicate_warning") ) { return handle_duplicate_warning_dyn(); }
		if (HX_FIELD_EQ(inName,"handle_delayed_additions") ) { return handle_delayed_additions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"entities") ) { entities=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_has_changed") ) { _has_changed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity_count") ) { entity_count=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_delayed_init_entities") ) { _delayed_init_entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_delayed_reset_entities") ) { _delayed_reset_entities=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Scene_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("_delayed_init_entities","\x34","\xe8","\x4b","\xde"));
	outFields->push(HX_HCSTRING("_delayed_reset_entities","\xcd","\x49","\xde","\xfc"));
	outFields->push(HX_HCSTRING("_has_changed","\xd0","\xe1","\x93","\x65"));
	outFields->push(HX_HCSTRING("entity_count","\x73","\x1b","\xa6","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,entities),HX_HCSTRING("entities","\x41","\x96","\x95","\x92")},
	{hx::fsBool,(int)offsetof(Scene_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsBool,(int)offsetof(Scene_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{hx::fsInt,(int)offsetof(Scene_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_delayed_init_entities),HX_HCSTRING("_delayed_init_entities","\x34","\xe8","\x4b","\xde")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_delayed_reset_entities),HX_HCSTRING("_delayed_reset_entities","\xcd","\x49","\xde","\xfc")},
	{hx::fsBool,(int)offsetof(Scene_obj,_has_changed),HX_HCSTRING("_has_changed","\xd0","\xe1","\x93","\x65")},
	{hx::fsInt,(int)offsetof(Scene_obj,entity_count),HX_HCSTRING("entity_count","\x73","\x1b","\xa6","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("entities","\x41","\x96","\x95","\x92"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("_delayed_init_entities","\x34","\xe8","\x4b","\xde"),
	HX_HCSTRING("_delayed_reset_entities","\xcd","\x49","\xde","\xfc"),
	HX_HCSTRING("_has_changed","\xd0","\xe1","\x93","\x65"),
	HX_HCSTRING("handle_duplicate_warning","\xd1","\x8a","\x7d","\x4b"),
	HX_HCSTRING("entity_count","\x73","\x1b","\xa6","\xcf"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("get_named_like","\x26","\x8b","\x54","\xbc"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("prerender","\xb9","\x07","\x36","\x2f"),
	HX_HCSTRING("postrender","\xb6","\x77","\xcd","\x25"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("touchdown","\xa1","\x5b","\x01","\x1d"),
	HX_HCSTRING("touchup","\xda","\x2b","\xf8","\xd8"),
	HX_HCSTRING("touchmove","\x50","\x46","\xf4","\x22"),
	HX_HCSTRING("gamepadaxis","\xc2","\x61","\xf2","\xe5"),
	HX_HCSTRING("gamepadup","\x3c","\x71","\x38","\x5f"),
	HX_HCSTRING("gamepaddown","\x83","\x3d","\xe7","\xe7"),
	HX_HCSTRING("gamepaddevice","\xf7","\x6b","\xa5","\x5b"),
	HX_HCSTRING("windowmoved","\x43","\xf2","\x0a","\x6a"),
	HX_HCSTRING("windowresized","\x00","\x26","\x3a","\x51"),
	HX_HCSTRING("windowsized","\x93","\x2e","\x7e","\xda"),
	HX_HCSTRING("windowminimized","\x96","\x69","\x37","\x2d"),
	HX_HCSTRING("windowrestored","\x46","\x01","\xd4","\x0f"),
	HX_HCSTRING("inputdown","\x6c","\x89","\xbf","\x1e"),
	HX_HCSTRING("inputup","\xe5","\xc0","\x1e","\xd4"),
	HX_HCSTRING("_destroy","\x7b","\x86","\x3e","\x5e"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("_do_init","\x05","\x21","\x84","\xd2"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("handle_delayed_additions","\x43","\x53","\x9d","\xd5"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

hx::Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Scene","\x74","\xca","\xc6","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Scene_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scene_obj >;
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
