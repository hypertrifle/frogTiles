#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
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
#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#include <phoenix/geometry/CircleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void CircleGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.CircleGeometry","new",0x661195d1,"phoenix.geometry.CircleGeometry.new","phoenix/geometry/CircleGeometry.hx",17,0x20b87adf)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(19)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	super::__construct(tmp);
	HX_STACK_LINE(21)
	bool tmp1 = (options == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	if ((tmp1)){
		HX_STACK_LINE(22)
		return null();
	}
	HX_STACK_LINE(26)
	Float _radius_x = (int)32;		HX_STACK_VAR(_radius_x,"_radius_x");
	HX_STACK_LINE(27)
	Float _radius_y = (int)32;		HX_STACK_VAR(_radius_y,"_radius_y");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		bool tmp2 = (options->__Field(HX_HCSTRING("end_angle","\x2f","\x65","\x17","\x2a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(29)
			options->__FieldRef(HX_HCSTRING("end_angle","\x2f","\x65","\x17","\x2a")) = (int)360;
		}
		HX_STACK_LINE(29)
		options->__Field(HX_HCSTRING("end_angle","\x2f","\x65","\x17","\x2a"), hx::paccDynamic );
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		bool tmp2 = (options->__Field(HX_HCSTRING("start_angle","\xf6","\x74","\x1b","\x62"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		if ((tmp2)){
			HX_STACK_LINE(30)
			options->__FieldRef(HX_HCSTRING("start_angle","\xf6","\x74","\x1b","\x62")) = (int)0;
		}
		HX_STACK_LINE(30)
		options->__Field(HX_HCSTRING("start_angle","\xf6","\x74","\x1b","\x62"), hx::paccDynamic );
	}
	HX_STACK_LINE(32)
	bool tmp2 = (options->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	if ((tmp2)){
		HX_STACK_LINE(33)
		_radius_x = options->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(34)
		_radius_y = options->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(37)
	bool tmp3 = (options->__Field(HX_HCSTRING("rx","\xc6","\x63","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	if ((tmp3)){
		HX_STACK_LINE(38)
		_radius_x = options->__Field(HX_HCSTRING("rx","\xc6","\x63","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(41)
	bool tmp4 = (options->__Field(HX_HCSTRING("ry","\xc7","\x63","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	if ((tmp4)){
		HX_STACK_LINE(42)
		_radius_y = options->__Field(HX_HCSTRING("ry","\xc7","\x63","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(45)
	bool tmp5 = (options->__Field(HX_HCSTRING("steps","\xa7","\x7b","\x0e","\x84"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	if ((tmp5)){
		HX_STACK_LINE(46)
		bool tmp6 = (options->__Field(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		if ((tmp6)){
			HX_STACK_LINE(47)
			Float tmp7 = _radius_x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			Float tmp8 = _radius_y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			Float tmp9 = ::Math_obj::max(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			Float _max = tmp9;		HX_STACK_VAR(_max,"_max");
			HX_STACK_LINE(48)
			::luxe::utils::Utils tmp10 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(48)
			Float tmp11 = _max;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(48)
			int tmp12 = tmp10->geometry->segments_for_smooth_circle(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(48)
			options->__FieldRef(HX_HCSTRING("steps","\xa7","\x7b","\x0e","\x84")) = tmp12;
		}
		else{
			HX_STACK_LINE(50)
			Float _smooth = options->__Field(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"), hx::paccDynamic );		HX_STACK_VAR(_smooth,"_smooth");
			HX_STACK_LINE(51)
			Float tmp7 = _radius_x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			Float tmp8 = _radius_y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			Float tmp9 = ::Math_obj::max(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			Float _max = tmp9;		HX_STACK_VAR(_max,"_max");
			HX_STACK_LINE(52)
			::luxe::utils::Utils tmp10 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			Float tmp11 = _max;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			Float tmp12 = _smooth;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(52)
			int tmp13 = tmp10->geometry->segments_for_smooth_circle(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(52)
			options->__FieldRef(HX_HCSTRING("steps","\xa7","\x7b","\x0e","\x84")) = tmp13;
		}
	}
	HX_STACK_LINE(57)
	Dynamic tmp6 = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	Dynamic tmp7 = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	Float tmp8 = _radius_x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(57)
	Float tmp9 = _radius_y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(57)
	Dynamic tmp10 = options->__Field(HX_HCSTRING("steps","\xa7","\x7b","\x0e","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(57)
	Dynamic tmp11 = options->__Field(HX_HCSTRING("start_angle","\xf6","\x74","\x1b","\x62"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(57)
	Dynamic tmp12 = options->__Field(HX_HCSTRING("end_angle","\x2f","\x65","\x17","\x2a"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(57)
	this->set(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);
	HX_STACK_LINE(59)
	bool tmp13 = (options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(59)
	if ((tmp13)){
		HX_STACK_LINE(59)
		Dynamic tmp14 = options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(59)
		this->set_visible(tmp14);
	}
}
;
	return null();
}

//CircleGeometry_obj::~CircleGeometry_obj() { }

Dynamic CircleGeometry_obj::__CreateEmpty() { return  new CircleGeometry_obj; }
hx::ObjectPtr< CircleGeometry_obj > CircleGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< CircleGeometry_obj > _result_ = new CircleGeometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic CircleGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleGeometry_obj > _result_ = new CircleGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CircleGeometry_obj::set( Float _x,Float _y,Float _rx,Float _ry,int _steps,hx::Null< Float >  __o__start_angle,hx::Null< Float >  __o__end_angle){
Float _start_angle = __o__start_angle.Default(0);
Float _end_angle = __o__end_angle.Default(360);
	HX_STACK_FRAME("phoenix.geometry.CircleGeometry","set",0x66156113,"phoenix.geometry.CircleGeometry.set","phoenix/geometry/CircleGeometry.hx",63,0x20b87adf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_rx,"_rx")
	HX_STACK_ARG(_ry,"_ry")
	HX_STACK_ARG(_steps,"_steps")
	HX_STACK_ARG(_start_angle,"_start_angle")
	HX_STACK_ARG(_end_angle,"_end_angle")
{
		HX_STACK_LINE(68)
		this->set_primitive_type((int)4);
		HX_STACK_LINE(70)
		Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		Float half_pi = tmp1;		HX_STACK_VAR(half_pi,"half_pi");
		HX_STACK_LINE(71)
		Float tmp2 = (_start_angle * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		Float tmp3 = half_pi;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		Float _start_angle_rad = tmp4;		HX_STACK_VAR(_start_angle_rad,"_start_angle_rad");
		HX_STACK_LINE(72)
		Float tmp5 = (_end_angle * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		Float tmp6 = half_pi;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		Float _end_angle_rad = tmp7;		HX_STACK_VAR(_end_angle_rad,"_end_angle_rad");
		HX_STACK_LINE(74)
		Float tmp8 = (_end_angle_rad - _start_angle_rad);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(74)
		Float _range = tmp8;		HX_STACK_VAR(_range,"_range");
		HX_STACK_LINE(77)
		Float tmp9 = _range;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(77)
		Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(77)
		Float tmp12 = (tmp11 * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(77)
		Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(77)
		int tmp14 = _steps;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(77)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(77)
		int tmp16 = ::Math_obj::ceil(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(77)
		_steps = tmp16;
		HX_STACK_LINE(80)
		Float tmp17 = (Float(_range) / Float(_steps));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(80)
		Float theta = tmp17;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(82)
		Float tmp18 = theta;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(82)
		Float tmp19 = ::Math_obj::tan(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(82)
		Float tangential_factor = tmp19;		HX_STACK_VAR(tangential_factor,"tangential_factor");
		HX_STACK_LINE(83)
		Float tmp20 = theta;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(83)
		Float tmp21 = ::Math_obj::cos(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(83)
		Float radial_factor = tmp21;		HX_STACK_VAR(radial_factor,"radial_factor");
		HX_STACK_LINE(85)
		Float tmp22 = _rx;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(85)
		Float tmp23 = _start_angle_rad;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(85)
		Float tmp24 = ::Math_obj::cos(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(85)
		Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(85)
		Float x = tmp25;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(86)
		Float tmp26 = _rx;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(86)
		Float tmp27 = _start_angle_rad;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(86)
		Float tmp28 = ::Math_obj::sin(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(86)
		Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(86)
		Float y = tmp29;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(89)
		Float tmp30 = (Float(_rx) / Float(_ry));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(89)
		Float radial_ratio = tmp30;		HX_STACK_VAR(radial_ratio,"radial_ratio");
		HX_STACK_LINE(90)
		bool tmp31 = (radial_ratio == (int)0);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(90)
		if ((tmp31)){
			HX_STACK_LINE(91)
			radial_ratio = ((Float)0.000000001);
		}
		HX_STACK_LINE(94)
		int _index = (int)0;		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(95)
		Array< ::Dynamic > _segment_pos = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_segment_pos,"_segment_pos");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			int tmp32 = (_steps + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(96)
			int _g = tmp32;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				bool tmp33 = (_g1 < _g);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(96)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(96)
				if ((tmp34)){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(96)
				int tmp35 = (_g1)++;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(96)
				int i = tmp35;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(98)
				Float __x = x;		HX_STACK_VAR(__x,"__x");
				HX_STACK_LINE(99)
				Float tmp36 = (Float(y) / Float(radial_ratio));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(99)
				Float __y = tmp36;		HX_STACK_VAR(__y,"__y");
				HX_STACK_LINE(102)
				::phoenix::Vector tmp37 = ::phoenix::Vector_obj::__new(__x,__y,null(),null());		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(102)
				::phoenix::Vector _seg = tmp37;		HX_STACK_VAR(_seg,"_seg");
				HX_STACK_LINE(104)
				::phoenix::Vector tmp38 = _seg;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(104)
				_segment_pos->push(tmp38);
				HX_STACK_LINE(107)
				bool tmp39 = (_index > (int)0);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(107)
				if ((tmp39)){
					HX_STACK_LINE(108)
					::phoenix::Vector tmp40 = _seg;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(108)
					::phoenix::Color tmp41 = this->color;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(108)
					::phoenix::geometry::Vertex tmp42 = ::phoenix::geometry::Vertex_obj::__new(tmp40,tmp41,null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(108)
					this->add(tmp42);
				}
				HX_STACK_LINE(112)
				::phoenix::Vector tmp40 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(112)
				::phoenix::Color tmp41 = this->color;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(112)
				::phoenix::geometry::Vertex tmp42 = ::phoenix::geometry::Vertex_obj::__new(tmp40,tmp41,null());		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(112)
				this->add(tmp42);
				HX_STACK_LINE(115)
				::phoenix::Vector tmp43 = _seg;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(115)
				::phoenix::Color tmp44 = this->color;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(115)
				::phoenix::geometry::Vertex tmp45 = ::phoenix::geometry::Vertex_obj::__new(tmp43,tmp44,null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(115)
				this->add(tmp45);
				HX_STACK_LINE(117)
				Float tmp46 = y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(117)
				Float tmp47 = -(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(117)
				Float tx = tmp47;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(118)
				Float ty = x;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(120)
				Float tmp48 = (tx * tangential_factor);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(120)
				hx::AddEq(x,tmp48);
				HX_STACK_LINE(121)
				Float tmp49 = (ty * tangential_factor);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(121)
				hx::AddEq(y,tmp49);
				HX_STACK_LINE(123)
				hx::MultEq(x,radial_factor);
				HX_STACK_LINE(124)
				hx::MultEq(y,radial_factor);
				HX_STACK_LINE(126)
				(_index)++;
			}
		}
		HX_STACK_LINE(130)
		::phoenix::Vector tmp32 = _segment_pos->__get(_steps).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(130)
		::phoenix::Color tmp33 = this->color;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(130)
		::phoenix::geometry::Vertex tmp34 = ::phoenix::geometry::Vertex_obj::__new(tmp32,tmp33,null());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(130)
		this->add(tmp34);
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::phoenix::Vector tmp35 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(133)
			::phoenix::Vector value = tmp35;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::phoenix::Transform tmp36 = this->transform;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(133)
				::phoenix::Spatial _this = tmp36->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(133)
				_this->pos = value;
				HX_STACK_LINE(133)
				bool tmp37 = (value != null());		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(133)
				if ((tmp37)){
					HX_STACK_LINE(133)
					::phoenix::Vector tmp38 = _this->pos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(133)
					Dynamic tmp39 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(133)
					::phoenix::Vector_obj::Listen(tmp38,tmp39);
					HX_STACK_LINE(133)
					{
						HX_STACK_LINE(133)
						bool tmp40 = (_this->pos_changed != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(133)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(133)
						if ((tmp40)){
							HX_STACK_LINE(133)
							bool tmp42 = _this->ignore_listeners;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(133)
							bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(133)
							tmp41 = !(tmp43);
						}
						else{
							HX_STACK_LINE(133)
							tmp41 = false;
						}
						HX_STACK_LINE(133)
						if ((tmp41)){
							HX_STACK_LINE(133)
							::phoenix::Vector tmp42 = _this->pos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(133)
							_this->pos_changed(tmp42);
						}
					}
				}
				HX_STACK_LINE(133)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(CircleGeometry_obj,set,(void))


CircleGeometry_obj::CircleGeometry_obj()
{
}

Dynamic CircleGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircleGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class CircleGeometry_obj::__mClass;

void CircleGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.CircleGeometry","\x5f","\x59","\xa4","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CircleGeometry_obj >;
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
