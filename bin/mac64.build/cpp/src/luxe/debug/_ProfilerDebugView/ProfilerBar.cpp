#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
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
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerBar
#include <luxe/debug/_ProfilerDebugView/ProfilerBar.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerGraph
#include <luxe/debug/_ProfilerDebugView/ProfilerGraph.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
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
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
namespace luxe{
namespace debug{
namespace _ProfilerDebugView{

Void ProfilerBar_obj::__construct(::String _name,Dynamic _max,::phoenix::Color _color)
{
HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","new",0x0df3bd11,"luxe.debug._ProfilerDebugView.ProfilerBar.new","luxe/debug/ProfilerDebugView.hx",450,0xef83e3c4)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_max,"_max")
HX_STACK_ARG(_color,"_color")
{
	HX_STACK_LINE(461)
	this->max = ((Float)16.7);
	HX_STACK_LINE(460)
	this->height = ((Float)8);
	HX_STACK_LINE(459)
	this->visible = false;
	HX_STACK_LINE(469)
	this->name = _name;
	HX_STACK_LINE(471)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp = ::luxe::debug::_ProfilerDebugView::ProfilerGraph_obj::__new(_name,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	this->graph = tmp;
	HX_STACK_LINE(472)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp1 = this->graph;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(472)
	tmp1->create();
	HX_STACK_LINE(473)
	bool tmp2 = (_max != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(473)
	if ((tmp2)){
		HX_STACK_LINE(473)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp3 = this->graph;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(473)
		Dynamic tmp4 = _max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(473)
		tmp3->set_max(tmp4);
	}
	HX_STACK_LINE(477)
	::String tmp3 = (HX_HCSTRING("profiler.text.","\xdc","\xe3","\x08","\x7a") + _name);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(478)
	::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(479)
	::phoenix::Color tmp5 = _color;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(480)
	Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(480)
	Float tmp7 = (tmp6 * ((Float)1.8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(483)
	::luxe::Debug tmp8 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(483)
	::phoenix::Batcher tmp9 = tmp8->batcher;		HX_STACK_VAR(tmp9,"tmp9");
	struct _Function_1_1{
		inline static Dynamic Block( ::phoenix::Color &tmp5,::phoenix::Batcher &tmp9,::phoenix::Vector &tmp4,::String &tmp3,Float &tmp7){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",475,0xef83e3c4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
				__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp4,false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp5,false);
				__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , tmp7,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp9,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(475)
	Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp9,tmp4,tmp3,tmp7);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(475)
	Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("ProfilerDebugView.hx","\x4f","\x00","\x72","\x91"),475,HX_HCSTRING("luxe.debug._ProfilerDebugView.ProfilerBar","\x9f","\xe0","\x11","\xc4"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(475)
	::luxe::Text tmp12 = ::luxe::Text_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(475)
	this->text_item = tmp12;
	HX_STACK_LINE(486)
	::luxe::Draw tmp13 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(487)
	::phoenix::Color tmp14 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(487)
	::phoenix::Color tmp15 = tmp14->rgb((int)592137);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(489)
	::luxe::Debug tmp16 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(489)
	::phoenix::Batcher tmp17 = tmp16->batcher;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(490)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp18 = this->graph;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(490)
	Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(490)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp20 = this->graph;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(490)
	Float tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
	struct _Function_1_2{
		inline static Dynamic Block( ::phoenix::Batcher &tmp17,Float &tmp19,Float &tmp21,::phoenix::Color &tmp15){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",486,0xef83e3c4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp15,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp17,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp19,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp21,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(486)
	Dynamic tmp22 = _Function_1_2::Block(tmp17,tmp19,tmp21,tmp15);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(486)
	::phoenix::geometry::QuadGeometry tmp23 = tmp13->box(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(486)
	this->bg_geometry = tmp23;
	HX_STACK_LINE(493)
	::luxe::Draw tmp24 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(494)
	::phoenix::Color tmp25 = _color;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(496)
	::luxe::Debug tmp26 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(496)
	::phoenix::Batcher tmp27 = tmp26->batcher;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(497)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp28 = this->graph;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(497)
	Float tmp29 = tmp28->width;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(497)
	Float tmp30 = (tmp29 - (int)2);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(497)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp31 = this->graph;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(497)
	Float tmp32 = tmp31->height;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(497)
	Float tmp33 = (tmp32 - (int)2);		HX_STACK_VAR(tmp33,"tmp33");
	struct _Function_1_3{
		inline static Dynamic Block( Float &tmp33,::phoenix::Color &tmp25,::phoenix::Batcher &tmp27,Float &tmp30){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",493,0xef83e3c4)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp25,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.33),false);
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp27,false);
				__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)1)),false);
				__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)1)),false);
				__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp30,false);
				__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp33,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(493)
	Dynamic tmp34 = _Function_1_3::Block(tmp33,tmp25,tmp27,tmp30);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(493)
	::phoenix::geometry::QuadGeometry tmp35 = tmp24->box(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(493)
	this->bar_geometry = tmp35;
	HX_STACK_LINE(500)
	this->hide();
}
;
	return null();
}

//ProfilerBar_obj::~ProfilerBar_obj() { }

Dynamic ProfilerBar_obj::__CreateEmpty() { return  new ProfilerBar_obj; }
hx::ObjectPtr< ProfilerBar_obj > ProfilerBar_obj::__new(::String _name,Dynamic _max,::phoenix::Color _color)
{  hx::ObjectPtr< ProfilerBar_obj > _result_ = new ProfilerBar_obj();
	_result_->__construct(_name,_max,_color);
	return _result_;}

Dynamic ProfilerBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProfilerBar_obj > _result_ = new ProfilerBar_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ProfilerBar_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","hide",0x235d62f1,"luxe.debug._ProfilerDebugView.ProfilerBar.hide","luxe/debug/ProfilerDebugView.hx",504,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(505)
		this->visible = false;
		HX_STACK_LINE(506)
		::phoenix::geometry::QuadGeometry tmp = this->bar_geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(506)
		tmp->set_visible(false);
		HX_STACK_LINE(507)
		::phoenix::geometry::QuadGeometry tmp1 = this->bg_geometry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(507)
		tmp1->set_visible(false);
		HX_STACK_LINE(508)
		::luxe::Text tmp2 = this->text_item;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(508)
		tmp2->set_visible(false);
		HX_STACK_LINE(509)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp3 = this->graph;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(509)
		tmp3->hide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerBar_obj,hide,(void))

Void ProfilerBar_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","show",0x2aa2032c,"luxe.debug._ProfilerDebugView.ProfilerBar.show","luxe/debug/ProfilerDebugView.hx",512,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(513)
		this->visible = true;
		HX_STACK_LINE(514)
		::phoenix::geometry::QuadGeometry tmp = this->bar_geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(514)
		tmp->set_visible(true);
		HX_STACK_LINE(515)
		::phoenix::geometry::QuadGeometry tmp1 = this->bg_geometry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(515)
		tmp1->set_visible(true);
		HX_STACK_LINE(516)
		::luxe::Text tmp2 = this->text_item;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(516)
		tmp2->set_visible(true);
		HX_STACK_LINE(517)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp3 = this->graph;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(517)
		tmp3->show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerBar_obj,show,(void))

Float ProfilerBar_obj::set_value( Float _v){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","set_value",0x7162cf45,"luxe.debug._ProfilerDebugView.ProfilerBar.set_value","luxe/debug/ProfilerDebugView.hx",520,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(522)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp = this->graph;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(522)
	Float tmp1 = (_v * (int)1000);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(522)
	tmp->set_ping(tmp1);
	HX_STACK_LINE(524)
	bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(524)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(524)
	if ((tmp3)){
		HX_STACK_LINE(524)
		Float tmp4 = this->value = _v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(524)
		return tmp4;
	}
	HX_STACK_LINE(526)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(526)
	{
		HX_STACK_LINE(526)
		Float tmp5 = ::Math_obj::pow((int)10,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(526)
		Float n = tmp5;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(526)
		Float tmp6 = (_v * (int)1000);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(526)
		Float tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(526)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(526)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(526)
		Float tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(526)
		tmp4 = (Float(tmp9) / Float(tmp10));
	}
	HX_STACK_LINE(526)
	Float _vv = tmp4;		HX_STACK_VAR(_vv,"_vv");
	HX_STACK_LINE(527)
	Float tmp5 = _vv;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(527)
	Float tmp6 = this->max;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(527)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(527)
	Float _p = tmp7;		HX_STACK_VAR(_p,"_p");
	HX_STACK_LINE(529)
	bool tmp8 = (_p < ((Float)0.005));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(529)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(529)
	if ((tmp8)){
		HX_STACK_LINE(529)
		tmp9 = ((Float)0.005);
	}
	else{
		HX_STACK_LINE(529)
		bool tmp10 = (_p > (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(529)
		if ((tmp10)){
			HX_STACK_LINE(529)
			tmp9 = (int)1;
		}
		else{
			HX_STACK_LINE(529)
			tmp9 = _p;
		}
	}
	HX_STACK_LINE(529)
	_p = tmp9;
	HX_STACK_LINE(531)
	bool tmp10 = (_p > (int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(531)
	if ((tmp10)){
		HX_STACK_LINE(532)
		::phoenix::geometry::QuadGeometry tmp11 = this->bar_geometry;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(532)
		::phoenix::Color tmp12 = ::luxe::debug::ProfilerDebugView_obj::color_red;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(532)
		tmp11->set_color(tmp12);
	}
	else{
		HX_STACK_LINE(533)
		bool tmp11 = (_p < ((Float)0.15));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(533)
		if ((tmp11)){
			HX_STACK_LINE(534)
			::phoenix::geometry::QuadGeometry tmp12 = this->bar_geometry;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(534)
			::phoenix::Color tmp13 = ::luxe::debug::ProfilerDebugView_obj::color_green;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(534)
			tmp12->set_color(tmp13);
		}
		else{
			HX_STACK_LINE(536)
			::phoenix::geometry::QuadGeometry tmp12 = this->bar_geometry;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(536)
			::phoenix::Color tmp13 = ::luxe::debug::ProfilerDebugView_obj::color_normal;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(536)
			tmp12->set_color(tmp13);
		}
	}
	HX_STACK_LINE(539)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp11 = this->graph;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(539)
	Float tmp12 = tmp11->width;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(539)
	Float tmp13 = (tmp12 - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(539)
	Float tmp14 = _p;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(539)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(539)
	Float nx = tmp15;		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(540)
	::phoenix::geometry::QuadGeometry tmp16 = this->bar_geometry;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(540)
	Float tmp17 = nx;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(540)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp18 = this->graph;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(540)
	Float tmp19 = tmp18->height;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(540)
	Float tmp20 = (tmp19 - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(540)
	tmp16->resize_xy(tmp17,tmp20);
	HX_STACK_LINE(542)
	Float tmp21 = this->value = _v;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(542)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerBar_obj,set_value,return )

::phoenix::Vector ProfilerBar_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","set_pos",0x5dbe5068,"luxe.debug._ProfilerDebugView.ProfilerBar.set_pos","luxe/debug/ProfilerDebugView.hx",546,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(547)
	{
		HX_STACK_LINE(547)
		::phoenix::geometry::QuadGeometry tmp = this->bg_geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		::phoenix::Spatial tmp1 = tmp->transform->local;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(547)
		::phoenix::Spatial _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(547)
		_this->pos = _p;
		HX_STACK_LINE(547)
		bool tmp2 = (_p != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(547)
		if ((tmp2)){
			HX_STACK_LINE(547)
			::phoenix::Vector tmp3 = _this->pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(547)
			Dynamic tmp4 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(547)
			::phoenix::Vector_obj::Listen(tmp3,tmp4);
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(547)
				bool tmp5 = (_this->pos_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(547)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(547)
				if ((tmp5)){
					HX_STACK_LINE(547)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(547)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(547)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(547)
					tmp6 = false;
				}
				HX_STACK_LINE(547)
				if ((tmp6)){
					HX_STACK_LINE(547)
					::phoenix::Vector tmp7 = _this->pos;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(547)
					_this->pos_changed(tmp7);
				}
			}
		}
		HX_STACK_LINE(547)
		_this->pos;
	}
	HX_STACK_LINE(548)
	{
		HX_STACK_LINE(548)
		::phoenix::geometry::QuadGeometry tmp = this->bar_geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(548)
		::phoenix::Spatial tmp1 = tmp->transform->local;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		::phoenix::Vector _this = tmp1->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(548)
		Float tmp2 = (_p->x + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(548)
		Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(548)
		Float tmp3 = (_p->y + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(548)
		Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(548)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(548)
		_this->ignore_listeners = true;
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			_this->x = _x;
			HX_STACK_LINE(548)
			bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(548)
			if ((tmp4)){
				HX_STACK_LINE(548)
				_this->x;
			}
			else{
				HX_STACK_LINE(548)
				bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(548)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(548)
				if ((tmp5)){
					HX_STACK_LINE(548)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(548)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(548)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(548)
					tmp6 = false;
				}
				HX_STACK_LINE(548)
				if ((tmp6)){
					HX_STACK_LINE(548)
					Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(548)
					_this->listen_x(tmp7);
				}
				HX_STACK_LINE(548)
				_this->x;
			}
		}
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			_this->y = _y;
			HX_STACK_LINE(548)
			bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(548)
			if ((tmp4)){
				HX_STACK_LINE(548)
				_this->y;
			}
			else{
				HX_STACK_LINE(548)
				bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(548)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(548)
				if ((tmp5)){
					HX_STACK_LINE(548)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(548)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(548)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(548)
					tmp6 = false;
				}
				HX_STACK_LINE(548)
				if ((tmp6)){
					HX_STACK_LINE(548)
					Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(548)
					_this->listen_y(tmp7);
				}
				HX_STACK_LINE(548)
				_this->y;
			}
		}
		HX_STACK_LINE(548)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(548)
		bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(548)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(548)
		if ((tmp4)){
			HX_STACK_LINE(548)
			bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(548)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(548)
			tmp5 = !(tmp7);
		}
		else{
			HX_STACK_LINE(548)
			tmp5 = false;
		}
		HX_STACK_LINE(548)
		if ((tmp5)){
			HX_STACK_LINE(548)
			Float tmp6 = _this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(548)
			_this->listen_x(tmp6);
		}
		HX_STACK_LINE(548)
		bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(548)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(548)
		if ((tmp6)){
			HX_STACK_LINE(548)
			bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(548)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(548)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(548)
			tmp7 = false;
		}
		HX_STACK_LINE(548)
		if ((tmp7)){
			HX_STACK_LINE(548)
			Float tmp8 = _this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(548)
			_this->listen_y(tmp8);
		}
		HX_STACK_LINE(548)
		_this;
	}
	HX_STACK_LINE(549)
	{
		HX_STACK_LINE(549)
		::luxe::Text tmp = this->text_item;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		::phoenix::Vector tmp1 = tmp->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(549)
		Float tmp2 = _p->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(549)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp3 = this->graph;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(549)
		Float tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(549)
		Float tmp5 = (tmp4 * (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(549)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(549)
		Float tmp7 = (tmp6 + (int)10);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(549)
		Float _x = tmp7;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(549)
		Float tmp8 = (_p->y - (int)6);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(549)
		Float _y = tmp8;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(549)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(549)
		_this->ignore_listeners = true;
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			_this->x = _x;
			HX_STACK_LINE(549)
			bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(549)
			if ((tmp9)){
				HX_STACK_LINE(549)
				_this->x;
			}
			else{
				HX_STACK_LINE(549)
				bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(549)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(549)
				if ((tmp10)){
					HX_STACK_LINE(549)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(549)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(549)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(549)
					tmp11 = false;
				}
				HX_STACK_LINE(549)
				if ((tmp11)){
					HX_STACK_LINE(549)
					Float tmp12 = _x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(549)
					_this->listen_x(tmp12);
				}
				HX_STACK_LINE(549)
				_this->x;
			}
		}
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			_this->y = _y;
			HX_STACK_LINE(549)
			bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(549)
			if ((tmp9)){
				HX_STACK_LINE(549)
				_this->y;
			}
			else{
				HX_STACK_LINE(549)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(549)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(549)
				if ((tmp10)){
					HX_STACK_LINE(549)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(549)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(549)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(549)
					tmp11 = false;
				}
				HX_STACK_LINE(549)
				if ((tmp11)){
					HX_STACK_LINE(549)
					Float tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(549)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(549)
				_this->y;
			}
		}
		HX_STACK_LINE(549)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(549)
		bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(549)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(549)
		if ((tmp9)){
			HX_STACK_LINE(549)
			bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(549)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(549)
			tmp10 = !(tmp12);
		}
		else{
			HX_STACK_LINE(549)
			tmp10 = false;
		}
		HX_STACK_LINE(549)
		if ((tmp10)){
			HX_STACK_LINE(549)
			Float tmp11 = _this->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(549)
			_this->listen_x(tmp11);
		}
		HX_STACK_LINE(549)
		bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(549)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(549)
		if ((tmp11)){
			HX_STACK_LINE(549)
			bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(549)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(549)
			tmp12 = !(tmp14);
		}
		else{
			HX_STACK_LINE(549)
			tmp12 = false;
		}
		HX_STACK_LINE(549)
		if ((tmp12)){
			HX_STACK_LINE(549)
			Float tmp13 = _this->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(549)
			_this->listen_y(tmp13);
		}
		HX_STACK_LINE(549)
		_this;
	}
	HX_STACK_LINE(550)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp = this->graph;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(_p->x,_p->y,_p->z,_p->w);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(550)
		::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(550)
		Float _z = (int)0;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(550)
			::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp4 = this->graph;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(550)
			Float tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(550)
			Float tmp6 = (tmp5 + (int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(550)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(550)
			Float _x = tmp7;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(550)
			Float tmp8 = _this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(550)
			::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp9 = this->graph;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(550)
			Float tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(550)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(550)
			Float tmp12 = (tmp11 + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(550)
			Float tmp13 = (tmp8 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(550)
			Float _y = tmp13;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(550)
			Float tmp14 = (_this->z + _z);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(550)
			Float _z1 = tmp14;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(550)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(550)
			_this->ignore_listeners = true;
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				_this->x = _x;
				HX_STACK_LINE(550)
				bool tmp15 = _this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(550)
				if ((tmp15)){
					HX_STACK_LINE(550)
					_this->x;
				}
				else{
					HX_STACK_LINE(550)
					bool tmp16 = (_this->listen_x != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(550)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(550)
					if ((tmp16)){
						HX_STACK_LINE(550)
						bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(550)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(550)
						tmp17 = !(tmp19);
					}
					else{
						HX_STACK_LINE(550)
						tmp17 = false;
					}
					HX_STACK_LINE(550)
					if ((tmp17)){
						HX_STACK_LINE(550)
						Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(550)
						_this->listen_x(tmp18);
					}
					HX_STACK_LINE(550)
					_this->x;
				}
			}
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				_this->y = _y;
				HX_STACK_LINE(550)
				bool tmp15 = _this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(550)
				if ((tmp15)){
					HX_STACK_LINE(550)
					_this->y;
				}
				else{
					HX_STACK_LINE(550)
					bool tmp16 = (_this->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(550)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(550)
					if ((tmp16)){
						HX_STACK_LINE(550)
						bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(550)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(550)
						tmp17 = !(tmp19);
					}
					else{
						HX_STACK_LINE(550)
						tmp17 = false;
					}
					HX_STACK_LINE(550)
					if ((tmp17)){
						HX_STACK_LINE(550)
						Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(550)
						_this->listen_y(tmp18);
					}
					HX_STACK_LINE(550)
					_this->y;
				}
			}
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				_this->z = _z1;
				HX_STACK_LINE(550)
				bool tmp15 = _this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(550)
				if ((tmp15)){
					HX_STACK_LINE(550)
					_this->z;
				}
				else{
					HX_STACK_LINE(550)
					bool tmp16 = (_this->listen_z != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(550)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(550)
					if ((tmp16)){
						HX_STACK_LINE(550)
						bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(550)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(550)
						tmp17 = !(tmp19);
					}
					else{
						HX_STACK_LINE(550)
						tmp17 = false;
					}
					HX_STACK_LINE(550)
					if ((tmp17)){
						HX_STACK_LINE(550)
						Float tmp18 = _z1;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(550)
						_this->listen_z(tmp18);
					}
					HX_STACK_LINE(550)
					_this->z;
				}
			}
			HX_STACK_LINE(550)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(550)
			bool tmp15 = (_this->listen_x != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(550)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(550)
			if ((tmp15)){
				HX_STACK_LINE(550)
				bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(550)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(550)
				tmp16 = !(tmp18);
			}
			else{
				HX_STACK_LINE(550)
				tmp16 = false;
			}
			HX_STACK_LINE(550)
			if ((tmp16)){
				HX_STACK_LINE(550)
				Float tmp17 = _this->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(550)
				_this->listen_x(tmp17);
			}
			HX_STACK_LINE(550)
			bool tmp17 = (_this->listen_y != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(550)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(550)
			if ((tmp17)){
				HX_STACK_LINE(550)
				bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(550)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(550)
				tmp18 = !(tmp20);
			}
			else{
				HX_STACK_LINE(550)
				tmp18 = false;
			}
			HX_STACK_LINE(550)
			if ((tmp18)){
				HX_STACK_LINE(550)
				Float tmp19 = _this->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(550)
				_this->listen_y(tmp19);
			}
			HX_STACK_LINE(550)
			bool tmp19 = (_this->listen_z != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(550)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(550)
			if ((tmp19)){
				HX_STACK_LINE(550)
				bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(550)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(550)
				tmp20 = !(tmp22);
			}
			else{
				HX_STACK_LINE(550)
				tmp20 = false;
			}
			HX_STACK_LINE(550)
			if ((tmp20)){
				HX_STACK_LINE(550)
				Float tmp21 = _this->z;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(550)
				_this->listen_z(tmp21);
			}
			HX_STACK_LINE(550)
			_this;
		}
		HX_STACK_LINE(550)
		tmp1 = _this;
	}
	HX_STACK_LINE(550)
	tmp->set_pos(tmp1);
	HX_STACK_LINE(551)
	::phoenix::Vector tmp2 = this->pos = _p;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(551)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerBar_obj,set_pos,return )

::String ProfilerBar_obj::set_text( ::String _t){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerBar","set_text",0xab655359,"luxe.debug._ProfilerDebugView.ProfilerBar.set_text","luxe/debug/ProfilerDebugView.hx",554,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(555)
	::luxe::Text tmp = this->text_item;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(555)
	::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(555)
	::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(555)
	::String tmp3 = (tmp2 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(555)
	::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp4 = this->graph;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(555)
	Float tmp5 = tmp4->max;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(555)
	::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(555)
	::String tmp7 = (tmp6 + HX_HCSTRING("ms) | ","\x21","\x7e","\x2d","\xe7"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(555)
	::String tmp8 = _t;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(555)
	::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(555)
	::String tmp10 = (tmp9 + HX_HCSTRING("ms","\x66","\x5f","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(555)
	tmp->set_text(tmp10);
	HX_STACK_LINE(556)
	::String tmp11 = this->text = _t;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(556)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerBar_obj,set_text,return )


ProfilerBar_obj::ProfilerBar_obj()
{
}

void ProfilerBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProfilerBar);
	HX_MARK_MEMBER_NAME(bar_geometry,"bar_geometry");
	HX_MARK_MEMBER_NAME(bg_geometry,"bg_geometry");
	HX_MARK_MEMBER_NAME(graph,"graph");
	HX_MARK_MEMBER_NAME(text_item,"text_item");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void ProfilerBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bar_geometry,"bar_geometry");
	HX_VISIT_MEMBER_NAME(bg_geometry,"bg_geometry");
	HX_VISIT_MEMBER_NAME(graph,"graph");
	HX_VISIT_MEMBER_NAME(text_item,"text_item");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic ProfilerBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"graph") ) { return graph; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"text_item") ) { return text_item; }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bg_geometry") ) { return bg_geometry; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bar_geometry") ) { return bar_geometry; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProfilerBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"graph") ) { graph=inValue.Cast< ::luxe::debug::_ProfilerDebugView::ProfilerGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return set_value(inValue);value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"text_item") ) { text_item=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bg_geometry") ) { bg_geometry=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bar_geometry") ) { bar_geometry=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProfilerBar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ProfilerBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bar_geometry","\xde","\xf5","\xf6","\xba"));
	outFields->push(HX_HCSTRING("bg_geometry","\xac","\x43","\x5a","\xcd"));
	outFields->push(HX_HCSTRING("graph","\x4e","\x0f","\xea","\x99"));
	outFields->push(HX_HCSTRING("text_item","\x25","\x01","\x91","\xfe"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(ProfilerBar_obj,bar_geometry),HX_HCSTRING("bar_geometry","\xde","\xf5","\xf6","\xba")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(ProfilerBar_obj,bg_geometry),HX_HCSTRING("bg_geometry","\xac","\x43","\x5a","\xcd")},
	{hx::fsObject /*::luxe::debug::_ProfilerDebugView::ProfilerGraph*/ ,(int)offsetof(ProfilerBar_obj,graph),HX_HCSTRING("graph","\x4e","\x0f","\xea","\x99")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(ProfilerBar_obj,text_item),HX_HCSTRING("text_item","\x25","\x01","\x91","\xfe")},
	{hx::fsString,(int)offsetof(ProfilerBar_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsBool,(int)offsetof(ProfilerBar_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsString,(int)offsetof(ProfilerBar_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(ProfilerBar_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsFloat,(int)offsetof(ProfilerBar_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bar_geometry","\xde","\xf5","\xf6","\xba"),
	HX_HCSTRING("bg_geometry","\xac","\x43","\x5a","\xcd"),
	HX_HCSTRING("graph","\x4e","\x0f","\xea","\x99"),
	HX_HCSTRING("text_item","\x25","\x01","\x91","\xfe"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProfilerBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProfilerBar_obj::__mClass,"__mClass");
};

#endif

hx::Class ProfilerBar_obj::__mClass;

void ProfilerBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug._ProfilerDebugView.ProfilerBar","\x9f","\xe0","\x11","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ProfilerBar_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProfilerBar_obj >;
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
} // end namespace _ProfilerDebugView
