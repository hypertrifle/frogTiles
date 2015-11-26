#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
namespace phoenix{

Void Spatial_obj::__construct()
{
HX_STACK_FRAME("phoenix.Spatial","new",0x51d44037,"phoenix.Spatial.new","phoenix/Transform.hx",547,0x44da8ab2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(563)
	this->_setup = true;
	HX_STACK_LINE(557)
	this->auto_decompose = false;
	HX_STACK_LINE(556)
	this->ignore_listeners = false;
	HX_STACK_LINE(567)
	{
		HX_STACK_LINE(567)
		::phoenix::Matrix tmp = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		::phoenix::Matrix _m = tmp;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(567)
		this->matrix = _m;
		HX_STACK_LINE(567)
		bool tmp1 = (_m != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(567)
		if ((tmp1)){
			HX_STACK_LINE(567)
			::snow::api::buffers::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(567)
			{
				HX_STACK_LINE(567)
				::phoenix::Matrix tmp3 = this->matrix;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(567)
				::phoenix::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(567)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(567)
				while((true)){
					HX_STACK_LINE(567)
					bool tmp4 = (i < (int)16);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(567)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(567)
					if ((tmp5)){
						HX_STACK_LINE(567)
						break;
					}
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						::snow::api::buffers::ArrayBufferView this1 = _this->_float32array;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(567)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),_this->elements->__get(i));
					}
					HX_STACK_LINE(567)
					++(i);
				}
				HX_STACK_LINE(567)
				tmp2 = _this->_float32array;
			}
			HX_STACK_LINE(567)
			this->floats = tmp2;
		}
		HX_STACK_LINE(567)
		this->matrix;
	}
	HX_STACK_LINE(568)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	{
		HX_STACK_LINE(568)
		::phoenix::Matrix tmp1 = this->matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		::phoenix::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(568)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(568)
		while((true)){
			HX_STACK_LINE(568)
			bool tmp2 = (i < (int)16);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(568)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(568)
			if ((tmp3)){
				HX_STACK_LINE(568)
				break;
			}
			HX_STACK_LINE(568)
			{
				HX_STACK_LINE(568)
				::snow::api::buffers::ArrayBufferView this1 = _this->_float32array;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(568)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),_this->elements->__get(i));
			}
			HX_STACK_LINE(568)
			++(i);
		}
		HX_STACK_LINE(568)
		tmp = _this->_float32array;
	}
	HX_STACK_LINE(568)
	this->floats = tmp;
	HX_STACK_LINE(570)
	{
		HX_STACK_LINE(570)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(570)
		::phoenix::Vector _p = tmp1;		HX_STACK_VAR(_p,"_p");
		HX_STACK_LINE(570)
		this->pos = _p;
		HX_STACK_LINE(570)
		bool tmp2 = (_p != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(570)
		if ((tmp2)){
			HX_STACK_LINE(570)
			::phoenix::Vector tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(570)
			Dynamic tmp4 = this->_pos_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(570)
			::phoenix::Vector_obj::Listen(tmp3,tmp4);
			HX_STACK_LINE(570)
			{
				HX_STACK_LINE(570)
				Dynamic tmp5 = this->pos_changed_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(570)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(570)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(570)
				if ((tmp6)){
					HX_STACK_LINE(570)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(570)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(570)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(570)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(570)
					tmp7 = false;
				}
				HX_STACK_LINE(570)
				if ((tmp7)){
					HX_STACK_LINE(570)
					::phoenix::Vector tmp8 = this->pos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(570)
					this->pos_changed(tmp8);
				}
			}
		}
		HX_STACK_LINE(570)
		this->pos;
	}
	HX_STACK_LINE(571)
	{
		HX_STACK_LINE(571)
		::phoenix::Quaternion tmp1 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(571)
		::phoenix::Quaternion _r = tmp1;		HX_STACK_VAR(_r,"_r");
		HX_STACK_LINE(571)
		this->rotation = _r;
		HX_STACK_LINE(571)
		bool tmp2 = (_r != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(571)
		if ((tmp2)){
			HX_STACK_LINE(571)
			{
				HX_STACK_LINE(571)
				::phoenix::Quaternion tmp3 = this->rotation;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(571)
				::phoenix::Quaternion _q = tmp3;		HX_STACK_VAR(_q,"_q");
				HX_STACK_LINE(571)
				Dynamic tmp4 = this->_rotation_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(571)
				Dynamic listener = tmp4;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(571)
				_q->listen_x = listener;
				HX_STACK_LINE(571)
				_q->listen_y = listener;
				HX_STACK_LINE(571)
				_q->listen_z = listener;
				HX_STACK_LINE(571)
				_q->listen_w = listener;
			}
			HX_STACK_LINE(571)
			{
				HX_STACK_LINE(571)
				Dynamic tmp3 = this->rotation_changed_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(571)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(571)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(571)
				if ((tmp4)){
					HX_STACK_LINE(571)
					bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(571)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(571)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(571)
					tmp5 = !(tmp8);
				}
				else{
					HX_STACK_LINE(571)
					tmp5 = false;
				}
				HX_STACK_LINE(571)
				if ((tmp5)){
					HX_STACK_LINE(571)
					::phoenix::Quaternion tmp6 = this->rotation;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(571)
					this->rotation_changed(tmp6);
				}
			}
		}
		HX_STACK_LINE(571)
		this->rotation;
	}
	HX_STACK_LINE(572)
	{
		HX_STACK_LINE(572)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new((int)1,(int)1,(int)1,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		::phoenix::Vector _s = tmp1;		HX_STACK_VAR(_s,"_s");
		HX_STACK_LINE(572)
		this->scale = _s;
		HX_STACK_LINE(572)
		bool tmp2 = (_s != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(572)
		if ((tmp2)){
			HX_STACK_LINE(572)
			::phoenix::Vector tmp3 = this->scale;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(572)
			Dynamic tmp4 = this->_scale_change_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(572)
			::phoenix::Vector_obj::Listen(tmp3,tmp4);
			HX_STACK_LINE(572)
			{
				HX_STACK_LINE(572)
				Dynamic tmp5 = this->scale_changed_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(572)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(572)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(572)
				if ((tmp6)){
					HX_STACK_LINE(572)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(572)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(572)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(572)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(572)
					tmp7 = false;
				}
				HX_STACK_LINE(572)
				if ((tmp7)){
					HX_STACK_LINE(572)
					::phoenix::Vector tmp8 = this->scale;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(572)
					this->scale_changed(tmp8);
				}
			}
		}
		HX_STACK_LINE(572)
		this->scale;
	}
	HX_STACK_LINE(574)
	this->_setup = false;
}
;
	return null();
}

//Spatial_obj::~Spatial_obj() { }

Dynamic Spatial_obj::__CreateEmpty() { return  new Spatial_obj; }
hx::ObjectPtr< Spatial_obj > Spatial_obj::__new()
{  hx::ObjectPtr< Spatial_obj > _result_ = new Spatial_obj();
	_result_->__construct();
	return _result_;}

Dynamic Spatial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spatial_obj > _result_ = new Spatial_obj();
	_result_->__construct();
	return _result_;}

Void Spatial_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Spatial","destroy",0x7b90d451,"phoenix.Spatial.destroy","phoenix/Transform.hx",578,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			this->matrix = null();
			HX_STACK_LINE(580)
			bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(580)
			if ((tmp)){
				HX_STACK_LINE(580)
				::snow::api::buffers::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					::phoenix::Matrix tmp2 = this->matrix;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(580)
					::phoenix::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(580)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(580)
					while((true)){
						HX_STACK_LINE(580)
						bool tmp3 = (i < (int)16);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(580)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(580)
						if ((tmp4)){
							HX_STACK_LINE(580)
							break;
						}
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							::snow::api::buffers::ArrayBufferView this1 = _this->_float32array;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(580)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),_this->elements->__get(i));
						}
						HX_STACK_LINE(580)
						++(i);
					}
					HX_STACK_LINE(580)
					tmp1 = _this->_float32array;
				}
				HX_STACK_LINE(580)
				this->floats = tmp1;
			}
			HX_STACK_LINE(580)
			this->matrix;
		}
		HX_STACK_LINE(581)
		this->floats = null();
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			this->pos = null();
			HX_STACK_LINE(582)
			bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(582)
			if ((tmp)){
				HX_STACK_LINE(582)
				::phoenix::Vector tmp1 = this->pos;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(582)
				Dynamic tmp2 = this->_pos_change_dyn();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(582)
				::phoenix::Vector_obj::Listen(tmp1,tmp2);
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					Dynamic tmp3 = this->pos_changed_dyn();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(582)
					bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(582)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(582)
					if ((tmp4)){
						HX_STACK_LINE(582)
						bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(582)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(582)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(582)
						tmp5 = !(tmp8);
					}
					else{
						HX_STACK_LINE(582)
						tmp5 = false;
					}
					HX_STACK_LINE(582)
					if ((tmp5)){
						HX_STACK_LINE(582)
						::phoenix::Vector tmp6 = this->pos;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(582)
						this->pos_changed(tmp6);
					}
				}
			}
			HX_STACK_LINE(582)
			this->pos;
		}
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			this->rotation = null();
			HX_STACK_LINE(583)
			bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(583)
			if ((tmp)){
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					::phoenix::Quaternion tmp1 = this->rotation;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(583)
					::phoenix::Quaternion _q = tmp1;		HX_STACK_VAR(_q,"_q");
					HX_STACK_LINE(583)
					Dynamic tmp2 = this->_rotation_change_dyn();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(583)
					Dynamic listener = tmp2;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(583)
					_q->listen_x = listener;
					HX_STACK_LINE(583)
					_q->listen_y = listener;
					HX_STACK_LINE(583)
					_q->listen_z = listener;
					HX_STACK_LINE(583)
					_q->listen_w = listener;
				}
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					Dynamic tmp1 = this->rotation_changed_dyn();		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(583)
					bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(583)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(583)
					if ((tmp2)){
						HX_STACK_LINE(583)
						bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(583)
						bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(583)
						bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(583)
						tmp3 = !(tmp6);
					}
					else{
						HX_STACK_LINE(583)
						tmp3 = false;
					}
					HX_STACK_LINE(583)
					if ((tmp3)){
						HX_STACK_LINE(583)
						::phoenix::Quaternion tmp4 = this->rotation;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(583)
						this->rotation_changed(tmp4);
					}
				}
			}
			HX_STACK_LINE(583)
			this->rotation;
		}
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(584)
			this->scale = null();
			HX_STACK_LINE(584)
			bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(584)
			if ((tmp)){
				HX_STACK_LINE(584)
				::phoenix::Vector tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(584)
				Dynamic tmp2 = this->_scale_change_dyn();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(584)
				::phoenix::Vector_obj::Listen(tmp1,tmp2);
				HX_STACK_LINE(584)
				{
					HX_STACK_LINE(584)
					Dynamic tmp3 = this->scale_changed_dyn();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(584)
					bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(584)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(584)
					if ((tmp4)){
						HX_STACK_LINE(584)
						bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(584)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(584)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(584)
						tmp5 = !(tmp8);
					}
					else{
						HX_STACK_LINE(584)
						tmp5 = false;
					}
					HX_STACK_LINE(584)
					if ((tmp5)){
						HX_STACK_LINE(584)
						::phoenix::Vector tmp6 = this->scale;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(584)
						this->scale_changed(tmp6);
					}
				}
			}
			HX_STACK_LINE(584)
			this->scale;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spatial_obj,destroy,(void))

