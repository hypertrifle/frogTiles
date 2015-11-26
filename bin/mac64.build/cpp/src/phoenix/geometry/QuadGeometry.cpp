#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
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
namespace phoenix{
namespace geometry{

Void QuadGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.QuadGeometry","new",0xa66b69c8,"phoenix.geometry.QuadGeometry.new","phoenix/geometry/QuadGeometry.hx",12,0x485a4ac8)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(22)
	this->_uv_h = ((Float)1);
	HX_STACK_LINE(21)
	this->_uv_w = ((Float)1);
	HX_STACK_LINE(20)
	this->_uv_y = ((Float)0);
	HX_STACK_LINE(19)
	this->_uv_x = ((Float)0);
	HX_STACK_LINE(17)
	this->uv_angle = (int)0;
	HX_STACK_LINE(15)
	this->flipy = false;
	HX_STACK_LINE(14)
	this->flipx = false;
	HX_STACK_LINE(26)
	options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = (int)4;
	HX_STACK_LINE(28)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	super::__construct(tmp);
	HX_STACK_LINE(30)
	bool tmp1 = (options == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(30)
		return null();
	}
	HX_STACK_LINE(33)
	bool tmp2 = (options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	if ((tmp2)){
		HX_STACK_LINE(33)
		Dynamic tmp3 = options->__Field(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		this->set_flipx(tmp3);
	}
	HX_STACK_LINE(34)
	bool tmp3 = (options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	if ((tmp3)){
		HX_STACK_LINE(34)
		Dynamic tmp4 = options->__Field(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		this->set_flipy(tmp4);
	}
	HX_STACK_LINE(36)
	Float _x = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(37)
	Float _y = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(38)
	Float _w = options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_w,"_w");
	HX_STACK_LINE(39)
	Float _h = options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(41)
	bool tmp4 = (options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	if ((tmp4)){
		HX_STACK_LINE(42)
		Float tmp5 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		_x = tmp5;
		HX_STACK_LINE(43)
		Float tmp6 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		_y = tmp6;
		HX_STACK_LINE(44)
		Float tmp7 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		_w = tmp7;
		HX_STACK_LINE(45)
		Float tmp8 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		_h = tmp8;
	}
	HX_STACK_LINE(50)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	::phoenix::Color tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(50)
	::phoenix::geometry::Vertex tmp7 = ::phoenix::geometry::Vertex_obj::__new(tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	this->add(tmp7);
	HX_STACK_LINE(52)
	::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(52)
	::phoenix::Color tmp9 = this->color;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(52)
	::phoenix::geometry::Vertex tmp10 = ::phoenix::geometry::Vertex_obj::__new(tmp8,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(52)
	this->add(tmp10);
	HX_STACK_LINE(54)
	::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(54)
	::phoenix::Color tmp12 = this->color;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(54)
	::phoenix::geometry::Vertex tmp13 = ::phoenix::geometry::Vertex_obj::__new(tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(54)
	this->add(tmp13);
	HX_STACK_LINE(58)
	::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(58)
	::phoenix::Color tmp15 = this->color;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(58)
	::phoenix::geometry::Vertex tmp16 = ::phoenix::geometry::Vertex_obj::__new(tmp14,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(58)
	this->add(tmp16);
	HX_STACK_LINE(60)
	::phoenix::Vector tmp17 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(60)
	::phoenix::Color tmp18 = this->color;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(60)
	::phoenix::geometry::Vertex tmp19 = ::phoenix::geometry::Vertex_obj::__new(tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(60)
	this->add(tmp19);
	HX_STACK_LINE(62)
	::phoenix::Vector tmp20 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(62)
	::phoenix::Color tmp21 = this->color;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(62)
	::phoenix::geometry::Vertex tmp22 = ::phoenix::geometry::Vertex_obj::__new(tmp20,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(62)
	this->add(tmp22);
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::phoenix::Vector tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::phoenix::Transform tmp24 = this->transform;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(64)
			::phoenix::Vector tmp25 = tmp24->local->pos;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(64)
			::phoenix::Vector _this = tmp25;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(64)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(64)
			_this->ignore_listeners = true;
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				_this->x = _x;
				HX_STACK_LINE(64)
				bool tmp26 = _this->_construct;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(64)
				if ((tmp26)){
					HX_STACK_LINE(64)
					_this->x;
				}
				else{
					HX_STACK_LINE(64)
					bool tmp27 = (_this->listen_x != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(64)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(64)
					if ((tmp27)){
						HX_STACK_LINE(64)
						bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(64)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(64)
						tmp28 = !(tmp30);
					}
					else{
						HX_STACK_LINE(64)
						tmp28 = false;
					}
					HX_STACK_LINE(64)
					if ((tmp28)){
						HX_STACK_LINE(64)
						Float tmp29 = _x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(64)
						_this->listen_x(tmp29);
					}
					HX_STACK_LINE(64)
					_this->x;
				}
			}
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				_this->y = _y;
				HX_STACK_LINE(64)
				bool tmp26 = _this->_construct;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(64)
				if ((tmp26)){
					HX_STACK_LINE(64)
					_this->y;
				}
				else{
					HX_STACK_LINE(64)
					bool tmp27 = (_this->listen_y != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(64)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(64)
					if ((tmp27)){
						HX_STACK_LINE(64)
						bool tmp29 = _this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(64)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(64)
						tmp28 = !(tmp30);
					}
					else{
						HX_STACK_LINE(64)
						tmp28 = false;
					}
					HX_STACK_LINE(64)
					if ((tmp28)){
						HX_STACK_LINE(64)
						Float tmp29 = _y;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(64)
						_this->listen_y(tmp29);
					}
					HX_STACK_LINE(64)
					_this->y;
				}
			}
			HX_STACK_LINE(64)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(64)
			bool tmp26 = (_this->listen_x != null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(64)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(64)
			if ((tmp26)){
				HX_STACK_LINE(64)
				bool tmp28 = _this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(64)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(64)
				tmp27 = !(tmp29);
			}
			else{
				HX_STACK_LINE(64)
				tmp27 = false;
			}
			HX_STACK_LINE(64)
			if ((tmp27)){
				HX_STACK_LINE(64)
				Float tmp28 = _this->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(64)
				_this->listen_x(tmp28);
			}
			HX_STACK_LINE(64)
			bool tmp28 = (_this->listen_y != null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(64)
			bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(64)
			if ((tmp28)){
				HX_STACK_LINE(64)
				bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(64)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(64)
				tmp29 = !(tmp31);
			}
			else{
				HX_STACK_LINE(64)
				tmp29 = false;
			}
			HX_STACK_LINE(64)
			if ((tmp29)){
				HX_STACK_LINE(64)
				Float tmp30 = _this->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(64)
				_this->listen_y(tmp30);
			}
			HX_STACK_LINE(64)
			tmp23 = _this;
		}
		HX_STACK_LINE(64)
		::phoenix::Vector value = tmp23;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::phoenix::Transform tmp24 = this->transform;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(64)
			::phoenix::Spatial _this = tmp24->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(64)
			_this->pos = value;
			HX_STACK_LINE(64)
			bool tmp25 = (value != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(64)
			if ((tmp25)){
				HX_STACK_LINE(64)
				::phoenix::Vector tmp26 = _this->pos;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(64)
				Dynamic tmp27 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(64)
				::phoenix::Vector_obj::Listen(tmp26,tmp27);
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(64)
					bool tmp28 = (_this->pos_changed != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(64)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(64)
					if ((tmp28)){
						HX_STACK_LINE(64)
						bool tmp30 = _this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(64)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(64)
						tmp29 = !(tmp31);
					}
					else{
						HX_STACK_LINE(64)
						tmp29 = false;
					}
					HX_STACK_LINE(64)
					if ((tmp29)){
						HX_STACK_LINE(64)
						::phoenix::Vector tmp30 = _this->pos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(64)
						_this->pos_changed(tmp30);
					}
				}
			}
			HX_STACK_LINE(64)
			_this->pos;
		}
	}
	HX_STACK_LINE(66)
	bool tmp23 = (options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(66)
	if ((tmp23)){
		HX_STACK_LINE(67)
		::phoenix::Rectangle _rect = options->__Field(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_rect,"_rect");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::phoenix::geometry::GeometryState tmp24 = this->state;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(67)
			::phoenix::Texture tmp25 = tmp24->texture;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(67)
			bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(67)
			if ((tmp26)){
				HX_STACK_LINE(67)
				::String tmp27 = HX_HCSTRING(" ( QuadGeometry; Calling UV on a geometry with null texture.","\x4d","\xfb","\xd1","\xd3");		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(67)
				::String tmp28 = (tmp27 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(67)
				::String tmp29 = (HX_HCSTRING("texture was null","\xc3","\x9c","\xa8","\x99") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(67)
				::luxe::DebugError tmp30 = ::luxe::DebugError_obj::null_assertion(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(67)
				HX_STACK_DO_THROW(tmp30);
			}
		}
		HX_STACK_LINE(67)
		Float tmp24 = _rect->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(67)
		::phoenix::geometry::GeometryState tmp25 = this->state;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(67)
		int tmp26 = tmp25->texture->width_actual;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(67)
		Float tmp27 = (Float(tmp24) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(67)
		Float tlx = tmp27;		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(67)
		Float tmp28 = _rect->y;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(67)
		::phoenix::geometry::GeometryState tmp29 = this->state;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(67)
		int tmp30 = tmp29->texture->height_actual;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(67)
		Float tmp31 = (Float(tmp28) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(67)
		Float tly = tmp31;		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(67)
		Float tmp32 = _rect->w;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(67)
		::phoenix::geometry::GeometryState tmp33 = this->state;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(67)
		int tmp34 = tmp33->texture->width_actual;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(67)
		Float tmp35 = (Float(tmp32) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(67)
		Float szx = tmp35;		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(67)
		Float tmp36 = _rect->h;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(67)
		::phoenix::geometry::GeometryState tmp37 = this->state;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(67)
		int tmp38 = tmp37->texture->height_actual;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(67)
		Float tmp39 = (Float(tmp36) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(67)
		Float szy = tmp39;		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int tmp40 = this->vertices->length;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(67)
			bool tmp41 = (tmp40 == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(67)
			if ((tmp41)){
				HX_STACK_LINE(67)
				Dynamic();
			}
			else{
				HX_STACK_LINE(67)
				Float sz_x = szx;		HX_STACK_VAR(sz_x,"sz_x");
				HX_STACK_LINE(67)
				Float sz_y = szy;		HX_STACK_VAR(sz_y,"sz_y");
				HX_STACK_LINE(67)
				Float tl_x = tlx;		HX_STACK_VAR(tl_x,"tl_x");
				HX_STACK_LINE(67)
				Float tl_y = tly;		HX_STACK_VAR(tl_y,"tl_y");
				HX_STACK_LINE(67)
				this->_uv_x = tl_x;
				HX_STACK_LINE(67)
				this->_uv_y = tl_y;
				HX_STACK_LINE(67)
				this->_uv_w = sz_x;
				HX_STACK_LINE(67)
				this->_uv_h = sz_y;
				HX_STACK_LINE(67)
				Float tmp42 = (tl_x + sz_x);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(67)
				Float tr_x = tmp42;		HX_STACK_VAR(tr_x,"tr_x");
				HX_STACK_LINE(67)
				Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
				HX_STACK_LINE(67)
				Float tmp43 = (tl_x + sz_x);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(67)
				Float br_x = tmp43;		HX_STACK_VAR(br_x,"br_x");
				HX_STACK_LINE(67)
				Float tmp44 = (tl_y + sz_y);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(67)
				Float br_y = tmp44;		HX_STACK_VAR(br_y,"br_y");
				HX_STACK_LINE(67)
				Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
				HX_STACK_LINE(67)
				Float tmp45 = (tl_y + sz_y);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(67)
				Float bl_y = tmp45;		HX_STACK_VAR(bl_y,"bl_y");
				HX_STACK_LINE(67)
				Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
				HX_STACK_LINE(67)
				Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
				HX_STACK_LINE(67)
				int tmp46 = this->uv_angle;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(67)
				Float tmp47 = (Float(tmp46) / Float((int)90));		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(67)
				int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(67)
				int rotations = tmp48;		HX_STACK_VAR(rotations,"rotations");
				HX_STACK_LINE(67)
				int tmp49 = rotations;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(67)
				Float tmp50 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(67)
				int tmp51 = ::Math_obj::floor(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(67)
				int tmp52 = ((int)4 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(67)
				int tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(67)
				rotations = tmp53;
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(67)
					while((true)){
						HX_STACK_LINE(67)
						bool tmp54 = (_g < rotations);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(67)
						bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(67)
						if ((tmp55)){
							HX_STACK_LINE(67)
							break;
						}
						HX_STACK_LINE(67)
						int tmp56 = (_g)++;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(67)
						int r = tmp56;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(67)
						{
							HX_STACK_LINE(67)
							tmp_x = tl_x;
							HX_STACK_LINE(67)
							tl_x = bl_x;
							HX_STACK_LINE(67)
							bl_x = br_x;
							HX_STACK_LINE(67)
							br_x = tr_x;
							HX_STACK_LINE(67)
							tr_x = tmp_x;
							HX_STACK_LINE(67)
							tmp_y = tl_y;
							HX_STACK_LINE(67)
							tl_y = bl_y;
							HX_STACK_LINE(67)
							bl_y = br_y;
							HX_STACK_LINE(67)
							br_y = tr_y;
							HX_STACK_LINE(67)
							tr_y = tmp_y;
						}
					}
				}
				HX_STACK_LINE(67)
				bool tmp54 = this->flipy;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(67)
				if ((tmp54)){
					HX_STACK_LINE(67)
					tmp_y = bl_y;
					HX_STACK_LINE(67)
					bl_y = tl_y;
					HX_STACK_LINE(67)
					tl_y = tmp_y;
					HX_STACK_LINE(67)
					tmp_x = bl_x;
					HX_STACK_LINE(67)
					bl_x = tl_x;
					HX_STACK_LINE(67)
					tl_x = tmp_x;
					HX_STACK_LINE(67)
					tmp_y = br_y;
					HX_STACK_LINE(67)
					br_y = tr_y;
					HX_STACK_LINE(67)
					tr_y = tmp_y;
					HX_STACK_LINE(67)
					tmp_x = br_x;
					HX_STACK_LINE(67)
					br_x = tr_x;
					HX_STACK_LINE(67)
					tr_x = tmp_x;
				}
				HX_STACK_LINE(67)
				bool tmp55 = this->flipx;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(67)
				if ((tmp55)){
					HX_STACK_LINE(67)
					tmp_x = tr_x;
					HX_STACK_LINE(67)
					tr_x = tl_x;
					HX_STACK_LINE(67)
					tl_x = tmp_x;
					HX_STACK_LINE(67)
					tmp_y = tr_y;
					HX_STACK_LINE(67)
					tr_y = tl_y;
					HX_STACK_LINE(67)
					tl_y = tmp_y;
					HX_STACK_LINE(67)
					tmp_x = br_x;
					HX_STACK_LINE(67)
					br_x = bl_x;
					HX_STACK_LINE(67)
					bl_x = tmp_x;
					HX_STACK_LINE(67)
					tmp_y = br_y;
					HX_STACK_LINE(67)
					br_y = bl_y;
					HX_STACK_LINE(67)
					bl_y = tmp_y;
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::phoenix::geometry::Vertex tmp56 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord tmp57 = tmp56->uv->uv0;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord _this = tmp57;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(67)
					_this->u = tl_x;
					HX_STACK_LINE(67)
					_this->v = tl_y;
					HX_STACK_LINE(67)
					_this;
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::phoenix::geometry::Vertex tmp56 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord tmp57 = tmp56->uv->uv0;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord _this = tmp57;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(67)
					_this->u = tr_x;
					HX_STACK_LINE(67)
					_this->v = tr_y;
					HX_STACK_LINE(67)
					_this;
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::phoenix::geometry::Vertex tmp56 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord tmp57 = tmp56->uv->uv0;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord _this = tmp57;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(67)
					_this->u = br_x;
					HX_STACK_LINE(67)
					_this->v = br_y;
					HX_STACK_LINE(67)
					_this;
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::phoenix::geometry::Vertex tmp56 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord tmp57 = tmp56->uv->uv0;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord _this = tmp57;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(67)
					_this->u = bl_x;
					HX_STACK_LINE(67)
					_this->v = bl_y;
					HX_STACK_LINE(67)
					_this;
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::phoenix::geometry::Vertex tmp56 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord tmp57 = tmp56->uv->uv0;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord _this = tmp57;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(67)
					_this->u = tl_x;
					HX_STACK_LINE(67)
					_this->v = tl_y;
					HX_STACK_LINE(67)
					_this;
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::phoenix::geometry::Vertex tmp56 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord tmp57 = tmp56->uv->uv0;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(67)
					::phoenix::geometry::TextureCoord _this = tmp57;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(67)
					_this->u = br_x;
					HX_STACK_LINE(67)
					_this->v = br_y;
					HX_STACK_LINE(67)
					_this;
				}
				HX_STACK_LINE(67)
				this->set_dirty(true);
			}
		}
	}
	else{
		HX_STACK_LINE(69)
		int tmp24 = this->vertices->length;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(69)
		bool tmp25 = (tmp24 == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(69)
		if ((tmp25)){
			HX_STACK_LINE(69)
			Dynamic();
		}
		else{
			HX_STACK_LINE(69)
			Float sz_x = (int)1;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(69)
			Float sz_y = (int)1;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(69)
			Float tl_x = (int)0;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(69)
			Float tl_y = (int)0;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(69)
			this->_uv_x = tl_x;
			HX_STACK_LINE(69)
			this->_uv_y = tl_y;
			HX_STACK_LINE(69)
			this->_uv_w = sz_x;
			HX_STACK_LINE(69)
			this->_uv_h = sz_y;
			HX_STACK_LINE(69)
			Float tmp26 = (tl_x + sz_x);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(69)
			Float tr_x = tmp26;		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(69)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(69)
			Float tmp27 = (tl_x + sz_x);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(69)
			Float br_x = tmp27;		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(69)
			Float tmp28 = (tl_y + sz_y);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(69)
			Float br_y = tmp28;		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(69)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(69)
			Float tmp29 = (tl_y + sz_y);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(69)
			Float bl_y = tmp29;		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(69)
			Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(69)
			Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(69)
			int tmp30 = this->uv_angle;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(69)
			Float tmp31 = (Float(tmp30) / Float((int)90));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(69)
			int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(69)
			int rotations = tmp32;		HX_STACK_VAR(rotations,"rotations");
			HX_STACK_LINE(69)
			int tmp33 = rotations;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(69)
			Float tmp34 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(69)
			int tmp35 = ::Math_obj::floor(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(69)
			int tmp36 = ((int)4 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(69)
			int tmp37 = (tmp33 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(69)
			rotations = tmp37;
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(69)
				while((true)){
					HX_STACK_LINE(69)
					bool tmp38 = (_g < rotations);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(69)
					bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(69)
					if ((tmp39)){
						HX_STACK_LINE(69)
						break;
					}
					HX_STACK_LINE(69)
					int tmp40 = (_g)++;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(69)
					int r = tmp40;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						tmp_x = tl_x;
						HX_STACK_LINE(69)
						tl_x = bl_x;
						HX_STACK_LINE(69)
						bl_x = br_x;
						HX_STACK_LINE(69)
						br_x = tr_x;
						HX_STACK_LINE(69)
						tr_x = tmp_x;
						HX_STACK_LINE(69)
						tmp_y = tl_y;
						HX_STACK_LINE(69)
						tl_y = bl_y;
						HX_STACK_LINE(69)
						bl_y = br_y;
						HX_STACK_LINE(69)
						br_y = tr_y;
						HX_STACK_LINE(69)
						tr_y = tmp_y;
					}
				}
			}
			HX_STACK_LINE(69)
			bool tmp38 = this->flipy;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(69)
			if ((tmp38)){
				HX_STACK_LINE(69)
				tmp_y = bl_y;
				HX_STACK_LINE(69)
				bl_y = tl_y;
				HX_STACK_LINE(69)
				tl_y = tmp_y;
				HX_STACK_LINE(69)
				tmp_x = bl_x;
				HX_STACK_LINE(69)
				bl_x = tl_x;
				HX_STACK_LINE(69)
				tl_x = tmp_x;
				HX_STACK_LINE(69)
				tmp_y = br_y;
				HX_STACK_LINE(69)
				br_y = tr_y;
				HX_STACK_LINE(69)
				tr_y = tmp_y;
				HX_STACK_LINE(69)
				tmp_x = br_x;
				HX_STACK_LINE(69)
				br_x = tr_x;
				HX_STACK_LINE(69)
				tr_x = tmp_x;
			}
			HX_STACK_LINE(69)
			bool tmp39 = this->flipx;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(69)
			if ((tmp39)){
				HX_STACK_LINE(69)
				tmp_x = tr_x;
				HX_STACK_LINE(69)
				tr_x = tl_x;
				HX_STACK_LINE(69)
				tl_x = tmp_x;
				HX_STACK_LINE(69)
				tmp_y = tr_y;
				HX_STACK_LINE(69)
				tr_y = tl_y;
				HX_STACK_LINE(69)
				tl_y = tmp_y;
				HX_STACK_LINE(69)
				tmp_x = br_x;
				HX_STACK_LINE(69)
				br_x = bl_x;
				HX_STACK_LINE(69)
				bl_x = tmp_x;
				HX_STACK_LINE(69)
				tmp_y = br_y;
				HX_STACK_LINE(69)
				br_y = bl_y;
				HX_STACK_LINE(69)
				bl_y = tmp_y;
			}
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::phoenix::geometry::Vertex tmp40 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord tmp41 = tmp40->uv->uv0;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord _this = tmp41;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				_this->u = tl_x;
				HX_STACK_LINE(69)
				_this->v = tl_y;
				HX_STACK_LINE(69)
				_this;
			}
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::phoenix::geometry::Vertex tmp40 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord tmp41 = tmp40->uv->uv0;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord _this = tmp41;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				_this->u = tr_x;
				HX_STACK_LINE(69)
				_this->v = tr_y;
				HX_STACK_LINE(69)
				_this;
			}
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::phoenix::geometry::Vertex tmp40 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord tmp41 = tmp40->uv->uv0;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord _this = tmp41;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				_this->u = br_x;
				HX_STACK_LINE(69)
				_this->v = br_y;
				HX_STACK_LINE(69)
				_this;
			}
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::phoenix::geometry::Vertex tmp40 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord tmp41 = tmp40->uv->uv0;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord _this = tmp41;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				_this->u = bl_x;
				HX_STACK_LINE(69)
				_this->v = bl_y;
				HX_STACK_LINE(69)
				_this;
			}
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::phoenix::geometry::Vertex tmp40 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord tmp41 = tmp40->uv->uv0;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord _this = tmp41;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				_this->u = tl_x;
				HX_STACK_LINE(69)
				_this->v = tl_y;
				HX_STACK_LINE(69)
				_this;
			}
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::phoenix::geometry::Vertex tmp40 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord tmp41 = tmp40->uv->uv0;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(69)
				::phoenix::geometry::TextureCoord _this = tmp41;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(69)
				_this->u = br_x;
				HX_STACK_LINE(69)
				_this->v = br_y;
				HX_STACK_LINE(69)
				_this;
			}
			HX_STACK_LINE(69)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(72)
	bool tmp24 = (options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(72)
	if ((tmp24)){
		HX_STACK_LINE(72)
		Dynamic tmp25 = options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(72)
		this->set_visible(tmp25);
	}
	HX_STACK_LINE(73)
	bool tmp25 = (options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(73)
	if ((tmp25)){
		HX_STACK_LINE(73)
		this->immediate = options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );
	}
}
;
	return null();
}

//QuadGeometry_obj::~QuadGeometry_obj() { }

Dynamic QuadGeometry_obj::__CreateEmpty() { return  new QuadGeometry_obj; }
hx::ObjectPtr< QuadGeometry_obj > QuadGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< QuadGeometry_obj > _result_ = new QuadGeometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic QuadGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadGeometry_obj > _result_ = new QuadGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void QuadGeometry_obj::uv( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","uv",0x7822f1f9,"phoenix.geometry.QuadGeometry.uv","phoenix/geometry/QuadGeometry.hx",77,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(79)
			::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(79)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			if ((tmp2)){
				HX_STACK_LINE(230)
				::String tmp3 = HX_HCSTRING(" ( QuadGeometry; Calling UV on a geometry with null texture.","\x4d","\xfb","\xd1","\xd3");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(79)
				::String tmp5 = (HX_HCSTRING("texture was null","\xc3","\x9c","\xa8","\x99") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				::luxe::DebugError tmp6 = ::luxe::DebugError_obj::null_assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(81)
		Float tmp = _rect->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		int tmp2 = tmp1->texture->width_actual;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		Float tlx = tmp3;		HX_STACK_VAR(tlx,"tlx");
		HX_STACK_LINE(82)
		Float tmp4 = _rect->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::phoenix::geometry::GeometryState tmp5 = this->state;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		int tmp6 = tmp5->texture->height_actual;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		Float tly = tmp7;		HX_STACK_VAR(tly,"tly");
		HX_STACK_LINE(83)
		Float tmp8 = _rect->w;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		::phoenix::geometry::GeometryState tmp9 = this->state;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		int tmp10 = tmp9->texture->width_actual;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		Float szx = tmp11;		HX_STACK_VAR(szx,"szx");
		HX_STACK_LINE(84)
		Float tmp12 = _rect->h;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(84)
		::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(84)
		int tmp14 = tmp13->texture->height_actual;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(84)
		Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(84)
		Float szy = tmp15;		HX_STACK_VAR(szy,"szy");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int tmp16 = this->vertices->length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(86)
			bool tmp17 = (tmp16 == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(86)
			if ((tmp17)){
				HX_STACK_LINE(86)
				Dynamic();
			}
			else{
				HX_STACK_LINE(86)
				Float sz_x = szx;		HX_STACK_VAR(sz_x,"sz_x");
				HX_STACK_LINE(86)
				Float sz_y = szy;		HX_STACK_VAR(sz_y,"sz_y");
				HX_STACK_LINE(86)
				Float tl_x = tlx;		HX_STACK_VAR(tl_x,"tl_x");
				HX_STACK_LINE(86)
				Float tl_y = tly;		HX_STACK_VAR(tl_y,"tl_y");
				HX_STACK_LINE(86)
				this->_uv_x = tl_x;
				HX_STACK_LINE(86)
				this->_uv_y = tl_y;
				HX_STACK_LINE(86)
				this->_uv_w = sz_x;
				HX_STACK_LINE(86)
				this->_uv_h = sz_y;
				HX_STACK_LINE(86)
				Float tmp18 = (tl_x + sz_x);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(86)
				Float tr_x = tmp18;		HX_STACK_VAR(tr_x,"tr_x");
				HX_STACK_LINE(86)
				Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
				HX_STACK_LINE(86)
				Float tmp19 = (tl_x + sz_x);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(86)
				Float br_x = tmp19;		HX_STACK_VAR(br_x,"br_x");
				HX_STACK_LINE(86)
				Float tmp20 = (tl_y + sz_y);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(86)
				Float br_y = tmp20;		HX_STACK_VAR(br_y,"br_y");
				HX_STACK_LINE(86)
				Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
				HX_STACK_LINE(86)
				Float tmp21 = (tl_y + sz_y);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(86)
				Float bl_y = tmp21;		HX_STACK_VAR(bl_y,"bl_y");
				HX_STACK_LINE(86)
				Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
				HX_STACK_LINE(86)
				Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
				HX_STACK_LINE(86)
				int tmp22 = this->uv_angle;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(86)
				Float tmp23 = (Float(tmp22) / Float((int)90));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(86)
				int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(86)
				int rotations = tmp24;		HX_STACK_VAR(rotations,"rotations");
				HX_STACK_LINE(86)
				int tmp25 = rotations;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(86)
				Float tmp26 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(86)
				int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(86)
				int tmp28 = ((int)4 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(86)
				int tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(86)
				rotations = tmp29;
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(86)
					while((true)){
						HX_STACK_LINE(86)
						bool tmp30 = (_g < rotations);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(86)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(86)
						if ((tmp31)){
							HX_STACK_LINE(86)
							break;
						}
						HX_STACK_LINE(86)
						int tmp32 = (_g)++;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(86)
						int r = tmp32;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(86)
						{
							HX_STACK_LINE(86)
							tmp_x = tl_x;
							HX_STACK_LINE(86)
							tl_x = bl_x;
							HX_STACK_LINE(86)
							bl_x = br_x;
							HX_STACK_LINE(86)
							br_x = tr_x;
							HX_STACK_LINE(86)
							tr_x = tmp_x;
							HX_STACK_LINE(86)
							tmp_y = tl_y;
							HX_STACK_LINE(86)
							tl_y = bl_y;
							HX_STACK_LINE(86)
							bl_y = br_y;
							HX_STACK_LINE(86)
							br_y = tr_y;
							HX_STACK_LINE(86)
							tr_y = tmp_y;
						}
					}
				}
				HX_STACK_LINE(86)
				bool tmp30 = this->flipy;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(86)
				if ((tmp30)){
					HX_STACK_LINE(86)
					tmp_y = bl_y;
					HX_STACK_LINE(86)
					bl_y = tl_y;
					HX_STACK_LINE(86)
					tl_y = tmp_y;
					HX_STACK_LINE(86)
					tmp_x = bl_x;
					HX_STACK_LINE(86)
					bl_x = tl_x;
					HX_STACK_LINE(86)
					tl_x = tmp_x;
					HX_STACK_LINE(86)
					tmp_y = br_y;
					HX_STACK_LINE(86)
					br_y = tr_y;
					HX_STACK_LINE(86)
					tr_y = tmp_y;
					HX_STACK_LINE(86)
					tmp_x = br_x;
					HX_STACK_LINE(86)
					br_x = tr_x;
					HX_STACK_LINE(86)
					tr_x = tmp_x;
				}
				HX_STACK_LINE(86)
				bool tmp31 = this->flipx;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(86)
				if ((tmp31)){
					HX_STACK_LINE(86)
					tmp_x = tr_x;
					HX_STACK_LINE(86)
					tr_x = tl_x;
					HX_STACK_LINE(86)
					tl_x = tmp_x;
					HX_STACK_LINE(86)
					tmp_y = tr_y;
					HX_STACK_LINE(86)
					tr_y = tl_y;
					HX_STACK_LINE(86)
					tl_y = tmp_y;
					HX_STACK_LINE(86)
					tmp_x = br_x;
					HX_STACK_LINE(86)
					br_x = bl_x;
					HX_STACK_LINE(86)
					bl_x = tmp_x;
					HX_STACK_LINE(86)
					tmp_y = br_y;
					HX_STACK_LINE(86)
					br_y = bl_y;
					HX_STACK_LINE(86)
					bl_y = tmp_y;
				}
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(86)
					_this->u = tl_x;
					HX_STACK_LINE(86)
					_this->v = tl_y;
					HX_STACK_LINE(86)
					_this;
				}
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(86)
					_this->u = tr_x;
					HX_STACK_LINE(86)
					_this->v = tr_y;
					HX_STACK_LINE(86)
					_this;
				}
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(86)
					_this->u = br_x;
					HX_STACK_LINE(86)
					_this->v = br_y;
					HX_STACK_LINE(86)
					_this;
				}
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(86)
					_this->u = bl_x;
					HX_STACK_LINE(86)
					_this->v = bl_y;
					HX_STACK_LINE(86)
					_this;
				}
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(86)
					_this->u = tl_x;
					HX_STACK_LINE(86)
					_this->v = tl_y;
					HX_STACK_LINE(86)
					_this;
				}
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					::phoenix::geometry::Vertex tmp32 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord tmp33 = tmp32->uv->uv0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(86)
					::phoenix::geometry::TextureCoord _this = tmp33;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(86)
					_this->u = br_x;
					HX_STACK_LINE(86)
					_this->v = br_y;
					HX_STACK_LINE(86)
					_this;
				}
				HX_STACK_LINE(86)
				this->set_dirty(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,uv,(void))

Void QuadGeometry_obj::uv_space( Float _rect_x,Float _rect_y,Float _rect_w,Float _rect_h){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","uv_space",0xe21c06c0,"phoenix.geometry.QuadGeometry.uv_space","phoenix/geometry/QuadGeometry.hx",90,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect_x,"_rect_x")
		HX_STACK_ARG(_rect_y,"_rect_y")
		HX_STACK_ARG(_rect_w,"_rect_w")
		HX_STACK_ARG(_rect_h,"_rect_h")
		HX_STACK_LINE(92)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		if ((tmp1)){
			HX_STACK_LINE(92)
			return null();
		}
		HX_STACK_LINE(95)
		Float sz_x = _rect_w;		HX_STACK_VAR(sz_x,"sz_x");
		HX_STACK_LINE(96)
		Float sz_y = _rect_h;		HX_STACK_VAR(sz_y,"sz_y");
		HX_STACK_LINE(99)
		Float tl_x = _rect_x;		HX_STACK_VAR(tl_x,"tl_x");
		HX_STACK_LINE(100)
		Float tl_y = _rect_y;		HX_STACK_VAR(tl_y,"tl_y");
		HX_STACK_LINE(103)
		this->_uv_x = tl_x;
		HX_STACK_LINE(104)
		this->_uv_y = tl_y;
		HX_STACK_LINE(105)
		this->_uv_w = sz_x;
		HX_STACK_LINE(106)
		this->_uv_h = sz_y;
		HX_STACK_LINE(109)
		Float tmp2 = (tl_x + sz_x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		Float tr_x = tmp2;		HX_STACK_VAR(tr_x,"tr_x");
		HX_STACK_LINE(110)
		Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
		HX_STACK_LINE(112)
		Float tmp3 = (tl_x + sz_x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		Float br_x = tmp3;		HX_STACK_VAR(br_x,"br_x");
		HX_STACK_LINE(113)
		Float tmp4 = (tl_y + sz_y);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		Float br_y = tmp4;		HX_STACK_VAR(br_y,"br_y");
		HX_STACK_LINE(115)
		Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
		HX_STACK_LINE(116)
		Float tmp5 = (tl_y + sz_y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		Float bl_y = tmp5;		HX_STACK_VAR(bl_y,"bl_y");
		HX_STACK_LINE(118)
		Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
		HX_STACK_LINE(119)
		Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
		HX_STACK_LINE(136)
		int tmp6 = this->uv_angle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		Float tmp7 = (Float(tmp6) / Float((int)90));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(136)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(136)
		int rotations = tmp8;		HX_STACK_VAR(rotations,"rotations");
		HX_STACK_LINE(137)
		int tmp9 = rotations;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(137)
		Float tmp10 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(137)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(137)
		int tmp12 = ((int)4 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(137)
		int tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(137)
		rotations = tmp13;
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(139)
			while((true)){
				HX_STACK_LINE(139)
				bool tmp14 = (_g < rotations);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(139)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(139)
				if ((tmp15)){
					HX_STACK_LINE(139)
					break;
				}
				HX_STACK_LINE(139)
				int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(139)
				int r = tmp16;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					tmp_x = tl_x;
					HX_STACK_LINE(140)
					tl_x = bl_x;
					HX_STACK_LINE(140)
					bl_x = br_x;
					HX_STACK_LINE(140)
					br_x = tr_x;
					HX_STACK_LINE(140)
					tr_x = tmp_x;
					HX_STACK_LINE(140)
					tmp_y = tl_y;
					HX_STACK_LINE(140)
					tl_y = bl_y;
					HX_STACK_LINE(140)
					bl_y = br_y;
					HX_STACK_LINE(140)
					br_y = tr_y;
					HX_STACK_LINE(140)
					tr_y = tmp_y;
				}
			}
		}
		HX_STACK_LINE(143)
		bool tmp14 = this->flipy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(143)
		if ((tmp14)){
			HX_STACK_LINE(145)
			tmp_y = bl_y;
			HX_STACK_LINE(146)
			bl_y = tl_y;
			HX_STACK_LINE(147)
			tl_y = tmp_y;
			HX_STACK_LINE(149)
			tmp_x = bl_x;
			HX_STACK_LINE(150)
			bl_x = tl_x;
			HX_STACK_LINE(151)
			tl_x = tmp_x;
			HX_STACK_LINE(154)
			tmp_y = br_y;
			HX_STACK_LINE(155)
			br_y = tr_y;
			HX_STACK_LINE(156)
			tr_y = tmp_y;
			HX_STACK_LINE(158)
			tmp_x = br_x;
			HX_STACK_LINE(159)
			br_x = tr_x;
			HX_STACK_LINE(160)
			tr_x = tmp_x;
		}
		HX_STACK_LINE(164)
		bool tmp15 = this->flipx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(164)
		if ((tmp15)){
			HX_STACK_LINE(166)
			tmp_x = tr_x;
			HX_STACK_LINE(167)
			tr_x = tl_x;
			HX_STACK_LINE(168)
			tl_x = tmp_x;
			HX_STACK_LINE(170)
			tmp_y = tr_y;
			HX_STACK_LINE(171)
			tr_y = tl_y;
			HX_STACK_LINE(172)
			tl_y = tmp_y;
			HX_STACK_LINE(175)
			tmp_x = br_x;
			HX_STACK_LINE(176)
			br_x = bl_x;
			HX_STACK_LINE(177)
			bl_x = tmp_x;
			HX_STACK_LINE(179)
			tmp_y = br_y;
			HX_STACK_LINE(180)
			br_y = bl_y;
			HX_STACK_LINE(181)
			bl_y = tmp_y;
		}
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(184)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(184)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(184)
			_this->u = tl_x;
			HX_STACK_LINE(184)
			_this->v = tl_y;
			HX_STACK_LINE(184)
			_this;
		}
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(185)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(185)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(185)
			_this->u = tr_x;
			HX_STACK_LINE(185)
			_this->v = tr_y;
			HX_STACK_LINE(185)
			_this;
		}
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(186)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(186)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(186)
			_this->u = br_x;
			HX_STACK_LINE(186)
			_this->v = br_y;
			HX_STACK_LINE(186)
			_this;
		}
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(188)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(188)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(188)
			_this->u = bl_x;
			HX_STACK_LINE(188)
			_this->v = bl_y;
			HX_STACK_LINE(188)
			_this;
		}
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(189)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(189)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(189)
			_this->u = tl_x;
			HX_STACK_LINE(189)
			_this->v = tl_y;
			HX_STACK_LINE(189)
			_this;
		}
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			::phoenix::geometry::Vertex tmp16 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(190)
			::phoenix::geometry::TextureCoord tmp17 = tmp16->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(190)
			::phoenix::geometry::TextureCoord _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(190)
			_this->u = br_x;
			HX_STACK_LINE(190)
			_this->v = br_y;
			HX_STACK_LINE(190)
			_this;
		}
		HX_STACK_LINE(193)
		this->set_dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(QuadGeometry_obj,uv_space,(void))

Void QuadGeometry_obj::resize_xy( Float _x,Float _y){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","resize_xy",0xb5fb6d14,"phoenix.geometry.QuadGeometry.resize_xy","phoenix/geometry/QuadGeometry.hx",197,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_LINE(199)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		if ((tmp1)){
			HX_STACK_LINE(199)
			return null();
		}
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(201)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(201)
			_this->ignore_listeners = true;
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				_this->x = (int)0;
				HX_STACK_LINE(201)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				if ((tmp3)){
					HX_STACK_LINE(201)
					_this->x;
				}
				else{
					HX_STACK_LINE(201)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(201)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(201)
					if ((tmp4)){
						HX_STACK_LINE(201)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(201)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(201)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(201)
						tmp5 = false;
					}
					HX_STACK_LINE(201)
					if ((tmp5)){
						HX_STACK_LINE(201)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(201)
					_this->x;
				}
			}
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				_this->y = (int)0;
				HX_STACK_LINE(201)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				if ((tmp3)){
					HX_STACK_LINE(201)
					_this->y;
				}
				else{
					HX_STACK_LINE(201)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(201)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(201)
					if ((tmp4)){
						HX_STACK_LINE(201)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(201)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(201)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(201)
						tmp5 = false;
					}
					HX_STACK_LINE(201)
					if ((tmp5)){
						HX_STACK_LINE(201)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(201)
					_this->y;
				}
			}
			HX_STACK_LINE(201)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(201)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(201)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			if ((tmp3)){
				HX_STACK_LINE(201)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(201)
				tmp4 = false;
			}
			HX_STACK_LINE(201)
			if ((tmp4)){
				HX_STACK_LINE(201)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(201)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(201)
			if ((tmp5)){
				HX_STACK_LINE(201)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(201)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(201)
				tmp6 = false;
			}
			HX_STACK_LINE(201)
			if ((tmp6)){
				HX_STACK_LINE(201)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(201)
			_this;
		}
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(202)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(202)
			_this->ignore_listeners = true;
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(202)
				_this->x = _x;
				HX_STACK_LINE(202)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				if ((tmp3)){
					HX_STACK_LINE(202)
					_this->x;
				}
				else{
					HX_STACK_LINE(202)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(202)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(202)
					if ((tmp4)){
						HX_STACK_LINE(202)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(202)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(202)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(202)
						tmp5 = false;
					}
					HX_STACK_LINE(202)
					if ((tmp5)){
						HX_STACK_LINE(202)
						Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(202)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(202)
					_this->x;
				}
			}
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(202)
				_this->y = (int)0;
				HX_STACK_LINE(202)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				if ((tmp3)){
					HX_STACK_LINE(202)
					_this->y;
				}
				else{
					HX_STACK_LINE(202)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(202)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(202)
					if ((tmp4)){
						HX_STACK_LINE(202)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(202)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(202)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(202)
						tmp5 = false;
					}
					HX_STACK_LINE(202)
					if ((tmp5)){
						HX_STACK_LINE(202)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(202)
					_this->y;
				}
			}
			HX_STACK_LINE(202)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(202)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			if ((tmp3)){
				HX_STACK_LINE(202)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(202)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(202)
				tmp4 = false;
			}
			HX_STACK_LINE(202)
			if ((tmp4)){
				HX_STACK_LINE(202)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(202)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			if ((tmp5)){
				HX_STACK_LINE(202)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(202)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(202)
				tmp6 = false;
			}
			HX_STACK_LINE(202)
			if ((tmp6)){
				HX_STACK_LINE(202)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(202)
			_this;
		}
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(203)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(203)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(203)
			_this->ignore_listeners = true;
			HX_STACK_LINE(203)
			{
				HX_STACK_LINE(203)
				_this->x = _x;
				HX_STACK_LINE(203)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(203)
				if ((tmp3)){
					HX_STACK_LINE(203)
					_this->x;
				}
				else{
					HX_STACK_LINE(203)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(203)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(203)
					if ((tmp4)){
						HX_STACK_LINE(203)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(203)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(203)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(203)
						tmp5 = false;
					}
					HX_STACK_LINE(203)
					if ((tmp5)){
						HX_STACK_LINE(203)
						Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(203)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(203)
					_this->x;
				}
			}
			HX_STACK_LINE(203)
			{
				HX_STACK_LINE(203)
				_this->y = _y;
				HX_STACK_LINE(203)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(203)
				if ((tmp3)){
					HX_STACK_LINE(203)
					_this->y;
				}
				else{
					HX_STACK_LINE(203)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(203)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(203)
					if ((tmp4)){
						HX_STACK_LINE(203)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(203)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(203)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(203)
						tmp5 = false;
					}
					HX_STACK_LINE(203)
					if ((tmp5)){
						HX_STACK_LINE(203)
						Float tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(203)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(203)
					_this->y;
				}
			}
			HX_STACK_LINE(203)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(203)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			if ((tmp3)){
				HX_STACK_LINE(203)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(203)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(203)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(203)
				tmp4 = false;
			}
			HX_STACK_LINE(203)
			if ((tmp4)){
				HX_STACK_LINE(203)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(203)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(203)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			if ((tmp5)){
				HX_STACK_LINE(203)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(203)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(203)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(203)
				tmp6 = false;
			}
			HX_STACK_LINE(203)
			if ((tmp6)){
				HX_STACK_LINE(203)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(203)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(203)
			_this;
		}
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(205)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(205)
			_this->ignore_listeners = true;
			HX_STACK_LINE(205)
			{
				HX_STACK_LINE(205)
				_this->x = (int)0;
				HX_STACK_LINE(205)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(205)
				if ((tmp3)){
					HX_STACK_LINE(205)
					_this->x;
				}
				else{
					HX_STACK_LINE(205)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(205)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(205)
					if ((tmp4)){
						HX_STACK_LINE(205)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(205)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(205)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(205)
						tmp5 = false;
					}
					HX_STACK_LINE(205)
					if ((tmp5)){
						HX_STACK_LINE(205)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(205)
					_this->x;
				}
			}
			HX_STACK_LINE(205)
			{
				HX_STACK_LINE(205)
				_this->y = _y;
				HX_STACK_LINE(205)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(205)
				if ((tmp3)){
					HX_STACK_LINE(205)
					_this->y;
				}
				else{
					HX_STACK_LINE(205)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(205)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(205)
					if ((tmp4)){
						HX_STACK_LINE(205)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(205)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(205)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(205)
						tmp5 = false;
					}
					HX_STACK_LINE(205)
					if ((tmp5)){
						HX_STACK_LINE(205)
						Float tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(205)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(205)
					_this->y;
				}
			}
			HX_STACK_LINE(205)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(205)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(205)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(205)
			if ((tmp3)){
				HX_STACK_LINE(205)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(205)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(205)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(205)
				tmp4 = false;
			}
			HX_STACK_LINE(205)
			if ((tmp4)){
				HX_STACK_LINE(205)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(205)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(205)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(205)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(205)
			if ((tmp5)){
				HX_STACK_LINE(205)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(205)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(205)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(205)
				tmp6 = false;
			}
			HX_STACK_LINE(205)
			if ((tmp6)){
				HX_STACK_LINE(205)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(205)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(205)
			_this;
		}
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(206)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(206)
			_this->ignore_listeners = true;
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				_this->x = (int)0;
				HX_STACK_LINE(206)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(206)
				if ((tmp3)){
					HX_STACK_LINE(206)
					_this->x;
				}
				else{
					HX_STACK_LINE(206)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(206)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(206)
					if ((tmp4)){
						HX_STACK_LINE(206)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(206)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(206)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(206)
						tmp5 = false;
					}
					HX_STACK_LINE(206)
					if ((tmp5)){
						HX_STACK_LINE(206)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(206)
					_this->x;
				}
			}
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				_this->y = (int)0;
				HX_STACK_LINE(206)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(206)
				if ((tmp3)){
					HX_STACK_LINE(206)
					_this->y;
				}
				else{
					HX_STACK_LINE(206)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(206)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(206)
					if ((tmp4)){
						HX_STACK_LINE(206)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(206)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(206)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(206)
						tmp5 = false;
					}
					HX_STACK_LINE(206)
					if ((tmp5)){
						HX_STACK_LINE(206)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(206)
					_this->y;
				}
			}
			HX_STACK_LINE(206)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(206)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			if ((tmp3)){
				HX_STACK_LINE(206)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(206)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(206)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(206)
				tmp4 = false;
			}
			HX_STACK_LINE(206)
			if ((tmp4)){
				HX_STACK_LINE(206)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(206)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(206)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			if ((tmp5)){
				HX_STACK_LINE(206)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(206)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(206)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(206)
				tmp6 = false;
			}
			HX_STACK_LINE(206)
			if ((tmp6)){
				HX_STACK_LINE(206)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(206)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(206)
			_this;
		}
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(207)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(207)
			_this->ignore_listeners = true;
			HX_STACK_LINE(207)
			{
				HX_STACK_LINE(207)
				_this->x = _x;
				HX_STACK_LINE(207)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(207)
				if ((tmp3)){
					HX_STACK_LINE(207)
					_this->x;
				}
				else{
					HX_STACK_LINE(207)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(207)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(207)
					if ((tmp4)){
						HX_STACK_LINE(207)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(207)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(207)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(207)
						tmp5 = false;
					}
					HX_STACK_LINE(207)
					if ((tmp5)){
						HX_STACK_LINE(207)
						Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(207)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(207)
					_this->x;
				}
			}
			HX_STACK_LINE(207)
			{
				HX_STACK_LINE(207)
				_this->y = _y;
				HX_STACK_LINE(207)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(207)
				if ((tmp3)){
					HX_STACK_LINE(207)
					_this->y;
				}
				else{
					HX_STACK_LINE(207)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(207)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(207)
					if ((tmp4)){
						HX_STACK_LINE(207)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(207)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(207)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(207)
						tmp5 = false;
					}
					HX_STACK_LINE(207)
					if ((tmp5)){
						HX_STACK_LINE(207)
						Float tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(207)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(207)
					_this->y;
				}
			}
			HX_STACK_LINE(207)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(207)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			if ((tmp3)){
				HX_STACK_LINE(207)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(207)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(207)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(207)
				tmp4 = false;
			}
			HX_STACK_LINE(207)
			if ((tmp4)){
				HX_STACK_LINE(207)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(207)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(207)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(207)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(207)
			if ((tmp5)){
				HX_STACK_LINE(207)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(207)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(207)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(207)
				tmp6 = false;
			}
			HX_STACK_LINE(207)
			if ((tmp6)){
				HX_STACK_LINE(207)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(207)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(207)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(QuadGeometry_obj,resize_xy,(void))

Void QuadGeometry_obj::resize( ::phoenix::Vector quad){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","resize",0x7127918c,"phoenix.geometry.QuadGeometry.resize","phoenix/geometry/QuadGeometry.hx",211,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_LINE(213)
		Float tmp = quad->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		Float tmp1 = quad->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		this->resize_xy(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,resize,(void))

Void QuadGeometry_obj::set( ::phoenix::Rectangle quad){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set",0xa66f350a,"phoenix.geometry.QuadGeometry.set","phoenix/geometry/QuadGeometry.hx",217,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(quad,"quad")
		HX_STACK_LINE(219)
		Float tmp = quad->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		Float tmp1 = quad->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		Float tmp2 = quad->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		Float tmp3 = quad->h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		this->set_xywh(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set,(void))

Void QuadGeometry_obj::set_xywh( Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_xywh",0x93a135e7,"phoenix.geometry.QuadGeometry.set_xywh","phoenix/geometry/QuadGeometry.hx",223,0x485a4ac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(225)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		if ((tmp1)){
			HX_STACK_LINE(225)
			return null();
		}
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(228)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(228)
			_this->ignore_listeners = true;
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				_this->x = (int)0;
				HX_STACK_LINE(228)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(228)
				if ((tmp3)){
					HX_STACK_LINE(228)
					_this->x;
				}
				else{
					HX_STACK_LINE(228)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(228)
					if ((tmp4)){
						HX_STACK_LINE(228)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(228)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(228)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(228)
						tmp5 = false;
					}
					HX_STACK_LINE(228)
					if ((tmp5)){
						HX_STACK_LINE(228)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(228)
					_this->x;
				}
			}
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				_this->y = (int)0;
				HX_STACK_LINE(228)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(228)
				if ((tmp3)){
					HX_STACK_LINE(228)
					_this->y;
				}
				else{
					HX_STACK_LINE(228)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(228)
					if ((tmp4)){
						HX_STACK_LINE(228)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(228)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(228)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(228)
						tmp5 = false;
					}
					HX_STACK_LINE(228)
					if ((tmp5)){
						HX_STACK_LINE(228)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(228)
					_this->y;
				}
			}
			HX_STACK_LINE(228)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(228)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(228)
			if ((tmp3)){
				HX_STACK_LINE(228)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(228)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(228)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(228)
				tmp4 = false;
			}
			HX_STACK_LINE(228)
			if ((tmp4)){
				HX_STACK_LINE(228)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(228)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(228)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(228)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(228)
			if ((tmp5)){
				HX_STACK_LINE(228)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(228)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(228)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(228)
				tmp6 = false;
			}
			HX_STACK_LINE(228)
			if ((tmp6)){
				HX_STACK_LINE(228)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(228)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(228)
			_this;
		}
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(230)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(230)
			_this->ignore_listeners = true;
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				_this->x = _w;
				HX_STACK_LINE(230)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				if ((tmp3)){
					HX_STACK_LINE(230)
					_this->x;
				}
				else{
					HX_STACK_LINE(230)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(230)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(230)
					if ((tmp4)){
						HX_STACK_LINE(230)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(230)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(230)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(230)
						tmp5 = false;
					}
					HX_STACK_LINE(230)
					if ((tmp5)){
						HX_STACK_LINE(230)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(230)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(230)
					_this->x;
				}
			}
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				_this->y = (int)0;
				HX_STACK_LINE(230)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				if ((tmp3)){
					HX_STACK_LINE(230)
					_this->y;
				}
				else{
					HX_STACK_LINE(230)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(230)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(230)
					if ((tmp4)){
						HX_STACK_LINE(230)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(230)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(230)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(230)
						tmp5 = false;
					}
					HX_STACK_LINE(230)
					if ((tmp5)){
						HX_STACK_LINE(230)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(230)
					_this->y;
				}
			}
			HX_STACK_LINE(230)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(230)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			if ((tmp3)){
				HX_STACK_LINE(230)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(230)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(230)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(230)
				tmp4 = false;
			}
			HX_STACK_LINE(230)
			if ((tmp4)){
				HX_STACK_LINE(230)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(230)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(230)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(230)
			if ((tmp5)){
				HX_STACK_LINE(230)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(230)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(230)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(230)
				tmp6 = false;
			}
			HX_STACK_LINE(230)
			if ((tmp6)){
				HX_STACK_LINE(230)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(230)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(230)
			_this;
		}
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(232)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(232)
			_this->ignore_listeners = true;
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				_this->x = _w;
				HX_STACK_LINE(232)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				if ((tmp3)){
					HX_STACK_LINE(232)
					_this->x;
				}
				else{
					HX_STACK_LINE(232)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(232)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(232)
					if ((tmp4)){
						HX_STACK_LINE(232)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(232)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(232)
						tmp5 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp5)){
						HX_STACK_LINE(232)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(232)
					_this->x;
				}
			}
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				_this->y = _h;
				HX_STACK_LINE(232)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				if ((tmp3)){
					HX_STACK_LINE(232)
					_this->y;
				}
				else{
					HX_STACK_LINE(232)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(232)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(232)
					if ((tmp4)){
						HX_STACK_LINE(232)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(232)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(232)
						tmp5 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp5)){
						HX_STACK_LINE(232)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(232)
					_this->y;
				}
			}
			HX_STACK_LINE(232)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(232)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(232)
			if ((tmp3)){
				HX_STACK_LINE(232)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(232)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(232)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(232)
				tmp4 = false;
			}
			HX_STACK_LINE(232)
			if ((tmp4)){
				HX_STACK_LINE(232)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(232)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(232)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(232)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(232)
			if ((tmp5)){
				HX_STACK_LINE(232)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(232)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(232)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(232)
				tmp6 = false;
			}
			HX_STACK_LINE(232)
			if ((tmp6)){
				HX_STACK_LINE(232)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(232)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(232)
			_this;
		}
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(235)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(235)
			_this->ignore_listeners = true;
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				_this->x = (int)0;
				HX_STACK_LINE(235)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(235)
				if ((tmp3)){
					HX_STACK_LINE(235)
					_this->x;
				}
				else{
					HX_STACK_LINE(235)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(235)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(235)
					if ((tmp4)){
						HX_STACK_LINE(235)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(235)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(235)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(235)
						tmp5 = false;
					}
					HX_STACK_LINE(235)
					if ((tmp5)){
						HX_STACK_LINE(235)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(235)
					_this->x;
				}
			}
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				_this->y = _h;
				HX_STACK_LINE(235)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(235)
				if ((tmp3)){
					HX_STACK_LINE(235)
					_this->y;
				}
				else{
					HX_STACK_LINE(235)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(235)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(235)
					if ((tmp4)){
						HX_STACK_LINE(235)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(235)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(235)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(235)
						tmp5 = false;
					}
					HX_STACK_LINE(235)
					if ((tmp5)){
						HX_STACK_LINE(235)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(235)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(235)
					_this->y;
				}
			}
			HX_STACK_LINE(235)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(235)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			if ((tmp3)){
				HX_STACK_LINE(235)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(235)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(235)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(235)
				tmp4 = false;
			}
			HX_STACK_LINE(235)
			if ((tmp4)){
				HX_STACK_LINE(235)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(235)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(235)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(235)
			if ((tmp5)){
				HX_STACK_LINE(235)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(235)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(235)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(235)
				tmp6 = false;
			}
			HX_STACK_LINE(235)
			if ((tmp6)){
				HX_STACK_LINE(235)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(235)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(235)
			_this;
		}
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(237)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(237)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(237)
			_this->ignore_listeners = true;
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				_this->x = (int)0;
				HX_STACK_LINE(237)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(237)
				if ((tmp3)){
					HX_STACK_LINE(237)
					_this->x;
				}
				else{
					HX_STACK_LINE(237)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(237)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(237)
					if ((tmp4)){
						HX_STACK_LINE(237)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(237)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(237)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(237)
						tmp5 = false;
					}
					HX_STACK_LINE(237)
					if ((tmp5)){
						HX_STACK_LINE(237)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(237)
					_this->x;
				}
			}
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				_this->y = (int)0;
				HX_STACK_LINE(237)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(237)
				if ((tmp3)){
					HX_STACK_LINE(237)
					_this->y;
				}
				else{
					HX_STACK_LINE(237)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(237)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(237)
					if ((tmp4)){
						HX_STACK_LINE(237)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(237)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(237)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(237)
						tmp5 = false;
					}
					HX_STACK_LINE(237)
					if ((tmp5)){
						HX_STACK_LINE(237)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(237)
					_this->y;
				}
			}
			HX_STACK_LINE(237)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(237)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			if ((tmp3)){
				HX_STACK_LINE(237)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(237)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(237)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(237)
				tmp4 = false;
			}
			HX_STACK_LINE(237)
			if ((tmp4)){
				HX_STACK_LINE(237)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(237)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(237)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			if ((tmp5)){
				HX_STACK_LINE(237)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(237)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(237)
				tmp6 = false;
			}
			HX_STACK_LINE(237)
			if ((tmp6)){
				HX_STACK_LINE(237)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(237)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(237)
			_this;
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(239)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(239)
			_this->ignore_listeners = true;
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				_this->x = _w;
				HX_STACK_LINE(239)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(239)
				if ((tmp3)){
					HX_STACK_LINE(239)
					_this->x;
				}
				else{
					HX_STACK_LINE(239)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(239)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(239)
					if ((tmp4)){
						HX_STACK_LINE(239)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(239)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(239)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(239)
						tmp5 = false;
					}
					HX_STACK_LINE(239)
					if ((tmp5)){
						HX_STACK_LINE(239)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(239)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(239)
					_this->x;
				}
			}
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				_this->y = _h;
				HX_STACK_LINE(239)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(239)
				if ((tmp3)){
					HX_STACK_LINE(239)
					_this->y;
				}
				else{
					HX_STACK_LINE(239)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(239)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(239)
					if ((tmp4)){
						HX_STACK_LINE(239)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(239)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(239)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(239)
						tmp5 = false;
					}
					HX_STACK_LINE(239)
					if ((tmp5)){
						HX_STACK_LINE(239)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(239)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(239)
					_this->y;
				}
			}
			HX_STACK_LINE(239)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(239)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(239)
			if ((tmp3)){
				HX_STACK_LINE(239)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(239)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(239)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(239)
				tmp4 = false;
			}
			HX_STACK_LINE(239)
			if ((tmp4)){
				HX_STACK_LINE(239)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(239)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(239)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(239)
			if ((tmp5)){
				HX_STACK_LINE(239)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(239)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(239)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(239)
				tmp6 = false;
			}
			HX_STACK_LINE(239)
			if ((tmp6)){
				HX_STACK_LINE(239)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(239)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(239)
			_this;
		}
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(241)
				::phoenix::Vector tmp4 = tmp3->local->pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(241)
				::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(241)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(241)
				_this->ignore_listeners = true;
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					_this->x = _x;
					HX_STACK_LINE(241)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(241)
					if ((tmp5)){
						HX_STACK_LINE(241)
						_this->x;
					}
					else{
						HX_STACK_LINE(241)
						bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(241)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(241)
						if ((tmp6)){
							HX_STACK_LINE(241)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(241)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(241)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(241)
							tmp7 = false;
						}
						HX_STACK_LINE(241)
						if ((tmp7)){
							HX_STACK_LINE(241)
							Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(241)
							_this->listen_x(tmp8);
						}
						HX_STACK_LINE(241)
						_this->x;
					}
				}
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					_this->y = _y;
					HX_STACK_LINE(241)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(241)
					if ((tmp5)){
						HX_STACK_LINE(241)
						_this->y;
					}
					else{
						HX_STACK_LINE(241)
						bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(241)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(241)
						if ((tmp6)){
							HX_STACK_LINE(241)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(241)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(241)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(241)
							tmp7 = false;
						}
						HX_STACK_LINE(241)
						if ((tmp7)){
							HX_STACK_LINE(241)
							Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(241)
							_this->listen_y(tmp8);
						}
						HX_STACK_LINE(241)
						_this->y;
					}
				}
				HX_STACK_LINE(241)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(241)
				bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(241)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(241)
				if ((tmp5)){
					HX_STACK_LINE(241)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(241)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(241)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(241)
					tmp6 = false;
				}
				HX_STACK_LINE(241)
				if ((tmp6)){
					HX_STACK_LINE(241)
					Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(241)
					_this->listen_x(tmp7);
				}
				HX_STACK_LINE(241)
				bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(241)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(241)
				if ((tmp7)){
					HX_STACK_LINE(241)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(241)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(241)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(241)
					tmp8 = false;
				}
				HX_STACK_LINE(241)
				if ((tmp8)){
					HX_STACK_LINE(241)
					Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(241)
					_this->listen_y(tmp9);
				}
				HX_STACK_LINE(241)
				tmp2 = _this;
			}
			HX_STACK_LINE(241)
			::phoenix::Vector value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(241)
				::phoenix::Spatial _this = tmp3->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(241)
				_this->pos = value;
				HX_STACK_LINE(241)
				bool tmp4 = (value != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(241)
				if ((tmp4)){
					HX_STACK_LINE(241)
					::phoenix::Vector tmp5 = _this->pos;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(241)
					Dynamic tmp6 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(241)
					::phoenix::Vector_obj::Listen(tmp5,tmp6);
					HX_STACK_LINE(241)
					{
						HX_STACK_LINE(241)
						bool tmp7 = (_this->pos_changed != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(241)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(241)
						if ((tmp7)){
							HX_STACK_LINE(241)
							bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(241)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(241)
							tmp8 = !(tmp10);
						}
						else{
							HX_STACK_LINE(241)
							tmp8 = false;
						}
						HX_STACK_LINE(241)
						if ((tmp8)){
							HX_STACK_LINE(241)
							::phoenix::Vector tmp9 = _this->pos;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(241)
							_this->pos_changed(tmp9);
						}
					}
				}
				HX_STACK_LINE(241)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(QuadGeometry_obj,set_xywh,(void))

bool QuadGeometry_obj::set_flipx( bool _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_flipx",0x339524f6,"phoenix.geometry.QuadGeometry.set_flipx","phoenix/geometry/QuadGeometry.hx",245,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(248)
	this->flipx = _val;
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		if ((tmp1)){
			HX_STACK_LINE(250)
			Dynamic();
		}
		else{
			HX_STACK_LINE(250)
			Float tmp2 = this->_uv_w;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			Float sz_x = tmp2;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(250)
			Float tmp3 = this->_uv_h;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(250)
			Float sz_y = tmp3;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(250)
			Float tmp4 = this->_uv_x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			Float tl_x = tmp4;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(250)
			Float tmp5 = this->_uv_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			Float tl_y = tmp5;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(250)
			this->_uv_x = tl_x;
			HX_STACK_LINE(250)
			this->_uv_y = tl_y;
			HX_STACK_LINE(250)
			this->_uv_w = sz_x;
			HX_STACK_LINE(250)
			this->_uv_h = sz_y;
			HX_STACK_LINE(250)
			Float tmp6 = (tl_x + sz_x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(250)
			Float tr_x = tmp6;		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(250)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(250)
			Float tmp7 = (tl_x + sz_x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(250)
			Float br_x = tmp7;		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(250)
			Float tmp8 = (tl_y + sz_y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(250)
			Float br_y = tmp8;		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(250)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(250)
			Float tmp9 = (tl_y + sz_y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(250)
			Float bl_y = tmp9;		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(250)
			Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(250)
			Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(250)
			int tmp10 = this->uv_angle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(250)
			Float tmp11 = (Float(tmp10) / Float((int)90));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(250)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(250)
			int rotations = tmp12;		HX_STACK_VAR(rotations,"rotations");
			HX_STACK_LINE(250)
			int tmp13 = rotations;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(250)
			Float tmp14 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(250)
			int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(250)
			int tmp16 = ((int)4 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(250)
			int tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(250)
			rotations = tmp17;
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(250)
				while((true)){
					HX_STACK_LINE(250)
					bool tmp18 = (_g < rotations);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(250)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(250)
					if ((tmp19)){
						HX_STACK_LINE(250)
						break;
					}
					HX_STACK_LINE(250)
					int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(250)
					int r = tmp20;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(250)
					{
						HX_STACK_LINE(250)
						tmp_x = tl_x;
						HX_STACK_LINE(250)
						tl_x = bl_x;
						HX_STACK_LINE(250)
						bl_x = br_x;
						HX_STACK_LINE(250)
						br_x = tr_x;
						HX_STACK_LINE(250)
						tr_x = tmp_x;
						HX_STACK_LINE(250)
						tmp_y = tl_y;
						HX_STACK_LINE(250)
						tl_y = bl_y;
						HX_STACK_LINE(250)
						bl_y = br_y;
						HX_STACK_LINE(250)
						br_y = tr_y;
						HX_STACK_LINE(250)
						tr_y = tmp_y;
					}
				}
			}
			HX_STACK_LINE(250)
			bool tmp18 = this->flipy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(250)
			if ((tmp18)){
				HX_STACK_LINE(250)
				tmp_y = bl_y;
				HX_STACK_LINE(250)
				bl_y = tl_y;
				HX_STACK_LINE(250)
				tl_y = tmp_y;
				HX_STACK_LINE(250)
				tmp_x = bl_x;
				HX_STACK_LINE(250)
				bl_x = tl_x;
				HX_STACK_LINE(250)
				tl_x = tmp_x;
				HX_STACK_LINE(250)
				tmp_y = br_y;
				HX_STACK_LINE(250)
				br_y = tr_y;
				HX_STACK_LINE(250)
				tr_y = tmp_y;
				HX_STACK_LINE(250)
				tmp_x = br_x;
				HX_STACK_LINE(250)
				br_x = tr_x;
				HX_STACK_LINE(250)
				tr_x = tmp_x;
			}
			HX_STACK_LINE(250)
			bool tmp19 = this->flipx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(250)
			if ((tmp19)){
				HX_STACK_LINE(250)
				tmp_x = tr_x;
				HX_STACK_LINE(250)
				tr_x = tl_x;
				HX_STACK_LINE(250)
				tl_x = tmp_x;
				HX_STACK_LINE(250)
				tmp_y = tr_y;
				HX_STACK_LINE(250)
				tr_y = tl_y;
				HX_STACK_LINE(250)
				tl_y = tmp_y;
				HX_STACK_LINE(250)
				tmp_x = br_x;
				HX_STACK_LINE(250)
				br_x = bl_x;
				HX_STACK_LINE(250)
				bl_x = tmp_x;
				HX_STACK_LINE(250)
				tmp_y = br_y;
				HX_STACK_LINE(250)
				br_y = bl_y;
				HX_STACK_LINE(250)
				bl_y = tmp_y;
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(250)
				_this->u = tl_x;
				HX_STACK_LINE(250)
				_this->v = tl_y;
				HX_STACK_LINE(250)
				_this;
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(250)
				_this->u = tr_x;
				HX_STACK_LINE(250)
				_this->v = tr_y;
				HX_STACK_LINE(250)
				_this;
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(250)
				_this->u = br_x;
				HX_STACK_LINE(250)
				_this->v = br_y;
				HX_STACK_LINE(250)
				_this;
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(250)
				_this->u = bl_x;
				HX_STACK_LINE(250)
				_this->v = bl_y;
				HX_STACK_LINE(250)
				_this;
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(250)
				_this->u = tl_x;
				HX_STACK_LINE(250)
				_this->v = tl_y;
				HX_STACK_LINE(250)
				_this;
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(250)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(250)
				_this->u = br_x;
				HX_STACK_LINE(250)
				_this->v = br_y;
				HX_STACK_LINE(250)
				_this;
			}
			HX_STACK_LINE(250)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(252)
	bool tmp = this->flipx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_flipx,return )

bool QuadGeometry_obj::set_flipy( bool _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_flipy",0x339524f7,"phoenix.geometry.QuadGeometry.set_flipy","phoenix/geometry/QuadGeometry.hx",256,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(259)
	this->flipy = _val;
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		if ((tmp1)){
			HX_STACK_LINE(261)
			Dynamic();
		}
		else{
			HX_STACK_LINE(261)
			Float tmp2 = this->_uv_w;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			Float sz_x = tmp2;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(261)
			Float tmp3 = this->_uv_h;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			Float sz_y = tmp3;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(261)
			Float tmp4 = this->_uv_x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			Float tl_x = tmp4;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(261)
			Float tmp5 = this->_uv_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(261)
			Float tl_y = tmp5;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(261)
			this->_uv_x = tl_x;
			HX_STACK_LINE(261)
			this->_uv_y = tl_y;
			HX_STACK_LINE(261)
			this->_uv_w = sz_x;
			HX_STACK_LINE(261)
			this->_uv_h = sz_y;
			HX_STACK_LINE(261)
			Float tmp6 = (tl_x + sz_x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(261)
			Float tr_x = tmp6;		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(261)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(261)
			Float tmp7 = (tl_x + sz_x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			Float br_x = tmp7;		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(261)
			Float tmp8 = (tl_y + sz_y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			Float br_y = tmp8;		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(261)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(261)
			Float tmp9 = (tl_y + sz_y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			Float bl_y = tmp9;		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(261)
			Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(261)
			Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(261)
			int tmp10 = this->uv_angle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			Float tmp11 = (Float(tmp10) / Float((int)90));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			int rotations = tmp12;		HX_STACK_VAR(rotations,"rotations");
			HX_STACK_LINE(261)
			int tmp13 = rotations;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			Float tmp14 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			int tmp16 = ((int)4 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(261)
			int tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(261)
			rotations = tmp17;
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(261)
				while((true)){
					HX_STACK_LINE(261)
					bool tmp18 = (_g < rotations);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(261)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(261)
					if ((tmp19)){
						HX_STACK_LINE(261)
						break;
					}
					HX_STACK_LINE(261)
					int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(261)
					int r = tmp20;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						tmp_x = tl_x;
						HX_STACK_LINE(261)
						tl_x = bl_x;
						HX_STACK_LINE(261)
						bl_x = br_x;
						HX_STACK_LINE(261)
						br_x = tr_x;
						HX_STACK_LINE(261)
						tr_x = tmp_x;
						HX_STACK_LINE(261)
						tmp_y = tl_y;
						HX_STACK_LINE(261)
						tl_y = bl_y;
						HX_STACK_LINE(261)
						bl_y = br_y;
						HX_STACK_LINE(261)
						br_y = tr_y;
						HX_STACK_LINE(261)
						tr_y = tmp_y;
					}
				}
			}
			HX_STACK_LINE(261)
			bool tmp18 = this->flipy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(261)
			if ((tmp18)){
				HX_STACK_LINE(261)
				tmp_y = bl_y;
				HX_STACK_LINE(261)
				bl_y = tl_y;
				HX_STACK_LINE(261)
				tl_y = tmp_y;
				HX_STACK_LINE(261)
				tmp_x = bl_x;
				HX_STACK_LINE(261)
				bl_x = tl_x;
				HX_STACK_LINE(261)
				tl_x = tmp_x;
				HX_STACK_LINE(261)
				tmp_y = br_y;
				HX_STACK_LINE(261)
				br_y = tr_y;
				HX_STACK_LINE(261)
				tr_y = tmp_y;
				HX_STACK_LINE(261)
				tmp_x = br_x;
				HX_STACK_LINE(261)
				br_x = tr_x;
				HX_STACK_LINE(261)
				tr_x = tmp_x;
			}
			HX_STACK_LINE(261)
			bool tmp19 = this->flipx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(261)
			if ((tmp19)){
				HX_STACK_LINE(261)
				tmp_x = tr_x;
				HX_STACK_LINE(261)
				tr_x = tl_x;
				HX_STACK_LINE(261)
				tl_x = tmp_x;
				HX_STACK_LINE(261)
				tmp_y = tr_y;
				HX_STACK_LINE(261)
				tr_y = tl_y;
				HX_STACK_LINE(261)
				tl_y = tmp_y;
				HX_STACK_LINE(261)
				tmp_x = br_x;
				HX_STACK_LINE(261)
				br_x = bl_x;
				HX_STACK_LINE(261)
				bl_x = tmp_x;
				HX_STACK_LINE(261)
				tmp_y = br_y;
				HX_STACK_LINE(261)
				br_y = bl_y;
				HX_STACK_LINE(261)
				bl_y = tmp_y;
			}
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(261)
				_this->u = tl_x;
				HX_STACK_LINE(261)
				_this->v = tl_y;
				HX_STACK_LINE(261)
				_this;
			}
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(261)
				_this->u = tr_x;
				HX_STACK_LINE(261)
				_this->v = tr_y;
				HX_STACK_LINE(261)
				_this;
			}
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(261)
				_this->u = br_x;
				HX_STACK_LINE(261)
				_this->v = br_y;
				HX_STACK_LINE(261)
				_this;
			}
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(261)
				_this->u = bl_x;
				HX_STACK_LINE(261)
				_this->v = bl_y;
				HX_STACK_LINE(261)
				_this;
			}
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(261)
				_this->u = tl_x;
				HX_STACK_LINE(261)
				_this->v = tl_y;
				HX_STACK_LINE(261)
				_this;
			}
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(261)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(261)
				_this->u = br_x;
				HX_STACK_LINE(261)
				_this->v = br_y;
				HX_STACK_LINE(261)
				_this;
			}
			HX_STACK_LINE(261)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(263)
	bool tmp = this->flipy;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_flipy,return )

int QuadGeometry_obj::set_uv_angle( int _val){
	HX_STACK_FRAME("phoenix.geometry.QuadGeometry","set_uv_angle",0x36bd414a,"phoenix.geometry.QuadGeometry.set_uv_angle","phoenix/geometry/QuadGeometry.hx",267,0x485a4ac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(268)
	{
		HX_STACK_LINE(268)
		int tmp = hx::Mod(_val,(int)90);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(268)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(268)
		if ((tmp2)){
			HX_STACK_LINE(214)
			::String tmp3 = HX_HCSTRING(" ( uv_angle has to be a multiple of 90","\xe0","\xe7","\x01","\x93");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(268)
			::String tmp5 = (HX_HCSTRING("_val % 90 == 0","\xa0","\xbb","\xa6","\x61") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(268)
			::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(268)
			HX_STACK_DO_THROW(tmp6);
		}
	}
	HX_STACK_LINE(269)
	this->uv_angle = _val;
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(270)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		if ((tmp1)){
			HX_STACK_LINE(270)
			Dynamic();
		}
		else{
			HX_STACK_LINE(270)
			Float tmp2 = this->_uv_w;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			Float sz_x = tmp2;		HX_STACK_VAR(sz_x,"sz_x");
			HX_STACK_LINE(270)
			Float tmp3 = this->_uv_h;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(270)
			Float sz_y = tmp3;		HX_STACK_VAR(sz_y,"sz_y");
			HX_STACK_LINE(270)
			Float tmp4 = this->_uv_x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(270)
			Float tl_x = tmp4;		HX_STACK_VAR(tl_x,"tl_x");
			HX_STACK_LINE(270)
			Float tmp5 = this->_uv_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(270)
			Float tl_y = tmp5;		HX_STACK_VAR(tl_y,"tl_y");
			HX_STACK_LINE(270)
			this->_uv_x = tl_x;
			HX_STACK_LINE(270)
			this->_uv_y = tl_y;
			HX_STACK_LINE(270)
			this->_uv_w = sz_x;
			HX_STACK_LINE(270)
			this->_uv_h = sz_y;
			HX_STACK_LINE(270)
			Float tmp6 = (tl_x + sz_x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(270)
			Float tr_x = tmp6;		HX_STACK_VAR(tr_x,"tr_x");
			HX_STACK_LINE(270)
			Float tr_y = tl_y;		HX_STACK_VAR(tr_y,"tr_y");
			HX_STACK_LINE(270)
			Float tmp7 = (tl_x + sz_x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(270)
			Float br_x = tmp7;		HX_STACK_VAR(br_x,"br_x");
			HX_STACK_LINE(270)
			Float tmp8 = (tl_y + sz_y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(270)
			Float br_y = tmp8;		HX_STACK_VAR(br_y,"br_y");
			HX_STACK_LINE(270)
			Float bl_x = tl_x;		HX_STACK_VAR(bl_x,"bl_x");
			HX_STACK_LINE(270)
			Float tmp9 = (tl_y + sz_y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(270)
			Float bl_y = tmp9;		HX_STACK_VAR(bl_y,"bl_y");
			HX_STACK_LINE(270)
			Float tmp_x = ((Float)0.0);		HX_STACK_VAR(tmp_x,"tmp_x");
			HX_STACK_LINE(270)
			Float tmp_y = ((Float)0.0);		HX_STACK_VAR(tmp_y,"tmp_y");
			HX_STACK_LINE(270)
			int tmp10 = this->uv_angle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(270)
			Float tmp11 = (Float(tmp10) / Float((int)90));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(270)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(270)
			int rotations = tmp12;		HX_STACK_VAR(rotations,"rotations");
			HX_STACK_LINE(270)
			int tmp13 = rotations;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(270)
			Float tmp14 = (Float(rotations) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(270)
			int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(270)
			int tmp16 = ((int)4 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(270)
			int tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(270)
			rotations = tmp17;
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(270)
				while((true)){
					HX_STACK_LINE(270)
					bool tmp18 = (_g < rotations);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(270)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(270)
					if ((tmp19)){
						HX_STACK_LINE(270)
						break;
					}
					HX_STACK_LINE(270)
					int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(270)
					int r = tmp20;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(270)
					{
						HX_STACK_LINE(270)
						tmp_x = tl_x;
						HX_STACK_LINE(270)
						tl_x = bl_x;
						HX_STACK_LINE(270)
						bl_x = br_x;
						HX_STACK_LINE(270)
						br_x = tr_x;
						HX_STACK_LINE(270)
						tr_x = tmp_x;
						HX_STACK_LINE(270)
						tmp_y = tl_y;
						HX_STACK_LINE(270)
						tl_y = bl_y;
						HX_STACK_LINE(270)
						bl_y = br_y;
						HX_STACK_LINE(270)
						br_y = tr_y;
						HX_STACK_LINE(270)
						tr_y = tmp_y;
					}
				}
			}
			HX_STACK_LINE(270)
			bool tmp18 = this->flipy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(270)
			if ((tmp18)){
				HX_STACK_LINE(270)
				tmp_y = bl_y;
				HX_STACK_LINE(270)
				bl_y = tl_y;
				HX_STACK_LINE(270)
				tl_y = tmp_y;
				HX_STACK_LINE(270)
				tmp_x = bl_x;
				HX_STACK_LINE(270)
				bl_x = tl_x;
				HX_STACK_LINE(270)
				tl_x = tmp_x;
				HX_STACK_LINE(270)
				tmp_y = br_y;
				HX_STACK_LINE(270)
				br_y = tr_y;
				HX_STACK_LINE(270)
				tr_y = tmp_y;
				HX_STACK_LINE(270)
				tmp_x = br_x;
				HX_STACK_LINE(270)
				br_x = tr_x;
				HX_STACK_LINE(270)
				tr_x = tmp_x;
			}
			HX_STACK_LINE(270)
			bool tmp19 = this->flipx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(270)
			if ((tmp19)){
				HX_STACK_LINE(270)
				tmp_x = tr_x;
				HX_STACK_LINE(270)
				tr_x = tl_x;
				HX_STACK_LINE(270)
				tl_x = tmp_x;
				HX_STACK_LINE(270)
				tmp_y = tr_y;
				HX_STACK_LINE(270)
				tr_y = tl_y;
				HX_STACK_LINE(270)
				tl_y = tmp_y;
				HX_STACK_LINE(270)
				tmp_x = br_x;
				HX_STACK_LINE(270)
				br_x = bl_x;
				HX_STACK_LINE(270)
				bl_x = tmp_x;
				HX_STACK_LINE(270)
				tmp_y = br_y;
				HX_STACK_LINE(270)
				br_y = bl_y;
				HX_STACK_LINE(270)
				bl_y = tmp_y;
			}
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(270)
				_this->u = tl_x;
				HX_STACK_LINE(270)
				_this->v = tl_y;
				HX_STACK_LINE(270)
				_this;
			}
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(270)
				_this->u = tr_x;
				HX_STACK_LINE(270)
				_this->v = tr_y;
				HX_STACK_LINE(270)
				_this;
			}
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(270)
				_this->u = br_x;
				HX_STACK_LINE(270)
				_this->v = br_y;
				HX_STACK_LINE(270)
				_this;
			}
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(270)
				_this->u = bl_x;
				HX_STACK_LINE(270)
				_this->v = bl_y;
				HX_STACK_LINE(270)
				_this;
			}
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(270)
				_this->u = tl_x;
				HX_STACK_LINE(270)
				_this->v = tl_y;
				HX_STACK_LINE(270)
				_this;
			}
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::phoenix::geometry::Vertex tmp20 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord tmp21 = tmp20->uv->uv0;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(270)
				::phoenix::geometry::TextureCoord _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(270)
				_this->u = br_x;
				HX_STACK_LINE(270)
				_this->v = br_y;
				HX_STACK_LINE(270)
				_this;
			}
			HX_STACK_LINE(270)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(271)
	int tmp = this->uv_angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadGeometry_obj,set_uv_angle,return )


QuadGeometry_obj::QuadGeometry_obj()
{
}

Dynamic QuadGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"_uv_x") ) { return _uv_x; }
		if (HX_FIELD_EQ(inName,"_uv_y") ) { return _uv_y; }
		if (HX_FIELD_EQ(inName,"_uv_w") ) { return _uv_w; }
		if (HX_FIELD_EQ(inName,"_uv_h") ) { return _uv_h; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uv_angle") ) { return uv_angle; }
		if (HX_FIELD_EQ(inName,"uv_space") ) { return uv_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xywh") ) { return set_xywh_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resize_xy") ) { return resize_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipx") ) { return set_flipx_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipy") ) { return set_flipy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_uv_angle") ) { return set_uv_angle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flipx") ) { if (inCallProp == hx::paccAlways) return set_flipx(inValue);flipx=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipy") ) { if (inCallProp == hx::paccAlways) return set_flipy(inValue);flipy=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uv_x") ) { _uv_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uv_y") ) { _uv_y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uv_w") ) { _uv_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_uv_h") ) { _uv_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uv_angle") ) { if (inCallProp == hx::paccAlways) return set_uv_angle(inValue);uv_angle=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool QuadGeometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void QuadGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("uv_angle","\x35","\x70","\xbc","\x6d"));
	outFields->push(HX_HCSTRING("_uv_x","\xb9","\xef","\xc0","\x00"));
	outFields->push(HX_HCSTRING("_uv_y","\xba","\xef","\xc0","\x00"));
	outFields->push(HX_HCSTRING("_uv_w","\xb8","\xef","\xc0","\x00"));
	outFields->push(HX_HCSTRING("_uv_h","\xa9","\xef","\xc0","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,flipx),HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(QuadGeometry_obj,flipy),HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02")},
	{hx::fsInt,(int)offsetof(QuadGeometry_obj,uv_angle),HX_HCSTRING("uv_angle","\x35","\x70","\xbc","\x6d")},
	{hx::fsFloat,(int)offsetof(QuadGeometry_obj,_uv_x),HX_HCSTRING("_uv_x","\xb9","\xef","\xc0","\x00")},
	{hx::fsFloat,(int)offsetof(QuadGeometry_obj,_uv_y),HX_HCSTRING("_uv_y","\xba","\xef","\xc0","\x00")},
	{hx::fsFloat,(int)offsetof(QuadGeometry_obj,_uv_w),HX_HCSTRING("_uv_w","\xb8","\xef","\xc0","\x00")},
	{hx::fsFloat,(int)offsetof(QuadGeometry_obj,_uv_h),HX_HCSTRING("_uv_h","\xa9","\xef","\xc0","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("flipx","\x2b","\x45","\x92","\x02"),
	HX_HCSTRING("flipy","\x2c","\x45","\x92","\x02"),
	HX_HCSTRING("uv_angle","\x35","\x70","\xbc","\x6d"),
	HX_HCSTRING("_uv_x","\xb9","\xef","\xc0","\x00"),
	HX_HCSTRING("_uv_y","\xba","\xef","\xc0","\x00"),
	HX_HCSTRING("_uv_w","\xb8","\xef","\xc0","\x00"),
	HX_HCSTRING("_uv_h","\xa9","\xef","\xc0","\x00"),
	HX_HCSTRING("uv","\x61","\x66","\x00","\x00"),
	HX_HCSTRING("uv_space","\x28","\xb9","\x40","\xcc"),
	HX_HCSTRING("resize_xy","\xac","\xd5","\xf2","\xab"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_xywh","\x4f","\xe8","\xc5","\x7d"),
	HX_HCSTRING("set_flipx","\x8e","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_flipy","\x8f","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_uv_angle","\xb2","\x47","\xcf","\x37"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadGeometry_obj::__mClass;

void QuadGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.QuadGeometry","\xd6","\x25","\xf9","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &QuadGeometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadGeometry_obj >;
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
