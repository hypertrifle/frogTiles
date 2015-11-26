#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_luxe_Cursor
#include <luxe/Cursor.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_SceneDebugView
#include <luxe/debug/SceneDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_StatsDebugView
#include <luxe/debug/StatsDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_TraceDebugView
#include <luxe/debug/TraceDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_system_input_Keycodes
#include <snow/system/input/Keycodes.h>
#endif
namespace luxe{

Void Debug_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Debug","new",0xf1f6bded,"luxe.Debug.new","luxe/Debug.hx",25,0xe4198724)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(354)
	this->last_cursor_grab = false;
	HX_STACK_LINE(353)
	this->last_cursor_shown = true;
	HX_STACK_LINE(55)
	this->profiling = false;
	HX_STACK_LINE(54)
	this->profile_path = HX_HCSTRING("profile.txt","\xab","\xd0","\x4f","\xc6");
	HX_STACK_LINE(51)
	this->started = false;
	HX_STACK_LINE(45)
	this->last_view_index = (int)0;
	HX_STACK_LINE(44)
	this->current_view_index = (int)0;
	HX_STACK_LINE(42)
	this->dt_average_count = (int)0;
	HX_STACK_LINE(41)
	this->dt_average_span = (int)60;
	HX_STACK_LINE(40)
	this->dt_average_accum = ((Float)0);
	HX_STACK_LINE(39)
	this->dt_average = ((Float)0);
	HX_STACK_LINE(28)
	this->visible = false;
	HX_STACK_LINE(60)
	this->core = _core;
}
;
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Debug_obj::init( ){
{
		HX_STACK_FRAME("luxe.Debug","init",0xc2a828e3,"luxe.Debug.init","luxe/Debug.hx",63,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(65)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			tmp = tmp2;
		}
		HX_STACK_LINE(65)
		::luxe::Debug_obj::trace_callbacks = tmp;
		HX_STACK_LINE(66)
		::luxe::Debug_obj::views = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(70)
		::luxe::debug::TraceDebugView tmp1 = ::luxe::debug::TraceDebugView_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::luxe::Debug_obj::views->push(tmp1);
		HX_STACK_LINE(71)
		::luxe::debug::StatsDebugView tmp2 = ::luxe::debug::StatsDebugView_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		::luxe::Debug_obj::views->push(tmp2);
		HX_STACK_LINE(73)
		::luxe::debug::ProfilerDebugView tmp3 = ::luxe::debug::ProfilerDebugView_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		::luxe::Debug_obj::views->push(tmp3);
		HX_STACK_LINE(74)
		::luxe::debug::SceneDebugView tmp4 = ::luxe::debug::SceneDebugView_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		::luxe::Debug_obj::views->push(tmp4);
		HX_STACK_LINE(76)
		::luxe::debug::DebugView tmp5 = ::luxe::Debug_obj::views->__get((int)0).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		this->current_view = tmp5;
		HX_STACK_LINE(80)
		Dynamic tmp6 = ::luxe::Debug_obj::internal_trace_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		::haxe::Log_obj::trace = tmp6;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,init,(void))

Dynamic Debug_obj::get_view( ::String _name){
	HX_STACK_FRAME("luxe.Debug","get_view",0xa5fdc141,"luxe.Debug.get_view","luxe/Debug.hx",87,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(89)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(89)
			if ((tmp1)){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(89)
			::luxe::debug::DebugView tmp2 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			::luxe::debug::DebugView view = tmp2;		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(89)
			++(_g);
			HX_STACK_LINE(91)
			::String tmp3 = view->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			if ((tmp5)){
				HX_STACK_LINE(92)
				Dynamic tmp6 = ((Dynamic)(view));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(97)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,get_view,return )

Void Debug_obj::start( ::String _name,Dynamic _max){
{
		HX_STACK_FRAME("luxe.Debug","start",0x566e9f2f,"luxe.Debug.start","luxe/Debug.hx",102,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_max,"_max")
		HX_STACK_LINE(104)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		bool tmp1 = tmp->headless;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		if ((tmp2)){
			HX_STACK_LINE(105)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			Dynamic tmp4 = _max;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(105)
			::luxe::debug::ProfilerDebugView_obj::start(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,start,(void))

Void Debug_obj::end( ::String _name){
{
		HX_STACK_FRAME("luxe.Debug","end",0xf1eff168,"luxe.Debug.end","luxe/Debug.hx",111,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(113)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = tmp->headless;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		if ((tmp2)){
			HX_STACK_LINE(114)
			::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(114)
			::luxe::debug::ProfilerDebugView_obj::end(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,end,(void))

Void Debug_obj::remove_trace_listener( ::String _name){
{
		HX_STACK_FRAME("luxe.Debug","remove_trace_listener",0x28bf5e56,"luxe.Debug.remove_trace_listener","luxe/Debug.hx",119,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(120)
		::haxe::ds::StringMap tmp = ::luxe::Debug_obj::trace_callbacks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,remove_trace_listener,(void))

Void Debug_obj::add_trace_listener( ::String _name,Dynamic _callback){
{
		HX_STACK_FRAME("luxe.Debug","add_trace_listener",0x1a792d5f,"luxe.Debug.add_trace_listener","luxe/Debug.hx",124,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_callback,"_callback")
		HX_STACK_LINE(125)
		::haxe::ds::StringMap tmp = ::luxe::Debug_obj::trace_callbacks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		Dynamic tmp2 = _callback;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,add_trace_listener,(void))

Void Debug_obj::create_debug_console( ){
{
		HX_STACK_FRAME("luxe.Debug","create_debug_console",0x55dabe3b,"luxe.Debug.create_debug_console","luxe/Debug.hx",173,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		::luxe::Debug _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(177)
			Dynamic tmp1 = this->keyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(177)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(177)
			tmp->emitter->on((int)13,tmp1,tmp2);
		}
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(178)
			Dynamic tmp1 = this->keydown_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(178)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(178)
			tmp->emitter->on((int)12,tmp1,tmp2);
		}
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(179)
			Dynamic tmp1 = this->mouseup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(179)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			tmp->emitter->on((int)18,tmp1,tmp2);
		}
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(180)
			Dynamic tmp1 = this->mousedown_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(180)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(180)
			tmp->emitter->on((int)17,tmp1,tmp2);
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(181)
			Dynamic tmp1 = this->mousemove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(181)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			tmp->emitter->on((int)19,tmp1,tmp2);
		}
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			Dynamic tmp1 = this->mousewheel_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			tmp->emitter->on((int)20,tmp1,tmp2);
		}
		HX_STACK_LINE(185)
		::phoenix::Renderer tmp = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		::phoenix::Batcher tmp1 = ::phoenix::Batcher_obj::__new(tmp,HX_HCSTRING("debug_batcher","\x7b","\xd9","\xce","\x3f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		this->batcher = tmp1;
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",187,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("camera_name","\x65","\x11","\x29","\x5d") , HX_HCSTRING("debug_batcher_camera","\x29","\x74","\xee","\xd9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(187)
		Dynamic tmp2 = _Function_1_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		::phoenix::Camera tmp3 = ::phoenix::Camera_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		this->view = tmp3;
		HX_STACK_LINE(189)
		::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		::phoenix::Batcher tmp5 = this->batcher;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(189)
		tmp5->view = tmp4;
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			::phoenix::Batcher tmp6 = this->batcher;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			::phoenix::Batcher _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(191)
			_this->layer = (int)999;
			HX_STACK_LINE(191)
			Dynamic tmp7 = _this->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			_this->renderer->batchers->sort(tmp7);
			HX_STACK_LINE(191)
			_this->layer;
		}
		HX_STACK_LINE(196)
		::luxe::Core tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		int tmp7 = tmp6->screen->get_w();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		::luxe::Core tmp9 = ::Luxe_obj::core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		int tmp10 = tmp9->screen->get_h();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(197)
		::phoenix::Color tmp12 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,((Float)0.8));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(200)
		::phoenix::Batcher tmp13 = this->batcher;		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Batcher &tmp13,Dynamic &tmp11,Dynamic &tmp8,::phoenix::Color &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",193,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("debug.overlay","\x75","\x22","\x27","\x36"),false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp11,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp12,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Dynamic)((int)999)),false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp13,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		Dynamic tmp14 = _Function_1_2::Block(tmp13,tmp11,tmp8,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(193)
		::phoenix::geometry::QuadGeometry tmp15 = ::phoenix::geometry::QuadGeometry_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(193)
		this->overlay = tmp15;
		HX_STACK_LINE(203)
		::phoenix::geometry::QuadGeometry tmp16 = this->overlay;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(203)
		tmp16->set_locked(true);
		HX_STACK_LINE(206)
		::luxe::Core tmp17 = ::Luxe_obj::core;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(206)
		int tmp18 = tmp17->screen->get_w();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(206)
		Float tmp19 = (tmp18 * ((Float)0.05));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(206)
		::luxe::Core tmp20 = ::Luxe_obj::core;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(206)
		int tmp21 = tmp20->screen->get_h();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(206)
		Float tmp22 = (tmp21 * ((Float)0.05));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(206)
		::phoenix::Vector tmp23 = ::phoenix::Vector_obj::__new(tmp19,tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(206)
		this->padding = tmp23;
		HX_STACK_LINE(208)
		::phoenix::Vector tmp24 = this->padding;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(208)
		Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(208)
		::phoenix::Vector tmp26 = this->padding;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(208)
		Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(208)
		::phoenix::Vector tmp28 = ::phoenix::Vector_obj::__new(tmp25,tmp27,null(),null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(209)
		::luxe::Core tmp29 = ::Luxe_obj::core;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(209)
		int tmp30 = tmp29->screen->get_w();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(209)
		::phoenix::Vector tmp31 = this->padding;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(209)
		Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(209)
		Float tmp33 = (tmp32 * (int)2);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(209)
		Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(209)
		::luxe::Core tmp35 = ::Luxe_obj::core;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(209)
		int tmp36 = tmp35->screen->get_h();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(209)
		::phoenix::Vector tmp37 = this->padding;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(209)
		Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(209)
		Float tmp39 = (tmp38 * (int)2);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(209)
		Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(209)
		::phoenix::Vector tmp41 = ::phoenix::Vector_obj::__new(tmp34,tmp40,null(),null());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(210)
		::phoenix::Batcher tmp42 = this->batcher;		HX_STACK_VAR(tmp42,"tmp42");
		struct _Function_1_3{
			inline static Dynamic Block( ::phoenix::Vector &tmp28,::phoenix::Batcher &tmp42,::phoenix::Vector &tmp41){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Debug.hx",207,0xe4198724)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp28,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp41,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp42,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(207)
		Dynamic tmp43 = _Function_1_3::Block(tmp28,tmp42,tmp41);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(207)
		::luxe::debug::Inspector tmp44 = ::luxe::debug::Inspector_obj::__new(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(207)
		this->inspector = tmp44;
		HX_STACK_LINE(214)
		Dynamic tmp45 = this->refresh_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(214)
		::luxe::debug::Inspector tmp46 = this->inspector;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(214)
		tmp46->onrefresh = tmp45;
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			::luxe::Core tmp47 = this->core;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(216)
			Dynamic tmp48 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::luxe::Debug,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _event){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Debug.hx",216,0xe4198724)
				HX_STACK_ARG(_event,"_event")
				{
					HX_STACK_LINE(218)
					Dynamic tmp49 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(218)
					Dynamic _w = tmp49;		HX_STACK_VAR(_w,"_w");
					HX_STACK_LINE(219)
					Dynamic tmp50 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(219)
					Dynamic _h = tmp50;		HX_STACK_VAR(_h,"_h");
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						::phoenix::Vector _this = _g->padding;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(221)
						Float tmp51 = (_w * ((Float)0.05));		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(221)
						Float _x = tmp51;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(221)
						Float tmp52 = (_h * ((Float)0.05));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(221)
						Float _y = tmp52;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(221)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(221)
						_this->ignore_listeners = true;
						HX_STACK_LINE(221)
						{
							HX_STACK_LINE(221)
							_this->x = _x;
							HX_STACK_LINE(221)
							bool tmp53 = _this->_construct;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(221)
							if ((tmp53)){
								HX_STACK_LINE(221)
								_this->x;
							}
							else{
								HX_STACK_LINE(221)
								bool tmp54 = (_this->listen_x != null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(221)
								bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(221)
								if ((tmp54)){
									HX_STACK_LINE(221)
									bool tmp56 = _this->ignore_listeners;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(221)
									bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(221)
									tmp55 = !(tmp57);
								}
								else{
									HX_STACK_LINE(221)
									tmp55 = false;
								}
								HX_STACK_LINE(221)
								if ((tmp55)){
									HX_STACK_LINE(221)
									Float tmp56 = _x;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(221)
									_this->listen_x(tmp56);
								}
								HX_STACK_LINE(221)
								_this->x;
							}
						}
						HX_STACK_LINE(221)
						{
							HX_STACK_LINE(221)
							_this->y = _y;
							HX_STACK_LINE(221)
							bool tmp53 = _this->_construct;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(221)
							if ((tmp53)){
								HX_STACK_LINE(221)
								_this->y;
							}
							else{
								HX_STACK_LINE(221)
								bool tmp54 = (_this->listen_y != null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(221)
								bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(221)
								if ((tmp54)){
									HX_STACK_LINE(221)
									bool tmp56 = _this->ignore_listeners;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(221)
									bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(221)
									tmp55 = !(tmp57);
								}
								else{
									HX_STACK_LINE(221)
									tmp55 = false;
								}
								HX_STACK_LINE(221)
								if ((tmp55)){
									HX_STACK_LINE(221)
									Float tmp56 = _y;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(221)
									_this->listen_y(tmp56);
								}
								HX_STACK_LINE(221)
								_this->y;
							}
						}
						HX_STACK_LINE(221)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(221)
						bool tmp53 = (_this->listen_x != null());		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(221)
						bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(221)
						if ((tmp53)){
							HX_STACK_LINE(221)
							bool tmp55 = _this->ignore_listeners;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(221)
							bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(221)
							tmp54 = !(tmp56);
						}
						else{
							HX_STACK_LINE(221)
							tmp54 = false;
						}
						HX_STACK_LINE(221)
						if ((tmp54)){
							HX_STACK_LINE(221)
							Float tmp55 = _this->x;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(221)
							_this->listen_x(tmp55);
						}
						HX_STACK_LINE(221)
						bool tmp55 = (_this->listen_y != null());		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(221)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(221)
						if ((tmp55)){
							HX_STACK_LINE(221)
							bool tmp57 = _this->ignore_listeners;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(221)
							bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(221)
							tmp56 = !(tmp58);
						}
						else{
							HX_STACK_LINE(221)
							tmp56 = false;
						}
						HX_STACK_LINE(221)
						if ((tmp56)){
							HX_STACK_LINE(221)
							Float tmp57 = _this->y;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(221)
							_this->listen_y(tmp57);
						}
						HX_STACK_LINE(221)
						_this;
					}
					HX_STACK_LINE(223)
					Dynamic tmp51 = _w;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(223)
					Dynamic tmp52 = _h;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(223)
					_g->overlay->resize_xy(tmp51,tmp52);
					HX_STACK_LINE(224)
					::phoenix::Rectangle tmp53 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,_w,_h);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(224)
					_g->view->set_viewport(tmp53);
					HX_STACK_LINE(225)
					Dynamic tmp54 = _w;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(225)
					Float tmp55 = _g->padding->x;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(225)
					Float tmp56 = (tmp55 * (int)2);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(225)
					Float tmp57 = (tmp54 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(225)
					Dynamic tmp58 = _h;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(225)
					Float tmp59 = _g->padding->y;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(225)
					Float tmp60 = (tmp59 * (int)2);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(225)
					Float tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(225)
					::phoenix::Vector tmp62 = ::phoenix::Vector_obj::__new(tmp57,tmp61,null(),null());		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(225)
					_g->inspector->set_size(tmp62);
					HX_STACK_LINE(226)
					Float tmp63 = _g->padding->x;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(226)
					Float tmp64 = _g->padding->y;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(226)
					::phoenix::Vector tmp65 = ::phoenix::Vector_obj::__new(tmp63,tmp64,null(),null());		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(226)
					_g->inspector->set_pos(tmp65);
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(228)
						Array< ::Dynamic > _g2 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(228)
						while((true)){
							HX_STACK_LINE(228)
							bool tmp66 = (_g1 < _g2->length);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(228)
							bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(228)
							if ((tmp67)){
								HX_STACK_LINE(228)
								break;
							}
							HX_STACK_LINE(228)
							::luxe::debug::DebugView tmp68 = _g2->__get(_g1).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(228)
							::luxe::debug::DebugView view = tmp68;		HX_STACK_VAR(view,"view");
							HX_STACK_LINE(228)
							++(_g1);
							HX_STACK_LINE(229)
							Dynamic tmp69 = _event;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(229)
							view->onwindowsized(tmp69);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(216)
			tmp47->emitter->on((int)31, Dynamic(new _Function_2_1(_g)),tmp48);
		}
		HX_STACK_LINE(234)
		::phoenix::Batcher tmp47 = this->batcher;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(234)
		tmp47->enabled = false;
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(236)
			Array< ::Dynamic > _g11 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(236)
			while((true)){
				HX_STACK_LINE(236)
				bool tmp48 = (_g1 < _g11->length);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(236)
				bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(236)
				if ((tmp49)){
					HX_STACK_LINE(236)
					break;
				}
				HX_STACK_LINE(236)
				::luxe::debug::DebugView tmp50 = _g11->__get(_g1).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(236)
				::luxe::debug::DebugView view = tmp50;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(236)
				++(_g1);
				HX_STACK_LINE(237)
				view->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,create_debug_console,(void))

Void Debug_obj::mouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mouseup",0x521047cd,"luxe.Debug.mouseup","luxe/Debug.hx",244,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(245)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		if ((tmp)){
			HX_STACK_LINE(246)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(246)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(246)
			while((true)){
				HX_STACK_LINE(246)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(246)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(246)
				if ((tmp2)){
					HX_STACK_LINE(246)
					break;
				}
				HX_STACK_LINE(246)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(246)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(246)
				++(_g);
				HX_STACK_LINE(247)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(247)
				view->onmouseup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mouseup,(void))

Void Debug_obj::mousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mousedown",0x214e9a54,"luxe.Debug.mousedown","luxe/Debug.hx",252,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(253)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		if ((tmp)){
			HX_STACK_LINE(254)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(254)
			while((true)){
				HX_STACK_LINE(254)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(254)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(254)
				if ((tmp2)){
					HX_STACK_LINE(254)
					break;
				}
				HX_STACK_LINE(254)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(254)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(254)
				++(_g);
				HX_STACK_LINE(255)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(255)
				view->onmousedown(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousedown,(void))

Void Debug_obj::mousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mousewheel",0xef674669,"luxe.Debug.mousewheel","luxe/Debug.hx",260,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(261)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		if ((tmp)){
			HX_STACK_LINE(262)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(262)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(262)
			while((true)){
				HX_STACK_LINE(262)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(262)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(262)
				if ((tmp2)){
					HX_STACK_LINE(262)
					break;
				}
				HX_STACK_LINE(262)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(262)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(262)
				++(_g);
				HX_STACK_LINE(263)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(263)
				view->onmousewheel(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousewheel,(void))

Void Debug_obj::mousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","mousemove",0x27418503,"luxe.Debug.mousemove","luxe/Debug.hx",268,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(269)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		if ((tmp)){
			HX_STACK_LINE(270)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(270)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(270)
			while((true)){
				HX_STACK_LINE(270)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(270)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(270)
				if ((tmp2)){
					HX_STACK_LINE(270)
					break;
				}
				HX_STACK_LINE(270)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(270)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(270)
				++(_g);
				HX_STACK_LINE(271)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(271)
				view->onmousemove(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,mousemove,(void))

Void Debug_obj::keyup( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","keyup",0xb1620087,"luxe.Debug.keyup","luxe/Debug.hx",276,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(278)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		if ((tmp)){
			HX_STACK_LINE(279)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(279)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(279)
			while((true)){
				HX_STACK_LINE(279)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(279)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(279)
				if ((tmp2)){
					HX_STACK_LINE(279)
					break;
				}
				HX_STACK_LINE(279)
				::luxe::debug::DebugView tmp3 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				::luxe::debug::DebugView view = tmp3;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(279)
				++(_g);
				HX_STACK_LINE(280)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(280)
				view->onkeyup(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keyup,(void))

Void Debug_obj::keydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.Debug","keydown",0x430b758e,"luxe.Debug.keydown","luxe/Debug.hx",296,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(298)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		if ((tmp)){
			HX_STACK_LINE(300)
			int tmp1 = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(300)
			int tmp2 = ::snow::_system::input::Keycodes_obj::key_1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			if ((tmp3)){
				HX_STACK_LINE(300)
				::luxe::Core tmp5 = this->core;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(300)
				::luxe::Core tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(300)
				tmp4 = tmp6->console_visible;
			}
			else{
				HX_STACK_LINE(300)
				tmp4 = false;
			}
			HX_STACK_LINE(300)
			if ((tmp4)){
				HX_STACK_LINE(301)
				this->switch_view();
			}
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(304)
				Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(304)
				while((true)){
					HX_STACK_LINE(304)
					bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(304)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(304)
					if ((tmp6)){
						HX_STACK_LINE(304)
						break;
					}
					HX_STACK_LINE(304)
					::luxe::debug::DebugView tmp7 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(304)
					::luxe::debug::DebugView view = tmp7;		HX_STACK_VAR(view,"view");
					HX_STACK_LINE(304)
					++(_g);
					HX_STACK_LINE(305)
					Dynamic tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(305)
					view->onkeydown(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,keydown,(void))

Void Debug_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.Debug","refresh",0x7ebe11e8,"luxe.Debug.refresh","luxe/Debug.hx",322,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(324)
		::luxe::debug::DebugView tmp = this->current_view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		if ((tmp1)){
			HX_STACK_LINE(325)
			::luxe::debug::DebugView tmp2 = this->current_view;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(325)
			tmp2->refresh();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,refresh,(void))

Void Debug_obj::switch_view( ){
{
		HX_STACK_FRAME("luxe.Debug","switch_view",0x7281325d,"luxe.Debug.switch_view","luxe/Debug.hx",331,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(334)
		int tmp = this->current_view_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		this->last_view_index = tmp;
		HX_STACK_LINE(336)
		(this->current_view_index)++;
		HX_STACK_LINE(339)
		int tmp1 = this->current_view_index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(339)
		int tmp2 = ::luxe::Debug_obj::views->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(339)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(339)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(339)
		if ((tmp4)){
			HX_STACK_LINE(340)
			this->current_view_index = (int)0;
		}
		HX_STACK_LINE(344)
		int tmp5 = this->last_view_index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(344)
		::luxe::debug::DebugView tmp6 = ::luxe::Debug_obj::views->__get(tmp5).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(344)
		tmp6->hide();
		HX_STACK_LINE(346)
		int tmp7 = this->current_view_index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(346)
		::luxe::debug::DebugView tmp8 = ::luxe::Debug_obj::views->__get(tmp7).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(346)
		this->current_view = tmp8;
		HX_STACK_LINE(349)
		::luxe::debug::DebugView tmp9 = this->current_view;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(349)
		tmp9->show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,switch_view,(void))

Void Debug_obj::show_console( hx::Null< bool >  __o__show){
bool _show = __o__show.Default(true);
	HX_STACK_FRAME("luxe.Debug","show_console",0x488557a8,"luxe.Debug.show_console","luxe/Debug.hx",356,0xe4198724)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_show,"_show")
{
		HX_STACK_LINE(362)
		bool tmp = _show;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		if ((tmp)){
			HX_STACK_LINE(364)
			::luxe::Core tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(364)
			::luxe::Cursor tmp2 = tmp1->screen->cursor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(364)
			bool tmp3 = tmp2->get_visible();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(364)
			this->last_cursor_shown = tmp3;
			HX_STACK_LINE(365)
			::luxe::Core tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(365)
			::luxe::Cursor tmp5 = tmp4->screen->cursor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(365)
			bool tmp6 = tmp5->get_grab();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(365)
			this->last_cursor_grab = tmp6;
			HX_STACK_LINE(367)
			::luxe::Core tmp7 = ::Luxe_obj::core;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(367)
			::luxe::Cursor tmp8 = tmp7->screen->cursor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(367)
			tmp8->set_visible(true);
			HX_STACK_LINE(368)
			::luxe::Core tmp9 = ::Luxe_obj::core;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(368)
			::luxe::Cursor tmp10 = tmp9->screen->cursor;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(368)
			tmp10->set_grab(false);
		}
		else{
			HX_STACK_LINE(372)
			bool tmp1 = this->last_cursor_shown;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(372)
			bool tmp2 = (tmp1 != true);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(372)
			if ((tmp2)){
				HX_STACK_LINE(373)
				::luxe::Core tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(373)
				::luxe::Cursor tmp4 = tmp3->screen->cursor;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(373)
				bool tmp5 = this->last_cursor_shown;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(373)
				tmp4->set_visible(tmp5);
			}
			HX_STACK_LINE(376)
			bool tmp3 = this->last_cursor_grab;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			bool tmp4 = (tmp3 != false);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			if ((tmp4)){
				HX_STACK_LINE(377)
				::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(377)
				::luxe::Cursor tmp6 = tmp5->screen->cursor;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(377)
				bool tmp7 = this->last_cursor_grab;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(377)
				tmp6->set_grab(tmp7);
			}
		}
		HX_STACK_LINE(381)
		this->visible = _show;
		HX_STACK_LINE(382)
		::phoenix::Batcher tmp1 = this->batcher;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		tmp1->enabled = _show;
		HX_STACK_LINE(384)
		bool tmp2 = _show;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		if ((tmp2)){
			HX_STACK_LINE(385)
			::luxe::debug::DebugView tmp3 = this->current_view;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			tmp3->show();
			HX_STACK_LINE(386)
			::phoenix::geometry::QuadGeometry tmp4 = this->overlay;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(386)
			tmp4->set_visible(true);
			HX_STACK_LINE(387)
			::luxe::debug::Inspector tmp5 = this->inspector;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			tmp5->show();
		}
		else{
			HX_STACK_LINE(389)
			::luxe::debug::DebugView tmp3 = this->current_view;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			tmp3->hide();
			HX_STACK_LINE(390)
			::luxe::debug::Inspector tmp4 = this->inspector;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(390)
			tmp4->hide();
			HX_STACK_LINE(391)
			::phoenix::geometry::QuadGeometry tmp5 = this->overlay;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(391)
			tmp5->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,show_console,(void))

Void Debug_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Debug","destroy",0xb6236507,"luxe.Debug.destroy","luxe/Debug.hx",396,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		Dynamic tmp1 = this->keyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		tmp->emitter->off((int)13,tmp1,tmp2);
		HX_STACK_LINE(399)
		::luxe::Core tmp3 = this->core;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		Dynamic tmp4 = this->keydown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		tmp3->emitter->off((int)12,tmp4,tmp5);
		HX_STACK_LINE(400)
		::luxe::Core tmp6 = this->core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(400)
		Dynamic tmp7 = this->mouseup_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(400)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(400)
		tmp6->emitter->off((int)18,tmp7,tmp8);
		HX_STACK_LINE(401)
		::luxe::Core tmp9 = this->core;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(401)
		Dynamic tmp10 = this->mousedown_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(401)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(401)
		tmp9->emitter->off((int)17,tmp10,tmp11);
		HX_STACK_LINE(402)
		::luxe::Core tmp12 = this->core;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(402)
		Dynamic tmp13 = this->mousemove_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(402)
		Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(402)
		tmp12->emitter->off((int)19,tmp13,tmp14);
		HX_STACK_LINE(403)
		::luxe::Core tmp15 = this->core;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(403)
		Dynamic tmp16 = this->mousewheel_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(403)
		Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(403)
		tmp15->emitter->off((int)20,tmp16,tmp17);
		HX_STACK_LINE(406)
		::luxe::Debug_obj::shut_down = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,destroy,(void))

Void Debug_obj::process( ){
{
		HX_STACK_FRAME("luxe.Debug","process",0x82e7da7c,"luxe.Debug.process","luxe/Debug.hx",410,0xe4198724)
		HX_STACK_THIS(this)
		HX_STACK_LINE(412)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(412)
		hx::AddEq(this->dt_average_accum,tmp->delta_time);
		HX_STACK_LINE(413)
		(this->dt_average_count)++;
		HX_STACK_LINE(415)
		int tmp1 = this->dt_average_count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		int tmp2 = this->dt_average_span;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(415)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		if ((tmp4)){
			HX_STACK_LINE(416)
			Float tmp5 = this->dt_average_accum;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			int tmp6 = this->dt_average_span;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			this->dt_average = tmp7;
			HX_STACK_LINE(417)
			Float tmp8 = this->dt_average;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(417)
			this->dt_average_accum = tmp8;
			HX_STACK_LINE(418)
			this->dt_average_count = (int)0;
		}
		HX_STACK_LINE(421)
		bool tmp5 = this->visible;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(421)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(421)
		if ((tmp6)){
			HX_STACK_LINE(422)
			return null();
		}
		HX_STACK_LINE(426)
		::luxe::debug::Inspector tmp7 = this->inspector;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(426)
		::luxe::debug::DebugView tmp8 = this->current_view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(426)
		::String tmp9 = tmp8->get_name();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(426)
		::String tmp10 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(426)
		::String tmp11 = (tmp10 + HX_HCSTRING("] / ","\xf4","\x48","\x91","\x3d"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(426)
		Float tmp12 = this->dt_average;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(426)
		Float tmp13 = (Float((int)1) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(426)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(426)
		::String tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(426)
		::String tmp16 = (tmp15 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(426)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(426)
		{
			HX_STACK_LINE(426)
			Float tmp18 = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(426)
			Float n = tmp18;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(426)
			::luxe::Core tmp19 = ::Luxe_obj::core;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(426)
			Float tmp20 = tmp19->delta_time;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(426)
			Float tmp21 = n;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(426)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(426)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(426)
			Float tmp24 = n;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(426)
			tmp17 = (Float(tmp23) / Float(tmp24));
		}
		HX_STACK_LINE(426)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(426)
		::String tmp19 = (tmp18 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(426)
		Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(426)
		{
			HX_STACK_LINE(426)
			Float tmp21 = ::Math_obj::pow((int)10,(int)5);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(426)
			Float n = tmp21;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(426)
			Float tmp22 = this->dt_average;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(426)
			Float tmp23 = n;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(426)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(426)
			int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(426)
			Float tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(426)
			tmp20 = (Float(tmp25) / Float(tmp26));
		}
		HX_STACK_LINE(426)
		::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(426)
		tmp7->title->set_text(tmp21);
		HX_STACK_LINE(428)
		{
			HX_STACK_LINE(428)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(428)
			Array< ::Dynamic > _g1 = ::luxe::Debug_obj::views;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(428)
			while((true)){
				HX_STACK_LINE(428)
				bool tmp22 = (_g < _g1->length);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(428)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(428)
				if ((tmp23)){
					HX_STACK_LINE(428)
					break;
				}
				HX_STACK_LINE(428)
				::luxe::debug::DebugView tmp24 = _g1->__get(_g).StaticCast< ::luxe::debug::DebugView >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(428)
				::luxe::debug::DebugView view = tmp24;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(428)
				++(_g);
				HX_STACK_LINE(429)
				view->process();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,process,(void))

bool Debug_obj::shut_down;

Array< ::Dynamic > Debug_obj::views;

::haxe::ds::StringMap Debug_obj::trace_callbacks;

Void Debug_obj::default_cpp_trace( Dynamic v,Dynamic infos){
{
		HX_STACK_FRAME("luxe.Debug","default_cpp_trace",0xe2ca2d38,"luxe.Debug.default_cpp_trace","luxe/Debug.hx",131,0xe4198724)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(infos,"infos")
		HX_STACK_LINE(132)
		bool tmp = (infos != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		if ((tmp)){
			HX_STACK_LINE(132)
			tmp1 = (infos->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic ) != null());
		}
		else{
			HX_STACK_LINE(132)
			tmp1 = false;
		}
		HX_STACK_LINE(132)
		if ((tmp1)){
			HX_STACK_LINE(133)
			::String extra = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extra,"extra");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(134)
				cpp::ArrayBase _g1 = infos->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(134)
				while((true)){
					HX_STACK_LINE(134)
					bool tmp2 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(134)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(134)
					if ((tmp3)){
						HX_STACK_LINE(134)
						break;
					}
					HX_STACK_LINE(134)
					Dynamic tmp4 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(134)
					Dynamic v1 = tmp4;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(134)
					++(_g);
					HX_STACK_LINE(134)
					Dynamic tmp5 = v1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(134)
					::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(134)
					::String tmp7 = (HX_HCSTRING(",","\x2c","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(134)
					hx::AddEq(extra,tmp7);
				}
			}
			HX_STACK_LINE(135)
			__trace((::Std_obj::string(v) + extra),infos);
		}
		else{
			HX_STACK_LINE(137)
			__trace(v,infos);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,default_cpp_trace,(void))

Void Debug_obj::internal_trace( Dynamic v,Dynamic inf){
{
		HX_STACK_FRAME("luxe.Debug","internal_trace",0x7eeb5c56,"luxe.Debug.internal_trace","luxe/Debug.hx",151,0xe4198724)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(inf,"inf")
		HX_STACK_LINE(153)
		int tmp = inf->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		::String tmp2 = ::StringTools_obj::rpad(tmp1,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),(int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		::String _line = tmp2;		HX_STACK_VAR(_line,"_line");
		HX_STACK_LINE(156)
		Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		Dynamic tmp4 = inf;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		::luxe::Debug_obj::default_cpp_trace(tmp3,tmp4);
		HX_STACK_LINE(162)
		bool tmp5 = ::luxe::Debug_obj::shut_down;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		if ((tmp5)){
			HX_STACK_LINE(163)
			return null();
		}
		HX_STACK_LINE(167)
		::haxe::ds::StringMap tmp6 = ::luxe::Debug_obj::trace_callbacks;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		Dynamic tmp7 = tmp6->iterator();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp7);  __it->hasNext(); ){
			Dynamic _callback = __it->next();
			{
				HX_STACK_LINE(168)
				Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(168)
				Dynamic tmp9 = inf;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(168)
				_callback(tmp8,tmp9).Cast< Void >();
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,internal_trace,(void))


Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(inspector,"inspector");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(debug_font,"debug_font");
	HX_MARK_MEMBER_NAME(dt_average,"dt_average");
	HX_MARK_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_MARK_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_MARK_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_MARK_MEMBER_NAME(current_view_index,"current_view_index");
	HX_MARK_MEMBER_NAME(last_view_index,"last_view_index");
	HX_MARK_MEMBER_NAME(current_view,"current_view");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(profile_path,"profile_path");
	HX_MARK_MEMBER_NAME(profiling,"profiling");
	HX_MARK_MEMBER_NAME(last_cursor_shown,"last_cursor_shown");
	HX_MARK_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(inspector,"inspector");
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(debug_font,"debug_font");
	HX_VISIT_MEMBER_NAME(dt_average,"dt_average");
	HX_VISIT_MEMBER_NAME(dt_average_accum,"dt_average_accum");
	HX_VISIT_MEMBER_NAME(dt_average_span,"dt_average_span");
	HX_VISIT_MEMBER_NAME(dt_average_count,"dt_average_count");
	HX_VISIT_MEMBER_NAME(current_view_index,"current_view_index");
	HX_VISIT_MEMBER_NAME(last_view_index,"last_view_index");
	HX_VISIT_MEMBER_NAME(current_view,"current_view");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(profile_path,"profile_path");
	HX_VISIT_MEMBER_NAME(profiling,"profiling");
	HX_VISIT_MEMBER_NAME(last_cursor_shown,"last_cursor_shown");
	HX_VISIT_MEMBER_NAME(last_cursor_grab,"last_cursor_grab");
}

Dynamic Debug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"overlay") ) { return overlay; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_view") ) { return get_view_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inspector") ) { return inspector; }
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling; }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"mousemove") ) { return mousemove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { return debug_font; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { return dt_average; }
		if (HX_FIELD_EQ(inName,"mousewheel") ) { return mousewheel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switch_view") ) { return switch_view_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { return current_view; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { return profile_path; }
		if (HX_FIELD_EQ(inName,"show_console") ) { return show_console_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { return dt_average_span; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { return last_view_index; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { return dt_average_accum; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { return dt_average_count; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { return last_cursor_grab; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"last_cursor_shown") ) { return last_cursor_shown; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { return current_view_index; }
		if (HX_FIELD_EQ(inName,"add_trace_listener") ) { return add_trace_listener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"create_debug_console") ) { return create_debug_console_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"remove_trace_listener") ) { return remove_trace_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { outValue = views; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { outValue = shut_down; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_trace") ) { outValue = internal_trace_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { outValue = trace_callbacks; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"default_cpp_trace") ) { outValue = default_cpp_trace_dyn(); return true;  }
	}
	return false;
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inspector") ) { inspector=inValue.Cast< ::luxe::debug::Inspector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profiling") ) { profiling=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debug_font") ) { debug_font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average") ) { dt_average=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"current_view") ) { current_view=inValue.Cast< ::luxe::debug::DebugView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profile_path") ) { profile_path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dt_average_span") ) { dt_average_span=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_view_index") ) { last_view_index=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dt_average_accum") ) { dt_average_accum=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dt_average_count") ) { dt_average_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last_cursor_grab") ) { last_cursor_grab=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"last_cursor_shown") ) { last_cursor_shown=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"current_view_index") ) { current_view_index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Debug_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"views") ) { views=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shut_down") ) { shut_down=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trace_callbacks") ) { trace_callbacks=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("inspector","\xf7","\xf9","\x0e","\xf8"));
	outFields->push(HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"));
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62"));
	outFields->push(HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f"));
	outFields->push(HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34"));
	outFields->push(HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30"));
	outFields->push(HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63"));
	outFields->push(HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c"));
	outFields->push(HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57"));
	outFields->push(HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	outFields->push(HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3"));
	outFields->push(HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"));
	outFields->push(HX_HCSTRING("last_cursor_shown","\x31","\x6e","\xe4","\x3d"));
	outFields->push(HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Debug_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsBool,(int)offsetof(Debug_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::luxe::debug::Inspector*/ ,(int)offsetof(Debug_obj,inspector),HX_HCSTRING("inspector","\xf7","\xf9","\x0e","\xf8")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Debug_obj,overlay),HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Debug_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Debug_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Debug_obj,debug_font),HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average),HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f")},
	{hx::fsFloat,(int)offsetof(Debug_obj,dt_average_accum),HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_span),HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30")},
	{hx::fsInt,(int)offsetof(Debug_obj,dt_average_count),HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63")},
	{hx::fsInt,(int)offsetof(Debug_obj,current_view_index),HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c")},
	{hx::fsInt,(int)offsetof(Debug_obj,last_view_index),HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57")},
	{hx::fsObject /*::luxe::debug::DebugView*/ ,(int)offsetof(Debug_obj,current_view),HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Debug_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{hx::fsBool,(int)offsetof(Debug_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{hx::fsString,(int)offsetof(Debug_obj,profile_path),HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3")},
	{hx::fsBool,(int)offsetof(Debug_obj,profiling),HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f")},
	{hx::fsBool,(int)offsetof(Debug_obj,last_cursor_shown),HX_HCSTRING("last_cursor_shown","\x31","\x6e","\xe4","\x3d")},
	{hx::fsBool,(int)offsetof(Debug_obj,last_cursor_grab),HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Debug_obj::shut_down,HX_HCSTRING("shut_down","\x8d","\xbd","\x24","\x57")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Debug_obj::views,HX_HCSTRING("views","\x6e","\xe6","\xfc","\x36")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Debug_obj::trace_callbacks,HX_HCSTRING("trace_callbacks","\x94","\x35","\x4d","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("inspector","\xf7","\xf9","\x0e","\xf8"),
	HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("debug_font","\x7b","\xda","\x87","\x62"),
	HX_HCSTRING("dt_average","\x6e","\x32","\x0e","\x4f"),
	HX_HCSTRING("dt_average_accum","\x08","\xea","\x79","\x34"),
	HX_HCSTRING("dt_average_span","\x7b","\x35","\xe8","\x30"),
	HX_HCSTRING("dt_average_count","\xfe","\x44","\x43","\x63"),
	HX_HCSTRING("current_view_index","\xfe","\x87","\xa7","\x2c"),
	HX_HCSTRING("last_view_index","\x01","\x45","\x48","\x57"),
	HX_HCSTRING("current_view","\x6b","\xc3","\x3e","\xb5"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("profile_path","\xbb","\xe3","\x72","\xf3"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("get_view","\xee","\xed","\x09","\xce"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("remove_trace_listener","\x89","\x09","\xa9","\x42"),
	HX_HCSTRING("add_trace_listener","\x4c","\xd4","\x42","\x9a"),
	HX_HCSTRING("create_debug_console","\x68","\xba","\x8d","\x98"),
	HX_HCSTRING("mouseup","\xc0","\x0f","\x73","\xc0"),
	HX_HCSTRING("mousedown","\x07","\x85","\xe9","\x03"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("mousemove","\xb6","\x6f","\xdc","\x09"),
	HX_HCSTRING("keyup","\xba","\xd5","\xfe","\xde"),
	HX_HCSTRING("keydown","\x81","\x3d","\x6e","\xb1"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("switch_view","\xd0","\x6f","\xb2","\x61"),
	HX_HCSTRING("last_cursor_shown","\x31","\x6e","\xe4","\x3d"),
	HX_HCSTRING("last_cursor_grab","\x6c","\xb6","\xf8","\xdd"),
	HX_HCSTRING("show_console","\xd5","\xde","\x69","\xa4"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_MARK_MEMBER_NAME(Debug_obj::views,"views");
	HX_MARK_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debug_obj::shut_down,"shut_down");
	HX_VISIT_MEMBER_NAME(Debug_obj::views,"views");
	HX_VISIT_MEMBER_NAME(Debug_obj::trace_callbacks,"trace_callbacks");
};

#endif

hx::Class Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("shut_down","\x8d","\xbd","\x24","\x57"),
	HX_HCSTRING("views","\x6e","\xe6","\xfc","\x36"),
	HX_HCSTRING("trace_callbacks","\x94","\x35","\x4d","\xe8"),
	HX_HCSTRING("default_cpp_trace","\xeb","\x82","\x2b","\x18"),
	HX_HCSTRING("internal_trace","\xc3","\xc8","\x61","\x02"),
	::String(null()) };

void Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Debug","\x7b","\x43","\x14","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &Debug_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Debug_obj >;
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

void Debug_obj::__boot()
{
	shut_down= false;
}

} // end namespace luxe
