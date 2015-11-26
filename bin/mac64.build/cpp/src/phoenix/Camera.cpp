#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_FOVType
#include <phoenix/FOVType.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_ProjectionType
#include <phoenix/ProjectionType.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Ray
#include <phoenix/Ray.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
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
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
namespace phoenix{

Void Camera_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.Camera","new",0x30bf44b6,"phoenix.Camera.new","phoenix/Camera.hx",26,0x1fcabb59)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(477)
	this->_refresh_pos = false;
	HX_STACK_LINE(73)
	this->_setup = true;
	HX_STACK_LINE(71)
	this->look_at_dirty = true;
	HX_STACK_LINE(69)
	this->projection_dirty = true;
	HX_STACK_LINE(67)
	this->transform_dirty = true;
	HX_STACK_LINE(50)
	this->minimum_zoom = ((Float)0.01);
	HX_STACK_LINE(39)
	this->aspect = ((Float)1.5);
	HX_STACK_LINE(38)
	this->fov_type = ::phoenix::FOVType_obj::horizontal;
	HX_STACK_LINE(37)
	this->fov = ((Float)60);
	HX_STACK_LINE(35)
	this->far = ((Float)-1000);
	HX_STACK_LINE(34)
	this->near = ((Float)1000);
	HX_STACK_LINE(32)
	this->zoom = ((Float)1.0);
	HX_STACK_LINE(28)
	this->name = HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7");
	HX_STACK_LINE(78)
	::phoenix::Transform tmp = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	this->transform = tmp;
	HX_STACK_LINE(81)
	this->options = _options;
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp2)){
			HX_STACK_LINE(84)
			Dynamic tmp3 = this->default_camera_options();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			this->options = tmp3;
		}
		HX_STACK_LINE(84)
		this->options;
	}
	HX_STACK_LINE(87)
	Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	::String tmp2 = tmp1->__Field(HX_HCSTRING("camera_name","\x65","\x11","\x29","\x5d"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	if ((tmp3)){
		HX_STACK_LINE(88)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		this->name = tmp4->__Field(HX_HCSTRING("camera_name","\x65","\x11","\x29","\x5d"), hx::paccDynamic );
	}
	HX_STACK_LINE(92)
	Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	::phoenix::ProjectionType tmp5 = tmp4->__Field(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(92)
	if ((tmp6)){
		HX_STACK_LINE(93)
		Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		this->projection = tmp7->__Field(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(95)
		this->projection = ::phoenix::ProjectionType_obj::ortho;
	}
	HX_STACK_LINE(98)
	::luxe::Core tmp7 = ::Luxe_obj::core;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	int tmp8 = tmp7->screen->get_w();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(98)
	Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(98)
	::luxe::Core tmp10 = ::Luxe_obj::core;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(98)
	int tmp11 = tmp10->screen->get_h();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(98)
	Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(98)
	::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(tmp9,tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(98)
	this->set_center(tmp13);
	HX_STACK_LINE(99)
	::phoenix::Vector tmp14 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(99)
	this->set_pos(tmp14);
	HX_STACK_LINE(102)
	Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(102)
	::phoenix::Rectangle tmp16 = tmp15->__Field(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(102)
	bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(102)
	if ((tmp17)){
		HX_STACK_LINE(103)
		Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(103)
		::phoenix::Rectangle tmp19 = tmp18->__Field(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(103)
		this->set_viewport(tmp19);
	}
	else{
		HX_STACK_LINE(105)
		::luxe::Core tmp18 = ::Luxe_obj::core;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(105)
		int tmp19 = tmp18->screen->get_w();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(105)
		::luxe::Core tmp20 = ::Luxe_obj::core;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(105)
		int tmp21 = tmp20->screen->get_h();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(105)
		::phoenix::Rectangle tmp22 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(105)
		this->set_viewport(tmp22);
	}
	HX_STACK_LINE(108)
	::phoenix::Vector tmp18 = ::phoenix::Vector_obj::__new((int)0,(int)1,(int)0,null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(108)
	this->up = tmp18;
	HX_STACK_LINE(110)
	::phoenix::Matrix tmp19 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(110)
	this->projection_matrix = tmp19;
	HX_STACK_LINE(111)
	::phoenix::Matrix tmp20 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(111)
	this->view_matrix = tmp20;
	HX_STACK_LINE(112)
	::phoenix::Matrix tmp21 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(112)
	this->view_matrix_inverse = tmp21;
	HX_STACK_LINE(113)
	::phoenix::Matrix tmp22 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(113)
	this->look_at_matrix = tmp22;
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		::phoenix::Transform tmp23 = this->transform;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(115)
		::phoenix::Transform _this = tmp23;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(115)
		bool tmp24 = (_this->_clean_handlers == null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(115)
		if ((tmp24)){
			HX_STACK_LINE(115)
			_this->_clean_handlers = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(115)
		Dynamic tmp25 = this->on_transform_cleaned_dyn();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(115)
		_this->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp25);
	}
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		::phoenix::ProjectionType tmp23 = this->projection;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(117)
		::phoenix::ProjectionType _g = tmp23;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(120)
				Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(120)
				this->set_ortho(tmp24);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(122)
				Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(122)
				this->set_perspective(tmp24);
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(130)
	this->process();
	HX_STACK_LINE(132)
	this->_setup = false;
}
;
	return null();
}

//Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Camera_obj::set_ortho( Dynamic _options){
{
		HX_STACK_FRAME("phoenix.Camera","set_ortho",0xe0d7b871,"phoenix.Camera.set_ortho","phoenix/Camera.hx",140,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_options,"_options")
		HX_STACK_LINE(142)
		this->projection = ::phoenix::ProjectionType_obj::ortho;
		HX_STACK_LINE(144)
		Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		this->_merge_options(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_ortho,(void))

Void Camera_obj::set_perspective( Dynamic _options){
{
		HX_STACK_FRAME("phoenix.Camera","set_perspective",0xca12b775,"phoenix.Camera.set_perspective","phoenix/Camera.hx",148,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_options,"_options")
		HX_STACK_LINE(150)
		this->projection = ::phoenix::ProjectionType_obj::perspective;
		HX_STACK_LINE(152)
		Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		this->_merge_options(tmp);
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			::phoenix::Transform tmp1 = this->transform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(154)
			::phoenix::Vector _this = tmp1->origin;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(154)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(154)
			_this->ignore_listeners = true;
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				_this->x = (int)0;
				HX_STACK_LINE(154)
				bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(154)
				if ((tmp2)){
					HX_STACK_LINE(154)
					_this->x;
				}
				else{
					HX_STACK_LINE(154)
					bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(154)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(154)
					if ((tmp3)){
						HX_STACK_LINE(154)
						bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(154)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(154)
						tmp4 = !(tmp6);
					}
					else{
						HX_STACK_LINE(154)
						tmp4 = false;
					}
					HX_STACK_LINE(154)
					if ((tmp4)){
						HX_STACK_LINE(154)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(154)
					_this->x;
				}
			}
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				_this->y = (int)0;
				HX_STACK_LINE(154)
				bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(154)
				if ((tmp2)){
					HX_STACK_LINE(154)
					_this->y;
				}
				else{
					HX_STACK_LINE(154)
					bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(154)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(154)
					if ((tmp3)){
						HX_STACK_LINE(154)
						bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(154)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(154)
						tmp4 = !(tmp6);
					}
					else{
						HX_STACK_LINE(154)
						tmp4 = false;
					}
					HX_STACK_LINE(154)
					if ((tmp4)){
						HX_STACK_LINE(154)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(154)
					_this->y;
				}
			}
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				_this->z = (int)0;
				HX_STACK_LINE(154)
				bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(154)
				if ((tmp2)){
					HX_STACK_LINE(154)
					_this->z;
				}
				else{
					HX_STACK_LINE(154)
					bool tmp3 = (_this->listen_z != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(154)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(154)
					if ((tmp3)){
						HX_STACK_LINE(154)
						bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(154)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(154)
						tmp4 = !(tmp6);
					}
					else{
						HX_STACK_LINE(154)
						tmp4 = false;
					}
					HX_STACK_LINE(154)
					if ((tmp4)){
						HX_STACK_LINE(154)
						_this->listen_z((int)0);
					}
					HX_STACK_LINE(154)
					_this->z;
				}
			}
			HX_STACK_LINE(154)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(154)
			bool tmp2 = (_this->listen_x != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(154)
			if ((tmp2)){
				HX_STACK_LINE(154)
				bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(154)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(154)
				tmp3 = !(tmp5);
			}
			else{
				HX_STACK_LINE(154)
				tmp3 = false;
			}
			HX_STACK_LINE(154)
			if ((tmp3)){
				HX_STACK_LINE(154)
				Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(154)
				_this->listen_x(tmp4);
			}
			HX_STACK_LINE(154)
			bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			if ((tmp4)){
				HX_STACK_LINE(154)
				bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(154)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(154)
				tmp5 = false;
			}
			HX_STACK_LINE(154)
			if ((tmp5)){
				HX_STACK_LINE(154)
				Float tmp6 = _this->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(154)
				_this->listen_y(tmp6);
			}
			HX_STACK_LINE(154)
			bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			if ((tmp6)){
				HX_STACK_LINE(154)
				bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(154)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(154)
				tmp7 = false;
			}
			HX_STACK_LINE(154)
			if ((tmp7)){
				HX_STACK_LINE(154)
				Float tmp8 = _this->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				_this->listen_z(tmp8);
			}
			HX_STACK_LINE(154)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_perspective,(void))

::phoenix::Vector Camera_obj::project( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","project",0x37966a2f,"phoenix.Camera.project","phoenix/Camera.hx",159,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(161)
	this->update_view_matrix();
	HX_STACK_LINE(163)
	::phoenix::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		::phoenix::Matrix tmp1 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		::phoenix::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(163)
		::phoenix::Matrix tmp2 = this->projection_matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		Array< Float > ae = tmp2->elements;		HX_STACK_VAR(ae,"ae");
		HX_STACK_LINE(163)
		::phoenix::Matrix tmp3 = this->view_matrix_inverse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		Array< Float > be = tmp3->elements;		HX_STACK_VAR(be,"be");
		HX_STACK_LINE(163)
		Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(163)
		Float tmp4 = ae->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(163)
		Float a11 = tmp4;		HX_STACK_VAR(a11,"a11");
		HX_STACK_LINE(163)
		Float tmp5 = ae->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		Float a12 = tmp5;		HX_STACK_VAR(a12,"a12");
		HX_STACK_LINE(163)
		Float tmp6 = ae->__get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(163)
		Float a13 = tmp6;		HX_STACK_VAR(a13,"a13");
		HX_STACK_LINE(163)
		Float tmp7 = ae->__get((int)12);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(163)
		Float a14 = tmp7;		HX_STACK_VAR(a14,"a14");
		HX_STACK_LINE(163)
		Float tmp8 = ae->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		Float a21 = tmp8;		HX_STACK_VAR(a21,"a21");
		HX_STACK_LINE(163)
		Float tmp9 = ae->__get((int)5);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(163)
		Float a22 = tmp9;		HX_STACK_VAR(a22,"a22");
		HX_STACK_LINE(163)
		Float tmp10 = ae->__get((int)9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(163)
		Float a23 = tmp10;		HX_STACK_VAR(a23,"a23");
		HX_STACK_LINE(163)
		Float tmp11 = ae->__get((int)13);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(163)
		Float a24 = tmp11;		HX_STACK_VAR(a24,"a24");
		HX_STACK_LINE(163)
		Float tmp12 = ae->__get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(163)
		Float a31 = tmp12;		HX_STACK_VAR(a31,"a31");
		HX_STACK_LINE(163)
		Float tmp13 = ae->__get((int)6);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(163)
		Float a32 = tmp13;		HX_STACK_VAR(a32,"a32");
		HX_STACK_LINE(163)
		Float tmp14 = ae->__get((int)10);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(163)
		Float a33 = tmp14;		HX_STACK_VAR(a33,"a33");
		HX_STACK_LINE(163)
		Float tmp15 = ae->__get((int)14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(163)
		Float a34 = tmp15;		HX_STACK_VAR(a34,"a34");
		HX_STACK_LINE(163)
		Float tmp16 = ae->__get((int)3);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(163)
		Float a41 = tmp16;		HX_STACK_VAR(a41,"a41");
		HX_STACK_LINE(163)
		Float tmp17 = ae->__get((int)7);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(163)
		Float a42 = tmp17;		HX_STACK_VAR(a42,"a42");
		HX_STACK_LINE(163)
		Float tmp18 = ae->__get((int)11);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(163)
		Float a43 = tmp18;		HX_STACK_VAR(a43,"a43");
		HX_STACK_LINE(163)
		Float tmp19 = ae->__get((int)15);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(163)
		Float a44 = tmp19;		HX_STACK_VAR(a44,"a44");
		HX_STACK_LINE(163)
		Float tmp20 = be->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(163)
		Float b11 = tmp20;		HX_STACK_VAR(b11,"b11");
		HX_STACK_LINE(163)
		Float tmp21 = be->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(163)
		Float b12 = tmp21;		HX_STACK_VAR(b12,"b12");
		HX_STACK_LINE(163)
		Float tmp22 = be->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(163)
		Float b13 = tmp22;		HX_STACK_VAR(b13,"b13");
		HX_STACK_LINE(163)
		Float tmp23 = be->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(163)
		Float b14 = tmp23;		HX_STACK_VAR(b14,"b14");
		HX_STACK_LINE(163)
		Float tmp24 = be->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(163)
		Float b21 = tmp24;		HX_STACK_VAR(b21,"b21");
		HX_STACK_LINE(163)
		Float tmp25 = be->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(163)
		Float b22 = tmp25;		HX_STACK_VAR(b22,"b22");
		HX_STACK_LINE(163)
		Float tmp26 = be->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(163)
		Float b23 = tmp26;		HX_STACK_VAR(b23,"b23");
		HX_STACK_LINE(163)
		Float tmp27 = be->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(163)
		Float b24 = tmp27;		HX_STACK_VAR(b24,"b24");
		HX_STACK_LINE(163)
		Float tmp28 = be->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(163)
		Float b31 = tmp28;		HX_STACK_VAR(b31,"b31");
		HX_STACK_LINE(163)
		Float tmp29 = be->__get((int)6);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(163)
		Float b32 = tmp29;		HX_STACK_VAR(b32,"b32");
		HX_STACK_LINE(163)
		Float tmp30 = be->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(163)
		Float b33 = tmp30;		HX_STACK_VAR(b33,"b33");
		HX_STACK_LINE(163)
		Float tmp31 = be->__get((int)14);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(163)
		Float b34 = tmp31;		HX_STACK_VAR(b34,"b34");
		HX_STACK_LINE(163)
		Float tmp32 = be->__get((int)3);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(163)
		Float b41 = tmp32;		HX_STACK_VAR(b41,"b41");
		HX_STACK_LINE(163)
		Float tmp33 = be->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(163)
		Float b42 = tmp33;		HX_STACK_VAR(b42,"b42");
		HX_STACK_LINE(163)
		Float tmp34 = be->__get((int)11);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(163)
		Float b43 = tmp34;		HX_STACK_VAR(b43,"b43");
		HX_STACK_LINE(163)
		Float tmp35 = be->__get((int)15);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(163)
		Float b44 = tmp35;		HX_STACK_VAR(b44,"b44");
		HX_STACK_LINE(163)
		Float tmp36 = (a11 * b11);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(163)
		Float tmp37 = (a12 * b21);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(163)
		Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(163)
		Float tmp39 = (a13 * b31);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(163)
		Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(163)
		Float tmp41 = (a14 * b41);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(163)
		Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(163)
		te[(int)0] = tmp42;
		HX_STACK_LINE(163)
		Float tmp43 = (a11 * b12);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(163)
		Float tmp44 = (a12 * b22);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(163)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(163)
		Float tmp46 = (a13 * b32);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(163)
		Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(163)
		Float tmp48 = (a14 * b42);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(163)
		Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(163)
		te[(int)4] = tmp49;
		HX_STACK_LINE(163)
		Float tmp50 = (a11 * b13);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(163)
		Float tmp51 = (a12 * b23);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(163)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(163)
		Float tmp53 = (a13 * b33);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(163)
		Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(163)
		Float tmp55 = (a14 * b43);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(163)
		Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(163)
		te[(int)8] = tmp56;
		HX_STACK_LINE(163)
		Float tmp57 = (a11 * b14);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(163)
		Float tmp58 = (a12 * b24);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(163)
		Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(163)
		Float tmp60 = (a13 * b34);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(163)
		Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(163)
		Float tmp62 = (a14 * b44);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(163)
		Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(163)
		te[(int)12] = tmp63;
		HX_STACK_LINE(163)
		Float tmp64 = (a21 * b11);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(163)
		Float tmp65 = (a22 * b21);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(163)
		Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(163)
		Float tmp67 = (a23 * b31);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(163)
		Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(163)
		Float tmp69 = (a24 * b41);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(163)
		Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(163)
		te[(int)1] = tmp70;
		HX_STACK_LINE(163)
		Float tmp71 = (a21 * b12);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(163)
		Float tmp72 = (a22 * b22);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(163)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(163)
		Float tmp74 = (a23 * b32);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(163)
		Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(163)
		Float tmp76 = (a24 * b42);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(163)
		Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(163)
		te[(int)5] = tmp77;
		HX_STACK_LINE(163)
		Float tmp78 = (a21 * b13);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(163)
		Float tmp79 = (a22 * b23);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(163)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(163)
		Float tmp81 = (a23 * b33);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(163)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(163)
		Float tmp83 = (a24 * b43);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(163)
		Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(163)
		te[(int)9] = tmp84;
		HX_STACK_LINE(163)
		Float tmp85 = (a21 * b14);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(163)
		Float tmp86 = (a22 * b24);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(163)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(163)
		Float tmp88 = (a23 * b34);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(163)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(163)
		Float tmp90 = (a24 * b44);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(163)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(163)
		te[(int)13] = tmp91;
		HX_STACK_LINE(163)
		Float tmp92 = (a31 * b11);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(163)
		Float tmp93 = (a32 * b21);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(163)
		Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(163)
		Float tmp95 = (a33 * b31);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(163)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(163)
		Float tmp97 = (a34 * b41);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(163)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(163)
		te[(int)2] = tmp98;
		HX_STACK_LINE(163)
		Float tmp99 = (a31 * b12);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(163)
		Float tmp100 = (a32 * b22);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(163)
		Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(163)
		Float tmp102 = (a33 * b32);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(163)
		Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(163)
		Float tmp104 = (a34 * b42);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(163)
		Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(163)
		te[(int)6] = tmp105;
		HX_STACK_LINE(163)
		Float tmp106 = (a31 * b13);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(163)
		Float tmp107 = (a32 * b23);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(163)
		Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(163)
		Float tmp109 = (a33 * b33);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(163)
		Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(163)
		Float tmp111 = (a34 * b43);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(163)
		Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(163)
		te[(int)10] = tmp112;
		HX_STACK_LINE(163)
		Float tmp113 = (a31 * b14);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(163)
		Float tmp114 = (a32 * b24);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(163)
		Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(163)
		Float tmp116 = (a33 * b34);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(163)
		Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(163)
		Float tmp118 = (a34 * b44);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(163)
		Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(163)
		te[(int)14] = tmp119;
		HX_STACK_LINE(163)
		Float tmp120 = (a41 * b11);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(163)
		Float tmp121 = (a42 * b21);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(163)
		Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(163)
		Float tmp123 = (a43 * b31);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(163)
		Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(163)
		Float tmp125 = (a44 * b41);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(163)
		Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(163)
		te[(int)3] = tmp126;
		HX_STACK_LINE(163)
		Float tmp127 = (a41 * b12);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(163)
		Float tmp128 = (a42 * b22);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(163)
		Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(163)
		Float tmp130 = (a43 * b32);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(163)
		Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(163)
		Float tmp132 = (a44 * b42);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(163)
		Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(163)
		te[(int)7] = tmp133;
		HX_STACK_LINE(163)
		Float tmp134 = (a41 * b13);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(163)
		Float tmp135 = (a42 * b23);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(163)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(163)
		Float tmp137 = (a43 * b33);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(163)
		Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(163)
		Float tmp139 = (a44 * b43);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(163)
		Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(163)
		te[(int)11] = tmp140;
		HX_STACK_LINE(163)
		Float tmp141 = (a41 * b14);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(163)
		Float tmp142 = (a42 * b24);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(163)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(163)
		Float tmp144 = (a43 * b34);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(163)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(163)
		Float tmp146 = (a44 * b44);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(163)
		Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(163)
		te[(int)15] = tmp147;
		HX_STACK_LINE(163)
		tmp = _this;
	}
	HX_STACK_LINE(163)
	::phoenix::Matrix _transform = tmp;		HX_STACK_VAR(_transform,"_transform");
	HX_STACK_LINE(164)
	::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(_vector->x,_vector->y,_vector->z,_vector->w);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(164)
		Array< Float > e = _transform->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(164)
		Float x = _this->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(164)
		Float y = _this->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(164)
		Float z = _this->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(164)
		Float tmp3 = e->__get((int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		Float tmp6 = e->__get((int)7);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		Float tmp10 = e->__get((int)11);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(164)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(164)
		Float tmp14 = e->__get((int)15);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(164)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(164)
		Float tmp16 = (Float((int)1) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(164)
		Float d = tmp16;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			Float tmp17 = e->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(164)
			Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(164)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(164)
			Float tmp20 = e->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(164)
			Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(164)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(164)
			Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(164)
			Float tmp24 = e->__get((int)8);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(164)
			Float tmp25 = z;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(164)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(164)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(164)
			Float tmp28 = e->__get((int)12);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(164)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(164)
			Float tmp30 = d;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(164)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(164)
			Float _x = tmp31;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(164)
			Float tmp32 = e->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(164)
			Float tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(164)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(164)
			Float tmp35 = e->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(164)
			Float tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(164)
			Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(164)
			Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(164)
			Float tmp39 = e->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(164)
			Float tmp40 = z;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(164)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(164)
			Float tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(164)
			Float tmp43 = e->__get((int)13);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(164)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(164)
			Float tmp45 = d;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(164)
			Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(164)
			Float _y = tmp46;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(164)
			Float tmp47 = e->__get((int)2);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(164)
			Float tmp48 = x;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(164)
			Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(164)
			Float tmp50 = e->__get((int)6);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(164)
			Float tmp51 = y;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(164)
			Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(164)
			Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(164)
			Float tmp54 = e->__get((int)10);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(164)
			Float tmp55 = z;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(164)
			Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(164)
			Float tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(164)
			Float tmp58 = e->__get((int)14);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(164)
			Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(164)
			Float tmp60 = d;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(164)
			Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(164)
			Float _z = tmp61;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(164)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(164)
			_this->ignore_listeners = true;
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				_this->x = _x;
				HX_STACK_LINE(164)
				bool tmp62 = _this->_construct;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(164)
				if ((tmp62)){
					HX_STACK_LINE(164)
					_this->x;
				}
				else{
					HX_STACK_LINE(164)
					bool tmp63 = (_this->listen_x != null());		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(164)
					bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(164)
					if ((tmp63)){
						HX_STACK_LINE(164)
						bool tmp65 = _this->ignore_listeners;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(164)
						bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(164)
						tmp64 = !(tmp66);
					}
					else{
						HX_STACK_LINE(164)
						tmp64 = false;
					}
					HX_STACK_LINE(164)
					if ((tmp64)){
						HX_STACK_LINE(164)
						Float tmp65 = _x;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(164)
						_this->listen_x(tmp65);
					}
					HX_STACK_LINE(164)
					_this->x;
				}
			}
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				_this->y = _y;
				HX_STACK_LINE(164)
				bool tmp62 = _this->_construct;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(164)
				if ((tmp62)){
					HX_STACK_LINE(164)
					_this->y;
				}
				else{
					HX_STACK_LINE(164)
					bool tmp63 = (_this->listen_y != null());		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(164)
					bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(164)
					if ((tmp63)){
						HX_STACK_LINE(164)
						bool tmp65 = _this->ignore_listeners;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(164)
						bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(164)
						tmp64 = !(tmp66);
					}
					else{
						HX_STACK_LINE(164)
						tmp64 = false;
					}
					HX_STACK_LINE(164)
					if ((tmp64)){
						HX_STACK_LINE(164)
						Float tmp65 = _y;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(164)
						_this->listen_y(tmp65);
					}
					HX_STACK_LINE(164)
					_this->y;
				}
			}
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				_this->z = _z;
				HX_STACK_LINE(164)
				bool tmp62 = _this->_construct;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(164)
				if ((tmp62)){
					HX_STACK_LINE(164)
					_this->z;
				}
				else{
					HX_STACK_LINE(164)
					bool tmp63 = (_this->listen_z != null());		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(164)
					bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(164)
					if ((tmp63)){
						HX_STACK_LINE(164)
						bool tmp65 = _this->ignore_listeners;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(164)
						bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(164)
						tmp64 = !(tmp66);
					}
					else{
						HX_STACK_LINE(164)
						tmp64 = false;
					}
					HX_STACK_LINE(164)
					if ((tmp64)){
						HX_STACK_LINE(164)
						Float tmp65 = _z;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(164)
						_this->listen_z(tmp65);
					}
					HX_STACK_LINE(164)
					_this->z;
				}
			}
			HX_STACK_LINE(164)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(164)
			bool tmp62 = (_this->listen_x != null());		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(164)
			bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(164)
			if ((tmp62)){
				HX_STACK_LINE(164)
				bool tmp64 = _this->ignore_listeners;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(164)
				bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(164)
				tmp63 = !(tmp65);
			}
			else{
				HX_STACK_LINE(164)
				tmp63 = false;
			}
			HX_STACK_LINE(164)
			if ((tmp63)){
				HX_STACK_LINE(164)
				Float tmp64 = _this->x;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(164)
				_this->listen_x(tmp64);
			}
			HX_STACK_LINE(164)
			bool tmp64 = (_this->listen_y != null());		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(164)
			bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(164)
			if ((tmp64)){
				HX_STACK_LINE(164)
				bool tmp66 = _this->ignore_listeners;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(164)
				bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(164)
				tmp65 = !(tmp67);
			}
			else{
				HX_STACK_LINE(164)
				tmp65 = false;
			}
			HX_STACK_LINE(164)
			if ((tmp65)){
				HX_STACK_LINE(164)
				Float tmp66 = _this->y;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(164)
				_this->listen_y(tmp66);
			}
			HX_STACK_LINE(164)
			bool tmp66 = (_this->listen_z != null());		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(164)
			bool tmp67;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(164)
			if ((tmp66)){
				HX_STACK_LINE(164)
				bool tmp68 = _this->ignore_listeners;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(164)
				bool tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(164)
				tmp67 = !(tmp69);
			}
			else{
				HX_STACK_LINE(164)
				tmp67 = false;
			}
			HX_STACK_LINE(164)
			if ((tmp67)){
				HX_STACK_LINE(164)
				Float tmp68 = _this->z;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(164)
				_this->listen_z(tmp68);
			}
			HX_STACK_LINE(164)
			_this;
		}
		HX_STACK_LINE(164)
		tmp1 = _this;
	}
	HX_STACK_LINE(164)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,project,return )

::phoenix::Vector Camera_obj::unproject( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","unproject",0x769d7276,"phoenix.Camera.unproject","phoenix/Camera.hx",169,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(171)
	this->update_view_matrix();
	HX_STACK_LINE(173)
	::phoenix::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		::phoenix::Matrix tmp1 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		::phoenix::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(173)
		::phoenix::Matrix tmp2 = this->projection_matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		Array< Float > ae = tmp2->elements;		HX_STACK_VAR(ae,"ae");
		HX_STACK_LINE(173)
		::phoenix::Matrix tmp3 = this->view_matrix_inverse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		Array< Float > be = tmp3->elements;		HX_STACK_VAR(be,"be");
		HX_STACK_LINE(173)
		Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(173)
		Float tmp4 = ae->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		Float a11 = tmp4;		HX_STACK_VAR(a11,"a11");
		HX_STACK_LINE(173)
		Float tmp5 = ae->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		Float a12 = tmp5;		HX_STACK_VAR(a12,"a12");
		HX_STACK_LINE(173)
		Float tmp6 = ae->__get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		Float a13 = tmp6;		HX_STACK_VAR(a13,"a13");
		HX_STACK_LINE(173)
		Float tmp7 = ae->__get((int)12);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		Float a14 = tmp7;		HX_STACK_VAR(a14,"a14");
		HX_STACK_LINE(173)
		Float tmp8 = ae->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(173)
		Float a21 = tmp8;		HX_STACK_VAR(a21,"a21");
		HX_STACK_LINE(173)
		Float tmp9 = ae->__get((int)5);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(173)
		Float a22 = tmp9;		HX_STACK_VAR(a22,"a22");
		HX_STACK_LINE(173)
		Float tmp10 = ae->__get((int)9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(173)
		Float a23 = tmp10;		HX_STACK_VAR(a23,"a23");
		HX_STACK_LINE(173)
		Float tmp11 = ae->__get((int)13);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(173)
		Float a24 = tmp11;		HX_STACK_VAR(a24,"a24");
		HX_STACK_LINE(173)
		Float tmp12 = ae->__get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(173)
		Float a31 = tmp12;		HX_STACK_VAR(a31,"a31");
		HX_STACK_LINE(173)
		Float tmp13 = ae->__get((int)6);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(173)
		Float a32 = tmp13;		HX_STACK_VAR(a32,"a32");
		HX_STACK_LINE(173)
		Float tmp14 = ae->__get((int)10);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(173)
		Float a33 = tmp14;		HX_STACK_VAR(a33,"a33");
		HX_STACK_LINE(173)
		Float tmp15 = ae->__get((int)14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(173)
		Float a34 = tmp15;		HX_STACK_VAR(a34,"a34");
		HX_STACK_LINE(173)
		Float tmp16 = ae->__get((int)3);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(173)
		Float a41 = tmp16;		HX_STACK_VAR(a41,"a41");
		HX_STACK_LINE(173)
		Float tmp17 = ae->__get((int)7);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(173)
		Float a42 = tmp17;		HX_STACK_VAR(a42,"a42");
		HX_STACK_LINE(173)
		Float tmp18 = ae->__get((int)11);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(173)
		Float a43 = tmp18;		HX_STACK_VAR(a43,"a43");
		HX_STACK_LINE(173)
		Float tmp19 = ae->__get((int)15);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(173)
		Float a44 = tmp19;		HX_STACK_VAR(a44,"a44");
		HX_STACK_LINE(173)
		Float tmp20 = be->__get((int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(173)
		Float b11 = tmp20;		HX_STACK_VAR(b11,"b11");
		HX_STACK_LINE(173)
		Float tmp21 = be->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(173)
		Float b12 = tmp21;		HX_STACK_VAR(b12,"b12");
		HX_STACK_LINE(173)
		Float tmp22 = be->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(173)
		Float b13 = tmp22;		HX_STACK_VAR(b13,"b13");
		HX_STACK_LINE(173)
		Float tmp23 = be->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(173)
		Float b14 = tmp23;		HX_STACK_VAR(b14,"b14");
		HX_STACK_LINE(173)
		Float tmp24 = be->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(173)
		Float b21 = tmp24;		HX_STACK_VAR(b21,"b21");
		HX_STACK_LINE(173)
		Float tmp25 = be->__get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(173)
		Float b22 = tmp25;		HX_STACK_VAR(b22,"b22");
		HX_STACK_LINE(173)
		Float tmp26 = be->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(173)
		Float b23 = tmp26;		HX_STACK_VAR(b23,"b23");
		HX_STACK_LINE(173)
		Float tmp27 = be->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(173)
		Float b24 = tmp27;		HX_STACK_VAR(b24,"b24");
		HX_STACK_LINE(173)
		Float tmp28 = be->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(173)
		Float b31 = tmp28;		HX_STACK_VAR(b31,"b31");
		HX_STACK_LINE(173)
		Float tmp29 = be->__get((int)6);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(173)
		Float b32 = tmp29;		HX_STACK_VAR(b32,"b32");
		HX_STACK_LINE(173)
		Float tmp30 = be->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(173)
		Float b33 = tmp30;		HX_STACK_VAR(b33,"b33");
		HX_STACK_LINE(173)
		Float tmp31 = be->__get((int)14);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(173)
		Float b34 = tmp31;		HX_STACK_VAR(b34,"b34");
		HX_STACK_LINE(173)
		Float tmp32 = be->__get((int)3);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(173)
		Float b41 = tmp32;		HX_STACK_VAR(b41,"b41");
		HX_STACK_LINE(173)
		Float tmp33 = be->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(173)
		Float b42 = tmp33;		HX_STACK_VAR(b42,"b42");
		HX_STACK_LINE(173)
		Float tmp34 = be->__get((int)11);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(173)
		Float b43 = tmp34;		HX_STACK_VAR(b43,"b43");
		HX_STACK_LINE(173)
		Float tmp35 = be->__get((int)15);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(173)
		Float b44 = tmp35;		HX_STACK_VAR(b44,"b44");
		HX_STACK_LINE(173)
		Float tmp36 = (a11 * b11);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(173)
		Float tmp37 = (a12 * b21);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(173)
		Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(173)
		Float tmp39 = (a13 * b31);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(173)
		Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(173)
		Float tmp41 = (a14 * b41);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(173)
		Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(173)
		te[(int)0] = tmp42;
		HX_STACK_LINE(173)
		Float tmp43 = (a11 * b12);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(173)
		Float tmp44 = (a12 * b22);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(173)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(173)
		Float tmp46 = (a13 * b32);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(173)
		Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(173)
		Float tmp48 = (a14 * b42);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(173)
		Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(173)
		te[(int)4] = tmp49;
		HX_STACK_LINE(173)
		Float tmp50 = (a11 * b13);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(173)
		Float tmp51 = (a12 * b23);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(173)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(173)
		Float tmp53 = (a13 * b33);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(173)
		Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(173)
		Float tmp55 = (a14 * b43);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(173)
		Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(173)
		te[(int)8] = tmp56;
		HX_STACK_LINE(173)
		Float tmp57 = (a11 * b14);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(173)
		Float tmp58 = (a12 * b24);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(173)
		Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(173)
		Float tmp60 = (a13 * b34);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(173)
		Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(173)
		Float tmp62 = (a14 * b44);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(173)
		Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(173)
		te[(int)12] = tmp63;
		HX_STACK_LINE(173)
		Float tmp64 = (a21 * b11);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(173)
		Float tmp65 = (a22 * b21);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(173)
		Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(173)
		Float tmp67 = (a23 * b31);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(173)
		Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(173)
		Float tmp69 = (a24 * b41);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(173)
		Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(173)
		te[(int)1] = tmp70;
		HX_STACK_LINE(173)
		Float tmp71 = (a21 * b12);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(173)
		Float tmp72 = (a22 * b22);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(173)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(173)
		Float tmp74 = (a23 * b32);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(173)
		Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(173)
		Float tmp76 = (a24 * b42);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(173)
		Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(173)
		te[(int)5] = tmp77;
		HX_STACK_LINE(173)
		Float tmp78 = (a21 * b13);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(173)
		Float tmp79 = (a22 * b23);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(173)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(173)
		Float tmp81 = (a23 * b33);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(173)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(173)
		Float tmp83 = (a24 * b43);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(173)
		Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(173)
		te[(int)9] = tmp84;
		HX_STACK_LINE(173)
		Float tmp85 = (a21 * b14);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(173)
		Float tmp86 = (a22 * b24);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(173)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(173)
		Float tmp88 = (a23 * b34);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(173)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(173)
		Float tmp90 = (a24 * b44);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(173)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(173)
		te[(int)13] = tmp91;
		HX_STACK_LINE(173)
		Float tmp92 = (a31 * b11);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(173)
		Float tmp93 = (a32 * b21);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(173)
		Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(173)
		Float tmp95 = (a33 * b31);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(173)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(173)
		Float tmp97 = (a34 * b41);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(173)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(173)
		te[(int)2] = tmp98;
		HX_STACK_LINE(173)
		Float tmp99 = (a31 * b12);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(173)
		Float tmp100 = (a32 * b22);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(173)
		Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(173)
		Float tmp102 = (a33 * b32);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(173)
		Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(173)
		Float tmp104 = (a34 * b42);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(173)
		Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(173)
		te[(int)6] = tmp105;
		HX_STACK_LINE(173)
		Float tmp106 = (a31 * b13);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(173)
		Float tmp107 = (a32 * b23);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(173)
		Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(173)
		Float tmp109 = (a33 * b33);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(173)
		Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(173)
		Float tmp111 = (a34 * b43);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(173)
		Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(173)
		te[(int)10] = tmp112;
		HX_STACK_LINE(173)
		Float tmp113 = (a31 * b14);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(173)
		Float tmp114 = (a32 * b24);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(173)
		Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(173)
		Float tmp116 = (a33 * b34);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(173)
		Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(173)
		Float tmp118 = (a34 * b44);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(173)
		Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(173)
		te[(int)14] = tmp119;
		HX_STACK_LINE(173)
		Float tmp120 = (a41 * b11);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(173)
		Float tmp121 = (a42 * b21);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(173)
		Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(173)
		Float tmp123 = (a43 * b31);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(173)
		Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(173)
		Float tmp125 = (a44 * b41);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(173)
		Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(173)
		te[(int)3] = tmp126;
		HX_STACK_LINE(173)
		Float tmp127 = (a41 * b12);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(173)
		Float tmp128 = (a42 * b22);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(173)
		Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(173)
		Float tmp130 = (a43 * b32);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(173)
		Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(173)
		Float tmp132 = (a44 * b42);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(173)
		Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(173)
		te[(int)7] = tmp133;
		HX_STACK_LINE(173)
		Float tmp134 = (a41 * b13);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(173)
		Float tmp135 = (a42 * b23);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(173)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(173)
		Float tmp137 = (a43 * b33);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(173)
		Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(173)
		Float tmp139 = (a44 * b43);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(173)
		Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(173)
		te[(int)11] = tmp140;
		HX_STACK_LINE(173)
		Float tmp141 = (a41 * b14);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(173)
		Float tmp142 = (a42 * b24);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(173)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(173)
		Float tmp144 = (a43 * b34);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(173)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(173)
		Float tmp146 = (a44 * b44);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(173)
		Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(173)
		te[(int)15] = tmp147;
		HX_STACK_LINE(173)
		tmp = _this;
	}
	HX_STACK_LINE(173)
	::phoenix::Matrix _inverted = tmp;		HX_STACK_VAR(_inverted,"_inverted");
	HX_STACK_LINE(174)
	::phoenix::Vector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(_vector->x,_vector->y,_vector->z,_vector->w);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(174)
		::phoenix::Matrix tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			Array< Float > te = _inverted->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(174)
			Array< Float > me = _inverted->elements;		HX_STACK_VAR(me,"me");
			HX_STACK_LINE(174)
			Float tmp4 = me->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			Float n11 = tmp4;		HX_STACK_VAR(n11,"n11");
			HX_STACK_LINE(174)
			Float tmp5 = me->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(174)
			Float n12 = tmp5;		HX_STACK_VAR(n12,"n12");
			HX_STACK_LINE(174)
			Float tmp6 = me->__get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(174)
			Float n13 = tmp6;		HX_STACK_VAR(n13,"n13");
			HX_STACK_LINE(174)
			Float tmp7 = me->__get((int)12);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(174)
			Float n14 = tmp7;		HX_STACK_VAR(n14,"n14");
			HX_STACK_LINE(174)
			Float tmp8 = me->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(174)
			Float n21 = tmp8;		HX_STACK_VAR(n21,"n21");
			HX_STACK_LINE(174)
			Float tmp9 = me->__get((int)5);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(174)
			Float n22 = tmp9;		HX_STACK_VAR(n22,"n22");
			HX_STACK_LINE(174)
			Float tmp10 = me->__get((int)9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			Float n23 = tmp10;		HX_STACK_VAR(n23,"n23");
			HX_STACK_LINE(174)
			Float tmp11 = me->__get((int)13);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			Float n24 = tmp11;		HX_STACK_VAR(n24,"n24");
			HX_STACK_LINE(174)
			Float tmp12 = me->__get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(174)
			Float n31 = tmp12;		HX_STACK_VAR(n31,"n31");
			HX_STACK_LINE(174)
			Float tmp13 = me->__get((int)6);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(174)
			Float n32 = tmp13;		HX_STACK_VAR(n32,"n32");
			HX_STACK_LINE(174)
			Float tmp14 = me->__get((int)10);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(174)
			Float n33 = tmp14;		HX_STACK_VAR(n33,"n33");
			HX_STACK_LINE(174)
			Float tmp15 = me->__get((int)14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(174)
			Float n34 = tmp15;		HX_STACK_VAR(n34,"n34");
			HX_STACK_LINE(174)
			Float tmp16 = me->__get((int)3);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(174)
			Float n41 = tmp16;		HX_STACK_VAR(n41,"n41");
			HX_STACK_LINE(174)
			Float tmp17 = me->__get((int)7);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(174)
			Float n42 = tmp17;		HX_STACK_VAR(n42,"n42");
			HX_STACK_LINE(174)
			Float tmp18 = me->__get((int)11);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(174)
			Float n43 = tmp18;		HX_STACK_VAR(n43,"n43");
			HX_STACK_LINE(174)
			Float tmp19 = me->__get((int)15);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(174)
			Float n44 = tmp19;		HX_STACK_VAR(n44,"n44");
			HX_STACK_LINE(174)
			Float tmp20 = (n23 * n34);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(174)
			Float tmp21 = n42;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(174)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(174)
			Float tmp23 = (n24 * n33);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(174)
			Float tmp24 = n42;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(174)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(174)
			Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(174)
			Float tmp27 = (n24 * n32);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(174)
			Float tmp28 = n43;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(174)
			Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(174)
			Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(174)
			Float tmp31 = (n22 * n34);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(174)
			Float tmp32 = n43;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(174)
			Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(174)
			Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(174)
			Float tmp35 = (n23 * n32);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(174)
			Float tmp36 = n44;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(174)
			Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(174)
			Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(174)
			Float tmp39 = (n22 * n33);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(174)
			Float tmp40 = n44;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(174)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(174)
			Float tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(174)
			te[(int)0] = tmp42;
			HX_STACK_LINE(174)
			Float tmp43 = (n14 * n33);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(174)
			Float tmp44 = n42;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(174)
			Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(174)
			Float tmp46 = (n13 * n34);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(174)
			Float tmp47 = n42;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(174)
			Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(174)
			Float tmp49 = (tmp45 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(174)
			Float tmp50 = (n14 * n32);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(174)
			Float tmp51 = n43;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(174)
			Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(174)
			Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(174)
			Float tmp54 = (n12 * n34);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(174)
			Float tmp55 = n43;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(174)
			Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(174)
			Float tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(174)
			Float tmp58 = (n13 * n32);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(174)
			Float tmp59 = n44;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(174)
			Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(174)
			Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(174)
			Float tmp62 = (n12 * n33);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(174)
			Float tmp63 = n44;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(174)
			Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(174)
			Float tmp65 = (tmp61 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(174)
			te[(int)4] = tmp65;
			HX_STACK_LINE(174)
			Float tmp66 = (n13 * n24);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(174)
			Float tmp67 = n42;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(174)
			Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(174)
			Float tmp69 = (n14 * n23);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(174)
			Float tmp70 = n42;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(174)
			Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(174)
			Float tmp72 = (tmp68 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(174)
			Float tmp73 = (n14 * n22);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(174)
			Float tmp74 = n43;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(174)
			Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(174)
			Float tmp76 = (tmp72 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(174)
			Float tmp77 = (n12 * n24);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(174)
			Float tmp78 = n43;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(174)
			Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(174)
			Float tmp80 = (tmp76 - tmp79);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(174)
			Float tmp81 = (n13 * n22);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(174)
			Float tmp82 = n44;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(174)
			Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(174)
			Float tmp84 = (tmp80 - tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(174)
			Float tmp85 = (n12 * n23);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(174)
			Float tmp86 = n44;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(174)
			Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(174)
			Float tmp88 = (tmp84 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(174)
			te[(int)8] = tmp88;
			HX_STACK_LINE(174)
			Float tmp89 = (n14 * n23);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(174)
			Float tmp90 = n32;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(174)
			Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(174)
			Float tmp92 = (n13 * n24);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(174)
			Float tmp93 = n32;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(174)
			Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(174)
			Float tmp95 = (tmp91 - tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(174)
			Float tmp96 = (n14 * n22);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(174)
			Float tmp97 = n33;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(174)
			Float tmp98 = (tmp96 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(174)
			Float tmp99 = (tmp95 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(174)
			Float tmp100 = (n12 * n24);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(174)
			Float tmp101 = n33;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(174)
			Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(174)
			Float tmp103 = (tmp99 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(174)
			Float tmp104 = (n13 * n22);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(174)
			Float tmp105 = n34;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(174)
			Float tmp106 = (tmp104 * tmp105);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(174)
			Float tmp107 = (tmp103 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(174)
			Float tmp108 = (n12 * n23);		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(174)
			Float tmp109 = n34;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(174)
			Float tmp110 = (tmp108 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(174)
			Float tmp111 = (tmp107 - tmp110);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(174)
			te[(int)12] = tmp111;
			HX_STACK_LINE(174)
			Float tmp112 = (n24 * n33);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(174)
			Float tmp113 = n41;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(174)
			Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(174)
			Float tmp115 = (n23 * n34);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(174)
			Float tmp116 = n41;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(174)
			Float tmp117 = (tmp115 * tmp116);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(174)
			Float tmp118 = (tmp114 - tmp117);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(174)
			Float tmp119 = (n24 * n31);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(174)
			Float tmp120 = n43;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(174)
			Float tmp121 = (tmp119 * tmp120);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(174)
			Float tmp122 = (tmp118 - tmp121);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(174)
			Float tmp123 = (n21 * n34);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(174)
			Float tmp124 = n43;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(174)
			Float tmp125 = (tmp123 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(174)
			Float tmp126 = (tmp122 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(174)
			Float tmp127 = (n23 * n31);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(174)
			Float tmp128 = n44;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(174)
			Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(174)
			Float tmp130 = (tmp126 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(174)
			Float tmp131 = (n21 * n33);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(174)
			Float tmp132 = n44;		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(174)
			Float tmp133 = (tmp131 * tmp132);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(174)
			Float tmp134 = (tmp130 - tmp133);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(174)
			te[(int)1] = tmp134;
			HX_STACK_LINE(174)
			Float tmp135 = (n13 * n34);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(174)
			Float tmp136 = n41;		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(174)
			Float tmp137 = (tmp135 * tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(174)
			Float tmp138 = (n14 * n33);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(174)
			Float tmp139 = n41;		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(174)
			Float tmp140 = (tmp138 * tmp139);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(174)
			Float tmp141 = (tmp137 - tmp140);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(174)
			Float tmp142 = (n14 * n31);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(174)
			Float tmp143 = n43;		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(174)
			Float tmp144 = (tmp142 * tmp143);		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(174)
			Float tmp145 = (tmp141 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
			HX_STACK_LINE(174)
			Float tmp146 = (n11 * n34);		HX_STACK_VAR(tmp146,"tmp146");
			HX_STACK_LINE(174)
			Float tmp147 = n43;		HX_STACK_VAR(tmp147,"tmp147");
			HX_STACK_LINE(174)
			Float tmp148 = (tmp146 * tmp147);		HX_STACK_VAR(tmp148,"tmp148");
			HX_STACK_LINE(174)
			Float tmp149 = (tmp145 - tmp148);		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(174)
			Float tmp150 = (n13 * n31);		HX_STACK_VAR(tmp150,"tmp150");
			HX_STACK_LINE(174)
			Float tmp151 = n44;		HX_STACK_VAR(tmp151,"tmp151");
			HX_STACK_LINE(174)
			Float tmp152 = (tmp150 * tmp151);		HX_STACK_VAR(tmp152,"tmp152");
			HX_STACK_LINE(174)
			Float tmp153 = (tmp149 - tmp152);		HX_STACK_VAR(tmp153,"tmp153");
			HX_STACK_LINE(174)
			Float tmp154 = (n11 * n33);		HX_STACK_VAR(tmp154,"tmp154");
			HX_STACK_LINE(174)
			Float tmp155 = n44;		HX_STACK_VAR(tmp155,"tmp155");
			HX_STACK_LINE(174)
			Float tmp156 = (tmp154 * tmp155);		HX_STACK_VAR(tmp156,"tmp156");
			HX_STACK_LINE(174)
			Float tmp157 = (tmp153 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
			HX_STACK_LINE(174)
			te[(int)5] = tmp157;
			HX_STACK_LINE(174)
			Float tmp158 = (n14 * n23);		HX_STACK_VAR(tmp158,"tmp158");
			HX_STACK_LINE(174)
			Float tmp159 = n41;		HX_STACK_VAR(tmp159,"tmp159");
			HX_STACK_LINE(174)
			Float tmp160 = (tmp158 * tmp159);		HX_STACK_VAR(tmp160,"tmp160");
			HX_STACK_LINE(174)
			Float tmp161 = (n13 * n24);		HX_STACK_VAR(tmp161,"tmp161");
			HX_STACK_LINE(174)
			Float tmp162 = n41;		HX_STACK_VAR(tmp162,"tmp162");
			HX_STACK_LINE(174)
			Float tmp163 = (tmp161 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
			HX_STACK_LINE(174)
			Float tmp164 = (tmp160 - tmp163);		HX_STACK_VAR(tmp164,"tmp164");
			HX_STACK_LINE(174)
			Float tmp165 = (n14 * n21);		HX_STACK_VAR(tmp165,"tmp165");
			HX_STACK_LINE(174)
			Float tmp166 = n43;		HX_STACK_VAR(tmp166,"tmp166");
			HX_STACK_LINE(174)
			Float tmp167 = (tmp165 * tmp166);		HX_STACK_VAR(tmp167,"tmp167");
			HX_STACK_LINE(174)
			Float tmp168 = (tmp164 - tmp167);		HX_STACK_VAR(tmp168,"tmp168");
			HX_STACK_LINE(174)
			Float tmp169 = (n11 * n24);		HX_STACK_VAR(tmp169,"tmp169");
			HX_STACK_LINE(174)
			Float tmp170 = n43;		HX_STACK_VAR(tmp170,"tmp170");
			HX_STACK_LINE(174)
			Float tmp171 = (tmp169 * tmp170);		HX_STACK_VAR(tmp171,"tmp171");
			HX_STACK_LINE(174)
			Float tmp172 = (tmp168 + tmp171);		HX_STACK_VAR(tmp172,"tmp172");
			HX_STACK_LINE(174)
			Float tmp173 = (n13 * n21);		HX_STACK_VAR(tmp173,"tmp173");
			HX_STACK_LINE(174)
			Float tmp174 = n44;		HX_STACK_VAR(tmp174,"tmp174");
			HX_STACK_LINE(174)
			Float tmp175 = (tmp173 * tmp174);		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(174)
			Float tmp176 = (tmp172 + tmp175);		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(174)
			Float tmp177 = (n11 * n23);		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(174)
			Float tmp178 = n44;		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(174)
			Float tmp179 = (tmp177 * tmp178);		HX_STACK_VAR(tmp179,"tmp179");
			HX_STACK_LINE(174)
			Float tmp180 = (tmp176 - tmp179);		HX_STACK_VAR(tmp180,"tmp180");
			HX_STACK_LINE(174)
			te[(int)9] = tmp180;
			HX_STACK_LINE(174)
			Float tmp181 = (n13 * n24);		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(174)
			Float tmp182 = n31;		HX_STACK_VAR(tmp182,"tmp182");
			HX_STACK_LINE(174)
			Float tmp183 = (tmp181 * tmp182);		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(174)
			Float tmp184 = (n14 * n23);		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(174)
			Float tmp185 = n31;		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(174)
			Float tmp186 = (tmp184 * tmp185);		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(174)
			Float tmp187 = (tmp183 - tmp186);		HX_STACK_VAR(tmp187,"tmp187");
			HX_STACK_LINE(174)
			Float tmp188 = (n14 * n21);		HX_STACK_VAR(tmp188,"tmp188");
			HX_STACK_LINE(174)
			Float tmp189 = n33;		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(174)
			Float tmp190 = (tmp188 * tmp189);		HX_STACK_VAR(tmp190,"tmp190");
			HX_STACK_LINE(174)
			Float tmp191 = (tmp187 + tmp190);		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(174)
			Float tmp192 = (n11 * n24);		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(174)
			Float tmp193 = n33;		HX_STACK_VAR(tmp193,"tmp193");
			HX_STACK_LINE(174)
			Float tmp194 = (tmp192 * tmp193);		HX_STACK_VAR(tmp194,"tmp194");
			HX_STACK_LINE(174)
			Float tmp195 = (tmp191 - tmp194);		HX_STACK_VAR(tmp195,"tmp195");
			HX_STACK_LINE(174)
			Float tmp196 = (n13 * n21);		HX_STACK_VAR(tmp196,"tmp196");
			HX_STACK_LINE(174)
			Float tmp197 = n34;		HX_STACK_VAR(tmp197,"tmp197");
			HX_STACK_LINE(174)
			Float tmp198 = (tmp196 * tmp197);		HX_STACK_VAR(tmp198,"tmp198");
			HX_STACK_LINE(174)
			Float tmp199 = (tmp195 - tmp198);		HX_STACK_VAR(tmp199,"tmp199");
			HX_STACK_LINE(174)
			Float tmp200 = (n11 * n23);		HX_STACK_VAR(tmp200,"tmp200");
			HX_STACK_LINE(174)
			Float tmp201 = n34;		HX_STACK_VAR(tmp201,"tmp201");
			HX_STACK_LINE(174)
			Float tmp202 = (tmp200 * tmp201);		HX_STACK_VAR(tmp202,"tmp202");
			HX_STACK_LINE(174)
			Float tmp203 = (tmp199 + tmp202);		HX_STACK_VAR(tmp203,"tmp203");
			HX_STACK_LINE(174)
			te[(int)13] = tmp203;
			HX_STACK_LINE(174)
			Float tmp204 = (n22 * n34);		HX_STACK_VAR(tmp204,"tmp204");
			HX_STACK_LINE(174)
			Float tmp205 = n41;		HX_STACK_VAR(tmp205,"tmp205");
			HX_STACK_LINE(174)
			Float tmp206 = (tmp204 * tmp205);		HX_STACK_VAR(tmp206,"tmp206");
			HX_STACK_LINE(174)
			Float tmp207 = (n24 * n32);		HX_STACK_VAR(tmp207,"tmp207");
			HX_STACK_LINE(174)
			Float tmp208 = n41;		HX_STACK_VAR(tmp208,"tmp208");
			HX_STACK_LINE(174)
			Float tmp209 = (tmp207 * tmp208);		HX_STACK_VAR(tmp209,"tmp209");
			HX_STACK_LINE(174)
			Float tmp210 = (tmp206 - tmp209);		HX_STACK_VAR(tmp210,"tmp210");
			HX_STACK_LINE(174)
			Float tmp211 = (n24 * n31);		HX_STACK_VAR(tmp211,"tmp211");
			HX_STACK_LINE(174)
			Float tmp212 = n42;		HX_STACK_VAR(tmp212,"tmp212");
			HX_STACK_LINE(174)
			Float tmp213 = (tmp211 * tmp212);		HX_STACK_VAR(tmp213,"tmp213");
			HX_STACK_LINE(174)
			Float tmp214 = (tmp210 + tmp213);		HX_STACK_VAR(tmp214,"tmp214");
			HX_STACK_LINE(174)
			Float tmp215 = (n21 * n34);		HX_STACK_VAR(tmp215,"tmp215");
			HX_STACK_LINE(174)
			Float tmp216 = n42;		HX_STACK_VAR(tmp216,"tmp216");
			HX_STACK_LINE(174)
			Float tmp217 = (tmp215 * tmp216);		HX_STACK_VAR(tmp217,"tmp217");
			HX_STACK_LINE(174)
			Float tmp218 = (tmp214 - tmp217);		HX_STACK_VAR(tmp218,"tmp218");
			HX_STACK_LINE(174)
			Float tmp219 = (n22 * n31);		HX_STACK_VAR(tmp219,"tmp219");
			HX_STACK_LINE(174)
			Float tmp220 = n44;		HX_STACK_VAR(tmp220,"tmp220");
			HX_STACK_LINE(174)
			Float tmp221 = (tmp219 * tmp220);		HX_STACK_VAR(tmp221,"tmp221");
			HX_STACK_LINE(174)
			Float tmp222 = (tmp218 - tmp221);		HX_STACK_VAR(tmp222,"tmp222");
			HX_STACK_LINE(174)
			Float tmp223 = (n21 * n32);		HX_STACK_VAR(tmp223,"tmp223");
			HX_STACK_LINE(174)
			Float tmp224 = n44;		HX_STACK_VAR(tmp224,"tmp224");
			HX_STACK_LINE(174)
			Float tmp225 = (tmp223 * tmp224);		HX_STACK_VAR(tmp225,"tmp225");
			HX_STACK_LINE(174)
			Float tmp226 = (tmp222 + tmp225);		HX_STACK_VAR(tmp226,"tmp226");
			HX_STACK_LINE(174)
			te[(int)2] = tmp226;
			HX_STACK_LINE(174)
			Float tmp227 = (n14 * n32);		HX_STACK_VAR(tmp227,"tmp227");
			HX_STACK_LINE(174)
			Float tmp228 = n41;		HX_STACK_VAR(tmp228,"tmp228");
			HX_STACK_LINE(174)
			Float tmp229 = (tmp227 * tmp228);		HX_STACK_VAR(tmp229,"tmp229");
			HX_STACK_LINE(174)
			Float tmp230 = (n12 * n34);		HX_STACK_VAR(tmp230,"tmp230");
			HX_STACK_LINE(174)
			Float tmp231 = n41;		HX_STACK_VAR(tmp231,"tmp231");
			HX_STACK_LINE(174)
			Float tmp232 = (tmp230 * tmp231);		HX_STACK_VAR(tmp232,"tmp232");
			HX_STACK_LINE(174)
			Float tmp233 = (tmp229 - tmp232);		HX_STACK_VAR(tmp233,"tmp233");
			HX_STACK_LINE(174)
			Float tmp234 = (n14 * n31);		HX_STACK_VAR(tmp234,"tmp234");
			HX_STACK_LINE(174)
			Float tmp235 = n42;		HX_STACK_VAR(tmp235,"tmp235");
			HX_STACK_LINE(174)
			Float tmp236 = (tmp234 * tmp235);		HX_STACK_VAR(tmp236,"tmp236");
			HX_STACK_LINE(174)
			Float tmp237 = (tmp233 - tmp236);		HX_STACK_VAR(tmp237,"tmp237");
			HX_STACK_LINE(174)
			Float tmp238 = (n11 * n34);		HX_STACK_VAR(tmp238,"tmp238");
			HX_STACK_LINE(174)
			Float tmp239 = n42;		HX_STACK_VAR(tmp239,"tmp239");
			HX_STACK_LINE(174)
			Float tmp240 = (tmp238 * tmp239);		HX_STACK_VAR(tmp240,"tmp240");
			HX_STACK_LINE(174)
			Float tmp241 = (tmp237 + tmp240);		HX_STACK_VAR(tmp241,"tmp241");
			HX_STACK_LINE(174)
			Float tmp242 = (n12 * n31);		HX_STACK_VAR(tmp242,"tmp242");
			HX_STACK_LINE(174)
			Float tmp243 = n44;		HX_STACK_VAR(tmp243,"tmp243");
			HX_STACK_LINE(174)
			Float tmp244 = (tmp242 * tmp243);		HX_STACK_VAR(tmp244,"tmp244");
			HX_STACK_LINE(174)
			Float tmp245 = (tmp241 + tmp244);		HX_STACK_VAR(tmp245,"tmp245");
			HX_STACK_LINE(174)
			Float tmp246 = (n11 * n32);		HX_STACK_VAR(tmp246,"tmp246");
			HX_STACK_LINE(174)
			Float tmp247 = n44;		HX_STACK_VAR(tmp247,"tmp247");
			HX_STACK_LINE(174)
			Float tmp248 = (tmp246 * tmp247);		HX_STACK_VAR(tmp248,"tmp248");
			HX_STACK_LINE(174)
			Float tmp249 = (tmp245 - tmp248);		HX_STACK_VAR(tmp249,"tmp249");
			HX_STACK_LINE(174)
			te[(int)6] = tmp249;
			HX_STACK_LINE(174)
			Float tmp250 = (n12 * n24);		HX_STACK_VAR(tmp250,"tmp250");
			HX_STACK_LINE(174)
			Float tmp251 = n41;		HX_STACK_VAR(tmp251,"tmp251");
			HX_STACK_LINE(174)
			Float tmp252 = (tmp250 * tmp251);		HX_STACK_VAR(tmp252,"tmp252");
			HX_STACK_LINE(174)
			Float tmp253 = (n14 * n22);		HX_STACK_VAR(tmp253,"tmp253");
			HX_STACK_LINE(174)
			Float tmp254 = n41;		HX_STACK_VAR(tmp254,"tmp254");
			HX_STACK_LINE(174)
			Float tmp255 = (tmp253 * tmp254);		HX_STACK_VAR(tmp255,"tmp255");
			HX_STACK_LINE(174)
			Float tmp256 = (tmp252 - tmp255);		HX_STACK_VAR(tmp256,"tmp256");
			HX_STACK_LINE(174)
			Float tmp257 = (n14 * n21);		HX_STACK_VAR(tmp257,"tmp257");
			HX_STACK_LINE(174)
			Float tmp258 = n42;		HX_STACK_VAR(tmp258,"tmp258");
			HX_STACK_LINE(174)
			Float tmp259 = (tmp257 * tmp258);		HX_STACK_VAR(tmp259,"tmp259");
			HX_STACK_LINE(174)
			Float tmp260 = (tmp256 + tmp259);		HX_STACK_VAR(tmp260,"tmp260");
			HX_STACK_LINE(174)
			Float tmp261 = (n11 * n24);		HX_STACK_VAR(tmp261,"tmp261");
			HX_STACK_LINE(174)
			Float tmp262 = n42;		HX_STACK_VAR(tmp262,"tmp262");
			HX_STACK_LINE(174)
			Float tmp263 = (tmp261 * tmp262);		HX_STACK_VAR(tmp263,"tmp263");
			HX_STACK_LINE(174)
			Float tmp264 = (tmp260 - tmp263);		HX_STACK_VAR(tmp264,"tmp264");
			HX_STACK_LINE(174)
			Float tmp265 = (n12 * n21);		HX_STACK_VAR(tmp265,"tmp265");
			HX_STACK_LINE(174)
			Float tmp266 = n44;		HX_STACK_VAR(tmp266,"tmp266");
			HX_STACK_LINE(174)
			Float tmp267 = (tmp265 * tmp266);		HX_STACK_VAR(tmp267,"tmp267");
			HX_STACK_LINE(174)
			Float tmp268 = (tmp264 - tmp267);		HX_STACK_VAR(tmp268,"tmp268");
			HX_STACK_LINE(174)
			Float tmp269 = (n11 * n22);		HX_STACK_VAR(tmp269,"tmp269");
			HX_STACK_LINE(174)
			Float tmp270 = n44;		HX_STACK_VAR(tmp270,"tmp270");
			HX_STACK_LINE(174)
			Float tmp271 = (tmp269 * tmp270);		HX_STACK_VAR(tmp271,"tmp271");
			HX_STACK_LINE(174)
			Float tmp272 = (tmp268 + tmp271);		HX_STACK_VAR(tmp272,"tmp272");
			HX_STACK_LINE(174)
			te[(int)10] = tmp272;
			HX_STACK_LINE(174)
			Float tmp273 = (n14 * n22);		HX_STACK_VAR(tmp273,"tmp273");
			HX_STACK_LINE(174)
			Float tmp274 = n31;		HX_STACK_VAR(tmp274,"tmp274");
			HX_STACK_LINE(174)
			Float tmp275 = (tmp273 * tmp274);		HX_STACK_VAR(tmp275,"tmp275");
			HX_STACK_LINE(174)
			Float tmp276 = (n12 * n24);		HX_STACK_VAR(tmp276,"tmp276");
			HX_STACK_LINE(174)
			Float tmp277 = n31;		HX_STACK_VAR(tmp277,"tmp277");
			HX_STACK_LINE(174)
			Float tmp278 = (tmp276 * tmp277);		HX_STACK_VAR(tmp278,"tmp278");
			HX_STACK_LINE(174)
			Float tmp279 = (tmp275 - tmp278);		HX_STACK_VAR(tmp279,"tmp279");
			HX_STACK_LINE(174)
			Float tmp280 = (n14 * n21);		HX_STACK_VAR(tmp280,"tmp280");
			HX_STACK_LINE(174)
			Float tmp281 = n32;		HX_STACK_VAR(tmp281,"tmp281");
			HX_STACK_LINE(174)
			Float tmp282 = (tmp280 * tmp281);		HX_STACK_VAR(tmp282,"tmp282");
			HX_STACK_LINE(174)
			Float tmp283 = (tmp279 - tmp282);		HX_STACK_VAR(tmp283,"tmp283");
			HX_STACK_LINE(174)
			Float tmp284 = (n11 * n24);		HX_STACK_VAR(tmp284,"tmp284");
			HX_STACK_LINE(174)
			Float tmp285 = n32;		HX_STACK_VAR(tmp285,"tmp285");
			HX_STACK_LINE(174)
			Float tmp286 = (tmp284 * tmp285);		HX_STACK_VAR(tmp286,"tmp286");
			HX_STACK_LINE(174)
			Float tmp287 = (tmp283 + tmp286);		HX_STACK_VAR(tmp287,"tmp287");
			HX_STACK_LINE(174)
			Float tmp288 = (n12 * n21);		HX_STACK_VAR(tmp288,"tmp288");
			HX_STACK_LINE(174)
			Float tmp289 = n34;		HX_STACK_VAR(tmp289,"tmp289");
			HX_STACK_LINE(174)
			Float tmp290 = (tmp288 * tmp289);		HX_STACK_VAR(tmp290,"tmp290");
			HX_STACK_LINE(174)
			Float tmp291 = (tmp287 + tmp290);		HX_STACK_VAR(tmp291,"tmp291");
			HX_STACK_LINE(174)
			Float tmp292 = (n11 * n22);		HX_STACK_VAR(tmp292,"tmp292");
			HX_STACK_LINE(174)
			Float tmp293 = n34;		HX_STACK_VAR(tmp293,"tmp293");
			HX_STACK_LINE(174)
			Float tmp294 = (tmp292 * tmp293);		HX_STACK_VAR(tmp294,"tmp294");
			HX_STACK_LINE(174)
			Float tmp295 = (tmp291 - tmp294);		HX_STACK_VAR(tmp295,"tmp295");
			HX_STACK_LINE(174)
			te[(int)14] = tmp295;
			HX_STACK_LINE(174)
			Float tmp296 = (n23 * n32);		HX_STACK_VAR(tmp296,"tmp296");
			HX_STACK_LINE(174)
			Float tmp297 = n41;		HX_STACK_VAR(tmp297,"tmp297");
			HX_STACK_LINE(174)
			Float tmp298 = (tmp296 * tmp297);		HX_STACK_VAR(tmp298,"tmp298");
			HX_STACK_LINE(174)
			Float tmp299 = (n22 * n33);		HX_STACK_VAR(tmp299,"tmp299");
			HX_STACK_LINE(174)
			Float tmp300 = n41;		HX_STACK_VAR(tmp300,"tmp300");
			HX_STACK_LINE(174)
			Float tmp301 = (tmp299 * tmp300);		HX_STACK_VAR(tmp301,"tmp301");
			HX_STACK_LINE(174)
			Float tmp302 = (tmp298 - tmp301);		HX_STACK_VAR(tmp302,"tmp302");
			HX_STACK_LINE(174)
			Float tmp303 = (n23 * n31);		HX_STACK_VAR(tmp303,"tmp303");
			HX_STACK_LINE(174)
			Float tmp304 = n42;		HX_STACK_VAR(tmp304,"tmp304");
			HX_STACK_LINE(174)
			Float tmp305 = (tmp303 * tmp304);		HX_STACK_VAR(tmp305,"tmp305");
			HX_STACK_LINE(174)
			Float tmp306 = (tmp302 - tmp305);		HX_STACK_VAR(tmp306,"tmp306");
			HX_STACK_LINE(174)
			Float tmp307 = (n21 * n33);		HX_STACK_VAR(tmp307,"tmp307");
			HX_STACK_LINE(174)
			Float tmp308 = n42;		HX_STACK_VAR(tmp308,"tmp308");
			HX_STACK_LINE(174)
			Float tmp309 = (tmp307 * tmp308);		HX_STACK_VAR(tmp309,"tmp309");
			HX_STACK_LINE(174)
			Float tmp310 = (tmp306 + tmp309);		HX_STACK_VAR(tmp310,"tmp310");
			HX_STACK_LINE(174)
			Float tmp311 = (n22 * n31);		HX_STACK_VAR(tmp311,"tmp311");
			HX_STACK_LINE(174)
			Float tmp312 = n43;		HX_STACK_VAR(tmp312,"tmp312");
			HX_STACK_LINE(174)
			Float tmp313 = (tmp311 * tmp312);		HX_STACK_VAR(tmp313,"tmp313");
			HX_STACK_LINE(174)
			Float tmp314 = (tmp310 + tmp313);		HX_STACK_VAR(tmp314,"tmp314");
			HX_STACK_LINE(174)
			Float tmp315 = (n21 * n32);		HX_STACK_VAR(tmp315,"tmp315");
			HX_STACK_LINE(174)
			Float tmp316 = n43;		HX_STACK_VAR(tmp316,"tmp316");
			HX_STACK_LINE(174)
			Float tmp317 = (tmp315 * tmp316);		HX_STACK_VAR(tmp317,"tmp317");
			HX_STACK_LINE(174)
			Float tmp318 = (tmp314 - tmp317);		HX_STACK_VAR(tmp318,"tmp318");
			HX_STACK_LINE(174)
			te[(int)3] = tmp318;
			HX_STACK_LINE(174)
			Float tmp319 = (n12 * n33);		HX_STACK_VAR(tmp319,"tmp319");
			HX_STACK_LINE(174)
			Float tmp320 = n41;		HX_STACK_VAR(tmp320,"tmp320");
			HX_STACK_LINE(174)
			Float tmp321 = (tmp319 * tmp320);		HX_STACK_VAR(tmp321,"tmp321");
			HX_STACK_LINE(174)
			Float tmp322 = (n13 * n32);		HX_STACK_VAR(tmp322,"tmp322");
			HX_STACK_LINE(174)
			Float tmp323 = n41;		HX_STACK_VAR(tmp323,"tmp323");
			HX_STACK_LINE(174)
			Float tmp324 = (tmp322 * tmp323);		HX_STACK_VAR(tmp324,"tmp324");
			HX_STACK_LINE(174)
			Float tmp325 = (tmp321 - tmp324);		HX_STACK_VAR(tmp325,"tmp325");
			HX_STACK_LINE(174)
			Float tmp326 = (n13 * n31);		HX_STACK_VAR(tmp326,"tmp326");
			HX_STACK_LINE(174)
			Float tmp327 = n42;		HX_STACK_VAR(tmp327,"tmp327");
			HX_STACK_LINE(174)
			Float tmp328 = (tmp326 * tmp327);		HX_STACK_VAR(tmp328,"tmp328");
			HX_STACK_LINE(174)
			Float tmp329 = (tmp325 + tmp328);		HX_STACK_VAR(tmp329,"tmp329");
			HX_STACK_LINE(174)
			Float tmp330 = (n11 * n33);		HX_STACK_VAR(tmp330,"tmp330");
			HX_STACK_LINE(174)
			Float tmp331 = n42;		HX_STACK_VAR(tmp331,"tmp331");
			HX_STACK_LINE(174)
			Float tmp332 = (tmp330 * tmp331);		HX_STACK_VAR(tmp332,"tmp332");
			HX_STACK_LINE(174)
			Float tmp333 = (tmp329 - tmp332);		HX_STACK_VAR(tmp333,"tmp333");
			HX_STACK_LINE(174)
			Float tmp334 = (n12 * n31);		HX_STACK_VAR(tmp334,"tmp334");
			HX_STACK_LINE(174)
			Float tmp335 = n43;		HX_STACK_VAR(tmp335,"tmp335");
			HX_STACK_LINE(174)
			Float tmp336 = (tmp334 * tmp335);		HX_STACK_VAR(tmp336,"tmp336");
			HX_STACK_LINE(174)
			Float tmp337 = (tmp333 - tmp336);		HX_STACK_VAR(tmp337,"tmp337");
			HX_STACK_LINE(174)
			Float tmp338 = (n11 * n32);		HX_STACK_VAR(tmp338,"tmp338");
			HX_STACK_LINE(174)
			Float tmp339 = n43;		HX_STACK_VAR(tmp339,"tmp339");
			HX_STACK_LINE(174)
			Float tmp340 = (tmp338 * tmp339);		HX_STACK_VAR(tmp340,"tmp340");
			HX_STACK_LINE(174)
			Float tmp341 = (tmp337 + tmp340);		HX_STACK_VAR(tmp341,"tmp341");
			HX_STACK_LINE(174)
			te[(int)7] = tmp341;
			HX_STACK_LINE(174)
			Float tmp342 = (n13 * n22);		HX_STACK_VAR(tmp342,"tmp342");
			HX_STACK_LINE(174)
			Float tmp343 = n41;		HX_STACK_VAR(tmp343,"tmp343");
			HX_STACK_LINE(174)
			Float tmp344 = (tmp342 * tmp343);		HX_STACK_VAR(tmp344,"tmp344");
			HX_STACK_LINE(174)
			Float tmp345 = (n12 * n23);		HX_STACK_VAR(tmp345,"tmp345");
			HX_STACK_LINE(174)
			Float tmp346 = n41;		HX_STACK_VAR(tmp346,"tmp346");
			HX_STACK_LINE(174)
			Float tmp347 = (tmp345 * tmp346);		HX_STACK_VAR(tmp347,"tmp347");
			HX_STACK_LINE(174)
			Float tmp348 = (tmp344 - tmp347);		HX_STACK_VAR(tmp348,"tmp348");
			HX_STACK_LINE(174)
			Float tmp349 = (n13 * n21);		HX_STACK_VAR(tmp349,"tmp349");
			HX_STACK_LINE(174)
			Float tmp350 = n42;		HX_STACK_VAR(tmp350,"tmp350");
			HX_STACK_LINE(174)
			Float tmp351 = (tmp349 * tmp350);		HX_STACK_VAR(tmp351,"tmp351");
			HX_STACK_LINE(174)
			Float tmp352 = (tmp348 - tmp351);		HX_STACK_VAR(tmp352,"tmp352");
			HX_STACK_LINE(174)
			Float tmp353 = (n11 * n23);		HX_STACK_VAR(tmp353,"tmp353");
			HX_STACK_LINE(174)
			Float tmp354 = n42;		HX_STACK_VAR(tmp354,"tmp354");
			HX_STACK_LINE(174)
			Float tmp355 = (tmp353 * tmp354);		HX_STACK_VAR(tmp355,"tmp355");
			HX_STACK_LINE(174)
			Float tmp356 = (tmp352 + tmp355);		HX_STACK_VAR(tmp356,"tmp356");
			HX_STACK_LINE(174)
			Float tmp357 = (n12 * n21);		HX_STACK_VAR(tmp357,"tmp357");
			HX_STACK_LINE(174)
			Float tmp358 = n43;		HX_STACK_VAR(tmp358,"tmp358");
			HX_STACK_LINE(174)
			Float tmp359 = (tmp357 * tmp358);		HX_STACK_VAR(tmp359,"tmp359");
			HX_STACK_LINE(174)
			Float tmp360 = (tmp356 + tmp359);		HX_STACK_VAR(tmp360,"tmp360");
			HX_STACK_LINE(174)
			Float tmp361 = (n11 * n22);		HX_STACK_VAR(tmp361,"tmp361");
			HX_STACK_LINE(174)
			Float tmp362 = n43;		HX_STACK_VAR(tmp362,"tmp362");
			HX_STACK_LINE(174)
			Float tmp363 = (tmp361 * tmp362);		HX_STACK_VAR(tmp363,"tmp363");
			HX_STACK_LINE(174)
			Float tmp364 = (tmp360 - tmp363);		HX_STACK_VAR(tmp364,"tmp364");
			HX_STACK_LINE(174)
			te[(int)11] = tmp364;
			HX_STACK_LINE(174)
			Float tmp365 = (n12 * n23);		HX_STACK_VAR(tmp365,"tmp365");
			HX_STACK_LINE(174)
			Float tmp366 = n31;		HX_STACK_VAR(tmp366,"tmp366");
			HX_STACK_LINE(174)
			Float tmp367 = (tmp365 * tmp366);		HX_STACK_VAR(tmp367,"tmp367");
			HX_STACK_LINE(174)
			Float tmp368 = (n13 * n22);		HX_STACK_VAR(tmp368,"tmp368");
			HX_STACK_LINE(174)
			Float tmp369 = n31;		HX_STACK_VAR(tmp369,"tmp369");
			HX_STACK_LINE(174)
			Float tmp370 = (tmp368 * tmp369);		HX_STACK_VAR(tmp370,"tmp370");
			HX_STACK_LINE(174)
			Float tmp371 = (tmp367 - tmp370);		HX_STACK_VAR(tmp371,"tmp371");
			HX_STACK_LINE(174)
			Float tmp372 = (n13 * n21);		HX_STACK_VAR(tmp372,"tmp372");
			HX_STACK_LINE(174)
			Float tmp373 = n32;		HX_STACK_VAR(tmp373,"tmp373");
			HX_STACK_LINE(174)
			Float tmp374 = (tmp372 * tmp373);		HX_STACK_VAR(tmp374,"tmp374");
			HX_STACK_LINE(174)
			Float tmp375 = (tmp371 + tmp374);		HX_STACK_VAR(tmp375,"tmp375");
			HX_STACK_LINE(174)
			Float tmp376 = (n11 * n23);		HX_STACK_VAR(tmp376,"tmp376");
			HX_STACK_LINE(174)
			Float tmp377 = n32;		HX_STACK_VAR(tmp377,"tmp377");
			HX_STACK_LINE(174)
			Float tmp378 = (tmp376 * tmp377);		HX_STACK_VAR(tmp378,"tmp378");
			HX_STACK_LINE(174)
			Float tmp379 = (tmp375 - tmp378);		HX_STACK_VAR(tmp379,"tmp379");
			HX_STACK_LINE(174)
			Float tmp380 = (n12 * n21);		HX_STACK_VAR(tmp380,"tmp380");
			HX_STACK_LINE(174)
			Float tmp381 = n33;		HX_STACK_VAR(tmp381,"tmp381");
			HX_STACK_LINE(174)
			Float tmp382 = (tmp380 * tmp381);		HX_STACK_VAR(tmp382,"tmp382");
			HX_STACK_LINE(174)
			Float tmp383 = (tmp379 - tmp382);		HX_STACK_VAR(tmp383,"tmp383");
			HX_STACK_LINE(174)
			Float tmp384 = (n11 * n22);		HX_STACK_VAR(tmp384,"tmp384");
			HX_STACK_LINE(174)
			Float tmp385 = n33;		HX_STACK_VAR(tmp385,"tmp385");
			HX_STACK_LINE(174)
			Float tmp386 = (tmp384 * tmp385);		HX_STACK_VAR(tmp386,"tmp386");
			HX_STACK_LINE(174)
			Float tmp387 = (tmp383 + tmp386);		HX_STACK_VAR(tmp387,"tmp387");
			HX_STACK_LINE(174)
			te[(int)15] = tmp387;
			HX_STACK_LINE(174)
			Float tmp388 = me->__get((int)0);		HX_STACK_VAR(tmp388,"tmp388");
			HX_STACK_LINE(174)
			Float tmp389 = te->__get((int)0);		HX_STACK_VAR(tmp389,"tmp389");
			HX_STACK_LINE(174)
			Float tmp390 = (tmp388 * tmp389);		HX_STACK_VAR(tmp390,"tmp390");
			HX_STACK_LINE(174)
			Float tmp391 = me->__get((int)1);		HX_STACK_VAR(tmp391,"tmp391");
			HX_STACK_LINE(174)
			Float tmp392 = te->__get((int)4);		HX_STACK_VAR(tmp392,"tmp392");
			HX_STACK_LINE(174)
			Float tmp393 = (tmp391 * tmp392);		HX_STACK_VAR(tmp393,"tmp393");
			HX_STACK_LINE(174)
			Float tmp394 = (tmp390 + tmp393);		HX_STACK_VAR(tmp394,"tmp394");
			HX_STACK_LINE(174)
			Float tmp395 = me->__get((int)2);		HX_STACK_VAR(tmp395,"tmp395");
			HX_STACK_LINE(174)
			Float tmp396 = te->__get((int)8);		HX_STACK_VAR(tmp396,"tmp396");
			HX_STACK_LINE(174)
			Float tmp397 = (tmp395 * tmp396);		HX_STACK_VAR(tmp397,"tmp397");
			HX_STACK_LINE(174)
			Float tmp398 = (tmp394 + tmp397);		HX_STACK_VAR(tmp398,"tmp398");
			HX_STACK_LINE(174)
			Float tmp399 = me->__get((int)3);		HX_STACK_VAR(tmp399,"tmp399");
			HX_STACK_LINE(174)
			Float tmp400 = te->__get((int)12);		HX_STACK_VAR(tmp400,"tmp400");
			HX_STACK_LINE(174)
			Float tmp401 = (tmp399 * tmp400);		HX_STACK_VAR(tmp401,"tmp401");
			HX_STACK_LINE(174)
			Float tmp402 = (tmp398 + tmp401);		HX_STACK_VAR(tmp402,"tmp402");
			HX_STACK_LINE(174)
			Float det = tmp402;		HX_STACK_VAR(det,"det");
			HX_STACK_LINE(174)
			bool tmp403 = (det == (int)0);		HX_STACK_VAR(tmp403,"tmp403");
			HX_STACK_LINE(174)
			if ((tmp403)){
				HX_STACK_LINE(174)
				Dynamic tmp404 = hx::SourceInfo(HX_HCSTRING("Matrix.hx","\xfd","\x8a","\xaa","\x4f"),696,HX_HCSTRING("phoenix.Matrix","\x60","\x61","\xa9","\x39"),HX_HCSTRING("getInverse","\xba","\xd1","\x52","\x8d"));		HX_STACK_VAR(tmp404,"tmp404");
				HX_STACK_LINE(174)
				::haxe::Log_obj::trace(HX_HCSTRING("Matrix.getInverse: cant invert matrix, determinant is 0","\xf5","\x2d","\x16","\x59"),tmp404);
				HX_STACK_LINE(174)
				{
					HX_STACK_LINE(174)
					{
						HX_STACK_LINE(174)
						Array< Float > e = _inverted->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(174)
						e[(int)0] = (int)1;
						HX_STACK_LINE(174)
						e[(int)4] = (int)0;
						HX_STACK_LINE(174)
						e[(int)8] = (int)0;
						HX_STACK_LINE(174)
						e[(int)12] = (int)0;
						HX_STACK_LINE(174)
						e[(int)1] = (int)0;
						HX_STACK_LINE(174)
						e[(int)5] = (int)1;
						HX_STACK_LINE(174)
						e[(int)9] = (int)0;
						HX_STACK_LINE(174)
						e[(int)13] = (int)0;
						HX_STACK_LINE(174)
						e[(int)2] = (int)0;
						HX_STACK_LINE(174)
						e[(int)6] = (int)0;
						HX_STACK_LINE(174)
						e[(int)10] = (int)1;
						HX_STACK_LINE(174)
						e[(int)14] = (int)0;
						HX_STACK_LINE(174)
						e[(int)3] = (int)0;
						HX_STACK_LINE(174)
						e[(int)7] = (int)0;
						HX_STACK_LINE(174)
						e[(int)11] = (int)0;
						HX_STACK_LINE(174)
						e[(int)15] = (int)1;
						HX_STACK_LINE(174)
						_inverted;
					}
					HX_STACK_LINE(174)
					_inverted;
				}
				HX_STACK_LINE(174)
				tmp3 = _inverted;
			}
			else{
				HX_STACK_LINE(174)
				{
					HX_STACK_LINE(174)
					Float tmp404 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp404,"tmp404");
					HX_STACK_LINE(174)
					Float _s = tmp404;		HX_STACK_VAR(_s,"_s");
					HX_STACK_LINE(174)
					Array< Float > te1 = _inverted->elements;		HX_STACK_VAR(te1,"te1");
					HX_STACK_LINE(174)
					Float tmp405 = _s;		HX_STACK_VAR(tmp405,"tmp405");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)0],tmp405);
					HX_STACK_LINE(174)
					Float tmp406 = _s;		HX_STACK_VAR(tmp406,"tmp406");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)4],tmp406);
					HX_STACK_LINE(174)
					Float tmp407 = _s;		HX_STACK_VAR(tmp407,"tmp407");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)8],tmp407);
					HX_STACK_LINE(174)
					Float tmp408 = _s;		HX_STACK_VAR(tmp408,"tmp408");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)12],tmp408);
					HX_STACK_LINE(174)
					Float tmp409 = _s;		HX_STACK_VAR(tmp409,"tmp409");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)1],tmp409);
					HX_STACK_LINE(174)
					Float tmp410 = _s;		HX_STACK_VAR(tmp410,"tmp410");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)5],tmp410);
					HX_STACK_LINE(174)
					Float tmp411 = _s;		HX_STACK_VAR(tmp411,"tmp411");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)9],tmp411);
					HX_STACK_LINE(174)
					Float tmp412 = _s;		HX_STACK_VAR(tmp412,"tmp412");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)13],tmp412);
					HX_STACK_LINE(174)
					Float tmp413 = _s;		HX_STACK_VAR(tmp413,"tmp413");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)2],tmp413);
					HX_STACK_LINE(174)
					Float tmp414 = _s;		HX_STACK_VAR(tmp414,"tmp414");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)6],tmp414);
					HX_STACK_LINE(174)
					Float tmp415 = _s;		HX_STACK_VAR(tmp415,"tmp415");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)10],tmp415);
					HX_STACK_LINE(174)
					Float tmp416 = _s;		HX_STACK_VAR(tmp416,"tmp416");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)14],tmp416);
					HX_STACK_LINE(174)
					Float tmp417 = _s;		HX_STACK_VAR(tmp417,"tmp417");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)3],tmp417);
					HX_STACK_LINE(174)
					Float tmp418 = _s;		HX_STACK_VAR(tmp418,"tmp418");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)7],tmp418);
					HX_STACK_LINE(174)
					Float tmp419 = _s;		HX_STACK_VAR(tmp419,"tmp419");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)11],tmp419);
					HX_STACK_LINE(174)
					Float tmp420 = _s;		HX_STACK_VAR(tmp420,"tmp420");
					HX_STACK_LINE(174)
					hx::MultEq(te1[(int)15],tmp420);
					HX_STACK_LINE(174)
					_inverted;
				}
				HX_STACK_LINE(174)
				tmp3 = _inverted;
			}
		}
		HX_STACK_LINE(174)
		::phoenix::Matrix m = tmp3;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(174)
		Array< Float > e = m->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(174)
		Float x = _this->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(174)
		Float y = _this->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(174)
		Float z = _this->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(174)
		Float tmp4 = e->__get((int)3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		Float tmp7 = e->__get((int)7);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(174)
		Float tmp11 = e->__get((int)11);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(174)
		Float tmp12 = z;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(174)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(174)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(174)
		Float tmp15 = e->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(174)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(174)
		Float tmp17 = (Float((int)1) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(174)
		Float d = tmp17;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			Float tmp18 = e->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(174)
			Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(174)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(174)
			Float tmp21 = e->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(174)
			Float tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(174)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(174)
			Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(174)
			Float tmp25 = e->__get((int)8);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(174)
			Float tmp26 = z;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(174)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(174)
			Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(174)
			Float tmp29 = e->__get((int)12);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(174)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(174)
			Float tmp31 = d;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(174)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(174)
			Float _x = tmp32;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(174)
			Float tmp33 = e->__get((int)1);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(174)
			Float tmp34 = x;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(174)
			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(174)
			Float tmp36 = e->__get((int)5);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(174)
			Float tmp37 = y;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(174)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(174)
			Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(174)
			Float tmp40 = e->__get((int)9);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(174)
			Float tmp41 = z;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(174)
			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(174)
			Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(174)
			Float tmp44 = e->__get((int)13);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(174)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(174)
			Float tmp46 = d;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(174)
			Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(174)
			Float _y = tmp47;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(174)
			Float tmp48 = e->__get((int)2);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(174)
			Float tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(174)
			Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(174)
			Float tmp51 = e->__get((int)6);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(174)
			Float tmp52 = y;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(174)
			Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(174)
			Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(174)
			Float tmp55 = e->__get((int)10);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(174)
			Float tmp56 = z;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(174)
			Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(174)
			Float tmp58 = (tmp54 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(174)
			Float tmp59 = e->__get((int)14);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(174)
			Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(174)
			Float tmp61 = d;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(174)
			Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(174)
			Float _z = tmp62;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(174)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(174)
			_this->ignore_listeners = true;
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				_this->x = _x;
				HX_STACK_LINE(174)
				bool tmp63 = _this->_construct;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(174)
				if ((tmp63)){
					HX_STACK_LINE(174)
					_this->x;
				}
				else{
					HX_STACK_LINE(174)
					bool tmp64 = (_this->listen_x != null());		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(174)
					bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(174)
					if ((tmp64)){
						HX_STACK_LINE(174)
						bool tmp66 = _this->ignore_listeners;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(174)
						bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(174)
						tmp65 = !(tmp67);
					}
					else{
						HX_STACK_LINE(174)
						tmp65 = false;
					}
					HX_STACK_LINE(174)
					if ((tmp65)){
						HX_STACK_LINE(174)
						Float tmp66 = _x;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(174)
						_this->listen_x(tmp66);
					}
					HX_STACK_LINE(174)
					_this->x;
				}
			}
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				_this->y = _y;
				HX_STACK_LINE(174)
				bool tmp63 = _this->_construct;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(174)
				if ((tmp63)){
					HX_STACK_LINE(174)
					_this->y;
				}
				else{
					HX_STACK_LINE(174)
					bool tmp64 = (_this->listen_y != null());		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(174)
					bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(174)
					if ((tmp64)){
						HX_STACK_LINE(174)
						bool tmp66 = _this->ignore_listeners;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(174)
						bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(174)
						tmp65 = !(tmp67);
					}
					else{
						HX_STACK_LINE(174)
						tmp65 = false;
					}
					HX_STACK_LINE(174)
					if ((tmp65)){
						HX_STACK_LINE(174)
						Float tmp66 = _y;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(174)
						_this->listen_y(tmp66);
					}
					HX_STACK_LINE(174)
					_this->y;
				}
			}
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				_this->z = _z;
				HX_STACK_LINE(174)
				bool tmp63 = _this->_construct;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(174)
				if ((tmp63)){
					HX_STACK_LINE(174)
					_this->z;
				}
				else{
					HX_STACK_LINE(174)
					bool tmp64 = (_this->listen_z != null());		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(174)
					bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(174)
					if ((tmp64)){
						HX_STACK_LINE(174)
						bool tmp66 = _this->ignore_listeners;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(174)
						bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(174)
						tmp65 = !(tmp67);
					}
					else{
						HX_STACK_LINE(174)
						tmp65 = false;
					}
					HX_STACK_LINE(174)
					if ((tmp65)){
						HX_STACK_LINE(174)
						Float tmp66 = _z;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(174)
						_this->listen_z(tmp66);
					}
					HX_STACK_LINE(174)
					_this->z;
				}
			}
			HX_STACK_LINE(174)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(174)
			bool tmp63 = (_this->listen_x != null());		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(174)
			bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(174)
			if ((tmp63)){
				HX_STACK_LINE(174)
				bool tmp65 = _this->ignore_listeners;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(174)
				bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(174)
				tmp64 = !(tmp66);
			}
			else{
				HX_STACK_LINE(174)
				tmp64 = false;
			}
			HX_STACK_LINE(174)
			if ((tmp64)){
				HX_STACK_LINE(174)
				Float tmp65 = _this->x;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(174)
				_this->listen_x(tmp65);
			}
			HX_STACK_LINE(174)
			bool tmp65 = (_this->listen_y != null());		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(174)
			bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(174)
			if ((tmp65)){
				HX_STACK_LINE(174)
				bool tmp67 = _this->ignore_listeners;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(174)
				bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(174)
				tmp66 = !(tmp68);
			}
			else{
				HX_STACK_LINE(174)
				tmp66 = false;
			}
			HX_STACK_LINE(174)
			if ((tmp66)){
				HX_STACK_LINE(174)
				Float tmp67 = _this->y;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(174)
				_this->listen_y(tmp67);
			}
			HX_STACK_LINE(174)
			bool tmp67 = (_this->listen_z != null());		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(174)
			bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(174)
			if ((tmp67)){
				HX_STACK_LINE(174)
				bool tmp69 = _this->ignore_listeners;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(174)
				bool tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(174)
				tmp68 = !(tmp70);
			}
			else{
				HX_STACK_LINE(174)
				tmp68 = false;
			}
			HX_STACK_LINE(174)
			if ((tmp68)){
				HX_STACK_LINE(174)
				Float tmp69 = _this->z;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(174)
				_this->listen_z(tmp69);
			}
			HX_STACK_LINE(174)
			_this;
		}
		HX_STACK_LINE(174)
		tmp1 = _this;
	}
	HX_STACK_LINE(174)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,unproject,return )

