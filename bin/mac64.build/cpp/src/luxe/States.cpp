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
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
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
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{

Void States_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.States","new",0xc752210c,"luxe.States.new","luxe/States.hx",109,0xdf083bc3)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(168)
	this->_state_count = (int)0;
	HX_STACK_LINE(116)
	this->active_count = (int)0;
	HX_STACK_LINE(120)
	::String _name = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_name,"_name");
	HX_STACK_LINE(122)
	bool tmp = (_options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	if ((tmp)){
		HX_STACK_LINE(122)
		tmp1 = (_options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(122)
		tmp1 = false;
	}
	HX_STACK_LINE(122)
	if ((tmp1)){
		HX_STACK_LINE(123)
		_name = _options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	}
	HX_STACK_LINE(126)
	bool tmp2 = (_name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	if ((tmp2)){
		HX_STACK_LINE(126)
		::luxe::utils::Utils tmp4 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		tmp3 = tmp4->uniqueid(null());
	}
	else{
		HX_STACK_LINE(126)
		tmp3 = _name;
	}
	HX_STACK_LINE(126)
	super::__construct(tmp3,null());
	HX_STACK_LINE(128)
	::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(128)
	this->_states = tmp4;
	HX_STACK_LINE(129)
	this->active_states = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		Dynamic tmp6 = this->init_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		tmp5->emitter->on((int)2,tmp6,tmp7);
	}
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		Dynamic tmp6 = this->ondestroy_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(132)
		tmp5->emitter->on((int)8,tmp6,tmp7);
	}
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		Dynamic tmp6 = this->update_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(133)
		tmp5->emitter->on((int)6,tmp6,tmp7);
	}
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		Dynamic tmp6 = this->prerender_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		tmp5->emitter->on((int)9,tmp6,tmp7);
	}
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		Dynamic tmp6 = this->postrender_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(136)
		tmp5->emitter->on((int)11,tmp6,tmp7);
	}
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		Dynamic tmp6 = this->render_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		tmp5->emitter->on((int)10,tmp6,tmp7);
	}
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		Dynamic tmp6 = this->keydown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(139)
		tmp5->emitter->on((int)12,tmp6,tmp7);
	}
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		Dynamic tmp6 = this->keyup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		tmp5->emitter->on((int)13,tmp6,tmp7);
	}
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		Dynamic tmp6 = this->textinput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(141)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(141)
		tmp5->emitter->on((int)14,tmp6,tmp7);
	}
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		Dynamic tmp6 = this->inputup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		tmp5->emitter->on((int)16,tmp6,tmp7);
	}
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(144)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(144)
		Dynamic tmp6 = this->inputdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(144)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(144)
		tmp5->emitter->on((int)15,tmp6,tmp7);
	}
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		Dynamic tmp6 = this->mouseup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(146)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(146)
		tmp5->emitter->on((int)18,tmp6,tmp7);
	}
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		Dynamic tmp6 = this->mousedown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		tmp5->emitter->on((int)17,tmp6,tmp7);
	}
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		Dynamic tmp6 = this->mousemove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		tmp5->emitter->on((int)19,tmp6,tmp7);
	}
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		Dynamic tmp6 = this->mousewheel_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(149)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(149)
		tmp5->emitter->on((int)20,tmp6,tmp7);
	}
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		Dynamic tmp6 = this->touchup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		tmp5->emitter->on((int)22,tmp6,tmp7);
	}
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		Dynamic tmp6 = this->touchdown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(152)
		tmp5->emitter->on((int)21,tmp6,tmp7);
	}
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		Dynamic tmp6 = this->touchmove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		tmp5->emitter->on((int)23,tmp6,tmp7);
	}
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		Dynamic tmp6 = this->gamepadup_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		tmp5->emitter->on((int)26,tmp6,tmp7);
	}
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		Dynamic tmp6 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		tmp5->emitter->on((int)25,tmp6,tmp7);
	}
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		Dynamic tmp6 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		tmp5->emitter->on((int)24,tmp6,tmp7);
	}
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		Dynamic tmp6 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		tmp5->emitter->on((int)27,tmp6,tmp7);
	}
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		Dynamic tmp6 = this->windowmoved_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		tmp5->emitter->on((int)29,tmp6,tmp7);
	}
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		Dynamic tmp6 = this->windowresized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		tmp5->emitter->on((int)30,tmp6,tmp7);
	}
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		Dynamic tmp6 = this->windowsized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		tmp5->emitter->on((int)31,tmp6,tmp7);
	}
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		Dynamic tmp6 = this->windowminimized_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(163)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(163)
		tmp5->emitter->on((int)32,tmp6,tmp7);
	}
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		Dynamic tmp6 = this->windowrestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		tmp5->emitter->on((int)33,tmp6,tmp7);
	}
}
;
	return null();
}

//States_obj::~States_obj() { }

