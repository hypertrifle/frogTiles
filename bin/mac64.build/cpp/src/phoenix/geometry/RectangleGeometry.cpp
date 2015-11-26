#include <hxcpp.h>

#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RectangleGeometry
#include <phoenix/geometry/RectangleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void RectangleGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","new",0x08963096,"phoenix.geometry.RectangleGeometry.new","phoenix/geometry/RectangleGeometry.hx",14,0x605d1b7a)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(16)
	options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = (int)1;
	HX_STACK_LINE(18)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	super::__construct(tmp);
	HX_STACK_LINE(20)
	bool tmp1 = (options == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	if ((tmp1)){
		HX_STACK_LINE(20)
		return null();
	}
	HX_STACK_LINE(22)
	Float _x = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(23)
	Float _y = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(24)
	Float _w = options->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_w,"_w");
	HX_STACK_LINE(25)
	Float _h = options->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_h,"_h");
	HX_STACK_LINE(27)
	bool tmp2 = (options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	if ((tmp2)){
		HX_STACK_LINE(28)
		Float tmp3 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		_x = tmp3;
		HX_STACK_LINE(29)
		Float tmp4 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		_y = tmp4;
		HX_STACK_LINE(30)
		Float tmp5 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		_w = tmp5;
		HX_STACK_LINE(31)
		Float tmp6 = options->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		_h = tmp6;
	}
	HX_STACK_LINE(35)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	::phoenix::Color tmp4 = this->color;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	::phoenix::geometry::Vertex tmp5 = ::phoenix::geometry::Vertex_obj::__new(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(35)
	this->add(tmp5);
	HX_STACK_LINE(37)
	::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	::phoenix::Color tmp7 = this->color;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	::phoenix::geometry::Vertex tmp8 = ::phoenix::geometry::Vertex_obj::__new(tmp6,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	this->add(tmp8);
	HX_STACK_LINE(40)
	::phoenix::Vector tmp9 = ::phoenix::Vector_obj::__new(_w,(int)0,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(40)
	::phoenix::Color tmp10 = this->color;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(40)
	::phoenix::geometry::Vertex tmp11 = ::phoenix::geometry::Vertex_obj::__new(tmp9,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(40)
	this->add(tmp11);
	HX_STACK_LINE(42)
	::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(42)
	::phoenix::Color tmp13 = this->color;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(42)
	::phoenix::geometry::Vertex tmp14 = ::phoenix::geometry::Vertex_obj::__new(tmp12,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(42)
	this->add(tmp14);
	HX_STACK_LINE(45)
	::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new(_w,_h,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(45)
	::phoenix::Color tmp16 = this->color;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(45)
	::phoenix::geometry::Vertex tmp17 = ::phoenix::geometry::Vertex_obj::__new(tmp15,tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(45)
	this->add(tmp17);
	HX_STACK_LINE(47)
	::phoenix::Vector tmp18 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(47)
	::phoenix::Color tmp19 = this->color;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(47)
	::phoenix::geometry::Vertex tmp20 = ::phoenix::geometry::Vertex_obj::__new(tmp18,tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(47)
	this->add(tmp20);
	HX_STACK_LINE(50)
	::phoenix::Vector tmp21 = ::phoenix::Vector_obj::__new((int)0,_h,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(50)
	::phoenix::Color tmp22 = this->color;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(50)
	::phoenix::geometry::Vertex tmp23 = ::phoenix::geometry::Vertex_obj::__new(tmp21,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(50)
	this->add(tmp23);
	HX_STACK_LINE(52)
	::phoenix::Vector tmp24 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(52)
	::phoenix::Color tmp25 = this->color;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(52)
	::phoenix::geometry::Vertex tmp26 = ::phoenix::geometry::Vertex_obj::__new(tmp24,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(52)
	this->add(tmp26);
	HX_STACK_LINE(54)
	Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		bool tmp28 = (options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(54)
		if ((tmp28)){
			HX_STACK_LINE(54)
			options->__FieldRef(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")) = false;
		}
		HX_STACK_LINE(54)
		tmp27 = options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );
	}
	HX_STACK_LINE(54)
	this->immediate = tmp27;
	HX_STACK_LINE(55)
	Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		bool tmp29 = (options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(55)
		if ((tmp29)){
			HX_STACK_LINE(55)
			options->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = true;
		}
		HX_STACK_LINE(55)
		tmp28 = options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
	}
	HX_STACK_LINE(55)
	this->set_visible(tmp28);
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::phoenix::Vector tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::phoenix::Transform tmp30 = this->transform;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(57)
			::phoenix::Vector tmp31 = tmp30->local->pos;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(57)
			::phoenix::Vector _this = tmp31;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(57)
			_this->ignore_listeners = true;
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				_this->x = _x;
				HX_STACK_LINE(57)
				bool tmp32 = _this->_construct;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(57)
				if ((tmp32)){
					HX_STACK_LINE(57)
					_this->x;
				}
				else{
					HX_STACK_LINE(57)
					bool tmp33 = (_this->listen_x != null());		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(57)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(57)
					if ((tmp33)){
						HX_STACK_LINE(57)
						bool tmp35 = _this->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(57)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(57)
						tmp34 = !(tmp36);
					}
					else{
						HX_STACK_LINE(57)
						tmp34 = false;
					}
					HX_STACK_LINE(57)
					if ((tmp34)){
						HX_STACK_LINE(57)
						Float tmp35 = _x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(57)
						_this->listen_x(tmp35);
					}
					HX_STACK_LINE(57)
					_this->x;
				}
			}
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				_this->y = _y;
				HX_STACK_LINE(57)
				bool tmp32 = _this->_construct;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(57)
				if ((tmp32)){
					HX_STACK_LINE(57)
					_this->y;
				}
				else{
					HX_STACK_LINE(57)
					bool tmp33 = (_this->listen_y != null());		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(57)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(57)
					if ((tmp33)){
						HX_STACK_LINE(57)
						bool tmp35 = _this->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(57)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(57)
						tmp34 = !(tmp36);
					}
					else{
						HX_STACK_LINE(57)
						tmp34 = false;
					}
					HX_STACK_LINE(57)
					if ((tmp34)){
						HX_STACK_LINE(57)
						Float tmp35 = _y;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(57)
						_this->listen_y(tmp35);
					}
					HX_STACK_LINE(57)
					_this->y;
				}
			}
			HX_STACK_LINE(57)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(57)
			bool tmp32 = (_this->listen_x != null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(57)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(57)
			if ((tmp32)){
				HX_STACK_LINE(57)
				bool tmp34 = _this->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(57)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(57)
				tmp33 = !(tmp35);
			}
			else{
				HX_STACK_LINE(57)
				tmp33 = false;
			}
			HX_STACK_LINE(57)
			if ((tmp33)){
				HX_STACK_LINE(57)
				Float tmp34 = _this->x;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(57)
				_this->listen_x(tmp34);
			}
			HX_STACK_LINE(57)
			bool tmp34 = (_this->listen_y != null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(57)
			bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(57)
			if ((tmp34)){
				HX_STACK_LINE(57)
				bool tmp36 = _this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(57)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(57)
				tmp35 = !(tmp37);
			}
			else{
				HX_STACK_LINE(57)
				tmp35 = false;
			}
			HX_STACK_LINE(57)
			if ((tmp35)){
				HX_STACK_LINE(57)
				Float tmp36 = _this->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(57)
				_this->listen_y(tmp36);
			}
			HX_STACK_LINE(57)
			tmp29 = _this;
		}
		HX_STACK_LINE(57)
		::phoenix::Vector value = tmp29;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::phoenix::Transform tmp30 = this->transform;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(57)
			::phoenix::Spatial _this = tmp30->local;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			_this->pos = value;
			HX_STACK_LINE(57)
			bool tmp31 = (value != null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(57)
			if ((tmp31)){
				HX_STACK_LINE(57)
				::phoenix::Vector tmp32 = _this->pos;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(57)
				Dynamic tmp33 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(57)
				::phoenix::Vector_obj::Listen(tmp32,tmp33);
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					bool tmp34 = (_this->pos_changed != null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(57)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(57)
					if ((tmp34)){
						HX_STACK_LINE(57)
						bool tmp36 = _this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(57)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(57)
						tmp35 = !(tmp37);
					}
					else{
						HX_STACK_LINE(57)
						tmp35 = false;
					}
					HX_STACK_LINE(57)
					if ((tmp35)){
						HX_STACK_LINE(57)
						::phoenix::Vector tmp36 = _this->pos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(57)
						_this->pos_changed(tmp36);
					}
				}
			}
			HX_STACK_LINE(57)
			_this->pos;
		}
	}
}
;
	return null();
}

//RectangleGeometry_obj::~RectangleGeometry_obj() { }

Dynamic RectangleGeometry_obj::__CreateEmpty() { return  new RectangleGeometry_obj; }
hx::ObjectPtr< RectangleGeometry_obj > RectangleGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< RectangleGeometry_obj > _result_ = new RectangleGeometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic RectangleGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleGeometry_obj > _result_ = new RectangleGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RectangleGeometry_obj::set_xywh( Float _x,Float _y,Float _w,Float _h){
{
		HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","set_xywh",0x202d0459,"phoenix.geometry.RectangleGeometry.set_xywh","phoenix/geometry/RectangleGeometry.hx",73,0x605d1b7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(75)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(75)
			return null();
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(77)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(77)
			_this->ignore_listeners = true;
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				_this->x = (int)0;
				HX_STACK_LINE(77)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(77)
				if ((tmp3)){
					HX_STACK_LINE(77)
					_this->x;
				}
				else{
					HX_STACK_LINE(77)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(77)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					if ((tmp4)){
						HX_STACK_LINE(77)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(77)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(77)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(77)
						tmp5 = false;
					}
					HX_STACK_LINE(77)
					if ((tmp5)){
						HX_STACK_LINE(77)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(77)
					_this->x;
				}
			}
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				_this->y = (int)0;
				HX_STACK_LINE(77)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(77)
				if ((tmp3)){
					HX_STACK_LINE(77)
					_this->y;
				}
				else{
					HX_STACK_LINE(77)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(77)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					if ((tmp4)){
						HX_STACK_LINE(77)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(77)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(77)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(77)
						tmp5 = false;
					}
					HX_STACK_LINE(77)
					if ((tmp5)){
						HX_STACK_LINE(77)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(77)
					_this->y;
				}
			}
			HX_STACK_LINE(77)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(77)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			if ((tmp3)){
				HX_STACK_LINE(77)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(77)
				tmp4 = false;
			}
			HX_STACK_LINE(77)
			if ((tmp4)){
				HX_STACK_LINE(77)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(77)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			if ((tmp5)){
				HX_STACK_LINE(77)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(77)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(77)
				tmp6 = false;
			}
			HX_STACK_LINE(77)
			if ((tmp6)){
				HX_STACK_LINE(77)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(77)
			_this;
		}
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(79)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(79)
			_this->ignore_listeners = true;
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				_this->x = _w;
				HX_STACK_LINE(79)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(79)
				if ((tmp3)){
					HX_STACK_LINE(79)
					_this->x;
				}
				else{
					HX_STACK_LINE(79)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(79)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					if ((tmp4)){
						HX_STACK_LINE(79)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(79)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(79)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(79)
						tmp5 = false;
					}
					HX_STACK_LINE(79)
					if ((tmp5)){
						HX_STACK_LINE(79)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(79)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(79)
					_this->x;
				}
			}
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				_this->y = (int)0;
				HX_STACK_LINE(79)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(79)
				if ((tmp3)){
					HX_STACK_LINE(79)
					_this->y;
				}
				else{
					HX_STACK_LINE(79)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(79)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					if ((tmp4)){
						HX_STACK_LINE(79)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(79)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(79)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(79)
						tmp5 = false;
					}
					HX_STACK_LINE(79)
					if ((tmp5)){
						HX_STACK_LINE(79)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(79)
					_this->y;
				}
			}
			HX_STACK_LINE(79)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(79)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			if ((tmp3)){
				HX_STACK_LINE(79)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(79)
				tmp4 = false;
			}
			HX_STACK_LINE(79)
			if ((tmp4)){
				HX_STACK_LINE(79)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(79)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(79)
			if ((tmp5)){
				HX_STACK_LINE(79)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(79)
				tmp6 = false;
			}
			HX_STACK_LINE(79)
			if ((tmp6)){
				HX_STACK_LINE(79)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(79)
			_this;
		}
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(82)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(82)
			_this->ignore_listeners = true;
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				_this->x = _w;
				HX_STACK_LINE(82)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(82)
				if ((tmp3)){
					HX_STACK_LINE(82)
					_this->x;
				}
				else{
					HX_STACK_LINE(82)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(82)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(82)
					if ((tmp4)){
						HX_STACK_LINE(82)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(82)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(82)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(82)
						tmp5 = false;
					}
					HX_STACK_LINE(82)
					if ((tmp5)){
						HX_STACK_LINE(82)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(82)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(82)
					_this->x;
				}
			}
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				_this->y = (int)0;
				HX_STACK_LINE(82)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(82)
				if ((tmp3)){
					HX_STACK_LINE(82)
					_this->y;
				}
				else{
					HX_STACK_LINE(82)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(82)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(82)
					if ((tmp4)){
						HX_STACK_LINE(82)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(82)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(82)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(82)
						tmp5 = false;
					}
					HX_STACK_LINE(82)
					if ((tmp5)){
						HX_STACK_LINE(82)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(82)
					_this->y;
				}
			}
			HX_STACK_LINE(82)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(82)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			if ((tmp3)){
				HX_STACK_LINE(82)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(82)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(82)
				tmp4 = false;
			}
			HX_STACK_LINE(82)
			if ((tmp4)){
				HX_STACK_LINE(82)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(82)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			if ((tmp5)){
				HX_STACK_LINE(82)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(82)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(82)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(82)
				tmp6 = false;
			}
			HX_STACK_LINE(82)
			if ((tmp6)){
				HX_STACK_LINE(82)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(82)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(82)
			_this;
		}
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(84)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(84)
			_this->ignore_listeners = true;
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				_this->x = _w;
				HX_STACK_LINE(84)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				if ((tmp3)){
					HX_STACK_LINE(84)
					_this->x;
				}
				else{
					HX_STACK_LINE(84)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(84)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(84)
					if ((tmp4)){
						HX_STACK_LINE(84)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(84)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(84)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(84)
						tmp5 = false;
					}
					HX_STACK_LINE(84)
					if ((tmp5)){
						HX_STACK_LINE(84)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(84)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(84)
					_this->x;
				}
			}
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				_this->y = _h;
				HX_STACK_LINE(84)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				if ((tmp3)){
					HX_STACK_LINE(84)
					_this->y;
				}
				else{
					HX_STACK_LINE(84)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(84)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(84)
					if ((tmp4)){
						HX_STACK_LINE(84)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(84)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(84)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(84)
						tmp5 = false;
					}
					HX_STACK_LINE(84)
					if ((tmp5)){
						HX_STACK_LINE(84)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(84)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(84)
					_this->y;
				}
			}
			HX_STACK_LINE(84)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(84)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			if ((tmp3)){
				HX_STACK_LINE(84)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(84)
				tmp4 = false;
			}
			HX_STACK_LINE(84)
			if ((tmp4)){
				HX_STACK_LINE(84)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(84)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			if ((tmp5)){
				HX_STACK_LINE(84)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(84)
				tmp6 = false;
			}
			HX_STACK_LINE(84)
			if ((tmp6)){
				HX_STACK_LINE(84)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(84)
			_this;
		}
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(87)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(87)
			_this->ignore_listeners = true;
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->x = _w;
				HX_STACK_LINE(87)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				if ((tmp3)){
					HX_STACK_LINE(87)
					_this->x;
				}
				else{
					HX_STACK_LINE(87)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					if ((tmp4)){
						HX_STACK_LINE(87)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(87)
						tmp5 = false;
					}
					HX_STACK_LINE(87)
					if ((tmp5)){
						HX_STACK_LINE(87)
						Float tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(87)
					_this->x;
				}
			}
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->y = _h;
				HX_STACK_LINE(87)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				if ((tmp3)){
					HX_STACK_LINE(87)
					_this->y;
				}
				else{
					HX_STACK_LINE(87)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(87)
					if ((tmp4)){
						HX_STACK_LINE(87)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(87)
						tmp5 = false;
					}
					HX_STACK_LINE(87)
					if ((tmp5)){
						HX_STACK_LINE(87)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(87)
					_this->y;
				}
			}
			HX_STACK_LINE(87)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(87)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			if ((tmp3)){
				HX_STACK_LINE(87)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(87)
				tmp4 = false;
			}
			HX_STACK_LINE(87)
			if ((tmp4)){
				HX_STACK_LINE(87)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(87)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			if ((tmp5)){
				HX_STACK_LINE(87)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(87)
				tmp6 = false;
			}
			HX_STACK_LINE(87)
			if ((tmp6)){
				HX_STACK_LINE(87)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(87)
			_this;
		}
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(89)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(89)
			_this->ignore_listeners = true;
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				_this->x = (int)0;
				HX_STACK_LINE(89)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(89)
				if ((tmp3)){
					HX_STACK_LINE(89)
					_this->x;
				}
				else{
					HX_STACK_LINE(89)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(89)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(89)
					if ((tmp4)){
						HX_STACK_LINE(89)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(89)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(89)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(89)
						tmp5 = false;
					}
					HX_STACK_LINE(89)
					if ((tmp5)){
						HX_STACK_LINE(89)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(89)
					_this->x;
				}
			}
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				_this->y = _h;
				HX_STACK_LINE(89)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(89)
				if ((tmp3)){
					HX_STACK_LINE(89)
					_this->y;
				}
				else{
					HX_STACK_LINE(89)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(89)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(89)
					if ((tmp4)){
						HX_STACK_LINE(89)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(89)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(89)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(89)
						tmp5 = false;
					}
					HX_STACK_LINE(89)
					if ((tmp5)){
						HX_STACK_LINE(89)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(89)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(89)
					_this->y;
				}
			}
			HX_STACK_LINE(89)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(89)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			if ((tmp3)){
				HX_STACK_LINE(89)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(89)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(89)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(89)
				tmp4 = false;
			}
			HX_STACK_LINE(89)
			if ((tmp4)){
				HX_STACK_LINE(89)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(89)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(89)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			if ((tmp5)){
				HX_STACK_LINE(89)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(89)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(89)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(89)
				tmp6 = false;
			}
			HX_STACK_LINE(89)
			if ((tmp6)){
				HX_STACK_LINE(89)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(89)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(89)
			_this;
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)6).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(92)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(92)
			_this->ignore_listeners = true;
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				_this->x = (int)0;
				HX_STACK_LINE(92)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(92)
				if ((tmp3)){
					HX_STACK_LINE(92)
					_this->x;
				}
				else{
					HX_STACK_LINE(92)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(92)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(92)
					if ((tmp4)){
						HX_STACK_LINE(92)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(92)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(92)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(92)
						tmp5 = false;
					}
					HX_STACK_LINE(92)
					if ((tmp5)){
						HX_STACK_LINE(92)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(92)
					_this->x;
				}
			}
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				_this->y = _h;
				HX_STACK_LINE(92)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(92)
				if ((tmp3)){
					HX_STACK_LINE(92)
					_this->y;
				}
				else{
					HX_STACK_LINE(92)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(92)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(92)
					if ((tmp4)){
						HX_STACK_LINE(92)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(92)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(92)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(92)
						tmp5 = false;
					}
					HX_STACK_LINE(92)
					if ((tmp5)){
						HX_STACK_LINE(92)
						Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(92)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(92)
					_this->y;
				}
			}
			HX_STACK_LINE(92)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(92)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			if ((tmp3)){
				HX_STACK_LINE(92)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(92)
				tmp4 = false;
			}
			HX_STACK_LINE(92)
			if ((tmp4)){
				HX_STACK_LINE(92)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(92)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(92)
			if ((tmp5)){
				HX_STACK_LINE(92)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(92)
				tmp6 = false;
			}
			HX_STACK_LINE(92)
			if ((tmp6)){
				HX_STACK_LINE(92)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(92)
			_this;
		}
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::phoenix::geometry::Vertex tmp2 = this->vertices->__get((int)7).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			::phoenix::Vector _this = tmp2->pos;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(94)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(94)
			_this->ignore_listeners = true;
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				_this->x = (int)0;
				HX_STACK_LINE(94)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				if ((tmp3)){
					HX_STACK_LINE(94)
					_this->x;
				}
				else{
					HX_STACK_LINE(94)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(94)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(94)
					if ((tmp4)){
						HX_STACK_LINE(94)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(94)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(94)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(94)
						tmp5 = false;
					}
					HX_STACK_LINE(94)
					if ((tmp5)){
						HX_STACK_LINE(94)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(94)
					_this->x;
				}
			}
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				_this->y = (int)0;
				HX_STACK_LINE(94)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				if ((tmp3)){
					HX_STACK_LINE(94)
					_this->y;
				}
				else{
					HX_STACK_LINE(94)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(94)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(94)
					if ((tmp4)){
						HX_STACK_LINE(94)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(94)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(94)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(94)
						tmp5 = false;
					}
					HX_STACK_LINE(94)
					if ((tmp5)){
						HX_STACK_LINE(94)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(94)
					_this->y;
				}
			}
			HX_STACK_LINE(94)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(94)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			if ((tmp3)){
				HX_STACK_LINE(94)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(94)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(94)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(94)
				tmp4 = false;
			}
			HX_STACK_LINE(94)
			if ((tmp4)){
				HX_STACK_LINE(94)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(94)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(94)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			if ((tmp5)){
				HX_STACK_LINE(94)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(94)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(94)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(94)
				tmp6 = false;
			}
			HX_STACK_LINE(94)
			if ((tmp6)){
				HX_STACK_LINE(94)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(94)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(94)
			_this;
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(97)
				::phoenix::Vector tmp4 = tmp3->local->pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(97)
				::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(97)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(97)
				_this->ignore_listeners = true;
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					_this->x = _x;
					HX_STACK_LINE(97)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(97)
					if ((tmp5)){
						HX_STACK_LINE(97)
						_this->x;
					}
					else{
						HX_STACK_LINE(97)
						bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(97)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(97)
						if ((tmp6)){
							HX_STACK_LINE(97)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(97)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(97)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(97)
							tmp7 = false;
						}
						HX_STACK_LINE(97)
						if ((tmp7)){
							HX_STACK_LINE(97)
							Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(97)
							_this->listen_x(tmp8);
						}
						HX_STACK_LINE(97)
						_this->x;
					}
				}
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					_this->y = _y;
					HX_STACK_LINE(97)
					bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(97)
					if ((tmp5)){
						HX_STACK_LINE(97)
						_this->y;
					}
					else{
						HX_STACK_LINE(97)
						bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(97)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(97)
						if ((tmp6)){
							HX_STACK_LINE(97)
							bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(97)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(97)
							tmp7 = !(tmp9);
						}
						else{
							HX_STACK_LINE(97)
							tmp7 = false;
						}
						HX_STACK_LINE(97)
						if ((tmp7)){
							HX_STACK_LINE(97)
							Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(97)
							_this->listen_y(tmp8);
						}
						HX_STACK_LINE(97)
						_this->y;
					}
				}
				HX_STACK_LINE(97)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(97)
				bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(97)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(97)
				if ((tmp5)){
					HX_STACK_LINE(97)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(97)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(97)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(97)
					tmp6 = false;
				}
				HX_STACK_LINE(97)
				if ((tmp6)){
					HX_STACK_LINE(97)
					Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(97)
					_this->listen_x(tmp7);
				}
				HX_STACK_LINE(97)
				bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(97)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(97)
				if ((tmp7)){
					HX_STACK_LINE(97)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(97)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(97)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(97)
					tmp8 = false;
				}
				HX_STACK_LINE(97)
				if ((tmp8)){
					HX_STACK_LINE(97)
					Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(97)
					_this->listen_y(tmp9);
				}
				HX_STACK_LINE(97)
				tmp2 = _this;
			}
			HX_STACK_LINE(97)
			::phoenix::Vector value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(97)
				::phoenix::Spatial _this = tmp3->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(97)
				_this->pos = value;
				HX_STACK_LINE(97)
				bool tmp4 = (value != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(97)
				if ((tmp4)){
					HX_STACK_LINE(97)
					::phoenix::Vector tmp5 = _this->pos;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(97)
					Dynamic tmp6 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(97)
					::phoenix::Vector_obj::Listen(tmp5,tmp6);
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						bool tmp7 = (_this->pos_changed != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(97)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(97)
						if ((tmp7)){
							HX_STACK_LINE(97)
							bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(97)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(97)
							tmp8 = !(tmp10);
						}
						else{
							HX_STACK_LINE(97)
							tmp8 = false;
						}
						HX_STACK_LINE(97)
						if ((tmp8)){
							HX_STACK_LINE(97)
							::phoenix::Vector tmp9 = _this->pos;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(97)
							_this->pos_changed(tmp9);
						}
					}
				}
				HX_STACK_LINE(97)
				_this->pos;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RectangleGeometry_obj,set_xywh,(void))

Void RectangleGeometry_obj::set( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.geometry.RectangleGeometry","set",0x0899fbd8,"phoenix.geometry.RectangleGeometry.set","phoenix/geometry/RectangleGeometry.hx",102,0x605d1b7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(104)
		Float tmp = _rect->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		Float tmp1 = _rect->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		Float tmp2 = _rect->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		Float tmp3 = _rect->h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		this->set_xywh(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectangleGeometry_obj,set,(void))


RectangleGeometry_obj::RectangleGeometry_obj()
{
}

Dynamic RectangleGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_xywh") ) { return set_xywh_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("set_xywh","\x4f","\xe8","\xc5","\x7d"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleGeometry_obj::__mClass;

void RectangleGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.RectangleGeometry","\xa4","\xed","\xa8","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleGeometry_obj >;
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
