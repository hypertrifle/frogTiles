#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
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
#ifndef INCLUDED_luxe_ResourceStats
#include <luxe/ResourceStats.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
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
#ifndef INCLUDED_luxe_debug_StatsDebugView
#include <luxe/debug/StatsDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_tween_Actuate
#include <luxe/tween/Actuate.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_Linear
#include <luxe/tween/easing/Linear.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
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
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_system_audio_Audio
#include <snow/system/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_system_audio_Sound
#include <snow/system/audio/Sound.h>
#endif
#ifndef INCLUDED_snow_system_input_Keycodes
#include <snow/system/input/Keycodes.h>
#endif
namespace luxe{
namespace debug{

Void StatsDebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.StatsDebugView","new",0x9c8136be,"luxe.debug.StatsDebugView.new","luxe/debug/StatsDebugView.hx",13,0x06813970)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(344)
	this->hide_debug = true;
	HX_STACK_LINE(74)
	this->margin = (int)32;
	HX_STACK_LINE(20)
	this->font_size = (int)15;
	HX_STACK_LINE(19)
	this->debug_geometry_count = (int)13;
	HX_STACK_LINE(18)
	this->debug_draw_call_count = (int)3;
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	this->set_name(HX_HCSTRING("Statistics","\x43","\xdb","\xe9","\xf0"));
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",32,0x06813970)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e") , (int)0,false);
				__result->Add(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12") , (int)0,false);
				__result->Add(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66") , (int)0,false);
				__result->Add(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c") , (int)0,false);
				__result->Add(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70") , (int)0,false);
				__result->Add(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a") , (int)0,false);
				__result->Add(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(32)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	this->_last_render_stats = tmp;
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",42,0x06813970)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e") , (int)0,false);
				__result->Add(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12") , (int)0,false);
				__result->Add(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66") , (int)0,false);
				__result->Add(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c") , (int)0,false);
				__result->Add(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70") , (int)0,false);
				__result->Add(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a") , (int)0,false);
				__result->Add(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(42)
	Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	this->_render_stats = tmp1;
}
;
	return null();
}

//StatsDebugView_obj::~StatsDebugView_obj() { }

Dynamic StatsDebugView_obj::__CreateEmpty() { return  new StatsDebugView_obj; }
hx::ObjectPtr< StatsDebugView_obj > StatsDebugView_obj::__new()
{  hx::ObjectPtr< StatsDebugView_obj > _result_ = new StatsDebugView_obj();
	_result_->__construct();
	return _result_;}

Dynamic StatsDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StatsDebugView_obj > _result_ = new StatsDebugView_obj();
	_result_->__construct();
	return _result_;}

::String StatsDebugView_obj::get_resource_stats_string( ){
	HX_STACK_FRAME("luxe.debug.StatsDebugView","get_resource_stats_string",0x687d7ab7,"luxe.debug.StatsDebugView.get_resource_stats_string","luxe/debug/StatsDebugView.hx",54,0x06813970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::luxe::ResourceStats tmp1 = tmp->stats;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,get_resource_stats_string,return )

::String StatsDebugView_obj::get_render_stats_string( ){
	HX_STACK_FRAME("luxe.debug.StatsDebugView","get_render_stats_string",0xb1344fef,"luxe.debug.StatsDebugView.get_render_stats_string","luxe/debug/StatsDebugView.hx",60,0x06813970)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	::String tmp = HX_HCSTRING("Renderer Statistics\n\nbatcher count : ","\x90","\x59","\x1f","\xe0");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Dynamic tmp1 = this->_render_stats;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	int tmp2 = tmp1->__Field(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	::String tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	::String tmp4 = (tmp3 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	::String tmp5 = (tmp4 + HX_HCSTRING("total geometry : ","\xf8","\x50","\x55","\xe4"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	Dynamic tmp6 = this->_render_stats;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	int tmp7 = tmp6->__Field(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(63)
	::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(63)
	::String tmp9 = (tmp8 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(63)
	::String tmp10 = (tmp9 + HX_HCSTRING("visible geometry : ","\xa6","\xc2","\xc2","\x90"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(66)
	Dynamic tmp11 = this->_render_stats;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(66)
	int tmp12 = tmp11->__Field(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(63)
	::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(63)
	::String tmp14 = (tmp13 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(63)
	::String tmp15 = (tmp14 + HX_HCSTRING("dynamic batch count : ","\xfe","\xf1","\xd0","\xe5"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(67)
	Dynamic tmp16 = this->_render_stats;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(67)
	int tmp17 = tmp16->__Field(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(63)
	::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(63)
	::String tmp19 = (tmp18 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(63)
	::String tmp20 = (tmp19 + HX_HCSTRING("static batch count : ","\xaf","\xe1","\x4e","\xf4"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(68)
	Dynamic tmp21 = this->_render_stats;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(68)
	int tmp22 = tmp21->__Field(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(63)
	::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(63)
	::String tmp24 = (tmp23 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(63)
	::String tmp25 = (tmp24 + HX_HCSTRING("total draw calls : ","\x11","\x66","\x61","\xe8"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(69)
	Dynamic tmp26 = this->_render_stats;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(69)
	int tmp27 = tmp26->__Field(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(63)
	::String tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(63)
	::String tmp29 = (tmp28 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(63)
	::String tmp30 = (tmp29 + HX_HCSTRING("total vert count : ","\x4a","\x7d","\xf0","\xcd"));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(70)
	Dynamic tmp31 = this->_render_stats;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(70)
	int tmp32 = tmp31->__Field(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(63)
	::String tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(62)
	return tmp33;
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,get_render_stats_string,return )

Void StatsDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","create",0xa3e7cf5e,"luxe.debug.StatsDebugView.create","luxe/debug/StatsDebugView.hx",75,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		::luxe::debug::StatsDebugView _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		::luxe::Debug debug = tmp;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(83)
		::phoenix::Color tmp1 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		::phoenix::Color tmp2 = tmp1->rgb((int)16121979);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		::phoenix::Renderer tmp4 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		::phoenix::BitmapFont tmp5 = tmp4->font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		::String tmp6 = this->get_render_stats_string();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		int tmp7 = this->font_size;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		::phoenix::Batcher tmp9 = debug->batcher;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::BitmapFont &tmp5,::String &tmp6,::phoenix::Batcher &tmp9,::phoenix::Color &tmp2,::phoenix::Vector &tmp3,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",79,0x06813970)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.render.stats","\x02","\xa2","\x35","\x30"),false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp2,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp3,false);
					__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , tmp5,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp6,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , tmp8,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp9,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(79)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp2,tmp3,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("StatsDebugView.hx","\x05","\xa8","\xe8","\x76"),79,HX_HCSTRING("luxe.debug.StatsDebugView","\xcc","\xbf","\xbb","\x85"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(79)
		::luxe::Text tmp12 = ::luxe::Text_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		this->render_stats_text = tmp12;
		HX_STACK_LINE(96)
		::phoenix::Color tmp13 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(96)
		::phoenix::Color tmp14 = tmp13->rgb((int)16121979);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(97)
		::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(98)
		::phoenix::Renderer tmp16 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(98)
		::phoenix::BitmapFont tmp17 = tmp16->font;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(101)
		int tmp18 = this->font_size;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(101)
		Float tmp19 = (tmp18 * ((Float)0.9));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(102)
		::phoenix::Batcher tmp20 = debug->batcher;		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::BitmapFont &tmp17,::phoenix::Batcher &tmp20,Float &tmp19,::phoenix::Vector &tmp15,::phoenix::Color &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",92,0x06813970)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.resource.stats","\x3a","\xf2","\xc9","\xaa"),false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp14,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp15,false);
					__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , tmp17,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
					__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , (int)1,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , tmp19,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp20,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(92)
		Dynamic tmp21 = _Function_1_2::Block(tmp17,tmp20,tmp19,tmp15,tmp14);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(92)
		Dynamic tmp22 = hx::SourceInfo(HX_HCSTRING("StatsDebugView.hx","\x05","\xa8","\xe8","\x76"),92,HX_HCSTRING("luxe.debug.StatsDebugView","\xcc","\xbf","\xbb","\x85"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(92)
		::luxe::Text tmp23 = ::luxe::Text_obj::__new(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(92)
		this->resource_list_text = tmp23;
		HX_STACK_LINE(106)
		::luxe::Text tmp24 = this->render_stats_text;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(106)
		tmp24->geometry->id = HX_HCSTRING("debug.render.stats.geometry","\x9e","\xee","\xa4","\xfb");
		HX_STACK_LINE(107)
		::luxe::Text tmp25 = this->render_stats_text;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(107)
		tmp25->geometry->id = HX_HCSTRING("debug.resource.stats.geometry","\x66","\xd7","\x50","\xe4");
		HX_STACK_LINE(109)
		this->resize();
		HX_STACK_LINE(111)
		::luxe::Resources tmp26 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp26,"tmp26");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::luxe::debug::StatsDebugView,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","luxe/debug/StatsDebugView.hx",111,0x06813970)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(111)
				bool tmp27 = _g->visible;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(111)
				if ((tmp27)){
					HX_STACK_LINE(111)
					_g->refresh();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(111)
		tmp26->on((int)1, Dynamic(new _Function_1_3(_g)));
	}
return null();
}


Void StatsDebugView_obj::resize( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","resize",0x3053c256,"luxe.debug.StatsDebugView.resize","luxe/debug/StatsDebugView.hx",115,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::luxe::Text tmp = this->resource_list_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		if ((tmp2)){
			HX_STACK_LINE(118)
			::luxe::Text tmp4 = this->render_stats_text;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			::luxe::Text tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(117)
			tmp3 = true;
		}
		HX_STACK_LINE(117)
		if ((tmp3)){
			HX_STACK_LINE(119)
			return null();
		}
		HX_STACK_LINE(122)
		::luxe::Debug tmp4 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		::luxe::Debug debug = tmp4;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(125)
		::phoenix::Vector tmp5 = debug->inspector->pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		int tmp7 = this->margin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(125)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(125)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		::phoenix::Vector tmp10 = debug->inspector->pos;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(126)
		int tmp12 = this->margin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(126)
		Float tmp13 = (tmp12 * ((Float)1.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(126)
		Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(127)
		::phoenix::Vector tmp15 = debug->inspector->size;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(127)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(127)
		int tmp17 = this->margin;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(127)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(128)
		::phoenix::Vector tmp19 = debug->inspector->size;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(128)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(128)
		int tmp21 = this->margin;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(128)
		Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(128)
		int tmp23 = this->margin;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(128)
		Float tmp24 = (tmp23 * ((Float)1.5));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(128)
		Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(124)
		::phoenix::Rectangle tmp26 = ::phoenix::Rectangle_obj::__new(tmp9,tmp14,tmp18,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(124)
		::phoenix::Rectangle viewrect = tmp26;		HX_STACK_VAR(viewrect,"viewrect");
		HX_STACK_LINE(131)
		Float tmp27 = debug->padding->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(131)
		int tmp28 = this->margin;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(131)
		Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(131)
		Float left = tmp29;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(132)
		Float tmp30 = debug->padding->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(132)
		::phoenix::Vector tmp31 = debug->inspector->size;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(132)
		Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(132)
		Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(132)
		int tmp34 = this->margin;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(132)
		Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(132)
		Float right = tmp35;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(133)
		Float tmp36 = debug->padding->y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(133)
		int tmp37 = this->margin;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(133)
		Float tmp38 = (tmp37 * ((Float)1.5));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(133)
		Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(133)
		Float top = tmp39;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(134)
		::luxe::Text tmp40 = this->render_stats_text;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(134)
		Float tmp41 = tmp40->text_bounds->w;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(134)
		Float render_w = tmp41;		HX_STACK_VAR(render_w,"render_w");
		HX_STACK_LINE(135)
		::luxe::Text tmp42 = this->render_stats_text;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(135)
		Float tmp43 = tmp42->text_bounds->h;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(135)
		Float render_h = tmp43;		HX_STACK_VAR(render_h,"render_h");
		HX_STACK_LINE(137)
		::luxe::Text tmp44 = this->resource_list_text;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(137)
		bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(137)
		if ((tmp45)){
			HX_STACK_LINE(138)
			::luxe::Text tmp46 = this->resource_list_text;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(138)
			::phoenix::Vector tmp47 = ::phoenix::Vector_obj::__new(right,top,null(),null());		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(138)
			tmp46->set_pos(tmp47);
			HX_STACK_LINE(139)
			::luxe::Text tmp48 = this->resource_list_text;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(139)
			::phoenix::Rectangle tmp49 = viewrect;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(139)
			tmp48->set_clip_rect(tmp49);
		}
		HX_STACK_LINE(142)
		::luxe::Text tmp46 = this->render_stats_text;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(142)
		bool tmp47 = (tmp46 != null());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(142)
		if ((tmp47)){
			HX_STACK_LINE(143)
			::luxe::Text tmp48 = this->render_stats_text;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(143)
			::phoenix::Vector tmp49 = ::phoenix::Vector_obj::__new(left,top,null(),null());		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(143)
			tmp48->set_pos(tmp49);
			HX_STACK_LINE(144)
			::luxe::Text tmp50 = this->render_stats_text;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(144)
			::phoenix::Rectangle tmp51 = viewrect;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(144)
			tmp50->set_clip_rect(tmp51);
		}
		HX_STACK_LINE(147)
		this->reset_tween();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,resize,(void))

Void StatsDebugView_obj::onwindowsized( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","onwindowsized",0xc009fbb2,"luxe.debug.StatsDebugView.onwindowsized","luxe/debug/StatsDebugView.hx",151,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(151)
		this->resize();
	}
return null();
}


Void StatsDebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","refresh",0xa2a3c739,"luxe.debug.StatsDebugView.refresh","luxe/debug/StatsDebugView.hx",153,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		::String bytes_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(bytes_lists,"bytes_lists");
		HX_STACK_LINE(156)
		::String text_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(text_lists,"text_lists");
		HX_STACK_LINE(157)
		::String json_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(json_lists,"json_lists");
		HX_STACK_LINE(158)
		::String texture_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(texture_lists,"texture_lists");
		HX_STACK_LINE(159)
		::String rtt_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(rtt_lists,"rtt_lists");
		HX_STACK_LINE(160)
		::String font_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(font_lists,"font_lists");
		HX_STACK_LINE(161)
		::String shader_lists = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(shader_lists,"shader_lists");
		HX_STACK_LINE(167)
		::luxe::Resources tmp = ::Luxe_obj::resources;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		Dynamic tmp1 = tmp->cache->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		for(::cpp::FastIterator_obj< ::luxe::resource::Resource > *__it = ::cpp::CreateFastIterator< ::luxe::resource::Resource >(tmp1);  __it->hasNext(); ){
			::luxe::resource::Resource res = __it->next();
			{
				HX_STACK_LINE(168)
				int _g = res->resource_type;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(168)
				int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(168)
				switch( (int)(tmp2)){
					case (int)3: {
						HX_STACK_LINE(169)
						::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + res->id);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(169)
						::String tmp4 = (tmp3 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(169)
						int tmp5 = res->ref;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(169)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(169)
						::String tmp7 = (tmp6 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(169)
						hx::AddEq(bytes_lists,tmp7);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(170)
						::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + res->id);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(170)
						::String tmp4 = (tmp3 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(170)
						int tmp5 = res->ref;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(170)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(170)
						::String tmp7 = (tmp6 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(170)
						hx::AddEq(text_lists,tmp7);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(171)
						::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + res->id);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(171)
						::String tmp4 = (tmp3 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(171)
						int tmp5 = res->ref;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(171)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(171)
						::String tmp7 = (tmp6 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(171)
						hx::AddEq(json_lists,tmp7);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(172)
						::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::phoenix::Texture tex = ((::phoenix::Texture)(res));		HX_STACK_VAR(tex,"tex");
							HX_STACK_LINE(172)
							::String tmp4 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tex->width_actual);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(172)
							::String tmp5 = (tmp4 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(172)
							int tmp6 = tex->height_actual;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(172)
							::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(172)
							::String tmp8 = (tmp7 + HX_HCSTRING(" ~","\x5e","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(172)
							::luxe::utils::Utils tmp9 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(172)
							int tmp10 = tex->memory_use();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(172)
							::String tmp11 = tmp9->bytes_to_string(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(172)
							::String tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(172)
							::String tmp13 = (tmp12 + HX_HCSTRING(")    ","\xa9","\x00","\xad","\xb0"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(172)
							::String tmp14 = tex->id;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							::String tmp16 = (tmp15 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							int tmp17 = tex->ref;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(172)
							tmp3 = (tmp18 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));
						}
						HX_STACK_LINE(172)
						hx::AddEq(texture_lists,tmp3);
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(173)
						::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::phoenix::Texture tex = ((::phoenix::Texture)(res));		HX_STACK_VAR(tex,"tex");
							HX_STACK_LINE(173)
							::String tmp4 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + tex->width_actual);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(173)
							::String tmp5 = (tmp4 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(173)
							int tmp6 = tex->height_actual;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(173)
							::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(173)
							::String tmp8 = (tmp7 + HX_HCSTRING(" ~","\x5e","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(173)
							::luxe::utils::Utils tmp9 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(173)
							int tmp10 = tex->memory_use();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(173)
							::String tmp11 = tmp9->bytes_to_string(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(173)
							::String tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::String tmp13 = (tmp12 + HX_HCSTRING(")    ","\xa9","\x00","\xad","\xb0"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							::String tmp14 = tex->id;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							::String tmp16 = (tmp15 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(173)
							int tmp17 = tex->ref;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(173)
							::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(173)
							tmp3 = (tmp18 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));
						}
						HX_STACK_LINE(173)
						hx::AddEq(rtt_lists,tmp3);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(174)
						::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + res->id);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(174)
						::String tmp4 = (tmp3 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(174)
						int tmp5 = res->ref;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(174)
						::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(174)
						::String tmp7 = (tmp6 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(174)
						hx::AddEq(font_lists,tmp7);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(175)
						::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::phoenix::Shader res1 = ((::phoenix::Shader)(res));		HX_STACK_VAR(res1,"res1");
							HX_STACK_LINE(175)
							::String tmp4 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + res1->vert_id);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(175)
							::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(175)
							::String tmp6 = res1->frag_id;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(175)
							::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(175)
							::String tmp8 = (tmp7 + HX_HCSTRING(")    ","\xa9","\x00","\xad","\xb0"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(175)
							::String tmp9 = res1->id;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(175)
							::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(175)
							::String tmp11 = (tmp10 + HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(175)
							int tmp12 = res1->ref;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(175)
							::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(175)
							tmp3 = (tmp13 + HX_HCSTRING("\t\n","\xe1","\x07","\x00","\x00"));
						}
						HX_STACK_LINE(175)
						hx::AddEq(shader_lists,tmp3);
					}
					;break;
					default: {
					}
				}
			}
;
		}
		HX_STACK_LINE(182)
		::luxe::Resources tmp2 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		int tmp3 = tmp2->stats->total;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		::String tmp4 = (HX_HCSTRING("Resource list (","\xd8","\x64","\x2f","\x2c") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		::String tmp5 = (tmp4 + HX_HCSTRING(")\n\n","\x29","\x25","\x1f","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		::String lists = tmp5;		HX_STACK_VAR(lists,"lists");
		HX_STACK_LINE(184)
		::luxe::Resources tmp6 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		int tmp7 = tmp6->stats->bytes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		::String tmp8 = (HX_HCSTRING("Bytes (","\x13","\x7d","\x4c","\x27") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		::String tmp9 = (tmp8 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(184)
		hx::AddEq(lists,tmp9);
		HX_STACK_LINE(185)
		bool tmp10 = (bytes_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(185)
		::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(185)
		if ((tmp10)){
			HX_STACK_LINE(185)
			tmp11 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(185)
			tmp11 = bytes_lists;
		}
		HX_STACK_LINE(185)
		hx::AddEq(lists,tmp11);
		HX_STACK_LINE(186)
		::luxe::Resources tmp12 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(186)
		int tmp13 = tmp12->stats->texts;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(186)
		::String tmp14 = (HX_HCSTRING("\nText (","\x9f","\x45","\xf3","\xac") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(186)
		::String tmp15 = (tmp14 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(186)
		hx::AddEq(lists,tmp15);
		HX_STACK_LINE(187)
		bool tmp16 = (text_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(187)
		::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(187)
		if ((tmp16)){
			HX_STACK_LINE(187)
			tmp17 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(187)
			tmp17 = text_lists;
		}
		HX_STACK_LINE(187)
		hx::AddEq(lists,tmp17);
		HX_STACK_LINE(188)
		::luxe::Resources tmp18 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(188)
		int tmp19 = tmp18->stats->jsons;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(188)
		::String tmp20 = (HX_HCSTRING("\nJSON (","\xba","\xa3","\xf4","\x34") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(188)
		::String tmp21 = (tmp20 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(188)
		hx::AddEq(lists,tmp21);
		HX_STACK_LINE(189)
		bool tmp22 = (json_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(189)
		::String tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(189)
		if ((tmp22)){
			HX_STACK_LINE(189)
			tmp23 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(189)
			tmp23 = json_lists;
		}
		HX_STACK_LINE(189)
		hx::AddEq(lists,tmp23);
		HX_STACK_LINE(190)
		::luxe::Resources tmp24 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(190)
		int tmp25 = tmp24->stats->textures;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(190)
		::String tmp26 = (HX_HCSTRING("\nTexture (","\x39","\xa0","\x04","\xd4") + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(190)
		::String tmp27 = (tmp26 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(190)
		hx::AddEq(lists,tmp27);
		HX_STACK_LINE(191)
		bool tmp28 = (texture_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(191)
		::String tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(191)
		if ((tmp28)){
			HX_STACK_LINE(191)
			tmp29 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(191)
			tmp29 = texture_lists;
		}
		HX_STACK_LINE(191)
		hx::AddEq(lists,tmp29);
		HX_STACK_LINE(192)
		::luxe::Resources tmp30 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(192)
		int tmp31 = tmp30->stats->render_textures;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(192)
		::String tmp32 = (HX_HCSTRING("\nRenderTexture (","\x83","\x0e","\x5f","\xc0") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(192)
		::String tmp33 = (tmp32 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(192)
		hx::AddEq(lists,tmp33);
		HX_STACK_LINE(193)
		bool tmp34 = (rtt_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(193)
		::String tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(193)
		if ((tmp34)){
			HX_STACK_LINE(193)
			tmp35 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(193)
			tmp35 = rtt_lists;
		}
		HX_STACK_LINE(193)
		hx::AddEq(lists,tmp35);
		HX_STACK_LINE(194)
		::luxe::Resources tmp36 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(194)
		int tmp37 = tmp36->stats->fonts;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(194)
		::String tmp38 = (HX_HCSTRING("\nFont (","\x41","\xe3","\x59","\xcf") + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(194)
		::String tmp39 = (tmp38 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(194)
		hx::AddEq(lists,tmp39);
		HX_STACK_LINE(195)
		bool tmp40 = (font_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(195)
		::String tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(195)
		if ((tmp40)){
			HX_STACK_LINE(195)
			tmp41 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(195)
			tmp41 = font_lists;
		}
		HX_STACK_LINE(195)
		hx::AddEq(lists,tmp41);
		HX_STACK_LINE(196)
		::luxe::Resources tmp42 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(196)
		int tmp43 = tmp42->stats->shaders;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(196)
		::String tmp44 = (HX_HCSTRING("\nShader (","\x97","\x84","\x4a","\x4d") + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(196)
		::String tmp45 = (tmp44 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(196)
		hx::AddEq(lists,tmp45);
		HX_STACK_LINE(197)
		bool tmp46 = (shader_lists == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(197)
		::String tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(197)
		if ((tmp46)){
			HX_STACK_LINE(197)
			tmp47 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(197)
			tmp47 = shader_lists;
		}
		HX_STACK_LINE(197)
		hx::AddEq(lists,tmp47);
		HX_STACK_LINE(201)
		::String sound_list = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(sound_list,"sound_list");
		HX_STACK_LINE(202)
		Array< ::String > _sounds = Array_obj< ::String >::__new();		HX_STACK_VAR(_sounds,"_sounds");
		HX_STACK_LINE(204)
		::luxe::Core tmp48 = ::Luxe_obj::core;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(204)
		::snow::_system::audio::Audio tmp49 = tmp48->app->audio;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(204)
		Dynamic tmp50 = tmp49->__Field(HX_HCSTRING("sound_list","\x0e","\xdd","\xdb","\xd0"), hx::paccDynamic )->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(204)
		for(::cpp::FastIterator_obj< ::snow::_system::audio::Sound > *__it = ::cpp::CreateFastIterator< ::snow::_system::audio::Sound >(tmp50);  __it->hasNext(); ){
			::snow::_system::audio::Sound sound = __it->next();
			{
				HX_STACK_LINE(204)
				::String tmp51 = sound->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(204)
				_sounds->push(tmp51);
			}
;
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::String a,::String b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/debug/StatsDebugView.hx",205,0x06813970)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(206)
				bool tmp51 = (a == b);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(206)
				if ((tmp51)){
					HX_STACK_LINE(206)
					return (int)0;
				}
				HX_STACK_LINE(207)
				bool tmp52 = (a < b);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(207)
				if ((tmp52)){
					HX_STACK_LINE(207)
					return (int)-1;
				}
				HX_STACK_LINE(208)
				return (int)1;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(205)
		_sounds->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(210)
			while((true)){
				HX_STACK_LINE(210)
				bool tmp51 = (_g < _sounds->length);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(210)
				bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(210)
				if ((tmp52)){
					HX_STACK_LINE(210)
					break;
				}
				HX_STACK_LINE(210)
				::String tmp53 = _sounds->__get(_g);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(210)
				::String sound = tmp53;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(210)
				++(_g);
				HX_STACK_LINE(211)
				::String tmp54 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + sound);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(211)
				::String tmp55 = (tmp54 + HX_HCSTRING(" \xe2""\x80""\xa2""\n","\x26","\x76","\x96","\x02"));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(211)
				hx::AddEq(sound_list,tmp55);
			}
		}
		HX_STACK_LINE(215)
		::luxe::Core tmp51 = ::Luxe_obj::core;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(215)
		::snow::_system::audio::Audio tmp52 = tmp51->app->audio;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(215)
		Dynamic tmp53 = tmp52->__Field(HX_HCSTRING("sound_list","\x0e","\xdd","\xdb","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(215)
		int tmp54 = ::Lambda_obj::count(tmp53,null());		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(215)
		int _count = tmp54;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(216)
		::String tmp55 = (HX_HCSTRING("\n\n---\nAudio list (","\xed","\x04","\x01","\x24") + _count);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(216)
		::String tmp56 = (tmp55 + HX_HCSTRING(")\n\n","\x29","\x25","\x1f","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(216)
		hx::AddEq(lists,tmp56);
		HX_STACK_LINE(217)
		bool tmp57 = (sound_list == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(217)
		::String tmp58;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(217)
		if ((tmp57)){
			HX_STACK_LINE(217)
			tmp58 = HX_HCSTRING("-\t\n","\x4e","\x2d","\x22","\x00");
		}
		else{
			HX_STACK_LINE(217)
			tmp58 = sound_list;
		}
		HX_STACK_LINE(217)
		hx::AddEq(lists,tmp58);
		HX_STACK_LINE(219)
		::luxe::Text tmp59 = this->resource_list_text;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(219)
		::String tmp60 = lists;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(219)
		tmp59->set_text(tmp60);
		HX_STACK_LINE(221)
		::luxe::Text tmp61 = this->resource_list_text;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(221)
		::phoenix::geometry::Geometry tmp62 = tmp61->geometry;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(221)
		bool tmp63 = (tmp62 != null());		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(221)
		if ((tmp63)){
			HX_STACK_LINE(222)
			::luxe::Text tmp64 = this->resource_list_text;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(222)
			tmp64->geometry->set_dirty(true);
		}
		HX_STACK_LINE(225)
		this->reset_tween();
	}
return null();
}


Void StatsDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","process",0xa6cd8fcd,"luxe.debug.StatsDebugView.process","luxe/debug/StatsDebugView.hx",229,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(231)
			return null();
		}
		HX_STACK_LINE(233)
		bool dirty = false;		HX_STACK_VAR(dirty,"dirty");
		HX_STACK_LINE(236)
		this->update_render_stats();
		HX_STACK_LINE(238)
		Dynamic tmp2 = this->_last_render_stats;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		int tmp3 = tmp2->__Field(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		Dynamic tmp4 = this->_render_stats;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		int tmp5 = tmp4->__Field(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(238)
		if ((tmp6)){
			HX_STACK_LINE(239)
			dirty = true;
			HX_STACK_LINE(239)
			Dynamic tmp7 = this->_render_stats;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			Dynamic tmp8 = this->_last_render_stats;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(239)
			tmp8->__FieldRef(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")) = tmp7->__Field(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"), hx::paccDynamic );
		}
		HX_STACK_LINE(240)
		Dynamic tmp7 = this->_last_render_stats;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(240)
		int tmp8 = tmp7->__Field(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(240)
		Dynamic tmp9 = this->_render_stats;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(240)
		int tmp10 = tmp9->__Field(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(240)
		bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(240)
		if ((tmp11)){
			HX_STACK_LINE(241)
			dirty = true;
			HX_STACK_LINE(241)
			Dynamic tmp12 = this->_render_stats;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(241)
			Dynamic tmp13 = this->_last_render_stats;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(241)
			tmp13->__FieldRef(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12")) = tmp12->__Field(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"), hx::paccDynamic );
		}
		HX_STACK_LINE(242)
		Dynamic tmp12 = this->_last_render_stats;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		int tmp13 = tmp12->__Field(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		Dynamic tmp14 = this->_render_stats;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(242)
		int tmp15 = tmp14->__Field(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(242)
		bool tmp16 = (tmp13 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(242)
		if ((tmp16)){
			HX_STACK_LINE(243)
			dirty = true;
			HX_STACK_LINE(243)
			Dynamic tmp17 = this->_render_stats;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(243)
			Dynamic tmp18 = this->_last_render_stats;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(243)
			tmp18->__FieldRef(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66")) = tmp17->__Field(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"), hx::paccDynamic );
		}
		HX_STACK_LINE(244)
		Dynamic tmp17 = this->_last_render_stats;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(244)
		int tmp18 = tmp17->__Field(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(244)
		Dynamic tmp19 = this->_render_stats;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(244)
		int tmp20 = tmp19->__Field(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(244)
		bool tmp21 = (tmp18 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(244)
		if ((tmp21)){
			HX_STACK_LINE(245)
			dirty = true;
			HX_STACK_LINE(245)
			Dynamic tmp22 = this->_render_stats;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(245)
			Dynamic tmp23 = this->_last_render_stats;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(245)
			tmp23->__FieldRef(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c")) = tmp22->__Field(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"), hx::paccDynamic );
		}
		HX_STACK_LINE(246)
		Dynamic tmp22 = this->_last_render_stats;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(246)
		int tmp23 = tmp22->__Field(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(246)
		Dynamic tmp24 = this->_render_stats;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(246)
		int tmp25 = tmp24->__Field(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(246)
		bool tmp26 = (tmp23 != tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(246)
		if ((tmp26)){
			HX_STACK_LINE(247)
			dirty = true;
			HX_STACK_LINE(247)
			Dynamic tmp27 = this->_render_stats;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(247)
			Dynamic tmp28 = this->_last_render_stats;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(247)
			tmp28->__FieldRef(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70")) = tmp27->__Field(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"), hx::paccDynamic );
		}
		HX_STACK_LINE(248)
		Dynamic tmp27 = this->_last_render_stats;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(248)
		int tmp28 = tmp27->__Field(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(248)
		Dynamic tmp29 = this->_render_stats;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(248)
		int tmp30 = tmp29->__Field(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(248)
		bool tmp31 = (tmp28 != tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(248)
		if ((tmp31)){
			HX_STACK_LINE(249)
			dirty = true;
			HX_STACK_LINE(249)
			Dynamic tmp32 = this->_render_stats;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(249)
			Dynamic tmp33 = this->_last_render_stats;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(249)
			tmp33->__FieldRef(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a")) = tmp32->__Field(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"), hx::paccDynamic );
		}
		HX_STACK_LINE(250)
		Dynamic tmp32 = this->_last_render_stats;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(250)
		int tmp33 = tmp32->__Field(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(250)
		Dynamic tmp34 = this->_render_stats;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(250)
		int tmp35 = tmp34->__Field(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(250)
		bool tmp36 = (tmp33 != tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(250)
		if ((tmp36)){
			HX_STACK_LINE(251)
			dirty = true;
			HX_STACK_LINE(251)
			Dynamic tmp37 = this->_render_stats;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(251)
			Dynamic tmp38 = this->_last_render_stats;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(251)
			tmp38->__FieldRef(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72")) = tmp37->__Field(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"), hx::paccDynamic );
		}
		HX_STACK_LINE(253)
		bool tmp37 = dirty;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(253)
		if ((tmp37)){
			HX_STACK_LINE(254)
			this->refresh_render_stats();
		}
	}
return null();
}


Void StatsDebugView_obj::onmousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","onmousewheel",0x733a3417,"luxe.debug.StatsDebugView.onmousewheel","luxe/debug/StatsDebugView.hx",261,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(263)
		::luxe::Text tmp = this->resource_list_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		::phoenix::Vector tmp1 = tmp->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		::luxe::tween::Actuate_obj::stop(tmp1,null(),null(),null());
		HX_STACK_LINE(265)
		::luxe::Text tmp2 = this->resource_list_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		Float tmp3 = tmp2->text_bounds->h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		Float h = tmp3;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(266)
		::luxe::Debug tmp4 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		::phoenix::Vector tmp5 = tmp4->inspector->size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		int tmp7 = this->margin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(266)
		Float vh = tmp8;		HX_STACK_VAR(vh,"vh");
		HX_STACK_LINE(267)
		Float tmp9 = (h - vh);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(267)
		Float diff = tmp9;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(269)
		::luxe::Text tmp10 = this->resource_list_text;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(269)
		::phoenix::Vector tmp11 = tmp10->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(269)
		Float new_y = tmp11->y;		HX_STACK_VAR(new_y,"new_y");
		HX_STACK_LINE(270)
		::luxe::Debug tmp12 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(270)
		Float tmp13 = tmp12->padding->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(270)
		int tmp14 = this->margin;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(270)
		Float tmp15 = (tmp14 * ((Float)1.5));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(270)
		Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(270)
		Float max_y = tmp16;		HX_STACK_VAR(max_y,"max_y");
		HX_STACK_LINE(271)
		Float min_y = max_y;		HX_STACK_VAR(min_y,"min_y");
		HX_STACK_LINE(273)
		bool tmp17 = (diff > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(273)
		if ((tmp17)){
			HX_STACK_LINE(274)
			Float tmp18 = max_y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(274)
			Float tmp19 = diff;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(274)
			int tmp20 = this->margin;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(274)
			int tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(274)
			Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(274)
			Float tmp23 = (tmp18 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(274)
			min_y = tmp23;
		}
		HX_STACK_LINE(277)
		int tmp18 = this->margin;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(277)
		Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(277)
		int tmp20 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(277)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(277)
		hx::SubEq(new_y,tmp21);
		HX_STACK_LINE(278)
		bool tmp22 = (new_y < min_y);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(278)
		Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(278)
		if ((tmp22)){
			HX_STACK_LINE(278)
			tmp23 = min_y;
		}
		else{
			HX_STACK_LINE(278)
			bool tmp24 = (new_y > max_y);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(278)
			if ((tmp24)){
				HX_STACK_LINE(278)
				tmp23 = max_y;
			}
			else{
				HX_STACK_LINE(278)
				tmp23 = new_y;
			}
		}
		HX_STACK_LINE(278)
		new_y = tmp23;
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			::luxe::Text tmp24 = this->resource_list_text;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(279)
			::phoenix::Vector tmp25 = tmp24->get_pos();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(279)
			::phoenix::Vector _this = tmp25;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(279)
			_this->y = new_y;
			HX_STACK_LINE(279)
			bool tmp26 = _this->_construct;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(279)
			if ((tmp26)){
				HX_STACK_LINE(279)
				_this->y;
			}
			else{
				HX_STACK_LINE(279)
				bool tmp27 = (_this->listen_y != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(279)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(279)
				if ((tmp27)){
					HX_STACK_LINE(279)
					bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(279)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(279)
					tmp28 = !(tmp30);
				}
				else{
					HX_STACK_LINE(279)
					tmp28 = false;
				}
				HX_STACK_LINE(279)
				if ((tmp28)){
					HX_STACK_LINE(279)
					Float tmp29 = new_y;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(279)
					_this->listen_y(tmp29);
				}
				HX_STACK_LINE(279)
				_this->y;
			}
		}
	}
return null();
}


Void StatsDebugView_obj::onkeydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","onkeydown",0x09e74f20,"luxe.debug.StatsDebugView.onkeydown","luxe/debug/StatsDebugView.hx",284,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(286)
		int tmp = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		int tmp1 = ::snow::_system::input::Keycodes_obj::key_2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		if ((tmp2)){
			HX_STACK_LINE(286)
			tmp3 = this->visible;
		}
		else{
			HX_STACK_LINE(286)
			tmp3 = false;
		}
		HX_STACK_LINE(286)
		if ((tmp3)){
			HX_STACK_LINE(287)
			this->toggle_debug_stats();
		}
	}
return null();
}


Void StatsDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","show",0x57df00df,"luxe.debug.StatsDebugView.show","luxe/debug/StatsDebugView.hx",292,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(294)
		this->super::show();
		HX_STACK_LINE(295)
		this->refresh();
		HX_STACK_LINE(296)
		::luxe::Text tmp = this->render_stats_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(296)
		tmp->set_visible(true);
		HX_STACK_LINE(297)
		::luxe::Text tmp1 = this->resource_list_text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		tmp1->set_visible(true);
	}
return null();
}


Void StatsDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","hide",0x509a60a4,"luxe.debug.StatsDebugView.hide","luxe/debug/StatsDebugView.hx",301,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		this->super::hide();
		HX_STACK_LINE(304)
		::luxe::Text tmp = this->render_stats_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		tmp->set_visible(false);
		HX_STACK_LINE(305)
		::luxe::Text tmp1 = this->resource_list_text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		tmp1->set_visible(false);
		HX_STACK_LINE(306)
		::luxe::Text tmp2 = this->resource_list_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		::phoenix::Vector tmp3 = tmp2->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		::luxe::tween::Actuate_obj::stop(tmp3,null(),null(),null());
	}
return null();
}


Void StatsDebugView_obj::reset_tween( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","reset_tween",0x367ff519,"luxe.debug.StatsDebugView.reset_tween","luxe/debug/StatsDebugView.hx",310,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		::luxe::Text tmp = this->resource_list_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		::phoenix::Vector tmp1 = tmp->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		::luxe::tween::Actuate_obj::stop(tmp1,null(),null(),null());
		HX_STACK_LINE(314)
		::luxe::Text tmp2 = this->resource_list_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		Float tmp3 = tmp2->text_bounds->h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		Float h = tmp3;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(315)
		::luxe::Debug tmp4 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		::phoenix::Vector tmp5 = tmp4->inspector->size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(315)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(315)
		int tmp7 = this->margin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(315)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(315)
		Float vh = tmp8;		HX_STACK_VAR(vh,"vh");
		HX_STACK_LINE(316)
		Float tmp9 = (h - vh);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(316)
		Float diff = tmp9;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(318)
		::luxe::Debug tmp10 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(318)
		Float tmp11 = tmp10->padding->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(318)
		int tmp12 = this->margin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(318)
		Float tmp13 = (tmp12 * ((Float)1.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(318)
		Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(318)
		Float start_y = tmp14;		HX_STACK_VAR(start_y,"start_y");
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			::luxe::Text tmp15 = this->resource_list_text;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(319)
			::phoenix::Vector tmp16 = tmp15->get_pos();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(319)
			::phoenix::Vector _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(319)
			_this->y = start_y;
			HX_STACK_LINE(319)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(319)
			if ((tmp17)){
				HX_STACK_LINE(319)
				_this->y;
			}
			else{
				HX_STACK_LINE(319)
				bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(319)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(319)
				if ((tmp18)){
					HX_STACK_LINE(319)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(319)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(319)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(319)
					tmp19 = false;
				}
				HX_STACK_LINE(319)
				if ((tmp19)){
					HX_STACK_LINE(319)
					Float tmp20 = start_y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(319)
					_this->listen_y(tmp20);
				}
				HX_STACK_LINE(319)
				_this->y;
			}
		}
		HX_STACK_LINE(321)
		bool tmp15 = (diff > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(321)
		if ((tmp15)){
			HX_STACK_LINE(322)
			Float tmp16 = start_y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(322)
			Float tmp17 = diff;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(322)
			int tmp18 = this->margin;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(322)
			int tmp19 = (tmp18 * (int)2);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(322)
			Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(322)
			Float tmp21 = (tmp16 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(322)
			Float end_y = tmp21;		HX_STACK_VAR(end_y,"end_y");
			HX_STACK_LINE(323)
			::luxe::Text tmp22 = this->resource_list_text;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(323)
			::phoenix::Vector tmp23 = tmp22->get_pos();		HX_STACK_VAR(tmp23,"tmp23");
			struct _Function_2_1{
				inline static Dynamic Block( Float &end_y){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/StatsDebugView.hx",323,0x06813970)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , end_y,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(323)
			Dynamic tmp24 = _Function_2_1::Block(end_y);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(323)
			::luxe::tween::actuators::IGenericActuator tmp25 = ::luxe::tween::Actuate_obj::tween(tmp23,(int)8,tmp24,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(323)
			::luxe::tween::actuators::IGenericActuator tmp26 = tmp25->repeat(null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(323)
			::luxe::tween::actuators::IGenericActuator tmp27 = tmp26->delay((int)4);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(323)
			::luxe::tween::actuators::IGenericActuator tmp28 = tmp27->reflect(null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(323)
			::luxe::tween::easing::IEasing tmp29 = ::luxe::tween::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(323)
			tmp28->ease(tmp29);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,reset_tween,(void))

Void StatsDebugView_obj::refresh_render_stats( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","refresh_render_stats",0xe506493c,"luxe.debug.StatsDebugView.refresh_render_stats","luxe/debug/StatsDebugView.hx",328,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		if ((tmp1)){
			HX_STACK_LINE(331)
			return null();
		}
		HX_STACK_LINE(334)
		::luxe::Text tmp2 = this->render_stats_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		::String tmp3 = this->get_render_stats_string();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		tmp2->set_text(tmp3);
		HX_STACK_LINE(336)
		::luxe::Text tmp4 = this->render_stats_text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(336)
		tmp4->set_locked(true);
		HX_STACK_LINE(338)
		::luxe::Text tmp5 = this->render_stats_text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(338)
		::phoenix::geometry::Geometry tmp6 = tmp5->geometry;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(338)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(338)
		if ((tmp7)){
			HX_STACK_LINE(339)
			::luxe::Text tmp8 = this->render_stats_text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(339)
			tmp8->geometry->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,refresh_render_stats,(void))

Void StatsDebugView_obj::toggle_debug_stats( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","toggle_debug_stats",0x050dfeea,"luxe.debug.StatsDebugView.toggle_debug_stats","luxe/debug/StatsDebugView.hx",345,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(347)
		bool tmp = this->hide_debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		this->hide_debug = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,toggle_debug_stats,(void))

Void StatsDebugView_obj::update_render_stats( ){
{
		HX_STACK_FRAME("luxe.debug.StatsDebugView","update_render_stats",0xaa1a0aca,"luxe.debug.StatsDebugView.update_render_stats","luxe/debug/StatsDebugView.hx",351,0x06813970)
		HX_STACK_THIS(this)
		HX_STACK_LINE(353)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			::luxe::Debug tmp1 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(353)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = tmp1->batcher->geometry;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(353)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp2->root;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(353)
			bool tmp3 = (_node == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(353)
			if ((tmp3)){
				HX_STACK_LINE(353)
				tmp = (int)0;
			}
			else{
				HX_STACK_LINE(353)
				tmp = _node->nodecount;
			}
		}
		HX_STACK_LINE(353)
		this->debug_geometry_count = tmp;
		HX_STACK_LINE(354)
		::luxe::Debug tmp1 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		int tmp2 = tmp1->batcher->draw_calls;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		this->debug_draw_call_count = tmp2;
		HX_STACK_LINE(356)
		::phoenix::Renderer tmp3 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		int tmp4 = tmp3->stats->batchers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		Dynamic tmp5 = this->_render_stats;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(356)
		tmp5->__FieldRef(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")) = tmp4;
		HX_STACK_LINE(357)
		::phoenix::Renderer tmp6 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(357)
		int tmp7 = tmp6->stats->geometry_count;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(357)
		Dynamic tmp8 = this->_render_stats;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(357)
		tmp8->__FieldRef(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12")) = tmp7;
		HX_STACK_LINE(358)
		::phoenix::Renderer tmp9 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(358)
		int tmp10 = tmp9->stats->visible_count;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(358)
		Dynamic tmp11 = this->_render_stats;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(358)
		tmp11->__FieldRef(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70")) = tmp10;
		HX_STACK_LINE(359)
		::phoenix::Renderer tmp12 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(359)
		int tmp13 = tmp12->stats->dynamic_batched_count;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(359)
		Dynamic tmp14 = this->_render_stats;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(359)
		tmp14->__FieldRef(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66")) = tmp13;
		HX_STACK_LINE(360)
		::phoenix::Renderer tmp15 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(360)
		int tmp16 = tmp15->stats->static_batched_count;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(360)
		Dynamic tmp17 = this->_render_stats;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(360)
		tmp17->__FieldRef(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c")) = tmp16;
		HX_STACK_LINE(361)
		::phoenix::Renderer tmp18 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(361)
		int tmp19 = tmp18->stats->draw_calls;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(361)
		Dynamic tmp20 = this->_render_stats;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(361)
		tmp20->__FieldRef(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a")) = tmp19;
		HX_STACK_LINE(362)
		::phoenix::Renderer tmp21 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(362)
		int tmp22 = tmp21->stats->vert_count;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(362)
		Dynamic tmp23 = this->_render_stats;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(362)
		tmp23->__FieldRef(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72")) = tmp22;
		HX_STACK_LINE(364)
		bool tmp24 = this->hide_debug;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(364)
		if ((tmp24)){
			HX_STACK_LINE(366)
			Dynamic tmp25 = this->_render_stats;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(366)
			int tmp26 = tmp25->__Field(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(366)
			int tmp27 = this->debug_geometry_count;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(366)
			int tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(366)
			Dynamic tmp29 = this->_render_stats;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(366)
			tmp29->__FieldRef(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12")) = tmp28;
			HX_STACK_LINE(367)
			Dynamic tmp30 = this->_render_stats;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(367)
			int tmp31 = tmp30->__Field(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(367)
			::luxe::Debug tmp32 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(367)
			int tmp33 = tmp32->batcher->visible_count;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(367)
			int tmp34 = (tmp31 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(367)
			Dynamic tmp35 = this->_render_stats;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(367)
			tmp35->__FieldRef(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70")) = tmp34;
			HX_STACK_LINE(368)
			Dynamic tmp36 = this->_render_stats;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(368)
			int tmp37 = tmp36->__Field(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(368)
			::luxe::Debug tmp38 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(368)
			int tmp39 = tmp38->batcher->dynamic_batched_count;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(368)
			int tmp40 = (tmp37 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(368)
			Dynamic tmp41 = this->_render_stats;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(368)
			tmp41->__FieldRef(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66")) = tmp40;
			HX_STACK_LINE(369)
			Dynamic tmp42 = this->_render_stats;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(369)
			int tmp43 = tmp42->__Field(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(369)
			::luxe::Debug tmp44 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(369)
			int tmp45 = tmp44->batcher->static_batched_count;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(369)
			int tmp46 = (tmp43 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(369)
			Dynamic tmp47 = this->_render_stats;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(369)
			tmp47->__FieldRef(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c")) = tmp46;
			HX_STACK_LINE(370)
			int tmp48 = this->debug_draw_call_count;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(370)
			Dynamic tmp49 = this->_render_stats;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(370)
			hx::SubEq(tmp49->__FieldRef(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a")),tmp48);
			HX_STACK_LINE(371)
			::luxe::Debug tmp50 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(371)
			int tmp51 = tmp50->batcher->vert_count;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(371)
			Dynamic tmp52 = this->_render_stats;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(371)
			hx::SubEq(tmp52->__FieldRef(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72")),tmp51);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsDebugView_obj,update_render_stats,(void))


StatsDebugView_obj::StatsDebugView_obj()
{
}

void StatsDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatsDebugView);
	HX_MARK_MEMBER_NAME(_last_render_stats,"_last_render_stats");
	HX_MARK_MEMBER_NAME(_render_stats,"_render_stats");
	HX_MARK_MEMBER_NAME(debug_draw_call_count,"debug_draw_call_count");
	HX_MARK_MEMBER_NAME(debug_geometry_count,"debug_geometry_count");
	HX_MARK_MEMBER_NAME(font_size,"font_size");
	HX_MARK_MEMBER_NAME(render_stats_text,"render_stats_text");
	HX_MARK_MEMBER_NAME(resource_list_text,"resource_list_text");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(hide_debug,"hide_debug");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatsDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_last_render_stats,"_last_render_stats");
	HX_VISIT_MEMBER_NAME(_render_stats,"_render_stats");
	HX_VISIT_MEMBER_NAME(debug_draw_call_count,"debug_draw_call_count");
	HX_VISIT_MEMBER_NAME(debug_geometry_count,"debug_geometry_count");
	HX_VISIT_MEMBER_NAME(font_size,"font_size");
	HX_VISIT_MEMBER_NAME(render_stats_text,"render_stats_text");
	HX_VISIT_MEMBER_NAME(resource_list_text,"resource_list_text");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(hide_debug,"hide_debug");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StatsDebugView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { return font_size; }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hide_debug") ) { return hide_debug; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"reset_tween") ) { return reset_tween_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_render_stats") ) { return _render_stats; }
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"render_stats_text") ) { return render_stats_text; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_last_render_stats") ) { return _last_render_stats; }
		if (HX_FIELD_EQ(inName,"resource_list_text") ) { return resource_list_text; }
		if (HX_FIELD_EQ(inName,"toggle_debug_stats") ) { return toggle_debug_stats_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"update_render_stats") ) { return update_render_stats_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"debug_geometry_count") ) { return debug_geometry_count; }
		if (HX_FIELD_EQ(inName,"refresh_render_stats") ) { return refresh_render_stats_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debug_draw_call_count") ) { return debug_draw_call_count; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_render_stats_string") ) { return get_render_stats_string_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_resource_stats_string") ) { return get_resource_stats_string_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StatsDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { font_size=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hide_debug") ) { hide_debug=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_render_stats") ) { _render_stats=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"render_stats_text") ) { render_stats_text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_last_render_stats") ) { _last_render_stats=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resource_list_text") ) { resource_list_text=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"debug_geometry_count") ) { debug_geometry_count=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debug_draw_call_count") ) { debug_draw_call_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StatsDebugView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StatsDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_last_render_stats","\xc0","\x3c","\xe7","\x4b"));
	outFields->push(HX_HCSTRING("_render_stats","\x15","\xe0","\x22","\x9d"));
	outFields->push(HX_HCSTRING("debug_draw_call_count","\x9d","\x71","\x24","\xaf"));
	outFields->push(HX_HCSTRING("debug_geometry_count","\xee","\x2b","\x78","\x61"));
	outFields->push(HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18"));
	outFields->push(HX_HCSTRING("render_stats_text","\x96","\xf7","\xe4","\x0a"));
	outFields->push(HX_HCSTRING("resource_list_text","\x7d","\x5d","\xe6","\x1a"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("hide_debug","\xd6","\xcb","\xf7","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StatsDebugView_obj,_last_render_stats),HX_HCSTRING("_last_render_stats","\xc0","\x3c","\xe7","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StatsDebugView_obj,_render_stats),HX_HCSTRING("_render_stats","\x15","\xe0","\x22","\x9d")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,debug_draw_call_count),HX_HCSTRING("debug_draw_call_count","\x9d","\x71","\x24","\xaf")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,debug_geometry_count),HX_HCSTRING("debug_geometry_count","\xee","\x2b","\x78","\x61")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,font_size),HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(StatsDebugView_obj,render_stats_text),HX_HCSTRING("render_stats_text","\x96","\xf7","\xe4","\x0a")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(StatsDebugView_obj,resource_list_text),HX_HCSTRING("resource_list_text","\x7d","\x5d","\xe6","\x1a")},
	{hx::fsInt,(int)offsetof(StatsDebugView_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsBool,(int)offsetof(StatsDebugView_obj,hide_debug),HX_HCSTRING("hide_debug","\xd6","\xcb","\xf7","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_last_render_stats","\xc0","\x3c","\xe7","\x4b"),
	HX_HCSTRING("_render_stats","\x15","\xe0","\x22","\x9d"),
	HX_HCSTRING("debug_draw_call_count","\x9d","\x71","\x24","\xaf"),
	HX_HCSTRING("debug_geometry_count","\xee","\x2b","\x78","\x61"),
	HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18"),
	HX_HCSTRING("render_stats_text","\x96","\xf7","\xe4","\x0a"),
	HX_HCSTRING("resource_list_text","\x7d","\x5d","\xe6","\x1a"),
	HX_HCSTRING("get_resource_stats_string","\xd9","\xdd","\xed","\x33"),
	HX_HCSTRING("get_render_stats_string","\x91","\x46","\xc0","\x88"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("reset_tween","\xbb","\x00","\xd8","\x80"),
	HX_HCSTRING("refresh_render_stats","\x5a","\xb9","\xf4","\x71"),
	HX_HCSTRING("hide_debug","\xd6","\xcb","\xf7","\x35"),
	HX_HCSTRING("toggle_debug_stats","\x88","\x8b","\x89","\x92"),
	HX_HCSTRING("update_render_stats","\x6c","\x88","\xb9","\xe8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatsDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatsDebugView_obj::__mClass,"__mClass");
};

#endif

hx::Class StatsDebugView_obj::__mClass;

void StatsDebugView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.StatsDebugView","\xcc","\xbf","\xbb","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &StatsDebugView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StatsDebugView_obj >;
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
} // end namespace debug