Dynamic States_obj::__CreateEmpty() { return  new States_obj; }
hx::ObjectPtr< States_obj > States_obj::__new(Dynamic _options)
{  hx::ObjectPtr< States_obj > _result_ = new States_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic States_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< States_obj > _result_ = new States_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic States_obj::add( Dynamic _state){
	HX_STACK_FRAME("luxe.States","add",0xc74842cd,"luxe.States.add","luxe/States.hx",169,0xdf083bc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_state,"_state")
	HX_STACK_LINE(172)
	::haxe::ds::StringMap tmp = this->_states;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::String tmp1 = _state->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	Dynamic tmp2 = _state;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	tmp->set(tmp1,tmp2);
	HX_STACK_LINE(173)
	(this->_state_count)++;
	HX_STACK_LINE(175)
	_state->__FieldRef(HX_HCSTRING("machine","\x87","\x3b","\xfb","\xc2")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(177)
	_state->__Field(HX_HCSTRING("onadded","\x41","\x03","\x54","\x1f"), hx::paccDynamic )();
	HX_STACK_LINE(181)
	::luxe::Core tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	bool tmp4 = tmp3->inited;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	if ((tmp4)){
		HX_STACK_LINE(182)
		bool tmp5 = _state->__Field(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		if ((tmp6)){
			HX_STACK_LINE(182)
			_state->__FieldRef(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")) = true;
			HX_STACK_LINE(182)
			_state->__Field(HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"), hx::paccDynamic )();
		}
	}
	HX_STACK_LINE(188)
	Dynamic tmp5 = _state;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(188)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,add,return )

Dynamic States_obj::remove( ::String _name,Dynamic _leave_with){
	HX_STACK_FRAME("luxe.States","remove",0x830cff18,"luxe.States.remove","luxe/States.hx",192,0xdf083bc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_leave_with,"_leave_with")
	HX_STACK_LINE(194)
	::haxe::ds::StringMap tmp = this->_states;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	if ((tmp2)){
		HX_STACK_LINE(196)
		::haxe::ds::StringMap tmp3 = this->_states;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		::luxe::State tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		Dynamic _state = ((Dynamic)(tmp5));		HX_STACK_VAR(_state,"_state");
		HX_STACK_LINE(198)
		bool tmp6 = (_state != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		if ((tmp6)){
			HX_STACK_LINE(201)
			bool tmp7 = _state->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(201)
			if ((tmp7)){
				HX_STACK_LINE(203)
				Dynamic tmp8 = _state;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(203)
				Dynamic tmp9 = _leave_with;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(203)
				this->leave(tmp8,tmp9);
				HX_STACK_LINE(205)
				Dynamic tmp10 = _state;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(205)
				::luxe::State tmp11 = this->current_state;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(205)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(205)
				if ((tmp12)){
					HX_STACK_LINE(206)
					this->current_state = null();
				}
			}
			HX_STACK_LINE(212)
			bool tmp8 = _state->__Field(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(212)
			if ((tmp8)){
				HX_STACK_LINE(213)
				::String tmp9 = _state->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(213)
				this->disable(tmp9,null());
			}
			HX_STACK_LINE(217)
			_state->__Field(HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"), hx::paccDynamic )();
			HX_STACK_LINE(220)
			::haxe::ds::StringMap tmp9 = this->_states;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(220)
			::String tmp10 = _name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(220)
			tmp9->remove(tmp10);
			HX_STACK_LINE(221)
			(this->_state_count)--;
		}
		HX_STACK_LINE(225)
		Dynamic tmp7 = _state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(225)
		return tmp7;
	}
	HX_STACK_LINE(229)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,remove,return )

Void States_obj::kill( ::String _name){
{
		HX_STACK_FRAME("luxe.States","kill",0x9e922572,"luxe.States.kill","luxe/States.hx",233,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(235)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		if ((tmp1)){
			HX_STACK_LINE(236)
			::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(236)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			if ((tmp4)){
				HX_STACK_LINE(237)
				::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(237)
				::luxe::State tmp6 = this->remove(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(237)
				::luxe::State _state = tmp6;		HX_STACK_VAR(_state,"_state");
				HX_STACK_LINE(238)
				bool tmp7 = (_state != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(238)
				if ((tmp7)){
					HX_STACK_LINE(239)
					_state->ondestroy();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,kill,(void))

bool States_obj::enabled( ::String _name){
	HX_STACK_FRAME("luxe.States","enabled",0xb3831b2d,"luxe.States.enabled","luxe/States.hx",246,0xdf083bc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(247)
	int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	if ((tmp1)){
		HX_STACK_LINE(247)
		return false;
	}
	HX_STACK_LINE(249)
	::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	::luxe::State tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(249)
	::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
	HX_STACK_LINE(251)
	bool tmp5 = (state != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(251)
	if ((tmp5)){
		HX_STACK_LINE(252)
		bool tmp6 = state->enabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		return tmp6;
	}
	HX_STACK_LINE(255)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,enabled,return )

Void States_obj::enable( ::String _name,Dynamic _enable_with){
{
		HX_STACK_FRAME("luxe.States","enable",0x770c1157,"luxe.States.enable","luxe/States.hx",259,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_enable_with,"_enable_with")
		HX_STACK_LINE(260)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		if ((tmp1)){
			HX_STACK_LINE(260)
			return null();
		}
		HX_STACK_LINE(262)
		::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		::luxe::State tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(263)
		bool tmp5 = (state != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(263)
		if ((tmp5)){
			HX_STACK_LINE(265)
			Dynamic tmp6 = _enable_with;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			state->onenabled(tmp6);
			HX_STACK_LINE(266)
			state->active = true;
			HX_STACK_LINE(267)
			state->enabled = true;
			HX_STACK_LINE(268)
			::luxe::State tmp7 = state;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(268)
			this->active_states->push(tmp7);
			HX_STACK_LINE(269)
			(this->active_count)++;
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,enable,(void))

Void States_obj::disable( ::String _name,Dynamic _disable_with){
{
		HX_STACK_FRAME("luxe.States","disable",0xe6aa8094,"luxe.States.disable","luxe/States.hx",274,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_disable_with,"_disable_with")
		HX_STACK_LINE(275)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		if ((tmp1)){
			HX_STACK_LINE(275)
			return null();
		}
		HX_STACK_LINE(277)
		::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		::luxe::State tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(278)
		bool tmp5 = (state != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(278)
		if ((tmp5)){
			HX_STACK_LINE(280)
			Dynamic tmp6 = _disable_with;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(280)
			state->ondisabled(tmp6);
			HX_STACK_LINE(281)
			state->active = false;
			HX_STACK_LINE(282)
			state->enabled = false;
			HX_STACK_LINE(283)
			::luxe::State tmp7 = state;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(283)
			this->active_states->remove(tmp7);
			HX_STACK_LINE(284)
			(this->active_count)--;
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,disable,(void))

Void States_obj::enter( ::luxe::State _state,Dynamic _enter_with){
{
		HX_STACK_FRAME("luxe.States","enter",0xb03b40c4,"luxe.States.enter","luxe/States.hx",289,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_enter_with,"_enter_with")
		HX_STACK_LINE(292)
		Dynamic tmp = _enter_with;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		_state->onenter(tmp);
		HX_STACK_LINE(293)
		::luxe::State tmp1 = _state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		this->active_states->push(tmp1);
		HX_STACK_LINE(294)
		(this->active_count)++;
		HX_STACK_LINE(295)
		_state->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,enter,(void))

Void States_obj::leave( ::luxe::State _state,Dynamic _leave_with){
{
		HX_STACK_FRAME("luxe.States","leave",0xb20808a3,"luxe.States.leave","luxe/States.hx",299,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_state,"_state")
		HX_STACK_ARG(_leave_with,"_leave_with")
		HX_STACK_LINE(302)
		_state->active = false;
		HX_STACK_LINE(303)
		::luxe::State tmp = _state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		this->active_states->remove(tmp);
		HX_STACK_LINE(304)
		(this->active_count)--;
		HX_STACK_LINE(305)
		Dynamic tmp1 = _leave_with;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		_state->onleave(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(States_obj,leave,(void))

bool States_obj::set( ::String name,Dynamic _enter_with,Dynamic _leave_with,Dynamic pos){
	HX_STACK_FRAME("luxe.States","set",0xc755ec4e,"luxe.States.set","luxe/States.hx",310,0xdf083bc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(_enter_with,"_enter_with")
	HX_STACK_ARG(_leave_with,"_leave_with")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(316)
	::haxe::ds::StringMap tmp = this->_states;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(316)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(316)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(316)
	if ((tmp3)){
		HX_STACK_LINE(317)
		::String tmp4 = (HX_HCSTRING("cannot find state named ","\x60","\x80","\x5b","\xc4") + name);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(317)
		::String tmp5 = (tmp4 + HX_HCSTRING(", is it added to this state machine?","\x17","\xf5","\x92","\xe2"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(317)
		::String tmp6 = (HX_HCSTRING("   i / states / ","\xa7","\xaf","\x13","\xa5") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("States.hx","\x9c","\xfe","\xc7","\xe5"),317,HX_HCSTRING("luxe.States","\x1a","\xeb","\x59","\x65"),HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		::haxe::Log_obj::trace(tmp6,tmp7);
		HX_STACK_LINE(318)
		return false;
	}
	HX_STACK_LINE(323)
	Dynamic tmp4 = _leave_with;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(323)
	this->unset(tmp4);
	HX_STACK_LINE(329)
	::haxe::ds::StringMap tmp5 = this->_states;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(329)
	::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(329)
	::luxe::State tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(329)
	this->current_state = tmp7;
	HX_STACK_LINE(330)
	::luxe::State tmp8 = this->current_state;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(330)
	Dynamic tmp9 = _enter_with;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(330)
	this->enter(tmp8,tmp9);
	HX_STACK_LINE(334)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(States_obj,set,return )

Void States_obj::unset( Dynamic _leave_with){
{
		HX_STACK_FRAME("luxe.States","unset",0xe6a3c695,"luxe.States.unset","luxe/States.hx",339,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_leave_with,"_leave_with")
		HX_STACK_LINE(341)
		::luxe::State tmp = this->current_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		if ((tmp1)){
			HX_STACK_LINE(346)
			::luxe::State tmp2 = this->current_state;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(346)
			Dynamic tmp3 = _leave_with;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(346)
			this->leave(tmp2,tmp3);
			HX_STACK_LINE(350)
			this->current_state = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,unset,(void))

Void States_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.States","destroy",0x59d843a6,"luxe.States.destroy","luxe/States.hx",356,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(358)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		if ((tmp1)){
			HX_STACK_LINE(359)
			::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(359)
			for(::cpp::FastIterator_obj< ::luxe::State > *__it = ::cpp::CreateFastIterator< ::luxe::State >(tmp3);  __it->hasNext(); ){
				::luxe::State state = __it->next();
				state->destroy();
			}
		}
		HX_STACK_LINE(364)
		::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		Dynamic tmp3 = this->init_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		tmp2->emitter->off((int)2,tmp3,tmp4);
		HX_STACK_LINE(365)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(365)
		Dynamic tmp6 = this->ondestroy_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(365)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(365)
		tmp5->emitter->off((int)8,tmp6,tmp7);
		HX_STACK_LINE(366)
		::luxe::Core tmp8 = ::Luxe_obj::core;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(366)
		Dynamic tmp9 = this->update_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(366)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(366)
		tmp8->emitter->off((int)6,tmp9,tmp10);
		HX_STACK_LINE(368)
		::luxe::Core tmp11 = ::Luxe_obj::core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(368)
		Dynamic tmp12 = this->prerender_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(368)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(368)
		tmp11->emitter->off((int)9,tmp12,tmp13);
		HX_STACK_LINE(369)
		::luxe::Core tmp14 = ::Luxe_obj::core;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(369)
		Dynamic tmp15 = this->postrender_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(369)
		Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(369)
		tmp14->emitter->off((int)11,tmp15,tmp16);
		HX_STACK_LINE(370)
		::luxe::Core tmp17 = ::Luxe_obj::core;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(370)
		Dynamic tmp18 = this->render_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(370)
		Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(370)
		tmp17->emitter->off((int)10,tmp18,tmp19);
		HX_STACK_LINE(372)
		::luxe::Core tmp20 = ::Luxe_obj::core;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(372)
		Dynamic tmp21 = this->keydown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(372)
		Dynamic tmp22 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(372)
		tmp20->emitter->off((int)12,tmp21,tmp22);
		HX_STACK_LINE(373)
		::luxe::Core tmp23 = ::Luxe_obj::core;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(373)
		Dynamic tmp24 = this->keyup_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(373)
		Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(373)
		tmp23->emitter->off((int)13,tmp24,tmp25);
		HX_STACK_LINE(374)
		::luxe::Core tmp26 = ::Luxe_obj::core;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(374)
		Dynamic tmp27 = this->textinput_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(374)
		Dynamic tmp28 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(374)
		tmp26->emitter->off((int)14,tmp27,tmp28);
		HX_STACK_LINE(376)
		::luxe::Core tmp29 = ::Luxe_obj::core;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(376)
		Dynamic tmp30 = this->inputup_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(376)
		Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(376)
		tmp29->emitter->off((int)16,tmp30,tmp31);
		HX_STACK_LINE(377)
		::luxe::Core tmp32 = ::Luxe_obj::core;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(377)
		Dynamic tmp33 = this->inputdown_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(377)
		Dynamic tmp34 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(377)
		tmp32->emitter->off((int)15,tmp33,tmp34);
		HX_STACK_LINE(379)
		::luxe::Core tmp35 = ::Luxe_obj::core;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(379)
		Dynamic tmp36 = this->mouseup_dyn();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(379)
		Dynamic tmp37 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(379)
		tmp35->emitter->off((int)18,tmp36,tmp37);
		HX_STACK_LINE(380)
		::luxe::Core tmp38 = ::Luxe_obj::core;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(380)
		Dynamic tmp39 = this->mousedown_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(380)
		Dynamic tmp40 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(380)
		tmp38->emitter->off((int)17,tmp39,tmp40);
		HX_STACK_LINE(381)
		::luxe::Core tmp41 = ::Luxe_obj::core;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(381)
		Dynamic tmp42 = this->mousemove_dyn();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(381)
		Dynamic tmp43 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(381)
		tmp41->emitter->off((int)19,tmp42,tmp43);
		HX_STACK_LINE(382)
		::luxe::Core tmp44 = ::Luxe_obj::core;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(382)
		Dynamic tmp45 = this->mousewheel_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(382)
		Dynamic tmp46 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(382)
		tmp44->emitter->off((int)20,tmp45,tmp46);
		HX_STACK_LINE(384)
		::luxe::Core tmp47 = ::Luxe_obj::core;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(384)
		Dynamic tmp48 = this->touchup_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(384)
		Dynamic tmp49 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(384)
		tmp47->emitter->off((int)22,tmp48,tmp49);
		HX_STACK_LINE(385)
		::luxe::Core tmp50 = ::Luxe_obj::core;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(385)
		Dynamic tmp51 = this->touchdown_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(385)
		Dynamic tmp52 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(385)
		tmp50->emitter->off((int)21,tmp51,tmp52);
		HX_STACK_LINE(386)
		::luxe::Core tmp53 = ::Luxe_obj::core;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(386)
		Dynamic tmp54 = this->touchmove_dyn();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(386)
		Dynamic tmp55 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(386)
		tmp53->emitter->off((int)23,tmp54,tmp55);
		HX_STACK_LINE(388)
		::luxe::Core tmp56 = ::Luxe_obj::core;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(388)
		Dynamic tmp57 = this->gamepadup_dyn();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(388)
		Dynamic tmp58 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(388)
		tmp56->emitter->off((int)26,tmp57,tmp58);
		HX_STACK_LINE(389)
		::luxe::Core tmp59 = ::Luxe_obj::core;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(389)
		Dynamic tmp60 = this->gamepaddown_dyn();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(389)
		Dynamic tmp61 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(389)
		tmp59->emitter->off((int)25,tmp60,tmp61);
		HX_STACK_LINE(390)
		::luxe::Core tmp62 = ::Luxe_obj::core;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(390)
		Dynamic tmp63 = this->gamepadaxis_dyn();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(390)
		Dynamic tmp64 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(390)
		tmp62->emitter->off((int)24,tmp63,tmp64);
		HX_STACK_LINE(391)
		::luxe::Core tmp65 = ::Luxe_obj::core;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(391)
		Dynamic tmp66 = this->gamepaddevice_dyn();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(391)
		Dynamic tmp67 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(391)
		tmp65->emitter->off((int)27,tmp66,tmp67);
		HX_STACK_LINE(393)
		::luxe::Core tmp68 = ::Luxe_obj::core;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(393)
		Dynamic tmp69 = this->windowmoved_dyn();		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(393)
		Dynamic tmp70 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(393)
		tmp68->emitter->off((int)29,tmp69,tmp70);
		HX_STACK_LINE(394)
		::luxe::Core tmp71 = ::Luxe_obj::core;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(394)
		Dynamic tmp72 = this->windowresized_dyn();		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(394)
		Dynamic tmp73 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(394)
		tmp71->emitter->off((int)30,tmp72,tmp73);
		HX_STACK_LINE(395)
		::luxe::Core tmp74 = ::Luxe_obj::core;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(395)
		Dynamic tmp75 = this->windowsized_dyn();		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(395)
		Dynamic tmp76 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(395)
		tmp74->emitter->off((int)31,tmp75,tmp76);
		HX_STACK_LINE(396)
		::luxe::Core tmp77 = ::Luxe_obj::core;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(396)
		Dynamic tmp78 = this->windowminimized_dyn();		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(396)
		Dynamic tmp79 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(396)
		tmp77->emitter->off((int)32,tmp78,tmp79);
		HX_STACK_LINE(397)
		::luxe::Core tmp80 = ::Luxe_obj::core;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(397)
		Dynamic tmp81 = this->windowrestored_dyn();		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(397)
		Dynamic tmp82 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(397)
		tmp80->emitter->off((int)33,tmp81,tmp82);
		HX_STACK_LINE(399)
		Dynamic tmp83 = hx::SourceInfo(HX_HCSTRING("States.hx","\x9c","\xfe","\xc7","\xe5"),399,HX_HCSTRING("luxe.States","\x1a","\xeb","\x59","\x65"),HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"));		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(399)
		this->emit((int)8,null(),tmp83);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(States_obj,destroy,(void))

Void States_obj::init( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","init",0x9d4380e4,"luxe.States.init","luxe/States.hx",404,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(405)
		int tmp = this->_state_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		if ((tmp1)){
			HX_STACK_LINE(406)
			::haxe::ds::StringMap tmp2 = this->_states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(406)
			Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(406)
			for(::cpp::FastIterator_obj< ::luxe::State > *__it = ::cpp::CreateFastIterator< ::luxe::State >(tmp3);  __it->hasNext(); ){
				::luxe::State state = __it->next();
				{
					HX_STACK_LINE(407)
					bool tmp4 = state->inited;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(407)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(407)
					if ((tmp5)){
						HX_STACK_LINE(407)
						state->inited = true;
						HX_STACK_LINE(407)
						state->init();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,init,(void))

Void States_obj::reset( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","reset",0x267d1d7b,"luxe.States.reset","luxe/States.hx",412,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(413)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		if ((tmp1)){
			HX_STACK_LINE(414)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(414)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(414)
			while((true)){
				HX_STACK_LINE(414)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(414)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(414)
				if ((tmp3)){
					HX_STACK_LINE(414)
					break;
				}
				HX_STACK_LINE(414)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(414)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(414)
				++(_g);
				HX_STACK_LINE(415)
				state->onreset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,reset,(void))

Void States_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.States","update",0x0589e8dd,"luxe.States.update","luxe/States.hx",420,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(421)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		if ((tmp1)){
			HX_STACK_LINE(422)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(422)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(422)
			while((true)){
				HX_STACK_LINE(422)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(422)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(422)
				if ((tmp3)){
					HX_STACK_LINE(422)
					break;
				}
				HX_STACK_LINE(422)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(422)
				++(_g);
				HX_STACK_LINE(424)
				Float tmp5 = dt;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(424)
				state->update(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,update,(void))

Void States_obj::ondestroy( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","ondestroy",0xede5d767,"luxe.States.ondestroy","luxe/States.hx",431,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(431)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,ondestroy,(void))

Void States_obj::render( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","render",0x83adce2a,"luxe.States.render","luxe/States.hx",435,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(436)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(436)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(436)
		if ((tmp1)){
			HX_STACK_LINE(437)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(437)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(437)
			while((true)){
				HX_STACK_LINE(437)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(437)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(437)
				if ((tmp3)){
					HX_STACK_LINE(437)
					break;
				}
				HX_STACK_LINE(437)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(437)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(437)
				++(_g);
				HX_STACK_LINE(438)
				state->onrender();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,render,(void))

Void States_obj::prerender( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","prerender",0xee3c2165,"luxe.States.prerender","luxe/States.hx",443,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(444)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(444)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(444)
		if ((tmp1)){
			HX_STACK_LINE(445)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(445)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(445)
			while((true)){
				HX_STACK_LINE(445)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(445)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(445)
				if ((tmp3)){
					HX_STACK_LINE(445)
					break;
				}
				HX_STACK_LINE(445)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(445)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(445)
				++(_g);
				HX_STACK_LINE(446)
				state->onprerender();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,prerender,(void))

Void States_obj::postrender( Dynamic _){
{
		HX_STACK_FRAME("luxe.States","postrender",0x8c1dd48a,"luxe.States.postrender","luxe/States.hx",451,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(452)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(452)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(452)
		if ((tmp1)){
			HX_STACK_LINE(453)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(453)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(453)
			while((true)){
				HX_STACK_LINE(453)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(453)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(453)
				if ((tmp3)){
					HX_STACK_LINE(453)
					break;
				}
				HX_STACK_LINE(453)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(453)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(453)
				++(_g);
				HX_STACK_LINE(454)
				state->onpostrender();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,postrender,(void))

Void States_obj::keydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","keydown",0xe6c0542d,"luxe.States.keydown","luxe/States.hx",461,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(462)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		if ((tmp1)){
			HX_STACK_LINE(463)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(463)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(463)
			while((true)){
				HX_STACK_LINE(463)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(463)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(463)
				if ((tmp3)){
					HX_STACK_LINE(463)
					break;
				}
				HX_STACK_LINE(463)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(463)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(463)
				++(_g);
				HX_STACK_LINE(464)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(464)
				state->onkeydown(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,keydown,(void))

Void States_obj::keyup( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","keyup",0x1eb3a966,"luxe.States.keyup","luxe/States.hx",469,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(470)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		if ((tmp1)){
			HX_STACK_LINE(471)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(471)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(471)
			while((true)){
				HX_STACK_LINE(471)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(471)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(471)
				if ((tmp3)){
					HX_STACK_LINE(471)
					break;
				}
				HX_STACK_LINE(471)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(471)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(471)
				++(_g);
				HX_STACK_LINE(472)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(472)
				state->onkeyup(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,keyup,(void))

Void States_obj::textinput( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","textinput",0x82e3fde9,"luxe.States.textinput","luxe/States.hx",477,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(478)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		if ((tmp1)){
			HX_STACK_LINE(479)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(479)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(479)
			while((true)){
				HX_STACK_LINE(479)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(479)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(479)
				if ((tmp3)){
					HX_STACK_LINE(479)
					break;
				}
				HX_STACK_LINE(479)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(479)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(479)
				++(_g);
				HX_STACK_LINE(480)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(480)
				state->ontextinput(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,textinput,(void))

Void States_obj::inputup( Dynamic _event){
{
		HX_STACK_FRAME("luxe.States","inputup",0x0970d791,"luxe.States.inputup","luxe/States.hx",487,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(488)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(488)
		if ((tmp1)){
			HX_STACK_LINE(489)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(489)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(489)
			while((true)){
				HX_STACK_LINE(489)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(489)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(489)
				if ((tmp3)){
					HX_STACK_LINE(489)
					break;
				}
				HX_STACK_LINE(489)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(489)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(489)
				++(_g);
				HX_STACK_LINE(490)
				::String tmp5 = _event->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(490)
				Dynamic tmp6 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(490)
				state->oninputup(tmp5,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,inputup,(void))

Void States_obj::inputdown( Dynamic _event){
{
		HX_STACK_FRAME("luxe.States","inputdown",0xddc5a318,"luxe.States.inputdown","luxe/States.hx",495,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(496)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(496)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(496)
		if ((tmp1)){
			HX_STACK_LINE(497)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(497)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(497)
			while((true)){
				HX_STACK_LINE(497)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(497)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(497)
				if ((tmp3)){
					HX_STACK_LINE(497)
					break;
				}
				HX_STACK_LINE(497)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(497)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(497)
				++(_g);
				HX_STACK_LINE(498)
				::String tmp5 = _event->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(498)
				Dynamic tmp6 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(498)
				state->oninputdown(tmp5,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,inputdown,(void))

Void States_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","mousedown",0xc2ef9eb3,"luxe.States.mousedown","luxe/States.hx",505,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(506)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(506)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		if ((tmp1)){
			HX_STACK_LINE(507)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(507)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(507)
			while((true)){
				HX_STACK_LINE(507)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(507)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(507)
				if ((tmp3)){
					HX_STACK_LINE(507)
					break;
				}
				HX_STACK_LINE(507)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(507)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(507)
				++(_g);
				HX_STACK_LINE(508)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(508)
				state->onmousedown(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,mousedown,(void))

Void States_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","mousewheel",0xbaaa152a,"luxe.States.mousewheel","luxe/States.hx",513,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(514)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(514)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(514)
		if ((tmp1)){
			HX_STACK_LINE(515)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(515)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(515)
			while((true)){
				HX_STACK_LINE(515)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(515)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(515)
				if ((tmp3)){
					HX_STACK_LINE(515)
					break;
				}
				HX_STACK_LINE(515)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(515)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(515)
				++(_g);
				HX_STACK_LINE(516)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(516)
				state->onmousewheel(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,mousewheel,(void))

Void States_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","mouseup",0xf5c5266c,"luxe.States.mouseup","luxe/States.hx",521,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(522)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(522)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(522)
		if ((tmp1)){
			HX_STACK_LINE(523)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(523)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(523)
			while((true)){
				HX_STACK_LINE(523)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(523)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(523)
				if ((tmp3)){
					HX_STACK_LINE(523)
					break;
				}
				HX_STACK_LINE(523)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(523)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(523)
				++(_g);
				HX_STACK_LINE(524)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(524)
				state->onmouseup(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,mouseup,(void))

Void States_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","mousemove",0xc8e28962,"luxe.States.mousemove","luxe/States.hx",529,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(530)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(530)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(530)
		if ((tmp1)){
			HX_STACK_LINE(531)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(531)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(531)
			while((true)){
				HX_STACK_LINE(531)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(531)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(531)
				if ((tmp3)){
					HX_STACK_LINE(531)
					break;
				}
				HX_STACK_LINE(531)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(531)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(531)
				++(_g);
				HX_STACK_LINE(532)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(532)
				state->onmousemove(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,mousemove,(void))

Void States_obj::touchdown( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","touchdown",0xdc07754d,"luxe.States.touchdown","luxe/States.hx",539,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(540)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(540)
		if ((tmp1)){
			HX_STACK_LINE(541)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(541)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(541)
			while((true)){
				HX_STACK_LINE(541)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(541)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(541)
				if ((tmp3)){
					HX_STACK_LINE(541)
					break;
				}
				HX_STACK_LINE(541)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(541)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(541)
				++(_g);
				HX_STACK_LINE(542)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(542)
				state->ontouchdown(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,touchdown,(void))

Void States_obj::touchup( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","touchup",0x0e4a4286,"luxe.States.touchup","luxe/States.hx",547,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(548)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(548)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		if ((tmp1)){
			HX_STACK_LINE(549)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(549)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(549)
			while((true)){
				HX_STACK_LINE(549)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(549)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(549)
				if ((tmp3)){
					HX_STACK_LINE(549)
					break;
				}
				HX_STACK_LINE(549)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(549)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(549)
				++(_g);
				HX_STACK_LINE(550)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(550)
				state->ontouchup(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,touchup,(void))

Void States_obj::touchmove( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","touchmove",0xe1fa5ffc,"luxe.States.touchmove","luxe/States.hx",555,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(556)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(556)
		if ((tmp1)){
			HX_STACK_LINE(557)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(557)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(557)
			while((true)){
				HX_STACK_LINE(557)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(557)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(557)
				if ((tmp3)){
					HX_STACK_LINE(557)
					break;
				}
				HX_STACK_LINE(557)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(557)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(557)
				++(_g);
				HX_STACK_LINE(558)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(558)
				state->ontouchmove(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,touchmove,(void))

Void States_obj::gamepadaxis( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","gamepadaxis",0x05f33e6e,"luxe.States.gamepadaxis","luxe/States.hx",565,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(566)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(566)
		if ((tmp1)){
			HX_STACK_LINE(567)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(567)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(567)
			while((true)){
				HX_STACK_LINE(567)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(567)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(567)
				if ((tmp3)){
					HX_STACK_LINE(567)
					break;
				}
				HX_STACK_LINE(567)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(567)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(567)
				++(_g);
				HX_STACK_LINE(568)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(568)
				state->ongamepadaxis(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,gamepadaxis,(void))

Void States_obj::gamepadup( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","gamepadup",0x1e3e8ae8,"luxe.States.gamepadup","luxe/States.hx",573,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(574)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(574)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(574)
		if ((tmp1)){
			HX_STACK_LINE(575)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(575)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(575)
			while((true)){
				HX_STACK_LINE(575)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(575)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(575)
				if ((tmp3)){
					HX_STACK_LINE(575)
					break;
				}
				HX_STACK_LINE(575)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(575)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(575)
				++(_g);
				HX_STACK_LINE(576)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(576)
				state->ongamepadup(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,gamepadup,(void))

Void States_obj::gamepaddown( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","gamepaddown",0x07e81a2f,"luxe.States.gamepaddown","luxe/States.hx",581,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(582)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(582)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(582)
		if ((tmp1)){
			HX_STACK_LINE(583)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(583)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(583)
			while((true)){
				HX_STACK_LINE(583)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(583)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(583)
				if ((tmp3)){
					HX_STACK_LINE(583)
					break;
				}
				HX_STACK_LINE(583)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(583)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(583)
				++(_g);
				HX_STACK_LINE(584)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(584)
				state->ongamepaddown(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,gamepaddown,(void))

Void States_obj::gamepaddevice( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","gamepaddevice",0x2317cba3,"luxe.States.gamepaddevice","luxe/States.hx",589,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(590)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(590)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(590)
		if ((tmp1)){
			HX_STACK_LINE(591)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(591)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(591)
			while((true)){
				HX_STACK_LINE(591)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(591)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(591)
				if ((tmp3)){
					HX_STACK_LINE(591)
					break;
				}
				HX_STACK_LINE(591)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(591)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(591)
				++(_g);
				HX_STACK_LINE(592)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(592)
				state->ongamepaddevice(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,gamepaddevice,(void))

Void States_obj::windowmoved( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","windowmoved",0x8a0bceef,"luxe.States.windowmoved","luxe/States.hx",599,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(600)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(600)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(600)
		if ((tmp1)){
			HX_STACK_LINE(601)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(601)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(601)
			while((true)){
				HX_STACK_LINE(601)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(601)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(601)
				if ((tmp3)){
					HX_STACK_LINE(601)
					break;
				}
				HX_STACK_LINE(601)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(601)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(601)
				++(_g);
				HX_STACK_LINE(602)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(602)
				state->onwindowmoved(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowmoved,(void))

Void States_obj::windowresized( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","windowresized",0x18ac85ac,"luxe.States.windowresized","luxe/States.hx",607,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(608)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(608)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(608)
		if ((tmp1)){
			HX_STACK_LINE(609)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(609)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(609)
			while((true)){
				HX_STACK_LINE(609)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(609)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(609)
				if ((tmp3)){
					HX_STACK_LINE(609)
					break;
				}
				HX_STACK_LINE(609)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(609)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(609)
				++(_g);
				HX_STACK_LINE(610)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(610)
				state->onwindowresized(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowresized,(void))

Void States_obj::windowsized( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","windowsized",0xfa7f0b3f,"luxe.States.windowsized","luxe/States.hx",615,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(616)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(616)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(616)
		if ((tmp1)){
			HX_STACK_LINE(617)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(617)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(617)
			while((true)){
				HX_STACK_LINE(617)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(617)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(617)
				if ((tmp3)){
					HX_STACK_LINE(617)
					break;
				}
				HX_STACK_LINE(617)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(617)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(617)
				++(_g);
				HX_STACK_LINE(618)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(618)
				state->onwindowsized(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowsized,(void))

Void States_obj::windowminimized( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","windowminimized",0x7dc20c42,"luxe.States.windowminimized","luxe/States.hx",623,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(624)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(624)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(624)
		if ((tmp1)){
			HX_STACK_LINE(625)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(625)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(625)
			while((true)){
				HX_STACK_LINE(625)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(625)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(625)
				if ((tmp3)){
					HX_STACK_LINE(625)
					break;
				}
				HX_STACK_LINE(625)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(625)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(625)
				++(_g);
				HX_STACK_LINE(626)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(626)
				state->onwindowminimized(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowminimized,(void))

Void States_obj::windowrestored( Dynamic e){
{
		HX_STACK_FRAME("luxe.States","windowrestored",0xcc75581a,"luxe.States.windowrestored","luxe/States.hx",631,0xdf083bc3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(632)
		int tmp = this->active_count;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(632)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(632)
		if ((tmp1)){
			HX_STACK_LINE(633)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(633)
			Array< ::Dynamic > _g1 = this->active_states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(633)
			while((true)){
				HX_STACK_LINE(633)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(633)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(633)
				if ((tmp3)){
					HX_STACK_LINE(633)
					break;
				}
				HX_STACK_LINE(633)
				::luxe::State tmp4 = _g1->__get(_g).StaticCast< ::luxe::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(633)
				::luxe::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(633)
				++(_g);
				HX_STACK_LINE(634)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(634)
				state->onwindowrestored(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(States_obj,windowrestored,(void))


States_obj::States_obj()
{
}

void States_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(States);
	HX_MARK_MEMBER_NAME(_states,"_states");
	HX_MARK_MEMBER_NAME(active_states,"active_states");
	HX_MARK_MEMBER_NAME(current_state,"current_state");
	HX_MARK_MEMBER_NAME(active_count,"active_count");
	HX_MARK_MEMBER_NAME(_state_count,"_state_count");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void States_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_states,"_states");
	HX_VISIT_MEMBER_NAME(active_states,"active_states");
	HX_VISIT_MEMBER_NAME(current_state,"current_state");
	HX_VISIT_MEMBER_NAME(active_count,"active_count");
	HX_VISIT_MEMBER_NAME(_state_count,"_state_count");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic States_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { return enter_dyn(); }
		if (HX_FIELD_EQ(inName,"leave") ) { return leave_dyn(); }
		if (HX_FIELD_EQ(inName,"unset") ) { return unset_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { return _states; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"inputup") ) { return inputup_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"touchup") ) { return touchup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"prerender") ) { return prerender_dyn(); }
		if (HX_FIELD_EQ(inName,"textinput") ) { return textinput_dyn(); }
		if (HX_FIELD_EQ(inName,"inputdown") ) { return inputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"touchdown") ) { return touchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchmove") ) { return touchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepadup") ) { return gamepadup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postrender") ) { return postrender_dyn(); }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gamepadaxis") ) { return gamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"gamepaddown") ) { return gamepaddown_dyn(); }
		if (HX_FIELD_EQ(inName,"windowmoved") ) { return windowmoved_dyn(); }
		if (HX_FIELD_EQ(inName,"windowsized") ) { return windowsized_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"active_count") ) { return active_count; }
		if (HX_FIELD_EQ(inName,"_state_count") ) { return _state_count; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"active_states") ) { return active_states; }
		if (HX_FIELD_EQ(inName,"current_state") ) { return current_state; }
		if (HX_FIELD_EQ(inName,"gamepaddevice") ) { return gamepaddevice_dyn(); }
		if (HX_FIELD_EQ(inName,"windowresized") ) { return windowresized_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"windowrestored") ) { return windowrestored_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"windowminimized") ) { return windowminimized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic States_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { _states=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"active_count") ) { active_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_state_count") ) { _state_count=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"active_states") ) { active_states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current_state") ) { current_state=inValue.Cast< ::luxe::State >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool States_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void States_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_states","\xe1","\xea","\x72","\x74"));
	outFields->push(HX_HCSTRING("active_states","\xdb","\x0d","\xeb","\x5e"));
	outFields->push(HX_HCSTRING("current_state","\x4b","\xca","\xba","\x2e"));
	outFields->push(HX_HCSTRING("active_count","\x56","\x66","\xd1","\x71"));
	outFields->push(HX_HCSTRING("_state_count","\xe2","\x12","\x49","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(States_obj,_states),HX_HCSTRING("_states","\xe1","\xea","\x72","\x74")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(States_obj,active_states),HX_HCSTRING("active_states","\xdb","\x0d","\xeb","\x5e")},
	{hx::fsObject /*::luxe::State*/ ,(int)offsetof(States_obj,current_state),HX_HCSTRING("current_state","\x4b","\xca","\xba","\x2e")},
	{hx::fsInt,(int)offsetof(States_obj,active_count),HX_HCSTRING("active_count","\x56","\x66","\xd1","\x71")},
	{hx::fsInt,(int)offsetof(States_obj,_state_count),HX_HCSTRING("_state_count","\xe2","\x12","\x49","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_states","\xe1","\xea","\x72","\x74"),
	HX_HCSTRING("active_states","\xdb","\x0d","\xeb","\x5e"),
	HX_HCSTRING("current_state","\x4b","\xca","\xba","\x2e"),
	HX_HCSTRING("active_count","\x56","\x66","\xd1","\x71"),
	HX_HCSTRING("_state_count","\xe2","\x12","\x49","\xf2"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("enter","\x18","\x6d","\x86","\x70"),
	HX_HCSTRING("leave","\xf7","\x34","\x53","\x72"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unset","\xe9","\xf2","\xee","\xa6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("prerender","\xb9","\x07","\x36","\x2f"),
	HX_HCSTRING("postrender","\xb6","\x77","\xcd","\x25"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("textinput","\x3d","\xe4","\xdd","\xc3"),
	HX_HCSTRING("inputup","\xe5","\xc0","\x1e","\xd4"),
	HX_HCSTRING("inputdown","\x6c","\x89","\xbf","\x1e"),
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
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(States_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(States_obj::__mClass,"__mClass");
};

#endif

hx::Class States_obj::__mClass;

void States_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.States","\x1a","\xeb","\x59","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &States_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< States_obj >;
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
