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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
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
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace luxe{
namespace debug{
namespace _ProfilerDebugView{

Void ProfilerGraph_obj::__construct(::String _name,hx::Null< bool >  __o__bg)
{
HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerGraph","new",0x3312bf0c,"luxe.debug._ProfilerDebugView.ProfilerGraph.new","luxe/debug/ProfilerDebugView.hx",303,0xef83e3c4)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(__o__bg,"_bg")
bool _bg = __o__bg.Default(true);
{
	HX_STACK_LINE(315)
	this->visible = false;
	HX_STACK_LINE(314)
	this->history = (int)33;
	HX_STACK_LINE(313)
	this->height2 = ((Float)8);
	HX_STACK_LINE(312)
	this->height = ((Float)8);
	HX_STACK_LINE(311)
	this->width = ((Float)128);
	HX_STACK_LINE(309)
	this->bg = true;
	HX_STACK_LINE(326)
	this->bg = _bg;
	HX_STACK_LINE(327)
	this->name = _name;
	HX_STACK_LINE(328)
	::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	this->color = tmp;
	HX_STACK_LINE(329)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	{
		HX_STACK_LINE(329)
		Float tmp2 = ::Math_obj::pow((int)10,(int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		Float n = tmp2;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(329)
		Float tmp3 = (((Float)16.6666666666666679) * n);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(329)
		Float tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(329)
		tmp1 = (Float(tmp4) / Float(tmp5));
	}
	HX_STACK_LINE(329)
	this->set_max(tmp1);
}
;
	return null();
}

//ProfilerGraph_obj::~ProfilerGraph_obj() { }

Dynamic ProfilerGraph_obj::__CreateEmpty() { return  new ProfilerGraph_obj; }
hx::ObjectPtr< ProfilerGraph_obj > ProfilerGraph_obj::__new(::String _name,hx::Null< bool >  __o__bg)
{  hx::ObjectPtr< ProfilerGraph_obj > _result_ = new ProfilerGraph_obj();
	_result_->__construct(_name,__o__bg);
	return _result_;}

Dynamic ProfilerGraph_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProfilerGraph_obj > _result_ = new ProfilerGraph_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ProfilerGraph_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerGraph","create",0xd689ebd0,"luxe.debug._ProfilerDebugView.ProfilerGraph.create","luxe/debug/ProfilerDebugView.hx",333,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(335)
		Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		int tmp1 = this->history;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		this->segment = tmp2;
		HX_STACK_LINE(336)
		Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(336)
		Float tmp4 = (tmp3 * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(336)
		this->height2 = tmp4;
		HX_STACK_LINE(338)
		bool tmp5 = this->bg;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(338)
		if ((tmp5)){
			HX_STACK_LINE(339)
			::luxe::Draw tmp6 = ::Luxe_obj::draw;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(340)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(340)
			::phoenix::Color tmp8 = tmp7->rgb((int)1052688);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(342)
			::luxe::Debug tmp9 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(342)
			::phoenix::Batcher tmp10 = tmp9->batcher;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(343)
			Float tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(343)
			Float tmp12 = this->segment;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(343)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(343)
			Float tmp14 = this->height2;		HX_STACK_VAR(tmp14,"tmp14");
			struct _Function_2_1{
				inline static Dynamic Block( Float &tmp13,::phoenix::Batcher &tmp10,::phoenix::Color &tmp8,Float &tmp14){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",339,0xef83e3c4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp8,false);
						__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
						__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp10,false);
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
						__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp13,false);
						__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp14,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(339)
			Dynamic tmp15 = _Function_2_1::Block(tmp13,tmp10,tmp8,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(339)
			::phoenix::geometry::QuadGeometry tmp16 = tmp6->box(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(339)
			this->graphbg_geometry = tmp16;
		}
		HX_STACK_LINE(348)
		::phoenix::Color tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(350)
		::luxe::Debug tmp7 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(350)
		::phoenix::Batcher tmp8 = tmp7->batcher;		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Color &tmp6,::phoenix::Batcher &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",347,0xef83e3c4)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp6,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.33),false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(347)
		Dynamic tmp9 = _Function_1_1::Block(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(347)
		::phoenix::geometry::Geometry tmp10 = ::phoenix::geometry::Geometry_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(347)
		this->graph_geometry = tmp10;
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(353)
			int tmp11 = this->history;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(353)
			int _g = tmp11;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(353)
			while((true)){
				HX_STACK_LINE(353)
				bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(353)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(353)
				if ((tmp13)){
					HX_STACK_LINE(353)
					break;
				}
				HX_STACK_LINE(353)
				int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(353)
				int i = tmp14;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(354)
				Float tmp15 = this->segment;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(354)
				int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(354)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(354)
				Float tmp18 = this->height2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(354)
				::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(tmp17,tmp18,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(354)
				::phoenix::Color tmp20 = this->color;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(354)
				::phoenix::geometry::Vertex tmp21 = ::phoenix::geometry::Vertex_obj::__new(tmp19,tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(354)
				::phoenix::geometry::Vertex _b = tmp21;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(355)
				::phoenix::geometry::Geometry tmp22 = this->graph_geometry;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(355)
				::phoenix::geometry::Vertex tmp23 = _b;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(355)
				tmp22->add(tmp23);
			}
		}
		HX_STACK_LINE(358)
		::phoenix::geometry::Geometry tmp11 = this->graph_geometry;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(358)
		tmp11->set_primitive_type((int)3);
		HX_STACK_LINE(360)
		this->hide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerGraph_obj,create,(void))

Float ProfilerGraph_obj::set_max( Float _v){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerGraph","set_max",0xea8318f3,"luxe.debug._ProfilerDebugView.ProfilerGraph.set_max","luxe/debug/ProfilerDebugView.hx",366,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(368)
	Float tmp = this->max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	Float oldmax = tmp;		HX_STACK_VAR(oldmax,"oldmax");
	HX_STACK_LINE(369)
	this->max = _v;
	HX_STACK_LINE(371)
	::phoenix::geometry::Geometry tmp1 = this->graph_geometry;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(371)
	if ((tmp2)){
		HX_STACK_LINE(372)
		Float ratio = ((Float)1.0);		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(373)
		bool tmp3 = (oldmax != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(373)
		if ((tmp3)){
			HX_STACK_LINE(374)
			Float tmp4 = (Float(oldmax) / Float(_v));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(374)
			ratio = tmp4;
		}
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(376)
			::phoenix::geometry::Geometry tmp4 = this->graph_geometry;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			Array< ::Dynamic > _g1 = tmp4->vertices;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(376)
			while((true)){
				HX_STACK_LINE(376)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(376)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(376)
				if ((tmp6)){
					HX_STACK_LINE(376)
					break;
				}
				HX_STACK_LINE(376)
				::phoenix::geometry::Vertex tmp7 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(376)
				::phoenix::geometry::Vertex v = tmp7;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(376)
				++(_g);
				HX_STACK_LINE(377)
				bool tmp8 = (v != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(377)
				if ((tmp8)){
					HX_STACK_LINE(379)
					Float tmp9 = v->pos->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(379)
					Float tmp10 = this->height2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(379)
					Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(379)
					Float tmp12 = (((Float)1.0) - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(379)
					Float vp = tmp12;		HX_STACK_VAR(vp,"vp");
					HX_STACK_LINE(381)
					Float tmp13 = (vp * oldmax);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(381)
					Float vv = tmp13;		HX_STACK_VAR(vv,"vv");
					HX_STACK_LINE(383)
					Float tmp14 = vv;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(383)
					Float tmp15 = this->max;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(383)
					Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(383)
					vp = tmp16;
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::phoenix::Vector _this = v->pos;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(385)
						Float tmp17 = this->height2;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(385)
						Float tmp18 = (((Float)1.0) - vp);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(385)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(385)
						Float _y = tmp19;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(385)
						_this->y = _y;
						HX_STACK_LINE(385)
						bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(385)
						if ((tmp20)){
							HX_STACK_LINE(385)
							_this->y;
						}
						else{
							HX_STACK_LINE(385)
							bool tmp21 = (_this->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(385)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(385)
							if ((tmp21)){
								HX_STACK_LINE(385)
								bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(385)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(385)
								tmp22 = !(tmp24);
							}
							else{
								HX_STACK_LINE(385)
								tmp22 = false;
							}
							HX_STACK_LINE(385)
							if ((tmp22)){
								HX_STACK_LINE(385)
								Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(385)
								_this->listen_y(tmp23);
							}
							HX_STACK_LINE(385)
							_this->y;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(390)
	Float tmp3 = this->max;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(390)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerGraph_obj,set_max,return )

Float ProfilerGraph_obj::set_ping( Float _v){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerGraph","set_ping",0x4a346943,"luxe.debug._ProfilerDebugView.ProfilerGraph.set_ping","luxe/debug/ProfilerDebugView.hx",393,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(395)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(395)
	{
		HX_STACK_LINE(395)
		Float tmp1 = ::Math_obj::pow((int)10,(int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(395)
		Float n = tmp1;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(395)
		Float tmp2 = (_v * n);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(395)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(395)
		Float tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(395)
		tmp = (Float(tmp3) / Float(tmp4));
	}
	HX_STACK_LINE(395)
	Float _vv = tmp;		HX_STACK_VAR(_vv,"_vv");
	HX_STACK_LINE(396)
	Float tmp1 = _vv;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(396)
	Float tmp2 = this->max;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(396)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(396)
	Float _p = tmp3;		HX_STACK_VAR(_p,"_p");
	HX_STACK_LINE(399)
	{
		HX_STACK_LINE(399)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(399)
		int tmp4 = this->history;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		int _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(399)
		while((true)){
			HX_STACK_LINE(399)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(399)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			if ((tmp6)){
				HX_STACK_LINE(399)
				break;
			}
			HX_STACK_LINE(399)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(399)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(401)
			::phoenix::geometry::Geometry tmp8 = this->graph_geometry;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(401)
			::phoenix::geometry::Vertex tmp9 = tmp8->vertices->__get(i).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(401)
			::phoenix::geometry::Vertex v = tmp9;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(402)
			int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(402)
			int tmp11 = this->history;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(402)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(402)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(402)
			if ((tmp13)){
				HX_STACK_LINE(403)
				::phoenix::geometry::Geometry tmp14 = this->graph_geometry;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(403)
				int tmp15 = (i + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(403)
				::phoenix::geometry::Vertex tmp16 = tmp14->vertices->__get(tmp15).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(403)
				::phoenix::geometry::Vertex v1 = tmp16;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(404)
				bool tmp17 = (v1 != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(404)
				if ((tmp17)){
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						::phoenix::Vector _this = v->pos;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(405)
						Float tmp18 = v1->pos->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(405)
						int tmp19 = ::Math_obj::floor(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(405)
						Float _y = tmp19;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(405)
						_this->y = _y;
						HX_STACK_LINE(405)
						bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(405)
						if ((tmp20)){
							HX_STACK_LINE(405)
							_this->y;
						}
						else{
							HX_STACK_LINE(405)
							bool tmp21 = (_this->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(405)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(405)
							if ((tmp21)){
								HX_STACK_LINE(405)
								bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(405)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(405)
								tmp22 = !(tmp24);
							}
							else{
								HX_STACK_LINE(405)
								tmp22 = false;
							}
							HX_STACK_LINE(405)
							if ((tmp22)){
								HX_STACK_LINE(405)
								Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(405)
								_this->listen_y(tmp23);
							}
							HX_STACK_LINE(405)
							_this->y;
						}
					}
					HX_STACK_LINE(406)
					v->color = v1->color;
				}
			}
		}
	}
	HX_STACK_LINE(411)
	bool tmp4 = (_p < ((Float)0.001));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(411)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(411)
	if ((tmp4)){
		HX_STACK_LINE(411)
		tmp5 = ((Float)0.001);
	}
	else{
		HX_STACK_LINE(411)
		bool tmp6 = (_p > (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(411)
		if ((tmp6)){
			HX_STACK_LINE(411)
			tmp5 = (int)1;
		}
		else{
			HX_STACK_LINE(411)
			tmp5 = _p;
		}
	}
	HX_STACK_LINE(411)
	_p = tmp5;
	HX_STACK_LINE(413)
	bool tmp6 = (_p > (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(413)
	if ((tmp6)){
		HX_STACK_LINE(414)
		::phoenix::Color tmp7 = ::luxe::debug::ProfilerDebugView_obj::color_red;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(414)
		::phoenix::geometry::Geometry tmp8 = this->graph_geometry;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(414)
		int tmp9 = this->history;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(414)
		int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(414)
		::phoenix::geometry::Vertex tmp11 = tmp8->vertices->__get(tmp10).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(414)
		tmp11->color = tmp7;
	}
	else{
		HX_STACK_LINE(415)
		bool tmp7 = (_p < ((Float)0.2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(415)
		if ((tmp7)){
			HX_STACK_LINE(416)
			::phoenix::Color tmp8 = ::luxe::debug::ProfilerDebugView_obj::color_green;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(416)
			::phoenix::geometry::Geometry tmp9 = this->graph_geometry;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(416)
			int tmp10 = this->history;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(416)
			int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			::phoenix::geometry::Vertex tmp12 = tmp9->vertices->__get(tmp11).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(416)
			tmp12->color = tmp8;
		}
		else{
			HX_STACK_LINE(418)
			::phoenix::Color tmp8 = this->color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(418)
			::phoenix::geometry::Geometry tmp9 = this->graph_geometry;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(418)
			int tmp10 = this->history;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(418)
			int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(418)
			::phoenix::geometry::Vertex tmp12 = tmp9->vertices->__get(tmp11).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(418)
			tmp12->color = tmp8;
		}
	}
	HX_STACK_LINE(421)
	{
		HX_STACK_LINE(421)
		::phoenix::geometry::Geometry tmp7 = this->graph_geometry;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(421)
		int tmp8 = this->history;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(421)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(421)
		::phoenix::geometry::Vertex tmp10 = tmp7->vertices->__get(tmp9).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(421)
		::phoenix::Vector _this = tmp10->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(421)
		Float tmp11 = this->height2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(421)
		Float tmp12 = (((Float)1.0) - _p);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(421)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(421)
		int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(421)
		Float _y = tmp14;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(421)
		_this->y = _y;
		HX_STACK_LINE(421)
		bool tmp15 = _this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(421)
		if ((tmp15)){
			HX_STACK_LINE(421)
			_this->y;
		}
		else{
			HX_STACK_LINE(421)
			bool tmp16 = (_this->listen_y != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(421)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(421)
			if ((tmp16)){
				HX_STACK_LINE(421)
				bool tmp18 = _this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(421)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(421)
				tmp17 = !(tmp19);
			}
			else{
				HX_STACK_LINE(421)
				tmp17 = false;
			}
			HX_STACK_LINE(421)
			if ((tmp17)){
				HX_STACK_LINE(421)
				Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(421)
				_this->listen_y(tmp18);
			}
			HX_STACK_LINE(421)
			_this->y;
		}
	}
	HX_STACK_LINE(423)
	Float tmp7 = this->ping = _v;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(423)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerGraph_obj,set_ping,return )

Void ProfilerGraph_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerGraph","hide",0x79601c96,"luxe.debug._ProfilerDebugView.ProfilerGraph.hide","luxe/debug/ProfilerDebugView.hx",427,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(428)
		this->visible = false;
		HX_STACK_LINE(429)
		::phoenix::geometry::Geometry tmp = this->graph_geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(429)
		tmp->set_visible(false);
		HX_STACK_LINE(430)
		::phoenix::geometry::QuadGeometry tmp1 = this->graphbg_geometry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(430)
		if ((tmp2)){
			HX_STACK_LINE(430)
			::phoenix::geometry::QuadGeometry tmp3 = this->graphbg_geometry;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(430)
			tmp3->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerGraph_obj,hide,(void))

Void ProfilerGraph_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerGraph","show",0x80a4bcd1,"luxe.debug._ProfilerDebugView.ProfilerGraph.show","luxe/debug/ProfilerDebugView.hx",433,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(434)
		this->visible = true;
		HX_STACK_LINE(435)
		::phoenix::geometry::Geometry tmp = this->graph_geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(435)
		tmp->set_visible(true);
		HX_STACK_LINE(436)
		::phoenix::geometry::QuadGeometry tmp1 = this->graphbg_geometry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(436)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(436)
		if ((tmp2)){
			HX_STACK_LINE(436)
			::phoenix::geometry::QuadGeometry tmp3 = this->graphbg_geometry;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(436)
			tmp3->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProfilerGraph_obj,show,(void))

::phoenix::Vector ProfilerGraph_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.debug._ProfilerDebugView.ProfilerGraph","set_pos",0xea856be3,"luxe.debug._ProfilerDebugView.ProfilerGraph.set_pos","luxe/debug/ProfilerDebugView.hx",439,0xef83e3c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(441)
	::phoenix::geometry::QuadGeometry tmp = this->graphbg_geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	if ((tmp1)){
		HX_STACK_LINE(441)
		::phoenix::geometry::QuadGeometry tmp2 = this->graphbg_geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		::phoenix::Spatial tmp3 = tmp2->transform->local;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		::phoenix::Vector _this = tmp3->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			Float _x = _p->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(441)
			Float _y = _p->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(441)
			Float _z = _p->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(441)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(441)
			_this->ignore_listeners = true;
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				_this->x = _x;
				HX_STACK_LINE(441)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(441)
				if ((tmp4)){
					HX_STACK_LINE(441)
					_this->x;
				}
				else{
					HX_STACK_LINE(441)
					bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(441)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(441)
					if ((tmp5)){
						HX_STACK_LINE(441)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(441)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(441)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(441)
						tmp6 = false;
					}
					HX_STACK_LINE(441)
					if ((tmp6)){
						HX_STACK_LINE(441)
						Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(441)
						_this->listen_x(tmp7);
					}
					HX_STACK_LINE(441)
					_this->x;
				}
			}
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				_this->y = _y;
				HX_STACK_LINE(441)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(441)
				if ((tmp4)){
					HX_STACK_LINE(441)
					_this->y;
				}
				else{
					HX_STACK_LINE(441)
					bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(441)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(441)
					if ((tmp5)){
						HX_STACK_LINE(441)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(441)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(441)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(441)
						tmp6 = false;
					}
					HX_STACK_LINE(441)
					if ((tmp6)){
						HX_STACK_LINE(441)
						Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(441)
						_this->listen_y(tmp7);
					}
					HX_STACK_LINE(441)
					_this->y;
				}
			}
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				_this->z = _z;
				HX_STACK_LINE(441)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(441)
				if ((tmp4)){
					HX_STACK_LINE(441)
					_this->z;
				}
				else{
					HX_STACK_LINE(441)
					bool tmp5 = (_this->listen_z != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(441)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(441)
					if ((tmp5)){
						HX_STACK_LINE(441)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(441)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(441)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(441)
						tmp6 = false;
					}
					HX_STACK_LINE(441)
					if ((tmp6)){
						HX_STACK_LINE(441)
						Float tmp7 = _z;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(441)
						_this->listen_z(tmp7);
					}
					HX_STACK_LINE(441)
					_this->z;
				}
			}
			HX_STACK_LINE(441)
			_this->w = _p->w;
			HX_STACK_LINE(441)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(441)
			bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(441)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(441)
			if ((tmp4)){
				HX_STACK_LINE(441)
				bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(441)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(441)
				tmp5 = false;
			}
			HX_STACK_LINE(441)
			if ((tmp5)){
				HX_STACK_LINE(441)
				Float tmp6 = _this->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				_this->listen_x(tmp6);
			}
			HX_STACK_LINE(441)
			bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(441)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(441)
			if ((tmp6)){
				HX_STACK_LINE(441)
				bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(441)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(441)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(441)
				tmp7 = false;
			}
			HX_STACK_LINE(441)
			if ((tmp7)){
				HX_STACK_LINE(441)
				Float tmp8 = _this->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(441)
				_this->listen_y(tmp8);
			}
			HX_STACK_LINE(441)
			bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(441)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(441)
			if ((tmp8)){
				HX_STACK_LINE(441)
				bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(441)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(441)
				tmp9 = !(tmp11);
			}
			else{
				HX_STACK_LINE(441)
				tmp9 = false;
			}
			HX_STACK_LINE(441)
			if ((tmp9)){
				HX_STACK_LINE(441)
				Float tmp10 = _this->z;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(441)
				_this->listen_z(tmp10);
			}
			HX_STACK_LINE(441)
			_this;
		}
		HX_STACK_LINE(441)
		_this;
	}
	HX_STACK_LINE(442)
	{
		HX_STACK_LINE(442)
		::phoenix::geometry::Geometry tmp2 = this->graph_geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		::phoenix::Spatial tmp3 = tmp2->transform->local;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		::phoenix::Vector _this = tmp3->pos;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			Float _x = _p->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(442)
			Float _y = _p->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(442)
			Float _z = _p->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(442)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(442)
			_this->ignore_listeners = true;
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				_this->x = _x;
				HX_STACK_LINE(442)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(442)
				if ((tmp4)){
					HX_STACK_LINE(442)
					_this->x;
				}
				else{
					HX_STACK_LINE(442)
					bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(442)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(442)
					if ((tmp5)){
						HX_STACK_LINE(442)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(442)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(442)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(442)
						tmp6 = false;
					}
					HX_STACK_LINE(442)
					if ((tmp6)){
						HX_STACK_LINE(442)
						Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(442)
						_this->listen_x(tmp7);
					}
					HX_STACK_LINE(442)
					_this->x;
				}
			}
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				_this->y = _y;
				HX_STACK_LINE(442)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(442)
				if ((tmp4)){
					HX_STACK_LINE(442)
					_this->y;
				}
				else{
					HX_STACK_LINE(442)
					bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(442)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(442)
					if ((tmp5)){
						HX_STACK_LINE(442)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(442)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(442)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(442)
						tmp6 = false;
					}
					HX_STACK_LINE(442)
					if ((tmp6)){
						HX_STACK_LINE(442)
						Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(442)
						_this->listen_y(tmp7);
					}
					HX_STACK_LINE(442)
					_this->y;
				}
			}
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				_this->z = _z;
				HX_STACK_LINE(442)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(442)
				if ((tmp4)){
					HX_STACK_LINE(442)
					_this->z;
				}
				else{
					HX_STACK_LINE(442)
					bool tmp5 = (_this->listen_z != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(442)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(442)
					if ((tmp5)){
						HX_STACK_LINE(442)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(442)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(442)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(442)
						tmp6 = false;
					}
					HX_STACK_LINE(442)
					if ((tmp6)){
						HX_STACK_LINE(442)
						Float tmp7 = _z;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(442)
						_this->listen_z(tmp7);
					}
					HX_STACK_LINE(442)
					_this->z;
				}
			}
			HX_STACK_LINE(442)
			_this->w = _p->w;
			HX_STACK_LINE(442)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(442)
			bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(442)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(442)
			if ((tmp4)){
				HX_STACK_LINE(442)
				bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(442)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(442)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(442)
				tmp5 = false;
			}
			HX_STACK_LINE(442)
			if ((tmp5)){
				HX_STACK_LINE(442)
				Float tmp6 = _this->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(442)
				_this->listen_x(tmp6);
			}
			HX_STACK_LINE(442)
			bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(442)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(442)
			if ((tmp6)){
				HX_STACK_LINE(442)
				bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(442)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(442)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(442)
				tmp7 = false;
			}
			HX_STACK_LINE(442)
			if ((tmp7)){
				HX_STACK_LINE(442)
				Float tmp8 = _this->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(442)
				_this->listen_y(tmp8);
			}
			HX_STACK_LINE(442)
			bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(442)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(442)
			if ((tmp8)){
				HX_STACK_LINE(442)
				bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(442)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(442)
				tmp9 = !(tmp11);
			}
			else{
				HX_STACK_LINE(442)
				tmp9 = false;
			}
			HX_STACK_LINE(442)
			if ((tmp9)){
				HX_STACK_LINE(442)
				Float tmp10 = _this->z;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(442)
				_this->listen_z(tmp10);
			}
			HX_STACK_LINE(442)
			_this;
		}
		HX_STACK_LINE(442)
		_this;
	}
	HX_STACK_LINE(444)
	::phoenix::Vector tmp2 = this->pos = _p;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(444)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ProfilerGraph_obj,set_pos,return )


ProfilerGraph_obj::ProfilerGraph_obj()
{
}

void ProfilerGraph_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProfilerGraph);
	HX_MARK_MEMBER_NAME(graphbg_geometry,"graphbg_geometry");
	HX_MARK_MEMBER_NAME(graph_geometry,"graph_geometry");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(height2,"height2");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(ping,"ping");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(segment,"segment");
	HX_MARK_END_CLASS();
}

void ProfilerGraph_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphbg_geometry,"graphbg_geometry");
	HX_VISIT_MEMBER_NAME(graph_geometry,"graph_geometry");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(height2,"height2");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(ping,"ping");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(segment,"segment");
}

Dynamic ProfilerGraph_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"ping") ) { return ping; }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"height2") ) { return height2; }
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"segment") ) { return segment; }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_ping") ) { return set_ping_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graph_geometry") ) { return graph_geometry; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphbg_geometry") ) { return graphbg_geometry; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProfilerGraph_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< bool >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return set_max(inValue);max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ping") ) { if (inCallProp == hx::paccAlways) return set_ping(inValue);ping=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"height2") ) { height2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"segment") ) { segment=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graph_geometry") ) { graph_geometry=inValue.Cast< ::phoenix::geometry::Geometry >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphbg_geometry") ) { graphbg_geometry=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProfilerGraph_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ProfilerGraph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("graphbg_geometry","\x1e","\xfb","\x6f","\x47"));
	outFields->push(HX_HCSTRING("graph_geometry","\x03","\x91","\xcb","\xe6"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("height2","\x6b","\xe2","\x3a","\x00"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("ping","\x72","\xf2","\x57","\x4a"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("segment","\xb3","\xcf","\xce","\xa6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(ProfilerGraph_obj,graphbg_geometry),HX_HCSTRING("graphbg_geometry","\x1e","\xfb","\x6f","\x47")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(ProfilerGraph_obj,graph_geometry),HX_HCSTRING("graph_geometry","\x03","\x91","\xcb","\xe6")},
	{hx::fsString,(int)offsetof(ProfilerGraph_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsBool,(int)offsetof(ProfilerGraph_obj,bg),HX_HCSTRING("bg","\xc5","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,height2),HX_HCSTRING("height2","\x6b","\xe2","\x3a","\x00")},
	{hx::fsInt,(int)offsetof(ProfilerGraph_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsBool,(int)offsetof(ProfilerGraph_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(ProfilerGraph_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,ping),HX_HCSTRING("ping","\x72","\xf2","\x57","\x4a")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(ProfilerGraph_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsFloat,(int)offsetof(ProfilerGraph_obj,segment),HX_HCSTRING("segment","\xb3","\xcf","\xce","\xa6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("graphbg_geometry","\x1e","\xfb","\x6f","\x47"),
	HX_HCSTRING("graph_geometry","\x03","\x91","\xcb","\xe6"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("bg","\xc5","\x55","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("height2","\x6b","\xe2","\x3a","\x00"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("ping","\x72","\xf2","\x57","\x4a"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("segment","\xb3","\xcf","\xce","\xa6"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("set_ping","\x6f","\x07","\x70","\x78"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProfilerGraph_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProfilerGraph_obj::__mClass,"__mClass");
};

#endif

hx::Class ProfilerGraph_obj::__mClass;

void ProfilerGraph_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug._ProfilerDebugView.ProfilerGraph","\x1a","\x89","\xf3","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ProfilerGraph_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProfilerGraph_obj >;
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
