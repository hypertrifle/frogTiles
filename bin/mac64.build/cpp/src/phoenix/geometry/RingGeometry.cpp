#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void RingGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.RingGeometry","new",0x25deca31,"phoenix.geometry.RingGeometry.new","phoenix/geometry/RingGeometry.hx",14,0x0d3aaa7f)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(16)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	super::__construct(tmp);
	HX_STACK_LINE(19)
	this->set_primitive_type((int)1);
}
;
	return null();
}

//RingGeometry_obj::~RingGeometry_obj() { }

Dynamic RingGeometry_obj::__CreateEmpty() { return  new RingGeometry_obj; }
hx::ObjectPtr< RingGeometry_obj > RingGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< RingGeometry_obj > _result_ = new RingGeometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic RingGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RingGeometry_obj > _result_ = new RingGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void RingGeometry_obj::set( Float _x,Float _y,Float _rx,Float _ry,int _steps,hx::Null< Float >  __o__start_angle_degrees,hx::Null< Float >  __o__end_angle_degrees){
Float _start_angle_degrees = __o__start_angle_degrees.Default(0);
Float _end_angle_degrees = __o__end_angle_degrees.Default(360);
	HX_STACK_FRAME("phoenix.geometry.RingGeometry","set",0x25e29573,"phoenix.geometry.RingGeometry.set","phoenix/geometry/RingGeometry.hx",23,0x0d3aaa7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_rx,"_rx")
	HX_STACK_ARG(_ry,"_ry")
	HX_STACK_ARG(_steps,"_steps")
	HX_STACK_ARG(_start_angle_degrees,"_start_angle_degrees")
	HX_STACK_ARG(_end_angle_degrees,"_end_angle_degrees")
{
		HX_STACK_LINE(28)
		this->set_primitive_type((int)4);
		HX_STACK_LINE(30)
		Float tmp = (_start_angle_degrees * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		Float _start_angle_rad = tmp;		HX_STACK_VAR(_start_angle_rad,"_start_angle_rad");
		HX_STACK_LINE(31)
		Float tmp1 = (_end_angle_degrees * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		Float _end_angle_rad = tmp1;		HX_STACK_VAR(_end_angle_rad,"_end_angle_rad");
		HX_STACK_LINE(33)
		Float tmp2 = (_end_angle_rad - _start_angle_rad);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		Float _range = tmp2;		HX_STACK_VAR(_range,"_range");
		HX_STACK_LINE(36)
		Float tmp3 = (Float(_range) / Float(_steps));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		Float theta = tmp3;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(38)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		Float tmp5 = ::Math_obj::tan(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		Float tangential_factor = tmp5;		HX_STACK_VAR(tangential_factor,"tangential_factor");
		HX_STACK_LINE(39)
		Float tmp6 = theta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		Float radial_factor = tmp7;		HX_STACK_VAR(radial_factor,"radial_factor");
		HX_STACK_LINE(41)
		Float tmp8 = _rx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		Float tmp9 = _start_angle_rad;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		Float x = tmp11;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(42)
		Float tmp12 = _rx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(42)
		Float tmp13 = _start_angle_rad;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(42)
		Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(42)
		Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(42)
		Float y = tmp15;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(46)
		Float tmp16 = (Float(_rx) / Float(_ry));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(46)
		Float radial_ratio = tmp16;		HX_STACK_VAR(radial_ratio,"radial_ratio");
		HX_STACK_LINE(47)
		bool tmp17 = (radial_ratio == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(47)
		if ((tmp17)){
			HX_STACK_LINE(47)
			radial_ratio = ((Float)0.000000001);
		}
		HX_STACK_LINE(49)
		int _index = (int)0;		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(50)
		Array< ::Dynamic > _segment_pos = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_segment_pos,"_segment_pos");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			while((true)){
				HX_STACK_LINE(51)
				bool tmp18 = (_g < _steps);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(51)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(51)
				if ((tmp19)){
					HX_STACK_LINE(51)
					break;
				}
				HX_STACK_LINE(51)
				int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(51)
				int i = tmp20;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(53)
				Float __x = x;		HX_STACK_VAR(__x,"__x");
				HX_STACK_LINE(54)
				Float tmp21 = (Float(y) / Float(radial_ratio));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(54)
				Float __y = tmp21;		HX_STACK_VAR(__y,"__y");
				HX_STACK_LINE(57)
				::phoenix::Vector tmp22 = ::phoenix::Vector_obj::__new(__x,__y,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(57)
				::phoenix::Vector _seg = tmp22;		HX_STACK_VAR(_seg,"_seg");
				HX_STACK_LINE(59)
				::phoenix::Vector tmp23 = _seg;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(59)
				_segment_pos->push(tmp23);
				HX_STACK_LINE(62)
				::phoenix::Vector tmp24 = _seg;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(62)
				::phoenix::Color tmp25 = this->color;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(62)
				::phoenix::geometry::Vertex tmp26 = ::phoenix::geometry::Vertex_obj::__new(tmp24,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(62)
				this->add(tmp26);
				HX_STACK_LINE(65)
				bool tmp27 = (_index > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(65)
				if ((tmp27)){
					HX_STACK_LINE(66)
					::phoenix::Vector tmp28 = _segment_pos->__get(_index).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(66)
					::phoenix::Vector prevvert = tmp28;		HX_STACK_VAR(prevvert,"prevvert");
					HX_STACK_LINE(67)
					::phoenix::Vector tmp29 = ::phoenix::Vector_obj::__new(prevvert->x,prevvert->y,prevvert->z,prevvert->w);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(67)
					::phoenix::Color tmp30 = this->color;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(67)
					::phoenix::geometry::Vertex tmp31 = ::phoenix::geometry::Vertex_obj::__new(tmp29,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(67)
					this->add(tmp31);
				}
				HX_STACK_LINE(70)
				Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(70)
				Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(70)
				Float tx = tmp29;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(71)
				Float ty = x;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(73)
				Float tmp30 = (tx * tangential_factor);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(73)
				hx::AddEq(x,tmp30);
				HX_STACK_LINE(74)
				Float tmp31 = (ty * tangential_factor);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(74)
				hx::AddEq(y,tmp31);
				HX_STACK_LINE(76)
				hx::MultEq(x,radial_factor);
				HX_STACK_LINE(77)
				hx::MultEq(y,radial_factor);
				HX_STACK_LINE(79)
				(_index)++;
			}
		}
		HX_STACK_LINE(84)
		bool tmp18 = (_segment_pos->length > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(84)
		if ((tmp18)){
			HX_STACK_LINE(85)
			::phoenix::Vector tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				::phoenix::Vector tmp20 = _segment_pos->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(85)
				::phoenix::Vector _this = tmp20;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(85)
				tmp19 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
			}
			HX_STACK_LINE(85)
			::phoenix::Color tmp20 = this->color;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(85)
			::phoenix::geometry::Vertex tmp21 = ::phoenix::geometry::Vertex_obj::__new(tmp19,tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(85)
			this->add(tmp21);
		}
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(89)
			::phoenix::Vector value = tmp19;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				::phoenix::Transform tmp20 = this->transform;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(89)
				::phoenix::Spatial _this = tmp20->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(89)
				_this->pos = value;
				HX_STACK_LINE(89)
				bool tmp21 = (value != null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(89)
				if ((tmp21)){
					HX_STACK_LINE(89)
					::phoenix::Vector tmp22 = _this->pos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(89)
					Dynamic tmp23 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(89)
					::phoenix::Vector_obj::Listen(tmp22,tmp23);
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						bool tmp24 = (_this->pos_changed != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(89)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(89)
						if ((tmp24)){
							HX_STACK_LINE(89)
							bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(89)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(89)
							tmp25 = !(tmp27);
						}
						else{
							HX_STACK_LINE(89)
							tmp25 = false;
						}
						HX_STACK_LINE(89)
						if ((tmp25)){
							HX_STACK_LINE(89)
							::phoenix::Vector tmp26 = _this->pos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(89)
							_this->pos_changed(tmp26);
						}
					}
				}
				HX_STACK_LINE(89)
				_this->pos;
			}
		}
	}
return null();
}



RingGeometry_obj::RingGeometry_obj()
{
}

Dynamic RingGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(RingGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RingGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class RingGeometry_obj::__mClass;

void RingGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.RingGeometry","\xbf","\xdd","\xe7","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RingGeometry_obj >;
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
