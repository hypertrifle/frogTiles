#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_RenderPath
#include <phoenix/RenderPath.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_RenderTexture
#include <phoenix/RenderTexture.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLFBO
#include <snow/modules/opengl/native/GLFBO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLRBO
#include <snow/modules/opengl/native/GLRBO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetImage
#include <snow/system/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_system_window_Windowing
#include <snow/system/window/Windowing.h>
#endif
namespace phoenix{

Void Renderer_obj::__construct(::luxe::Core _core,::snow::_system::assets::AssetImage _asset)
{
HX_STACK_FRAME("phoenix.Renderer","new",0x1fe39014,"phoenix.Renderer.new","phoenix/Renderer.hx",40,0x3d4c7b7b)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
HX_STACK_ARG(_asset,"_asset")
{
	HX_STACK_LINE(69)
	this->stop_count = (int)0;
	HX_STACK_LINE(68)
	this->stop = false;
	HX_STACK_LINE(67)
	this->should_clear = true;
	HX_STACK_LINE(76)
	this->core = _core;
	HX_STACK_LINE(77)
	this->font_asset = _asset;
	HX_STACK_LINE(82)
	::snow::modules::opengl::native::GLFBO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		Dynamic tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_parameter((int)36006);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Dynamic _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(82)
		Dynamic tmp2 = _id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		int _id1 = tmp3;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(82)
		::snow::modules::opengl::native::GLFBO tmp4 = ::snow::modules::opengl::native::GLFBO_obj::__new(_id1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		tmp = tmp4;
	}
	HX_STACK_LINE(82)
	this->default_fbo = tmp;
	HX_STACK_LINE(83)
	::snow::modules::opengl::native::GLRBO tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_parameter((int)36007);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		Dynamic _id = tmp2;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(83)
		Dynamic tmp3 = _id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		int _id1 = tmp4;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(83)
		::snow::modules::opengl::native::GLRBO tmp5 = ::snow::modules::opengl::native::GLRBO_obj::__new(_id1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		tmp1 = tmp5;
	}
	HX_STACK_LINE(83)
	this->default_rbo = tmp1;
	HX_STACK_LINE(138)
	Dynamic();
}
;
	return null();
}

//Renderer_obj::~Renderer_obj() { }

Dynamic Renderer_obj::__CreateEmpty() { return  new Renderer_obj; }
hx::ObjectPtr< Renderer_obj > Renderer_obj::__new(::luxe::Core _core,::snow::_system::assets::AssetImage _asset)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(_core,_asset);
	return _result_;}

