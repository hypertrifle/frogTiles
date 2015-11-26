#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
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
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace luxe{

Void Sprite_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.Sprite","new",0x6e38414f,"luxe.Sprite.new","luxe/Sprite.hx",14,0xf10014e0)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(19)
	this->flipy = false;
	HX_STACK_LINE(18)
	this->flipx = false;
	HX_STACK_LINE(17)
	this->centered = true;
	HX_STACK_LINE(27)
	::phoenix::Rectangle tmp = ::phoenix::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->set_uv(tmp);
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		bool tmp1 = (options == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		if ((tmp1)){
			HX_STACK_LINE(230)
			::String tmp2 = HX_HCSTRING(" ( Sprite requires non-null options","\x94","\xab","\x16","\x6a");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			::String tmp4 = (HX_HCSTRING("options was null","\xe0","\x49","\xa9","\x08") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(29)
			::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(32)
	bool tmp1 = (options->__Field(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(33)
		Dynamic tmp2 = options->__Field(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		this->set_centered(tmp2);
	}
	HX_STACK_LINE(37)
	bool tmp2 = (options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	if ((tmp2)){
		HX_STACK_LINE(38)
		Dynamic tmp3 = options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		this->set_flipx(tmp3);
	}
	HX_STACK_LINE(42)
	bool tmp3 = (options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	if ((tmp3)){
		HX_STACK_LINE(43)
		Dynamic tmp4 = options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		this->set_flipy(tmp4);
	}
	HX_STACK_LINE(47)
	Dynamic tmp4 = options;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Sprite.hx","\xb9","\xd7","\xbf","\xf7"),47,HX_HCSTRING("luxe.Sprite","\xdd","\xed","\xf3","\x22"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(47)
	super::__construct(tmp4,tmp5);
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(Dynamic options)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Sprite_obj::on_geometry_created( ){
{
		HX_STACK_FRAME("luxe.Sprite","on_geometry_created",0x10f5ed6a,"luxe.Sprite.on_geometry_created","luxe/Sprite.hx",51,0xf10014e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		this->super::on_geometry_created();
		HX_STACK_LINE(55)
		::phoenix::Texture tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(59)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(59)
				bool tmp4 = (tmp3->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(59)
				if ((tmp4)){
					HX_STACK_LINE(59)
					::phoenix::Texture tmp5 = this->texture;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(59)
					int tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(59)
					::phoenix::Texture tmp7 = this->texture;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(59)
					int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(59)
					::phoenix::Rectangle tmp9 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(59)
					tmp10->__FieldRef(HX_HCSTRING("uv","\x61","\x66","\x00","\x00")) = tmp9;
				}
				HX_STACK_LINE(59)
				Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(59)
				tmp2 = tmp5->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic );
			}
			HX_STACK_LINE(59)
			this->set_uv(tmp2);
			HX_STACK_LINE(62)
			::phoenix::Texture tmp3 = this->texture;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			int tmp4 = tmp3->resource_type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			bool tmp5 = (tmp4 == (int)5);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			if ((tmp5)){
				HX_STACK_LINE(63)
				this->set_flipy(true);
			}
		}
		HX_STACK_LINE(69)
		bool tmp2 = this->centered;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		this->set_centered(tmp4);
		HX_STACK_LINE(71)
		bool tmp5 = this->flipx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		this->set_flipx(tmp7);
		HX_STACK_LINE(72)
		bool tmp8 = this->flipy;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(72)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(72)
		this->set_flipy(tmp10);
	}
return null();
}


::phoenix::geometry::Geometry Sprite_obj::set_geometry( ::phoenix::geometry::Geometry _g){
	HX_STACK_FRAME("luxe.Sprite","set_geometry",0x6c4f5360,"luxe.Sprite.set_geometry","luxe/Sprite.hx",76,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_g,"_g")
	HX_STACK_LINE(78)
	this->geometry_quad = ((::phoenix::geometry::QuadGeometry)(_g));
	HX_STACK_LINE(79)
	::phoenix::geometry::Geometry tmp = _g;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::phoenix::geometry::Geometry tmp1 = this->super::set_geometry(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	return tmp1;
}


bool Sprite_obj::point_inside( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Sprite","point_inside",0xed3d407c,"luxe.Sprite.point_inside","luxe/Sprite.hx",87,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(89)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	if ((tmp1)){
		HX_STACK_LINE(89)
		return false;
	}
	HX_STACK_LINE(91)
	::luxe::utils::Utils tmp2 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	::phoenix::Vector tmp3 = _p;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	::phoenix::geometry::Geometry tmp4 = this->geometry;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	bool tmp5 = tmp2->geometry->point_in_geometry(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(91)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,point_inside,return )

bool Sprite_obj::point_inside_AABB( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Sprite","point_inside_AABB",0x3f350483,"luxe.Sprite.point_inside_AABB","luxe/Sprite.hx",96,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(98)
	::phoenix::Vector tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	if ((tmp1)){
		HX_STACK_LINE(98)
		return false;
	}
	HX_STACK_LINE(99)
	::phoenix::Vector tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	if ((tmp3)){
		HX_STACK_LINE(99)
		return false;
	}
	HX_STACK_LINE(102)
	::phoenix::Vector tmp4 = this->size;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	::phoenix::Vector tmp6 = this->get_scale();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(102)
	Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(102)
	Float _s_x = tmp8;		HX_STACK_VAR(_s_x,"_s_x");
	HX_STACK_LINE(103)
	::phoenix::Vector tmp9 = this->size;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(103)
	Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(103)
	::phoenix::Vector tmp11 = this->get_scale();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(103)
	Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(103)
	Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(103)
	Float _s_y = tmp13;		HX_STACK_VAR(_s_y,"_s_y");
	HX_STACK_LINE(105)
	bool tmp14 = this->centered;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(105)
	if ((tmp14)){
		HX_STACK_LINE(106)
		Float tmp15 = (Float(_s_x) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(106)
		Float _hx = tmp15;		HX_STACK_VAR(_hx,"_hx");
		HX_STACK_LINE(107)
		Float tmp16 = (Float(_s_y) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(107)
		Float _hy = tmp16;		HX_STACK_VAR(_hy,"_hy");
		HX_STACK_LINE(108)
		Float tmp17 = _p->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(108)
		::phoenix::Vector tmp18 = this->get_pos();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(108)
		Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(108)
		Float tmp20 = _hx;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(108)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(108)
		bool tmp22 = (tmp17 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(108)
		if ((tmp22)){
			HX_STACK_LINE(108)
			return false;
		}
		HX_STACK_LINE(109)
		Float tmp23 = _p->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(109)
		::phoenix::Vector tmp24 = this->get_pos();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(109)
		Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(109)
		Float tmp26 = _hy;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(109)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(109)
		bool tmp28 = (tmp23 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(109)
		if ((tmp28)){
			HX_STACK_LINE(109)
			return false;
		}
		HX_STACK_LINE(110)
		Float tmp29 = _p->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(110)
		::phoenix::Vector tmp30 = this->get_pos();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(110)
		Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(110)
		Float tmp32 = _s_x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(110)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(110)
		Float tmp34 = _hx;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(110)
		Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(110)
		bool tmp36 = (tmp29 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(110)
		if ((tmp36)){
			HX_STACK_LINE(110)
			return false;
		}
		HX_STACK_LINE(111)
		Float tmp37 = _p->y;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(111)
		::phoenix::Vector tmp38 = this->get_pos();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(111)
		Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(111)
		Float tmp40 = _s_y;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(111)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(111)
		Float tmp42 = _hy;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(111)
		Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(111)
		bool tmp44 = (tmp37 > tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(111)
		if ((tmp44)){
			HX_STACK_LINE(111)
			return false;
		}
	}
	else{
		HX_STACK_LINE(113)
		Float tmp15 = _p->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(113)
		::phoenix::Vector tmp16 = this->get_pos();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(113)
		Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(113)
		bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(113)
		if ((tmp18)){
			HX_STACK_LINE(113)
			return false;
		}
		HX_STACK_LINE(114)
		Float tmp19 = _p->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(114)
		::phoenix::Vector tmp20 = this->get_pos();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(114)
		Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(114)
		bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(114)
		if ((tmp22)){
			HX_STACK_LINE(114)
			return false;
		}
		HX_STACK_LINE(115)
		Float tmp23 = _p->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(115)
		::phoenix::Vector tmp24 = this->get_pos();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(115)
		Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(115)
		Float tmp26 = _s_x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(115)
		Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(115)
		bool tmp28 = (tmp23 > tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(115)
		if ((tmp28)){
			HX_STACK_LINE(115)
			return false;
		}
		HX_STACK_LINE(116)
		Float tmp29 = _p->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(116)
		::phoenix::Vector tmp30 = this->get_pos();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(116)
		Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(116)
		Float tmp32 = _s_y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(116)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(116)
		bool tmp34 = (tmp29 > tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(116)
		if ((tmp34)){
			HX_STACK_LINE(116)
			return false;
		}
	}
	HX_STACK_LINE(119)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,point_inside_AABB,return )

::phoenix::Rectangle Sprite_obj::set_uv( ::phoenix::Rectangle _uv){
	HX_STACK_FRAME("luxe.Sprite","set_uv",0x6df3e08f,"luxe.Sprite.set_uv","luxe/Sprite.hx",128,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_uv,"_uv")
	HX_STACK_LINE(130)
	::phoenix::geometry::QuadGeometry tmp = this->geometry_quad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	if ((tmp1)){
		HX_STACK_LINE(131)
		::phoenix::geometry::QuadGeometry tmp2 = this->geometry_quad;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		::phoenix::geometry::QuadGeometry _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::phoenix::Texture tmp3 = _this->state->texture;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			if ((tmp4)){
				HX_STACK_LINE(131)
				::String tmp5 = HX_HCSTRING(" ( QuadGeometry; Calling UV on a geometry with null texture.","\x4d","\xfb","\xd1","\xd3");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(131)
				::String tmp6 = (tmp5 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(131)
				::String tmp7 = (HX_HCSTRING("texture was null","\xc3","\x9c","\xa8","\x99") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(131)
				::luxe::DebugError tmp8 = ::luxe::DebugError_obj::null_assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(131)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(131)
		Float tmp3 = _uv->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		::phoenix::Texture tmp4 = _this->state->texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		int tmp5 = tmp4->width_actual;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		Float tmp6 = (Float(tmp3) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		Float tlx = tmp6;		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(131)
		Float tmp7 = _uv->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		::phoenix::Texture tmp8 = _this->state->texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		int tmp9 = tmp8->height_actual;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(131)
		Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(131)
		Float tly = tmp10;		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(131)
		Float tmp11 = _uv->w;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(131)
		::phoenix::Texture tmp12 = _this->state->texture;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(131)
		int tmp13 = tmp12->width_actual;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(131)
		Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(131)
		Float szx = tmp14;		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(131)
		Float tmp15 = _uv->h;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(131)
		::phoenix::Texture tmp16 = _this->state->texture;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(131)
		int tmp17 = tmp16->height_actual;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(131)
		Float tmp18 = (Float(tmp15) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(131)
		Float szy = tmp18;		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			int tmp19 = _this->vertices->length;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(131)
			bool tmp20 = (tmp19 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(131)
			if ((tmp20)){
				HX_STACK_LINE(131)
				Dynamic();
			}
			else{
				HX_STACK_LINE(131)
				Float sz_x = szx;		HX_STACK_VAR(sz_x,"sz_x");
				HX_STACK_LINE(131)
				Float sz_y = szy;		HX_STACK_VAR(sz_y,"sz_y");
				HX_STACK_LINE(131)
				Float tl_x = tlx;		HX_STACK_VAR(tl_x,"tl_x");
				HX_STACK_LINE(131)
				Float tl_y = tly;		HX_STACK_VAR(tl_y,"tl_y");
				HX_STACK_LINE(131)
				_this->_uv_x = tl_x;
				HX_STACK_LINE(131)
				_this->_uv_y = tl_y;
				HX_STACK_LINE(131)
				_this->_uv_w = sz_x;
				HX_STACK_LINE(131)
				_this->_uv_h = sz_y;
				HX_STACK_LINE(131)
				Float tmp21 = (tl_x + sz_x);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(131)
				Float tr_x = tmp21;		HX_STACK_VAR(tr_x,"tr_x");
				HX_STACK_LINE(131)
				Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
				HX_STACK_LINE(131)
				Float tmp22 = (tl_x + sz_x);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(131)
				Float br_x = tmp22;		HX_STACK_VAR(br_x,"br_x");
				HX_STACK_LINE(131)
				Float tmp23 = (tl_y + sz_y);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(131)
				Float br_y = tmp23;		HX_STACK_VAR(br_y,"br_y");
				HX_STACK_LINE(131)
				Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
				HX_STACK_LINE(131)
				Float tmp24 = (tl_y + sz_y);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(131)
				Float bl_y = tmp24;		HX_STACK_VAR(bl_y,"bl_y");
				HX_STACK_LINE(131)
				Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
				HX_STACK_LINE(131)
				Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
				HX_STACK_LINE(131)
				Float tmp25 = (Float(_this->uv_angle) / Float((int)90));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(131)
				int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(131)
				int rotations = tmp26;		HX_STACK_VAR(rotations,"rotations");
				HX_STACK_LINE(131)
				int tmp27 = rotations;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(131)
				Float tmp28 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(131)
				int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(131)
				int tmp30 = ((int)4 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(131)
				int tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(131)
				rotations = tmp31;
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(131)
					while((true)){
						HX_STACK_LINE(131)
						bool tmp32 = (_g < rotations);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(131)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(131)
						if ((tmp33)){
							HX_STACK_LINE(131)
							break;
						}
						HX_STACK_LINE(131)
						int tmp34 = (_g)++;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(131)
						int r = tmp34;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(131)
						{
							HX_STACK_LINE(131)
							tmp_x = tl_x;
							HX_STACK_LINE(131)
							tl_x = bl_x;
							HX_STACK_LINE(131)
							bl_x = br_x;
							HX_STACK_LINE(131)
							br_x = tr_x;
							HX_STACK_LINE(131)
							tr_x = tmp_x;
							HX_STACK_LINE(131)
							tmp_y = tl_y;
							HX_STACK_LINE(131)
							tl_y = bl_y;
							HX_STACK_LINE(131)
							bl_y = br_y;
							HX_STACK_LINE(131)
							br_y = tr_y;
							HX_STACK_LINE(131)
							tr_y = tmp_y;
						}
					}
				}
				HX_STACK_LINE(131)
				bool tmp32 = _this->flipy;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(131)
				if ((tmp32)){
					HX_STACK_LINE(131)
					tmp_y = bl_y;
					HX_STACK_LINE(131)
					bl_y = tl_y;
					HX_STACK_LINE(131)
					tl_y = tmp_y;
					HX_STACK_LINE(131)
					tmp_x = bl_x;
					HX_STACK_LINE(131)
					bl_x = tl_x;
					HX_STACK_LINE(131)
					tl_x = tmp_x;
					HX_STACK_LINE(131)
					tmp_y = br_y;
					HX_STACK_LINE(131)
					br_y = tr_y;
					HX_STACK_LINE(131)
					tr_y = tmp_y;
					HX_STACK_LINE(131)
					tmp_x = br_x;
					HX_STACK_LINE(131)
					br_x = tr_x;
					HX_STACK_LINE(131)
					tr_x = tmp_x;
				}
				HX_STACK_LINE(131)
				bool tmp33 = _this->flipx;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(131)
				if ((tmp33)){
					HX_STACK_LINE(131)
					tmp_x = tr_x;
					HX_STACK_LINE(131)
					tr_x = tl_x;
					HX_STACK_LINE(131)
					tl_x = tmp_x;
					HX_STACK_LINE(131)
					tmp_y = tr_y;
					HX_STACK_LINE(131)
					tr_y = tl_y;
					HX_STACK_LINE(131)
					tl_y = tmp_y;
					HX_STACK_LINE(131)
					tmp_x = br_x;
					HX_STACK_LINE(131)
					br_x = bl_x;
					HX_STACK_LINE(131)
					bl_x = tmp_x;
					HX_STACK_LINE(131)
					tmp_y = br_y;
					HX_STACK_LINE(131)
					br_y = bl_y;
					HX_STACK_LINE(131)
					bl_y = tmp_y;
				}
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					::phoenix::geometry::Vertex tmp34 = _this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord tmp35 = tmp34->uv->uv0;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(131)
					_this1->u = tl_x;
					HX_STACK_LINE(131)
					_this1->v = tl_y;
					HX_STACK_LINE(131)
					_this1;
				}
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					::phoenix::geometry::Vertex tmp34 = _this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord tmp35 = tmp34->uv->uv0;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(131)
					_this1->u = tr_x;
					HX_STACK_LINE(131)
					_this1->v = tr_y;
					HX_STACK_LINE(131)
					_this1;
				}
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					::phoenix::geometry::Vertex tmp34 = _this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord tmp35 = tmp34->uv->uv0;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(131)
					_this1->u = br_x;
					HX_STACK_LINE(131)
					_this1->v = br_y;
					HX_STACK_LINE(131)
					_this1;
				}
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					::phoenix::geometry::Vertex tmp34 = _this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord tmp35 = tmp34->uv->uv0;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(131)
					_this1->u = bl_x;
					HX_STACK_LINE(131)
					_this1->v = bl_y;
					HX_STACK_LINE(131)
					_this1;
				}
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					::phoenix::geometry::Vertex tmp34 = _this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord tmp35 = tmp34->uv->uv0;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(131)
					_this1->u = tl_x;
					HX_STACK_LINE(131)
					_this1->v = tl_y;
					HX_STACK_LINE(131)
					_this1;
				}
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					::phoenix::geometry::Vertex tmp34 = _this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord tmp35 = tmp34->uv->uv0;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(131)
					::phoenix::geometry::TextureCoord _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(131)
					_this1->u = br_x;
					HX_STACK_LINE(131)
					_this1->v = br_y;
					HX_STACK_LINE(131)
					_this1;
				}
				HX_STACK_LINE(131)
				_this->set_dirty(true);
			}
		}
	}
	HX_STACK_LINE(134)
	this->uv = _uv;
	HX_STACK_LINE(136)
	::phoenix::Rectangle tmp2 = this->uv;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	Dynamic tmp3 = this->_uv_change_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	::phoenix::Rectangle_obj::listen(tmp2,tmp3);
	HX_STACK_LINE(138)
	::phoenix::Rectangle tmp4 = this->uv;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(138)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_uv,return )

bool Sprite_obj::set_flipy( bool _v){
	HX_STACK_FRAME("luxe.Sprite","set_flipy",0x50eedbbe,"luxe.Sprite.set_flipy","luxe/Sprite.hx",143,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(145)
	bool tmp = _v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	bool tmp1 = this->flipy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	if ((tmp2)){
		HX_STACK_LINE(146)
		bool tmp3 = this->flipy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		return tmp3;
	}
	HX_STACK_LINE(149)
	::phoenix::geometry::QuadGeometry tmp3 = this->geometry_quad;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(149)
	if ((tmp4)){
		HX_STACK_LINE(150)
		::phoenix::geometry::QuadGeometry tmp5 = this->geometry_quad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		bool tmp6 = _v;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		tmp5->set_flipy(tmp6);
	}
	HX_STACK_LINE(153)
	bool tmp5 = this->flipy = _v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(153)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_flipy,return )

bool Sprite_obj::set_flipx( bool _v){
	HX_STACK_FRAME("luxe.Sprite","set_flipx",0x50eedbbd,"luxe.Sprite.set_flipx","luxe/Sprite.hx",157,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(159)
	bool tmp = _v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	bool tmp1 = this->flipx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	if ((tmp2)){
		HX_STACK_LINE(160)
		bool tmp3 = this->flipx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		return tmp3;
	}
	HX_STACK_LINE(163)
	::phoenix::geometry::QuadGeometry tmp3 = this->geometry_quad;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(163)
	if ((tmp4)){
		HX_STACK_LINE(164)
		::phoenix::geometry::QuadGeometry tmp5 = this->geometry_quad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		bool tmp6 = _v;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		tmp5->set_flipx(tmp6);
	}
	HX_STACK_LINE(167)
	bool tmp5 = this->flipx = _v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_flipx,return )

::phoenix::Vector Sprite_obj::set_size( ::phoenix::Vector _v){
	HX_STACK_FRAME("luxe.Sprite","set_size",0xb9bc826f,"luxe.Sprite.set_size","luxe/Sprite.hx",173,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(177)
	::phoenix::geometry::QuadGeometry tmp = this->geometry_quad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	if ((tmp1)){
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(_v->x,_v->y,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			::phoenix::Vector quad = tmp2;		HX_STACK_VAR(quad,"quad");
			HX_STACK_LINE(179)
			::phoenix::geometry::QuadGeometry tmp3 = this->geometry_quad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(179)
			Float tmp4 = quad->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(179)
			Float tmp5 = quad->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			tmp3->resize_xy(tmp4,tmp5);
		}
		HX_STACK_LINE(182)
		bool tmp2 = this->_has_custom_origin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		if ((tmp3)){
			HX_STACK_LINE(183)
			bool tmp4 = this->centered;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			if ((tmp4)){
				HX_STACK_LINE(185)
				::phoenix::Vector tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(185)
					::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(_v->x,_v->y,_v->z,_v->w);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(185)
					::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(185)
					bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(185)
					if ((tmp7)){
						HX_STACK_LINE(185)
						Float tmp8 = (Float(_this->x) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(185)
						Float _x = tmp8;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(185)
						Float tmp9 = (Float(_this->y) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(185)
						Float _y = tmp9;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(185)
						Float tmp10 = (Float(_this->z) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(185)
						Float _z = tmp10;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(185)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(185)
						_this->ignore_listeners = true;
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							_this->x = _x;
							HX_STACK_LINE(185)
							bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(185)
							if ((tmp11)){
								HX_STACK_LINE(185)
								_this->x;
							}
							else{
								HX_STACK_LINE(185)
								bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(185)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								if ((tmp12)){
									HX_STACK_LINE(185)
									bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									tmp13 = !(tmp15);
								}
								else{
									HX_STACK_LINE(185)
									tmp13 = false;
								}
								HX_STACK_LINE(185)
								if ((tmp13)){
									HX_STACK_LINE(185)
									Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									_this->listen_x(tmp14);
								}
								HX_STACK_LINE(185)
								_this->x;
							}
						}
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							_this->y = _y;
							HX_STACK_LINE(185)
							bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(185)
							if ((tmp11)){
								HX_STACK_LINE(185)
								_this->y;
							}
							else{
								HX_STACK_LINE(185)
								bool tmp12 = (_this->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(185)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								if ((tmp12)){
									HX_STACK_LINE(185)
									bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									tmp13 = !(tmp15);
								}
								else{
									HX_STACK_LINE(185)
									tmp13 = false;
								}
								HX_STACK_LINE(185)
								if ((tmp13)){
									HX_STACK_LINE(185)
									Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									_this->listen_y(tmp14);
								}
								HX_STACK_LINE(185)
								_this->y;
							}
						}
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							_this->z = _z;
							HX_STACK_LINE(185)
							bool tmp11 = _this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(185)
							if ((tmp11)){
								HX_STACK_LINE(185)
								_this->z;
							}
							else{
								HX_STACK_LINE(185)
								bool tmp12 = (_this->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(185)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								if ((tmp12)){
									HX_STACK_LINE(185)
									bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									tmp13 = !(tmp15);
								}
								else{
									HX_STACK_LINE(185)
									tmp13 = false;
								}
								HX_STACK_LINE(185)
								if ((tmp13)){
									HX_STACK_LINE(185)
									Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									_this->listen_z(tmp14);
								}
								HX_STACK_LINE(185)
								_this->z;
							}
						}
						HX_STACK_LINE(185)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(185)
						bool tmp11 = (_this->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							tmp12 = !(tmp14);
						}
						else{
							HX_STACK_LINE(185)
							tmp12 = false;
						}
						HX_STACK_LINE(185)
						if ((tmp12)){
							HX_STACK_LINE(185)
							Float tmp13 = _this->x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->listen_x(tmp13);
						}
						HX_STACK_LINE(185)
						bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(185)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(185)
						if ((tmp13)){
							HX_STACK_LINE(185)
							bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(185)
							tmp14 = !(tmp16);
						}
						else{
							HX_STACK_LINE(185)
							tmp14 = false;
						}
						HX_STACK_LINE(185)
						if ((tmp14)){
							HX_STACK_LINE(185)
							Float tmp15 = _this->y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							_this->listen_y(tmp15);
						}
						HX_STACK_LINE(185)
						bool tmp15 = (_this->listen_z != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(185)
						if ((tmp15)){
							HX_STACK_LINE(185)
							bool tmp17 = _this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(185)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(185)
							tmp16 = !(tmp18);
						}
						else{
							HX_STACK_LINE(185)
							tmp16 = false;
						}
						HX_STACK_LINE(185)
						if ((tmp16)){
							HX_STACK_LINE(185)
							Float tmp17 = _this->z;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(185)
							_this->listen_z(tmp17);
						}
						HX_STACK_LINE(185)
						_this;
					}
					else{
						HX_STACK_LINE(185)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(185)
						_this->ignore_listeners = true;
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							_this->x = (int)0;
							HX_STACK_LINE(185)
							bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(185)
							if ((tmp8)){
								HX_STACK_LINE(185)
								_this->x;
							}
							else{
								HX_STACK_LINE(185)
								bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(185)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(185)
								if ((tmp9)){
									HX_STACK_LINE(185)
									bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(185)
									bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(185)
									tmp10 = !(tmp12);
								}
								else{
									HX_STACK_LINE(185)
									tmp10 = false;
								}
								HX_STACK_LINE(185)
								if ((tmp10)){
									HX_STACK_LINE(185)
									_this->listen_x((int)0);
								}
								HX_STACK_LINE(185)
								_this->x;
							}
						}
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							_this->y = (int)0;
							HX_STACK_LINE(185)
							bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(185)
							if ((tmp8)){
								HX_STACK_LINE(185)
								_this->y;
							}
							else{
								HX_STACK_LINE(185)
								bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(185)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(185)
								if ((tmp9)){
									HX_STACK_LINE(185)
									bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(185)
									bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(185)
									tmp10 = !(tmp12);
								}
								else{
									HX_STACK_LINE(185)
									tmp10 = false;
								}
								HX_STACK_LINE(185)
								if ((tmp10)){
									HX_STACK_LINE(185)
									_this->listen_y((int)0);
								}
								HX_STACK_LINE(185)
								_this->y;
							}
						}
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							_this->z = (int)0;
							HX_STACK_LINE(185)
							bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(185)
							if ((tmp8)){
								HX_STACK_LINE(185)
								_this->z;
							}
							else{
								HX_STACK_LINE(185)
								bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(185)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(185)
								if ((tmp9)){
									HX_STACK_LINE(185)
									bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(185)
									bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(185)
									tmp10 = !(tmp12);
								}
								else{
									HX_STACK_LINE(185)
									tmp10 = false;
								}
								HX_STACK_LINE(185)
								if ((tmp10)){
									HX_STACK_LINE(185)
									_this->listen_z((int)0);
								}
								HX_STACK_LINE(185)
								_this->z;
							}
						}
						HX_STACK_LINE(185)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(185)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(185)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(185)
						if ((tmp8)){
							HX_STACK_LINE(185)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(185)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(185)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(185)
							tmp9 = false;
						}
						HX_STACK_LINE(185)
						if ((tmp9)){
							HX_STACK_LINE(185)
							Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(185)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(185)
						bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(185)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp10)){
							HX_STACK_LINE(185)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(185)
							tmp11 = false;
						}
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							_this->listen_y(tmp12);
						}
						HX_STACK_LINE(185)
						bool tmp12 = (_this->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(185)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(185)
						if ((tmp12)){
							HX_STACK_LINE(185)
							bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							tmp13 = !(tmp15);
						}
						else{
							HX_STACK_LINE(185)
							tmp13 = false;
						}
						HX_STACK_LINE(185)
						if ((tmp13)){
							HX_STACK_LINE(185)
							Float tmp14 = _this->z;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->listen_z(tmp14);
						}
						HX_STACK_LINE(185)
						_this;
					}
					HX_STACK_LINE(185)
					tmp5 = _this;
				}
				HX_STACK_LINE(185)
				this->set_origin(tmp5);
			}
		}
	}
	HX_STACK_LINE(192)
	::phoenix::Vector tmp2 = _v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	::phoenix::Vector tmp3 = this->super::set_size(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(192)
	return tmp3;
}


bool Sprite_obj::set_centered( bool _c){
	HX_STACK_FRAME("luxe.Sprite","set_centered",0x28f6ae22,"luxe.Sprite.set_centered","luxe/Sprite.hx",198,0xf10014e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(201)
	::phoenix::Vector tmp = this->size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	if ((tmp1)){
		HX_STACK_LINE(202)
		bool tmp2 = _c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		if ((tmp2)){
			HX_STACK_LINE(203)
			::phoenix::Vector tmp3 = this->size;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			::phoenix::Vector tmp6 = this->size;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(203)
			Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			::phoenix::Vector tmp9 = ::phoenix::Vector_obj::__new(tmp5,tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			this->set_origin(tmp9);
		}
		else{
			HX_STACK_LINE(205)
			::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(205)
			this->set_origin(tmp3);
		}
	}
	HX_STACK_LINE(209)
	bool tmp2 = this->centered = _c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_centered,return )

Void Sprite_obj::_uv_change( Float _v){
{
		HX_STACK_FRAME("luxe.Sprite","_uv_change",0x95c3d180,"luxe.Sprite._uv_change","luxe/Sprite.hx",215,0xf10014e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(215)
		::phoenix::Rectangle tmp = this->uv;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		this->set_uv(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,_uv_change,(void))

Void Sprite_obj::init( ){
{
		HX_STACK_FRAME("luxe.Sprite","init",0xffb99b41,"luxe.Sprite.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Sprite_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Sprite","ondestroy",0x56420bea,"luxe.Sprite.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(centered,"centered");
	HX_MARK_MEMBER_NAME(flipx,"flipx");
	HX_MARK_MEMBER_NAME(flipy,"flipy");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(geometry_quad,"geometry_quad");
	::luxe::Visual_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(centered,"centered");
	HX_VISIT_MEMBER_NAME(flipx,"flipx");
	HX_VISIT_MEMBER_NAME(flipy,"flipy");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(geometry_quad,"geometry_quad");
	::luxe::Visual_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { return flipx; }
		if (HX_FIELD_EQ(inName,"flipy") ) { return flipy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_uv") ) { return set_uv_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centered") ) { return centered; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_flipy") ) { return set_flipy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipx") ) { return set_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_uv_change") ) { return _uv_change_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_geometry") ) { return set_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
		if (HX_FIELD_EQ(inName,"set_centered") ) { return set_centered_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"geometry_quad") ) { return geometry_quad; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"point_inside_AABB") ) { return point_inside_AABB_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"on_geometry_created") ) { return on_geometry_created_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { if (inCallProp == hx::paccAlways) return set_uv(inValue);uv=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { if (inCallProp == hx::paccAlways) return set_flipx(inValue);flipx=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipy") ) { if (inCallProp == hx::paccAlways) return set_flipy(inValue);flipy=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"centered") ) { if (inCallProp == hx::paccAlways) return set_centered(inValue);centered=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"geometry_quad") ) { geometry_quad=inValue.Cast< ::phoenix::geometry::QuadGeometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f"));
	outFields->push(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("geometry_quad","\xb4","\x4c","\x11","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sprite_obj,centered),HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f")},
	{hx::fsBool,(int)offsetof(Sprite_obj,flipx),HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(Sprite_obj,flipy),HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Sprite_obj,uv),HX_HCSTRING("uv","\x61","\x66","\x00","\x00")},
	{hx::fsObject /*::phoenix::geometry::QuadGeometry*/ ,(int)offsetof(Sprite_obj,geometry_quad),HX_HCSTRING("geometry_quad","\xb4","\x4c","\x11","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f"),
	HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"),
	HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"),
	HX_HCSTRING("uv","\x61","\x66","\x00","\x00"),
	HX_HCSTRING("geometry_quad","\xb4","\x4c","\x11","\xc9"),
	HX_HCSTRING("on_geometry_created","\x7b","\x6e","\x90","\xad"),
	HX_HCSTRING("set_geometry","\x2f","\xda","\xbb","\x9c"),
	HX_HCSTRING("point_inside","\x4b","\xc7","\xa9","\x1d"),
	HX_HCSTRING("point_inside_AABB","\x54","\x6f","\x82","\x9d"),
	HX_HCSTRING("set_uv","\x1e","\x52","\x78","\x6f"),
	HX_HCSTRING("set_flipy","\x8f","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_flipx","\x8e","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_centered","\xf1","\x34","\x63","\x59"),
	HX_HCSTRING("_uv_change","\x8f","\xb6","\x21","\x47"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Sprite","\xdd","\xed","\xf3","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Sprite_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
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
