#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLTO
#include <snow/modules/opengl/native/GLTO.h>
#endif
namespace phoenix{
namespace geometry{

Void GeometryState_obj::__construct()
{
HX_STACK_FRAME("phoenix.geometry.GeometryState","new",0xdad5fe14,"phoenix.geometry.GeometryState.new","phoenix/geometry/GeometryState.hx",11,0xdf8297bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->log = false;
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		this->dirty = true;
		HX_STACK_LINE(30)
		this->clip = false;
	}
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		this->dirty = true;
		HX_STACK_LINE(31)
		this->clip_x = ((Float)0.0);
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		this->dirty = true;
		HX_STACK_LINE(32)
		this->clip_y = ((Float)0.0);
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		this->dirty = true;
		HX_STACK_LINE(33)
		this->clip_w = ((Float)0.0);
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		this->dirty = true;
		HX_STACK_LINE(34)
		this->clip_h = ((Float)0.0);
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		this->dirty = true;
		HX_STACK_LINE(35)
		this->texture = null();
	}
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		this->dirty = true;
		HX_STACK_LINE(36)
		this->shader = null();
	}
	HX_STACK_LINE(37)
	this->depth = ((Float)0.0);
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		this->dirty = true;
		HX_STACK_LINE(38)
		this->primitive_type = (int)0;
	}
	HX_STACK_LINE(40)
	this->dirty = false;
}
;
	return null();
}

//GeometryState_obj::~GeometryState_obj() { }

Dynamic GeometryState_obj::__CreateEmpty() { return  new GeometryState_obj; }
hx::ObjectPtr< GeometryState_obj > GeometryState_obj::__new()
{  hx::ObjectPtr< GeometryState_obj > _result_ = new GeometryState_obj();
	_result_->__construct();
	return _result_;}

Dynamic GeometryState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeometryState_obj > _result_ = new GeometryState_obj();
	_result_->__construct();
	return _result_;}

Void GeometryState_obj::clone_onto( ::phoenix::geometry::GeometryState _other){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","clone_onto",0xd3d1f488,"phoenix.geometry.GeometryState.clone_onto","phoenix/geometry/GeometryState.hx",45,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_other,"_other")
		HX_STACK_LINE(47)
		bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		_other->dirty = tmp;
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			_other->dirty = true;
			HX_STACK_LINE(48)
			::phoenix::Texture tmp1 = this->texture;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			_other->texture = tmp1;
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			_other->dirty = true;
			HX_STACK_LINE(49)
			::phoenix::Shader tmp1 = this->shader;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			_other->shader = tmp1;
		}
		HX_STACK_LINE(50)
		Float tmp1 = this->depth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		_other->depth = tmp1;
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			_other->dirty = true;
			HX_STACK_LINE(51)
			int tmp2 = this->primitive_type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			_other->primitive_type = tmp2;
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			_other->dirty = true;
			HX_STACK_LINE(52)
			bool tmp2 = this->clip;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			_other->clip = tmp2;
		}
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			_other->dirty = true;
			HX_STACK_LINE(53)
			Float tmp2 = this->clip_x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			_other->clip_x = tmp2;
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			_other->dirty = true;
			HX_STACK_LINE(54)
			Float tmp2 = this->clip_y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			_other->clip_y = tmp2;
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			_other->dirty = true;
			HX_STACK_LINE(55)
			Float tmp2 = this->clip_w;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			_other->clip_w = tmp2;
		}
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			_other->dirty = true;
			HX_STACK_LINE(56)
			Float tmp2 = this->clip_h;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			_other->clip_h = tmp2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,clone_onto,(void))

