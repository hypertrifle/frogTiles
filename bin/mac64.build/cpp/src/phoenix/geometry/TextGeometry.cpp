#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Unifill
#include <luxe/utils/unifill/Unifill.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8_Impl_
#include <luxe/utils/unifill/_Utf8/Utf8_Impl_.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
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
#ifndef INCLUDED_phoenix_Uniform
#include <phoenix/Uniform.h>
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
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
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
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLPO
#include <snow/modules/opengl/native/GLPO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
namespace phoenix{
namespace geometry{

Void TextGeometry_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.geometry.TextGeometry","new",0x85dc3eae,"phoenix.geometry.TextGeometry.new","phoenix/geometry/TextGeometry.hx",51,0x3cba14a2)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(105)
	this->dirty_align = true;
	HX_STACK_LINE(104)
	this->dirty_sizing = true;
	HX_STACK_LINE(102)
	this->point_ratio = ((Float)1);
	HX_STACK_LINE(101)
	this->text_h_h = ((Float)0);
	HX_STACK_LINE(100)
	this->text_h_w = ((Float)0);
	HX_STACK_LINE(86)
	this->text_height = ((Float)0);
	HX_STACK_LINE(85)
	this->text_width = ((Float)0);
	HX_STACK_LINE(79)
	this->glow_amount = ((Float)0);
	HX_STACK_LINE(78)
	this->glow_threshold = ((Float)0);
	HX_STACK_LINE(75)
	this->outline = ((Float)0);
	HX_STACK_LINE(73)
	this->thickness = ((Float)0.5);
	HX_STACK_LINE(72)
	this->smoothness = ((Float)0.75);
	HX_STACK_LINE(70)
	this->unique = false;
	HX_STACK_LINE(69)
	this->sdf = false;
	HX_STACK_LINE(62)
	this->bounds_wrap = false;
	HX_STACK_LINE(59)
	this->letter_spacing = ((Float)0.0);
	HX_STACK_LINE(58)
	this->line_spacing = ((Float)0.0);
	HX_STACK_LINE(57)
	this->point_size = ((Float)32.0);
	HX_STACK_LINE(55)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(113)
	this->options = _options;
	HX_STACK_LINE(114)
	::luxe::Emitter tmp = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	this->emitter = tmp;
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		if ((tmp2)){
			HX_STACK_LINE(230)
			::String tmp3 = HX_HCSTRING(" ( TextGeometry requires non-null options","\x8e","\xba","\x4d","\x1a");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			::String tmp4 = (tmp3 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			::String tmp5 = (HX_HCSTRING("options was null","\xe0","\x49","\xa9","\x08") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			::luxe::DebugError tmp6 = ::luxe::DebugError_obj::null_assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			HX_STACK_DO_THROW(tmp6);
		}
	}
	HX_STACK_LINE(121)
	Dynamic tmp1 = this->options;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	if ((tmp3)){
		HX_STACK_LINE(121)
		Dynamic tmp4 = this->options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		this->sdf = tmp4->__Field(HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(123)
	::phoenix::BitmapFont tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		Dynamic tmp5 = this->options;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		::phoenix::BitmapFont tmp6 = tmp5->__Field(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		if ((tmp7)){
			HX_STACK_LINE(123)
			::phoenix::Renderer tmp8 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			tmp9->__FieldRef(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")) = tmp8->font;
		}
		HX_STACK_LINE(123)
		Dynamic tmp8 = this->options;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		tmp4 = tmp8->__Field(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"), hx::paccDynamic );
	}
	HX_STACK_LINE(123)
	this->font = tmp4;
	HX_STACK_LINE(125)
	::phoenix::BitmapFont tmp5 = this->font;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(125)
	::phoenix::Renderer tmp6 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(125)
	::phoenix::BitmapFont tmp7 = tmp6->font;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(125)
	bool tmp8 = (tmp5 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(125)
	if ((tmp8)){
		HX_STACK_LINE(125)
		this->sdf = true;
	}
	HX_STACK_LINE(131)
	Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(131)
	::phoenix::Shader tmp10 = tmp9->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(131)
	bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(131)
	if ((tmp11)){
		HX_STACK_LINE(132)
		bool tmp12 = this->sdf;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(132)
		if ((tmp12)){
			HX_STACK_LINE(133)
			::phoenix::Renderer tmp13 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(133)
			Dynamic tmp14 = tmp13->shaders->__Field(HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(133)
			Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(133)
			tmp15->__FieldRef(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")) = tmp14->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(135)
			::phoenix::Renderer tmp13 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(135)
			Dynamic tmp14 = tmp13->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(135)
			Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			tmp15->__FieldRef(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")) = tmp14->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
		}
	}
	else{
		HX_STACK_LINE(139)
		Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(139)
		::phoenix::Shader tmp13 = tmp12->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(139)
		::phoenix::Renderer tmp14 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(139)
		Dynamic tmp15 = tmp14->shaders->__Field(HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(139)
		::phoenix::Shader tmp16 = tmp15->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(139)
		bool tmp17 = (tmp13 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(139)
		if ((tmp17)){
			HX_STACK_LINE(140)
			this->unique = true;
		}
	}
	HX_STACK_LINE(144)
	Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(144)
	super::__construct(tmp12);
	HX_STACK_LINE(145)
	this->set_primitive_type((int)4);
	HX_STACK_LINE(149)
	this->cache = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(150)
	this->line_widths = Array_obj< Float >::__new();
	HX_STACK_LINE(151)
	this->line_offsets = Array_obj< ::Dynamic >::__new().Add(Array_obj< Float >::__new()).Add(Array_obj< Float >::__new());
	HX_STACK_LINE(152)
	this->lines = Array_obj< ::String >::__new();
	HX_STACK_LINE(153)
	::phoenix::Color tmp13 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(153)
	this->set_outline_color(tmp13);
	HX_STACK_LINE(154)
	::phoenix::Color tmp14 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(154)
	this->set_glow_color(tmp14);
	HX_STACK_LINE(156)
	this->default_options();
}
;
	return null();
}

//TextGeometry_obj::~TextGeometry_obj() { }

Dynamic TextGeometry_obj::__CreateEmpty() { return  new TextGeometry_obj; }
hx::ObjectPtr< TextGeometry_obj > TextGeometry_obj::__new(Dynamic _options)
{  hx::ObjectPtr< TextGeometry_obj > _result_ = new TextGeometry_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic TextGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextGeometry_obj > _result_ = new TextGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TextGeometry_obj::tidy( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","tidy",0x9ed4da3c,"phoenix.geometry.TextGeometry.tidy","phoenix/geometry/TextGeometry.hx",164,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		Float tmp1 = (Float(tmp) / Float((int)6));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		int _vertidx = tmp2;		HX_STACK_VAR(_vertidx,"_vertidx");
		HX_STACK_LINE(167)
		int tmp3 = this->cache->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		int tmp4 = _vertidx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(167)
		int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(167)
		int _diff = tmp5;		HX_STACK_VAR(_diff,"_diff");
		HX_STACK_LINE(169)
		bool tmp6 = (_diff > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		if ((tmp6)){
			HX_STACK_LINE(173)
			int tmp7 = _vertidx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			int tmp8 = _diff;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			Array< ::Dynamic > extra = this->cache->splice(tmp7,tmp8);		HX_STACK_VAR(extra,"extra");
			HX_STACK_LINE(174)
			int c = extra->length;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(175)
			while((true)){
				HX_STACK_LINE(175)
				bool tmp9 = (c > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(175)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				if ((tmp10)){
					HX_STACK_LINE(175)
					break;
				}
				HX_STACK_LINE(176)
				(c)--;
				HX_STACK_LINE(177)
				Array< ::Dynamic > vert = extra->pop().StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(vert,"vert");
				HX_STACK_LINE(178)
				vert = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,tidy,(void))

Void TextGeometry_obj::default_options( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","default_options",0x112e39ee,"phoenix.geometry.TextGeometry.default_options","phoenix/geometry/TextGeometry.hx",189,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		::phoenix::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		::phoenix::Texture tmp1 = tmp->pages->get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		::phoenix::Texture tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		this->set_texture(tmp2);
		HX_STACK_LINE(202)
		Dynamic tmp3 = this->options;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		if ((tmp5)){
			HX_STACK_LINE(202)
			Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(202)
			this->set_letter_spacing(tmp7);
		}
		HX_STACK_LINE(203)
		Dynamic tmp6 = this->options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(203)
		Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(203)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(203)
		if ((tmp8)){
			HX_STACK_LINE(203)
			Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			Dynamic tmp10 = tmp9->__Field(HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(203)
			this->set_line_spacing(tmp10);
		}
		HX_STACK_LINE(204)
		Dynamic tmp9 = this->options;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(204)
		Dynamic tmp10 = tmp9->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(204)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(204)
		if ((tmp11)){
			HX_STACK_LINE(204)
			Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(204)
			Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(204)
			this->set_point_size(tmp13);
		}
		HX_STACK_LINE(206)
		Dynamic tmp12 = this->options;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(206)
		::phoenix::Rectangle tmp13 = tmp12->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(206)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(206)
		if ((tmp14)){
			HX_STACK_LINE(206)
			Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			::phoenix::Rectangle tmp16 = tmp15->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(206)
			this->set_bounds(tmp16);
		}
		HX_STACK_LINE(207)
		Dynamic tmp15 = this->options;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(207)
		Dynamic tmp16 = tmp15->__Field(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(207)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(207)
		if ((tmp17)){
			HX_STACK_LINE(207)
			Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(207)
			Dynamic tmp19 = tmp18->__Field(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(207)
			this->set_bounds_wrap(tmp19);
		}
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(209)
			Dynamic tmp19 = tmp18->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(209)
			bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(209)
			if ((tmp20)){
				HX_STACK_LINE(209)
				Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(209)
				tmp21->__FieldRef(HX_HCSTRING("align","\xc5","\x56","\x91","\x21")) = (int)0;
			}
			HX_STACK_LINE(209)
			Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(209)
			tmp21->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );
		}
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(210)
			Dynamic tmp19 = tmp18->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(210)
			bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(210)
			if ((tmp20)){
				HX_STACK_LINE(210)
				Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(210)
				tmp21->__FieldRef(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53")) = (int)3;
			}
			HX_STACK_LINE(210)
			Dynamic tmp21 = this->options;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(210)
			tmp21->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );
		}
		HX_STACK_LINE(212)
		Dynamic tmp18 = this->options;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(212)
		Dynamic tmp19 = tmp18->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(212)
		this->set_align(tmp19);
		HX_STACK_LINE(213)
		Dynamic tmp20 = this->options;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(213)
		Dynamic tmp21 = tmp20->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(213)
		this->set_align_vertical(tmp21);
		HX_STACK_LINE(218)
		Dynamic tmp22 = this->options;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(218)
		Dynamic tmp23 = tmp22->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(218)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(218)
		if ((tmp24)){
			HX_STACK_LINE(218)
			Dynamic tmp25 = this->options;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(218)
			Dynamic tmp26 = tmp25->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(218)
			this->set_thickness(tmp26);
		}
		HX_STACK_LINE(219)
		Dynamic tmp25 = this->options;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(219)
		Dynamic tmp26 = tmp25->__Field(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(219)
		bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(219)
		if ((tmp27)){
			HX_STACK_LINE(219)
			Dynamic tmp28 = this->options;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(219)
			Dynamic tmp29 = tmp28->__Field(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(219)
			this->set_smoothness(tmp29);
		}
		HX_STACK_LINE(221)
		Dynamic tmp28 = this->options;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(221)
		Dynamic tmp29 = tmp28->__Field(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(221)
		bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(221)
		if ((tmp30)){
			HX_STACK_LINE(221)
			Dynamic tmp31 = this->options;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(221)
			Dynamic tmp32 = tmp31->__Field(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(221)
			this->set_outline(tmp32);
		}
		HX_STACK_LINE(222)
		Dynamic tmp31 = this->options;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(222)
		::phoenix::Color tmp32 = tmp31->__Field(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(222)
		bool tmp33 = (tmp32 != null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(222)
		if ((tmp33)){
			HX_STACK_LINE(222)
			Dynamic tmp34 = this->options;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(222)
			::phoenix::Color tmp35 = tmp34->__Field(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(222)
			this->set_outline_color(tmp35);
		}
		HX_STACK_LINE(224)
		Dynamic tmp34 = this->options;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(224)
		Dynamic tmp35 = tmp34->__Field(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(224)
		bool tmp36 = (tmp35 != null());		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(224)
		if ((tmp36)){
			HX_STACK_LINE(224)
			Dynamic tmp37 = this->options;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(224)
			Dynamic tmp38 = tmp37->__Field(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(224)
			this->set_glow_threshold(tmp38);
		}
		HX_STACK_LINE(225)
		Dynamic tmp37 = this->options;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(225)
		Dynamic tmp38 = tmp37->__Field(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(225)
		bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(225)
		if ((tmp39)){
			HX_STACK_LINE(225)
			Dynamic tmp40 = this->options;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(225)
			Dynamic tmp41 = tmp40->__Field(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(225)
			this->set_glow_amount(tmp41);
		}
		HX_STACK_LINE(226)
		Dynamic tmp40 = this->options;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(226)
		::phoenix::Color tmp41 = tmp40->__Field(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(226)
		bool tmp42 = (tmp41 != null());		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(226)
		if ((tmp42)){
			HX_STACK_LINE(226)
			Dynamic tmp43 = this->options;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(226)
			::phoenix::Color tmp44 = tmp43->__Field(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(226)
			this->set_glow_color(tmp44);
		}
		HX_STACK_LINE(228)
		bool tmp43 = this->sdf;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(228)
		if ((tmp43)){
			HX_STACK_LINE(228)
			this->flush_uniforms();
		}
		HX_STACK_LINE(231)
		Dynamic tmp44 = this->options;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(231)
		::String tmp45 = tmp44->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(231)
		bool tmp46 = (tmp45 != null());		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(231)
		if ((tmp46)){
			HX_STACK_LINE(231)
			Dynamic tmp47 = this->options;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(231)
			::String tmp48 = tmp47->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(231)
			this->set_text(tmp48);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,default_options,(void))

::String TextGeometry_obj::set_text( ::String _text){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_text",0x5a10d89c,"phoenix.geometry.TextGeometry.set_text","phoenix/geometry/TextGeometry.hx",236,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_text,"_text")
	HX_STACK_LINE(238)
	bool tmp = (_text == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	if ((tmp)){
		HX_STACK_LINE(239)
		::String tmp1 = HX_HCSTRING("i / textgeometry / null text passed into TextGeometry!","\x8e","\xfd","\x27","\x75");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("TextGeometry.hx","\x7f","\xe3","\x4c","\x57"),239,HX_HCSTRING("phoenix.geometry.TextGeometry","\xbc","\x0f","\x18","\xb9"),HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		::haxe::Log_obj::trace(tmp1,tmp2);
		HX_STACK_LINE(240)
		_text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(244)
	::String tmp1 = this->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	::String tmp2 = _text;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	if ((tmp3)){
		HX_STACK_LINE(247)
		this->text = _text;
		HX_STACK_LINE(249)
		::String tmp4 = this->text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		bool tmp5 = (tmp4 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		if ((tmp5)){
			HX_STACK_LINE(251)
			this->set_dirty_sizing(true);
			HX_STACK_LINE(252)
			this->update_text();
		}
		else{
			HX_STACK_LINE(255)
			int tmp6 = this->vertices->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(255)
			this->vertices->splice((int)0,tmp6);
		}
	}
	HX_STACK_LINE(260)
	::String tmp4 = this->text;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(260)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_text,return )

::String TextGeometry_obj::stats( ){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","stats",0xcf4693ed,"phoenix.geometry.TextGeometry.stats","phoenix/geometry/TextGeometry.hx",265,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	Float tmp1 = (Float(tmp) / Float((int)6));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	::String tmp2 = (HX_HCSTRING("letters:","\xcd","\x96","\x3a","\xf8") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	::String tmp3 = (tmp2 + HX_HCSTRING(" / cache:","\xa9","\x4b","\x11","\xc2"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	int tmp4 = this->cache->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(266)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(266)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,stats,return )

bool TextGeometry_obj::update_sizes( ){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","update_sizes",0x6399da8e,"phoenix.geometry.TextGeometry.update_sizes","phoenix/geometry/TextGeometry.hx",270,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	bool tmp = this->dirty_sizing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	if ((tmp1)){
		HX_STACK_LINE(272)
		return false;
	}
	HX_STACK_LINE(275)
	::EReg tmp2 = ::phoenix::geometry::TextGeometry_obj::tab_regex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(275)
	::String tmp4 = tmp2->replace(tmp3,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(275)
	::String drawn_text = tmp4;		HX_STACK_VAR(drawn_text,"drawn_text");
	HX_STACK_LINE(276)
	bool tmp5 = this->bounds_wrap;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(276)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(276)
	if ((tmp5)){
		HX_STACK_LINE(276)
		::phoenix::Rectangle tmp7 = this->bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(276)
		::phoenix::Rectangle tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(276)
		tmp6 = (tmp8 != null());
	}
	else{
		HX_STACK_LINE(276)
		tmp6 = false;
	}
	HX_STACK_LINE(276)
	if ((tmp6)){
		HX_STACK_LINE(277)
		::phoenix::BitmapFont tmp7 = this->font;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		::String tmp8 = drawn_text;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(277)
		::phoenix::Rectangle tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(277)
		Float tmp10 = this->point_size;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(277)
		Float tmp11 = this->letter_spacing;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(277)
		::String tmp12 = tmp7->wrap_string_to_bounds(tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(277)
		drawn_text = tmp12;
	}
	HX_STACK_LINE(280)
	int tmp7 = this->lines->length;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(280)
	this->lines->splice((int)0,tmp7);
	HX_STACK_LINE(281)
	this->lines = drawn_text.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	HX_STACK_LINE(283)
	int tmp8 = this->line_widths->length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(283)
	this->line_widths->splice((int)0,tmp8);
	HX_STACK_LINE(285)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(285)
	{
		HX_STACK_LINE(285)
		::phoenix::BitmapFont tmp10 = this->font;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(285)
		::phoenix::BitmapFont _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(285)
		Float tmp11 = this->point_size;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(285)
		Float _point_size = tmp11;		HX_STACK_VAR(_point_size,"_point_size");
		HX_STACK_LINE(285)
		Float tmp12 = this->letter_spacing;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(285)
		Float _letter_spc = tmp12;		HX_STACK_VAR(_letter_spc,"_letter_spc");
		HX_STACK_LINE(285)
		Array< Float > _line_widths = this->line_widths;		HX_STACK_VAR(_line_widths,"_line_widths");
		HX_STACK_LINE(285)
		Float _max_w = ((Float)0.0);		HX_STACK_VAR(_max_w,"_max_w");
		HX_STACK_LINE(285)
		bool tmp13 = (_line_widths != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(285)
		bool _push_widths = tmp13;		HX_STACK_VAR(_push_widths,"_push_widths");
		HX_STACK_LINE(285)
		::String tmp14 = drawn_text;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(285)
		Array< ::String > _lines = ::luxe::utils::unifill::Unifill_obj::uSplit(tmp14,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				bool tmp15 = (_g < _lines->length);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(285)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(285)
				if ((tmp16)){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(285)
				::String tmp17 = _lines->__get(_g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(285)
				::String _line = tmp17;		HX_STACK_VAR(_line,"_line");
				HX_STACK_LINE(285)
				++(_g);
				HX_STACK_LINE(285)
				::String tmp18 = _line;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(285)
				Float tmp19 = _point_size;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(285)
				Float tmp20 = _letter_spc;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(285)
				Float tmp21 = _this->width_of_line(tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(285)
				Float _cur_w = tmp21;		HX_STACK_VAR(_cur_w,"_cur_w");
				HX_STACK_LINE(285)
				Float tmp22 = _max_w;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(285)
				Float tmp23 = _cur_w;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(285)
				Float tmp24 = ::Math_obj::max(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(285)
				_max_w = tmp24;
				HX_STACK_LINE(285)
				bool tmp25 = _push_widths;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(285)
				if ((tmp25)){
					HX_STACK_LINE(285)
					Float tmp26 = _cur_w;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(285)
					_line_widths->push(tmp26);
				}
			}
		}
		HX_STACK_LINE(285)
		tmp9 = _max_w;
	}
	HX_STACK_LINE(285)
	this->text_width = tmp9;
	HX_STACK_LINE(286)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(286)
	{
		HX_STACK_LINE(286)
		::phoenix::BitmapFont tmp11 = this->font;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(286)
		::phoenix::BitmapFont _this = tmp11;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(286)
		Float tmp12 = this->point_size;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(286)
		Float tmp13 = _this->info->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(286)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(286)
		Float _ratio = tmp14;		HX_STACK_VAR(_ratio,"_ratio");
		HX_STACK_LINE(286)
		int tmp15 = this->lines->length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(286)
		Float tmp16 = _this->info->__Field(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(286)
		Float tmp17 = this->line_spacing;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(286)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(286)
		Float tmp19 = _ratio;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(286)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(286)
		tmp10 = (tmp15 * tmp20);
	}
	HX_STACK_LINE(286)
	this->text_height = tmp10;
	HX_STACK_LINE(287)
	Float tmp11 = this->text_width;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(287)
	Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(287)
	this->text_h_w = tmp12;
	HX_STACK_LINE(288)
	Float tmp13 = this->text_height;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(288)
	Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(288)
	this->text_h_h = tmp14;
	HX_STACK_LINE(289)
	Float tmp15 = this->point_size;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(289)
	::phoenix::BitmapFont tmp16 = this->font;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(289)
	Float tmp17 = tmp16->info->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(289)
	Float tmp18 = (Float(tmp15) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(289)
	this->point_ratio = tmp18;
	HX_STACK_LINE(291)
	this->set_dirty_sizing(false);
	HX_STACK_LINE(293)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,update_sizes,return )

Void TextGeometry_obj::update_text( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","update_text",0xa0aa4e31,"phoenix.geometry.TextGeometry.update_text","phoenix/geometry/TextGeometry.hx",299,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		::phoenix::geometry::TextGeometry _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(301)
		Float _pos_x = ((Float)0.0);		HX_STACK_VAR(_pos_x,"_pos_x");
		HX_STACK_LINE(302)
		Float _pos_y = ((Float)0.0);		HX_STACK_VAR(_pos_y,"_pos_y");
		HX_STACK_LINE(303)
		::phoenix::Rectangle tmp = this->bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		bool _bounds_based = tmp1;		HX_STACK_VAR(_bounds_based,"_bounds_based");
		HX_STACK_LINE(305)
		bool tmp2 = _bounds_based;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(305)
		if ((tmp2)){
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(306)
				::phoenix::Vector tmp4 = tmp3->local->pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(306)
				::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(306)
				::phoenix::Rectangle tmp5 = this->bounds;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(306)
				Float tmp6 = _pos_x = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(306)
				Float _x = tmp6;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(306)
				_this->x = _x;
				HX_STACK_LINE(306)
				bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(306)
				if ((tmp7)){
					HX_STACK_LINE(306)
					_this->x;
				}
				else{
					HX_STACK_LINE(306)
					bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(306)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(306)
					if ((tmp8)){
						HX_STACK_LINE(306)
						bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(306)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(306)
						tmp9 = !(tmp11);
					}
					else{
						HX_STACK_LINE(306)
						tmp9 = false;
					}
					HX_STACK_LINE(306)
					if ((tmp9)){
						HX_STACK_LINE(306)
						Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(306)
						_this->listen_x(tmp10);
					}
					HX_STACK_LINE(306)
					_this->x;
				}
			}
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				::phoenix::Transform tmp3 = this->transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(307)
				::phoenix::Vector tmp4 = tmp3->local->pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(307)
				::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(307)
				::phoenix::Rectangle tmp5 = this->bounds;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(307)
				Float tmp6 = _pos_y = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(307)
				Float _y = tmp6;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(307)
				_this->y = _y;
				HX_STACK_LINE(307)
				bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(307)
				if ((tmp7)){
					HX_STACK_LINE(307)
					_this->y;
				}
				else{
					HX_STACK_LINE(307)
					bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(307)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(307)
					if ((tmp8)){
						HX_STACK_LINE(307)
						bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(307)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(307)
						tmp9 = !(tmp11);
					}
					else{
						HX_STACK_LINE(307)
						tmp9 = false;
					}
					HX_STACK_LINE(307)
					if ((tmp9)){
						HX_STACK_LINE(307)
						Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(307)
						_this->listen_y(tmp10);
					}
					HX_STACK_LINE(307)
					_this->y;
				}
			}
		}
		HX_STACK_LINE(310)
		Float _cur_x = ((Float)0.0);		HX_STACK_VAR(_cur_x,"_cur_x");
		HX_STACK_LINE(311)
		Float _cur_y = ((Float)0.0);		HX_STACK_VAR(_cur_y,"_cur_y");
		HX_STACK_LINE(312)
		int _line_idx = (int)0;		HX_STACK_VAR(_line_idx,"_line_idx");
		HX_STACK_LINE(313)
		int _total_idx = (int)0;		HX_STACK_VAR(_total_idx,"_total_idx");
		HX_STACK_LINE(314)
		bool _is_char = true;		HX_STACK_VAR(_is_char,"_is_char");
		HX_STACK_LINE(315)
		bool tmp3 = this->update_sizes();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		bool _was_dirty = tmp3;		HX_STACK_VAR(_was_dirty,"_was_dirty");
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(322)
			Array< ::String > _g11 = this->lines;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(322)
			while((true)){
				HX_STACK_LINE(322)
				bool tmp4 = (_g1 < _g11->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(322)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(322)
				if ((tmp5)){
					HX_STACK_LINE(322)
					break;
				}
				HX_STACK_LINE(322)
				::String tmp6 = _g11->__get(_g1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(322)
				::String _line = tmp6;		HX_STACK_VAR(_line,"_line");
				HX_STACK_LINE(322)
				++(_g1);
				HX_STACK_LINE(326)
				Float _line_x_offset = ((Float)0.0);		HX_STACK_VAR(_line_x_offset,"_line_x_offset");
				HX_STACK_LINE(327)
				Float _line_y_offset = ((Float)0.0);		HX_STACK_VAR(_line_y_offset,"_line_y_offset");
				HX_STACK_LINE(329)
				bool tmp7 = this->dirty_align;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(329)
				if ((tmp7)){
					HX_STACK_LINE(331)
					bool tmp8 = _bounds_based;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(331)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(331)
					if ((tmp9)){
						HX_STACK_LINE(333)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(333)
						{
							HX_STACK_LINE(333)
							int tmp11 = this->align;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(333)
							int _g2 = tmp11;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(333)
							int tmp12 = _g2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(333)
							switch( (int)(tmp12)){
								case (int)2: {
									HX_STACK_LINE(334)
									Float tmp13 = this->line_widths->__get(_line_idx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(334)
									Float tmp14 = (Float(tmp13) / Float(((Float)2.0)));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(334)
									tmp10 = -(tmp14);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(335)
									Float tmp13 = this->line_widths->__get(_line_idx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(335)
									tmp10 = -(tmp13);
								}
								;break;
								default: {
									HX_STACK_LINE(336)
									tmp10 = ((Float)0.0);
								}
							}
						}
						HX_STACK_LINE(333)
						_line_x_offset = tmp10;
						HX_STACK_LINE(339)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(339)
						{
							HX_STACK_LINE(339)
							int tmp12 = this->align_vertical;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(339)
							int _g2 = tmp12;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(339)
							int tmp13 = _g2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(339)
							switch( (int)(tmp13)){
								case (int)2: {
									HX_STACK_LINE(340)
									Float tmp14 = this->text_h_h;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(340)
									tmp11 = -(tmp14);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(341)
									Float tmp14 = this->text_height;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(341)
									tmp11 = -(tmp14);
								}
								;break;
								default: {
									HX_STACK_LINE(342)
									tmp11 = ((Float)0.0);
								}
							}
						}
						HX_STACK_LINE(339)
						_line_y_offset = tmp11;
					}
					else{
						HX_STACK_LINE(347)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(347)
						{
							HX_STACK_LINE(347)
							int tmp11 = this->align;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(347)
							int _g2 = tmp11;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(347)
							int tmp12 = _g2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(347)
							switch( (int)(tmp12)){
								case (int)2: {
									HX_STACK_LINE(348)
									Float tmp13 = this->line_widths->__get(_line_idx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(348)
									Float tmp14 = (Float(tmp13) / Float(((Float)2.0)));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(348)
									Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(348)
									::phoenix::Rectangle tmp16 = this->bounds;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(348)
									Float tmp17 = tmp16->w;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(348)
									Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(348)
									tmp10 = (tmp15 + tmp18);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(349)
									Float tmp13 = this->line_widths->__get(_line_idx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(349)
									Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(349)
									::phoenix::Rectangle tmp15 = this->bounds;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(349)
									Float tmp16 = tmp15->w;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(349)
									tmp10 = (tmp14 + tmp16);
								}
								;break;
								default: {
									HX_STACK_LINE(350)
									tmp10 = ((Float)0.0);
								}
							}
						}
						HX_STACK_LINE(347)
						_line_x_offset = tmp10;
						HX_STACK_LINE(353)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(353)
						{
							HX_STACK_LINE(353)
							int tmp12 = this->align_vertical;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(353)
							int _g2 = tmp12;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(353)
							int tmp13 = _g2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(353)
							switch( (int)(tmp13)){
								case (int)2: {
									HX_STACK_LINE(354)
									::phoenix::Rectangle tmp14 = this->bounds;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(354)
									Float tmp15 = tmp14->h;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(354)
									Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(354)
									Float tmp17 = this->text_h_h;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(354)
									tmp11 = (tmp16 - tmp17);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(355)
									::phoenix::Rectangle tmp14 = this->bounds;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(355)
									Float tmp15 = tmp14->h;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(355)
									Float tmp16 = this->text_height;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(355)
									tmp11 = (tmp15 - tmp16);
								}
								;break;
								default: {
									HX_STACK_LINE(356)
									tmp11 = ((Float)0.0);
								}
							}
						}
						HX_STACK_LINE(353)
						_line_y_offset = tmp11;
					}
					HX_STACK_LINE(362)
					Float tmp10 = _line_x_offset;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(362)
					this->line_offsets->__get((int)0).StaticCast< Array< Float > >()[_line_idx] = tmp10;
					HX_STACK_LINE(363)
					Float tmp11 = _line_y_offset;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(363)
					this->line_offsets->__get((int)1).StaticCast< Array< Float > >()[_line_idx] = tmp11;
				}
				else{
					HX_STACK_LINE(367)
					Float tmp8 = this->line_offsets->__get((int)0).StaticCast< Array< Float > >()->__get(_line_idx);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(367)
					_line_x_offset = tmp8;
					HX_STACK_LINE(368)
					Float tmp9 = this->line_offsets->__get((int)1).StaticCast< Array< Float > >()->__get(_line_idx);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(368)
					_line_y_offset = tmp9;
				}
				HX_STACK_LINE(372)
				bool tmp8 = (_line_idx != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(372)
				if ((tmp8)){
					HX_STACK_LINE(373)
					Dynamic tmp9 = _g->font->info;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(373)
					Float tmp10 = tmp9->__Field(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(373)
					Float tmp11 = _g->line_spacing;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(373)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(373)
					Float tmp13 = _g->point_ratio;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(373)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(373)
					hx::AddEq(_cur_y,tmp14);
					HX_STACK_LINE(373)
					_cur_x = (int)0;
				}
				HX_STACK_LINE(378)
				int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
				HX_STACK_LINE(379)
				{
					HX_STACK_LINE(379)
					::luxe::utils::unifill::CodePointIter tmp9 = ::luxe::utils::unifill::CodePointIter_obj::__new(_line);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(379)
					::luxe::utils::unifill::CodePointIter _g2 = tmp9;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(379)
					while((true)){
						HX_STACK_LINE(379)
						bool tmp10 = (_g2->index < _g2->endIndex);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(379)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(379)
						if ((tmp11)){
							HX_STACK_LINE(379)
							break;
						}
						HX_STACK_LINE(379)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(379)
						{
							HX_STACK_LINE(379)
							_g2->i = _g2->index;
							HX_STACK_LINE(379)
							int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								int tmp14 = _g2->index;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(379)
								int tmp15 = _g2->string.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(379)
								int c = tmp15;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(379)
								bool tmp16 = (c < (int)192);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(379)
								if ((tmp16)){
									HX_STACK_LINE(379)
									tmp13 = (int)1;
								}
								else{
									HX_STACK_LINE(379)
									bool tmp17 = (c < (int)224);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(379)
									if ((tmp17)){
										HX_STACK_LINE(379)
										tmp13 = (int)2;
									}
									else{
										HX_STACK_LINE(379)
										bool tmp18 = (c < (int)240);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(379)
										if ((tmp18)){
											HX_STACK_LINE(379)
											tmp13 = (int)3;
										}
										else{
											HX_STACK_LINE(379)
											bool tmp19 = (c < (int)248);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(379)
											if ((tmp19)){
												HX_STACK_LINE(379)
												tmp13 = (int)4;
											}
											else{
												HX_STACK_LINE(379)
												tmp13 = (int)1;
											}
										}
									}
								}
							}
							HX_STACK_LINE(379)
							hx::AddEq(_g2->index,tmp13);
							HX_STACK_LINE(379)
							::String tmp14 = _g2->string;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(379)
							int tmp15 = _g2->i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(379)
							int tmp16 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointAt(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(379)
							tmp12 = tmp16;
						}
						HX_STACK_LINE(379)
						int _uglyph = tmp12;		HX_STACK_VAR(_uglyph,"_uglyph");
						HX_STACK_LINE(381)
						int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
						HX_STACK_LINE(382)
						::phoenix::BitmapFont tmp13 = this->font;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(382)
						::haxe::ds::IntMap tmp14 = tmp13->info->__Field(HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(382)
						int tmp15 = _index;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(382)
						Dynamic tmp16 = tmp14->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(382)
						Dynamic _char = tmp16;		HX_STACK_VAR(_char,"_char");
						HX_STACK_LINE(383)
						bool tmp17 = (_char != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(383)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(383)
						if ((tmp17)){
							HX_STACK_LINE(383)
							tmp18 = (_index > (int)32);
						}
						else{
							HX_STACK_LINE(383)
							tmp18 = false;
						}
						HX_STACK_LINE(383)
						_is_char = tmp18;
						HX_STACK_LINE(387)
						bool tmp19 = _is_char;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(387)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(387)
						if ((tmp20)){
							HX_STACK_LINE(388)
							::phoenix::BitmapFont tmp21 = this->font;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(388)
							_char = tmp21->space_char;
						}
						HX_STACK_LINE(391)
						bool tmp21 = _is_char;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(391)
						if ((tmp21)){
							HX_STACK_LINE(394)
							Float tmp22 = (_line_x_offset + _cur_x);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(394)
							Float tmp23 = _char->__Field(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(394)
							Float tmp24 = this->point_ratio;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(394)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(394)
							Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(394)
							Float _quad_x = tmp26;		HX_STACK_VAR(_quad_x,"_quad_x");
							HX_STACK_LINE(395)
							Float tmp27 = (_line_y_offset + _cur_y);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(395)
							Float tmp28 = _char->__Field(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(395)
							Float tmp29 = this->point_ratio;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(395)
							Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(395)
							Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(395)
							Float _quad_y = tmp31;		HX_STACK_VAR(_quad_y,"_quad_y");
							HX_STACK_LINE(397)
							::phoenix::BitmapFont tmp32 = this->font;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(397)
							int tmp33 = _char->__Field(HX_HCSTRING("page","\x4f","\xda","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(397)
							::phoenix::Texture tmp34 = tmp32->pages->get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(397)
							::phoenix::Texture _page = tmp34;		HX_STACK_VAR(_page,"_page");
							HX_STACK_LINE(399)
							Float tmp35 = (Float(_char->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic )) / Float(_page->width_actual));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(399)
							Float _u1 = tmp35;		HX_STACK_VAR(_u1,"_u1");
							HX_STACK_LINE(400)
							Float tmp36 = (Float(_char->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic )) / Float(_page->height_actual));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(400)
							Float _v1 = tmp36;		HX_STACK_VAR(_v1,"_v1");
							HX_STACK_LINE(401)
							Float tmp37 = (_char->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + _char->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(401)
							int tmp38 = _page->width_actual;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(401)
							Float tmp39 = (Float(tmp37) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(401)
							Float _u2 = tmp39;		HX_STACK_VAR(_u2,"_u2");
							HX_STACK_LINE(402)
							Float tmp40 = (_char->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + _char->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(402)
							int tmp41 = _page->height_actual;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(402)
							Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(402)
							Float _v2 = tmp42;		HX_STACK_VAR(_v2,"_v2");
							HX_STACK_LINE(404)
							int tmp43 = _total_idx;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(405)
							Float tmp44 = _quad_x;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(405)
							Float tmp45 = _quad_y;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(405)
							Float tmp46 = _char->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(405)
							Float tmp47 = this->point_ratio;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(405)
							Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(405)
							Float tmp49 = _char->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(405)
							Float tmp50 = this->point_ratio;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(405)
							Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(406)
							Float tmp52 = _u1;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(406)
							Float tmp53 = _v1;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(406)
							Float tmp54 = _u2;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(406)
							Float tmp55 = _v2;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(406)
							::phoenix::Color tmp56 = this->color;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(404)
							this->update_char(tmp43,tmp44,tmp45,tmp48,tmp51,tmp52,tmp53,tmp54,tmp55,tmp56);
							HX_STACK_LINE(410)
							(_total_idx)++;
						}
						HX_STACK_LINE(416)
						Float _x_inc = _char->__Field(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"), hx::paccDynamic );		HX_STACK_VAR(_x_inc,"_x_inc");
						HX_STACK_LINE(419)
						int tmp22 = _idx;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(419)
						int tmp23 = (_line.length - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(419)
						bool tmp24 = (tmp22 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(419)
						if ((tmp24)){
							HX_STACK_LINE(420)
							Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(420)
							{
								HX_STACK_LINE(420)
								::String tmp26 = _line;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(420)
								int tmp27 = (_idx + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(420)
								int tmp28 = ::haxe::Utf8_obj::charCodeAt(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(420)
								int _second = tmp28;		HX_STACK_VAR(_second,"_second");
								HX_STACK_LINE(420)
								::phoenix::BitmapFont tmp29 = this->font;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(420)
								::haxe::ds::IntMap tmp30 = tmp29->info->__Field(HX_HCSTRING("kernings","\x27","\xb8","\x8b","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(420)
								int tmp31 = _index;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(420)
								::haxe::ds::IntMap tmp32 = tmp30->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(420)
								::haxe::ds::IntMap _map = tmp32;		HX_STACK_VAR(_map,"_map");
								HX_STACK_LINE(420)
								bool tmp33 = (_map != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(420)
								bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(420)
								if ((tmp33)){
									HX_STACK_LINE(420)
									int tmp35 = _second;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(420)
									int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(420)
									tmp34 = _map->exists(tmp36);
								}
								else{
									HX_STACK_LINE(420)
									tmp34 = false;
								}
								HX_STACK_LINE(420)
								if ((tmp34)){
									HX_STACK_LINE(420)
									int tmp35 = _second;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(420)
									Dynamic tmp36 = _map->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(420)
									tmp25 = tmp36;
								}
								else{
									HX_STACK_LINE(420)
									tmp25 = (int)0;
								}
							}
							HX_STACK_LINE(420)
							hx::AddEq(_x_inc,tmp25);
							HX_STACK_LINE(421)
							bool tmp26 = (_index >= (int)32);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(421)
							if ((tmp26)){
								HX_STACK_LINE(422)
								Float tmp27 = this->letter_spacing;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(422)
								hx::AddEq(_x_inc,tmp27);
							}
						}
						HX_STACK_LINE(426)
						Float tmp25 = this->point_ratio;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(426)
						hx::MultEq(_x_inc,tmp25);
						HX_STACK_LINE(429)
						hx::AddEq(_cur_x,_x_inc);
						HX_STACK_LINE(432)
						(_idx)++;
					}
				}
				HX_STACK_LINE(437)
				(_line_idx)++;
			}
		}
		HX_STACK_LINE(444)
		int tmp4 = this->vertices->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(444)
		Float tmp5 = (Float(tmp4) / Float((int)6));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(444)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(444)
		int _vertidx = tmp6;		HX_STACK_VAR(_vertidx,"_vertidx");
		HX_STACK_LINE(445)
		int tmp7 = (_vertidx - _total_idx);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(445)
		int _diff = tmp7;		HX_STACK_VAR(_diff,"_diff");
		HX_STACK_LINE(447)
		bool tmp8 = (_diff > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(447)
		if ((tmp8)){
			HX_STACK_LINE(448)
			int tmp9 = (_total_idx * (int)6);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(448)
			int tmp10 = (_diff * (int)6);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(448)
			this->vertices->splice(tmp9,tmp10);
		}
		HX_STACK_LINE(452)
		this->dirty_align = false;
		HX_STACK_LINE(453)
		::luxe::Emitter tmp9 = this->emitter;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(453)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("TextGeometry.hx","\x7f","\xe3","\x4c","\x57"),453,HX_HCSTRING("phoenix.geometry.TextGeometry","\xbc","\x0f","\x18","\xb9"),HX_HCSTRING("update_text","\xe3","\xe1","\x75","\x52"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(453)
		tmp9->emit((int)1,null(),tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,update_text,(void))

Void TextGeometry_obj::update_char( int _letteridx,Float _x,Float _y,Float _w,Float _h,Float _u,Float _v,Float _u2,Float _v2,::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","update_char",0x956fe05a,"phoenix.geometry.TextGeometry.update_char","phoenix/geometry/TextGeometry.hx",458,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_letteridx,"_letteridx")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_ARG(_u,"_u")
		HX_STACK_ARG(_v,"_v")
		HX_STACK_ARG(_u2,"_u2")
		HX_STACK_ARG(_v2,"_v2")
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(460)
		::phoenix::geometry::Vertex vert0;		HX_STACK_VAR(vert0,"vert0");
		HX_STACK_LINE(460)
		::phoenix::geometry::Vertex vert1;		HX_STACK_VAR(vert1,"vert1");
		HX_STACK_LINE(460)
		::phoenix::geometry::Vertex vert2;		HX_STACK_VAR(vert2,"vert2");
		HX_STACK_LINE(461)
		::phoenix::geometry::Vertex vert3;		HX_STACK_VAR(vert3,"vert3");
		HX_STACK_LINE(461)
		::phoenix::geometry::Vertex vert4;		HX_STACK_VAR(vert4,"vert4");
		HX_STACK_LINE(461)
		::phoenix::geometry::Vertex vert5;		HX_STACK_VAR(vert5,"vert5");
		HX_STACK_LINE(463)
		Array< ::Dynamic > quad = this->cache->__get(_letteridx).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(quad,"quad");
		HX_STACK_LINE(466)
		bool tmp = (quad == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(466)
		if ((tmp)){
			HX_STACK_LINE(470)
			::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(470)
			::phoenix::Color tmp2 = _color;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(470)
			::phoenix::geometry::Vertex tmp3 = ::phoenix::geometry::Vertex_obj::__new(tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(470)
			vert0 = tmp3;
			HX_STACK_LINE(471)
			Float tmp4 = (_x + _w);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(471)
			Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(471)
			::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(tmp4,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(471)
			::phoenix::Color tmp7 = _color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(471)
			::phoenix::geometry::Vertex tmp8 = ::phoenix::geometry::Vertex_obj::__new(tmp6,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(471)
			vert1 = tmp8;
			HX_STACK_LINE(472)
			Float tmp9 = (_x + _w);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(472)
			Float tmp10 = (_y + _h);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(472)
			::phoenix::Vector tmp11 = ::phoenix::Vector_obj::__new(tmp9,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(472)
			::phoenix::Color tmp12 = _color;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(472)
			::phoenix::geometry::Vertex tmp13 = ::phoenix::geometry::Vertex_obj::__new(tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(472)
			vert2 = tmp13;
			HX_STACK_LINE(474)
			Float tmp14 = _x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(474)
			Float tmp15 = (_y + _h);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(474)
			::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new(tmp14,tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(474)
			::phoenix::Color tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(474)
			::phoenix::geometry::Vertex tmp18 = ::phoenix::geometry::Vertex_obj::__new(tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(474)
			vert3 = tmp18;
			HX_STACK_LINE(475)
			::phoenix::Vector tmp19 = ::phoenix::Vector_obj::__new(_x,_y,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(475)
			::phoenix::Color tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(475)
			::phoenix::geometry::Vertex tmp21 = ::phoenix::geometry::Vertex_obj::__new(tmp19,tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(475)
			vert4 = tmp21;
			HX_STACK_LINE(476)
			Float tmp22 = (_x + _w);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(476)
			Float tmp23 = (_y + _h);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(476)
			::phoenix::Vector tmp24 = ::phoenix::Vector_obj::__new(tmp22,tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(476)
			::phoenix::Color tmp25 = _color;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(476)
			::phoenix::geometry::Vertex tmp26 = ::phoenix::geometry::Vertex_obj::__new(tmp24,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(476)
			vert5 = tmp26;
			HX_STACK_LINE(478)
			quad = Array_obj< ::Dynamic >::__new().Add(vert0).Add(vert1).Add(vert2).Add(vert3).Add(vert4).Add(vert5);
			HX_STACK_LINE(479)
			this->cache[_letteridx] = quad;
		}
		else{
			HX_STACK_LINE(486)
			::phoenix::geometry::Vertex tmp1 = quad->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(486)
			vert0 = tmp1;
			HX_STACK_LINE(486)
			::phoenix::geometry::Vertex tmp2 = quad->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(486)
			vert1 = tmp2;
			HX_STACK_LINE(486)
			::phoenix::geometry::Vertex tmp3 = quad->__get((int)2).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(486)
			vert2 = tmp3;
			HX_STACK_LINE(487)
			::phoenix::geometry::Vertex tmp4 = quad->__get((int)3).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(487)
			vert3 = tmp4;
			HX_STACK_LINE(487)
			::phoenix::geometry::Vertex tmp5 = quad->__get((int)4).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(487)
			vert4 = tmp5;
			HX_STACK_LINE(487)
			::phoenix::geometry::Vertex tmp6 = quad->__get((int)5).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(487)
			vert5 = tmp6;
			HX_STACK_LINE(490)
			{
				HX_STACK_LINE(490)
				::phoenix::Vector _this = vert0->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(490)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(490)
				_this->ignore_listeners = true;
				HX_STACK_LINE(490)
				{
					HX_STACK_LINE(490)
					_this->x = _x;
					HX_STACK_LINE(490)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(490)
					if ((tmp7)){
						HX_STACK_LINE(490)
						_this->x;
					}
					else{
						HX_STACK_LINE(490)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(490)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(490)
						if ((tmp8)){
							HX_STACK_LINE(490)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(490)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(490)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(490)
							tmp9 = false;
						}
						HX_STACK_LINE(490)
						if ((tmp9)){
							HX_STACK_LINE(490)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(490)
							_this->listen_x(tmp10);
						}
						HX_STACK_LINE(490)
						_this->x;
					}
				}
				HX_STACK_LINE(490)
				{
					HX_STACK_LINE(490)
					_this->y = _y;
					HX_STACK_LINE(490)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(490)
					if ((tmp7)){
						HX_STACK_LINE(490)
						_this->y;
					}
					else{
						HX_STACK_LINE(490)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(490)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(490)
						if ((tmp8)){
							HX_STACK_LINE(490)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(490)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(490)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(490)
							tmp9 = false;
						}
						HX_STACK_LINE(490)
						if ((tmp9)){
							HX_STACK_LINE(490)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(490)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(490)
						_this->y;
					}
				}
				HX_STACK_LINE(490)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(490)
				bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(490)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(490)
				if ((tmp7)){
					HX_STACK_LINE(490)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(490)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(490)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(490)
					tmp8 = false;
				}
				HX_STACK_LINE(490)
				if ((tmp8)){
					HX_STACK_LINE(490)
					Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(490)
					_this->listen_x(tmp9);
				}
				HX_STACK_LINE(490)
				bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(490)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(490)
				if ((tmp9)){
					HX_STACK_LINE(490)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(490)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(490)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(490)
					tmp10 = false;
				}
				HX_STACK_LINE(490)
				if ((tmp10)){
					HX_STACK_LINE(490)
					Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(490)
					_this->listen_y(tmp11);
				}
				HX_STACK_LINE(490)
				_this;
			}
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				::phoenix::Vector _this = vert1->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(491)
				Float tmp7 = (_x + _w);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(491)
				Float _x1 = tmp7;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(491)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(491)
				_this->ignore_listeners = true;
				HX_STACK_LINE(491)
				{
					HX_STACK_LINE(491)
					_this->x = _x1;
					HX_STACK_LINE(491)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(491)
					if ((tmp8)){
						HX_STACK_LINE(491)
						_this->x;
					}
					else{
						HX_STACK_LINE(491)
						bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(491)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(491)
						if ((tmp9)){
							HX_STACK_LINE(491)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(491)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(491)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(491)
							tmp10 = false;
						}
						HX_STACK_LINE(491)
						if ((tmp10)){
							HX_STACK_LINE(491)
							Float tmp11 = _x1;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(491)
							_this->listen_x(tmp11);
						}
						HX_STACK_LINE(491)
						_this->x;
					}
				}
				HX_STACK_LINE(491)
				{
					HX_STACK_LINE(491)
					_this->y = _y;
					HX_STACK_LINE(491)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(491)
					if ((tmp8)){
						HX_STACK_LINE(491)
						_this->y;
					}
					else{
						HX_STACK_LINE(491)
						bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(491)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(491)
						if ((tmp9)){
							HX_STACK_LINE(491)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(491)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(491)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(491)
							tmp10 = false;
						}
						HX_STACK_LINE(491)
						if ((tmp10)){
							HX_STACK_LINE(491)
							Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(491)
							_this->listen_y(tmp11);
						}
						HX_STACK_LINE(491)
						_this->y;
					}
				}
				HX_STACK_LINE(491)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(491)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(491)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(491)
				if ((tmp8)){
					HX_STACK_LINE(491)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(491)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(491)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(491)
					tmp9 = false;
				}
				HX_STACK_LINE(491)
				if ((tmp9)){
					HX_STACK_LINE(491)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(491)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(491)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(491)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(491)
				if ((tmp10)){
					HX_STACK_LINE(491)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(491)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(491)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(491)
					tmp11 = false;
				}
				HX_STACK_LINE(491)
				if ((tmp11)){
					HX_STACK_LINE(491)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(491)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(491)
				_this;
			}
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				::phoenix::Vector _this = vert2->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(492)
				Float tmp7 = (_x + _w);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(492)
				Float _x1 = tmp7;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(492)
				Float tmp8 = (_y + _h);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(492)
				Float _y1 = tmp8;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(492)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(492)
				_this->ignore_listeners = true;
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					_this->x = _x1;
					HX_STACK_LINE(492)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(492)
					if ((tmp9)){
						HX_STACK_LINE(492)
						_this->x;
					}
					else{
						HX_STACK_LINE(492)
						bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(492)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(492)
						if ((tmp10)){
							HX_STACK_LINE(492)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(492)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(492)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(492)
							tmp11 = false;
						}
						HX_STACK_LINE(492)
						if ((tmp11)){
							HX_STACK_LINE(492)
							Float tmp12 = _x1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(492)
							_this->listen_x(tmp12);
						}
						HX_STACK_LINE(492)
						_this->x;
					}
				}
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					_this->y = _y1;
					HX_STACK_LINE(492)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(492)
					if ((tmp9)){
						HX_STACK_LINE(492)
						_this->y;
					}
					else{
						HX_STACK_LINE(492)
						bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(492)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(492)
						if ((tmp10)){
							HX_STACK_LINE(492)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(492)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(492)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(492)
							tmp11 = false;
						}
						HX_STACK_LINE(492)
						if ((tmp11)){
							HX_STACK_LINE(492)
							Float tmp12 = _y1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(492)
							_this->listen_y(tmp12);
						}
						HX_STACK_LINE(492)
						_this->y;
					}
				}
				HX_STACK_LINE(492)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(492)
				bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(492)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(492)
				if ((tmp9)){
					HX_STACK_LINE(492)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(492)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(492)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(492)
					tmp10 = false;
				}
				HX_STACK_LINE(492)
				if ((tmp10)){
					HX_STACK_LINE(492)
					Float tmp11 = _this->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(492)
					_this->listen_x(tmp11);
				}
				HX_STACK_LINE(492)
				bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(492)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(492)
				if ((tmp11)){
					HX_STACK_LINE(492)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(492)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(492)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(492)
					tmp12 = false;
				}
				HX_STACK_LINE(492)
				if ((tmp12)){
					HX_STACK_LINE(492)
					Float tmp13 = _this->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(492)
					_this->listen_y(tmp13);
				}
				HX_STACK_LINE(492)
				_this;
			}
			HX_STACK_LINE(493)
			{
				HX_STACK_LINE(493)
				::phoenix::Vector _this = vert3->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(493)
				Float tmp7 = (_y + _h);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(493)
				Float _y1 = tmp7;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(493)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(493)
				_this->ignore_listeners = true;
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					_this->x = _x;
					HX_STACK_LINE(493)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(493)
					if ((tmp8)){
						HX_STACK_LINE(493)
						_this->x;
					}
					else{
						HX_STACK_LINE(493)
						bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(493)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(493)
						if ((tmp9)){
							HX_STACK_LINE(493)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(493)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(493)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(493)
							tmp10 = false;
						}
						HX_STACK_LINE(493)
						if ((tmp10)){
							HX_STACK_LINE(493)
							Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(493)
							_this->listen_x(tmp11);
						}
						HX_STACK_LINE(493)
						_this->x;
					}
				}
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					_this->y = _y1;
					HX_STACK_LINE(493)
					bool tmp8 = _this->_construct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(493)
					if ((tmp8)){
						HX_STACK_LINE(493)
						_this->y;
					}
					else{
						HX_STACK_LINE(493)
						bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(493)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(493)
						if ((tmp9)){
							HX_STACK_LINE(493)
							bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(493)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(493)
							tmp10 = !(tmp12);
						}
						else{
							HX_STACK_LINE(493)
							tmp10 = false;
						}
						HX_STACK_LINE(493)
						if ((tmp10)){
							HX_STACK_LINE(493)
							Float tmp11 = _y1;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(493)
							_this->listen_y(tmp11);
						}
						HX_STACK_LINE(493)
						_this->y;
					}
				}
				HX_STACK_LINE(493)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(493)
				bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(493)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(493)
				if ((tmp8)){
					HX_STACK_LINE(493)
					bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(493)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(493)
					tmp9 = !(tmp11);
				}
				else{
					HX_STACK_LINE(493)
					tmp9 = false;
				}
				HX_STACK_LINE(493)
				if ((tmp9)){
					HX_STACK_LINE(493)
					Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(493)
					_this->listen_x(tmp10);
				}
				HX_STACK_LINE(493)
				bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(493)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(493)
				if ((tmp10)){
					HX_STACK_LINE(493)
					bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(493)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(493)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(493)
					tmp11 = false;
				}
				HX_STACK_LINE(493)
				if ((tmp11)){
					HX_STACK_LINE(493)
					Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(493)
					_this->listen_y(tmp12);
				}
				HX_STACK_LINE(493)
				_this;
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				::phoenix::Vector _this = vert4->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(494)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(494)
				_this->ignore_listeners = true;
				HX_STACK_LINE(494)
				{
					HX_STACK_LINE(494)
					_this->x = _x;
					HX_STACK_LINE(494)
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(494)
					if ((tmp7)){
						HX_STACK_LINE(494)
						_this->x;
					}
					else{
						HX_STACK_LINE(494)
						bool tmp8 = (_this->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(494)
						if ((tmp8)){
							HX_STACK_LINE(494)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(494)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(494)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(494)
							tmp9 = false;
						}
						HX_STACK_LINE(494)
						if ((tmp9)){
							HX_STACK_LINE(494)
							Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(494)
							_this->listen_x(tmp10);
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
					bool tmp7 = _this->_construct;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(494)
					if ((tmp7)){
						HX_STACK_LINE(494)
						_this->y;
					}
					else{
						HX_STACK_LINE(494)
						bool tmp8 = (_this->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(494)
						if ((tmp8)){
							HX_STACK_LINE(494)
							bool tmp10 = _this->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(494)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(494)
							tmp9 = !(tmp11);
						}
						else{
							HX_STACK_LINE(494)
							tmp9 = false;
						}
						HX_STACK_LINE(494)
						if ((tmp9)){
							HX_STACK_LINE(494)
							Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(494)
							_this->listen_y(tmp10);
						}
						HX_STACK_LINE(494)
						_this->y;
					}
				}
				HX_STACK_LINE(494)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(494)
				bool tmp7 = (_this->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(494)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(494)
				if ((tmp7)){
					HX_STACK_LINE(494)
					bool tmp9 = _this->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(494)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(494)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(494)
					tmp8 = false;
				}
				HX_STACK_LINE(494)
				if ((tmp8)){
					HX_STACK_LINE(494)
					Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(494)
					_this->listen_x(tmp9);
				}
				HX_STACK_LINE(494)
				bool tmp9 = (_this->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
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
					Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(494)
					_this->listen_y(tmp11);
				}
				HX_STACK_LINE(494)
				_this;
			}
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				::phoenix::Vector _this = vert5->pos;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(495)
				Float tmp7 = (_x + _w);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(495)
				Float _x1 = tmp7;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(495)
				Float tmp8 = (_y + _h);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(495)
				Float _y1 = tmp8;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(495)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(495)
				_this->ignore_listeners = true;
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					_this->x = _x1;
					HX_STACK_LINE(495)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(495)
					if ((tmp9)){
						HX_STACK_LINE(495)
						_this->x;
					}
					else{
						HX_STACK_LINE(495)
						bool tmp10 = (_this->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(495)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(495)
						if ((tmp10)){
							HX_STACK_LINE(495)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(495)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(495)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(495)
							tmp11 = false;
						}
						HX_STACK_LINE(495)
						if ((tmp11)){
							HX_STACK_LINE(495)
							Float tmp12 = _x1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(495)
							_this->listen_x(tmp12);
						}
						HX_STACK_LINE(495)
						_this->x;
					}
				}
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					_this->y = _y1;
					HX_STACK_LINE(495)
					bool tmp9 = _this->_construct;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(495)
					if ((tmp9)){
						HX_STACK_LINE(495)
						_this->y;
					}
					else{
						HX_STACK_LINE(495)
						bool tmp10 = (_this->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(495)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(495)
						if ((tmp10)){
							HX_STACK_LINE(495)
							bool tmp12 = _this->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(495)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(495)
							tmp11 = !(tmp13);
						}
						else{
							HX_STACK_LINE(495)
							tmp11 = false;
						}
						HX_STACK_LINE(495)
						if ((tmp11)){
							HX_STACK_LINE(495)
							Float tmp12 = _y1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(495)
							_this->listen_y(tmp12);
						}
						HX_STACK_LINE(495)
						_this->y;
					}
				}
				HX_STACK_LINE(495)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(495)
				bool tmp9 = (_this->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(495)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(495)
				if ((tmp9)){
					HX_STACK_LINE(495)
					bool tmp11 = _this->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(495)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(495)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(495)
					tmp10 = false;
				}
				HX_STACK_LINE(495)
				if ((tmp10)){
					HX_STACK_LINE(495)
					Float tmp11 = _this->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(495)
					_this->listen_x(tmp11);
				}
				HX_STACK_LINE(495)
				bool tmp11 = (_this->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(495)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(495)
				if ((tmp11)){
					HX_STACK_LINE(495)
					bool tmp13 = _this->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(495)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(495)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(495)
					tmp12 = false;
				}
				HX_STACK_LINE(495)
				if ((tmp12)){
					HX_STACK_LINE(495)
					Float tmp13 = _this->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(495)
					_this->listen_y(tmp13);
				}
				HX_STACK_LINE(495)
				_this;
			}
		}
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			::phoenix::geometry::TextureCoord tmp1 = vert0->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(499)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(499)
			_this->u = _u;
			HX_STACK_LINE(499)
			_this->v = _v;
			HX_STACK_LINE(499)
			_this;
		}
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			::phoenix::geometry::TextureCoord tmp1 = vert1->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(500)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(500)
			_this->u = _u2;
			HX_STACK_LINE(500)
			_this->v = _v;
			HX_STACK_LINE(500)
			_this;
		}
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			::phoenix::geometry::TextureCoord tmp1 = vert2->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(501)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(501)
			_this->u = _u2;
			HX_STACK_LINE(501)
			_this->v = _v2;
			HX_STACK_LINE(501)
			_this;
		}
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			::phoenix::geometry::TextureCoord tmp1 = vert3->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(502)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(502)
			_this->u = _u;
			HX_STACK_LINE(502)
			_this->v = _v2;
			HX_STACK_LINE(502)
			_this;
		}
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			::phoenix::geometry::TextureCoord tmp1 = vert4->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(503)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(503)
			_this->u = _u;
			HX_STACK_LINE(503)
			_this->v = _v;
			HX_STACK_LINE(503)
			_this;
		}
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			::phoenix::geometry::TextureCoord tmp1 = vert5->uv->uv0;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(504)
			::phoenix::geometry::TextureCoord _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(504)
			_this->u = _u2;
			HX_STACK_LINE(504)
			_this->v = _v2;
			HX_STACK_LINE(504)
			_this;
		}
		HX_STACK_LINE(509)
		int tmp1 = this->vertices->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		Float tmp2 = (Float(tmp1) / Float((int)6));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(509)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(509)
		int _vertidx = tmp3;		HX_STACK_VAR(_vertidx,"_vertidx");
		HX_STACK_LINE(511)
		bool tmp4 = (_vertidx <= _letteridx);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(511)
		if ((tmp4)){
			HX_STACK_LINE(512)
			::phoenix::geometry::Vertex tmp5 = vert0;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(512)
			this->add(tmp5);
			HX_STACK_LINE(512)
			::phoenix::geometry::Vertex tmp6 = vert1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(512)
			this->add(tmp6);
			HX_STACK_LINE(512)
			::phoenix::geometry::Vertex tmp7 = vert2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(512)
			this->add(tmp7);
			HX_STACK_LINE(513)
			::phoenix::geometry::Vertex tmp8 = vert3;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(513)
			this->add(tmp8);
			HX_STACK_LINE(513)
			::phoenix::geometry::Vertex tmp9 = vert4;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			this->add(tmp9);
			HX_STACK_LINE(513)
			::phoenix::geometry::Vertex tmp10 = vert5;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(513)
			this->add(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(TextGeometry_obj,update_char,(void))

bool TextGeometry_obj::set_dirty_sizing( bool _b){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_dirty_sizing",0xc3e956fa,"phoenix.geometry.TextGeometry.set_dirty_sizing","phoenix/geometry/TextGeometry.hx",521,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(523)
	this->dirty_align = true;
	HX_STACK_LINE(525)
	bool tmp = this->dirty_sizing = _b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(525)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_dirty_sizing,return )

::phoenix::Rectangle TextGeometry_obj::set_bounds( ::phoenix::Rectangle _bounds){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_bounds",0x3002ac24,"phoenix.geometry.TextGeometry.set_bounds","phoenix/geometry/TextGeometry.hx",530,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bounds,"_bounds")
	HX_STACK_LINE(532)
	this->bounds = _bounds;
	HX_STACK_LINE(534)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(535)
	this->update_text();
	HX_STACK_LINE(537)
	::phoenix::Rectangle tmp = this->bounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_bounds,return )

bool TextGeometry_obj::set_bounds_wrap( bool _wrap){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_bounds_wrap",0x51b72705,"phoenix.geometry.TextGeometry.set_bounds_wrap","phoenix/geometry/TextGeometry.hx",542,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_wrap,"_wrap")
	HX_STACK_LINE(544)
	this->bounds_wrap = _wrap;
	HX_STACK_LINE(546)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(547)
	this->update_text();
	HX_STACK_LINE(549)
	bool tmp = this->bounds_wrap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_bounds_wrap,return )

Float TextGeometry_obj::set_line_spacing( Float _line_spacing){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_line_spacing",0x07a8cbe7,"phoenix.geometry.TextGeometry.set_line_spacing","phoenix/geometry/TextGeometry.hx",554,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_line_spacing,"_line_spacing")
	HX_STACK_LINE(556)
	this->line_spacing = _line_spacing;
	HX_STACK_LINE(558)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(559)
	this->update_text();
	HX_STACK_LINE(561)
	Float tmp = this->line_spacing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(561)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_line_spacing,return )

Float TextGeometry_obj::set_letter_spacing( Float _letter_spacing){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_letter_spacing",0x3c057c99,"phoenix.geometry.TextGeometry.set_letter_spacing","phoenix/geometry/TextGeometry.hx",566,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_letter_spacing,"_letter_spacing")
	HX_STACK_LINE(568)
	this->letter_spacing = _letter_spacing;
	HX_STACK_LINE(570)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(571)
	this->update_text();
	HX_STACK_LINE(573)
	Float tmp = this->letter_spacing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(573)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_letter_spacing,return )

int TextGeometry_obj::set_align( int _align){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_align",0x88a4bbf6,"phoenix.geometry.TextGeometry.set_align","phoenix/geometry/TextGeometry.hx",578,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_align,"_align")
	HX_STACK_LINE(580)
	this->align = _align;
	HX_STACK_LINE(582)
	this->dirty_align = true;
	HX_STACK_LINE(583)
	this->update_text();
	HX_STACK_LINE(585)
	int tmp = this->align;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(585)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_align,return )

int TextGeometry_obj::set_align_vertical( int _align_vertical){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_align_vertical",0x21a6c91f,"phoenix.geometry.TextGeometry.set_align_vertical","phoenix/geometry/TextGeometry.hx",590,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_align_vertical,"_align_vertical")
	HX_STACK_LINE(592)
	this->align_vertical = _align_vertical;
	HX_STACK_LINE(594)
	this->dirty_align = true;
	HX_STACK_LINE(595)
	this->update_text();
	HX_STACK_LINE(597)
	int tmp = this->align_vertical;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(597)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_align_vertical,return )

Float TextGeometry_obj::set_point_size( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_point_size",0x02f08f7f,"phoenix.geometry.TextGeometry.set_point_size","phoenix/geometry/TextGeometry.hx",602,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(604)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(604)
	if ((tmp)){
		HX_STACK_LINE(604)
		s = (int)0;
	}
	HX_STACK_LINE(605)
	this->point_size = s;
	HX_STACK_LINE(607)
	this->set_dirty_sizing(true);
	HX_STACK_LINE(608)
	this->update_text();
	HX_STACK_LINE(610)
	Float tmp1 = this->point_size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(610)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_point_size,return )

Float TextGeometry_obj::set_smoothness( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_smoothness",0x49fb60f4,"phoenix.geometry.TextGeometry.set_smoothness","phoenix/geometry/TextGeometry.hx",619,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(621)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	if ((tmp)){
		HX_STACK_LINE(621)
		s = (int)0;
	}
	HX_STACK_LINE(623)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(623)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(623)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(623)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(623)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(623)
	if ((tmp4)){
		HX_STACK_LINE(623)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(623)
		tmp5 = false;
	}
	HX_STACK_LINE(623)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(623)
	if ((tmp5)){
		HX_STACK_LINE(623)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(623)
		tmp6 = false;
	}
	HX_STACK_LINE(623)
	if ((tmp6)){
		HX_STACK_LINE(624)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(624)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(624)
		{
			HX_STACK_LINE(624)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(624)
			int tmp8 = _this->program->id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(624)
			Dynamic tmp9 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp8,HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(624)
			Dynamic _location = tmp9;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(624)
			::phoenix::Uniform tmp10 = _this1->floats->get(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(624)
			::phoenix::Uniform _float = tmp10;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(624)
			bool tmp11 = (_float != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(624)
			if ((tmp11)){
				HX_STACK_LINE(624)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(624)
				::phoenix::Uniform tmp12 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),s,_location);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(624)
				_float = tmp12;
				HX_STACK_LINE(624)
				::phoenix::Uniform tmp13 = _float;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(624)
				_this1->floats->set(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),tmp13);
			}
			HX_STACK_LINE(624)
			::phoenix::Uniform tmp12 = _float;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(624)
			_this1->dirty_floats->push(tmp12);
		}
	}
	HX_STACK_LINE(627)
	Float tmp7 = this->smoothness = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(627)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_smoothness,return )

Float TextGeometry_obj::set_thickness( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_thickness",0xf6334325,"phoenix.geometry.TextGeometry.set_thickness","phoenix/geometry/TextGeometry.hx",632,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(634)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(634)
	if ((tmp)){
		HX_STACK_LINE(634)
		s = (int)0;
	}
	HX_STACK_LINE(636)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(636)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(636)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(636)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(636)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(636)
	if ((tmp4)){
		HX_STACK_LINE(636)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(636)
		tmp5 = false;
	}
	HX_STACK_LINE(636)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(636)
	if ((tmp5)){
		HX_STACK_LINE(636)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(636)
		tmp6 = false;
	}
	HX_STACK_LINE(636)
	if ((tmp6)){
		HX_STACK_LINE(637)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(637)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(637)
		{
			HX_STACK_LINE(637)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(637)
			int tmp8 = _this->program->id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(637)
			Dynamic tmp9 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp8,HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(637)
			Dynamic _location = tmp9;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(637)
			::phoenix::Uniform tmp10 = _this1->floats->get(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(637)
			::phoenix::Uniform _float = tmp10;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(637)
			bool tmp11 = (_float != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(637)
			if ((tmp11)){
				HX_STACK_LINE(637)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(637)
				::phoenix::Uniform tmp12 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),s,_location);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(637)
				_float = tmp12;
				HX_STACK_LINE(637)
				::phoenix::Uniform tmp13 = _float;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(637)
				_this1->floats->set(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),tmp13);
			}
			HX_STACK_LINE(637)
			::phoenix::Uniform tmp12 = _float;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(637)
			_this1->dirty_floats->push(tmp12);
		}
	}
	HX_STACK_LINE(640)
	Float tmp7 = this->thickness = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(640)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_thickness,return )

Float TextGeometry_obj::set_outline( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_outline",0xc059eaf3,"phoenix.geometry.TextGeometry.set_outline","phoenix/geometry/TextGeometry.hx",645,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(647)
	bool tmp = (s < ((Float)0.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(647)
	if ((tmp)){
		HX_STACK_LINE(647)
		tmp1 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(647)
		bool tmp2 = (s > ((Float)1.0));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(647)
		if ((tmp2)){
			HX_STACK_LINE(647)
			tmp1 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(647)
			tmp1 = s;
		}
	}
	HX_STACK_LINE(647)
	s = tmp1;
	HX_STACK_LINE(649)
	::phoenix::geometry::GeometryState tmp2 = this->state;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(649)
	::phoenix::Shader tmp3 = tmp2->shader;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(649)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(649)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(649)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(649)
	if ((tmp5)){
		HX_STACK_LINE(649)
		tmp6 = this->sdf;
	}
	else{
		HX_STACK_LINE(649)
		tmp6 = false;
	}
	HX_STACK_LINE(649)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(649)
	if ((tmp6)){
		HX_STACK_LINE(649)
		tmp7 = this->unique;
	}
	else{
		HX_STACK_LINE(649)
		tmp7 = false;
	}
	HX_STACK_LINE(649)
	if ((tmp7)){
		HX_STACK_LINE(650)
		::phoenix::geometry::GeometryState tmp8 = this->state;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(650)
		::phoenix::Shader _this = tmp8->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(650)
		{
			HX_STACK_LINE(650)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(650)
			int tmp9 = _this->program->id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(650)
			Dynamic tmp10 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp9,HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(650)
			Dynamic _location = tmp10;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(650)
			::phoenix::Uniform tmp11 = _this1->floats->get(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(650)
			::phoenix::Uniform _float = tmp11;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(650)
			bool tmp12 = (_float != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(650)
			if ((tmp12)){
				HX_STACK_LINE(650)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(650)
				::phoenix::Uniform tmp13 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),s,_location);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(650)
				_float = tmp13;
				HX_STACK_LINE(650)
				::phoenix::Uniform tmp14 = _float;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(650)
				_this1->floats->set(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),tmp14);
			}
			HX_STACK_LINE(650)
			::phoenix::Uniform tmp13 = _float;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(650)
			_this1->dirty_floats->push(tmp13);
		}
	}
	HX_STACK_LINE(653)
	Float tmp8 = this->outline = s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(653)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_outline,return )

Float TextGeometry_obj::set_glow_threshold( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_glow_threshold",0x88b50ce8,"phoenix.geometry.TextGeometry.set_glow_threshold","phoenix/geometry/TextGeometry.hx",658,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(660)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(660)
	if ((tmp)){
		HX_STACK_LINE(660)
		s = (int)0;
	}
	HX_STACK_LINE(662)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(662)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(662)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(662)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(662)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(662)
	if ((tmp4)){
		HX_STACK_LINE(662)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(662)
		tmp5 = false;
	}
	HX_STACK_LINE(662)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(662)
	if ((tmp5)){
		HX_STACK_LINE(662)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(662)
		tmp6 = false;
	}
	HX_STACK_LINE(662)
	if ((tmp6)){
		HX_STACK_LINE(663)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(663)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(663)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(663)
			int tmp8 = _this->program->id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(663)
			Dynamic tmp9 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp8,HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(663)
			Dynamic _location = tmp9;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(663)
			::phoenix::Uniform tmp10 = _this1->floats->get(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(663)
			::phoenix::Uniform _float = tmp10;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(663)
			bool tmp11 = (_float != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(663)
			if ((tmp11)){
				HX_STACK_LINE(663)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(663)
				::phoenix::Uniform tmp12 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),s,_location);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(663)
				_float = tmp12;
				HX_STACK_LINE(663)
				::phoenix::Uniform tmp13 = _float;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(663)
				_this1->floats->set(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),tmp13);
			}
			HX_STACK_LINE(663)
			::phoenix::Uniform tmp12 = _float;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(663)
			_this1->dirty_floats->push(tmp12);
		}
	}
	HX_STACK_LINE(666)
	Float tmp7 = this->glow_threshold = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(666)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_glow_threshold,return )

Float TextGeometry_obj::set_glow_amount( Float s){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_glow_amount",0xae4a507b,"phoenix.geometry.TextGeometry.set_glow_amount","phoenix/geometry/TextGeometry.hx",671,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(673)
	bool tmp = (s < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(673)
	if ((tmp)){
		HX_STACK_LINE(673)
		s = (int)0;
	}
	HX_STACK_LINE(675)
	::phoenix::geometry::GeometryState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(675)
	::phoenix::Shader tmp2 = tmp1->shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(675)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(675)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(675)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(675)
	if ((tmp4)){
		HX_STACK_LINE(675)
		tmp5 = this->sdf;
	}
	else{
		HX_STACK_LINE(675)
		tmp5 = false;
	}
	HX_STACK_LINE(675)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(675)
	if ((tmp5)){
		HX_STACK_LINE(675)
		tmp6 = this->unique;
	}
	else{
		HX_STACK_LINE(675)
		tmp6 = false;
	}
	HX_STACK_LINE(675)
	if ((tmp6)){
		HX_STACK_LINE(676)
		::phoenix::geometry::GeometryState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(676)
		::phoenix::Shader _this = tmp7->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(676)
		{
			HX_STACK_LINE(676)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(676)
			int tmp8 = _this->program->id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(676)
			Dynamic tmp9 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp8,HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(676)
			Dynamic _location = tmp9;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(676)
			::phoenix::Uniform tmp10 = _this1->floats->get(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(676)
			::phoenix::Uniform _float = tmp10;		HX_STACK_VAR(_float,"_float");
			HX_STACK_LINE(676)
			bool tmp11 = (_float != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(676)
			if ((tmp11)){
				HX_STACK_LINE(676)
				_float->value = s;
			}
			else{
				HX_STACK_LINE(676)
				::phoenix::Uniform tmp12 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),s,_location);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(676)
				_float = tmp12;
				HX_STACK_LINE(676)
				::phoenix::Uniform tmp13 = _float;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(676)
				_this1->floats->set(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),tmp13);
			}
			HX_STACK_LINE(676)
			::phoenix::Uniform tmp12 = _float;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(676)
			_this1->dirty_floats->push(tmp12);
		}
	}
	HX_STACK_LINE(679)
	Float tmp7 = this->glow_amount = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(679)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_glow_amount,return )

::phoenix::Color TextGeometry_obj::set_outline_color( ::phoenix::Color c){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_outline_color",0x66c8dbd7,"phoenix.geometry.TextGeometry.set_outline_color","phoenix/geometry/TextGeometry.hx",684,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(686)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(686)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(686)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(686)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(686)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(686)
	if ((tmp3)){
		HX_STACK_LINE(686)
		tmp4 = this->sdf;
	}
	else{
		HX_STACK_LINE(686)
		tmp4 = false;
	}
	HX_STACK_LINE(686)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(686)
	if ((tmp4)){
		HX_STACK_LINE(686)
		tmp5 = this->unique;
	}
	else{
		HX_STACK_LINE(686)
		tmp5 = false;
	}
	HX_STACK_LINE(686)
	if ((tmp5)){
		HX_STACK_LINE(687)
		::phoenix::geometry::GeometryState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(687)
		::phoenix::Shader _this = tmp6->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(687)
		{
			HX_STACK_LINE(687)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(687)
			int tmp7 = _this->program->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(687)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp7,HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(687)
			Dynamic _location = tmp8;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(687)
			::phoenix::Uniform tmp9 = _this1->colors->get(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(687)
			::phoenix::Uniform _color = tmp9;		HX_STACK_VAR(_color,"_color");
			HX_STACK_LINE(687)
			bool tmp10 = (_color != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(687)
			if ((tmp10)){
				HX_STACK_LINE(687)
				_color->value = c;
			}
			else{
				HX_STACK_LINE(687)
				::phoenix::Uniform tmp11 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),c,_location);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(687)
				_color = tmp11;
				HX_STACK_LINE(687)
				::phoenix::Uniform tmp12 = _color;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(687)
				_this1->colors->set(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),tmp12);
			}
			HX_STACK_LINE(687)
			::phoenix::Uniform tmp11 = _color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(687)
			_this1->dirty_colors->push(tmp11);
		}
	}
	HX_STACK_LINE(690)
	::phoenix::Color tmp6 = this->outline_color = c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(690)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_outline_color,return )

::phoenix::Color TextGeometry_obj::set_glow_color( ::phoenix::Color c){
	HX_STACK_FRAME("phoenix.geometry.TextGeometry","set_glow_color",0x7a671820,"phoenix.geometry.TextGeometry.set_glow_color","phoenix/geometry/TextGeometry.hx",695,0x3cba14a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(697)
	::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(697)
	::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(697)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(697)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(697)
	if ((tmp3)){
		HX_STACK_LINE(697)
		tmp4 = this->sdf;
	}
	else{
		HX_STACK_LINE(697)
		tmp4 = false;
	}
	HX_STACK_LINE(697)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(697)
	if ((tmp4)){
		HX_STACK_LINE(697)
		tmp5 = this->unique;
	}
	else{
		HX_STACK_LINE(697)
		tmp5 = false;
	}
	HX_STACK_LINE(697)
	if ((tmp5)){
		HX_STACK_LINE(698)
		::phoenix::geometry::GeometryState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(698)
		::phoenix::Shader _this = tmp6->shader;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(698)
		{
			HX_STACK_LINE(698)
			::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(698)
			int tmp7 = _this->program->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(698)
			Dynamic tmp8 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp7,HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(698)
			Dynamic _location = tmp8;		HX_STACK_VAR(_location,"_location");
			HX_STACK_LINE(698)
			::phoenix::Uniform tmp9 = _this1->colors->get(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(698)
			::phoenix::Uniform _color = tmp9;		HX_STACK_VAR(_color,"_color");
			HX_STACK_LINE(698)
			bool tmp10 = (_color != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(698)
			if ((tmp10)){
				HX_STACK_LINE(698)
				_color->value = c;
			}
			else{
				HX_STACK_LINE(698)
				::phoenix::Uniform tmp11 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),c,_location);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(698)
				_color = tmp11;
				HX_STACK_LINE(698)
				::phoenix::Uniform tmp12 = _color;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(698)
				_this1->colors->set(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),tmp12);
			}
			HX_STACK_LINE(698)
			::phoenix::Uniform tmp11 = _color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(698)
			_this1->dirty_colors->push(tmp11);
		}
	}
	HX_STACK_LINE(701)
	::phoenix::Color tmp6 = this->glow_color = c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(701)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextGeometry_obj,set_glow_color,return )

Void TextGeometry_obj::flush_uniforms( ){
{
		HX_STACK_FRAME("phoenix.geometry.TextGeometry","flush_uniforms",0x77bca14c,"phoenix.geometry.TextGeometry.flush_uniforms","phoenix/geometry/TextGeometry.hx",709,0x3cba14a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(710)
		::phoenix::geometry::GeometryState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(710)
		::phoenix::Shader tmp1 = tmp->shader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(710)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(710)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(710)
		if ((tmp2)){
			HX_STACK_LINE(710)
			tmp3 = this->sdf;
		}
		else{
			HX_STACK_LINE(710)
			tmp3 = false;
		}
		HX_STACK_LINE(710)
		if ((tmp3)){
			HX_STACK_LINE(711)
			{
				HX_STACK_LINE(711)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(711)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(711)
				Float tmp5 = this->smoothness;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(711)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(711)
				{
					HX_STACK_LINE(711)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(711)
					int tmp6 = _this->program->id;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(711)
					Dynamic tmp7 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(711)
					Dynamic _location = tmp7;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(711)
					::phoenix::Uniform tmp8 = _this1->floats->get(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(711)
					::phoenix::Uniform _float = tmp8;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(711)
					bool tmp9 = (_float != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(711)
					if ((tmp9)){
						HX_STACK_LINE(711)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(711)
						::phoenix::Uniform tmp10 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),_value,_location);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(711)
						_float = tmp10;
						HX_STACK_LINE(711)
						::phoenix::Uniform tmp11 = _float;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(711)
						_this1->floats->set(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),tmp11);
					}
					HX_STACK_LINE(711)
					::phoenix::Uniform tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(711)
					_this1->dirty_floats->push(tmp10);
				}
			}
			HX_STACK_LINE(712)
			{
				HX_STACK_LINE(712)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(712)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(712)
				Float tmp5 = this->thickness;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(712)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(712)
				{
					HX_STACK_LINE(712)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(712)
					int tmp6 = _this->program->id;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(712)
					Dynamic tmp7 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(712)
					Dynamic _location = tmp7;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(712)
					::phoenix::Uniform tmp8 = _this1->floats->get(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(712)
					::phoenix::Uniform _float = tmp8;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(712)
					bool tmp9 = (_float != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(712)
					if ((tmp9)){
						HX_STACK_LINE(712)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(712)
						::phoenix::Uniform tmp10 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),_value,_location);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(712)
						_float = tmp10;
						HX_STACK_LINE(712)
						::phoenix::Uniform tmp11 = _float;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(712)
						_this1->floats->set(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),tmp11);
					}
					HX_STACK_LINE(712)
					::phoenix::Uniform tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(712)
					_this1->dirty_floats->push(tmp10);
				}
			}
			HX_STACK_LINE(713)
			{
				HX_STACK_LINE(713)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(713)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(713)
				Float tmp5 = this->outline;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(713)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(713)
				{
					HX_STACK_LINE(713)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(713)
					int tmp6 = _this->program->id;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(713)
					Dynamic tmp7 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(713)
					Dynamic _location = tmp7;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(713)
					::phoenix::Uniform tmp8 = _this1->floats->get(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(713)
					::phoenix::Uniform _float = tmp8;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(713)
					bool tmp9 = (_float != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(713)
					if ((tmp9)){
						HX_STACK_LINE(713)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(713)
						::phoenix::Uniform tmp10 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),_value,_location);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(713)
						_float = tmp10;
						HX_STACK_LINE(713)
						::phoenix::Uniform tmp11 = _float;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(713)
						_this1->floats->set(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),tmp11);
					}
					HX_STACK_LINE(713)
					::phoenix::Uniform tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(713)
					_this1->dirty_floats->push(tmp10);
				}
			}
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(714)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(714)
				Float tmp5 = this->glow_threshold;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(714)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(714)
					int tmp6 = _this->program->id;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(714)
					Dynamic tmp7 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(714)
					Dynamic _location = tmp7;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(714)
					::phoenix::Uniform tmp8 = _this1->floats->get(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(714)
					::phoenix::Uniform _float = tmp8;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(714)
					bool tmp9 = (_float != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(714)
					if ((tmp9)){
						HX_STACK_LINE(714)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(714)
						::phoenix::Uniform tmp10 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),_value,_location);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(714)
						_float = tmp10;
						HX_STACK_LINE(714)
						::phoenix::Uniform tmp11 = _float;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(714)
						_this1->floats->set(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),tmp11);
					}
					HX_STACK_LINE(714)
					::phoenix::Uniform tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(714)
					_this1->dirty_floats->push(tmp10);
				}
			}
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(715)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(715)
				Float tmp5 = this->glow_amount;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(715)
				Float _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(715)
					int tmp6 = _this->program->id;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(715)
					Dynamic tmp7 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(715)
					Dynamic _location = tmp7;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(715)
					::phoenix::Uniform tmp8 = _this1->floats->get(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(715)
					::phoenix::Uniform _float = tmp8;		HX_STACK_VAR(_float,"_float");
					HX_STACK_LINE(715)
					bool tmp9 = (_float != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(715)
					if ((tmp9)){
						HX_STACK_LINE(715)
						_float->value = _value;
					}
					else{
						HX_STACK_LINE(715)
						::phoenix::Uniform tmp10 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),_value,_location);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(715)
						_float = tmp10;
						HX_STACK_LINE(715)
						::phoenix::Uniform tmp11 = _float;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(715)
						_this1->floats->set(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),tmp11);
					}
					HX_STACK_LINE(715)
					::phoenix::Uniform tmp10 = _float;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(715)
					_this1->dirty_floats->push(tmp10);
				}
			}
			HX_STACK_LINE(716)
			{
				HX_STACK_LINE(716)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(716)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(716)
				::phoenix::Color tmp5 = this->outline_color;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(716)
				::phoenix::Color _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(716)
				{
					HX_STACK_LINE(716)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(716)
					int tmp6 = _this->program->id;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(716)
					Dynamic tmp7 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(716)
					Dynamic _location = tmp7;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(716)
					::phoenix::Uniform tmp8 = _this1->colors->get(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(716)
					::phoenix::Uniform _color = tmp8;		HX_STACK_VAR(_color,"_color");
					HX_STACK_LINE(716)
					bool tmp9 = (_color != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(716)
					if ((tmp9)){
						HX_STACK_LINE(716)
						_color->value = _value;
					}
					else{
						HX_STACK_LINE(716)
						::phoenix::Uniform tmp10 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),_value,_location);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(716)
						_color = tmp10;
						HX_STACK_LINE(716)
						::phoenix::Uniform tmp11 = _color;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(716)
						_this1->colors->set(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),tmp11);
					}
					HX_STACK_LINE(716)
					::phoenix::Uniform tmp10 = _color;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(716)
					_this1->dirty_colors->push(tmp10);
				}
			}
			HX_STACK_LINE(717)
			{
				HX_STACK_LINE(717)
				::phoenix::geometry::GeometryState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(717)
				::phoenix::Shader _this = tmp4->shader;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(717)
				::phoenix::Color tmp5 = this->glow_color;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(717)
				::phoenix::Color _value = tmp5;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(717)
				{
					HX_STACK_LINE(717)
					::phoenix::Uniforms _this1 = _this->uniforms;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(717)
					int tmp6 = _this->program->id;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(717)
					Dynamic tmp7 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp6,HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(717)
					Dynamic _location = tmp7;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(717)
					::phoenix::Uniform tmp8 = _this1->colors->get(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(717)
					::phoenix::Uniform _color = tmp8;		HX_STACK_VAR(_color,"_color");
					HX_STACK_LINE(717)
					bool tmp9 = (_color != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(717)
					if ((tmp9)){
						HX_STACK_LINE(717)
						_color->value = _value;
					}
					else{
						HX_STACK_LINE(717)
						::phoenix::Uniform tmp10 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),_value,_location);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(717)
						_color = tmp10;
						HX_STACK_LINE(717)
						::phoenix::Uniform tmp11 = _color;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(717)
						_this1->colors->set(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),tmp11);
					}
					HX_STACK_LINE(717)
					::phoenix::Uniform tmp10 = _color;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(717)
					_this1->dirty_colors->push(tmp10);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextGeometry_obj,flush_uniforms,(void))

::EReg TextGeometry_obj::tab_regex;


TextGeometry_obj::TextGeometry_obj()
{
}

void TextGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextGeometry);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(point_size,"point_size");
	HX_MARK_MEMBER_NAME(line_spacing,"line_spacing");
	HX_MARK_MEMBER_NAME(letter_spacing,"letter_spacing");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(bounds_wrap,"bounds_wrap");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(align_vertical,"align_vertical");
	HX_MARK_MEMBER_NAME(sdf,"sdf");
	HX_MARK_MEMBER_NAME(unique,"unique");
	HX_MARK_MEMBER_NAME(smoothness,"smoothness");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(outline_color,"outline_color");
	HX_MARK_MEMBER_NAME(glow_threshold,"glow_threshold");
	HX_MARK_MEMBER_NAME(glow_amount,"glow_amount");
	HX_MARK_MEMBER_NAME(glow_color,"glow_color");
	HX_MARK_MEMBER_NAME(line_widths,"line_widths");
	HX_MARK_MEMBER_NAME(text_width,"text_width");
	HX_MARK_MEMBER_NAME(text_height,"text_height");
	HX_MARK_MEMBER_NAME(line_offsets,"line_offsets");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(text_h_w,"text_h_w");
	HX_MARK_MEMBER_NAME(text_h_h,"text_h_h");
	HX_MARK_MEMBER_NAME(point_ratio,"point_ratio");
	HX_MARK_MEMBER_NAME(dirty_sizing,"dirty_sizing");
	HX_MARK_MEMBER_NAME(dirty_align,"dirty_align");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(point_size,"point_size");
	HX_VISIT_MEMBER_NAME(line_spacing,"line_spacing");
	HX_VISIT_MEMBER_NAME(letter_spacing,"letter_spacing");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(bounds_wrap,"bounds_wrap");
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(align_vertical,"align_vertical");
	HX_VISIT_MEMBER_NAME(sdf,"sdf");
	HX_VISIT_MEMBER_NAME(unique,"unique");
	HX_VISIT_MEMBER_NAME(smoothness,"smoothness");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(outline_color,"outline_color");
	HX_VISIT_MEMBER_NAME(glow_threshold,"glow_threshold");
	HX_VISIT_MEMBER_NAME(glow_amount,"glow_amount");
	HX_VISIT_MEMBER_NAME(glow_color,"glow_color");
	HX_VISIT_MEMBER_NAME(line_widths,"line_widths");
	HX_VISIT_MEMBER_NAME(text_width,"text_width");
	HX_VISIT_MEMBER_NAME(text_height,"text_height");
	HX_VISIT_MEMBER_NAME(line_offsets,"line_offsets");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(text_h_w,"text_h_w");
	HX_VISIT_MEMBER_NAME(text_h_h,"text_h_h");
	HX_VISIT_MEMBER_NAME(point_ratio,"point_ratio");
	HX_VISIT_MEMBER_NAME(dirty_sizing,"dirty_sizing");
	HX_VISIT_MEMBER_NAME(dirty_align,"dirty_align");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { return sdf; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"tidy") ) { return tidy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"unique") ) { return unique; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return outline; }
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"text_h_w") ) { return text_h_w; }
		if (HX_FIELD_EQ(inName,"text_h_h") ) { return text_h_h; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { return point_size; }
		if (HX_FIELD_EQ(inName,"smoothness") ) { return smoothness; }
		if (HX_FIELD_EQ(inName,"glow_color") ) { return glow_color; }
		if (HX_FIELD_EQ(inName,"text_width") ) { return text_width; }
		if (HX_FIELD_EQ(inName,"set_bounds") ) { return set_bounds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { return bounds_wrap; }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { return glow_amount; }
		if (HX_FIELD_EQ(inName,"line_widths") ) { return line_widths; }
		if (HX_FIELD_EQ(inName,"text_height") ) { return text_height; }
		if (HX_FIELD_EQ(inName,"point_ratio") ) { return point_ratio; }
		if (HX_FIELD_EQ(inName,"dirty_align") ) { return dirty_align; }
		if (HX_FIELD_EQ(inName,"update_text") ) { return update_text_dyn(); }
		if (HX_FIELD_EQ(inName,"update_char") ) { return update_char_dyn(); }
		if (HX_FIELD_EQ(inName,"set_outline") ) { return set_outline_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { return line_spacing; }
		if (HX_FIELD_EQ(inName,"line_offsets") ) { return line_offsets; }
		if (HX_FIELD_EQ(inName,"dirty_sizing") ) { return dirty_sizing; }
		if (HX_FIELD_EQ(inName,"update_sizes") ) { return update_sizes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"outline_color") ) { return outline_color; }
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return set_thickness_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { return letter_spacing; }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { return align_vertical; }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { return glow_threshold; }
		if (HX_FIELD_EQ(inName,"set_point_size") ) { return set_point_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smoothness") ) { return set_smoothness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_color") ) { return set_glow_color_dyn(); }
		if (HX_FIELD_EQ(inName,"flush_uniforms") ) { return flush_uniforms_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"default_options") ) { return default_options_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bounds_wrap") ) { return set_bounds_wrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_amount") ) { return set_glow_amount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_dirty_sizing") ) { return set_dirty_sizing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_line_spacing") ) { return set_line_spacing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_outline_color") ) { return set_outline_color_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_letter_spacing") ) { return set_letter_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align_vertical") ) { return set_align_vertical_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_threshold") ) { return set_glow_threshold_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextGeometry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"tab_regex") ) { outValue = tab_regex; return true;  }
	}
	return false;
}

Dynamic TextGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { sdf=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp == hx::paccAlways) return set_align(inValue);align=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == hx::paccAlways) return set_bounds(inValue);bounds=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unique") ) { unique=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { if (inCallProp == hx::paccAlways) return set_outline(inValue);outline=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"text_h_w") ) { text_h_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_h_h") ) { text_h_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == hx::paccAlways) return set_thickness(inValue);thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { if (inCallProp == hx::paccAlways) return set_point_size(inValue);point_size=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothness") ) { if (inCallProp == hx::paccAlways) return set_smoothness(inValue);smoothness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glow_color") ) { if (inCallProp == hx::paccAlways) return set_glow_color(inValue);glow_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_width") ) { text_width=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { if (inCallProp == hx::paccAlways) return set_bounds_wrap(inValue);bounds_wrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { if (inCallProp == hx::paccAlways) return set_glow_amount(inValue);glow_amount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"line_widths") ) { line_widths=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text_height") ) { text_height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point_ratio") ) { point_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_align") ) { dirty_align=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { if (inCallProp == hx::paccAlways) return set_line_spacing(inValue);line_spacing=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"line_offsets") ) { line_offsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty_sizing") ) { if (inCallProp == hx::paccAlways) return set_dirty_sizing(inValue);dirty_sizing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"outline_color") ) { if (inCallProp == hx::paccAlways) return set_outline_color(inValue);outline_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { if (inCallProp == hx::paccAlways) return set_letter_spacing(inValue);letter_spacing=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { if (inCallProp == hx::paccAlways) return set_align_vertical(inValue);align_vertical=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { if (inCallProp == hx::paccAlways) return set_glow_threshold(inValue);glow_threshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextGeometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"tab_regex") ) { tab_regex=ioValue.Cast< ::EReg >(); return true; }
	}
	return false;
}

void TextGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"));
	outFields->push(HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"));
	outFields->push(HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"));
	outFields->push(HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"));
	outFields->push(HX_HCSTRING("unique","\x11","\x93","\x92","\x63"));
	outFields->push(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));
	outFields->push(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));
	outFields->push(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));
	outFields->push(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));
	outFields->push(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));
	outFields->push(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));
	outFields->push(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));
	outFields->push(HX_HCSTRING("line_widths","\xd8","\x2f","\x76","\x2b"));
	outFields->push(HX_HCSTRING("text_width","\xb4","\x09","\xa6","\xc8"));
	outFields->push(HX_HCSTRING("text_height","\x79","\xec","\xf1","\x7e"));
	outFields->push(HX_HCSTRING("line_offsets","\xf5","\x8e","\x57","\x82"));
	outFields->push(HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("text_h_w","\xce","\xa9","\x3c","\x57"));
	outFields->push(HX_HCSTRING("text_h_h","\xbf","\xa9","\x3c","\x57"));
	outFields->push(HX_HCSTRING("point_ratio","\x9c","\x4c","\x0f","\x92"));
	outFields->push(HX_HCSTRING("dirty_sizing","\x0b","\x44","\xee","\xf8"));
	outFields->push(HX_HCSTRING("dirty_align","\x98","\x47","\xe7","\xd4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextGeometry_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(TextGeometry_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,point_size),HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,line_spacing),HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,letter_spacing),HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(TextGeometry_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,bounds_wrap),HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec")},
	{hx::fsInt,(int)offsetof(TextGeometry_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsInt,(int)offsetof(TextGeometry_obj,align_vertical),HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,sdf),HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,unique),HX_HCSTRING("unique","\x11","\x93","\x92","\x63")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,smoothness),HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,thickness),HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,outline),HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(TextGeometry_obj,outline_color),HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,glow_threshold),HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,glow_amount),HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(TextGeometry_obj,glow_color),HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextGeometry_obj,line_widths),HX_HCSTRING("line_widths","\xd8","\x2f","\x76","\x2b")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_width),HX_HCSTRING("text_width","\xb4","\x09","\xa6","\xc8")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_height),HX_HCSTRING("text_height","\x79","\xec","\xf1","\x7e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextGeometry_obj,line_offsets),HX_HCSTRING("line_offsets","\xf5","\x8e","\x57","\x82")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TextGeometry_obj,lines),HX_HCSTRING("lines","\xff","\xdd","\x01","\x75")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(TextGeometry_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextGeometry_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextGeometry_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_h_w),HX_HCSTRING("text_h_w","\xce","\xa9","\x3c","\x57")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,text_h_h),HX_HCSTRING("text_h_h","\xbf","\xa9","\x3c","\x57")},
	{hx::fsFloat,(int)offsetof(TextGeometry_obj,point_ratio),HX_HCSTRING("point_ratio","\x9c","\x4c","\x0f","\x92")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,dirty_sizing),HX_HCSTRING("dirty_sizing","\x0b","\x44","\xee","\xf8")},
	{hx::fsBool,(int)offsetof(TextGeometry_obj,dirty_align),HX_HCSTRING("dirty_align","\x98","\x47","\xe7","\xd4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &TextGeometry_obj::tab_regex,HX_HCSTRING("tab_regex","\x1d","\xbe","\x5e","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"),
	HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"),
	HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"),
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"),
	HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"),
	HX_HCSTRING("unique","\x11","\x93","\x92","\x63"),
	HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"),
	HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),
	HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),
	HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"),
	HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"),
	HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"),
	HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"),
	HX_HCSTRING("line_widths","\xd8","\x2f","\x76","\x2b"),
	HX_HCSTRING("text_width","\xb4","\x09","\xa6","\xc8"),
	HX_HCSTRING("text_height","\x79","\xec","\xf1","\x7e"),
	HX_HCSTRING("line_offsets","\xf5","\x8e","\x57","\x82"),
	HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("text_h_w","\xce","\xa9","\x3c","\x57"),
	HX_HCSTRING("text_h_h","\xbf","\xa9","\x3c","\x57"),
	HX_HCSTRING("point_ratio","\x9c","\x4c","\x0f","\x92"),
	HX_HCSTRING("dirty_sizing","\x0b","\x44","\xee","\xf8"),
	HX_HCSTRING("dirty_align","\x98","\x47","\xe7","\xd4"),
	HX_HCSTRING("tidy","\x4a","\xc4","\xfc","\x4c"),
	HX_HCSTRING("default_options","\xa0","\x8e","\x12","\x69"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("update_sizes","\x9c","\x82","\xef","\x43"),
	HX_HCSTRING("update_text","\xe3","\xe1","\x75","\x52"),
	HX_HCSTRING("update_char","\x0c","\x74","\x3b","\x47"),
	HX_HCSTRING("set_dirty_sizing","\x08","\x1e","\xcf","\x53"),
	HX_HCSTRING("set_bounds","\xb2","\x94","\x22","\x5a"),
	HX_HCSTRING("set_bounds_wrap","\xb7","\x7b","\x9b","\xa9"),
	HX_HCSTRING("set_line_spacing","\xf5","\x92","\x8e","\x97"),
	HX_HCSTRING("set_letter_spacing","\x27","\xa3","\x35","\xe6"),
	HX_HCSTRING("set_align","\x28","\x9f","\x8b","\x48"),
	HX_HCSTRING("set_align_vertical","\xad","\xef","\xd6","\xcb"),
	HX_HCSTRING("set_point_size","\x0d","\xd7","\x0a","\xe2"),
	HX_HCSTRING("set_smoothness","\x82","\xa8","\x15","\x29"),
	HX_HCSTRING("set_thickness","\x57","\xa7","\xd0","\x60"),
	HX_HCSTRING("set_outline","\xa5","\x7e","\x25","\x72"),
	HX_HCSTRING("set_glow_threshold","\x76","\x33","\xe5","\x32"),
	HX_HCSTRING("set_glow_amount","\x2d","\xa5","\x2e","\x06"),
	HX_HCSTRING("set_outline_color","\x09","\x41","\xf1","\xbf"),
	HX_HCSTRING("set_glow_color","\xae","\x5f","\x81","\x59"),
	HX_HCSTRING("flush_uniforms","\xda","\xe8","\xd6","\x56"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextGeometry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextGeometry_obj::tab_regex,"tab_regex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextGeometry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextGeometry_obj::tab_regex,"tab_regex");
};

#endif

hx::Class TextGeometry_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tab_regex","\x1d","\xbe","\x5e","\x0f"),
	::String(null()) };

void TextGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.TextGeometry","\xbc","\x0f","\x18","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextGeometry_obj::__GetStatic;
	__mClass->mSetStaticField = &TextGeometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextGeometry_obj >;
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

void TextGeometry_obj::__boot()
{
	tab_regex= ::EReg_obj::__new(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"),HX_HCSTRING("gim","\x0b","\x84","\x4e","\x00"));
}

} // end namespace phoenix
} // end namespace geometry
