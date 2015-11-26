#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_utils_Maths
#include <luxe/utils/Maths.h>
#endif
namespace luxe{
namespace utils{

Void Maths_obj::__construct()
{
HX_STACK_FRAME("luxe.utils.Maths","new",0x8e0da6c8,"luxe.utils.Maths.new","luxe/utils/Maths.hx",7,0x6644526a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Maths_obj::~Maths_obj() { }

Dynamic Maths_obj::__CreateEmpty() { return  new Maths_obj; }
hx::ObjectPtr< Maths_obj > Maths_obj::__new()
{  hx::ObjectPtr< Maths_obj > _result_ = new Maths_obj();
	_result_->__construct();
	return _result_;}

Dynamic Maths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Maths_obj > _result_ = new Maths_obj();
	_result_->__construct();
	return _result_;}

Float Maths_obj::fixed( Float value,int precision){
	HX_STACK_FRAME("luxe.utils.Maths","fixed",0xd14c39dc,"luxe.utils.Maths.fixed","luxe/utils/Maths.hx",9,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_LINE(11)
	int tmp = precision;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Float tmp1 = ::Math_obj::pow((int)10,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	Float n = tmp1;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(12)
	Float tmp2 = (value * n);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(12)
	Float tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(12)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(12)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Maths_obj,fixed,return )

Float Maths_obj::lerp( Float value,Float target,Float t){
	HX_STACK_FRAME("luxe.utils.Maths","lerp",0xbc91d70f,"luxe.utils.Maths.lerp","luxe/utils/Maths.hx",16,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(18)
	bool tmp = (t < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	if ((tmp)){
		HX_STACK_LINE(18)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(18)
		bool tmp2 = (t > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		if ((tmp2)){
			HX_STACK_LINE(18)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(18)
			tmp1 = t;
		}
	}
	HX_STACK_LINE(18)
	t = tmp1;
	HX_STACK_LINE(20)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	Float tmp4 = (target - value);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(20)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(20)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,lerp,return )

Float Maths_obj::weighted_avg( Float value,Float target,Float slowness){
	HX_STACK_FRAME("luxe.utils.Maths","weighted_avg",0x406fb2c2,"luxe.utils.Maths.weighted_avg","luxe/utils/Maths.hx",24,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(slowness,"slowness")
	HX_STACK_LINE(27)
	bool tmp = (slowness == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	if ((tmp)){
		HX_STACK_LINE(27)
		slowness = ((Float)0.00000001);
	}
	HX_STACK_LINE(29)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Float tmp2 = (slowness - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	Float tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	Float tmp6 = slowness;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,weighted_avg,return )

Float Maths_obj::clamp( Float value,Float a,Float b){
	HX_STACK_FRAME("luxe.utils.Maths","clamp",0x1902b363,"luxe.utils.Maths.clamp","luxe/utils/Maths.hx",33,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(34)
	bool tmp = (value < a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	if ((tmp)){
		HX_STACK_LINE(34)
		tmp1 = a;
	}
	else{
		HX_STACK_LINE(34)
		bool tmp2 = (value > b);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		if ((tmp2)){
			HX_STACK_LINE(34)
			tmp1 = b;
		}
		else{
			HX_STACK_LINE(34)
			tmp1 = value;
		}
	}
	HX_STACK_LINE(34)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,clamp,return )

int Maths_obj::clampi( int value,int a,int b){
	HX_STACK_FRAME("luxe.utils.Maths","clampi",0xc95a43a6,"luxe.utils.Maths.clampi","luxe/utils/Maths.hx",37,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(38)
	bool tmp = (value < a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	if ((tmp)){
		HX_STACK_LINE(38)
		tmp1 = a;
	}
	else{
		HX_STACK_LINE(38)
		bool tmp2 = (value > b);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		if ((tmp2)){
			HX_STACK_LINE(38)
			tmp1 = b;
		}
		else{
			HX_STACK_LINE(38)
			tmp1 = value;
		}
	}
	HX_STACK_LINE(38)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,clampi,return )

Float Maths_obj::clamp_bottom( Float value,Float a){
	HX_STACK_FRAME("luxe.utils.Maths","clamp_bottom",0x237bc787,"luxe.utils.Maths.clamp_bottom","luxe/utils/Maths.hx",41,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(42)
	bool tmp = (value < a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	if ((tmp)){
		HX_STACK_LINE(42)
		tmp1 = a;
	}
	else{
		HX_STACK_LINE(42)
		tmp1 = value;
	}
	HX_STACK_LINE(42)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Maths_obj,clamp_bottom,return )

bool Maths_obj::within_range( Float value,Float start_range,Float end_range){
	HX_STACK_FRAME("luxe.utils.Maths","within_range",0x4493cb41,"luxe.utils.Maths.within_range","luxe/utils/Maths.hx",45,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(start_range,"start_range")
	HX_STACK_ARG(end_range,"end_range")
	HX_STACK_LINE(46)
	bool tmp = (value >= start_range);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(46)
		tmp1 = (value <= end_range);
	}
	else{
		HX_STACK_LINE(46)
		tmp1 = false;
	}
	HX_STACK_LINE(46)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,within_range,return )

Float Maths_obj::wrap_angle( Float degrees,Float lower,Float upper){
	HX_STACK_FRAME("luxe.utils.Maths","wrap_angle",0x41b47ef6,"luxe.utils.Maths.wrap_angle","luxe/utils/Maths.hx",49,0x6644526a)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_ARG(lower,"lower")
	HX_STACK_ARG(upper,"upper")
	HX_STACK_LINE(51)
	Float tmp = (degrees * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Float _radians = tmp;		HX_STACK_VAR(_radians,"_radians");
	HX_STACK_LINE(52)
	Float tmp1 = (upper - lower);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	Float _distance = tmp1;		HX_STACK_VAR(_distance,"_distance");
	HX_STACK_LINE(53)
	Float tmp2 = (degrees - lower);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	Float tmp3 = _distance;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	Float _times = tmp5;		HX_STACK_VAR(_times,"_times");
	HX_STACK_LINE(55)
	Float tmp6 = degrees;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	Float tmp7 = (_times * _distance);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(55)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(55)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,wrap_angle,return )

int Maths_obj::nearest_power_of_two( int _value){
	HX_STACK_FRAME("luxe.utils.Maths","nearest_power_of_two",0xd8e2f7b7,"luxe.utils.Maths.nearest_power_of_two","luxe/utils/Maths.hx",59,0x6644526a)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(61)
	(_value)--;
	HX_STACK_LINE(62)
	int tmp = (int(_value) >> int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	hx::OrEq(_value,tmp);
	HX_STACK_LINE(63)
	int tmp1 = (int(_value) >> int((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	hx::OrEq(_value,tmp1);
	HX_STACK_LINE(64)
	int tmp2 = (int(_value) >> int((int)4));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	hx::OrEq(_value,tmp2);
	HX_STACK_LINE(65)
	int tmp3 = (int(_value) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	hx::OrEq(_value,tmp3);
	HX_STACK_LINE(66)
	int tmp4 = (int(_value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	hx::OrEq(_value,tmp4);
	HX_STACK_LINE(67)
	(_value)++;
	HX_STACK_LINE(69)
	int tmp5 = _value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(69)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,nearest_power_of_two,return )

Float Maths_obj::map_linear( Float value,Float a1,Float a2,Float b1,Float b2){
	HX_STACK_FRAME("luxe.utils.Maths","map_linear",0x21a26b00,"luxe.utils.Maths.map_linear","luxe/utils/Maths.hx",73,0x6644526a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(a1,"a1")
	HX_STACK_ARG(a2,"a2")
	HX_STACK_ARG(b1,"b1")
	HX_STACK_ARG(b2,"b2")
	HX_STACK_LINE(74)
	Float tmp = b1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Float tmp1 = (value - a1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	Float tmp2 = (b2 - b1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	Float tmp4 = (a2 - a1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(74)
	Float tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(74)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Maths_obj,map_linear,return )

Float Maths_obj::smoothstep( Float x,Float min,Float max){
	HX_STACK_FRAME("luxe.utils.Maths","smoothstep",0x89a4e512,"luxe.utils.Maths.smoothstep","luxe/utils/Maths.hx",77,0x6644526a)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(79)
	bool tmp = (x <= min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	if ((tmp)){
		HX_STACK_LINE(80)
		return (int)0;
	}
	HX_STACK_LINE(83)
	bool tmp1 = (x >= max);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	if ((tmp1)){
		HX_STACK_LINE(84)
		return (int)1;
	}
	HX_STACK_LINE(87)
	Float tmp2 = (x - min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	Float tmp3 = (max - min);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	x = tmp4;
	HX_STACK_LINE(89)
	Float tmp5 = (x * x);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	Float tmp6 = ((int)2 * x);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(89)
	Float tmp7 = ((int)3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(89)
	Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(89)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,smoothstep,return )

Float Maths_obj::smootherstep( Float x,Float min,Float max){
	HX_STACK_FRAME("luxe.utils.Maths","smootherstep",0x31edf57f,"luxe.utils.Maths.smootherstep","luxe/utils/Maths.hx",93,0x6644526a)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(95)
	bool tmp = (x <= min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	if ((tmp)){
		HX_STACK_LINE(96)
		return (int)0;
	}
	HX_STACK_LINE(99)
	bool tmp1 = (x >= max);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	if ((tmp1)){
		HX_STACK_LINE(100)
		return (int)1;
	}
	HX_STACK_LINE(103)
	Float tmp2 = (x - min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	Float tmp3 = (max - min);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	x = tmp4;
	HX_STACK_LINE(105)
	Float tmp5 = (x * x);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(105)
	Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(105)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(105)
	Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(105)
	Float tmp9 = (x * (int)6);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(105)
	Float tmp10 = (tmp9 - (int)15);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(105)
	Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(105)
	Float tmp12 = (tmp11 + (int)10);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(105)
	Float tmp13 = (tmp7 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(105)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Maths_obj,smootherstep,return )

int Maths_obj::sign( Float x){
	HX_STACK_FRAME("luxe.utils.Maths","sign",0xc13554d5,"luxe.utils.Maths.sign","luxe/utils/Maths.hx",110,0x6644526a)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(111)
	bool tmp = (x >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	if ((tmp)){
		HX_STACK_LINE(111)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(111)
		tmp1 = (int)-1;
	}
	HX_STACK_LINE(111)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,sign,return )

int Maths_obj::sign0( Float x){
	HX_STACK_FRAME("luxe.utils.Maths","sign0",0x4d74e5bb,"luxe.utils.Maths.sign0","luxe/utils/Maths.hx",115,0x6644526a)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(116)
	bool tmp = (x < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	if ((tmp)){
		HX_STACK_LINE(116)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(116)
		bool tmp2 = (x > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		if ((tmp2)){
			HX_STACK_LINE(116)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(116)
			tmp1 = (int)0;
		}
	}
	HX_STACK_LINE(116)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,sign0,return )

Float Maths_obj::radians( Float degrees){
	HX_STACK_FRAME("luxe.utils.Maths","radians",0x26f970da,"luxe.utils.Maths.radians","luxe/utils/Maths.hx",120,0x6644526a)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(121)
	Float tmp = (degrees * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,radians,return )

Float Maths_obj::degrees( Float radians){
	HX_STACK_FRAME("luxe.utils.Maths","degrees",0x3a640e0f,"luxe.utils.Maths.degrees","luxe/utils/Maths.hx",125,0x6644526a)
	HX_STACK_ARG(radians,"radians")
	HX_STACK_LINE(126)
	Float tmp = (radians * ((Float)57.2957795130823797));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Maths_obj,degrees,return )

Float Maths_obj::_PI_OVER_180;

Float Maths_obj::_180_OVER_PI;


Maths_obj::Maths_obj()
{
}

bool Maths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { outValue = lerp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sign") ) { outValue = sign_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { outValue = fixed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sign0") ) { outValue = sign0_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clampi") ) { outValue = clampi_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"radians") ) { outValue = radians_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"degrees") ) { outValue = degrees_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_angle") ) { outValue = wrap_angle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"map_linear") ) { outValue = map_linear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"smoothstep") ) { outValue = smoothstep_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weighted_avg") ) { outValue = weighted_avg_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clamp_bottom") ) { outValue = clamp_bottom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"within_range") ) { outValue = within_range_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"smootherstep") ) { outValue = smootherstep_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nearest_power_of_two") ) { outValue = nearest_power_of_two_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Maths_obj::_PI_OVER_180,HX_HCSTRING("_PI_OVER_180","\x05","\x90","\x90","\x73")},
	{hx::fsFloat,(void *) &Maths_obj::_180_OVER_PI,HX_HCSTRING("_180_OVER_PI","\x2f","\x07","\xd5","\x10")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Maths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Maths_obj::_PI_OVER_180,"_PI_OVER_180");
	HX_MARK_MEMBER_NAME(Maths_obj::_180_OVER_PI,"_180_OVER_PI");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Maths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Maths_obj::_PI_OVER_180,"_PI_OVER_180");
	HX_VISIT_MEMBER_NAME(Maths_obj::_180_OVER_PI,"_180_OVER_PI");
};

#endif

hx::Class Maths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"),
	HX_HCSTRING("weighted_avg","\x2a","\x96","\xd3","\x6e"),
	HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48"),
	HX_HCSTRING("clampi","\x0e","\x29","\x0c","\x05"),
	HX_HCSTRING("clamp_bottom","\xef","\xaa","\xdf","\x51"),
	HX_HCSTRING("within_range","\xa9","\xae","\xf7","\x72"),
	HX_HCSTRING("wrap_angle","\x5e","\x38","\x69","\x4e"),
	HX_HCSTRING("nearest_power_of_two","\x1f","\x83","\x74","\x64"),
	HX_HCSTRING("map_linear","\x68","\x24","\x57","\x2e"),
	HX_HCSTRING("smoothstep","\x7a","\x9e","\x59","\x96"),
	HX_HCSTRING("smootherstep","\xe7","\xd8","\x51","\x60"),
	HX_HCSTRING("sign","\x3d","\x90","\x53","\x4c"),
	HX_HCSTRING("sign0","\x53","\xa5","\xca","\x7c"),
	HX_HCSTRING("radians","\x72","\x46","\xf0","\x26"),
	HX_HCSTRING("degrees","\xa7","\xe3","\x5a","\x3a"),
	HX_HCSTRING("_PI_OVER_180","\x05","\x90","\x90","\x73"),
	HX_HCSTRING("_180_OVER_PI","\x2f","\x07","\xd5","\x10"),
	::String(null()) };

void Maths_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.Maths","\xd6","\xe2","\x78","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Maths_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Maths_obj >;
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

void Maths_obj::__boot()
{
	_PI_OVER_180= ((Float)0.0174532925199432781);
	_180_OVER_PI= ((Float)57.2957795130823797);
}

} // end namespace luxe
} // end namespace utils
