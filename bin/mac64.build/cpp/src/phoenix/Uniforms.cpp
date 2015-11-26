#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Uniform
#include <phoenix/Uniform.h>
#endif
#ifndef INCLUDED_phoenix_Uniforms
#include <phoenix/Uniforms.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
namespace phoenix{

Void Uniforms_obj::__construct()
{
HX_STACK_FRAME("phoenix.Uniforms","new",0x539c0590,"phoenix.Uniforms.new","phoenix/Shader.hx",46,0x14ec92d9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(46)
	this->clear();
}
;
	return null();
}

//Uniforms_obj::~Uniforms_obj() { }

Dynamic Uniforms_obj::__CreateEmpty() { return  new Uniforms_obj; }
hx::ObjectPtr< Uniforms_obj > Uniforms_obj::__new()
{  hx::ObjectPtr< Uniforms_obj > _result_ = new Uniforms_obj();
	_result_->__construct();
	return _result_;}

Dynamic Uniforms_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uniforms_obj > _result_ = new Uniforms_obj();
	_result_->__construct();
	return _result_;}

Void Uniforms_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Uniforms","destroy",0x9bc8ba2a,"phoenix.Uniforms.destroy","phoenix/Shader.hx",49,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->ints = null();
		HX_STACK_LINE(51)
		this->floats = null();
		HX_STACK_LINE(52)
		this->vector2s = null();
		HX_STACK_LINE(53)
		this->vector3s = null();
		HX_STACK_LINE(54)
		this->vector4s = null();
		HX_STACK_LINE(55)
		this->matrix4s = null();
		HX_STACK_LINE(56)
		this->colors = null();
		HX_STACK_LINE(57)
		this->textures = null();
		HX_STACK_LINE(58)
		this->dirty_ints = null();
		HX_STACK_LINE(59)
		this->dirty_floats = null();
		HX_STACK_LINE(60)
		this->dirty_vector2s = null();
		HX_STACK_LINE(61)
		this->dirty_vector3s = null();
		HX_STACK_LINE(62)
		this->dirty_vector4s = null();
		HX_STACK_LINE(63)
		this->dirty_matrix4s = null();
		HX_STACK_LINE(64)
		this->dirty_matrix4arrs = null();
		HX_STACK_LINE(65)
		this->dirty_colors = null();
		HX_STACK_LINE(66)
		this->dirty_textures = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uniforms_obj,destroy,(void))

Void Uniforms_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.Uniforms","clear",0x25ff52bd,"phoenix.Uniforms.clear","phoenix/Shader.hx",69,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->destroy();
		HX_STACK_LINE(73)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			tmp = tmp2;
		}
		HX_STACK_LINE(73)
		this->ints = tmp;
		HX_STACK_LINE(74)
		::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(74)
		this->floats = tmp1;
		HX_STACK_LINE(75)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(75)
		this->vector2s = tmp2;
		HX_STACK_LINE(76)
		::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(76)
		this->vector3s = tmp3;
		HX_STACK_LINE(77)
		::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(77)
		this->vector4s = tmp4;
		HX_STACK_LINE(78)
		::haxe::ds::StringMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(78)
			tmp5 = tmp7;
		}
		HX_STACK_LINE(78)
		this->matrix4s = tmp5;
		HX_STACK_LINE(79)
		::haxe::ds::StringMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::haxe::ds::StringMap tmp7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(79)
			::haxe::ds::StringMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(79)
			tmp6 = tmp8;
		}
		HX_STACK_LINE(79)
		this->matrix4arrs = tmp6;
		HX_STACK_LINE(80)
		::haxe::ds::StringMap tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::haxe::ds::StringMap tmp8 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(80)
			::haxe::ds::StringMap tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			tmp7 = tmp9;
		}
		HX_STACK_LINE(80)
		this->colors = tmp7;
		HX_STACK_LINE(81)
		::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(81)
			::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			tmp8 = tmp10;
		}
		HX_STACK_LINE(81)
		this->textures = tmp8;
		HX_STACK_LINE(83)
		this->dirty_ints = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(84)
		this->dirty_floats = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(85)
		this->dirty_vector2s = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(86)
		this->dirty_vector3s = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(87)
		this->dirty_vector4s = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(88)
		this->dirty_matrix4s = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(89)
		this->dirty_matrix4arrs = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(90)
		this->dirty_colors = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(91)
		this->dirty_textures = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uniforms_obj,clear,(void))