Dynamic Renderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Renderer_obj > _result_ = new Renderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Renderer_obj::init( ){
{
		HX_STACK_FRAME("phoenix.Renderer","init",0xc3f338dc,"phoenix.Renderer.init","phoenix/Renderer.hx",90,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		::phoenix::RenderState tmp = ::phoenix::RenderState_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		this->state = tmp;
		HX_STACK_LINE(93)
		::phoenix::Color tmp1 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		::phoenix::Color tmp2 = tmp1->rgb((int)1710618);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		this->clear_color = tmp2;
		HX_STACK_LINE(94)
		::phoenix::RendererStats tmp3 = ::phoenix::RendererStats_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		this->stats = tmp3;
		HX_STACK_LINE(95)
		this->batchers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(98)
		::luxe::Core tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		int tmp5 = tmp4->screen->get_w();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		::luxe::Core tmp6 = ::Luxe_obj::core;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		int tmp7 = tmp6->screen->get_h();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp5,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		this->target_size = tmp8;
		HX_STACK_LINE(99)
		::phoenix::Camera tmp9 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		this->camera = tmp9;
		HX_STACK_LINE(101)
		::phoenix::RenderPath tmp10 = ::phoenix::RenderPath_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		this->default_render_path = tmp10;
		HX_STACK_LINE(103)
		::phoenix::RenderPath tmp11 = this->default_render_path;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(103)
		this->render_path = tmp11;
		HX_STACK_LINE(106)
		this->create_default_shaders();
		HX_STACK_LINE(109)
		::phoenix::Batcher tmp12 = ::phoenix::Batcher_obj::__new(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("default batcher","\x48","\x68","\xba","\x35"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(109)
		this->batcher = tmp12;
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::phoenix::Batcher tmp13 = this->batcher;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(110)
			::phoenix::Batcher _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(110)
			_this->layer = (int)1;
			HX_STACK_LINE(110)
			Dynamic tmp14 = _this->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(110)
			_this->renderer->batchers->sort(tmp14);
			HX_STACK_LINE(110)
			_this->layer;
		}
		HX_STACK_LINE(111)
		::phoenix::Batcher tmp13 = this->batcher;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(111)
		this->add_batch(tmp13);
		HX_STACK_LINE(115)
		this->create_default_font();
		HX_STACK_LINE(119)
		::luxe::Core tmp14 = ::Luxe_obj::core;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(119)
		Dynamic tmp15 = tmp14->app->config;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(119)
		Dynamic tmp16 = tmp15->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(119)
		if ((tmp16)){
			HX_STACK_LINE(121)
			::phoenix::RenderState tmp17 = this->state;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			tmp17->enable((int)2929);
			HX_STACK_LINE(123)
			::phoenix::RenderState tmp18 = this->state;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(123)
			tmp18->depth_function((int)515);
			HX_STACK_LINE(125)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear_depth(((Float)1.0));
		}
		HX_STACK_LINE(129)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable((int)3042);
		HX_STACK_LINE(130)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_blend_func((int)770,(int)771);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,init,(void))

Void Renderer_obj::destroy( ){
{
		HX_STACK_FRAME("phoenix.Renderer","destroy",0xe481d6ae,"phoenix.Renderer.destroy","phoenix/Renderer.hx",139,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		::phoenix::Color tmp1 = tmp->rgb((int)16729099);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		this->clear(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,destroy,(void))

int Renderer_obj::sort_batchers( ::phoenix::Batcher a,::phoenix::Batcher b){
	HX_STACK_FRAME("phoenix.Renderer","sort_batchers",0x489f0ce1,"phoenix.Renderer.sort_batchers","phoenix/Renderer.hx",146,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(147)
	bool tmp = (a->layer < b->layer);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	if ((tmp)){
		HX_STACK_LINE(147)
		return (int)-1;
	}
	HX_STACK_LINE(148)
	bool tmp1 = (a->layer > b->layer);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	if ((tmp1)){
		HX_STACK_LINE(148)
		return (int)1;
	}
	HX_STACK_LINE(149)
	bool tmp2 = (a->sequence < b->sequence);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	if ((tmp2)){
		HX_STACK_LINE(149)
		return (int)-1;
	}
	HX_STACK_LINE(150)
	bool tmp3 = (a->sequence > b->sequence);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	if ((tmp3)){
		HX_STACK_LINE(150)
		return (int)1;
	}
	HX_STACK_LINE(151)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,sort_batchers,return )

Void Renderer_obj::add_batch( ::phoenix::Batcher batch){
{
		HX_STACK_FRAME("phoenix.Renderer","add_batch",0xa2b26e90,"phoenix.Renderer.add_batch","phoenix/Renderer.hx",154,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batch,"batch")
		HX_STACK_LINE(156)
		::phoenix::Batcher tmp = batch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		this->batchers->push(tmp);
		HX_STACK_LINE(157)
		Dynamic tmp1 = this->sort_batchers_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		this->batchers->sort(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,add_batch,(void))

Void Renderer_obj::remove_batch( ::phoenix::Batcher batch){
{
		HX_STACK_FRAME("phoenix.Renderer","remove_batch",0x9e98000b,"phoenix.Renderer.remove_batch","phoenix/Renderer.hx",161,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(batch,"batch")
		HX_STACK_LINE(163)
		::phoenix::Batcher tmp = batch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		this->batchers->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,remove_batch,(void))

::phoenix::Batcher Renderer_obj::create_batcher( Dynamic options){
	HX_STACK_FRAME("phoenix.Renderer","create_batcher",0xfc84f3f0,"phoenix.Renderer.create_batcher","phoenix/Renderer.hx",168,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(171)
	int _new_batcher_layer = (int)2;		HX_STACK_VAR(_new_batcher_layer,"_new_batcher_layer");
	HX_STACK_LINE(173)
	bool tmp = (options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	if ((tmp)){
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			bool tmp1 = (options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(175)
			if ((tmp1)){
				HX_STACK_LINE(175)
				options->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0");
			}
			HX_STACK_LINE(175)
			options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
		}
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			bool tmp1 = (options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			if ((tmp1)){
				HX_STACK_LINE(176)
				options->__FieldRef(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")) = _new_batcher_layer;
			}
			HX_STACK_LINE(176)
			options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic );
		}
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			bool tmp1 = (options->__Field(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(177)
			if ((tmp1)){
				HX_STACK_LINE(177)
				::phoenix::Camera tmp2 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(177)
				options->__FieldRef(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")) = tmp2;
			}
			HX_STACK_LINE(177)
			options->__Field(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"), hx::paccDynamic );
		}
	}
	else{
		HX_STACK_LINE(182)
		::phoenix::Camera tmp1 = ::phoenix::Camera_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		int tmp2 = _new_batcher_layer;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp2,::phoenix::Camera &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",180,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),false);
					__result->Add(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7") , tmp1,false);
					__result->Add(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(180)
		Dynamic tmp3 = _Function_2_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		options = tmp3;
	}
	HX_STACK_LINE(187)
	::phoenix::Batcher tmp1 = ::phoenix::Batcher_obj::__new(hx::ObjectPtr<OBJ_>(this),options->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	::phoenix::Batcher _batcher = tmp1;		HX_STACK_VAR(_batcher,"_batcher");
	HX_STACK_LINE(188)
	_batcher->view = options->__Field(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"), hx::paccDynamic );
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		int _layer = options->__Field(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"), hx::paccDynamic );		HX_STACK_VAR(_layer,"_layer");
		HX_STACK_LINE(189)
		_batcher->layer = _layer;
		HX_STACK_LINE(189)
		Dynamic tmp2 = _batcher->renderer->sort_batchers_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		_batcher->renderer->batchers->sort(tmp2);
		HX_STACK_LINE(189)
		_batcher->layer;
	}
	HX_STACK_LINE(191)
	bool tmp2 = (options->__Field(HX_HCSTRING("no_add","\xe3","\x4b","\xd1","\x23"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	if ((tmp3)){
		HX_STACK_LINE(191)
		tmp4 = (options->__Field(HX_HCSTRING("no_add","\xe3","\x4b","\xd1","\x23"), hx::paccDynamic ) == false);
	}
	else{
		HX_STACK_LINE(191)
		tmp4 = true;
	}
	HX_STACK_LINE(191)
	if ((tmp4)){
		HX_STACK_LINE(192)
		::phoenix::Batcher tmp5 = _batcher;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		this->add_batch(tmp5);
	}
	HX_STACK_LINE(195)
	::phoenix::Batcher tmp5 = _batcher;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(195)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,create_batcher,return )

Void Renderer_obj::clear( ::phoenix::Color _color){
{
		HX_STACK_FRAME("phoenix.Renderer","clear",0x3b218641,"phoenix.Renderer.clear","phoenix/Renderer.hx",200,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_color,"_color")
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			bool tmp = (_color == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(202)
			if ((tmp)){
				HX_STACK_LINE(202)
				::phoenix::Color tmp1 = this->clear_color;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(202)
				_color = tmp1;
			}
			HX_STACK_LINE(202)
			_color;
		}
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			Float tmp = _color->r;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(204)
			Float tmp1 = _color->g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(204)
			Float tmp2 = _color->b;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(204)
			Float tmp3 = _color->a;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear_color(tmp,tmp1,tmp2,tmp3);
		}
		HX_STACK_LINE(206)
		::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		Dynamic tmp1 = tmp->app->config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		if ((tmp2)){
			HX_STACK_LINE(207)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear((int)16640);
			HX_STACK_LINE(208)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear_depth(((Float)1.0));
		}
		else{
			HX_STACK_LINE(210)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear((int)16384);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,clear,(void))

Void Renderer_obj::blend_mode( Dynamic __o__src_mode,hx::Null< int >  __o__dst_mode){
Dynamic _src_mode = __o__src_mode.Default(770);
int _dst_mode = __o__dst_mode.Default(771);
	HX_STACK_FRAME("phoenix.Renderer","blend_mode",0x5b8aa01d,"phoenix.Renderer.blend_mode","phoenix/Renderer.hx",217,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_src_mode,"_src_mode")
	HX_STACK_ARG(_dst_mode,"_dst_mode")
{
		HX_STACK_LINE(217)
		int sfactor = _src_mode;		HX_STACK_VAR(sfactor,"sfactor");
		HX_STACK_LINE(217)
		int tmp = sfactor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		int tmp1 = _dst_mode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_blend_func(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,blend_mode,(void))

Void Renderer_obj::blend_equation( Dynamic __o__equation){
Dynamic _equation = __o__equation.Default(32774);
	HX_STACK_FRAME("phoenix.Renderer","blend_equation",0x0d046d46,"phoenix.Renderer.blend_equation","phoenix/Renderer.hx",223,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_equation,"_equation")
{
		HX_STACK_LINE(223)
		int mode = _equation;		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(223)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_blend_equation(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,blend_equation,(void))

Void Renderer_obj::internal_resized( int _w,int _h){
{
		HX_STACK_FRAME("phoenix.Renderer","internal_resized",0xd68aa17a,"phoenix.Renderer.internal_resized","phoenix/Renderer.hx",229,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(231)
		::phoenix::RenderTexture tmp = this->get_target();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(232)
			::phoenix::Vector tmp2 = this->target_size;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(232)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(232)
			_this->ignore_listeners = true;
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				_this->x = _w;
				HX_STACK_LINE(232)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				if ((tmp3)){
					HX_STACK_LINE(232)
					_this->x;
				}
				else{
					HX_STACK_LINE(232)
					bool tmp4 = (_this->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(232)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(232)
					if ((tmp4)){
						HX_STACK_LINE(232)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(232)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(232)
						tmp5 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp5)){
						HX_STACK_LINE(232)
						int tmp6 = _w;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						_this->listen_x(tmp6);
					}
					HX_STACK_LINE(232)
					_this->x;
				}
			}
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				_this->y = _h;
				HX_STACK_LINE(232)
				bool tmp3 = _this->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				if ((tmp3)){
					HX_STACK_LINE(232)
					_this->y;
				}
				else{
					HX_STACK_LINE(232)
					bool tmp4 = (_this->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(232)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(232)
					if ((tmp4)){
						HX_STACK_LINE(232)
						bool tmp6 = _this->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(232)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(232)
						tmp5 = false;
					}
					HX_STACK_LINE(232)
					if ((tmp5)){
						HX_STACK_LINE(232)
						int tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(232)
						_this->listen_y(tmp6);
					}
					HX_STACK_LINE(232)
					_this->y;
				}
			}
			HX_STACK_LINE(232)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(232)
			bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(232)
			if ((tmp3)){
				HX_STACK_LINE(232)
				bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(232)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(232)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(232)
				tmp4 = false;
			}
			HX_STACK_LINE(232)
			if ((tmp4)){
				HX_STACK_LINE(232)
				Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(232)
				_this->listen_x(tmp5);
			}
			HX_STACK_LINE(232)
			bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(232)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(232)
			if ((tmp5)){
				HX_STACK_LINE(232)
				bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(232)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(232)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(232)
				tmp6 = false;
			}
			HX_STACK_LINE(232)
			if ((tmp6)){
				HX_STACK_LINE(232)
				Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(232)
				_this->listen_y(tmp7);
			}
			HX_STACK_LINE(232)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,internal_resized,(void))

Void Renderer_obj::process( ){
{
		HX_STACK_FRAME("phoenix.Renderer","process",0xb1464c23,"phoenix.Renderer.process","phoenix/Renderer.hx",239,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		bool tmp = this->stop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		if ((tmp)){
			HX_STACK_LINE(241)
			return null();
		}
		HX_STACK_LINE(243)
		bool tmp1 = this->should_clear;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		if ((tmp1)){
			HX_STACK_LINE(244)
			::phoenix::Color tmp2 = this->clear_color;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			this->clear(tmp2);
		}
		HX_STACK_LINE(247)
		int tmp2 = this->batchers->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		::phoenix::RendererStats tmp3 = this->stats;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		tmp3->batchers = tmp2;
		HX_STACK_LINE(248)
		::phoenix::RendererStats tmp4 = this->stats;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		tmp4->reset();
		HX_STACK_LINE(251)
		::phoenix::RenderPath tmp5 = this->render_path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		::phoenix::RendererStats tmp6 = this->stats;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(251)
		tmp5->render(this->batchers,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,process,(void))

Void Renderer_obj::onresize( Dynamic e){
{
		HX_STACK_FRAME("phoenix.Renderer","onresize",0xefccb01f,"phoenix.Renderer.onresize","phoenix/Renderer.hx",260,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,onresize,(void))

bool Renderer_obj::set_vsync( bool _vsync){
	HX_STACK_FRAME("phoenix.Renderer","set_vsync",0xda22f4e8,"phoenix.Renderer.set_vsync","phoenix/Renderer.hx",264,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_vsync,"_vsync")
	HX_STACK_LINE(266)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	::snow::_system::window::Windowing tmp1 = tmp->app->windowing;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	bool tmp2 = _vsync;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	tmp1->__Field(HX_HCSTRING("enable_vsync","\xd5","\x67","\x89","\xaf"), hx::paccDynamic )(tmp2);
	HX_STACK_LINE(268)
	bool tmp3 = this->vsync = _vsync;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(268)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,set_vsync,return )

bool Renderer_obj::get_vsync( ){
	HX_STACK_FRAME("phoenix.Renderer","get_vsync",0xf6d208dc,"phoenix.Renderer.get_vsync","phoenix/Renderer.hx",272,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	bool tmp = this->vsync;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,get_vsync,return )

::phoenix::RenderTexture Renderer_obj::get_target( ){
	HX_STACK_FRAME("phoenix.Renderer","get_target",0xd262c1e6,"phoenix.Renderer.get_target","phoenix/Renderer.hx",278,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	::phoenix::RenderTexture tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,get_target,return )

::phoenix::RenderTexture Renderer_obj::set_target( ::phoenix::RenderTexture _target){
	HX_STACK_FRAME("phoenix.Renderer","set_target",0xd5e0605a,"phoenix.Renderer.set_target","phoenix/Renderer.hx",284,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_target,"_target")
	HX_STACK_LINE(286)
	bool tmp = (_target != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	if ((tmp)){
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			::phoenix::Vector tmp1 = this->target_size;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(288)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(288)
			Float _x = _target->width;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(288)
			_this->x = _x;
			HX_STACK_LINE(288)
			bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(288)
			if ((tmp2)){
				HX_STACK_LINE(288)
				_this->x;
			}
			else{
				HX_STACK_LINE(288)
				bool tmp3 = (_this->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(288)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(288)
				if ((tmp3)){
					HX_STACK_LINE(288)
					bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(288)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(288)
					tmp4 = !(tmp6);
				}
				else{
					HX_STACK_LINE(288)
					tmp4 = false;
				}
				HX_STACK_LINE(288)
				if ((tmp4)){
					HX_STACK_LINE(288)
					Float tmp5 = _x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(288)
					_this->listen_x(tmp5);
				}
				HX_STACK_LINE(288)
				_this->x;
			}
		}
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			::phoenix::Vector tmp1 = this->target_size;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(289)
			Float _y = _target->height;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(289)
			_this->y = _y;
			HX_STACK_LINE(289)
			bool tmp2 = _this->_construct;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			if ((tmp2)){
				HX_STACK_LINE(289)
				_this->y;
			}
			else{
				HX_STACK_LINE(289)
				bool tmp3 = (_this->listen_y != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(289)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(289)
				if ((tmp3)){
					HX_STACK_LINE(289)
					bool tmp5 = _this->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(289)
					bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(289)
					tmp4 = !(tmp6);
				}
				else{
					HX_STACK_LINE(289)
					tmp4 = false;
				}
				HX_STACK_LINE(289)
				if ((tmp4)){
					HX_STACK_LINE(289)
					Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(289)
					_this->listen_y(tmp5);
				}
				HX_STACK_LINE(289)
				_this->y;
			}
		}
		HX_STACK_LINE(291)
		::phoenix::RenderState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		::snow::modules::opengl::native::GLFBO tmp2 = _target->fbo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		tmp1->bindFramebuffer(tmp2);
	}
	else{
		HX_STACK_LINE(295)
		{
			HX_STACK_LINE(295)
			::phoenix::Vector tmp1 = this->target_size;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(295)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(295)
			::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(295)
			int tmp3 = tmp2->screen->get_w();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(295)
			Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(295)
			_this->x = _x;
			HX_STACK_LINE(295)
			bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(295)
			if ((tmp4)){
				HX_STACK_LINE(295)
				_this->x;
			}
			else{
				HX_STACK_LINE(295)
				bool tmp5 = (_this->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(295)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(295)
				if ((tmp5)){
					HX_STACK_LINE(295)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(295)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(295)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(295)
					tmp6 = false;
				}
				HX_STACK_LINE(295)
				if ((tmp6)){
					HX_STACK_LINE(295)
					Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(295)
					_this->listen_x(tmp7);
				}
				HX_STACK_LINE(295)
				_this->x;
			}
		}
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			::phoenix::Vector tmp1 = this->target_size;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(296)
			::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(296)
			::luxe::Core tmp2 = ::Luxe_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(296)
			int tmp3 = tmp2->screen->get_h();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(296)
			Float _y = tmp3;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(296)
			_this->y = _y;
			HX_STACK_LINE(296)
			bool tmp4 = _this->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			if ((tmp4)){
				HX_STACK_LINE(296)
				_this->y;
			}
			else{
				HX_STACK_LINE(296)
				bool tmp5 = (_this->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(296)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(296)
				if ((tmp5)){
					HX_STACK_LINE(296)
					bool tmp7 = _this->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(296)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(296)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(296)
					tmp6 = false;
				}
				HX_STACK_LINE(296)
				if ((tmp6)){
					HX_STACK_LINE(296)
					Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(296)
					_this->listen_y(tmp7);
				}
				HX_STACK_LINE(296)
				_this->y;
			}
		}
		HX_STACK_LINE(298)
		::phoenix::RenderState tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		tmp1->bindFramebuffer(null());
	}
	HX_STACK_LINE(302)
	::phoenix::RenderTexture tmp1 = this->target = _target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(302)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,set_target,return )

Void Renderer_obj::create_default_shaders( ){
{
		HX_STACK_FRAME("phoenix.Renderer","create_default_shaders",0xf69f9f39,"phoenix.Renderer.create_default_shaders","phoenix/Renderer.hx",306,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(310)
		::String tmp = ::haxe::Resource_obj::getString(HX_HCSTRING("default.vert.glsl","\xee","\x68","\x0a","\xe0"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		::String vert = tmp;		HX_STACK_VAR(vert,"vert");
		HX_STACK_LINE(311)
		::String tmp1 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.glsl","\xcd","\x10","\xf3","\xa2"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		::String frag = tmp1;		HX_STACK_VAR(frag,"frag");
		HX_STACK_LINE(312)
		::String tmp2 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.textured.glsl","\xb4","\xe4","\x4c","\xd4"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		::String frag_textured = tmp2;		HX_STACK_VAR(frag_textured,"frag_textured");
		HX_STACK_LINE(313)
		::String tmp3 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.frag.bitmapfont.glsl","\xbf","\xd4","\xfe","\x6d"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(313)
		::String frag_bitmapfont = tmp3;		HX_STACK_VAR(frag_bitmapfont,"frag_bitmapfont");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",326,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.shader","\xdd","\x5c","\xea","\x47"),false);
					__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(326)
		Dynamic tmp4 = _Function_1_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		::phoenix::Shader tmp5 = ::phoenix::Shader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(326)
		::phoenix::Shader _plain = tmp5;		HX_STACK_VAR(_plain,"_plain");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",327,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.shader_textured","\x0b","\x8e","\x98","\xdb"),false);
					__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"),false);
					__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(327)
		Dynamic tmp6 = _Function_1_2::Block();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(327)
		::phoenix::Shader tmp7 = ::phoenix::Shader_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(327)
		::phoenix::Shader _textured = tmp7;		HX_STACK_VAR(_textured,"_textured");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",328,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.shader_bitmapfont","\xa0","\x24","\xcb","\xf6"),false);
					__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a"),false);
					__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(328)
		Dynamic tmp8 = _Function_1_3::Block();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(328)
		::phoenix::Shader tmp9 = ::phoenix::Shader_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(328)
		::phoenix::Shader _font = tmp9;		HX_STACK_VAR(_font,"_font");
		HX_STACK_LINE(331)
		bool _ok = true;		HX_STACK_VAR(_ok,"_ok");
		HX_STACK_LINE(333)
		bool tmp10 = _ok;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(333)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(333)
		if ((tmp10)){
			HX_STACK_LINE(333)
			::String tmp12 = vert;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(333)
			::String tmp13 = frag;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(333)
			::String tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(333)
			::String tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(333)
			tmp11 = _plain->from_string(tmp14,tmp15);
		}
		else{
			HX_STACK_LINE(333)
			tmp11 = false;
		}
		HX_STACK_LINE(333)
		_ok = tmp11;
		HX_STACK_LINE(334)
		bool tmp12 = _ok;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(334)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(334)
		if ((tmp12)){
			HX_STACK_LINE(334)
			::String tmp14 = vert;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(334)
			::String tmp15 = frag_textured;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(334)
			::String tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(334)
			::String tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(334)
			tmp13 = _textured->from_string(tmp16,tmp17);
		}
		else{
			HX_STACK_LINE(334)
			tmp13 = false;
		}
		HX_STACK_LINE(334)
		_ok = tmp13;
		HX_STACK_LINE(335)
		bool tmp14 = _ok;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(335)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(335)
		if ((tmp14)){
			HX_STACK_LINE(335)
			::String tmp16 = vert;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(335)
			::String tmp17 = frag_bitmapfont;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(335)
			::String tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(335)
			::String tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(335)
			tmp15 = _font->from_string(tmp18,tmp19);
		}
		else{
			HX_STACK_LINE(335)
			tmp15 = false;
		}
		HX_STACK_LINE(335)
		_ok = tmp15;
		HX_STACK_LINE(337)
		{
			HX_STACK_LINE(337)
			bool tmp16 = _ok;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(337)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(337)
			if ((tmp17)){
				HX_STACK_LINE(214)
				::String tmp18 = HX_HCSTRING(" ( Default shaders failed to compile or link. See log for errors","\x3c","\x9a","\x24","\x4c");		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(214)
				::String tmp19 = (tmp18 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(337)
				::String tmp20 = (HX_HCSTRING("_ok","\x3b","\x77","\x48","\x00") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(337)
				::luxe::DebugError tmp21 = ::luxe::DebugError_obj::assertion(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(337)
				HX_STACK_DO_THROW(tmp21);
			}
		}
		HX_STACK_LINE(342)
		::phoenix::Shader tmp16 = _plain;		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_4{
			inline static Dynamic Block( ::String &frag,::String &vert){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",342,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e") , vert,false);
					__result->Add(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43") , frag,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(342)
		Dynamic tmp17 = _Function_1_4::Block(frag,vert);		HX_STACK_VAR(tmp17,"tmp17");
		struct _Function_1_5{
			inline static Dynamic Block( Dynamic &tmp17,::phoenix::Shader &tmp16){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",342,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp16,false);
					__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp17,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(342)
		Dynamic tmp18 = _Function_1_5::Block(tmp17,tmp16);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(343)
		::phoenix::Shader tmp19 = _textured;		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_6{
			inline static Dynamic Block( ::String &frag_textured,::String &vert){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",343,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e") , vert,false);
					__result->Add(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43") , frag_textured,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(343)
		Dynamic tmp20 = _Function_1_6::Block(frag_textured,vert);		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_7{
			inline static Dynamic Block( Dynamic &tmp20,::phoenix::Shader &tmp19){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",343,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp19,false);
					__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp20,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(343)
		Dynamic tmp21 = _Function_1_7::Block(tmp20,tmp19);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(344)
		::phoenix::Shader tmp22 = _font;		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_8{
			inline static Dynamic Block( ::String &vert,::String &frag_bitmapfont){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",344,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e") , vert,false);
					__result->Add(HX_HCSTRING("frag","\x32","\x99","\xc2","\x43") , frag_bitmapfont,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(344)
		Dynamic tmp23 = _Function_1_8::Block(vert,frag_bitmapfont);		HX_STACK_VAR(tmp23,"tmp23");
		struct _Function_1_9{
			inline static Dynamic Block( ::phoenix::Shader &tmp22,Dynamic &tmp23){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",344,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , tmp22,false);
					__result->Add(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32") , tmp23,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(344)
		Dynamic tmp24 = _Function_1_9::Block(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_10{
			inline static Dynamic Block( Dynamic &tmp21,Dynamic &tmp24,Dynamic &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",341,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4") , tmp18,false);
					__result->Add(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65") , tmp21,false);
					__result->Add(HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a") , tmp24,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(341)
		Dynamic tmp25 = _Function_1_10::Block(tmp21,tmp24,tmp18);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(341)
		this->shaders = tmp25;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create_default_shaders,(void))

Void Renderer_obj::create_default_font( ){
{
		HX_STACK_FRAME("phoenix.Renderer","create_default_font",0xfe822b64,"phoenix.Renderer.create_default_font","phoenix/Renderer.hx",351,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			::snow::_system::assets::AssetImage tmp = this->font_asset;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(353)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(353)
			if ((tmp1)){
				HX_STACK_LINE(230)
				::String tmp2 = HX_HCSTRING(" ( Renderer / failed to create the default font","\xc9","\x9d","\x8e","\x27");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(230)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(353)
				::String tmp4 = (HX_HCSTRING("font_asset was null","\xbe","\x7c","\x51","\xcf") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(353)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::null_assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(353)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(360)
		::snow::_system::assets::AssetImage tmp = this->font_asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(360)
		int tmp1 = tmp->__Field(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(361)
		::snow::_system::assets::AssetImage tmp2 = this->font_asset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(361)
		int tmp3 = tmp2->__Field(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(362)
		::snow::_system::assets::AssetImage tmp4 = this->font_asset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(362)
		::snow::api::buffers::ArrayBufferView tmp5 = tmp4->__Field(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_1{
			inline static Dynamic Block( ::snow::api::buffers::ArrayBufferView &tmp5,int &tmp3,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",358,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.font.png","\x42","\x9a","\x18","\x5d"),false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp1,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp3,false);
					__result->Add(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(358)
		Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp3,tmp1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(358)
		::phoenix::Texture tmp7 = ::phoenix::Texture_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(358)
		::phoenix::Texture _font_texture = tmp7;		HX_STACK_VAR(_font_texture,"_font_texture");
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			bool tmp8 = (_font_texture == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(365)
			if ((tmp8)){
				HX_STACK_LINE(230)
				::String tmp9 = HX_HCSTRING(" ( Renderer / failed to create the default font... font_texture was null.","\x56","\xeb","\x94","\x5f");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(230)
				::String tmp10 = (tmp9 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(365)
				::String tmp11 = (HX_HCSTRING("_font_texture was null","\xb4","\x4d","\x06","\x3c") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(365)
				::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(365)
				HX_STACK_DO_THROW(tmp12);
			}
		}
		HX_STACK_LINE(367)
		::String tmp8 = ::haxe::Resource_obj::getString(HX_HCSTRING("default.fnt","\xff","\x63","\x9b","\x05"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(367)
		::String _font_data = tmp8;		HX_STACK_VAR(_font_data,"_font_data");
		struct _Function_1_2{
			inline static Dynamic Block( ::String &_font_data,::phoenix::Texture &_font_texture){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Renderer.hx",369,0x3d4c7b7b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("luxe.font","\x87","\x9d","\x30","\xc2"),false);
					__result->Add(HX_HCSTRING("font_data","\xda","\xa5","\x22","\x0e") , _font_data,false);
					__result->Add(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd") , Array_obj< ::Dynamic >::__new().Add(_font_texture),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(369)
		Dynamic tmp9 = _Function_1_2::Block(_font_data,_font_texture);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(369)
		::phoenix::BitmapFont tmp10 = ::phoenix::BitmapFont_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(369)
		this->font = tmp10;
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create_default_font,(void))


Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(batchers,"batchers");
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(default_fbo,"default_fbo");
	HX_MARK_MEMBER_NAME(default_rbo,"default_rbo");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(font_asset,"font_asset");
	HX_MARK_MEMBER_NAME(render_path,"render_path");
	HX_MARK_MEMBER_NAME(default_render_path,"default_render_path");
	HX_MARK_MEMBER_NAME(vsync,"vsync");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(target_size,"target_size");
	HX_MARK_MEMBER_NAME(should_clear,"should_clear");
	HX_MARK_MEMBER_NAME(stop,"stop");
	HX_MARK_MEMBER_NAME(stop_count,"stop_count");
	HX_MARK_MEMBER_NAME(clear_color,"clear_color");
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(batchers,"batchers");
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(default_fbo,"default_fbo");
	HX_VISIT_MEMBER_NAME(default_rbo,"default_rbo");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(font_asset,"font_asset");
	HX_VISIT_MEMBER_NAME(render_path,"render_path");
	HX_VISIT_MEMBER_NAME(default_render_path,"default_render_path");
	HX_VISIT_MEMBER_NAME(vsync,"vsync");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(target_size,"target_size");
	HX_VISIT_MEMBER_NAME(should_clear,"should_clear");
	HX_VISIT_MEMBER_NAME(stop,"stop");
	HX_VISIT_MEMBER_NAME(stop_count,"stop_count");
	HX_VISIT_MEMBER_NAME(clear_color,"clear_color");
	HX_VISIT_MEMBER_NAME(stats,"stats");
}

Dynamic Renderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"vsync") ) { return inCallProp == hx::paccAlways ? get_vsync() : vsync; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp == hx::paccAlways ? get_target() : target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		if (HX_FIELD_EQ(inName,"onresize") ) { return onresize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"add_batch") ) { return add_batch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vsync") ) { return set_vsync_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vsync") ) { return get_vsync_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"font_asset") ) { return font_asset; }
		if (HX_FIELD_EQ(inName,"stop_count") ) { return stop_count; }
		if (HX_FIELD_EQ(inName,"blend_mode") ) { return blend_mode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"default_fbo") ) { return default_fbo; }
		if (HX_FIELD_EQ(inName,"default_rbo") ) { return default_rbo; }
		if (HX_FIELD_EQ(inName,"render_path") ) { return render_path; }
		if (HX_FIELD_EQ(inName,"target_size") ) { return target_size; }
		if (HX_FIELD_EQ(inName,"clear_color") ) { return clear_color; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"should_clear") ) { return should_clear; }
		if (HX_FIELD_EQ(inName,"remove_batch") ) { return remove_batch_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sort_batchers") ) { return sort_batchers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"create_batcher") ) { return create_batcher_dyn(); }
		if (HX_FIELD_EQ(inName,"blend_equation") ) { return blend_equation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internal_resized") ) { return internal_resized_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"default_render_path") ) { return default_render_path; }
		if (HX_FIELD_EQ(inName,"create_default_font") ) { return create_default_font_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"create_default_shaders") ) { return create_default_shaders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Renderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::phoenix::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stop") ) { stop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::RenderState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vsync") ) { if (inCallProp == hx::paccAlways) return set_vsync(inValue);vsync=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::phoenix::RendererStats >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == hx::paccAlways) return set_target(inValue);target=inValue.Cast< ::phoenix::RenderTexture >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"font_asset") ) { font_asset=inValue.Cast< ::snow::_system::assets::AssetImage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stop_count") ) { stop_count=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"default_fbo") ) { default_fbo=inValue.Cast< ::snow::modules::opengl::native::GLFBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"default_rbo") ) { default_rbo=inValue.Cast< ::snow::modules::opengl::native::GLRBO >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render_path") ) { render_path=inValue.Cast< ::phoenix::RenderPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target_size") ) { target_size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clear_color") ) { clear_color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"should_clear") ) { should_clear=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"default_render_path") ) { default_render_path=inValue.Cast< ::phoenix::RenderPath >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Renderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"));
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("default_fbo","\xf5","\xcd","\xfe","\x25"));
	outFields->push(HX_HCSTRING("default_rbo","\x01","\xe9","\x07","\x26"));
	outFields->push(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"));
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("font_asset","\x40","\xd4","\xdf","\xa1"));
	outFields->push(HX_HCSTRING("render_path","\x6e","\xbe","\xe6","\x35"));
	outFields->push(HX_HCSTRING("default_render_path","\xb0","\xe2","\x36","\x50"));
	outFields->push(HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("target_size","\xaf","\x23","\x8f","\xfc"));
	outFields->push(HX_HCSTRING("should_clear","\x41","\x09","\xe6","\x4f"));
	outFields->push(HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"));
	outFields->push(HX_HCSTRING("stop_count","\x92","\x69","\x65","\x3b"));
	outFields->push(HX_HCSTRING("clear_color","\xf1","\x51","\x9c","\xa5"));
	outFields->push(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Renderer_obj,batchers),HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")},
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Renderer_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*::phoenix::RenderState*/ ,(int)offsetof(Renderer_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::snow::modules::opengl::native::GLFBO*/ ,(int)offsetof(Renderer_obj,default_fbo),HX_HCSTRING("default_fbo","\xf5","\xcd","\xfe","\x25")},
	{hx::fsObject /*::snow::modules::opengl::native::GLRBO*/ ,(int)offsetof(Renderer_obj,default_rbo),HX_HCSTRING("default_rbo","\x01","\xe9","\x07","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Renderer_obj,shaders),HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Renderer_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Renderer_obj,camera),HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::phoenix::BitmapFont*/ ,(int)offsetof(Renderer_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::snow::_system::assets::AssetImage*/ ,(int)offsetof(Renderer_obj,font_asset),HX_HCSTRING("font_asset","\x40","\xd4","\xdf","\xa1")},
	{hx::fsObject /*::phoenix::RenderPath*/ ,(int)offsetof(Renderer_obj,render_path),HX_HCSTRING("render_path","\x6e","\xbe","\xe6","\x35")},
	{hx::fsObject /*::phoenix::RenderPath*/ ,(int)offsetof(Renderer_obj,default_render_path),HX_HCSTRING("default_render_path","\xb0","\xe2","\x36","\x50")},
	{hx::fsBool,(int)offsetof(Renderer_obj,vsync),HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d")},
	{hx::fsObject /*::phoenix::RenderTexture*/ ,(int)offsetof(Renderer_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Renderer_obj,target_size),HX_HCSTRING("target_size","\xaf","\x23","\x8f","\xfc")},
	{hx::fsBool,(int)offsetof(Renderer_obj,should_clear),HX_HCSTRING("should_clear","\x41","\x09","\xe6","\x4f")},
	{hx::fsBool,(int)offsetof(Renderer_obj,stop),HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c")},
	{hx::fsInt,(int)offsetof(Renderer_obj,stop_count),HX_HCSTRING("stop_count","\x92","\x69","\x65","\x3b")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Renderer_obj,clear_color),HX_HCSTRING("clear_color","\xf1","\x51","\x9c","\xa5")},
	{hx::fsObject /*::phoenix::RendererStats*/ ,(int)offsetof(Renderer_obj,stats),HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"),
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("default_fbo","\xf5","\xcd","\xfe","\x25"),
	HX_HCSTRING("default_rbo","\x01","\xe9","\x07","\x26"),
	HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("font_asset","\x40","\xd4","\xdf","\xa1"),
	HX_HCSTRING("render_path","\x6e","\xbe","\xe6","\x35"),
	HX_HCSTRING("default_render_path","\xb0","\xe2","\x36","\x50"),
	HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("target_size","\xaf","\x23","\x8f","\xfc"),
	HX_HCSTRING("should_clear","\x41","\x09","\xe6","\x4f"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("stop_count","\x92","\x69","\x65","\x3b"),
	HX_HCSTRING("clear_color","\xf1","\x51","\x9c","\xa5"),
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("sort_batchers","\x2d","\x24","\xe7","\xf1"),
	HX_HCSTRING("add_batch","\xdc","\xef","\x31","\x2d"),
	HX_HCSTRING("remove_batch","\x3f","\x56","\x3b","\xe4"),
	HX_HCSTRING("create_batcher","\x24","\x3f","\x51","\x72"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("blend_mode","\x51","\x41","\x9c","\x00"),
	HX_HCSTRING("blend_equation","\x7a","\xb8","\xd0","\x82"),
	HX_HCSTRING("internal_resized","\xae","\x21","\x67","\x90"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("onresize","\x53","\xdc","\x93","\xb3"),
	HX_HCSTRING("set_vsync","\x34","\x76","\xa2","\x64"),
	HX_HCSTRING("get_vsync","\x28","\x8a","\x51","\x81"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("set_target","\x8e","\x01","\xf2","\x7a"),
	HX_HCSTRING("create_default_shaders","\x6d","\x3e","\x38","\xab"),
	HX_HCSTRING("create_default_font","\xb0","\xc3","\xd4","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

hx::Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Renderer","\x22","\x36","\xb5","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Renderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Renderer_obj >;
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
