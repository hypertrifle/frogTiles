#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{
namespace debug{

Void TraceDebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.TraceDebugView","new",0x1ecd5698,"luxe.debug.TraceDebugView.new","luxe/debug/TraceDebugView.hx",5,0x3d0b52d6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(87)
	this->_last_logged_length = (int)0;
	HX_STACK_LINE(10)
	this->max_lines = (int)35;
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(16)
	this->set_name(HX_HCSTRING("Log","\x64","\x0c","\x3a","\x00"));
	HX_STACK_LINE(18)
	::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Dynamic tmp1 = this->on_trace_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	tmp->add_trace_listener(HX_HCSTRING("TraceDebugView","\x33","\x43","\xf2","\x60"),tmp1);
	HX_STACK_LINE(20)
	this->logged = Array_obj< ::String >::__new();
	HX_STACK_LINE(22)
	::String tmp2 = ::Luxe_obj::build;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	::String tmp3 = (HX_HCSTRING("luxe version ","\xb2","\x0b","\x3b","\xf4") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	this->add_line(tmp3);
}
;
	return null();
}

//TraceDebugView_obj::~TraceDebugView_obj() { }

Dynamic TraceDebugView_obj::__CreateEmpty() { return  new TraceDebugView_obj; }
hx::ObjectPtr< TraceDebugView_obj > TraceDebugView_obj::__new()
{  hx::ObjectPtr< TraceDebugView_obj > _result_ = new TraceDebugView_obj();
	_result_->__construct();
	return _result_;}

Dynamic TraceDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TraceDebugView_obj > _result_ = new TraceDebugView_obj();
	_result_->__construct();
	return _result_;}

