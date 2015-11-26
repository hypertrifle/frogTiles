#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Vector_obj::__construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{
HX_STACK_FRAME("phoenix.Vector","new",0x8c9315d4,"phoenix.Vector.new","phoenix/Vector.hx",6,0x5d0bf7fb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__x,"_x")
HX_STACK_ARG(__o__y,"_y")
HX_STACK_ARG(__o__z,"_z")
HX_STACK_ARG(__o__w,"_w")
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
Float _z = __o__z.Default(0);
Float _w = __o__w.Default(0);
{
	HX_STACK_LINE(25)
	this->_construct = false;
	HX_STACK_LINE(19)
	this->ignore_listeners = false;
	HX_STACK_LINE(11)
	this->w = ((Float)0);
	HX_STACK_LINE(10)
	this->z = ((Float)0);
	HX_STACK_LINE(9)
	this->y = ((Float)0);
	HX_STACK_LINE(8)
	this->x = ((Float)0);
	HX_STACK_LINE(29)
	this->_construct = true;
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		this->x = _x;
		HX_STACK_LINE(31)
		bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(31)
			this->x;
		}
		else{
			HX_STACK_LINE(31)
			Dynamic tmp1 = this->listen_x_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			if ((tmp2)){
				HX_STACK_LINE(31)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(31)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(31)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(31)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(31)
				tmp3 = false;
			}
			HX_STACK_LINE(31)
			if ((tmp3)){
				HX_STACK_LINE(31)
				Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(31)
				this->listen_x(tmp4);
			}
			HX_STACK_LINE(31)
			this->x;
		}
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		this->y = _y;
		HX_STACK_LINE(32)
		bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		if ((tmp)){
			HX_STACK_LINE(32)
			this->y;
		}
		else{
			HX_STACK_LINE(32)
			Dynamic tmp1 = this->listen_y_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			if ((tmp2)){
				HX_STACK_LINE(32)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(32)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(32)
				tmp3 = false;
			}
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(32)
				Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				this->listen_y(tmp4);
			}
			HX_STACK_LINE(32)
			this->y;
		}
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		this->z = _z;
		HX_STACK_LINE(33)
		bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(33)
			this->z;
		}
		else{
			HX_STACK_LINE(33)
			Dynamic tmp1 = this->listen_z_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			if ((tmp2)){
				HX_STACK_LINE(33)
				bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(33)
				tmp3 = !(tmp6);
			}
			else{
				HX_STACK_LINE(33)
				tmp3 = false;
			}
			HX_STACK_LINE(33)
			if ((tmp3)){
				HX_STACK_LINE(33)
				Float tmp4 = _z;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				this->listen_z(tmp4);
			}
			HX_STACK_LINE(33)
			this->z;
		}
	}
	HX_STACK_LINE(34)
	this->w = _w;
	HX_STACK_LINE(36)
	this->_construct = false;
}
;
	return null();
}

//Vector_obj::~Vector_obj() { }

Dynamic Vector_obj::__CreateEmpty() { return  new Vector_obj; }
hx::ObjectPtr< Vector_obj > Vector_obj::__new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(__o__x,__o__y,__o__z,__o__w);
	return _result_;}

Dynamic Vector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_obj > _result_ = new Vector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::phoenix::Vector Vector_obj::copy_from( ::phoenix::Vector _other){
	HX_STACK_FRAME("phoenix.Vector","copy_from",0xcfdc49e8,"phoenix.Vector.copy_from","phoenix/Vector.hx",40,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_other,"_other")
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		Float _x = _other->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(42)
		Float _y = _other->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(42)
		Float _z = _other->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(42)
		bool tmp = this->ignore_listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		bool prev = tmp;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(42)
		this->ignore_listeners = true;
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			this->x = _x;
			HX_STACK_LINE(42)
			bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			if ((tmp1)){
				HX_STACK_LINE(42)
				this->x;
			}
			else{
				HX_STACK_LINE(42)
				Dynamic tmp2 = this->listen_x_dyn();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				if ((tmp3)){
					HX_STACK_LINE(42)
					bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					tmp4 = !(tmp7);
				}
				else{
					HX_STACK_LINE(42)
					tmp4 = false;
				}
				HX_STACK_LINE(42)
				if ((tmp4)){
					HX_STACK_LINE(42)
					Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					this->listen_x(tmp5);
				}
				HX_STACK_LINE(42)
				this->x;
			}
		}
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			this->y = _y;
			HX_STACK_LINE(42)
			bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			if ((tmp1)){
				HX_STACK_LINE(42)
				this->y;
			}
			else{
				HX_STACK_LINE(42)
				Dynamic tmp2 = this->listen_y_dyn();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				if ((tmp3)){
					HX_STACK_LINE(42)
					bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					tmp4 = !(tmp7);
				}
				else{
					HX_STACK_LINE(42)
					tmp4 = false;
				}
				HX_STACK_LINE(42)
				if ((tmp4)){
					HX_STACK_LINE(42)
					Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					this->listen_y(tmp5);
				}
				HX_STACK_LINE(42)
				this->y;
			}
		}
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			this->z = _z;
			HX_STACK_LINE(42)
			bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			if ((tmp1)){
				HX_STACK_LINE(42)
				this->z;
			}
			else{
				HX_STACK_LINE(42)
				Dynamic tmp2 = this->listen_z_dyn();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				if ((tmp3)){
					HX_STACK_LINE(42)
					bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					tmp4 = !(tmp7);
				}
				else{
					HX_STACK_LINE(42)
					tmp4 = false;
				}
				HX_STACK_LINE(42)
				if ((tmp4)){
					HX_STACK_LINE(42)
					Float tmp5 = _z;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					this->listen_z(tmp5);
				}
				HX_STACK_LINE(42)
				this->z;
			}
		}
		HX_STACK_LINE(42)
		this->w = _other->w;
		HX_STACK_LINE(42)
		this->ignore_listeners = prev;
		HX_STACK_LINE(42)
		Dynamic tmp1 = this->listen_x_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		if ((tmp2)){
			HX_STACK_LINE(42)
			bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(42)
			tmp3 = false;
		}
		HX_STACK_LINE(42)
		if ((tmp3)){
			HX_STACK_LINE(42)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			this->listen_x(tmp4);
		}
		HX_STACK_LINE(42)
		Dynamic tmp4 = this->listen_y_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		if ((tmp5)){
			HX_STACK_LINE(42)
			bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(42)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(42)
			tmp6 = false;
		}
		HX_STACK_LINE(42)
		if ((tmp6)){
			HX_STACK_LINE(42)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			this->listen_y(tmp7);
		}
		HX_STACK_LINE(42)
		Dynamic tmp7 = this->listen_z_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		if ((tmp8)){
			HX_STACK_LINE(42)
			bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(42)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(42)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(42)
			tmp9 = false;
		}
		HX_STACK_LINE(42)
		if ((tmp9)){
			HX_STACK_LINE(42)
			Float tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			this->listen_z(tmp10);
		}
		HX_STACK_LINE(42)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(44)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,copy_from,return )

::phoenix::Vector Vector_obj::set( Float _x,Float _y,Float _z,Float _w){
	HX_STACK_FRAME("phoenix.Vector","set",0x8c96e116,"phoenix.Vector.set","phoenix/Vector.hx",48,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_LINE(50)
	bool tmp = this->ignore_listeners;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool prev = tmp;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(52)
	this->ignore_listeners = true;
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		this->x = _x;
		HX_STACK_LINE(54)
		bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(54)
			this->x;
		}
		else{
			HX_STACK_LINE(54)
			Dynamic tmp2 = this->listen_x_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			if ((tmp3)){
				HX_STACK_LINE(54)
				bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(54)
				tmp4 = false;
			}
			HX_STACK_LINE(54)
			if ((tmp4)){
				HX_STACK_LINE(54)
				Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				this->listen_x(tmp5);
			}
			HX_STACK_LINE(54)
			this->x;
		}
	}
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		this->y = _y;
		HX_STACK_LINE(55)
		bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(55)
			this->y;
		}
		else{
			HX_STACK_LINE(55)
			Dynamic tmp2 = this->listen_y_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			if ((tmp3)){
				HX_STACK_LINE(55)
				bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(55)
				tmp4 = false;
			}
			HX_STACK_LINE(55)
			if ((tmp4)){
				HX_STACK_LINE(55)
				Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				this->listen_y(tmp5);
			}
			HX_STACK_LINE(55)
			this->y;
		}
	}
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		this->z = _z;
		HX_STACK_LINE(56)
		bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		if ((tmp1)){
			HX_STACK_LINE(56)
			this->z;
		}
		else{
			HX_STACK_LINE(56)
			Dynamic tmp2 = this->listen_z_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			if ((tmp3)){
				HX_STACK_LINE(56)
				bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(56)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(56)
				tmp4 = false;
			}
			HX_STACK_LINE(56)
			if ((tmp4)){
				HX_STACK_LINE(56)
				Float tmp5 = _z;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				this->listen_z(tmp5);
			}
			HX_STACK_LINE(56)
			this->z;
		}
	}
	HX_STACK_LINE(57)
	this->w = _w;
	HX_STACK_LINE(59)
	this->ignore_listeners = prev;
	HX_STACK_LINE(61)
	Dynamic tmp1 = this->listen_x_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	if ((tmp2)){
		HX_STACK_LINE(61)
		bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(61)
		tmp3 = false;
	}
	HX_STACK_LINE(61)
	if ((tmp3)){
		HX_STACK_LINE(61)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		this->listen_x(tmp4);
	}
	HX_STACK_LINE(62)
	Dynamic tmp4 = this->listen_y_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	if ((tmp5)){
		HX_STACK_LINE(62)
		bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		tmp6 = !(tmp9);
	}
	else{
		HX_STACK_LINE(62)
		tmp6 = false;
	}
	HX_STACK_LINE(62)
	if ((tmp6)){
		HX_STACK_LINE(62)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		this->listen_y(tmp7);
	}
	HX_STACK_LINE(63)
	Dynamic tmp7 = this->listen_z_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(63)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(63)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(63)
	if ((tmp8)){
		HX_STACK_LINE(63)
		bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(63)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(63)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(63)
		tmp9 = !(tmp12);
	}
	else{
		HX_STACK_LINE(63)
		tmp9 = false;
	}
	HX_STACK_LINE(63)
	if ((tmp9)){
		HX_STACK_LINE(63)
		Float tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(63)
		this->listen_z(tmp10);
	}
	HX_STACK_LINE(65)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Vector_obj,set,return )

::phoenix::Vector Vector_obj::set_xy( Float _x,Float _y){
	HX_STACK_FRAME("phoenix.Vector","set_xy",0xbcfeefca,"phoenix.Vector.set_xy","phoenix/Vector.hx",69,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(71)
	bool tmp = this->ignore_listeners;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	bool prev = tmp;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(73)
	this->ignore_listeners = true;
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		this->x = _x;
		HX_STACK_LINE(75)
		bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(75)
			this->x;
		}
		else{
			HX_STACK_LINE(75)
			Dynamic tmp2 = this->listen_x_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			if ((tmp3)){
				HX_STACK_LINE(75)
				bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(75)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(75)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(75)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(75)
				tmp4 = false;
			}
			HX_STACK_LINE(75)
			if ((tmp4)){
				HX_STACK_LINE(75)
				Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(75)
				this->listen_x(tmp5);
			}
			HX_STACK_LINE(75)
			this->x;
		}
	}
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		this->y = _y;
		HX_STACK_LINE(76)
		bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		if ((tmp1)){
			HX_STACK_LINE(76)
			this->y;
		}
		else{
			HX_STACK_LINE(76)
			Dynamic tmp2 = this->listen_y_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			if ((tmp3)){
				HX_STACK_LINE(76)
				bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(76)
				tmp4 = false;
			}
			HX_STACK_LINE(76)
			if ((tmp4)){
				HX_STACK_LINE(76)
				Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				this->listen_y(tmp5);
			}
			HX_STACK_LINE(76)
			this->y;
		}
	}
	HX_STACK_LINE(78)
	this->ignore_listeners = prev;
	HX_STACK_LINE(80)
	Dynamic tmp1 = this->listen_x_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	if ((tmp2)){
		HX_STACK_LINE(80)
		bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(80)
		tmp3 = false;
	}
	HX_STACK_LINE(80)
	if ((tmp3)){
		HX_STACK_LINE(80)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		this->listen_x(tmp4);
	}
	HX_STACK_LINE(81)
	Dynamic tmp4 = this->listen_y_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	if ((tmp5)){
		HX_STACK_LINE(81)
		bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(81)
		tmp6 = !(tmp9);
	}
	else{
		HX_STACK_LINE(81)
		tmp6 = false;
	}
	HX_STACK_LINE(81)
	if ((tmp6)){
		HX_STACK_LINE(81)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		this->listen_y(tmp7);
	}
	HX_STACK_LINE(83)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,set_xy,return )

::phoenix::Vector Vector_obj::set_xyz( Float _x,Float _y,Float _z){
	HX_STACK_FRAME("phoenix.Vector","set_xyz",0xa212e170,"phoenix.Vector.set_xyz","phoenix/Vector.hx",87,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(89)
	bool tmp = this->ignore_listeners;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	bool prev = tmp;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(91)
	this->ignore_listeners = true;
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		this->x = _x;
		HX_STACK_LINE(93)
		bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(93)
			this->x;
		}
		else{
			HX_STACK_LINE(93)
			Dynamic tmp2 = this->listen_x_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			if ((tmp3)){
				HX_STACK_LINE(93)
				bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(93)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(93)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(93)
				tmp4 = false;
			}
			HX_STACK_LINE(93)
			if ((tmp4)){
				HX_STACK_LINE(93)
				Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(93)
				this->listen_x(tmp5);
			}
			HX_STACK_LINE(93)
			this->x;
		}
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		this->y = _y;
		HX_STACK_LINE(94)
		bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		if ((tmp1)){
			HX_STACK_LINE(94)
			this->y;
		}
		else{
			HX_STACK_LINE(94)
			Dynamic tmp2 = this->listen_y_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			if ((tmp3)){
				HX_STACK_LINE(94)
				bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(94)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(94)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(94)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(94)
				tmp4 = false;
			}
			HX_STACK_LINE(94)
			if ((tmp4)){
				HX_STACK_LINE(94)
				Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(94)
				this->listen_y(tmp5);
			}
			HX_STACK_LINE(94)
			this->y;
		}
	}
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		this->z = _z;
		HX_STACK_LINE(95)
		bool tmp1 = this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		if ((tmp1)){
			HX_STACK_LINE(95)
			this->z;
		}
		else{
			HX_STACK_LINE(95)
			Dynamic tmp2 = this->listen_z_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			if ((tmp3)){
				HX_STACK_LINE(95)
				bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				tmp4 = !(tmp7);
			}
			else{
				HX_STACK_LINE(95)
				tmp4 = false;
			}
			HX_STACK_LINE(95)
			if ((tmp4)){
				HX_STACK_LINE(95)
				Float tmp5 = _z;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				this->listen_z(tmp5);
			}
			HX_STACK_LINE(95)
			this->z;
		}
	}
	HX_STACK_LINE(97)
	this->ignore_listeners = prev;
	HX_STACK_LINE(99)
	Dynamic tmp1 = this->listen_x_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	if ((tmp2)){
		HX_STACK_LINE(99)
		bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(99)
		tmp3 = false;
	}
	HX_STACK_LINE(99)
	if ((tmp3)){
		HX_STACK_LINE(99)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		this->listen_x(tmp4);
	}
	HX_STACK_LINE(100)
	Dynamic tmp4 = this->listen_y_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(100)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(100)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(100)
	if ((tmp5)){
		HX_STACK_LINE(100)
		bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		tmp6 = !(tmp9);
	}
	else{
		HX_STACK_LINE(100)
		tmp6 = false;
	}
	HX_STACK_LINE(100)
	if ((tmp6)){
		HX_STACK_LINE(100)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		this->listen_y(tmp7);
	}
	HX_STACK_LINE(101)
	Dynamic tmp7 = this->listen_z_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(101)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(101)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(101)
	if ((tmp8)){
		HX_STACK_LINE(101)
		bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		tmp9 = !(tmp12);
	}
	else{
		HX_STACK_LINE(101)
		tmp9 = false;
	}
	HX_STACK_LINE(101)
	if ((tmp9)){
		HX_STACK_LINE(101)
		Float tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		this->listen_z(tmp10);
	}
	HX_STACK_LINE(103)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,set_xyz,return )

