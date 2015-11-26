#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
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
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_PlaneGeometry
#include <phoenix/geometry/PlaneGeometry.h>
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
namespace phoenix{
namespace geometry{

Void PlaneGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","new",0xc7be5cc3,"phoenix.geometry.PlaneGeometry.new","phoenix/geometry/PlaneGeometry.hx",12,0xc99ce3ed)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(19)
	this->is_set = false;
	HX_STACK_LINE(15)
	this->flipy = false;
	HX_STACK_LINE(14)
	this->flipx = false;
	HX_STACK_LINE(23)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	super::__construct(tmp);
	HX_STACK_LINE(25)
	bool tmp1 = (options == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(25)
		return null();
	}
	HX_STACK_LINE(28)
	bool tmp2 = (options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	if ((tmp2)){
		HX_STACK_LINE(28)
		Dynamic tmp3 = options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		this->set_flipx(tmp3);
	}
	HX_STACK_LINE(29)
	bool tmp3 = (options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	if ((tmp3)){
		HX_STACK_LINE(29)
		Dynamic tmp4 = options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		this->set_flipy(tmp4);
	}
	HX_STACK_LINE(32)
	::phoenix::Rectangle tmp4 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	this->_uv_cache = tmp4;
	HX_STACK_LINE(35)
	::phoenix::Rectangle tmp5 = ::phoenix::Rectangle_obj::__new(options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),options->__Field(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"), hx::paccDynamic ),options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic ),options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(35)
	Dynamic tmp6 = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	this->set(tmp5,tmp6);
	HX_STACK_LINE(37)
	bool tmp7 = (options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	if ((tmp7)){
		HX_STACK_LINE(37)
		Dynamic tmp8 = options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		this->set_visible(tmp8);
	}
	HX_STACK_LINE(38)
	bool tmp8 = (options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(38)
	if ((tmp8)){
		HX_STACK_LINE(38)
		this->immediate = options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );
	}
}
;
	return null();
}

//PlaneGeometry_obj::~PlaneGeometry_obj() { }

Dynamic PlaneGeometry_obj::__CreateEmpty() { return  new PlaneGeometry_obj; }
hx::ObjectPtr< PlaneGeometry_obj > PlaneGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< PlaneGeometry_obj > _result_ = new PlaneGeometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic PlaneGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlaneGeometry_obj > _result_ = new PlaneGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlaneGeometry_obj::uv( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","uv",0x695cb75e,"phoenix.geometry.PlaneGeometry.uv","phoenix/geometry/PlaneGeometry.hx",42,0xc99ce3ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(44)
		::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		if ((tmp2)){
			HX_STACK_LINE(45)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("PlaneGeometry.hx","\x70","\x16","\x7f","\xef"),45,HX_HCSTRING("phoenix.geometry.PlaneGeometry","\x51","\x3f","\x02","\x9e"),HX_HCSTRING("uv","\x61","\x66","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			::haxe::Log_obj::trace(HX_HCSTRING("Warning : calling UV on a geometry with null texture.","\x79","\x95","\xfd","\xb5"),tmp3);
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(49)
		Float tmp3 = _rect->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		int tmp5 = tmp4->texture->width_actual;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		Float tmp6 = (Float(tmp3) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		Float tlx = tmp6;		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(50)
		Float tmp7 = _rect->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		::phoenix::geometry::GeometryState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		int tmp9 = tmp8->texture->height_actual;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(50)
		Float tly = tmp10;		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(51)
		Float tmp11 = _rect->w;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(51)
		::phoenix::geometry::GeometryState tmp12 = this->state;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		int tmp13 = tmp12->texture->width_actual;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		Float szx = tmp14;		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(52)
		Float tmp15 = _rect->h;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(52)
		::phoenix::geometry::GeometryState tmp16 = this->state;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(52)
		int tmp17 = tmp16->texture->height_actual;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(52)
		Float tmp18 = (Float(tmp15) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(52)
		Float szy = tmp18;		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(54)
		::phoenix::Rectangle tmp19 = ::phoenix::Rectangle_obj::__new(tlx,tly,szx,szy);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(54)
		this->uv_space(tmp19);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,uv,(void))

Void PlaneGeometry_obj::uv_space( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","uv_space",0x706f65e5,"phoenix.geometry.PlaneGeometry.uv_space","phoenix/geometry/PlaneGeometry.hx",58,0xc99ce3ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(61)
		Float sz_x = _rect->w;		HX_STACK_VAR(sz_x,"sz_x");
		HX_STACK_LINE(62)
		Float sz_y = _rect->h;		HX_STACK_VAR(sz_y,"sz_y");
		HX_STACK_LINE(65)
		Float tl_x = _rect->x;		HX_STACK_VAR(tl_x,"tl_x");
		HX_STACK_LINE(66)
		Float tl_y = _rect->y;		HX_STACK_VAR(tl_y,"tl_y");
		HX_STACK_LINE(69)
		::phoenix::Rectangle tmp = this->_uv_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		Float tmp1 = tl_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		Float tmp2 = tl_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		Float tmp3 = sz_x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		Float tmp4 = sz_y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		tmp->set(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(72)
		Float tmp5 = (tl_x + sz_x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		Float tr_x = tmp5;		HX_STACK_VAR(tr_x,"tr_x");
		HX_STACK_LINE(73)
		Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
		HX_STACK_LINE(75)
		Float tmp6 = (tl_x + sz_x);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		Float br_x = tmp6;		HX_STACK_VAR(br_x,"br_x");
		HX_STACK_LINE(76)
		Float tmp7 = (tl_y + sz_y);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		Float br_y = tmp7;		HX_STACK_VAR(br_y,"br_y");
		HX_STACK_LINE(78)
		Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
		HX_STACK_LINE(79)
		Float tmp8 = (tl_y + sz_y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		Float bl_y = tmp8;		HX_STACK_VAR(bl_y,"bl_y");
		HX_STACK_LINE(81)
		Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
		HX_STACK_LINE(82)
		Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
		HX_STACK_LINE(85)
		bool tmp9 = this->flipy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		if ((tmp9)){
			HX_STACK_LINE(88)
			tmp_y = bl_y;
			HX_STACK_LINE(89)
			bl_y = tl_y;
			HX_STACK_LINE(90)
			tl_y = tmp_y;
			HX_STACK_LINE(93)
			tmp_y = br_y;
			HX_STACK_LINE(94)
			br_y = tr_y;
			HX_STACK_LINE(95)
			tr_y = tmp_y;
		}
		HX_STACK_LINE(100)
		bool tmp10 = this->flipx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		if ((tmp10)){
			HX_STACK_LINE(103)
			tmp_x = tr_x;
			HX_STACK_LINE(104)
			tr_x = tl_x;
			HX_STACK_LINE(105)
			tl_x = tmp_x;
			HX_STACK_LINE(108)
			tmp_x = br_x;
			HX_STACK_LINE(109)
			br_x = bl_x;
			HX_STACK_LINE(110)
			bl_x = tmp_x;
		}
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(114)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(114)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(114)
			_this->u = tl_x;
			HX_STACK_LINE(114)
			_this->v = tl_y;
			HX_STACK_LINE(114)
			_this;
		}
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(115)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(115)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(115)
			_this->u = tr_x;
			HX_STACK_LINE(115)
			_this->v = tr_y;
			HX_STACK_LINE(115)
			_this;
		}
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(116)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(116)
			_this->u = br_x;
			HX_STACK_LINE(116)
			_this->v = br_y;
			HX_STACK_LINE(116)
			_this;
		}
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(118)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(118)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(118)
			_this->u = bl_x;
			HX_STACK_LINE(118)
			_this->v = bl_y;
			HX_STACK_LINE(118)
			_this;
		}
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(119)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(119)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(119)
			_this->u = tl_x;
			HX_STACK_LINE(119)
			_this->v = tl_y;
			HX_STACK_LINE(119)
			_this;
		}
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::phoenix::geometry::Vertex tmp11 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(120)
			::phoenix::geometry::TextureCoord tmp12 = tmp11->uv->uv0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(120)
			::phoenix::geometry::TextureCoord _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(120)
			_this->u = br_x;
			HX_STACK_LINE(120)
			_this->v = br_y;
			HX_STACK_LINE(120)
			_this;
		}
		HX_STACK_LINE(123)
		this->set_dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,uv_space,(void))

Void PlaneGeometry_obj::set( ::phoenix::Rectangle quad,Float y){
{
		HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","set",0xc7c22805,"phoenix.geometry.PlaneGeometry.set","phoenix/geometry/PlaneGeometry.hx",127,0xc99ce3ed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(129)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		this->vertices->splice((int)0,tmp);
		HX_STACK_LINE(135)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new((int)0,(int)0,(int)0,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		::phoenix::Color tmp2 = this->color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		::phoenix::geometry::Vertex tmp3 = ::phoenix::geometry::Vertex_obj::__new(tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		::phoenix::geometry::Vertex vert0 = tmp3;		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(136)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(quad->w,(int)0,(int)0,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		::phoenix::Color tmp5 = this->color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		::phoenix::geometry::Vertex tmp6 = ::phoenix::geometry::Vertex_obj::__new(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		::phoenix::geometry::Vertex vert1 = tmp6;		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(137)
		::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(quad->w,(int)0,quad->h,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		::phoenix::Color tmp8 = this->color;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(137)
		::phoenix::geometry::Vertex tmp9 = ::phoenix::geometry::Vertex_obj::__new(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(137)
		::phoenix::geometry::Vertex vert2 = tmp9;		HX_STACK_VAR(vert2,"vert2");
		HX_STACK_LINE(140)
		::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new((int)0,(int)0,quad->h,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		::phoenix::Color tmp11 = this->color;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		::phoenix::geometry::Vertex tmp12 = ::phoenix::geometry::Vertex_obj::__new(tmp10,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		::phoenix::geometry::Vertex vert3 = tmp12;		HX_STACK_VAR(vert3,"vert3");
		HX_STACK_LINE(141)
		::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new((int)0,(int)0,(int)0,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(141)
		::phoenix::Color tmp14 = this->color;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(141)
		::phoenix::geometry::Vertex tmp15 = ::phoenix::geometry::Vertex_obj::__new(tmp13,tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(141)
		::phoenix::geometry::Vertex vert4 = tmp15;		HX_STACK_VAR(vert4,"vert4");
		HX_STACK_LINE(142)
		::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new(quad->w,(int)0,quad->h,null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(142)
		::phoenix::Color tmp17 = this->color;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(142)
		::phoenix::geometry::Vertex tmp18 = ::phoenix::geometry::Vertex_obj::__new(tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(142)
		::phoenix::geometry::Vertex vert5 = tmp18;		HX_STACK_VAR(vert5,"vert5");
		HX_STACK_LINE(147)
		::phoenix::geometry::Vertex tmp19 = vert5;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(147)
		this->add(tmp19);
		HX_STACK_LINE(149)
		::phoenix::geometry::Vertex tmp20 = vert4;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(149)
		this->add(tmp20);
		HX_STACK_LINE(151)
		::phoenix::geometry::Vertex tmp21 = vert3;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(151)
		this->add(tmp21);
		HX_STACK_LINE(153)
		::phoenix::geometry::Vertex tmp22 = vert2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(153)
		this->add(tmp22);
		HX_STACK_LINE(155)
		::phoenix::geometry::Vertex tmp23 = vert1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(155)
		this->add(tmp23);
		HX_STACK_LINE(157)
		::phoenix::geometry::Vertex tmp24 = vert0;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(157)
		this->add(tmp24);
		HX_STACK_LINE(160)
		this->set_primitive_type((int)4);
		HX_STACK_LINE(161)
		this->immediate = false;
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			::phoenix::Vector tmp25 = ::phoenix::Vector_obj::__new(quad->x,y,quad->y,null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(164)
			::phoenix::Vector value = tmp25;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::phoenix::Transform tmp26 = this->transform;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(164)
				::phoenix::Spatial _this = tmp26->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(164)
				_this->pos = value;
				HX_STACK_LINE(164)
				bool tmp27 = (value != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(164)
				if ((tmp27)){
					HX_STACK_LINE(164)
					::phoenix::Vector tmp28 = _this->pos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(164)
					Dynamic tmp29 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(164)
					::phoenix::Vector_obj::Listen(tmp28,tmp29);
					HX_STACK_LINE(164)
					{
						HX_STACK_LINE(164)
						bool tmp30 = (_this->pos_changed != null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(164)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(164)
						if ((tmp30)){
							HX_STACK_LINE(164)
							bool tmp32 = _this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(164)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(164)
							tmp31 = !(tmp33);
						}
						else{
							HX_STACK_LINE(164)
							tmp31 = false;
						}
						HX_STACK_LINE(164)
						if ((tmp31)){
							HX_STACK_LINE(164)
							::phoenix::Vector tmp32 = _this->pos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(164)
							_this->pos_changed(tmp32);
						}
					}
				}
				HX_STACK_LINE(164)
				_this->pos;
			}
		}
		HX_STACK_LINE(167)
		this->is_set = true;
		HX_STACK_LINE(170)
		::phoenix::Rectangle tmp25 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(170)
		this->uv_space(tmp25);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlaneGeometry_obj,set,(void))

bool PlaneGeometry_obj::set_flipx( bool _val){
	HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","set_flipx",0x2e350631,"phoenix.geometry.PlaneGeometry.set_flipx","phoenix/geometry/PlaneGeometry.hx",176,0xc99ce3ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(178)
	this->flipx = _val;
	HX_STACK_LINE(180)
	bool tmp = this->is_set;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	if ((tmp)){
		HX_STACK_LINE(181)
		::phoenix::Rectangle tmp1 = this->_uv_cache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		this->uv_space(tmp1);
	}
	HX_STACK_LINE(184)
	bool tmp1 = this->flipx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_flipx,return )

bool PlaneGeometry_obj::set_flipy( bool _val){
	HX_STACK_FRAME("phoenix.geometry.PlaneGeometry","set_flipy",0x2e350632,"phoenix.geometry.PlaneGeometry.set_flipy","phoenix/geometry/PlaneGeometry.hx",187,0xc99ce3ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(190)
	this->flipy = _val;
	HX_STACK_LINE(192)
	bool tmp = this->is_set;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	if ((tmp)){
		HX_STACK_LINE(193)
		::phoenix::Rectangle tmp1 = this->_uv_cache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		this->uv_space(tmp1);
	}
	HX_STACK_LINE(196)
	bool tmp1 = this->flipy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PlaneGeometry_obj,set_flipy,return )


PlaneGeometry_obj::PlaneGeometry_obj()
{
}

void PlaneGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlaneGeometry);
	HX_MARK_MEMBER_NAME(flipx,"flipx");
	HX_MARK_MEMBER_NAME(flipy,"flipy");
	HX_MARK_MEMBER_NAME(_uv_cache,"_uv_cache");
	HX_MARK_MEMBER_NAME(is_set,"is_set");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlaneGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flipx,"flipx");
	HX_VISIT_MEMBER_NAME(flipy,"flipy");
	HX_VISIT_MEMBER_NAME(_uv_cache,"_uv_cache");
	HX_VISIT_MEMBER_NAME(is_set,"is_set");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlaneGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { return flipx; }
		if (HX_FIELD_EQ(inName,"flipy") ) { return flipy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"is_set") ) { return is_set; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uv_space") ) { return uv_space_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uv_cache") ) { return _uv_cache; }
		if (HX_FIELD_EQ(inName,"set_flipx") ) { return set_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipy") ) { return set_flipy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlaneGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { if (inCallProp == hx::paccAlways) return set_flipx(inValue);flipx=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipy") ) { if (inCallProp == hx::paccAlways) return set_flipy(inValue);flipy=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"is_set") ) { is_set=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_uv_cache") ) { _uv_cache=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlaneGeometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PlaneGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3"));
	outFields->push(HX_HCSTRING("is_set","\x8d","\x79","\xb0","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PlaneGeometry_obj,flipx),HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(PlaneGeometry_obj,flipy),HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(PlaneGeometry_obj,_uv_cache),HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3")},
	{hx::fsBool,(int)offsetof(PlaneGeometry_obj,is_set),HX_HCSTRING("is_set","\x8d","\x79","\xb0","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"),
	HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"),
	HX_HCSTRING("_uv_cache","\x03","\xbe","\x84","\xd3"),
	HX_HCSTRING("is_set","\x8d","\x79","\xb0","\x71"),
	HX_HCSTRING("uv","\x61","\x66","\x00","\x00"),
	HX_HCSTRING("uv_space","\x28","\xb9","\x40","\xcc"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_flipx","\x8e","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_flipy","\x8f","\x8d","\x8c","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlaneGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlaneGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class PlaneGeometry_obj::__mClass;

void PlaneGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.PlaneGeometry","\x51","\x3f","\x02","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PlaneGeometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlaneGeometry_obj >;
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

} // end namespace phoenix
} // end namespace geometry
