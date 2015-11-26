#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Rectangle_obj::__construct(Dynamic __o__x,Dynamic __o__y,Dynamic __o__w,Dynamic __o__h)
{
HX_STACK_FRAME("phoenix.Rectangle","new",0x7f8dbf62,"phoenix.Rectangle.new","phoenix/Rectangle.hx",4,0x42e13fcf)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__x,"_x")
HX_STACK_ARG(__o__y,"_y")
HX_STACK_ARG(__o__w,"_w")
HX_STACK_ARG(__o__h,"_h")
Dynamic _x = __o__x.Default(0);
Dynamic _y = __o__y.Default(0);
Dynamic _w = __o__w.Default(0);
Dynamic _h = __o__h.Default(0);
{
	HX_STACK_LINE(11)
	this->ignore_listeners = false;
	HX_STACK_LINE(9)
	this->h = ((Float)0);
	HX_STACK_LINE(8)
	this->w = ((Float)0);
	HX_STACK_LINE(7)
	this->y = ((Float)0);
	HX_STACK_LINE(6)
	this->x = ((Float)0);
	HX_STACK_LINE(20)
	Dynamic tmp = _x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	this->set_x(tmp);
	HX_STACK_LINE(21)
	Dynamic tmp1 = _y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	this->set_y(tmp1);
	HX_STACK_LINE(22)
	Dynamic tmp2 = _w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	this->set_w(tmp2);
	HX_STACK_LINE(23)
	Dynamic tmp3 = _h;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	this->set_h(tmp3);
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(Dynamic __o__x,Dynamic __o__y,Dynamic __o__w,Dynamic __o__h)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(__o__x,__o__y,__o__w,__o__h);
	return _result_;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String Rectangle_obj::toString( ){
	HX_STACK_FRAME("phoenix.Rectangle","toString",0x02893a6a,"phoenix.Rectangle.toString","phoenix/Rectangle.hx",27,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::String tmp1 = (HX_HCSTRING("{ x:","\x47","\xef","\x65","\x51") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	::String tmp2 = (tmp1 + HX_HCSTRING(", y:","\x15","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	::String tmp5 = (tmp4 + HX_HCSTRING(", w:","\x57","\x13","\x2e","\x1d"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	Float tmp6 = this->w;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	::String tmp8 = (tmp7 + HX_HCSTRING(", h:","\x46","\x06","\x2e","\x1d"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	Float tmp9 = this->h;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(29)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(29)
	::String tmp11 = (tmp10 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(29)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )

bool Rectangle_obj::point_inside( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.Rectangle","point_inside",0x75cee809,"phoenix.Rectangle.point_inside","phoenix/Rectangle.hx",40,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(42)
	Float tmp = _p->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	if ((tmp2)){
		HX_STACK_LINE(42)
		return false;
	}
	HX_STACK_LINE(43)
	Float tmp3 = _p->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	if ((tmp5)){
		HX_STACK_LINE(43)
		return false;
	}
	HX_STACK_LINE(44)
	Float tmp6 = _p->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(44)
	bool tmp10 = (tmp6 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(44)
	if ((tmp10)){
		HX_STACK_LINE(44)
		return false;
	}
	HX_STACK_LINE(45)
	Float tmp11 = _p->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(45)
	Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(45)
	Float tmp13 = this->h;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(45)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(45)
	bool tmp15 = (tmp11 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(45)
	if ((tmp15)){
		HX_STACK_LINE(45)
		return false;
	}
	HX_STACK_LINE(47)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,point_inside,return )

bool Rectangle_obj::overlaps( ::phoenix::Rectangle _other){
	HX_STACK_FRAME("phoenix.Rectangle","overlaps",0x0f453cca,"phoenix.Rectangle.overlaps","phoenix/Rectangle.hx",51,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_other,"_other")
	HX_STACK_LINE(53)
	bool tmp = (_other == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	if ((tmp)){
		HX_STACK_LINE(54)
		return false;
	}
	HX_STACK_LINE(58)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	Float tmp2 = (_other->x + _other->w);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	if ((tmp4)){
		HX_STACK_LINE(59)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		Float tmp9 = (_other->y + _other->h);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(59)
		tmp5 = (tmp8 < tmp11);
	}
	else{
		HX_STACK_LINE(58)
		tmp5 = false;
	}
	HX_STACK_LINE(58)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(58)
	if ((tmp6)){
		HX_STACK_LINE(60)
		Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(60)
		Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(60)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(60)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(60)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(60)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(60)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(60)
		Float tmp17 = _other->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(60)
		tmp7 = (tmp16 > tmp17);
	}
	else{
		HX_STACK_LINE(58)
		tmp7 = false;
	}
	HX_STACK_LINE(58)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(58)
	if ((tmp7)){
		HX_STACK_LINE(61)
		Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		Float tmp11 = this->h;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		Float tmp15 = _other->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(61)
		tmp8 = (tmp14 > tmp15);
	}
	else{
		HX_STACK_LINE(58)
		tmp8 = false;
	}
	HX_STACK_LINE(58)
	if ((tmp8)){
		HX_STACK_LINE(63)
		return true;
	}
	HX_STACK_LINE(66)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,overlaps,return )

::phoenix::Rectangle Rectangle_obj::clone( ){
	HX_STACK_FRAME("phoenix.Rectangle","clone",0x7d3846df,"phoenix.Rectangle.clone","phoenix/Rectangle.hx",69,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	Float tmp2 = this->w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	Float tmp3 = this->h;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	::phoenix::Rectangle tmp4 = ::phoenix::Rectangle_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::equal( ::phoenix::Rectangle _other){
	HX_STACK_FRAME("phoenix.Rectangle","equal",0xa7580336,"phoenix.Rectangle.equal","phoenix/Rectangle.hx",76,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_other,"_other")
	HX_STACK_LINE(78)
	bool tmp = (_other == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	if ((tmp)){
		HX_STACK_LINE(79)
		return false;
	}
	HX_STACK_LINE(82)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	Float tmp2 = _other->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(82)
	if ((tmp4)){
		HX_STACK_LINE(82)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		Float tmp9 = _other->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		tmp5 = (tmp8 == tmp9);
	}
	else{
		HX_STACK_LINE(82)
		tmp5 = false;
	}
	HX_STACK_LINE(82)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(82)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(82)
	if ((tmp6)){
		HX_STACK_LINE(82)
		Float tmp8 = this->w;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		Float tmp11 = _other->w;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		tmp7 = (tmp10 == tmp11);
	}
	else{
		HX_STACK_LINE(82)
		tmp7 = false;
	}
	HX_STACK_LINE(82)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(82)
	if ((tmp7)){
		HX_STACK_LINE(82)
		Float tmp9 = this->h;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		Float tmp11 = _other->h;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		tmp8 = (tmp10 == tmp11);
	}
	else{
		HX_STACK_LINE(82)
		tmp8 = false;
	}
	HX_STACK_LINE(82)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equal,return )

Void Rectangle_obj::copy_from( ::phoenix::Rectangle _rect){
{
		HX_STACK_FRAME("phoenix.Rectangle","copy_from",0xf6a391f6,"phoenix.Rectangle.copy_from","phoenix/Rectangle.hx",86,0x42e13fcf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rect,"_rect")
		HX_STACK_LINE(88)
		Float tmp = _rect->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		this->set_x(tmp);
		HX_STACK_LINE(89)
		Float tmp1 = _rect->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		this->set_y(tmp1);
		HX_STACK_LINE(90)
		Float tmp2 = _rect->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		this->set_w(tmp2);
		HX_STACK_LINE(91)
		Float tmp3 = _rect->h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		this->set_h(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copy_from,(void))

::phoenix::Rectangle Rectangle_obj::set( Dynamic _x,Dynamic _y,Dynamic _w,Dynamic _h){
	HX_STACK_FRAME("phoenix.Rectangle","set",0x7f918aa4,"phoenix.Rectangle.set","phoenix/Rectangle.hx",95,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_ARG(_h,"_h")
	HX_STACK_LINE(97)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	Float _setx = tmp;		HX_STACK_VAR(_setx,"_setx");
	HX_STACK_LINE(98)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	Float _sety = tmp1;		HX_STACK_VAR(_sety,"_sety");
	HX_STACK_LINE(99)
	Float tmp2 = this->w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	Float _setw = tmp2;		HX_STACK_VAR(_setw,"_setw");
	HX_STACK_LINE(100)
	Float tmp3 = this->h;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	Float _seth = tmp3;		HX_STACK_VAR(_seth,"_seth");
	HX_STACK_LINE(103)
	bool tmp4 = (_x != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	if ((tmp4)){
		HX_STACK_LINE(103)
		_setx = _x;
	}
	HX_STACK_LINE(104)
	bool tmp5 = (_y != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	if ((tmp5)){
		HX_STACK_LINE(104)
		_sety = _y;
	}
	HX_STACK_LINE(105)
	bool tmp6 = (_w != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(105)
	if ((tmp6)){
		HX_STACK_LINE(105)
		_setw = _w;
	}
	HX_STACK_LINE(106)
	bool tmp7 = (_h != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(106)
	if ((tmp7)){
		HX_STACK_LINE(106)
		_seth = _h;
	}
	HX_STACK_LINE(108)
	Float tmp8 = _setx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(108)
	this->set_x(tmp8);
	HX_STACK_LINE(109)
	Float tmp9 = _sety;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(109)
	this->set_y(tmp9);
	HX_STACK_LINE(110)
	Float tmp10 = _setw;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(110)
	this->set_w(tmp10);
	HX_STACK_LINE(111)
	Float tmp11 = _seth;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(111)
	this->set_h(tmp11);
	HX_STACK_LINE(113)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,set,return )

Float Rectangle_obj::set_x( Float _x){
	HX_STACK_FRAME("phoenix.Rectangle","set_x",0xaf04cedd,"phoenix.Rectangle.set_x","phoenix/Rectangle.hx",117,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(119)
	this->x = _x;
	HX_STACK_LINE(121)
	Dynamic tmp = this->listen_x_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	if ((tmp1)){
		HX_STACK_LINE(121)
		bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(121)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(121)
		tmp2 = false;
	}
	HX_STACK_LINE(121)
	if ((tmp2)){
		HX_STACK_LINE(122)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		this->listen_x(tmp3);
	}
	HX_STACK_LINE(125)
	Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_x,return )

Float Rectangle_obj::set_y( Float _y){
	HX_STACK_FRAME("phoenix.Rectangle","set_y",0xaf04cede,"phoenix.Rectangle.set_y","phoenix/Rectangle.hx",129,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(131)
	this->y = _y;
	HX_STACK_LINE(133)
	Dynamic tmp = this->listen_y_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	if ((tmp1)){
		HX_STACK_LINE(133)
		bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(133)
		tmp2 = false;
	}
	HX_STACK_LINE(133)
	if ((tmp2)){
		HX_STACK_LINE(134)
		Float tmp3 = _y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		this->listen_y(tmp3);
	}
	HX_STACK_LINE(137)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_y,return )

Float Rectangle_obj::set_w( Float _w){
	HX_STACK_FRAME("phoenix.Rectangle","set_w",0xaf04cedc,"phoenix.Rectangle.set_w","phoenix/Rectangle.hx",141,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_w,"_w")
	HX_STACK_LINE(143)
	this->w = _w;
	HX_STACK_LINE(145)
	Dynamic tmp = this->listen_w_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	if ((tmp1)){
		HX_STACK_LINE(145)
		bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(145)
		tmp2 = false;
	}
	HX_STACK_LINE(145)
	if ((tmp2)){
		HX_STACK_LINE(146)
		Float tmp3 = _w;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		this->listen_w(tmp3);
	}
	HX_STACK_LINE(149)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_w,return )

Float Rectangle_obj::set_h( Float _h){
	HX_STACK_FRAME("phoenix.Rectangle","set_h",0xaf04cecd,"phoenix.Rectangle.set_h","phoenix/Rectangle.hx",153,0x42e13fcf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_h,"_h")
	HX_STACK_LINE(155)
	this->h = _h;
	HX_STACK_LINE(157)
	Dynamic tmp = this->listen_h_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	if ((tmp1)){
		HX_STACK_LINE(157)
		bool tmp3 = this->ignore_listeners;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(157)
		tmp2 = false;
	}
	HX_STACK_LINE(157)
	if ((tmp2)){
		HX_STACK_LINE(158)
		Float tmp3 = _h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		this->listen_h(tmp3);
	}
	HX_STACK_LINE(161)
	Float tmp3 = this->h;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_h,return )

Void Rectangle_obj::listen( ::phoenix::Rectangle _r,Dynamic listener){
{
		HX_STACK_FRAME("phoenix.Rectangle","listen",0xf5b1a685,"phoenix.Rectangle.listen","phoenix/Rectangle.hx",33,0x42e13fcf)
		HX_STACK_ARG(_r,"_r")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(34)
		_r->listen_x = listener;
		HX_STACK_LINE(35)
		_r->listen_y = listener;
		HX_STACK_LINE(36)
		_r->listen_w = listener;
		HX_STACK_LINE(37)
		_r->listen_h = listener;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,listen,(void))


Rectangle_obj::Rectangle_obj()
{
}

void Rectangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rectangle);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_MARK_MEMBER_NAME(listen_x,"listen_x");
	HX_MARK_MEMBER_NAME(listen_y,"listen_y");
	HX_MARK_MEMBER_NAME(listen_w,"listen_w");
	HX_MARK_MEMBER_NAME(listen_h,"listen_h");
	HX_MARK_END_CLASS();
}

void Rectangle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_VISIT_MEMBER_NAME(listen_x,"listen_x");
	HX_VISIT_MEMBER_NAME(listen_y,"listen_y");
	HX_VISIT_MEMBER_NAME(listen_w,"listen_w");
	HX_VISIT_MEMBER_NAME(listen_h,"listen_h");
}

Dynamic Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return set_w_dyn(); }
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listen_x") ) { return listen_x; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { return listen_y; }
		if (HX_FIELD_EQ(inName,"listen_w") ) { return listen_w; }
		if (HX_FIELD_EQ(inName,"listen_h") ) { return listen_h; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copy_from") ) { return copy_from_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { return ignore_listeners; }
	}
	return super::__Field(inName,inCallProp);
}

bool Rectangle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { outValue = listen_dyn(); return true;  }
	}
	return false;
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == hx::paccAlways) return set_w(inValue);w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { if (inCallProp == hx::paccAlways) return set_h(inValue);h=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listen_x") ) { listen_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { listen_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_w") ) { listen_w=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_h") ) { listen_h=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { ignore_listeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Rectangle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Rectangle_obj,ignore_listeners),HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Rectangle_obj,listen_x),HX_HCSTRING("listen_x","\x40","\xfb","\x31","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Rectangle_obj,listen_y),HX_HCSTRING("listen_y","\x41","\xfb","\x31","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Rectangle_obj,listen_w),HX_HCSTRING("listen_w","\x3f","\xfb","\x31","\x38")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Rectangle_obj,listen_h),HX_HCSTRING("listen_h","\x30","\xfb","\x31","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("ignore_listeners","\xd2","\x64","\x1e","\xf7"),
	HX_HCSTRING("listen_x","\x40","\xfb","\x31","\x38"),
	HX_HCSTRING("listen_y","\x41","\xfb","\x31","\x38"),
	HX_HCSTRING("listen_w","\x3f","\xfb","\x31","\x38"),
	HX_HCSTRING("listen_h","\x30","\xfb","\x31","\x38"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("point_inside","\x4b","\xc7","\xa9","\x1d"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("copy_from","\x74","\x75","\xa1","\xe9"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_w","\x5a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_h","\x4b","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

hx::Class Rectangle_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	::String(null()) };

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Rectangle","\x70","\x26","\xe6","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Rectangle_obj::__GetStatic;
	__mClass->mSetStaticField = &Rectangle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
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