Void GeometryState_obj::str( ){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","str",0xdad9d665,"phoenix.geometry.GeometryState.str","phoenix/geometry/GeometryState.hx",60,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		bool tmp = this->log;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		if ((tmp1)){
			HX_STACK_LINE(62)
			return null();
		}
		HX_STACK_LINE(64)
		bool tmp2 = this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		::String tmp4 = (HX_HCSTRING("\t+ GEOMETRYSTATE ","\x9f","\x6b","\xf0","\x11") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),64,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		::haxe::Log_obj::trace(tmp4,tmp5);
		HX_STACK_LINE(65)
		Float tmp6 = this->depth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		::String tmp7 = (HX_HCSTRING("\t\tdepth - ","\x30","\xaa","\x11","\xc4") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),65,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		::haxe::Log_obj::trace(tmp7,tmp8);
		HX_STACK_LINE(66)
		::phoenix::Texture tmp9 = this->texture;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		if ((tmp10)){
			HX_STACK_LINE(66)
			tmp11 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(66)
			::phoenix::Texture tmp12 = this->texture;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(66)
			tmp11 = tmp12->id;
		}
		HX_STACK_LINE(66)
		::String tmp12 = (HX_HCSTRING("\t\ttexture - ","\x58","\x01","\x33","\x88") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(66)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),66,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(66)
		::haxe::Log_obj::trace(tmp12,tmp13);
		HX_STACK_LINE(67)
		::phoenix::Texture tmp14 = this->texture;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(67)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(67)
		if ((tmp15)){
			HX_STACK_LINE(68)
			::phoenix::Texture tmp16 = this->texture;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(68)
			::snow::modules::opengl::native::GLTO tmp17 = tmp16->texture;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(68)
			::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(68)
			::String tmp19 = (HX_HCSTRING("\t\t\t ","\xd7","\xc7","\xf9","\x05") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(68)
			Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),68,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(68)
			::haxe::Log_obj::trace(tmp19,tmp20);
		}
		HX_STACK_LINE(70)
		::phoenix::Shader tmp16 = this->shader;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(70)
		bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(70)
		::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(70)
		if ((tmp17)){
			HX_STACK_LINE(70)
			tmp18 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
		}
		else{
			HX_STACK_LINE(70)
			::phoenix::Shader tmp19 = this->shader;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(70)
			tmp18 = tmp19->id;
		}
		HX_STACK_LINE(70)
		::String tmp19 = (HX_HCSTRING("\t\tshader - ","\x8e","\xf1","\x9d","\x79") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(70)
		Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),70,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(70)
		::haxe::Log_obj::trace(tmp19,tmp20);
		HX_STACK_LINE(71)
		int tmp21 = this->primitive_type;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(71)
		::String tmp22 = (HX_HCSTRING("\t\tprimitive_type - ","\x41","\xea","\xf1","\x1f") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(71)
		Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),71,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(71)
		::haxe::Log_obj::trace(tmp22,tmp23);
		HX_STACK_LINE(72)
		bool tmp24 = this->clip;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(72)
		::String tmp25 = ::Std_obj::string(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(72)
		::String tmp26 = (HX_HCSTRING("\t\tclip - ","\xc3","\xd6","\xcd","\x6f") + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(72)
		Dynamic tmp27 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),72,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(72)
		::haxe::Log_obj::trace(tmp26,tmp27);
		HX_STACK_LINE(73)
		Float tmp28 = this->clip_x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(73)
		::String tmp29 = (HX_HCSTRING("\t\tclip rect - ","\x5f","\x4b","\x3b","\x99") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(73)
		::String tmp30 = (tmp29 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(73)
		Float tmp31 = this->clip_y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(73)
		::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(73)
		::String tmp33 = (tmp32 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(73)
		Float tmp34 = this->clip_w;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(73)
		::String tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(73)
		::String tmp36 = (tmp35 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(73)
		Float tmp37 = this->clip_h;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(73)
		::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(73)
		Dynamic tmp39 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),73,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(73)
		::haxe::Log_obj::trace(tmp38,tmp39);
		HX_STACK_LINE(74)
		Dynamic tmp40 = hx::SourceInfo(HX_HCSTRING("GeometryState.hx","\x3f","\xca","\x64","\x05"),74,HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(74)
		::haxe::Log_obj::trace(HX_HCSTRING("\t- GEOMETRYSTATE","\xe3","\x08","\xd7","\xbb"),tmp40);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryState_obj,str,(void))

Void GeometryState_obj::clean( ){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","clean",0x6a0b743d,"phoenix.geometry.GeometryState.clean","phoenix/geometry/GeometryState.hx",81,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeometryState_obj,clean,(void))

Void GeometryState_obj::update( ::phoenix::geometry::GeometryState other){
{
		HX_STACK_FRAME("phoenix.geometry.GeometryState","update",0xdf57e0d5,"phoenix.geometry.GeometryState.update","phoenix/geometry/GeometryState.hx",86,0xdf8297bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(88)
		Float tmp = this->depth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		Float tmp1 = other->depth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		if ((tmp2)){
			HX_STACK_LINE(89)
			this->depth = other->depth;
		}
		HX_STACK_LINE(92)
		::phoenix::Texture tmp3 = this->texture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::phoenix::Texture tmp4 = other->texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(92)
		if ((tmp5)){
			HX_STACK_LINE(93)
			this->dirty = true;
			HX_STACK_LINE(93)
			this->texture = other->texture;
		}
		HX_STACK_LINE(96)
		::phoenix::Shader tmp6 = this->shader;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		::phoenix::Shader tmp7 = other->shader;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		if ((tmp8)){
			HX_STACK_LINE(97)
			this->dirty = true;
			HX_STACK_LINE(97)
			this->shader = other->shader;
		}
		HX_STACK_LINE(100)
		int tmp9 = this->primitive_type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		int tmp10 = other->primitive_type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		if ((tmp11)){
			HX_STACK_LINE(101)
			this->dirty = true;
			HX_STACK_LINE(101)
			this->primitive_type = other->primitive_type;
		}
		HX_STACK_LINE(104)
		bool tmp12 = this->clip;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(104)
		bool tmp13 = other->clip;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(104)
		bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(104)
		if ((tmp14)){
			HX_STACK_LINE(105)
			this->dirty = true;
			HX_STACK_LINE(105)
			this->clip = other->clip;
		}
		HX_STACK_LINE(108)
		Float tmp15 = this->clip_x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(108)
		Float tmp16 = other->clip_x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(108)
		bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(108)
		if ((tmp17)){
			HX_STACK_LINE(109)
			this->dirty = true;
			HX_STACK_LINE(109)
			this->clip_x = other->clip_x;
		}
		HX_STACK_LINE(112)
		Float tmp18 = this->clip_y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(112)
		Float tmp19 = other->clip_y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(112)
		bool tmp20 = (tmp18 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(112)
		if ((tmp20)){
			HX_STACK_LINE(113)
			this->dirty = true;
			HX_STACK_LINE(113)
			this->clip_y = other->clip_y;
		}
		HX_STACK_LINE(116)
		Float tmp21 = this->clip_w;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(116)
		Float tmp22 = other->clip_w;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(116)
		bool tmp23 = (tmp21 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(116)
		if ((tmp23)){
			HX_STACK_LINE(117)
			this->dirty = true;
			HX_STACK_LINE(117)
			this->clip_w = other->clip_w;
		}
		HX_STACK_LINE(120)
		Float tmp24 = this->clip_h;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(120)
		Float tmp25 = other->clip_h;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(120)
		bool tmp26 = (tmp24 != tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(120)
		if ((tmp26)){
			HX_STACK_LINE(121)
			this->dirty = true;
			HX_STACK_LINE(121)
			this->clip_h = other->clip_h;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,update,(void))

int GeometryState_obj::set_primitive_type( int val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_primitive_type",0xcd8c389b,"phoenix.geometry.GeometryState.set_primitive_type","phoenix/geometry/GeometryState.hx",127,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(128)
	this->dirty = true;
	HX_STACK_LINE(129)
	int tmp = this->primitive_type = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_primitive_type,return )

::phoenix::Texture GeometryState_obj::set_texture( ::phoenix::Texture val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_texture",0x1cfd31b2,"phoenix.geometry.GeometryState.set_texture","phoenix/geometry/GeometryState.hx",132,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(133)
	this->dirty = true;
	HX_STACK_LINE(134)
	::phoenix::Texture tmp = this->texture = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_texture,return )

::phoenix::Shader GeometryState_obj::set_shader( ::phoenix::Shader val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_shader",0x806b7e2e,"phoenix.geometry.GeometryState.set_shader","phoenix/geometry/GeometryState.hx",137,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(138)
	this->dirty = true;
	HX_STACK_LINE(139)
	::phoenix::Shader tmp = this->shader = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_shader,return )

Float GeometryState_obj::set_depth( Float val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_depth",0x291da61a,"phoenix.geometry.GeometryState.set_depth","phoenix/geometry/GeometryState.hx",142,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(143)
	Float tmp = this->depth = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_depth,return )

bool GeometryState_obj::set_clip( bool val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_clip",0x45922999,"phoenix.geometry.GeometryState.set_clip","phoenix/geometry/GeometryState.hx",146,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(147)
	this->dirty = true;
	HX_STACK_LINE(148)
	bool tmp = this->clip = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip,return )

Float GeometryState_obj::set_clip_x( Float val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_clip_x",0x6da2d512,"phoenix.geometry.GeometryState.set_clip_x","phoenix/geometry/GeometryState.hx",151,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(152)
	this->dirty = true;
	HX_STACK_LINE(153)
	Float tmp = this->clip_x = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_x,return )

Float GeometryState_obj::set_clip_y( Float val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_clip_y",0x6da2d513,"phoenix.geometry.GeometryState.set_clip_y","phoenix/geometry/GeometryState.hx",155,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(156)
	this->dirty = true;
	HX_STACK_LINE(157)
	Float tmp = this->clip_y = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_y,return )

Float GeometryState_obj::set_clip_w( Float val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_clip_w",0x6da2d511,"phoenix.geometry.GeometryState.set_clip_w","phoenix/geometry/GeometryState.hx",159,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(160)
	this->dirty = true;
	HX_STACK_LINE(161)
	Float tmp = this->clip_w = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_w,return )

Float GeometryState_obj::set_clip_h( Float val){
	HX_STACK_FRAME("phoenix.geometry.GeometryState","set_clip_h",0x6da2d502,"phoenix.geometry.GeometryState.set_clip_h","phoenix/geometry/GeometryState.hx",163,0xdf8297bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(164)
	this->dirty = true;
	HX_STACK_LINE(165)
	Float tmp = this->clip_h = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_h,return )


GeometryState_obj::GeometryState_obj()
{
}

void GeometryState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryState);
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(clip_x,"clip_x");
	HX_MARK_MEMBER_NAME(clip_y,"clip_y");
	HX_MARK_MEMBER_NAME(clip_w,"clip_w");
	HX_MARK_MEMBER_NAME(clip_h,"clip_h");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_END_CLASS();
}

void GeometryState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(clip_x,"clip_x");
	HX_VISIT_MEMBER_NAME(clip_y,"clip_y");
	HX_VISIT_MEMBER_NAME(clip_w,"clip_w");
	HX_VISIT_MEMBER_NAME(clip_h,"clip_h");
	HX_VISIT_MEMBER_NAME(log,"log");
}

Dynamic GeometryState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { return clip; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"clean") ) { return clean_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"clip_x") ) { return clip_x; }
		if (HX_FIELD_EQ(inName,"clip_y") ) { return clip_y; }
		if (HX_FIELD_EQ(inName,"clip_w") ) { return clip_w; }
		if (HX_FIELD_EQ(inName,"clip_h") ) { return clip_h; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_clip") ) { return set_clip_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clone_onto") ) { return clone_onto_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip_x") ) { return set_clip_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip_y") ) { return set_clip_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip_w") ) { return set_clip_w_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip_h") ) { return set_clip_h_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return primitive_type; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return set_primitive_type_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeometryState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == hx::paccAlways) return set_clip(inValue);clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_x") ) { if (inCallProp == hx::paccAlways) return set_clip_x(inValue);clip_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_y") ) { if (inCallProp == hx::paccAlways) return set_clip_y(inValue);clip_y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_w") ) { if (inCallProp == hx::paccAlways) return set_clip_w(inValue);clip_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_h") ) { if (inCallProp == hx::paccAlways) return set_clip_h(inValue);clip_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { if (inCallProp == hx::paccAlways) return set_primitive_type(inValue);primitive_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GeometryState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GeometryState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"));
	outFields->push(HX_HCSTRING("clip_x","\x09","\x16","\x58","\x0a"));
	outFields->push(HX_HCSTRING("clip_y","\x0a","\x16","\x58","\x0a"));
	outFields->push(HX_HCSTRING("clip_w","\x08","\x16","\x58","\x0a"));
	outFields->push(HX_HCSTRING("clip_h","\xf9","\x15","\x58","\x0a"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GeometryState_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,primitive_type),HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(GeometryState_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(GeometryState_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,clip),HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,clip_x),HX_HCSTRING("clip_x","\x09","\x16","\x58","\x0a")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,clip_y),HX_HCSTRING("clip_y","\x0a","\x16","\x58","\x0a")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,clip_w),HX_HCSTRING("clip_w","\x08","\x16","\x58","\x0a")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,clip_h),HX_HCSTRING("clip_h","\xf9","\x15","\x58","\x0a")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("clip_x","\x09","\x16","\x58","\x0a"),
	HX_HCSTRING("clip_y","\x0a","\x16","\x58","\x0a"),
	HX_HCSTRING("clip_w","\x08","\x16","\x58","\x0a"),
	HX_HCSTRING("clip_h","\xf9","\x15","\x58","\x0a"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("clone_onto","\xbc","\x43","\x8c","\x64"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("clean","\x89","\x71","\x5b","\x48"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("set_primitive_type","\xcf","\xdb","\xb6","\x00"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("set_clip","\xcd","\x83","\xda","\x6f"),
	HX_HCSTRING("set_clip_x","\x46","\x24","\x5d","\xfe"),
	HX_HCSTRING("set_clip_y","\x47","\x24","\x5d","\xfe"),
	HX_HCSTRING("set_clip_w","\x45","\x24","\x5d","\xfe"),
	HX_HCSTRING("set_clip_h","\x36","\x24","\x5d","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryState_obj::__mClass,"__mClass");
};

#endif

hx::Class GeometryState_obj::__mClass;

void GeometryState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GeometryState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeometryState_obj >;
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