::phoenix::Ray Camera_obj::screen_point_to_ray( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","screen_point_to_ray",0x118f857e,"phoenix.Camera.screen_point_to_ray","phoenix/Camera.hx",178,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(180)
	::phoenix::Ray tmp = ::phoenix::Ray_obj::__new(_vector,hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,screen_point_to_ray,return )

::phoenix::Vector Camera_obj::screen_point_to_world( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","screen_point_to_world",0x22d752e6,"phoenix.Camera.screen_point_to_world","phoenix/Camera.hx",184,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(186)
	::phoenix::ProjectionType tmp = this->projection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	bool tmp1 = (tmp == ::phoenix::ProjectionType_obj::ortho);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	if ((tmp1)){
		HX_STACK_LINE(187)
		::phoenix::Vector tmp2 = _vector;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		::phoenix::Vector tmp3 = this->ortho_screen_to_world(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		return tmp3;
	}
	else{
		HX_STACK_LINE(188)
		::phoenix::ProjectionType tmp2 = this->projection;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		bool tmp3 = (tmp2 == ::phoenix::ProjectionType_obj::perspective);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		if ((tmp3)){
			HX_STACK_LINE(189)
			::phoenix::Vector tmp4 = _vector;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			::phoenix::Ray tmp5 = this->screen_point_to_ray(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(189)
			::phoenix::Vector tmp6 = tmp5->end;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			return tmp6;
		}
	}
	HX_STACK_LINE(193)
	::phoenix::Vector tmp2 = _vector;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	::phoenix::Vector tmp3 = this->ortho_screen_to_world(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(193)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,screen_point_to_world,return )

::phoenix::Vector Camera_obj::world_point_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport){
	HX_STACK_FRAME("phoenix.Camera","world_point_to_screen",0x231a6faa,"phoenix.Camera.world_point_to_screen","phoenix/Camera.hx",197,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_ARG(_viewport,"_viewport")
	HX_STACK_LINE(199)
	::phoenix::ProjectionType tmp = this->projection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	bool tmp1 = (tmp == ::phoenix::ProjectionType_obj::ortho);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	if ((tmp1)){
		HX_STACK_LINE(200)
		::phoenix::Vector tmp2 = _vector;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		::phoenix::Vector tmp3 = this->ortho_world_to_screen(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		return tmp3;
	}
	else{
		HX_STACK_LINE(201)
		::phoenix::ProjectionType tmp2 = this->projection;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		bool tmp3 = (tmp2 == ::phoenix::ProjectionType_obj::perspective);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		if ((tmp3)){
			HX_STACK_LINE(202)
			::phoenix::Vector tmp4 = _vector;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			::phoenix::Rectangle tmp5 = _viewport;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			::phoenix::Vector tmp6 = this->persepective_world_to_screen(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			return tmp6;
		}
	}
	HX_STACK_LINE(206)
	::phoenix::Vector tmp2 = _vector;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	::phoenix::Vector tmp3 = this->ortho_world_to_screen(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(206)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,world_point_to_screen,return )

Void Camera_obj::process( ){
{
		HX_STACK_FRAME("phoenix.Camera","process",0x32f5f9c5,"phoenix.Camera.process","phoenix/Camera.hx",214,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		::phoenix::Vector tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		if ((tmp1)){
			HX_STACK_LINE(220)
			this->update_look_at();
		}
		HX_STACK_LINE(224)
		this->update_projection_matrix();
		HX_STACK_LINE(225)
		this->update_view_matrix();
		HX_STACK_LINE(228)
		Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(228)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("cull_backfaces","\xa2","\xe1","\x06","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		this->apply_state((int)2884,tmp3);
		HX_STACK_LINE(229)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		this->apply_state((int)2929,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,process,(void))

Void Camera_obj::on_transform_cleaned( ::phoenix::Transform t){
{
		HX_STACK_FRAME("phoenix.Camera","on_transform_cleaned",0x6436d59f,"phoenix.Camera.on_transform_cleaned","phoenix/Camera.hx",238,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(238)
		this->transform_dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,on_transform_cleaned,(void))

Void Camera_obj::update_look_at( ){
{
		HX_STACK_FRAME("phoenix.Camera","update_look_at",0x27c83a07,"phoenix.Camera.update_look_at","phoenix/Camera.hx",242,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		bool tmp = this->look_at_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		if ((tmp)){
			HX_STACK_LINE(244)
			::phoenix::Vector tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			::phoenix::Vector tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			tmp1 = (tmp3 != null());
		}
		else{
			HX_STACK_LINE(244)
			tmp1 = false;
		}
		HX_STACK_LINE(244)
		if ((tmp1)){
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::phoenix::Matrix tmp2 = this->look_at_matrix;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(246)
				::phoenix::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(246)
				::phoenix::Vector tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(246)
				::phoenix::Vector _eye = tmp3;		HX_STACK_VAR(_eye,"_eye");
				HX_STACK_LINE(246)
				::phoenix::Vector tmp4 = this->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(246)
				::phoenix::Vector _target = tmp4;		HX_STACK_VAR(_target,"_target");
				HX_STACK_LINE(246)
				::phoenix::Vector tmp5 = this->up;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(246)
				::phoenix::Vector _up = tmp5;		HX_STACK_VAR(_up,"_up");
				HX_STACK_LINE(246)
				::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(246)
				::phoenix::Vector _x = tmp6;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(246)
				::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(246)
				::phoenix::Vector _y = tmp7;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(246)
				::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(246)
				::phoenix::Vector _z = tmp8;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(246)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(246)
				::phoenix::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(246)
					Float tmp10 = (_target->x - _eye->x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(246)
					Float tmp11 = (_target->y - _eye->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(246)
					Float tmp12 = (_target->z - _eye->z);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(246)
					::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(tmp10,tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(246)
					::phoenix::Vector _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						Float tmp14 = (_this1->x * _this1->x);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(246)
						Float tmp15 = (_this1->y * _this1->y);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(246)
						Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(246)
						Float tmp17 = (_this1->z * _this1->z);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(246)
						Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(246)
						Float tmp19 = ::Math_obj::sqrt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(246)
						Float b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(246)
						Float tmp20 = (Float(_this1->x) / Float(b));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(246)
						Float tmp21 = (Float(_this1->y) / Float(b));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(246)
						Float tmp22 = (Float(_this1->z) / Float(b));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(246)
						tmp9 = ::phoenix::Vector_obj::__new(tmp20,tmp21,tmp22,null());
					}
				}
				HX_STACK_LINE(246)
				_z = tmp9;
				HX_STACK_LINE(246)
				Float tmp10 = (_z->x * _z->x);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(246)
				Float tmp11 = (_z->y * _z->y);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(246)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(246)
				Float tmp13 = (_z->z * _z->z);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(246)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(246)
				Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(246)
				bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(246)
				if ((tmp16)){
					HX_STACK_LINE(246)
					_z->z = (int)1;
					HX_STACK_LINE(246)
					bool tmp17 = _z->_construct;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(246)
					if ((tmp17)){
						HX_STACK_LINE(246)
						_z->z;
					}
					else{
						HX_STACK_LINE(246)
						bool tmp18 = (_z->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(246)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(246)
						if ((tmp18)){
							HX_STACK_LINE(246)
							bool tmp20 = _z->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(246)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(246)
							tmp19 = !(tmp21);
						}
						else{
							HX_STACK_LINE(246)
							tmp19 = false;
						}
						HX_STACK_LINE(246)
						if ((tmp19)){
							HX_STACK_LINE(246)
							_z->listen_z((int)1);
						}
						HX_STACK_LINE(246)
						_z->z;
					}
				}
				HX_STACK_LINE(246)
				::phoenix::Vector tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(246)
					Float tmp18 = (_up->y * _z->z);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(246)
					Float tmp19 = (_up->z * _z->y);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(246)
					Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(246)
					Float tmp21 = (_up->z * _z->x);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(246)
					Float tmp22 = (_up->x * _z->z);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(246)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(246)
					Float tmp24 = (_up->x * _z->y);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(246)
					Float tmp25 = (_up->y * _z->x);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(246)
					Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(246)
					::phoenix::Vector tmp27 = ::phoenix::Vector_obj::__new(tmp20,tmp23,tmp26,null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(246)
					::phoenix::Vector _this1 = tmp27;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						Float tmp28 = (_this1->x * _this1->x);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(246)
						Float tmp29 = (_this1->y * _this1->y);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(246)
						Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(246)
						Float tmp31 = (_this1->z * _this1->z);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(246)
						Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(246)
						Float tmp33 = ::Math_obj::sqrt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(246)
						Float b = tmp33;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(246)
						Float tmp34 = (Float(_this1->x) / Float(b));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(246)
						Float tmp35 = (Float(_this1->y) / Float(b));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(246)
						Float tmp36 = (Float(_this1->z) / Float(b));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(246)
						tmp17 = ::phoenix::Vector_obj::__new(tmp34,tmp35,tmp36,null());
					}
				}
				HX_STACK_LINE(246)
				_x = tmp17;
				HX_STACK_LINE(246)
				Float tmp18 = (_x->x * _x->x);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(246)
				Float tmp19 = (_x->y * _x->y);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(246)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(246)
				Float tmp21 = (_x->z * _x->z);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(246)
				Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(246)
				Float tmp23 = ::Math_obj::sqrt(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(246)
				bool tmp24 = (tmp23 == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(246)
				if ((tmp24)){
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						::phoenix::Vector _g = _z;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							Float tmp25 = (_g->x + ((Float)0.0001));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(246)
							Float _x1 = tmp25;		HX_STACK_VAR(_x1,"_x1");
							HX_STACK_LINE(246)
							_g->x = _x1;
							HX_STACK_LINE(246)
							bool tmp26 = _g->_construct;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(246)
							if ((tmp26)){
								HX_STACK_LINE(246)
								_g->x;
							}
							else{
								HX_STACK_LINE(246)
								bool tmp27 = (_g->listen_x != null());		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(246)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(246)
								if ((tmp27)){
									HX_STACK_LINE(246)
									bool tmp29 = _g->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(246)
									bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(246)
									tmp28 = !(tmp30);
								}
								else{
									HX_STACK_LINE(246)
									tmp28 = false;
								}
								HX_STACK_LINE(246)
								if ((tmp28)){
									HX_STACK_LINE(246)
									Float tmp29 = _x1;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(246)
									_g->listen_x(tmp29);
								}
								HX_STACK_LINE(246)
								_g->x;
							}
						}
					}
					HX_STACK_LINE(246)
					::phoenix::Vector tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						Float tmp26 = (_up->y * _z->z);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(246)
						Float tmp27 = (_up->z * _z->y);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(246)
						Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(246)
						Float tmp29 = (_up->z * _z->x);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(246)
						Float tmp30 = (_up->x * _z->z);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(246)
						Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(246)
						Float tmp32 = (_up->x * _z->y);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(246)
						Float tmp33 = (_up->y * _z->x);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(246)
						Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(246)
						::phoenix::Vector tmp35 = ::phoenix::Vector_obj::__new(tmp28,tmp31,tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(246)
						::phoenix::Vector _this1 = tmp35;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							Float tmp36 = (_this1->x * _this1->x);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(246)
							Float tmp37 = (_this1->y * _this1->y);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(246)
							Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(246)
							Float tmp39 = (_this1->z * _this1->z);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(246)
							Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(246)
							Float tmp41 = ::Math_obj::sqrt(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(246)
							Float b = tmp41;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(246)
							Float tmp42 = (Float(_this1->x) / Float(b));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(246)
							Float tmp43 = (Float(_this1->y) / Float(b));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(246)
							Float tmp44 = (Float(_this1->z) / Float(b));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(246)
							tmp25 = ::phoenix::Vector_obj::__new(tmp42,tmp43,tmp44,null());
						}
					}
					HX_STACK_LINE(246)
					_x = tmp25;
				}
				HX_STACK_LINE(246)
				Float tmp25 = (_z->y * _x->z);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(246)
				Float tmp26 = (_z->z * _x->y);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(246)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(246)
				Float tmp28 = (_z->z * _x->x);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(246)
				Float tmp29 = (_z->x * _x->z);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(246)
				Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(246)
				Float tmp31 = (_z->x * _x->y);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(246)
				Float tmp32 = (_z->y * _x->x);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(246)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(246)
				::phoenix::Vector tmp34 = ::phoenix::Vector_obj::__new(tmp27,tmp30,tmp33,null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(246)
				_y = tmp34;
				HX_STACK_LINE(246)
				Float tmp35 = _x->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(246)
				te[(int)0] = tmp35;
				HX_STACK_LINE(246)
				Float tmp36 = _y->x;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(246)
				te[(int)4] = tmp36;
				HX_STACK_LINE(246)
				Float tmp37 = _z->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(246)
				te[(int)8] = tmp37;
				HX_STACK_LINE(246)
				Float tmp38 = _x->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(246)
				te[(int)1] = tmp38;
				HX_STACK_LINE(246)
				Float tmp39 = _y->y;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(246)
				te[(int)5] = tmp39;
				HX_STACK_LINE(246)
				Float tmp40 = _z->y;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(246)
				te[(int)9] = tmp40;
				HX_STACK_LINE(246)
				Float tmp41 = _x->z;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(246)
				te[(int)2] = tmp41;
				HX_STACK_LINE(246)
				Float tmp42 = _y->z;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(246)
				te[(int)6] = tmp42;
				HX_STACK_LINE(246)
				Float tmp43 = _z->z;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(246)
				te[(int)10] = tmp43;
				HX_STACK_LINE(246)
				_this;
			}
			HX_STACK_LINE(248)
			::phoenix::Quaternion tmp2 = this->get_rotation();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			::phoenix::Matrix tmp3 = this->look_at_matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(248)
			tmp2->setFromRotationMatrix(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,update_look_at,(void))

Void Camera_obj::update_view_matrix( ){
{
		HX_STACK_FRAME("phoenix.Camera","update_view_matrix",0x11cad60f,"phoenix.Camera.update_view_matrix","phoenix/Camera.hx",254,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		::phoenix::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			::phoenix::Spatial tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(256)
				::phoenix::Transform _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(256)
				bool tmp3 = _this->_destroying;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(256)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(256)
				if ((tmp4)){
					HX_STACK_LINE(256)
					bool tmp5 = (_this->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(256)
					if ((tmp5)){
						HX_STACK_LINE(256)
						bool tmp6 = _this->parent->dirty;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(256)
						if ((tmp6)){
							HX_STACK_LINE(256)
							_this->parent->clean();
						}
					}
					HX_STACK_LINE(256)
					bool tmp6 = _this->dirty;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(256)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(256)
					if ((tmp6)){
						HX_STACK_LINE(256)
						bool tmp8 = _this->_cleaning;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(256)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(256)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(256)
						tmp7 = false;
					}
					HX_STACK_LINE(256)
					if ((tmp7)){
						HX_STACK_LINE(256)
						_this->clean();
					}
				}
				HX_STACK_LINE(256)
				tmp1 = _this->world;
			}
			HX_STACK_LINE(256)
			::phoenix::Spatial _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(256)
			tmp = _this->matrix;
		}
		HX_STACK_LINE(256)
		this->view_matrix = tmp;
		HX_STACK_LINE(258)
		bool tmp1 = this->transform_dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		if ((tmp2)){
			HX_STACK_LINE(259)
			return null();
		}
		HX_STACK_LINE(262)
		::phoenix::Matrix tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			::phoenix::Matrix tmp4 = this->view_matrix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			::phoenix::Matrix _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				::phoenix::Matrix tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(262)
					Float tmp6 = te->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(262)
					Float tmp7 = te->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(262)
					Float tmp8 = te->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(262)
					Float tmp9 = te->__get((int)12);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(262)
					Float tmp10 = te->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(262)
					Float tmp11 = te->__get((int)5);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(262)
					Float tmp12 = te->__get((int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(262)
					Float tmp13 = te->__get((int)13);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(262)
					Float tmp14 = te->__get((int)2);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(262)
					Float tmp15 = te->__get((int)6);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(262)
					Float tmp16 = te->__get((int)10);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(262)
					Float tmp17 = te->__get((int)14);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(262)
					Float tmp18 = te->__get((int)3);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(262)
					Float tmp19 = te->__get((int)7);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(262)
					Float tmp20 = te->__get((int)11);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(262)
					Float tmp21 = te->__get((int)15);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(262)
					tmp5 = ::phoenix::Matrix_obj::__new(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
				}
				HX_STACK_LINE(262)
				::phoenix::Matrix _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(262)
				Array< Float > te = _this1->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(262)
				Array< Float > me = _this->elements;		HX_STACK_VAR(me,"me");
				HX_STACK_LINE(262)
				Float tmp6 = me->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(262)
				Float n11 = tmp6;		HX_STACK_VAR(n11,"n11");
				HX_STACK_LINE(262)
				Float tmp7 = me->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(262)
				Float n12 = tmp7;		HX_STACK_VAR(n12,"n12");
				HX_STACK_LINE(262)
				Float tmp8 = me->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(262)
				Float n13 = tmp8;		HX_STACK_VAR(n13,"n13");
				HX_STACK_LINE(262)
				Float tmp9 = me->__get((int)12);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(262)
				Float n14 = tmp9;		HX_STACK_VAR(n14,"n14");
				HX_STACK_LINE(262)
				Float tmp10 = me->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(262)
				Float n21 = tmp10;		HX_STACK_VAR(n21,"n21");
				HX_STACK_LINE(262)
				Float tmp11 = me->__get((int)5);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(262)
				Float n22 = tmp11;		HX_STACK_VAR(n22,"n22");
				HX_STACK_LINE(262)
				Float tmp12 = me->__get((int)9);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(262)
				Float n23 = tmp12;		HX_STACK_VAR(n23,"n23");
				HX_STACK_LINE(262)
				Float tmp13 = me->__get((int)13);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(262)
				Float n24 = tmp13;		HX_STACK_VAR(n24,"n24");
				HX_STACK_LINE(262)
				Float tmp14 = me->__get((int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(262)
				Float n31 = tmp14;		HX_STACK_VAR(n31,"n31");
				HX_STACK_LINE(262)
				Float tmp15 = me->__get((int)6);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(262)
				Float n32 = tmp15;		HX_STACK_VAR(n32,"n32");
				HX_STACK_LINE(262)
				Float tmp16 = me->__get((int)10);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(262)
				Float n33 = tmp16;		HX_STACK_VAR(n33,"n33");
				HX_STACK_LINE(262)
				Float tmp17 = me->__get((int)14);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(262)
				Float n34 = tmp17;		HX_STACK_VAR(n34,"n34");
				HX_STACK_LINE(262)
				Float tmp18 = me->__get((int)3);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(262)
				Float n41 = tmp18;		HX_STACK_VAR(n41,"n41");
				HX_STACK_LINE(262)
				Float tmp19 = me->__get((int)7);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(262)
				Float n42 = tmp19;		HX_STACK_VAR(n42,"n42");
				HX_STACK_LINE(262)
				Float tmp20 = me->__get((int)11);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(262)
				Float n43 = tmp20;		HX_STACK_VAR(n43,"n43");
				HX_STACK_LINE(262)
				Float tmp21 = me->__get((int)15);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(262)
				Float n44 = tmp21;		HX_STACK_VAR(n44,"n44");
				HX_STACK_LINE(262)
				Float tmp22 = (n23 * n34);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(262)
				Float tmp23 = n42;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(262)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(262)
				Float tmp25 = (n24 * n33);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(262)
				Float tmp26 = n42;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(262)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(262)
				Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(262)
				Float tmp29 = (n24 * n32);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(262)
				Float tmp30 = n43;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(262)
				Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(262)
				Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(262)
				Float tmp33 = (n22 * n34);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(262)
				Float tmp34 = n43;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(262)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(262)
				Float tmp36 = (tmp32 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(262)
				Float tmp37 = (n23 * n32);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(262)
				Float tmp38 = n44;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(262)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(262)
				Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(262)
				Float tmp41 = (n22 * n33);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(262)
				Float tmp42 = n44;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(262)
				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(262)
				Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(262)
				te[(int)0] = tmp44;
				HX_STACK_LINE(262)
				Float tmp45 = (n14 * n33);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(262)
				Float tmp46 = n42;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(262)
				Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(262)
				Float tmp48 = (n13 * n34);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(262)
				Float tmp49 = n42;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(262)
				Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(262)
				Float tmp51 = (tmp47 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(262)
				Float tmp52 = (n14 * n32);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(262)
				Float tmp53 = n43;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(262)
				Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(262)
				Float tmp55 = (tmp51 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(262)
				Float tmp56 = (n12 * n34);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(262)
				Float tmp57 = n43;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(262)
				Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(262)
				Float tmp59 = (tmp55 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(262)
				Float tmp60 = (n13 * n32);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(262)
				Float tmp61 = n44;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(262)
				Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(262)
				Float tmp63 = (tmp59 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(262)
				Float tmp64 = (n12 * n33);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(262)
				Float tmp65 = n44;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(262)
				Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(262)
				Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(262)
				te[(int)4] = tmp67;
				HX_STACK_LINE(262)
				Float tmp68 = (n13 * n24);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(262)
				Float tmp69 = n42;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(262)
				Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(262)
				Float tmp71 = (n14 * n23);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(262)
				Float tmp72 = n42;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(262)
				Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(262)
				Float tmp74 = (tmp70 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(262)
				Float tmp75 = (n14 * n22);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(262)
				Float tmp76 = n43;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(262)
				Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(262)
				Float tmp78 = (tmp74 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(262)
				Float tmp79 = (n12 * n24);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(262)
				Float tmp80 = n43;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(262)
				Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(262)
				Float tmp82 = (tmp78 - tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(262)
				Float tmp83 = (n13 * n22);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(262)
				Float tmp84 = n44;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(262)
				Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(262)
				Float tmp86 = (tmp82 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(262)
				Float tmp87 = (n12 * n23);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(262)
				Float tmp88 = n44;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(262)
				Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(262)
				Float tmp90 = (tmp86 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(262)
				te[(int)8] = tmp90;
				HX_STACK_LINE(262)
				Float tmp91 = (n14 * n23);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(262)
				Float tmp92 = n32;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(262)
				Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(262)
				Float tmp94 = (n13 * n24);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(262)
				Float tmp95 = n32;		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(262)
				Float tmp96 = (tmp94 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(262)
				Float tmp97 = (tmp93 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(262)
				Float tmp98 = (n14 * n22);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(262)
				Float tmp99 = n33;		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(262)
				Float tmp100 = (tmp98 * tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(262)
				Float tmp101 = (tmp97 - tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(262)
				Float tmp102 = (n12 * n24);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(262)
				Float tmp103 = n33;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(262)
				Float tmp104 = (tmp102 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(262)
				Float tmp105 = (tmp101 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(262)
				Float tmp106 = (n13 * n22);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(262)
				Float tmp107 = n34;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(262)
				Float tmp108 = (tmp106 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(262)
				Float tmp109 = (tmp105 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(262)
				Float tmp110 = (n12 * n23);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(262)
				Float tmp111 = n34;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(262)
				Float tmp112 = (tmp110 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(262)
				Float tmp113 = (tmp109 - tmp112);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(262)
				te[(int)12] = tmp113;
				HX_STACK_LINE(262)
				Float tmp114 = (n24 * n33);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(262)
				Float tmp115 = n41;		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(262)
				Float tmp116 = (tmp114 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(262)
				Float tmp117 = (n23 * n34);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(262)
				Float tmp118 = n41;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(262)
				Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(262)
				Float tmp120 = (tmp116 - tmp119);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(262)
				Float tmp121 = (n24 * n31);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(262)
				Float tmp122 = n43;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(262)
				Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(262)
				Float tmp124 = (tmp120 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(262)
				Float tmp125 = (n21 * n34);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(262)
				Float tmp126 = n43;		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(262)
				Float tmp127 = (tmp125 * tmp126);		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(262)
				Float tmp128 = (tmp124 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(262)
				Float tmp129 = (n23 * n31);		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(262)
				Float tmp130 = n44;		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(262)
				Float tmp131 = (tmp129 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(262)
				Float tmp132 = (tmp128 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(262)
				Float tmp133 = (n21 * n33);		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(262)
				Float tmp134 = n44;		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(262)
				Float tmp135 = (tmp133 * tmp134);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(262)
				Float tmp136 = (tmp132 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(262)
				te[(int)1] = tmp136;
				HX_STACK_LINE(262)
				Float tmp137 = (n13 * n34);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(262)
				Float tmp138 = n41;		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(262)
				Float tmp139 = (tmp137 * tmp138);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(262)
				Float tmp140 = (n14 * n33);		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(262)
				Float tmp141 = n41;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(262)
				Float tmp142 = (tmp140 * tmp141);		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(262)
				Float tmp143 = (tmp139 - tmp142);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(262)
				Float tmp144 = (n14 * n31);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(262)
				Float tmp145 = n43;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(262)
				Float tmp146 = (tmp144 * tmp145);		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(262)
				Float tmp147 = (tmp143 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(262)
				Float tmp148 = (n11 * n34);		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(262)
				Float tmp149 = n43;		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(262)
				Float tmp150 = (tmp148 * tmp149);		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(262)
				Float tmp151 = (tmp147 - tmp150);		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(262)
				Float tmp152 = (n13 * n31);		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(262)
				Float tmp153 = n44;		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(262)
				Float tmp154 = (tmp152 * tmp153);		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(262)
				Float tmp155 = (tmp151 - tmp154);		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(262)
				Float tmp156 = (n11 * n33);		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(262)
				Float tmp157 = n44;		HX_STACK_VAR(tmp157,"tmp157");
				HX_STACK_LINE(262)
				Float tmp158 = (tmp156 * tmp157);		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(262)
				Float tmp159 = (tmp155 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(262)
				te[(int)5] = tmp159;
				HX_STACK_LINE(262)
				Float tmp160 = (n14 * n23);		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(262)
				Float tmp161 = n41;		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(262)
				Float tmp162 = (tmp160 * tmp161);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(262)
				Float tmp163 = (n13 * n24);		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(262)
				Float tmp164 = n41;		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(262)
				Float tmp165 = (tmp163 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(262)
				Float tmp166 = (tmp162 - tmp165);		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(262)
				Float tmp167 = (n14 * n21);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(262)
				Float tmp168 = n43;		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(262)
				Float tmp169 = (tmp167 * tmp168);		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(262)
				Float tmp170 = (tmp166 - tmp169);		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(262)
				Float tmp171 = (n11 * n24);		HX_STACK_VAR(tmp171,"tmp171");
				HX_STACK_LINE(262)
				Float tmp172 = n43;		HX_STACK_VAR(tmp172,"tmp172");
				HX_STACK_LINE(262)
				Float tmp173 = (tmp171 * tmp172);		HX_STACK_VAR(tmp173,"tmp173");
				HX_STACK_LINE(262)
				Float tmp174 = (tmp170 + tmp173);		HX_STACK_VAR(tmp174,"tmp174");
				HX_STACK_LINE(262)
				Float tmp175 = (n13 * n21);		HX_STACK_VAR(tmp175,"tmp175");
				HX_STACK_LINE(262)
				Float tmp176 = n44;		HX_STACK_VAR(tmp176,"tmp176");
				HX_STACK_LINE(262)
				Float tmp177 = (tmp175 * tmp176);		HX_STACK_VAR(tmp177,"tmp177");
				HX_STACK_LINE(262)
				Float tmp178 = (tmp174 + tmp177);		HX_STACK_VAR(tmp178,"tmp178");
				HX_STACK_LINE(262)
				Float tmp179 = (n11 * n23);		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(262)
				Float tmp180 = n44;		HX_STACK_VAR(tmp180,"tmp180");
				HX_STACK_LINE(262)
				Float tmp181 = (tmp179 * tmp180);		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(262)
				Float tmp182 = (tmp178 - tmp181);		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(262)
				te[(int)9] = tmp182;
				HX_STACK_LINE(262)
				Float tmp183 = (n13 * n24);		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(262)
				Float tmp184 = n31;		HX_STACK_VAR(tmp184,"tmp184");
				HX_STACK_LINE(262)
				Float tmp185 = (tmp183 * tmp184);		HX_STACK_VAR(tmp185,"tmp185");
				HX_STACK_LINE(262)
				Float tmp186 = (n14 * n23);		HX_STACK_VAR(tmp186,"tmp186");
				HX_STACK_LINE(262)
				Float tmp187 = n31;		HX_STACK_VAR(tmp187,"tmp187");
				HX_STACK_LINE(262)
				Float tmp188 = (tmp186 * tmp187);		HX_STACK_VAR(tmp188,"tmp188");
				HX_STACK_LINE(262)
				Float tmp189 = (tmp185 - tmp188);		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(262)
				Float tmp190 = (n14 * n21);		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(262)
				Float tmp191 = n33;		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(262)
				Float tmp192 = (tmp190 * tmp191);		HX_STACK_VAR(tmp192,"tmp192");
				HX_STACK_LINE(262)
				Float tmp193 = (tmp189 + tmp192);		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(262)
				Float tmp194 = (n11 * n24);		HX_STACK_VAR(tmp194,"tmp194");
				HX_STACK_LINE(262)
				Float tmp195 = n33;		HX_STACK_VAR(tmp195,"tmp195");
				HX_STACK_LINE(262)
				Float tmp196 = (tmp194 * tmp195);		HX_STACK_VAR(tmp196,"tmp196");
				HX_STACK_LINE(262)
				Float tmp197 = (tmp193 - tmp196);		HX_STACK_VAR(tmp197,"tmp197");
				HX_STACK_LINE(262)
				Float tmp198 = (n13 * n21);		HX_STACK_VAR(tmp198,"tmp198");
				HX_STACK_LINE(262)
				Float tmp199 = n34;		HX_STACK_VAR(tmp199,"tmp199");
				HX_STACK_LINE(262)
				Float tmp200 = (tmp198 * tmp199);		HX_STACK_VAR(tmp200,"tmp200");
				HX_STACK_LINE(262)
				Float tmp201 = (tmp197 - tmp200);		HX_STACK_VAR(tmp201,"tmp201");
				HX_STACK_LINE(262)
				Float tmp202 = (n11 * n23);		HX_STACK_VAR(tmp202,"tmp202");
				HX_STACK_LINE(262)
				Float tmp203 = n34;		HX_STACK_VAR(tmp203,"tmp203");
				HX_STACK_LINE(262)
				Float tmp204 = (tmp202 * tmp203);		HX_STACK_VAR(tmp204,"tmp204");
				HX_STACK_LINE(262)
				Float tmp205 = (tmp201 + tmp204);		HX_STACK_VAR(tmp205,"tmp205");
				HX_STACK_LINE(262)
				te[(int)13] = tmp205;
				HX_STACK_LINE(262)
				Float tmp206 = (n22 * n34);		HX_STACK_VAR(tmp206,"tmp206");
				HX_STACK_LINE(262)
				Float tmp207 = n41;		HX_STACK_VAR(tmp207,"tmp207");
				HX_STACK_LINE(262)
				Float tmp208 = (tmp206 * tmp207);		HX_STACK_VAR(tmp208,"tmp208");
				HX_STACK_LINE(262)
				Float tmp209 = (n24 * n32);		HX_STACK_VAR(tmp209,"tmp209");
				HX_STACK_LINE(262)
				Float tmp210 = n41;		HX_STACK_VAR(tmp210,"tmp210");
				HX_STACK_LINE(262)
				Float tmp211 = (tmp209 * tmp210);		HX_STACK_VAR(tmp211,"tmp211");
				HX_STACK_LINE(262)
				Float tmp212 = (tmp208 - tmp211);		HX_STACK_VAR(tmp212,"tmp212");
				HX_STACK_LINE(262)
				Float tmp213 = (n24 * n31);		HX_STACK_VAR(tmp213,"tmp213");
				HX_STACK_LINE(262)
				Float tmp214 = n42;		HX_STACK_VAR(tmp214,"tmp214");
				HX_STACK_LINE(262)
				Float tmp215 = (tmp213 * tmp214);		HX_STACK_VAR(tmp215,"tmp215");
				HX_STACK_LINE(262)
				Float tmp216 = (tmp212 + tmp215);		HX_STACK_VAR(tmp216,"tmp216");
				HX_STACK_LINE(262)
				Float tmp217 = (n21 * n34);		HX_STACK_VAR(tmp217,"tmp217");
				HX_STACK_LINE(262)
				Float tmp218 = n42;		HX_STACK_VAR(tmp218,"tmp218");
				HX_STACK_LINE(262)
				Float tmp219 = (tmp217 * tmp218);		HX_STACK_VAR(tmp219,"tmp219");
				HX_STACK_LINE(262)
				Float tmp220 = (tmp216 - tmp219);		HX_STACK_VAR(tmp220,"tmp220");
				HX_STACK_LINE(262)
				Float tmp221 = (n22 * n31);		HX_STACK_VAR(tmp221,"tmp221");
				HX_STACK_LINE(262)
				Float tmp222 = n44;		HX_STACK_VAR(tmp222,"tmp222");
				HX_STACK_LINE(262)
				Float tmp223 = (tmp221 * tmp222);		HX_STACK_VAR(tmp223,"tmp223");
				HX_STACK_LINE(262)
				Float tmp224 = (tmp220 - tmp223);		HX_STACK_VAR(tmp224,"tmp224");
				HX_STACK_LINE(262)
				Float tmp225 = (n21 * n32);		HX_STACK_VAR(tmp225,"tmp225");
				HX_STACK_LINE(262)
				Float tmp226 = n44;		HX_STACK_VAR(tmp226,"tmp226");
				HX_STACK_LINE(262)
				Float tmp227 = (tmp225 * tmp226);		HX_STACK_VAR(tmp227,"tmp227");
				HX_STACK_LINE(262)
				Float tmp228 = (tmp224 + tmp227);		HX_STACK_VAR(tmp228,"tmp228");
				HX_STACK_LINE(262)
				te[(int)2] = tmp228;
				HX_STACK_LINE(262)
				Float tmp229 = (n14 * n32);		HX_STACK_VAR(tmp229,"tmp229");
				HX_STACK_LINE(262)
				Float tmp230 = n41;		HX_STACK_VAR(tmp230,"tmp230");
				HX_STACK_LINE(262)
				Float tmp231 = (tmp229 * tmp230);		HX_STACK_VAR(tmp231,"tmp231");
				HX_STACK_LINE(262)
				Float tmp232 = (n12 * n34);		HX_STACK_VAR(tmp232,"tmp232");
				HX_STACK_LINE(262)
				Float tmp233 = n41;		HX_STACK_VAR(tmp233,"tmp233");
				HX_STACK_LINE(262)
				Float tmp234 = (tmp232 * tmp233);		HX_STACK_VAR(tmp234,"tmp234");
				HX_STACK_LINE(262)
				Float tmp235 = (tmp231 - tmp234);		HX_STACK_VAR(tmp235,"tmp235");
				HX_STACK_LINE(262)
				Float tmp236 = (n14 * n31);		HX_STACK_VAR(tmp236,"tmp236");
				HX_STACK_LINE(262)
				Float tmp237 = n42;		HX_STACK_VAR(tmp237,"tmp237");
				HX_STACK_LINE(262)
				Float tmp238 = (tmp236 * tmp237);		HX_STACK_VAR(tmp238,"tmp238");
				HX_STACK_LINE(262)
				Float tmp239 = (tmp235 - tmp238);		HX_STACK_VAR(tmp239,"tmp239");
				HX_STACK_LINE(262)
				Float tmp240 = (n11 * n34);		HX_STACK_VAR(tmp240,"tmp240");
				HX_STACK_LINE(262)
				Float tmp241 = n42;		HX_STACK_VAR(tmp241,"tmp241");
				HX_STACK_LINE(262)
				Float tmp242 = (tmp240 * tmp241);		HX_STACK_VAR(tmp242,"tmp242");
				HX_STACK_LINE(262)
				Float tmp243 = (tmp239 + tmp242);		HX_STACK_VAR(tmp243,"tmp243");
				HX_STACK_LINE(262)
				Float tmp244 = (n12 * n31);		HX_STACK_VAR(tmp244,"tmp244");
				HX_STACK_LINE(262)
				Float tmp245 = n44;		HX_STACK_VAR(tmp245,"tmp245");
				HX_STACK_LINE(262)
				Float tmp246 = (tmp244 * tmp245);		HX_STACK_VAR(tmp246,"tmp246");
				HX_STACK_LINE(262)
				Float tmp247 = (tmp243 + tmp246);		HX_STACK_VAR(tmp247,"tmp247");
				HX_STACK_LINE(262)
				Float tmp248 = (n11 * n32);		HX_STACK_VAR(tmp248,"tmp248");
				HX_STACK_LINE(262)
				Float tmp249 = n44;		HX_STACK_VAR(tmp249,"tmp249");
				HX_STACK_LINE(262)
				Float tmp250 = (tmp248 * tmp249);		HX_STACK_VAR(tmp250,"tmp250");
				HX_STACK_LINE(262)
				Float tmp251 = (tmp247 - tmp250);		HX_STACK_VAR(tmp251,"tmp251");
				HX_STACK_LINE(262)
				te[(int)6] = tmp251;
				HX_STACK_LINE(262)
				Float tmp252 = (n12 * n24);		HX_STACK_VAR(tmp252,"tmp252");
				HX_STACK_LINE(262)
				Float tmp253 = n41;		HX_STACK_VAR(tmp253,"tmp253");
				HX_STACK_LINE(262)
				Float tmp254 = (tmp252 * tmp253);		HX_STACK_VAR(tmp254,"tmp254");
				HX_STACK_LINE(262)
				Float tmp255 = (n14 * n22);		HX_STACK_VAR(tmp255,"tmp255");
				HX_STACK_LINE(262)
				Float tmp256 = n41;		HX_STACK_VAR(tmp256,"tmp256");
				HX_STACK_LINE(262)
				Float tmp257 = (tmp255 * tmp256);		HX_STACK_VAR(tmp257,"tmp257");
				HX_STACK_LINE(262)
				Float tmp258 = (tmp254 - tmp257);		HX_STACK_VAR(tmp258,"tmp258");
				HX_STACK_LINE(262)
				Float tmp259 = (n14 * n21);		HX_STACK_VAR(tmp259,"tmp259");
				HX_STACK_LINE(262)
				Float tmp260 = n42;		HX_STACK_VAR(tmp260,"tmp260");
				HX_STACK_LINE(262)
				Float tmp261 = (tmp259 * tmp260);		HX_STACK_VAR(tmp261,"tmp261");
				HX_STACK_LINE(262)
				Float tmp262 = (tmp258 + tmp261);		HX_STACK_VAR(tmp262,"tmp262");
				HX_STACK_LINE(262)
				Float tmp263 = (n11 * n24);		HX_STACK_VAR(tmp263,"tmp263");
				HX_STACK_LINE(262)
				Float tmp264 = n42;		HX_STACK_VAR(tmp264,"tmp264");
				HX_STACK_LINE(262)
				Float tmp265 = (tmp263 * tmp264);		HX_STACK_VAR(tmp265,"tmp265");
				HX_STACK_LINE(262)
				Float tmp266 = (tmp262 - tmp265);		HX_STACK_VAR(tmp266,"tmp266");
				HX_STACK_LINE(262)
				Float tmp267 = (n12 * n21);		HX_STACK_VAR(tmp267,"tmp267");
				HX_STACK_LINE(262)
				Float tmp268 = n44;		HX_STACK_VAR(tmp268,"tmp268");
				HX_STACK_LINE(262)
				Float tmp269 = (tmp267 * tmp268);		HX_STACK_VAR(tmp269,"tmp269");
				HX_STACK_LINE(262)
				Float tmp270 = (tmp266 - tmp269);		HX_STACK_VAR(tmp270,"tmp270");
				HX_STACK_LINE(262)
				Float tmp271 = (n11 * n22);		HX_STACK_VAR(tmp271,"tmp271");
				HX_STACK_LINE(262)
				Float tmp272 = n44;		HX_STACK_VAR(tmp272,"tmp272");
				HX_STACK_LINE(262)
				Float tmp273 = (tmp271 * tmp272);		HX_STACK_VAR(tmp273,"tmp273");
				HX_STACK_LINE(262)
				Float tmp274 = (tmp270 + tmp273);		HX_STACK_VAR(tmp274,"tmp274");
				HX_STACK_LINE(262)
				te[(int)10] = tmp274;
				HX_STACK_LINE(262)
				Float tmp275 = (n14 * n22);		HX_STACK_VAR(tmp275,"tmp275");
				HX_STACK_LINE(262)
				Float tmp276 = n31;		HX_STACK_VAR(tmp276,"tmp276");
				HX_STACK_LINE(262)
				Float tmp277 = (tmp275 * tmp276);		HX_STACK_VAR(tmp277,"tmp277");
				HX_STACK_LINE(262)
				Float tmp278 = (n12 * n24);		HX_STACK_VAR(tmp278,"tmp278");
				HX_STACK_LINE(262)
				Float tmp279 = n31;		HX_STACK_VAR(tmp279,"tmp279");
				HX_STACK_LINE(262)
				Float tmp280 = (tmp278 * tmp279);		HX_STACK_VAR(tmp280,"tmp280");
				HX_STACK_LINE(262)
				Float tmp281 = (tmp277 - tmp280);		HX_STACK_VAR(tmp281,"tmp281");
				HX_STACK_LINE(262)
				Float tmp282 = (n14 * n21);		HX_STACK_VAR(tmp282,"tmp282");
				HX_STACK_LINE(262)
				Float tmp283 = n32;		HX_STACK_VAR(tmp283,"tmp283");
				HX_STACK_LINE(262)
				Float tmp284 = (tmp282 * tmp283);		HX_STACK_VAR(tmp284,"tmp284");
				HX_STACK_LINE(262)
				Float tmp285 = (tmp281 - tmp284);		HX_STACK_VAR(tmp285,"tmp285");
				HX_STACK_LINE(262)
				Float tmp286 = (n11 * n24);		HX_STACK_VAR(tmp286,"tmp286");
				HX_STACK_LINE(262)
				Float tmp287 = n32;		HX_STACK_VAR(tmp287,"tmp287");
				HX_STACK_LINE(262)
				Float tmp288 = (tmp286 * tmp287);		HX_STACK_VAR(tmp288,"tmp288");
				HX_STACK_LINE(262)
				Float tmp289 = (tmp285 + tmp288);		HX_STACK_VAR(tmp289,"tmp289");
				HX_STACK_LINE(262)
				Float tmp290 = (n12 * n21);		HX_STACK_VAR(tmp290,"tmp290");
				HX_STACK_LINE(262)
				Float tmp291 = n34;		HX_STACK_VAR(tmp291,"tmp291");
				HX_STACK_LINE(262)
				Float tmp292 = (tmp290 * tmp291);		HX_STACK_VAR(tmp292,"tmp292");
				HX_STACK_LINE(262)
				Float tmp293 = (tmp289 + tmp292);		HX_STACK_VAR(tmp293,"tmp293");
				HX_STACK_LINE(262)
				Float tmp294 = (n11 * n22);		HX_STACK_VAR(tmp294,"tmp294");
				HX_STACK_LINE(262)
				Float tmp295 = n34;		HX_STACK_VAR(tmp295,"tmp295");
				HX_STACK_LINE(262)
				Float tmp296 = (tmp294 * tmp295);		HX_STACK_VAR(tmp296,"tmp296");
				HX_STACK_LINE(262)
				Float tmp297 = (tmp293 - tmp296);		HX_STACK_VAR(tmp297,"tmp297");
				HX_STACK_LINE(262)
				te[(int)14] = tmp297;
				HX_STACK_LINE(262)
				Float tmp298 = (n23 * n32);		HX_STACK_VAR(tmp298,"tmp298");
				HX_STACK_LINE(262)
				Float tmp299 = n41;		HX_STACK_VAR(tmp299,"tmp299");
				HX_STACK_LINE(262)
				Float tmp300 = (tmp298 * tmp299);		HX_STACK_VAR(tmp300,"tmp300");
				HX_STACK_LINE(262)
				Float tmp301 = (n22 * n33);		HX_STACK_VAR(tmp301,"tmp301");
				HX_STACK_LINE(262)
				Float tmp302 = n41;		HX_STACK_VAR(tmp302,"tmp302");
				HX_STACK_LINE(262)
				Float tmp303 = (tmp301 * tmp302);		HX_STACK_VAR(tmp303,"tmp303");
				HX_STACK_LINE(262)
				Float tmp304 = (tmp300 - tmp303);		HX_STACK_VAR(tmp304,"tmp304");
				HX_STACK_LINE(262)
				Float tmp305 = (n23 * n31);		HX_STACK_VAR(tmp305,"tmp305");
				HX_STACK_LINE(262)
				Float tmp306 = n42;		HX_STACK_VAR(tmp306,"tmp306");
				HX_STACK_LINE(262)
				Float tmp307 = (tmp305 * tmp306);		HX_STACK_VAR(tmp307,"tmp307");
				HX_STACK_LINE(262)
				Float tmp308 = (tmp304 - tmp307);		HX_STACK_VAR(tmp308,"tmp308");
				HX_STACK_LINE(262)
				Float tmp309 = (n21 * n33);		HX_STACK_VAR(tmp309,"tmp309");
				HX_STACK_LINE(262)
				Float tmp310 = n42;		HX_STACK_VAR(tmp310,"tmp310");
				HX_STACK_LINE(262)
				Float tmp311 = (tmp309 * tmp310);		HX_STACK_VAR(tmp311,"tmp311");
				HX_STACK_LINE(262)
				Float tmp312 = (tmp308 + tmp311);		HX_STACK_VAR(tmp312,"tmp312");
				HX_STACK_LINE(262)
				Float tmp313 = (n22 * n31);		HX_STACK_VAR(tmp313,"tmp313");
				HX_STACK_LINE(262)
				Float tmp314 = n43;		HX_STACK_VAR(tmp314,"tmp314");
				HX_STACK_LINE(262)
				Float tmp315 = (tmp313 * tmp314);		HX_STACK_VAR(tmp315,"tmp315");
				HX_STACK_LINE(262)
				Float tmp316 = (tmp312 + tmp315);		HX_STACK_VAR(tmp316,"tmp316");
				HX_STACK_LINE(262)
				Float tmp317 = (n21 * n32);		HX_STACK_VAR(tmp317,"tmp317");
				HX_STACK_LINE(262)
				Float tmp318 = n43;		HX_STACK_VAR(tmp318,"tmp318");
				HX_STACK_LINE(262)
				Float tmp319 = (tmp317 * tmp318);		HX_STACK_VAR(tmp319,"tmp319");
				HX_STACK_LINE(262)
				Float tmp320 = (tmp316 - tmp319);		HX_STACK_VAR(tmp320,"tmp320");
				HX_STACK_LINE(262)
				te[(int)3] = tmp320;
				HX_STACK_LINE(262)
				Float tmp321 = (n12 * n33);		HX_STACK_VAR(tmp321,"tmp321");
				HX_STACK_LINE(262)
				Float tmp322 = n41;		HX_STACK_VAR(tmp322,"tmp322");
				HX_STACK_LINE(262)
				Float tmp323 = (tmp321 * tmp322);		HX_STACK_VAR(tmp323,"tmp323");
				HX_STACK_LINE(262)
				Float tmp324 = (n13 * n32);		HX_STACK_VAR(tmp324,"tmp324");
				HX_STACK_LINE(262)
				Float tmp325 = n41;		HX_STACK_VAR(tmp325,"tmp325");
				HX_STACK_LINE(262)
				Float tmp326 = (tmp324 * tmp325);		HX_STACK_VAR(tmp326,"tmp326");
				HX_STACK_LINE(262)
				Float tmp327 = (tmp323 - tmp326);		HX_STACK_VAR(tmp327,"tmp327");
				HX_STACK_LINE(262)
				Float tmp328 = (n13 * n31);		HX_STACK_VAR(tmp328,"tmp328");
				HX_STACK_LINE(262)
				Float tmp329 = n42;		HX_STACK_VAR(tmp329,"tmp329");
				HX_STACK_LINE(262)
				Float tmp330 = (tmp328 * tmp329);		HX_STACK_VAR(tmp330,"tmp330");
				HX_STACK_LINE(262)
				Float tmp331 = (tmp327 + tmp330);		HX_STACK_VAR(tmp331,"tmp331");
				HX_STACK_LINE(262)
				Float tmp332 = (n11 * n33);		HX_STACK_VAR(tmp332,"tmp332");
				HX_STACK_LINE(262)
				Float tmp333 = n42;		HX_STACK_VAR(tmp333,"tmp333");
				HX_STACK_LINE(262)
				Float tmp334 = (tmp332 * tmp333);		HX_STACK_VAR(tmp334,"tmp334");
				HX_STACK_LINE(262)
				Float tmp335 = (tmp331 - tmp334);		HX_STACK_VAR(tmp335,"tmp335");
				HX_STACK_LINE(262)
				Float tmp336 = (n12 * n31);		HX_STACK_VAR(tmp336,"tmp336");
				HX_STACK_LINE(262)
				Float tmp337 = n43;		HX_STACK_VAR(tmp337,"tmp337");
				HX_STACK_LINE(262)
				Float tmp338 = (tmp336 * tmp337);		HX_STACK_VAR(tmp338,"tmp338");
				HX_STACK_LINE(262)
				Float tmp339 = (tmp335 - tmp338);		HX_STACK_VAR(tmp339,"tmp339");
				HX_STACK_LINE(262)
				Float tmp340 = (n11 * n32);		HX_STACK_VAR(tmp340,"tmp340");
				HX_STACK_LINE(262)
				Float tmp341 = n43;		HX_STACK_VAR(tmp341,"tmp341");
				HX_STACK_LINE(262)
				Float tmp342 = (tmp340 * tmp341);		HX_STACK_VAR(tmp342,"tmp342");
				HX_STACK_LINE(262)
				Float tmp343 = (tmp339 + tmp342);		HX_STACK_VAR(tmp343,"tmp343");
				HX_STACK_LINE(262)
				te[(int)7] = tmp343;
				HX_STACK_LINE(262)
				Float tmp344 = (n13 * n22);		HX_STACK_VAR(tmp344,"tmp344");
				HX_STACK_LINE(262)
				Float tmp345 = n41;		HX_STACK_VAR(tmp345,"tmp345");
				HX_STACK_LINE(262)
				Float tmp346 = (tmp344 * tmp345);		HX_STACK_VAR(tmp346,"tmp346");
				HX_STACK_LINE(262)
				Float tmp347 = (n12 * n23);		HX_STACK_VAR(tmp347,"tmp347");
				HX_STACK_LINE(262)
				Float tmp348 = n41;		HX_STACK_VAR(tmp348,"tmp348");
				HX_STACK_LINE(262)
				Float tmp349 = (tmp347 * tmp348);		HX_STACK_VAR(tmp349,"tmp349");
				HX_STACK_LINE(262)
				Float tmp350 = (tmp346 - tmp349);		HX_STACK_VAR(tmp350,"tmp350");
				HX_STACK_LINE(262)
				Float tmp351 = (n13 * n21);		HX_STACK_VAR(tmp351,"tmp351");
				HX_STACK_LINE(262)
				Float tmp352 = n42;		HX_STACK_VAR(tmp352,"tmp352");
				HX_STACK_LINE(262)
				Float tmp353 = (tmp351 * tmp352);		HX_STACK_VAR(tmp353,"tmp353");
				HX_STACK_LINE(262)
				Float tmp354 = (tmp350 - tmp353);		HX_STACK_VAR(tmp354,"tmp354");
				HX_STACK_LINE(262)
				Float tmp355 = (n11 * n23);		HX_STACK_VAR(tmp355,"tmp355");
				HX_STACK_LINE(262)
				Float tmp356 = n42;		HX_STACK_VAR(tmp356,"tmp356");
				HX_STACK_LINE(262)
				Float tmp357 = (tmp355 * tmp356);		HX_STACK_VAR(tmp357,"tmp357");
				HX_STACK_LINE(262)
				Float tmp358 = (tmp354 + tmp357);		HX_STACK_VAR(tmp358,"tmp358");
				HX_STACK_LINE(262)
				Float tmp359 = (n12 * n21);		HX_STACK_VAR(tmp359,"tmp359");
				HX_STACK_LINE(262)
				Float tmp360 = n43;		HX_STACK_VAR(tmp360,"tmp360");
				HX_STACK_LINE(262)
				Float tmp361 = (tmp359 * tmp360);		HX_STACK_VAR(tmp361,"tmp361");
				HX_STACK_LINE(262)
				Float tmp362 = (tmp358 + tmp361);		HX_STACK_VAR(tmp362,"tmp362");
				HX_STACK_LINE(262)
				Float tmp363 = (n11 * n22);		HX_STACK_VAR(tmp363,"tmp363");
				HX_STACK_LINE(262)
				Float tmp364 = n43;		HX_STACK_VAR(tmp364,"tmp364");
				HX_STACK_LINE(262)
				Float tmp365 = (tmp363 * tmp364);		HX_STACK_VAR(tmp365,"tmp365");
				HX_STACK_LINE(262)
				Float tmp366 = (tmp362 - tmp365);		HX_STACK_VAR(tmp366,"tmp366");
				HX_STACK_LINE(262)
				te[(int)11] = tmp366;
				HX_STACK_LINE(262)
				Float tmp367 = (n12 * n23);		HX_STACK_VAR(tmp367,"tmp367");
				HX_STACK_LINE(262)
				Float tmp368 = n31;		HX_STACK_VAR(tmp368,"tmp368");
				HX_STACK_LINE(262)
				Float tmp369 = (tmp367 * tmp368);		HX_STACK_VAR(tmp369,"tmp369");
				HX_STACK_LINE(262)
				Float tmp370 = (n13 * n22);		HX_STACK_VAR(tmp370,"tmp370");
				HX_STACK_LINE(262)
				Float tmp371 = n31;		HX_STACK_VAR(tmp371,"tmp371");
				HX_STACK_LINE(262)
				Float tmp372 = (tmp370 * tmp371);		HX_STACK_VAR(tmp372,"tmp372");
				HX_STACK_LINE(262)
				Float tmp373 = (tmp369 - tmp372);		HX_STACK_VAR(tmp373,"tmp373");
				HX_STACK_LINE(262)
				Float tmp374 = (n13 * n21);		HX_STACK_VAR(tmp374,"tmp374");
				HX_STACK_LINE(262)
				Float tmp375 = n32;		HX_STACK_VAR(tmp375,"tmp375");
				HX_STACK_LINE(262)
				Float tmp376 = (tmp374 * tmp375);		HX_STACK_VAR(tmp376,"tmp376");
				HX_STACK_LINE(262)
				Float tmp377 = (tmp373 + tmp376);		HX_STACK_VAR(tmp377,"tmp377");
				HX_STACK_LINE(262)
				Float tmp378 = (n11 * n23);		HX_STACK_VAR(tmp378,"tmp378");
				HX_STACK_LINE(262)
				Float tmp379 = n32;		HX_STACK_VAR(tmp379,"tmp379");
				HX_STACK_LINE(262)
				Float tmp380 = (tmp378 * tmp379);		HX_STACK_VAR(tmp380,"tmp380");
				HX_STACK_LINE(262)
				Float tmp381 = (tmp377 - tmp380);		HX_STACK_VAR(tmp381,"tmp381");
				HX_STACK_LINE(262)
				Float tmp382 = (n12 * n21);		HX_STACK_VAR(tmp382,"tmp382");
				HX_STACK_LINE(262)
				Float tmp383 = n33;		HX_STACK_VAR(tmp383,"tmp383");
				HX_STACK_LINE(262)
				Float tmp384 = (tmp382 * tmp383);		HX_STACK_VAR(tmp384,"tmp384");
				HX_STACK_LINE(262)
				Float tmp385 = (tmp381 - tmp384);		HX_STACK_VAR(tmp385,"tmp385");
				HX_STACK_LINE(262)
				Float tmp386 = (n11 * n22);		HX_STACK_VAR(tmp386,"tmp386");
				HX_STACK_LINE(262)
				Float tmp387 = n33;		HX_STACK_VAR(tmp387,"tmp387");
				HX_STACK_LINE(262)
				Float tmp388 = (tmp386 * tmp387);		HX_STACK_VAR(tmp388,"tmp388");
				HX_STACK_LINE(262)
				Float tmp389 = (tmp385 + tmp388);		HX_STACK_VAR(tmp389,"tmp389");
				HX_STACK_LINE(262)
				te[(int)15] = tmp389;
				HX_STACK_LINE(262)
				Float tmp390 = me->__get((int)0);		HX_STACK_VAR(tmp390,"tmp390");
				HX_STACK_LINE(262)
				Float tmp391 = te->__get((int)0);		HX_STACK_VAR(tmp391,"tmp391");
				HX_STACK_LINE(262)
				Float tmp392 = (tmp390 * tmp391);		HX_STACK_VAR(tmp392,"tmp392");
				HX_STACK_LINE(262)
				Float tmp393 = me->__get((int)1);		HX_STACK_VAR(tmp393,"tmp393");
				HX_STACK_LINE(262)
				Float tmp394 = te->__get((int)4);		HX_STACK_VAR(tmp394,"tmp394");
				HX_STACK_LINE(262)
				Float tmp395 = (tmp393 * tmp394);		HX_STACK_VAR(tmp395,"tmp395");
				HX_STACK_LINE(262)
				Float tmp396 = (tmp392 + tmp395);		HX_STACK_VAR(tmp396,"tmp396");
				HX_STACK_LINE(262)
				Float tmp397 = me->__get((int)2);		HX_STACK_VAR(tmp397,"tmp397");
				HX_STACK_LINE(262)
				Float tmp398 = te->__get((int)8);		HX_STACK_VAR(tmp398,"tmp398");
				HX_STACK_LINE(262)
				Float tmp399 = (tmp397 * tmp398);		HX_STACK_VAR(tmp399,"tmp399");
				HX_STACK_LINE(262)
				Float tmp400 = (tmp396 + tmp399);		HX_STACK_VAR(tmp400,"tmp400");
				HX_STACK_LINE(262)
				Float tmp401 = me->__get((int)3);		HX_STACK_VAR(tmp401,"tmp401");
				HX_STACK_LINE(262)
				Float tmp402 = te->__get((int)12);		HX_STACK_VAR(tmp402,"tmp402");
				HX_STACK_LINE(262)
				Float tmp403 = (tmp401 * tmp402);		HX_STACK_VAR(tmp403,"tmp403");
				HX_STACK_LINE(262)
				Float tmp404 = (tmp400 + tmp403);		HX_STACK_VAR(tmp404,"tmp404");
				HX_STACK_LINE(262)
				Float det = tmp404;		HX_STACK_VAR(det,"det");
				HX_STACK_LINE(262)
				bool tmp405 = (det == (int)0);		HX_STACK_VAR(tmp405,"tmp405");
				HX_STACK_LINE(262)
				if ((tmp405)){
					HX_STACK_LINE(262)
					Dynamic tmp406 = hx::SourceInfo(HX_HCSTRING("Matrix.hx","\xfd","\x8a","\xaa","\x4f"),696,HX_HCSTRING("phoenix.Matrix","\x60","\x61","\xa9","\x39"),HX_HCSTRING("getInverse","\xba","\xd1","\x52","\x8d"));		HX_STACK_VAR(tmp406,"tmp406");
					HX_STACK_LINE(262)
					::haxe::Log_obj::trace(HX_HCSTRING("Matrix.getInverse: cant invert matrix, determinant is 0","\xf5","\x2d","\x16","\x59"),tmp406);
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						{
							HX_STACK_LINE(262)
							Array< Float > e = _this1->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(262)
							e[(int)0] = (int)1;
							HX_STACK_LINE(262)
							e[(int)4] = (int)0;
							HX_STACK_LINE(262)
							e[(int)8] = (int)0;
							HX_STACK_LINE(262)
							e[(int)12] = (int)0;
							HX_STACK_LINE(262)
							e[(int)1] = (int)0;
							HX_STACK_LINE(262)
							e[(int)5] = (int)1;
							HX_STACK_LINE(262)
							e[(int)9] = (int)0;
							HX_STACK_LINE(262)
							e[(int)13] = (int)0;
							HX_STACK_LINE(262)
							e[(int)2] = (int)0;
							HX_STACK_LINE(262)
							e[(int)6] = (int)0;
							HX_STACK_LINE(262)
							e[(int)10] = (int)1;
							HX_STACK_LINE(262)
							e[(int)14] = (int)0;
							HX_STACK_LINE(262)
							e[(int)3] = (int)0;
							HX_STACK_LINE(262)
							e[(int)7] = (int)0;
							HX_STACK_LINE(262)
							e[(int)11] = (int)0;
							HX_STACK_LINE(262)
							e[(int)15] = (int)1;
							HX_STACK_LINE(262)
							_this1;
						}
						HX_STACK_LINE(262)
						_this1;
					}
					HX_STACK_LINE(262)
					tmp3 = _this1;
				}
				else{
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						Float tmp406 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp406,"tmp406");
						HX_STACK_LINE(262)
						Float _s = tmp406;		HX_STACK_VAR(_s,"_s");
						HX_STACK_LINE(262)
						Array< Float > te1 = _this1->elements;		HX_STACK_VAR(te1,"te1");
						HX_STACK_LINE(262)
						Float tmp407 = _s;		HX_STACK_VAR(tmp407,"tmp407");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)0],tmp407);
						HX_STACK_LINE(262)
						Float tmp408 = _s;		HX_STACK_VAR(tmp408,"tmp408");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)4],tmp408);
						HX_STACK_LINE(262)
						Float tmp409 = _s;		HX_STACK_VAR(tmp409,"tmp409");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)8],tmp409);
						HX_STACK_LINE(262)
						Float tmp410 = _s;		HX_STACK_VAR(tmp410,"tmp410");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)12],tmp410);
						HX_STACK_LINE(262)
						Float tmp411 = _s;		HX_STACK_VAR(tmp411,"tmp411");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)1],tmp411);
						HX_STACK_LINE(262)
						Float tmp412 = _s;		HX_STACK_VAR(tmp412,"tmp412");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)5],tmp412);
						HX_STACK_LINE(262)
						Float tmp413 = _s;		HX_STACK_VAR(tmp413,"tmp413");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)9],tmp413);
						HX_STACK_LINE(262)
						Float tmp414 = _s;		HX_STACK_VAR(tmp414,"tmp414");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)13],tmp414);
						HX_STACK_LINE(262)
						Float tmp415 = _s;		HX_STACK_VAR(tmp415,"tmp415");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)2],tmp415);
						HX_STACK_LINE(262)
						Float tmp416 = _s;		HX_STACK_VAR(tmp416,"tmp416");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)6],tmp416);
						HX_STACK_LINE(262)
						Float tmp417 = _s;		HX_STACK_VAR(tmp417,"tmp417");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)10],tmp417);
						HX_STACK_LINE(262)
						Float tmp418 = _s;		HX_STACK_VAR(tmp418,"tmp418");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)14],tmp418);
						HX_STACK_LINE(262)
						Float tmp419 = _s;		HX_STACK_VAR(tmp419,"tmp419");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)3],tmp419);
						HX_STACK_LINE(262)
						Float tmp420 = _s;		HX_STACK_VAR(tmp420,"tmp420");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)7],tmp420);
						HX_STACK_LINE(262)
						Float tmp421 = _s;		HX_STACK_VAR(tmp421,"tmp421");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)11],tmp421);
						HX_STACK_LINE(262)
						Float tmp422 = _s;		HX_STACK_VAR(tmp422,"tmp422");
						HX_STACK_LINE(262)
						hx::MultEq(te1[(int)15],tmp422);
						HX_STACK_LINE(262)
						_this1;
					}
					HX_STACK_LINE(262)
					tmp3 = _this1;
				}
			}
		}
		HX_STACK_LINE(262)
		this->view_matrix_inverse = tmp3;
		HX_STACK_LINE(263)
		::snow::api::buffers::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			::phoenix::Matrix tmp5 = this->view_matrix_inverse;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(263)
			::phoenix::Matrix _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(263)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(263)
			while((true)){
				HX_STACK_LINE(263)
				bool tmp6 = (i < (int)16);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(263)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(263)
				if ((tmp7)){
					HX_STACK_LINE(263)
					break;
				}
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					::snow::api::buffers::ArrayBufferView this1 = _this->_float32array;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(263)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),_this->elements->__get(i));
				}
				HX_STACK_LINE(263)
				++(i);
			}
			HX_STACK_LINE(263)
			tmp4 = _this->_float32array;
		}
		HX_STACK_LINE(263)
		this->view_inverse_arr = tmp4;
		HX_STACK_LINE(265)
		this->transform_dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,update_view_matrix,(void))