Void Uniforms_obj::set_int( ::String _name,int _value,Dynamic _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_int",0x9108f3c2,"phoenix.Uniforms.set_int","phoenix/Shader.hx",95,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(97)
		::haxe::ds::StringMap tmp = this->ints;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		::phoenix::Uniform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		::phoenix::Uniform _int = tmp2;		HX_STACK_VAR(_int,"_int");
		HX_STACK_LINE(99)
		bool tmp3 = (_int != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		if ((tmp3)){
			HX_STACK_LINE(100)
			_int->value = _value;
		}
		else{
			HX_STACK_LINE(102)
			::phoenix::Uniform tmp4 = ::phoenix::Uniform_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			_int = tmp4;
			HX_STACK_LINE(103)
			::haxe::ds::StringMap tmp5 = this->ints;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(103)
			::phoenix::Uniform tmp7 = _int;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(106)
		::phoenix::Uniform tmp4 = _int;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		this->dirty_ints->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_int,(void))

Void Uniforms_obj::set_float( ::String _name,Float _value,Dynamic _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_float",0xe075472f,"phoenix.Uniforms.set_float","phoenix/Shader.hx",110,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(112)
		::haxe::ds::StringMap tmp = this->floats;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		::phoenix::Uniform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		::phoenix::Uniform _float = tmp2;		HX_STACK_VAR(_float,"_float");
		HX_STACK_LINE(114)
		bool tmp3 = (_float != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		if ((tmp3)){
			HX_STACK_LINE(115)
			_float->value = _value;
		}
		else{
			HX_STACK_LINE(117)
			::phoenix::Uniform tmp4 = ::phoenix::Uniform_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			_float = tmp4;
			HX_STACK_LINE(118)
			::haxe::ds::StringMap tmp5 = this->floats;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			::phoenix::Uniform tmp7 = _float;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(118)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(121)
		::phoenix::Uniform tmp4 = _float;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		this->dirty_floats->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_float,(void))

Void Uniforms_obj::set_vector2( ::String _name,::phoenix::Vector _value,Dynamic _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_vector2",0xce4d4662,"phoenix.Uniforms.set_vector2","phoenix/Shader.hx",125,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(127)
		::haxe::ds::StringMap tmp = this->vector2s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		::phoenix::Uniform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		::phoenix::Uniform _vector2 = tmp2;		HX_STACK_VAR(_vector2,"_vector2");
		HX_STACK_LINE(129)
		bool tmp3 = (_vector2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		if ((tmp3)){
			HX_STACK_LINE(130)
			_vector2->value = _value;
		}
		else{
			HX_STACK_LINE(132)
			::phoenix::Uniform tmp4 = ::phoenix::Uniform_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			_vector2 = tmp4;
			HX_STACK_LINE(133)
			::haxe::ds::StringMap tmp5 = this->vector2s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(133)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			::phoenix::Uniform tmp7 = _vector2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(136)
		::phoenix::Uniform tmp4 = _vector2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		this->dirty_vector2s->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_vector2,(void))

Void Uniforms_obj::set_vector3( ::String _name,::phoenix::Vector _value,Dynamic _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_vector3",0xce4d4663,"phoenix.Uniforms.set_vector3","phoenix/Shader.hx",140,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(142)
		::haxe::ds::StringMap tmp = this->vector3s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		::phoenix::Uniform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		::phoenix::Uniform _vector3 = tmp2;		HX_STACK_VAR(_vector3,"_vector3");
		HX_STACK_LINE(144)
		bool tmp3 = (_vector3 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		if ((tmp3)){
			HX_STACK_LINE(145)
			_vector3->value = _value;
		}
		else{
			HX_STACK_LINE(147)
			::phoenix::Uniform tmp4 = ::phoenix::Uniform_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			_vector3 = tmp4;
			HX_STACK_LINE(148)
			::haxe::ds::StringMap tmp5 = this->vector3s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			::phoenix::Uniform tmp7 = _vector3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(151)
		::phoenix::Uniform tmp4 = _vector3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		this->dirty_vector3s->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_vector3,(void))

Void Uniforms_obj::set_vector4( ::String _name,::phoenix::Vector _value,Dynamic _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_vector4",0xce4d4664,"phoenix.Uniforms.set_vector4","phoenix/Shader.hx",155,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(157)
		::haxe::ds::StringMap tmp = this->vector4s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		::phoenix::Uniform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		::phoenix::Uniform _vector4 = tmp2;		HX_STACK_VAR(_vector4,"_vector4");
		HX_STACK_LINE(159)
		bool tmp3 = (_vector4 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		if ((tmp3)){
			HX_STACK_LINE(160)
			_vector4->value = _value;
		}
		else{
			HX_STACK_LINE(162)
			::phoenix::Uniform tmp4 = ::phoenix::Uniform_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			_vector4 = tmp4;
			HX_STACK_LINE(163)
			::haxe::ds::StringMap tmp5 = this->vector4s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(163)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(163)
			::phoenix::Uniform tmp7 = _vector4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(163)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(166)
		::phoenix::Uniform tmp4 = _vector4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		this->dirty_vector4s->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_vector4,(void))

Void Uniforms_obj::set_matrix4( ::String _name,::phoenix::Matrix _value,Dynamic _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_matrix4",0x87178f26,"phoenix.Uniforms.set_matrix4","phoenix/Shader.hx",170,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(172)
		::haxe::ds::StringMap tmp = this->matrix4s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		::phoenix::Uniform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		::phoenix::Uniform _matrix4 = tmp2;		HX_STACK_VAR(_matrix4,"_matrix4");
		HX_STACK_LINE(174)
		bool tmp3 = (_matrix4 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		if ((tmp3)){
			HX_STACK_LINE(175)
			_matrix4->value = _value;
		}
		else{
			HX_STACK_LINE(177)
			::phoenix::Uniform tmp4 = ::phoenix::Uniform_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			_matrix4 = tmp4;
			HX_STACK_LINE(178)
			::haxe::ds::StringMap tmp5 = this->matrix4s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			::phoenix::Uniform tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(181)
		::phoenix::Uniform tmp4 = _matrix4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		this->dirty_matrix4s->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_matrix4,(void))

Void Uniforms_obj::set_matrix4_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value,Dynamic _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_matrix4_arr",0xcbda5d88,"phoenix.Uniforms.set_matrix4_arr","phoenix/Shader.hx",185,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(187)
		::haxe::ds::StringMap tmp = this->matrix4arrs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		::phoenix::Uniform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		::phoenix::Uniform _matrix4 = tmp2;		HX_STACK_VAR(_matrix4,"_matrix4");
		HX_STACK_LINE(189)
		bool tmp3 = (_matrix4 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		if ((tmp3)){
			HX_STACK_LINE(190)
			_matrix4->value = _value;
		}
		else{
			HX_STACK_LINE(192)
			::phoenix::Uniform tmp4 = ::phoenix::Uniform_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			_matrix4 = tmp4;
			HX_STACK_LINE(193)
			::haxe::ds::StringMap tmp5 = this->matrix4arrs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(193)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			::phoenix::Uniform tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(193)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(196)
		::phoenix::Uniform tmp4 = _matrix4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		this->dirty_matrix4arrs->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_matrix4_arr,(void))

Void Uniforms_obj::set_color( ::String _name,::phoenix::Color _value,Dynamic _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_color",0x283af2f6,"phoenix.Uniforms.set_color","phoenix/Shader.hx",200,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(202)
		::haxe::ds::StringMap tmp = this->colors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		::phoenix::Uniform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		::phoenix::Uniform _color = tmp2;		HX_STACK_VAR(_color,"_color");
		HX_STACK_LINE(204)
		bool tmp3 = (_color != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		if ((tmp3)){
			HX_STACK_LINE(205)
			_color->value = _value;
		}
		else{
			HX_STACK_LINE(207)
			::phoenix::Uniform tmp4 = ::phoenix::Uniform_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			_color = tmp4;
			HX_STACK_LINE(208)
			::haxe::ds::StringMap tmp5 = this->colors;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			::phoenix::Uniform tmp7 = _color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(211)
		::phoenix::Uniform tmp4 = _color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		this->dirty_colors->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_color,(void))

Void Uniforms_obj::set_texture( ::String _name,::phoenix::Texture _value,Dynamic _location){
{
		HX_STACK_FRAME("phoenix.Uniforms","set_texture",0x9291152e,"phoenix.Uniforms.set_texture","phoenix/Shader.hx",215,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_ARG(_location,"_location")
		HX_STACK_LINE(217)
		::haxe::ds::StringMap tmp = this->textures;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		::phoenix::Uniform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		::phoenix::Uniform _texture = tmp2;		HX_STACK_VAR(_texture,"_texture");
		HX_STACK_LINE(219)
		bool tmp3 = (_texture != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		if ((tmp3)){
			HX_STACK_LINE(220)
			_texture->value = _value;
		}
		else{
			HX_STACK_LINE(222)
			::phoenix::Uniform tmp4 = ::phoenix::Uniform_obj::__new(_name,_value,_location);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(222)
			_texture = tmp4;
			HX_STACK_LINE(223)
			::haxe::ds::StringMap tmp5 = this->textures;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			::String tmp6 = _name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			::phoenix::Uniform tmp7 = _texture;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(226)
		::phoenix::Uniform tmp4 = _texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		this->dirty_textures->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Uniforms_obj,set_texture,(void))

Void Uniforms_obj::apply( ){
{
		HX_STACK_FRAME("phoenix.Uniforms","apply",0x01df669e,"phoenix.Uniforms.apply","phoenix/Shader.hx",231,0x14ec92d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(233)
		while((true)){
			HX_STACK_LINE(233)
			int tmp = this->dirty_ints->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(233)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(233)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			if ((tmp2)){
				HX_STACK_LINE(233)
				break;
			}
			HX_STACK_LINE(234)
			::phoenix::Uniform tmp3 = this->dirty_ints->pop().StaticCast< ::phoenix::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			::phoenix::Uniform uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				Dynamic tmp4 = uf->location;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(235)
				int tmp5 = uf->value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(235)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp4,tmp5);
			}
		}
		HX_STACK_LINE(238)
		while((true)){
			HX_STACK_LINE(238)
			int tmp = this->dirty_floats->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(238)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(238)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			if ((tmp2)){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(239)
			::phoenix::Uniform tmp3 = this->dirty_floats->pop().StaticCast< ::phoenix::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			::phoenix::Uniform uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				Dynamic tmp4 = uf->location;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(240)
				Float tmp5 = uf->value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(240)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1f(tmp4,tmp5);
			}
		}
		HX_STACK_LINE(243)
		while((true)){
			HX_STACK_LINE(243)
			int tmp = this->dirty_vector2s->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(243)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(243)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(243)
			if ((tmp2)){
				HX_STACK_LINE(243)
				break;
			}
			HX_STACK_LINE(244)
			::phoenix::Uniform tmp3 = this->dirty_vector2s->pop().StaticCast< ::phoenix::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			::phoenix::Uniform uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				Dynamic tmp4 = uf->location;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(245)
				Float tmp5 = uf->value->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(245)
				Float tmp6 = uf->value->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(245)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform2f(tmp4,tmp5,tmp6);
			}
		}
		HX_STACK_LINE(248)
		while((true)){
			HX_STACK_LINE(248)
			int tmp = this->dirty_vector3s->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(248)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			if ((tmp2)){
				HX_STACK_LINE(248)
				break;
			}
			HX_STACK_LINE(249)
			::phoenix::Uniform tmp3 = this->dirty_vector3s->pop().StaticCast< ::phoenix::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			::phoenix::Uniform uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				Dynamic tmp4 = uf->location;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(250)
				Float tmp5 = uf->value->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(250)
				Float tmp6 = uf->value->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				Float tmp7 = uf->value->__Field(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(250)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform3f(tmp4,tmp5,tmp6,tmp7);
			}
		}
		HX_STACK_LINE(253)
		while((true)){
			HX_STACK_LINE(253)
			int tmp = this->dirty_vector4s->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(253)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(253)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(253)
			if ((tmp2)){
				HX_STACK_LINE(253)
				break;
			}
			HX_STACK_LINE(254)
			::phoenix::Uniform tmp3 = this->dirty_vector4s->pop().StaticCast< ::phoenix::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(254)
			::phoenix::Uniform uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				Dynamic tmp4 = uf->location;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(255)
				Float tmp5 = uf->value->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(255)
				Float tmp6 = uf->value->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(255)
				Float tmp7 = uf->value->__Field(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(255)
				Float tmp8 = uf->value->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(255)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4f(tmp4,tmp5,tmp6,tmp7,tmp8);
			}
		}
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			int tmp = this->dirty_colors->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(258)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(258)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			if ((tmp2)){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(259)
			::phoenix::Uniform tmp3 = this->dirty_colors->pop().StaticCast< ::phoenix::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(259)
			::phoenix::Uniform uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				Dynamic tmp4 = uf->location;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(260)
				Float tmp5 = uf->value->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(260)
				Float tmp6 = uf->value->__Field(HX_HCSTRING("g","\x67","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(260)
				Float tmp7 = uf->value->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(260)
				Float tmp8 = uf->value->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(260)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4f(tmp4,tmp5,tmp6,tmp7,tmp8);
			}
		}
		HX_STACK_LINE(263)
		while((true)){
			HX_STACK_LINE(263)
			int tmp = this->dirty_textures->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(263)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(263)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(263)
			if ((tmp2)){
				HX_STACK_LINE(263)
				break;
			}
			HX_STACK_LINE(264)
			::phoenix::Uniform tmp3 = this->dirty_textures->pop().StaticCast< ::phoenix::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(264)
			::phoenix::Uniform uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				Dynamic tmp4 = uf->location;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(265)
				int tmp5 = uf->value->__Field(HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(265)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp4,tmp5);
			}
			HX_STACK_LINE(265)
			uf->value->__Field(HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"), hx::paccDynamic )();
		}
		HX_STACK_LINE(268)
		while((true)){
			HX_STACK_LINE(268)
			int tmp = this->dirty_matrix4s->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(268)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(268)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(268)
			if ((tmp2)){
				HX_STACK_LINE(268)
				break;
			}
			HX_STACK_LINE(269)
			::phoenix::Uniform tmp3 = this->dirty_matrix4s->pop().StaticCast< ::phoenix::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(269)
			::phoenix::Uniform uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				Dynamic location = uf->location;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(270)
				::snow::api::buffers::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(270)
				{
					HX_STACK_LINE(270)
					::phoenix::Matrix _this = uf->value;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(270)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(270)
					while((true)){
						HX_STACK_LINE(270)
						bool tmp5 = (i < (int)16);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(270)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(270)
						if ((tmp6)){
							HX_STACK_LINE(270)
							break;
						}
						HX_STACK_LINE(270)
						{
							HX_STACK_LINE(270)
							::snow::api::buffers::ArrayBufferView this1 = _this->_float32array;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(270)
							::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),_this->elements->__get(i));
						}
						HX_STACK_LINE(270)
						++(i);
					}
					HX_STACK_LINE(270)
					tmp4 = _this->_float32array;
				}
				HX_STACK_LINE(270)
				::snow::api::buffers::ArrayBufferView data = tmp4;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(270)
				bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(270)
				if ((tmp5)){
					HX_STACK_LINE(270)
					Dynamic tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(270)
					int tmp7 = data->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(270)
					int tmp8 = data->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(270)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp6,false,data->buffer->b,tmp7,tmp8,(int)4);
				}
				else{
					HX_STACK_LINE(270)
					Dynamic tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(270)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp6,false,null(),(int)0,(int)0,(int)4);
				}
			}
		}
		HX_STACK_LINE(273)
		while((true)){
			HX_STACK_LINE(273)
			int tmp = this->dirty_matrix4arrs->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			if ((tmp2)){
				HX_STACK_LINE(273)
				break;
			}
			HX_STACK_LINE(274)
			::phoenix::Uniform tmp3 = this->dirty_matrix4arrs->pop().StaticCast< ::phoenix::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(274)
			::phoenix::Uniform uf = tmp3;		HX_STACK_VAR(uf,"uf");
			HX_STACK_LINE(275)
			{
				HX_STACK_LINE(275)
				Dynamic location = uf->location;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(275)
				::snow::api::buffers::ArrayBufferView data = uf->value;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(275)
				bool tmp4 = (data != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(275)
				if ((tmp4)){
					HX_STACK_LINE(275)
					Dynamic tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(275)
					int tmp6 = data->byteOffset;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(275)
					int tmp7 = data->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(275)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp5,false,data->buffer->b,tmp6,tmp7,(int)4);
				}
				else{
					HX_STACK_LINE(275)
					Dynamic tmp5 = location;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(275)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp5,false,null(),(int)0,(int)0,(int)4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uniforms_obj,apply,(void))


Uniforms_obj::Uniforms_obj()
{
}

void Uniforms_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uniforms);
	HX_MARK_MEMBER_NAME(ints,"ints");
	HX_MARK_MEMBER_NAME(floats,"floats");
	HX_MARK_MEMBER_NAME(vector2s,"vector2s");
	HX_MARK_MEMBER_NAME(vector3s,"vector3s");
	HX_MARK_MEMBER_NAME(vector4s,"vector4s");
	HX_MARK_MEMBER_NAME(matrix4s,"matrix4s");
	HX_MARK_MEMBER_NAME(matrix4arrs,"matrix4arrs");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_MEMBER_NAME(dirty_ints,"dirty_ints");
	HX_MARK_MEMBER_NAME(dirty_floats,"dirty_floats");
	HX_MARK_MEMBER_NAME(dirty_vector2s,"dirty_vector2s");
	HX_MARK_MEMBER_NAME(dirty_vector3s,"dirty_vector3s");
	HX_MARK_MEMBER_NAME(dirty_vector4s,"dirty_vector4s");
	HX_MARK_MEMBER_NAME(dirty_matrix4s,"dirty_matrix4s");
	HX_MARK_MEMBER_NAME(dirty_matrix4arrs,"dirty_matrix4arrs");
	HX_MARK_MEMBER_NAME(dirty_colors,"dirty_colors");
	HX_MARK_MEMBER_NAME(dirty_textures,"dirty_textures");
	HX_MARK_END_CLASS();
}

void Uniforms_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ints,"ints");
	HX_VISIT_MEMBER_NAME(floats,"floats");
	HX_VISIT_MEMBER_NAME(vector2s,"vector2s");
	HX_VISIT_MEMBER_NAME(vector3s,"vector3s");
	HX_VISIT_MEMBER_NAME(vector4s,"vector4s");
	HX_VISIT_MEMBER_NAME(matrix4s,"matrix4s");
	HX_VISIT_MEMBER_NAME(matrix4arrs,"matrix4arrs");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(textures,"textures");
	HX_VISIT_MEMBER_NAME(dirty_ints,"dirty_ints");
	HX_VISIT_MEMBER_NAME(dirty_floats,"dirty_floats");
	HX_VISIT_MEMBER_NAME(dirty_vector2s,"dirty_vector2s");
	HX_VISIT_MEMBER_NAME(dirty_vector3s,"dirty_vector3s");
	HX_VISIT_MEMBER_NAME(dirty_vector4s,"dirty_vector4s");
	HX_VISIT_MEMBER_NAME(dirty_matrix4s,"dirty_matrix4s");
	HX_VISIT_MEMBER_NAME(dirty_matrix4arrs,"dirty_matrix4arrs");
	HX_VISIT_MEMBER_NAME(dirty_colors,"dirty_colors");
	HX_VISIT_MEMBER_NAME(dirty_textures,"dirty_textures");
}

Dynamic Uniforms_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { return ints; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floats") ) { return floats; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_int") ) { return set_int_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vector2s") ) { return vector2s; }
		if (HX_FIELD_EQ(inName,"vector3s") ) { return vector3s; }
		if (HX_FIELD_EQ(inName,"vector4s") ) { return vector4s; }
		if (HX_FIELD_EQ(inName,"matrix4s") ) { return matrix4s; }
		if (HX_FIELD_EQ(inName,"textures") ) { return textures; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_float") ) { return set_float_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dirty_ints") ) { return dirty_ints; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"matrix4arrs") ) { return matrix4arrs; }
		if (HX_FIELD_EQ(inName,"set_vector2") ) { return set_vector2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector3") ) { return set_vector3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vector4") ) { return set_vector4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix4") ) { return set_matrix4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dirty_floats") ) { return dirty_floats; }
		if (HX_FIELD_EQ(inName,"dirty_colors") ) { return dirty_colors; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dirty_vector2s") ) { return dirty_vector2s; }
		if (HX_FIELD_EQ(inName,"dirty_vector3s") ) { return dirty_vector3s; }
		if (HX_FIELD_EQ(inName,"dirty_vector4s") ) { return dirty_vector4s; }
		if (HX_FIELD_EQ(inName,"dirty_matrix4s") ) { return dirty_matrix4s; }
		if (HX_FIELD_EQ(inName,"dirty_textures") ) { return dirty_textures; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_matrix4_arr") ) { return set_matrix4_arr_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dirty_matrix4arrs") ) { return dirty_matrix4arrs; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Uniforms_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { ints=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floats") ) { floats=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vector2s") ) { vector2s=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vector3s") ) { vector3s=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vector4s") ) { vector4s=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix4s") ) { matrix4s=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dirty_ints") ) { dirty_ints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"matrix4arrs") ) { matrix4arrs=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dirty_floats") ) { dirty_floats=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_colors") ) { dirty_colors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dirty_vector2s") ) { dirty_vector2s=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_vector3s") ) { dirty_vector3s=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_vector4s") ) { dirty_vector4s=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_matrix4s") ) { dirty_matrix4s=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_textures") ) { dirty_textures=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dirty_matrix4arrs") ) { dirty_matrix4arrs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Uniforms_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Uniforms_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("floats","\x57","\x23","\x56","\x41"));
	outFields->push(HX_HCSTRING("vector2s","\x84","\xd3","\xbd","\x6e"));
	outFields->push(HX_HCSTRING("vector3s","\x63","\xd4","\xbd","\x6e"));
	outFields->push(HX_HCSTRING("vector4s","\x42","\xd5","\xbd","\x6e"));
	outFields->push(HX_HCSTRING("matrix4s","\x40","\x36","\xf3","\x66"));
	outFields->push(HX_HCSTRING("matrix4arrs","\x45","\x3f","\x31","\x03"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"));
	outFields->push(HX_HCSTRING("dirty_ints","\x31","\x8f","\x46","\x4c"));
	outFields->push(HX_HCSTRING("dirty_floats","\x24","\xeb","\x32","\x79"));
	outFields->push(HX_HCSTRING("dirty_vector2s","\x91","\xe8","\x35","\xed"));
	outFields->push(HX_HCSTRING("dirty_vector3s","\x70","\xe9","\x35","\xed"));
	outFields->push(HX_HCSTRING("dirty_vector4s","\x4f","\xea","\x35","\xed"));
	outFields->push(HX_HCSTRING("dirty_matrix4s","\x4d","\x4b","\x6b","\xe5"));
	outFields->push(HX_HCSTRING("dirty_matrix4arrs","\x58","\x10","\xcc","\xc9"));
	outFields->push(HX_HCSTRING("dirty_colors","\x7d","\x8d","\x63","\xfe"));
	outFields->push(HX_HCSTRING("dirty_textures","\x45","\x0c","\x47","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,ints),HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,floats),HX_HCSTRING("floats","\x57","\x23","\x56","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,vector2s),HX_HCSTRING("vector2s","\x84","\xd3","\xbd","\x6e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,vector3s),HX_HCSTRING("vector3s","\x63","\xd4","\xbd","\x6e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,vector4s),HX_HCSTRING("vector4s","\x42","\xd5","\xbd","\x6e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,matrix4s),HX_HCSTRING("matrix4s","\x40","\x36","\xf3","\x66")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,matrix4arrs),HX_HCSTRING("matrix4arrs","\x45","\x3f","\x31","\x03")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Uniforms_obj,textures),HX_HCSTRING("textures","\x38","\xf7","\xce","\x65")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_ints),HX_HCSTRING("dirty_ints","\x31","\x8f","\x46","\x4c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_floats),HX_HCSTRING("dirty_floats","\x24","\xeb","\x32","\x79")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_vector2s),HX_HCSTRING("dirty_vector2s","\x91","\xe8","\x35","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_vector3s),HX_HCSTRING("dirty_vector3s","\x70","\xe9","\x35","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_vector4s),HX_HCSTRING("dirty_vector4s","\x4f","\xea","\x35","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_matrix4s),HX_HCSTRING("dirty_matrix4s","\x4d","\x4b","\x6b","\xe5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_matrix4arrs),HX_HCSTRING("dirty_matrix4arrs","\x58","\x10","\xcc","\xc9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_colors),HX_HCSTRING("dirty_colors","\x7d","\x8d","\x63","\xfe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Uniforms_obj,dirty_textures),HX_HCSTRING("dirty_textures","\x45","\x0c","\x47","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45"),
	HX_HCSTRING("floats","\x57","\x23","\x56","\x41"),
	HX_HCSTRING("vector2s","\x84","\xd3","\xbd","\x6e"),
	HX_HCSTRING("vector3s","\x63","\xd4","\xbd","\x6e"),
	HX_HCSTRING("vector4s","\x42","\xd5","\xbd","\x6e"),
	HX_HCSTRING("matrix4s","\x40","\x36","\xf3","\x66"),
	HX_HCSTRING("matrix4arrs","\x45","\x3f","\x31","\x03"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"),
	HX_HCSTRING("dirty_ints","\x31","\x8f","\x46","\x4c"),
	HX_HCSTRING("dirty_floats","\x24","\xeb","\x32","\x79"),
	HX_HCSTRING("dirty_vector2s","\x91","\xe8","\x35","\xed"),
	HX_HCSTRING("dirty_vector3s","\x70","\xe9","\x35","\xed"),
	HX_HCSTRING("dirty_vector4s","\x4f","\xea","\x35","\xed"),
	HX_HCSTRING("dirty_matrix4s","\x4d","\x4b","\x6b","\xe5"),
	HX_HCSTRING("dirty_matrix4arrs","\x58","\x10","\xcc","\xc9"),
	HX_HCSTRING("dirty_colors","\x7d","\x8d","\x63","\xfe"),
	HX_HCSTRING("dirty_textures","\x45","\x0c","\x47","\xe4"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("set_int","\x92","\x66","\xc6","\x19"),
	HX_HCSTRING("set_float","\xff","\x0d","\x91","\x29"),
	HX_HCSTRING("set_vector2","\x32","\x61","\x04","\x6b"),
	HX_HCSTRING("set_vector3","\x33","\x61","\x04","\x6b"),
	HX_HCSTRING("set_vector4","\x34","\x61","\x04","\x6b"),
	HX_HCSTRING("set_matrix4","\xf6","\xa9","\xce","\x23"),
	HX_HCSTRING("set_matrix4_arr","\x58","\x20","\x7f","\xbe"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniforms_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniforms_obj::__mClass,"__mClass");
};

#endif

hx::Class Uniforms_obj::__mClass;

void Uniforms_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Uniforms","\x9e","\x3d","\x2e","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Uniforms_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uniforms_obj >;
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