::phoenix::Vector Vector_obj::lerp_xy( Float _dest_x,Float _dest_y,Float _t){
	HX_STACK_FRAME("phoenix.Vector","lerp_xy",0x6359207d,"phoenix.Vector.lerp_xy","phoenix/Vector.hx",108,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dest_x,"_dest_x")
	HX_STACK_ARG(_dest_y,"_dest_y")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(110)
	{
		HX_STACK_LINE(111)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			Float value = tmp1;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(111)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(111)
			bool tmp2 = (t < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			if ((tmp2)){
				HX_STACK_LINE(111)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(111)
				bool tmp4 = (t > (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(111)
				if ((tmp4)){
					HX_STACK_LINE(111)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(111)
					tmp3 = t;
				}
			}
			HX_STACK_LINE(111)
			t = tmp3;
			HX_STACK_LINE(111)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			Float tmp6 = (_dest_x - value);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			tmp = (tmp4 + tmp7);
		}
		HX_STACK_LINE(111)
		Float _x = tmp;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(112)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(112)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(112)
			bool tmp3 = (t < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			if ((tmp3)){
				HX_STACK_LINE(112)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(112)
				bool tmp5 = (t > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(112)
				if ((tmp5)){
					HX_STACK_LINE(112)
					tmp4 = (int)1;
				}
				else{
					HX_STACK_LINE(112)
					tmp4 = t;
				}
			}
			HX_STACK_LINE(112)
			t = tmp4;
			HX_STACK_LINE(112)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			Float tmp7 = (_dest_y - value);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(112)
			tmp1 = (tmp5 + tmp8);
		}
		HX_STACK_LINE(112)
		Float _y = tmp1;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(110)
		bool tmp2 = this->ignore_listeners;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		bool prev = tmp2;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(110)
		this->ignore_listeners = true;
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			this->x = _x;
			HX_STACK_LINE(110)
			bool tmp3 = this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			if ((tmp3)){
				HX_STACK_LINE(110)
				this->x;
			}
			else{
				HX_STACK_LINE(110)
				Dynamic tmp4 = this->listen_x_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(110)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(110)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(110)
				if ((tmp5)){
					HX_STACK_LINE(110)
					bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(110)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(110)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(110)
					tmp6 = !(tmp9);
				}
				else{
					HX_STACK_LINE(110)
					tmp6 = false;
				}
				HX_STACK_LINE(110)
				if ((tmp6)){
					HX_STACK_LINE(110)
					Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(110)
					this->listen_x(tmp7);
				}
				HX_STACK_LINE(110)
				this->x;
			}
		}
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			this->y = _y;
			HX_STACK_LINE(110)
			bool tmp3 = this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			if ((tmp3)){
				HX_STACK_LINE(110)
				this->y;
			}
			else{
				HX_STACK_LINE(110)
				Dynamic tmp4 = this->listen_y_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(110)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(110)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(110)
				if ((tmp5)){
					HX_STACK_LINE(110)
					bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(110)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(110)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(110)
					tmp6 = !(tmp9);
				}
				else{
					HX_STACK_LINE(110)
					tmp6 = false;
				}
				HX_STACK_LINE(110)
				if ((tmp6)){
					HX_STACK_LINE(110)
					Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(110)
					this->listen_y(tmp7);
				}
				HX_STACK_LINE(110)
				this->y;
			}
		}
		HX_STACK_LINE(110)
		this->ignore_listeners = prev;
		HX_STACK_LINE(110)
		Dynamic tmp3 = this->listen_x_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		if ((tmp4)){
			HX_STACK_LINE(110)
			bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(110)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(110)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(110)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(110)
			tmp5 = false;
		}
		HX_STACK_LINE(110)
		if ((tmp5)){
			HX_STACK_LINE(110)
			Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(110)
			this->listen_x(tmp6);
		}
		HX_STACK_LINE(110)
		Dynamic tmp6 = this->listen_y_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(110)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(110)
		if ((tmp7)){
			HX_STACK_LINE(110)
			bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(110)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(110)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(110)
			tmp8 = false;
		}
		HX_STACK_LINE(110)
		if ((tmp8)){
			HX_STACK_LINE(110)
			Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(110)
			this->listen_y(tmp9);
		}
		HX_STACK_LINE(110)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(115)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,lerp_xy,return )

::phoenix::Vector Vector_obj::lerp_xyz( Float _dest_x,Float _dest_y,Float _dest_z,Float _t){
	HX_STACK_FRAME("phoenix.Vector","lerp_xyz",0x8aa34d5d,"phoenix.Vector.lerp_xyz","phoenix/Vector.hx",120,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dest_x,"_dest_x")
	HX_STACK_ARG(_dest_y,"_dest_y")
	HX_STACK_ARG(_dest_z,"_dest_z")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(123)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			Float value = tmp1;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(123)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(123)
			bool tmp2 = (t < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(123)
			if ((tmp2)){
				HX_STACK_LINE(123)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(123)
				bool tmp4 = (t > (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(123)
				if ((tmp4)){
					HX_STACK_LINE(123)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(123)
					tmp3 = t;
				}
			}
			HX_STACK_LINE(123)
			t = tmp3;
			HX_STACK_LINE(123)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(123)
			Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			Float tmp6 = (_dest_x - value);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			tmp = (tmp4 + tmp7);
		}
		HX_STACK_LINE(123)
		Float _x = tmp;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(124)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(124)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(124)
			bool tmp3 = (t < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			if ((tmp3)){
				HX_STACK_LINE(124)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(124)
				bool tmp5 = (t > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(124)
				if ((tmp5)){
					HX_STACK_LINE(124)
					tmp4 = (int)1;
				}
				else{
					HX_STACK_LINE(124)
					tmp4 = t;
				}
			}
			HX_STACK_LINE(124)
			t = tmp4;
			HX_STACK_LINE(124)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			Float tmp7 = (_dest_y - value);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			tmp1 = (tmp5 + tmp8);
		}
		HX_STACK_LINE(124)
		Float _y = tmp1;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(125)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			Float tmp3 = this->z;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			Float value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(125)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(125)
			bool tmp4 = (t < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			if ((tmp4)){
				HX_STACK_LINE(125)
				tmp5 = (int)0;
			}
			else{
				HX_STACK_LINE(125)
				bool tmp6 = (t > (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(125)
				if ((tmp6)){
					HX_STACK_LINE(125)
					tmp5 = (int)1;
				}
				else{
					HX_STACK_LINE(125)
					tmp5 = t;
				}
			}
			HX_STACK_LINE(125)
			t = tmp5;
			HX_STACK_LINE(125)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(125)
			Float tmp8 = (_dest_z - value);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(125)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(125)
			tmp2 = (tmp6 + tmp9);
		}
		HX_STACK_LINE(125)
		Float _z = tmp2;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(122)
		bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		bool prev = tmp3;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(122)
		this->ignore_listeners = true;
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			this->x = _x;
			HX_STACK_LINE(122)
			bool tmp4 = this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(122)
				this->x;
			}
			else{
				HX_STACK_LINE(122)
				Dynamic tmp5 = this->listen_x_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(122)
				if ((tmp6)){
					HX_STACK_LINE(122)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(122)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(122)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(122)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(122)
					tmp7 = false;
				}
				HX_STACK_LINE(122)
				if ((tmp7)){
					HX_STACK_LINE(122)
					Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(122)
					this->listen_x(tmp8);
				}
				HX_STACK_LINE(122)
				this->x;
			}
		}
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			this->y = _y;
			HX_STACK_LINE(122)
			bool tmp4 = this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(122)
				this->y;
			}
			else{
				HX_STACK_LINE(122)
				Dynamic tmp5 = this->listen_y_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(122)
				if ((tmp6)){
					HX_STACK_LINE(122)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(122)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(122)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(122)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(122)
					tmp7 = false;
				}
				HX_STACK_LINE(122)
				if ((tmp7)){
					HX_STACK_LINE(122)
					Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(122)
					this->listen_y(tmp8);
				}
				HX_STACK_LINE(122)
				this->y;
			}
		}
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			this->z = _z;
			HX_STACK_LINE(122)
			bool tmp4 = this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(122)
				this->z;
			}
			else{
				HX_STACK_LINE(122)
				Dynamic tmp5 = this->listen_z_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(122)
				if ((tmp6)){
					HX_STACK_LINE(122)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(122)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(122)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(122)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(122)
					tmp7 = false;
				}
				HX_STACK_LINE(122)
				if ((tmp7)){
					HX_STACK_LINE(122)
					Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(122)
					this->listen_z(tmp8);
				}
				HX_STACK_LINE(122)
				this->z;
			}
		}
		HX_STACK_LINE(122)
		this->ignore_listeners = prev;
		HX_STACK_LINE(122)
		Dynamic tmp4 = this->listen_x_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		if ((tmp5)){
			HX_STACK_LINE(122)
			bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(122)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(122)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(122)
			tmp6 = false;
		}
		HX_STACK_LINE(122)
		if ((tmp6)){
			HX_STACK_LINE(122)
			Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			this->listen_x(tmp7);
		}
		HX_STACK_LINE(122)
		Dynamic tmp7 = this->listen_y_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(122)
		if ((tmp8)){
			HX_STACK_LINE(122)
			bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(122)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(122)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(122)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(122)
			tmp9 = false;
		}
		HX_STACK_LINE(122)
		if ((tmp9)){
			HX_STACK_LINE(122)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(122)
			this->listen_y(tmp10);
		}
		HX_STACK_LINE(122)
		Dynamic tmp10 = this->listen_z_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(122)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(122)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(122)
		if ((tmp11)){
			HX_STACK_LINE(122)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(122)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(122)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(122)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(122)
			tmp12 = false;
		}
		HX_STACK_LINE(122)
		if ((tmp12)){
			HX_STACK_LINE(122)
			Float tmp13 = this->z;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(122)
			this->listen_z(tmp13);
		}
		HX_STACK_LINE(122)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(128)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Vector_obj,lerp_xyz,return )

::phoenix::Vector Vector_obj::lerp( ::phoenix::Vector _other,Float _t){
	HX_STACK_FRAME("phoenix.Vector","lerp",0x72cd9283,"phoenix.Vector.lerp","phoenix/Vector.hx",133,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_other,"_other")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(136)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(136)
			Float value = tmp1;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(136)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(136)
			bool tmp2 = (t < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			if ((tmp2)){
				HX_STACK_LINE(136)
				tmp3 = (int)0;
			}
			else{
				HX_STACK_LINE(136)
				bool tmp4 = (t > (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(136)
				if ((tmp4)){
					HX_STACK_LINE(136)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(136)
					tmp3 = t;
				}
			}
			HX_STACK_LINE(136)
			t = tmp3;
			HX_STACK_LINE(136)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			Float tmp6 = (_other->x - value);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(136)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(136)
			tmp = (tmp4 + tmp7);
		}
		HX_STACK_LINE(136)
		Float _x = tmp;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(137)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(137)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(137)
			bool tmp3 = (t < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			if ((tmp3)){
				HX_STACK_LINE(137)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(137)
				bool tmp5 = (t > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(137)
				if ((tmp5)){
					HX_STACK_LINE(137)
					tmp4 = (int)1;
				}
				else{
					HX_STACK_LINE(137)
					tmp4 = t;
				}
			}
			HX_STACK_LINE(137)
			t = tmp4;
			HX_STACK_LINE(137)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			Float tmp7 = (_other->y - value);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			tmp1 = (tmp5 + tmp8);
		}
		HX_STACK_LINE(137)
		Float _y = tmp1;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(138)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			Float tmp3 = this->z;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			Float value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(138)
			Float t = _t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(138)
			bool tmp4 = (t < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			if ((tmp4)){
				HX_STACK_LINE(138)
				tmp5 = (int)0;
			}
			else{
				HX_STACK_LINE(138)
				bool tmp6 = (t > (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				if ((tmp6)){
					HX_STACK_LINE(138)
					tmp5 = (int)1;
				}
				else{
					HX_STACK_LINE(138)
					tmp5 = t;
				}
			}
			HX_STACK_LINE(138)
			t = tmp5;
			HX_STACK_LINE(138)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			Float tmp8 = (_other->z - value);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			tmp2 = (tmp6 + tmp9);
		}
		HX_STACK_LINE(138)
		Float _z = tmp2;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(135)
		bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		bool prev = tmp3;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(135)
		this->ignore_listeners = true;
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			this->x = _x;
			HX_STACK_LINE(135)
			bool tmp4 = this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			if ((tmp4)){
				HX_STACK_LINE(135)
				this->x;
			}
			else{
				HX_STACK_LINE(135)
				Dynamic tmp5 = this->listen_x_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(135)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				if ((tmp6)){
					HX_STACK_LINE(135)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(135)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(135)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(135)
					tmp7 = false;
				}
				HX_STACK_LINE(135)
				if ((tmp7)){
					HX_STACK_LINE(135)
					Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					this->listen_x(tmp8);
				}
				HX_STACK_LINE(135)
				this->x;
			}
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			this->y = _y;
			HX_STACK_LINE(135)
			bool tmp4 = this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			if ((tmp4)){
				HX_STACK_LINE(135)
				this->y;
			}
			else{
				HX_STACK_LINE(135)
				Dynamic tmp5 = this->listen_y_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(135)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				if ((tmp6)){
					HX_STACK_LINE(135)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(135)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(135)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(135)
					tmp7 = false;
				}
				HX_STACK_LINE(135)
				if ((tmp7)){
					HX_STACK_LINE(135)
					Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					this->listen_y(tmp8);
				}
				HX_STACK_LINE(135)
				this->y;
			}
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			this->z = _z;
			HX_STACK_LINE(135)
			bool tmp4 = this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			if ((tmp4)){
				HX_STACK_LINE(135)
				this->z;
			}
			else{
				HX_STACK_LINE(135)
				Dynamic tmp5 = this->listen_z_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(135)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				if ((tmp6)){
					HX_STACK_LINE(135)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(135)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(135)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(135)
					tmp7 = false;
				}
				HX_STACK_LINE(135)
				if ((tmp7)){
					HX_STACK_LINE(135)
					Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					this->listen_z(tmp8);
				}
				HX_STACK_LINE(135)
				this->z;
			}
		}
		HX_STACK_LINE(135)
		this->ignore_listeners = prev;
		HX_STACK_LINE(135)
		Dynamic tmp4 = this->listen_x_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		if ((tmp5)){
			HX_STACK_LINE(135)
			bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(135)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(135)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(135)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(135)
			tmp6 = false;
		}
		HX_STACK_LINE(135)
		if ((tmp6)){
			HX_STACK_LINE(135)
			Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(135)
			this->listen_x(tmp7);
		}
		HX_STACK_LINE(135)
		Dynamic tmp7 = this->listen_y_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(135)
		if ((tmp8)){
			HX_STACK_LINE(135)
			bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(135)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(135)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(135)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(135)
			tmp9 = false;
		}
		HX_STACK_LINE(135)
		if ((tmp9)){
			HX_STACK_LINE(135)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(135)
			this->listen_y(tmp10);
		}
		HX_STACK_LINE(135)
		Dynamic tmp10 = this->listen_z_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(135)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(135)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(135)
		if ((tmp11)){
			HX_STACK_LINE(135)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(135)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(135)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(135)
			tmp12 = false;
		}
		HX_STACK_LINE(135)
		if ((tmp12)){
			HX_STACK_LINE(135)
			Float tmp13 = this->z;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(135)
			this->listen_z(tmp13);
		}
		HX_STACK_LINE(135)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(141)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,lerp,return )

::phoenix::Vector Vector_obj::weighted_average_xy( Float _dest_x,Float _dest_y,Float _slowness){
	HX_STACK_FRAME("phoenix.Vector","weighted_average_xy",0x071f19ff,"phoenix.Vector.weighted_average_xy","phoenix/Vector.hx",145,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dest_x,"_dest_x")
	HX_STACK_ARG(_dest_y,"_dest_y")
	HX_STACK_ARG(_slowness,"_slowness")
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(148)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(148)
			bool tmp1 = (slowness == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(148)
			if ((tmp1)){
				HX_STACK_LINE(148)
				slowness = ((Float)0.00000001);
			}
			HX_STACK_LINE(148)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			Float tmp3 = (slowness - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			Float tmp5 = _dest_x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			Float tmp7 = slowness;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			tmp = (Float(tmp6) / Float(tmp7));
		}
		HX_STACK_LINE(148)
		Float _x = tmp;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(149)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(149)
			bool tmp2 = (slowness == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			if ((tmp2)){
				HX_STACK_LINE(149)
				slowness = ((Float)0.00000001);
			}
			HX_STACK_LINE(149)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			Float tmp4 = (slowness - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			Float tmp6 = _dest_y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			Float tmp8 = slowness;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			tmp1 = (Float(tmp7) / Float(tmp8));
		}
		HX_STACK_LINE(149)
		Float _y = tmp1;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(147)
		bool tmp2 = this->ignore_listeners;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		bool prev = tmp2;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(147)
		this->ignore_listeners = true;
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			this->x = _x;
			HX_STACK_LINE(147)
			bool tmp3 = this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			if ((tmp3)){
				HX_STACK_LINE(147)
				this->x;
			}
			else{
				HX_STACK_LINE(147)
				Dynamic tmp4 = this->listen_x_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				if ((tmp5)){
					HX_STACK_LINE(147)
					bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(147)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(147)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(147)
					tmp6 = !(tmp9);
				}
				else{
					HX_STACK_LINE(147)
					tmp6 = false;
				}
				HX_STACK_LINE(147)
				if ((tmp6)){
					HX_STACK_LINE(147)
					Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(147)
					this->listen_x(tmp7);
				}
				HX_STACK_LINE(147)
				this->x;
			}
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			this->y = _y;
			HX_STACK_LINE(147)
			bool tmp3 = this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			if ((tmp3)){
				HX_STACK_LINE(147)
				this->y;
			}
			else{
				HX_STACK_LINE(147)
				Dynamic tmp4 = this->listen_y_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				if ((tmp5)){
					HX_STACK_LINE(147)
					bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(147)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(147)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(147)
					tmp6 = !(tmp9);
				}
				else{
					HX_STACK_LINE(147)
					tmp6 = false;
				}
				HX_STACK_LINE(147)
				if ((tmp6)){
					HX_STACK_LINE(147)
					Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(147)
					this->listen_y(tmp7);
				}
				HX_STACK_LINE(147)
				this->y;
			}
		}
		HX_STACK_LINE(147)
		this->ignore_listeners = prev;
		HX_STACK_LINE(147)
		Dynamic tmp3 = this->listen_x_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		if ((tmp4)){
			HX_STACK_LINE(147)
			bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(147)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(147)
			tmp5 = false;
		}
		HX_STACK_LINE(147)
		if ((tmp5)){
			HX_STACK_LINE(147)
			Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			this->listen_x(tmp6);
		}
		HX_STACK_LINE(147)
		Dynamic tmp6 = this->listen_y_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		if ((tmp7)){
			HX_STACK_LINE(147)
			bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(147)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(147)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(147)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(147)
			tmp8 = false;
		}
		HX_STACK_LINE(147)
		if ((tmp8)){
			HX_STACK_LINE(147)
			Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(147)
			this->listen_y(tmp9);
		}
		HX_STACK_LINE(147)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(152)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,weighted_average_xy,return )

::phoenix::Vector Vector_obj::weighted_average_xyz( Float _dest_x,Float _dest_y,Float _dest_z,Float _slowness){
	HX_STACK_FRAME("phoenix.Vector","weighted_average_xyz",0x3417a59b,"phoenix.Vector.weighted_average_xyz","phoenix/Vector.hx",156,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dest_x,"_dest_x")
	HX_STACK_ARG(_dest_y,"_dest_y")
	HX_STACK_ARG(_dest_z,"_dest_z")
	HX_STACK_ARG(_slowness,"_slowness")
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(159)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(159)
			bool tmp1 = (slowness == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(159)
			if ((tmp1)){
				HX_STACK_LINE(159)
				slowness = ((Float)0.00000001);
			}
			HX_STACK_LINE(159)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(159)
			Float tmp3 = (slowness - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			Float tmp5 = _dest_x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			Float tmp7 = slowness;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			tmp = (Float(tmp6) / Float(tmp7));
		}
		HX_STACK_LINE(159)
		Float _x = tmp;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(160)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(160)
			bool tmp2 = (slowness == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			if ((tmp2)){
				HX_STACK_LINE(160)
				slowness = ((Float)0.00000001);
			}
			HX_STACK_LINE(160)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			Float tmp4 = (slowness - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			Float tmp6 = _dest_y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			Float tmp8 = slowness;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(160)
			tmp1 = (Float(tmp7) / Float(tmp8));
		}
		HX_STACK_LINE(160)
		Float _y = tmp1;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(161)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			Float slowness = _slowness;		HX_STACK_VAR(slowness,"slowness");
			HX_STACK_LINE(161)
			bool tmp3 = (slowness == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			if ((tmp3)){
				HX_STACK_LINE(161)
				slowness = ((Float)0.00000001);
			}
			HX_STACK_LINE(161)
			Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			Float tmp5 = (slowness - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			Float tmp7 = _dest_z;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			Float tmp9 = slowness;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(161)
			tmp2 = (Float(tmp8) / Float(tmp9));
		}
		HX_STACK_LINE(161)
		Float _z = tmp2;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(158)
		bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		bool prev = tmp3;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(158)
		this->ignore_listeners = true;
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			this->x = _x;
			HX_STACK_LINE(158)
			bool tmp4 = this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			if ((tmp4)){
				HX_STACK_LINE(158)
				this->x;
			}
			else{
				HX_STACK_LINE(158)
				Dynamic tmp5 = this->listen_x_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(158)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(158)
				if ((tmp6)){
					HX_STACK_LINE(158)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(158)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(158)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(158)
					tmp7 = false;
				}
				HX_STACK_LINE(158)
				if ((tmp7)){
					HX_STACK_LINE(158)
					Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					this->listen_x(tmp8);
				}
				HX_STACK_LINE(158)
				this->x;
			}
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			this->y = _y;
			HX_STACK_LINE(158)
			bool tmp4 = this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			if ((tmp4)){
				HX_STACK_LINE(158)
				this->y;
			}
			else{
				HX_STACK_LINE(158)
				Dynamic tmp5 = this->listen_y_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(158)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(158)
				if ((tmp6)){
					HX_STACK_LINE(158)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(158)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(158)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(158)
					tmp7 = false;
				}
				HX_STACK_LINE(158)
				if ((tmp7)){
					HX_STACK_LINE(158)
					Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					this->listen_y(tmp8);
				}
				HX_STACK_LINE(158)
				this->y;
			}
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			this->z = _z;
			HX_STACK_LINE(158)
			bool tmp4 = this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			if ((tmp4)){
				HX_STACK_LINE(158)
				this->z;
			}
			else{
				HX_STACK_LINE(158)
				Dynamic tmp5 = this->listen_z_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(158)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(158)
				if ((tmp6)){
					HX_STACK_LINE(158)
					bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(158)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(158)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(158)
					tmp7 = false;
				}
				HX_STACK_LINE(158)
				if ((tmp7)){
					HX_STACK_LINE(158)
					Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					this->listen_z(tmp8);
				}
				HX_STACK_LINE(158)
				this->z;
			}
		}
		HX_STACK_LINE(158)
		this->ignore_listeners = prev;
		HX_STACK_LINE(158)
		Dynamic tmp4 = this->listen_x_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		if ((tmp5)){
			HX_STACK_LINE(158)
			bool tmp7 = this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(158)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(158)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(158)
			tmp6 = false;
		}
		HX_STACK_LINE(158)
		if ((tmp6)){
			HX_STACK_LINE(158)
			Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(158)
			this->listen_x(tmp7);
		}
		HX_STACK_LINE(158)
		Dynamic tmp7 = this->listen_y_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(158)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(158)
		if ((tmp8)){
			HX_STACK_LINE(158)
			bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(158)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(158)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(158)
			tmp9 = false;
		}
		HX_STACK_LINE(158)
		if ((tmp9)){
			HX_STACK_LINE(158)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			this->listen_y(tmp10);
		}
		HX_STACK_LINE(158)
		Dynamic tmp10 = this->listen_z_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(158)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(158)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(158)
		if ((tmp11)){
			HX_STACK_LINE(158)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(158)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(158)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(158)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(158)
			tmp12 = false;
		}
		HX_STACK_LINE(158)
		if ((tmp12)){
			HX_STACK_LINE(158)
			Float tmp13 = this->z;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(158)
			this->listen_z(tmp13);
		}
		HX_STACK_LINE(158)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(164)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Vector_obj,weighted_average_xyz,return )

::phoenix::Vector Vector_obj::_int( ){
	HX_STACK_FRAME("phoenix.Vector","int",0x8c8f5263,"phoenix.Vector.int","phoenix/Vector.hx",168,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	{
		HX_STACK_LINE(170)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		Float _x = tmp1;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(170)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(170)
		Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		Float _z = tmp5;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(170)
		bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		bool prev = tmp6;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(170)
		this->ignore_listeners = true;
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			this->x = _x;
			HX_STACK_LINE(170)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			if ((tmp7)){
				HX_STACK_LINE(170)
				this->x;
			}
			else{
				HX_STACK_LINE(170)
				Dynamic tmp8 = this->listen_x_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(170)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(170)
					tmp10 = false;
				}
				HX_STACK_LINE(170)
				if ((tmp10)){
					HX_STACK_LINE(170)
					Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					this->listen_x(tmp11);
				}
				HX_STACK_LINE(170)
				this->x;
			}
		}
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			this->y = _y;
			HX_STACK_LINE(170)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			if ((tmp7)){
				HX_STACK_LINE(170)
				this->y;
			}
			else{
				HX_STACK_LINE(170)
				Dynamic tmp8 = this->listen_y_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(170)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(170)
					tmp10 = false;
				}
				HX_STACK_LINE(170)
				if ((tmp10)){
					HX_STACK_LINE(170)
					Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					this->listen_y(tmp11);
				}
				HX_STACK_LINE(170)
				this->y;
			}
		}
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			this->z = _z;
			HX_STACK_LINE(170)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			if ((tmp7)){
				HX_STACK_LINE(170)
				this->z;
			}
			else{
				HX_STACK_LINE(170)
				Dynamic tmp8 = this->listen_z_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(170)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(170)
					tmp10 = false;
				}
				HX_STACK_LINE(170)
				if ((tmp10)){
					HX_STACK_LINE(170)
					Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					this->listen_z(tmp11);
				}
				HX_STACK_LINE(170)
				this->z;
			}
		}
		HX_STACK_LINE(170)
		this->ignore_listeners = prev;
		HX_STACK_LINE(170)
		Dynamic tmp7 = this->listen_x_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		if ((tmp8)){
			HX_STACK_LINE(170)
			bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(170)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(170)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(170)
			tmp9 = false;
		}
		HX_STACK_LINE(170)
		if ((tmp9)){
			HX_STACK_LINE(170)
			Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			this->listen_x(tmp10);
		}
		HX_STACK_LINE(170)
		Dynamic tmp10 = this->listen_y_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(170)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(170)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(170)
		if ((tmp11)){
			HX_STACK_LINE(170)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(170)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(170)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(170)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(170)
			tmp12 = false;
		}
		HX_STACK_LINE(170)
		if ((tmp12)){
			HX_STACK_LINE(170)
			Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(170)
			this->listen_y(tmp13);
		}
		HX_STACK_LINE(170)
		Dynamic tmp13 = this->listen_z_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(170)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(170)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(170)
		if ((tmp14)){
			HX_STACK_LINE(170)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(170)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(170)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(170)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(170)
			tmp15 = false;
		}
		HX_STACK_LINE(170)
		if ((tmp15)){
			HX_STACK_LINE(170)
			Float tmp16 = this->z;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(170)
			this->listen_z(tmp16);
		}
		HX_STACK_LINE(170)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(172)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,_int,return )

::phoenix::Vector Vector_obj::int_x( ){
	HX_STACK_FRAME("phoenix.Vector","int_x",0x4cd3445c,"phoenix.Vector.int_x","phoenix/Vector.hx",176,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		Float _x = tmp1;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(178)
		this->x = _x;
		HX_STACK_LINE(178)
		bool tmp2 = this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		if ((tmp2)){
			HX_STACK_LINE(178)
			this->x;
		}
		else{
			HX_STACK_LINE(178)
			Dynamic tmp3 = this->listen_x_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(178)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(178)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			if ((tmp4)){
				HX_STACK_LINE(178)
				bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(178)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(178)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(178)
				tmp5 = !(tmp8);
			}
			else{
				HX_STACK_LINE(178)
				tmp5 = false;
			}
			HX_STACK_LINE(178)
			if ((tmp5)){
				HX_STACK_LINE(178)
				Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(178)
				this->listen_x(tmp6);
			}
			HX_STACK_LINE(178)
			this->x;
		}
	}
	HX_STACK_LINE(180)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,int_x,return )

::phoenix::Vector Vector_obj::int_y( ){
	HX_STACK_FRAME("phoenix.Vector","int_y",0x4cd3445d,"phoenix.Vector.int_y","phoenix/Vector.hx",184,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		Float _y = tmp1;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(186)
		this->y = _y;
		HX_STACK_LINE(186)
		bool tmp2 = this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		if ((tmp2)){
			HX_STACK_LINE(186)
			this->y;
		}
		else{
			HX_STACK_LINE(186)
			Dynamic tmp3 = this->listen_y_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(186)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(186)
			if ((tmp4)){
				HX_STACK_LINE(186)
				bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(186)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(186)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(186)
				tmp5 = !(tmp8);
			}
			else{
				HX_STACK_LINE(186)
				tmp5 = false;
			}
			HX_STACK_LINE(186)
			if ((tmp5)){
				HX_STACK_LINE(186)
				Float tmp6 = _y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(186)
				this->listen_y(tmp6);
			}
			HX_STACK_LINE(186)
			this->y;
		}
	}
	HX_STACK_LINE(188)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,int_y,return )

::phoenix::Vector Vector_obj::int_z( ){
	HX_STACK_FRAME("phoenix.Vector","int_z",0x4cd3445e,"phoenix.Vector.int_z","phoenix/Vector.hx",192,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(194)
		Float tmp = this->z;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		Float _z = tmp1;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(194)
		this->z = _z;
		HX_STACK_LINE(194)
		bool tmp2 = this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		if ((tmp2)){
			HX_STACK_LINE(194)
			this->z;
		}
		else{
			HX_STACK_LINE(194)
			Dynamic tmp3 = this->listen_z_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			if ((tmp4)){
				HX_STACK_LINE(194)
				bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(194)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				tmp5 = !(tmp8);
			}
			else{
				HX_STACK_LINE(194)
				tmp5 = false;
			}
			HX_STACK_LINE(194)
			if ((tmp5)){
				HX_STACK_LINE(194)
				Float tmp6 = _z;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				this->listen_z(tmp6);
			}
			HX_STACK_LINE(194)
			this->z;
		}
	}
	HX_STACK_LINE(196)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,int_z,return )

::String Vector_obj::toString( ){
	HX_STACK_FRAME("phoenix.Vector","toString",0xe91b46b8,"phoenix.Vector.toString","phoenix/Vector.hx",200,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(202)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	::String tmp1 = (HX_HCSTRING("{ x:","\x47","\xef","\x65","\x51") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	::String tmp2 = (tmp1 + HX_HCSTRING(", y:","\x15","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	::String tmp5 = (tmp4 + HX_HCSTRING(", z:","\xf4","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(202)
	Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(202)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(202)
	::String tmp8 = (tmp7 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,toString,return )

bool Vector_obj::equals( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","equals",0x0d79894b,"phoenix.Vector.equals","phoenix/Vector.hx",206,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(207)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	Float tmp1 = other->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	if ((tmp3)){
		HX_STACK_LINE(207)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		Float tmp8 = other->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		tmp4 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(207)
		tmp4 = false;
	}
	HX_STACK_LINE(207)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(207)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(207)
	if ((tmp5)){
		HX_STACK_LINE(207)
		Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(207)
		Float tmp10 = other->z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(207)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(207)
		tmp6 = false;
	}
	HX_STACK_LINE(207)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(207)
	if ((tmp6)){
		HX_STACK_LINE(207)
		Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(207)
		Float tmp10 = other->w;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(207)
		tmp7 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(207)
		tmp7 = false;
	}
	HX_STACK_LINE(207)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,equals,return )

::phoenix::Vector Vector_obj::clone( ){
	HX_STACK_FRAME("phoenix.Vector","clone",0xd7159dd1,"phoenix.Vector.clone","phoenix/Vector.hx",210,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,clone,return )

::phoenix::Vector Vector_obj::normalize( ){
	HX_STACK_FRAME("phoenix.Vector","normalize",0x91dc0c01,"phoenix.Vector.normalize","phoenix/Vector.hx",214,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(215)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(215)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(215)
		Float tmp9 = this->z;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(215)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(215)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(215)
		Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(215)
		Float v = tmp12;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(215)
		bool tmp13 = (v != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(215)
		if ((tmp13)){
			HX_STACK_LINE(215)
			Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(215)
			Float tmp15 = v;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(215)
			Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(215)
			Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(215)
			Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(215)
			Float tmp18 = v;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(215)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(215)
			Float _y = tmp19;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(215)
			Float tmp20 = this->z;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(215)
			Float tmp21 = v;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(215)
			Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(215)
			Float _z = tmp22;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(215)
			bool tmp23 = this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(215)
			bool prev = tmp23;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(215)
			this->ignore_listeners = true;
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				this->x = _x;
				HX_STACK_LINE(215)
				bool tmp24 = this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(215)
				if ((tmp24)){
					HX_STACK_LINE(215)
					this->x;
				}
				else{
					HX_STACK_LINE(215)
					Dynamic tmp25 = this->listen_x_dyn();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(215)
					bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(215)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(215)
					if ((tmp26)){
						HX_STACK_LINE(215)
						bool tmp28 = this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(215)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(215)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(215)
						tmp27 = !(tmp30);
					}
					else{
						HX_STACK_LINE(215)
						tmp27 = false;
					}
					HX_STACK_LINE(215)
					if ((tmp27)){
						HX_STACK_LINE(215)
						Float tmp28 = _x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(215)
						this->listen_x(tmp28);
					}
					HX_STACK_LINE(215)
					this->x;
				}
			}
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				this->y = _y;
				HX_STACK_LINE(215)
				bool tmp24 = this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(215)
				if ((tmp24)){
					HX_STACK_LINE(215)
					this->y;
				}
				else{
					HX_STACK_LINE(215)
					Dynamic tmp25 = this->listen_y_dyn();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(215)
					bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(215)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(215)
					if ((tmp26)){
						HX_STACK_LINE(215)
						bool tmp28 = this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(215)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(215)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(215)
						tmp27 = !(tmp30);
					}
					else{
						HX_STACK_LINE(215)
						tmp27 = false;
					}
					HX_STACK_LINE(215)
					if ((tmp27)){
						HX_STACK_LINE(215)
						Float tmp28 = _y;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(215)
						this->listen_y(tmp28);
					}
					HX_STACK_LINE(215)
					this->y;
				}
			}
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				this->z = _z;
				HX_STACK_LINE(215)
				bool tmp24 = this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(215)
				if ((tmp24)){
					HX_STACK_LINE(215)
					this->z;
				}
				else{
					HX_STACK_LINE(215)
					Dynamic tmp25 = this->listen_z_dyn();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(215)
					bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(215)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(215)
					if ((tmp26)){
						HX_STACK_LINE(215)
						bool tmp28 = this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(215)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(215)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(215)
						tmp27 = !(tmp30);
					}
					else{
						HX_STACK_LINE(215)
						tmp27 = false;
					}
					HX_STACK_LINE(215)
					if ((tmp27)){
						HX_STACK_LINE(215)
						Float tmp28 = _z;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(215)
						this->listen_z(tmp28);
					}
					HX_STACK_LINE(215)
					this->z;
				}
			}
			HX_STACK_LINE(215)
			this->ignore_listeners = prev;
			HX_STACK_LINE(215)
			Dynamic tmp24 = this->listen_x_dyn();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(215)
			bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(215)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(215)
			if ((tmp25)){
				HX_STACK_LINE(215)
				bool tmp27 = this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(215)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(215)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(215)
				tmp26 = !(tmp29);
			}
			else{
				HX_STACK_LINE(215)
				tmp26 = false;
			}
			HX_STACK_LINE(215)
			if ((tmp26)){
				HX_STACK_LINE(215)
				Float tmp27 = this->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(215)
				this->listen_x(tmp27);
			}
			HX_STACK_LINE(215)
			Dynamic tmp27 = this->listen_y_dyn();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(215)
			bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(215)
			bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(215)
			if ((tmp28)){
				HX_STACK_LINE(215)
				bool tmp30 = this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(215)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(215)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(215)
				tmp29 = !(tmp32);
			}
			else{
				HX_STACK_LINE(215)
				tmp29 = false;
			}
			HX_STACK_LINE(215)
			if ((tmp29)){
				HX_STACK_LINE(215)
				Float tmp30 = this->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(215)
				this->listen_y(tmp30);
			}
			HX_STACK_LINE(215)
			Dynamic tmp30 = this->listen_z_dyn();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(215)
			bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(215)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(215)
			if ((tmp31)){
				HX_STACK_LINE(215)
				bool tmp33 = this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(215)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(215)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(215)
				tmp32 = !(tmp35);
			}
			else{
				HX_STACK_LINE(215)
				tmp32 = false;
			}
			HX_STACK_LINE(215)
			if ((tmp32)){
				HX_STACK_LINE(215)
				Float tmp33 = this->z;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(215)
				this->listen_z(tmp33);
			}
			HX_STACK_LINE(215)
			hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(215)
			bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(215)
			bool prev = tmp14;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(215)
			this->ignore_listeners = true;
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				this->x = (int)0;
				HX_STACK_LINE(215)
				bool tmp15 = this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(215)
				if ((tmp15)){
					HX_STACK_LINE(215)
					this->x;
				}
				else{
					HX_STACK_LINE(215)
					Dynamic tmp16 = this->listen_x_dyn();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(215)
					bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(215)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(215)
					if ((tmp17)){
						HX_STACK_LINE(215)
						bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(215)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(215)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(215)
						tmp18 = !(tmp21);
					}
					else{
						HX_STACK_LINE(215)
						tmp18 = false;
					}
					HX_STACK_LINE(215)
					if ((tmp18)){
						HX_STACK_LINE(215)
						this->listen_x((int)0);
					}
					HX_STACK_LINE(215)
					this->x;
				}
			}
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				this->y = (int)0;
				HX_STACK_LINE(215)
				bool tmp15 = this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(215)
				if ((tmp15)){
					HX_STACK_LINE(215)
					this->y;
				}
				else{
					HX_STACK_LINE(215)
					Dynamic tmp16 = this->listen_y_dyn();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(215)
					bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(215)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(215)
					if ((tmp17)){
						HX_STACK_LINE(215)
						bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(215)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(215)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(215)
						tmp18 = !(tmp21);
					}
					else{
						HX_STACK_LINE(215)
						tmp18 = false;
					}
					HX_STACK_LINE(215)
					if ((tmp18)){
						HX_STACK_LINE(215)
						this->listen_y((int)0);
					}
					HX_STACK_LINE(215)
					this->y;
				}
			}
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				this->z = (int)0;
				HX_STACK_LINE(215)
				bool tmp15 = this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(215)
				if ((tmp15)){
					HX_STACK_LINE(215)
					this->z;
				}
				else{
					HX_STACK_LINE(215)
					Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(215)
					bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(215)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(215)
					if ((tmp17)){
						HX_STACK_LINE(215)
						bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(215)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(215)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(215)
						tmp18 = !(tmp21);
					}
					else{
						HX_STACK_LINE(215)
						tmp18 = false;
					}
					HX_STACK_LINE(215)
					if ((tmp18)){
						HX_STACK_LINE(215)
						this->listen_z((int)0);
					}
					HX_STACK_LINE(215)
					this->z;
				}
			}
			HX_STACK_LINE(215)
			this->ignore_listeners = prev;
			HX_STACK_LINE(215)
			Dynamic tmp15 = this->listen_x_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(215)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(215)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(215)
			if ((tmp16)){
				HX_STACK_LINE(215)
				bool tmp18 = this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(215)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(215)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(215)
				tmp17 = !(tmp20);
			}
			else{
				HX_STACK_LINE(215)
				tmp17 = false;
			}
			HX_STACK_LINE(215)
			if ((tmp17)){
				HX_STACK_LINE(215)
				Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(215)
				this->listen_x(tmp18);
			}
			HX_STACK_LINE(215)
			Dynamic tmp18 = this->listen_y_dyn();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(215)
			bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(215)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(215)
			if ((tmp19)){
				HX_STACK_LINE(215)
				bool tmp21 = this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(215)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(215)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(215)
				tmp20 = !(tmp23);
			}
			else{
				HX_STACK_LINE(215)
				tmp20 = false;
			}
			HX_STACK_LINE(215)
			if ((tmp20)){
				HX_STACK_LINE(215)
				Float tmp21 = this->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(215)
				this->listen_y(tmp21);
			}
			HX_STACK_LINE(215)
			Dynamic tmp21 = this->listen_z_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(215)
			bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(215)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(215)
			if ((tmp22)){
				HX_STACK_LINE(215)
				bool tmp24 = this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(215)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(215)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(215)
				tmp23 = !(tmp26);
			}
			else{
				HX_STACK_LINE(215)
				tmp23 = false;
			}
			HX_STACK_LINE(215)
			if ((tmp23)){
				HX_STACK_LINE(215)
				Float tmp24 = this->z;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(215)
				this->listen_z(tmp24);
			}
			HX_STACK_LINE(215)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(215)
		tmp = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(215)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,normalize,return )

Float Vector_obj::dot( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","dot",0x8c8b87fd,"phoenix.Vector.dot","phoenix/Vector.hx",218,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(220)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	Float tmp1 = other->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(220)
	Float tmp4 = other->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(220)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(220)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(220)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(220)
	Float tmp8 = other->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(220)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(220)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(220)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,dot,return )

::phoenix::Vector Vector_obj::cross( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","cross",0xdb0ce9f4,"phoenix.Vector.cross","phoenix/Vector.hx",225,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		Float tmp = (a->y * b->z);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		Float tmp1 = (a->z * b->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(228)
		Float tmp3 = (a->z * b->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		Float tmp4 = (a->x * b->z);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(228)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(229)
		Float tmp6 = (a->x * b->y);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(229)
		Float tmp7 = (a->y * b->x);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(229)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(229)
		Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(227)
		bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(227)
		bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(227)
		this->ignore_listeners = true;
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			this->x = _x;
			HX_STACK_LINE(227)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			if ((tmp10)){
				HX_STACK_LINE(227)
				this->x;
			}
			else{
				HX_STACK_LINE(227)
				Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(227)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(227)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(227)
				if ((tmp12)){
					HX_STACK_LINE(227)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(227)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(227)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(227)
					tmp13 = false;
				}
				HX_STACK_LINE(227)
				if ((tmp13)){
					HX_STACK_LINE(227)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					this->listen_x(tmp14);
				}
				HX_STACK_LINE(227)
				this->x;
			}
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			this->y = _y;
			HX_STACK_LINE(227)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			if ((tmp10)){
				HX_STACK_LINE(227)
				this->y;
			}
			else{
				HX_STACK_LINE(227)
				Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(227)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(227)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(227)
				if ((tmp12)){
					HX_STACK_LINE(227)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(227)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(227)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(227)
					tmp13 = false;
				}
				HX_STACK_LINE(227)
				if ((tmp13)){
					HX_STACK_LINE(227)
					Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					this->listen_y(tmp14);
				}
				HX_STACK_LINE(227)
				this->y;
			}
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			this->z = _z;
			HX_STACK_LINE(227)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			if ((tmp10)){
				HX_STACK_LINE(227)
				this->z;
			}
			else{
				HX_STACK_LINE(227)
				Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(227)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(227)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(227)
				if ((tmp12)){
					HX_STACK_LINE(227)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(227)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(227)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(227)
					tmp13 = false;
				}
				HX_STACK_LINE(227)
				if ((tmp13)){
					HX_STACK_LINE(227)
					Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					this->listen_z(tmp14);
				}
				HX_STACK_LINE(227)
				this->z;
			}
		}
		HX_STACK_LINE(227)
		this->ignore_listeners = prev;
		HX_STACK_LINE(227)
		Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(227)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(227)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(227)
		if ((tmp11)){
			HX_STACK_LINE(227)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(227)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(227)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(227)
			tmp12 = false;
		}
		HX_STACK_LINE(227)
		if ((tmp12)){
			HX_STACK_LINE(227)
			Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			this->listen_x(tmp13);
		}
		HX_STACK_LINE(227)
		Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(227)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(227)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(227)
		if ((tmp14)){
			HX_STACK_LINE(227)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(227)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(227)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(227)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(227)
			tmp15 = false;
		}
		HX_STACK_LINE(227)
		if ((tmp15)){
			HX_STACK_LINE(227)
			Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(227)
			this->listen_y(tmp16);
		}
		HX_STACK_LINE(227)
		Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(227)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(227)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(227)
		if ((tmp17)){
			HX_STACK_LINE(227)
			bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(227)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(227)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(227)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(227)
			tmp18 = false;
		}
		HX_STACK_LINE(227)
		if ((tmp18)){
			HX_STACK_LINE(227)
			Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(227)
			this->listen_z(tmp19);
		}
		HX_STACK_LINE(227)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(231)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,cross,return )

::phoenix::Vector Vector_obj::invert( ){
	HX_STACK_FRAME("phoenix.Vector","invert",0xed5f8222,"phoenix.Vector.invert","phoenix/Vector.hx",235,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		Float _x = tmp1;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(237)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(237)
		Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(237)
		Float _z = tmp5;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(237)
		bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		bool prev = tmp6;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(237)
		this->ignore_listeners = true;
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			this->x = _x;
			HX_STACK_LINE(237)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			if ((tmp7)){
				HX_STACK_LINE(237)
				this->x;
			}
			else{
				HX_STACK_LINE(237)
				Dynamic tmp8 = this->listen_x_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				if ((tmp9)){
					HX_STACK_LINE(237)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(237)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(237)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(237)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(237)
					tmp10 = false;
				}
				HX_STACK_LINE(237)
				if ((tmp10)){
					HX_STACK_LINE(237)
					Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(237)
					this->listen_x(tmp11);
				}
				HX_STACK_LINE(237)
				this->x;
			}
		}
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			this->y = _y;
			HX_STACK_LINE(237)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			if ((tmp7)){
				HX_STACK_LINE(237)
				this->y;
			}
			else{
				HX_STACK_LINE(237)
				Dynamic tmp8 = this->listen_y_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				if ((tmp9)){
					HX_STACK_LINE(237)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(237)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(237)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(237)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(237)
					tmp10 = false;
				}
				HX_STACK_LINE(237)
				if ((tmp10)){
					HX_STACK_LINE(237)
					Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(237)
					this->listen_y(tmp11);
				}
				HX_STACK_LINE(237)
				this->y;
			}
		}
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			this->z = _z;
			HX_STACK_LINE(237)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			if ((tmp7)){
				HX_STACK_LINE(237)
				this->z;
			}
			else{
				HX_STACK_LINE(237)
				Dynamic tmp8 = this->listen_z_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				if ((tmp9)){
					HX_STACK_LINE(237)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(237)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(237)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(237)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(237)
					tmp10 = false;
				}
				HX_STACK_LINE(237)
				if ((tmp10)){
					HX_STACK_LINE(237)
					Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(237)
					this->listen_z(tmp11);
				}
				HX_STACK_LINE(237)
				this->z;
			}
		}
		HX_STACK_LINE(237)
		this->ignore_listeners = prev;
		HX_STACK_LINE(237)
		Dynamic tmp7 = this->listen_x_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(237)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(237)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(237)
		if ((tmp8)){
			HX_STACK_LINE(237)
			bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(237)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(237)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(237)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(237)
			tmp9 = false;
		}
		HX_STACK_LINE(237)
		if ((tmp9)){
			HX_STACK_LINE(237)
			Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(237)
			this->listen_x(tmp10);
		}
		HX_STACK_LINE(237)
		Dynamic tmp10 = this->listen_y_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(237)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(237)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(237)
		if ((tmp11)){
			HX_STACK_LINE(237)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(237)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(237)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(237)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(237)
			tmp12 = false;
		}
		HX_STACK_LINE(237)
		if ((tmp12)){
			HX_STACK_LINE(237)
			Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(237)
			this->listen_y(tmp13);
		}
		HX_STACK_LINE(237)
		Dynamic tmp13 = this->listen_z_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(237)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(237)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(237)
		if ((tmp14)){
			HX_STACK_LINE(237)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(237)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(237)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(237)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(237)
			tmp15 = false;
		}
		HX_STACK_LINE(237)
		if ((tmp15)){
			HX_STACK_LINE(237)
			Float tmp16 = this->z;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(237)
			this->listen_z(tmp16);
		}
		HX_STACK_LINE(237)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(239)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,invert,return )

::phoenix::Vector Vector_obj::add( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","add",0x8c893795,"phoenix.Vector.add","phoenix/Vector.hx",333,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(335)
		bool tmp = (other == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		if ((tmp)){
			HX_STACK_LINE(335)
			::String tmp1 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(335)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(335)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(337)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		Float tmp1 = other->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(337)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		Float tmp4 = other->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(337)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(337)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(337)
		Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(337)
		Float tmp7 = other->z;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(337)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(337)
		Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(337)
		bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(337)
		bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(337)
		this->ignore_listeners = true;
		HX_STACK_LINE(337)
		{
			HX_STACK_LINE(337)
			this->x = _x;
			HX_STACK_LINE(337)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(337)
			if ((tmp10)){
				HX_STACK_LINE(337)
				this->x;
			}
			else{
				HX_STACK_LINE(337)
				Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(337)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(337)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(337)
				if ((tmp12)){
					HX_STACK_LINE(337)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(337)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(337)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(337)
					tmp13 = false;
				}
				HX_STACK_LINE(337)
				if ((tmp13)){
					HX_STACK_LINE(337)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					this->listen_x(tmp14);
				}
				HX_STACK_LINE(337)
				this->x;
			}
		}
		HX_STACK_LINE(337)
		{
			HX_STACK_LINE(337)
			this->y = _y;
			HX_STACK_LINE(337)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(337)
			if ((tmp10)){
				HX_STACK_LINE(337)
				this->y;
			}
			else{
				HX_STACK_LINE(337)
				Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(337)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(337)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(337)
				if ((tmp12)){
					HX_STACK_LINE(337)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(337)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(337)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(337)
					tmp13 = false;
				}
				HX_STACK_LINE(337)
				if ((tmp13)){
					HX_STACK_LINE(337)
					Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					this->listen_y(tmp14);
				}
				HX_STACK_LINE(337)
				this->y;
			}
		}
		HX_STACK_LINE(337)
		{
			HX_STACK_LINE(337)
			this->z = _z;
			HX_STACK_LINE(337)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(337)
			if ((tmp10)){
				HX_STACK_LINE(337)
				this->z;
			}
			else{
				HX_STACK_LINE(337)
				Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(337)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(337)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(337)
				if ((tmp12)){
					HX_STACK_LINE(337)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(337)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(337)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(337)
					tmp13 = false;
				}
				HX_STACK_LINE(337)
				if ((tmp13)){
					HX_STACK_LINE(337)
					Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					this->listen_z(tmp14);
				}
				HX_STACK_LINE(337)
				this->z;
			}
		}
		HX_STACK_LINE(337)
		this->ignore_listeners = prev;
		HX_STACK_LINE(337)
		Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(337)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(337)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(337)
		if ((tmp11)){
			HX_STACK_LINE(337)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(337)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(337)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(337)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(337)
			tmp12 = false;
		}
		HX_STACK_LINE(337)
		if ((tmp12)){
			HX_STACK_LINE(337)
			Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(337)
			this->listen_x(tmp13);
		}
		HX_STACK_LINE(337)
		Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(337)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(337)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(337)
		if ((tmp14)){
			HX_STACK_LINE(337)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(337)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(337)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(337)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(337)
			tmp15 = false;
		}
		HX_STACK_LINE(337)
		if ((tmp15)){
			HX_STACK_LINE(337)
			Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(337)
			this->listen_y(tmp16);
		}
		HX_STACK_LINE(337)
		Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(337)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(337)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(337)
		if ((tmp17)){
			HX_STACK_LINE(337)
			bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(337)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(337)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(337)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(337)
			tmp18 = false;
		}
		HX_STACK_LINE(337)
		if ((tmp18)){
			HX_STACK_LINE(337)
			Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(337)
			this->listen_z(tmp19);
		}
		HX_STACK_LINE(337)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(339)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,add,return )

::phoenix::Vector Vector_obj::add_xyz( hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z){
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
Float _z = __o__z.Default(0);
	HX_STACK_FRAME("phoenix.Vector","add_xyz",0x18cbe36f,"phoenix.Vector.add_xyz","phoenix/Vector.hx",343,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
{
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(345)
			Float tmp1 = _x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(345)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(345)
			Float _x1 = tmp2;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(345)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(345)
			Float _y1 = tmp5;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(345)
			Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(345)
			Float tmp7 = _z;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(345)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(345)
			Float _z1 = tmp8;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(345)
			bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(345)
			bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(345)
			this->ignore_listeners = true;
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				this->x = _x1;
				HX_STACK_LINE(345)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(345)
				if ((tmp10)){
					HX_STACK_LINE(345)
					this->x;
				}
				else{
					HX_STACK_LINE(345)
					Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(345)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(345)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(345)
					if ((tmp12)){
						HX_STACK_LINE(345)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(345)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(345)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(345)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(345)
						tmp13 = false;
					}
					HX_STACK_LINE(345)
					if ((tmp13)){
						HX_STACK_LINE(345)
						Float tmp14 = _x1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(345)
						this->listen_x(tmp14);
					}
					HX_STACK_LINE(345)
					this->x;
				}
			}
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				this->y = _y1;
				HX_STACK_LINE(345)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(345)
				if ((tmp10)){
					HX_STACK_LINE(345)
					this->y;
				}
				else{
					HX_STACK_LINE(345)
					Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(345)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(345)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(345)
					if ((tmp12)){
						HX_STACK_LINE(345)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(345)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(345)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(345)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(345)
						tmp13 = false;
					}
					HX_STACK_LINE(345)
					if ((tmp13)){
						HX_STACK_LINE(345)
						Float tmp14 = _y1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(345)
						this->listen_y(tmp14);
					}
					HX_STACK_LINE(345)
					this->y;
				}
			}
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				this->z = _z1;
				HX_STACK_LINE(345)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(345)
				if ((tmp10)){
					HX_STACK_LINE(345)
					this->z;
				}
				else{
					HX_STACK_LINE(345)
					Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(345)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(345)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(345)
					if ((tmp12)){
						HX_STACK_LINE(345)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(345)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(345)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(345)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(345)
						tmp13 = false;
					}
					HX_STACK_LINE(345)
					if ((tmp13)){
						HX_STACK_LINE(345)
						Float tmp14 = _z1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(345)
						this->listen_z(tmp14);
					}
					HX_STACK_LINE(345)
					this->z;
				}
			}
			HX_STACK_LINE(345)
			this->ignore_listeners = prev;
			HX_STACK_LINE(345)
			Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(345)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(345)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(345)
			if ((tmp11)){
				HX_STACK_LINE(345)
				bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(345)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(345)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(345)
				tmp12 = !(tmp15);
			}
			else{
				HX_STACK_LINE(345)
				tmp12 = false;
			}
			HX_STACK_LINE(345)
			if ((tmp12)){
				HX_STACK_LINE(345)
				Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(345)
				this->listen_x(tmp13);
			}
			HX_STACK_LINE(345)
			Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(345)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(345)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(345)
			if ((tmp14)){
				HX_STACK_LINE(345)
				bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(345)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(345)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(345)
				tmp15 = !(tmp18);
			}
			else{
				HX_STACK_LINE(345)
				tmp15 = false;
			}
			HX_STACK_LINE(345)
			if ((tmp15)){
				HX_STACK_LINE(345)
				Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(345)
				this->listen_y(tmp16);
			}
			HX_STACK_LINE(345)
			Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(345)
			bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(345)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(345)
			if ((tmp17)){
				HX_STACK_LINE(345)
				bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(345)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(345)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(345)
				tmp18 = !(tmp21);
			}
			else{
				HX_STACK_LINE(345)
				tmp18 = false;
			}
			HX_STACK_LINE(345)
			if ((tmp18)){
				HX_STACK_LINE(345)
				Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(345)
				this->listen_z(tmp19);
			}
			HX_STACK_LINE(345)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(347)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,add_xyz,return )

::phoenix::Vector Vector_obj::subtract( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","subtract",0xa8bdeb20,"phoenix.Vector.subtract","phoenix/Vector.hx",352,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(354)
	{
		HX_STACK_LINE(354)
		bool tmp = (other == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		if ((tmp)){
			HX_STACK_LINE(354)
			::String tmp1 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(354)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(354)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(356)
	{
		HX_STACK_LINE(356)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		Float tmp1 = other->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(356)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		Float tmp4 = other->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(356)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(356)
		Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(356)
		Float tmp7 = other->z;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(356)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(356)
		Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(356)
		bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(356)
		bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(356)
		this->ignore_listeners = true;
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			this->x = _x;
			HX_STACK_LINE(356)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(356)
			if ((tmp10)){
				HX_STACK_LINE(356)
				this->x;
			}
			else{
				HX_STACK_LINE(356)
				Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(356)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(356)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(356)
				if ((tmp12)){
					HX_STACK_LINE(356)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(356)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(356)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(356)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(356)
					tmp13 = false;
				}
				HX_STACK_LINE(356)
				if ((tmp13)){
					HX_STACK_LINE(356)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(356)
					this->listen_x(tmp14);
				}
				HX_STACK_LINE(356)
				this->x;
			}
		}
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			this->y = _y;
			HX_STACK_LINE(356)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(356)
			if ((tmp10)){
				HX_STACK_LINE(356)
				this->y;
			}
			else{
				HX_STACK_LINE(356)
				Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(356)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(356)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(356)
				if ((tmp12)){
					HX_STACK_LINE(356)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(356)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(356)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(356)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(356)
					tmp13 = false;
				}
				HX_STACK_LINE(356)
				if ((tmp13)){
					HX_STACK_LINE(356)
					Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(356)
					this->listen_y(tmp14);
				}
				HX_STACK_LINE(356)
				this->y;
			}
		}
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			this->z = _z;
			HX_STACK_LINE(356)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(356)
			if ((tmp10)){
				HX_STACK_LINE(356)
				this->z;
			}
			else{
				HX_STACK_LINE(356)
				Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(356)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(356)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(356)
				if ((tmp12)){
					HX_STACK_LINE(356)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(356)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(356)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(356)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(356)
					tmp13 = false;
				}
				HX_STACK_LINE(356)
				if ((tmp13)){
					HX_STACK_LINE(356)
					Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(356)
					this->listen_z(tmp14);
				}
				HX_STACK_LINE(356)
				this->z;
			}
		}
		HX_STACK_LINE(356)
		this->ignore_listeners = prev;
		HX_STACK_LINE(356)
		Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(356)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(356)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(356)
		if ((tmp11)){
			HX_STACK_LINE(356)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(356)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(356)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(356)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(356)
			tmp12 = false;
		}
		HX_STACK_LINE(356)
		if ((tmp12)){
			HX_STACK_LINE(356)
			Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(356)
			this->listen_x(tmp13);
		}
		HX_STACK_LINE(356)
		Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(356)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(356)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(356)
		if ((tmp14)){
			HX_STACK_LINE(356)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(356)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(356)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(356)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(356)
			tmp15 = false;
		}
		HX_STACK_LINE(356)
		if ((tmp15)){
			HX_STACK_LINE(356)
			Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(356)
			this->listen_y(tmp16);
		}
		HX_STACK_LINE(356)
		Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(356)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(356)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(356)
		if ((tmp17)){
			HX_STACK_LINE(356)
			bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(356)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(356)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(356)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(356)
			tmp18 = false;
		}
		HX_STACK_LINE(356)
		if ((tmp18)){
			HX_STACK_LINE(356)
			Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(356)
			this->listen_z(tmp19);
		}
		HX_STACK_LINE(356)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(358)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,subtract,return )

::phoenix::Vector Vector_obj::subtract_xyz( hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z){
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
Float _z = __o__z.Default(0);
	HX_STACK_FRAME("phoenix.Vector","subtract_xyz",0x2188b87a,"phoenix.Vector.subtract_xyz","phoenix/Vector.hx",362,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
{
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(364)
			Float tmp1 = _x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(364)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(364)
			Float _x1 = tmp2;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(364)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(364)
			Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(364)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(364)
			Float _y1 = tmp5;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(364)
			Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(364)
			Float tmp7 = _z;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(364)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(364)
			Float _z1 = tmp8;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(364)
			bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(364)
			bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(364)
			this->ignore_listeners = true;
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				this->x = _x1;
				HX_STACK_LINE(364)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(364)
				if ((tmp10)){
					HX_STACK_LINE(364)
					this->x;
				}
				else{
					HX_STACK_LINE(364)
					Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(364)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(364)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(364)
					if ((tmp12)){
						HX_STACK_LINE(364)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(364)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(364)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(364)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(364)
						tmp13 = false;
					}
					HX_STACK_LINE(364)
					if ((tmp13)){
						HX_STACK_LINE(364)
						Float tmp14 = _x1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(364)
						this->listen_x(tmp14);
					}
					HX_STACK_LINE(364)
					this->x;
				}
			}
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				this->y = _y1;
				HX_STACK_LINE(364)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(364)
				if ((tmp10)){
					HX_STACK_LINE(364)
					this->y;
				}
				else{
					HX_STACK_LINE(364)
					Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(364)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(364)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(364)
					if ((tmp12)){
						HX_STACK_LINE(364)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(364)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(364)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(364)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(364)
						tmp13 = false;
					}
					HX_STACK_LINE(364)
					if ((tmp13)){
						HX_STACK_LINE(364)
						Float tmp14 = _y1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(364)
						this->listen_y(tmp14);
					}
					HX_STACK_LINE(364)
					this->y;
				}
			}
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				this->z = _z1;
				HX_STACK_LINE(364)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(364)
				if ((tmp10)){
					HX_STACK_LINE(364)
					this->z;
				}
				else{
					HX_STACK_LINE(364)
					Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(364)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(364)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(364)
					if ((tmp12)){
						HX_STACK_LINE(364)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(364)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(364)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(364)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(364)
						tmp13 = false;
					}
					HX_STACK_LINE(364)
					if ((tmp13)){
						HX_STACK_LINE(364)
						Float tmp14 = _z1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(364)
						this->listen_z(tmp14);
					}
					HX_STACK_LINE(364)
					this->z;
				}
			}
			HX_STACK_LINE(364)
			this->ignore_listeners = prev;
			HX_STACK_LINE(364)
			Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(364)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(364)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(364)
			if ((tmp11)){
				HX_STACK_LINE(364)
				bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(364)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(364)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(364)
				tmp12 = !(tmp15);
			}
			else{
				HX_STACK_LINE(364)
				tmp12 = false;
			}
			HX_STACK_LINE(364)
			if ((tmp12)){
				HX_STACK_LINE(364)
				Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(364)
				this->listen_x(tmp13);
			}
			HX_STACK_LINE(364)
			Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(364)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(364)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(364)
			if ((tmp14)){
				HX_STACK_LINE(364)
				bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(364)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(364)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(364)
				tmp15 = !(tmp18);
			}
			else{
				HX_STACK_LINE(364)
				tmp15 = false;
			}
			HX_STACK_LINE(364)
			if ((tmp15)){
				HX_STACK_LINE(364)
				Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(364)
				this->listen_y(tmp16);
			}
			HX_STACK_LINE(364)
			Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(364)
			bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(364)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(364)
			if ((tmp17)){
				HX_STACK_LINE(364)
				bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(364)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(364)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(364)
				tmp18 = !(tmp21);
			}
			else{
				HX_STACK_LINE(364)
				tmp18 = false;
			}
			HX_STACK_LINE(364)
			if ((tmp18)){
				HX_STACK_LINE(364)
				Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(364)
				this->listen_z(tmp19);
			}
			HX_STACK_LINE(364)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(366)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,subtract_xyz,return )

::phoenix::Vector Vector_obj::multiply( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","multiply",0x4b395830,"phoenix.Vector.multiply","phoenix/Vector.hx",370,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(372)
	{
		HX_STACK_LINE(372)
		bool tmp = (other == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		if ((tmp)){
			HX_STACK_LINE(372)
			::String tmp1 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(372)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(372)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(374)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(374)
		Float tmp1 = other->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(374)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		Float tmp4 = other->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(374)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(374)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(374)
		Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(374)
		Float tmp7 = other->z;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(374)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(374)
		Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(374)
		bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(374)
		bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(374)
		this->ignore_listeners = true;
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			this->x = _x;
			HX_STACK_LINE(374)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(374)
			if ((tmp10)){
				HX_STACK_LINE(374)
				this->x;
			}
			else{
				HX_STACK_LINE(374)
				Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(374)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(374)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(374)
				if ((tmp12)){
					HX_STACK_LINE(374)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(374)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(374)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(374)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(374)
					tmp13 = false;
				}
				HX_STACK_LINE(374)
				if ((tmp13)){
					HX_STACK_LINE(374)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(374)
					this->listen_x(tmp14);
				}
				HX_STACK_LINE(374)
				this->x;
			}
		}
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			this->y = _y;
			HX_STACK_LINE(374)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(374)
			if ((tmp10)){
				HX_STACK_LINE(374)
				this->y;
			}
			else{
				HX_STACK_LINE(374)
				Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(374)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(374)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(374)
				if ((tmp12)){
					HX_STACK_LINE(374)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(374)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(374)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(374)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(374)
					tmp13 = false;
				}
				HX_STACK_LINE(374)
				if ((tmp13)){
					HX_STACK_LINE(374)
					Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(374)
					this->listen_y(tmp14);
				}
				HX_STACK_LINE(374)
				this->y;
			}
		}
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			this->z = _z;
			HX_STACK_LINE(374)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(374)
			if ((tmp10)){
				HX_STACK_LINE(374)
				this->z;
			}
			else{
				HX_STACK_LINE(374)
				Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(374)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(374)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(374)
				if ((tmp12)){
					HX_STACK_LINE(374)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(374)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(374)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(374)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(374)
					tmp13 = false;
				}
				HX_STACK_LINE(374)
				if ((tmp13)){
					HX_STACK_LINE(374)
					Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(374)
					this->listen_z(tmp14);
				}
				HX_STACK_LINE(374)
				this->z;
			}
		}
		HX_STACK_LINE(374)
		this->ignore_listeners = prev;
		HX_STACK_LINE(374)
		Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(374)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(374)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(374)
		if ((tmp11)){
			HX_STACK_LINE(374)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(374)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(374)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(374)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(374)
			tmp12 = false;
		}
		HX_STACK_LINE(374)
		if ((tmp12)){
			HX_STACK_LINE(374)
			Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(374)
			this->listen_x(tmp13);
		}
		HX_STACK_LINE(374)
		Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(374)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(374)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(374)
		if ((tmp14)){
			HX_STACK_LINE(374)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(374)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(374)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(374)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(374)
			tmp15 = false;
		}
		HX_STACK_LINE(374)
		if ((tmp15)){
			HX_STACK_LINE(374)
			Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(374)
			this->listen_y(tmp16);
		}
		HX_STACK_LINE(374)
		Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(374)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(374)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(374)
		if ((tmp17)){
			HX_STACK_LINE(374)
			bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(374)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(374)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(374)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(374)
			tmp18 = false;
		}
		HX_STACK_LINE(374)
		if ((tmp18)){
			HX_STACK_LINE(374)
			Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(374)
			this->listen_z(tmp19);
		}
		HX_STACK_LINE(374)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(376)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,multiply,return )

::phoenix::Vector Vector_obj::multiply_xyz( hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z){
Float _x = __o__x.Default(1);
Float _y = __o__y.Default(1);
Float _z = __o__z.Default(1);
	HX_STACK_FRAME("phoenix.Vector","multiply_xyz",0x0127ed8a,"phoenix.Vector.multiply_xyz","phoenix/Vector.hx",380,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
{
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(382)
			Float tmp1 = _x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(382)
			Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(382)
			Float _x1 = tmp2;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(382)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(382)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(382)
			Float _y1 = tmp5;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(382)
			Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(382)
			Float tmp7 = _z;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(382)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(382)
			Float _z1 = tmp8;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(382)
			bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(382)
			bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(382)
			this->ignore_listeners = true;
			HX_STACK_LINE(382)
			{
				HX_STACK_LINE(382)
				this->x = _x1;
				HX_STACK_LINE(382)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(382)
				if ((tmp10)){
					HX_STACK_LINE(382)
					this->x;
				}
				else{
					HX_STACK_LINE(382)
					Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(382)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(382)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(382)
					if ((tmp12)){
						HX_STACK_LINE(382)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(382)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(382)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(382)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(382)
						tmp13 = false;
					}
					HX_STACK_LINE(382)
					if ((tmp13)){
						HX_STACK_LINE(382)
						Float tmp14 = _x1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(382)
						this->listen_x(tmp14);
					}
					HX_STACK_LINE(382)
					this->x;
				}
			}
			HX_STACK_LINE(382)
			{
				HX_STACK_LINE(382)
				this->y = _y1;
				HX_STACK_LINE(382)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(382)
				if ((tmp10)){
					HX_STACK_LINE(382)
					this->y;
				}
				else{
					HX_STACK_LINE(382)
					Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(382)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(382)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(382)
					if ((tmp12)){
						HX_STACK_LINE(382)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(382)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(382)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(382)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(382)
						tmp13 = false;
					}
					HX_STACK_LINE(382)
					if ((tmp13)){
						HX_STACK_LINE(382)
						Float tmp14 = _y1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(382)
						this->listen_y(tmp14);
					}
					HX_STACK_LINE(382)
					this->y;
				}
			}
			HX_STACK_LINE(382)
			{
				HX_STACK_LINE(382)
				this->z = _z1;
				HX_STACK_LINE(382)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(382)
				if ((tmp10)){
					HX_STACK_LINE(382)
					this->z;
				}
				else{
					HX_STACK_LINE(382)
					Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(382)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(382)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(382)
					if ((tmp12)){
						HX_STACK_LINE(382)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(382)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(382)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(382)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(382)
						tmp13 = false;
					}
					HX_STACK_LINE(382)
					if ((tmp13)){
						HX_STACK_LINE(382)
						Float tmp14 = _z1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(382)
						this->listen_z(tmp14);
					}
					HX_STACK_LINE(382)
					this->z;
				}
			}
			HX_STACK_LINE(382)
			this->ignore_listeners = prev;
			HX_STACK_LINE(382)
			Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(382)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(382)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(382)
			if ((tmp11)){
				HX_STACK_LINE(382)
				bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(382)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(382)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(382)
				tmp12 = !(tmp15);
			}
			else{
				HX_STACK_LINE(382)
				tmp12 = false;
			}
			HX_STACK_LINE(382)
			if ((tmp12)){
				HX_STACK_LINE(382)
				Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(382)
				this->listen_x(tmp13);
			}
			HX_STACK_LINE(382)
			Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(382)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(382)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(382)
			if ((tmp14)){
				HX_STACK_LINE(382)
				bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(382)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(382)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(382)
				tmp15 = !(tmp18);
			}
			else{
				HX_STACK_LINE(382)
				tmp15 = false;
			}
			HX_STACK_LINE(382)
			if ((tmp15)){
				HX_STACK_LINE(382)
				Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(382)
				this->listen_y(tmp16);
			}
			HX_STACK_LINE(382)
			Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(382)
			bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(382)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(382)
			if ((tmp17)){
				HX_STACK_LINE(382)
				bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(382)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(382)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(382)
				tmp18 = !(tmp21);
			}
			else{
				HX_STACK_LINE(382)
				tmp18 = false;
			}
			HX_STACK_LINE(382)
			if ((tmp18)){
				HX_STACK_LINE(382)
				Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(382)
				this->listen_z(tmp19);
			}
			HX_STACK_LINE(382)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(384)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,multiply_xyz,return )

::phoenix::Vector Vector_obj::divide( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","divide",0x0c98ca85,"phoenix.Vector.divide","phoenix/Vector.hx",388,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		bool tmp = (other == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		if ((tmp)){
			HX_STACK_LINE(390)
			::String tmp1 = HX_HCSTRING("other was null","\x2e","\x18","\x3c","\x9a");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		bool tmp = (other->x != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( Vector: division by zero (other.x)","\xd6","\xa3","\x33","\x64");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			::String tmp4 = (HX_HCSTRING("other.x != 0","\x92","\xb6","\x3e","\xad") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(391)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(392)
	{
		HX_STACK_LINE(392)
		bool tmp = (other->y != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		if ((tmp1)){
			HX_STACK_LINE(214)
			::String tmp2 = HX_HCSTRING(" ( Vector: division by zero (other.y)","\xb5","\xa4","\x33","\x64");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(392)
			::String tmp4 = (HX_HCSTRING("other.y != 0","\xf1","\x12","\x9a","\x13") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(392)
			::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(392)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(394)
	{
		HX_STACK_LINE(394)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(394)
		Float tmp1 = other->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(394)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(394)
		Float tmp4 = other->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(394)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(394)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(394)
		Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(394)
		Float tmp7 = other->z;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(394)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(394)
		Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(394)
		bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(394)
		bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(394)
		this->ignore_listeners = true;
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			this->x = _x;
			HX_STACK_LINE(394)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(394)
			if ((tmp10)){
				HX_STACK_LINE(394)
				this->x;
			}
			else{
				HX_STACK_LINE(394)
				Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(394)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(394)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(394)
				if ((tmp12)){
					HX_STACK_LINE(394)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(394)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(394)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(394)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(394)
					tmp13 = false;
				}
				HX_STACK_LINE(394)
				if ((tmp13)){
					HX_STACK_LINE(394)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(394)
					this->listen_x(tmp14);
				}
				HX_STACK_LINE(394)
				this->x;
			}
		}
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			this->y = _y;
			HX_STACK_LINE(394)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(394)
			if ((tmp10)){
				HX_STACK_LINE(394)
				this->y;
			}
			else{
				HX_STACK_LINE(394)
				Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(394)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(394)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(394)
				if ((tmp12)){
					HX_STACK_LINE(394)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(394)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(394)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(394)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(394)
					tmp13 = false;
				}
				HX_STACK_LINE(394)
				if ((tmp13)){
					HX_STACK_LINE(394)
					Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(394)
					this->listen_y(tmp14);
				}
				HX_STACK_LINE(394)
				this->y;
			}
		}
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			this->z = _z;
			HX_STACK_LINE(394)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(394)
			if ((tmp10)){
				HX_STACK_LINE(394)
				this->z;
			}
			else{
				HX_STACK_LINE(394)
				Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(394)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(394)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(394)
				if ((tmp12)){
					HX_STACK_LINE(394)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(394)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(394)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(394)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(394)
					tmp13 = false;
				}
				HX_STACK_LINE(394)
				if ((tmp13)){
					HX_STACK_LINE(394)
					Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(394)
					this->listen_z(tmp14);
				}
				HX_STACK_LINE(394)
				this->z;
			}
		}
		HX_STACK_LINE(394)
		this->ignore_listeners = prev;
		HX_STACK_LINE(394)
		Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(394)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(394)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(394)
		if ((tmp11)){
			HX_STACK_LINE(394)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(394)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(394)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(394)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(394)
			tmp12 = false;
		}
		HX_STACK_LINE(394)
		if ((tmp12)){
			HX_STACK_LINE(394)
			Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(394)
			this->listen_x(tmp13);
		}
		HX_STACK_LINE(394)
		Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(394)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(394)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(394)
		if ((tmp14)){
			HX_STACK_LINE(394)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(394)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(394)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(394)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(394)
			tmp15 = false;
		}
		HX_STACK_LINE(394)
		if ((tmp15)){
			HX_STACK_LINE(394)
			Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(394)
			this->listen_y(tmp16);
		}
		HX_STACK_LINE(394)
		Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(394)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(394)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(394)
		if ((tmp17)){
			HX_STACK_LINE(394)
			bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(394)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(394)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(394)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(394)
			tmp18 = false;
		}
		HX_STACK_LINE(394)
		if ((tmp18)){
			HX_STACK_LINE(394)
			Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(394)
			this->listen_z(tmp19);
		}
		HX_STACK_LINE(394)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(396)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,divide,return )

::phoenix::Vector Vector_obj::divide_xyz( hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z){
Float _x = __o__x.Default(1);
Float _y = __o__y.Default(1);
Float _z = __o__z.Default(1);
	HX_STACK_FRAME("phoenix.Vector","divide_xyz",0xfd37ae5f,"phoenix.Vector.divide_xyz","phoenix/Vector.hx",400,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
{
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(402)
			bool tmp = (_x != (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(402)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(402)
			if ((tmp1)){
				HX_STACK_LINE(214)
				::String tmp2 = HX_HCSTRING(" ( Vector.divide_xyz: division by zero (x)","\xe3","\xe4","\x0d","\x6f");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(402)
				::String tmp4 = (HX_HCSTRING("_x != 0","\x53","\x5e","\x1b","\xec") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(402)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(402)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(403)
		{
			HX_STACK_LINE(403)
			bool tmp = (_y != (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(403)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(403)
			if ((tmp1)){
				HX_STACK_LINE(214)
				::String tmp2 = HX_HCSTRING(" ( Vector.divide_xyz: division by zero (y)","\xc2","\xe5","\x0d","\x6f");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(403)
				::String tmp4 = (HX_HCSTRING("_y != 0","\xb2","\xba","\x76","\x52") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(403)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(403)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(404)
		{
			HX_STACK_LINE(404)
			bool tmp = (_z != (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(404)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(404)
			if ((tmp1)){
				HX_STACK_LINE(214)
				::String tmp2 = HX_HCSTRING(" ( Vector.divide_xyz: division by zero (z)","\xa1","\xe6","\x0d","\x6f");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(404)
				::String tmp4 = (HX_HCSTRING("_z != 0","\x11","\x17","\xd2","\xb8") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(404)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(404)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(406)
			Float tmp1 = _x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(406)
			Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(406)
			Float _x1 = tmp2;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(406)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(406)
			Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(406)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(406)
			Float _y1 = tmp5;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(406)
			Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(406)
			Float tmp7 = _z;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(406)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(406)
			Float _z1 = tmp8;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(406)
			bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(406)
			bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(406)
			this->ignore_listeners = true;
			HX_STACK_LINE(406)
			{
				HX_STACK_LINE(406)
				this->x = _x1;
				HX_STACK_LINE(406)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(406)
				if ((tmp10)){
					HX_STACK_LINE(406)
					this->x;
				}
				else{
					HX_STACK_LINE(406)
					Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(406)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(406)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(406)
					if ((tmp12)){
						HX_STACK_LINE(406)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(406)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(406)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(406)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(406)
						tmp13 = false;
					}
					HX_STACK_LINE(406)
					if ((tmp13)){
						HX_STACK_LINE(406)
						Float tmp14 = _x1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(406)
						this->listen_x(tmp14);
					}
					HX_STACK_LINE(406)
					this->x;
				}
			}
			HX_STACK_LINE(406)
			{
				HX_STACK_LINE(406)
				this->y = _y1;
				HX_STACK_LINE(406)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(406)
				if ((tmp10)){
					HX_STACK_LINE(406)
					this->y;
				}
				else{
					HX_STACK_LINE(406)
					Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(406)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(406)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(406)
					if ((tmp12)){
						HX_STACK_LINE(406)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(406)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(406)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(406)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(406)
						tmp13 = false;
					}
					HX_STACK_LINE(406)
					if ((tmp13)){
						HX_STACK_LINE(406)
						Float tmp14 = _y1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(406)
						this->listen_y(tmp14);
					}
					HX_STACK_LINE(406)
					this->y;
				}
			}
			HX_STACK_LINE(406)
			{
				HX_STACK_LINE(406)
				this->z = _z1;
				HX_STACK_LINE(406)
				bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(406)
				if ((tmp10)){
					HX_STACK_LINE(406)
					this->z;
				}
				else{
					HX_STACK_LINE(406)
					Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(406)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(406)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(406)
					if ((tmp12)){
						HX_STACK_LINE(406)
						bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(406)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(406)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(406)
						tmp13 = !(tmp16);
					}
					else{
						HX_STACK_LINE(406)
						tmp13 = false;
					}
					HX_STACK_LINE(406)
					if ((tmp13)){
						HX_STACK_LINE(406)
						Float tmp14 = _z1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(406)
						this->listen_z(tmp14);
					}
					HX_STACK_LINE(406)
					this->z;
				}
			}
			HX_STACK_LINE(406)
			this->ignore_listeners = prev;
			HX_STACK_LINE(406)
			Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(406)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(406)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(406)
			if ((tmp11)){
				HX_STACK_LINE(406)
				bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(406)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(406)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(406)
				tmp12 = !(tmp15);
			}
			else{
				HX_STACK_LINE(406)
				tmp12 = false;
			}
			HX_STACK_LINE(406)
			if ((tmp12)){
				HX_STACK_LINE(406)
				Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(406)
				this->listen_x(tmp13);
			}
			HX_STACK_LINE(406)
			Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(406)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(406)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(406)
			if ((tmp14)){
				HX_STACK_LINE(406)
				bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(406)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(406)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(406)
				tmp15 = !(tmp18);
			}
			else{
				HX_STACK_LINE(406)
				tmp15 = false;
			}
			HX_STACK_LINE(406)
			if ((tmp15)){
				HX_STACK_LINE(406)
				Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(406)
				this->listen_y(tmp16);
			}
			HX_STACK_LINE(406)
			Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(406)
			bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(406)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(406)
			if ((tmp17)){
				HX_STACK_LINE(406)
				bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(406)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(406)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(406)
				tmp18 = !(tmp21);
			}
			else{
				HX_STACK_LINE(406)
				tmp18 = false;
			}
			HX_STACK_LINE(406)
			if ((tmp18)){
				HX_STACK_LINE(406)
				Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(406)
				this->listen_z(tmp19);
			}
			HX_STACK_LINE(406)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(408)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector_obj,divide_xyz,return )

::phoenix::Vector Vector_obj::addScalar( Float v){
	HX_STACK_FRAME("phoenix.Vector","addScalar",0xda84f0a1,"phoenix.Vector.addScalar","phoenix/Vector.hx",413,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(415)
	{
		HX_STACK_LINE(415)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(415)
		Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(415)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		Float tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(415)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(415)
		Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(415)
		Float tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(415)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(415)
		Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(415)
		bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(415)
		bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(415)
		this->ignore_listeners = true;
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			this->x = _x;
			HX_STACK_LINE(415)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			if ((tmp10)){
				HX_STACK_LINE(415)
				this->x;
			}
			else{
				HX_STACK_LINE(415)
				Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(415)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(415)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(415)
				if ((tmp12)){
					HX_STACK_LINE(415)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(415)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(415)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(415)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(415)
					tmp13 = false;
				}
				HX_STACK_LINE(415)
				if ((tmp13)){
					HX_STACK_LINE(415)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(415)
					this->listen_x(tmp14);
				}
				HX_STACK_LINE(415)
				this->x;
			}
		}
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			this->y = _y;
			HX_STACK_LINE(415)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			if ((tmp10)){
				HX_STACK_LINE(415)
				this->y;
			}
			else{
				HX_STACK_LINE(415)
				Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(415)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(415)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(415)
				if ((tmp12)){
					HX_STACK_LINE(415)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(415)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(415)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(415)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(415)
					tmp13 = false;
				}
				HX_STACK_LINE(415)
				if ((tmp13)){
					HX_STACK_LINE(415)
					Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(415)
					this->listen_y(tmp14);
				}
				HX_STACK_LINE(415)
				this->y;
			}
		}
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			this->z = _z;
			HX_STACK_LINE(415)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			if ((tmp10)){
				HX_STACK_LINE(415)
				this->z;
			}
			else{
				HX_STACK_LINE(415)
				Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(415)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(415)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(415)
				if ((tmp12)){
					HX_STACK_LINE(415)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(415)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(415)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(415)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(415)
					tmp13 = false;
				}
				HX_STACK_LINE(415)
				if ((tmp13)){
					HX_STACK_LINE(415)
					Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(415)
					this->listen_z(tmp14);
				}
				HX_STACK_LINE(415)
				this->z;
			}
		}
		HX_STACK_LINE(415)
		this->ignore_listeners = prev;
		HX_STACK_LINE(415)
		Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(415)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(415)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(415)
		if ((tmp11)){
			HX_STACK_LINE(415)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(415)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(415)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(415)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(415)
			tmp12 = false;
		}
		HX_STACK_LINE(415)
		if ((tmp12)){
			HX_STACK_LINE(415)
			Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(415)
			this->listen_x(tmp13);
		}
		HX_STACK_LINE(415)
		Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(415)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(415)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(415)
		if ((tmp14)){
			HX_STACK_LINE(415)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(415)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(415)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(415)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(415)
			tmp15 = false;
		}
		HX_STACK_LINE(415)
		if ((tmp15)){
			HX_STACK_LINE(415)
			Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(415)
			this->listen_y(tmp16);
		}
		HX_STACK_LINE(415)
		Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(415)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(415)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(415)
		if ((tmp17)){
			HX_STACK_LINE(415)
			bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(415)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(415)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(415)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(415)
			tmp18 = false;
		}
		HX_STACK_LINE(415)
		if ((tmp18)){
			HX_STACK_LINE(415)
			Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(415)
			this->listen_z(tmp19);
		}
		HX_STACK_LINE(415)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(417)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,addScalar,return )

::phoenix::Vector Vector_obj::subtractScalar( Float v){
	HX_STACK_FRAME("phoenix.Vector","subtractScalar",0x2be95e6c,"phoenix.Vector.subtractScalar","phoenix/Vector.hx",421,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(423)
	{
		HX_STACK_LINE(423)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(423)
		Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(423)
		Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(423)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(423)
		Float tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(423)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(423)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(423)
		Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(423)
		Float tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(423)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(423)
		Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(423)
		bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(423)
		bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(423)
		this->ignore_listeners = true;
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(423)
			this->x = _x;
			HX_STACK_LINE(423)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(423)
			if ((tmp10)){
				HX_STACK_LINE(423)
				this->x;
			}
			else{
				HX_STACK_LINE(423)
				Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(423)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(423)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(423)
				if ((tmp12)){
					HX_STACK_LINE(423)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(423)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(423)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(423)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(423)
					tmp13 = false;
				}
				HX_STACK_LINE(423)
				if ((tmp13)){
					HX_STACK_LINE(423)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(423)
					this->listen_x(tmp14);
				}
				HX_STACK_LINE(423)
				this->x;
			}
		}
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(423)
			this->y = _y;
			HX_STACK_LINE(423)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(423)
			if ((tmp10)){
				HX_STACK_LINE(423)
				this->y;
			}
			else{
				HX_STACK_LINE(423)
				Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(423)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(423)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(423)
				if ((tmp12)){
					HX_STACK_LINE(423)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(423)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(423)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(423)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(423)
					tmp13 = false;
				}
				HX_STACK_LINE(423)
				if ((tmp13)){
					HX_STACK_LINE(423)
					Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(423)
					this->listen_y(tmp14);
				}
				HX_STACK_LINE(423)
				this->y;
			}
		}
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(423)
			this->z = _z;
			HX_STACK_LINE(423)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(423)
			if ((tmp10)){
				HX_STACK_LINE(423)
				this->z;
			}
			else{
				HX_STACK_LINE(423)
				Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(423)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(423)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(423)
				if ((tmp12)){
					HX_STACK_LINE(423)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(423)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(423)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(423)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(423)
					tmp13 = false;
				}
				HX_STACK_LINE(423)
				if ((tmp13)){
					HX_STACK_LINE(423)
					Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(423)
					this->listen_z(tmp14);
				}
				HX_STACK_LINE(423)
				this->z;
			}
		}
		HX_STACK_LINE(423)
		this->ignore_listeners = prev;
		HX_STACK_LINE(423)
		Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(423)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(423)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(423)
		if ((tmp11)){
			HX_STACK_LINE(423)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(423)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(423)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(423)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(423)
			tmp12 = false;
		}
		HX_STACK_LINE(423)
		if ((tmp12)){
			HX_STACK_LINE(423)
			Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(423)
			this->listen_x(tmp13);
		}
		HX_STACK_LINE(423)
		Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(423)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(423)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(423)
		if ((tmp14)){
			HX_STACK_LINE(423)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(423)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(423)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(423)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(423)
			tmp15 = false;
		}
		HX_STACK_LINE(423)
		if ((tmp15)){
			HX_STACK_LINE(423)
			Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(423)
			this->listen_y(tmp16);
		}
		HX_STACK_LINE(423)
		Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(423)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(423)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(423)
		if ((tmp17)){
			HX_STACK_LINE(423)
			bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(423)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(423)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(423)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(423)
			tmp18 = false;
		}
		HX_STACK_LINE(423)
		if ((tmp18)){
			HX_STACK_LINE(423)
			Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(423)
			this->listen_z(tmp19);
		}
		HX_STACK_LINE(423)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(425)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,subtractScalar,return )

::phoenix::Vector Vector_obj::multiplyScalar( Float v){
	HX_STACK_FRAME("phoenix.Vector","multiplyScalar",0x998bf77c,"phoenix.Vector.multiplyScalar","phoenix/Vector.hx",429,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		Float tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(431)
		Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(431)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(431)
		Float tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(431)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(431)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(431)
		Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(431)
		Float tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(431)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(431)
		Float _z = tmp8;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(431)
		bool tmp9 = this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(431)
		bool prev = tmp9;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(431)
		this->ignore_listeners = true;
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			this->x = _x;
			HX_STACK_LINE(431)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(431)
			if ((tmp10)){
				HX_STACK_LINE(431)
				this->x;
			}
			else{
				HX_STACK_LINE(431)
				Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(431)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(431)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(431)
				if ((tmp12)){
					HX_STACK_LINE(431)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(431)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(431)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(431)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(431)
					tmp13 = false;
				}
				HX_STACK_LINE(431)
				if ((tmp13)){
					HX_STACK_LINE(431)
					Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(431)
					this->listen_x(tmp14);
				}
				HX_STACK_LINE(431)
				this->x;
			}
		}
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			this->y = _y;
			HX_STACK_LINE(431)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(431)
			if ((tmp10)){
				HX_STACK_LINE(431)
				this->y;
			}
			else{
				HX_STACK_LINE(431)
				Dynamic tmp11 = this->listen_y_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(431)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(431)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(431)
				if ((tmp12)){
					HX_STACK_LINE(431)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(431)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(431)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(431)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(431)
					tmp13 = false;
				}
				HX_STACK_LINE(431)
				if ((tmp13)){
					HX_STACK_LINE(431)
					Float tmp14 = _y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(431)
					this->listen_y(tmp14);
				}
				HX_STACK_LINE(431)
				this->y;
			}
		}
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			this->z = _z;
			HX_STACK_LINE(431)
			bool tmp10 = this->_construct;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(431)
			if ((tmp10)){
				HX_STACK_LINE(431)
				this->z;
			}
			else{
				HX_STACK_LINE(431)
				Dynamic tmp11 = this->listen_z_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(431)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(431)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(431)
				if ((tmp12)){
					HX_STACK_LINE(431)
					bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(431)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(431)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(431)
					tmp13 = !(tmp16);
				}
				else{
					HX_STACK_LINE(431)
					tmp13 = false;
				}
				HX_STACK_LINE(431)
				if ((tmp13)){
					HX_STACK_LINE(431)
					Float tmp14 = _z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(431)
					this->listen_z(tmp14);
				}
				HX_STACK_LINE(431)
				this->z;
			}
		}
		HX_STACK_LINE(431)
		this->ignore_listeners = prev;
		HX_STACK_LINE(431)
		Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(431)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(431)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(431)
		if ((tmp11)){
			HX_STACK_LINE(431)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(431)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(431)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(431)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(431)
			tmp12 = false;
		}
		HX_STACK_LINE(431)
		if ((tmp12)){
			HX_STACK_LINE(431)
			Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(431)
			this->listen_x(tmp13);
		}
		HX_STACK_LINE(431)
		Dynamic tmp13 = this->listen_y_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(431)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(431)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(431)
		if ((tmp14)){
			HX_STACK_LINE(431)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(431)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(431)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(431)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(431)
			tmp15 = false;
		}
		HX_STACK_LINE(431)
		if ((tmp15)){
			HX_STACK_LINE(431)
			Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(431)
			this->listen_y(tmp16);
		}
		HX_STACK_LINE(431)
		Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(431)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(431)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(431)
		if ((tmp17)){
			HX_STACK_LINE(431)
			bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(431)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(431)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(431)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(431)
			tmp18 = false;
		}
		HX_STACK_LINE(431)
		if ((tmp18)){
			HX_STACK_LINE(431)
			Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(431)
			this->listen_z(tmp19);
		}
		HX_STACK_LINE(431)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(433)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,multiplyScalar,return )

::phoenix::Vector Vector_obj::divideScalar( Float v){
	HX_STACK_FRAME("phoenix.Vector","divideScalar",0x89ad5791,"phoenix.Vector.divideScalar","phoenix/Vector.hx",437,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(439)
	bool tmp = (v != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(439)
	if ((tmp)){
		HX_STACK_LINE(441)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(441)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		Float tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(441)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(441)
		Float _y = tmp6;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(441)
		Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(441)
		Float tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(441)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(441)
		Float _z = tmp9;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(441)
		bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(441)
		bool prev = tmp10;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(441)
		this->ignore_listeners = true;
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			this->x = _x;
			HX_STACK_LINE(441)
			bool tmp11 = this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(441)
			if ((tmp11)){
				HX_STACK_LINE(441)
				this->x;
			}
			else{
				HX_STACK_LINE(441)
				Dynamic tmp12 = this->listen_x_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(441)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(441)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(441)
				if ((tmp13)){
					HX_STACK_LINE(441)
					bool tmp15 = this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(441)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(441)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(441)
					tmp14 = !(tmp17);
				}
				else{
					HX_STACK_LINE(441)
					tmp14 = false;
				}
				HX_STACK_LINE(441)
				if ((tmp14)){
					HX_STACK_LINE(441)
					Float tmp15 = _x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(441)
					this->listen_x(tmp15);
				}
				HX_STACK_LINE(441)
				this->x;
			}
		}
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			this->y = _y;
			HX_STACK_LINE(441)
			bool tmp11 = this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(441)
			if ((tmp11)){
				HX_STACK_LINE(441)
				this->y;
			}
			else{
				HX_STACK_LINE(441)
				Dynamic tmp12 = this->listen_y_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(441)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(441)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(441)
				if ((tmp13)){
					HX_STACK_LINE(441)
					bool tmp15 = this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(441)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(441)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(441)
					tmp14 = !(tmp17);
				}
				else{
					HX_STACK_LINE(441)
					tmp14 = false;
				}
				HX_STACK_LINE(441)
				if ((tmp14)){
					HX_STACK_LINE(441)
					Float tmp15 = _y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(441)
					this->listen_y(tmp15);
				}
				HX_STACK_LINE(441)
				this->y;
			}
		}
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			this->z = _z;
			HX_STACK_LINE(441)
			bool tmp11 = this->_construct;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(441)
			if ((tmp11)){
				HX_STACK_LINE(441)
				this->z;
			}
			else{
				HX_STACK_LINE(441)
				Dynamic tmp12 = this->listen_z_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(441)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(441)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(441)
				if ((tmp13)){
					HX_STACK_LINE(441)
					bool tmp15 = this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(441)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(441)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(441)
					tmp14 = !(tmp17);
				}
				else{
					HX_STACK_LINE(441)
					tmp14 = false;
				}
				HX_STACK_LINE(441)
				if ((tmp14)){
					HX_STACK_LINE(441)
					Float tmp15 = _z;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(441)
					this->listen_z(tmp15);
				}
				HX_STACK_LINE(441)
				this->z;
			}
		}
		HX_STACK_LINE(441)
		this->ignore_listeners = prev;
		HX_STACK_LINE(441)
		Dynamic tmp11 = this->listen_x_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(441)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(441)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(441)
		if ((tmp12)){
			HX_STACK_LINE(441)
			bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(441)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(441)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(441)
			tmp13 = !(tmp16);
		}
		else{
			HX_STACK_LINE(441)
			tmp13 = false;
		}
		HX_STACK_LINE(441)
		if ((tmp13)){
			HX_STACK_LINE(441)
			Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(441)
			this->listen_x(tmp14);
		}
		HX_STACK_LINE(441)
		Dynamic tmp14 = this->listen_y_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(441)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(441)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(441)
		if ((tmp15)){
			HX_STACK_LINE(441)
			bool tmp17 = this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(441)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(441)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(441)
			tmp16 = !(tmp19);
		}
		else{
			HX_STACK_LINE(441)
			tmp16 = false;
		}
		HX_STACK_LINE(441)
		if ((tmp16)){
			HX_STACK_LINE(441)
			Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(441)
			this->listen_y(tmp17);
		}
		HX_STACK_LINE(441)
		Dynamic tmp17 = this->listen_z_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(441)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(441)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(441)
		if ((tmp18)){
			HX_STACK_LINE(441)
			bool tmp20 = this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(441)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(441)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(441)
			tmp19 = !(tmp22);
		}
		else{
			HX_STACK_LINE(441)
			tmp19 = false;
		}
		HX_STACK_LINE(441)
		if ((tmp19)){
			HX_STACK_LINE(441)
			Float tmp20 = this->z;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(441)
			this->listen_z(tmp20);
		}
		HX_STACK_LINE(441)
		hx::ObjectPtr<OBJ_>(this);
	}
	else{
		HX_STACK_LINE(445)
		bool tmp1 = this->ignore_listeners;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		bool prev = tmp1;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(445)
		this->ignore_listeners = true;
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			this->x = (int)0;
			HX_STACK_LINE(445)
			bool tmp2 = this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(445)
			if ((tmp2)){
				HX_STACK_LINE(445)
				this->x;
			}
			else{
				HX_STACK_LINE(445)
				Dynamic tmp3 = this->listen_x_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(445)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(445)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(445)
				if ((tmp4)){
					HX_STACK_LINE(445)
					bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(445)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(445)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(445)
					tmp5 = !(tmp8);
				}
				else{
					HX_STACK_LINE(445)
					tmp5 = false;
				}
				HX_STACK_LINE(445)
				if ((tmp5)){
					HX_STACK_LINE(445)
					this->listen_x((int)0);
				}
				HX_STACK_LINE(445)
				this->x;
			}
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			this->y = (int)0;
			HX_STACK_LINE(445)
			bool tmp2 = this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(445)
			if ((tmp2)){
				HX_STACK_LINE(445)
				this->y;
			}
			else{
				HX_STACK_LINE(445)
				Dynamic tmp3 = this->listen_y_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(445)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(445)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(445)
				if ((tmp4)){
					HX_STACK_LINE(445)
					bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(445)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(445)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(445)
					tmp5 = !(tmp8);
				}
				else{
					HX_STACK_LINE(445)
					tmp5 = false;
				}
				HX_STACK_LINE(445)
				if ((tmp5)){
					HX_STACK_LINE(445)
					this->listen_y((int)0);
				}
				HX_STACK_LINE(445)
				this->y;
			}
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			this->z = (int)0;
			HX_STACK_LINE(445)
			bool tmp2 = this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(445)
			if ((tmp2)){
				HX_STACK_LINE(445)
				this->z;
			}
			else{
				HX_STACK_LINE(445)
				Dynamic tmp3 = this->listen_z_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(445)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(445)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(445)
				if ((tmp4)){
					HX_STACK_LINE(445)
					bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(445)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(445)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(445)
					tmp5 = !(tmp8);
				}
				else{
					HX_STACK_LINE(445)
					tmp5 = false;
				}
				HX_STACK_LINE(445)
				if ((tmp5)){
					HX_STACK_LINE(445)
					this->listen_z((int)0);
				}
				HX_STACK_LINE(445)
				this->z;
			}
		}
		HX_STACK_LINE(445)
		this->ignore_listeners = prev;
		HX_STACK_LINE(445)
		Dynamic tmp2 = this->listen_x_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(445)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(445)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(445)
		if ((tmp3)){
			HX_STACK_LINE(445)
			bool tmp5 = this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(445)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(445)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(445)
			tmp4 = !(tmp7);
		}
		else{
			HX_STACK_LINE(445)
			tmp4 = false;
		}
		HX_STACK_LINE(445)
		if ((tmp4)){
			HX_STACK_LINE(445)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(445)
			this->listen_x(tmp5);
		}
		HX_STACK_LINE(445)
		Dynamic tmp5 = this->listen_y_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(445)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(445)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(445)
		if ((tmp6)){
			HX_STACK_LINE(445)
			bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(445)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(445)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(445)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(445)
			tmp7 = false;
		}
		HX_STACK_LINE(445)
		if ((tmp7)){
			HX_STACK_LINE(445)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(445)
			this->listen_y(tmp8);
		}
		HX_STACK_LINE(445)
		Dynamic tmp8 = this->listen_z_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(445)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(445)
		if ((tmp9)){
			HX_STACK_LINE(445)
			bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(445)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(445)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(445)
			tmp10 = !(tmp13);
		}
		else{
			HX_STACK_LINE(445)
			tmp10 = false;
		}
		HX_STACK_LINE(445)
		if ((tmp10)){
			HX_STACK_LINE(445)
			Float tmp11 = this->z;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(445)
			this->listen_z(tmp11);
		}
		HX_STACK_LINE(445)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(449)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,divideScalar,return )

Float Vector_obj::set_length( Float value){
	HX_STACK_FRAME("phoenix.Vector","set_length",0x204bb42f,"phoenix.Vector.set_length","phoenix/Vector.hx",456,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(458)
	{
		HX_STACK_LINE(458)
		::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(458)
		{
			HX_STACK_LINE(458)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(458)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(458)
			Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(458)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(458)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(458)
			Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(458)
			Float tmp9 = this->z;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(458)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(458)
			Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(458)
			Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(458)
			Float v = tmp12;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(458)
			bool tmp13 = (v != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(458)
			if ((tmp13)){
				HX_STACK_LINE(458)
				Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				Float tmp15 = v;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(458)
				Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(458)
				Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(458)
				Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(458)
				Float tmp18 = v;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(458)
				Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(458)
				Float _y = tmp19;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(458)
				Float tmp20 = this->z;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(458)
				Float tmp21 = v;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(458)
				Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(458)
				Float _z = tmp22;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(458)
				bool tmp23 = this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(458)
				bool prev = tmp23;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(458)
				this->ignore_listeners = true;
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					this->x = _x;
					HX_STACK_LINE(458)
					bool tmp24 = this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(458)
					if ((tmp24)){
						HX_STACK_LINE(458)
						this->x;
					}
					else{
						HX_STACK_LINE(458)
						Dynamic tmp25 = this->listen_x_dyn();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(458)
						bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(458)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(458)
						if ((tmp26)){
							HX_STACK_LINE(458)
							bool tmp28 = this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(458)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(458)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(458)
							tmp27 = !(tmp30);
						}
						else{
							HX_STACK_LINE(458)
							tmp27 = false;
						}
						HX_STACK_LINE(458)
						if ((tmp27)){
							HX_STACK_LINE(458)
							Float tmp28 = _x;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(458)
							this->listen_x(tmp28);
						}
						HX_STACK_LINE(458)
						this->x;
					}
				}
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					this->y = _y;
					HX_STACK_LINE(458)
					bool tmp24 = this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(458)
					if ((tmp24)){
						HX_STACK_LINE(458)
						this->y;
					}
					else{
						HX_STACK_LINE(458)
						Dynamic tmp25 = this->listen_y_dyn();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(458)
						bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(458)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(458)
						if ((tmp26)){
							HX_STACK_LINE(458)
							bool tmp28 = this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(458)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(458)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(458)
							tmp27 = !(tmp30);
						}
						else{
							HX_STACK_LINE(458)
							tmp27 = false;
						}
						HX_STACK_LINE(458)
						if ((tmp27)){
							HX_STACK_LINE(458)
							Float tmp28 = _y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(458)
							this->listen_y(tmp28);
						}
						HX_STACK_LINE(458)
						this->y;
					}
				}
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					this->z = _z;
					HX_STACK_LINE(458)
					bool tmp24 = this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(458)
					if ((tmp24)){
						HX_STACK_LINE(458)
						this->z;
					}
					else{
						HX_STACK_LINE(458)
						Dynamic tmp25 = this->listen_z_dyn();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(458)
						bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(458)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(458)
						if ((tmp26)){
							HX_STACK_LINE(458)
							bool tmp28 = this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(458)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(458)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(458)
							tmp27 = !(tmp30);
						}
						else{
							HX_STACK_LINE(458)
							tmp27 = false;
						}
						HX_STACK_LINE(458)
						if ((tmp27)){
							HX_STACK_LINE(458)
							Float tmp28 = _z;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(458)
							this->listen_z(tmp28);
						}
						HX_STACK_LINE(458)
						this->z;
					}
				}
				HX_STACK_LINE(458)
				this->ignore_listeners = prev;
				HX_STACK_LINE(458)
				Dynamic tmp24 = this->listen_x_dyn();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(458)
				bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(458)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(458)
				if ((tmp25)){
					HX_STACK_LINE(458)
					bool tmp27 = this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(458)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(458)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(458)
					tmp26 = !(tmp29);
				}
				else{
					HX_STACK_LINE(458)
					tmp26 = false;
				}
				HX_STACK_LINE(458)
				if ((tmp26)){
					HX_STACK_LINE(458)
					Float tmp27 = this->x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(458)
					this->listen_x(tmp27);
				}
				HX_STACK_LINE(458)
				Dynamic tmp27 = this->listen_y_dyn();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(458)
				bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(458)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(458)
				if ((tmp28)){
					HX_STACK_LINE(458)
					bool tmp30 = this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(458)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(458)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(458)
					tmp29 = !(tmp32);
				}
				else{
					HX_STACK_LINE(458)
					tmp29 = false;
				}
				HX_STACK_LINE(458)
				if ((tmp29)){
					HX_STACK_LINE(458)
					Float tmp30 = this->y;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(458)
					this->listen_y(tmp30);
				}
				HX_STACK_LINE(458)
				Dynamic tmp30 = this->listen_z_dyn();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(458)
				bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(458)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(458)
				if ((tmp31)){
					HX_STACK_LINE(458)
					bool tmp33 = this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(458)
					bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(458)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(458)
					tmp32 = !(tmp35);
				}
				else{
					HX_STACK_LINE(458)
					tmp32 = false;
				}
				HX_STACK_LINE(458)
				if ((tmp32)){
					HX_STACK_LINE(458)
					Float tmp33 = this->z;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(458)
					this->listen_z(tmp33);
				}
				HX_STACK_LINE(458)
				hx::ObjectPtr<OBJ_>(this);
			}
			else{
				HX_STACK_LINE(458)
				bool tmp14 = this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				bool prev = tmp14;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(458)
				this->ignore_listeners = true;
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					this->x = (int)0;
					HX_STACK_LINE(458)
					bool tmp15 = this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					if ((tmp15)){
						HX_STACK_LINE(458)
						this->x;
					}
					else{
						HX_STACK_LINE(458)
						Dynamic tmp16 = this->listen_x_dyn();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(458)
						bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(458)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(458)
						if ((tmp17)){
							HX_STACK_LINE(458)
							bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(458)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(458)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(458)
							tmp18 = !(tmp21);
						}
						else{
							HX_STACK_LINE(458)
							tmp18 = false;
						}
						HX_STACK_LINE(458)
						if ((tmp18)){
							HX_STACK_LINE(458)
							this->listen_x((int)0);
						}
						HX_STACK_LINE(458)
						this->x;
					}
				}
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					this->y = (int)0;
					HX_STACK_LINE(458)
					bool tmp15 = this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					if ((tmp15)){
						HX_STACK_LINE(458)
						this->y;
					}
					else{
						HX_STACK_LINE(458)
						Dynamic tmp16 = this->listen_y_dyn();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(458)
						bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(458)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(458)
						if ((tmp17)){
							HX_STACK_LINE(458)
							bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(458)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(458)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(458)
							tmp18 = !(tmp21);
						}
						else{
							HX_STACK_LINE(458)
							tmp18 = false;
						}
						HX_STACK_LINE(458)
						if ((tmp18)){
							HX_STACK_LINE(458)
							this->listen_y((int)0);
						}
						HX_STACK_LINE(458)
						this->y;
					}
				}
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					this->z = (int)0;
					HX_STACK_LINE(458)
					bool tmp15 = this->_construct;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					if ((tmp15)){
						HX_STACK_LINE(458)
						this->z;
					}
					else{
						HX_STACK_LINE(458)
						Dynamic tmp16 = this->listen_z_dyn();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(458)
						bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(458)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(458)
						if ((tmp17)){
							HX_STACK_LINE(458)
							bool tmp19 = this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(458)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(458)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(458)
							tmp18 = !(tmp21);
						}
						else{
							HX_STACK_LINE(458)
							tmp18 = false;
						}
						HX_STACK_LINE(458)
						if ((tmp18)){
							HX_STACK_LINE(458)
							this->listen_z((int)0);
						}
						HX_STACK_LINE(458)
						this->z;
					}
				}
				HX_STACK_LINE(458)
				this->ignore_listeners = prev;
				HX_STACK_LINE(458)
				Dynamic tmp15 = this->listen_x_dyn();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(458)
				bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(458)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(458)
				if ((tmp16)){
					HX_STACK_LINE(458)
					bool tmp18 = this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(458)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(458)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(458)
					tmp17 = !(tmp20);
				}
				else{
					HX_STACK_LINE(458)
					tmp17 = false;
				}
				HX_STACK_LINE(458)
				if ((tmp17)){
					HX_STACK_LINE(458)
					Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(458)
					this->listen_x(tmp18);
				}
				HX_STACK_LINE(458)
				Dynamic tmp18 = this->listen_y_dyn();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(458)
				bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(458)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(458)
				if ((tmp19)){
					HX_STACK_LINE(458)
					bool tmp21 = this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(458)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(458)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(458)
					tmp20 = !(tmp23);
				}
				else{
					HX_STACK_LINE(458)
					tmp20 = false;
				}
				HX_STACK_LINE(458)
				if ((tmp20)){
					HX_STACK_LINE(458)
					Float tmp21 = this->y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(458)
					this->listen_y(tmp21);
				}
				HX_STACK_LINE(458)
				Dynamic tmp21 = this->listen_z_dyn();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(458)
				bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(458)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(458)
				if ((tmp22)){
					HX_STACK_LINE(458)
					bool tmp24 = this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(458)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(458)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(458)
					tmp23 = !(tmp26);
				}
				else{
					HX_STACK_LINE(458)
					tmp23 = false;
				}
				HX_STACK_LINE(458)
				if ((tmp23)){
					HX_STACK_LINE(458)
					Float tmp24 = this->z;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(458)
					this->listen_z(tmp24);
				}
				HX_STACK_LINE(458)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(458)
			tmp = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(458)
		::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(458)
		{
			HX_STACK_LINE(458)
			Float tmp1 = (_this->x * value);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(458)
			Float _x = tmp1;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(458)
			Float tmp2 = (_this->y * value);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			Float _y = tmp2;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(458)
			Float tmp3 = (_this->z * value);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			Float _z = tmp3;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(458)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(458)
			_this->ignore_listeners = true;
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				_this->x = _x;
				HX_STACK_LINE(458)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(458)
				if ((tmp4)){
					HX_STACK_LINE(458)
					_this->x;
				}
				else{
					HX_STACK_LINE(458)
					bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(458)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(458)
					if ((tmp5)){
						HX_STACK_LINE(458)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(458)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(458)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(458)
						tmp6 = false;
					}
					HX_STACK_LINE(458)
					if ((tmp6)){
						HX_STACK_LINE(458)
						Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(458)
						_this->listen_x(tmp7);
					}
					HX_STACK_LINE(458)
					_this->x;
				}
			}
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				_this->y = _y;
				HX_STACK_LINE(458)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(458)
				if ((tmp4)){
					HX_STACK_LINE(458)
					_this->y;
				}
				else{
					HX_STACK_LINE(458)
					bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(458)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(458)
					if ((tmp5)){
						HX_STACK_LINE(458)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(458)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(458)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(458)
						tmp6 = false;
					}
					HX_STACK_LINE(458)
					if ((tmp6)){
						HX_STACK_LINE(458)
						Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(458)
						_this->listen_y(tmp7);
					}
					HX_STACK_LINE(458)
					_this->y;
				}
			}
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				_this->z = _z;
				HX_STACK_LINE(458)
				bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(458)
				if ((tmp4)){
					HX_STACK_LINE(458)
					_this->z;
				}
				else{
					HX_STACK_LINE(458)
					bool tmp5 = (_this->listen_z != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(458)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(458)
					if ((tmp5)){
						HX_STACK_LINE(458)
						bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(458)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(458)
						tmp6 = !(tmp8);
					}
					else{
						HX_STACK_LINE(458)
						tmp6 = false;
					}
					HX_STACK_LINE(458)
					if ((tmp6)){
						HX_STACK_LINE(458)
						Float tmp7 = _z;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(458)
						_this->listen_z(tmp7);
					}
					HX_STACK_LINE(458)
					_this->z;
				}
			}
			HX_STACK_LINE(458)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(458)
			bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(458)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(458)
			if ((tmp4)){
				HX_STACK_LINE(458)
				bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(458)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(458)
				tmp5 = false;
			}
			HX_STACK_LINE(458)
			if ((tmp5)){
				HX_STACK_LINE(458)
				Float tmp6 = _this->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				_this->listen_x(tmp6);
			}
			HX_STACK_LINE(458)
			bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(458)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(458)
			if ((tmp6)){
				HX_STACK_LINE(458)
				bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(458)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(458)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(458)
				tmp7 = false;
			}
			HX_STACK_LINE(458)
			if ((tmp7)){
				HX_STACK_LINE(458)
				Float tmp8 = _this->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(458)
				_this->listen_y(tmp8);
			}
			HX_STACK_LINE(458)
			bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
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
				Float tmp10 = _this->z;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(458)
				_this->listen_z(tmp10);
			}
			HX_STACK_LINE(458)
			_this;
		}
		HX_STACK_LINE(458)
		_this;
	}
	HX_STACK_LINE(460)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_length,return )

Float Vector_obj::get_length( ){
	HX_STACK_FRAME("phoenix.Vector","get_length",0x1cce15bb,"phoenix.Vector.get_length","phoenix/Vector.hx",464,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(466)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(466)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(466)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(466)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(466)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(466)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(466)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(466)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(466)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(466)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(466)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(466)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_length,return )

Float Vector_obj::get_lengthsq( ){
	HX_STACK_FRAME("phoenix.Vector","get_lengthsq",0x7ccb9f19,"phoenix.Vector.get_lengthsq","phoenix/Vector.hx",471,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(473)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(473)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(473)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(473)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(473)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(473)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(473)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(473)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(473)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(473)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(473)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(473)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_lengthsq,return )

::phoenix::Vector Vector_obj::get_normalized( ){
	HX_STACK_FRAME("phoenix.Vector","get_normalized",0x48cf738c,"phoenix.Vector.get_normalized","phoenix/Vector.hx",477,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(479)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(479)
	{
		HX_STACK_LINE(479)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(479)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(479)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(479)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(479)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(479)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(479)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(479)
		Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(479)
		Float tmp9 = this->z;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(479)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(479)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(479)
		Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(479)
		Float b = tmp12;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(479)
		Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(479)
		Float tmp14 = b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(479)
		Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(479)
		Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(479)
		Float tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(479)
		Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(479)
		Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(479)
		Float tmp20 = b;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(479)
		Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(479)
		tmp = ::phoenix::Vector_obj::__new(tmp15,tmp18,tmp21,null());
	}
	HX_STACK_LINE(479)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_normalized,return )

Float Vector_obj::set_x( Float _x){
	HX_STACK_FRAME("phoenix.Vector","set_x",0x08e225cf,"phoenix.Vector.set_x","phoenix/Vector.hx",483,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(485)
	this->x = _x;
	HX_STACK_LINE(487)
	bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(487)
	if ((tmp)){
		HX_STACK_LINE(487)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		return tmp1;
	}
	HX_STACK_LINE(489)
	Dynamic tmp1 = this->listen_x_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(489)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(489)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(489)
	if ((tmp2)){
		HX_STACK_LINE(489)
		bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(489)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(489)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(489)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(489)
		tmp3 = false;
	}
	HX_STACK_LINE(489)
	if ((tmp3)){
		HX_STACK_LINE(489)
		Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(489)
		this->listen_x(tmp4);
	}
	HX_STACK_LINE(491)
	Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(491)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_x,return )

Float Vector_obj::set_y( Float _y){
	HX_STACK_FRAME("phoenix.Vector","set_y",0x08e225d0,"phoenix.Vector.set_y","phoenix/Vector.hx",495,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(497)
	this->y = _y;
	HX_STACK_LINE(499)
	bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	if ((tmp)){
		HX_STACK_LINE(499)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(499)
		return tmp1;
	}
	HX_STACK_LINE(501)
	Dynamic tmp1 = this->listen_y_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(501)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(501)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(501)
	if ((tmp2)){
		HX_STACK_LINE(501)
		bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(501)
		tmp3 = false;
	}
	HX_STACK_LINE(501)
	if ((tmp3)){
		HX_STACK_LINE(501)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		this->listen_y(tmp4);
	}
	HX_STACK_LINE(503)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(503)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_y,return )

Float Vector_obj::set_z( Float _z){
	HX_STACK_FRAME("phoenix.Vector","set_z",0x08e225d1,"phoenix.Vector.set_z","phoenix/Vector.hx",507,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(509)
	this->z = _z;
	HX_STACK_LINE(511)
	bool tmp = this->_construct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(511)
	if ((tmp)){
		HX_STACK_LINE(511)
		Float tmp1 = this->z;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(511)
		return tmp1;
	}
	HX_STACK_LINE(513)
	Dynamic tmp1 = this->listen_z_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(513)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(513)
	if ((tmp2)){
		HX_STACK_LINE(513)
		bool tmp4 = this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(513)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(513)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(513)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(513)
		tmp3 = false;
	}
	HX_STACK_LINE(513)
	if ((tmp3)){
		HX_STACK_LINE(513)
		Float tmp4 = _z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(513)
		this->listen_z(tmp4);
	}
	HX_STACK_LINE(515)
	Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(515)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_z,return )

::phoenix::Vector Vector_obj::get_inverted( ){
	HX_STACK_FRAME("phoenix.Vector","get_inverted",0x5239d10a,"phoenix.Vector.get_inverted","phoenix/Vector.hx",519,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(521)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(521)
	Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(521)
	Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(521)
	::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(tmp1,tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(521)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_inverted,return )

Float Vector_obj::set_angle2D( Float value){
	HX_STACK_FRAME("phoenix.Vector","set_angle2D",0xed308afc,"phoenix.Vector.set_angle2D","phoenix/Vector.hx",528,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(530)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(530)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(530)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(530)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(530)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(530)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(530)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(530)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(530)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(530)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(530)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(530)
	Float len = tmp11;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(532)
	{
		HX_STACK_LINE(532)
		Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(532)
		Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(532)
		Float tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(532)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(532)
		Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(532)
		Float tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(532)
		Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(532)
		Float tmp18 = len;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(532)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(532)
		Float _y = tmp19;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(532)
		bool tmp20 = this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(532)
		bool prev = tmp20;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(532)
		this->ignore_listeners = true;
		HX_STACK_LINE(532)
		{
			HX_STACK_LINE(532)
			this->x = _x;
			HX_STACK_LINE(532)
			bool tmp21 = this->_construct;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(532)
			if ((tmp21)){
				HX_STACK_LINE(532)
				this->x;
			}
			else{
				HX_STACK_LINE(532)
				Dynamic tmp22 = this->listen_x_dyn();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(532)
				bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(532)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(532)
				if ((tmp23)){
					HX_STACK_LINE(532)
					bool tmp25 = this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(532)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(532)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(532)
					tmp24 = !(tmp27);
				}
				else{
					HX_STACK_LINE(532)
					tmp24 = false;
				}
				HX_STACK_LINE(532)
				if ((tmp24)){
					HX_STACK_LINE(532)
					Float tmp25 = _x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(532)
					this->listen_x(tmp25);
				}
				HX_STACK_LINE(532)
				this->x;
			}
		}
		HX_STACK_LINE(532)
		{
			HX_STACK_LINE(532)
			this->y = _y;
			HX_STACK_LINE(532)
			bool tmp21 = this->_construct;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(532)
			if ((tmp21)){
				HX_STACK_LINE(532)
				this->y;
			}
			else{
				HX_STACK_LINE(532)
				Dynamic tmp22 = this->listen_y_dyn();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(532)
				bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(532)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(532)
				if ((tmp23)){
					HX_STACK_LINE(532)
					bool tmp25 = this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(532)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(532)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(532)
					tmp24 = !(tmp27);
				}
				else{
					HX_STACK_LINE(532)
					tmp24 = false;
				}
				HX_STACK_LINE(532)
				if ((tmp24)){
					HX_STACK_LINE(532)
					Float tmp25 = _y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(532)
					this->listen_y(tmp25);
				}
				HX_STACK_LINE(532)
				this->y;
			}
		}
		HX_STACK_LINE(532)
		this->ignore_listeners = prev;
		HX_STACK_LINE(532)
		Dynamic tmp21 = this->listen_x_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(532)
		bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(532)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(532)
		if ((tmp22)){
			HX_STACK_LINE(532)
			bool tmp24 = this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(532)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(532)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(532)
			tmp23 = !(tmp26);
		}
		else{
			HX_STACK_LINE(532)
			tmp23 = false;
		}
		HX_STACK_LINE(532)
		if ((tmp23)){
			HX_STACK_LINE(532)
			Float tmp24 = this->x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(532)
			this->listen_x(tmp24);
		}
		HX_STACK_LINE(532)
		Dynamic tmp24 = this->listen_y_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(532)
		bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(532)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(532)
		if ((tmp25)){
			HX_STACK_LINE(532)
			bool tmp27 = this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(532)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(532)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(532)
			tmp26 = !(tmp29);
		}
		else{
			HX_STACK_LINE(532)
			tmp26 = false;
		}
		HX_STACK_LINE(532)
		if ((tmp26)){
			HX_STACK_LINE(532)
			Float tmp27 = this->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(532)
			this->listen_y(tmp27);
		}
		HX_STACK_LINE(532)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(534)
	Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(534)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,set_angle2D,return )

Float Vector_obj::get_angle2D( ){
	HX_STACK_FRAME("phoenix.Vector","get_angle2D",0xe2c383f0,"phoenix.Vector.get_angle2D","phoenix/Vector.hx",538,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(540)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(540)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(540)
	Float tmp2 = ::Math_obj::atan2(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(540)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,get_angle2D,return )

::phoenix::Vector Vector_obj::truncate( Float max){
	HX_STACK_FRAME("phoenix.Vector","truncate",0x7fa63472,"phoenix.Vector.truncate","phoenix/Vector.hx",549,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(551)
	{
		HX_STACK_LINE(551)
		Float tmp = max;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(551)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(551)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(551)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(551)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(551)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(551)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(551)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(551)
		Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(551)
		Float tmp9 = this->z;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(551)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(551)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(551)
		Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(551)
		Float tmp13 = ::Math_obj::min(tmp,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(551)
		Float value = tmp13;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(551)
		{
			HX_STACK_LINE(551)
			::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(551)
			{
				HX_STACK_LINE(551)
				Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(551)
				Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(551)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(551)
				Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(551)
				Float tmp19 = this->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(551)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(551)
				Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(551)
				Float tmp22 = this->z;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(551)
				Float tmp23 = this->z;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(551)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(551)
				Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(551)
				Float tmp26 = ::Math_obj::sqrt(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(551)
				Float v = tmp26;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(551)
				bool tmp27 = (v != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(551)
				if ((tmp27)){
					HX_STACK_LINE(551)
					Float tmp28 = this->x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(551)
					Float tmp29 = v;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(551)
					Float tmp30 = (Float(tmp28) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(551)
					Float _x = tmp30;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(551)
					Float tmp31 = this->y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(551)
					Float tmp32 = v;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(551)
					Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(551)
					Float _y = tmp33;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(551)
					Float tmp34 = this->z;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(551)
					Float tmp35 = v;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(551)
					Float tmp36 = (Float(tmp34) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(551)
					Float _z = tmp36;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(551)
					bool tmp37 = this->ignore_listeners;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(551)
					bool prev = tmp37;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(551)
					this->ignore_listeners = true;
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						this->x = _x;
						HX_STACK_LINE(551)
						bool tmp38 = this->_construct;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(551)
						if ((tmp38)){
							HX_STACK_LINE(551)
							this->x;
						}
						else{
							HX_STACK_LINE(551)
							Dynamic tmp39 = this->listen_x_dyn();		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(551)
							bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(551)
							bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(551)
							if ((tmp40)){
								HX_STACK_LINE(551)
								bool tmp42 = this->ignore_listeners;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(551)
								bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(551)
								bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(551)
								tmp41 = !(tmp44);
							}
							else{
								HX_STACK_LINE(551)
								tmp41 = false;
							}
							HX_STACK_LINE(551)
							if ((tmp41)){
								HX_STACK_LINE(551)
								Float tmp42 = _x;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(551)
								this->listen_x(tmp42);
							}
							HX_STACK_LINE(551)
							this->x;
						}
					}
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						this->y = _y;
						HX_STACK_LINE(551)
						bool tmp38 = this->_construct;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(551)
						if ((tmp38)){
							HX_STACK_LINE(551)
							this->y;
						}
						else{
							HX_STACK_LINE(551)
							Dynamic tmp39 = this->listen_y_dyn();		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(551)
							bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(551)
							bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(551)
							if ((tmp40)){
								HX_STACK_LINE(551)
								bool tmp42 = this->ignore_listeners;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(551)
								bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(551)
								bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(551)
								tmp41 = !(tmp44);
							}
							else{
								HX_STACK_LINE(551)
								tmp41 = false;
							}
							HX_STACK_LINE(551)
							if ((tmp41)){
								HX_STACK_LINE(551)
								Float tmp42 = _y;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(551)
								this->listen_y(tmp42);
							}
							HX_STACK_LINE(551)
							this->y;
						}
					}
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						this->z = _z;
						HX_STACK_LINE(551)
						bool tmp38 = this->_construct;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(551)
						if ((tmp38)){
							HX_STACK_LINE(551)
							this->z;
						}
						else{
							HX_STACK_LINE(551)
							Dynamic tmp39 = this->listen_z_dyn();		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(551)
							bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(551)
							bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(551)
							if ((tmp40)){
								HX_STACK_LINE(551)
								bool tmp42 = this->ignore_listeners;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(551)
								bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(551)
								bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(551)
								tmp41 = !(tmp44);
							}
							else{
								HX_STACK_LINE(551)
								tmp41 = false;
							}
							HX_STACK_LINE(551)
							if ((tmp41)){
								HX_STACK_LINE(551)
								Float tmp42 = _z;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(551)
								this->listen_z(tmp42);
							}
							HX_STACK_LINE(551)
							this->z;
						}
					}
					HX_STACK_LINE(551)
					this->ignore_listeners = prev;
					HX_STACK_LINE(551)
					Dynamic tmp38 = this->listen_x_dyn();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(551)
					bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(551)
					bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(551)
					if ((tmp39)){
						HX_STACK_LINE(551)
						bool tmp41 = this->ignore_listeners;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(551)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(551)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(551)
						tmp40 = !(tmp43);
					}
					else{
						HX_STACK_LINE(551)
						tmp40 = false;
					}
					HX_STACK_LINE(551)
					if ((tmp40)){
						HX_STACK_LINE(551)
						Float tmp41 = this->x;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(551)
						this->listen_x(tmp41);
					}
					HX_STACK_LINE(551)
					Dynamic tmp41 = this->listen_y_dyn();		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(551)
					bool tmp42 = (tmp41 != null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(551)
					bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(551)
					if ((tmp42)){
						HX_STACK_LINE(551)
						bool tmp44 = this->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(551)
						bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(551)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(551)
						tmp43 = !(tmp46);
					}
					else{
						HX_STACK_LINE(551)
						tmp43 = false;
					}
					HX_STACK_LINE(551)
					if ((tmp43)){
						HX_STACK_LINE(551)
						Float tmp44 = this->y;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(551)
						this->listen_y(tmp44);
					}
					HX_STACK_LINE(551)
					Dynamic tmp44 = this->listen_z_dyn();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(551)
					bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(551)
					bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(551)
					if ((tmp45)){
						HX_STACK_LINE(551)
						bool tmp47 = this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(551)
						bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(551)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(551)
						tmp46 = !(tmp49);
					}
					else{
						HX_STACK_LINE(551)
						tmp46 = false;
					}
					HX_STACK_LINE(551)
					if ((tmp46)){
						HX_STACK_LINE(551)
						Float tmp47 = this->z;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(551)
						this->listen_z(tmp47);
					}
					HX_STACK_LINE(551)
					hx::ObjectPtr<OBJ_>(this);
				}
				else{
					HX_STACK_LINE(551)
					bool tmp28 = this->ignore_listeners;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(551)
					bool prev = tmp28;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(551)
					this->ignore_listeners = true;
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						this->x = (int)0;
						HX_STACK_LINE(551)
						bool tmp29 = this->_construct;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(551)
						if ((tmp29)){
							HX_STACK_LINE(551)
							this->x;
						}
						else{
							HX_STACK_LINE(551)
							Dynamic tmp30 = this->listen_x_dyn();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(551)
							bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(551)
							bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(551)
							if ((tmp31)){
								HX_STACK_LINE(551)
								bool tmp33 = this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(551)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(551)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(551)
								tmp32 = !(tmp35);
							}
							else{
								HX_STACK_LINE(551)
								tmp32 = false;
							}
							HX_STACK_LINE(551)
							if ((tmp32)){
								HX_STACK_LINE(551)
								this->listen_x((int)0);
							}
							HX_STACK_LINE(551)
							this->x;
						}
					}
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						this->y = (int)0;
						HX_STACK_LINE(551)
						bool tmp29 = this->_construct;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(551)
						if ((tmp29)){
							HX_STACK_LINE(551)
							this->y;
						}
						else{
							HX_STACK_LINE(551)
							Dynamic tmp30 = this->listen_y_dyn();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(551)
							bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(551)
							bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(551)
							if ((tmp31)){
								HX_STACK_LINE(551)
								bool tmp33 = this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(551)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(551)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(551)
								tmp32 = !(tmp35);
							}
							else{
								HX_STACK_LINE(551)
								tmp32 = false;
							}
							HX_STACK_LINE(551)
							if ((tmp32)){
								HX_STACK_LINE(551)
								this->listen_y((int)0);
							}
							HX_STACK_LINE(551)
							this->y;
						}
					}
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						this->z = (int)0;
						HX_STACK_LINE(551)
						bool tmp29 = this->_construct;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(551)
						if ((tmp29)){
							HX_STACK_LINE(551)
							this->z;
						}
						else{
							HX_STACK_LINE(551)
							Dynamic tmp30 = this->listen_z_dyn();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(551)
							bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(551)
							bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(551)
							if ((tmp31)){
								HX_STACK_LINE(551)
								bool tmp33 = this->ignore_listeners;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(551)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(551)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(551)
								tmp32 = !(tmp35);
							}
							else{
								HX_STACK_LINE(551)
								tmp32 = false;
							}
							HX_STACK_LINE(551)
							if ((tmp32)){
								HX_STACK_LINE(551)
								this->listen_z((int)0);
							}
							HX_STACK_LINE(551)
							this->z;
						}
					}
					HX_STACK_LINE(551)
					this->ignore_listeners = prev;
					HX_STACK_LINE(551)
					Dynamic tmp29 = this->listen_x_dyn();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(551)
					bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(551)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(551)
					if ((tmp30)){
						HX_STACK_LINE(551)
						bool tmp32 = this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(551)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(551)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(551)
						tmp31 = !(tmp34);
					}
					else{
						HX_STACK_LINE(551)
						tmp31 = false;
					}
					HX_STACK_LINE(551)
					if ((tmp31)){
						HX_STACK_LINE(551)
						Float tmp32 = this->x;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(551)
						this->listen_x(tmp32);
					}
					HX_STACK_LINE(551)
					Dynamic tmp32 = this->listen_y_dyn();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(551)
					bool tmp33 = (tmp32 != null());		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(551)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(551)
					if ((tmp33)){
						HX_STACK_LINE(551)
						bool tmp35 = this->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(551)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(551)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(551)
						tmp34 = !(tmp37);
					}
					else{
						HX_STACK_LINE(551)
						tmp34 = false;
					}
					HX_STACK_LINE(551)
					if ((tmp34)){
						HX_STACK_LINE(551)
						Float tmp35 = this->y;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(551)
						this->listen_y(tmp35);
					}
					HX_STACK_LINE(551)
					Dynamic tmp35 = this->listen_z_dyn();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(551)
					bool tmp36 = (tmp35 != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(551)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(551)
					if ((tmp36)){
						HX_STACK_LINE(551)
						bool tmp38 = this->ignore_listeners;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(551)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(551)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(551)
						tmp37 = !(tmp40);
					}
					else{
						HX_STACK_LINE(551)
						tmp37 = false;
					}
					HX_STACK_LINE(551)
					if ((tmp37)){
						HX_STACK_LINE(551)
						Float tmp38 = this->z;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(551)
						this->listen_z(tmp38);
					}
					HX_STACK_LINE(551)
					hx::ObjectPtr<OBJ_>(this);
				}
				HX_STACK_LINE(551)
				tmp14 = hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(551)
			::phoenix::Vector _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(551)
			{
				HX_STACK_LINE(551)
				Float tmp15 = (_this->x * value);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(551)
				Float _x = tmp15;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(551)
				Float tmp16 = (_this->y * value);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(551)
				Float _y = tmp16;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(551)
				Float tmp17 = (_this->z * value);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(551)
				Float _z = tmp17;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(551)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(551)
				_this->ignore_listeners = true;
				HX_STACK_LINE(551)
				{
					HX_STACK_LINE(551)
					_this->x = _x;
					HX_STACK_LINE(551)
					bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(551)
					if ((tmp18)){
						HX_STACK_LINE(551)
						_this->x;
					}
					else{
						HX_STACK_LINE(551)
						bool tmp19 = (_this->listen_x != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(551)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(551)
						if ((tmp19)){
							HX_STACK_LINE(551)
							bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(551)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(551)
							tmp20 = !(tmp22);
						}
						else{
							HX_STACK_LINE(551)
							tmp20 = false;
						}
						HX_STACK_LINE(551)
						if ((tmp20)){
							HX_STACK_LINE(551)
							Float tmp21 = _x;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(551)
							_this->listen_x(tmp21);
						}
						HX_STACK_LINE(551)
						_this->x;
					}
				}
				HX_STACK_LINE(551)
				{
					HX_STACK_LINE(551)
					_this->y = _y;
					HX_STACK_LINE(551)
					bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(551)
					if ((tmp18)){
						HX_STACK_LINE(551)
						_this->y;
					}
					else{
						HX_STACK_LINE(551)
						bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(551)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(551)
						if ((tmp19)){
							HX_STACK_LINE(551)
							bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(551)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(551)
							tmp20 = !(tmp22);
						}
						else{
							HX_STACK_LINE(551)
							tmp20 = false;
						}
						HX_STACK_LINE(551)
						if ((tmp20)){
							HX_STACK_LINE(551)
							Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(551)
							_this->listen_y(tmp21);
						}
						HX_STACK_LINE(551)
						_this->y;
					}
				}
				HX_STACK_LINE(551)
				{
					HX_STACK_LINE(551)
					_this->z = _z;
					HX_STACK_LINE(551)
					bool tmp18 = _this->_construct;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(551)
					if ((tmp18)){
						HX_STACK_LINE(551)
						_this->z;
					}
					else{
						HX_STACK_LINE(551)
						bool tmp19 = (_this->listen_z != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(551)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(551)
						if ((tmp19)){
							HX_STACK_LINE(551)
							bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(551)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(551)
							tmp20 = !(tmp22);
						}
						else{
							HX_STACK_LINE(551)
							tmp20 = false;
						}
						HX_STACK_LINE(551)
						if ((tmp20)){
							HX_STACK_LINE(551)
							Float tmp21 = _z;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(551)
							_this->listen_z(tmp21);
						}
						HX_STACK_LINE(551)
						_this->z;
					}
				}
				HX_STACK_LINE(551)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(551)
				bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(551)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(551)
				if ((tmp18)){
					HX_STACK_LINE(551)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(551)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(551)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(551)
					tmp19 = false;
				}
				HX_STACK_LINE(551)
				if ((tmp19)){
					HX_STACK_LINE(551)
					Float tmp20 = _this->x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(551)
					_this->listen_x(tmp20);
				}
				HX_STACK_LINE(551)
				bool tmp20 = (_this->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(551)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(551)
				if ((tmp20)){
					HX_STACK_LINE(551)
					bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(551)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(551)
					tmp21 = !(tmp23);
				}
				else{
					HX_STACK_LINE(551)
					tmp21 = false;
				}
				HX_STACK_LINE(551)
				if ((tmp21)){
					HX_STACK_LINE(551)
					Float tmp22 = _this->y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(551)
					_this->listen_y(tmp22);
				}
				HX_STACK_LINE(551)
				bool tmp22 = (_this->listen_z != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(551)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(551)
				if ((tmp22)){
					HX_STACK_LINE(551)
					bool tmp24 = _this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(551)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(551)
					tmp23 = !(tmp25);
				}
				else{
					HX_STACK_LINE(551)
					tmp23 = false;
				}
				HX_STACK_LINE(551)
				if ((tmp23)){
					HX_STACK_LINE(551)
					Float tmp24 = _this->z;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(551)
					_this->listen_z(tmp24);
				}
				HX_STACK_LINE(551)
				_this;
			}
			HX_STACK_LINE(551)
			_this;
		}
		HX_STACK_LINE(551)
		value;
	}
	HX_STACK_LINE(553)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,truncate,return )

Float Vector_obj::rotationTo( ::phoenix::Vector other){
	HX_STACK_FRAME("phoenix.Vector","rotationTo",0x71bde365,"phoenix.Vector.rotationTo","phoenix/Vector.hx",557,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(558)
	Float tmp = other->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(558)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(558)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(558)
	Float tmp3 = other->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(558)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(558)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(558)
	Float tmp6 = ::Math_obj::atan2(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(558)
	Float theta = tmp6;		HX_STACK_VAR(theta,"theta");
	HX_STACK_LINE(559)
	Float tmp7 = (theta * ((Float)180.0));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(559)
	Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(559)
	Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(559)
	Float tmp10 = (((Float)180.0) + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(559)
	Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(559)
	Float r = tmp11;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(560)
	Float tmp12 = r;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(560)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,rotationTo,return )

::phoenix::Vector Vector_obj::applyQuaternion( ::phoenix::Quaternion q){
	HX_STACK_FRAME("phoenix.Vector","applyQuaternion",0xc78c8fa0,"phoenix.Vector.applyQuaternion","phoenix/Vector.hx",565,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(567)
	Float qx = q->x;		HX_STACK_VAR(qx,"qx");
	HX_STACK_LINE(568)
	Float qy = q->y;		HX_STACK_VAR(qy,"qy");
	HX_STACK_LINE(569)
	Float qz = q->z;		HX_STACK_VAR(qz,"qz");
	HX_STACK_LINE(570)
	Float qw = q->w;		HX_STACK_VAR(qw,"qw");
	HX_STACK_LINE(572)
	Float tmp = qw;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(572)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(572)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(572)
	Float tmp3 = qy;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(572)
	Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(572)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(572)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(572)
	Float tmp7 = qz;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(572)
	Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(572)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(572)
	Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(572)
	Float ix = tmp10;		HX_STACK_VAR(ix,"ix");
	HX_STACK_LINE(573)
	Float tmp11 = qw;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(573)
	Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(573)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(573)
	Float tmp14 = qz;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(573)
	Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(573)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(573)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(573)
	Float tmp18 = qx;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(573)
	Float tmp19 = this->z;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(573)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(573)
	Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(573)
	Float iy = tmp21;		HX_STACK_VAR(iy,"iy");
	HX_STACK_LINE(574)
	Float tmp22 = qw;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(574)
	Float tmp23 = this->z;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(574)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(574)
	Float tmp25 = qx;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(574)
	Float tmp26 = this->y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(574)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(574)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(574)
	Float tmp29 = qy;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(574)
	Float tmp30 = this->x;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(574)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(574)
	Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(574)
	Float iz = tmp32;		HX_STACK_VAR(iz,"iz");
	HX_STACK_LINE(575)
	Float tmp33 = qx;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(575)
	Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(575)
	Float tmp35 = this->x;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(575)
	Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(575)
	Float tmp37 = qy;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(575)
	Float tmp38 = this->y;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(575)
	Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(575)
	Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(575)
	Float tmp41 = qz;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(575)
	Float tmp42 = this->z;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(575)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(575)
	Float tmp44 = (tmp40 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(575)
	Float iw = tmp44;		HX_STACK_VAR(iw,"iw");
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(577)
		Float tmp45 = (ix * qw);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(577)
		Float tmp46 = iw;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(577)
		Float tmp47 = qx;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(577)
		Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(577)
		Float tmp49 = (tmp46 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(577)
		Float tmp50 = (tmp45 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(577)
		Float tmp51 = iy;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(577)
		Float tmp52 = qz;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(577)
		Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(577)
		Float tmp54 = (tmp51 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(577)
		Float tmp55 = (tmp50 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(577)
		Float tmp56 = iz;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(577)
		Float tmp57 = qy;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(577)
		Float tmp58 = -(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(577)
		Float tmp59 = (tmp56 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(577)
		Float tmp60 = (tmp55 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(577)
		Float _x = tmp60;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(578)
		Float tmp61 = (iy * qw);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(578)
		Float tmp62 = iw;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(578)
		Float tmp63 = qy;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(578)
		Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(578)
		Float tmp65 = (tmp62 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(578)
		Float tmp66 = (tmp61 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(578)
		Float tmp67 = iz;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(578)
		Float tmp68 = qx;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(578)
		Float tmp69 = -(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(578)
		Float tmp70 = (tmp67 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(578)
		Float tmp71 = (tmp66 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(578)
		Float tmp72 = ix;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(578)
		Float tmp73 = qz;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(578)
		Float tmp74 = -(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(578)
		Float tmp75 = (tmp72 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(578)
		Float tmp76 = (tmp71 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(578)
		Float _y = tmp76;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(579)
		Float tmp77 = (iz * qw);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(579)
		Float tmp78 = iw;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(579)
		Float tmp79 = qz;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(579)
		Float tmp80 = -(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(579)
		Float tmp81 = (tmp78 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(579)
		Float tmp82 = (tmp77 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(579)
		Float tmp83 = ix;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(579)
		Float tmp84 = qy;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(579)
		Float tmp85 = -(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(579)
		Float tmp86 = (tmp83 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(579)
		Float tmp87 = (tmp82 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(579)
		Float tmp88 = iy;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(579)
		Float tmp89 = qx;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(579)
		Float tmp90 = -(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(579)
		Float tmp91 = (tmp88 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(579)
		Float tmp92 = (tmp87 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(579)
		Float _z = tmp92;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(577)
		bool tmp93 = this->ignore_listeners;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(577)
		bool prev = tmp93;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(577)
		this->ignore_listeners = true;
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			this->x = _x;
			HX_STACK_LINE(577)
			bool tmp94 = this->_construct;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(577)
			if ((tmp94)){
				HX_STACK_LINE(577)
				this->x;
			}
			else{
				HX_STACK_LINE(577)
				Dynamic tmp95 = this->listen_x_dyn();		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(577)
				bool tmp96 = (tmp95 != null());		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(577)
				bool tmp97;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(577)
				if ((tmp96)){
					HX_STACK_LINE(577)
					bool tmp98 = this->ignore_listeners;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(577)
					bool tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(577)
					bool tmp100 = tmp99;		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(577)
					tmp97 = !(tmp100);
				}
				else{
					HX_STACK_LINE(577)
					tmp97 = false;
				}
				HX_STACK_LINE(577)
				if ((tmp97)){
					HX_STACK_LINE(577)
					Float tmp98 = _x;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(577)
					this->listen_x(tmp98);
				}
				HX_STACK_LINE(577)
				this->x;
			}
		}
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			this->y = _y;
			HX_STACK_LINE(577)
			bool tmp94 = this->_construct;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(577)
			if ((tmp94)){
				HX_STACK_LINE(577)
				this->y;
			}
			else{
				HX_STACK_LINE(577)
				Dynamic tmp95 = this->listen_y_dyn();		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(577)
				bool tmp96 = (tmp95 != null());		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(577)
				bool tmp97;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(577)
				if ((tmp96)){
					HX_STACK_LINE(577)
					bool tmp98 = this->ignore_listeners;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(577)
					bool tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(577)
					bool tmp100 = tmp99;		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(577)
					tmp97 = !(tmp100);
				}
				else{
					HX_STACK_LINE(577)
					tmp97 = false;
				}
				HX_STACK_LINE(577)
				if ((tmp97)){
					HX_STACK_LINE(577)
					Float tmp98 = _y;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(577)
					this->listen_y(tmp98);
				}
				HX_STACK_LINE(577)
				this->y;
			}
		}
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			this->z = _z;
			HX_STACK_LINE(577)
			bool tmp94 = this->_construct;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(577)
			if ((tmp94)){
				HX_STACK_LINE(577)
				this->z;
			}
			else{
				HX_STACK_LINE(577)
				Dynamic tmp95 = this->listen_z_dyn();		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(577)
				bool tmp96 = (tmp95 != null());		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(577)
				bool tmp97;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(577)
				if ((tmp96)){
					HX_STACK_LINE(577)
					bool tmp98 = this->ignore_listeners;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(577)
					bool tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(577)
					bool tmp100 = tmp99;		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(577)
					tmp97 = !(tmp100);
				}
				else{
					HX_STACK_LINE(577)
					tmp97 = false;
				}
				HX_STACK_LINE(577)
				if ((tmp97)){
					HX_STACK_LINE(577)
					Float tmp98 = _z;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(577)
					this->listen_z(tmp98);
				}
				HX_STACK_LINE(577)
				this->z;
			}
		}
		HX_STACK_LINE(577)
		this->ignore_listeners = prev;
		HX_STACK_LINE(577)
		Dynamic tmp94 = this->listen_x_dyn();		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(577)
		bool tmp95 = (tmp94 != null());		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(577)
		bool tmp96;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(577)
		if ((tmp95)){
			HX_STACK_LINE(577)
			bool tmp97 = this->ignore_listeners;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(577)
			bool tmp98 = tmp97;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(577)
			bool tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(577)
			tmp96 = !(tmp99);
		}
		else{
			HX_STACK_LINE(577)
			tmp96 = false;
		}
		HX_STACK_LINE(577)
		if ((tmp96)){
			HX_STACK_LINE(577)
			Float tmp97 = this->x;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(577)
			this->listen_x(tmp97);
		}
		HX_STACK_LINE(577)
		Dynamic tmp97 = this->listen_y_dyn();		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(577)
		bool tmp98 = (tmp97 != null());		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(577)
		bool tmp99;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(577)
		if ((tmp98)){
			HX_STACK_LINE(577)
			bool tmp100 = this->ignore_listeners;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(577)
			bool tmp101 = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(577)
			bool tmp102 = tmp101;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(577)
			tmp99 = !(tmp102);
		}
		else{
			HX_STACK_LINE(577)
			tmp99 = false;
		}
		HX_STACK_LINE(577)
		if ((tmp99)){
			HX_STACK_LINE(577)
			Float tmp100 = this->y;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(577)
			this->listen_y(tmp100);
		}
		HX_STACK_LINE(577)
		Dynamic tmp100 = this->listen_z_dyn();		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(577)
		bool tmp101 = (tmp100 != null());		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(577)
		bool tmp102;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(577)
		if ((tmp101)){
			HX_STACK_LINE(577)
			bool tmp103 = this->ignore_listeners;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(577)
			bool tmp104 = tmp103;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(577)
			bool tmp105 = tmp104;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(577)
			tmp102 = !(tmp105);
		}
		else{
			HX_STACK_LINE(577)
			tmp102 = false;
		}
		HX_STACK_LINE(577)
		if ((tmp102)){
			HX_STACK_LINE(577)
			Float tmp103 = this->z;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(577)
			this->listen_z(tmp103);
		}
		HX_STACK_LINE(577)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(581)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,applyQuaternion,return )

::phoenix::Vector Vector_obj::applyProjection( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Vector","applyProjection",0x704e0b11,"phoenix.Vector.applyProjection","phoenix/Vector.hx",585,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(587)
	Array< Float > e = m->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(588)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	Float x = tmp;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(588)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(588)
	Float y = tmp1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(588)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(588)
	Float z = tmp2;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(589)
	Float tmp3 = e->__get((int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(589)
	Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(589)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(589)
	Float tmp6 = e->__get((int)7);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(589)
	Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(589)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(589)
	Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(589)
	Float tmp10 = e->__get((int)11);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(589)
	Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(589)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(589)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(589)
	Float tmp14 = e->__get((int)15);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(589)
	Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(589)
	Float tmp16 = (Float((int)1) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(589)
	Float d = tmp16;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(591)
	{
		HX_STACK_LINE(591)
		Float tmp17 = e->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(591)
		Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(591)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(591)
		Float tmp20 = e->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(591)
		Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(591)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(591)
		Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(591)
		Float tmp24 = e->__get((int)8);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(591)
		Float tmp25 = z;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(591)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(591)
		Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(591)
		Float tmp28 = e->__get((int)12);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(591)
		Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(591)
		Float tmp30 = d;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(591)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(591)
		Float _x = tmp31;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(592)
		Float tmp32 = e->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(592)
		Float tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(592)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(592)
		Float tmp35 = e->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(592)
		Float tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(592)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(592)
		Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(592)
		Float tmp39 = e->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(592)
		Float tmp40 = z;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(592)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(592)
		Float tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(592)
		Float tmp43 = e->__get((int)13);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(592)
		Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(592)
		Float tmp45 = d;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(592)
		Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(592)
		Float _y = tmp46;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(593)
		Float tmp47 = e->__get((int)2);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(593)
		Float tmp48 = x;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(593)
		Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(593)
		Float tmp50 = e->__get((int)6);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(593)
		Float tmp51 = y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(593)
		Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(593)
		Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(593)
		Float tmp54 = e->__get((int)10);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(593)
		Float tmp55 = z;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(593)
		Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(593)
		Float tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(593)
		Float tmp58 = e->__get((int)14);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(593)
		Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(593)
		Float tmp60 = d;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(593)
		Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(593)
		Float _z = tmp61;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(591)
		bool tmp62 = this->ignore_listeners;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(591)
		bool prev = tmp62;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(591)
		this->ignore_listeners = true;
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			this->x = _x;
			HX_STACK_LINE(591)
			bool tmp63 = this->_construct;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(591)
			if ((tmp63)){
				HX_STACK_LINE(591)
				this->x;
			}
			else{
				HX_STACK_LINE(591)
				Dynamic tmp64 = this->listen_x_dyn();		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(591)
				bool tmp65 = (tmp64 != null());		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(591)
				bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(591)
				if ((tmp65)){
					HX_STACK_LINE(591)
					bool tmp67 = this->ignore_listeners;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(591)
					bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(591)
					bool tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(591)
					tmp66 = !(tmp69);
				}
				else{
					HX_STACK_LINE(591)
					tmp66 = false;
				}
				HX_STACK_LINE(591)
				if ((tmp66)){
					HX_STACK_LINE(591)
					Float tmp67 = _x;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(591)
					this->listen_x(tmp67);
				}
				HX_STACK_LINE(591)
				this->x;
			}
		}
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			this->y = _y;
			HX_STACK_LINE(591)
			bool tmp63 = this->_construct;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(591)
			if ((tmp63)){
				HX_STACK_LINE(591)
				this->y;
			}
			else{
				HX_STACK_LINE(591)
				Dynamic tmp64 = this->listen_y_dyn();		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(591)
				bool tmp65 = (tmp64 != null());		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(591)
				bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(591)
				if ((tmp65)){
					HX_STACK_LINE(591)
					bool tmp67 = this->ignore_listeners;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(591)
					bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(591)
					bool tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(591)
					tmp66 = !(tmp69);
				}
				else{
					HX_STACK_LINE(591)
					tmp66 = false;
				}
				HX_STACK_LINE(591)
				if ((tmp66)){
					HX_STACK_LINE(591)
					Float tmp67 = _y;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(591)
					this->listen_y(tmp67);
				}
				HX_STACK_LINE(591)
				this->y;
			}
		}
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			this->z = _z;
			HX_STACK_LINE(591)
			bool tmp63 = this->_construct;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(591)
			if ((tmp63)){
				HX_STACK_LINE(591)
				this->z;
			}
			else{
				HX_STACK_LINE(591)
				Dynamic tmp64 = this->listen_z_dyn();		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(591)
				bool tmp65 = (tmp64 != null());		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(591)
				bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(591)
				if ((tmp65)){
					HX_STACK_LINE(591)
					bool tmp67 = this->ignore_listeners;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(591)
					bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(591)
					bool tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(591)
					tmp66 = !(tmp69);
				}
				else{
					HX_STACK_LINE(591)
					tmp66 = false;
				}
				HX_STACK_LINE(591)
				if ((tmp66)){
					HX_STACK_LINE(591)
					Float tmp67 = _z;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(591)
					this->listen_z(tmp67);
				}
				HX_STACK_LINE(591)
				this->z;
			}
		}
		HX_STACK_LINE(591)
		this->ignore_listeners = prev;
		HX_STACK_LINE(591)
		Dynamic tmp63 = this->listen_x_dyn();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(591)
		bool tmp64 = (tmp63 != null());		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(591)
		bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(591)
		if ((tmp64)){
			HX_STACK_LINE(591)
			bool tmp66 = this->ignore_listeners;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(591)
			bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(591)
			bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(591)
			tmp65 = !(tmp68);
		}
		else{
			HX_STACK_LINE(591)
			tmp65 = false;
		}
		HX_STACK_LINE(591)
		if ((tmp65)){
			HX_STACK_LINE(591)
			Float tmp66 = this->x;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(591)
			this->listen_x(tmp66);
		}
		HX_STACK_LINE(591)
		Dynamic tmp66 = this->listen_y_dyn();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(591)
		bool tmp67 = (tmp66 != null());		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(591)
		bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(591)
		if ((tmp67)){
			HX_STACK_LINE(591)
			bool tmp69 = this->ignore_listeners;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(591)
			bool tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(591)
			bool tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(591)
			tmp68 = !(tmp71);
		}
		else{
			HX_STACK_LINE(591)
			tmp68 = false;
		}
		HX_STACK_LINE(591)
		if ((tmp68)){
			HX_STACK_LINE(591)
			Float tmp69 = this->y;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(591)
			this->listen_y(tmp69);
		}
		HX_STACK_LINE(591)
		Dynamic tmp69 = this->listen_z_dyn();		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(591)
		bool tmp70 = (tmp69 != null());		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(591)
		bool tmp71;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(591)
		if ((tmp70)){
			HX_STACK_LINE(591)
			bool tmp72 = this->ignore_listeners;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(591)
			bool tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(591)
			bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(591)
			tmp71 = !(tmp74);
		}
		else{
			HX_STACK_LINE(591)
			tmp71 = false;
		}
		HX_STACK_LINE(591)
		if ((tmp71)){
			HX_STACK_LINE(591)
			Float tmp72 = this->z;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(591)
			this->listen_z(tmp72);
		}
		HX_STACK_LINE(591)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(595)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,applyProjection,return )

::phoenix::Vector Vector_obj::transform( ::phoenix::Matrix _m){
	HX_STACK_FRAME("phoenix.Vector","transform",0x2bce01e0,"phoenix.Vector.transform","phoenix/Vector.hx",599,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(601)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(601)
	Float _x = tmp;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(602)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	Float _y = tmp1;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(603)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(603)
	Float _z = tmp2;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(605)
	Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(607)
	{
		HX_STACK_LINE(607)
		Float tmp3 = e->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(607)
		Float tmp4 = _x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(607)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(607)
		Float tmp6 = e->__get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(607)
		Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(607)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(607)
		Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(607)
		Float tmp10 = e->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(607)
		Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(607)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(607)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(607)
		Float tmp14 = e->__get((int)12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(607)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(607)
		Float _x1 = tmp15;		HX_STACK_VAR(_x1,"_x1");
		HX_STACK_LINE(608)
		Float tmp16 = e->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(608)
		Float tmp17 = _x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(608)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(608)
		Float tmp19 = e->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(608)
		Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(608)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(608)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(608)
		Float tmp23 = e->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(608)
		Float tmp24 = _z;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(608)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(608)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(608)
		Float tmp27 = e->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(608)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(608)
		Float _y1 = tmp28;		HX_STACK_VAR(_y1,"_y1");
		HX_STACK_LINE(609)
		Float tmp29 = e->__get((int)2);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(609)
		Float tmp30 = _x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(609)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(609)
		Float tmp32 = e->__get((int)6);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(609)
		Float tmp33 = _y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(609)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(609)
		Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(609)
		Float tmp36 = e->__get((int)10);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(609)
		Float tmp37 = _z;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(609)
		Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(609)
		Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(609)
		Float tmp40 = e->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(609)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(609)
		Float _z1 = tmp41;		HX_STACK_VAR(_z1,"_z1");
		HX_STACK_LINE(607)
		bool tmp42 = this->ignore_listeners;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(607)
		bool prev = tmp42;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(607)
		this->ignore_listeners = true;
		HX_STACK_LINE(607)
		{
			HX_STACK_LINE(607)
			this->x = _x1;
			HX_STACK_LINE(607)
			bool tmp43 = this->_construct;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(607)
			if ((tmp43)){
				HX_STACK_LINE(607)
				this->x;
			}
			else{
				HX_STACK_LINE(607)
				Dynamic tmp44 = this->listen_x_dyn();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(607)
				bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(607)
				bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(607)
				if ((tmp45)){
					HX_STACK_LINE(607)
					bool tmp47 = this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(607)
					bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(607)
					bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(607)
					tmp46 = !(tmp49);
				}
				else{
					HX_STACK_LINE(607)
					tmp46 = false;
				}
				HX_STACK_LINE(607)
				if ((tmp46)){
					HX_STACK_LINE(607)
					Float tmp47 = _x1;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(607)
					this->listen_x(tmp47);
				}
				HX_STACK_LINE(607)
				this->x;
			}
		}
		HX_STACK_LINE(607)
		{
			HX_STACK_LINE(607)
			this->y = _y1;
			HX_STACK_LINE(607)
			bool tmp43 = this->_construct;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(607)
			if ((tmp43)){
				HX_STACK_LINE(607)
				this->y;
			}
			else{
				HX_STACK_LINE(607)
				Dynamic tmp44 = this->listen_y_dyn();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(607)
				bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(607)
				bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(607)
				if ((tmp45)){
					HX_STACK_LINE(607)
					bool tmp47 = this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(607)
					bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(607)
					bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(607)
					tmp46 = !(tmp49);
				}
				else{
					HX_STACK_LINE(607)
					tmp46 = false;
				}
				HX_STACK_LINE(607)
				if ((tmp46)){
					HX_STACK_LINE(607)
					Float tmp47 = _y1;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(607)
					this->listen_y(tmp47);
				}
				HX_STACK_LINE(607)
				this->y;
			}
		}
		HX_STACK_LINE(607)
		{
			HX_STACK_LINE(607)
			this->z = _z1;
			HX_STACK_LINE(607)
			bool tmp43 = this->_construct;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(607)
			if ((tmp43)){
				HX_STACK_LINE(607)
				this->z;
			}
			else{
				HX_STACK_LINE(607)
				Dynamic tmp44 = this->listen_z_dyn();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(607)
				bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(607)
				bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(607)
				if ((tmp45)){
					HX_STACK_LINE(607)
					bool tmp47 = this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(607)
					bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(607)
					bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(607)
					tmp46 = !(tmp49);
				}
				else{
					HX_STACK_LINE(607)
					tmp46 = false;
				}
				HX_STACK_LINE(607)
				if ((tmp46)){
					HX_STACK_LINE(607)
					Float tmp47 = _z1;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(607)
					this->listen_z(tmp47);
				}
				HX_STACK_LINE(607)
				this->z;
			}
		}
		HX_STACK_LINE(607)
		this->ignore_listeners = prev;
		HX_STACK_LINE(607)
		Dynamic tmp43 = this->listen_x_dyn();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(607)
		bool tmp44 = (tmp43 != null());		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(607)
		bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(607)
		if ((tmp44)){
			HX_STACK_LINE(607)
			bool tmp46 = this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(607)
			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(607)
			bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(607)
			tmp45 = !(tmp48);
		}
		else{
			HX_STACK_LINE(607)
			tmp45 = false;
		}
		HX_STACK_LINE(607)
		if ((tmp45)){
			HX_STACK_LINE(607)
			Float tmp46 = this->x;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(607)
			this->listen_x(tmp46);
		}
		HX_STACK_LINE(607)
		Dynamic tmp46 = this->listen_y_dyn();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(607)
		bool tmp47 = (tmp46 != null());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(607)
		bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(607)
		if ((tmp47)){
			HX_STACK_LINE(607)
			bool tmp49 = this->ignore_listeners;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(607)
			bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(607)
			bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(607)
			tmp48 = !(tmp51);
		}
		else{
			HX_STACK_LINE(607)
			tmp48 = false;
		}
		HX_STACK_LINE(607)
		if ((tmp48)){
			HX_STACK_LINE(607)
			Float tmp49 = this->y;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(607)
			this->listen_y(tmp49);
		}
		HX_STACK_LINE(607)
		Dynamic tmp49 = this->listen_z_dyn();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(607)
		bool tmp50 = (tmp49 != null());		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(607)
		bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(607)
		if ((tmp50)){
			HX_STACK_LINE(607)
			bool tmp52 = this->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(607)
			bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(607)
			bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(607)
			tmp51 = !(tmp54);
		}
		else{
			HX_STACK_LINE(607)
			tmp51 = false;
		}
		HX_STACK_LINE(607)
		if ((tmp51)){
			HX_STACK_LINE(607)
			Float tmp52 = this->z;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(607)
			this->listen_z(tmp52);
		}
		HX_STACK_LINE(607)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(611)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transform,return )

::phoenix::Vector Vector_obj::transformDirection( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Vector","transformDirection",0x2826043f,"phoenix.Vector.transformDirection","phoenix/Vector.hx",615,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(617)
	Array< Float > e = m->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(618)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(618)
	Float x = tmp;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(618)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(618)
	Float y = tmp1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(618)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(618)
	Float z = tmp2;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(620)
	{
		HX_STACK_LINE(620)
		Float tmp3 = e->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(620)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(620)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(620)
		Float tmp6 = e->__get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(620)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(620)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(620)
		Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(620)
		Float tmp10 = e->__get((int)8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(620)
		Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(620)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(620)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(620)
		Float _x = tmp13;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(621)
		Float tmp14 = e->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(621)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(621)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(621)
		Float tmp17 = e->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(621)
		Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(621)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(621)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(621)
		Float tmp21 = e->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(621)
		Float tmp22 = z;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(621)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(621)
		Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(621)
		Float _y = tmp24;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(622)
		Float tmp25 = e->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(622)
		Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(622)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(622)
		Float tmp28 = e->__get((int)6);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(622)
		Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(622)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(622)
		Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(622)
		Float tmp32 = e->__get((int)10);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(622)
		Float tmp33 = z;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(622)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(622)
		Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(622)
		Float _z = tmp35;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(620)
		bool tmp36 = this->ignore_listeners;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(620)
		bool prev = tmp36;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(620)
		this->ignore_listeners = true;
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			this->x = _x;
			HX_STACK_LINE(620)
			bool tmp37 = this->_construct;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(620)
			if ((tmp37)){
				HX_STACK_LINE(620)
				this->x;
			}
			else{
				HX_STACK_LINE(620)
				Dynamic tmp38 = this->listen_x_dyn();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(620)
				bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(620)
				bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(620)
				if ((tmp39)){
					HX_STACK_LINE(620)
					bool tmp41 = this->ignore_listeners;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(620)
					bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(620)
					bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(620)
					tmp40 = !(tmp43);
				}
				else{
					HX_STACK_LINE(620)
					tmp40 = false;
				}
				HX_STACK_LINE(620)
				if ((tmp40)){
					HX_STACK_LINE(620)
					Float tmp41 = _x;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(620)
					this->listen_x(tmp41);
				}
				HX_STACK_LINE(620)
				this->x;
			}
		}
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			this->y = _y;
			HX_STACK_LINE(620)
			bool tmp37 = this->_construct;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(620)
			if ((tmp37)){
				HX_STACK_LINE(620)
				this->y;
			}
			else{
				HX_STACK_LINE(620)
				Dynamic tmp38 = this->listen_y_dyn();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(620)
				bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(620)
				bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(620)
				if ((tmp39)){
					HX_STACK_LINE(620)
					bool tmp41 = this->ignore_listeners;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(620)
					bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(620)
					bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(620)
					tmp40 = !(tmp43);
				}
				else{
					HX_STACK_LINE(620)
					tmp40 = false;
				}
				HX_STACK_LINE(620)
				if ((tmp40)){
					HX_STACK_LINE(620)
					Float tmp41 = _y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(620)
					this->listen_y(tmp41);
				}
				HX_STACK_LINE(620)
				this->y;
			}
		}
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			this->z = _z;
			HX_STACK_LINE(620)
			bool tmp37 = this->_construct;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(620)
			if ((tmp37)){
				HX_STACK_LINE(620)
				this->z;
			}
			else{
				HX_STACK_LINE(620)
				Dynamic tmp38 = this->listen_z_dyn();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(620)
				bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(620)
				bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(620)
				if ((tmp39)){
					HX_STACK_LINE(620)
					bool tmp41 = this->ignore_listeners;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(620)
					bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(620)
					bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(620)
					tmp40 = !(tmp43);
				}
				else{
					HX_STACK_LINE(620)
					tmp40 = false;
				}
				HX_STACK_LINE(620)
				if ((tmp40)){
					HX_STACK_LINE(620)
					Float tmp41 = _z;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(620)
					this->listen_z(tmp41);
				}
				HX_STACK_LINE(620)
				this->z;
			}
		}
		HX_STACK_LINE(620)
		this->ignore_listeners = prev;
		HX_STACK_LINE(620)
		Dynamic tmp37 = this->listen_x_dyn();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(620)
		bool tmp38 = (tmp37 != null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(620)
		bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(620)
		if ((tmp38)){
			HX_STACK_LINE(620)
			bool tmp40 = this->ignore_listeners;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(620)
			bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(620)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(620)
			tmp39 = !(tmp42);
		}
		else{
			HX_STACK_LINE(620)
			tmp39 = false;
		}
		HX_STACK_LINE(620)
		if ((tmp39)){
			HX_STACK_LINE(620)
			Float tmp40 = this->x;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(620)
			this->listen_x(tmp40);
		}
		HX_STACK_LINE(620)
		Dynamic tmp40 = this->listen_y_dyn();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(620)
		bool tmp41 = (tmp40 != null());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(620)
		bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(620)
		if ((tmp41)){
			HX_STACK_LINE(620)
			bool tmp43 = this->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(620)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(620)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(620)
			tmp42 = !(tmp45);
		}
		else{
			HX_STACK_LINE(620)
			tmp42 = false;
		}
		HX_STACK_LINE(620)
		if ((tmp42)){
			HX_STACK_LINE(620)
			Float tmp43 = this->y;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(620)
			this->listen_y(tmp43);
		}
		HX_STACK_LINE(620)
		Dynamic tmp43 = this->listen_z_dyn();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(620)
		bool tmp44 = (tmp43 != null());		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(620)
		bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(620)
		if ((tmp44)){
			HX_STACK_LINE(620)
			bool tmp46 = this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(620)
			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(620)
			bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(620)
			tmp45 = !(tmp48);
		}
		else{
			HX_STACK_LINE(620)
			tmp45 = false;
		}
		HX_STACK_LINE(620)
		if ((tmp45)){
			HX_STACK_LINE(620)
			Float tmp46 = this->z;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(620)
			this->listen_z(tmp46);
		}
		HX_STACK_LINE(620)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(624)
	{
		HX_STACK_LINE(624)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(624)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(624)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(624)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(624)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(624)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(624)
		Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(624)
		Float tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(624)
		Float tmp11 = this->z;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(624)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(624)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(624)
		Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(624)
		Float v = tmp14;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(624)
		bool tmp15 = (v != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(624)
		if ((tmp15)){
			HX_STACK_LINE(624)
			Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(624)
			Float tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(624)
			Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(624)
			Float _x = tmp18;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(624)
			Float tmp19 = this->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(624)
			Float tmp20 = v;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(624)
			Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(624)
			Float _y = tmp21;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(624)
			Float tmp22 = this->z;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(624)
			Float tmp23 = v;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(624)
			Float tmp24 = (Float(tmp22) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(624)
			Float _z = tmp24;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(624)
			bool tmp25 = this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(624)
			bool prev = tmp25;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(624)
			this->ignore_listeners = true;
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				this->x = _x;
				HX_STACK_LINE(624)
				bool tmp26 = this->_construct;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(624)
				if ((tmp26)){
					HX_STACK_LINE(624)
					this->x;
				}
				else{
					HX_STACK_LINE(624)
					Dynamic tmp27 = this->listen_x_dyn();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(624)
					bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(624)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(624)
					if ((tmp28)){
						HX_STACK_LINE(624)
						bool tmp30 = this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(624)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(624)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(624)
						tmp29 = !(tmp32);
					}
					else{
						HX_STACK_LINE(624)
						tmp29 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp29)){
						HX_STACK_LINE(624)
						Float tmp30 = _x;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(624)
						this->listen_x(tmp30);
					}
					HX_STACK_LINE(624)
					this->x;
				}
			}
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				this->y = _y;
				HX_STACK_LINE(624)
				bool tmp26 = this->_construct;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(624)
				if ((tmp26)){
					HX_STACK_LINE(624)
					this->y;
				}
				else{
					HX_STACK_LINE(624)
					Dynamic tmp27 = this->listen_y_dyn();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(624)
					bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(624)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(624)
					if ((tmp28)){
						HX_STACK_LINE(624)
						bool tmp30 = this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(624)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(624)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(624)
						tmp29 = !(tmp32);
					}
					else{
						HX_STACK_LINE(624)
						tmp29 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp29)){
						HX_STACK_LINE(624)
						Float tmp30 = _y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(624)
						this->listen_y(tmp30);
					}
					HX_STACK_LINE(624)
					this->y;
				}
			}
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				this->z = _z;
				HX_STACK_LINE(624)
				bool tmp26 = this->_construct;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(624)
				if ((tmp26)){
					HX_STACK_LINE(624)
					this->z;
				}
				else{
					HX_STACK_LINE(624)
					Dynamic tmp27 = this->listen_z_dyn();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(624)
					bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(624)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(624)
					if ((tmp28)){
						HX_STACK_LINE(624)
						bool tmp30 = this->ignore_listeners;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(624)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(624)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(624)
						tmp29 = !(tmp32);
					}
					else{
						HX_STACK_LINE(624)
						tmp29 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp29)){
						HX_STACK_LINE(624)
						Float tmp30 = _z;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(624)
						this->listen_z(tmp30);
					}
					HX_STACK_LINE(624)
					this->z;
				}
			}
			HX_STACK_LINE(624)
			this->ignore_listeners = prev;
			HX_STACK_LINE(624)
			Dynamic tmp26 = this->listen_x_dyn();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(624)
			bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(624)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(624)
			if ((tmp27)){
				HX_STACK_LINE(624)
				bool tmp29 = this->ignore_listeners;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(624)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(624)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(624)
				tmp28 = !(tmp31);
			}
			else{
				HX_STACK_LINE(624)
				tmp28 = false;
			}
			HX_STACK_LINE(624)
			if ((tmp28)){
				HX_STACK_LINE(624)
				Float tmp29 = this->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(624)
				this->listen_x(tmp29);
			}
			HX_STACK_LINE(624)
			Dynamic tmp29 = this->listen_y_dyn();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(624)
			bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(624)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(624)
			if ((tmp30)){
				HX_STACK_LINE(624)
				bool tmp32 = this->ignore_listeners;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(624)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(624)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(624)
				tmp31 = !(tmp34);
			}
			else{
				HX_STACK_LINE(624)
				tmp31 = false;
			}
			HX_STACK_LINE(624)
			if ((tmp31)){
				HX_STACK_LINE(624)
				Float tmp32 = this->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(624)
				this->listen_y(tmp32);
			}
			HX_STACK_LINE(624)
			Dynamic tmp32 = this->listen_z_dyn();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(624)
			bool tmp33 = (tmp32 != null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(624)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(624)
			if ((tmp33)){
				HX_STACK_LINE(624)
				bool tmp35 = this->ignore_listeners;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(624)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(624)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(624)
				tmp34 = !(tmp37);
			}
			else{
				HX_STACK_LINE(624)
				tmp34 = false;
			}
			HX_STACK_LINE(624)
			if ((tmp34)){
				HX_STACK_LINE(624)
				Float tmp35 = this->z;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(624)
				this->listen_z(tmp35);
			}
			HX_STACK_LINE(624)
			hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(624)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(624)
			bool prev = tmp16;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(624)
			this->ignore_listeners = true;
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				this->x = (int)0;
				HX_STACK_LINE(624)
				bool tmp17 = this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(624)
				if ((tmp17)){
					HX_STACK_LINE(624)
					this->x;
				}
				else{
					HX_STACK_LINE(624)
					Dynamic tmp18 = this->listen_x_dyn();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(624)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(624)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(624)
					if ((tmp19)){
						HX_STACK_LINE(624)
						bool tmp21 = this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(624)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(624)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(624)
						tmp20 = !(tmp23);
					}
					else{
						HX_STACK_LINE(624)
						tmp20 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp20)){
						HX_STACK_LINE(624)
						this->listen_x((int)0);
					}
					HX_STACK_LINE(624)
					this->x;
				}
			}
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				this->y = (int)0;
				HX_STACK_LINE(624)
				bool tmp17 = this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(624)
				if ((tmp17)){
					HX_STACK_LINE(624)
					this->y;
				}
				else{
					HX_STACK_LINE(624)
					Dynamic tmp18 = this->listen_y_dyn();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(624)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(624)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(624)
					if ((tmp19)){
						HX_STACK_LINE(624)
						bool tmp21 = this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(624)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(624)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(624)
						tmp20 = !(tmp23);
					}
					else{
						HX_STACK_LINE(624)
						tmp20 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp20)){
						HX_STACK_LINE(624)
						this->listen_y((int)0);
					}
					HX_STACK_LINE(624)
					this->y;
				}
			}
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				this->z = (int)0;
				HX_STACK_LINE(624)
				bool tmp17 = this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(624)
				if ((tmp17)){
					HX_STACK_LINE(624)
					this->z;
				}
				else{
					HX_STACK_LINE(624)
					Dynamic tmp18 = this->listen_z_dyn();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(624)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(624)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(624)
					if ((tmp19)){
						HX_STACK_LINE(624)
						bool tmp21 = this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(624)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(624)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(624)
						tmp20 = !(tmp23);
					}
					else{
						HX_STACK_LINE(624)
						tmp20 = false;
					}
					HX_STACK_LINE(624)
					if ((tmp20)){
						HX_STACK_LINE(624)
						this->listen_z((int)0);
					}
					HX_STACK_LINE(624)
					this->z;
				}
			}
			HX_STACK_LINE(624)
			this->ignore_listeners = prev;
			HX_STACK_LINE(624)
			Dynamic tmp17 = this->listen_x_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(624)
			bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(624)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(624)
			if ((tmp18)){
				HX_STACK_LINE(624)
				bool tmp20 = this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(624)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(624)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(624)
				tmp19 = !(tmp22);
			}
			else{
				HX_STACK_LINE(624)
				tmp19 = false;
			}
			HX_STACK_LINE(624)
			if ((tmp19)){
				HX_STACK_LINE(624)
				Float tmp20 = this->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(624)
				this->listen_x(tmp20);
			}
			HX_STACK_LINE(624)
			Dynamic tmp20 = this->listen_y_dyn();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(624)
			bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(624)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(624)
			if ((tmp21)){
				HX_STACK_LINE(624)
				bool tmp23 = this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(624)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(624)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(624)
				tmp22 = !(tmp25);
			}
			else{
				HX_STACK_LINE(624)
				tmp22 = false;
			}
			HX_STACK_LINE(624)
			if ((tmp22)){
				HX_STACK_LINE(624)
				Float tmp23 = this->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(624)
				this->listen_y(tmp23);
			}
			HX_STACK_LINE(624)
			Dynamic tmp23 = this->listen_z_dyn();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(624)
			bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(624)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(624)
			if ((tmp24)){
				HX_STACK_LINE(624)
				bool tmp26 = this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(624)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(624)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(624)
				tmp25 = !(tmp28);
			}
			else{
				HX_STACK_LINE(624)
				tmp25 = false;
			}
			HX_STACK_LINE(624)
			if ((tmp25)){
				HX_STACK_LINE(624)
				Float tmp26 = this->z;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(624)
				this->listen_z(tmp26);
			}
			HX_STACK_LINE(624)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(624)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(626)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,transformDirection,return )

::phoenix::Vector Vector_obj::setEulerFromRotationMatrix( ::phoenix::Matrix m,hx::Null< int >  __o_order){
int order = __o_order.Default(0);
	HX_STACK_FRAME("phoenix.Vector","setEulerFromRotationMatrix",0x93d27e7c,"phoenix.Vector.setEulerFromRotationMatrix","phoenix/Vector.hx",630,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_ARG(order,"order")
{
		HX_STACK_LINE(632)
		Array< Float > te = m->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(633)
		Float tmp = te->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(633)
		Float m11 = tmp;		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(633)
		Float tmp1 = te->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(633)
		Float m12 = tmp1;		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(633)
		Float tmp2 = te->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(633)
		Float m13 = tmp2;		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(634)
		Float tmp3 = te->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(634)
		Float m21 = tmp3;		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(634)
		Float tmp4 = te->__get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(634)
		Float m22 = tmp4;		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(634)
		Float tmp5 = te->__get((int)9);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(634)
		Float m23 = tmp5;		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(635)
		Float tmp6 = te->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(635)
		Float m31 = tmp6;		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(635)
		Float tmp7 = te->__get((int)6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(635)
		Float m32 = tmp7;		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(635)
		Float tmp8 = te->__get((int)10);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(635)
		Float m33 = tmp8;		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(637)
		Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(637)
		Float _x = tmp9;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(638)
		Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(638)
		Float _y = tmp10;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(639)
		Float tmp11 = this->z;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(639)
		Float _z = tmp11;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(641)
		bool tmp12 = (order == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(641)
		if ((tmp12)){
			HX_STACK_LINE(643)
			bool tmp13 = (m13 < (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(643)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(643)
			if ((tmp13)){
				HX_STACK_LINE(643)
				tmp14 = (int)-1;
			}
			else{
				HX_STACK_LINE(643)
				bool tmp15 = (m13 > (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(643)
				if ((tmp15)){
					HX_STACK_LINE(643)
					tmp14 = (int)1;
				}
				else{
					HX_STACK_LINE(643)
					tmp14 = m13;
				}
			}
			HX_STACK_LINE(643)
			Float tmp15 = ::Math_obj::asin(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(643)
			_y = tmp15;
			HX_STACK_LINE(645)
			Float tmp16 = m13;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(645)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(645)
			bool tmp18 = (tmp17 < ((Float)0.99999));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(645)
			if ((tmp18)){
				HX_STACK_LINE(647)
				Float tmp19 = m23;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(647)
				Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(647)
				Float tmp21 = m33;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(647)
				Float tmp22 = ::Math_obj::atan2(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(647)
				_x = tmp22;
				HX_STACK_LINE(648)
				Float tmp23 = m12;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(648)
				Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(648)
				Float tmp25 = m11;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(648)
				Float tmp26 = ::Math_obj::atan2(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(648)
				_z = tmp26;
			}
			else{
				HX_STACK_LINE(650)
				Float tmp19 = m32;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(650)
				Float tmp20 = m22;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(650)
				Float tmp21 = ::Math_obj::atan2(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(650)
				_x = tmp21;
				HX_STACK_LINE(651)
				_z = (int)0;
			}
		}
		else{
			HX_STACK_LINE(654)
			bool tmp13 = (order == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(654)
			if ((tmp13)){
				HX_STACK_LINE(656)
				bool tmp14 = (m23 < (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(656)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(656)
				if ((tmp14)){
					HX_STACK_LINE(656)
					tmp15 = (int)-1;
				}
				else{
					HX_STACK_LINE(656)
					bool tmp16 = (m23 > (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(656)
					if ((tmp16)){
						HX_STACK_LINE(656)
						tmp15 = (int)1;
					}
					else{
						HX_STACK_LINE(656)
						tmp15 = m23;
					}
				}
				HX_STACK_LINE(656)
				Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(656)
				Float tmp17 = ::Math_obj::asin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(656)
				_x = tmp17;
				HX_STACK_LINE(658)
				Float tmp18 = m23;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(658)
				Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(658)
				bool tmp20 = (tmp19 < ((Float)0.99999));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(658)
				if ((tmp20)){
					HX_STACK_LINE(659)
					Float tmp21 = m13;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(659)
					Float tmp22 = m33;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(659)
					Float tmp23 = ::Math_obj::atan2(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(659)
					_y = tmp23;
					HX_STACK_LINE(660)
					Float tmp24 = m21;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(660)
					Float tmp25 = m22;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(660)
					Float tmp26 = ::Math_obj::atan2(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(660)
					_z = tmp26;
				}
				else{
					HX_STACK_LINE(662)
					Float tmp21 = m31;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(662)
					Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(662)
					Float tmp23 = m11;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(662)
					Float tmp24 = ::Math_obj::atan2(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(662)
					_y = tmp24;
					HX_STACK_LINE(663)
					_z = (int)0;
				}
			}
			else{
				HX_STACK_LINE(666)
				bool tmp14 = (order == (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(666)
				if ((tmp14)){
					HX_STACK_LINE(668)
					bool tmp15 = (m32 < (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(668)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(668)
					if ((tmp15)){
						HX_STACK_LINE(668)
						tmp16 = (int)-1;
					}
					else{
						HX_STACK_LINE(668)
						bool tmp17 = (m32 > (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(668)
						if ((tmp17)){
							HX_STACK_LINE(668)
							tmp16 = (int)1;
						}
						else{
							HX_STACK_LINE(668)
							tmp16 = m32;
						}
					}
					HX_STACK_LINE(668)
					Float tmp17 = ::Math_obj::asin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(668)
					_x = tmp17;
					HX_STACK_LINE(670)
					Float tmp18 = m32;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(670)
					Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(670)
					bool tmp20 = (tmp19 < ((Float)0.99999));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(670)
					if ((tmp20)){
						HX_STACK_LINE(671)
						Float tmp21 = m31;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(671)
						Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(671)
						Float tmp23 = m33;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(671)
						Float tmp24 = ::Math_obj::atan2(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(671)
						_y = tmp24;
						HX_STACK_LINE(672)
						Float tmp25 = m12;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(672)
						Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(672)
						Float tmp27 = m22;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(672)
						Float tmp28 = ::Math_obj::atan2(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(672)
						_z = tmp28;
					}
					else{
						HX_STACK_LINE(674)
						_y = (int)0;
						HX_STACK_LINE(675)
						Float tmp21 = m21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(675)
						Float tmp22 = m11;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(675)
						Float tmp23 = ::Math_obj::atan2(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(675)
						_z = tmp23;
					}
				}
				else{
					HX_STACK_LINE(678)
					bool tmp15 = (order == (int)3);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(678)
					if ((tmp15)){
						HX_STACK_LINE(680)
						bool tmp16 = (m31 < (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(680)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(680)
						if ((tmp16)){
							HX_STACK_LINE(680)
							tmp17 = (int)-1;
						}
						else{
							HX_STACK_LINE(680)
							bool tmp18 = (m31 > (int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(680)
							if ((tmp18)){
								HX_STACK_LINE(680)
								tmp17 = (int)1;
							}
							else{
								HX_STACK_LINE(680)
								tmp17 = m31;
							}
						}
						HX_STACK_LINE(680)
						Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(680)
						Float tmp19 = ::Math_obj::asin(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(680)
						_y = tmp19;
						HX_STACK_LINE(682)
						Float tmp20 = m31;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(682)
						Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(682)
						bool tmp22 = (tmp21 < ((Float)0.99999));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(682)
						if ((tmp22)){
							HX_STACK_LINE(683)
							Float tmp23 = m32;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(683)
							Float tmp24 = m33;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(683)
							Float tmp25 = ::Math_obj::atan2(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(683)
							_x = tmp25;
							HX_STACK_LINE(684)
							Float tmp26 = m21;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(684)
							Float tmp27 = m11;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(684)
							Float tmp28 = ::Math_obj::atan2(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(684)
							_z = tmp28;
						}
						else{
							HX_STACK_LINE(686)
							_x = (int)0;
							HX_STACK_LINE(687)
							Float tmp23 = m12;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(687)
							Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(687)
							Float tmp25 = m22;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(687)
							Float tmp26 = ::Math_obj::atan2(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(687)
							_z = tmp26;
						}
					}
					else{
						HX_STACK_LINE(690)
						bool tmp16 = (order == (int)4);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(690)
						if ((tmp16)){
							HX_STACK_LINE(692)
							bool tmp17 = (m21 < (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(692)
							Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(692)
							if ((tmp17)){
								HX_STACK_LINE(692)
								tmp18 = (int)-1;
							}
							else{
								HX_STACK_LINE(692)
								bool tmp19 = (m21 > (int)1);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(692)
								if ((tmp19)){
									HX_STACK_LINE(692)
									tmp18 = (int)1;
								}
								else{
									HX_STACK_LINE(692)
									tmp18 = m21;
								}
							}
							HX_STACK_LINE(692)
							Float tmp19 = ::Math_obj::asin(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(692)
							_z = tmp19;
							HX_STACK_LINE(694)
							Float tmp20 = m21;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(694)
							Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(694)
							bool tmp22 = (tmp21 < ((Float)0.99999));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(694)
							if ((tmp22)){
								HX_STACK_LINE(695)
								Float tmp23 = m23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(695)
								Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(695)
								Float tmp25 = m22;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(695)
								Float tmp26 = ::Math_obj::atan2(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(695)
								_x = tmp26;
								HX_STACK_LINE(696)
								Float tmp27 = m31;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(696)
								Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(696)
								Float tmp29 = m11;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(696)
								Float tmp30 = ::Math_obj::atan2(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(696)
								_y = tmp30;
							}
							else{
								HX_STACK_LINE(698)
								_x = (int)0;
								HX_STACK_LINE(699)
								Float tmp23 = m13;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(699)
								Float tmp24 = m33;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(699)
								Float tmp25 = ::Math_obj::atan2(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(699)
								_y = tmp25;
							}
						}
						else{
							HX_STACK_LINE(702)
							bool tmp17 = (order == (int)5);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(702)
							if ((tmp17)){
								HX_STACK_LINE(704)
								bool tmp18 = (m12 < (int)-1);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(704)
								Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(704)
								if ((tmp18)){
									HX_STACK_LINE(704)
									tmp19 = (int)-1;
								}
								else{
									HX_STACK_LINE(704)
									bool tmp20 = (m12 > (int)1);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(704)
									if ((tmp20)){
										HX_STACK_LINE(704)
										tmp19 = (int)1;
									}
									else{
										HX_STACK_LINE(704)
										tmp19 = m12;
									}
								}
								HX_STACK_LINE(704)
								Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(704)
								Float tmp21 = ::Math_obj::asin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(704)
								_z = tmp21;
								HX_STACK_LINE(706)
								Float tmp22 = m12;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(706)
								Float tmp23 = ::Math_obj::abs(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(706)
								bool tmp24 = (tmp23 < ((Float)0.99999));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(706)
								if ((tmp24)){
									HX_STACK_LINE(707)
									Float tmp25 = m32;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(707)
									Float tmp26 = m22;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(707)
									Float tmp27 = ::Math_obj::atan2(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(707)
									_x = tmp27;
									HX_STACK_LINE(708)
									Float tmp28 = m13;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(708)
									Float tmp29 = m11;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(708)
									Float tmp30 = ::Math_obj::atan2(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(708)
									_y = tmp30;
								}
								else{
									HX_STACK_LINE(710)
									Float tmp25 = m23;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(710)
									Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(710)
									Float tmp27 = m33;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(710)
									Float tmp28 = ::Math_obj::atan2(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(710)
									_x = tmp28;
									HX_STACK_LINE(711)
									_y = (int)0;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(716)
		{
			HX_STACK_LINE(716)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(716)
			bool prev = tmp13;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(716)
			this->ignore_listeners = true;
			HX_STACK_LINE(716)
			{
				HX_STACK_LINE(716)
				this->x = _x;
				HX_STACK_LINE(716)
				bool tmp14 = this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(716)
				if ((tmp14)){
					HX_STACK_LINE(716)
					this->x;
				}
				else{
					HX_STACK_LINE(716)
					Dynamic tmp15 = this->listen_x_dyn();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(716)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(716)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(716)
					if ((tmp16)){
						HX_STACK_LINE(716)
						bool tmp18 = this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(716)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(716)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(716)
						tmp17 = !(tmp20);
					}
					else{
						HX_STACK_LINE(716)
						tmp17 = false;
					}
					HX_STACK_LINE(716)
					if ((tmp17)){
						HX_STACK_LINE(716)
						Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(716)
						this->listen_x(tmp18);
					}
					HX_STACK_LINE(716)
					this->x;
				}
			}
			HX_STACK_LINE(716)
			{
				HX_STACK_LINE(716)
				this->y = _y;
				HX_STACK_LINE(716)
				bool tmp14 = this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(716)
				if ((tmp14)){
					HX_STACK_LINE(716)
					this->y;
				}
				else{
					HX_STACK_LINE(716)
					Dynamic tmp15 = this->listen_y_dyn();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(716)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(716)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(716)
					if ((tmp16)){
						HX_STACK_LINE(716)
						bool tmp18 = this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(716)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(716)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(716)
						tmp17 = !(tmp20);
					}
					else{
						HX_STACK_LINE(716)
						tmp17 = false;
					}
					HX_STACK_LINE(716)
					if ((tmp17)){
						HX_STACK_LINE(716)
						Float tmp18 = _y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(716)
						this->listen_y(tmp18);
					}
					HX_STACK_LINE(716)
					this->y;
				}
			}
			HX_STACK_LINE(716)
			{
				HX_STACK_LINE(716)
				this->z = _z;
				HX_STACK_LINE(716)
				bool tmp14 = this->_construct;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(716)
				if ((tmp14)){
					HX_STACK_LINE(716)
					this->z;
				}
				else{
					HX_STACK_LINE(716)
					Dynamic tmp15 = this->listen_z_dyn();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(716)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(716)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(716)
					if ((tmp16)){
						HX_STACK_LINE(716)
						bool tmp18 = this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(716)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(716)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(716)
						tmp17 = !(tmp20);
					}
					else{
						HX_STACK_LINE(716)
						tmp17 = false;
					}
					HX_STACK_LINE(716)
					if ((tmp17)){
						HX_STACK_LINE(716)
						Float tmp18 = _z;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(716)
						this->listen_z(tmp18);
					}
					HX_STACK_LINE(716)
					this->z;
				}
			}
			HX_STACK_LINE(716)
			this->ignore_listeners = prev;
			HX_STACK_LINE(716)
			Dynamic tmp14 = this->listen_x_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(716)
			bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(716)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(716)
			if ((tmp15)){
				HX_STACK_LINE(716)
				bool tmp17 = this->ignore_listeners;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(716)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(716)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(716)
				tmp16 = !(tmp19);
			}
			else{
				HX_STACK_LINE(716)
				tmp16 = false;
			}
			HX_STACK_LINE(716)
			if ((tmp16)){
				HX_STACK_LINE(716)
				Float tmp17 = this->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(716)
				this->listen_x(tmp17);
			}
			HX_STACK_LINE(716)
			Dynamic tmp17 = this->listen_y_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(716)
			bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(716)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(716)
			if ((tmp18)){
				HX_STACK_LINE(716)
				bool tmp20 = this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(716)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(716)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(716)
				tmp19 = !(tmp22);
			}
			else{
				HX_STACK_LINE(716)
				tmp19 = false;
			}
			HX_STACK_LINE(716)
			if ((tmp19)){
				HX_STACK_LINE(716)
				Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(716)
				this->listen_y(tmp20);
			}
			HX_STACK_LINE(716)
			Dynamic tmp20 = this->listen_z_dyn();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(716)
			bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(716)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(716)
			if ((tmp21)){
				HX_STACK_LINE(716)
				bool tmp23 = this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(716)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(716)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(716)
				tmp22 = !(tmp25);
			}
			else{
				HX_STACK_LINE(716)
				tmp22 = false;
			}
			HX_STACK_LINE(716)
			if ((tmp22)){
				HX_STACK_LINE(716)
				Float tmp23 = this->z;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(716)
				this->listen_z(tmp23);
			}
			HX_STACK_LINE(716)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(718)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,setEulerFromRotationMatrix,return )

::phoenix::Vector Vector_obj::setEulerFromQuaternion( ::phoenix::Quaternion q,hx::Null< int >  __o_order){
int order = __o_order.Default(0);
	HX_STACK_FRAME("phoenix.Vector","setEulerFromQuaternion",0x59e86efb,"phoenix.Vector.setEulerFromQuaternion","phoenix/Vector.hx",722,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_ARG(order,"order")
{
		HX_STACK_LINE(724)
		Float tmp = (q->x * q->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(724)
		Float sqx = tmp;		HX_STACK_VAR(sqx,"sqx");
		HX_STACK_LINE(725)
		Float tmp1 = (q->y * q->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(725)
		Float sqy = tmp1;		HX_STACK_VAR(sqy,"sqy");
		HX_STACK_LINE(726)
		Float tmp2 = (q->z * q->z);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(726)
		Float sqz = tmp2;		HX_STACK_VAR(sqz,"sqz");
		HX_STACK_LINE(727)
		Float tmp3 = (q->w * q->w);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(727)
		Float sqw = tmp3;		HX_STACK_VAR(sqw,"sqw");
		HX_STACK_LINE(729)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(729)
		Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(730)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(730)
		Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(731)
		Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(731)
		Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(733)
		bool tmp7 = (order == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(733)
		if ((tmp7)){
			HX_STACK_LINE(734)
			Float tmp8 = (q->x * q->w);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(734)
			Float tmp9 = (q->y * q->z);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(734)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(734)
			Float tmp11 = ((int)2 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(734)
			Float tmp12 = (sqw - sqx);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(734)
			Float tmp13 = sqy;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(734)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(734)
			Float tmp15 = sqz;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(734)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(734)
			Float tmp17 = ::Math_obj::atan2(tmp11,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(734)
			_x = tmp17;
			HX_STACK_LINE(735)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(735)
			{
				HX_STACK_LINE(735)
				Float tmp19 = (q->x * q->z);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(735)
				Float tmp20 = (q->y * q->w);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(735)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(735)
				Float tmp22 = ((int)2 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(735)
				Float value = tmp22;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(735)
				bool tmp23 = (value < (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(735)
				if ((tmp23)){
					HX_STACK_LINE(735)
					tmp18 = (int)-1;
				}
				else{
					HX_STACK_LINE(735)
					bool tmp24 = (value > (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(735)
					if ((tmp24)){
						HX_STACK_LINE(735)
						tmp18 = (int)1;
					}
					else{
						HX_STACK_LINE(735)
						tmp18 = value;
					}
				}
			}
			HX_STACK_LINE(735)
			Float tmp19 = ::Math_obj::asin(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(735)
			_y = tmp19;
			HX_STACK_LINE(736)
			Float tmp20 = (q->z * q->w);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(736)
			Float tmp21 = (q->x * q->y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(736)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(736)
			Float tmp23 = ((int)2 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(736)
			Float tmp24 = (sqw + sqx);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(736)
			Float tmp25 = sqy;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(736)
			Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(736)
			Float tmp27 = sqz;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(736)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(736)
			Float tmp29 = ::Math_obj::atan2(tmp23,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(736)
			_z = tmp29;
		}
		else{
			HX_STACK_LINE(737)
			bool tmp8 = (order == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(737)
			if ((tmp8)){
				HX_STACK_LINE(738)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(738)
				{
					HX_STACK_LINE(738)
					Float tmp10 = (q->x * q->w);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(738)
					Float tmp11 = (q->y * q->z);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(738)
					Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(738)
					Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(738)
					Float value = tmp13;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(738)
					bool tmp14 = (value < (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(738)
					if ((tmp14)){
						HX_STACK_LINE(738)
						tmp9 = (int)-1;
					}
					else{
						HX_STACK_LINE(738)
						bool tmp15 = (value > (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(738)
						if ((tmp15)){
							HX_STACK_LINE(738)
							tmp9 = (int)1;
						}
						else{
							HX_STACK_LINE(738)
							tmp9 = value;
						}
					}
				}
				HX_STACK_LINE(738)
				Float tmp10 = ::Math_obj::asin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(738)
				_x = tmp10;
				HX_STACK_LINE(739)
				Float tmp11 = (q->x * q->z);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(739)
				Float tmp12 = (q->y * q->w);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(739)
				Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(739)
				Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(739)
				Float tmp15 = (sqw - sqx);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(739)
				Float tmp16 = sqy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(739)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(739)
				Float tmp18 = sqz;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(739)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(739)
				Float tmp20 = ::Math_obj::atan2(tmp14,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(739)
				_y = tmp20;
				HX_STACK_LINE(740)
				Float tmp21 = (q->x * q->y);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(740)
				Float tmp22 = (q->z * q->w);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(740)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(740)
				Float tmp24 = ((int)2 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(740)
				Float tmp25 = (sqw - sqx);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(740)
				Float tmp26 = sqy;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(740)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(740)
				Float tmp28 = sqz;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(740)
				Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(740)
				Float tmp30 = ::Math_obj::atan2(tmp24,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(740)
				_z = tmp30;
			}
			else{
				HX_STACK_LINE(741)
				bool tmp9 = (order == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(741)
				if ((tmp9)){
					HX_STACK_LINE(742)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(742)
						Float tmp11 = (q->x * q->w);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(742)
						Float tmp12 = (q->y * q->z);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(742)
						Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(742)
						Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(742)
						Float value = tmp14;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(742)
						bool tmp15 = (value < (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(742)
						if ((tmp15)){
							HX_STACK_LINE(742)
							tmp10 = (int)-1;
						}
						else{
							HX_STACK_LINE(742)
							bool tmp16 = (value > (int)1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(742)
							if ((tmp16)){
								HX_STACK_LINE(742)
								tmp10 = (int)1;
							}
							else{
								HX_STACK_LINE(742)
								tmp10 = value;
							}
						}
					}
					HX_STACK_LINE(742)
					Float tmp11 = ::Math_obj::asin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(742)
					_x = tmp11;
					HX_STACK_LINE(743)
					Float tmp12 = (q->y * q->w);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(743)
					Float tmp13 = (q->z * q->x);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(743)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(743)
					Float tmp15 = ((int)2 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(743)
					Float tmp16 = (sqw - sqx);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(743)
					Float tmp17 = sqy;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(743)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(743)
					Float tmp19 = sqz;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(743)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(743)
					Float tmp21 = ::Math_obj::atan2(tmp15,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(743)
					_y = tmp21;
					HX_STACK_LINE(744)
					Float tmp22 = (q->z * q->w);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(744)
					Float tmp23 = (q->x * q->y);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(744)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(744)
					Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(744)
					Float tmp26 = (sqw - sqx);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(744)
					Float tmp27 = sqy;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(744)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(744)
					Float tmp29 = sqz;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(744)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(744)
					Float tmp31 = ::Math_obj::atan2(tmp25,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(744)
					_z = tmp31;
				}
				else{
					HX_STACK_LINE(745)
					bool tmp10 = (order == (int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(745)
					if ((tmp10)){
						HX_STACK_LINE(746)
						Float tmp11 = (q->x * q->w);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(746)
						Float tmp12 = (q->z * q->y);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(746)
						Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(746)
						Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(746)
						Float tmp15 = (sqw - sqx);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(746)
						Float tmp16 = sqy;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(746)
						Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(746)
						Float tmp18 = sqz;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(746)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(746)
						Float tmp20 = ::Math_obj::atan2(tmp14,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(746)
						_x = tmp20;
						HX_STACK_LINE(747)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(747)
						{
							HX_STACK_LINE(747)
							Float tmp22 = (q->y * q->w);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(747)
							Float tmp23 = (q->x * q->z);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(747)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(747)
							Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(747)
							Float value = tmp25;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(747)
							bool tmp26 = (value < (int)-1);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(747)
							if ((tmp26)){
								HX_STACK_LINE(747)
								tmp21 = (int)-1;
							}
							else{
								HX_STACK_LINE(747)
								bool tmp27 = (value > (int)1);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(747)
								if ((tmp27)){
									HX_STACK_LINE(747)
									tmp21 = (int)1;
								}
								else{
									HX_STACK_LINE(747)
									tmp21 = value;
								}
							}
						}
						HX_STACK_LINE(747)
						Float tmp22 = ::Math_obj::asin(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(747)
						_y = tmp22;
						HX_STACK_LINE(748)
						Float tmp23 = (q->x * q->y);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(748)
						Float tmp24 = (q->z * q->w);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(748)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(748)
						Float tmp26 = ((int)2 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(748)
						Float tmp27 = (sqw + sqx);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(748)
						Float tmp28 = sqy;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(748)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(748)
						Float tmp30 = sqz;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(748)
						Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(748)
						Float tmp32 = ::Math_obj::atan2(tmp26,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(748)
						_z = tmp32;
					}
					else{
						HX_STACK_LINE(749)
						bool tmp11 = (order == (int)4);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(749)
						if ((tmp11)){
							HX_STACK_LINE(750)
							Float tmp12 = (q->x * q->w);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(750)
							Float tmp13 = (q->z * q->y);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(750)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(750)
							Float tmp15 = ((int)2 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(750)
							Float tmp16 = (sqw - sqx);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(750)
							Float tmp17 = sqy;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(750)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(750)
							Float tmp19 = sqz;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(750)
							Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(750)
							Float tmp21 = ::Math_obj::atan2(tmp15,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(750)
							_x = tmp21;
							HX_STACK_LINE(751)
							Float tmp22 = (q->y * q->w);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(751)
							Float tmp23 = (q->x * q->z);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(751)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(751)
							Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(751)
							Float tmp26 = (sqw + sqx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(751)
							Float tmp27 = sqy;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(751)
							Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(751)
							Float tmp29 = sqz;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(751)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(751)
							Float tmp31 = ::Math_obj::atan2(tmp25,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(751)
							_y = tmp31;
							HX_STACK_LINE(752)
							Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(752)
							{
								HX_STACK_LINE(752)
								Float tmp33 = (q->x * q->y);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(752)
								Float tmp34 = (q->z * q->w);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(752)
								Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(752)
								Float tmp36 = ((int)2 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(752)
								Float value = tmp36;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(752)
								bool tmp37 = (value < (int)-1);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(752)
								if ((tmp37)){
									HX_STACK_LINE(752)
									tmp32 = (int)-1;
								}
								else{
									HX_STACK_LINE(752)
									bool tmp38 = (value > (int)1);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(752)
									if ((tmp38)){
										HX_STACK_LINE(752)
										tmp32 = (int)1;
									}
									else{
										HX_STACK_LINE(752)
										tmp32 = value;
									}
								}
							}
							HX_STACK_LINE(752)
							Float tmp33 = ::Math_obj::asin(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(752)
							_z = tmp33;
						}
						else{
							HX_STACK_LINE(753)
							bool tmp12 = (order == (int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(753)
							if ((tmp12)){
								HX_STACK_LINE(754)
								Float tmp13 = (q->x * q->w);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(754)
								Float tmp14 = (q->y * q->z);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(754)
								Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(754)
								Float tmp16 = ((int)2 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(754)
								Float tmp17 = (sqw - sqx);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(754)
								Float tmp18 = sqy;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(754)
								Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(754)
								Float tmp20 = sqz;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(754)
								Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(754)
								Float tmp22 = ::Math_obj::atan2(tmp16,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(754)
								_x = tmp22;
								HX_STACK_LINE(755)
								Float tmp23 = (q->x * q->z);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(755)
								Float tmp24 = (q->y * q->w);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(755)
								Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(755)
								Float tmp26 = ((int)2 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(755)
								Float tmp27 = (sqw + sqx);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(755)
								Float tmp28 = sqy;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(755)
								Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(755)
								Float tmp30 = sqz;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(755)
								Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(755)
								Float tmp32 = ::Math_obj::atan2(tmp26,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(755)
								_y = tmp32;
								HX_STACK_LINE(756)
								Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(756)
								{
									HX_STACK_LINE(756)
									Float tmp34 = (q->z * q->w);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(756)
									Float tmp35 = (q->x * q->y);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(756)
									Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(756)
									Float tmp37 = ((int)2 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(756)
									Float value = tmp37;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(756)
									bool tmp38 = (value < (int)-1);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(756)
									if ((tmp38)){
										HX_STACK_LINE(756)
										tmp33 = (int)-1;
									}
									else{
										HX_STACK_LINE(756)
										bool tmp39 = (value > (int)1);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(756)
										if ((tmp39)){
											HX_STACK_LINE(756)
											tmp33 = (int)1;
										}
										else{
											HX_STACK_LINE(756)
											tmp33 = value;
										}
									}
								}
								HX_STACK_LINE(756)
								Float tmp34 = ::Math_obj::asin(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(756)
								_z = tmp34;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(759)
		{
			HX_STACK_LINE(759)
			bool tmp8 = this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(759)
			bool prev = tmp8;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(759)
			this->ignore_listeners = true;
			HX_STACK_LINE(759)
			{
				HX_STACK_LINE(759)
				this->x = _x;
				HX_STACK_LINE(759)
				bool tmp9 = this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(759)
				if ((tmp9)){
					HX_STACK_LINE(759)
					this->x;
				}
				else{
					HX_STACK_LINE(759)
					Dynamic tmp10 = this->listen_x_dyn();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(759)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(759)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(759)
					if ((tmp11)){
						HX_STACK_LINE(759)
						bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(759)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(759)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(759)
						tmp12 = !(tmp15);
					}
					else{
						HX_STACK_LINE(759)
						tmp12 = false;
					}
					HX_STACK_LINE(759)
					if ((tmp12)){
						HX_STACK_LINE(759)
						Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(759)
						this->listen_x(tmp13);
					}
					HX_STACK_LINE(759)
					this->x;
				}
			}
			HX_STACK_LINE(759)
			{
				HX_STACK_LINE(759)
				this->y = _y;
				HX_STACK_LINE(759)
				bool tmp9 = this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(759)
				if ((tmp9)){
					HX_STACK_LINE(759)
					this->y;
				}
				else{
					HX_STACK_LINE(759)
					Dynamic tmp10 = this->listen_y_dyn();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(759)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(759)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(759)
					if ((tmp11)){
						HX_STACK_LINE(759)
						bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(759)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(759)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(759)
						tmp12 = !(tmp15);
					}
					else{
						HX_STACK_LINE(759)
						tmp12 = false;
					}
					HX_STACK_LINE(759)
					if ((tmp12)){
						HX_STACK_LINE(759)
						Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(759)
						this->listen_y(tmp13);
					}
					HX_STACK_LINE(759)
					this->y;
				}
			}
			HX_STACK_LINE(759)
			{
				HX_STACK_LINE(759)
				this->z = _z;
				HX_STACK_LINE(759)
				bool tmp9 = this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(759)
				if ((tmp9)){
					HX_STACK_LINE(759)
					this->z;
				}
				else{
					HX_STACK_LINE(759)
					Dynamic tmp10 = this->listen_z_dyn();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(759)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(759)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(759)
					if ((tmp11)){
						HX_STACK_LINE(759)
						bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(759)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(759)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(759)
						tmp12 = !(tmp15);
					}
					else{
						HX_STACK_LINE(759)
						tmp12 = false;
					}
					HX_STACK_LINE(759)
					if ((tmp12)){
						HX_STACK_LINE(759)
						Float tmp13 = _z;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(759)
						this->listen_z(tmp13);
					}
					HX_STACK_LINE(759)
					this->z;
				}
			}
			HX_STACK_LINE(759)
			this->ignore_listeners = prev;
			HX_STACK_LINE(759)
			Dynamic tmp9 = this->listen_x_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(759)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(759)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(759)
			if ((tmp10)){
				HX_STACK_LINE(759)
				bool tmp12 = this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(759)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(759)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(759)
				tmp11 = !(tmp14);
			}
			else{
				HX_STACK_LINE(759)
				tmp11 = false;
			}
			HX_STACK_LINE(759)
			if ((tmp11)){
				HX_STACK_LINE(759)
				Float tmp12 = this->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(759)
				this->listen_x(tmp12);
			}
			HX_STACK_LINE(759)
			Dynamic tmp12 = this->listen_y_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(759)
			bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(759)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(759)
			if ((tmp13)){
				HX_STACK_LINE(759)
				bool tmp15 = this->ignore_listeners;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(759)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(759)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(759)
				tmp14 = !(tmp17);
			}
			else{
				HX_STACK_LINE(759)
				tmp14 = false;
			}
			HX_STACK_LINE(759)
			if ((tmp14)){
				HX_STACK_LINE(759)
				Float tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(759)
				this->listen_y(tmp15);
			}
			HX_STACK_LINE(759)
			Dynamic tmp15 = this->listen_z_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(759)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(759)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(759)
			if ((tmp16)){
				HX_STACK_LINE(759)
				bool tmp18 = this->ignore_listeners;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(759)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(759)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(759)
				tmp17 = !(tmp20);
			}
			else{
				HX_STACK_LINE(759)
				tmp17 = false;
			}
			HX_STACK_LINE(759)
			if ((tmp17)){
				HX_STACK_LINE(759)
				Float tmp18 = this->z;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(759)
				this->listen_z(tmp18);
			}
			HX_STACK_LINE(759)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(761)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,setEulerFromQuaternion,return )

::phoenix::Vector Vector_obj::degrees( ){
	HX_STACK_FRAME("phoenix.Vector","degrees",0xc29bf31b,"phoenix.Vector.degrees","phoenix/Vector.hx",765,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(767)
	{
		HX_STACK_LINE(767)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(767)
		Float tmp1 = (tmp * ((Float)57.2957795130823797));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(767)
		Float _x = tmp1;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(767)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(767)
		Float tmp3 = (tmp2 * ((Float)57.2957795130823797));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(767)
		Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(767)
		Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(767)
		Float tmp5 = (tmp4 * ((Float)57.2957795130823797));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(767)
		Float _z = tmp5;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(767)
		bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(767)
		bool prev = tmp6;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(767)
		this->ignore_listeners = true;
		HX_STACK_LINE(767)
		{
			HX_STACK_LINE(767)
			this->x = _x;
			HX_STACK_LINE(767)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(767)
			if ((tmp7)){
				HX_STACK_LINE(767)
				this->x;
			}
			else{
				HX_STACK_LINE(767)
				Dynamic tmp8 = this->listen_x_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(767)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(767)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(767)
				if ((tmp9)){
					HX_STACK_LINE(767)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(767)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(767)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(767)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(767)
					tmp10 = false;
				}
				HX_STACK_LINE(767)
				if ((tmp10)){
					HX_STACK_LINE(767)
					Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(767)
					this->listen_x(tmp11);
				}
				HX_STACK_LINE(767)
				this->x;
			}
		}
		HX_STACK_LINE(767)
		{
			HX_STACK_LINE(767)
			this->y = _y;
			HX_STACK_LINE(767)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(767)
			if ((tmp7)){
				HX_STACK_LINE(767)
				this->y;
			}
			else{
				HX_STACK_LINE(767)
				Dynamic tmp8 = this->listen_y_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(767)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(767)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(767)
				if ((tmp9)){
					HX_STACK_LINE(767)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(767)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(767)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(767)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(767)
					tmp10 = false;
				}
				HX_STACK_LINE(767)
				if ((tmp10)){
					HX_STACK_LINE(767)
					Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(767)
					this->listen_y(tmp11);
				}
				HX_STACK_LINE(767)
				this->y;
			}
		}
		HX_STACK_LINE(767)
		{
			HX_STACK_LINE(767)
			this->z = _z;
			HX_STACK_LINE(767)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(767)
			if ((tmp7)){
				HX_STACK_LINE(767)
				this->z;
			}
			else{
				HX_STACK_LINE(767)
				Dynamic tmp8 = this->listen_z_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(767)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(767)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(767)
				if ((tmp9)){
					HX_STACK_LINE(767)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(767)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(767)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(767)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(767)
					tmp10 = false;
				}
				HX_STACK_LINE(767)
				if ((tmp10)){
					HX_STACK_LINE(767)
					Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(767)
					this->listen_z(tmp11);
				}
				HX_STACK_LINE(767)
				this->z;
			}
		}
		HX_STACK_LINE(767)
		this->ignore_listeners = prev;
		HX_STACK_LINE(767)
		Dynamic tmp7 = this->listen_x_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(767)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(767)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(767)
		if ((tmp8)){
			HX_STACK_LINE(767)
			bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(767)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(767)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(767)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(767)
			tmp9 = false;
		}
		HX_STACK_LINE(767)
		if ((tmp9)){
			HX_STACK_LINE(767)
			Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(767)
			this->listen_x(tmp10);
		}
		HX_STACK_LINE(767)
		Dynamic tmp10 = this->listen_y_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(767)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(767)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(767)
		if ((tmp11)){
			HX_STACK_LINE(767)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(767)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(767)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(767)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(767)
			tmp12 = false;
		}
		HX_STACK_LINE(767)
		if ((tmp12)){
			HX_STACK_LINE(767)
			Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(767)
			this->listen_y(tmp13);
		}
		HX_STACK_LINE(767)
		Dynamic tmp13 = this->listen_z_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(767)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(767)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(767)
		if ((tmp14)){
			HX_STACK_LINE(767)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(767)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(767)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(767)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(767)
			tmp15 = false;
		}
		HX_STACK_LINE(767)
		if ((tmp15)){
			HX_STACK_LINE(767)
			Float tmp16 = this->z;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(767)
			this->listen_z(tmp16);
		}
		HX_STACK_LINE(767)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(769)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,degrees,return )

::phoenix::Vector Vector_obj::radians( ){
	HX_STACK_FRAME("phoenix.Vector","radians",0xaf3155e6,"phoenix.Vector.radians","phoenix/Vector.hx",773,0x5d0bf7fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(775)
	{
		HX_STACK_LINE(775)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(775)
		Float tmp1 = (tmp * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(775)
		Float _x = tmp1;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(775)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(775)
		Float tmp3 = (tmp2 * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(775)
		Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(775)
		Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(775)
		Float tmp5 = (tmp4 * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(775)
		Float _z = tmp5;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(775)
		bool tmp6 = this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(775)
		bool prev = tmp6;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(775)
		this->ignore_listeners = true;
		HX_STACK_LINE(775)
		{
			HX_STACK_LINE(775)
			this->x = _x;
			HX_STACK_LINE(775)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(775)
			if ((tmp7)){
				HX_STACK_LINE(775)
				this->x;
			}
			else{
				HX_STACK_LINE(775)
				Dynamic tmp8 = this->listen_x_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(775)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(775)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(775)
				if ((tmp9)){
					HX_STACK_LINE(775)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(775)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(775)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(775)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(775)
					tmp10 = false;
				}
				HX_STACK_LINE(775)
				if ((tmp10)){
					HX_STACK_LINE(775)
					Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(775)
					this->listen_x(tmp11);
				}
				HX_STACK_LINE(775)
				this->x;
			}
		}
		HX_STACK_LINE(775)
		{
			HX_STACK_LINE(775)
			this->y = _y;
			HX_STACK_LINE(775)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(775)
			if ((tmp7)){
				HX_STACK_LINE(775)
				this->y;
			}
			else{
				HX_STACK_LINE(775)
				Dynamic tmp8 = this->listen_y_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(775)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(775)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(775)
				if ((tmp9)){
					HX_STACK_LINE(775)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(775)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(775)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(775)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(775)
					tmp10 = false;
				}
				HX_STACK_LINE(775)
				if ((tmp10)){
					HX_STACK_LINE(775)
					Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(775)
					this->listen_y(tmp11);
				}
				HX_STACK_LINE(775)
				this->y;
			}
		}
		HX_STACK_LINE(775)
		{
			HX_STACK_LINE(775)
			this->z = _z;
			HX_STACK_LINE(775)
			bool tmp7 = this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(775)
			if ((tmp7)){
				HX_STACK_LINE(775)
				this->z;
			}
			else{
				HX_STACK_LINE(775)
				Dynamic tmp8 = this->listen_z_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(775)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(775)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(775)
				if ((tmp9)){
					HX_STACK_LINE(775)
					bool tmp11 = this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(775)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(775)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(775)
					tmp10 = !(tmp13);
				}
				else{
					HX_STACK_LINE(775)
					tmp10 = false;
				}
				HX_STACK_LINE(775)
				if ((tmp10)){
					HX_STACK_LINE(775)
					Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(775)
					this->listen_z(tmp11);
				}
				HX_STACK_LINE(775)
				this->z;
			}
		}
		HX_STACK_LINE(775)
		this->ignore_listeners = prev;
		HX_STACK_LINE(775)
		Dynamic tmp7 = this->listen_x_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(775)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(775)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(775)
		if ((tmp8)){
			HX_STACK_LINE(775)
			bool tmp10 = this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(775)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(775)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(775)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(775)
			tmp9 = false;
		}
		HX_STACK_LINE(775)
		if ((tmp9)){
			HX_STACK_LINE(775)
			Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(775)
			this->listen_x(tmp10);
		}
		HX_STACK_LINE(775)
		Dynamic tmp10 = this->listen_y_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(775)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(775)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(775)
		if ((tmp11)){
			HX_STACK_LINE(775)
			bool tmp13 = this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(775)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(775)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(775)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(775)
			tmp12 = false;
		}
		HX_STACK_LINE(775)
		if ((tmp12)){
			HX_STACK_LINE(775)
			Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(775)
			this->listen_y(tmp13);
		}
		HX_STACK_LINE(775)
		Dynamic tmp13 = this->listen_z_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(775)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(775)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(775)
		if ((tmp14)){
			HX_STACK_LINE(775)
			bool tmp16 = this->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(775)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(775)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(775)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(775)
			tmp15 = false;
		}
		HX_STACK_LINE(775)
		if ((tmp15)){
			HX_STACK_LINE(775)
			Float tmp16 = this->z;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(775)
			this->listen_z(tmp16);
		}
		HX_STACK_LINE(775)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(777)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector_obj,radians,return )

::phoenix::Vector Vector_obj::Add( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","Add",0x8c70ef75,"phoenix.Vector.Add","phoenix/Vector.hx",245,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(247)
	Float tmp = (a->x + b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	Float tmp1 = (a->y + b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	Float tmp2 = (a->z + b->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(246)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Add,return )

::phoenix::Vector Vector_obj::Subtract( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","Subtract",0x826fa740,"phoenix.Vector.Subtract","phoenix/Vector.hx",253,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(255)
	Float tmp = (a->x - b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	Float tmp1 = (a->y - b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	Float tmp2 = (a->z - b->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Subtract,return )

::phoenix::Vector Vector_obj::MultiplyVector( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","MultiplyVector",0x9f195533,"phoenix.Vector.MultiplyVector","phoenix/Vector.hx",261,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(263)
	Float tmp = (a->x * b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	Float tmp1 = (a->y * b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	Float tmp2 = (a->z * b->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(262)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,MultiplyVector,return )

::phoenix::Vector Vector_obj::DivideVector( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","DivideVector",0xacf76d48,"phoenix.Vector.DivideVector","phoenix/Vector.hx",269,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(271)
	Float tmp = (Float(a->x) / Float(b->x));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	Float tmp1 = (Float(a->y) / Float(b->y));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	Float tmp2 = (Float(a->z) / Float(b->z));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(270)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(270)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,DivideVector,return )

::phoenix::Vector Vector_obj::Multiply( ::phoenix::Vector a,Float b){
	HX_STACK_FRAME("phoenix.Vector","Multiply",0x24eb1450,"phoenix.Vector.Multiply","phoenix/Vector.hx",277,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(279)
	Float tmp = (a->x * b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	Float tmp1 = (a->y * b);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	Float tmp2 = (a->z * b);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Multiply,return )

::phoenix::Vector Vector_obj::Divide( ::phoenix::Vector a,Float b){
	HX_STACK_FRAME("phoenix.Vector","Divide",0x412d3ea5,"phoenix.Vector.Divide","phoenix/Vector.hx",285,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(287)
	Float tmp = (Float(a->x) / Float(b));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	Float tmp1 = (Float(a->y) / Float(b));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	Float tmp2 = (Float(a->z) / Float(b));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Divide,return )

::phoenix::Vector Vector_obj::AddScalar( ::phoenix::Vector a,Float b){
	HX_STACK_FRAME("phoenix.Vector","AddScalar",0x7c57d081,"phoenix.Vector.AddScalar","phoenix/Vector.hx",293,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(295)
	Float tmp = (a->x + b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	Float tmp1 = (a->y + b);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	Float tmp2 = (a->z + b);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(294)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,AddScalar,return )

::phoenix::Vector Vector_obj::SubtractScalar( ::phoenix::Vector a,Float b){
	HX_STACK_FRAME("phoenix.Vector","SubtractScalar",0xd63ef28c,"phoenix.Vector.SubtractScalar","phoenix/Vector.hx",301,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(303)
	Float tmp = (a->x - b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	Float tmp1 = (a->y - b);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	Float tmp2 = (a->z - b);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(302)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(302)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,SubtractScalar,return )

::phoenix::Vector Vector_obj::Cross( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","Cross",0x6e3a59d4,"phoenix.Vector.Cross","phoenix/Vector.hx",309,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(311)
	Float tmp = (a->y * b->z);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	Float tmp1 = (a->z * b->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(312)
	Float tmp3 = (a->z * b->x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(312)
	Float tmp4 = (a->x * b->z);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(312)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(313)
	Float tmp6 = (a->x * b->y);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(313)
	Float tmp7 = (a->y * b->x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(313)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(310)
	::phoenix::Vector tmp9 = ::phoenix::Vector_obj::__new(tmp2,tmp5,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(310)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Cross,return )

Float Vector_obj::RotationTo( ::phoenix::Vector a,::phoenix::Vector b){
	HX_STACK_FRAME("phoenix.Vector","RotationTo",0x686ee785,"phoenix.Vector.RotationTo","phoenix/Vector.hx",317,0x5d0bf7fb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(319)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		Float tmp1 = (b->x - a->x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		Float tmp2 = (b->y - a->y);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		Float tmp3 = ::Math_obj::atan2(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		Float theta = tmp3;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(319)
		Float tmp4 = (theta * ((Float)180.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(319)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(319)
		Float tmp7 = (((Float)180.0) + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(319)
		Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(319)
		Float r = tmp8;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(319)
		tmp = r;
	}
	HX_STACK_LINE(319)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,RotationTo,return )

Void Vector_obj::Listen( ::phoenix::Vector _v,Dynamic listener){
{
		HX_STACK_FRAME("phoenix.Vector","Listen",0x7214d773,"phoenix.Vector.Listen","phoenix/Vector.hx",323,0x5d0bf7fb)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(325)
		_v->listen_x = listener;
		HX_STACK_LINE(326)
		_v->listen_y = listener;
		HX_STACK_LINE(327)
		_v->listen_z = listener;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_obj,Listen,(void))

::phoenix::Vector Vector_obj::Degrees( ::phoenix::Vector _radian_vector){
	HX_STACK_FRAME("phoenix.Vector","Degrees",0x8fed1afb,"phoenix.Vector.Degrees","phoenix/Vector.hx",781,0x5d0bf7fb)
	HX_STACK_ARG(_radian_vector,"_radian_vector")
	HX_STACK_LINE(783)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(783)
	{
		HX_STACK_LINE(783)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(_radian_vector->x,_radian_vector->y,_radian_vector->z,_radian_vector->w);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(783)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(783)
		{
			HX_STACK_LINE(783)
			Float tmp2 = (_this->x * ((Float)57.2957795130823797));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(783)
			Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(783)
			Float tmp3 = (_this->y * ((Float)57.2957795130823797));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(783)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(783)
			Float tmp4 = (_this->z * ((Float)57.2957795130823797));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(783)
			Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(783)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(783)
			_this->ignore_listeners = true;
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				_this->x = _x;
				HX_STACK_LINE(783)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(783)
				if ((tmp5)){
					HX_STACK_LINE(783)
					_this->x;
				}
				else{
					HX_STACK_LINE(783)
					bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(783)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(783)
					if ((tmp6)){
						HX_STACK_LINE(783)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(783)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(783)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(783)
						tmp7 = false;
					}
					HX_STACK_LINE(783)
					if ((tmp7)){
						HX_STACK_LINE(783)
						Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(783)
						_this->listen_x(tmp8);
					}
					HX_STACK_LINE(783)
					_this->x;
				}
			}
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				_this->y = _y;
				HX_STACK_LINE(783)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(783)
				if ((tmp5)){
					HX_STACK_LINE(783)
					_this->y;
				}
				else{
					HX_STACK_LINE(783)
					bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(783)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(783)
					if ((tmp6)){
						HX_STACK_LINE(783)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(783)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(783)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(783)
						tmp7 = false;
					}
					HX_STACK_LINE(783)
					if ((tmp7)){
						HX_STACK_LINE(783)
						Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(783)
						_this->listen_y(tmp8);
					}
					HX_STACK_LINE(783)
					_this->y;
				}
			}
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				_this->z = _z;
				HX_STACK_LINE(783)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(783)
				if ((tmp5)){
					HX_STACK_LINE(783)
					_this->z;
				}
				else{
					HX_STACK_LINE(783)
					bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(783)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(783)
					if ((tmp6)){
						HX_STACK_LINE(783)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(783)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(783)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(783)
						tmp7 = false;
					}
					HX_STACK_LINE(783)
					if ((tmp7)){
						HX_STACK_LINE(783)
						Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(783)
						_this->listen_z(tmp8);
					}
					HX_STACK_LINE(783)
					_this->z;
				}
			}
			HX_STACK_LINE(783)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(783)
			bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(783)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(783)
			if ((tmp5)){
				HX_STACK_LINE(783)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(783)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(783)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(783)
				tmp6 = false;
			}
			HX_STACK_LINE(783)
			if ((tmp6)){
				HX_STACK_LINE(783)
				Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(783)
				_this->listen_x(tmp7);
			}
			HX_STACK_LINE(783)
			bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(783)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(783)
			if ((tmp7)){
				HX_STACK_LINE(783)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(783)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(783)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(783)
				tmp8 = false;
			}
			HX_STACK_LINE(783)
			if ((tmp8)){
				HX_STACK_LINE(783)
				Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(783)
				_this->listen_y(tmp9);
			}
			HX_STACK_LINE(783)
			bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(783)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(783)
			if ((tmp9)){
				HX_STACK_LINE(783)
				bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(783)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(783)
				tmp10 = !(tmp12);
			}
			else{
				HX_STACK_LINE(783)
				tmp10 = false;
			}
			HX_STACK_LINE(783)
			if ((tmp10)){
				HX_STACK_LINE(783)
				Float tmp11 = _this->z;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(783)
				_this->listen_z(tmp11);
			}
			HX_STACK_LINE(783)
			_this;
		}
		HX_STACK_LINE(783)
		tmp = _this;
	}
	HX_STACK_LINE(783)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,Degrees,return )

::phoenix::Vector Vector_obj::Radians( ::phoenix::Vector _degree_vector){
	HX_STACK_FRAME("phoenix.Vector","Radians",0x7c827dc6,"phoenix.Vector.Radians","phoenix/Vector.hx",787,0x5d0bf7fb)
	HX_STACK_ARG(_degree_vector,"_degree_vector")
	HX_STACK_LINE(789)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(789)
	{
		HX_STACK_LINE(789)
		::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(_degree_vector->x,_degree_vector->y,_degree_vector->z,_degree_vector->w);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(789)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			Float tmp2 = (_this->x * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(789)
			Float _x = tmp2;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(789)
			Float tmp3 = (_this->y * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(789)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(789)
			Float tmp4 = (_this->z * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(789)
			Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(789)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(789)
			_this->ignore_listeners = true;
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				_this->x = _x;
				HX_STACK_LINE(789)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(789)
				if ((tmp5)){
					HX_STACK_LINE(789)
					_this->x;
				}
				else{
					HX_STACK_LINE(789)
					bool tmp6 = (_this->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(789)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					if ((tmp6)){
						HX_STACK_LINE(789)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(789)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(789)
						tmp7 = false;
					}
					HX_STACK_LINE(789)
					if ((tmp7)){
						HX_STACK_LINE(789)
						Float tmp8 = _x;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						_this->listen_x(tmp8);
					}
					HX_STACK_LINE(789)
					_this->x;
				}
			}
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				_this->y = _y;
				HX_STACK_LINE(789)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(789)
				if ((tmp5)){
					HX_STACK_LINE(789)
					_this->y;
				}
				else{
					HX_STACK_LINE(789)
					bool tmp6 = (_this->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(789)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					if ((tmp6)){
						HX_STACK_LINE(789)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(789)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(789)
						tmp7 = false;
					}
					HX_STACK_LINE(789)
					if ((tmp7)){
						HX_STACK_LINE(789)
						Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						_this->listen_y(tmp8);
					}
					HX_STACK_LINE(789)
					_this->y;
				}
			}
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				_this->z = _z;
				HX_STACK_LINE(789)
				bool tmp5 = _this->_construct;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(789)
				if ((tmp5)){
					HX_STACK_LINE(789)
					_this->z;
				}
				else{
					HX_STACK_LINE(789)
					bool tmp6 = (_this->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(789)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					if ((tmp6)){
						HX_STACK_LINE(789)
						bool tmp8 = _this->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(789)
						tmp7 = !(tmp9);
					}
					else{
						HX_STACK_LINE(789)
						tmp7 = false;
					}
					HX_STACK_LINE(789)
					if ((tmp7)){
						HX_STACK_LINE(789)
						Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						_this->listen_z(tmp8);
					}
					HX_STACK_LINE(789)
					_this->z;
				}
			}
			HX_STACK_LINE(789)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(789)
			bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(789)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(789)
			if ((tmp5)){
				HX_STACK_LINE(789)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(789)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(789)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(789)
				tmp6 = false;
			}
			HX_STACK_LINE(789)
			if ((tmp6)){
				HX_STACK_LINE(789)
				Float tmp7 = _this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(789)
				_this->listen_x(tmp7);
			}
			HX_STACK_LINE(789)
			bool tmp7 = (_this->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(789)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(789)
			if ((tmp7)){
				HX_STACK_LINE(789)
				bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(789)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(789)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(789)
				tmp8 = false;
			}
			HX_STACK_LINE(789)
			if ((tmp8)){
				HX_STACK_LINE(789)
				Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(789)
				_this->listen_y(tmp9);
			}
			HX_STACK_LINE(789)
			bool tmp9 = (_this->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(789)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(789)
			if ((tmp9)){
				HX_STACK_LINE(789)
				bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(789)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(789)
				tmp10 = !(tmp12);
			}
			else{
				HX_STACK_LINE(789)
				tmp10 = false;
			}
			HX_STACK_LINE(789)
			if ((tmp10)){
				HX_STACK_LINE(789)
				Float tmp11 = _this->z;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(789)
				_this->listen_z(tmp11);
			}
			HX_STACK_LINE(789)
			_this;
		}
		HX_STACK_LINE(789)
		tmp = _this;
	}
	HX_STACK_LINE(789)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_obj,Radians,return )


Vector_obj::Vector_obj()
{
}

void Vector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vector);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lengthsq,"lengthsq");
	HX_MARK_MEMBER_NAME(angle2D,"angle2D");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(inverted,"inverted");
	HX_MARK_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_MARK_MEMBER_NAME(listen_x,"listen_x");
	HX_MARK_MEMBER_NAME(listen_y,"listen_y");
	HX_MARK_MEMBER_NAME(listen_z,"listen_z");
	HX_MARK_MEMBER_NAME(_construct,"_construct");
	HX_MARK_END_CLASS();
}

void Vector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lengthsq,"lengthsq");
	HX_VISIT_MEMBER_NAME(angle2D,"angle2D");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(inverted,"inverted");
	HX_VISIT_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_VISIT_MEMBER_NAME(listen_x,"listen_x");
	HX_VISIT_MEMBER_NAME(listen_y,"listen_y");
	HX_VISIT_MEMBER_NAME(listen_z,"listen_z");
	HX_VISIT_MEMBER_NAME(_construct,"_construct");
}

Dynamic Vector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"int_x") ) { return int_x_dyn(); }
		if (HX_FIELD_EQ(inName,"int_y") ) { return int_y_dyn(); }
		if (HX_FIELD_EQ(inName,"int_z") ) { return int_z_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"set_xy") ) { return set_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"divide") ) { return divide_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"angle2D") ) { return inCallProp == hx::paccAlways ? get_angle2D() : angle2D; }
		if (HX_FIELD_EQ(inName,"set_xyz") ) { return set_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp_xy") ) { return lerp_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"add_xyz") ) { return add_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"degrees") ) { return degrees_dyn(); }
		if (HX_FIELD_EQ(inName,"radians") ) { return radians_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lengthsq") ) { return inCallProp == hx::paccAlways ? get_lengthsq() : lengthsq; }
		if (HX_FIELD_EQ(inName,"inverted") ) { return inCallProp == hx::paccAlways ? get_inverted() : inverted; }
		if (HX_FIELD_EQ(inName,"listen_x") ) { return listen_x; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { return listen_y; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { return listen_z; }
		if (HX_FIELD_EQ(inName,"lerp_xyz") ) { return lerp_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"truncate") ) { return truncate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copy_from") ) { return copy_from_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"addScalar") ) { return addScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { return inCallProp == hx::paccAlways ? get_normalized() : normalized; }
		if (HX_FIELD_EQ(inName,"_construct") ) { return _construct; }
		if (HX_FIELD_EQ(inName,"divide_xyz") ) { return divide_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"rotationTo") ) { return rotationTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_angle2D") ) { return set_angle2D_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle2D") ) { return get_angle2D_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"subtract_xyz") ) { return subtract_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply_xyz") ) { return multiply_xyz_dyn(); }
		if (HX_FIELD_EQ(inName,"divideScalar") ) { return divideScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lengthsq") ) { return get_lengthsq_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inverted") ) { return get_inverted_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"subtractScalar") ) { return subtractScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyScalar") ) { return multiplyScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normalized") ) { return get_normalized_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyQuaternion") ) { return applyQuaternion_dyn(); }
		if (HX_FIELD_EQ(inName,"applyProjection") ) { return applyProjection_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { return ignore_listeners; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"transformDirection") ) { return transformDirection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"weighted_average_xy") ) { return weighted_average_xy_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"weighted_average_xyz") ) { return weighted_average_xyz_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setEulerFromQuaternion") ) { return setEulerFromQuaternion_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"setEulerFromRotationMatrix") ) { return setEulerFromRotationMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { outValue = Add_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Cross") ) { outValue = Cross_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Divide") ) { outValue = Divide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Listen") ) { outValue = Listen_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Degrees") ) { outValue = Degrees_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Radians") ) { outValue = Radians_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Subtract") ) { outValue = Subtract_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Multiply") ) { outValue = Multiply_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"AddScalar") ) { outValue = AddScalar_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RotationTo") ) { outValue = RotationTo_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DivideVector") ) { outValue = DivideVector_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MultiplyVector") ) { outValue = MultiplyVector_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"SubtractScalar") ) { outValue = SubtractScalar_dyn(); return true;  }
	}
	return false;
}

Dynamic Vector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return set_z(inValue);z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue);length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"angle2D") ) { if (inCallProp == hx::paccAlways) return set_angle2D(inValue);angle2D=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lengthsq") ) { lengthsq=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inverted") ) { inverted=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_x") ) { listen_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { listen_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { listen_z=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_construct") ) { _construct=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { ignore_listeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Vector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthsq","\x04","\x7f","\xc3","\x1f"));
	outFields->push(HX_HCSTRING("angle2D","\x65","\x4a","\xd9","\x52"));
	outFields->push(HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"));
	outFields->push(HX_HCSTRING("inverted","\xf5","\xb0","\x31","\xf5"));
	outFields->push(HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"));
	outFields->push(HX_HCSTRING("_construct","\xd8","\xd3","\x4f","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Vector_obj,lengthsq),HX_HCSTRING("lengthsq","\x04","\x7f","\xc3","\x1f")},
	{hx::fsFloat,(int)offsetof(Vector_obj,angle2D),HX_HCSTRING("angle2D","\x65","\x4a","\xd9","\x52")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vector_obj,normalized),HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vector_obj,inverted),HX_HCSTRING("inverted","\xf5","\xb0","\x31","\xf5")},
	{hx::fsBool,(int)offsetof(Vector_obj,ignore_listeners),HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_x),HX_HCSTRING("listen_x","\x40","\xfb","\x31","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_y),HX_HCSTRING("listen_y","\x41","\xfb","\x31","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Vector_obj,listen_z),HX_HCSTRING("listen_z","\x42","\xfb","\x31","\x38")},
	{hx::fsBool,(int)offsetof(Vector_obj,_construct),HX_HCSTRING("_construct","\xd8","\xd3","\x4f","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("lengthsq","\x04","\x7f","\xc3","\x1f"),
	HX_HCSTRING("angle2D","\x65","\x4a","\xd9","\x52"),
	HX_HCSTRING("normalized","\x37","\x64","\x6f","\x81"),
	HX_HCSTRING("inverted","\xf5","\xb0","\x31","\xf5"),
	HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"),
	HX_HCSTRING("listen_x","\x40","\xfb","\x31","\x38"),
	HX_HCSTRING("listen_y","\x41","\xfb","\x31","\x38"),
	HX_HCSTRING("listen_z","\x42","\xfb","\x31","\x38"),
	HX_HCSTRING("_construct","\xd8","\xd3","\x4f","\xab"),
	HX_HCSTRING("copy_from","\x74","\x75","\xa1","\xe9"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_xy","\xbe","\x54","\x78","\x6f"),
	HX_HCSTRING("set_xyz","\xfc","\xd1","\xd1","\x19"),
	HX_HCSTRING("lerp_xy","\x09","\x11","\x18","\xdb"),
	HX_HCSTRING("lerp_xyz","\x51","\xd7","\xf6","\xd9"),
	HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"),
	HX_HCSTRING("weighted_average_xy","\x8b","\xac","\xca","\xbe"),
	HX_HCSTRING("weighted_average_xyz","\x8f","\x4d","\x8c","\x32"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("int_x","\xe8","\xb9","\x20","\xbe"),
	HX_HCSTRING("int_y","\xe9","\xb9","\x20","\xbe"),
	HX_HCSTRING("int_z","\xea","\xb9","\x20","\xbe"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("dot","\x89","\x42","\x4c","\x00"),
	HX_HCSTRING("cross","\x80","\x5f","\x5a","\x4c"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("add_xyz","\xfb","\xd3","\x8a","\x90"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("subtract_xyz","\x6e","\x4c","\x9a","\x79"),
	HX_HCSTRING("multiply","\x24","\xe2","\x8c","\x9a"),
	HX_HCSTRING("multiply_xyz","\x7e","\x81","\x39","\x59"),
	HX_HCSTRING("divide","\x79","\x2f","\x12","\xbf"),
	HX_HCSTRING("divide_xyz","\x53","\x9d","\xf8","\x6f"),
	HX_HCSTRING("addScalar","\x2d","\x1c","\x4a","\xf4"),
	HX_HCSTRING("subtractScalar","\x60","\xd7","\x7e","\xda"),
	HX_HCSTRING("multiplyScalar","\x70","\x70","\x21","\x48"),
	HX_HCSTRING("divideScalar","\x85","\xeb","\xbe","\xe1"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_lengthsq","\x0d","\x33","\xdd","\xd4"),
	HX_HCSTRING("get_normalized","\x80","\xec","\x64","\xf7"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_z","\x5d","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_inverted","\xfe","\x64","\x4b","\xaa"),
	HX_HCSTRING("set_angle2D","\x88","\xb1","\x40","\xe3"),
	HX_HCSTRING("get_angle2D","\x7c","\xaa","\xd3","\xd8"),
	HX_HCSTRING("truncate","\x66","\xbe","\xf9","\xce"),
	HX_HCSTRING("rotationTo","\x59","\xd2","\x7e","\xe4"),
	HX_HCSTRING("applyQuaternion","\x2c","\xec","\xc0","\xdb"),
	HX_HCSTRING("applyProjection","\x9d","\x67","\x82","\x84"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("transformDirection","\x33","\x07","\x9d","\xd8"),
	HX_HCSTRING("setEulerFromRotationMatrix","\x70","\x95","\x33","\x04"),
	HX_HCSTRING("setEulerFromQuaternion","\xef","\xfb","\xcd","\x5c"),
	HX_HCSTRING("degrees","\xa7","\xe3","\x5a","\x3a"),
	HX_HCSTRING("radians","\x72","\x46","\xf0","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_obj::__mClass,"__mClass");
};

#endif

hx::Class Vector_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("Subtract","\x34","\x31","\xc3","\xd1"),
	HX_HCSTRING("MultiplyVector","\x27","\xce","\xae","\x4d"),
	HX_HCSTRING("DivideVector","\x3c","\x01","\x09","\x05"),
	HX_HCSTRING("Multiply","\x44","\x9e","\x3e","\x74"),
	HX_HCSTRING("Divide","\x99","\xa3","\xa6","\xf3"),
	HX_HCSTRING("AddScalar","\x0d","\xfc","\x1c","\x96"),
	HX_HCSTRING("SubtractScalar","\x80","\x6b","\xd4","\x84"),
	HX_HCSTRING("Cross","\x60","\xcf","\x87","\xdf"),
	HX_HCSTRING("RotationTo","\x79","\xd6","\x2f","\xdb"),
	HX_HCSTRING("Listen","\x67","\x3c","\x8e","\x24"),
	HX_HCSTRING("Degrees","\x87","\x0b","\xac","\x07"),
	HX_HCSTRING("Radians","\x52","\x6e","\x41","\xf4"),
	::String(null()) };

void Vector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Vector","\xe2","\xdb","\x3e","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_obj::__GetStatic;
	__mClass->mSetStaticField = &Vector_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector_obj >;
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