Void Camera_obj::update_projection_matrix( ){
{
		HX_STACK_FRAME("phoenix.Camera","update_projection_matrix",0x7401e825,"phoenix.Camera.update_projection_matrix","phoenix/Camera.hx",269,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		bool tmp = this->projection_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		if ((tmp1)){
			HX_STACK_LINE(272)
			return null();
		}
		HX_STACK_LINE(275)
		{
			HX_STACK_LINE(275)
			::phoenix::ProjectionType tmp2 = this->projection;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(275)
			::phoenix::ProjectionType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(275)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(278)
					::phoenix::Matrix tmp3 = this->projection_matrix;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(278)
					::phoenix::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(278)
					Float tmp4 = this->aspect;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(278)
					Float _aspect = tmp4;		HX_STACK_VAR(_aspect,"_aspect");
					HX_STACK_LINE(278)
					Float tmp5 = this->near;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(278)
					Float _near = tmp5;		HX_STACK_VAR(_near,"_near");
					HX_STACK_LINE(278)
					Float tmp6 = this->far;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(278)
					Float _far = tmp6;		HX_STACK_VAR(_far,"_far");
					HX_STACK_LINE(278)
					Float tmp7 = _near;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(278)
					Float tmp8 = this->fov_y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(278)
					Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(278)
					Float tmp10 = (tmp9 * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(278)
					Float tmp11 = ::Math_obj::tan(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(278)
					Float tmp12 = (tmp7 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(278)
					Float ymax = tmp12;		HX_STACK_VAR(ymax,"ymax");
					HX_STACK_LINE(278)
					Float tmp13 = ymax;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(278)
					Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(278)
					Float ymin = tmp14;		HX_STACK_VAR(ymin,"ymin");
					HX_STACK_LINE(278)
					Float tmp15 = (ymin * _aspect);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(278)
					Float xmin = tmp15;		HX_STACK_VAR(xmin,"xmin");
					HX_STACK_LINE(278)
					Float tmp16 = (ymax * _aspect);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(278)
					Float xmax = tmp16;		HX_STACK_VAR(xmax,"xmax");
					HX_STACK_LINE(278)
					{
						HX_STACK_LINE(278)
						Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
						HX_STACK_LINE(278)
						Float tmp17 = ((int)2 * _near);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(278)
						Float tmp18 = (xmax - xmin);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(278)
						Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(278)
						Float tx = tmp19;		HX_STACK_VAR(tx,"tx");
						HX_STACK_LINE(278)
						Float tmp20 = ((int)2 * _near);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(278)
						Float tmp21 = (ymax - ymin);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(278)
						Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(278)
						Float ty = tmp22;		HX_STACK_VAR(ty,"ty");
						HX_STACK_LINE(278)
						Float tmp23 = (xmax + xmin);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(278)
						Float tmp24 = (xmax - xmin);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(278)
						Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(278)
						Float a = tmp25;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(278)
						Float tmp26 = (ymax + ymin);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(278)
						Float tmp27 = (ymax - ymin);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(278)
						Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(278)
						Float b = tmp28;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(278)
						Float tmp29 = (_far + _near);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(278)
						Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(278)
						Float tmp31 = (_far - _near);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(278)
						Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(278)
						Float c = tmp32;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(278)
						int tmp33 = (int)-2;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(278)
						Float tmp34 = _far;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(278)
						Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(278)
						Float tmp36 = _near;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(278)
						Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(278)
						Float tmp38 = (_far - _near);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(278)
						Float tmp39 = (Float(tmp37) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(278)
						Float d = tmp39;		HX_STACK_VAR(d,"d");
						HX_STACK_LINE(278)
						Float tmp40 = tx;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(278)
						te[(int)0] = tmp40;
						HX_STACK_LINE(278)
						te[(int)4] = (int)0;
						HX_STACK_LINE(278)
						Float tmp41 = a;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(278)
						te[(int)8] = tmp41;
						HX_STACK_LINE(278)
						te[(int)12] = (int)0;
						HX_STACK_LINE(278)
						te[(int)1] = (int)0;
						HX_STACK_LINE(278)
						Float tmp42 = ty;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(278)
						te[(int)5] = tmp42;
						HX_STACK_LINE(278)
						Float tmp43 = b;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(278)
						te[(int)9] = tmp43;
						HX_STACK_LINE(278)
						te[(int)13] = (int)0;
						HX_STACK_LINE(278)
						te[(int)2] = (int)0;
						HX_STACK_LINE(278)
						te[(int)6] = (int)0;
						HX_STACK_LINE(278)
						Float tmp44 = c;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(278)
						te[(int)10] = tmp44;
						HX_STACK_LINE(278)
						Float tmp45 = d;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(278)
						te[(int)14] = tmp45;
						HX_STACK_LINE(278)
						te[(int)3] = (int)0;
						HX_STACK_LINE(278)
						te[(int)7] = (int)0;
						HX_STACK_LINE(278)
						te[(int)11] = (int)-1;
						HX_STACK_LINE(278)
						te[(int)15] = (int)0;
						HX_STACK_LINE(278)
						_this;
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(280)
					::phoenix::Matrix tmp3 = this->projection_matrix;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(280)
					::phoenix::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(280)
					::phoenix::Rectangle tmp4 = this->get_viewport();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(280)
					Float _right = tmp4->w;		HX_STACK_VAR(_right,"_right");
					HX_STACK_LINE(280)
					::phoenix::Rectangle tmp5 = this->get_viewport();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(280)
					Float _bottom = tmp5->h;		HX_STACK_VAR(_bottom,"_bottom");
					HX_STACK_LINE(280)
					Float tmp6 = this->near;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(280)
					Float _near = tmp6;		HX_STACK_VAR(_near,"_near");
					HX_STACK_LINE(280)
					Float tmp7 = this->far;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(280)
					Float _far = tmp7;		HX_STACK_VAR(_far,"_far");
					HX_STACK_LINE(280)
					Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
					HX_STACK_LINE(280)
					Float tmp8 = _right;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(280)
					Float w = tmp8;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(280)
					Float tmp9 = ((int)0 - _bottom);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(280)
					Float h = tmp9;		HX_STACK_VAR(h,"h");
					HX_STACK_LINE(280)
					Float tmp10 = (_far - _near);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(280)
					Float p = tmp10;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(280)
					Float tmp11 = _right;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(280)
					Float tmp12 = w;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(280)
					Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(280)
					Float tx = tmp13;		HX_STACK_VAR(tx,"tx");
					HX_STACK_LINE(280)
					Float tmp14 = _bottom;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(280)
					Float tmp15 = h;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(280)
					Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(280)
					Float ty = tmp16;		HX_STACK_VAR(ty,"ty");
					HX_STACK_LINE(280)
					Float tmp17 = (_far + _near);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(280)
					Float tmp18 = p;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(280)
					Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(280)
					Float tz = tmp19;		HX_STACK_VAR(tz,"tz");
					HX_STACK_LINE(280)
					Float tmp20 = (Float((int)2) / Float(w));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(280)
					te[(int)0] = tmp20;
					HX_STACK_LINE(280)
					te[(int)4] = (int)0;
					HX_STACK_LINE(280)
					te[(int)8] = (int)0;
					HX_STACK_LINE(280)
					Float tmp21 = tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(280)
					Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(280)
					te[(int)12] = tmp22;
					HX_STACK_LINE(280)
					te[(int)1] = (int)0;
					HX_STACK_LINE(280)
					Float tmp23 = (Float((int)2) / Float(h));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(280)
					te[(int)5] = tmp23;
					HX_STACK_LINE(280)
					te[(int)9] = (int)0;
					HX_STACK_LINE(280)
					Float tmp24 = ty;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(280)
					Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(280)
					te[(int)13] = tmp25;
					HX_STACK_LINE(280)
					te[(int)2] = (int)0;
					HX_STACK_LINE(280)
					te[(int)6] = (int)0;
					HX_STACK_LINE(280)
					int tmp26 = (int)-2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(280)
					Float tmp27 = p;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(280)
					Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(280)
					te[(int)10] = tmp28;
					HX_STACK_LINE(280)
					Float tmp29 = tz;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(280)
					Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(280)
					te[(int)14] = tmp30;
					HX_STACK_LINE(280)
					te[(int)3] = (int)0;
					HX_STACK_LINE(280)
					te[(int)7] = (int)0;
					HX_STACK_LINE(280)
					te[(int)11] = (int)0;
					HX_STACK_LINE(280)
					te[(int)15] = (int)1;
					HX_STACK_LINE(280)
					_this;
				}
				;break;
				case (int)2: {
				}
				;break;
			}
		}
		HX_STACK_LINE(285)
		::snow::api::buffers::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			::phoenix::Matrix tmp3 = this->projection_matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(285)
			::phoenix::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(285)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				bool tmp4 = (i < (int)16);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(285)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(285)
				if ((tmp5)){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(285)
				{
					HX_STACK_LINE(285)
					::snow::api::buffers::ArrayBufferView this1 = _this->_float32array;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(285)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),_this->elements->__get(i));
				}
				HX_STACK_LINE(285)
				++(i);
			}
			HX_STACK_LINE(285)
			tmp2 = _this->_float32array;
		}
		HX_STACK_LINE(285)
		this->proj_arr = tmp2;
		HX_STACK_LINE(287)
		this->projection_dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,update_projection_matrix,(void))

Void Camera_obj::apply_state( int state,bool value){
{
		HX_STACK_FRAME("phoenix.Camera","apply_state",0xdb71c396,"phoenix.Camera.apply_state","phoenix/Camera.hx",295,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(297)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		if ((tmp)){
			HX_STACK_LINE(298)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(298)
			int tmp2 = state;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(298)
			tmp1->state->enable(tmp2);
		}
		else{
			HX_STACK_LINE(300)
			::phoenix::Renderer tmp1 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(300)
			int tmp2 = state;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			tmp1->state->disable(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,apply_state,(void))

Void Camera_obj::apply_default_camera_options( ){
{
		HX_STACK_FRAME("phoenix.Camera","apply_default_camera_options",0xf72e1e5d,"phoenix.Camera.apply_default_camera_options","phoenix/Camera.hx",307,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_LINE(307)
		::phoenix::ProjectionType tmp = this->projection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		::phoenix::ProjectionType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(311)
				Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(311)
				tmp1->__FieldRef(HX_HCSTRING("cull_backfaces","\xa2","\xe1","\x06","\xe5")) = false;
				HX_STACK_LINE(312)
				Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(312)
				tmp2->__FieldRef(HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9")) = false;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(318)
				Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(318)
				tmp1->__FieldRef(HX_HCSTRING("cull_backfaces","\xa2","\xe1","\x06","\xe5")) = true;
				HX_STACK_LINE(319)
				Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(319)
				tmp2->__FieldRef(HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9")) = true;
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,apply_default_camera_options,(void))

Dynamic Camera_obj::default_camera_options( ){
	HX_STACK_FRAME("phoenix.Camera","default_camera_options",0x036c4aec,"phoenix.Camera.default_camera_options","phoenix/Camera.hx",329,0x1fcabb59)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Camera.hx",331,0x1fcabb59)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4") , ::phoenix::ProjectionType_obj::ortho,false);
				__result->Add(HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9") , false,false);
				__result->Add(HX_HCSTRING("cull_backfaces","\xa2","\xe1","\x06","\xe5") , false,false);
				__result->Add(HX_HCSTRING("near","\xe8","\x70","\x02","\x49") , ((Dynamic)((int)1000)),false);
				__result->Add(HX_HCSTRING("far","\xd7","\xba","\x4d","\x00") , ((Dynamic)((int)-1000)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(331)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,default_camera_options,return )

::phoenix::Vector Camera_obj::ortho_screen_to_world( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","ortho_screen_to_world",0x90978b50,"phoenix.Camera.ortho_screen_to_world","phoenix/Camera.hx",345,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(347)
	this->update_view_matrix();
	HX_STACK_LINE(349)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(349)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(_vector->x,_vector->y,_vector->z,_vector->w);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(349)
		Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(349)
		Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(349)
		Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(349)
		::phoenix::Matrix tmp2 = this->view_matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(349)
		Array< Float > e = tmp2->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			Float tmp3 = e->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(349)
			Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(349)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(349)
			Float tmp6 = e->__get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(349)
			Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(349)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(349)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(349)
			Float tmp10 = e->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(349)
			Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(349)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(349)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(349)
			Float tmp14 = e->__get((int)12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(349)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(349)
			Float _x1 = tmp15;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(349)
			Float tmp16 = e->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(349)
			Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(349)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(349)
			Float tmp19 = e->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(349)
			Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(349)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(349)
			Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(349)
			Float tmp23 = e->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(349)
			Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(349)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(349)
			Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(349)
			Float tmp27 = e->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(349)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(349)
			Float _y1 = tmp28;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(349)
			Float tmp29 = e->__get((int)2);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(349)
			Float tmp30 = _x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(349)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(349)
			Float tmp32 = e->__get((int)6);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(349)
			Float tmp33 = _y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(349)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(349)
			Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(349)
			Float tmp36 = e->__get((int)10);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(349)
			Float tmp37 = _z;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(349)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(349)
			Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(349)
			Float tmp40 = e->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(349)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(349)
			Float _z1 = tmp41;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(349)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(349)
			_this->ignore_listeners = true;
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(349)
				_this->x = _x1;
				HX_STACK_LINE(349)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(349)
				if ((tmp42)){
					HX_STACK_LINE(349)
					_this->x;
				}
				else{
					HX_STACK_LINE(349)
					bool tmp43 = (_this->listen_x != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(349)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(349)
					if ((tmp43)){
						HX_STACK_LINE(349)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(349)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(349)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(349)
						tmp44 = false;
					}
					HX_STACK_LINE(349)
					if ((tmp44)){
						HX_STACK_LINE(349)
						Float tmp45 = _x1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(349)
						_this->listen_x(tmp45);
					}
					HX_STACK_LINE(349)
					_this->x;
				}
			}
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(349)
				_this->y = _y1;
				HX_STACK_LINE(349)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(349)
				if ((tmp42)){
					HX_STACK_LINE(349)
					_this->y;
				}
				else{
					HX_STACK_LINE(349)
					bool tmp43 = (_this->listen_y != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(349)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(349)
					if ((tmp43)){
						HX_STACK_LINE(349)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(349)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(349)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(349)
						tmp44 = false;
					}
					HX_STACK_LINE(349)
					if ((tmp44)){
						HX_STACK_LINE(349)
						Float tmp45 = _y1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(349)
						_this->listen_y(tmp45);
					}
					HX_STACK_LINE(349)
					_this->y;
				}
			}
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(349)
				_this->z = _z1;
				HX_STACK_LINE(349)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(349)
				if ((tmp42)){
					HX_STACK_LINE(349)
					_this->z;
				}
				else{
					HX_STACK_LINE(349)
					bool tmp43 = (_this->listen_z != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(349)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(349)
					if ((tmp43)){
						HX_STACK_LINE(349)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(349)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(349)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(349)
						tmp44 = false;
					}
					HX_STACK_LINE(349)
					if ((tmp44)){
						HX_STACK_LINE(349)
						Float tmp45 = _z1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(349)
						_this->listen_z(tmp45);
					}
					HX_STACK_LINE(349)
					_this->z;
				}
			}
			HX_STACK_LINE(349)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(349)
			bool tmp42 = (_this->listen_x != null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(349)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(349)
			if ((tmp42)){
				HX_STACK_LINE(349)
				bool tmp44 = _this->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(349)
				bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(349)
				tmp43 = !(tmp45);
			}
			else{
				HX_STACK_LINE(349)
				tmp43 = false;
			}
			HX_STACK_LINE(349)
			if ((tmp43)){
				HX_STACK_LINE(349)
				Float tmp44 = _this->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(349)
				_this->listen_x(tmp44);
			}
			HX_STACK_LINE(349)
			bool tmp44 = (_this->listen_y != null());		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(349)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(349)
			if ((tmp44)){
				HX_STACK_LINE(349)
				bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(349)
				bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(349)
				tmp45 = !(tmp47);
			}
			else{
				HX_STACK_LINE(349)
				tmp45 = false;
			}
			HX_STACK_LINE(349)
			if ((tmp45)){
				HX_STACK_LINE(349)
				Float tmp46 = _this->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(349)
				_this->listen_y(tmp46);
			}
			HX_STACK_LINE(349)
			bool tmp46 = (_this->listen_z != null());		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(349)
			bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(349)
			if ((tmp46)){
				HX_STACK_LINE(349)
				bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(349)
				bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(349)
				tmp47 = !(tmp49);
			}
			else{
				HX_STACK_LINE(349)
				tmp47 = false;
			}
			HX_STACK_LINE(349)
			if ((tmp47)){
				HX_STACK_LINE(349)
				Float tmp48 = _this->z;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(349)
				_this->listen_z(tmp48);
			}
			HX_STACK_LINE(349)
			_this;
		}
		HX_STACK_LINE(349)
		tmp = _this;
	}
	HX_STACK_LINE(349)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,ortho_screen_to_world,return )

::phoenix::Vector Camera_obj::ortho_world_to_screen( ::phoenix::Vector _vector){
	HX_STACK_FRAME("phoenix.Camera","ortho_world_to_screen",0x1f31d512,"phoenix.Camera.ortho_world_to_screen","phoenix/Camera.hx",353,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_LINE(355)
	this->update_view_matrix();
	HX_STACK_LINE(357)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	{
		HX_STACK_LINE(357)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(_vector->x,_vector->y,_vector->z,_vector->w);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(357)
		Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(357)
		Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(357)
		Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(357)
		::phoenix::Matrix tmp2 = this->view_matrix_inverse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(357)
		Array< Float > e = tmp2->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(357)
		{
			HX_STACK_LINE(357)
			Float tmp3 = e->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(357)
			Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(357)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(357)
			Float tmp6 = e->__get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(357)
			Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(357)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(357)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(357)
			Float tmp10 = e->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(357)
			Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(357)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(357)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(357)
			Float tmp14 = e->__get((int)12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(357)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(357)
			Float _x1 = tmp15;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(357)
			Float tmp16 = e->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(357)
			Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(357)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(357)
			Float tmp19 = e->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(357)
			Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(357)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(357)
			Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(357)
			Float tmp23 = e->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(357)
			Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(357)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(357)
			Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(357)
			Float tmp27 = e->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(357)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(357)
			Float _y1 = tmp28;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(357)
			Float tmp29 = e->__get((int)2);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(357)
			Float tmp30 = _x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(357)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(357)
			Float tmp32 = e->__get((int)6);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(357)
			Float tmp33 = _y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(357)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(357)
			Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(357)
			Float tmp36 = e->__get((int)10);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(357)
			Float tmp37 = _z;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(357)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(357)
			Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(357)
			Float tmp40 = e->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(357)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(357)
			Float _z1 = tmp41;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(357)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(357)
			_this->ignore_listeners = true;
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				_this->x = _x1;
				HX_STACK_LINE(357)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(357)
				if ((tmp42)){
					HX_STACK_LINE(357)
					_this->x;
				}
				else{
					HX_STACK_LINE(357)
					bool tmp43 = (_this->listen_x != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(357)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(357)
					if ((tmp43)){
						HX_STACK_LINE(357)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(357)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(357)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(357)
						tmp44 = false;
					}
					HX_STACK_LINE(357)
					if ((tmp44)){
						HX_STACK_LINE(357)
						Float tmp45 = _x1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(357)
						_this->listen_x(tmp45);
					}
					HX_STACK_LINE(357)
					_this->x;
				}
			}
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				_this->y = _y1;
				HX_STACK_LINE(357)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(357)
				if ((tmp42)){
					HX_STACK_LINE(357)
					_this->y;
				}
				else{
					HX_STACK_LINE(357)
					bool tmp43 = (_this->listen_y != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(357)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(357)
					if ((tmp43)){
						HX_STACK_LINE(357)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(357)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(357)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(357)
						tmp44 = false;
					}
					HX_STACK_LINE(357)
					if ((tmp44)){
						HX_STACK_LINE(357)
						Float tmp45 = _y1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(357)
						_this->listen_y(tmp45);
					}
					HX_STACK_LINE(357)
					_this->y;
				}
			}
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				_this->z = _z1;
				HX_STACK_LINE(357)
				bool tmp42 = _this->_construct;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(357)
				if ((tmp42)){
					HX_STACK_LINE(357)
					_this->z;
				}
				else{
					HX_STACK_LINE(357)
					bool tmp43 = (_this->listen_z != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(357)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(357)
					if ((tmp43)){
						HX_STACK_LINE(357)
						bool tmp45 = _this->ignore_listeners;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(357)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(357)
						tmp44 = !(tmp46);
					}
					else{
						HX_STACK_LINE(357)
						tmp44 = false;
					}
					HX_STACK_LINE(357)
					if ((tmp44)){
						HX_STACK_LINE(357)
						Float tmp45 = _z1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(357)
						_this->listen_z(tmp45);
					}
					HX_STACK_LINE(357)
					_this->z;
				}
			}
			HX_STACK_LINE(357)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(357)
			bool tmp42 = (_this->listen_x != null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(357)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(357)
			if ((tmp42)){
				HX_STACK_LINE(357)
				bool tmp44 = _this->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(357)
				bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(357)
				tmp43 = !(tmp45);
			}
			else{
				HX_STACK_LINE(357)
				tmp43 = false;
			}
			HX_STACK_LINE(357)
			if ((tmp43)){
				HX_STACK_LINE(357)
				Float tmp44 = _this->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(357)
				_this->listen_x(tmp44);
			}
			HX_STACK_LINE(357)
			bool tmp44 = (_this->listen_y != null());		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(357)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(357)
			if ((tmp44)){
				HX_STACK_LINE(357)
				bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(357)
				bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(357)
				tmp45 = !(tmp47);
			}
			else{
				HX_STACK_LINE(357)
				tmp45 = false;
			}
			HX_STACK_LINE(357)
			if ((tmp45)){
				HX_STACK_LINE(357)
				Float tmp46 = _this->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(357)
				_this->listen_y(tmp46);
			}
			HX_STACK_LINE(357)
			bool tmp46 = (_this->listen_z != null());		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(357)
			bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(357)
			if ((tmp46)){
				HX_STACK_LINE(357)
				bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(357)
				bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(357)
				tmp47 = !(tmp49);
			}
			else{
				HX_STACK_LINE(357)
				tmp47 = false;
			}
			HX_STACK_LINE(357)
			if ((tmp47)){
				HX_STACK_LINE(357)
				Float tmp48 = _this->z;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(357)
				_this->listen_z(tmp48);
			}
			HX_STACK_LINE(357)
			_this;
		}
		HX_STACK_LINE(357)
		tmp = _this;
	}
	HX_STACK_LINE(357)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,ortho_world_to_screen,return )

::phoenix::Vector Camera_obj::persepective_world_to_screen( ::phoenix::Vector _vector,::phoenix::Rectangle _viewport){
	HX_STACK_FRAME("phoenix.Camera","persepective_world_to_screen",0x526987d1,"phoenix.Camera.persepective_world_to_screen","phoenix/Camera.hx",361,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vector,"_vector")
	HX_STACK_ARG(_viewport,"_viewport")
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(363)
		bool tmp = (_viewport == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		if ((tmp)){
			HX_STACK_LINE(363)
			::phoenix::Rectangle tmp1 = this->get_viewport();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(363)
			_viewport = tmp1;
		}
		HX_STACK_LINE(363)
		_viewport;
	}
	HX_STACK_LINE(365)
	::phoenix::Vector tmp = _vector;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(365)
	::phoenix::Vector tmp1 = this->project(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(365)
	::phoenix::Vector _projected = tmp1;		HX_STACK_VAR(_projected,"_projected");
	HX_STACK_LINE(367)
	Float tmp2 = (Float(_viewport->w) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(367)
	Float width_half = tmp2;		HX_STACK_VAR(width_half,"width_half");
	HX_STACK_LINE(368)
	Float tmp3 = (Float(_viewport->h) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(368)
	Float height_half = tmp3;		HX_STACK_VAR(height_half,"height_half");
	HX_STACK_LINE(371)
	Float tmp4 = (_projected->x * width_half);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(371)
	Float tmp5 = width_half;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(371)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(372)
	Float tmp7 = (_projected->y * height_half);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(372)
	Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(372)
	Float tmp9 = height_half;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(372)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(370)
	::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(tmp6,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(370)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,persepective_world_to_screen,return )

::phoenix::Vector Camera_obj::set_target( ::phoenix::Vector _target){
	HX_STACK_FRAME("phoenix.Camera","set_target",0x108f63f8,"phoenix.Camera.set_target","phoenix/Camera.hx",380,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_target,"_target")
	HX_STACK_LINE(382)
	bool tmp = (_target != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	if ((tmp)){
		HX_STACK_LINE(383)
		this->look_at_dirty = true;
	}
	HX_STACK_LINE(386)
	::phoenix::Vector tmp1 = this->target = _target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_target,return )

Float Camera_obj::set_fov( Float _fov){
	HX_STACK_FRAME("phoenix.Camera","set_fov",0x5b6f7806,"phoenix.Camera.set_fov","phoenix/Camera.hx",390,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fov,"_fov")
	HX_STACK_LINE(392)
	this->projection_dirty = true;
	HX_STACK_LINE(393)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	tmp->__FieldRef(HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00")) = _fov;
	HX_STACK_LINE(395)
	::phoenix::FOVType tmp1 = this->fov_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(395)
	bool tmp2 = (tmp1 == ::phoenix::FOVType_obj::horizontal);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(395)
	if ((tmp2)){
		HX_STACK_LINE(396)
		Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		Float tmp4 = (Float((int)180) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		Float tmp5 = _fov;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(396)
		Float tmp6 = ::Math_obj::PI;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(396)
		Float tmp7 = (Float(tmp6) / Float((int)180));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(396)
		Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(396)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(396)
		Float tmp10 = ::Math_obj::tan(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(396)
		Float tmp11 = this->aspect;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(396)
		Float tmp12 = (Float((int)1) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(396)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(396)
		Float tmp14 = ::Math_obj::atan(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(396)
		Float tmp15 = ((int)2 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(396)
		Float tmp16 = (tmp4 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(396)
		this->fov_y = tmp16;
	}
	else{
		HX_STACK_LINE(398)
		this->fov_y = _fov;
	}
	HX_STACK_LINE(401)
	Float tmp3 = this->fov = _fov;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(401)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_fov,return )

::phoenix::FOVType Camera_obj::set_fov_type( ::phoenix::FOVType _fov_type){
	HX_STACK_FRAME("phoenix.Camera","set_fov_type",0x0bbbc0d3,"phoenix.Camera.set_fov_type","phoenix/Camera.hx",405,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fov_type,"_fov_type")
	HX_STACK_LINE(406)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	tmp->__FieldRef(HX_HCSTRING("fov_type","\x6c","\x98","\x1e","\x00")) = _fov_type;
	HX_STACK_LINE(407)
	this->fov_type = _fov_type;
	HX_STACK_LINE(409)
	Float tmp1 = this->fov;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(409)
	this->set_fov(tmp1);
	HX_STACK_LINE(410)
	::phoenix::FOVType tmp2 = this->fov_type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(410)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_fov_type,return )

Float Camera_obj::set_aspect( Float _aspect){
	HX_STACK_FRAME("phoenix.Camera","set_aspect",0xd3aa067f,"phoenix.Camera.set_aspect","phoenix/Camera.hx",413,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_aspect,"_aspect")
	HX_STACK_LINE(415)
	this->projection_dirty = true;
	HX_STACK_LINE(416)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	tmp->__FieldRef(HX_HCSTRING("aspect","\xd8","\x95","\x07","\x4a")) = _aspect;
	HX_STACK_LINE(418)
	Float tmp1 = this->aspect = _aspect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_aspect,return )

Float Camera_obj::set_near( Float _near){
	HX_STACK_FRAME("phoenix.Camera","set_near",0xab5b99cf,"phoenix.Camera.set_near","phoenix/Camera.hx",422,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_near,"_near")
	HX_STACK_LINE(424)
	this->projection_dirty = true;
	HX_STACK_LINE(425)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(425)
	tmp->__FieldRef(HX_HCSTRING("near","\xe8","\x70","\x02","\x49")) = _near;
	HX_STACK_LINE(427)
	Float tmp1 = this->near = _near;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(427)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_near,return )

Float Camera_obj::set_far( Float _far){
	HX_STACK_FRAME("phoenix.Camera","set_far",0x5b6f6bd0,"phoenix.Camera.set_far","phoenix/Camera.hx",431,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_far,"_far")
	HX_STACK_LINE(433)
	this->projection_dirty = true;
	HX_STACK_LINE(434)
	Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	tmp->__FieldRef(HX_HCSTRING("far","\xd7","\xba","\x4d","\x00")) = _far;
	HX_STACK_LINE(436)
	Float tmp1 = this->far = _far;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(436)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_far,return )

Float Camera_obj::set_zoom( Float _z){
	HX_STACK_FRAME("phoenix.Camera","set_zoom",0xb351cbfa,"phoenix.Camera.set_zoom","phoenix/Camera.hx",442,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(445)
	Float _new_zoom = _z;		HX_STACK_VAR(_new_zoom,"_new_zoom");
	HX_STACK_LINE(449)
	Float tmp = _new_zoom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(449)
	Float tmp1 = this->minimum_zoom;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(449)
	if ((tmp2)){
		HX_STACK_LINE(450)
		Float tmp3 = this->minimum_zoom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(450)
		_new_zoom = tmp3;
	}
	HX_STACK_LINE(453)
	{
		HX_STACK_LINE(453)
		::phoenix::ProjectionType tmp3 = this->projection;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(453)
		::phoenix::ProjectionType _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(453)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					::phoenix::Transform tmp4 = this->transform;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(458)
					::phoenix::Vector tmp5 = tmp4->local->scale;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(458)
					::phoenix::Vector _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(458)
					Float tmp6 = (Float((int)1) / Float(_new_zoom));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(458)
					Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(458)
					_this->x = _x;
					HX_STACK_LINE(458)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(458)
					if ((tmp7)){
						HX_STACK_LINE(458)
						_this->x;
					}
					else{
						HX_STACK_LINE(458)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(458)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(458)
						if ((tmp8)){
							HX_STACK_LINE(458)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(458)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(458)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(458)
							tmp9 = false;
						}
						HX_STACK_LINE(458)
						if ((tmp9)){
							HX_STACK_LINE(458)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(458)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(458)
						_this->x;
					}
				}
				HX_STACK_LINE(459)
				{
					HX_STACK_LINE(459)
					::phoenix::Transform tmp4 = this->transform;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(459)
					::phoenix::Vector tmp5 = tmp4->local->scale;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(459)
					::phoenix::Vector _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(459)
					Float tmp6 = (Float((int)1) / Float(_new_zoom));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(459)
					Float _y = tmp6;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(459)
					_this->y = _y;
					HX_STACK_LINE(459)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(459)
					if ((tmp7)){
						HX_STACK_LINE(459)
						_this->y;
					}
					else{
						HX_STACK_LINE(459)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(459)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(459)
						if ((tmp8)){
							HX_STACK_LINE(459)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(459)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(459)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(459)
							tmp9 = false;
						}
						HX_STACK_LINE(459)
						if ((tmp9)){
							HX_STACK_LINE(459)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(459)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(459)
						_this->y;
					}
				}
				HX_STACK_LINE(460)
				{
					HX_STACK_LINE(460)
					::phoenix::Transform tmp4 = this->transform;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(460)
					::phoenix::Vector tmp5 = tmp4->local->scale;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(460)
					::phoenix::Vector _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(460)
					Float tmp6 = (Float((int)1) / Float(_new_zoom));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(460)
					Float _z1 = tmp6;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(460)
					_this->z = _z1;
					HX_STACK_LINE(460)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(460)
					if ((tmp7)){
						HX_STACK_LINE(460)
						_this->z;
					}
					else{
						HX_STACK_LINE(460)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(460)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(460)
						if ((tmp8)){
							HX_STACK_LINE(460)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(460)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(460)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(460)
							tmp9 = false;
						}
						HX_STACK_LINE(460)
						if ((tmp9)){
							HX_STACK_LINE(460)
							Float tmp10 = _z1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(460)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(460)
						_this->z;
					}
				}
			}
			;break;
			case (int)1: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(473)
	Float tmp3 = this->zoom = _new_zoom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(473)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_zoom,return )

::phoenix::Vector Camera_obj::set_center( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Camera","set_center",0x8f7d967c,"phoenix.Camera.set_center","phoenix/Camera.hx",478,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(480)
	this->center = _p;
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(482)
		::phoenix::ProjectionType tmp = this->projection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(482)
		::phoenix::ProjectionType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(482)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(486)
				bool tmp1 = this->_refresh_pos;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(486)
				bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(486)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(486)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(486)
				if ((tmp3)){
					HX_STACK_LINE(486)
					bool tmp5 = this->_setup;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(486)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(486)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(486)
					tmp4 = !(tmp7);
				}
				else{
					HX_STACK_LINE(486)
					tmp4 = false;
				}
				HX_STACK_LINE(486)
				if ((tmp4)){
					HX_STACK_LINE(489)
					::phoenix::Vector tmp5 = this->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(489)
					tmp5->ignore_listeners = true;
					HX_STACK_LINE(490)
					{
						HX_STACK_LINE(490)
						::phoenix::Vector tmp6 = this->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(490)
						::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(490)
						Float tmp7 = _p->x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(490)
						::phoenix::Rectangle tmp8 = this->get_viewport();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(490)
						Float tmp9 = tmp8->w;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(490)
						Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(490)
						Float tmp11 = (tmp7 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(490)
						Float _x = tmp11;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(490)
						_this->x = _x;
						HX_STACK_LINE(490)
						bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(490)
						if ((tmp12)){
							HX_STACK_LINE(490)
							_this->x;
						}
						else{
							HX_STACK_LINE(490)
							bool tmp13 = (_this->listen_x != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(490)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(490)
							if ((tmp13)){
								HX_STACK_LINE(490)
								bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(490)
								bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(490)
								tmp14 = !(tmp16);
							}
							else{
								HX_STACK_LINE(490)
								tmp14 = false;
							}
							HX_STACK_LINE(490)
							if ((tmp14)){
								HX_STACK_LINE(490)
								Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(490)
								_this->listen_x(tmp15);
							}
							HX_STACK_LINE(490)
							_this->x;
						}
					}
					HX_STACK_LINE(491)
					{
						HX_STACK_LINE(491)
						::phoenix::Vector tmp6 = this->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(491)
						::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(491)
						Float tmp7 = _p->y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(491)
						::phoenix::Rectangle tmp8 = this->get_viewport();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(491)
						Float tmp9 = tmp8->h;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(491)
						Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(491)
						Float tmp11 = (tmp7 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(491)
						Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(491)
						_this->y = _y;
						HX_STACK_LINE(491)
						bool tmp12 = _this->_construct;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(491)
						if ((tmp12)){
							HX_STACK_LINE(491)
							_this->y;
						}
						else{
							HX_STACK_LINE(491)
							bool tmp13 = (_this->listen_y != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(491)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(491)
							if ((tmp13)){
								HX_STACK_LINE(491)
								bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(491)
								bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(491)
								tmp14 = !(tmp16);
							}
							else{
								HX_STACK_LINE(491)
								tmp14 = false;
							}
							HX_STACK_LINE(491)
							if ((tmp14)){
								HX_STACK_LINE(491)
								Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(491)
								_this->listen_y(tmp15);
							}
							HX_STACK_LINE(491)
							_this->y;
						}
					}
					HX_STACK_LINE(492)
					::phoenix::Vector tmp6 = this->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(492)
					tmp6->ignore_listeners = false;
					HX_STACK_LINE(494)
					{
						HX_STACK_LINE(494)
						::phoenix::Transform tmp7 = this->transform;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(494)
						::phoenix::Vector tmp8 = tmp7->local->pos;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						::phoenix::Vector _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(494)
						{
							HX_STACK_LINE(494)
							Float _x = _p->x;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(494)
							Float _y = _p->y;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(494)
							Float _z = _p->z;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(494)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(494)
							_this->ignore_listeners = true;
							HX_STACK_LINE(494)
							{
								HX_STACK_LINE(494)
								_this->x = _x;
								HX_STACK_LINE(494)
								bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(494)
								if ((tmp9)){
									HX_STACK_LINE(494)
									_this->x;
								}
								else{
									HX_STACK_LINE(494)
									bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(494)
									bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(494)
									if ((tmp10)){
										HX_STACK_LINE(494)
										bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(494)
										bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(494)
										tmp11 = !(tmp13);
									}
									else{
										HX_STACK_LINE(494)
										tmp11 = false;
									}
									HX_STACK_LINE(494)
									if ((tmp11)){
										HX_STACK_LINE(494)
										Float tmp12 = _x;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(494)
										_this->listen_x(tmp12);
									}
									HX_STACK_LINE(494)
									_this->x;
								}
							}
							HX_STACK_LINE(494)
							{
								HX_STACK_LINE(494)
								_this->y = _y;
								HX_STACK_LINE(494)
								bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(494)
								if ((tmp9)){
									HX_STACK_LINE(494)
									_this->y;
								}
								else{
									HX_STACK_LINE(494)
									bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(494)
									bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(494)
									if ((tmp10)){
										HX_STACK_LINE(494)
										bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(494)
										bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(494)
										tmp11 = !(tmp13);
									}
									else{
										HX_STACK_LINE(494)
										tmp11 = false;
									}
									HX_STACK_LINE(494)
									if ((tmp11)){
										HX_STACK_LINE(494)
										Float tmp12 = _y;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(494)
										_this->listen_y(tmp12);
									}
									HX_STACK_LINE(494)
									_this->y;
								}
							}
							HX_STACK_LINE(494)
							{
								HX_STACK_LINE(494)
								_this->z = _z;
								HX_STACK_LINE(494)
								bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(494)
								if ((tmp9)){
									HX_STACK_LINE(494)
									_this->z;
								}
								else{
									HX_STACK_LINE(494)
									bool tmp10 = (_this->listen_z != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(494)
									bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(494)
									if ((tmp10)){
										HX_STACK_LINE(494)
										bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(494)
										bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(494)
										tmp11 = !(tmp13);
									}
									else{
										HX_STACK_LINE(494)
										tmp11 = false;
									}
									HX_STACK_LINE(494)
									if ((tmp11)){
										HX_STACK_LINE(494)
										Float tmp12 = _z;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(494)
										_this->listen_z(tmp12);
									}
									HX_STACK_LINE(494)
									_this->z;
								}
							}
							HX_STACK_LINE(494)
							_this->w = _p->w;
							HX_STACK_LINE(494)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(494)
							bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(494)
							bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(494)
							if ((tmp9)){
								HX_STACK_LINE(494)
								bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(494)
								bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(494)
								tmp10 = !(tmp12);
							}
							else{
								HX_STACK_LINE(494)
								tmp10 = false;
							}
							HX_STACK_LINE(494)
							if ((tmp10)){
								HX_STACK_LINE(494)
								Float tmp11 = _this->x;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(494)
								_this->listen_x(tmp11);
							}
							HX_STACK_LINE(494)
							bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(494)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(494)
							if ((tmp11)){
								HX_STACK_LINE(494)
								bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(494)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(494)
								tmp12 = !(tmp14);
							}
							else{
								HX_STACK_LINE(494)
								tmp12 = false;
							}
							HX_STACK_LINE(494)
							if ((tmp12)){
								HX_STACK_LINE(494)
								Float tmp13 = _this->y;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(494)
								_this->listen_y(tmp13);
							}
							HX_STACK_LINE(494)
							bool tmp13 = (_this->listen_z != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(494)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(494)
							if ((tmp13)){
								HX_STACK_LINE(494)
								bool tmp15 = _this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(494)
								bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(494)
								tmp14 = !(tmp16);
							}
							else{
								HX_STACK_LINE(494)
								tmp14 = false;
							}
							HX_STACK_LINE(494)
							if ((tmp14)){
								HX_STACK_LINE(494)
								Float tmp15 = _this->z;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(494)
								_this->listen_z(tmp15);
							}
							HX_STACK_LINE(494)
							_this;
						}
						HX_STACK_LINE(494)
						_this;
					}
				}
			}
			;break;
			case (int)1: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(504)
	::phoenix::Vector tmp = this->get_center();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	Dynamic tmp1 = this->_center_changed_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(504)
	::phoenix::Vector_obj::Listen(tmp,tmp1);
	HX_STACK_LINE(506)
	::phoenix::Vector tmp2 = this->get_center();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(506)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_center,return )

::phoenix::Vector Camera_obj::get_center( ){
	HX_STACK_FRAME("phoenix.Camera","get_center",0x8bfff808,"phoenix.Camera.get_center","phoenix/Camera.hx",510,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(511)
	::phoenix::Vector tmp = this->center;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(511)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_center,return )

::phoenix::Vector Camera_obj::get_pos( ){
	HX_STACK_FRAME("phoenix.Camera","get_pos",0x68757d81,"phoenix.Camera.get_pos","phoenix/Camera.hx",514,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(515)
	::phoenix::Vector tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(515)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_pos,return )

::phoenix::Quaternion Camera_obj::get_rotation( ){
	HX_STACK_FRAME("phoenix.Camera","get_rotation",0xff2a4231,"phoenix.Camera.get_rotation","phoenix/Camera.hx",518,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(519)
	::phoenix::Transform tmp = this->transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(519)
	::phoenix::Quaternion tmp1 = tmp->local->rotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(519)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_rotation,return )

::phoenix::Vector Camera_obj::get_scale( ){
	HX_STACK_FRAME("phoenix.Camera","get_scale",0x412883b7,"phoenix.Camera.get_scale","phoenix/Camera.hx",522,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(523)
	::phoenix::Transform tmp = this->transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	::phoenix::Vector tmp1 = tmp->local->scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(523)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_scale,return )

::phoenix::Rectangle Camera_obj::get_viewport( ){
	HX_STACK_FRAME("phoenix.Camera","get_viewport",0x93495159,"phoenix.Camera.get_viewport","phoenix/Camera.hx",526,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(527)
	::phoenix::Rectangle tmp = this->viewport;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,get_viewport,return )

::phoenix::Rectangle Camera_obj::set_viewport( ::phoenix::Rectangle _r){
	HX_STACK_FRAME("phoenix.Camera","set_viewport",0xa84274cd,"phoenix.Camera.set_viewport","phoenix/Camera.hx",530,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(532)
	this->projection_dirty = true;
	HX_STACK_LINE(534)
	this->viewport = _r;
	HX_STACK_LINE(536)
	{
		HX_STACK_LINE(536)
		::phoenix::ProjectionType tmp = this->projection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(536)
		::phoenix::ProjectionType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(536)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					::phoenix::Transform tmp1 = this->transform;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(541)
					::phoenix::Transform _this = tmp1;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(541)
					Float tmp2 = (Float(_r->w) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(541)
					Float tmp3 = (Float(_r->h) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(541)
					::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp2,tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(541)
					::phoenix::Vector o = tmp4;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(541)
					{
						HX_STACK_LINE(541)
						_this->dirty = true;
						HX_STACK_LINE(541)
						bool tmp5 = _this->dirty;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(541)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(541)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(541)
						if ((tmp6)){
							HX_STACK_LINE(541)
							bool tmp8 = _this->_setup;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(541)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(541)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(541)
							tmp7 = !(tmp10);
						}
						else{
							HX_STACK_LINE(541)
							tmp7 = false;
						}
						HX_STACK_LINE(541)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(541)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(541)
						if ((tmp8)){
							HX_STACK_LINE(541)
							tmp9 = (_this->_dirty_handlers != null());
						}
						else{
							HX_STACK_LINE(541)
							tmp9 = false;
						}
						HX_STACK_LINE(541)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(541)
						if ((tmp9)){
							HX_STACK_LINE(541)
							int tmp11 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(541)
							int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(541)
							tmp10 = (tmp12 > (int)0);
						}
						else{
							HX_STACK_LINE(541)
							tmp10 = false;
						}
						HX_STACK_LINE(541)
						if ((tmp10)){
							HX_STACK_LINE(541)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(541)
							cpp::ArrayBase _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(541)
							while((true)){
								HX_STACK_LINE(541)
								bool tmp11 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(541)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(541)
								if ((tmp12)){
									HX_STACK_LINE(541)
									break;
								}
								HX_STACK_LINE(541)
								Dynamic tmp13 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(541)
								Dynamic _handler = tmp13;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(541)
								++(_g1);
								HX_STACK_LINE(541)
								bool tmp14 = (_handler != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(541)
								if ((tmp14)){
									HX_STACK_LINE(541)
									::phoenix::Transform tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(541)
									_handler(tmp15).Cast< Void >();
								}
							}
						}
						HX_STACK_LINE(541)
						_this->dirty;
					}
					HX_STACK_LINE(541)
					_this->origin = o;
					HX_STACK_LINE(541)
					bool tmp5 = (_this->_origin_handlers != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(541)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(541)
					if ((tmp5)){
						HX_STACK_LINE(541)
						int tmp7 = _this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(541)
						int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(541)
						tmp6 = (tmp8 > (int)0);
					}
					else{
						HX_STACK_LINE(541)
						tmp6 = false;
					}
					HX_STACK_LINE(541)
					if ((tmp6)){
						HX_STACK_LINE(541)
						::phoenix::Vector _origin = _this->origin;		HX_STACK_VAR(_origin,"_origin");
						HX_STACK_LINE(541)
						{
							HX_STACK_LINE(541)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(541)
							cpp::ArrayBase _g11 = _this->_origin_handlers;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(541)
							while((true)){
								HX_STACK_LINE(541)
								bool tmp7 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(541)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(541)
								if ((tmp8)){
									HX_STACK_LINE(541)
									break;
								}
								HX_STACK_LINE(541)
								Dynamic tmp9 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(541)
								Dynamic _handler = tmp9;		HX_STACK_VAR(_handler,"_handler");
								HX_STACK_LINE(541)
								++(_g1);
								HX_STACK_LINE(541)
								bool tmp10 = (_handler != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(541)
								if ((tmp10)){
									HX_STACK_LINE(541)
									::phoenix::Vector tmp11 = _origin;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(541)
									_handler(tmp11).Cast< Void >();
								}
							}
						}
					}
					HX_STACK_LINE(541)
					_this->origin;
				}
				HX_STACK_LINE(543)
				::phoenix::Vector tmp1 = this->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(543)
				this->set_pos(tmp1);
			}
			;break;
			case (int)1: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(552)
	::phoenix::Rectangle tmp = this->get_viewport();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_viewport,return )

::phoenix::Quaternion Camera_obj::set_rotation( ::phoenix::Quaternion _q){
	HX_STACK_FRAME("phoenix.Camera","set_rotation",0x142365a5,"phoenix.Camera.set_rotation","phoenix/Camera.hx",556,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_q,"_q")
	HX_STACK_LINE(558)
	::phoenix::Quaternion tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(558)
	{
		HX_STACK_LINE(558)
		::phoenix::Transform tmp1 = this->transform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(558)
		::phoenix::Spatial _this = tmp1->local;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(558)
		_this->rotation = _q;
		HX_STACK_LINE(558)
		bool tmp2 = (_q != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(558)
		if ((tmp2)){
			HX_STACK_LINE(558)
			{
				HX_STACK_LINE(558)
				::phoenix::Quaternion _q1 = _this->rotation;		HX_STACK_VAR(_q1,"_q1");
				HX_STACK_LINE(558)
				Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(558)
				_q1->listen_x = listener;
				HX_STACK_LINE(558)
				_q1->listen_y = listener;
				HX_STACK_LINE(558)
				_q1->listen_z = listener;
				HX_STACK_LINE(558)
				_q1->listen_w = listener;
			}
			HX_STACK_LINE(558)
			{
				HX_STACK_LINE(558)
				bool tmp3 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				if ((tmp3)){
					HX_STACK_LINE(558)
					bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(558)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(558)
					tmp4 = !(tmp6);
				}
				else{
					HX_STACK_LINE(558)
					tmp4 = false;
				}
				HX_STACK_LINE(558)
				if ((tmp4)){
					HX_STACK_LINE(558)
					::phoenix::Quaternion tmp5 = _this->rotation;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(558)
					_this->rotation_changed(tmp5);
				}
			}
		}
		HX_STACK_LINE(558)
		tmp = _this->rotation;
	}
	HX_STACK_LINE(558)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_rotation,return )

::phoenix::Vector Camera_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("phoenix.Camera","set_scale",0x24796fc3,"phoenix.Camera.set_scale","phoenix/Camera.hx",562,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(564)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	{
		HX_STACK_LINE(564)
		::phoenix::Transform tmp1 = this->transform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(564)
		::phoenix::Spatial _this = tmp1->local;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(564)
		_this->scale = _s;
		HX_STACK_LINE(564)
		bool tmp2 = (_s != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(564)
		if ((tmp2)){
			HX_STACK_LINE(564)
			::phoenix::Vector tmp3 = _this->scale;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(564)
			Dynamic tmp4 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(564)
			::phoenix::Vector_obj::Listen(tmp3,tmp4);
			HX_STACK_LINE(564)
			{
				HX_STACK_LINE(564)
				bool tmp5 = (_this->scale_changed != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(564)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(564)
				if ((tmp5)){
					HX_STACK_LINE(564)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(564)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(564)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(564)
					tmp6 = false;
				}
				HX_STACK_LINE(564)
				if ((tmp6)){
					HX_STACK_LINE(564)
					::phoenix::Vector tmp7 = _this->scale;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(564)
					_this->scale_changed(tmp7);
				}
			}
		}
		HX_STACK_LINE(564)
		tmp = _this->scale;
	}
	HX_STACK_LINE(564)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_scale,return )

::phoenix::Vector Camera_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Camera","set_pos",0x5b770e8d,"phoenix.Camera.set_pos","phoenix/Camera.hx",568,0x1fcabb59)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(570)
	this->pos = _p;
	HX_STACK_LINE(572)
	{
		HX_STACK_LINE(572)
		::phoenix::ProjectionType tmp = this->projection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(572)
		::phoenix::ProjectionType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(572)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(576)
				::phoenix::Vector tmp1 = this->get_center();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(576)
				Float _cx = tmp1->x;		HX_STACK_VAR(_cx,"_cx");
				HX_STACK_LINE(577)
				::phoenix::Vector tmp2 = this->get_center();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(577)
				Float _cy = tmp2->y;		HX_STACK_VAR(_cy,"_cy");
				HX_STACK_LINE(579)
				::phoenix::Rectangle tmp3 = this->get_viewport();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(579)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(579)
				if ((tmp4)){
					HX_STACK_LINE(580)
					Float tmp5 = _p->x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(580)
					::phoenix::Rectangle tmp6 = this->get_viewport();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(580)
					Float tmp7 = tmp6->w;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(580)
					Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(580)
					Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(580)
					_cx = tmp9;
					HX_STACK_LINE(581)
					Float tmp10 = _p->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(581)
					::phoenix::Rectangle tmp11 = this->get_viewport();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(581)
					Float tmp12 = tmp11->h;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(581)
					Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(581)
					Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(581)
					_cy = tmp14;
				}
				HX_STACK_LINE(584)
				this->_refresh_pos = true;
				HX_STACK_LINE(585)
				::phoenix::Vector tmp5 = this->get_center();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(585)
				tmp5->ignore_listeners = true;
				HX_STACK_LINE(586)
				{
					HX_STACK_LINE(586)
					::phoenix::Vector tmp6 = this->get_center();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(586)
					::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(586)
					_this->x = _cx;
					HX_STACK_LINE(586)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(586)
					if ((tmp7)){
						HX_STACK_LINE(586)
						_this->x;
					}
					else{
						HX_STACK_LINE(586)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(586)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(586)
						if ((tmp8)){
							HX_STACK_LINE(586)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(586)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(586)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(586)
							tmp9 = false;
						}
						HX_STACK_LINE(586)
						if ((tmp9)){
							HX_STACK_LINE(586)
							Float tmp10 = _cx;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(586)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(586)
						_this->x;
					}
				}
				HX_STACK_LINE(587)
				{
					HX_STACK_LINE(587)
					::phoenix::Vector tmp6 = this->get_center();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(587)
					::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(587)
					_this->y = _cy;
					HX_STACK_LINE(587)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(587)
					if ((tmp7)){
						HX_STACK_LINE(587)
						_this->y;
					}
					else{
						HX_STACK_LINE(587)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(587)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(587)
						if ((tmp8)){
							HX_STACK_LINE(587)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(587)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(587)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(587)
							tmp9 = false;
						}
						HX_STACK_LINE(587)
						if ((tmp9)){
							HX_STACK_LINE(587)
							Float tmp10 = _cy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(587)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(587)
						_this->y;
					}
				}
				HX_STACK_LINE(588)
				::phoenix::Vector tmp6 = this->get_center();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(588)
				tmp6->ignore_listeners = false;
				HX_STACK_LINE(589)
				this->_refresh_pos = false;
				HX_STACK_LINE(591)
				{
					HX_STACK_LINE(591)
					::phoenix::Transform tmp7 = this->transform;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(591)
					::phoenix::Vector tmp8 = tmp7->local->pos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(591)
					::phoenix::Vector _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(591)
					_this->x = _cx;
					HX_STACK_LINE(591)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(591)
					if ((tmp9)){
						HX_STACK_LINE(591)
						_this->x;
					}
					else{
						HX_STACK_LINE(591)
						bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(591)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(591)
						if ((tmp10)){
							HX_STACK_LINE(591)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(591)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(591)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(591)
							tmp11 = false;
						}
						HX_STACK_LINE(591)
						if ((tmp11)){
							HX_STACK_LINE(591)
							Float tmp12 = _cx;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(591)
							_this->listen_x(tmp12);
						}
						HX_STACK_LINE(591)
						_this->x;
					}
				}
				HX_STACK_LINE(592)
				{
					HX_STACK_LINE(592)
					::phoenix::Transform tmp7 = this->transform;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(592)
					::phoenix::Vector tmp8 = tmp7->local->pos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(592)
					::phoenix::Vector _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(592)
					_this->y = _cy;
					HX_STACK_LINE(592)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(592)
					if ((tmp9)){
						HX_STACK_LINE(592)
						_this->y;
					}
					else{
						HX_STACK_LINE(592)
						bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(592)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(592)
						if ((tmp10)){
							HX_STACK_LINE(592)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(592)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(592)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(592)
							tmp11 = false;
						}
						HX_STACK_LINE(592)
						if ((tmp11)){
							HX_STACK_LINE(592)
							Float tmp12 = _cy;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(592)
							_this->listen_y(tmp12);
						}
						HX_STACK_LINE(592)
						_this->y;
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(596)
				::phoenix::Vector tmp1 = this->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(596)
				::phoenix::Vector value = tmp1;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(596)
				{
					HX_STACK_LINE(596)
					::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(596)
					::phoenix::Spatial _this = tmp2->local;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(596)
					_this->pos = value;
					HX_STACK_LINE(596)
					bool tmp3 = (value != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(596)
					if ((tmp3)){
						HX_STACK_LINE(596)
						::phoenix::Vector tmp4 = _this->pos;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(596)
						Dynamic tmp5 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(596)
						::phoenix::Vector_obj::Listen(tmp4,tmp5);
						HX_STACK_LINE(596)
						{
							HX_STACK_LINE(596)
							bool tmp6 = (_this->pos_changed != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(596)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(596)
							if ((tmp6)){
								HX_STACK_LINE(596)
								bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(596)
								bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(596)
								tmp7 = !(tmp9);
							}
							else{
								HX_STACK_LINE(596)
								tmp7 = false;
							}
							HX_STACK_LINE(596)
							if ((tmp7)){
								HX_STACK_LINE(596)
								::phoenix::Vector tmp8 = _this->pos;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(596)
								_this->pos_changed(tmp8);
							}
						}
					}
					HX_STACK_LINE(596)
					_this->pos;
				}
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
	HX_STACK_LINE(602)
	::phoenix::Vector tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(602)
	Dynamic tmp1 = this->_pos_changed_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	::phoenix::Vector_obj::Listen(tmp,tmp1);
	HX_STACK_LINE(604)
	::phoenix::Vector tmp2 = this->get_pos();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(604)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,set_pos,return )

Void Camera_obj::_merge_options( Dynamic _options){
{
		HX_STACK_FRAME("phoenix.Camera","_merge_options",0x6b347742,"phoenix.Camera._merge_options","phoenix/Camera.hx",609,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_options,"_options")
		HX_STACK_LINE(612)
		this->apply_default_camera_options();
		HX_STACK_LINE(614)
		bool tmp = (_options->__Field(HX_HCSTRING("aspect","\xd8","\x95","\x07","\x4a"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		if ((tmp)){
			HX_STACK_LINE(615)
			Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(615)
			tmp1->__FieldRef(HX_HCSTRING("aspect","\xd8","\x95","\x07","\x4a")) = _options->__Field(HX_HCSTRING("aspect","\xd8","\x95","\x07","\x4a"), hx::paccDynamic );
			HX_STACK_LINE(616)
			Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(616)
			Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("aspect","\xd8","\x95","\x07","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(616)
			this->set_aspect(tmp3);
		}
		HX_STACK_LINE(619)
		bool tmp1 = (_options->__Field(HX_HCSTRING("far","\xd7","\xba","\x4d","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(619)
		if ((tmp1)){
			HX_STACK_LINE(620)
			Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(620)
			tmp2->__FieldRef(HX_HCSTRING("far","\xd7","\xba","\x4d","\x00")) = _options->__Field(HX_HCSTRING("far","\xd7","\xba","\x4d","\x00"), hx::paccDynamic );
			HX_STACK_LINE(621)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(621)
			Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("far","\xd7","\xba","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(621)
			this->set_far(tmp4);
		}
		HX_STACK_LINE(625)
		bool tmp2 = (_options->__Field(HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(625)
		if ((tmp2)){
			HX_STACK_LINE(626)
			Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(626)
			tmp3->__FieldRef(HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00")) = _options->__Field(HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00"), hx::paccDynamic );
			HX_STACK_LINE(627)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(627)
			Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(627)
			this->set_fov(tmp5);
		}
		HX_STACK_LINE(630)
		bool tmp3 = (_options->__Field(HX_HCSTRING("fov_type","\x6c","\x98","\x1e","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(630)
		if ((tmp3)){
			HX_STACK_LINE(631)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(631)
			tmp4->__FieldRef(HX_HCSTRING("fov_type","\x6c","\x98","\x1e","\x00")) = _options->__Field(HX_HCSTRING("fov_type","\x6c","\x98","\x1e","\x00"), hx::paccDynamic );
			HX_STACK_LINE(632)
			::phoenix::FOVType tmp5 = _options->__Field(HX_HCSTRING("fov_type","\x6c","\x98","\x1e","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(632)
			this->set_fov_type(tmp5);
		}
		else{
			HX_STACK_LINE(636)
			Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(636)
			tmp4->__FieldRef(HX_HCSTRING("fov_type","\x6c","\x98","\x1e","\x00")) = ::phoenix::FOVType_obj::horizontal;
			HX_STACK_LINE(637)
			this->set_fov_type(::phoenix::FOVType_obj::horizontal);
		}
		HX_STACK_LINE(640)
		bool tmp4 = (_options->__Field(HX_HCSTRING("near","\xe8","\x70","\x02","\x49"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(640)
		if ((tmp4)){
			HX_STACK_LINE(641)
			Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(641)
			tmp5->__FieldRef(HX_HCSTRING("near","\xe8","\x70","\x02","\x49")) = _options->__Field(HX_HCSTRING("near","\xe8","\x70","\x02","\x49"), hx::paccDynamic );
			HX_STACK_LINE(642)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(642)
			Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("near","\xe8","\x70","\x02","\x49"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(642)
			this->set_near(tmp7);
		}
		HX_STACK_LINE(645)
		bool tmp5 = (_options->__Field(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(645)
		if ((tmp5)){
			HX_STACK_LINE(646)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(646)
			tmp6->__FieldRef(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c")) = _options->__Field(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"), hx::paccDynamic );
			HX_STACK_LINE(647)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(647)
			::phoenix::Rectangle tmp8 = tmp7->__Field(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(647)
			this->set_viewport(tmp8);
		}
		HX_STACK_LINE(650)
		bool tmp6 = (_options->__Field(HX_HCSTRING("cull_backfaces","\xa2","\xe1","\x06","\xe5"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(650)
		if ((tmp6)){
			HX_STACK_LINE(651)
			Dynamic tmp7 = this->options;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(651)
			tmp7->__FieldRef(HX_HCSTRING("cull_backfaces","\xa2","\xe1","\x06","\xe5")) = _options->__Field(HX_HCSTRING("cull_backfaces","\xa2","\xe1","\x06","\xe5"), hx::paccDynamic );
		}
		HX_STACK_LINE(654)
		bool tmp7 = (_options->__Field(HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(654)
		if ((tmp7)){
			HX_STACK_LINE(655)
			Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(655)
			tmp8->__FieldRef(HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9")) = _options->__Field(HX_HCSTRING("depth_test","\x4e","\x68","\x49","\xc9"), hx::paccDynamic );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,_merge_options,(void))

Void Camera_obj::_pos_changed( Float v){
{
		HX_STACK_FRAME("phoenix.Camera","_pos_changed",0x32241af4,"phoenix.Camera._pos_changed","phoenix/Camera.hx",660,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(662)
		::phoenix::Vector tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(662)
		this->set_pos(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,_pos_changed,(void))

Void Camera_obj::_center_changed( Float v){
{
		HX_STACK_FRAME("phoenix.Camera","_center_changed",0xdc3d733f,"phoenix.Camera._center_changed","phoenix/Camera.hx",666,0x1fcabb59)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(668)
		::phoenix::Vector tmp = this->get_center();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(668)
		this->set_center(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,_center_changed,(void))


Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(viewport,"viewport");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(near,"near");
	HX_MARK_MEMBER_NAME(far,"far");
	HX_MARK_MEMBER_NAME(fov,"fov");
	HX_MARK_MEMBER_NAME(fov_type,"fov_type");
	HX_MARK_MEMBER_NAME(aspect,"aspect");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(minimum_zoom,"minimum_zoom");
	HX_MARK_MEMBER_NAME(projection_matrix,"projection_matrix");
	HX_MARK_MEMBER_NAME(view_matrix,"view_matrix");
	HX_MARK_MEMBER_NAME(view_matrix_inverse,"view_matrix_inverse");
	HX_MARK_MEMBER_NAME(look_at_matrix,"look_at_matrix");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(up,"up");
	HX_MARK_MEMBER_NAME(proj_arr,"proj_arr");
	HX_MARK_MEMBER_NAME(view_inverse_arr,"view_inverse_arr");
	HX_MARK_MEMBER_NAME(fov_y,"fov_y");
	HX_MARK_MEMBER_NAME(transform_dirty,"transform_dirty");
	HX_MARK_MEMBER_NAME(projection_dirty,"projection_dirty");
	HX_MARK_MEMBER_NAME(look_at_dirty,"look_at_dirty");
	HX_MARK_MEMBER_NAME(_setup,"_setup");
	HX_MARK_MEMBER_NAME(_refresh_pos,"_refresh_pos");
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(viewport,"viewport");
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(near,"near");
	HX_VISIT_MEMBER_NAME(far,"far");
	HX_VISIT_MEMBER_NAME(fov,"fov");
	HX_VISIT_MEMBER_NAME(fov_type,"fov_type");
	HX_VISIT_MEMBER_NAME(aspect,"aspect");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(minimum_zoom,"minimum_zoom");
	HX_VISIT_MEMBER_NAME(projection_matrix,"projection_matrix");
	HX_VISIT_MEMBER_NAME(view_matrix,"view_matrix");
	HX_VISIT_MEMBER_NAME(view_matrix_inverse,"view_matrix_inverse");
	HX_VISIT_MEMBER_NAME(look_at_matrix,"look_at_matrix");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(up,"up");
	HX_VISIT_MEMBER_NAME(proj_arr,"proj_arr");
	HX_VISIT_MEMBER_NAME(view_inverse_arr,"view_inverse_arr");
	HX_VISIT_MEMBER_NAME(fov_y,"fov_y");
	HX_VISIT_MEMBER_NAME(transform_dirty,"transform_dirty");
	HX_VISIT_MEMBER_NAME(projection_dirty,"projection_dirty");
	HX_VISIT_MEMBER_NAME(look_at_dirty,"look_at_dirty");
	HX_VISIT_MEMBER_NAME(_setup,"_setup");
	HX_VISIT_MEMBER_NAME(_refresh_pos,"_refresh_pos");
}

Dynamic Camera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return up; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"far") ) { return far; }
		if (HX_FIELD_EQ(inName,"fov") ) { return fov; }
		if (HX_FIELD_EQ(inName,"pos") ) { return inCallProp == hx::paccAlways ? get_pos() : pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"near") ) { return near; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return get_scale(); }
		if (HX_FIELD_EQ(inName,"fov_y") ) { return fov_y; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return inCallProp == hx::paccAlways ? get_center() : center; }
		if (HX_FIELD_EQ(inName,"aspect") ) { return aspect; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"_setup") ) { return _setup; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fov") ) { return set_fov_dyn(); }
		if (HX_FIELD_EQ(inName,"set_far") ) { return set_far_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return inCallProp == hx::paccAlways ? get_viewport() : viewport; }
		if (HX_FIELD_EQ(inName,"fov_type") ) { return fov_type; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"proj_arr") ) { return proj_arr; }
		if (HX_FIELD_EQ(inName,"set_near") ) { return set_near_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"set_ortho") ) { return set_ortho_dyn(); }
		if (HX_FIELD_EQ(inName,"unproject") ) { return unproject_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return projection; }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_aspect") ) { return set_aspect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_center") ) { return set_center_dyn(); }
		if (HX_FIELD_EQ(inName,"get_center") ) { return get_center_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"view_matrix") ) { return view_matrix; }
		if (HX_FIELD_EQ(inName,"apply_state") ) { return apply_state_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { return minimum_zoom; }
		if (HX_FIELD_EQ(inName,"set_fov_type") ) { return set_fov_type_dyn(); }
		if (HX_FIELD_EQ(inName,"_refresh_pos") ) { return _refresh_pos; }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_viewport") ) { return get_viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viewport") ) { return set_viewport_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"_pos_changed") ) { return _pos_changed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"look_at_dirty") ) { return look_at_dirty; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"look_at_matrix") ) { return look_at_matrix; }
		if (HX_FIELD_EQ(inName,"update_look_at") ) { return update_look_at_dyn(); }
		if (HX_FIELD_EQ(inName,"_merge_options") ) { return _merge_options_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transform_dirty") ) { return transform_dirty; }
		if (HX_FIELD_EQ(inName,"set_perspective") ) { return set_perspective_dyn(); }
		if (HX_FIELD_EQ(inName,"_center_changed") ) { return _center_changed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"view_inverse_arr") ) { return view_inverse_arr; }
		if (HX_FIELD_EQ(inName,"projection_dirty") ) { return projection_dirty; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projection_matrix") ) { return projection_matrix; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"update_view_matrix") ) { return update_view_matrix_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"view_matrix_inverse") ) { return view_matrix_inverse; }
		if (HX_FIELD_EQ(inName,"screen_point_to_ray") ) { return screen_point_to_ray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"on_transform_cleaned") ) { return on_transform_cleaned_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"screen_point_to_world") ) { return screen_point_to_world_dyn(); }
		if (HX_FIELD_EQ(inName,"world_point_to_screen") ) { return world_point_to_screen_dyn(); }
		if (HX_FIELD_EQ(inName,"ortho_screen_to_world") ) { return ortho_screen_to_world_dyn(); }
		if (HX_FIELD_EQ(inName,"ortho_world_to_screen") ) { return ortho_world_to_screen_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"default_camera_options") ) { return default_camera_options_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"update_projection_matrix") ) { return update_projection_matrix_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"apply_default_camera_options") ) { return apply_default_camera_options_dyn(); }
		if (HX_FIELD_EQ(inName,"persepective_world_to_screen") ) { return persepective_world_to_screen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"far") ) { if (inCallProp == hx::paccAlways) return set_far(inValue);far=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fov") ) { if (inCallProp == hx::paccAlways) return set_fov(inValue);fov=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"near") ) { if (inCallProp == hx::paccAlways) return set_near(inValue);near=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue); }
		if (HX_FIELD_EQ(inName,"fov_y") ) { fov_y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { if (inCallProp == hx::paccAlways) return set_center(inValue);center=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aspect") ) { if (inCallProp == hx::paccAlways) return set_aspect(inValue);aspect=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == hx::paccAlways) return set_target(inValue);target=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setup") ) { _setup=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { if (inCallProp == hx::paccAlways) return set_viewport(inValue);viewport=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fov_type") ) { if (inCallProp == hx::paccAlways) return set_fov_type(inValue);fov_type=inValue.Cast< ::phoenix::FOVType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"proj_arr") ) { proj_arr=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast< ::phoenix::ProjectionType >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"view_matrix") ) { view_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimum_zoom") ) { minimum_zoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refresh_pos") ) { _refresh_pos=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"look_at_dirty") ) { look_at_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"look_at_matrix") ) { look_at_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transform_dirty") ) { transform_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"view_inverse_arr") ) { view_inverse_arr=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"projection_dirty") ) { projection_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projection_matrix") ) { projection_matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"view_matrix_inverse") ) { view_matrix_inverse=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Camera_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"));
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("near","\xe8","\x70","\x02","\x49"));
	outFields->push(HX_HCSTRING("far","\xd7","\xba","\x4d","\x00"));
	outFields->push(HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00"));
	outFields->push(HX_HCSTRING("fov_type","\x6c","\x98","\x1e","\x00"));
	outFields->push(HX_HCSTRING("aspect","\xd8","\x95","\x07","\x4a"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("minimum_zoom","\x64","\x2e","\x79","\xf3"));
	outFields->push(HX_HCSTRING("projection_matrix","\x31","\x7f","\xe2","\x9c"));
	outFields->push(HX_HCSTRING("view_matrix","\x1b","\x5c","\x01","\x3f"));
	outFields->push(HX_HCSTRING("view_matrix_inverse","\x4c","\x14","\xdd","\x20"));
	outFields->push(HX_HCSTRING("look_at_matrix","\x2d","\x36","\xc3","\x1c"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"));
	outFields->push(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("proj_arr","\x7f","\x9d","\xcc","\x33"));
	outFields->push(HX_HCSTRING("view_inverse_arr","\xf8","\x8a","\xdb","\xb9"));
	outFields->push(HX_HCSTRING("fov_y","\x87","\xb7","\x97","\x04"));
	outFields->push(HX_HCSTRING("transform_dirty","\xbf","\x9d","\x78","\xdc"));
	outFields->push(HX_HCSTRING("projection_dirty","\x22","\x75","\x16","\xb6"));
	outFields->push(HX_HCSTRING("look_at_dirty","\xa6","\xb1","\xea","\xcf"));
	outFields->push(HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76"));
	outFields->push(HX_HCSTRING("_refresh_pos","\xf1","\xb3","\xec","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Camera_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Camera_obj,viewport),HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,center),HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")},
	{hx::fsFloat,(int)offsetof(Camera_obj,zoom),HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{hx::fsFloat,(int)offsetof(Camera_obj,near),HX_HCSTRING("near","\xe8","\x70","\x02","\x49")},
	{hx::fsFloat,(int)offsetof(Camera_obj,far),HX_HCSTRING("far","\xd7","\xba","\x4d","\x00")},
	{hx::fsFloat,(int)offsetof(Camera_obj,fov),HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00")},
	{hx::fsObject /*::phoenix::FOVType*/ ,(int)offsetof(Camera_obj,fov_type),HX_HCSTRING("fov_type","\x6c","\x98","\x1e","\x00")},
	{hx::fsFloat,(int)offsetof(Camera_obj,aspect),HX_HCSTRING("aspect","\xd8","\x95","\x07","\x4a")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Camera_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsFloat,(int)offsetof(Camera_obj,minimum_zoom),HX_HCSTRING("minimum_zoom","\x64","\x2e","\x79","\xf3")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Camera_obj,projection_matrix),HX_HCSTRING("projection_matrix","\x31","\x7f","\xe2","\x9c")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Camera_obj,view_matrix),HX_HCSTRING("view_matrix","\x1b","\x5c","\x01","\x3f")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Camera_obj,view_matrix_inverse),HX_HCSTRING("view_matrix_inverse","\x4c","\x14","\xdd","\x20")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Camera_obj,look_at_matrix),HX_HCSTRING("look_at_matrix","\x2d","\x36","\xc3","\x1c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Camera_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsObject /*::phoenix::ProjectionType*/ ,(int)offsetof(Camera_obj,projection),HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Camera_obj,up),HX_HCSTRING("up","\x5b","\x66","\x00","\x00")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Camera_obj,proj_arr),HX_HCSTRING("proj_arr","\x7f","\x9d","\xcc","\x33")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Camera_obj,view_inverse_arr),HX_HCSTRING("view_inverse_arr","\xf8","\x8a","\xdb","\xb9")},
	{hx::fsFloat,(int)offsetof(Camera_obj,fov_y),HX_HCSTRING("fov_y","\x87","\xb7","\x97","\x04")},
	{hx::fsBool,(int)offsetof(Camera_obj,transform_dirty),HX_HCSTRING("transform_dirty","\xbf","\x9d","\x78","\xdc")},
	{hx::fsBool,(int)offsetof(Camera_obj,projection_dirty),HX_HCSTRING("projection_dirty","\x22","\x75","\x16","\xb6")},
	{hx::fsBool,(int)offsetof(Camera_obj,look_at_dirty),HX_HCSTRING("look_at_dirty","\xa6","\xb1","\xea","\xcf")},
	{hx::fsBool,(int)offsetof(Camera_obj,_setup),HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76")},
	{hx::fsBool,(int)offsetof(Camera_obj,_refresh_pos),HX_HCSTRING("_refresh_pos","\xf1","\xb3","\xec","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	HX_HCSTRING("near","\xe8","\x70","\x02","\x49"),
	HX_HCSTRING("far","\xd7","\xba","\x4d","\x00"),
	HX_HCSTRING("fov","\x0d","\xc7","\x4d","\x00"),
	HX_HCSTRING("fov_type","\x6c","\x98","\x1e","\x00"),
	HX_HCSTRING("aspect","\xd8","\x95","\x07","\x4a"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("minimum_zoom","\x64","\x2e","\x79","\xf3"),
	HX_HCSTRING("projection_matrix","\x31","\x7f","\xe2","\x9c"),
	HX_HCSTRING("view_matrix","\x1b","\x5c","\x01","\x3f"),
	HX_HCSTRING("view_matrix_inverse","\x4c","\x14","\xdd","\x20"),
	HX_HCSTRING("look_at_matrix","\x2d","\x36","\xc3","\x1c"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"),
	HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),
	HX_HCSTRING("proj_arr","\x7f","\x9d","\xcc","\x33"),
	HX_HCSTRING("view_inverse_arr","\xf8","\x8a","\xdb","\xb9"),
	HX_HCSTRING("fov_y","\x87","\xb7","\x97","\x04"),
	HX_HCSTRING("transform_dirty","\xbf","\x9d","\x78","\xdc"),
	HX_HCSTRING("projection_dirty","\x22","\x75","\x16","\xb6"),
	HX_HCSTRING("look_at_dirty","\xa6","\xb1","\xea","\xcf"),
	HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76"),
	HX_HCSTRING("set_ortho","\x9b","\x5f","\x27","\x5c"),
	HX_HCSTRING("set_perspective","\x1f","\x1a","\x9f","\x7d"),
	HX_HCSTRING("project","\xd9","\x12","\xeb","\xf5"),
	HX_HCSTRING("unproject","\xa0","\x19","\xed","\xf1"),
	HX_HCSTRING("screen_point_to_ray","\x28","\x85","\x13","\xa2"),
	HX_HCSTRING("screen_point_to_world","\x10","\x11","\x1a","\xdc"),
	HX_HCSTRING("world_point_to_screen","\xd4","\x2d","\x5d","\xdc"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("on_transform_cleaned","\xb5","\x8a","\x32","\x47"),
	HX_HCSTRING("update_look_at","\x9d","\x5a","\x58","\xb2"),
	HX_HCSTRING("update_view_matrix","\xa5","\xf9","\x05","\x55"),
	HX_HCSTRING("update_projection_matrix","\x3b","\xe0","\x4c","\x22"),
	HX_HCSTRING("apply_state","\x40","\x09","\x59","\x87"),
	HX_HCSTRING("apply_default_camera_options","\x73","\xd9","\x25","\x9d"),
	HX_HCSTRING("default_camera_options","\x82","\xf1","\x8f","\x64"),
	HX_HCSTRING("ortho_screen_to_world","\x7a","\x49","\xda","\x49"),
	HX_HCSTRING("ortho_world_to_screen","\x3c","\x93","\x74","\xd8"),
	HX_HCSTRING("persepective_world_to_screen","\xe7","\x42","\x61","\xf8"),
	HX_HCSTRING("set_target","\x8e","\x01","\xf2","\x7a"),
	HX_HCSTRING("set_fov","\xb0","\x20","\xc4","\x19"),
	HX_HCSTRING("set_fov_type","\xe9","\x6f","\x31","\xca"),
	HX_HCSTRING("set_aspect","\x15","\xa4","\x0c","\x3e"),
	HX_HCSTRING("set_near","\xe5","\x85","\x1a","\x77"),
	HX_HCSTRING("set_far","\x7a","\x14","\xc4","\x19"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("_refresh_pos","\xf1","\xb3","\xec","\xae"),
	HX_HCSTRING("set_center","\x12","\x34","\xe0","\xf9"),
	HX_HCSTRING("get_center","\x9e","\x95","\x62","\xf6"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("get_viewport","\x6f","\x00","\xbf","\x51"),
	HX_HCSTRING("set_viewport","\xe3","\x23","\xb8","\x66"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("_merge_options","\xd8","\x97","\xc4","\xf5"),
	HX_HCSTRING("_pos_changed","\x0a","\xca","\x99","\xf0"),
	HX_HCSTRING("_center_changed","\xe9","\xd5","\xc9","\x8f"),
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
	__mClass->mName = HX_HCSTRING("phoenix.Camera","\xc4","\x71","\x6d","\x35");
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

} // end namespace phoenix