Void TraceDebugView_obj::on_trace( Dynamic v,Dynamic inf){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","on_trace",0xbe5c46ed,"luxe.debug.TraceDebugView.on_trace","luxe/debug/TraceDebugView.hx",26,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(inf,"inf")
		HX_STACK_LINE(27)
		::String tmp = (inf->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic ) + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		int tmp1 = inf->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		::String tmp3 = (tmp2 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		this->add_line(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TraceDebugView_obj,on_trace,(void))

Void TraceDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","create",0xa6d193c4,"luxe.debug.TraceDebugView.create","luxe/debug/TraceDebugView.hx",30,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::luxe::Debug debug = tmp;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(33)
		Float tmp1 = debug->padding->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		Float tmp2 = (tmp1 + (int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		Float tmp3 = debug->padding->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		Float tmp4 = (tmp3 + (int)40);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		int tmp6 = tmp5->screen->get_w();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		Float tmp7 = debug->padding->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		Float tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		Float tmp10 = (tmp9 - (int)20);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(33)
		::luxe::Core tmp11 = ::Luxe_obj::core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(33)
		int tmp12 = tmp11->screen->get_h();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(33)
		Float tmp13 = debug->padding->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(33)
		Float tmp14 = (tmp13 * (int)2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(33)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(33)
		Float tmp16 = (tmp15 - (int)40);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(33)
		::phoenix::Rectangle tmp17 = ::phoenix::Rectangle_obj::__new(tmp2,tmp4,tmp10,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(33)
		::phoenix::Rectangle text_bounds = tmp17;		HX_STACK_VAR(text_bounds,"text_bounds");
		HX_STACK_LINE(39)
		::phoenix::Color tmp18 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(39)
		::phoenix::Color tmp19 = tmp18->rgb((int)8947848);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(40)
		::phoenix::Rectangle tmp20 = text_bounds;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(42)
		::phoenix::Renderer tmp21 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(42)
		::phoenix::BitmapFont tmp22 = tmp21->font;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(46)
		::phoenix::Batcher tmp23 = debug->batcher;		HX_STACK_VAR(tmp23,"tmp23");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::BitmapFont &tmp22,::phoenix::Rectangle &tmp20,::phoenix::Color &tmp19,::phoenix::Batcher &tmp23){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/TraceDebugView.hx",35,0x3d0b52d6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.log.text","\x52","\x72","\x2d","\x08"),false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp19,false);
					__result->Add(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66") , tmp20,false);
					__result->Add(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec") , true,false);
					__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , tmp22,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
					__result->Add(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53") , (int)4,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)12)),false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp23,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		Dynamic tmp24 = _Function_1_1::Block(tmp22,tmp20,tmp19,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(35)
		Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("TraceDebugView.hx","\x6b","\xc1","\x72","\xad"),35,HX_HCSTRING("luxe.debug.TraceDebugView","\xa6","\x6a","\x10","\xaa"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(35)
		::luxe::Text tmp26 = ::luxe::Text_obj::__new(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(35)
		this->lines = tmp26;
		HX_STACK_LINE(50)
		::luxe::Text tmp27 = this->lines;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(50)
		::phoenix::geometry::Geometry tmp28 = tmp27->geometry;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(50)
		bool tmp29 = (tmp28 != null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(50)
		if ((tmp29)){
			HX_STACK_LINE(51)
			::luxe::Text tmp30 = this->lines;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(51)
			::phoenix::Rectangle tmp31 = text_bounds;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(51)
			tmp30->geometry->set_clip_rect(tmp31);
			HX_STACK_LINE(52)
			::luxe::Text tmp32 = this->lines;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(52)
			tmp32->geometry->set_locked(true);
			HX_STACK_LINE(53)
			::luxe::Text tmp33 = this->lines;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(53)
			tmp33->geometry->id = HX_HCSTRING("debug.log.text.geometry","\x4e","\x94","\x78","\x85");
		}
	}
return null();
}


Void TraceDebugView_obj::onwindowsized( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","onwindowsized",0x45ba300c,"luxe.debug.TraceDebugView.onwindowsized","luxe/debug/TraceDebugView.hx",57,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(58)
		::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::luxe::Debug debug = tmp;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(59)
		Float tmp1 = debug->padding->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Float tmp2 = (tmp1 + (int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Float tmp3 = debug->padding->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		Float tmp4 = (tmp3 + (int)40);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		::luxe::Core tmp5 = ::Luxe_obj::core;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		int tmp6 = tmp5->screen->get_w();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		Float tmp7 = debug->padding->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		Float tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		Float tmp10 = (tmp9 - (int)20);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		::luxe::Core tmp11 = ::Luxe_obj::core;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(59)
		int tmp12 = tmp11->screen->get_h();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(59)
		Float tmp13 = debug->padding->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(59)
		Float tmp14 = (tmp13 * (int)2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(59)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(59)
		Float tmp16 = (tmp15 - (int)40);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(59)
		::phoenix::Rectangle tmp17 = ::phoenix::Rectangle_obj::__new(tmp2,tmp4,tmp10,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(59)
		::phoenix::Rectangle text_bounds = tmp17;		HX_STACK_VAR(text_bounds,"text_bounds");
		HX_STACK_LINE(60)
		::luxe::Text tmp18 = this->lines;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(60)
		::phoenix::Rectangle tmp19 = text_bounds;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(60)
		tmp18->set_bounds(tmp19);
		HX_STACK_LINE(61)
		::luxe::Text tmp20 = this->lines;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(61)
		::phoenix::Rectangle tmp21 = text_bounds;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(61)
		tmp20->set_clip_rect(tmp21);
		HX_STACK_LINE(63)
		::luxe::Text tmp22 = this->lines;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(63)
		::phoenix::geometry::Geometry tmp23 = tmp22->geometry;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(63)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(63)
		if ((tmp24)){
			HX_STACK_LINE(64)
			::luxe::Text tmp25 = this->lines;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(64)
			tmp25->geometry->set_locked(true);
			HX_STACK_LINE(65)
			::luxe::Text tmp26 = this->lines;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(65)
			tmp26->geometry->set_dirty(true);
		}
	}
return null();
}


Void TraceDebugView_obj::add_line( ::String _t){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","add_line",0xe230d8da,"luxe.debug.TraceDebugView.add_line","luxe/debug/TraceDebugView.hx",69,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_t,"_t")
		HX_STACK_LINE(71)
		bool tmp = (this->logged == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		if ((tmp)){
			HX_STACK_LINE(72)
			return null();
		}
		HX_STACK_LINE(76)
		::String tmp1 = _t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		this->logged->push(tmp1);
		HX_STACK_LINE(79)
		bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		if ((tmp3)){
			HX_STACK_LINE(80)
			return null();
		}
		HX_STACK_LINE(83)
		this->refresh_lines();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TraceDebugView_obj,add_line,(void))

Void TraceDebugView_obj::refresh_lines( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","refresh_lines",0x2713d193,"luxe.debug.TraceDebugView.refresh_lines","luxe/debug/TraceDebugView.hx",88,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		int tmp = this->_last_logged_length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		int tmp1 = this->logged->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(97)
		::String _final = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_final,"_final");
		HX_STACK_LINE(99)
		int tmp3 = this->logged->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		int tmp4 = this->max_lines;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		bool tmp5 = (tmp3 <= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		if ((tmp5)){
			HX_STACK_LINE(100)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			Array< ::String > _g1 = this->logged;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(100)
			while((true)){
				HX_STACK_LINE(100)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(100)
				if ((tmp7)){
					HX_STACK_LINE(100)
					break;
				}
				HX_STACK_LINE(100)
				::String tmp8 = _g1->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(100)
				::String _line = tmp8;		HX_STACK_VAR(_line,"_line");
				HX_STACK_LINE(100)
				++(_g);
				HX_STACK_LINE(101)
				::String tmp9 = (_line + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				hx::AddEq(_final,tmp9);
			}
		}
		else{
			HX_STACK_LINE(104)
			int tmp6 = this->logged->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			int tmp7 = this->max_lines;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			int _start = tmp8;		HX_STACK_VAR(_start,"_start");
			HX_STACK_LINE(105)
			int tmp9 = this->logged->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			int _total = tmp9;		HX_STACK_VAR(_total,"_total");
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				int _g1 = _start;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(106)
				int tmp10 = this->logged->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(106)
				int _g = tmp10;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(106)
				while((true)){
					HX_STACK_LINE(106)
					bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(106)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(106)
					if ((tmp12)){
						HX_STACK_LINE(106)
						break;
					}
					HX_STACK_LINE(106)
					int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(106)
					int i = tmp13;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(107)
					::String tmp14 = this->logged->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(107)
					::String _line = tmp14;		HX_STACK_VAR(_line,"_line");
					HX_STACK_LINE(108)
					::String tmp15 = (_line + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(108)
					hx::AddEq(_final,tmp15);
				}
			}
		}
		HX_STACK_LINE(112)
		::luxe::Text tmp6 = this->lines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		::String tmp7 = _final;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		tmp6->set_text(tmp7);
		HX_STACK_LINE(114)
		::luxe::Text tmp8 = this->lines;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(114)
		::phoenix::geometry::Geometry tmp9 = tmp8->geometry;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(114)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(114)
		if ((tmp10)){
			HX_STACK_LINE(115)
			::luxe::Text tmp11 = this->lines;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(115)
			tmp11->geometry->set_locked(true);
			HX_STACK_LINE(116)
			::luxe::Text tmp12 = this->lines;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			tmp12->geometry->set_dirty(true);
		}
		HX_STACK_LINE(119)
		int tmp11 = this->logged->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(119)
		this->_last_logged_length = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TraceDebugView_obj,refresh_lines,(void))

Void TraceDebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","refresh",0x2c45dc13,"luxe.debug.TraceDebugView.refresh","luxe/debug/TraceDebugView.hx",124,0x3d0b52d6)
		HX_STACK_THIS(this)
	}
return null();
}


Void TraceDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","process",0x306fa4a7,"luxe.debug.TraceDebugView.process","luxe/debug/TraceDebugView.hx",128,0x3d0b52d6)
		HX_STACK_THIS(this)
	}
return null();
}


Void TraceDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","show",0xd82ebfc5,"luxe.debug.TraceDebugView.show","luxe/debug/TraceDebugView.hx",132,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		this->super::show();
		HX_STACK_LINE(134)
		this->refresh_lines();
		HX_STACK_LINE(135)
		::luxe::Text tmp = this->lines;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		tmp->set_visible(true);
	}
return null();
}


Void TraceDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.TraceDebugView","hide",0xd0ea1f8a,"luxe.debug.TraceDebugView.hide","luxe/debug/TraceDebugView.hx",138,0x3d0b52d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		this->super::hide();
		HX_STACK_LINE(140)
		::luxe::Text tmp = this->lines;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		tmp->set_visible(false);
	}
return null();
}



TraceDebugView_obj::TraceDebugView_obj()
{
}

void TraceDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TraceDebugView);
	HX_MARK_MEMBER_NAME(logged,"logged");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(max_lines,"max_lines");
	HX_MARK_MEMBER_NAME(_last_logged_length,"_last_logged_length");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TraceDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(logged,"logged");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(max_lines,"max_lines");
	HX_VISIT_MEMBER_NAME(_last_logged_length,"_last_logged_length");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TraceDebugView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logged") ) { return logged; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_trace") ) { return on_trace_dyn(); }
		if (HX_FIELD_EQ(inName,"add_line") ) { return add_line_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_lines") ) { return max_lines; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh_lines") ) { return refresh_lines_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_last_logged_length") ) { return _last_logged_length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TraceDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logged") ) { logged=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_lines") ) { max_lines=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_last_logged_length") ) { _last_logged_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TraceDebugView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TraceDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("logged","\x82","\xd6","\x68","\x5c"));
	outFields->push(HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"));
	outFields->push(HX_HCSTRING("max_lines","\xe4","\xc2","\xdf","\x6b"));
	outFields->push(HX_HCSTRING("_last_logged_length","\x79","\x2d","\x79","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TraceDebugView_obj,logged),HX_HCSTRING("logged","\x82","\xd6","\x68","\x5c")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(TraceDebugView_obj,lines),HX_HCSTRING("lines","\xff","\xdd","\x01","\x75")},
	{hx::fsInt,(int)offsetof(TraceDebugView_obj,max_lines),HX_HCSTRING("max_lines","\xe4","\xc2","\xdf","\x6b")},
	{hx::fsInt,(int)offsetof(TraceDebugView_obj,_last_logged_length),HX_HCSTRING("_last_logged_length","\x79","\x2d","\x79","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("logged","\x82","\xd6","\x68","\x5c"),
	HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"),
	HX_HCSTRING("max_lines","\xe4","\xc2","\xdf","\x6b"),
	HX_HCSTRING("on_trace","\x25","\x58","\x1f","\xbd"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	HX_HCSTRING("add_line","\x12","\xea","\xf3","\xe0"),
	HX_HCSTRING("_last_logged_length","\x79","\x2d","\x79","\x40"),
	HX_HCSTRING("refresh_lines","\x5b","\x55","\x8f","\x3a"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TraceDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TraceDebugView_obj::__mClass,"__mClass");
};

#endif

hx::Class TraceDebugView_obj::__mClass;

void TraceDebugView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.TraceDebugView","\xa6","\x6a","\x10","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TraceDebugView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TraceDebugView_obj >;
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
