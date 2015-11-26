#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
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
#ifndef INCLUDED_phoenix_Spatial
#include <phoenix/Spatial.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Transform
#include <phoenix/Transform.h>
#endif
#ifndef INCLUDED_phoenix_Uniforms
#include <phoenix/Uniforms.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLBO
#include <snow/modules/opengl/native/GLBO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
namespace phoenix{
namespace geometry{

Void Geometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.Geometry","new",0xf65473e1,"phoenix.geometry.Geometry.new","phoenix/geometry/Geometry.hx",21,0xdab136cf)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(499)
	this->_prev_count = (int)0;
	HX_STACK_LINE(83)
	this->dirty = false;
	HX_STACK_LINE(82)
	this->locked = false;
	HX_STACK_LINE(81)
	this->immediate = false;
	HX_STACK_LINE(80)
	this->visible = true;
	HX_STACK_LINE(77)
	this->dirty_clip = false;
	HX_STACK_LINE(76)
	this->dirty_depth = false;
	HX_STACK_LINE(75)
	this->dirty_shader = false;
	HX_STACK_LINE(74)
	this->dirty_texture = false;
	HX_STACK_LINE(73)
	this->dirty_primitive_type = false;
	HX_STACK_LINE(71)
	this->shadow_clip = false;
	HX_STACK_LINE(70)
	this->shadow_depth = ((Float)0.0);
	HX_STACK_LINE(58)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(57)
	this->uuid = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(56)
	this->dropped = false;
	HX_STACK_LINE(51)
	this->added = false;
	HX_STACK_LINE(35)
	this->buffer_type = (int)35048;
	HX_STACK_LINE(34)
	this->buffer_based = false;
	HX_STACK_LINE(32)
	this->object_space = false;
	HX_STACK_LINE(100)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	this->uuid = tmp1;
	HX_STACK_LINE(101)
	::String tmp2 = this->uuid;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	this->id = tmp2;
	HX_STACK_LINE(103)
	::phoenix::geometry::GeometryState tmp3 = ::phoenix::geometry::GeometryState_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	this->state = tmp3;
	HX_STACK_LINE(104)
	this->vertices = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(105)
	this->batchers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(108)
	::phoenix::Transform tmp4 = ::phoenix::Transform_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	this->transform = tmp4;
	HX_STACK_LINE(111)
	::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(111)
	this->_final_vert_position = tmp5;
	HX_STACK_LINE(114)
	this->set_clip_rect(null());
	HX_STACK_LINE(115)
	this->set_clip(false);
	HX_STACK_LINE(118)
	bool _do_add = true;		HX_STACK_VAR(_do_add,"_do_add");
	HX_STACK_LINE(120)
	bool tmp6 = (options != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(120)
	if ((tmp6)){
		HX_STACK_LINE(122)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			bool tmp8 = (options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(122)
			if ((tmp8)){
				HX_STACK_LINE(122)
				::String tmp9 = this->uuid;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(122)
				options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = tmp9;
			}
			HX_STACK_LINE(122)
			tmp7 = options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
		}
		HX_STACK_LINE(122)
		this->id = tmp7;
		HX_STACK_LINE(123)
		::phoenix::Color tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			bool tmp9 = (options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			if ((tmp9)){
				HX_STACK_LINE(123)
				::phoenix::Color tmp10 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(123)
				options->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp10;
			}
			HX_STACK_LINE(123)
			tmp8 = options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
		}
		HX_STACK_LINE(123)
		this->set_color(tmp8);
		HX_STACK_LINE(124)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			bool tmp10 = (options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(124)
			if ((tmp10)){
				HX_STACK_LINE(124)
				options->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = true;
			}
			HX_STACK_LINE(124)
			tmp9 = options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
		}
		HX_STACK_LINE(124)
		this->set_visible(tmp9);
		HX_STACK_LINE(125)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			bool tmp11 = (options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			if ((tmp11)){
				HX_STACK_LINE(125)
				options->__FieldRef(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")) = false;
			}
			HX_STACK_LINE(125)
			tmp10 = options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic );
		}
		HX_STACK_LINE(125)
		this->immediate = tmp10;
		HX_STACK_LINE(128)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			bool tmp12 = (options->__Field(HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(128)
			if ((tmp12)){
				HX_STACK_LINE(128)
				options->__FieldRef(HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79")) = false;
			}
			HX_STACK_LINE(128)
			tmp11 = options->__Field(HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79"), hx::paccDynamic );
		}
		HX_STACK_LINE(128)
		this->buffer_based = tmp11;
		HX_STACK_LINE(129)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			bool tmp13 = (options->__Field(HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			if ((tmp13)){
				HX_STACK_LINE(129)
				options->__FieldRef(HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22")) = false;
			}
			HX_STACK_LINE(129)
			tmp12 = options->__Field(HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22"), hx::paccDynamic );
		}
		HX_STACK_LINE(129)
		this->object_space = tmp12;
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				bool tmp14 = (options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(132)
				if ((tmp14)){
					HX_STACK_LINE(132)
					::phoenix::geometry::GeometryState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(132)
					options->__FieldRef(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")) = tmp15->depth;
				}
				HX_STACK_LINE(132)
				tmp13 = options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );
			}
			HX_STACK_LINE(132)
			Float val = tmp13;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(132)
			::phoenix::geometry::GeometryState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(132)
			tmp14->depth = val;
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(133)
			::phoenix::geometry::GeometryState _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(133)
			::phoenix::Texture tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				bool tmp15 = (options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(133)
				if ((tmp15)){
					HX_STACK_LINE(133)
					::phoenix::geometry::GeometryState tmp16 = this->state;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(133)
					options->__FieldRef(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")) = tmp16->texture;
				}
				HX_STACK_LINE(133)
				tmp14 = options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic );
			}
			HX_STACK_LINE(133)
			::phoenix::Texture val = tmp14;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(133)
			_this->dirty = true;
			HX_STACK_LINE(133)
			_this->texture = val;
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			::phoenix::geometry::GeometryState _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				bool tmp15 = (options->__Field(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(134)
				if ((tmp15)){
					HX_STACK_LINE(134)
					::phoenix::geometry::GeometryState tmp16 = this->state;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(134)
					options->__FieldRef(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")) = tmp16->primitive_type;
				}
				HX_STACK_LINE(134)
				tmp14 = options->__Field(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"), hx::paccDynamic );
			}
			HX_STACK_LINE(134)
			int val = tmp14;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(134)
			_this->dirty = true;
			HX_STACK_LINE(134)
			_this->primitive_type = val;
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(135)
			::phoenix::geometry::GeometryState _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(135)
			::phoenix::Shader tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				bool tmp15 = (options->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(135)
				if ((tmp15)){
					HX_STACK_LINE(135)
					::phoenix::geometry::GeometryState tmp16 = this->state;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(135)
					options->__FieldRef(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")) = tmp16->shader;
				}
				HX_STACK_LINE(135)
				tmp14 = options->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
			}
			HX_STACK_LINE(135)
			::phoenix::Shader val = tmp14;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(135)
			_this->dirty = true;
			HX_STACK_LINE(135)
			_this->shader = val;
		}
		HX_STACK_LINE(137)
		bool tmp13 = (options->__Field(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(137)
		if ((tmp13)){
			HX_STACK_LINE(138)
			::phoenix::Rectangle _r = options->__Field(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"), hx::paccDynamic );		HX_STACK_VAR(_r,"_r");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::phoenix::geometry::GeometryState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(139)
				::phoenix::geometry::GeometryState _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(139)
				_this->dirty = true;
				HX_STACK_LINE(139)
				_this->clip_x = _r->x;
			}
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::phoenix::geometry::GeometryState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(140)
				::phoenix::geometry::GeometryState _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(140)
				_this->dirty = true;
				HX_STACK_LINE(140)
				_this->clip_y = _r->y;
			}
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::phoenix::geometry::GeometryState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(141)
				::phoenix::geometry::GeometryState _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(141)
				_this->dirty = true;
				HX_STACK_LINE(141)
				_this->clip_w = _r->w;
			}
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				::phoenix::geometry::GeometryState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(142)
				::phoenix::geometry::GeometryState _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(142)
				_this->dirty = true;
				HX_STACK_LINE(142)
				_this->clip_h = _r->h;
			}
		}
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				bool tmp15 = (options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(145)
				if ((tmp15)){
					HX_STACK_LINE(145)
					::phoenix::Transform tmp16 = this->transform;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(145)
					::phoenix::Vector tmp17 = tmp16->local->pos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(145)
					options->__FieldRef(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")) = tmp17;
				}
				HX_STACK_LINE(145)
				tmp14 = options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );
			}
			HX_STACK_LINE(145)
			::phoenix::Vector value = tmp14;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				::phoenix::Transform tmp15 = this->transform;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(145)
				::phoenix::Spatial _this = tmp15->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(145)
				_this->pos = value;
				HX_STACK_LINE(145)
				bool tmp16 = (value != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(145)
				if ((tmp16)){
					HX_STACK_LINE(145)
					::phoenix::Vector tmp17 = _this->pos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(145)
					Dynamic tmp18 = _this->_pos_change_dyn();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(145)
					::phoenix::Vector_obj::Listen(tmp17,tmp18);
					HX_STACK_LINE(145)
					{
						HX_STACK_LINE(145)
						bool tmp19 = (_this->pos_changed != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(145)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(145)
						if ((tmp19)){
							HX_STACK_LINE(145)
							bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(145)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(145)
							tmp20 = !(tmp22);
						}
						else{
							HX_STACK_LINE(145)
							tmp20 = false;
						}
						HX_STACK_LINE(145)
						if ((tmp20)){
							HX_STACK_LINE(145)
							::phoenix::Vector tmp21 = _this->pos;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(145)
							_this->pos_changed(tmp21);
						}
					}
				}
				HX_STACK_LINE(145)
				_this->pos;
			}
		}
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			::phoenix::Quaternion tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				bool tmp15 = (options->__Field(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(146)
				if ((tmp15)){
					HX_STACK_LINE(146)
					::phoenix::Transform tmp16 = this->transform;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(146)
					::phoenix::Quaternion tmp17 = tmp16->local->rotation;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(146)
					options->__FieldRef(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")) = tmp17;
				}
				HX_STACK_LINE(146)
				tmp14 = options->__Field(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"), hx::paccDynamic );
			}
			HX_STACK_LINE(146)
			::phoenix::Quaternion value = tmp14;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				::phoenix::Transform tmp15 = this->transform;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(146)
				::phoenix::Spatial _this = tmp15->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(146)
				_this->rotation = value;
				HX_STACK_LINE(146)
				bool tmp16 = (value != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(146)
				if ((tmp16)){
					HX_STACK_LINE(146)
					{
						HX_STACK_LINE(146)
						::phoenix::Quaternion _q = _this->rotation;		HX_STACK_VAR(_q,"_q");
						HX_STACK_LINE(146)
						Dynamic listener = _this->_rotation_change_dyn();		HX_STACK_VAR(listener,"listener");
						HX_STACK_LINE(146)
						_q->listen_x = listener;
						HX_STACK_LINE(146)
						_q->listen_y = listener;
						HX_STACK_LINE(146)
						_q->listen_z = listener;
						HX_STACK_LINE(146)
						_q->listen_w = listener;
					}
					HX_STACK_LINE(146)
					{
						HX_STACK_LINE(146)
						bool tmp17 = (_this->rotation_changed != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(146)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(146)
						if ((tmp17)){
							HX_STACK_LINE(146)
							bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(146)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(146)
							tmp18 = !(tmp20);
						}
						else{
							HX_STACK_LINE(146)
							tmp18 = false;
						}
						HX_STACK_LINE(146)
						if ((tmp18)){
							HX_STACK_LINE(146)
							::phoenix::Quaternion tmp19 = _this->rotation;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(146)
							_this->rotation_changed(tmp19);
						}
					}
				}
				HX_STACK_LINE(146)
				_this->rotation;
			}
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::phoenix::Vector tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				bool tmp15 = (options->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(147)
				if ((tmp15)){
					HX_STACK_LINE(147)
					::phoenix::Transform tmp16 = this->transform;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(147)
					::phoenix::Vector tmp17 = tmp16->local->scale;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(147)
					options->__FieldRef(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")) = tmp17;
				}
				HX_STACK_LINE(147)
				tmp14 = options->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );
			}
			HX_STACK_LINE(147)
			::phoenix::Vector value = tmp14;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				::phoenix::Transform tmp15 = this->transform;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(147)
				::phoenix::Spatial _this = tmp15->local;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(147)
				_this->scale = value;
				HX_STACK_LINE(147)
				bool tmp16 = (value != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(147)
				if ((tmp16)){
					HX_STACK_LINE(147)
					::phoenix::Vector tmp17 = _this->scale;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(147)
					Dynamic tmp18 = _this->_scale_change_dyn();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(147)
					::phoenix::Vector_obj::Listen(tmp17,tmp18);
					HX_STACK_LINE(147)
					{
						HX_STACK_LINE(147)
						bool tmp19 = (_this->scale_changed != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(147)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(147)
						if ((tmp19)){
							HX_STACK_LINE(147)
							bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(147)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(147)
							tmp20 = !(tmp22);
						}
						else{
							HX_STACK_LINE(147)
							tmp20 = false;
						}
						HX_STACK_LINE(147)
						if ((tmp20)){
							HX_STACK_LINE(147)
							::phoenix::Vector tmp21 = _this->scale;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(147)
							_this->scale_changed(tmp21);
						}
					}
				}
				HX_STACK_LINE(147)
				_this->scale;
			}
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			::phoenix::Transform tmp14 = this->transform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(148)
			::phoenix::Transform _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(148)
			::phoenix::Vector tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				bool tmp16 = (options->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(148)
				if ((tmp16)){
					HX_STACK_LINE(148)
					::phoenix::Transform tmp17 = this->transform;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(148)
					options->__FieldRef(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")) = tmp17->origin;
				}
				HX_STACK_LINE(148)
				tmp15 = options->__Field(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"), hx::paccDynamic );
			}
			HX_STACK_LINE(148)
			::phoenix::Vector o = tmp15;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				_this->dirty = true;
				HX_STACK_LINE(148)
				bool tmp16 = _this->dirty;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(148)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(148)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(148)
				if ((tmp17)){
					HX_STACK_LINE(148)
					bool tmp19 = _this->_setup;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(148)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(148)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(148)
					tmp18 = !(tmp21);
				}
				else{
					HX_STACK_LINE(148)
					tmp18 = false;
				}
				HX_STACK_LINE(148)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(148)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(148)
				if ((tmp19)){
					HX_STACK_LINE(148)
					tmp20 = (_this->_dirty_handlers != null());
				}
				else{
					HX_STACK_LINE(148)
					tmp20 = false;
				}
				HX_STACK_LINE(148)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				if ((tmp20)){
					HX_STACK_LINE(148)
					int tmp22 = _this->_dirty_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(148)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(148)
					tmp21 = (tmp23 > (int)0);
				}
				else{
					HX_STACK_LINE(148)
					tmp21 = false;
				}
				HX_STACK_LINE(148)
				if ((tmp21)){
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = _this->_dirty_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp22 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(148)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(148)
						if ((tmp23)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp24 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(148)
						Dynamic _handler = tmp24;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(148)
						bool tmp25 = (_handler != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(148)
						if ((tmp25)){
							HX_STACK_LINE(148)
							::phoenix::Transform tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(148)
							_handler(tmp26).Cast< Void >();
						}
					}
				}
				HX_STACK_LINE(148)
				_this->dirty;
			}
			HX_STACK_LINE(148)
			_this->origin = o;
			HX_STACK_LINE(148)
			bool tmp16 = (_this->_origin_handlers != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(148)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(148)
			if ((tmp16)){
				HX_STACK_LINE(148)
				int tmp18 = _this->_origin_handlers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(148)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(148)
				tmp17 = (tmp19 > (int)0);
			}
			else{
				HX_STACK_LINE(148)
				tmp17 = false;
			}
			HX_STACK_LINE(148)
			if ((tmp17)){
				HX_STACK_LINE(148)
				::phoenix::Vector _origin = _this->origin;		HX_STACK_VAR(_origin,"_origin");
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(148)
					cpp::ArrayBase _g1 = _this->_origin_handlers;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(148)
					while((true)){
						HX_STACK_LINE(148)
						bool tmp18 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(148)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(148)
						if ((tmp19)){
							HX_STACK_LINE(148)
							break;
						}
						HX_STACK_LINE(148)
						Dynamic tmp20 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(148)
						Dynamic _handler = tmp20;		HX_STACK_VAR(_handler,"_handler");
						HX_STACK_LINE(148)
						++(_g);
						HX_STACK_LINE(148)
						bool tmp21 = (_handler != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(148)
						if ((tmp21)){
							HX_STACK_LINE(148)
							::phoenix::Vector tmp22 = _origin;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(148)
							_handler(tmp22).Cast< Void >();
						}
					}
				}
			}
			HX_STACK_LINE(148)
			_this->origin;
		}
		HX_STACK_LINE(150)
		bool tmp14 = (options->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(150)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(150)
		if ((tmp14)){
			HX_STACK_LINE(150)
			tmp15 = (options->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) == true);
		}
		else{
			HX_STACK_LINE(150)
			tmp15 = false;
		}
		HX_STACK_LINE(150)
		if ((tmp15)){
			HX_STACK_LINE(151)
			_do_add = false;
		}
	}
	else{
		HX_STACK_LINE(157)
		::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		this->set_color(tmp7);
	}
	HX_STACK_LINE(161)
	(::phoenix::geometry::Geometry_obj::_sequence_key)++;
	HX_STACK_LINE(163)
	::phoenix::geometry::GeometryKey tmp7 = ::phoenix::geometry::GeometryKey_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(163)
	this->key = tmp7;
	HX_STACK_LINE(165)
	::String tmp8 = this->uuid;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(165)
	::phoenix::geometry::GeometryKey tmp9 = this->key;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(165)
	tmp9->uuid = tmp8;
	HX_STACK_LINE(166)
	::snow::core::native::Core tmp10 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(166)
	Float tmp11 = tmp10->timestamp();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(166)
	::phoenix::geometry::GeometryKey tmp12 = this->key;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(166)
	tmp12->timestamp = tmp11;
	HX_STACK_LINE(167)
	int tmp13 = ::phoenix::geometry::Geometry_obj::_sequence_key;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(167)
	::phoenix::geometry::GeometryKey tmp14 = this->key;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(167)
	tmp14->sequence = tmp13;
	HX_STACK_LINE(168)
	::phoenix::geometry::GeometryState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(168)
	::phoenix::geometry::GeometryKey tmp16 = this->key;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(168)
	tmp16->primitive_type = tmp15->primitive_type;
	HX_STACK_LINE(169)
	::phoenix::geometry::GeometryState tmp17 = this->state;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(169)
	::phoenix::geometry::GeometryKey tmp18 = this->key;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(169)
	tmp18->texture = tmp17->texture;
	HX_STACK_LINE(170)
	::phoenix::geometry::GeometryState tmp19 = this->state;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(170)
	::phoenix::geometry::GeometryKey tmp20 = this->key;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(170)
	tmp20->shader = tmp19->shader;
	HX_STACK_LINE(171)
	::phoenix::geometry::GeometryState tmp21 = this->state;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(171)
	::phoenix::geometry::GeometryKey tmp22 = this->key;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(171)
	tmp22->depth = tmp21->depth;
	HX_STACK_LINE(172)
	::phoenix::geometry::GeometryState tmp23 = this->state;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(172)
	::phoenix::geometry::GeometryKey tmp24 = this->key;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(172)
	tmp24->clip = tmp23->clip;
	HX_STACK_LINE(174)
	::String tmp25 = this->uuid;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(174)
	::phoenix::Transform tmp26 = this->transform;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(174)
	tmp26->id = tmp25;
	HX_STACK_LINE(175)
	::String tmp27 = this->id;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(175)
	::phoenix::Transform tmp28 = this->transform;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(175)
	tmp28->name = tmp27;
	HX_STACK_LINE(179)
	bool tmp29 = (options != null());		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(179)
	bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(179)
	bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(179)
	if ((tmp30)){
		HX_STACK_LINE(179)
		tmp31 = (options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(179)
		tmp31 = false;
	}
	HX_STACK_LINE(179)
	bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(179)
	if ((tmp31)){
		HX_STACK_LINE(179)
		tmp32 = _do_add;
	}
	else{
		HX_STACK_LINE(179)
		tmp32 = false;
	}
	HX_STACK_LINE(179)
	if ((tmp32)){
		HX_STACK_LINE(180)
		options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());
	}
	HX_STACK_LINE(184)
	bool tmp33 = this->buffer_based;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(184)
	if ((tmp33)){
		HX_STACK_LINE(184)
		::snow::modules::opengl::native::GLBO tmp34 = this->vb_pos;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(184)
		bool tmp35 = (tmp34 != null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(184)
		if ((tmp35)){
			HX_STACK_LINE(184)
			Dynamic();
		}
		else{
			HX_STACK_LINE(184)
			::snow::modules::opengl::native::GLBO tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				int tmp37 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(184)
				int _id = tmp37;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(184)
				::snow::modules::opengl::native::GLBO tmp38 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(184)
				tmp36 = tmp38;
			}
			HX_STACK_LINE(184)
			this->vb_pos = tmp36;
			HX_STACK_LINE(184)
			::snow::modules::opengl::native::GLBO tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				int tmp38 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(184)
				int _id = tmp38;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(184)
				::snow::modules::opengl::native::GLBO tmp39 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(184)
				tmp37 = tmp39;
			}
			HX_STACK_LINE(184)
			this->vb_tcoords = tmp37;
			HX_STACK_LINE(184)
			::snow::modules::opengl::native::GLBO tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				int tmp39 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(184)
				int _id = tmp39;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(184)
				::snow::modules::opengl::native::GLBO tmp40 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(184)
				tmp38 = tmp40;
			}
			HX_STACK_LINE(184)
			this->vb_colors = tmp38;
			HX_STACK_LINE(184)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(185)
	::phoenix::Uniforms tmp34 = ::phoenix::Uniforms_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(185)
	this->uniforms = tmp34;
}
;
	return null();
}

//Geometry_obj::~Geometry_obj() { }

Dynamic Geometry_obj::__CreateEmpty() { return  new Geometry_obj; }
hx::ObjectPtr< Geometry_obj > Geometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< Geometry_obj > _result_ = new Geometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Geometry_obj > _result_ = new Geometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Geometry_obj::key_string( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","key_string",0xdbf2f150,"phoenix.geometry.Geometry.key_string","phoenix/geometry/Geometry.hx",189,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::phoenix::geometry::GeometryKey tmp = this->key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	Float tmp1 = tmp->timestamp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	::String tmp2 = (HX_HCSTRING("ts: ","\xe5","\x35","\x04","\x4d") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	::String tmp3 = (tmp2 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(192)
	::String tmp4 = (tmp3 + HX_HCSTRING("sequence: ","\x27","\x23","\x22","\xd5"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(193)
	::phoenix::geometry::GeometryKey tmp5 = this->key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(193)
	int tmp6 = tmp5->sequence;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(192)
	::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(192)
	::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(192)
	::String tmp9 = (tmp8 + HX_HCSTRING("primitive_type: ","\xb8","\xc3","\xde","\xd5"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(194)
	::phoenix::geometry::GeometryKey tmp10 = this->key;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(194)
	int tmp11 = tmp10->primitive_type;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(192)
	::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(192)
	::String tmp13 = (tmp12 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(192)
	::String tmp14 = (tmp13 + HX_HCSTRING("texture: ","\x41","\x28","\x49","\xaf"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(195)
	::phoenix::geometry::GeometryKey tmp15 = this->key;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(195)
	::phoenix::Texture tmp16 = tmp15->texture;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(195)
	bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(195)
	::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(195)
	if ((tmp17)){
		HX_STACK_LINE(195)
		tmp18 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	else{
		HX_STACK_LINE(195)
		::phoenix::geometry::GeometryKey tmp19 = this->key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(195)
		tmp18 = tmp19->texture->id;
	}
	HX_STACK_LINE(192)
	::String tmp19 = (tmp14 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(192)
	::String tmp20 = (tmp19 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(192)
	::String tmp21 = (tmp20 + HX_HCSTRING("shader: ","\x0b","\xc5","\x2a","\x36"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(196)
	::phoenix::geometry::GeometryKey tmp22 = this->key;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(196)
	::phoenix::Shader tmp23 = tmp22->shader;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(196)
	bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(196)
	::String tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(196)
	if ((tmp24)){
		HX_STACK_LINE(196)
		tmp25 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	else{
		HX_STACK_LINE(196)
		::phoenix::geometry::GeometryKey tmp26 = this->key;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(196)
		tmp25 = tmp26->shader->id;
	}
	HX_STACK_LINE(192)
	::String tmp26 = (tmp21 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(192)
	::String tmp27 = (tmp26 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(192)
	::String tmp28 = (tmp27 + HX_HCSTRING("depth: ","\x69","\xaa","\x4a","\x6a"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(197)
	::phoenix::geometry::GeometryKey tmp29 = this->key;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(197)
	Float tmp30 = tmp29->depth;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(192)
	::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(192)
	::String tmp32 = (tmp31 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(192)
	::String tmp33 = (tmp32 + HX_HCSTRING("clip: ","\x76","\xf5","\x57","\x0a"));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(198)
	::phoenix::geometry::GeometryKey tmp34 = this->key;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(198)
	bool tmp35 = tmp34->clip;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(198)
	::String tmp36 = ::Std_obj::string(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(192)
	::String tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(191)
	return tmp37;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,key_string,return )

Void Geometry_obj::refresh_key( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","refresh_key",0x4060be7c,"phoenix.geometry.Geometry.refresh_key","phoenix/geometry/Geometry.hx",202,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		::String tmp = this->uuid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		::phoenix::geometry::GeometryKey tmp1 = this->key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		tmp1->uuid = tmp;
		HX_STACK_LINE(207)
		::snow::core::native::Core tmp2 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		Float tmp3 = tmp2->timestamp();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		::phoenix::geometry::GeometryKey tmp4 = this->key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		tmp4->timestamp = tmp3;
		HX_STACK_LINE(208)
		int tmp5 = ::phoenix::geometry::Geometry_obj::_sequence_key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		::phoenix::geometry::GeometryKey tmp6 = this->key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		tmp6->sequence = tmp5;
		HX_STACK_LINE(209)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		::phoenix::geometry::GeometryKey tmp8 = this->key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(209)
		tmp8->primitive_type = tmp7->primitive_type;
		HX_STACK_LINE(210)
		::phoenix::geometry::GeometryState tmp9 = this->state;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(210)
		::phoenix::geometry::GeometryKey tmp10 = this->key;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(210)
		tmp10->texture = tmp9->texture;
		HX_STACK_LINE(211)
		::phoenix::geometry::GeometryState tmp11 = this->state;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		::phoenix::geometry::GeometryKey tmp12 = this->key;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(211)
		tmp12->shader = tmp11->shader;
		HX_STACK_LINE(212)
		::phoenix::geometry::GeometryState tmp13 = this->state;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(212)
		::phoenix::geometry::GeometryKey tmp14 = this->key;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(212)
		tmp14->depth = tmp13->depth;
		HX_STACK_LINE(213)
		::phoenix::geometry::GeometryState tmp15 = this->state;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(213)
		::phoenix::geometry::GeometryKey tmp16 = this->key;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(213)
		tmp16->clip = tmp15->clip;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,refresh_key,(void))

Void Geometry_obj::str( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","str",0xf6584c32,"phoenix.geometry.Geometry.str","phoenix/geometry/Geometry.hx",217,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		bool tmp1 = tmp->log;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		if ((tmp2)){
			HX_STACK_LINE(218)
			return null();
		}
		HX_STACK_LINE(219)
		::String tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		::String tmp4 = (HX_HCSTRING("\t\tgeometry ; ","\x53","\xf8","\xa3","\x08") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Geometry.hx","\x2c","\x13","\x62","\x29"),219,HX_HCSTRING("phoenix.geometry.Geometry","\x6f","\xef","\x7a","\x64"),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(219)
		::haxe::Log_obj::trace(tmp4,tmp5);
		HX_STACK_LINE(220)
		::phoenix::geometry::GeometryState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		tmp6->log = true;
		HX_STACK_LINE(221)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		tmp7->str();
		HX_STACK_LINE(222)
		::phoenix::geometry::GeometryState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		tmp8->log = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,str,(void))

Void Geometry_obj::drop( Dynamic __o_remove){
Dynamic remove = __o_remove.Default(true);
	HX_STACK_FRAME("phoenix.geometry.Geometry","drop",0x8cfea58e,"phoenix.geometry.Geometry.drop","phoenix/geometry/Geometry.hx",225,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(remove,"remove")
{
		HX_STACK_LINE(227)
		Dynamic tmp = remove;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		if ((tmp)){
			HX_STACK_LINE(227)
			tmp1 = this->added;
		}
		else{
			HX_STACK_LINE(227)
			tmp1 = false;
		}
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(229)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(229)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(229)
			while((true)){
				HX_STACK_LINE(229)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(229)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(229)
				if ((tmp3)){
					HX_STACK_LINE(229)
					break;
				}
				HX_STACK_LINE(229)
				::phoenix::Batcher tmp4 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(229)
				::phoenix::Batcher b = tmp4;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(229)
				++(_g);
				HX_STACK_LINE(230)
				b->remove(hx::ObjectPtr<OBJ_>(this),true);
			}
		}
		HX_STACK_LINE(235)
		this->key = null();
		HX_STACK_LINE(236)
		this->set_color(null());
		HX_STACK_LINE(237)
		this->state = null();
		HX_STACK_LINE(238)
		this->_final_vert_position = null();
		HX_STACK_LINE(239)
		this->batchers = null();
		HX_STACK_LINE(240)
		this->uuid = null();
		HX_STACK_LINE(241)
		this->id = null();
		HX_STACK_LINE(242)
		this->shadow_texture = null();
		HX_STACK_LINE(243)
		this->shadow_shader = null();
		HX_STACK_LINE(244)
		this->vertices = null();
		HX_STACK_LINE(246)
		::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(246)
		if ((tmp3)){
			HX_STACK_LINE(247)
			::phoenix::Transform tmp4 = this->transform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			tmp4->destroy();
			HX_STACK_LINE(248)
			this->transform = null();
		}
		HX_STACK_LINE(251)
		this->destroy_vbos();
		HX_STACK_LINE(252)
		::snow::api::buffers::ArrayBufferView tmp4 = this->buffer_pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		if ((tmp5)){
			HX_STACK_LINE(253)
			this->buffer_pos = null();
			HX_STACK_LINE(254)
			this->buffer_tcoords = null();
			HX_STACK_LINE(255)
			this->buffer_colors = null();
			HX_STACK_LINE(256)
			this->buffer_normals = null();
		}
		HX_STACK_LINE(259)
		this->dropped = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,drop,(void))

Void Geometry_obj::add( ::phoenix::geometry::Vertex v){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","add",0xf64a95a2,"phoenix.geometry.Geometry.add","phoenix/geometry/Geometry.hx",263,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(265)
		::phoenix::geometry::Vertex tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		this->vertices->push(tmp);
		HX_STACK_LINE(267)
		int tmp1 = this->vertices->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		int tmp3 = tmp2->batcher->max_verts;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		if ((tmp4)){
			HX_STACK_LINE(268)
			::String tmp5 = this->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(268)
			::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(268)
			::String tmp7 = (tmp6 + HX_HCSTRING(" / Currently a single geometry cannot exceed the maximum vert count of ","\xe7","\x77","\x43","\xfa"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(268)
			::phoenix::Renderer tmp8 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(268)
			int tmp9 = tmp8->batcher->max_verts;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(268)
			::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(268)
			HX_STACK_DO_THROW(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,add,(void))

Void Geometry_obj::remove( ::phoenix::geometry::Vertex v){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","remove",0xe1945f63,"phoenix.geometry.Geometry.remove","phoenix/geometry/Geometry.hx",273,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(275)
		::phoenix::geometry::Vertex tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		this->vertices->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,remove,(void))

Void Geometry_obj::batch( int vert_index,int tcoord_index,int color_index,int normal_index,::snow::api::buffers::ArrayBufferView vertlist,::snow::api::buffers::ArrayBufferView tcoordlist,::snow::api::buffers::ArrayBufferView colorlist,::snow::api::buffers::ArrayBufferView normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch",0x9fcc2d7b,"phoenix.geometry.Geometry.batch","phoenix/geometry/Geometry.hx",284,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vert_index,"vert_index")
		HX_STACK_ARG(tcoord_index,"tcoord_index")
		HX_STACK_ARG(color_index,"color_index")
		HX_STACK_ARG(normal_index,"normal_index")
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(284)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(284)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(284)
		while((true)){
			HX_STACK_LINE(284)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(284)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(284)
			if ((tmp1)){
				HX_STACK_LINE(284)
				break;
			}
			HX_STACK_LINE(284)
			::phoenix::geometry::Vertex tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			::phoenix::geometry::Vertex v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(284)
			++(_g);
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(287)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(287)
				Float tmp4 = v->pos->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(287)
				Float tmp5 = v->pos->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(287)
				Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(287)
				Float tmp6 = v->pos->z;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(287)
				Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(287)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(287)
				_this->ignore_listeners = true;
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					_this->x = _x;
					HX_STACK_LINE(287)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(287)
					if ((tmp7)){
						HX_STACK_LINE(287)
						_this->x;
					}
					else{
						HX_STACK_LINE(287)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(287)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(287)
						if ((tmp8)){
							HX_STACK_LINE(287)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(287)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(287)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(287)
							tmp9 = false;
						}
						HX_STACK_LINE(287)
						if ((tmp9)){
							HX_STACK_LINE(287)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(287)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(287)
						_this->x;
					}
				}
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					_this->y = _y;
					HX_STACK_LINE(287)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(287)
					if ((tmp7)){
						HX_STACK_LINE(287)
						_this->y;
					}
					else{
						HX_STACK_LINE(287)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(287)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(287)
						if ((tmp8)){
							HX_STACK_LINE(287)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(287)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(287)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(287)
							tmp9 = false;
						}
						HX_STACK_LINE(287)
						if ((tmp9)){
							HX_STACK_LINE(287)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(287)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(287)
						_this->y;
					}
				}
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					_this->z = _z;
					HX_STACK_LINE(287)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(287)
					if ((tmp7)){
						HX_STACK_LINE(287)
						_this->z;
					}
					else{
						HX_STACK_LINE(287)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(287)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(287)
						if ((tmp8)){
							HX_STACK_LINE(287)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(287)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(287)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(287)
							tmp9 = false;
						}
						HX_STACK_LINE(287)
						if ((tmp9)){
							HX_STACK_LINE(287)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(287)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(287)
						_this->z;
					}
				}
				HX_STACK_LINE(287)
				Float tmp7 = v->pos->w;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				_this->w = tmp7;
				HX_STACK_LINE(287)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(287)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				if ((tmp8)){
					HX_STACK_LINE(287)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(287)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(287)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(287)
					tmp9 = false;
				}
				HX_STACK_LINE(287)
				if ((tmp9)){
					HX_STACK_LINE(287)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(287)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(287)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(287)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(287)
				if ((tmp10)){
					HX_STACK_LINE(287)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(287)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(287)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(287)
					tmp11 = false;
				}
				HX_STACK_LINE(287)
				if ((tmp11)){
					HX_STACK_LINE(287)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(287)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(287)
				bool tmp12 = (_this->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(287)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(287)
				if ((tmp12)){
					HX_STACK_LINE(287)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(287)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(287)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(287)
					tmp13 = false;
				}
				HX_STACK_LINE(287)
				if ((tmp13)){
					HX_STACK_LINE(287)
					Float tmp14 = _this->z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(287)
					_this->listen_z(tmp14);
				}
				HX_STACK_LINE(287)
				_this;
			}
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(289)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(289)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(289)
				::phoenix::Matrix tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::phoenix::Spatial tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						::phoenix::Transform tmp6 = this->transform;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(289)
						::phoenix::Transform _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(289)
						bool tmp7 = _this1->_destroying;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(289)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(289)
						if ((tmp8)){
							HX_STACK_LINE(289)
							bool tmp9 = (_this1->parent != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(289)
							if ((tmp9)){
								HX_STACK_LINE(289)
								bool tmp10 = _this1->parent->dirty;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(289)
								if ((tmp10)){
									HX_STACK_LINE(289)
									_this1->parent->clean();
								}
							}
							HX_STACK_LINE(289)
							bool tmp10 = _this1->dirty;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(289)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(289)
							if ((tmp10)){
								HX_STACK_LINE(289)
								bool tmp12 = _this1->_cleaning;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(289)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(289)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(289)
								tmp11 = false;
							}
							HX_STACK_LINE(289)
							if ((tmp11)){
								HX_STACK_LINE(289)
								_this1->clean();
							}
						}
						HX_STACK_LINE(289)
						tmp5 = _this1->world;
					}
					HX_STACK_LINE(289)
					::phoenix::Spatial _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(289)
					tmp4 = _this1->matrix;
				}
				HX_STACK_LINE(289)
				::phoenix::Matrix _m = tmp4;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(289)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(289)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(289)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(289)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					Float tmp5 = e->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(289)
					Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(289)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(289)
					Float tmp8 = e->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(289)
					Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(289)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(289)
					Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(289)
					Float tmp12 = e->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(289)
					Float tmp13 = _z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(289)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(289)
					Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(289)
					Float tmp16 = e->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(289)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(289)
					Float _x1 = tmp17;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(289)
					Float tmp18 = e->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(289)
					Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(289)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(289)
					Float tmp21 = e->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(289)
					Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(289)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(289)
					Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(289)
					Float tmp25 = e->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(289)
					Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(289)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(289)
					Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(289)
					Float tmp29 = e->__get((int)13);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(289)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(289)
					Float _y1 = tmp30;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(289)
					Float tmp31 = e->__get((int)2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(289)
					Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(289)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(289)
					Float tmp34 = e->__get((int)6);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(289)
					Float tmp35 = _y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(289)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(289)
					Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(289)
					Float tmp38 = e->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(289)
					Float tmp39 = _z;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(289)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(289)
					Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(289)
					Float tmp42 = e->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(289)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(289)
					Float _z1 = tmp43;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(289)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(289)
					_this->ignore_listeners = true;
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						_this->x = _x1;
						HX_STACK_LINE(289)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(289)
						if ((tmp44)){
							HX_STACK_LINE(289)
							_this->x;
						}
						else{
							HX_STACK_LINE(289)
							bool tmp45 = (_this->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(289)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(289)
							if ((tmp45)){
								HX_STACK_LINE(289)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(289)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(289)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(289)
								tmp46 = false;
							}
							HX_STACK_LINE(289)
							if ((tmp46)){
								HX_STACK_LINE(289)
								Float tmp47 = _x1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(289)
								_this->listen_x(tmp47);
							}
							HX_STACK_LINE(289)
							_this->x;
						}
					}
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						_this->y = _y1;
						HX_STACK_LINE(289)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(289)
						if ((tmp44)){
							HX_STACK_LINE(289)
							_this->y;
						}
						else{
							HX_STACK_LINE(289)
							bool tmp45 = (_this->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(289)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(289)
							if ((tmp45)){
								HX_STACK_LINE(289)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(289)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(289)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(289)
								tmp46 = false;
							}
							HX_STACK_LINE(289)
							if ((tmp46)){
								HX_STACK_LINE(289)
								Float tmp47 = _y1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(289)
								_this->listen_y(tmp47);
							}
							HX_STACK_LINE(289)
							_this->y;
						}
					}
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						_this->z = _z1;
						HX_STACK_LINE(289)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(289)
						if ((tmp44)){
							HX_STACK_LINE(289)
							_this->z;
						}
						else{
							HX_STACK_LINE(289)
							bool tmp45 = (_this->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(289)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(289)
							if ((tmp45)){
								HX_STACK_LINE(289)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(289)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(289)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(289)
								tmp46 = false;
							}
							HX_STACK_LINE(289)
							if ((tmp46)){
								HX_STACK_LINE(289)
								Float tmp47 = _z1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(289)
								_this->listen_z(tmp47);
							}
							HX_STACK_LINE(289)
							_this->z;
						}
					}
					HX_STACK_LINE(289)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(289)
					bool tmp44 = (_this->listen_x != null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(289)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(289)
					if ((tmp44)){
						HX_STACK_LINE(289)
						bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(289)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(289)
						tmp45 = !(tmp47);
					}
					else{
						HX_STACK_LINE(289)
						tmp45 = false;
					}
					HX_STACK_LINE(289)
					if ((tmp45)){
						HX_STACK_LINE(289)
						Float tmp46 = _this->x;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(289)
						_this->listen_x(tmp46);
					}
					HX_STACK_LINE(289)
					bool tmp46 = (_this->listen_y != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(289)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(289)
					if ((tmp46)){
						HX_STACK_LINE(289)
						bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(289)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(289)
						tmp47 = !(tmp49);
					}
					else{
						HX_STACK_LINE(289)
						tmp47 = false;
					}
					HX_STACK_LINE(289)
					if ((tmp47)){
						HX_STACK_LINE(289)
						Float tmp48 = _this->y;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(289)
						_this->listen_y(tmp48);
					}
					HX_STACK_LINE(289)
					bool tmp48 = (_this->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(289)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(289)
					if ((tmp48)){
						HX_STACK_LINE(289)
						bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(289)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(289)
						tmp49 = !(tmp51);
					}
					else{
						HX_STACK_LINE(289)
						tmp49 = false;
					}
					HX_STACK_LINE(289)
					if ((tmp49)){
						HX_STACK_LINE(289)
						Float tmp50 = _this->z;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(289)
						_this->listen_z(tmp50);
					}
					HX_STACK_LINE(289)
					_this;
				}
				HX_STACK_LINE(289)
				_this;
			}
			HX_STACK_LINE(291)
			::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (vert_index * (int)4)),this->_final_vert_position->x);
			HX_STACK_LINE(292)
			::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),this->_final_vert_position->y);
			HX_STACK_LINE(293)
			::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),this->_final_vert_position->z);
			HX_STACK_LINE(294)
			::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),this->_final_vert_position->w);
			HX_STACK_LINE(296)
			hx::AddEq(vert_index,(int)4);
			HX_STACK_LINE(298)
			::phoenix::geometry::TextureCoord tmp3 = v->uv->uv0;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(298)
			::phoenix::geometry::TextureCoord _vuv = tmp3;		HX_STACK_VAR(_vuv,"_vuv");
			HX_STACK_LINE(300)
			::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
			HX_STACK_LINE(301)
			::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
			HX_STACK_LINE(302)
			::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
			HX_STACK_LINE(303)
			::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
			HX_STACK_LINE(305)
			hx::AddEq(tcoord_index,(int)4);
			HX_STACK_LINE(307)
			::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
			HX_STACK_LINE(308)
			::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
			HX_STACK_LINE(309)
			::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
			HX_STACK_LINE(310)
			::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
			HX_STACK_LINE(312)
			hx::AddEq(color_index,(int)4);
			HX_STACK_LINE(322)
			hx::AddEq(normal_index,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Geometry_obj,batch,(void))

Void Geometry_obj::batch_object_space( int vert_index,int tcoord_index,int color_index,int normal_index,::snow::api::buffers::ArrayBufferView vertlist,::snow::api::buffers::ArrayBufferView tcoordlist,::snow::api::buffers::ArrayBufferView colorlist,::snow::api::buffers::ArrayBufferView normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch_object_space",0x76d4c08a,"phoenix.geometry.Geometry.batch_object_space","phoenix/geometry/Geometry.hx",334,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vert_index,"vert_index")
		HX_STACK_ARG(tcoord_index,"tcoord_index")
		HX_STACK_ARG(color_index,"color_index")
		HX_STACK_ARG(normal_index,"normal_index")
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(334)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(334)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(334)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(334)
			if ((tmp1)){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(334)
			::phoenix::geometry::Vertex tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(334)
			::phoenix::geometry::Vertex v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(334)
			++(_g);
			HX_STACK_LINE(336)
			::phoenix::Vector _vpos = v->pos;		HX_STACK_VAR(_vpos,"_vpos");
			HX_STACK_LINE(337)
			::phoenix::geometry::TextureCoord tmp3 = v->uv->uv0;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(337)
			::phoenix::geometry::TextureCoord _vuv = tmp3;		HX_STACK_VAR(_vuv,"_vuv");
			HX_STACK_LINE(338)
			::phoenix::Color _vcol = v->color;		HX_STACK_VAR(_vcol,"_vcol");
			HX_STACK_LINE(340)
			::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (vert_index * (int)4)),_vpos->x);
			HX_STACK_LINE(341)
			::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),_vpos->y);
			HX_STACK_LINE(342)
			::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),_vpos->z);
			HX_STACK_LINE(343)
			::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),_vpos->w);
			HX_STACK_LINE(345)
			hx::AddEq(vert_index,(int)4);
			HX_STACK_LINE(347)
			::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
			HX_STACK_LINE(348)
			::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
			HX_STACK_LINE(349)
			::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
			HX_STACK_LINE(350)
			::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
			HX_STACK_LINE(352)
			hx::AddEq(tcoord_index,(int)4);
			HX_STACK_LINE(354)
			::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (color_index * (int)4)),_vcol->r);
			HX_STACK_LINE(355)
			::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),_vcol->g);
			HX_STACK_LINE(356)
			::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),_vcol->b);
			HX_STACK_LINE(357)
			::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),_vcol->a);
			HX_STACK_LINE(359)
			hx::AddEq(color_index,(int)4);
			HX_STACK_LINE(369)
			hx::AddEq(normal_index,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Geometry_obj,batch_object_space,(void))

Void Geometry_obj::batch_into_arrays( Array< Float > vertlist,Array< Float > tcoordlist,Array< Float > colorlist,Array< Float > normallist){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","batch_into_arrays",0xe545c1b5,"phoenix.geometry.Geometry.batch_into_arrays","phoenix/geometry/Geometry.hx",378,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertlist,"vertlist")
		HX_STACK_ARG(tcoordlist,"tcoordlist")
		HX_STACK_ARG(colorlist,"colorlist")
		HX_STACK_ARG(normallist,"normallist")
		HX_STACK_LINE(378)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(378)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(378)
		while((true)){
			HX_STACK_LINE(378)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(378)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(378)
			if ((tmp1)){
				HX_STACK_LINE(378)
				break;
			}
			HX_STACK_LINE(378)
			::phoenix::geometry::Vertex tmp2 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(378)
			::phoenix::geometry::Vertex v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(378)
			++(_g);
			HX_STACK_LINE(381)
			{
				HX_STACK_LINE(381)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(381)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(381)
				Float tmp4 = v->pos->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(381)
				Float _x = tmp4;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(381)
				Float tmp5 = v->pos->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(381)
				Float _y = tmp5;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(381)
				Float tmp6 = v->pos->z;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(381)
				Float _z = tmp6;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(381)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(381)
				_this->ignore_listeners = true;
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(381)
					_this->x = _x;
					HX_STACK_LINE(381)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(381)
					if ((tmp7)){
						HX_STACK_LINE(381)
						_this->x;
					}
					else{
						HX_STACK_LINE(381)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(381)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(381)
						if ((tmp8)){
							HX_STACK_LINE(381)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(381)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(381)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(381)
							tmp9 = false;
						}
						HX_STACK_LINE(381)
						if ((tmp9)){
							HX_STACK_LINE(381)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(381)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(381)
						_this->x;
					}
				}
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(381)
					_this->y = _y;
					HX_STACK_LINE(381)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(381)
					if ((tmp7)){
						HX_STACK_LINE(381)
						_this->y;
					}
					else{
						HX_STACK_LINE(381)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(381)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(381)
						if ((tmp8)){
							HX_STACK_LINE(381)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(381)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(381)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(381)
							tmp9 = false;
						}
						HX_STACK_LINE(381)
						if ((tmp9)){
							HX_STACK_LINE(381)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(381)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(381)
						_this->y;
					}
				}
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(381)
					_this->z = _z;
					HX_STACK_LINE(381)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(381)
					if ((tmp7)){
						HX_STACK_LINE(381)
						_this->z;
					}
					else{
						HX_STACK_LINE(381)
						bool tmp8 = (_this->listen_z != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(381)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(381)
						if ((tmp8)){
							HX_STACK_LINE(381)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(381)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(381)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(381)
							tmp9 = false;
						}
						HX_STACK_LINE(381)
						if ((tmp9)){
							HX_STACK_LINE(381)
							Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(381)
							_this->listen_z(tmp10);
						}
						HX_STACK_LINE(381)
						_this->z;
					}
				}
				HX_STACK_LINE(381)
				Float tmp7 = v->pos->w;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(381)
				_this->w = tmp7;
				HX_STACK_LINE(381)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(381)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(381)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(381)
				if ((tmp8)){
					HX_STACK_LINE(381)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(381)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(381)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(381)
					tmp9 = false;
				}
				HX_STACK_LINE(381)
				if ((tmp9)){
					HX_STACK_LINE(381)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(381)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(381)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(381)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(381)
				if ((tmp10)){
					HX_STACK_LINE(381)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(381)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(381)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(381)
					tmp11 = false;
				}
				HX_STACK_LINE(381)
				if ((tmp11)){
					HX_STACK_LINE(381)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(381)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(381)
				bool tmp12 = (_this->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(381)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(381)
				if ((tmp12)){
					HX_STACK_LINE(381)
					bool tmp14 = _this->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(381)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(381)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(381)
					tmp13 = false;
				}
				HX_STACK_LINE(381)
				if ((tmp13)){
					HX_STACK_LINE(381)
					Float tmp14 = _this->z;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(381)
					_this->listen_z(tmp14);
				}
				HX_STACK_LINE(381)
				_this;
			}
			HX_STACK_LINE(383)
			{
				HX_STACK_LINE(383)
				::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(383)
				::phoenix::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(383)
				::phoenix::Matrix tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					::phoenix::Spatial tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(383)
					{
						HX_STACK_LINE(383)
						::phoenix::Transform tmp6 = this->transform;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(383)
						::phoenix::Transform _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(383)
						bool tmp7 = _this1->_destroying;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(383)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(383)
						if ((tmp8)){
							HX_STACK_LINE(383)
							bool tmp9 = (_this1->parent != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(383)
							if ((tmp9)){
								HX_STACK_LINE(383)
								bool tmp10 = _this1->parent->dirty;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(383)
								if ((tmp10)){
									HX_STACK_LINE(383)
									_this1->parent->clean();
								}
							}
							HX_STACK_LINE(383)
							bool tmp10 = _this1->dirty;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(383)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(383)
							if ((tmp10)){
								HX_STACK_LINE(383)
								bool tmp12 = _this1->_cleaning;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(383)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(383)
								tmp11 = !(tmp13);
							}
							else{
								HX_STACK_LINE(383)
								tmp11 = false;
							}
							HX_STACK_LINE(383)
							if ((tmp11)){
								HX_STACK_LINE(383)
								_this1->clean();
							}
						}
						HX_STACK_LINE(383)
						tmp5 = _this1->world;
					}
					HX_STACK_LINE(383)
					::phoenix::Spatial _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(383)
					tmp4 = _this1->matrix;
				}
				HX_STACK_LINE(383)
				::phoenix::Matrix _m = tmp4;		HX_STACK_VAR(_m,"_m");
				HX_STACK_LINE(383)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(383)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(383)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(383)
				Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					Float tmp5 = e->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(383)
					Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(383)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(383)
					Float tmp8 = e->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(383)
					Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(383)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(383)
					Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(383)
					Float tmp12 = e->__get((int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(383)
					Float tmp13 = _z;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(383)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(383)
					Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(383)
					Float tmp16 = e->__get((int)12);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(383)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(383)
					Float _x1 = tmp17;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(383)
					Float tmp18 = e->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(383)
					Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(383)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(383)
					Float tmp21 = e->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(383)
					Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(383)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(383)
					Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(383)
					Float tmp25 = e->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(383)
					Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(383)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(383)
					Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(383)
					Float tmp29 = e->__get((int)13);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(383)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(383)
					Float _y1 = tmp30;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(383)
					Float tmp31 = e->__get((int)2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(383)
					Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(383)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(383)
					Float tmp34 = e->__get((int)6);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(383)
					Float tmp35 = _y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(383)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(383)
					Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(383)
					Float tmp38 = e->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(383)
					Float tmp39 = _z;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(383)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(383)
					Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(383)
					Float tmp42 = e->__get((int)14);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(383)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(383)
					Float _z1 = tmp43;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(383)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(383)
					_this->ignore_listeners = true;
					HX_STACK_LINE(383)
					{
						HX_STACK_LINE(383)
						_this->x = _x1;
						HX_STACK_LINE(383)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(383)
						if ((tmp44)){
							HX_STACK_LINE(383)
							_this->x;
						}
						else{
							HX_STACK_LINE(383)
							bool tmp45 = (_this->listen_x != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(383)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(383)
							if ((tmp45)){
								HX_STACK_LINE(383)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(383)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(383)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(383)
								tmp46 = false;
							}
							HX_STACK_LINE(383)
							if ((tmp46)){
								HX_STACK_LINE(383)
								Float tmp47 = _x1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(383)
								_this->listen_x(tmp47);
							}
							HX_STACK_LINE(383)
							_this->x;
						}
					}
					HX_STACK_LINE(383)
					{
						HX_STACK_LINE(383)
						_this->y = _y1;
						HX_STACK_LINE(383)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(383)
						if ((tmp44)){
							HX_STACK_LINE(383)
							_this->y;
						}
						else{
							HX_STACK_LINE(383)
							bool tmp45 = (_this->listen_y != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(383)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(383)
							if ((tmp45)){
								HX_STACK_LINE(383)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(383)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(383)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(383)
								tmp46 = false;
							}
							HX_STACK_LINE(383)
							if ((tmp46)){
								HX_STACK_LINE(383)
								Float tmp47 = _y1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(383)
								_this->listen_y(tmp47);
							}
							HX_STACK_LINE(383)
							_this->y;
						}
					}
					HX_STACK_LINE(383)
					{
						HX_STACK_LINE(383)
						_this->z = _z1;
						HX_STACK_LINE(383)
						bool tmp44 = _this->_construct;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(383)
						if ((tmp44)){
							HX_STACK_LINE(383)
							_this->z;
						}
						else{
							HX_STACK_LINE(383)
							bool tmp45 = (_this->listen_z != null());		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(383)
							bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(383)
							if ((tmp45)){
								HX_STACK_LINE(383)
								bool tmp47 = _this->ignore_listeners;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(383)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(383)
								tmp46 = !(tmp48);
							}
							else{
								HX_STACK_LINE(383)
								tmp46 = false;
							}
							HX_STACK_LINE(383)
							if ((tmp46)){
								HX_STACK_LINE(383)
								Float tmp47 = _z1;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(383)
								_this->listen_z(tmp47);
							}
							HX_STACK_LINE(383)
							_this->z;
						}
					}
					HX_STACK_LINE(383)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(383)
					bool tmp44 = (_this->listen_x != null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(383)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(383)
					if ((tmp44)){
						HX_STACK_LINE(383)
						bool tmp46 = _this->ignore_listeners;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(383)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(383)
						tmp45 = !(tmp47);
					}
					else{
						HX_STACK_LINE(383)
						tmp45 = false;
					}
					HX_STACK_LINE(383)
					if ((tmp45)){
						HX_STACK_LINE(383)
						Float tmp46 = _this->x;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(383)
						_this->listen_x(tmp46);
					}
					HX_STACK_LINE(383)
					bool tmp46 = (_this->listen_y != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(383)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(383)
					if ((tmp46)){
						HX_STACK_LINE(383)
						bool tmp48 = _this->ignore_listeners;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(383)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(383)
						tmp47 = !(tmp49);
					}
					else{
						HX_STACK_LINE(383)
						tmp47 = false;
					}
					HX_STACK_LINE(383)
					if ((tmp47)){
						HX_STACK_LINE(383)
						Float tmp48 = _this->y;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(383)
						_this->listen_y(tmp48);
					}
					HX_STACK_LINE(383)
					bool tmp48 = (_this->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(383)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(383)
					if ((tmp48)){
						HX_STACK_LINE(383)
						bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(383)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(383)
						tmp49 = !(tmp51);
					}
					else{
						HX_STACK_LINE(383)
						tmp49 = false;
					}
					HX_STACK_LINE(383)
					if ((tmp49)){
						HX_STACK_LINE(383)
						Float tmp50 = _this->z;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(383)
						_this->listen_z(tmp50);
					}
					HX_STACK_LINE(383)
					_this;
				}
				HX_STACK_LINE(383)
				_this;
			}
			HX_STACK_LINE(386)
			::phoenix::Vector tmp3 = this->_final_vert_position;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(386)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(386)
			vertlist->push(tmp4);
			HX_STACK_LINE(387)
			::phoenix::Vector tmp5 = this->_final_vert_position;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			vertlist->push(tmp6);
			HX_STACK_LINE(388)
			::phoenix::Vector tmp7 = this->_final_vert_position;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(388)
			Float tmp8 = tmp7->z;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(388)
			vertlist->push(tmp8);
			HX_STACK_LINE(389)
			::phoenix::Vector tmp9 = this->_final_vert_position;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(389)
			Float tmp10 = tmp9->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(389)
			vertlist->push(tmp10);
			HX_STACK_LINE(392)
			::phoenix::geometry::TextureCoord tmp11 = v->uv->uv0;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(392)
			Float tmp12 = tmp11->u;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(392)
			tcoordlist->push(tmp12);
			HX_STACK_LINE(393)
			::phoenix::geometry::TextureCoord tmp13 = v->uv->uv0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			Float tmp14 = tmp13->v;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			tcoordlist->push(tmp14);
			HX_STACK_LINE(394)
			::phoenix::geometry::TextureCoord tmp15 = v->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(394)
			Float tmp16 = tmp15->w;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(394)
			tcoordlist->push(tmp16);
			HX_STACK_LINE(395)
			::phoenix::geometry::TextureCoord tmp17 = v->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(395)
			Float tmp18 = tmp17->t;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(395)
			tcoordlist->push(tmp18);
			HX_STACK_LINE(398)
			Float tmp19 = v->color->r;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(398)
			colorlist->push(tmp19);
			HX_STACK_LINE(399)
			Float tmp20 = v->color->g;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(399)
			colorlist->push(tmp20);
			HX_STACK_LINE(400)
			Float tmp21 = v->color->b;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(400)
			colorlist->push(tmp21);
			HX_STACK_LINE(401)
			Float tmp22 = v->color->a;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(401)
			colorlist->push(tmp22);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Geometry_obj,batch_into_arrays,(void))

Void Geometry_obj::destroy_vbos( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","destroy_vbos",0xfa06f454,"phoenix.geometry.Geometry.destroy_vbos","phoenix/geometry/Geometry.hx",416,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(417)
		::snow::modules::opengl::native::GLBO tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(417)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(417)
		if ((tmp1)){
			HX_STACK_LINE(417)
			return null();
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			::snow::modules::opengl::native::GLBO tmp2 = this->vb_pos;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(418)
			::snow::modules::opengl::native::GLBO buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(418)
			int tmp3 = buffer->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(418)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_buffer(tmp3);
			HX_STACK_LINE(418)
			buffer->set_invalidated(true);
		}
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::snow::modules::opengl::native::GLBO tmp2 = this->vb_tcoords;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(419)
			::snow::modules::opengl::native::GLBO buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(419)
			int tmp3 = buffer->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(419)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_buffer(tmp3);
			HX_STACK_LINE(419)
			buffer->set_invalidated(true);
		}
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			::snow::modules::opengl::native::GLBO tmp2 = this->vb_colors;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(420)
			::snow::modules::opengl::native::GLBO buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(420)
			int tmp3 = buffer->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(420)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_buffer(tmp3);
			HX_STACK_LINE(420)
			buffer->set_invalidated(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,destroy_vbos,(void))

Void Geometry_obj::create_vbos( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","create_vbos",0x8f2a5b34,"phoenix.geometry.Geometry.create_vbos","phoenix/geometry/Geometry.hx",427,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(428)
		::snow::modules::opengl::native::GLBO tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(428)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		if ((tmp1)){
			HX_STACK_LINE(428)
			return null();
		}
		HX_STACK_LINE(429)
		::snow::modules::opengl::native::GLBO tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(429)
		{
			HX_STACK_LINE(429)
			int tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			int _id = tmp3;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(429)
			::snow::modules::opengl::native::GLBO tmp4 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(429)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(429)
		this->vb_pos = tmp2;
		HX_STACK_LINE(430)
		::snow::modules::opengl::native::GLBO tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			int tmp4 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(430)
			int _id = tmp4;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(430)
			::snow::modules::opengl::native::GLBO tmp5 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(430)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(430)
		this->vb_tcoords = tmp3;
		HX_STACK_LINE(431)
		::snow::modules::opengl::native::GLBO tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			int tmp5 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(431)
			int _id = tmp5;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(431)
			::snow::modules::opengl::native::GLBO tmp6 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(431)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(431)
		this->vb_colors = tmp4;
		HX_STACK_LINE(435)
		this->set_dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,create_vbos,(void))

Void Geometry_obj::bind( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind",0x8ba5631c,"phoenix.geometry.Geometry.bind","phoenix/geometry/Geometry.hx",439,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(440)
		{
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				::snow::modules::opengl::native::GLBO tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(440)
				::snow::modules::opengl::native::GLBO buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(440)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(440)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(440)
				if ((tmp1)){
					HX_STACK_LINE(440)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(440)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(440)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp2);
			}
			HX_STACK_LINE(440)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
		}
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				::snow::modules::opengl::native::GLBO tmp = this->vb_tcoords;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(441)
				::snow::modules::opengl::native::GLBO buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(441)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(441)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(441)
				if ((tmp1)){
					HX_STACK_LINE(441)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(441)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(441)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp2);
			}
			HX_STACK_LINE(441)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
		}
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				::snow::modules::opengl::native::GLBO tmp = this->vb_colors;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(442)
				::snow::modules::opengl::native::GLBO buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(442)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(442)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(442)
				if ((tmp1)){
					HX_STACK_LINE(442)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(442)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(442)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp2);
			}
			HX_STACK_LINE(442)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind,(void))

Void Geometry_obj::bind_pos( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind_pos",0xcbebc3b1,"phoenix.geometry.Geometry.bind_pos","phoenix/geometry/Geometry.hx",450,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(451)
		{
			HX_STACK_LINE(451)
			::snow::modules::opengl::native::GLBO tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(451)
			::snow::modules::opengl::native::GLBO buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(451)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(451)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(451)
			if ((tmp1)){
				HX_STACK_LINE(451)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(451)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(451)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp2);
		}
		HX_STACK_LINE(452)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind_pos,(void))

Void Geometry_obj::bind_tcoords( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind_tcoords",0x809eac2f,"phoenix.geometry.Geometry.bind_tcoords","phoenix/geometry/Geometry.hx",456,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(457)
		{
			HX_STACK_LINE(457)
			::snow::modules::opengl::native::GLBO tmp = this->vb_tcoords;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(457)
			::snow::modules::opengl::native::GLBO buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(457)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(457)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(457)
			if ((tmp1)){
				HX_STACK_LINE(457)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(457)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(457)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp2);
		}
		HX_STACK_LINE(458)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind_tcoords,(void))

Void Geometry_obj::bind_colors( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind_colors",0x5b9f4fb3,"phoenix.geometry.Geometry.bind_colors","phoenix/geometry/Geometry.hx",462,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::snow::modules::opengl::native::GLBO tmp = this->vb_colors;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(463)
			::snow::modules::opengl::native::GLBO buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(463)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(463)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(463)
			if ((tmp1)){
				HX_STACK_LINE(463)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(463)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(463)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp2);
		}
		HX_STACK_LINE(464)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind_colors,(void))

Void Geometry_obj::unbind( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","unbind",0x3bf7bfb5,"phoenix.geometry.Geometry.unbind","phoenix/geometry/Geometry.hx",477,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(477)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(477)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(477)
		if ((tmp)){
			HX_STACK_LINE(477)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(477)
			tmp1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
		}
		HX_STACK_LINE(477)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,unbind,(void))

Void Geometry_obj::bind_and_upload( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","bind_and_upload",0xd9d1412c,"phoenix.geometry.Geometry.bind_and_upload","phoenix/geometry/Geometry.hx",481,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				::snow::modules::opengl::native::GLBO tmp = this->vb_pos;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(483)
				::snow::modules::opengl::native::GLBO buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(483)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(483)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(483)
				if ((tmp1)){
					HX_STACK_LINE(483)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(483)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(483)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp2);
			}
			HX_STACK_LINE(483)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
		}
		HX_STACK_LINE(484)
		{
			HX_STACK_LINE(484)
			::snow::api::buffers::ArrayBufferView tmp = this->buffer_pos;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(484)
			::snow::api::buffers::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(484)
			int tmp1 = this->buffer_type;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(484)
			int usage = tmp1;		HX_STACK_VAR(usage,"usage");
			HX_STACK_LINE(484)
			bool tmp2 = (data != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(484)
			if ((tmp2)){
				HX_STACK_LINE(484)
				int tmp3 = data->byteOffset;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(484)
				int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(484)
				int tmp5 = usage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(484)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp3,tmp4,tmp5);
			}
			else{
				HX_STACK_LINE(484)
				int tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(484)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp3);
			}
		}
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			{
				HX_STACK_LINE(486)
				::snow::modules::opengl::native::GLBO tmp = this->vb_tcoords;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(486)
				::snow::modules::opengl::native::GLBO buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(486)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(486)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(486)
				if ((tmp1)){
					HX_STACK_LINE(486)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(486)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(486)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp2);
			}
			HX_STACK_LINE(486)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
		}
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(487)
			::snow::api::buffers::ArrayBufferView tmp = this->buffer_tcoords;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(487)
			::snow::api::buffers::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(487)
			int tmp1 = this->buffer_type;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(487)
			int usage = tmp1;		HX_STACK_VAR(usage,"usage");
			HX_STACK_LINE(487)
			bool tmp2 = (data != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(487)
			if ((tmp2)){
				HX_STACK_LINE(487)
				int tmp3 = data->byteOffset;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(487)
				int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(487)
				int tmp5 = usage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(487)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp3,tmp4,tmp5);
			}
			else{
				HX_STACK_LINE(487)
				int tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(487)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp3);
			}
		}
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			{
				HX_STACK_LINE(489)
				::snow::modules::opengl::native::GLBO tmp = this->vb_colors;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(489)
				::snow::modules::opengl::native::GLBO buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(489)
				bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(489)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(489)
				if ((tmp1)){
					HX_STACK_LINE(489)
					tmp2 = (int)0;
				}
				else{
					HX_STACK_LINE(489)
					tmp2 = buffer->id;
				}
				HX_STACK_LINE(489)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp2);
			}
			HX_STACK_LINE(489)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
		}
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			::snow::api::buffers::ArrayBufferView tmp = this->buffer_colors;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(490)
			::snow::api::buffers::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(490)
			int tmp1 = this->buffer_type;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(490)
			int usage = tmp1;		HX_STACK_VAR(usage,"usage");
			HX_STACK_LINE(490)
			bool tmp2 = (data != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(490)
			if ((tmp2)){
				HX_STACK_LINE(490)
				int tmp3 = data->byteOffset;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(490)
				int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(490)
				int tmp5 = usage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(490)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp3,tmp4,tmp5);
			}
			else{
				HX_STACK_LINE(490)
				int tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(490)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,bind_and_upload,(void))

bool Geometry_obj::update_buffers( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","update_buffers",0x1503ae1c,"phoenix.geometry.Geometry.update_buffers","phoenix/geometry/Geometry.hx",500,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(502)
	bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(502)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(502)
	if ((tmp1)){
		HX_STACK_LINE(502)
		return false;
	}
	HX_STACK_LINE(504)
	int tmp2 = this->vertices->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(504)
	int _verts = tmp2;		HX_STACK_VAR(_verts,"_verts");
	HX_STACK_LINE(507)
	int tmp3 = _verts;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(507)
	int tmp4 = this->_prev_count;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(507)
	bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(507)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(507)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(507)
	if ((tmp6)){
		HX_STACK_LINE(507)
		::snow::api::buffers::ArrayBufferView tmp8 = this->buffer_pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(507)
		::snow::api::buffers::ArrayBufferView tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(507)
		tmp7 = (tmp9 == null());
	}
	else{
		HX_STACK_LINE(507)
		tmp7 = true;
	}
	HX_STACK_LINE(507)
	if ((tmp7)){
		HX_STACK_LINE(508)
		int tmp8 = this->vertices->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(508)
		int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(508)
		int _length = tmp9;		HX_STACK_VAR(_length,"_length");
		HX_STACK_LINE(509)
		this->buffer_pos = null();
		HX_STACK_LINE(510)
		this->buffer_normals = null();
		HX_STACK_LINE(511)
		this->buffer_colors = null();
		HX_STACK_LINE(512)
		this->buffer_tcoords = null();
		HX_STACK_LINE(513)
		::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(513)
			bool tmp11 = (_length != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(513)
			if ((tmp11)){
				HX_STACK_LINE(513)
				::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(_length,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(513)
				this1 = tmp12;
			}
			else{
				HX_STACK_LINE(513)
				bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(513)
				if ((tmp12)){
					HX_STACK_LINE(513)
					::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(513)
						::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(513)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(513)
						int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(513)
						_this->length = tmp15;
						HX_STACK_LINE(513)
						int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(513)
						_this->byteLength = tmp16;
						HX_STACK_LINE(513)
						::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(513)
							int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(513)
							::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(513)
							this2 = tmp19;
							HX_STACK_LINE(513)
							tmp17 = this2;
						}
						HX_STACK_LINE(513)
						_this->buffer = tmp17;
						HX_STACK_LINE(513)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(513)
						tmp13 = _this;
					}
					HX_STACK_LINE(513)
					this1 = tmp13;
				}
				else{
					HX_STACK_LINE(513)
					bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(513)
					if ((tmp13)){
						HX_STACK_LINE(513)
						::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(513)
							::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(513)
							::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(513)
							::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(513)
							int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(513)
							int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(513)
							int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(513)
							int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(513)
							int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(513)
							int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(513)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(513)
							int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(513)
							int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(513)
							bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(513)
							if ((tmp22)){
								HX_STACK_LINE(513)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(513)
								int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(513)
								int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(513)
								::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(513)
								{
									HX_STACK_LINE(513)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(513)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(513)
									::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(513)
									this2 = tmp26;
									HX_STACK_LINE(513)
									tmp24 = this2;
								}
								HX_STACK_LINE(513)
								_this->buffer = tmp24;
								HX_STACK_LINE(513)
								::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(513)
								int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(513)
								int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(513)
								_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
							}
							else{
								HX_STACK_LINE(513)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(513)
							int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(513)
							_this->byteLength = tmp23;
							HX_STACK_LINE(513)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(513)
							_this->length = srcLength;
							HX_STACK_LINE(513)
							tmp14 = _this;
						}
						HX_STACK_LINE(513)
						this1 = tmp14;
					}
					else{
						HX_STACK_LINE(513)
						bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(513)
						if ((tmp14)){
							HX_STACK_LINE(513)
							::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(513)
							{
								HX_STACK_LINE(513)
								::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(513)
								::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(513)
								bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(513)
								if ((tmp17)){
									HX_STACK_LINE(513)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(513)
								int tmp18 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(513)
								bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(513)
								if ((tmp19)){
									HX_STACK_LINE(513)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(513)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(513)
								int bufferByteLength = tmp20;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(513)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(513)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(513)
								bool tmp21 = true;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(513)
								if ((tmp21)){
									HX_STACK_LINE(513)
									int tmp22 = bufferByteLength;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(513)
									newByteLength = tmp22;
									HX_STACK_LINE(513)
									int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(513)
									bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(513)
									if ((tmp24)){
										HX_STACK_LINE(513)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(513)
									bool tmp25 = (newByteLength < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(513)
									if ((tmp25)){
										HX_STACK_LINE(513)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(513)
									int tmp22 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(513)
									newByteLength = tmp22;
									HX_STACK_LINE(513)
									int tmp23 = newByteLength;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(513)
									int newRange = tmp23;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(513)
									bool tmp24 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(513)
									if ((tmp24)){
										HX_STACK_LINE(513)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(513)
								_this->buffer = null();
								HX_STACK_LINE(513)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(513)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(513)
								Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(513)
								int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(513)
								_this->length = tmp23;
								HX_STACK_LINE(513)
								tmp15 = _this;
							}
							HX_STACK_LINE(513)
							this1 = tmp15;
						}
						else{
							HX_STACK_LINE(513)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(513)
			tmp10 = this1;
		}
		HX_STACK_LINE(513)
		this->buffer_pos = tmp10;
		HX_STACK_LINE(514)
		::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(514)
			bool tmp12 = (_length != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(514)
			if ((tmp12)){
				HX_STACK_LINE(514)
				::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new(_length,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(514)
				this1 = tmp13;
			}
			else{
				HX_STACK_LINE(514)
				bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(514)
				if ((tmp13)){
					HX_STACK_LINE(514)
					::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(514)
						::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(514)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(514)
						int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(514)
						_this->length = tmp16;
						HX_STACK_LINE(514)
						int tmp17 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(514)
						_this->byteLength = tmp17;
						HX_STACK_LINE(514)
						::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(514)
						{
							HX_STACK_LINE(514)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(514)
							int tmp19 = _this->byteLength;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(514)
							::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(514)
							this2 = tmp20;
							HX_STACK_LINE(514)
							tmp18 = this2;
						}
						HX_STACK_LINE(514)
						_this->buffer = tmp18;
						HX_STACK_LINE(514)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(514)
						tmp14 = _this;
					}
					HX_STACK_LINE(514)
					this1 = tmp14;
				}
				else{
					HX_STACK_LINE(514)
					bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(514)
					if ((tmp14)){
						HX_STACK_LINE(514)
						::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(514)
						{
							HX_STACK_LINE(514)
							::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(514)
							::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(514)
							::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(514)
							::haxe::io::Bytes srcData = tmp17;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(514)
							int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(514)
							int srcLength = tmp18;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(514)
							int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(514)
							int srcByteOffset = tmp19;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(514)
							int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(514)
							int srcElementSize = tmp20;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(514)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(514)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(514)
							int tmp22 = _this->type;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(514)
							bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(514)
							if ((tmp23)){
								HX_STACK_LINE(514)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(514)
								int tmp24 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(514)
								int cloneLength = tmp24;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(514)
								::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(514)
								{
									HX_STACK_LINE(514)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(514)
									int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(514)
									::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(514)
									this2 = tmp27;
									HX_STACK_LINE(514)
									tmp25 = this2;
								}
								HX_STACK_LINE(514)
								_this->buffer = tmp25;
								HX_STACK_LINE(514)
								::haxe::io::Bytes tmp26 = srcData;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(514)
								int tmp27 = srcByteOffset;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(514)
								int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(514)
								_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
							}
							else{
								HX_STACK_LINE(514)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(514)
							int tmp24 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(514)
							_this->byteLength = tmp24;
							HX_STACK_LINE(514)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(514)
							_this->length = srcLength;
							HX_STACK_LINE(514)
							tmp15 = _this;
						}
						HX_STACK_LINE(514)
						this1 = tmp15;
					}
					else{
						HX_STACK_LINE(514)
						bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(514)
						if ((tmp15)){
							HX_STACK_LINE(514)
							::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(514)
							{
								HX_STACK_LINE(514)
								::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(514)
								::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(514)
								bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(514)
								if ((tmp18)){
									HX_STACK_LINE(514)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(514)
								int tmp19 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(514)
								bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(514)
								if ((tmp20)){
									HX_STACK_LINE(514)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(514)
								int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(514)
								int bufferByteLength = tmp21;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(514)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(514)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(514)
								bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(514)
								if ((tmp22)){
									HX_STACK_LINE(514)
									int tmp23 = bufferByteLength;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(514)
									newByteLength = tmp23;
									HX_STACK_LINE(514)
									int tmp24 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(514)
									bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(514)
									if ((tmp25)){
										HX_STACK_LINE(514)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(514)
									bool tmp26 = (newByteLength < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(514)
									if ((tmp26)){
										HX_STACK_LINE(514)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(514)
									int tmp23 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(514)
									newByteLength = tmp23;
									HX_STACK_LINE(514)
									int tmp24 = newByteLength;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(514)
									int newRange = tmp24;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(514)
									bool tmp25 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(514)
									if ((tmp25)){
										HX_STACK_LINE(514)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(514)
								_this->buffer = null();
								HX_STACK_LINE(514)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(514)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(514)
								Float tmp23 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(514)
								int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(514)
								_this->length = tmp24;
								HX_STACK_LINE(514)
								tmp16 = _this;
							}
							HX_STACK_LINE(514)
							this1 = tmp16;
						}
						else{
							HX_STACK_LINE(514)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(514)
			tmp11 = this1;
		}
		HX_STACK_LINE(514)
		this->buffer_tcoords = tmp11;
		HX_STACK_LINE(515)
		::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(515)
		{
			HX_STACK_LINE(515)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(515)
			bool tmp13 = (_length != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(515)
			if ((tmp13)){
				HX_STACK_LINE(515)
				::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new(_length,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(515)
				this1 = tmp14;
			}
			else{
				HX_STACK_LINE(515)
				bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(515)
				if ((tmp14)){
					HX_STACK_LINE(515)
					::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(515)
					{
						HX_STACK_LINE(515)
						::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(515)
						::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(515)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(515)
						int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(515)
						_this->length = tmp17;
						HX_STACK_LINE(515)
						int tmp18 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(515)
						_this->byteLength = tmp18;
						HX_STACK_LINE(515)
						::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(515)
						{
							HX_STACK_LINE(515)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(515)
							int tmp20 = _this->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(515)
							::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(515)
							this2 = tmp21;
							HX_STACK_LINE(515)
							tmp19 = this2;
						}
						HX_STACK_LINE(515)
						_this->buffer = tmp19;
						HX_STACK_LINE(515)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(515)
						tmp15 = _this;
					}
					HX_STACK_LINE(515)
					this1 = tmp15;
				}
				else{
					HX_STACK_LINE(515)
					bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(515)
					if ((tmp15)){
						HX_STACK_LINE(515)
						::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(515)
						{
							HX_STACK_LINE(515)
							::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(515)
							::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(515)
							::haxe::io::Bytes tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(515)
							::haxe::io::Bytes srcData = tmp18;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(515)
							int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(515)
							int srcLength = tmp19;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(515)
							int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(515)
							int srcByteOffset = tmp20;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(515)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(515)
							int srcElementSize = tmp21;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(515)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(515)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(515)
							int tmp23 = _this->type;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(515)
							bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(515)
							if ((tmp24)){
								HX_STACK_LINE(515)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(515)
								int tmp25 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(515)
								int cloneLength = tmp25;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(515)
								::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(515)
								{
									HX_STACK_LINE(515)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(515)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(515)
									::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(515)
									this2 = tmp28;
									HX_STACK_LINE(515)
									tmp26 = this2;
								}
								HX_STACK_LINE(515)
								_this->buffer = tmp26;
								HX_STACK_LINE(515)
								::haxe::io::Bytes tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(515)
								int tmp28 = srcByteOffset;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(515)
								int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(515)
								_this->buffer->blit((int)0,tmp27,tmp28,tmp29);
							}
							else{
								HX_STACK_LINE(515)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(515)
							int tmp25 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(515)
							_this->byteLength = tmp25;
							HX_STACK_LINE(515)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(515)
							_this->length = srcLength;
							HX_STACK_LINE(515)
							tmp16 = _this;
						}
						HX_STACK_LINE(515)
						this1 = tmp16;
					}
					else{
						HX_STACK_LINE(515)
						bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(515)
						if ((tmp16)){
							HX_STACK_LINE(515)
							::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(515)
							{
								HX_STACK_LINE(515)
								::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(515)
								::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(515)
								bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(515)
								if ((tmp19)){
									HX_STACK_LINE(515)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(515)
								int tmp20 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(515)
								bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(515)
								if ((tmp21)){
									HX_STACK_LINE(515)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(515)
								int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(515)
								int bufferByteLength = tmp22;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(515)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(515)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(515)
								bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(515)
								if ((tmp23)){
									HX_STACK_LINE(515)
									int tmp24 = bufferByteLength;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(515)
									newByteLength = tmp24;
									HX_STACK_LINE(515)
									int tmp25 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(515)
									bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(515)
									if ((tmp26)){
										HX_STACK_LINE(515)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(515)
									bool tmp27 = (newByteLength < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(515)
									if ((tmp27)){
										HX_STACK_LINE(515)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(515)
									int tmp24 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(515)
									newByteLength = tmp24;
									HX_STACK_LINE(515)
									int tmp25 = newByteLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(515)
									int newRange = tmp25;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(515)
									bool tmp26 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(515)
									if ((tmp26)){
										HX_STACK_LINE(515)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(515)
								_this->buffer = null();
								HX_STACK_LINE(515)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(515)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(515)
								Float tmp24 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(515)
								int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(515)
								_this->length = tmp25;
								HX_STACK_LINE(515)
								tmp17 = _this;
							}
							HX_STACK_LINE(515)
							this1 = tmp17;
						}
						else{
							HX_STACK_LINE(515)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(515)
			tmp12 = this1;
		}
		HX_STACK_LINE(515)
		this->buffer_colors = tmp12;
	}
	HX_STACK_LINE(521)
	bool tmp8 = this->object_space;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(521)
	if ((tmp8)){
		HX_STACK_LINE(522)
		int vert_index = (int)0;		HX_STACK_VAR(vert_index,"vert_index");
		HX_STACK_LINE(522)
		int tcoord_index = (int)0;		HX_STACK_VAR(tcoord_index,"tcoord_index");
		HX_STACK_LINE(522)
		int color_index = (int)0;		HX_STACK_VAR(color_index,"color_index");
		HX_STACK_LINE(522)
		int normal_index = (int)0;		HX_STACK_VAR(normal_index,"normal_index");
		HX_STACK_LINE(522)
		::snow::api::buffers::ArrayBufferView tmp9 = this->buffer_pos;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(522)
		::snow::api::buffers::ArrayBufferView vertlist = tmp9;		HX_STACK_VAR(vertlist,"vertlist");
		HX_STACK_LINE(522)
		::snow::api::buffers::ArrayBufferView tmp10 = this->buffer_tcoords;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(522)
		::snow::api::buffers::ArrayBufferView tcoordlist = tmp10;		HX_STACK_VAR(tcoordlist,"tcoordlist");
		HX_STACK_LINE(522)
		::snow::api::buffers::ArrayBufferView tmp11 = this->buffer_colors;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(522)
		::snow::api::buffers::ArrayBufferView colorlist = tmp11;		HX_STACK_VAR(colorlist,"colorlist");
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(522)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(522)
			Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(522)
			while((true)){
				HX_STACK_LINE(522)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(522)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(522)
				if ((tmp13)){
					HX_STACK_LINE(522)
					break;
				}
				HX_STACK_LINE(522)
				::phoenix::geometry::Vertex tmp14 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(522)
				::phoenix::geometry::Vertex v = tmp14;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(522)
				++(_g);
				HX_STACK_LINE(522)
				::phoenix::Vector _vpos = v->pos;		HX_STACK_VAR(_vpos,"_vpos");
				HX_STACK_LINE(522)
				::phoenix::geometry::TextureCoord tmp15 = v->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(522)
				::phoenix::geometry::TextureCoord _vuv = tmp15;		HX_STACK_VAR(_vuv,"_vuv");
				HX_STACK_LINE(522)
				::phoenix::Color _vcol = v->color;		HX_STACK_VAR(_vcol,"_vcol");
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (vert_index * (int)4)),_vpos->x);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),_vpos->y);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),_vpos->z);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),_vpos->w);
				HX_STACK_LINE(522)
				hx::AddEq(vert_index,(int)4);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
				HX_STACK_LINE(522)
				hx::AddEq(tcoord_index,(int)4);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (color_index * (int)4)),_vcol->r);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),_vcol->g);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),_vcol->b);
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),_vcol->a);
				HX_STACK_LINE(522)
				hx::AddEq(color_index,(int)4);
				HX_STACK_LINE(522)
				hx::AddEq(normal_index,(int)4);
			}
		}
	}
	else{
		HX_STACK_LINE(524)
		int vert_index = (int)0;		HX_STACK_VAR(vert_index,"vert_index");
		HX_STACK_LINE(524)
		int tcoord_index = (int)0;		HX_STACK_VAR(tcoord_index,"tcoord_index");
		HX_STACK_LINE(524)
		int color_index = (int)0;		HX_STACK_VAR(color_index,"color_index");
		HX_STACK_LINE(524)
		int normal_index = (int)0;		HX_STACK_VAR(normal_index,"normal_index");
		HX_STACK_LINE(524)
		::snow::api::buffers::ArrayBufferView tmp9 = this->buffer_pos;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(524)
		::snow::api::buffers::ArrayBufferView vertlist = tmp9;		HX_STACK_VAR(vertlist,"vertlist");
		HX_STACK_LINE(524)
		::snow::api::buffers::ArrayBufferView tmp10 = this->buffer_tcoords;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(524)
		::snow::api::buffers::ArrayBufferView tcoordlist = tmp10;		HX_STACK_VAR(tcoordlist,"tcoordlist");
		HX_STACK_LINE(524)
		::snow::api::buffers::ArrayBufferView tmp11 = this->buffer_colors;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(524)
		::snow::api::buffers::ArrayBufferView colorlist = tmp11;		HX_STACK_VAR(colorlist,"colorlist");
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(524)
			Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(524)
			while((true)){
				HX_STACK_LINE(524)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(524)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(524)
				if ((tmp13)){
					HX_STACK_LINE(524)
					break;
				}
				HX_STACK_LINE(524)
				::phoenix::geometry::Vertex tmp14 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(524)
				::phoenix::geometry::Vertex v = tmp14;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(524)
				++(_g);
				HX_STACK_LINE(524)
				{
					HX_STACK_LINE(524)
					::phoenix::Vector tmp15 = this->_final_vert_position;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(524)
					::phoenix::Vector _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(524)
					Float tmp16 = v->pos->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(524)
					Float _x = tmp16;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(524)
					Float tmp17 = v->pos->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(524)
					Float _y = tmp17;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(524)
					Float tmp18 = v->pos->z;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(524)
					Float _z = tmp18;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(524)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(524)
					_this->ignore_listeners = true;
					HX_STACK_LINE(524)
					{
						HX_STACK_LINE(524)
						_this->x = _x;
						HX_STACK_LINE(524)
						bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(524)
						if ((tmp19)){
							HX_STACK_LINE(524)
							_this->x;
						}
						else{
							HX_STACK_LINE(524)
							bool tmp20 = (_this->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(524)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(524)
							if ((tmp20)){
								HX_STACK_LINE(524)
								bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(524)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(524)
								tmp21 = !(tmp23);
							}
							else{
								HX_STACK_LINE(524)
								tmp21 = false;
							}
							HX_STACK_LINE(524)
							if ((tmp21)){
								HX_STACK_LINE(524)
								Float tmp22 = _x;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(524)
								_this->listen_x(tmp22);
							}
							HX_STACK_LINE(524)
							_this->x;
						}
					}
					HX_STACK_LINE(524)
					{
						HX_STACK_LINE(524)
						_this->y = _y;
						HX_STACK_LINE(524)
						bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(524)
						if ((tmp19)){
							HX_STACK_LINE(524)
							_this->y;
						}
						else{
							HX_STACK_LINE(524)
							bool tmp20 = (_this->listen_y != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(524)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(524)
							if ((tmp20)){
								HX_STACK_LINE(524)
								bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(524)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(524)
								tmp21 = !(tmp23);
							}
							else{
								HX_STACK_LINE(524)
								tmp21 = false;
							}
							HX_STACK_LINE(524)
							if ((tmp21)){
								HX_STACK_LINE(524)
								Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(524)
								_this->listen_y(tmp22);
							}
							HX_STACK_LINE(524)
							_this->y;
						}
					}
					HX_STACK_LINE(524)
					{
						HX_STACK_LINE(524)
						_this->z = _z;
						HX_STACK_LINE(524)
						bool tmp19 = _this->_construct;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(524)
						if ((tmp19)){
							HX_STACK_LINE(524)
							_this->z;
						}
						else{
							HX_STACK_LINE(524)
							bool tmp20 = (_this->listen_z != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(524)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(524)
							if ((tmp20)){
								HX_STACK_LINE(524)
								bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(524)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(524)
								tmp21 = !(tmp23);
							}
							else{
								HX_STACK_LINE(524)
								tmp21 = false;
							}
							HX_STACK_LINE(524)
							if ((tmp21)){
								HX_STACK_LINE(524)
								Float tmp22 = _z;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(524)
								_this->listen_z(tmp22);
							}
							HX_STACK_LINE(524)
							_this->z;
						}
					}
					HX_STACK_LINE(524)
					Float tmp19 = v->pos->w;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(524)
					_this->w = tmp19;
					HX_STACK_LINE(524)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(524)
					bool tmp20 = (_this->listen_x != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(524)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(524)
					if ((tmp20)){
						HX_STACK_LINE(524)
						bool tmp22 = _this->ignore_listeners;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(524)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(524)
						tmp21 = !(tmp23);
					}
					else{
						HX_STACK_LINE(524)
						tmp21 = false;
					}
					HX_STACK_LINE(524)
					if ((tmp21)){
						HX_STACK_LINE(524)
						Float tmp22 = _this->x;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(524)
						_this->listen_x(tmp22);
					}
					HX_STACK_LINE(524)
					bool tmp22 = (_this->listen_y != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(524)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(524)
					if ((tmp22)){
						HX_STACK_LINE(524)
						bool tmp24 = _this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(524)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(524)
						tmp23 = !(tmp25);
					}
					else{
						HX_STACK_LINE(524)
						tmp23 = false;
					}
					HX_STACK_LINE(524)
					if ((tmp23)){
						HX_STACK_LINE(524)
						Float tmp24 = _this->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(524)
						_this->listen_y(tmp24);
					}
					HX_STACK_LINE(524)
					bool tmp24 = (_this->listen_z != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(524)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(524)
					if ((tmp24)){
						HX_STACK_LINE(524)
						bool tmp26 = _this->ignore_listeners;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(524)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(524)
						tmp25 = !(tmp27);
					}
					else{
						HX_STACK_LINE(524)
						tmp25 = false;
					}
					HX_STACK_LINE(524)
					if ((tmp25)){
						HX_STACK_LINE(524)
						Float tmp26 = _this->z;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(524)
						_this->listen_z(tmp26);
					}
					HX_STACK_LINE(524)
					_this;
				}
				HX_STACK_LINE(524)
				{
					HX_STACK_LINE(524)
					::phoenix::Vector tmp15 = this->_final_vert_position;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(524)
					::phoenix::Vector _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(524)
					::phoenix::Matrix tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(524)
					{
						HX_STACK_LINE(524)
						::phoenix::Spatial tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(524)
						{
							HX_STACK_LINE(524)
							::phoenix::Transform tmp18 = this->transform;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(524)
							::phoenix::Transform _this1 = tmp18;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(524)
							bool tmp19 = _this1->_destroying;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(524)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(524)
							if ((tmp20)){
								HX_STACK_LINE(524)
								bool tmp21 = (_this1->parent != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(524)
								if ((tmp21)){
									HX_STACK_LINE(524)
									bool tmp22 = _this1->parent->dirty;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(524)
									if ((tmp22)){
										HX_STACK_LINE(524)
										_this1->parent->clean();
									}
								}
								HX_STACK_LINE(524)
								bool tmp22 = _this1->dirty;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(524)
								bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(524)
								if ((tmp22)){
									HX_STACK_LINE(524)
									bool tmp24 = _this1->_cleaning;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(524)
									bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(524)
									tmp23 = !(tmp25);
								}
								else{
									HX_STACK_LINE(524)
									tmp23 = false;
								}
								HX_STACK_LINE(524)
								if ((tmp23)){
									HX_STACK_LINE(524)
									_this1->clean();
								}
							}
							HX_STACK_LINE(524)
							tmp17 = _this1->world;
						}
						HX_STACK_LINE(524)
						::phoenix::Spatial _this1 = tmp17;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(524)
						tmp16 = _this1->matrix;
					}
					HX_STACK_LINE(524)
					::phoenix::Matrix _m = tmp16;		HX_STACK_VAR(_m,"_m");
					HX_STACK_LINE(524)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(524)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(524)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(524)
					Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(524)
					{
						HX_STACK_LINE(524)
						Float tmp17 = e->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(524)
						Float tmp18 = _x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(524)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(524)
						Float tmp20 = e->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(524)
						Float tmp21 = _y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(524)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(524)
						Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(524)
						Float tmp24 = e->__get((int)8);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(524)
						Float tmp25 = _z;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(524)
						Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(524)
						Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(524)
						Float tmp28 = e->__get((int)12);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(524)
						Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(524)
						Float _x1 = tmp29;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(524)
						Float tmp30 = e->__get((int)1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(524)
						Float tmp31 = _x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(524)
						Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(524)
						Float tmp33 = e->__get((int)5);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(524)
						Float tmp34 = _y;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(524)
						Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(524)
						Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(524)
						Float tmp37 = e->__get((int)9);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(524)
						Float tmp38 = _z;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(524)
						Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(524)
						Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(524)
						Float tmp41 = e->__get((int)13);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(524)
						Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(524)
						Float _y1 = tmp42;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(524)
						Float tmp43 = e->__get((int)2);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(524)
						Float tmp44 = _x;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(524)
						Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(524)
						Float tmp46 = e->__get((int)6);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(524)
						Float tmp47 = _y;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(524)
						Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(524)
						Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(524)
						Float tmp50 = e->__get((int)10);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(524)
						Float tmp51 = _z;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(524)
						Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(524)
						Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(524)
						Float tmp54 = e->__get((int)14);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(524)
						Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(524)
						Float _z1 = tmp55;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(524)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(524)
						_this->ignore_listeners = true;
						HX_STACK_LINE(524)
						{
							HX_STACK_LINE(524)
							_this->x = _x1;
							HX_STACK_LINE(524)
							bool tmp56 = _this->_construct;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(524)
							if ((tmp56)){
								HX_STACK_LINE(524)
								_this->x;
							}
							else{
								HX_STACK_LINE(524)
								bool tmp57 = (_this->listen_x != null());		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(524)
								bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(524)
								if ((tmp57)){
									HX_STACK_LINE(524)
									bool tmp59 = _this->ignore_listeners;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(524)
									bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(524)
									tmp58 = !(tmp60);
								}
								else{
									HX_STACK_LINE(524)
									tmp58 = false;
								}
								HX_STACK_LINE(524)
								if ((tmp58)){
									HX_STACK_LINE(524)
									Float tmp59 = _x1;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(524)
									_this->listen_x(tmp59);
								}
								HX_STACK_LINE(524)
								_this->x;
							}
						}
						HX_STACK_LINE(524)
						{
							HX_STACK_LINE(524)
							_this->y = _y1;
							HX_STACK_LINE(524)
							bool tmp56 = _this->_construct;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(524)
							if ((tmp56)){
								HX_STACK_LINE(524)
								_this->y;
							}
							else{
								HX_STACK_LINE(524)
								bool tmp57 = (_this->listen_y != null());		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(524)
								bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(524)
								if ((tmp57)){
									HX_STACK_LINE(524)
									bool tmp59 = _this->ignore_listeners;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(524)
									bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(524)
									tmp58 = !(tmp60);
								}
								else{
									HX_STACK_LINE(524)
									tmp58 = false;
								}
								HX_STACK_LINE(524)
								if ((tmp58)){
									HX_STACK_LINE(524)
									Float tmp59 = _y1;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(524)
									_this->listen_y(tmp59);
								}
								HX_STACK_LINE(524)
								_this->y;
							}
						}
						HX_STACK_LINE(524)
						{
							HX_STACK_LINE(524)
							_this->z = _z1;
							HX_STACK_LINE(524)
							bool tmp56 = _this->_construct;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(524)
							if ((tmp56)){
								HX_STACK_LINE(524)
								_this->z;
							}
							else{
								HX_STACK_LINE(524)
								bool tmp57 = (_this->listen_z != null());		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(524)
								bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(524)
								if ((tmp57)){
									HX_STACK_LINE(524)
									bool tmp59 = _this->ignore_listeners;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(524)
									bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(524)
									tmp58 = !(tmp60);
								}
								else{
									HX_STACK_LINE(524)
									tmp58 = false;
								}
								HX_STACK_LINE(524)
								if ((tmp58)){
									HX_STACK_LINE(524)
									Float tmp59 = _z1;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(524)
									_this->listen_z(tmp59);
								}
								HX_STACK_LINE(524)
								_this->z;
							}
						}
						HX_STACK_LINE(524)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(524)
						bool tmp56 = (_this->listen_x != null());		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(524)
						bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(524)
						if ((tmp56)){
							HX_STACK_LINE(524)
							bool tmp58 = _this->ignore_listeners;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(524)
							bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(524)
							tmp57 = !(tmp59);
						}
						else{
							HX_STACK_LINE(524)
							tmp57 = false;
						}
						HX_STACK_LINE(524)
						if ((tmp57)){
							HX_STACK_LINE(524)
							Float tmp58 = _this->x;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(524)
							_this->listen_x(tmp58);
						}
						HX_STACK_LINE(524)
						bool tmp58 = (_this->listen_y != null());		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(524)
						bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(524)
						if ((tmp58)){
							HX_STACK_LINE(524)
							bool tmp60 = _this->ignore_listeners;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(524)
							bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(524)
							tmp59 = !(tmp61);
						}
						else{
							HX_STACK_LINE(524)
							tmp59 = false;
						}
						HX_STACK_LINE(524)
						if ((tmp59)){
							HX_STACK_LINE(524)
							Float tmp60 = _this->y;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(524)
							_this->listen_y(tmp60);
						}
						HX_STACK_LINE(524)
						bool tmp60 = (_this->listen_z != null());		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(524)
						bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(524)
						if ((tmp60)){
							HX_STACK_LINE(524)
							bool tmp62 = _this->ignore_listeners;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(524)
							bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(524)
							tmp61 = !(tmp63);
						}
						else{
							HX_STACK_LINE(524)
							tmp61 = false;
						}
						HX_STACK_LINE(524)
						if ((tmp61)){
							HX_STACK_LINE(524)
							Float tmp62 = _this->z;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(524)
							_this->listen_z(tmp62);
						}
						HX_STACK_LINE(524)
						_this;
					}
					HX_STACK_LINE(524)
					_this;
				}
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (vert_index * (int)4)),this->_final_vert_position->x);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),this->_final_vert_position->y);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),this->_final_vert_position->z);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),this->_final_vert_position->w);
				HX_STACK_LINE(524)
				hx::AddEq(vert_index,(int)4);
				HX_STACK_LINE(524)
				::phoenix::geometry::TextureCoord tmp15 = v->uv->uv0;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(524)
				::phoenix::geometry::TextureCoord _vuv = tmp15;		HX_STACK_VAR(_vuv,"_vuv");
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
				HX_STACK_LINE(524)
				hx::AddEq(tcoord_index,(int)4);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
				HX_STACK_LINE(524)
				hx::AddEq(color_index,(int)4);
				HX_STACK_LINE(524)
				hx::AddEq(normal_index,(int)4);
			}
		}
	}
	HX_STACK_LINE(527)
	this->set_dirty(false);
	HX_STACK_LINE(529)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,update_buffers,return )

Void Geometry_obj::draw( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","draw",0x8cfe9963,"phoenix.geometry.Geometry.draw","phoenix/geometry/Geometry.hx",538,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(538)
		::snow::api::buffers::ArrayBufferView tmp = this->buffer_pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(538)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(538)
		Float tmp2 = (Float(tmp1) / Float((int)4));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(538)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(538)
		int count = tmp3;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(538)
		::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		int tmp5 = tmp4->primitive_type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(538)
		int tmp6 = count;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(538)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_draw_arrays(tmp5,(int)0,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,draw,(void))

Void Geometry_obj::translate( ::phoenix::Vector _offset){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","translate",0xde6d918f,"phoenix.geometry.Geometry.translate","phoenix/geometry/Geometry.hx",545,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_offset,"_offset")
		HX_STACK_LINE(545)
		::phoenix::Transform tmp = this->transform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(545)
		::phoenix::Vector tmp1 = tmp->local->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(545)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(545)
		::phoenix::Transform tmp2 = this->transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(545)
		::phoenix::Vector tmp3 = tmp2->local->pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(545)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(545)
		Float tmp5 = _offset->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(545)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(545)
		Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(545)
		::phoenix::Transform tmp7 = this->transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(545)
		::phoenix::Vector tmp8 = tmp7->local->pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(545)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(545)
		Float tmp10 = _offset->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(545)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(545)
		Float _y = tmp11;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(545)
		::phoenix::Transform tmp12 = this->transform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(545)
		::phoenix::Vector tmp13 = tmp12->local->pos;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(545)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(545)
		Float tmp15 = _offset->z;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(545)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(545)
		Float _z = tmp16;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(545)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(545)
		_this->ignore_listeners = true;
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			_this->x = _x;
			HX_STACK_LINE(545)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(545)
			if ((tmp17)){
				HX_STACK_LINE(545)
				_this->x;
			}
			else{
				HX_STACK_LINE(545)
				bool tmp18 = (_this->listen_x != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(545)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(545)
				if ((tmp18)){
					HX_STACK_LINE(545)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(545)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(545)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(545)
					tmp19 = false;
				}
				HX_STACK_LINE(545)
				if ((tmp19)){
					HX_STACK_LINE(545)
					Float tmp20 = _x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(545)
					_this->listen_x(tmp20);
				}
				HX_STACK_LINE(545)
				_this->x;
			}
		}
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			_this->y = _y;
			HX_STACK_LINE(545)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(545)
			if ((tmp17)){
				HX_STACK_LINE(545)
				_this->y;
			}
			else{
				HX_STACK_LINE(545)
				bool tmp18 = (_this->listen_y != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(545)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(545)
				if ((tmp18)){
					HX_STACK_LINE(545)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(545)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(545)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(545)
					tmp19 = false;
				}
				HX_STACK_LINE(545)
				if ((tmp19)){
					HX_STACK_LINE(545)
					Float tmp20 = _y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(545)
					_this->listen_y(tmp20);
				}
				HX_STACK_LINE(545)
				_this->y;
			}
		}
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			_this->z = _z;
			HX_STACK_LINE(545)
			bool tmp17 = _this->_construct;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(545)
			if ((tmp17)){
				HX_STACK_LINE(545)
				_this->z;
			}
			else{
				HX_STACK_LINE(545)
				bool tmp18 = (_this->listen_z != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(545)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(545)
				if ((tmp18)){
					HX_STACK_LINE(545)
					bool tmp20 = _this->ignore_listeners;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(545)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(545)
					tmp19 = !(tmp21);
				}
				else{
					HX_STACK_LINE(545)
					tmp19 = false;
				}
				HX_STACK_LINE(545)
				if ((tmp19)){
					HX_STACK_LINE(545)
					Float tmp20 = _z;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(545)
					_this->listen_z(tmp20);
				}
				HX_STACK_LINE(545)
				_this->z;
			}
		}
		HX_STACK_LINE(545)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(545)
		bool tmp17 = (_this->listen_x != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(545)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(545)
		if ((tmp17)){
			HX_STACK_LINE(545)
			bool tmp19 = _this->ignore_listeners;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(545)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(545)
			tmp18 = !(tmp20);
		}
		else{
			HX_STACK_LINE(545)
			tmp18 = false;
		}
		HX_STACK_LINE(545)
		if ((tmp18)){
			HX_STACK_LINE(545)
			Float tmp19 = _this->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(545)
			_this->listen_x(tmp19);
		}
		HX_STACK_LINE(545)
		bool tmp19 = (_this->listen_y != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(545)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(545)
		if ((tmp19)){
			HX_STACK_LINE(545)
			bool tmp21 = _this->ignore_listeners;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(545)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(545)
			tmp20 = !(tmp22);
		}
		else{
			HX_STACK_LINE(545)
			tmp20 = false;
		}
		HX_STACK_LINE(545)
		if ((tmp20)){
			HX_STACK_LINE(545)
			Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(545)
			_this->listen_y(tmp21);
		}
		HX_STACK_LINE(545)
		bool tmp21 = (_this->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(545)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(545)
		if ((tmp21)){
			HX_STACK_LINE(545)
			bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(545)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(545)
			tmp22 = !(tmp24);
		}
		else{
			HX_STACK_LINE(545)
			tmp22 = false;
		}
		HX_STACK_LINE(545)
		if ((tmp22)){
			HX_STACK_LINE(545)
			Float tmp23 = _this->z;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(545)
			_this->listen_z(tmp23);
		}
		HX_STACK_LINE(545)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,translate,(void))

bool Geometry_obj::set_locked( bool _locked){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_locked",0x08e151e6,"phoenix.geometry.Geometry.set_locked","phoenix/geometry/Geometry.hx",549,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_locked,"_locked")
	HX_STACK_LINE(551)
	bool tmp = _locked;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(551)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(551)
	if ((tmp)){
		HX_STACK_LINE(551)
		tmp1 = (int)35044;
	}
	else{
		HX_STACK_LINE(551)
		tmp1 = (int)35048;
	}
	HX_STACK_LINE(551)
	this->buffer_type = tmp1;
	HX_STACK_LINE(553)
	bool tmp2 = _locked;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(553)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(553)
	if ((tmp2)){
		HX_STACK_LINE(553)
		::snow::modules::opengl::native::GLBO tmp4 = this->vb_pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(553)
		::snow::modules::opengl::native::GLBO tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(553)
		tmp3 = (tmp5 == null());
	}
	else{
		HX_STACK_LINE(553)
		tmp3 = false;
	}
	HX_STACK_LINE(553)
	if ((tmp3)){
		HX_STACK_LINE(553)
		::snow::modules::opengl::native::GLBO tmp4 = this->vb_pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(553)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(553)
		if ((tmp5)){
			HX_STACK_LINE(553)
			Dynamic();
		}
		else{
			HX_STACK_LINE(553)
			::snow::modules::opengl::native::GLBO tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				int tmp7 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(553)
				int _id = tmp7;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(553)
				::snow::modules::opengl::native::GLBO tmp8 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(553)
				tmp6 = tmp8;
			}
			HX_STACK_LINE(553)
			this->vb_pos = tmp6;
			HX_STACK_LINE(553)
			::snow::modules::opengl::native::GLBO tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				int tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(553)
				int _id = tmp8;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(553)
				::snow::modules::opengl::native::GLBO tmp9 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(553)
				tmp7 = tmp9;
			}
			HX_STACK_LINE(553)
			this->vb_tcoords = tmp7;
			HX_STACK_LINE(553)
			::snow::modules::opengl::native::GLBO tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				int tmp9 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(553)
				int _id = tmp9;		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(553)
				::snow::modules::opengl::native::GLBO tmp10 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(553)
				tmp8 = tmp10;
			}
			HX_STACK_LINE(553)
			this->vb_colors = tmp8;
			HX_STACK_LINE(553)
			this->set_dirty(true);
		}
	}
	HX_STACK_LINE(554)
	bool tmp4 = _locked;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(554)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(554)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(554)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(554)
	if ((tmp6)){
		HX_STACK_LINE(554)
		::snow::modules::opengl::native::GLBO tmp8 = this->vb_pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(554)
		::snow::modules::opengl::native::GLBO tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(554)
		tmp7 = (tmp9 != null());
	}
	else{
		HX_STACK_LINE(554)
		tmp7 = false;
	}
	HX_STACK_LINE(554)
	if ((tmp7)){
		HX_STACK_LINE(554)
		this->destroy_vbos();
	}
	HX_STACK_LINE(556)
	bool tmp8 = this->locked = _locked;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(556)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_locked,return )

bool Geometry_obj::get_locked( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_locked",0x0563b372,"phoenix.geometry.Geometry.get_locked","phoenix/geometry/Geometry.hx",560,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(562)
	bool tmp = this->locked;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(562)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_locked,return )

bool Geometry_obj::set_dirty( bool _dirty){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_dirty",0x95b852b6,"phoenix.geometry.Geometry.set_dirty","phoenix/geometry/Geometry.hx",566,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_dirty,"_dirty")
	HX_STACK_LINE(568)
	bool tmp = this->dirty = _dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_dirty,return )

bool Geometry_obj::get_dirty( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_dirty",0xb26766aa,"phoenix.geometry.Geometry.get_dirty","phoenix/geometry/Geometry.hx",572,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(574)
	bool tmp = this->dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_dirty,return )

Void Geometry_obj::refresh( ){
{
		HX_STACK_FRAME("phoenix.geometry.Geometry","refresh",0x7a5fd1dc,"phoenix.geometry.Geometry.refresh","phoenix/geometry/Geometry.hx",580,0xdab136cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(583)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(583)
			while((true)){
				HX_STACK_LINE(583)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(583)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(583)
				if ((tmp1)){
					HX_STACK_LINE(583)
					break;
				}
				HX_STACK_LINE(583)
				::phoenix::Batcher tmp2 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(583)
				::phoenix::Batcher b = tmp2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(583)
				++(_g);
				HX_STACK_LINE(584)
				b->remove(hx::ObjectPtr<OBJ_>(this),false);
			}
		}
		HX_STACK_LINE(588)
		bool tmp = this->dirty_primitive_type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		if ((tmp)){
			HX_STACK_LINE(589)
			this->dirty_primitive_type = false;
			HX_STACK_LINE(590)
			{
				HX_STACK_LINE(590)
				::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(590)
				::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(590)
				_this->dirty = true;
				HX_STACK_LINE(590)
				int tmp2 = this->shadow_primitive_type;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(590)
				_this->primitive_type = tmp2;
			}
		}
		HX_STACK_LINE(593)
		bool tmp1 = this->dirty_texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(593)
		if ((tmp1)){
			HX_STACK_LINE(594)
			this->dirty_texture = false;
			HX_STACK_LINE(595)
			{
				HX_STACK_LINE(595)
				::phoenix::geometry::GeometryState tmp2 = this->state;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(595)
				::phoenix::geometry::GeometryState _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(595)
				_this->dirty = true;
				HX_STACK_LINE(595)
				::phoenix::Texture tmp3 = this->shadow_texture;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(595)
				_this->texture = tmp3;
			}
		}
		HX_STACK_LINE(598)
		bool tmp2 = this->dirty_shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(598)
		if ((tmp2)){
			HX_STACK_LINE(599)
			this->dirty_shader = false;
			HX_STACK_LINE(600)
			{
				HX_STACK_LINE(600)
				::phoenix::geometry::GeometryState tmp3 = this->state;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(600)
				::phoenix::geometry::GeometryState _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(600)
				_this->dirty = true;
				HX_STACK_LINE(600)
				::phoenix::Shader tmp4 = this->shadow_shader;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(600)
				_this->shader = tmp4;
			}
		}
		HX_STACK_LINE(603)
		bool tmp3 = this->dirty_depth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		if ((tmp3)){
			HX_STACK_LINE(604)
			this->dirty_depth = false;
			HX_STACK_LINE(605)
			Float tmp4 = this->shadow_depth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(605)
			::phoenix::geometry::GeometryState tmp5 = this->state;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			tmp5->depth = tmp4;
		}
		HX_STACK_LINE(608)
		bool tmp4 = this->dirty_clip;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(608)
		if ((tmp4)){
			HX_STACK_LINE(609)
			this->dirty_clip = false;
			HX_STACK_LINE(610)
			{
				HX_STACK_LINE(610)
				::phoenix::geometry::GeometryState tmp5 = this->state;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(610)
				::phoenix::geometry::GeometryState _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(610)
				_this->dirty = true;
				HX_STACK_LINE(610)
				bool tmp6 = this->shadow_clip;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(610)
				_this->clip = tmp6;
			}
		}
		HX_STACK_LINE(614)
		this->refresh_key();
		HX_STACK_LINE(616)
		{
			HX_STACK_LINE(616)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(616)
			Array< ::Dynamic > _g1 = this->batchers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(616)
			while((true)){
				HX_STACK_LINE(616)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(616)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(616)
				if ((tmp6)){
					HX_STACK_LINE(616)
					break;
				}
				HX_STACK_LINE(616)
				::phoenix::Batcher tmp7 = _g1->__get(_g).StaticCast< ::phoenix::Batcher >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(616)
				::phoenix::Batcher b = tmp7;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(616)
				++(_g);
				HX_STACK_LINE(617)
				b->add(hx::ObjectPtr<OBJ_>(this),false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,refresh,(void))

int Geometry_obj::get_primitive_type( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_primitive_type",0xf77b1efa,"phoenix.geometry.Geometry.get_primitive_type","phoenix/geometry/Geometry.hx",624,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(626)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(626)
	int tmp1 = tmp->primitive_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(626)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_primitive_type,return )

int Geometry_obj::set_primitive_type( int val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_primitive_type",0xd42a516e,"phoenix.geometry.Geometry.set_primitive_type","phoenix/geometry/Geometry.hx",630,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(632)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(632)
	int tmp1 = tmp->primitive_type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(632)
	int tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(632)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(632)
	if ((tmp3)){
		HX_STACK_LINE(633)
		this->shadow_primitive_type = val;
		HX_STACK_LINE(634)
		this->dirty_primitive_type = true;
		HX_STACK_LINE(635)
		this->refresh();
	}
	HX_STACK_LINE(638)
	int tmp4 = this->primitive_type = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(638)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_primitive_type,return )

::phoenix::Texture Geometry_obj::get_texture( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_texture",0x1c5cb573,"phoenix.geometry.Geometry.get_texture","phoenix/geometry/Geometry.hx",644,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(646)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(646)
	::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(646)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_texture,return )

::phoenix::Texture Geometry_obj::set_texture( ::phoenix::Texture val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_texture",0x26c9bc7f,"phoenix.geometry.Geometry.set_texture","phoenix/geometry/Geometry.hx",650,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(652)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(652)
	::phoenix::Texture tmp1 = tmp->texture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(652)
	::phoenix::Texture tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(652)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(652)
	if ((tmp3)){
		HX_STACK_LINE(653)
		this->shadow_texture = val;
		HX_STACK_LINE(654)
		this->dirty_texture = true;
		HX_STACK_LINE(655)
		this->refresh();
	}
	HX_STACK_LINE(658)
	::phoenix::Texture tmp4 = this->texture = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(658)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_texture,return )

bool Geometry_obj::set_visible( bool val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_visible",0x2b0d6c16,"phoenix.geometry.Geometry.set_visible","phoenix/geometry/Geometry.hx",664,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(666)
	bool tmp = this->visible = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(666)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_visible,return )

::phoenix::Color Geometry_obj::set_color( ::phoenix::Color val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_color",0x06447407,"phoenix.geometry.Geometry.set_color","phoenix/geometry/Geometry.hx",672,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(674)
	bool tmp = (this->vertices != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(674)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(674)
	if ((tmp)){
		HX_STACK_LINE(674)
		int tmp2 = this->vertices->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(674)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(674)
		tmp1 = (tmp3 > (int)0);
	}
	else{
		HX_STACK_LINE(674)
		tmp1 = false;
	}
	HX_STACK_LINE(674)
	if ((tmp1)){
		HX_STACK_LINE(675)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(675)
		Array< ::Dynamic > _g1 = this->vertices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(675)
		while((true)){
			HX_STACK_LINE(675)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(675)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(675)
			if ((tmp3)){
				HX_STACK_LINE(675)
				break;
			}
			HX_STACK_LINE(675)
			::phoenix::geometry::Vertex tmp4 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(675)
			::phoenix::geometry::Vertex v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(675)
			++(_g);
			HX_STACK_LINE(676)
			v->color = val;
		}
	}
	HX_STACK_LINE(680)
	::phoenix::Color tmp2 = this->color = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(680)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_color,return )

::phoenix::Shader Geometry_obj::get_shader( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_shader",0xc8bd6d8d,"phoenix.geometry.Geometry.get_shader","phoenix/geometry/Geometry.hx",686,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(688)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(688)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_shader,return )

::phoenix::Shader Geometry_obj::set_shader( ::phoenix::Shader val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_shader",0xcc3b0c01,"phoenix.geometry.Geometry.set_shader","phoenix/geometry/Geometry.hx",692,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(694)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(694)
	::phoenix::Shader tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(694)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(694)
	if ((tmp3)){
		HX_STACK_LINE(695)
		this->shadow_shader = val;
		HX_STACK_LINE(696)
		this->dirty_shader = true;
		HX_STACK_LINE(697)
		this->refresh();
	}
	HX_STACK_LINE(700)
	::phoenix::Shader tmp4 = this->shader = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(700)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_shader,return )

Float Geometry_obj::get_depth( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_depth",0xafc1079b,"phoenix.geometry.Geometry.get_depth","phoenix/geometry/Geometry.hx",706,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(708)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(708)
	Float tmp1 = tmp->depth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(708)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_depth,return )

Float Geometry_obj::set_depth( Float val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_depth",0x9311f3a7,"phoenix.geometry.Geometry.set_depth","phoenix/geometry/Geometry.hx",713,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(715)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(715)
	Float tmp1 = tmp->depth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(715)
	Float tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(715)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(715)
	if ((tmp3)){
		HX_STACK_LINE(716)
		this->shadow_depth = val;
		HX_STACK_LINE(717)
		this->dirty_depth = true;
		HX_STACK_LINE(718)
		this->refresh();
	}
	HX_STACK_LINE(721)
	Float tmp4 = this->depth = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(721)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_depth,return )

bool Geometry_obj::get_clip( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_clip",0xcb573338,"phoenix.geometry.Geometry.get_clip","phoenix/geometry/Geometry.hx",727,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(729)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(729)
	bool tmp1 = tmp->clip;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(729)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_clip,return )

bool Geometry_obj::set_clip( bool val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_clip",0x79b48cac,"phoenix.geometry.Geometry.set_clip","phoenix/geometry/Geometry.hx",733,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(735)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(735)
	bool tmp1 = tmp->clip;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(735)
	bool tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(735)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(735)
	if ((tmp3)){
		HX_STACK_LINE(736)
		this->shadow_clip = val;
		HX_STACK_LINE(737)
		this->dirty_clip = true;
		HX_STACK_LINE(738)
		this->refresh();
	}
	HX_STACK_LINE(741)
	bool tmp4 = this->clip = val;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(741)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_clip,return )

::phoenix::Rectangle Geometry_obj::get_clip_rect( ){
	HX_STACK_FRAME("phoenix.geometry.Geometry","get_clip_rect",0x4f648acb,"phoenix.geometry.Geometry.get_clip_rect","phoenix/geometry/Geometry.hx",747,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(749)
	::phoenix::Rectangle tmp = this->clip_rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(749)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_clip_rect,return )

::phoenix::Rectangle Geometry_obj::set_clip_rect( ::phoenix::Rectangle val){
	HX_STACK_FRAME("phoenix.geometry.Geometry","set_clip_rect",0x946a6cd7,"phoenix.geometry.Geometry.set_clip_rect","phoenix/geometry/Geometry.hx",753,0xdab136cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(755)
	bool tmp = (val == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	if ((tmp)){
		HX_STACK_LINE(756)
		this->set_clip(false);
	}
	else{
		HX_STACK_LINE(758)
		this->set_clip(true);
		HX_STACK_LINE(759)
		{
			HX_STACK_LINE(759)
			::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(759)
			::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(759)
			_this->dirty = true;
			HX_STACK_LINE(759)
			_this->clip_x = val->x;
		}
		HX_STACK_LINE(760)
		{
			HX_STACK_LINE(760)
			::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(760)
			::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(760)
			_this->dirty = true;
			HX_STACK_LINE(760)
			_this->clip_y = val->y;
		}
		HX_STACK_LINE(761)
		{
			HX_STACK_LINE(761)
			::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(761)
			::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(761)
			_this->dirty = true;
			HX_STACK_LINE(761)
			_this->clip_w = val->w;
		}
		HX_STACK_LINE(762)
		{
			HX_STACK_LINE(762)
			::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(762)
			::phoenix::geometry::GeometryState _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(762)
			_this->dirty = true;
			HX_STACK_LINE(762)
			_this->clip_h = val->h;
		}
	}
	HX_STACK_LINE(765)
	::phoenix::Rectangle tmp1 = this->clip_rect = val;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(765)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,set_clip_rect,return )

int Geometry_obj::_sequence_key;


Geometry_obj::Geometry_obj()
{
}

void Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geometry);
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(object_space,"object_space");
	HX_MARK_MEMBER_NAME(buffer_based,"buffer_based");
	HX_MARK_MEMBER_NAME(buffer_type,"buffer_type");
	HX_MARK_MEMBER_NAME(buffer_pos,"buffer_pos");
	HX_MARK_MEMBER_NAME(buffer_tcoords,"buffer_tcoords");
	HX_MARK_MEMBER_NAME(buffer_colors,"buffer_colors");
	HX_MARK_MEMBER_NAME(buffer_normals,"buffer_normals");
	HX_MARK_MEMBER_NAME(vb_pos,"vb_pos");
	HX_MARK_MEMBER_NAME(vb_tcoords,"vb_tcoords");
	HX_MARK_MEMBER_NAME(vb_colors,"vb_colors");
	HX_MARK_MEMBER_NAME(vb_normals,"vb_normals");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	HX_MARK_MEMBER_NAME(added,"added");
	HX_MARK_MEMBER_NAME(batchers,"batchers");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(dropped,"dropped");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(clip_rect,"clip_rect");
	HX_MARK_MEMBER_NAME(shadow_primitive_type,"shadow_primitive_type");
	HX_MARK_MEMBER_NAME(shadow_texture,"shadow_texture");
	HX_MARK_MEMBER_NAME(shadow_shader,"shadow_shader");
	HX_MARK_MEMBER_NAME(shadow_depth,"shadow_depth");
	HX_MARK_MEMBER_NAME(shadow_clip,"shadow_clip");
	HX_MARK_MEMBER_NAME(dirty_primitive_type,"dirty_primitive_type");
	HX_MARK_MEMBER_NAME(dirty_texture,"dirty_texture");
	HX_MARK_MEMBER_NAME(dirty_shader,"dirty_shader");
	HX_MARK_MEMBER_NAME(dirty_depth,"dirty_depth");
	HX_MARK_MEMBER_NAME(dirty_clip,"dirty_clip");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(immediate,"immediate");
	HX_MARK_MEMBER_NAME(locked,"locked");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(_final_vert_position,"_final_vert_position");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(_prev_count,"_prev_count");
	HX_MARK_END_CLASS();
}

void Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(object_space,"object_space");
	HX_VISIT_MEMBER_NAME(buffer_based,"buffer_based");
	HX_VISIT_MEMBER_NAME(buffer_type,"buffer_type");
	HX_VISIT_MEMBER_NAME(buffer_pos,"buffer_pos");
	HX_VISIT_MEMBER_NAME(buffer_tcoords,"buffer_tcoords");
	HX_VISIT_MEMBER_NAME(buffer_colors,"buffer_colors");
	HX_VISIT_MEMBER_NAME(buffer_normals,"buffer_normals");
	HX_VISIT_MEMBER_NAME(vb_pos,"vb_pos");
	HX_VISIT_MEMBER_NAME(vb_tcoords,"vb_tcoords");
	HX_VISIT_MEMBER_NAME(vb_colors,"vb_colors");
	HX_VISIT_MEMBER_NAME(vb_normals,"vb_normals");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	HX_VISIT_MEMBER_NAME(added,"added");
	HX_VISIT_MEMBER_NAME(batchers,"batchers");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(dropped,"dropped");
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(clip_rect,"clip_rect");
	HX_VISIT_MEMBER_NAME(shadow_primitive_type,"shadow_primitive_type");
	HX_VISIT_MEMBER_NAME(shadow_texture,"shadow_texture");
	HX_VISIT_MEMBER_NAME(shadow_shader,"shadow_shader");
	HX_VISIT_MEMBER_NAME(shadow_depth,"shadow_depth");
	HX_VISIT_MEMBER_NAME(shadow_clip,"shadow_clip");
	HX_VISIT_MEMBER_NAME(dirty_primitive_type,"dirty_primitive_type");
	HX_VISIT_MEMBER_NAME(dirty_texture,"dirty_texture");
	HX_VISIT_MEMBER_NAME(dirty_shader,"dirty_shader");
	HX_VISIT_MEMBER_NAME(dirty_depth,"dirty_depth");
	HX_VISIT_MEMBER_NAME(dirty_clip,"dirty_clip");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(immediate,"immediate");
	HX_VISIT_MEMBER_NAME(locked,"locked");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(_final_vert_position,"_final_vert_position");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(_prev_count,"_prev_count");
}

Dynamic Geometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid; }
		if (HX_FIELD_EQ(inName,"clip") ) { return inCallProp == hx::paccAlways ? get_clip() : clip; }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added; }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"depth") ) { return inCallProp == hx::paccAlways ? get_depth() : depth; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return inCallProp == hx::paccAlways ? get_dirty() : dirty; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"batch") ) { return batch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vb_pos") ) { return vb_pos; }
		if (HX_FIELD_EQ(inName,"shader") ) { return inCallProp == hx::paccAlways ? get_shader() : shader; }
		if (HX_FIELD_EQ(inName,"locked") ) { return inCallProp == hx::paccAlways ? get_locked() : locked; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dropped") ) { return dropped; }
		if (HX_FIELD_EQ(inName,"texture") ) { return inCallProp == hx::paccAlways ? get_texture() : texture; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		if (HX_FIELD_EQ(inName,"bind_pos") ) { return bind_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clip") ) { return get_clip_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip") ) { return set_clip_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform; }
		if (HX_FIELD_EQ(inName,"vb_colors") ) { return vb_colors; }
		if (HX_FIELD_EQ(inName,"clip_rect") ) { return inCallProp == hx::paccAlways ? get_clip_rect() : clip_rect; }
		if (HX_FIELD_EQ(inName,"immediate") ) { return immediate; }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dirty") ) { return set_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dirty") ) { return get_dirty_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buffer_pos") ) { return buffer_pos; }
		if (HX_FIELD_EQ(inName,"vb_tcoords") ) { return vb_tcoords; }
		if (HX_FIELD_EQ(inName,"vb_normals") ) { return vb_normals; }
		if (HX_FIELD_EQ(inName,"dirty_clip") ) { return dirty_clip; }
		if (HX_FIELD_EQ(inName,"key_string") ) { return key_string_dyn(); }
		if (HX_FIELD_EQ(inName,"set_locked") ) { return set_locked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_locked") ) { return get_locked_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shader") ) { return get_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buffer_type") ) { return buffer_type; }
		if (HX_FIELD_EQ(inName,"shadow_clip") ) { return shadow_clip; }
		if (HX_FIELD_EQ(inName,"dirty_depth") ) { return dirty_depth; }
		if (HX_FIELD_EQ(inName,"refresh_key") ) { return refresh_key_dyn(); }
		if (HX_FIELD_EQ(inName,"create_vbos") ) { return create_vbos_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_colors") ) { return bind_colors_dyn(); }
		if (HX_FIELD_EQ(inName,"_prev_count") ) { return _prev_count; }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return set_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_space") ) { return object_space; }
		if (HX_FIELD_EQ(inName,"buffer_based") ) { return buffer_based; }
		if (HX_FIELD_EQ(inName,"shadow_depth") ) { return shadow_depth; }
		if (HX_FIELD_EQ(inName,"dirty_shader") ) { return dirty_shader; }
		if (HX_FIELD_EQ(inName,"destroy_vbos") ) { return destroy_vbos_dyn(); }
		if (HX_FIELD_EQ(inName,"bind_tcoords") ) { return bind_tcoords_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buffer_colors") ) { return buffer_colors; }
		if (HX_FIELD_EQ(inName,"shadow_shader") ) { return shadow_shader; }
		if (HX_FIELD_EQ(inName,"dirty_texture") ) { return dirty_texture; }
		if (HX_FIELD_EQ(inName,"get_clip_rect") ) { return get_clip_rect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clip_rect") ) { return set_clip_rect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buffer_tcoords") ) { return buffer_tcoords; }
		if (HX_FIELD_EQ(inName,"buffer_normals") ) { return buffer_normals; }
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return inCallProp == hx::paccAlways ? get_primitive_type() : primitive_type; }
		if (HX_FIELD_EQ(inName,"shadow_texture") ) { return shadow_texture; }
		if (HX_FIELD_EQ(inName,"update_buffers") ) { return update_buffers_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bind_and_upload") ) { return bind_and_upload_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"batch_into_arrays") ) { return batch_into_arrays_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"batch_object_space") ) { return batch_object_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_primitive_type") ) { return get_primitive_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return set_primitive_type_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dirty_primitive_type") ) { return dirty_primitive_type; }
		if (HX_FIELD_EQ(inName,"_final_vert_position") ) { return _final_vert_position; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shadow_primitive_type") ) { return shadow_primitive_type; }
	}
	return super::__Field(inName,inCallProp);
}

bool Geometry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { outValue = _sequence_key; return true;  }
	}
	return false;
}

Dynamic Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::phoenix::geometry::GeometryKey >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == hx::paccAlways) return set_clip(inValue);clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { added=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::geometry::GeometryState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return set_depth(inValue);depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { if (inCallProp == hx::paccAlways) return set_dirty(inValue);dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vb_pos") ) { vb_pos=inValue.Cast< ::snow::modules::opengl::native::GLBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue);shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"locked") ) { if (inCallProp == hx::paccAlways) return set_locked(inValue);locked=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dropped") ) { dropped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return set_texture(inValue);texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::phoenix::Uniforms >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< ::phoenix::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vb_colors") ) { vb_colors=inValue.Cast< ::snow::modules::opengl::native::GLBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_rect") ) { if (inCallProp == hx::paccAlways) return set_clip_rect(inValue);clip_rect=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immediate") ) { immediate=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buffer_pos") ) { buffer_pos=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vb_tcoords") ) { vb_tcoords=inValue.Cast< ::snow::modules::opengl::native::GLBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vb_normals") ) { vb_normals=inValue.Cast< ::snow::modules::opengl::native::GLBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_clip") ) { dirty_clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buffer_type") ) { buffer_type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_clip") ) { shadow_clip=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_depth") ) { dirty_depth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev_count") ) { _prev_count=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"object_space") ) { object_space=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer_based") ) { buffer_based=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_depth") ) { shadow_depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_shader") ) { dirty_shader=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buffer_colors") ) { buffer_colors=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_shader") ) { shadow_shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_texture") ) { dirty_texture=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buffer_tcoords") ) { buffer_tcoords=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer_normals") ) { buffer_normals=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"primitive_type") ) { if (inCallProp == hx::paccAlways) return set_primitive_type(inValue);primitive_type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow_texture") ) { shadow_texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dirty_primitive_type") ) { dirty_primitive_type=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_final_vert_position") ) { _final_vert_position=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shadow_primitive_type") ) { shadow_primitive_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Geometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { _sequence_key=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22"));
	outFields->push(HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79"));
	outFields->push(HX_HCSTRING("buffer_type","\x99","\x31","\x38","\x0a"));
	outFields->push(HX_HCSTRING("buffer_pos","\x95","\xdf","\x57","\xa5"));
	outFields->push(HX_HCSTRING("buffer_tcoords","\x13","\x8a","\x10","\x99"));
	outFields->push(HX_HCSTRING("buffer_colors","\x4f","\xba","\x2a","\x9d"));
	outFields->push(HX_HCSTRING("buffer_normals","\xed","\x86","\xac","\x24"));
	outFields->push(HX_HCSTRING("vb_pos","\xc1","\x0f","\x82","\xda"));
	outFields->push(HX_HCSTRING("vb_tcoords","\x3f","\x40","\xb4","\x3c"));
	outFields->push(HX_HCSTRING("vb_colors","\xa3","\xed","\x93","\x55"));
	outFields->push(HX_HCSTRING("vb_normals","\x19","\x3d","\x50","\xc8"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	outFields->push(HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"));
	outFields->push(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("dropped","\x00","\x24","\xe9","\x06"));
	outFields->push(HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"));
	outFields->push(HX_HCSTRING("shadow_primitive_type","\x51","\x25","\xc9","\x32"));
	outFields->push(HX_HCSTRING("shadow_texture","\x3c","\xca","\x94","\x51"));
	outFields->push(HX_HCSTRING("shadow_shader","\xe4","\xc4","\x51","\x95"));
	outFields->push(HX_HCSTRING("shadow_depth","\x24","\x28","\x49","\x1a"));
	outFields->push(HX_HCSTRING("shadow_clip","\xcf","\x36","\x72","\xd8"));
	outFields->push(HX_HCSTRING("dirty_primitive_type","\x5f","\xa5","\x3a","\x90"));
	outFields->push(HX_HCSTRING("dirty_texture","\x6e","\xd4","\x32","\x48"));
	outFields->push(HX_HCSTRING("dirty_shader","\xf2","\x86","\xfd","\x54"));
	outFields->push(HX_HCSTRING("dirty_depth","\xd6","\xe1","\x7f","\x8a"));
	outFields->push(HX_HCSTRING("dirty_clip","\x5d","\xb9","\x4d","\x48"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"));
	outFields->push(HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"));
	outFields->push(HX_HCSTRING("_final_vert_position","\x6f","\x0e","\xa4","\x12"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("_prev_count","\x62","\x50","\xb5","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Transform*/ ,(int)offsetof(Geometry_obj,transform),HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Geometry_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,object_space),HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22")},
	{hx::fsBool,(int)offsetof(Geometry_obj,buffer_based),HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79")},
	{hx::fsInt,(int)offsetof(Geometry_obj,buffer_type),HX_HCSTRING("buffer_type","\x99","\x31","\x38","\x0a")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Geometry_obj,buffer_pos),HX_HCSTRING("buffer_pos","\x95","\xdf","\x57","\xa5")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Geometry_obj,buffer_tcoords),HX_HCSTRING("buffer_tcoords","\x13","\x8a","\x10","\x99")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Geometry_obj,buffer_colors),HX_HCSTRING("buffer_colors","\x4f","\xba","\x2a","\x9d")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Geometry_obj,buffer_normals),HX_HCSTRING("buffer_normals","\xed","\x86","\xac","\x24")},
	{hx::fsObject /*::snow::modules::opengl::native::GLBO*/ ,(int)offsetof(Geometry_obj,vb_pos),HX_HCSTRING("vb_pos","\xc1","\x0f","\x82","\xda")},
	{hx::fsObject /*::snow::modules::opengl::native::GLBO*/ ,(int)offsetof(Geometry_obj,vb_tcoords),HX_HCSTRING("vb_tcoords","\x3f","\x40","\xb4","\x3c")},
	{hx::fsObject /*::snow::modules::opengl::native::GLBO*/ ,(int)offsetof(Geometry_obj,vb_colors),HX_HCSTRING("vb_colors","\xa3","\xed","\x93","\x55")},
	{hx::fsObject /*::snow::modules::opengl::native::GLBO*/ ,(int)offsetof(Geometry_obj,vb_normals),HX_HCSTRING("vb_normals","\x19","\x3d","\x50","\xc8")},
	{hx::fsObject /*::phoenix::Uniforms*/ ,(int)offsetof(Geometry_obj,uniforms),HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02")},
	{hx::fsBool,(int)offsetof(Geometry_obj,added),HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Geometry_obj,batchers),HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")},
	{hx::fsObject /*::phoenix::geometry::GeometryState*/ ,(int)offsetof(Geometry_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dropped),HX_HCSTRING("dropped","\x00","\x24","\xe9","\x06")},
	{hx::fsString,(int)offsetof(Geometry_obj,uuid),HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d")},
	{hx::fsString,(int)offsetof(Geometry_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Geometry_obj,primitive_type),HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Geometry_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Geometry_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsFloat,(int)offsetof(Geometry_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Geometry_obj,clip_rect),HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89")},
	{hx::fsInt,(int)offsetof(Geometry_obj,shadow_primitive_type),HX_HCSTRING("shadow_primitive_type","\x51","\x25","\xc9","\x32")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(Geometry_obj,shadow_texture),HX_HCSTRING("shadow_texture","\x3c","\xca","\x94","\x51")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Geometry_obj,shadow_shader),HX_HCSTRING("shadow_shader","\xe4","\xc4","\x51","\x95")},
	{hx::fsFloat,(int)offsetof(Geometry_obj,shadow_depth),HX_HCSTRING("shadow_depth","\x24","\x28","\x49","\x1a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,shadow_clip),HX_HCSTRING("shadow_clip","\xcf","\x36","\x72","\xd8")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_primitive_type),HX_HCSTRING("dirty_primitive_type","\x5f","\xa5","\x3a","\x90")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_texture),HX_HCSTRING("dirty_texture","\x6e","\xd4","\x32","\x48")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_shader),HX_HCSTRING("dirty_shader","\xf2","\x86","\xfd","\x54")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_depth),HX_HCSTRING("dirty_depth","\xd6","\xe1","\x7f","\x8a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty_clip),HX_HCSTRING("dirty_clip","\x5d","\xb9","\x4d","\x48")},
	{hx::fsBool,(int)offsetof(Geometry_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(Geometry_obj,immediate),HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf")},
	{hx::fsBool,(int)offsetof(Geometry_obj,locked),HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59")},
	{hx::fsBool,(int)offsetof(Geometry_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Geometry_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(Geometry_obj,clip),HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Geometry_obj,_final_vert_position),HX_HCSTRING("_final_vert_position","\x6f","\x0e","\xa4","\x12")},
	{hx::fsObject /*::phoenix::geometry::GeometryKey*/ ,(int)offsetof(Geometry_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsInt,(int)offsetof(Geometry_obj,_prev_count),HX_HCSTRING("_prev_count","\x62","\x50","\xb5","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Geometry_obj::_sequence_key,HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("object_space","\x06","\x6c","\xc3","\x22"),
	HX_HCSTRING("buffer_based","\x74","\xeb","\xe1","\x79"),
	HX_HCSTRING("buffer_type","\x99","\x31","\x38","\x0a"),
	HX_HCSTRING("buffer_pos","\x95","\xdf","\x57","\xa5"),
	HX_HCSTRING("buffer_tcoords","\x13","\x8a","\x10","\x99"),
	HX_HCSTRING("buffer_colors","\x4f","\xba","\x2a","\x9d"),
	HX_HCSTRING("buffer_normals","\xed","\x86","\xac","\x24"),
	HX_HCSTRING("vb_pos","\xc1","\x0f","\x82","\xda"),
	HX_HCSTRING("vb_tcoords","\x3f","\x40","\xb4","\x3c"),
	HX_HCSTRING("vb_colors","\xa3","\xed","\x93","\x55"),
	HX_HCSTRING("vb_normals","\x19","\x3d","\x50","\xc8"),
	HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"),
	HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),
	HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("dropped","\x00","\x24","\xe9","\x06"),
	HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("clip_rect","\x33","\x48","\xa2","\x89"),
	HX_HCSTRING("shadow_primitive_type","\x51","\x25","\xc9","\x32"),
	HX_HCSTRING("shadow_texture","\x3c","\xca","\x94","\x51"),
	HX_HCSTRING("shadow_shader","\xe4","\xc4","\x51","\x95"),
	HX_HCSTRING("shadow_depth","\x24","\x28","\x49","\x1a"),
	HX_HCSTRING("shadow_clip","\xcf","\x36","\x72","\xd8"),
	HX_HCSTRING("dirty_primitive_type","\x5f","\xa5","\x3a","\x90"),
	HX_HCSTRING("dirty_texture","\x6e","\xd4","\x32","\x48"),
	HX_HCSTRING("dirty_shader","\xf2","\x86","\xfd","\x54"),
	HX_HCSTRING("dirty_depth","\xd6","\xe1","\x7f","\x8a"),
	HX_HCSTRING("dirty_clip","\x5d","\xb9","\x4d","\x48"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"),
	HX_HCSTRING("locked","\x0a","\x05","\xc7","\x59"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("_final_vert_position","\x6f","\x0e","\xa4","\x12"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("key_string","\xb1","\xb2","\xdd","\x20"),
	HX_HCSTRING("refresh_key","\xfb","\x31","\xdf","\x48"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("drop","\x2f","\x38","\x70","\x42"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("batch","\xba","\xe7","\xba","\xad"),
	HX_HCSTRING("batch_object_space","\xeb","\x4a","\x61","\xa3"),
	HX_HCSTRING("batch_into_arrays","\x74","\x5e","\xc2","\x25"),
	HX_HCSTRING("destroy_vbos","\xf5","\x8f","\x2d","\x60"),
	HX_HCSTRING("create_vbos","\xb3","\xce","\xa8","\x97"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("bind_pos","\xd2","\xba","\x11","\xc2"),
	HX_HCSTRING("bind_tcoords","\xd0","\x47","\xc5","\xe6"),
	HX_HCSTRING("bind_colors","\x32","\xc3","\x1d","\x64"),
	HX_HCSTRING("unbind","\x96","\xfc","\xeb","\x5e"),
	HX_HCSTRING("bind_and_upload","\x2b","\xe0","\xe8","\x2d"),
	HX_HCSTRING("_prev_count","\x62","\x50","\xb5","\xe4"),
	HX_HCSTRING("update_buffers","\xfd","\x33","\xc1","\x46"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("set_locked","\x47","\x13","\xcc","\x4d"),
	HX_HCSTRING("get_locked","\xd3","\x74","\x4e","\x4a"),
	HX_HCSTRING("set_dirty","\x75","\x98","\xca","\x00"),
	HX_HCSTRING("get_dirty","\x69","\xac","\x79","\x1d"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("get_primitive_type","\x5b","\xa9","\x07","\x24"),
	HX_HCSTRING("set_primitive_type","\xcf","\xdb","\xb6","\x00"),
	HX_HCSTRING("get_texture","\xf2","\x28","\xdb","\x24"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_shader","\xee","\x2e","\xa8","\x0d"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("get_depth","\x5a","\x4d","\xd3","\x1a"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("get_clip","\x59","\x2a","\x7d","\xc1"),
	HX_HCSTRING("set_clip","\xcd","\x83","\xda","\x6f"),
	HX_HCSTRING("get_clip_rect","\x0a","\x1c","\x06","\x4b"),
	HX_HCSTRING("set_clip_rect","\x16","\xfe","\x0b","\x90"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Geometry_obj::_sequence_key,"_sequence_key");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Geometry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Geometry_obj::_sequence_key,"_sequence_key");
};

#endif

hx::Class Geometry_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7"),
	::String(null()) };

void Geometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.Geometry","\x6f","\xef","\x7a","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Geometry_obj::__GetStatic;
	__mClass->mSetStaticField = &Geometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Geometry_obj >;
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

void Geometry_obj::__boot()
{
	_sequence_key= (int)-1;
}

} // end namespace phoenix
} // end namespace geometry
