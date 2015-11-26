#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
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
#ifndef INCLUDED_luxe_SizeMode
#include <luxe/SizeMode.h>
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
#ifndef INCLUDED_luxe_tween_easing_Quad
#include <luxe/tween/easing/Quad.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
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
namespace luxe{

Void Camera_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("luxe.Camera","new",0x2ec87bef,"luxe.Camera.new","luxe/Camera.hx",30,0xd52a0e40)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(170)
	this->_connected = false;
	HX_STACK_LINE(58)
	this->minimum_shake = ((Float)0.1);
	HX_STACK_LINE(56)
	this->shaking = false;
	HX_STACK_LINE(71)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	this->_size_factor = tmp;
	HX_STACK_LINE(72)
	::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	this->_rotation_radian = tmp1;
	HX_STACK_LINE(73)
	::phoenix::Quaternion tmp2 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	this->_rotation_cache = tmp2;
	HX_STACK_LINE(74)
	this->set_size_mode(::luxe::SizeMode_obj::fit);
	HX_STACK_LINE(76)
	::String _name = HX_HCSTRING("untitled camera","\x80","\xf6","\x97","\x4f");		HX_STACK_VAR(_name,"_name");
	HX_STACK_LINE(78)
	bool tmp3 = (options != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	if ((tmp3)){
		HX_STACK_LINE(79)
		bool tmp4 = (options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		if ((tmp4)){
			HX_STACK_LINE(80)
			_name = options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
			HX_STACK_LINE(81)
			::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			::String tmp6 = (tmp5 + HX_HCSTRING(".view","\x93","\xe1","\xbd","\xca"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			options->__FieldRef(HX_HCSTRING("camera_name","\x65","\x11","\x29","\x5d")) = tmp6;
		}
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Camera.hx",84,0xd52a0e40)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		Dynamic tmp4 = _Function_2_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		options = tmp4;
	}
	HX_STACK_LINE(90)
	::phoenix::Camera tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		bool tmp5 = (options->__Field(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		if ((tmp5)){
			HX_STACK_LINE(90)
			::phoenix::Camera tmp6 = ::phoenix::Camera_obj::__new(options);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			options->__FieldRef(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")) = tmp6;
		}
		HX_STACK_LINE(90)
		tmp4 = options->__Field(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"), hx::paccDynamic );
	}
	HX_STACK_LINE(90)
	this->view = tmp4;
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_name,Dynamic &options){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Camera.hx",93,0xd52a0e40)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , _name,false);
				__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , options->__Field(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10"), hx::paccDynamic ),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(93)
	Dynamic tmp5 = _Function_1_1::Block(_name,options);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Camera.hx","\x19","\xd1","\xe9","\xdb"),93,HX_HCSTRING("luxe.Camera","\x7d","\x58","\xea","\x16"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	super::__construct(tmp5,tmp6);
	HX_STACK_LINE(99)
	::phoenix::Camera tmp7 = this->view;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(99)
	::phoenix::Vector tmp8 = tmp7->get_pos();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(99)
	this->_final_pos = tmp8;
}
;
	return null();
}

//Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new(Dynamic options)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::phoenix::Rectangle Camera_obj::get_viewport( ){
	HX_STACK_FRAME("luxe.Camera","get_viewport",0xdc75eb00,"luxe.Camera.get_viewport","luxe/Camera.hx",103,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	::phoenix::Rectangle tmp1 = tmp->get_viewport();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewport,return )

::phoenix::Rectangle Camera_obj::set_viewport( ::phoenix::Rectangle _v){
	HX_STACK_FRAME("luxe.Camera","set_viewport",0xf16f0e74,"luxe.Camera.set_viewport","luxe/Camera.hx",107,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(108)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	::phoenix::Rectangle tmp1 = _v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	::phoenix::Rectangle tmp2 = tmp->set_viewport(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewport,return )

::phoenix::Vector Camera_obj::get_center( ){
	HX_STACK_FRAME("luxe.Camera","get_center",0xe3d709ef,"luxe.Camera.get_center","luxe/Camera.hx",111,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::phoenix::Vector tmp1 = tmp->get_center();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_center,return )

::phoenix::Vector Camera_obj::set_center( ::phoenix::Vector _c){
	HX_STACK_FRAME("luxe.Camera","set_center",0xe754a863,"luxe.Camera.set_center","luxe/Camera.hx",115,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(117)
	Float tmp = _c->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	::phoenix::Rectangle tmp1 = this->get_viewport();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(117)
	Float tmp4 = (tmp - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(117)
	Float tmp5 = _c->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(117)
	::phoenix::Rectangle tmp6 = this->get_viewport();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(117)
	Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(117)
	Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(117)
	Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(117)
	::phoenix::Vector tmp10 = ::phoenix::Vector_obj::__new(tmp4,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(117)
	this->set_pos(tmp10);
	HX_STACK_LINE(118)
	::phoenix::Camera tmp11 = this->view;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(118)
	::phoenix::Vector tmp12 = _c;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(118)
	::phoenix::Vector tmp13 = tmp11->set_center(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(118)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_center,return )

Float Camera_obj::get_minimum_zoom( ){
	HX_STACK_FRAME("luxe.Camera","get_minimum_zoom",0x56a621fe,"luxe.Camera.get_minimum_zoom","luxe/Camera.hx",122,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	Float tmp1 = tmp->minimum_zoom;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_minimum_zoom,return )

Float Camera_obj::set_minimum_zoom( Float _m){
	HX_STACK_FRAME("luxe.Camera","set_minimum_zoom",0xace80f72,"luxe.Camera.set_minimum_zoom","luxe/Camera.hx",126,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(127)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	Float tmp1 = tmp->minimum_zoom = _m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_minimum_zoom,return )

Float Camera_obj::get_zoom( ){
	HX_STACK_FRAME("luxe.Camera","get_zoom",0xf17b6cad,"luxe.Camera.get_zoom","luxe/Camera.hx",130,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(131)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	Float tmp1 = tmp->zoom;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_zoom,return )

Float Camera_obj::set_zoom( Float _z){
	HX_STACK_FRAME("luxe.Camera","set_zoom",0x9fd8c621,"luxe.Camera.set_zoom","luxe/Camera.hx",134,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(137)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	Float tmp1 = _z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	tmp->set_zoom(tmp1);
	HX_STACK_LINE(140)
	::phoenix::Vector tmp2 = this->get_size();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(140)
	if ((tmp3)){
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			::phoenix::Vector tmp5 = tmp4->get_scale();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			::phoenix::Vector _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				Float tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(141)
				::phoenix::Vector tmp7 = this->_size_factor;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(141)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(141)
				Float tmp9 = (Float((int)1) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(141)
				Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(141)
				Float _x = tmp10;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(141)
				_g->x = _x;
				HX_STACK_LINE(141)
				bool tmp11 = _g->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(141)
				if ((tmp11)){
					HX_STACK_LINE(141)
					_g->x;
				}
				else{
					HX_STACK_LINE(141)
					bool tmp12 = (_g->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(141)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(141)
					if ((tmp12)){
						HX_STACK_LINE(141)
						bool tmp14 = _g->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(141)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(141)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(141)
						tmp13 = false;
					}
					HX_STACK_LINE(141)
					if ((tmp13)){
						HX_STACK_LINE(141)
						Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(141)
						_g->listen_x(tmp14);
					}
					HX_STACK_LINE(141)
					_g->x;
				}
			}
		}
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			::phoenix::Vector tmp5 = tmp4->get_scale();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			::phoenix::Vector _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				Float tmp6 = _g->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(142)
				::phoenix::Vector tmp7 = this->_size_factor;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(142)
				Float tmp9 = (Float((int)1) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(142)
				Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(142)
				Float _y = tmp10;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(142)
				_g->y = _y;
				HX_STACK_LINE(142)
				bool tmp11 = _g->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(142)
				if ((tmp11)){
					HX_STACK_LINE(142)
					_g->y;
				}
				else{
					HX_STACK_LINE(142)
					bool tmp12 = (_g->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(142)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(142)
					if ((tmp12)){
						HX_STACK_LINE(142)
						bool tmp14 = _g->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(142)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(142)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(142)
						tmp13 = false;
					}
					HX_STACK_LINE(142)
					if ((tmp13)){
						HX_STACK_LINE(142)
						Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(142)
						_g->listen_y(tmp14);
					}
					HX_STACK_LINE(142)
					_g->y;
				}
			}
		}
	}
	HX_STACK_LINE(145)
	::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	Float tmp5 = tmp4->zoom;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(145)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_zoom,return )

::phoenix::Vector Camera_obj::get_size( ){
	HX_STACK_FRAME("luxe.Camera","get_size",0xecd66a5b,"luxe.Camera.get_size","luxe/Camera.hx",149,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	::phoenix::Vector tmp = this->size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_size,return )

::luxe::SizeMode Camera_obj::get_size_mode( ){
	HX_STACK_FRAME("luxe.Camera","get_size_mode",0xfd951b07,"luxe.Camera.get_size_mode","luxe/Camera.hx",153,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	::luxe::SizeMode tmp = this->size_mode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_size_mode,return )

::luxe::SizeMode Camera_obj::set_size_mode( ::luxe::SizeMode _m){
	HX_STACK_FRAME("luxe.Camera","set_size_mode",0x429afd13,"luxe.Camera.set_size_mode","luxe/Camera.hx",157,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(159)
	::luxe::SizeMode tmp = this->get_size_mode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	if ((tmp1)){
		HX_STACK_LINE(160)
		this->size_mode = _m;
		HX_STACK_LINE(161)
		::phoenix::Vector tmp2 = this->get_size();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		if ((tmp3)){
			HX_STACK_LINE(162)
			::phoenix::Vector tmp4 = this->get_size();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			this->set_size(tmp4);
		}
	}
	HX_STACK_LINE(166)
	::luxe::SizeMode tmp2 = this->size_mode = _m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_size_mode,return )

Void Camera_obj::_onwindowsized( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Camera","_onwindowsized",0x6dbb14e6,"luxe.Camera._onwindowsized","luxe/Camera.hx",171,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(172)
		::phoenix::Vector tmp = this->get_size();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		if ((tmp1)){
			HX_STACK_LINE(175)
			::phoenix::Rectangle tmp2 = this->get_viewport();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			::phoenix::Rectangle tmp4 = this->get_viewport();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(175)
			Dynamic tmp6 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			Dynamic tmp7 = _event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			::phoenix::Rectangle tmp8 = ::phoenix::Rectangle_obj::__new(tmp3,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(175)
			this->set_viewport(tmp8);
			HX_STACK_LINE(176)
			::phoenix::Vector tmp9 = this->get_size();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			this->set_size(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,_onwindowsized,(void))

::phoenix::Vector Camera_obj::set_size( ::phoenix::Vector _size){
	HX_STACK_FRAME("luxe.Camera","set_size",0x9b33c3cf,"luxe.Camera.set_size","luxe/Camera.hx",180,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(183)
	bool tmp = (_size == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	if ((tmp)){
		HX_STACK_LINE(184)
		::phoenix::Rectangle tmp1 = this->get_viewport();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		::phoenix::Rectangle tmp4 = this->get_viewport();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		Float tmp5 = tmp4->h;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp3,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		this->set_center(tmp7);
		HX_STACK_LINE(185)
		this->size = _size;
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			::phoenix::Vector tmp8 = this->_size_factor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(186)
			::phoenix::Vector _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(186)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(186)
			{
				HX_STACK_LINE(186)
				::phoenix::Vector tmp10 = this->_size_factor;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(186)
				::phoenix::Vector _this1 = tmp10;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(186)
				_this1->y = (int)1;
				HX_STACK_LINE(186)
				bool tmp11 = _this1->_construct;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(186)
				if ((tmp11)){
					HX_STACK_LINE(186)
					tmp9 = _this1->y;
				}
				else{
					HX_STACK_LINE(186)
					bool tmp12 = (_this1->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(186)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(186)
					if ((tmp12)){
						HX_STACK_LINE(186)
						bool tmp14 = _this1->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(186)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(186)
						tmp13 = !(tmp15);
					}
					else{
						HX_STACK_LINE(186)
						tmp13 = false;
					}
					HX_STACK_LINE(186)
					if ((tmp13)){
						HX_STACK_LINE(186)
						_this1->listen_y((int)1);
					}
					HX_STACK_LINE(186)
					tmp9 = _this1->y;
				}
			}
			HX_STACK_LINE(186)
			Float _x = tmp9;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(186)
			_this->x = _x;
			HX_STACK_LINE(186)
			bool tmp10 = _this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(186)
			if ((tmp10)){
				HX_STACK_LINE(186)
				_this->x;
			}
			else{
				HX_STACK_LINE(186)
				bool tmp11 = (_this->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(186)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(186)
				if ((tmp11)){
					HX_STACK_LINE(186)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(186)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(186)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(186)
					tmp12 = false;
				}
				HX_STACK_LINE(186)
				if ((tmp12)){
					HX_STACK_LINE(186)
					Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(186)
					_this->listen_x(tmp13);
				}
				HX_STACK_LINE(186)
				_this->x;
			}
		}
		HX_STACK_LINE(187)
		Float tmp8 = this->get_zoom();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(187)
		this->set_zoom(tmp8);
		HX_STACK_LINE(188)
		this->_connected = false;
		HX_STACK_LINE(189)
		Dynamic tmp9 = this->_onwindowsized_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(189)
		::Luxe_obj::off((int)31,tmp9);
		HX_STACK_LINE(190)
		::phoenix::Vector tmp10 = this->get_size();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(190)
		return tmp10;
	}
	HX_STACK_LINE(193)
	bool tmp1 = this->_connected;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	if ((tmp2)){
		HX_STACK_LINE(194)
		Dynamic tmp3 = this->_onwindowsized_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		::Luxe_obj::on((int)31,tmp3);
		HX_STACK_LINE(195)
		this->_connected = true;
	}
	HX_STACK_LINE(202)
	::phoenix::Rectangle tmp3 = this->get_viewport();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	Float tmp4 = tmp3->w;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	Float tmp5 = _size->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(202)
	Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(202)
	Float _ratio_x = tmp6;		HX_STACK_VAR(_ratio_x,"_ratio_x");
	HX_STACK_LINE(203)
	::phoenix::Rectangle tmp7 = this->get_viewport();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(203)
	Float tmp8 = tmp7->h;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(203)
	Float tmp9 = _size->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(203)
	Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(203)
	Float _ratio_y = tmp10;		HX_STACK_VAR(_ratio_y,"_ratio_y");
	HX_STACK_LINE(204)
	Float tmp11 = _ratio_x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(204)
	Float tmp12 = _ratio_y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(204)
	Float tmp13 = ::Math_obj::max(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(204)
	Float _shortest = tmp13;		HX_STACK_VAR(_shortest,"_shortest");
	HX_STACK_LINE(205)
	Float tmp14 = _ratio_x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(205)
	Float tmp15 = _ratio_y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(205)
	Float tmp16 = ::Math_obj::min(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(205)
	Float _longest = tmp16;		HX_STACK_VAR(_longest,"_longest");
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		::luxe::SizeMode tmp17 = this->get_size_mode();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(207)
		::luxe::SizeMode _g = tmp17;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(210)
				Float tmp18 = _ratio_y = _longest;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(210)
				_ratio_x = tmp18;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(214)
				Float tmp18 = _ratio_y = _shortest;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(214)
				_ratio_x = tmp18;
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(224)
		::phoenix::Vector tmp17 = this->_size_factor;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(224)
		::phoenix::Vector _this = tmp17;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(224)
		_this->x = _ratio_x;
		HX_STACK_LINE(224)
		bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(224)
		if ((tmp18)){
			HX_STACK_LINE(224)
			_this->x;
		}
		else{
			HX_STACK_LINE(224)
			bool tmp19 = (_this->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(224)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(224)
			if ((tmp19)){
				HX_STACK_LINE(224)
				bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(224)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(224)
				tmp20 = !(tmp22);
			}
			else{
				HX_STACK_LINE(224)
				tmp20 = false;
			}
			HX_STACK_LINE(224)
			if ((tmp20)){
				HX_STACK_LINE(224)
				Float tmp21 = _ratio_x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(224)
				_this->listen_x(tmp21);
			}
			HX_STACK_LINE(224)
			_this->x;
		}
	}
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		::phoenix::Vector tmp17 = this->_size_factor;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(225)
		::phoenix::Vector _this = tmp17;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(225)
		_this->y = _ratio_y;
		HX_STACK_LINE(225)
		bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(225)
		if ((tmp18)){
			HX_STACK_LINE(225)
			_this->y;
		}
		else{
			HX_STACK_LINE(225)
			bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(225)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(225)
			if ((tmp19)){
				HX_STACK_LINE(225)
				bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(225)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(225)
				tmp20 = !(tmp22);
			}
			else{
				HX_STACK_LINE(225)
				tmp20 = false;
			}
			HX_STACK_LINE(225)
			if ((tmp20)){
				HX_STACK_LINE(225)
				Float tmp21 = _ratio_y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(225)
				_this->listen_y(tmp21);
			}
			HX_STACK_LINE(225)
			_this->y;
		}
	}
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		::phoenix::Camera tmp17 = this->view;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(227)
		::phoenix::Vector tmp18 = tmp17->get_scale();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(227)
		::phoenix::Vector _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(227)
		::phoenix::Vector tmp19 = this->_size_factor;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(227)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(227)
		Float tmp21 = this->get_zoom();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(227)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(227)
		Float tmp23 = (Float((int)1) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(227)
		Float _x = tmp23;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(227)
		_this->x = _x;
		HX_STACK_LINE(227)
		bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(227)
		if ((tmp24)){
			HX_STACK_LINE(227)
			_this->x;
		}
		else{
			HX_STACK_LINE(227)
			bool tmp25 = (_this->listen_x != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(227)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(227)
			if ((tmp25)){
				HX_STACK_LINE(227)
				bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(227)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(227)
				tmp26 = !(tmp28);
			}
			else{
				HX_STACK_LINE(227)
				tmp26 = false;
			}
			HX_STACK_LINE(227)
			if ((tmp26)){
				HX_STACK_LINE(227)
				Float tmp27 = _x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(227)
				_this->listen_x(tmp27);
			}
			HX_STACK_LINE(227)
			_this->x;
		}
	}
	HX_STACK_LINE(228)
	{
		HX_STACK_LINE(228)
		::phoenix::Camera tmp17 = this->view;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(228)
		::phoenix::Vector tmp18 = tmp17->get_scale();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(228)
		::phoenix::Vector _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(228)
		::phoenix::Vector tmp19 = this->_size_factor;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(228)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(228)
		Float tmp21 = this->get_zoom();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(228)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(228)
		Float tmp23 = (Float((int)1) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(228)
		Float _y = tmp23;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(228)
		_this->y = _y;
		HX_STACK_LINE(228)
		bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(228)
		if ((tmp24)){
			HX_STACK_LINE(228)
			_this->y;
		}
		else{
			HX_STACK_LINE(228)
			bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(228)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(228)
			if ((tmp25)){
				HX_STACK_LINE(228)
				bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(228)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(228)
				tmp26 = !(tmp28);
			}
			else{
				HX_STACK_LINE(228)
				tmp26 = false;
			}
			HX_STACK_LINE(228)
			if ((tmp26)){
				HX_STACK_LINE(228)
				Float tmp27 = _y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(228)
				_this->listen_y(tmp27);
			}
			HX_STACK_LINE(228)
			_this->y;
		}
	}
	HX_STACK_LINE(231)
	Float tmp17 = (Float(_size->x) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(231)
	Float tmp18 = (Float(_size->y) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(231)
	::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(tmp17,tmp18,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(231)
	this->set_center(tmp19);
	HX_STACK_LINE(234)
	::phoenix::Vector tmp20 = ::phoenix::Vector_obj::__new(_size->x,_size->y,_size->z,_size->w);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(234)
	::phoenix::Vector tmp21 = this->size = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(234)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_size,return )

Void Camera_obj::focus( ::phoenix::Vector _p,hx::Null< Float >  __o__t,Dynamic oncomplete){
Float _t = __o__t.Default(((Float)0.6));
	HX_STACK_FRAME("luxe.Camera","focus",0x3a2b4d27,"luxe.Camera.focus","luxe/Camera.hx",240,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_ARG(oncomplete,"oncomplete")
{
		HX_STACK_LINE(240)
		::luxe::Camera _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(242)
		::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		::phoenix::Vector tmp1 = tmp->get_center();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		Float tmp2 = _t;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &_p){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Camera.hx",242,0xd52a0e40)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , _p->x,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , _p->y,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(242)
		Dynamic tmp3 = _Function_1_1::Block(_p);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		::luxe::tween::actuators::IGenericActuator tmp4 = ::luxe::tween::Actuate_obj::tween(tmp1,tmp2,tmp3,true,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		Dynamic tmp5 = oncomplete;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		::luxe::tween::actuators::IGenericActuator tmp6 = tmp4->onComplete(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(243)
		::luxe::tween::easing::IEasing tmp7 = ::luxe::tween::easing::Quad_obj::get_easeInOut();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(242)
		::luxe::tween::actuators::IGenericActuator tmp8 = tmp6->ease(tmp7);		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::luxe::Camera,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","luxe/Camera.hx",245,0xd52a0e40)
			{
				HX_STACK_LINE(245)
				::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					::phoenix::Transform tmp10 = _g->get_transform();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(245)
					::phoenix::Transform _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(245)
					tmp9 = _this->local->pos;
				}
				HX_STACK_LINE(245)
				::phoenix::Vector _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				::phoenix::Vector tmp10 = _g->view->get_pos();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(245)
				Float _x = tmp10->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(245)
				::phoenix::Vector tmp11 = _g->view->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(245)
				Float _y = tmp11->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(245)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(245)
				_this->ignore_listeners = true;
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					_this->x = _x;
					HX_STACK_LINE(245)
					bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(245)
					if ((tmp12)){
						HX_STACK_LINE(245)
						_this->x;
					}
					else{
						HX_STACK_LINE(245)
						bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(245)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(245)
						if ((tmp13)){
							HX_STACK_LINE(245)
							bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(245)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(245)
							tmp14 = !(tmp16);
						}
						else{
							HX_STACK_LINE(245)
							tmp14 = false;
						}
						HX_STACK_LINE(245)
						if ((tmp14)){
							HX_STACK_LINE(245)
							Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(245)
							_this->listen_x(tmp15);
						}
						HX_STACK_LINE(245)
						_this->x;
					}
				}
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					_this->y = _y;
					HX_STACK_LINE(245)
					bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(245)
					if ((tmp12)){
						HX_STACK_LINE(245)
						_this->y;
					}
					else{
						HX_STACK_LINE(245)
						bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(245)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(245)
						if ((tmp13)){
							HX_STACK_LINE(245)
							bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(245)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(245)
							tmp14 = !(tmp16);
						}
						else{
							HX_STACK_LINE(245)
							tmp14 = false;
						}
						HX_STACK_LINE(245)
						if ((tmp14)){
							HX_STACK_LINE(245)
							Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(245)
							_this->listen_y(tmp15);
						}
						HX_STACK_LINE(245)
						_this->y;
					}
				}
				HX_STACK_LINE(245)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(245)
				bool tmp12 = (_this->listen_x != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(245)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(245)
				if ((tmp12)){
					HX_STACK_LINE(245)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(245)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(245)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(245)
					tmp13 = false;
				}
				HX_STACK_LINE(245)
				if ((tmp13)){
					HX_STACK_LINE(245)
					Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(245)
					_this->listen_x(tmp14);
				}
				HX_STACK_LINE(245)
				bool tmp14 = (_this->listen_y != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(245)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(245)
				if ((tmp14)){
					HX_STACK_LINE(245)
					bool tmp16 = _this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(245)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(245)
					tmp15 = !(tmp17);
				}
				else{
					HX_STACK_LINE(245)
					tmp15 = false;
				}
				HX_STACK_LINE(245)
				if ((tmp15)){
					HX_STACK_LINE(245)
					Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(245)
					_this->listen_y(tmp16);
				}
				HX_STACK_LINE(245)
				_this;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(242)
		tmp8->onUpdate( Dynamic(new _Function_1_2(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Camera_obj,focus,(void))

::phoenix::Vector Camera_obj::screen_point_to_world( ::phoenix::Vector _vector){
	HX_STACK_FRAME("luxe.Camera","screen_point_to_world",0x4663cc5f,"luxe.Camera.screen_point_to_world","luxe/Camera.hx",251,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(253)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	::phoenix::Vector tmp1 = _vector;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	::phoenix::Vector tmp2 = tmp->screen_point_to_world(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,screen_point_to_world,return )

::phoenix::Vector Camera_obj::world_point_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport){
	HX_STACK_FRAME("luxe.Camera","world_point_to_screen",0x46a6e923,"luxe.Camera.world_point_to_screen","luxe/Camera.hx",258,0xd52a0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_ARG(_viewport,"_viewport")
	HX_STACK_LINE(260)
	::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	::phoenix::Vector tmp1 = _vector;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	::phoenix::Rectangle tmp2 = _viewport;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(260)
	::phoenix::Vector tmp3 = tmp->world_point_to_screen(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(260)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,world_point_to_screen,return )

Void Camera_obj::set_pos_from_transform( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Camera","set_pos_from_transform",0x5d9e6830,"luxe.Camera.set_pos_from_transform","luxe/Camera.hx",265,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(267)
		::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		::phoenix::Rectangle tmp1 = tmp->get_viewport();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		Float vw = tmp1->w;		HX_STACK_VAR(vw,"vw");
		HX_STACK_LINE(268)
		::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(268)
		::phoenix::Rectangle tmp3 = tmp2->get_viewport();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		Float vh = tmp3->h;		HX_STACK_VAR(vh,"vh");
		HX_STACK_LINE(269)
		Float tmp4 = (Float(vw) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(269)
		Float hvw = tmp4;		HX_STACK_VAR(hvw,"hvw");
		HX_STACK_LINE(270)
		Float tmp5 = (Float(vh) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(270)
		Float hvh = tmp5;		HX_STACK_VAR(hvh,"hvh");
		HX_STACK_LINE(272)
		Float _px = _pos->x;		HX_STACK_VAR(_px,"_px");
		HX_STACK_LINE(272)
		Float _py = _pos->y;		HX_STACK_VAR(_py,"_py");
		HX_STACK_LINE(274)
		::phoenix::Rectangle tmp6 = this->bounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(274)
		if ((tmp7)){
			HX_STACK_LINE(275)
			Float tmp8 = _px;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(275)
			::phoenix::Rectangle tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(275)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(275)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(275)
			if ((tmp11)){
				HX_STACK_LINE(275)
				::phoenix::Rectangle tmp12 = this->bounds;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(275)
				_px = tmp12->x;
			}
			HX_STACK_LINE(276)
			Float tmp12 = _py;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(276)
			::phoenix::Rectangle tmp13 = this->bounds;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(276)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(276)
			bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(276)
			if ((tmp15)){
				HX_STACK_LINE(276)
				::phoenix::Rectangle tmp16 = this->bounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(276)
				_py = tmp16->y;
			}
			HX_STACK_LINE(277)
			Float tmp16 = (_px + hvw);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(277)
			::phoenix::Rectangle tmp17 = this->bounds;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(277)
			Float tmp18 = tmp17->w;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(277)
			Float tmp19 = vw;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(277)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(277)
			bool tmp21 = (tmp16 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(277)
			if ((tmp21)){
				HX_STACK_LINE(277)
				::phoenix::Rectangle tmp22 = this->bounds;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(277)
				Float tmp23 = tmp22->w;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(277)
				Float tmp24 = vw;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(277)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(277)
				Float tmp26 = hvw;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(277)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(277)
				_px = tmp27;
			}
			HX_STACK_LINE(278)
			Float tmp22 = (_py + hvh);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(278)
			::phoenix::Rectangle tmp23 = this->bounds;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(278)
			Float tmp24 = tmp23->h;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(278)
			Float tmp25 = vh;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(278)
			Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(278)
			bool tmp27 = (tmp22 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(278)
			if ((tmp27)){
				HX_STACK_LINE(278)
				::phoenix::Rectangle tmp28 = this->bounds;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(278)
				Float tmp29 = tmp28->h;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(278)
				Float tmp30 = vh;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(278)
				Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(278)
				Float tmp32 = hvh;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(278)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(278)
				_py = tmp33;
			}
		}
		HX_STACK_LINE(281)
		bool prev = _pos->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(282)
		_pos->ignore_listeners = true;
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			bool prev1 = _pos->ignore_listeners;		HX_STACK_VAR(prev1,"prev1");
			HX_STACK_LINE(283)
			_pos->ignore_listeners = true;
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				_pos->x = _px;
				HX_STACK_LINE(283)
				bool tmp8 = _pos->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(283)
				if ((tmp8)){
					HX_STACK_LINE(283)
					_pos->x;
				}
				else{
					HX_STACK_LINE(283)
					bool tmp9 = (_pos->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(283)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(283)
					if ((tmp9)){
						HX_STACK_LINE(283)
						bool tmp11 = _pos->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(283)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(283)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(283)
						tmp10 = false;
					}
					HX_STACK_LINE(283)
					if ((tmp10)){
						HX_STACK_LINE(283)
						Float tmp11 = _px;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(283)
						_pos->listen_x(tmp11);
					}
					HX_STACK_LINE(283)
					_pos->x;
				}
			}
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				_pos->y = _py;
				HX_STACK_LINE(283)
				bool tmp8 = _pos->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(283)
				if ((tmp8)){
					HX_STACK_LINE(283)
					_pos->y;
				}
				else{
					HX_STACK_LINE(283)
					bool tmp9 = (_pos->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(283)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(283)
					if ((tmp9)){
						HX_STACK_LINE(283)
						bool tmp11 = _pos->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(283)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(283)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(283)
						tmp10 = false;
					}
					HX_STACK_LINE(283)
					if ((tmp10)){
						HX_STACK_LINE(283)
						Float tmp11 = _py;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(283)
						_pos->listen_y(tmp11);
					}
					HX_STACK_LINE(283)
					_pos->y;
				}
			}
			HX_STACK_LINE(283)
			_pos->ignore_listeners = prev1;
			HX_STACK_LINE(283)
			bool tmp8 = (_pos->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(283)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(283)
			if ((tmp8)){
				HX_STACK_LINE(283)
				bool tmp10 = _pos->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(283)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(283)
				tmp9 = !(tmp11);
			}
			else{
				HX_STACK_LINE(283)
				tmp9 = false;
			}
			HX_STACK_LINE(283)
			if ((tmp9)){
				HX_STACK_LINE(283)
				Float tmp10 = _pos->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(283)
				_pos->listen_x(tmp10);
			}
			HX_STACK_LINE(283)
			bool tmp10 = (_pos->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(283)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(283)
			if ((tmp10)){
				HX_STACK_LINE(283)
				bool tmp12 = _pos->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(283)
				tmp11 = !(tmp13);
			}
			else{
				HX_STACK_LINE(283)
				tmp11 = false;
			}
			HX_STACK_LINE(283)
			if ((tmp11)){
				HX_STACK_LINE(283)
				Float tmp12 = _pos->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				_pos->listen_y(tmp12);
			}
			HX_STACK_LINE(283)
			_pos;
		}
		HX_STACK_LINE(284)
		_pos->ignore_listeners = prev;
		HX_STACK_LINE(286)
		::phoenix::Vector tmp8 = _pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(286)
		this->super::set_pos_from_transform(tmp8);
		HX_STACK_LINE(289)
		this->update_view_pos = _pos;
	}
return null();
}


Void Camera_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Camera","set_rotation_from_transform",0xfae455ea,"luxe.Camera.set_rotation_from_transform","luxe/Camera.hx",294,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(296)
		::phoenix::Quaternion tmp = _rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(296)
		this->super::set_rotation_from_transform(tmp);
		HX_STACK_LINE(298)
		::phoenix::Camera tmp1 = this->view;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		if ((tmp2)){
			HX_STACK_LINE(299)
			::phoenix::Camera tmp3 = this->view;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			::phoenix::Quaternion tmp4 = _rotation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			tmp3->set_rotation(tmp4);
		}
	}
return null();
}


Void Camera_obj::set_scale_from_transform( ::phoenix::Vector _scale){
{
		HX_STACK_FRAME("luxe.Camera","set_scale_from_transform",0x39fbfb7a,"luxe.Camera.set_scale_from_transform","luxe/Camera.hx",304,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scale,"_scale")
		HX_STACK_LINE(306)
		::phoenix::Vector tmp = _scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		this->super::set_scale_from_transform(tmp);
		HX_STACK_LINE(308)
		::phoenix::Camera tmp1 = this->view;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		if ((tmp2)){
			HX_STACK_LINE(309)
			::phoenix::Camera tmp3 = this->view;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			::phoenix::Vector tmp4 = _scale;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			tmp3->set_scale(tmp4);
		}
	}
return null();
}


Void Camera_obj::shake( Float amount){
{
		HX_STACK_FRAME("luxe.Camera","shake",0xb1becc15,"luxe.Camera.shake","luxe/Camera.hx",315,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(317)
		this->shake_amount = amount;
		HX_STACK_LINE(318)
		this->shaking = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,shake,(void))

Void Camera_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Camera","update",0x3f133dda,"luxe.Camera.update","luxe/Camera.hx",323,0xd52a0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(326)
		bool tmp = this->shaking;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		if ((tmp)){
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::phoenix::Vector tmp1 = this->_final_pos;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(329)
				::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(329)
				::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					::phoenix::Transform tmp3 = this->get_transform();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(329)
					::phoenix::Transform _this1 = tmp3;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(329)
					tmp2 = _this1->local->pos;
				}
				HX_STACK_LINE(329)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(329)
				Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(329)
				::phoenix::Vector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					::phoenix::Transform tmp5 = this->get_transform();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(329)
					::phoenix::Transform _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(329)
					tmp4 = _this1->local->pos;
				}
				HX_STACK_LINE(329)
				Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(329)
				Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(329)
				::phoenix::Vector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					::phoenix::Transform tmp7 = this->get_transform();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(329)
					::phoenix::Transform _this1 = tmp7;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(329)
					tmp6 = _this1->local->pos;
				}
				HX_STACK_LINE(329)
				Float tmp7 = tmp6->z;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(329)
				Float _z = tmp7;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(329)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(329)
				_this->ignore_listeners = true;
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					_this->x = _x;
					HX_STACK_LINE(329)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(329)
					if ((tmp8)){
						HX_STACK_LINE(329)
						_this->x;
					}
					else{
						HX_STACK_LINE(329)
						bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(329)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(329)
						if ((tmp9)){
							HX_STACK_LINE(329)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(329)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(329)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(329)
							tmp10 = false;
						}
						HX_STACK_LINE(329)
						if ((tmp10)){
							HX_STACK_LINE(329)
							Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(329)
							_this->listen_x(tmp11);
						}
						HX_STACK_LINE(329)
						_this->x;
					}
				}
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					_this->y = _y;
					HX_STACK_LINE(329)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(329)
					if ((tmp8)){
						HX_STACK_LINE(329)
						_this->y;
					}
					else{
						HX_STACK_LINE(329)
						bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(329)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(329)
						if ((tmp9)){
							HX_STACK_LINE(329)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(329)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(329)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(329)
							tmp10 = false;
						}
						HX_STACK_LINE(329)
						if ((tmp10)){
							HX_STACK_LINE(329)
							Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(329)
							_this->listen_y(tmp11);
						}
						HX_STACK_LINE(329)
						_this->y;
					}
				}
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					_this->z = _z;
					HX_STACK_LINE(329)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(329)
					if ((tmp8)){
						HX_STACK_LINE(329)
						_this->z;
					}
					else{
						HX_STACK_LINE(329)
						bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(329)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(329)
						if ((tmp9)){
							HX_STACK_LINE(329)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(329)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(329)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(329)
							tmp10 = false;
						}
						HX_STACK_LINE(329)
						if ((tmp10)){
							HX_STACK_LINE(329)
							Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(329)
							_this->listen_z(tmp11);
						}
						HX_STACK_LINE(329)
						_this->z;
					}
				}
				HX_STACK_LINE(329)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(329)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(329)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(329)
				if ((tmp8)){
					HX_STACK_LINE(329)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(329)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(329)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(329)
					tmp9 = false;
				}
				HX_STACK_LINE(329)
				if ((tmp9)){
					HX_STACK_LINE(329)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(329)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(329)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(329)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(329)
				if ((tmp10)){
					HX_STACK_LINE(329)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(329)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(329)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(329)
					tmp11 = false;
				}
				HX_STACK_LINE(329)
				if ((tmp11)){
					HX_STACK_LINE(329)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(329)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(329)
				bool tmp12 = (_this->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(329)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(329)
				if ((tmp12)){
					HX_STACK_LINE(329)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(329)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(329)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(329)
					tmp13 = false;
				}
				HX_STACK_LINE(329)
				if ((tmp13)){
					HX_STACK_LINE(329)
					Float tmp14 = _this->z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(329)
					_this->listen_z(tmp14);
				}
				HX_STACK_LINE(329)
				_this;
			}
			HX_STACK_LINE(332)
			::luxe::utils::Utils tmp1 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(332)
			::phoenix::Vector tmp2 = tmp1->geometry->random_point_in_unit_circle();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(332)
			this->shake_vector = tmp2;
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::phoenix::Vector tmp3 = this->shake_vector;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(335)
				::phoenix::Vector _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					Float tmp4 = _g->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(335)
					Float tmp5 = this->shake_amount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(335)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(335)
					Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(335)
					_g->x = _x;
					HX_STACK_LINE(335)
					bool tmp7 = _g->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(335)
					if ((tmp7)){
						HX_STACK_LINE(335)
						_g->x;
					}
					else{
						HX_STACK_LINE(335)
						bool tmp8 = (_g->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(335)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(335)
						if ((tmp8)){
							HX_STACK_LINE(335)
							bool tmp10 = _g->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(335)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(335)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(335)
							tmp9 = false;
						}
						HX_STACK_LINE(335)
						if ((tmp9)){
							HX_STACK_LINE(335)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(335)
							_g->listen_x(tmp10);
						}
						HX_STACK_LINE(335)
						_g->x;
					}
				}
			}
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::phoenix::Vector tmp3 = this->shake_vector;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(336)
				::phoenix::Vector _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					Float tmp4 = _g->y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(336)
					Float tmp5 = this->shake_amount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(336)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(336)
					Float _y = tmp6;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(336)
					_g->y = _y;
					HX_STACK_LINE(336)
					bool tmp7 = _g->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(336)
					if ((tmp7)){
						HX_STACK_LINE(336)
						_g->y;
					}
					else{
						HX_STACK_LINE(336)
						bool tmp8 = (_g->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(336)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(336)
						if ((tmp8)){
							HX_STACK_LINE(336)
							bool tmp10 = _g->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(336)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(336)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(336)
							tmp9 = false;
						}
						HX_STACK_LINE(336)
						if ((tmp9)){
							HX_STACK_LINE(336)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(336)
							_g->listen_y(tmp10);
						}
						HX_STACK_LINE(336)
						_g->y;
					}
				}
			}
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				::phoenix::Vector tmp3 = this->shake_vector;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(337)
				::phoenix::Vector _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					Float tmp4 = _g->z;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(337)
					Float tmp5 = this->shake_amount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(337)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(337)
					Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(337)
					_g->z = _z;
					HX_STACK_LINE(337)
					bool tmp7 = _g->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(337)
					if ((tmp7)){
						HX_STACK_LINE(337)
						_g->z;
					}
					else{
						HX_STACK_LINE(337)
						bool tmp8 = (_g->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(337)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(337)
						if ((tmp8)){
							HX_STACK_LINE(337)
							bool tmp10 = _g->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(337)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(337)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(337)
							tmp9 = false;
						}
						HX_STACK_LINE(337)
						if ((tmp9)){
							HX_STACK_LINE(337)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(337)
							_g->listen_z(tmp10);
						}
						HX_STACK_LINE(337)
						_g->z;
					}
				}
			}
			HX_STACK_LINE(340)
			hx::MultEq(this->shake_amount,((Float)0.9));
			HX_STACK_LINE(343)
			Float tmp3 = this->shake_amount;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(343)
			Float tmp4 = this->minimum_shake;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(343)
			bool tmp5 = (tmp3 <= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(343)
			if ((tmp5)){
				HX_STACK_LINE(344)
				this->shake_amount = (int)0;
				HX_STACK_LINE(345)
				this->shaking = false;
			}
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(349)
				::phoenix::Vector tmp6 = this->_final_pos;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(349)
				::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(349)
				::phoenix::Vector tmp7 = this->_final_pos;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(349)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(349)
				::phoenix::Vector tmp9 = this->shake_vector;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(349)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(349)
				Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(349)
				Float _x = tmp11;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(349)
				::phoenix::Vector tmp12 = this->_final_pos;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(349)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(349)
				::phoenix::Vector tmp14 = this->shake_vector;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(349)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(349)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(349)
				Float _y = tmp16;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(349)
				::phoenix::Vector tmp17 = this->_final_pos;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(349)
				Float tmp18 = tmp17->z;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(349)
				::phoenix::Vector tmp19 = this->shake_vector;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(349)
				Float tmp20 = tmp19->z;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(349)
				Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(349)
				Float _z = tmp21;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(349)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(349)
				_this->ignore_listeners = true;
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(349)
					_this->x = _x;
					HX_STACK_LINE(349)
					bool tmp22 = _this->_construct;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(349)
					if ((tmp22)){
						HX_STACK_LINE(349)
						_this->x;
					}
					else{
						HX_STACK_LINE(349)
						bool tmp23 = (_this->listen_x != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(349)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(349)
						if ((tmp23)){
							HX_STACK_LINE(349)
							bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(349)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(349)
							tmp24 = !(tmp26);
						}
						else{
							HX_STACK_LINE(349)
							tmp24 = false;
						}
						HX_STACK_LINE(349)
						if ((tmp24)){
							HX_STACK_LINE(349)
							Float tmp25 = _x;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(349)
							_this->listen_x(tmp25);
						}
						HX_STACK_LINE(349)
						_this->x;
					}
				}
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(349)
					_this->y = _y;
					HX_STACK_LINE(349)
					bool tmp22 = _this->_construct;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(349)
					if ((tmp22)){
						HX_STACK_LINE(349)
						_this->y;
					}
					else{
						HX_STACK_LINE(349)
						bool tmp23 = (_this->listen_y != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(349)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(349)
						if ((tmp23)){
							HX_STACK_LINE(349)
							bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(349)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(349)
							tmp24 = !(tmp26);
						}
						else{
							HX_STACK_LINE(349)
							tmp24 = false;
						}
						HX_STACK_LINE(349)
						if ((tmp24)){
							HX_STACK_LINE(349)
							Float tmp25 = _y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(349)
							_this->listen_y(tmp25);
						}
						HX_STACK_LINE(349)
						_this->y;
					}
				}
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(349)
					_this->z = _z;
					HX_STACK_LINE(349)
					bool tmp22 = _this->_construct;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(349)
					if ((tmp22)){
						HX_STACK_LINE(349)
						_this->z;
					}
					else{
						HX_STACK_LINE(349)
						bool tmp23 = (_this->listen_z != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(349)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(349)
						if ((tmp23)){
							HX_STACK_LINE(349)
							bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(349)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(349)
							tmp24 = !(tmp26);
						}
						else{
							HX_STACK_LINE(349)
							tmp24 = false;
						}
						HX_STACK_LINE(349)
						if ((tmp24)){
							HX_STACK_LINE(349)
							Float tmp25 = _z;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(349)
							_this->listen_z(tmp25);
						}
						HX_STACK_LINE(349)
						_this->z;
					}
				}
				HX_STACK_LINE(349)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(349)
				bool tmp22 = (_this->listen_x != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(349)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(349)
				if ((tmp22)){
					HX_STACK_LINE(349)
					bool tmp24 = _this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(349)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(349)
					tmp23 = !(tmp25);
				}
				else{
					HX_STACK_LINE(349)
					tmp23 = false;
				}
				HX_STACK_LINE(349)
				if ((tmp23)){
					HX_STACK_LINE(349)
					Float tmp24 = _this->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(349)
					_this->listen_x(tmp24);
				}
				HX_STACK_LINE(349)
				bool tmp24 = (_this->listen_y != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(349)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(349)
				if ((tmp24)){
					HX_STACK_LINE(349)
					bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(349)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(349)
					tmp25 = !(tmp27);
				}
				else{
					HX_STACK_LINE(349)
					tmp25 = false;
				}
				HX_STACK_LINE(349)
				if ((tmp25)){
					HX_STACK_LINE(349)
					Float tmp26 = _this->y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(349)
					_this->listen_y(tmp26);
				}
				HX_STACK_LINE(349)
				bool tmp26 = (_this->listen_z != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(349)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(349)
				if ((tmp26)){
					HX_STACK_LINE(349)
					bool tmp28 = _this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(349)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(349)
					tmp27 = !(tmp29);
				}
				else{
					HX_STACK_LINE(349)
					tmp27 = false;
				}
				HX_STACK_LINE(349)
				if ((tmp27)){
					HX_STACK_LINE(349)
					Float tmp28 = _this->z;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(349)
					_this->listen_z(tmp28);
				}
				HX_STACK_LINE(349)
				_this;
			}
			HX_STACK_LINE(352)
			::phoenix::Vector tmp6 = this->_final_pos;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(352)
			this->update_view_pos = tmp6;
		}
		HX_STACK_LINE(356)
		::phoenix::Vector tmp1 = this->update_view_pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		if ((tmp2)){
			HX_STACK_LINE(356)
			::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(356)
			::phoenix::Camera tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(356)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(356)
			tmp3 = false;
		}
		HX_STACK_LINE(356)
		if ((tmp3)){
			HX_STACK_LINE(357)
			::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(357)
			::phoenix::Vector tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				::phoenix::Vector tmp6 = this->update_view_pos;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(357)
				::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(357)
				tmp5 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
			}
			HX_STACK_LINE(357)
			tmp4->set_pos(tmp5);
			HX_STACK_LINE(358)
			this->update_view_pos = null();
		}
	}
return null();
}


Void Camera_obj::init( ){
{
		HX_STACK_FRAME("luxe.Camera","init",0xbd5caca1,"luxe.Camera.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Camera_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Camera","ondestroy",0xbd23fe8a,"luxe.Camera.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(size_mode,"size_mode");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(shake_vector,"shake_vector");
	HX_MARK_MEMBER_NAME(shake_amount,"shake_amount");
	HX_MARK_MEMBER_NAME(shaking,"shaking");
	HX_MARK_MEMBER_NAME(minimum_shake,"minimum_shake");
	HX_MARK_MEMBER_NAME(update_view_pos,"update_view_pos");
	HX_MARK_MEMBER_NAME(_size_factor,"_size_factor");
	HX_MARK_MEMBER_NAME(_final_pos,"_final_pos");
	HX_MARK_MEMBER_NAME(_rotation_radian,"_rotation_radian");
	HX_MARK_MEMBER_NAME(_rotation_cache,"_rotation_cache");
	HX_MARK_MEMBER_NAME(_connected,"_connected");
	::luxe::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(size_mode,"size_mode");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(shake_vector,"shake_vector");
	HX_VISIT_MEMBER_NAME(shake_amount,"shake_amount");
	HX_VISIT_MEMBER_NAME(shaking,"shaking");
	HX_VISIT_MEMBER_NAME(minimum_shake,"minimum_shake");
	HX_VISIT_MEMBER_NAME(update_view_pos,"update_view_pos");
	HX_VISIT_MEMBER_NAME(_size_factor,"_size_factor");
	HX_VISIT_MEMBER_NAME(_final_pos,"_final_pos");
	HX_VISIT_MEMBER_NAME(_rotation_radian,"_rotation_radian");
	HX_VISIT_MEMBER_NAME(_rotation_cache,"_rotation_cache");
	HX_VISIT_MEMBER_NAME(_connected,"_connected");
	::luxe::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Camera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return get_zoom(); }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp == hx::paccAlways ? get_size() : size; }
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return get_center(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaking") ) { return shaking; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp == hx::paccAlways) return get_viewport(); }
		if (HX_FIELD_EQ(inName,"get_zoom") ) { return get_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"size_mode") ) { return inCallProp == hx::paccAlways ? get_size_mode() : size_mode; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_final_pos") ) { return _final_pos; }
		if (HX_FIELD_EQ(inName,"get_center") ) { return get_center_dyn(); }
		if (HX_FIELD_EQ(inName,"set_center") ) { return set_center_dyn(); }
		if (HX_FIELD_EQ(inName,"_connected") ) { return _connected; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { if (inCallProp == hx::paccAlways) return get_minimum_zoom(); }
		if (HX_FIELD_EQ(inName,"shake_vector") ) { return shake_vector; }
		if (HX_FIELD_EQ(inName,"shake_amount") ) { return shake_amount; }
		if (HX_FIELD_EQ(inName,"_size_factor") ) { return _size_factor; }
		if (HX_FIELD_EQ(inName,"get_viewport") ) { return get_viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viewport") ) { return set_viewport_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minimum_shake") ) { return minimum_shake; }
		if (HX_FIELD_EQ(inName,"get_size_mode") ) { return get_size_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size_mode") ) { return set_size_mode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onwindowsized") ) { return _onwindowsized_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"update_view_pos") ) { return update_view_pos; }
		if (HX_FIELD_EQ(inName,"_rotation_cache") ) { return _rotation_cache; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_radian") ) { return _rotation_radian; }
		if (HX_FIELD_EQ(inName,"get_minimum_zoom") ) { return get_minimum_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minimum_zoom") ) { return set_minimum_zoom_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"screen_point_to_world") ) { return screen_point_to_world_dyn(); }
		if (HX_FIELD_EQ(inName,"world_point_to_screen") ) { return world_point_to_screen_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pos_from_transform") ) { return set_pos_from_transform_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_scale_from_transform") ) { return set_scale_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return set_zoom(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return set_center(inValue); }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaking") ) { shaking=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp == hx::paccAlways) return set_viewport(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"size_mode") ) { if (inCallProp == hx::paccAlways) return set_size_mode(inValue);size_mode=inValue.Cast< ::luxe::SizeMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_final_pos") ) { _final_pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_connected") ) { _connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { if (inCallProp == hx::paccAlways) return set_minimum_zoom(inValue); }
		if (HX_FIELD_EQ(inName,"shake_vector") ) { shake_vector=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shake_amount") ) { shake_amount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_size_factor") ) { _size_factor=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minimum_shake") ) { minimum_shake=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"update_view_pos") ) { update_view_pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotation_cache") ) { _rotation_cache=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rotation_radian") ) { _rotation_radian=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Camera_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"));
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("minimum_zoom","\x64","\x2e","\x79","\xf3"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("size_mode","\xe1","\xf2","\xda","\x66"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("shake_vector","\x5c","\xe8","\x33","\x81"));
	outFields->push(HX_HCSTRING("shake_amount","\x71","\x49","\xd9","\xbe"));
	outFields->push(HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64"));
	outFields->push(HX_HCSTRING("minimum_shake","\x55","\x3a","\x16","\x0a"));
	outFields->push(HX_HCSTRING("update_view_pos","\xb0","\x53","\xb7","\x86"));
	outFields->push(HX_HCSTRING("_size_factor","\xce","\xc1","\xf6","\x92"));
	outFields->push(HX_HCSTRING("_final_pos","\xcc","\x70","\xc1","\xf2"));
	outFields->push(HX_HCSTRING("_rotation_radian","\x83","\x19","\xf0","\x9d"));
	outFields->push(HX_HCSTRING("_rotation_cache","\xe0","\xe9","\xe0","\x66"));
	outFields->push(HX_HCSTRING("_connected","\x8a","\x5e","\x99","\xfe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::luxe::SizeMode*/ ,(int)offsetof(Camera_obj,size_mode),HX_HCSTRING("size_mode","\xe1","\xf2","\xda","\x66")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Camera_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Camera_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,shake_vector),HX_HCSTRING("shake_vector","\x5c","\xe8","\x33","\x81")},
	{hx::fsFloat,(int)offsetof(Camera_obj,shake_amount),HX_HCSTRING("shake_amount","\x71","\x49","\xd9","\xbe")},
	{hx::fsBool,(int)offsetof(Camera_obj,shaking),HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64")},
	{hx::fsFloat,(int)offsetof(Camera_obj,minimum_shake),HX_HCSTRING("minimum_shake","\x55","\x3a","\x16","\x0a")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,update_view_pos),HX_HCSTRING("update_view_pos","\xb0","\x53","\xb7","\x86")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,_size_factor),HX_HCSTRING("_size_factor","\xce","\xc1","\xf6","\x92")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,_final_pos),HX_HCSTRING("_final_pos","\xcc","\x70","\xc1","\xf2")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,_rotation_radian),HX_HCSTRING("_rotation_radian","\x83","\x19","\xf0","\x9d")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Camera_obj,_rotation_cache),HX_HCSTRING("_rotation_cache","\xe0","\xe9","\xe0","\x66")},
	{hx::fsBool,(int)offsetof(Camera_obj,_connected),HX_HCSTRING("_connected","\x8a","\x5e","\x99","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("size_mode","\xe1","\xf2","\xda","\x66"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("shake_vector","\x5c","\xe8","\x33","\x81"),
	HX_HCSTRING("shake_amount","\x71","\x49","\xd9","\xbe"),
	HX_HCSTRING("shaking","\x83","\x05","\x2a","\x64"),
	HX_HCSTRING("minimum_shake","\x55","\x3a","\x16","\x0a"),
	HX_HCSTRING("update_view_pos","\xb0","\x53","\xb7","\x86"),
	HX_HCSTRING("_size_factor","\xce","\xc1","\xf6","\x92"),
	HX_HCSTRING("_final_pos","\xcc","\x70","\xc1","\xf2"),
	HX_HCSTRING("_rotation_radian","\x83","\x19","\xf0","\x9d"),
	HX_HCSTRING("_rotation_cache","\xe0","\xe9","\xe0","\x66"),
	HX_HCSTRING("get_viewport","\x6f","\x00","\xbf","\x51"),
	HX_HCSTRING("set_viewport","\xe3","\x23","\xb8","\x66"),
	HX_HCSTRING("get_center","\x9e","\x95","\x62","\xf6"),
	HX_HCSTRING("set_center","\x12","\x34","\xe0","\xf9"),
	HX_HCSTRING("get_minimum_zoom","\xed","\x1a","\x18","\xf8"),
	HX_HCSTRING("set_minimum_zoom","\x61","\x08","\x5a","\x4e"),
	HX_HCSTRING("get_zoom","\x9c","\x5e","\xb3","\xd0"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("get_size_mode","\xb8","\xc6","\x3e","\x28"),
	HX_HCSTRING("set_size_mode","\xc4","\xa8","\x44","\x6d"),
	HX_HCSTRING("_connected","\x8a","\x5e","\x99","\xfe"),
	HX_HCSTRING("_onwindowsized","\x15","\xa4","\x87","\x97"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("screen_point_to_world","\x10","\x11","\x1a","\xdc"),
	HX_HCSTRING("world_point_to_screen","\xd4","\x2d","\x5d","\xdc"),
	HX_HCSTRING("set_pos_from_transform","\x5f","\x3e","\x64","\xc7"),
	HX_HCSTRING("set_rotation_from_transform","\x5b","\xb5","\xfc","\x30"),
	HX_HCSTRING("set_scale_from_transform","\x69","\xfb","\x86","\x01"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
};

#endif

hx::Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Camera","\x7d","\x58","\xea","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Camera_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Camera_obj >;
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
