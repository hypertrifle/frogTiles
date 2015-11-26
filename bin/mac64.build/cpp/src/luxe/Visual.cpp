#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
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
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
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
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#include <phoenix/geometry/QuadGeometry.h>
#endif
namespace luxe{

Void Visual_obj::__construct(Dynamic _options,Dynamic _pos_info)
{
HX_STACK_FRAME("luxe.Visual","new",0x85b8018a,"luxe.Visual.new","luxe/Visual.hx",22,0xe3547505)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
HX_STACK_ARG(_pos_info,"_pos_info")
{
	HX_STACK_LINE(262)
	this->ignore_texture_on_geometry_change = false;
	HX_STACK_LINE(120)
	this->_creating_geometry = false;
	HX_STACK_LINE(51)
	this->_has_custom_origin = false;
	HX_STACK_LINE(44)
	this->radians = ((Float)0.0);
	HX_STACK_LINE(40)
	this->depth = ((Float)0.0);
	HX_STACK_LINE(38)
	this->visible = true;
	HX_STACK_LINE(30)
	this->locked = false;
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		if ((tmp)){
			HX_STACK_LINE(230)
			::String tmp1 = HX_HCSTRING(" ( Visual requires non-null options","\x0f","\xb0","\x1a","\xfb");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			::String tmp2 = (tmp1 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			::String tmp3 = (HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::null_assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(60)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	this->_rotation_euler = tmp;
	HX_STACK_LINE(61)
	::phoenix::Quaternion tmp1 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	this->_rotation_quat = tmp1;
	HX_STACK_LINE(64)
	Dynamic tmp2 = _options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	Dynamic tmp3 = _pos_info;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	super::__construct(tmp2,tmp3);
	HX_STACK_LINE(67)
	::phoenix::Color tmp4 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	this->set_color(tmp4);
	HX_STACK_LINE(68)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	this->set_size(tmp5);
	HX_STACK_LINE(71)
	Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	bool tmp7 = (tmp6->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(71)
	if ((tmp7)){
		HX_STACK_LINE(72)
		Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		this->set_texture(tmp8->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ));
	}
	HX_STACK_LINE(75)
	Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(75)
	bool tmp9 = (tmp8->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(75)
	if ((tmp9)){
		HX_STACK_LINE(76)
		Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		this->set_shader(tmp10->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic ));
	}
	HX_STACK_LINE(79)
	Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(79)
	bool tmp11 = (tmp10->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(79)
	if ((tmp11)){
		HX_STACK_LINE(80)
		Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(80)
		this->set_color(tmp12->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ));
	}
	HX_STACK_LINE(83)
	Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(83)
	bool tmp13 = (tmp12->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(83)
	if ((tmp13)){
		HX_STACK_LINE(84)
		Dynamic tmp14 = this->options;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(84)
		this->set_depth(tmp14->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ));
	}
	HX_STACK_LINE(87)
	Dynamic tmp14 = this->options;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(87)
	bool tmp15 = (tmp14->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(87)
	if ((tmp15)){
		HX_STACK_LINE(88)
		Dynamic tmp16 = this->options;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(88)
		this->set_visible(tmp16->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ));
	}
	HX_STACK_LINE(94)
	Dynamic tmp16 = this->options;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(94)
	bool tmp17 = (tmp16->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(94)
	if ((tmp17)){
		HX_STACK_LINE(96)
		Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(96)
		this->set_size(tmp18->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic ));
		HX_STACK_LINE(98)
		this->_create_geometry();
	}
	else{
		HX_STACK_LINE(103)
		::phoenix::Texture tmp18 = this->texture;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(103)
		bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(103)
		if ((tmp19)){
			HX_STACK_LINE(105)
			::phoenix::Texture tmp20 = this->texture;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(105)
			int tmp21 = tmp20->width;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(105)
			::phoenix::Texture tmp22 = this->texture;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(105)
			int tmp23 = tmp22->height;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(105)
			::phoenix::Vector tmp24 = ::phoenix::Vector_obj::__new(tmp21,tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(105)
			this->set_size(tmp24);
			HX_STACK_LINE(106)
			this->_create_geometry();
		}
		else{
			HX_STACK_LINE(111)
			::phoenix::Vector tmp20 = ::phoenix::Vector_obj::__new((int)64,(int)64,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(111)
			this->set_size(tmp20);
			HX_STACK_LINE(112)
			this->_create_geometry();
		}
	}
}
;
	return null();
}

//Visual_obj::~Visual_obj() { }

Dynamic Visual_obj::__CreateEmpty() { return  new Visual_obj; }
hx::ObjectPtr< Visual_obj > Visual_obj::__new(Dynamic _options,Dynamic _pos_info)
{  hx::ObjectPtr< Visual_obj > _result_ = new Visual_obj();
	_result_->__construct(_options,_pos_info);
	return _result_;}

Dynamic Visual_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Visual_obj > _result_ = new Visual_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Visual_obj::_create_geometry( ){
{
		HX_STACK_FRAME("luxe.Visual","_create_geometry",0x0dc0f2ac,"luxe.Visual._create_geometry","luxe/Visual.hx",121,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		Dynamic tmp = this->options;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		bool tmp1 = (tmp->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(126)
			Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			bool tmp3 = (tmp2->__Field(HX_HCSTRING("no_geometry","\xb0","\x09","\x1b","\xda"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			if ((tmp4)){
				HX_STACK_LINE(126)
				Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(126)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(126)
				tmp5 = (tmp7->__Field(HX_HCSTRING("no_geometry","\xb0","\x09","\x1b","\xda"), hx::paccDynamic ) == false);
			}
			else{
				HX_STACK_LINE(126)
				tmp5 = true;
			}
			HX_STACK_LINE(126)
			if ((tmp5)){
				HX_STACK_LINE(128)
				this->_creating_geometry = true;
				HX_STACK_LINE(130)
				::phoenix::Batcher _batcher = null();		HX_STACK_VAR(_batcher,"_batcher");
				HX_STACK_LINE(131)
				Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(131)
				bool tmp7 = (tmp6->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(131)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(131)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(131)
				if ((tmp8)){
					HX_STACK_LINE(131)
					Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(131)
					Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(131)
					tmp9 = (tmp11->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) == false);
				}
				else{
					HX_STACK_LINE(131)
					tmp9 = true;
				}
				HX_STACK_LINE(131)
				if ((tmp9)){
					HX_STACK_LINE(132)
					Dynamic tmp10 = this->options;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(132)
					bool tmp11 = (tmp10->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(132)
					if ((tmp11)){
						HX_STACK_LINE(133)
						Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(133)
						_batcher = tmp12->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
					}
					else{
						HX_STACK_LINE(135)
						::phoenix::Renderer tmp12 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(135)
						_batcher = tmp12->batcher;
					}
				}
				HX_STACK_LINE(140)
				::String tmp10 = this->get_name();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(140)
				::String tmp11 = (tmp10 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(143)
				::phoenix::Vector tmp12 = this->size;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(143)
				Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(144)
				::phoenix::Vector tmp14 = this->size;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(144)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(145)
				::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new((int)1,(int)1,(int)1,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(146)
				::phoenix::Texture tmp17 = this->texture;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(147)
				::phoenix::Color tmp18 = this->color;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(148)
				::phoenix::Shader tmp19 = this->shader;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(149)
				::phoenix::Batcher tmp20 = _batcher;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(150)
				Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(150)
				bool tmp22 = (tmp21->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(150)
				Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(150)
				if ((tmp22)){
					HX_STACK_LINE(150)
					tmp23 = (int)0;
				}
				else{
					HX_STACK_LINE(150)
					Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(150)
					tmp23 = tmp24->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );
				}
				HX_STACK_LINE(151)
				Dynamic tmp24 = this->options;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(151)
				bool tmp25 = (tmp24->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(151)
				Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(151)
				if ((tmp25)){
					HX_STACK_LINE(151)
					tmp26 = this->visible;
				}
				else{
					HX_STACK_LINE(151)
					Dynamic tmp27 = this->options;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(151)
					tmp26 = tmp27->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
				}
				struct _Function_3_1{
					inline static Dynamic Block( Float &tmp13,::phoenix::Texture &tmp17,::phoenix::Batcher &tmp20,::String &tmp11,::phoenix::Shader &tmp19,Dynamic &tmp23,Dynamic &tmp26,Float &tmp15,::phoenix::Vector &tmp16,::phoenix::Color &tmp18){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Visual.hx",139,0xe3547505)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp11,false);
							__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
							__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ((Dynamic)((int)0)),false);
							__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp13,false);
							__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp15,false);
							__result->Add(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78") , tmp16,false);
							__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp17,false);
							__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp18,false);
							__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp19,false);
							__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp20,false);
							__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp23,false);
							__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp26,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(139)
				Dynamic tmp27 = _Function_3_1::Block(tmp13,tmp17,tmp20,tmp11,tmp19,tmp23,tmp26,tmp15,tmp16,tmp18);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(139)
				::phoenix::geometry::QuadGeometry tmp28 = ::phoenix::geometry::QuadGeometry_obj::__new(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(139)
				this->set_geometry(tmp28);
				HX_STACK_LINE(154)
				this->_creating_geometry = false;
				HX_STACK_LINE(157)
				this->on_geometry_created();
			}
		}
		else{
			HX_STACK_LINE(163)
			Dynamic tmp2 = this->options;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			this->set_geometry(tmp2->__Field(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"), hx::paccDynamic ));
		}
		HX_STACK_LINE(168)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		if ((tmp3)){
			HX_STACK_LINE(169)
			::String tmp4 = this->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			::String tmp5 = (tmp4 + HX_HCSTRING(".visual","\x6e","\x79","\x67","\x68"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			::phoenix::geometry::Geometry tmp6 = this->geometry;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			tmp6->id = tmp5;
			HX_STACK_LINE(170)
			::String tmp7 = this->get_name();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			::String tmp8 = (tmp7 + HX_HCSTRING(".visual.transform","\x6c","\x86","\x5f","\xe2"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(170)
			::phoenix::geometry::Geometry tmp9 = this->geometry;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			tmp9->transform->id = tmp8;
		}
		HX_STACK_LINE(174)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		bool tmp5 = (tmp4->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		if ((tmp5)){
			HX_STACK_LINE(175)
			this->_has_custom_origin = true;
			HX_STACK_LINE(176)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			this->set_origin(tmp6->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic ));
		}
		HX_STACK_LINE(180)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		bool tmp7 = (tmp6->__Field(HX_HCSTRING("rotation_z","\xf9","\xdb","\x7e","\xe4"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(180)
		if ((tmp7)){
			HX_STACK_LINE(181)
			Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(181)
			this->set_rotation_z(tmp8->__Field(HX_HCSTRING("rotation_z","\xf9","\xdb","\x7e","\xe4"), hx::paccDynamic ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,_create_geometry,(void))

Void Visual_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Visual","ondestroy",0x45842a65,"luxe.Visual.ondestroy","luxe/Visual.hx",186,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		if ((tmp1)){
			HX_STACK_LINE(189)
			::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			::phoenix::geometry::Geometry tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			tmp2 = tmp4->added;
		}
		else{
			HX_STACK_LINE(189)
			tmp2 = false;
		}
		HX_STACK_LINE(189)
		if ((tmp2)){
			HX_STACK_LINE(190)
			::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			tmp3->drop(true);
		}
		HX_STACK_LINE(194)
		this->set_geometry(null());
		HX_STACK_LINE(195)
		this->set_texture(null());
	}
return null();
}


Void Visual_obj::on_geometry_created( ){
{
		HX_STACK_FRAME("luxe.Visual","on_geometry_created",0x622713a5,"luxe.Visual.on_geometry_created","luxe/Visual.hx",199,0xe3547505)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,on_geometry_created,(void))

bool Visual_obj::set_visible( bool _v){
	HX_STACK_FRAME("luxe.Visual","set_visible",0x8da44abf,"luxe.Visual.set_visible","luxe/Visual.hx",207,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(209)
	this->visible = _v;
	HX_STACK_LINE(212)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	if ((tmp1)){
		HX_STACK_LINE(213)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		bool tmp3 = this->visible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		tmp2->set_visible(tmp3);
	}
	HX_STACK_LINE(216)
	bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_visible,return )

Float Visual_obj::set_depth( Float _v){
	HX_STACK_FRAME("luxe.Visual","set_depth",0x14c8a610,"luxe.Visual.set_depth","luxe/Visual.hx",220,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(222)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	if ((tmp1)){
		HX_STACK_LINE(223)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		Float tmp3 = _v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		tmp2->set_depth(tmp3);
	}
	HX_STACK_LINE(226)
	Float tmp2 = this->depth = _v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_depth,return )

::phoenix::Color Visual_obj::set_color( ::phoenix::Color _c){
	HX_STACK_FRAME("luxe.Visual","set_color",0x87fb2670,"luxe.Visual.set_color","luxe/Visual.hx",232,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(234)
	::phoenix::Color tmp = this->color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	if ((tmp1)){
		HX_STACK_LINE(234)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		::phoenix::geometry::Geometry tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(234)
		tmp2 = (tmp4 != null());
	}
	else{
		HX_STACK_LINE(234)
		tmp2 = false;
	}
	HX_STACK_LINE(234)
	if ((tmp2)){
		HX_STACK_LINE(235)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		::phoenix::Color tmp4 = _c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		tmp3->set_color(tmp4);
	}
	HX_STACK_LINE(238)
	::phoenix::Color tmp3 = this->color = _c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_color,return )

::phoenix::Texture Visual_obj::set_texture( ::phoenix::Texture _t){
	HX_STACK_FRAME("luxe.Visual","set_texture",0x89609b28,"luxe.Visual.set_texture","luxe/Visual.hx",242,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(244)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	if ((tmp1)){
		HX_STACK_LINE(244)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		::phoenix::geometry::Geometry tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		::phoenix::Texture tmp5 = tmp4->state->texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		::phoenix::Texture tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(244)
		::phoenix::Texture tmp7 = _t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		tmp2 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(244)
		tmp2 = false;
	}
	HX_STACK_LINE(244)
	if ((tmp2)){
		HX_STACK_LINE(245)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		::phoenix::Texture tmp4 = _t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		tmp3->set_texture(tmp4);
	}
	HX_STACK_LINE(248)
	::phoenix::Texture tmp3 = this->texture = _t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(248)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_texture,return )

::phoenix::Shader Visual_obj::set_shader( ::phoenix::Shader _s){
	HX_STACK_FRAME("luxe.Visual","set_shader",0xca607578,"luxe.Visual.set_shader","luxe/Visual.hx",251,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(253)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	if ((tmp1)){
		HX_STACK_LINE(253)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		::phoenix::geometry::Geometry tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(253)
		::phoenix::Shader tmp5 = tmp4->state->shader;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(253)
		::phoenix::Shader tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(253)
		::phoenix::Shader tmp7 = _s;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(253)
		tmp2 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(253)
		tmp2 = false;
	}
	HX_STACK_LINE(253)
	if ((tmp2)){
		HX_STACK_LINE(254)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		::phoenix::Shader tmp4 = _s;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		tmp3->set_shader(tmp4);
	}
	HX_STACK_LINE(257)
	::phoenix::Shader tmp3 = this->shader = _s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(257)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_shader,return )

::phoenix::geometry::Geometry Visual_obj::set_geometry( ::phoenix::geometry::Geometry _g){
	HX_STACK_FRAME("luxe.Visual","set_geometry",0x180133c5,"luxe.Visual.set_geometry","luxe/Visual.hx",264,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_g,"_g")
	HX_STACK_LINE(267)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	::phoenix::geometry::Geometry tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
	if ((tmp2)){
		HX_STACK_LINE(268)
		::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		return tmp3;
	}
	HX_STACK_LINE(272)
	::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(272)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(272)
	if ((tmp4)){
		HX_STACK_LINE(273)
		::phoenix::geometry::Geometry tmp5 = this->geometry;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(273)
		tmp5->drop(null());
	}
	HX_STACK_LINE(277)
	this->geometry = _g;
	HX_STACK_LINE(280)
	::phoenix::geometry::Geometry tmp5 = this->geometry;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(280)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(280)
	if ((tmp6)){
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			::phoenix::geometry::Geometry tmp7 = this->geometry;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(283)
			::phoenix::Transform _this = tmp7->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(283)
			::phoenix::Transform tmp8 = this->get_transform();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(283)
			::phoenix::Transform _p = tmp8;		HX_STACK_VAR(_p,"_p");
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				_this->dirty = true;
				HX_STACK_LINE(283)
				bool tmp9 = _this->dirty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(283)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(283)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(283)
				if ((tmp10)){
					HX_STACK_LINE(283)
					bool tmp12 = _this->_setup;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(283)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(283)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(283)
					tmp11 = !(tmp14);
				}
				else{
					HX_STACK_LINE(283)
					tmp11 = false;
				}
				HX_STACK_LINE(283)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(283)
				if ((tmp12)){
					HX_STACK_LINE(283)
					tmp13 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(283)
					tmp13 = false;
				}
				HX_STACK_LINE(283)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(283)
				if ((tmp13)){
					HX_STACK_LINE(283)
					int tmp15 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(283)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(283)
					tmp14 = (tmp16 > (int)0);
				}
				else{
					HX_STACK_LINE(283)
					tmp14 = false;
				}
				HX_STACK_LINE(283)
				if ((tmp14)){
					HX_STACK_LINE(283)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(283)
					cpp::ArrayBase _g11 = _this->_dirty_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(283)
					while((true)){
						HX_STACK_LINE(283)
						bool tmp15 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(283)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(283)
						if ((tmp16)){
							HX_STACK_LINE(283)
							break;
						}
						HX_STACK_LINE(283)
						Dynamic tmp17 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(283)
						Dynamic _handler = tmp17;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(283)
						++(_g1);
						HX_STACK_LINE(283)
						bool tmp18 = (_handler != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(283)
						if ((tmp18)){
							HX_STACK_LINE(283)
							::phoenix::Transform tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(283)
							_handler(tmp19).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(283)
				_this->dirty;
			}
			HX_STACK_LINE(283)
			bool tmp9 = (_this->parent != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(283)
			if ((tmp9)){
				HX_STACK_LINE(283)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(283)
				bool tmp10 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(283)
				if ((tmp10)){
					HX_STACK_LINE(283)
					false;
				}
				else{
					HX_STACK_LINE(283)
					Dynamic tmp11 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(283)
					_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
				}
			}
			HX_STACK_LINE(283)
			_this->parent = _p;
			HX_STACK_LINE(283)
			bool tmp10 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(283)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(283)
			if ((tmp10)){
				HX_STACK_LINE(283)
				int tmp12 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(283)
				tmp11 = (tmp13 > (int)0);
			}
			else{
				HX_STACK_LINE(283)
				tmp11 = false;
			}
			HX_STACK_LINE(283)
			if ((tmp11)){
				HX_STACK_LINE(283)
				::phoenix::Transform _parent = _this->parent;		HX_STACK_VAR(_parent,"_parent");
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(283)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(283)
					cpp::ArrayBase _g11 = _this->_parent_handlers;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(283)
					while((true)){
						HX_STACK_LINE(283)
						bool tmp12 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(283)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(283)
						if ((tmp13)){
							HX_STACK_LINE(283)
							break;
						}
						HX_STACK_LINE(283)
						Dynamic tmp14 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(283)
						Dynamic _handler = tmp14;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(283)
						++(_g1);
						HX_STACK_LINE(283)
						bool tmp15 = (_handler != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(283)
						if ((tmp15)){
							HX_STACK_LINE(283)
							::phoenix::Transform tmp16 = _parent;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(283)
							_handler(tmp16).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(283)
			bool tmp12 = (_this->parent != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(283)
			if ((tmp12)){
				HX_STACK_LINE(283)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(283)
				bool tmp13 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(283)
				if ((tmp13)){
					HX_STACK_LINE(283)
					_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(283)
				Dynamic tmp14 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(283)
				_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
			}
			HX_STACK_LINE(283)
			_this->parent;
		}
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(292)
			bool tmp7 = this->_creating_geometry;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(292)
			bool tmp8 = (tmp7 == false);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(292)
			if ((tmp8)){
				HX_STACK_LINE(294)
				::phoenix::geometry::Geometry tmp9 = this->geometry;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(294)
				::phoenix::Color tmp10 = this->color;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(294)
				tmp9->set_color(tmp10);
				HX_STACK_LINE(295)
				::phoenix::geometry::Geometry tmp11 = this->geometry;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(295)
				Float tmp12 = this->depth;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(295)
				tmp11->set_depth(tmp12);
				HX_STACK_LINE(296)
				::phoenix::geometry::Geometry tmp13 = this->geometry;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(296)
				bool tmp14 = this->visible;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(296)
				tmp13->set_visible(tmp14);
				HX_STACK_LINE(299)
				bool tmp15 = this->ignore_texture_on_geometry_change;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(299)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(299)
				if ((tmp16)){
				}
			}
		}
	}
	HX_STACK_LINE(308)
	::phoenix::geometry::Geometry tmp7 = this->geometry;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(308)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_geometry,return )

Void Visual_obj::set_parent_from_transform( ::phoenix::Transform _parent){
{
		HX_STACK_FRAME("luxe.Visual","set_parent_from_transform",0x5e81f8d9,"luxe.Visual.set_parent_from_transform","luxe/Visual.hx",315,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parent,"_parent")
		HX_STACK_LINE(317)
		::phoenix::Transform tmp = _parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(317)
		this->super::set_parent_from_transform(tmp);
		HX_STACK_LINE(319)
		::phoenix::geometry::Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		if ((tmp2)){
			HX_STACK_LINE(321)
			::phoenix::geometry::Geometry tmp3 = this->geometry;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(321)
			::phoenix::Transform _this = tmp3->transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(321)
			::phoenix::Transform tmp4 = this->get_transform();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			::phoenix::Transform _p = tmp4;		HX_STACK_VAR(_p,"_p");
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				_this->dirty = true;
				HX_STACK_LINE(321)
				bool tmp5 = _this->dirty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(321)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(321)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(321)
				if ((tmp6)){
					HX_STACK_LINE(321)
					bool tmp8 = _this->_setup;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(321)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(321)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(321)
					tmp7 = !(tmp10);
				}
				else{
					HX_STACK_LINE(321)
					tmp7 = false;
				}
				HX_STACK_LINE(321)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(321)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(321)
				if ((tmp8)){
					HX_STACK_LINE(321)
					tmp9 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(321)
					tmp9 = false;
				}
				HX_STACK_LINE(321)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(321)
				if ((tmp9)){
					HX_STACK_LINE(321)
					int tmp11 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(321)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(321)
					tmp10 = (tmp12 > (int)0);
				}
				else{
					HX_STACK_LINE(321)
					tmp10 = false;
				}
				HX_STACK_LINE(321)
				if ((tmp10)){
					HX_STACK_LINE(321)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(321)
					cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(321)
					while((true)){
						HX_STACK_LINE(321)
						bool tmp11 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(321)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(321)
						if ((tmp12)){
							HX_STACK_LINE(321)
							break;
						}
						HX_STACK_LINE(321)
						Dynamic tmp13 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(321)
						Dynamic _handler = tmp13;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(321)
						++(_g);
						HX_STACK_LINE(321)
						bool tmp14 = (_handler != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(321)
						if ((tmp14)){
							HX_STACK_LINE(321)
							::phoenix::Transform tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(321)
							_handler(tmp15).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(321)
				_this->dirty;
			}
			HX_STACK_LINE(321)
			bool tmp5 = (_this->parent != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(321)
			if ((tmp5)){
				HX_STACK_LINE(321)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(321)
				bool tmp6 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(321)
				if ((tmp6)){
					HX_STACK_LINE(321)
					false;
				}
				else{
					HX_STACK_LINE(321)
					Dynamic tmp7 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(321)
					_this1->_clean_handlers->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp7);
				}
			}
			HX_STACK_LINE(321)
			_this->parent = _p;
			HX_STACK_LINE(321)
			bool tmp6 = (_this->_parent_handlers != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(321)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			if ((tmp6)){
				HX_STACK_LINE(321)
				int tmp8 = _this->_parent_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(321)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(321)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(321)
				tmp7 = false;
			}
			HX_STACK_LINE(321)
			if ((tmp7)){
				HX_STACK_LINE(321)
				::phoenix::Transform _parent1 = _this->parent;		HX_STACK_VAR(_parent1,"_parent1");
				HX_STACK_LINE(321)
				{
					HX_STACK_LINE(321)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(321)
					cpp::ArrayBase _g1 = _this->_parent_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(321)
					while((true)){
						HX_STACK_LINE(321)
						bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(321)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(321)
						if ((tmp9)){
							HX_STACK_LINE(321)
							break;
						}
						HX_STACK_LINE(321)
						Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(321)
						Dynamic _handler = tmp10;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(321)
						++(_g);
						HX_STACK_LINE(321)
						bool tmp11 = (_handler != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(321)
						if ((tmp11)){
							HX_STACK_LINE(321)
							::phoenix::Transform tmp12 = _parent1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(321)
							_handler(tmp12).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(321)
			bool tmp8 = (_this->parent != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			if ((tmp8)){
				HX_STACK_LINE(321)
				::phoenix::Transform _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(321)
				bool tmp9 = (_this1->_clean_handlers == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(321)
				if ((tmp9)){
					HX_STACK_LINE(321)
					_this1->_clean_handlers = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(321)
				Dynamic tmp10 = _this->on_parent_cleaned_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(321)
				_this1->_clean_handlers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
			}
			HX_STACK_LINE(321)
			_this->parent;
		}
	}
return null();
}


Void Visual_obj::set_rotation_from_transform( ::phoenix::Quaternion _rotation){
{
		HX_STACK_FRAME("luxe.Visual","set_rotation_from_transform",0x9fdb9485,"luxe.Visual.set_rotation_from_transform","luxe/Visual.hx",326,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_rotation,"_rotation")
		HX_STACK_LINE(328)
		::phoenix::Quaternion tmp = _rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		this->super::set_rotation_from_transform(tmp);
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			::phoenix::Vector tmp1 = this->_rotation_euler;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(331)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(331)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(331)
			Float tmp2 = (_rotation->x * _rotation->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(331)
			Float sqx = tmp2;		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(331)
			Float tmp3 = (_rotation->y * _rotation->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(331)
			Float sqy = tmp3;		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(331)
			Float tmp4 = (_rotation->z * _rotation->z);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(331)
			Float sqz = tmp4;		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(331)
			Float tmp5 = (_rotation->w * _rotation->w);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(331)
			Float sqw = tmp5;		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(331)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(331)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(331)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(331)
			bool tmp6 = (order == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(331)
			if ((tmp6)){
				HX_STACK_LINE(331)
				Float tmp7 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(331)
				Float tmp8 = (_rotation->y * _rotation->z);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(331)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(331)
				Float tmp10 = ((int)2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(331)
				Float tmp11 = (sqw - sqx);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(331)
				Float tmp12 = sqy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(331)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(331)
				Float tmp14 = sqz;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(331)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(331)
				Float tmp16 = ::Math_obj::atan2(tmp10,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(331)
				_x = tmp16;
				HX_STACK_LINE(331)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(331)
				{
					HX_STACK_LINE(331)
					Float tmp18 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(331)
					Float tmp19 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(331)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(331)
					Float tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(331)
					Float value = tmp21;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(331)
					bool tmp22 = (value < (int)-1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(331)
					if ((tmp22)){
						HX_STACK_LINE(331)
						tmp17 = (int)-1;
					}
					else{
						HX_STACK_LINE(331)
						bool tmp23 = (value > (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(331)
						if ((tmp23)){
							HX_STACK_LINE(331)
							tmp17 = (int)1;
						}
						else{
							HX_STACK_LINE(331)
							tmp17 = value;
						}
					}
				}
				HX_STACK_LINE(331)
				Float tmp18 = ::Math_obj::asin(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(331)
				_y = tmp18;
				HX_STACK_LINE(331)
				Float tmp19 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(331)
				Float tmp20 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(331)
				Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(331)
				Float tmp22 = ((int)2 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(331)
				Float tmp23 = (sqw + sqx);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(331)
				Float tmp24 = sqy;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(331)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(331)
				Float tmp26 = sqz;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(331)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(331)
				Float tmp28 = ::Math_obj::atan2(tmp22,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(331)
				_z = tmp28;
			}
			else{
				HX_STACK_LINE(331)
				bool tmp7 = (order == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(331)
				if ((tmp7)){
					HX_STACK_LINE(331)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(331)
					{
						HX_STACK_LINE(331)
						Float tmp9 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(331)
						Float tmp10 = (_rotation->y * _rotation->z);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(331)
						Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(331)
						Float tmp12 = ((int)2 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(331)
						Float value = tmp12;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(331)
						bool tmp13 = (value < (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(331)
						if ((tmp13)){
							HX_STACK_LINE(331)
							tmp8 = (int)-1;
						}
						else{
							HX_STACK_LINE(331)
							bool tmp14 = (value > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(331)
							if ((tmp14)){
								HX_STACK_LINE(331)
								tmp8 = (int)1;
							}
							else{
								HX_STACK_LINE(331)
								tmp8 = value;
							}
						}
					}
					HX_STACK_LINE(331)
					Float tmp9 = ::Math_obj::asin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(331)
					_x = tmp9;
					HX_STACK_LINE(331)
					Float tmp10 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(331)
					Float tmp11 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(331)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(331)
					Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(331)
					Float tmp14 = (sqw - sqx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(331)
					Float tmp15 = sqy;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(331)
					Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(331)
					Float tmp17 = sqz;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(331)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(331)
					Float tmp19 = ::Math_obj::atan2(tmp13,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(331)
					_y = tmp19;
					HX_STACK_LINE(331)
					Float tmp20 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(331)
					Float tmp21 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(331)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(331)
					Float tmp23 = ((int)2 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(331)
					Float tmp24 = (sqw - sqx);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(331)
					Float tmp25 = sqy;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(331)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(331)
					Float tmp27 = sqz;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(331)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(331)
					Float tmp29 = ::Math_obj::atan2(tmp23,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(331)
					_z = tmp29;
				}
				else{
					HX_STACK_LINE(331)
					bool tmp8 = (order == (int)2);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(331)
					if ((tmp8)){
						HX_STACK_LINE(331)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(331)
						{
							HX_STACK_LINE(331)
							Float tmp10 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(331)
							Float tmp11 = (_rotation->y * _rotation->z);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(331)
							Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(331)
							Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(331)
							Float value = tmp13;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(331)
							bool tmp14 = (value < (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(331)
							if ((tmp14)){
								HX_STACK_LINE(331)
								tmp9 = (int)-1;
							}
							else{
								HX_STACK_LINE(331)
								bool tmp15 = (value > (int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(331)
								if ((tmp15)){
									HX_STACK_LINE(331)
									tmp9 = (int)1;
								}
								else{
									HX_STACK_LINE(331)
									tmp9 = value;
								}
							}
						}
						HX_STACK_LINE(331)
						Float tmp10 = ::Math_obj::asin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(331)
						_x = tmp10;
						HX_STACK_LINE(331)
						Float tmp11 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(331)
						Float tmp12 = (_rotation->z * _rotation->x);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(331)
						Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(331)
						Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(331)
						Float tmp15 = (sqw - sqx);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(331)
						Float tmp16 = sqy;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(331)
						Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(331)
						Float tmp18 = sqz;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(331)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(331)
						Float tmp20 = ::Math_obj::atan2(tmp14,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(331)
						_y = tmp20;
						HX_STACK_LINE(331)
						Float tmp21 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(331)
						Float tmp22 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(331)
						Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(331)
						Float tmp24 = ((int)2 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(331)
						Float tmp25 = (sqw - sqx);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(331)
						Float tmp26 = sqy;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(331)
						Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(331)
						Float tmp28 = sqz;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(331)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(331)
						Float tmp30 = ::Math_obj::atan2(tmp24,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(331)
						_z = tmp30;
					}
					else{
						HX_STACK_LINE(331)
						bool tmp9 = (order == (int)3);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(331)
						if ((tmp9)){
							HX_STACK_LINE(331)
							Float tmp10 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(331)
							Float tmp11 = (_rotation->z * _rotation->y);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(331)
							Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(331)
							Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(331)
							Float tmp14 = (sqw - sqx);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(331)
							Float tmp15 = sqy;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(331)
							Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(331)
							Float tmp17 = sqz;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(331)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(331)
							Float tmp19 = ::Math_obj::atan2(tmp13,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(331)
							_x = tmp19;
							HX_STACK_LINE(331)
							Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(331)
							{
								HX_STACK_LINE(331)
								Float tmp21 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(331)
								Float tmp22 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(331)
								Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(331)
								Float tmp24 = ((int)2 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(331)
								Float value = tmp24;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(331)
								bool tmp25 = (value < (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(331)
								if ((tmp25)){
									HX_STACK_LINE(331)
									tmp20 = (int)-1;
								}
								else{
									HX_STACK_LINE(331)
									bool tmp26 = (value > (int)1);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(331)
									if ((tmp26)){
										HX_STACK_LINE(331)
										tmp20 = (int)1;
									}
									else{
										HX_STACK_LINE(331)
										tmp20 = value;
									}
								}
							}
							HX_STACK_LINE(331)
							Float tmp21 = ::Math_obj::asin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(331)
							_y = tmp21;
							HX_STACK_LINE(331)
							Float tmp22 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(331)
							Float tmp23 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(331)
							Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(331)
							Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(331)
							Float tmp26 = (sqw + sqx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(331)
							Float tmp27 = sqy;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(331)
							Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(331)
							Float tmp29 = sqz;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(331)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(331)
							Float tmp31 = ::Math_obj::atan2(tmp25,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(331)
							_z = tmp31;
						}
						else{
							HX_STACK_LINE(331)
							bool tmp10 = (order == (int)4);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(331)
							if ((tmp10)){
								HX_STACK_LINE(331)
								Float tmp11 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(331)
								Float tmp12 = (_rotation->z * _rotation->y);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(331)
								Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(331)
								Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(331)
								Float tmp15 = (sqw - sqx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(331)
								Float tmp16 = sqy;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(331)
								Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(331)
								Float tmp18 = sqz;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(331)
								Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(331)
								Float tmp20 = ::Math_obj::atan2(tmp14,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(331)
								_x = tmp20;
								HX_STACK_LINE(331)
								Float tmp21 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(331)
								Float tmp22 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(331)
								Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(331)
								Float tmp24 = ((int)2 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(331)
								Float tmp25 = (sqw + sqx);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(331)
								Float tmp26 = sqy;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(331)
								Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(331)
								Float tmp28 = sqz;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(331)
								Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(331)
								Float tmp30 = ::Math_obj::atan2(tmp24,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(331)
								_y = tmp30;
								HX_STACK_LINE(331)
								Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(331)
								{
									HX_STACK_LINE(331)
									Float tmp32 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(331)
									Float tmp33 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(331)
									Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(331)
									Float tmp35 = ((int)2 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(331)
									Float value = tmp35;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(331)
									bool tmp36 = (value < (int)-1);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(331)
									if ((tmp36)){
										HX_STACK_LINE(331)
										tmp31 = (int)-1;
									}
									else{
										HX_STACK_LINE(331)
										bool tmp37 = (value > (int)1);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(331)
										if ((tmp37)){
											HX_STACK_LINE(331)
											tmp31 = (int)1;
										}
										else{
											HX_STACK_LINE(331)
											tmp31 = value;
										}
									}
								}
								HX_STACK_LINE(331)
								Float tmp32 = ::Math_obj::asin(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(331)
								_z = tmp32;
							}
							else{
								HX_STACK_LINE(331)
								bool tmp11 = (order == (int)5);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(331)
								if ((tmp11)){
									HX_STACK_LINE(331)
									Float tmp12 = (_rotation->x * _rotation->w);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(331)
									Float tmp13 = (_rotation->y * _rotation->z);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(331)
									Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(331)
									Float tmp15 = ((int)2 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(331)
									Float tmp16 = (sqw - sqx);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(331)
									Float tmp17 = sqy;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(331)
									Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(331)
									Float tmp19 = sqz;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(331)
									Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(331)
									Float tmp21 = ::Math_obj::atan2(tmp15,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(331)
									_x = tmp21;
									HX_STACK_LINE(331)
									Float tmp22 = (_rotation->x * _rotation->z);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(331)
									Float tmp23 = (_rotation->y * _rotation->w);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(331)
									Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(331)
									Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(331)
									Float tmp26 = (sqw + sqx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(331)
									Float tmp27 = sqy;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(331)
									Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(331)
									Float tmp29 = sqz;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(331)
									Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(331)
									Float tmp31 = ::Math_obj::atan2(tmp25,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(331)
									_y = tmp31;
									HX_STACK_LINE(331)
									Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(331)
									{
										HX_STACK_LINE(331)
										Float tmp33 = (_rotation->z * _rotation->w);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(331)
										Float tmp34 = (_rotation->x * _rotation->y);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(331)
										Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(331)
										Float tmp36 = ((int)2 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(331)
										Float value = tmp36;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(331)
										bool tmp37 = (value < (int)-1);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(331)
										if ((tmp37)){
											HX_STACK_LINE(331)
											tmp32 = (int)-1;
										}
										else{
											HX_STACK_LINE(331)
											bool tmp38 = (value > (int)1);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(331)
											if ((tmp38)){
												HX_STACK_LINE(331)
												tmp32 = (int)1;
											}
											else{
												HX_STACK_LINE(331)
												tmp32 = value;
											}
										}
									}
									HX_STACK_LINE(331)
									Float tmp33 = ::Math_obj::asin(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(331)
									_z = tmp33;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(331)
			{
				HX_STACK_LINE(331)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(331)
				_this->ignore_listeners = true;
				HX_STACK_LINE(331)
				{
					HX_STACK_LINE(331)
					_this->x = _x;
					HX_STACK_LINE(331)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(331)
					if ((tmp7)){
						HX_STACK_LINE(331)
						_this->x;
					}
					else{
						HX_STACK_LINE(331)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(331)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(331)
						if ((tmp8)){
							HX_STACK_LINE(331)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(331)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(331)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(331)
							tmp9 = false;
						}
						HX_STACK_LINE(331)
						if ((tmp9)){
							HX_STACK_LINE(331)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(331)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(331)
						_this->x;
					}
				}
				HX_STACK_LINE(331)
				{
					HX_STACK_LINE(331)
					_this->y = _y;
					HX_STACK_LINE(331)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(331)
					if ((tmp7)){
						HX_STACK_LINE(331)
						_this->y;
					}
					else{
						HX_STACK_LINE(331)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(331)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(331)
						if ((tmp8)){
							HX_STACK_LINE(331)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(331)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(331)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(331)
							tmp9 = false;
						}
						HX_STACK_LINE(331)
						if ((tmp9)){
							HX_STACK_LINE(331)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(331)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(331)
						_this->y;
					}
				}
				HX_STACK_LINE(331)
				{
					HX_STACK_LINE(331)
					_this->z = _z;
					HX_STACK_LINE(331)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(331)
					if ((tmp7)){
						HX_STACK_LINE(331)
						_this->z;
					}
					else{
						HX_STACK_LINE(331)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(331)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(331)
						if ((tmp8)){
							HX_STACK_LINE(331)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(331)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(331)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(331)
							tmp9 = false;
						}
						HX_STACK_LINE(331)
						if ((tmp9)){
							HX_STACK_LINE(331)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(331)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(331)
						_this->z;
					}
				}
				HX_STACK_LINE(331)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(331)
				bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(331)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(331)
				if ((tmp7)){
					HX_STACK_LINE(331)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(331)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(331)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(331)
					tmp8 = false;
				}
				HX_STACK_LINE(331)
				if ((tmp8)){
					HX_STACK_LINE(331)
					Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(331)
					_this->listen_x(tmp9);
				}
				HX_STACK_LINE(331)
				bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(331)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(331)
				if ((tmp9)){
					HX_STACK_LINE(331)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(331)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(331)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(331)
					tmp10 = false;
				}
				HX_STACK_LINE(331)
				if ((tmp10)){
					HX_STACK_LINE(331)
					Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(331)
					_this->listen_y(tmp11);
				}
				HX_STACK_LINE(331)
				bool tmp11 = (_this->listen_z != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(331)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(331)
				if ((tmp11)){
					HX_STACK_LINE(331)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(331)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(331)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(331)
					tmp12 = false;
				}
				HX_STACK_LINE(331)
				if ((tmp12)){
					HX_STACK_LINE(331)
					Float tmp13 = _this->z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(331)
					_this->listen_z(tmp13);
				}
				HX_STACK_LINE(331)
				_this;
			}
			HX_STACK_LINE(331)
			_this;
		}
		HX_STACK_LINE(332)
		::phoenix::Quaternion tmp1 = this->_rotation_quat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		::phoenix::Quaternion tmp2 = _rotation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		tmp1->copy(tmp2);
	}
return null();
}


::phoenix::Vector Visual_obj::set_size( ::phoenix::Vector _v){
	HX_STACK_FRAME("luxe.Visual","set_size",0x32330c54,"luxe.Visual.set_size","luxe/Visual.hx",338,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(340)
	this->size = _v;
	HX_STACK_LINE(342)
	::phoenix::Vector tmp = this->size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	if ((tmp1)){
		HX_STACK_LINE(343)
		::phoenix::Vector tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		Dynamic tmp3 = this->_size_change_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		::phoenix::Vector_obj::Listen(tmp2,tmp3);
	}
	HX_STACK_LINE(345)
	::phoenix::Vector tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_size,return )

Float Visual_obj::get_rotation_z( ){
	HX_STACK_FRAME("luxe.Visual","get_rotation_z",0x34f3cf58,"luxe.Visual.get_rotation_z","luxe/Visual.hx",351,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(353)
	{
		HX_STACK_LINE(353)
		Float tmp1 = this->get_radians();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(353)
		Float radians = tmp1;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(353)
		tmp = (radians * ((Float)57.2957795130823797));
	}
	HX_STACK_LINE(353)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,get_rotation_z,return )

Float Visual_obj::set_rotation_z( Float _degrees){
	HX_STACK_FRAME("luxe.Visual","set_rotation_z",0x5513b7cc,"luxe.Visual.set_rotation_z","luxe/Visual.hx",357,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_degrees,"_degrees")
	HX_STACK_LINE(359)
	Float tmp = (_degrees * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	this->set_radians(tmp);
	HX_STACK_LINE(361)
	Float tmp1 = _degrees;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_rotation_z,return )

Float Visual_obj::set_radians( Float _r){
	HX_STACK_FRAME("luxe.Visual","set_radians",0x117018bf,"luxe.Visual.set_radians","luxe/Visual.hx",365,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(367)
	{
		HX_STACK_LINE(367)
		::phoenix::Vector tmp = this->_rotation_euler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		::phoenix::Vector _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(367)
		_this->z = _r;
		HX_STACK_LINE(367)
		bool tmp1 = _this->_construct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		if ((tmp1)){
			HX_STACK_LINE(367)
			_this->z;
		}
		else{
			HX_STACK_LINE(367)
			bool tmp2 = (_this->listen_z != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(367)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(367)
			if ((tmp2)){
				HX_STACK_LINE(367)
				bool tmp4 = _this->ignore_listeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(367)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(367)
				tmp3 = !(tmp5);
			}
			else{
				HX_STACK_LINE(367)
				tmp3 = false;
			}
			HX_STACK_LINE(367)
			if ((tmp3)){
				HX_STACK_LINE(367)
				Float tmp4 = _r;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(367)
				_this->listen_z(tmp4);
			}
			HX_STACK_LINE(367)
			_this->z;
		}
	}
	HX_STACK_LINE(368)
	::phoenix::Quaternion tmp = this->_rotation_quat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	::phoenix::Vector tmp1 = this->_rotation_euler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	tmp->setFromEuler(tmp1,null());
	HX_STACK_LINE(370)
	::phoenix::Quaternion tmp2 = this->_rotation_quat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	::phoenix::Quaternion tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(370)
	this->set_rotation(tmp3);
	HX_STACK_LINE(372)
	Float tmp4 = this->radians = _r;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(372)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_radians,return )

Float Visual_obj::get_radians( ){
	HX_STACK_FRAME("luxe.Visual","get_radians",0x070311b3,"luxe.Visual.get_radians","luxe/Visual.hx",376,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	Float tmp = this->radians;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Visual_obj,get_radians,return )

bool Visual_obj::set_locked( bool _l){
	HX_STACK_FRAME("luxe.Visual","set_locked",0x0706bb5d,"luxe.Visual.set_locked","luxe/Visual.hx",382,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_l,"_l")
	HX_STACK_LINE(384)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(384)
	if ((tmp1)){
		HX_STACK_LINE(385)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(385)
		bool tmp3 = _l;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(385)
		tmp2->set_locked(tmp3);
	}
	HX_STACK_LINE(388)
	bool tmp2 = this->locked = _l;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(388)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_locked,return )

::phoenix::Rectangle Visual_obj::set_clip_rect( ::phoenix::Rectangle _val){
	HX_STACK_FRAME("luxe.Visual","set_clip_rect",0xf17507c0,"luxe.Visual.set_clip_rect","luxe/Visual.hx",395,0xe3547505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_val,"_val")
	HX_STACK_LINE(397)
	::phoenix::geometry::Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(397)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(397)
	if ((tmp1)){
		HX_STACK_LINE(398)
		::phoenix::geometry::Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		::phoenix::Rectangle tmp3 = _val;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		tmp2->set_clip_rect(tmp3);
	}
	HX_STACK_LINE(401)
	::phoenix::Rectangle tmp2 = this->clip_rect = _val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(401)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,set_clip_rect,return )

Void Visual_obj::_size_change( Float _v){
{
		HX_STACK_FRAME("luxe.Visual","_size_change",0xe1a11405,"luxe.Visual._size_change","luxe/Visual.hx",407,0xe3547505)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_v,"_v")
		HX_STACK_LINE(407)
		::phoenix::Vector tmp = this->size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		this->set_size(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Visual_obj,_size_change,(void))

Void Visual_obj::init( ){
{
		HX_STACK_FRAME("luxe.Visual","init",0x78020ea6,"luxe.Visual.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}



Visual_obj::Visual_obj()
{
}

void Visual_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Visual);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(locked,"locked");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(radians,"radians");
	HX_MARK_MEMBER_NAME(_rotation_euler,"_rotation_euler");
	HX_MARK_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_MARK_MEMBER_NAME(_has_custom_origin,"_has_custom_origin");
	HX_MARK_MEMBER_NAME(_creating_geometry,"_creating_geometry");
	HX_MARK_MEMBER_NAME(ignore_texture_on_geometry_change,"ignore_texture_on_geometry_change");
	::luxe::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Visual_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(locked,"locked");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(radians,"radians");
	HX_VISIT_MEMBER_NAME(_rotation_euler,"_rotation_euler");
	HX_VISIT_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_VISIT_MEMBER_NAME(_has_custom_origin,"_has_custom_origin");
	HX_VISIT_MEMBER_NAME(_creating_geometry,"_creating_geometry");
	HX_VISIT_MEMBER_NAME(ignore_texture_on_geometry_change,"ignore_texture_on_geometry_change");
	::luxe::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Visual_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locked") ) { return locked; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"radians") ) { return inCallProp == hx::paccAlways ? get_radians() : radians; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return clip_rect; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rotation_z") ) { if (inCallProp == hx::paccAlways) return get_rotation_z(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_locked") ) { return set_locked_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radians") ) { return set_radians_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radians") ) { return get_radians_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_geometry") ) { return set_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"_size_change") ) { return _size_change_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { return _rotation_quat; }
		if (HX_FIELD_EQ(inName,"get_rotation_z") ) { return get_rotation_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation_z") ) { return set_rotation_z_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_euler") ) { return _rotation_euler; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_create_geometry") ) { return _create_geometry_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_has_custom_origin") ) { return _has_custom_origin; }
		if (HX_FIELD_EQ(inName,"_creating_geometry") ) { return _creating_geometry; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"on_geometry_created") ) { return on_geometry_created_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"set_parent_from_transform") ) { return set_parent_from_transform_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"set_rotation_from_transform") ) { return set_rotation_from_transform_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"ignore_texture_on_geometry_change") ) { return ignore_texture_on_geometry_change; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Visual_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locked") ) { if (inCallProp == hx::paccAlways) return set_locked(inValue);locked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radians") ) { if (inCallProp == hx::paccAlways) return set_radians(inValue);radians=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { if (inCallProp == hx::paccAlways) return set_geometry(inValue);geometry=inValue.Cast< ::phoenix::geometry::Geometry >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clip_rect") ) { if (inCallProp == hx::paccAlways) return set_clip_rect(inValue);clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rotation_z") ) { if (inCallProp == hx::paccAlways) return set_rotation_z(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { _rotation_quat=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rotation_euler") ) { _rotation_euler=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_has_custom_origin") ) { _has_custom_origin=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_creating_geometry") ) { _creating_geometry=inValue.Cast< bool >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"ignore_texture_on_geometry_change") ) { ignore_texture_on_geometry_change=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Visual_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Visual_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));
	outFields->push(HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"));
	outFields->push(HX_HCSTRING("radians","\x72","\x46","\xf0","\x26"));
	outFields->push(HX_HCSTRING("rotation_z","\xf9","\xdb","\x7e","\xe4"));
	outFields->push(HX_HCSTRING("_rotation_euler","\x07","\x29","\xed","\x9a"));
	outFields->push(HX_HCSTRING("_rotation_quat","\xf9","\x46","\x4a","\x1d"));
	outFields->push(HX_HCSTRING("_has_custom_origin","\xd0","\xa9","\xf2","\x40"));
	outFields->push(HX_HCSTRING("_creating_geometry","\x79","\xe8","\x48","\x20"));
	outFields->push(HX_HCSTRING("ignore_texture_on_geometry_change","\xae","\x6f","\xe7","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Visual_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(Visual_obj,geometry),HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")},
	{hx::fsBool,(int)offsetof(Visual_obj,locked),HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Visual_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Visual_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Visual_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(Visual_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(Visual_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Visual_obj,clip_rect),HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89")},
	{hx::fsFloat,(int)offsetof(Visual_obj,radians),HX_HCSTRING("radians","\x72","\x46","\xf0","\x26")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Visual_obj,_rotation_euler),HX_HCSTRING("_rotation_euler","\x07","\x29","\xed","\x9a")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Visual_obj,_rotation_quat),HX_HCSTRING("_rotation_quat","\xf9","\x46","\x4a","\x1d")},
	{hx::fsBool,(int)offsetof(Visual_obj,_has_custom_origin),HX_HCSTRING("_has_custom_origin","\xd0","\xa9","\xf2","\x40")},
	{hx::fsBool,(int)offsetof(Visual_obj,_creating_geometry),HX_HCSTRING("_creating_geometry","\x79","\xe8","\x48","\x20")},
	{hx::fsBool,(int)offsetof(Visual_obj,ignore_texture_on_geometry_change),HX_HCSTRING("ignore_texture_on_geometry_change","\xae","\x6f","\xe7","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"),
	HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"),
	HX_HCSTRING("radians","\x72","\x46","\xf0","\x26"),
	HX_HCSTRING("_rotation_euler","\x07","\x29","\xed","\x9a"),
	HX_HCSTRING("_rotation_quat","\xf9","\x46","\x4a","\x1d"),
	HX_HCSTRING("_has_custom_origin","\xd0","\xa9","\xf2","\x40"),
	HX_HCSTRING("_creating_geometry","\x79","\xe8","\x48","\x20"),
	HX_HCSTRING("_create_geometry","\x16","\x16","\x40","\x04"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("on_geometry_created","\x7b","\x6e","\x90","\xad"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("ignore_texture_on_geometry_change","\xae","\x6f","\xe7","\x0f"),
	HX_HCSTRING("set_geometry","\x2f","\xda","\xbb","\x9c"),
	HX_HCSTRING("set_parent_from_transform","\x2f","\x18","\x5c","\xed"),
	HX_HCSTRING("set_rotation_from_transform","\x5b","\xb5","\xfc","\x30"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("get_rotation_z","\x42","\x64","\x74","\x5a"),
	HX_HCSTRING("set_rotation_z","\xb6","\x4c","\x94","\x7a"),
	HX_HCSTRING("set_radians","\x95","\xad","\x57","\xb7"),
	HX_HCSTRING("get_radians","\x89","\xa6","\xea","\xac"),
	HX_HCSTRING("set_locked","\x47","\x13","\xcc","\x4d"),
	HX_HCSTRING("set_clip_rect","\x16","\xfe","\x0b","\x90"),
	HX_HCSTRING("_size_change","\x6f","\xba","\x5b","\x66"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Visual_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Visual_obj::__mClass,"__mClass");
};

#endif

hx::Class Visual_obj::__mClass;

void Visual_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Visual","\x98","\x34","\xea","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Visual_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Visual_obj >;
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