::phoenix::Spatial Spatial_obj::decompose( hx::Null< bool >  __o__force){
bool _force = __o__force.Default(true);
	HX_STACK_FRAME("phoenix.Spatial","decompose",0xa72c2ec8,"phoenix.Spatial.decompose","phoenix/Transform.hx",591,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_force,"_force")
{
		HX_STACK_LINE(593)
		bool tmp = this->auto_decompose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(593)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(593)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(593)
		if ((tmp1)){
			HX_STACK_LINE(593)
			tmp2 = _force;
		}
		else{
			HX_STACK_LINE(593)
			tmp2 = true;
		}
		HX_STACK_LINE(593)
		if ((tmp2)){
			HX_STACK_LINE(595)
			::phoenix::MatrixTransform tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(595)
			{
				HX_STACK_LINE(595)
				::phoenix::Matrix tmp4 = this->matrix;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(595)
				::phoenix::Matrix _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(595)
				::phoenix::Vector _position = null();		HX_STACK_VAR(_position,"_position");
				HX_STACK_LINE(595)
				::phoenix::Quaternion _quaternion = null();		HX_STACK_VAR(_quaternion,"_quaternion");
				HX_STACK_LINE(595)
				::phoenix::Vector _scale = null();		HX_STACK_VAR(_scale,"_scale");
				HX_STACK_LINE(595)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(595)
				::phoenix::Matrix tmp5 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(595)
				::phoenix::Matrix matrix = tmp5;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(595)
				Float tmp6 = te->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(595)
				Float _ax_x = tmp6;		HX_STACK_VAR(_ax_x,"_ax_x");
				HX_STACK_LINE(595)
				Float tmp7 = te->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(595)
				Float _ax_y = tmp7;		HX_STACK_VAR(_ax_y,"_ax_y");
				HX_STACK_LINE(595)
				Float tmp8 = te->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(595)
				Float _ax_z = tmp8;		HX_STACK_VAR(_ax_z,"_ax_z");
				HX_STACK_LINE(595)
				Float tmp9 = te->__get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(595)
				Float _ay_x = tmp9;		HX_STACK_VAR(_ay_x,"_ay_x");
				HX_STACK_LINE(595)
				Float tmp10 = te->__get((int)5);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(595)
				Float _ay_y = tmp10;		HX_STACK_VAR(_ay_y,"_ay_y");
				HX_STACK_LINE(595)
				Float tmp11 = te->__get((int)6);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(595)
				Float _ay_z = tmp11;		HX_STACK_VAR(_ay_z,"_ay_z");
				HX_STACK_LINE(595)
				Float tmp12 = te->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(595)
				Float _az_x = tmp12;		HX_STACK_VAR(_az_x,"_az_x");
				HX_STACK_LINE(595)
				Float tmp13 = te->__get((int)9);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(595)
				Float _az_y = tmp13;		HX_STACK_VAR(_az_y,"_az_y");
				HX_STACK_LINE(595)
				Float tmp14 = te->__get((int)10);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(595)
				Float _az_z = tmp14;		HX_STACK_VAR(_az_z,"_az_z");
				HX_STACK_LINE(595)
				Float tmp15 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(595)
				Float tmp16 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(595)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(595)
				Float tmp18 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(595)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(595)
				Float tmp20 = ::Math_obj::sqrt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(595)
				Float _ax_length = tmp20;		HX_STACK_VAR(_ax_length,"_ax_length");
				HX_STACK_LINE(595)
				Float tmp21 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(595)
				Float tmp22 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(595)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(595)
				Float tmp24 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(595)
				Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(595)
				Float tmp26 = ::Math_obj::sqrt(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(595)
				Float _ay_length = tmp26;		HX_STACK_VAR(_ay_length,"_ay_length");
				HX_STACK_LINE(595)
				Float tmp27 = (_az_x * _az_x);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(595)
				Float tmp28 = (_az_y * _az_y);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(595)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(595)
				Float tmp30 = (_az_z * _az_z);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(595)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(595)
				Float tmp32 = ::Math_obj::sqrt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(595)
				Float _az_length = tmp32;		HX_STACK_VAR(_az_length,"_az_length");
				HX_STACK_LINE(595)
				bool tmp33 = (_quaternion == null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(595)
				if ((tmp33)){
					HX_STACK_LINE(595)
					::phoenix::Quaternion tmp34 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(595)
					_quaternion = tmp34;
				}
				HX_STACK_LINE(595)
				bool tmp34 = (_position == null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(595)
				if ((tmp34)){
					HX_STACK_LINE(595)
					Float tmp35 = te->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(595)
					Float tmp36 = te->__get((int)13);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(595)
					Float tmp37 = te->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(595)
					::phoenix::Vector tmp38 = ::phoenix::Vector_obj::__new(tmp35,tmp36,tmp37,null());		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(595)
					_position = tmp38;
				}
				else{
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						Float tmp35 = te->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(595)
						Float _x = tmp35;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(595)
						_position->x = _x;
						HX_STACK_LINE(595)
						bool tmp36 = _position->_construct;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(595)
						if ((tmp36)){
							HX_STACK_LINE(595)
							_position->x;
						}
						else{
							HX_STACK_LINE(595)
							bool tmp37 = (_position->listen_x != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(595)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(595)
							if ((tmp37)){
								HX_STACK_LINE(595)
								bool tmp39 = _position->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(595)
								tmp38 = !(tmp40);
							}
							else{
								HX_STACK_LINE(595)
								tmp38 = false;
							}
							HX_STACK_LINE(595)
							if ((tmp38)){
								HX_STACK_LINE(595)
								Float tmp39 = _x;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								_position->listen_x(tmp39);
							}
							HX_STACK_LINE(595)
							_position->x;
						}
					}
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						Float tmp35 = te->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(595)
						Float _y = tmp35;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(595)
						_position->y = _y;
						HX_STACK_LINE(595)
						bool tmp36 = _position->_construct;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(595)
						if ((tmp36)){
							HX_STACK_LINE(595)
							_position->y;
						}
						else{
							HX_STACK_LINE(595)
							bool tmp37 = (_position->listen_y != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(595)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(595)
							if ((tmp37)){
								HX_STACK_LINE(595)
								bool tmp39 = _position->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(595)
								tmp38 = !(tmp40);
							}
							else{
								HX_STACK_LINE(595)
								tmp38 = false;
							}
							HX_STACK_LINE(595)
							if ((tmp38)){
								HX_STACK_LINE(595)
								Float tmp39 = _y;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								_position->listen_y(tmp39);
							}
							HX_STACK_LINE(595)
							_position->y;
						}
					}
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						Float tmp35 = te->__get((int)14);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(595)
						Float _z = tmp35;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(595)
						_position->z = _z;
						HX_STACK_LINE(595)
						bool tmp36 = _position->_construct;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(595)
						if ((tmp36)){
							HX_STACK_LINE(595)
							_position->z;
						}
						else{
							HX_STACK_LINE(595)
							bool tmp37 = (_position->listen_z != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(595)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(595)
							if ((tmp37)){
								HX_STACK_LINE(595)
								bool tmp39 = _position->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(595)
								tmp38 = !(tmp40);
							}
							else{
								HX_STACK_LINE(595)
								tmp38 = false;
							}
							HX_STACK_LINE(595)
							if ((tmp38)){
								HX_STACK_LINE(595)
								Float tmp39 = _z;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								_position->listen_z(tmp39);
							}
							HX_STACK_LINE(595)
							_position->z;
						}
					}
				}
				HX_STACK_LINE(595)
				bool tmp35 = (_scale == null());		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(595)
				if ((tmp35)){
					HX_STACK_LINE(595)
					::phoenix::Vector tmp36 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(595)
					_scale = tmp36;
				}
				else{
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						_scale->x = _ax_length;
						HX_STACK_LINE(595)
						bool tmp36 = _scale->_construct;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(595)
						if ((tmp36)){
							HX_STACK_LINE(595)
							_scale->x;
						}
						else{
							HX_STACK_LINE(595)
							bool tmp37 = (_scale->listen_x != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(595)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(595)
							if ((tmp37)){
								HX_STACK_LINE(595)
								bool tmp39 = _scale->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(595)
								tmp38 = !(tmp40);
							}
							else{
								HX_STACK_LINE(595)
								tmp38 = false;
							}
							HX_STACK_LINE(595)
							if ((tmp38)){
								HX_STACK_LINE(595)
								Float tmp39 = _ax_length;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								_scale->listen_x(tmp39);
							}
							HX_STACK_LINE(595)
							_scale->x;
						}
					}
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						_scale->y = _ay_length;
						HX_STACK_LINE(595)
						bool tmp36 = _scale->_construct;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(595)
						if ((tmp36)){
							HX_STACK_LINE(595)
							_scale->y;
						}
						else{
							HX_STACK_LINE(595)
							bool tmp37 = (_scale->listen_y != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(595)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(595)
							if ((tmp37)){
								HX_STACK_LINE(595)
								bool tmp39 = _scale->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(595)
								tmp38 = !(tmp40);
							}
							else{
								HX_STACK_LINE(595)
								tmp38 = false;
							}
							HX_STACK_LINE(595)
							if ((tmp38)){
								HX_STACK_LINE(595)
								Float tmp39 = _ay_length;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								_scale->listen_y(tmp39);
							}
							HX_STACK_LINE(595)
							_scale->y;
						}
					}
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						_scale->z = _az_length;
						HX_STACK_LINE(595)
						bool tmp36 = _scale->_construct;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(595)
						if ((tmp36)){
							HX_STACK_LINE(595)
							_scale->z;
						}
						else{
							HX_STACK_LINE(595)
							bool tmp37 = (_scale->listen_z != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(595)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(595)
							if ((tmp37)){
								HX_STACK_LINE(595)
								bool tmp39 = _scale->ignore_listeners;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(595)
								tmp38 = !(tmp40);
							}
							else{
								HX_STACK_LINE(595)
								tmp38 = false;
							}
							HX_STACK_LINE(595)
							if ((tmp38)){
								HX_STACK_LINE(595)
								Float tmp39 = _az_length;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								_scale->listen_z(tmp39);
							}
							HX_STACK_LINE(595)
							_scale->z;
						}
					}
				}
				HX_STACK_LINE(595)
				matrix->elements = _this->elements->concat(Array_obj< Float >::__new());
				HX_STACK_LINE(595)
				Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
				HX_STACK_LINE(595)
				Float tmp36 = _ax_length;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)0],tmp36);
				HX_STACK_LINE(595)
				Float tmp37 = _ax_length;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)1],tmp37);
				HX_STACK_LINE(595)
				Float tmp38 = _ax_length;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)2],tmp38);
				HX_STACK_LINE(595)
				Float tmp39 = _ay_length;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)4],tmp39);
				HX_STACK_LINE(595)
				Float tmp40 = _ay_length;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)5],tmp40);
				HX_STACK_LINE(595)
				Float tmp41 = _ay_length;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)6],tmp41);
				HX_STACK_LINE(595)
				Float tmp42 = _az_length;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)8],tmp42);
				HX_STACK_LINE(595)
				Float tmp43 = _az_length;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)9],tmp43);
				HX_STACK_LINE(595)
				Float tmp44 = _az_length;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(595)
				hx::DivEq(me[(int)10],tmp44);
				HX_STACK_LINE(595)
				::phoenix::Matrix tmp45 = matrix;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(595)
				_quaternion->setFromRotationMatrix(tmp45);
				HX_STACK_LINE(595)
				bool tmp46 = (_this->_transform == null());		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(595)
				if ((tmp46)){
					HX_STACK_LINE(595)
					::phoenix::MatrixTransform tmp47 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(595)
					_this->_transform = tmp47;
				}
				else{
					HX_STACK_LINE(595)
					_this->_transform->pos = _position;
					HX_STACK_LINE(595)
					_this->_transform->rotation = _quaternion;
					HX_STACK_LINE(595)
					_this->_transform->scale = _scale;
				}
				HX_STACK_LINE(595)
				tmp3 = _this->_transform;
			}
			HX_STACK_LINE(595)
			::phoenix::MatrixTransform _transform = tmp3;		HX_STACK_VAR(_transform,"_transform");
			HX_STACK_LINE(597)
			{
				HX_STACK_LINE(597)
				::phoenix::Vector _p = _transform->pos;		HX_STACK_VAR(_p,"_p");
				HX_STACK_LINE(597)
				this->pos = _p;
				HX_STACK_LINE(597)
				bool tmp4 = (_p != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(597)
				if ((tmp4)){
					HX_STACK_LINE(597)
					::phoenix::Vector tmp5 = this->pos;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(597)
					Dynamic tmp6 = this->_pos_change_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(597)
					::phoenix::Vector_obj::Listen(tmp5,tmp6);
					HX_STACK_LINE(597)
					{
						HX_STACK_LINE(597)
						Dynamic tmp7 = this->pos_changed_dyn();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(597)
						bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(597)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(597)
						if ((tmp8)){
							HX_STACK_LINE(597)
							bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(597)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(597)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(597)
							tmp9 = !(tmp12);
						}
						else{
							HX_STACK_LINE(597)
							tmp9 = false;
						}
						HX_STACK_LINE(597)
						if ((tmp9)){
							HX_STACK_LINE(597)
							::phoenix::Vector tmp10 = this->pos;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(597)
							this->pos_changed(tmp10);
						}
					}
				}
				HX_STACK_LINE(597)
				this->pos;
			}
			HX_STACK_LINE(598)
			{
				HX_STACK_LINE(598)
				::phoenix::Quaternion _r = _transform->rotation;		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(598)
				this->rotation = _r;
				HX_STACK_LINE(598)
				bool tmp4 = (_r != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(598)
				if ((tmp4)){
					HX_STACK_LINE(598)
					{
						HX_STACK_LINE(598)
						::phoenix::Quaternion tmp5 = this->rotation;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(598)
						::phoenix::Quaternion _q = tmp5;		HX_STACK_VAR(_q,"_q");
						HX_STACK_LINE(598)
						Dynamic tmp6 = this->_rotation_change_dyn();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(598)
						Dynamic listener = tmp6;		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(598)
						_q->listen_x = listener;
						HX_STACK_LINE(598)
						_q->listen_y = listener;
						HX_STACK_LINE(598)
						_q->listen_z = listener;
						HX_STACK_LINE(598)
						_q->listen_w = listener;
					}
					HX_STACK_LINE(598)
					{
						HX_STACK_LINE(598)
						Dynamic tmp5 = this->rotation_changed_dyn();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(598)
						bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(598)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(598)
						if ((tmp6)){
							HX_STACK_LINE(598)
							bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(598)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(598)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(598)
							tmp7 = !(tmp10);
						}
						else{
							HX_STACK_LINE(598)
							tmp7 = false;
						}
						HX_STACK_LINE(598)
						if ((tmp7)){
							HX_STACK_LINE(598)
							::phoenix::Quaternion tmp8 = this->rotation;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(598)
							this->rotation_changed(tmp8);
						}
					}
				}
				HX_STACK_LINE(598)
				this->rotation;
			}
			HX_STACK_LINE(599)
			{
				HX_STACK_LINE(599)
				::phoenix::Vector _s = _transform->scale;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(599)
				this->scale = _s;
				HX_STACK_LINE(599)
				bool tmp4 = (_s != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(599)
				if ((tmp4)){
					HX_STACK_LINE(599)
					::phoenix::Vector tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(599)
					Dynamic tmp6 = this->_scale_change_dyn();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(599)
					::phoenix::Vector_obj::Listen(tmp5,tmp6);
					HX_STACK_LINE(599)
					{
						HX_STACK_LINE(599)
						Dynamic tmp7 = this->scale_changed_dyn();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(599)
						bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(599)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(599)
						if ((tmp8)){
							HX_STACK_LINE(599)
							bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(599)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(599)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(599)
							tmp9 = !(tmp12);
						}
						else{
							HX_STACK_LINE(599)
							tmp9 = false;
						}
						HX_STACK_LINE(599)
						if ((tmp9)){
							HX_STACK_LINE(599)
							::phoenix::Vector tmp10 = this->scale;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(599)
							this->scale_changed(tmp10);
						}
					}
				}
				HX_STACK_LINE(599)
				this->scale;
			}
		}
		HX_STACK_LINE(603)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,decompose,return )

::phoenix::Matrix Spatial_obj::get_matrix( ){
	HX_STACK_FRAME("phoenix.Spatial","get_matrix",0x73a8ef13,"phoenix.Spatial.get_matrix","phoenix/Transform.hx",607,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(609)
	::phoenix::Matrix tmp = this->matrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Spatial_obj,get_matrix,return )

::phoenix::Matrix Spatial_obj::set_matrix( ::phoenix::Matrix _m){
	HX_STACK_FRAME("phoenix.Spatial","set_matrix",0x77268d87,"phoenix.Spatial.set_matrix","phoenix/Transform.hx",613,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(615)
	this->matrix = _m;
	HX_STACK_LINE(618)
	bool tmp = (_m != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(618)
	if ((tmp)){
		HX_STACK_LINE(619)
		::snow::api::buffers::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			::phoenix::Matrix tmp2 = this->matrix;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(619)
			::phoenix::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(619)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(619)
			while((true)){
				HX_STACK_LINE(619)
				bool tmp3 = (i < (int)16);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(619)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(619)
				if ((tmp4)){
					HX_STACK_LINE(619)
					break;
				}
				HX_STACK_LINE(619)
				{
					HX_STACK_LINE(619)
					::snow::api::buffers::ArrayBufferView this1 = _this->_float32array;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(619)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),_this->elements->__get(i));
				}
				HX_STACK_LINE(619)
				++(i);
			}
			HX_STACK_LINE(619)
			tmp1 = _this->_float32array;
		}
		HX_STACK_LINE(619)
		this->floats = tmp1;
	}
	HX_STACK_LINE(622)
	::phoenix::Matrix tmp1 = this->matrix;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(622)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,set_matrix,return )

Void Spatial_obj::propagate_pos( ::phoenix::Vector _p){
{
		HX_STACK_FRAME("phoenix.Spatial","propagate_pos",0x23adb615,"phoenix.Spatial.propagate_pos","phoenix/Transform.hx",626,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(627)
		Dynamic tmp = this->pos_changed_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(627)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(627)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(627)
		if ((tmp1)){
			HX_STACK_LINE(627)
			bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(627)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(627)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(627)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(627)
			tmp2 = false;
		}
		HX_STACK_LINE(627)
		if ((tmp2)){
			HX_STACK_LINE(628)
			::phoenix::Vector tmp3 = _p;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(628)
			this->pos_changed(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,propagate_pos,(void))

Void Spatial_obj::propagate_rotation( ::phoenix::Quaternion _r){
{
		HX_STACK_FRAME("phoenix.Spatial","propagate_rotation",0xc1f8711d,"phoenix.Spatial.propagate_rotation","phoenix/Transform.hx",632,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_r,"_r")
		HX_STACK_LINE(633)
		Dynamic tmp = this->rotation_changed_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(633)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(633)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(633)
		if ((tmp1)){
			HX_STACK_LINE(633)
			bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(633)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(633)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(633)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(633)
			tmp2 = false;
		}
		HX_STACK_LINE(633)
		if ((tmp2)){
			HX_STACK_LINE(634)
			::phoenix::Quaternion tmp3 = _r;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(634)
			this->rotation_changed(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,propagate_rotation,(void))

Void Spatial_obj::propagate_scale( ::phoenix::Vector _s){
{
		HX_STACK_FRAME("phoenix.Spatial","propagate_scale",0x654f094b,"phoenix.Spatial.propagate_scale","phoenix/Transform.hx",638,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_s,"_s")
		HX_STACK_LINE(639)
		Dynamic tmp = this->scale_changed_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(639)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(639)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(639)
		if ((tmp1)){
			HX_STACK_LINE(639)
			bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(639)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(639)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(639)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(639)
			tmp2 = false;
		}
		HX_STACK_LINE(639)
		if ((tmp2)){
			HX_STACK_LINE(640)
			::phoenix::Vector tmp3 = _s;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(640)
			this->scale_changed(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,propagate_scale,(void))

::phoenix::Vector Spatial_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Spatial","set_pos",0x70d65e8e,"phoenix.Spatial.set_pos","phoenix/Transform.hx",644,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(646)
	this->pos = _p;
	HX_STACK_LINE(648)
	bool tmp = (_p != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(648)
	if ((tmp)){
		HX_STACK_LINE(650)
		::phoenix::Vector tmp1 = this->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(650)
		Dynamic tmp2 = this->_pos_change_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(650)
		::phoenix::Vector_obj::Listen(tmp1,tmp2);
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(652)
			Dynamic tmp3 = this->pos_changed_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(652)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(652)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(652)
			if ((tmp4)){
				HX_STACK_LINE(652)
				bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(652)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(652)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(652)
				tmp5 = !(tmp8);
			}
			else{
				HX_STACK_LINE(652)
				tmp5 = false;
			}
			HX_STACK_LINE(652)
			if ((tmp5)){
				HX_STACK_LINE(652)
				::phoenix::Vector tmp6 = this->pos;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(652)
				this->pos_changed(tmp6);
			}
		}
	}
	HX_STACK_LINE(656)
	::phoenix::Vector tmp1 = this->pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(656)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,set_pos,return )

::phoenix::Quaternion Spatial_obj::set_rotation( ::phoenix::Quaternion _r){
	HX_STACK_FRAME("phoenix.Spatial","set_rotation",0x199d7204,"phoenix.Spatial.set_rotation","phoenix/Transform.hx",660,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(662)
	this->rotation = _r;
	HX_STACK_LINE(664)
	bool tmp = (_r != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(664)
	if ((tmp)){
		HX_STACK_LINE(666)
		{
			HX_STACK_LINE(666)
			::phoenix::Quaternion tmp1 = this->rotation;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(666)
			::phoenix::Quaternion _q = tmp1;		HX_STACK_VAR(_q,"_q");
			HX_STACK_LINE(666)
			Dynamic tmp2 = this->_rotation_change_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(666)
			Dynamic listener = tmp2;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(666)
			_q->listen_x = listener;
			HX_STACK_LINE(666)
			_q->listen_y = listener;
			HX_STACK_LINE(666)
			_q->listen_z = listener;
			HX_STACK_LINE(666)
			_q->listen_w = listener;
		}
		HX_STACK_LINE(668)
		{
			HX_STACK_LINE(668)
			Dynamic tmp1 = this->rotation_changed_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(668)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(668)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(668)
			if ((tmp2)){
				HX_STACK_LINE(668)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(668)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(668)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(668)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(668)
				tmp3 = false;
			}
			HX_STACK_LINE(668)
			if ((tmp3)){
				HX_STACK_LINE(668)
				::phoenix::Quaternion tmp4 = this->rotation;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(668)
				this->rotation_changed(tmp4);
			}
		}
	}
	HX_STACK_LINE(672)
	::phoenix::Quaternion tmp1 = this->rotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(672)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,set_rotation,return )

::phoenix::Vector Spatial_obj::set_scale( ::phoenix::Vector _s){
	HX_STACK_FRAME("phoenix.Spatial","set_scale",0xcc4d8204,"phoenix.Spatial.set_scale","phoenix/Transform.hx",676,0x44da8ab2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(678)
	this->scale = _s;
	HX_STACK_LINE(680)
	bool tmp = (_s != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(680)
	if ((tmp)){
		HX_STACK_LINE(682)
		::phoenix::Vector tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(682)
		Dynamic tmp2 = this->_scale_change_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(682)
		::phoenix::Vector_obj::Listen(tmp1,tmp2);
		HX_STACK_LINE(684)
		{
			HX_STACK_LINE(684)
			Dynamic tmp3 = this->scale_changed_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(684)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(684)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(684)
			if ((tmp4)){
				HX_STACK_LINE(684)
				bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(684)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(684)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(684)
				tmp5 = !(tmp8);
			}
			else{
				HX_STACK_LINE(684)
				tmp5 = false;
			}
			HX_STACK_LINE(684)
			if ((tmp5)){
				HX_STACK_LINE(684)
				::phoenix::Vector tmp6 = this->scale;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(684)
				this->scale_changed(tmp6);
			}
		}
	}
	HX_STACK_LINE(688)
	::phoenix::Vector tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(688)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,set_scale,return )

Void Spatial_obj::_pos_change( Float _v){
{
		HX_STACK_FRAME("phoenix.Spatial","_pos_change",0xe8244bf1,"phoenix.Spatial._pos_change","phoenix/Transform.hx",695,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(695)
		::phoenix::Vector tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(695)
		this->set_pos(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,_pos_change,(void))

Void Spatial_obj::_scale_change( Float _v){
{
		HX_STACK_FRAME("phoenix.Spatial","_scale_change",0xaf1def3b,"phoenix.Spatial._scale_change","phoenix/Transform.hx",697,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(697)
		::phoenix::Vector tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(697)
		this->set_scale(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,_scale_change,(void))

Void Spatial_obj::_rotation_change( Float _v){
{
		HX_STACK_FRAME("phoenix.Spatial","_rotation_change",0x09a321db,"phoenix.Spatial._rotation_change","phoenix/Transform.hx",699,0x44da8ab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(699)
		::phoenix::Quaternion tmp = this->rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(699)
		this->set_rotation(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spatial_obj,_rotation_change,(void))


Spatial_obj::Spatial_obj()
{
}

void Spatial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spatial);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(floats,"floats");
	HX_MARK_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_MARK_MEMBER_NAME(auto_decompose,"auto_decompose");
	HX_MARK_MEMBER_NAME(pos_changed,"pos_changed");
	HX_MARK_MEMBER_NAME(rotation_changed,"rotation_changed");
	HX_MARK_MEMBER_NAME(scale_changed,"scale_changed");
	HX_MARK_MEMBER_NAME(_setup,"_setup");
	HX_MARK_END_CLASS();
}

void Spatial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(floats,"floats");
	HX_VISIT_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_VISIT_MEMBER_NAME(auto_decompose,"auto_decompose");
	HX_VISIT_MEMBER_NAME(pos_changed,"pos_changed");
	HX_VISIT_MEMBER_NAME(rotation_changed,"rotation_changed");
	HX_VISIT_MEMBER_NAME(scale_changed,"scale_changed");
	HX_VISIT_MEMBER_NAME(_setup,"_setup");
}

Dynamic Spatial_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return inCallProp == hx::paccAlways ? get_matrix() : matrix; }
		if (HX_FIELD_EQ(inName,"floats") ) { return floats; }
		if (HX_FIELD_EQ(inName,"_setup") ) { return _setup; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pos_changed") ) { return pos_changed; }
		if (HX_FIELD_EQ(inName,"_pos_change") ) { return _pos_change_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scale_changed") ) { return scale_changed; }
		if (HX_FIELD_EQ(inName,"propagate_pos") ) { return propagate_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"_scale_change") ) { return _scale_change_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"auto_decompose") ) { return auto_decompose; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propagate_scale") ) { return propagate_scale_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { return ignore_listeners; }
		if (HX_FIELD_EQ(inName,"rotation_changed") ) { return rotation_changed; }
		if (HX_FIELD_EQ(inName,"_rotation_change") ) { return _rotation_change_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"propagate_rotation") ) { return propagate_rotation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spatial_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue);scale=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue);matrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floats") ) { floats=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setup") ) { _setup=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue);rotation=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pos_changed") ) { pos_changed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scale_changed") ) { scale_changed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"auto_decompose") ) { auto_decompose=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { ignore_listeners=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation_changed") ) { rotation_changed=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Spatial_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Spatial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("floats","\x57","\x23","\x56","\x41"));
	outFields->push(HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"));
	outFields->push(HX_HCSTRING("auto_decompose","\xa1","\x5f","\x1e","\x26"));
	outFields->push(HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Spatial_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Spatial_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Spatial_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Spatial_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Spatial_obj,floats),HX_HCSTRING("floats","\x57","\x23","\x56","\x41")},
	{hx::fsBool,(int)offsetof(Spatial_obj,ignore_listeners),HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7")},
	{hx::fsBool,(int)offsetof(Spatial_obj,auto_decompose),HX_HCSTRING("auto_decompose","\xa1","\x5f","\x1e","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Spatial_obj,pos_changed),HX_HCSTRING("pos_changed","\x09","\x1c","\x90","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Spatial_obj,rotation_changed),HX_HCSTRING("rotation_changed","\xb3","\xb5","\x87","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Spatial_obj,scale_changed),HX_HCSTRING("scale_changed","\xff","\x72","\xf4","\xf5")},
	{hx::fsBool,(int)offsetof(Spatial_obj,_setup),HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("floats","\x57","\x23","\x56","\x41"),
	HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"),
	HX_HCSTRING("auto_decompose","\xa1","\x5f","\x1e","\x26"),
	HX_HCSTRING("pos_changed","\x09","\x1c","\x90","\x8a"),
	HX_HCSTRING("rotation_changed","\xb3","\xb5","\x87","\xa1"),
	HX_HCSTRING("scale_changed","\xff","\x72","\xf4","\xf5"),
	HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("propagate_pos","\x7e","\x73","\xe0","\x46"),
	HX_HCSTRING("propagate_rotation","\x14","\x77","\x31","\x38"),
	HX_HCSTRING("propagate_scale","\xf4","\xb2","\xba","\xc8"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("_pos_change","\x1a","\xad","\x5d","\x41"),
	HX_HCSTRING("_scale_change","\xa4","\xac","\x50","\xd2"),
	HX_HCSTRING("_rotation_change","\x12","\xec","\x6b","\xa4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spatial_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spatial_obj::__mClass,"__mClass");
};

#endif

hx::Class Spatial_obj::__mClass;

void Spatial_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Spatial","\xc5","\x58","\x1c","\x44");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Spatial_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Spatial_obj >;
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
