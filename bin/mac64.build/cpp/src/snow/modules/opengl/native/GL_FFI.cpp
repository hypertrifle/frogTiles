#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLBO
#include <snow/modules/opengl/native/GLBO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLFBO
#include <snow/modules/opengl/native/GLFBO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLPO
#include <snow/modules/opengl/native/GLPO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLRBO
#include <snow/modules/opengl/native/GLRBO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLSO
#include <snow/modules/opengl/native/GLSO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLTO
#include <snow/modules/opengl/native/GLTO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
namespace snow{
namespace modules{
namespace opengl{
namespace native{

Void GL_FFI_obj::__construct()
{
	return null();
}

//GL_FFI_obj::~GL_FFI_obj() { }

Dynamic GL_FFI_obj::__CreateEmpty() { return  new GL_FFI_obj; }
hx::ObjectPtr< GL_FFI_obj > GL_FFI_obj::__new()
{  hx::ObjectPtr< GL_FFI_obj > _result_ = new GL_FFI_obj();
	_result_->__construct();
	return _result_;}

Dynamic GL_FFI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GL_FFI_obj > _result_ = new GL_FFI_obj();
	_result_->__construct();
	return _result_;}

::String GL_FFI_obj::versionString( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","versionString",0xab6acd94,"snow.modules.opengl.native.GL_FFI.versionString","snow/modules/opengl/native/GL_FFI.hx",14,0x724ac2c3)
	HX_STACK_LINE(15)
	::String tmp = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,versionString,return )

Void GL_FFI_obj::activeTexture( int texture){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","activeTexture",0xb073fb40,"snow.modules.opengl.native.GL_FFI.activeTexture","snow/modules/opengl/native/GL_FFI.hx",20,0x724ac2c3)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(21)
		int tmp = texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_active_texture(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,activeTexture,(void))

Void GL_FFI_obj::attachShader( ::snow::modules::opengl::native::GLPO program,::snow::modules::opengl::native::GLSO shader){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","attachShader",0x906e639f,"snow.modules.opengl.native.GL_FFI.attachShader","snow/modules/opengl/native/GL_FFI.hx",26,0x724ac2c3)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(27)
		::snow::modules::opengl::native::GLSO tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		program->shaders->push(tmp);
		HX_STACK_LINE(28)
		int tmp1 = program->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		int tmp2 = shader->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_attach_shader(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,attachShader,(void))

Void GL_FFI_obj::bindAttribLocation( ::snow::modules::opengl::native::GLPO program,int index,::String name){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","bindAttribLocation",0xafbc86d1,"snow.modules.opengl.native.GL_FFI.bindAttribLocation","snow/modules/opengl/native/GL_FFI.hx",33,0x724ac2c3)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(34)
		int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_attrib_location(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,bindAttribLocation,(void))

Void GL_FFI_obj::bindBuffer( int target,::snow::modules::opengl::native::GLBO buffer){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","bindBuffer",0x22cd5632,"snow.modules.opengl.native.GL_FFI.bindBuffer","snow/modules/opengl/native/GL_FFI.hx",39,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(40)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		if ((tmp1)){
			HX_STACK_LINE(40)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(40)
			tmp2 = buffer->id;
		}
		HX_STACK_LINE(40)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,bindBuffer,(void))

Void GL_FFI_obj::bindFramebuffer( int target,::snow::modules::opengl::native::GLFBO framebuffer){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","bindFramebuffer",0xb51ce67b,"snow.modules.opengl.native.GL_FFI.bindFramebuffer","snow/modules/opengl/native/GL_FFI.hx",45,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(46)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		bool tmp1 = (framebuffer == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		if ((tmp1)){
			HX_STACK_LINE(46)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(46)
			tmp2 = framebuffer->id;
		}
		HX_STACK_LINE(46)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_framebuffer(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,bindFramebuffer,(void))

Void GL_FFI_obj::bindRenderbuffer( int target,::snow::modules::opengl::native::GLRBO renderbuffer){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","bindRenderbuffer",0x4ab8d788,"snow.modules.opengl.native.GL_FFI.bindRenderbuffer","snow/modules/opengl/native/GL_FFI.hx",51,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(52)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		bool tmp1 = (renderbuffer == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(52)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(52)
			tmp2 = renderbuffer->id;
		}
		HX_STACK_LINE(52)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_renderbuffer(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,bindRenderbuffer,(void))

Void GL_FFI_obj::bindTexture( int target,::snow::modules::opengl::native::GLTO texture){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","bindTexture",0x3e2e3b69,"snow.modules.opengl.native.GL_FFI.bindTexture","snow/modules/opengl/native/GL_FFI.hx",57,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(58)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		if ((tmp1)){
			HX_STACK_LINE(58)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(58)
			tmp2 = texture->id;
		}
		HX_STACK_LINE(58)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_texture(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,bindTexture,(void))

Void GL_FFI_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","blendColor",0x0cc2f6e7,"snow.modules.opengl.native.GL_FFI.blendColor","snow/modules/opengl/native/GL_FFI.hx",63,0x724ac2c3)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(64)
		Float tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		Float tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		Float tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		Float tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_blend_color(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,blendColor,(void))

Void GL_FFI_obj::blendEquation( int mode){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","blendEquation",0x5c778088,"snow.modules.opengl.native.GL_FFI.blendEquation","snow/modules/opengl/native/GL_FFI.hx",69,0x724ac2c3)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(70)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_blend_equation(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,blendEquation,(void))

Void GL_FFI_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","blendEquationSeparate",0xd105240b,"snow.modules.opengl.native.GL_FFI.blendEquationSeparate","snow/modules/opengl/native/GL_FFI.hx",75,0x724ac2c3)
		HX_STACK_ARG(modeRGB,"modeRGB")
		HX_STACK_ARG(modeAlpha,"modeAlpha")
		HX_STACK_LINE(76)
		int tmp = modeRGB;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		int tmp1 = modeAlpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_blend_equation_separate(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,blendEquationSeparate,(void))

Void GL_FFI_obj::blendFunc( int sfactor,int dfactor){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","blendFunc",0x8f428240,"snow.modules.opengl.native.GL_FFI.blendFunc","snow/modules/opengl/native/GL_FFI.hx",81,0x724ac2c3)
		HX_STACK_ARG(sfactor,"sfactor")
		HX_STACK_ARG(dfactor,"dfactor")
		HX_STACK_LINE(82)
		int tmp = sfactor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		int tmp1 = dfactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_blend_func(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,blendFunc,(void))

Void GL_FFI_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","blendFuncSeparate",0xd5bc9dc3,"snow.modules.opengl.native.GL_FFI.blendFuncSeparate","snow/modules/opengl/native/GL_FFI.hx",87,0x724ac2c3)
		HX_STACK_ARG(srcRGB,"srcRGB")
		HX_STACK_ARG(dstRGB,"dstRGB")
		HX_STACK_ARG(srcAlpha,"srcAlpha")
		HX_STACK_ARG(dstAlpha,"dstAlpha")
		HX_STACK_LINE(88)
		int tmp = srcRGB;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		int tmp1 = dstRGB;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		int tmp2 = srcAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		int tmp3 = dstAlpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_blend_func_separate(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,blendFuncSeparate,(void))

Void GL_FFI_obj::bufferData( int target,::snow::api::buffers::ArrayBufferView data,int usage){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","bufferData",0xbd8282df,"snow.modules.opengl.native.GL_FFI.bufferData","snow/modules/opengl/native/GL_FFI.hx",93,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(94)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		if ((tmp)){
			HX_STACK_LINE(95)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			int tmp4 = usage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data(tmp1,data->buffer->b,tmp2,tmp3,tmp4);
		}
		else{
			HX_STACK_LINE(97)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			int tmp2 = usage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data(tmp1,null(),(int)0,(int)0,tmp2);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,bufferData,(void))

Void GL_FFI_obj::bufferSubData( int target,int offset,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","bufferSubData",0x9faede35,"snow.modules.opengl.native.GL_FFI.bufferSubData","snow/modules/opengl/native/GL_FFI.hx",102,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(103)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		if ((tmp)){
			HX_STACK_LINE(104)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			int tmp2 = offset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			int tmp3 = data->byteOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_sub_data(tmp1,tmp2,data->buffer->b,tmp3,tmp4);
		}
		else{
			HX_STACK_LINE(106)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			int tmp2 = offset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_sub_data(tmp1,tmp2,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,bufferSubData,(void))

int GL_FFI_obj::checkFramebufferStatus( int target){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","checkFramebufferStatus",0x4a25752c,"snow.modules.opengl.native.GL_FFI.checkFramebufferStatus","snow/modules/opengl/native/GL_FFI.hx",111,0x724ac2c3)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(112)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	int tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_check_framebuffer_status(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,checkFramebufferStatus,return )

Void GL_FFI_obj::clear( int mask){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","clear",0xfe8d5618,"snow.modules.opengl.native.GL_FFI.clear","snow/modules/opengl/native/GL_FFI.hx",117,0x724ac2c3)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(118)
		int tmp = mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,clear,(void))

Void GL_FFI_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","clearColor",0x4975742b,"snow.modules.opengl.native.GL_FFI.clearColor","snow/modules/opengl/native/GL_FFI.hx",123,0x724ac2c3)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(124)
		Float tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		Float tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		Float tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		Float tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear_color(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,clearColor,(void))

Void GL_FFI_obj::clearDepth( Float depth){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","clearDepth",0xd642f3cb,"snow.modules.opengl.native.GL_FFI.clearDepth","snow/modules/opengl/native/GL_FFI.hx",129,0x724ac2c3)
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(130)
		Float tmp = depth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear_depth(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,clearDepth,(void))

Void GL_FFI_obj::clearStencil( int s){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","clearStencil",0x397902c4,"snow.modules.opengl.native.GL_FFI.clearStencil","snow/modules/opengl/native/GL_FFI.hx",135,0x724ac2c3)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(136)
		int tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_clear_stencil(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,clearStencil,(void))

Void GL_FFI_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","colorMask",0xab6a51fa,"snow.modules.opengl.native.GL_FFI.colorMask","snow/modules/opengl/native/GL_FFI.hx",141,0x724ac2c3)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(142)
		bool tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		bool tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		bool tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		bool tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_color_mask(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,colorMask,(void))

Void GL_FFI_obj::compileShader( ::snow::modules::opengl::native::GLSO shader){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","compileShader",0x347c5883,"snow.modules.opengl.native.GL_FFI.compileShader","snow/modules/opengl/native/GL_FFI.hx",147,0x724ac2c3)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(148)
		int tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_compile_shader(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,compileShader,(void))

Void GL_FFI_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","compressedTexImage2D",0x1912c87c,"snow.modules.opengl.native.GL_FFI.compressedTexImage2D","snow/modules/opengl/native/GL_FFI.hx",153,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(154)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		if ((tmp)){
			HX_STACK_LINE(155)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(155)
			int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			int tmp3 = internalformat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			int tmp6 = border;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			int tmp7 = data->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			int tmp8 = data->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(155)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_compressed_tex_image_2d(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,data->buffer->b,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(157)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			int tmp3 = internalformat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(157)
			int tmp6 = border;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(157)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_compressed_tex_image_2d(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_FFI_obj,compressedTexImage2D,(void))

Void GL_FFI_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","compressedTexSubImage2D",0xb112991e,"snow.modules.opengl.native.GL_FFI.compressedTexSubImage2D","snow/modules/opengl/native/GL_FFI.hx",162,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(163)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		if ((tmp)){
			HX_STACK_LINE(164)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(164)
			int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			int tmp3 = xoffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			int tmp4 = yoffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(164)
			int tmp8 = data->byteOffset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(164)
			int tmp9 = data->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(164)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_compressed_tex_sub_image_2d(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,data->buffer->b,tmp8,tmp9);
		}
		else{
			HX_STACK_LINE(166)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(166)
			int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			int tmp3 = xoffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			int tmp4 = yoffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_compressed_tex_sub_image_2d(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_FFI_obj,compressedTexSubImage2D,(void))

Void GL_FFI_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","copyTexImage2D",0x1b5782f0,"snow.modules.opengl.native.GL_FFI.copyTexImage2D","snow/modules/opengl/native/GL_FFI.hx",171,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_LINE(172)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		int tmp2 = internalformat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		int tmp7 = border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_copy_tex_image_2d(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_FFI_obj,copyTexImage2D,(void))

Void GL_FFI_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","copyTexSubImage2D",0xafaadf2a,"snow.modules.opengl.native.GL_FFI.copyTexSubImage2D","snow/modules/opengl/native/GL_FFI.hx",177,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(178)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		int tmp2 = xoffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		int tmp3 = yoffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(178)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_copy_tex_sub_image_2d(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_FFI_obj,copyTexSubImage2D,(void))

::snow::modules::opengl::native::GLBO GL_FFI_obj::createBuffer( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","createBuffer",0xd0e08ff1,"snow.modules.opengl.native.GL_FFI.createBuffer","snow/modules/opengl/native/GL_FFI.hx",183,0x724ac2c3)
	HX_STACK_LINE(184)
	::snow::modules::opengl::native::GLBO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		int _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(184)
		::snow::modules::opengl::native::GLBO tmp2 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		tmp = tmp2;
	}
	HX_STACK_LINE(184)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,createBuffer,return )

::snow::modules::opengl::native::GLFBO GL_FFI_obj::createFramebuffer( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","createFramebuffer",0xd7e4f85c,"snow.modules.opengl.native.GL_FFI.createFramebuffer","snow/modules/opengl/native/GL_FFI.hx",189,0x724ac2c3)
	HX_STACK_LINE(190)
	::snow::modules::opengl::native::GLFBO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		int tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_framebuffer();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		int _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(190)
		::snow::modules::opengl::native::GLFBO tmp2 = ::snow::modules::opengl::native::GLFBO_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		tmp = tmp2;
	}
	HX_STACK_LINE(190)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,createFramebuffer,return )

::snow::modules::opengl::native::GLPO GL_FFI_obj::createProgram( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","createProgram",0x36060a73,"snow.modules.opengl.native.GL_FFI.createProgram","snow/modules/opengl/native/GL_FFI.hx",195,0x724ac2c3)
	HX_STACK_LINE(196)
	::snow::modules::opengl::native::GLPO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		int tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_program();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		int _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(196)
		::snow::modules::opengl::native::GLPO tmp2 = ::snow::modules::opengl::native::GLPO_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		tmp = tmp2;
	}
	HX_STACK_LINE(196)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,createProgram,return )

::snow::modules::opengl::native::GLRBO GL_FFI_obj::createRenderbuffer( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","createRenderbuffer",0x97006a87,"snow.modules.opengl.native.GL_FFI.createRenderbuffer","snow/modules/opengl/native/GL_FFI.hx",201,0x724ac2c3)
	HX_STACK_LINE(202)
	::snow::modules::opengl::native::GLRBO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		int tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_render_buffer();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		int _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(202)
		::snow::modules::opengl::native::GLRBO tmp2 = ::snow::modules::opengl::native::GLRBO_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		tmp = tmp2;
	}
	HX_STACK_LINE(202)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,createRenderbuffer,return )

::snow::modules::opengl::native::GLSO GL_FFI_obj::createShader( int type){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","createShader",0x1d6c9216,"snow.modules.opengl.native.GL_FFI.createShader","snow/modules/opengl/native/GL_FFI.hx",207,0x724ac2c3)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(208)
	::snow::modules::opengl::native::GLSO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		int tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		int tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_shader(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		int _id = tmp2;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(208)
		::snow::modules::opengl::native::GLSO tmp3 = ::snow::modules::opengl::native::GLSO_obj::__new(_id);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		tmp = tmp3;
	}
	HX_STACK_LINE(208)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,createShader,return )

::snow::modules::opengl::native::GLTO GL_FFI_obj::createTexture( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","createTexture",0xe0ed88ca,"snow.modules.opengl.native.GL_FFI.createTexture","snow/modules/opengl/native/GL_FFI.hx",213,0x724ac2c3)
	HX_STACK_LINE(214)
	::snow::modules::opengl::native::GLTO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		int tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		int _id = tmp1;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(214)
		::snow::modules::opengl::native::GLTO tmp2 = ::snow::modules::opengl::native::GLTO_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		tmp = tmp2;
	}
	HX_STACK_LINE(214)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,createTexture,return )

Void GL_FFI_obj::cullFace( int mode){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","cullFace",0x3b272bc4,"snow.modules.opengl.native.GL_FFI.cullFace","snow/modules/opengl/native/GL_FFI.hx",219,0x724ac2c3)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(220)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_cull_face(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,cullFace,(void))

Void GL_FFI_obj::deleteBuffer( ::snow::modules::opengl::native::GLBO buffer){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","deleteBuffer",0x15237660,"snow.modules.opengl.native.GL_FFI.deleteBuffer","snow/modules/opengl/native/GL_FFI.hx",225,0x724ac2c3)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(226)
		int tmp = buffer->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_buffer(tmp);
		HX_STACK_LINE(227)
		buffer->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,deleteBuffer,(void))

Void GL_FFI_obj::deleteFramebuffer( ::snow::modules::opengl::native::GLFBO framebuffer){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","deleteFramebuffer",0x5afd5f8d,"snow.modules.opengl.native.GL_FFI.deleteFramebuffer","snow/modules/opengl/native/GL_FFI.hx",232,0x724ac2c3)
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(233)
		int tmp = framebuffer->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_framebuffer(tmp);
		HX_STACK_LINE(234)
		framebuffer->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,deleteFramebuffer,(void))

Void GL_FFI_obj::deleteProgram( ::snow::modules::opengl::native::GLPO program){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","deleteProgram",0xac4cc524,"snow.modules.opengl.native.GL_FFI.deleteProgram","snow/modules/opengl/native/GL_FFI.hx",239,0x724ac2c3)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(240)
		int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_program(tmp);
		HX_STACK_LINE(241)
		program->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,deleteProgram,(void))

Void GL_FFI_obj::deleteRenderbuffer( ::snow::modules::opengl::native::GLRBO renderbuffer){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","deleteRenderbuffer",0xc9424e36,"snow.modules.opengl.native.GL_FFI.deleteRenderbuffer","snow/modules/opengl/native/GL_FFI.hx",246,0x724ac2c3)
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(247)
		int tmp = renderbuffer->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_render_buffer(tmp);
		HX_STACK_LINE(248)
		renderbuffer->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,deleteRenderbuffer,(void))

Void GL_FFI_obj::deleteShader( ::snow::modules::opengl::native::GLSO shader){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","deleteShader",0x61af7885,"snow.modules.opengl.native.GL_FFI.deleteShader","snow/modules/opengl/native/GL_FFI.hx",253,0x724ac2c3)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(254)
		int tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_shader(tmp);
		HX_STACK_LINE(255)
		shader->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,deleteShader,(void))

Void GL_FFI_obj::deleteTexture( ::snow::modules::opengl::native::GLTO texture){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","deleteTexture",0x5734437b,"snow.modules.opengl.native.GL_FFI.deleteTexture","snow/modules/opengl/native/GL_FFI.hx",260,0x724ac2c3)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(261)
		int tmp = texture->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_texture(tmp);
		HX_STACK_LINE(262)
		texture->set_invalidated(true);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,deleteTexture,(void))

Void GL_FFI_obj::depthFunc( int func){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","depthFunc",0x21eecbf2,"snow.modules.opengl.native.GL_FFI.depthFunc","snow/modules/opengl/native/GL_FFI.hx",267,0x724ac2c3)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(268)
		int tmp = func;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(268)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_depth_func(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,depthFunc,(void))

Void GL_FFI_obj::depthMask( bool flag){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","depthMask",0x2680219a,"snow.modules.opengl.native.GL_FFI.depthMask","snow/modules/opengl/native/GL_FFI.hx",273,0x724ac2c3)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(274)
		bool tmp = flag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_depth_mask(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,depthMask,(void))

Void GL_FFI_obj::depthRange( Float zNear,Float zFar){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","depthRange",0x6a9a5d4f,"snow.modules.opengl.native.GL_FFI.depthRange","snow/modules/opengl/native/GL_FFI.hx",279,0x724ac2c3)
		HX_STACK_ARG(zNear,"zNear")
		HX_STACK_ARG(zFar,"zFar")
		HX_STACK_LINE(280)
		Float tmp = zNear;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		Float tmp1 = zFar;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_depth_range(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,depthRange,(void))

Void GL_FFI_obj::detachShader( ::snow::modules::opengl::native::GLPO program,::snow::modules::opengl::native::GLSO shader){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","detachShader",0xc8a463ad,"snow.modules.opengl.native.GL_FFI.detachShader","snow/modules/opengl/native/GL_FFI.hx",285,0x724ac2c3)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(286)
		int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		int tmp1 = shader->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_detach_shader(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,detachShader,(void))

Void GL_FFI_obj::disable( int cap){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","disable",0xc334c733,"snow.modules.opengl.native.GL_FFI.disable","snow/modules/opengl/native/GL_FFI.hx",291,0x724ac2c3)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(292)
		int tmp = cap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_disable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,disable,(void))

Void GL_FFI_obj::disableVertexAttribArray( int index){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","disableVertexAttribArray",0x12266838,"snow.modules.opengl.native.GL_FFI.disableVertexAttribArray","snow/modules/opengl/native/GL_FFI.hx",297,0x724ac2c3)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(298)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_disable_vertex_attrib_array(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,disableVertexAttribArray,(void))

Void GL_FFI_obj::drawArrays( int mode,int first,int count){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","drawArrays",0x23c2b773,"snow.modules.opengl.native.GL_FFI.drawArrays","snow/modules/opengl/native/GL_FFI.hx",303,0x724ac2c3)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(304)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		int tmp1 = first;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_draw_arrays(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,drawArrays,(void))

Void GL_FFI_obj::drawElements( int mode,int count,int type,int offset){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","drawElements",0x37ae5530,"snow.modules.opengl.native.GL_FFI.drawElements","snow/modules/opengl/native/GL_FFI.hx",309,0x724ac2c3)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(310)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		int tmp3 = offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_draw_elements(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,drawElements,(void))

Void GL_FFI_obj::enable( int cap){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","enable",0xadfdc398,"snow.modules.opengl.native.GL_FFI.enable","snow/modules/opengl/native/GL_FFI.hx",315,0x724ac2c3)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(316)
		int tmp = cap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,enable,(void))

Void GL_FFI_obj::enableVertexAttribArray( int index){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","enableVertexAttribArray",0x26ef2a33,"snow.modules.opengl.native.GL_FFI.enableVertexAttribArray","snow/modules/opengl/native/GL_FFI.hx",321,0x724ac2c3)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(322)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable_vertex_attrib_array(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,enableVertexAttribArray,(void))

Void GL_FFI_obj::finish( ){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","finish",0x3bf55568,"snow.modules.opengl.native.GL_FFI.finish","snow/modules/opengl/native/GL_FFI.hx",328,0x724ac2c3)
		HX_STACK_LINE(328)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_finish();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,finish,(void))

Void GL_FFI_obj::flush( ){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","flush",0xb8cd474f,"snow.modules.opengl.native.GL_FFI.flush","snow/modules/opengl/native/GL_FFI.hx",334,0x724ac2c3)
		HX_STACK_LINE(334)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_flush();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,flush,(void))

Void GL_FFI_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::snow::modules::opengl::native::GLRBO renderbuffer){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","framebufferRenderbuffer",0xb147c0ae,"snow.modules.opengl.native.GL_FFI.framebufferRenderbuffer","snow/modules/opengl/native/GL_FFI.hx",339,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(renderbuffertarget,"renderbuffertarget")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(340)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		int tmp2 = renderbuffertarget;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(340)
		int tmp3 = renderbuffer->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(340)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_framebuffer_renderbuffer(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,framebufferRenderbuffer,(void))

Void GL_FFI_obj::framebufferTexture2D( int target,int attachment,int textarget,::snow::modules::opengl::native::GLTO texture,int level){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","framebufferTexture2D",0x18d75695,"snow.modules.opengl.native.GL_FFI.framebufferTexture2D","snow/modules/opengl/native/GL_FFI.hx",345,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(textarget,"textarget")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(level,"level")
		HX_STACK_LINE(346)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		int tmp2 = textarget;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(346)
		int tmp3 = texture->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(346)
		int tmp4 = level;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(346)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_framebuffer_texture2D(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_FFI_obj,framebufferTexture2D,(void))

Void GL_FFI_obj::frontFace( int mode){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","frontFace",0x086787f1,"snow.modules.opengl.native.GL_FFI.frontFace","snow/modules/opengl/native/GL_FFI.hx",351,0x724ac2c3)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(352)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_front_face(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,frontFace,(void))

Void GL_FFI_obj::generateMipmap( int target){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","generateMipmap",0x91ee88b2,"snow.modules.opengl.native.GL_FFI.generateMipmap","snow/modules/opengl/native/GL_FFI.hx",357,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(358)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_generate_mipmap(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,generateMipmap,(void))

Dynamic GL_FFI_obj::getActiveAttrib( ::snow::modules::opengl::native::GLPO program,int index){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getActiveAttrib",0x30ddabb1,"snow.modules.opengl.native.GL_FFI.getActiveAttrib","snow/modules/opengl/native/GL_FFI.hx",363,0x724ac2c3)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(364)
	int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(364)
	Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_active_attrib(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(364)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getActiveAttrib,return )

Dynamic GL_FFI_obj::getActiveUniform( ::snow::modules::opengl::native::GLPO program,int index){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getActiveUniform",0x0d4f56ed,"snow.modules.opengl.native.GL_FFI.getActiveUniform","snow/modules/opengl/native/GL_FFI.hx",369,0x724ac2c3)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(370)
	int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(370)
	Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_active_uniform(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getActiveUniform,return )

Array< ::Dynamic > GL_FFI_obj::getAttachedShaders( ::snow::modules::opengl::native::GLPO program){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getAttachedShaders",0x25030f49,"snow.modules.opengl.native.GL_FFI.getAttachedShaders","snow/modules/opengl/native/GL_FFI.hx",376,0x724ac2c3)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(376)
	return program->shaders;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,getAttachedShaders,return )

int GL_FFI_obj::getAttribLocation( ::snow::modules::opengl::native::GLPO program,::String name){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getAttribLocation",0x680c23e0,"snow.modules.opengl.native.GL_FFI.getAttribLocation","snow/modules/opengl/native/GL_FFI.hx",381,0x724ac2c3)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(382)
	int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(382)
	int tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_attrib_location(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(382)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getAttribLocation,return )

Dynamic GL_FFI_obj::getBufferParameter( int target,int pname){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getBufferParameter",0xa6403928,"snow.modules.opengl.native.GL_FFI.getBufferParameter","snow/modules/opengl/native/GL_FFI.hx",387,0x724ac2c3)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(388)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_buffer_paramerter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(388)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getBufferParameter,return )

Dynamic GL_FFI_obj::getContextAttributes( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getContextAttributes",0xa296ca05,"snow.modules.opengl.native.GL_FFI.getContextAttributes","snow/modules/opengl/native/GL_FFI.hx",393,0x724ac2c3)
	HX_STACK_LINE(396)
	Dynamic tmp = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_context_attributes();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(396)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,getContextAttributes,return )

int GL_FFI_obj::getError( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getError",0x61f61fa7,"snow.modules.opengl.native.GL_FFI.getError","snow/modules/opengl/native/GL_FFI.hx",401,0x724ac2c3)
	HX_STACK_LINE(402)
	int tmp = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_error();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,getError,return )

Dynamic GL_FFI_obj::getExtension( ::String name){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getExtension",0xd25dc2de,"snow.modules.opengl.native.GL_FFI.getExtension","snow/modules/opengl/native/GL_FFI.hx",409,0x724ac2c3)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(409)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,getExtension,return )

Dynamic GL_FFI_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getFramebufferAttachmentParameter",0xf565ce9a,"snow.modules.opengl.native.GL_FFI.getFramebufferAttachmentParameter","snow/modules/opengl/native/GL_FFI.hx",415,0x724ac2c3)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(416)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(416)
	int tmp2 = pname;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(416)
	Dynamic tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_framebuffer_attachment_parameter(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(416)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,getFramebufferAttachmentParameter,return )

Dynamic GL_FFI_obj::getParameter( int pname){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getParameter",0x35fd6508,"snow.modules.opengl.native.GL_FFI.getParameter","snow/modules/opengl/native/GL_FFI.hx",421,0x724ac2c3)
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(422)
	int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	Dynamic tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_parameter(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,getParameter,return )

::String GL_FFI_obj::getProgramInfoLog( ::snow::modules::opengl::native::GLPO program){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getProgramInfoLog",0xd8eefad3,"snow.modules.opengl.native.GL_FFI.getProgramInfoLog","snow/modules/opengl/native/GL_FFI.hx",427,0x724ac2c3)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(428)
	int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	::String tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_program_info_log(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,getProgramInfoLog,return )

int GL_FFI_obj::getProgramParameter( ::snow::modules::opengl::native::GLPO program,int pname){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getProgramParameter",0x5f756506,"snow.modules.opengl.native.GL_FFI.getProgramParameter","snow/modules/opengl/native/GL_FFI.hx",433,0x724ac2c3)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(434)
	int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	int tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_program_parameter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getProgramParameter,return )

Dynamic GL_FFI_obj::getRenderbufferParameter( int target,int pname){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getRenderbufferParameter",0x0489bfd2,"snow.modules.opengl.native.GL_FFI.getRenderbufferParameter","snow/modules/opengl/native/GL_FFI.hx",439,0x724ac2c3)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(440)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(440)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(440)
	Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_render_buffer_parameter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(440)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getRenderbufferParameter,return )

::String GL_FFI_obj::getShaderInfoLog( ::snow::modules::opengl::native::GLSO shader){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getShaderInfoLog",0x29c9def0,"snow.modules.opengl.native.GL_FFI.getShaderInfoLog","snow/modules/opengl/native/GL_FFI.hx",445,0x724ac2c3)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(446)
	int tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(446)
	::String tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_shader_info_log(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(446)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,getShaderInfoLog,return )

int GL_FFI_obj::getShaderParameter( ::snow::modules::opengl::native::GLSO shader,int pname){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getShaderParameter",0xc7e74a63,"snow.modules.opengl.native.GL_FFI.getShaderParameter","snow/modules/opengl/native/GL_FFI.hx",451,0x724ac2c3)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(452)
	int tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(452)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(452)
	int tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_shader_parameter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(452)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getShaderParameter,return )

Dynamic GL_FFI_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getShaderPrecisionFormat",0x9681b74f,"snow.modules.opengl.native.GL_FFI.getShaderPrecisionFormat","snow/modules/opengl/native/GL_FFI.hx",457,0x724ac2c3)
	HX_STACK_ARG(shadertype,"shadertype")
	HX_STACK_ARG(precisiontype,"precisiontype")
	HX_STACK_LINE(458)
	int tmp = shadertype;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(458)
	int tmp1 = precisiontype;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(458)
	Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_shader_precision_format(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(458)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getShaderPrecisionFormat,return )

::String GL_FFI_obj::getShaderSource( ::snow::modules::opengl::native::GLSO shader){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getShaderSource",0x92bfc3e1,"snow.modules.opengl.native.GL_FFI.getShaderSource","snow/modules/opengl/native/GL_FFI.hx",463,0x724ac2c3)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(464)
	int tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(464)
	::String tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_shader_source(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(464)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,getShaderSource,return )

Array< ::String > GL_FFI_obj::getSupportedExtensions( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getSupportedExtensions",0xe11dc801,"snow.modules.opengl.native.GL_FFI.getSupportedExtensions","snow/modules/opengl/native/GL_FFI.hx",469,0x724ac2c3)
	HX_STACK_LINE(470)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(471)
	::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_supported_extensions(result);
	HX_STACK_LINE(472)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_FFI_obj,getSupportedExtensions,return )

Dynamic GL_FFI_obj::getTexParameter( int target,int pname){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getTexParameter",0xa08eb8c3,"snow.modules.opengl.native.GL_FFI.getTexParameter","snow/modules/opengl/native/GL_FFI.hx",477,0x724ac2c3)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(478)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(478)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(478)
	Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_tex_parameter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(478)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getTexParameter,return )

Dynamic GL_FFI_obj::getUniform( ::snow::modules::opengl::native::GLPO program,Dynamic location){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getUniform",0x2ed48ad3,"snow.modules.opengl.native.GL_FFI.getUniform","snow/modules/opengl/native/GL_FFI.hx",483,0x724ac2c3)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(location,"location")
	HX_STACK_LINE(484)
	int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(484)
	Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(484)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getUniform,return )

Dynamic GL_FFI_obj::getUniformLocation( ::snow::modules::opengl::native::GLPO program,::String name){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getUniformLocation",0xe1604028,"snow.modules.opengl.native.GL_FFI.getUniformLocation","snow/modules/opengl/native/GL_FFI.hx",489,0x724ac2c3)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(490)
	int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(490)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(490)
	Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getUniformLocation,return )

Dynamic GL_FFI_obj::getVertexAttrib( int index,int pname){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getVertexAttrib",0x70d74fcf,"snow.modules.opengl.native.GL_FFI.getVertexAttrib","snow/modules/opengl/native/GL_FFI.hx",495,0x724ac2c3)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(496)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	Dynamic tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_vertex_attrib(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(496)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getVertexAttrib,return )

int GL_FFI_obj::getVertexAttribOffset( int index,int pname){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","getVertexAttribOffset",0x806ba0c2,"snow.modules.opengl.native.GL_FFI.getVertexAttribOffset","snow/modules/opengl/native/GL_FFI.hx",501,0x724ac2c3)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(502)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(502)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(502)
	int tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_vertex_attrib_offset(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(502)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,getVertexAttribOffset,return )

Void GL_FFI_obj::hint( int target,int mode){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","hint",0x806b735c,"snow.modules.opengl.native.GL_FFI.hint","snow/modules/opengl/native/GL_FFI.hx",507,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(508)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(508)
		int tmp1 = mode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(508)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_hint(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,hint,(void))

bool GL_FFI_obj::isBuffer( ::snow::modules::opengl::native::GLBO buffer){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","isBuffer",0xb7f39cdf,"snow.modules.opengl.native.GL_FFI.isBuffer","snow/modules/opengl/native/GL_FFI.hx",513,0x724ac2c3)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(514)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(514)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(514)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(514)
	if ((tmp1)){
		HX_STACK_LINE(514)
		int tmp3 = buffer->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(514)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(514)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(514)
		tmp2 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(514)
		tmp2 = false;
	}
	HX_STACK_LINE(514)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(514)
	if ((tmp2)){
		HX_STACK_LINE(514)
		int tmp4 = buffer->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(514)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(514)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(514)
		tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_is_buffer(tmp6);
	}
	else{
		HX_STACK_LINE(514)
		tmp3 = false;
	}
	HX_STACK_LINE(514)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,isBuffer,return )

bool GL_FFI_obj::isEnabled( int cap){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","isEnabled",0x09d607c2,"snow.modules.opengl.native.GL_FFI.isEnabled","snow/modules/opengl/native/GL_FFI.hx",521,0x724ac2c3)
	HX_STACK_ARG(cap,"cap")
	HX_STACK_LINE(522)
	int tmp = cap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(522)
	bool tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_is_enabled(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(522)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,isEnabled,return )

bool GL_FFI_obj::isFramebuffer( ::snow::modules::opengl::native::GLFBO framebuffer){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","isFramebuffer",0xdd364cae,"snow.modules.opengl.native.GL_FFI.isFramebuffer","snow/modules/opengl/native/GL_FFI.hx",527,0x724ac2c3)
	HX_STACK_ARG(framebuffer,"framebuffer")
	HX_STACK_LINE(528)
	bool tmp = (framebuffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(528)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(528)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(528)
	if ((tmp1)){
		HX_STACK_LINE(528)
		int tmp3 = framebuffer->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(528)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(528)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(528)
		tmp2 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(528)
		tmp2 = false;
	}
	HX_STACK_LINE(528)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(528)
	if ((tmp2)){
		HX_STACK_LINE(528)
		int tmp4 = framebuffer->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(528)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(528)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(528)
		tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_is_framebuffer(tmp6);
	}
	else{
		HX_STACK_LINE(528)
		tmp3 = false;
	}
	HX_STACK_LINE(528)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,isFramebuffer,return )

bool GL_FFI_obj::isProgram( ::snow::modules::opengl::native::GLPO program){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","isProgram",0x7f9e4dc5,"snow.modules.opengl.native.GL_FFI.isProgram","snow/modules/opengl/native/GL_FFI.hx",533,0x724ac2c3)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(534)
	bool tmp = (program != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(534)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(534)
	if ((tmp1)){
		HX_STACK_LINE(534)
		int tmp3 = program->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(534)
		tmp2 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(534)
		tmp2 = false;
	}
	HX_STACK_LINE(534)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(534)
	if ((tmp2)){
		HX_STACK_LINE(534)
		int tmp4 = program->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(534)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(534)
		tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_is_program(tmp6);
	}
	else{
		HX_STACK_LINE(534)
		tmp3 = false;
	}
	HX_STACK_LINE(534)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,isProgram,return )

bool GL_FFI_obj::isRenderbuffer( ::snow::modules::opengl::native::GLRBO renderbuffer){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","isRenderbuffer",0x38d8ddf5,"snow.modules.opengl.native.GL_FFI.isRenderbuffer","snow/modules/opengl/native/GL_FFI.hx",539,0x724ac2c3)
	HX_STACK_ARG(renderbuffer,"renderbuffer")
	HX_STACK_LINE(540)
	bool tmp = (renderbuffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(540)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(540)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(540)
	if ((tmp1)){
		HX_STACK_LINE(540)
		int tmp3 = renderbuffer->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(540)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(540)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(540)
		tmp2 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(540)
		tmp2 = false;
	}
	HX_STACK_LINE(540)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(540)
	if ((tmp2)){
		HX_STACK_LINE(540)
		int tmp4 = renderbuffer->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(540)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(540)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_is_renderbuffer(tmp6);
	}
	else{
		HX_STACK_LINE(540)
		tmp3 = false;
	}
	HX_STACK_LINE(540)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,isRenderbuffer,return )

bool GL_FFI_obj::isShader( ::snow::modules::opengl::native::GLSO shader){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","isShader",0x047f9f04,"snow.modules.opengl.native.GL_FFI.isShader","snow/modules/opengl/native/GL_FFI.hx",545,0x724ac2c3)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(546)
	bool tmp = (shader != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(546)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(546)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	if ((tmp1)){
		HX_STACK_LINE(546)
		int tmp3 = shader->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(546)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(546)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(546)
		tmp2 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(546)
		tmp2 = false;
	}
	HX_STACK_LINE(546)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(546)
	if ((tmp2)){
		HX_STACK_LINE(546)
		int tmp4 = shader->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(546)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(546)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(546)
		tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_is_shader(tmp6);
	}
	else{
		HX_STACK_LINE(546)
		tmp3 = false;
	}
	HX_STACK_LINE(546)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,isShader,return )

bool GL_FFI_obj::isTexture( ::snow::modules::opengl::native::GLTO texture){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","isTexture",0x2a85cc1c,"snow.modules.opengl.native.GL_FFI.isTexture","snow/modules/opengl/native/GL_FFI.hx",551,0x724ac2c3)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(552)
	bool tmp = (texture != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(552)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(552)
	if ((tmp1)){
		HX_STACK_LINE(552)
		int tmp3 = texture->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(552)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(552)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(552)
		tmp2 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(552)
		tmp2 = false;
	}
	HX_STACK_LINE(552)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(552)
	if ((tmp2)){
		HX_STACK_LINE(552)
		int tmp4 = texture->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(552)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(552)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(552)
		tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_is_texture(tmp6);
	}
	else{
		HX_STACK_LINE(552)
		tmp3 = false;
	}
	HX_STACK_LINE(552)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,isTexture,return )

Void GL_FFI_obj::lineWidth( Float width){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","lineWidth",0x99043f7d,"snow.modules.opengl.native.GL_FFI.lineWidth","snow/modules/opengl/native/GL_FFI.hx",557,0x724ac2c3)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(558)
		Float tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(558)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_line_width(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,lineWidth,(void))

Void GL_FFI_obj::linkProgram( ::snow::modules::opengl::native::GLPO program){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","linkProgram",0x2c580c75,"snow.modules.opengl.native.GL_FFI.linkProgram","snow/modules/opengl/native/GL_FFI.hx",563,0x724ac2c3)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(564)
		int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(564)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_link_program(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,linkProgram,(void))

Void GL_FFI_obj::pixelStorei( int pname,int param){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","pixelStorei",0x23a49359,"snow.modules.opengl.native.GL_FFI.pixelStorei","snow/modules/opengl/native/GL_FFI.hx",569,0x724ac2c3)
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(570)
		int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(570)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(570)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_pixel_storei(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,pixelStorei,(void))

Void GL_FFI_obj::polygonOffset( Float factor,Float units){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","polygonOffset",0xc0170d38,"snow.modules.opengl.native.GL_FFI.polygonOffset","snow/modules/opengl/native/GL_FFI.hx",575,0x724ac2c3)
		HX_STACK_ARG(factor,"factor")
		HX_STACK_ARG(units,"units")
		HX_STACK_LINE(576)
		Float tmp = factor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(576)
		Float tmp1 = units;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_polygon_offset(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,polygonOffset,(void))

Void GL_FFI_obj::readPixels( int x,int y,int width,int height,int format,int type,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","readPixels",0xb03496b8,"snow.modules.opengl.native.GL_FFI.readPixels","snow/modules/opengl/native/GL_FFI.hx",581,0x724ac2c3)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(582)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(582)
		if ((tmp)){
			HX_STACK_LINE(583)
			int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(583)
			int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(583)
			int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(583)
			int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(583)
			int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(583)
			int tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(583)
			int tmp7 = data->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(583)
			int tmp8 = data->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(583)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_read_pixels(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,data->buffer->b,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(585)
			int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(585)
			int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(585)
			int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(585)
			int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(585)
			int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(585)
			int tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(585)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_read_pixels(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_FFI_obj,readPixels,(void))

Void GL_FFI_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","renderbufferStorage",0x504942d0,"snow.modules.opengl.native.GL_FFI.renderbufferStorage","snow/modules/opengl/native/GL_FFI.hx",590,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(591)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		int tmp1 = internalformat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(591)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(591)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_renderbuffer_storage(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,renderbufferStorage,(void))

Void GL_FFI_obj::sampleCoverage( Float value,bool invert){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","sampleCoverage",0x72621a47,"snow.modules.opengl.native.GL_FFI.sampleCoverage","snow/modules/opengl/native/GL_FFI.hx",596,0x724ac2c3)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(invert,"invert")
		HX_STACK_LINE(597)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(597)
		bool tmp1 = invert;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(597)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_sample_coverage(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,sampleCoverage,(void))

Void GL_FFI_obj::scissor( int x,int y,int width,int height){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","scissor",0x16c38567,"snow.modules.opengl.native.GL_FFI.scissor","snow/modules/opengl/native/GL_FFI.hx",602,0x724ac2c3)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(603)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(603)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(603)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_scissor(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,scissor,(void))

Void GL_FFI_obj::shaderSource( ::snow::modules::opengl::native::GLSO shader,::String source){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","shaderSource",0x8010e0b5,"snow.modules.opengl.native.GL_FFI.shaderSource","snow/modules/opengl/native/GL_FFI.hx",608,0x724ac2c3)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(609)
		int tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(609)
		::String tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_shader_source(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,shaderSource,(void))

Void GL_FFI_obj::stencilFunc( int func,int ref,int mask){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","stencilFunc",0xe39ae22b,"snow.modules.opengl.native.GL_FFI.stencilFunc","snow/modules/opengl/native/GL_FFI.hx",614,0x724ac2c3)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(615)
		int tmp = func;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(615)
		int tmp1 = ref;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(615)
		int tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(615)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_stencil_func(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,stencilFunc,(void))

Void GL_FFI_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","stencilFuncSeparate",0x7ba760ae,"snow.modules.opengl.native.GL_FFI.stencilFuncSeparate","snow/modules/opengl/native/GL_FFI.hx",620,0x724ac2c3)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(621)
		int tmp = face;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		int tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		int tmp2 = ref;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(621)
		int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(621)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_stencil_func_separate(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,stencilFuncSeparate,(void))

Void GL_FFI_obj::stencilMask( int mask){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","stencilMask",0xe82c37d3,"snow.modules.opengl.native.GL_FFI.stencilMask","snow/modules/opengl/native/GL_FFI.hx",626,0x724ac2c3)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(627)
		int tmp = mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(627)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_stencil_mask(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,stencilMask,(void))

Void GL_FFI_obj::stencilMaskSeparate( int face,int mask){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","stencilMaskSeparate",0x8f829e56,"snow.modules.opengl.native.GL_FFI.stencilMaskSeparate","snow/modules/opengl/native/GL_FFI.hx",632,0x724ac2c3)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(633)
		int tmp = face;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(633)
		int tmp1 = mask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(633)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_stencil_mask_separate(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,stencilMaskSeparate,(void))

Void GL_FFI_obj::stencilOp( int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","stencilOp",0xde930048,"snow.modules.opengl.native.GL_FFI.stencilOp","snow/modules/opengl/native/GL_FFI.hx",638,0x724ac2c3)
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(639)
		int tmp = fail;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(639)
		int tmp1 = zfail;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(639)
		int tmp2 = zpass;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(639)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_stencil_op(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,stencilOp,(void))

Void GL_FFI_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","stencilOpSeparate",0x5e4663cb,"snow.modules.opengl.native.GL_FFI.stencilOpSeparate","snow/modules/opengl/native/GL_FFI.hx",644,0x724ac2c3)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(645)
		int tmp = face;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(645)
		int tmp1 = fail;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(645)
		int tmp2 = zfail;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(645)
		int tmp3 = zpass;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(645)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_stencil_op_separate(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,stencilOpSeparate,(void))

Void GL_FFI_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","texImage2D",0xe376405b,"snow.modules.opengl.native.GL_FFI.texImage2D","snow/modules/opengl/native/GL_FFI.hx",650,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(651)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(651)
		if ((tmp)){
			HX_STACK_LINE(652)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(652)
			int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(652)
			int tmp3 = internalformat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(652)
			int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(652)
			int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(652)
			int tmp6 = border;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(652)
			int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(652)
			int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(652)
			int tmp9 = data->byteOffset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(652)
			int tmp10 = data->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(652)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_tex_image_2d(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,data->buffer->b,tmp9,tmp10);
		}
		else{
			HX_STACK_LINE(654)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(654)
			int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(654)
			int tmp3 = internalformat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(654)
			int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(654)
			int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(654)
			int tmp6 = border;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(654)
			int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(654)
			int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(654)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_tex_image_2d(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_FFI_obj,texImage2D,(void))

Void GL_FFI_obj::texParameterf( int target,int pname,Float param){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","texParameterf",0x95fb0eef,"snow.modules.opengl.native.GL_FFI.texParameterf","snow/modules/opengl/native/GL_FFI.hx",659,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(660)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(660)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(660)
		Float tmp2 = param;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(660)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_tex_parameterf(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,texParameterf,(void))

Void GL_FFI_obj::texParameteri( int target,int pname,int param){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","texParameteri",0x95fb0ef2,"snow.modules.opengl.native.GL_FFI.texParameteri","snow/modules/opengl/native/GL_FFI.hx",665,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(666)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(666)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(666)
		int tmp2 = param;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(666)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_tex_parameteri(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,texParameteri,(void))

Void GL_FFI_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","texSubImage2D",0x825a169f,"snow.modules.opengl.native.GL_FFI.texSubImage2D","snow/modules/opengl/native/GL_FFI.hx",671,0x724ac2c3)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(672)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(672)
		if ((tmp)){
			HX_STACK_LINE(673)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(673)
			int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(673)
			int tmp3 = xoffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(673)
			int tmp4 = yoffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(673)
			int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(673)
			int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(673)
			int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(673)
			int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(673)
			int tmp9 = data->byteOffset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(673)
			int tmp10 = data->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(673)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_tex_sub_image_2d(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,data->buffer->b,tmp9,tmp10);
		}
		else{
			HX_STACK_LINE(675)
			int tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(675)
			int tmp2 = level;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(675)
			int tmp3 = xoffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(675)
			int tmp4 = yoffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(675)
			int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(675)
			int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(675)
			int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(675)
			int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(675)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_tex_sub_image_2d(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_FFI_obj,texSubImage2D,(void))

Void GL_FFI_obj::uniform1f( Dynamic location,Float x){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform1f",0x8f84a754,"snow.modules.opengl.native.GL_FFI.uniform1f","snow/modules/opengl/native/GL_FFI.hx",680,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(681)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(681)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(681)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1f(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform1f,(void))

Void GL_FFI_obj::uniform1fv( Dynamic location,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform1fv",0x048dc2a2,"snow.modules.opengl.native.GL_FFI.uniform1fv","snow/modules/opengl/native/GL_FFI.hx",686,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(687)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(687)
		if ((tmp)){
			HX_STACK_LINE(688)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(688)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(688)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(688)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1fv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(690)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(690)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1fv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform1fv,(void))

Void GL_FFI_obj::uniform1i( Dynamic location,int x){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform1i",0x8f84a757,"snow.modules.opengl.native.GL_FFI.uniform1i","snow/modules/opengl/native/GL_FFI.hx",695,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(696)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(696)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(696)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1i(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform1i,(void))

Void GL_FFI_obj::uniform1iv( Dynamic location,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform1iv",0x048dc53f,"snow.modules.opengl.native.GL_FFI.uniform1iv","snow/modules/opengl/native/GL_FFI.hx",701,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(702)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(702)
		if ((tmp)){
			HX_STACK_LINE(703)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(703)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(703)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(703)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1iv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(705)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform1iv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform1iv,(void))

Void GL_FFI_obj::uniform2f( Dynamic location,Float x,Float y){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform2f",0x8f84a833,"snow.modules.opengl.native.GL_FFI.uniform2f","snow/modules/opengl/native/GL_FFI.hx",710,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(711)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(711)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(711)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(711)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform2f(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,uniform2f,(void))

Void GL_FFI_obj::uniform2fv( Dynamic location,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform2fv",0x048e84e3,"snow.modules.opengl.native.GL_FFI.uniform2fv","snow/modules/opengl/native/GL_FFI.hx",716,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(717)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		if ((tmp)){
			HX_STACK_LINE(718)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(718)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(718)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(718)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform2fv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(720)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(720)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform2fv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform2fv,(void))

Void GL_FFI_obj::uniform2i( Dynamic location,int x,int y){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform2i",0x8f84a836,"snow.modules.opengl.native.GL_FFI.uniform2i","snow/modules/opengl/native/GL_FFI.hx",725,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(726)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(726)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(726)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(726)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform2i(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,uniform2i,(void))

Void GL_FFI_obj::uniform2iv( Dynamic location,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform2iv",0x048e8780,"snow.modules.opengl.native.GL_FFI.uniform2iv","snow/modules/opengl/native/GL_FFI.hx",731,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(732)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(732)
		if ((tmp)){
			HX_STACK_LINE(733)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(733)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(733)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(733)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform2iv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(735)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(735)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform2iv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform2iv,(void))

Void GL_FFI_obj::uniform3f( Dynamic location,Float x,Float y,Float z){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform3f",0x8f84a912,"snow.modules.opengl.native.GL_FFI.uniform3f","snow/modules/opengl/native/GL_FFI.hx",740,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(741)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(741)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(741)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(741)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(741)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,uniform3f,(void))

Void GL_FFI_obj::uniform3fv( Dynamic location,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform3fv",0x048f4724,"snow.modules.opengl.native.GL_FFI.uniform3fv","snow/modules/opengl/native/GL_FFI.hx",746,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(747)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(747)
		if ((tmp)){
			HX_STACK_LINE(748)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(748)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(748)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(748)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform3fv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(750)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(750)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform3fv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform3fv,(void))

Void GL_FFI_obj::uniform3i( Dynamic location,int x,int y,int z){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform3i",0x8f84a915,"snow.modules.opengl.native.GL_FFI.uniform3i","snow/modules/opengl/native/GL_FFI.hx",755,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(756)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(756)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(756)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(756)
		int tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(756)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform3i(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,uniform3i,(void))

Void GL_FFI_obj::uniform3iv( Dynamic location,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform3iv",0x048f49c1,"snow.modules.opengl.native.GL_FFI.uniform3iv","snow/modules/opengl/native/GL_FFI.hx",761,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(762)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(762)
		if ((tmp)){
			HX_STACK_LINE(763)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(763)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(763)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(763)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform3iv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(765)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(765)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform3iv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform3iv,(void))

Void GL_FFI_obj::uniform4f( Dynamic location,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform4f",0x8f84a9f1,"snow.modules.opengl.native.GL_FFI.uniform4f","snow/modules/opengl/native/GL_FFI.hx",770,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(771)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(771)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(771)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(771)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(771)
		Float tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(771)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_FFI_obj,uniform4f,(void))

Void GL_FFI_obj::uniform4fv( Dynamic location,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform4fv",0x04900965,"snow.modules.opengl.native.GL_FFI.uniform4fv","snow/modules/opengl/native/GL_FFI.hx",776,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(777)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(777)
		if ((tmp)){
			HX_STACK_LINE(778)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(778)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(778)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(778)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4fv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(780)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(780)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4fv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform4fv,(void))

Void GL_FFI_obj::uniform4i( Dynamic location,int x,int y,int z,int w){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform4i",0x8f84a9f4,"snow.modules.opengl.native.GL_FFI.uniform4i","snow/modules/opengl/native/GL_FFI.hx",785,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(786)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(786)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(786)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(786)
		int tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(786)
		int tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(786)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_FFI_obj,uniform4i,(void))

Void GL_FFI_obj::uniform4iv( Dynamic location,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniform4iv",0x04900c02,"snow.modules.opengl.native.GL_FFI.uniform4iv","snow/modules/opengl/native/GL_FFI.hx",791,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(792)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(792)
		if ((tmp)){
			HX_STACK_LINE(793)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(793)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(793)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(793)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4iv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(795)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(795)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform4iv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,uniform4iv,(void))

Void GL_FFI_obj::uniformMatrix2fv( Dynamic location,bool transpose,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniformMatrix2fv",0xfb5aabe2,"snow.modules.opengl.native.GL_FFI.uniformMatrix2fv","snow/modules/opengl/native/GL_FFI.hx",800,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(801)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(801)
		if ((tmp)){
			HX_STACK_LINE(802)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(802)
			bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(802)
			int tmp3 = data->byteOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(802)
			int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(802)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp1,tmp2,data->buffer->b,tmp3,tmp4,(int)2);
		}
		else{
			HX_STACK_LINE(804)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(804)
			bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(804)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp1,tmp2,null(),(int)0,(int)0,(int)2);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,uniformMatrix2fv,(void))

Void GL_FFI_obj::uniformMatrix3fv( Dynamic location,bool transpose,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniformMatrix3fv",0xfb5b6e23,"snow.modules.opengl.native.GL_FFI.uniformMatrix3fv","snow/modules/opengl/native/GL_FFI.hx",809,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(810)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(810)
		if ((tmp)){
			HX_STACK_LINE(811)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(811)
			bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(811)
			int tmp3 = data->byteOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(811)
			int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(811)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp1,tmp2,data->buffer->b,tmp3,tmp4,(int)3);
		}
		else{
			HX_STACK_LINE(813)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(813)
			bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(813)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp1,tmp2,null(),(int)0,(int)0,(int)3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,uniformMatrix3fv,(void))

Void GL_FFI_obj::uniformMatrix4fv( Dynamic location,bool transpose,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","uniformMatrix4fv",0xfb5c3064,"snow.modules.opengl.native.GL_FFI.uniformMatrix4fv","snow/modules/opengl/native/GL_FFI.hx",818,0x724ac2c3)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(819)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(819)
		if ((tmp)){
			HX_STACK_LINE(820)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(820)
			bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(820)
			int tmp3 = data->byteOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(820)
			int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp1,tmp2,data->buffer->b,tmp3,tmp4,(int)4);
		}
		else{
			HX_STACK_LINE(822)
			Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(822)
			bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(822)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_uniform_matrix(tmp1,tmp2,null(),(int)0,(int)0,(int)4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,uniformMatrix4fv,(void))

Void GL_FFI_obj::useProgram( ::snow::modules::opengl::native::GLPO program){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","useProgram",0x20bb3092,"snow.modules.opengl.native.GL_FFI.useProgram","snow/modules/opengl/native/GL_FFI.hx",827,0x724ac2c3)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(828)
		bool tmp = (program == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(828)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(828)
		if ((tmp)){
			HX_STACK_LINE(828)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(828)
			tmp1 = program->id;
		}
		HX_STACK_LINE(828)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_use_program(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,useProgram,(void))

Void GL_FFI_obj::validateProgram( ::snow::modules::opengl::native::GLPO program){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","validateProgram",0xbccaa0d9,"snow.modules.opengl.native.GL_FFI.validateProgram","snow/modules/opengl/native/GL_FFI.hx",833,0x724ac2c3)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(834)
		int tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(834)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_validate_program(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_FFI_obj,validateProgram,(void))

Void GL_FFI_obj::vertexAttrib1f( int indx,Float x){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","vertexAttrib1f",0x8a974678,"snow.modules.opengl.native.GL_FFI.vertexAttrib1f","snow/modules/opengl/native/GL_FFI.hx",839,0x724ac2c3)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(840)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(840)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(840)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib1f(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,vertexAttrib1f,(void))

Void GL_FFI_obj::vertexAttrib1fv( int indx,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","vertexAttrib1fv",0xb9c662fe,"snow.modules.opengl.native.GL_FFI.vertexAttrib1fv","snow/modules/opengl/native/GL_FFI.hx",845,0x724ac2c3)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(846)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(846)
		if ((tmp)){
			HX_STACK_LINE(847)
			int tmp1 = indx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(847)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(847)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(847)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib1fv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(849)
			int tmp1 = indx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(849)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib1fv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,vertexAttrib1fv,(void))

Void GL_FFI_obj::vertexAttrib2f( int indx,Float x,Float y){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","vertexAttrib2f",0x8a974757,"snow.modules.opengl.native.GL_FFI.vertexAttrib2f","snow/modules/opengl/native/GL_FFI.hx",854,0x724ac2c3)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(855)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(855)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(855)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(855)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib2f(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_FFI_obj,vertexAttrib2f,(void))

Void GL_FFI_obj::vertexAttrib2fv( int indx,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","vertexAttrib2fv",0xb9c7253f,"snow.modules.opengl.native.GL_FFI.vertexAttrib2fv","snow/modules/opengl/native/GL_FFI.hx",860,0x724ac2c3)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(861)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(861)
		if ((tmp)){
			HX_STACK_LINE(862)
			int tmp1 = indx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(862)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(862)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(862)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib2fv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(864)
			int tmp1 = indx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(864)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib2fv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,vertexAttrib2fv,(void))

Void GL_FFI_obj::vertexAttrib3f( int indx,Float x,Float y,Float z){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","vertexAttrib3f",0x8a974836,"snow.modules.opengl.native.GL_FFI.vertexAttrib3f","snow/modules/opengl/native/GL_FFI.hx",869,0x724ac2c3)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(870)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(870)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(870)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(870)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(870)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,vertexAttrib3f,(void))

Void GL_FFI_obj::vertexAttrib3fv( int indx,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","vertexAttrib3fv",0xb9c7e780,"snow.modules.opengl.native.GL_FFI.vertexAttrib3fv","snow/modules/opengl/native/GL_FFI.hx",875,0x724ac2c3)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(876)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(876)
		if ((tmp)){
			HX_STACK_LINE(877)
			int tmp1 = indx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(877)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(877)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(877)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib3fv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(879)
			int tmp1 = indx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(879)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib3fv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,vertexAttrib3fv,(void))

Void GL_FFI_obj::vertexAttrib4f( int indx,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","vertexAttrib4f",0x8a974915,"snow.modules.opengl.native.GL_FFI.vertexAttrib4f","snow/modules/opengl/native/GL_FFI.hx",884,0x724ac2c3)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(885)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(885)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(885)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(885)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(885)
		Float tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(885)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib4f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_FFI_obj,vertexAttrib4f,(void))

Void GL_FFI_obj::vertexAttrib4fv( int indx,::snow::api::buffers::ArrayBufferView data){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","vertexAttrib4fv",0xb9c8a9c1,"snow.modules.opengl.native.GL_FFI.vertexAttrib4fv","snow/modules/opengl/native/GL_FFI.hx",890,0x724ac2c3)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(891)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(891)
		if ((tmp)){
			HX_STACK_LINE(892)
			int tmp1 = indx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(892)
			int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(892)
			int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(892)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib4fv(tmp1,data->buffer->b,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(894)
			int tmp1 = indx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(894)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib4fv(tmp1,null(),(int)0,(int)0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,vertexAttrib4fv,(void))

Void GL_FFI_obj::vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","vertexAttribPointer",0x088ea65a,"snow.modules.opengl.native.GL_FFI.vertexAttribPointer","snow/modules/opengl/native/GL_FFI.hx",899,0x724ac2c3)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(normalized,"normalized")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(900)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(900)
		int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(900)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(900)
		bool tmp3 = normalized;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(900)
		int tmp4 = stride;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(900)
		int tmp5 = offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(900)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_FFI_obj,vertexAttribPointer,(void))

Void GL_FFI_obj::viewport( int x,int y,int width,int height){
{
		HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","viewport",0x2b9a90bb,"snow.modules.opengl.native.GL_FFI.viewport","snow/modules/opengl/native/GL_FFI.hx",905,0x724ac2c3)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(906)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(906)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(906)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(906)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(906)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_viewport(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_FFI_obj,viewport,(void))

Dynamic GL_FFI_obj::load( ::String inName,int inArgCount){
	HX_STACK_FRAME("snow.modules.opengl.native.GL_FFI","load",0x8314cffb,"snow.modules.opengl.native.GL_FFI.load","snow/modules/opengl/native/GL_FFI.hx",915,0x724ac2c3)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(inArgCount,"inArgCount")
	HX_STACK_LINE(915)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(916)
		::String tmp = inName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(916)
		int tmp1 = inArgCount;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(916)
		Dynamic tmp2 = ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(916)
		return tmp2;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(918)
				Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(918)
				Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("GL_FFI.hx","\x6f","\xc5","\xd0","\x65"),918,HX_HCSTRING("snow.modules.opengl.native.GL_FFI","\xb9","\xfa","\xcc","\xed"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(918)
				::haxe::Log_obj::trace(tmp,tmp1);
				HX_STACK_LINE(919)
				return null();
			}
		}
	}
	HX_STACK_LINE(915)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_FFI_obj,load,return )

Dynamic GL_FFI_obj::snow_gl_active_texture;

Dynamic GL_FFI_obj::snow_gl_attach_shader;

Dynamic GL_FFI_obj::snow_gl_bind_attrib_location;

Dynamic GL_FFI_obj::snow_gl_bind_buffer;

Dynamic GL_FFI_obj::snow_gl_bind_framebuffer;

Dynamic GL_FFI_obj::snow_gl_bind_renderbuffer;

Dynamic GL_FFI_obj::snow_gl_bind_texture;

Dynamic GL_FFI_obj::snow_gl_blend_color;

Dynamic GL_FFI_obj::snow_gl_blend_equation;

Dynamic GL_FFI_obj::snow_gl_blend_equation_separate;

Dynamic GL_FFI_obj::snow_gl_blend_func;

Dynamic GL_FFI_obj::snow_gl_blend_func_separate;

Dynamic GL_FFI_obj::snow_gl_buffer_data;

Dynamic GL_FFI_obj::snow_gl_buffer_sub_data;

Dynamic GL_FFI_obj::snow_gl_check_framebuffer_status;

Dynamic GL_FFI_obj::snow_gl_clear;

Dynamic GL_FFI_obj::snow_gl_clear_color;

Dynamic GL_FFI_obj::snow_gl_clear_depth;

Dynamic GL_FFI_obj::snow_gl_clear_stencil;

Dynamic GL_FFI_obj::snow_gl_color_mask;

Dynamic GL_FFI_obj::snow_gl_compile_shader;

Dynamic GL_FFI_obj::snow_gl_compressed_tex_image_2d;

Dynamic GL_FFI_obj::snow_gl_compressed_tex_sub_image_2d;

Dynamic GL_FFI_obj::snow_gl_copy_tex_image_2d;

Dynamic GL_FFI_obj::snow_gl_copy_tex_sub_image_2d;

Dynamic GL_FFI_obj::snow_gl_create_buffer;

Dynamic GL_FFI_obj::snow_gl_create_framebuffer;

Dynamic GL_FFI_obj::snow_gl_create_program;

Dynamic GL_FFI_obj::snow_gl_create_render_buffer;

Dynamic GL_FFI_obj::snow_gl_create_shader;

Dynamic GL_FFI_obj::snow_gl_create_texture;

Dynamic GL_FFI_obj::snow_gl_cull_face;

Dynamic GL_FFI_obj::snow_gl_delete_buffer;

Dynamic GL_FFI_obj::snow_gl_delete_framebuffer;

Dynamic GL_FFI_obj::snow_gl_delete_program;

Dynamic GL_FFI_obj::snow_gl_delete_render_buffer;

Dynamic GL_FFI_obj::snow_gl_delete_shader;

Dynamic GL_FFI_obj::snow_gl_delete_texture;

Dynamic GL_FFI_obj::snow_gl_depth_func;

Dynamic GL_FFI_obj::snow_gl_depth_mask;

Dynamic GL_FFI_obj::snow_gl_depth_range;

Dynamic GL_FFI_obj::snow_gl_detach_shader;

Dynamic GL_FFI_obj::snow_gl_disable;

Dynamic GL_FFI_obj::snow_gl_disable_vertex_attrib_array;

Dynamic GL_FFI_obj::snow_gl_draw_arrays;

Dynamic GL_FFI_obj::snow_gl_draw_elements;

Dynamic GL_FFI_obj::snow_gl_enable;

Dynamic GL_FFI_obj::snow_gl_enable_vertex_attrib_array;

Dynamic GL_FFI_obj::snow_gl_finish;

Dynamic GL_FFI_obj::snow_gl_flush;

Dynamic GL_FFI_obj::snow_gl_framebuffer_renderbuffer;

Dynamic GL_FFI_obj::snow_gl_framebuffer_texture2D;

Dynamic GL_FFI_obj::snow_gl_front_face;

Dynamic GL_FFI_obj::snow_gl_generate_mipmap;

Dynamic GL_FFI_obj::snow_gl_get_active_attrib;

Dynamic GL_FFI_obj::snow_gl_get_active_uniform;

Dynamic GL_FFI_obj::snow_gl_get_attrib_location;

Dynamic GL_FFI_obj::snow_gl_get_buffer_paramerter;

Dynamic GL_FFI_obj::snow_gl_get_context_attributes;

Dynamic GL_FFI_obj::snow_gl_get_error;

Dynamic GL_FFI_obj::snow_gl_get_framebuffer_attachment_parameter;

Dynamic GL_FFI_obj::snow_gl_get_parameter;

Dynamic GL_FFI_obj::snow_gl_get_program_info_log;

Dynamic GL_FFI_obj::snow_gl_get_program_parameter;

Dynamic GL_FFI_obj::snow_gl_get_render_buffer_parameter;

Dynamic GL_FFI_obj::snow_gl_get_shader_info_log;

Dynamic GL_FFI_obj::snow_gl_get_shader_parameter;

Dynamic GL_FFI_obj::snow_gl_get_shader_precision_format;

Dynamic GL_FFI_obj::snow_gl_get_shader_source;

Dynamic GL_FFI_obj::snow_gl_get_supported_extensions;

Dynamic GL_FFI_obj::snow_gl_get_tex_parameter;

Dynamic GL_FFI_obj::snow_gl_get_uniform;

Dynamic GL_FFI_obj::snow_gl_get_uniform_location;

Dynamic GL_FFI_obj::snow_gl_get_vertex_attrib;

Dynamic GL_FFI_obj::snow_gl_get_vertex_attrib_offset;

Dynamic GL_FFI_obj::snow_gl_hint;

Dynamic GL_FFI_obj::snow_gl_is_buffer;

Dynamic GL_FFI_obj::snow_gl_is_enabled;

Dynamic GL_FFI_obj::snow_gl_is_framebuffer;

Dynamic GL_FFI_obj::snow_gl_is_program;

Dynamic GL_FFI_obj::snow_gl_is_renderbuffer;

Dynamic GL_FFI_obj::snow_gl_is_shader;

Dynamic GL_FFI_obj::snow_gl_is_texture;

Dynamic GL_FFI_obj::snow_gl_line_width;

Dynamic GL_FFI_obj::snow_gl_link_program;

Dynamic GL_FFI_obj::snow_gl_pixel_storei;

Dynamic GL_FFI_obj::snow_gl_polygon_offset;

Dynamic GL_FFI_obj::snow_gl_read_pixels;

Dynamic GL_FFI_obj::snow_gl_renderbuffer_storage;

Dynamic GL_FFI_obj::snow_gl_sample_coverage;

Dynamic GL_FFI_obj::snow_gl_scissor;

Dynamic GL_FFI_obj::snow_gl_shader_source;

Dynamic GL_FFI_obj::snow_gl_stencil_func;

Dynamic GL_FFI_obj::snow_gl_stencil_func_separate;

Dynamic GL_FFI_obj::snow_gl_stencil_mask;

Dynamic GL_FFI_obj::snow_gl_stencil_mask_separate;

Dynamic GL_FFI_obj::snow_gl_stencil_op;

Dynamic GL_FFI_obj::snow_gl_stencil_op_separate;

Dynamic GL_FFI_obj::snow_gl_tex_image_2d;

Dynamic GL_FFI_obj::snow_gl_tex_parameterf;

Dynamic GL_FFI_obj::snow_gl_tex_parameteri;

Dynamic GL_FFI_obj::snow_gl_tex_sub_image_2d;

Dynamic GL_FFI_obj::snow_gl_uniform1f;

Dynamic GL_FFI_obj::snow_gl_uniform1fv;

Dynamic GL_FFI_obj::snow_gl_uniform1i;

Dynamic GL_FFI_obj::snow_gl_uniform1iv;

Dynamic GL_FFI_obj::snow_gl_uniform2f;

Dynamic GL_FFI_obj::snow_gl_uniform2fv;

Dynamic GL_FFI_obj::snow_gl_uniform2i;

Dynamic GL_FFI_obj::snow_gl_uniform2iv;

Dynamic GL_FFI_obj::snow_gl_uniform3f;

Dynamic GL_FFI_obj::snow_gl_uniform3fv;

Dynamic GL_FFI_obj::snow_gl_uniform3i;

Dynamic GL_FFI_obj::snow_gl_uniform3iv;

Dynamic GL_FFI_obj::snow_gl_uniform4f;

Dynamic GL_FFI_obj::snow_gl_uniform4fv;

Dynamic GL_FFI_obj::snow_gl_uniform4i;

Dynamic GL_FFI_obj::snow_gl_uniform4iv;

Dynamic GL_FFI_obj::snow_gl_uniform_matrix;

Dynamic GL_FFI_obj::snow_gl_use_program;

Dynamic GL_FFI_obj::snow_gl_validate_program;

Dynamic GL_FFI_obj::snow_gl_version;

Dynamic GL_FFI_obj::snow_gl_vertex_attrib1f;

Dynamic GL_FFI_obj::snow_gl_vertex_attrib1fv;

Dynamic GL_FFI_obj::snow_gl_vertex_attrib2f;

Dynamic GL_FFI_obj::snow_gl_vertex_attrib2fv;

Dynamic GL_FFI_obj::snow_gl_vertex_attrib3f;

Dynamic GL_FFI_obj::snow_gl_vertex_attrib3fv;

Dynamic GL_FFI_obj::snow_gl_vertex_attrib4f;

Dynamic GL_FFI_obj::snow_gl_vertex_attrib4fv;

Dynamic GL_FFI_obj::snow_gl_vertex_attrib_pointer;

Dynamic GL_FFI_obj::snow_gl_viewport;

int GL_FFI_obj::DEPTH_BUFFER_BIT;

int GL_FFI_obj::STENCIL_BUFFER_BIT;

int GL_FFI_obj::COLOR_BUFFER_BIT;

int GL_FFI_obj::POINTS;

int GL_FFI_obj::LINES;

int GL_FFI_obj::LINE_LOOP;

int GL_FFI_obj::LINE_STRIP;

int GL_FFI_obj::TRIANGLES;

int GL_FFI_obj::TRIANGLE_STRIP;

int GL_FFI_obj::TRIANGLE_FAN;

int GL_FFI_obj::ZERO;

int GL_FFI_obj::ONE;

int GL_FFI_obj::SRC_COLOR;

int GL_FFI_obj::ONE_MINUS_SRC_COLOR;

int GL_FFI_obj::SRC_ALPHA;

int GL_FFI_obj::ONE_MINUS_SRC_ALPHA;

int GL_FFI_obj::DST_ALPHA;

int GL_FFI_obj::ONE_MINUS_DST_ALPHA;

int GL_FFI_obj::DST_COLOR;

int GL_FFI_obj::ONE_MINUS_DST_COLOR;

int GL_FFI_obj::SRC_ALPHA_SATURATE;

int GL_FFI_obj::FUNC_ADD;

int GL_FFI_obj::BLEND_EQUATION;

int GL_FFI_obj::BLEND_EQUATION_RGB;

int GL_FFI_obj::BLEND_EQUATION_ALPHA;

int GL_FFI_obj::FUNC_SUBTRACT;

int GL_FFI_obj::FUNC_REVERSE_SUBTRACT;

int GL_FFI_obj::BLEND_DST_RGB;

int GL_FFI_obj::BLEND_SRC_RGB;

int GL_FFI_obj::BLEND_DST_ALPHA;

int GL_FFI_obj::BLEND_SRC_ALPHA;

int GL_FFI_obj::CONSTANT_COLOR;

int GL_FFI_obj::ONE_MINUS_CONSTANT_COLOR;

int GL_FFI_obj::CONSTANT_ALPHA;

int GL_FFI_obj::ONE_MINUS_CONSTANT_ALPHA;

int GL_FFI_obj::BLEND_COLOR;

int GL_FFI_obj::ARRAY_BUFFER;

int GL_FFI_obj::ELEMENT_ARRAY_BUFFER;

int GL_FFI_obj::ARRAY_BUFFER_BINDING;

int GL_FFI_obj::ELEMENT_ARRAY_BUFFER_BINDING;

int GL_FFI_obj::STREAM_DRAW;

int GL_FFI_obj::STATIC_DRAW;

int GL_FFI_obj::DYNAMIC_DRAW;

int GL_FFI_obj::BUFFER_SIZE;

int GL_FFI_obj::BUFFER_USAGE;

int GL_FFI_obj::CURRENT_VERTEX_ATTRIB;

int GL_FFI_obj::FRONT;

int GL_FFI_obj::BACK;

int GL_FFI_obj::FRONT_AND_BACK;

int GL_FFI_obj::CULL_FACE;

int GL_FFI_obj::BLEND;

int GL_FFI_obj::DITHER;

int GL_FFI_obj::STENCIL_TEST;

int GL_FFI_obj::DEPTH_TEST;

int GL_FFI_obj::SCISSOR_TEST;

int GL_FFI_obj::POLYGON_OFFSET_FILL;

int GL_FFI_obj::SAMPLE_ALPHA_TO_COVERAGE;

int GL_FFI_obj::SAMPLE_COVERAGE;

int GL_FFI_obj::NO_ERROR;

int GL_FFI_obj::INVALID_ENUM;

int GL_FFI_obj::INVALID_VALUE;

int GL_FFI_obj::INVALID_OPERATION;

int GL_FFI_obj::OUT_OF_MEMORY;

int GL_FFI_obj::CW;

int GL_FFI_obj::CCW;

int GL_FFI_obj::LINE_WIDTH;

int GL_FFI_obj::ALIASED_POINT_SIZE_RANGE;

int GL_FFI_obj::ALIASED_LINE_WIDTH_RANGE;

int GL_FFI_obj::CULL_FACE_MODE;

int GL_FFI_obj::FRONT_FACE;

int GL_FFI_obj::DEPTH_RANGE;

int GL_FFI_obj::DEPTH_WRITEMASK;

int GL_FFI_obj::DEPTH_CLEAR_VALUE;

int GL_FFI_obj::DEPTH_FUNC;

int GL_FFI_obj::STENCIL_CLEAR_VALUE;

int GL_FFI_obj::STENCIL_FUNC;

int GL_FFI_obj::STENCIL_FAIL;

int GL_FFI_obj::STENCIL_PASS_DEPTH_FAIL;

int GL_FFI_obj::STENCIL_PASS_DEPTH_PASS;

int GL_FFI_obj::STENCIL_REF;

int GL_FFI_obj::STENCIL_VALUE_MASK;

int GL_FFI_obj::STENCIL_WRITEMASK;

int GL_FFI_obj::STENCIL_BACK_FUNC;

int GL_FFI_obj::STENCIL_BACK_FAIL;

int GL_FFI_obj::STENCIL_BACK_PASS_DEPTH_FAIL;

int GL_FFI_obj::STENCIL_BACK_PASS_DEPTH_PASS;

int GL_FFI_obj::STENCIL_BACK_REF;

int GL_FFI_obj::STENCIL_BACK_VALUE_MASK;

int GL_FFI_obj::STENCIL_BACK_WRITEMASK;

int GL_FFI_obj::VIEWPORT;

int GL_FFI_obj::SCISSOR_BOX;

int GL_FFI_obj::COLOR_CLEAR_VALUE;

int GL_FFI_obj::COLOR_WRITEMASK;

int GL_FFI_obj::UNPACK_ALIGNMENT;

int GL_FFI_obj::PACK_ALIGNMENT;

int GL_FFI_obj::MAX_TEXTURE_SIZE;

int GL_FFI_obj::MAX_VIEWPORT_DIMS;

int GL_FFI_obj::SUBPIXEL_BITS;

int GL_FFI_obj::RED_BITS;

int GL_FFI_obj::GREEN_BITS;

int GL_FFI_obj::BLUE_BITS;

int GL_FFI_obj::ALPHA_BITS;

int GL_FFI_obj::DEPTH_BITS;

int GL_FFI_obj::STENCIL_BITS;

int GL_FFI_obj::POLYGON_OFFSET_UNITS;

int GL_FFI_obj::POLYGON_OFFSET_FACTOR;

int GL_FFI_obj::TEXTURE_BINDING_2D;

int GL_FFI_obj::SAMPLE_BUFFERS;

int GL_FFI_obj::SAMPLES;

int GL_FFI_obj::SAMPLE_COVERAGE_VALUE;

int GL_FFI_obj::SAMPLE_COVERAGE_INVERT;

int GL_FFI_obj::COMPRESSED_TEXTURE_FORMATS;

int GL_FFI_obj::DONT_CARE;

int GL_FFI_obj::FASTEST;

int GL_FFI_obj::NICEST;

int GL_FFI_obj::GENERATE_MIPMAP_HINT;

int GL_FFI_obj::BYTE;

int GL_FFI_obj::UNSIGNED_BYTE;

int GL_FFI_obj::SHORT;

int GL_FFI_obj::UNSIGNED_SHORT;

int GL_FFI_obj::INT;

int GL_FFI_obj::UNSIGNED_INT;

int GL_FFI_obj::FLOAT;

int GL_FFI_obj::DEPTH_COMPONENT;

int GL_FFI_obj::ALPHA;

int GL_FFI_obj::RGB;

int GL_FFI_obj::RGBA;

int GL_FFI_obj::LUMINANCE;

int GL_FFI_obj::LUMINANCE_ALPHA;

int GL_FFI_obj::UNSIGNED_SHORT_4_4_4_4;

int GL_FFI_obj::UNSIGNED_SHORT_5_5_5_1;

int GL_FFI_obj::UNSIGNED_SHORT_5_6_5;

int GL_FFI_obj::FRAGMENT_SHADER;

int GL_FFI_obj::VERTEX_SHADER;

int GL_FFI_obj::MAX_VERTEX_ATTRIBS;

int GL_FFI_obj::MAX_VERTEX_UNIFORM_VECTORS;

int GL_FFI_obj::MAX_VARYING_VECTORS;

int GL_FFI_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS;

int GL_FFI_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS;

int GL_FFI_obj::MAX_TEXTURE_IMAGE_UNITS;

int GL_FFI_obj::MAX_FRAGMENT_UNIFORM_VECTORS;

int GL_FFI_obj::SHADER_TYPE;

int GL_FFI_obj::DELETE_STATUS;

int GL_FFI_obj::LINK_STATUS;

int GL_FFI_obj::VALIDATE_STATUS;

int GL_FFI_obj::ATTACHED_SHADERS;

int GL_FFI_obj::ACTIVE_UNIFORMS;

int GL_FFI_obj::ACTIVE_ATTRIBUTES;

int GL_FFI_obj::SHADING_LANGUAGE_VERSION;

int GL_FFI_obj::CURRENT_PROGRAM;

int GL_FFI_obj::NEVER;

int GL_FFI_obj::LESS;

int GL_FFI_obj::EQUAL;

int GL_FFI_obj::LEQUAL;

int GL_FFI_obj::GREATER;

int GL_FFI_obj::NOTEQUAL;

int GL_FFI_obj::GEQUAL;

int GL_FFI_obj::ALWAYS;

int GL_FFI_obj::KEEP;

int GL_FFI_obj::REPLACE;

int GL_FFI_obj::INCR;

int GL_FFI_obj::DECR;

int GL_FFI_obj::INVERT;

int GL_FFI_obj::INCR_WRAP;

int GL_FFI_obj::DECR_WRAP;

int GL_FFI_obj::VENDOR;

int GL_FFI_obj::RENDERER;

int GL_FFI_obj::VERSION;

int GL_FFI_obj::NEAREST;

int GL_FFI_obj::LINEAR;

int GL_FFI_obj::NEAREST_MIPMAP_NEAREST;

int GL_FFI_obj::LINEAR_MIPMAP_NEAREST;

int GL_FFI_obj::NEAREST_MIPMAP_LINEAR;

int GL_FFI_obj::LINEAR_MIPMAP_LINEAR;

int GL_FFI_obj::TEXTURE_MAG_FILTER;

int GL_FFI_obj::TEXTURE_MIN_FILTER;

int GL_FFI_obj::TEXTURE_WRAP_S;

int GL_FFI_obj::TEXTURE_WRAP_T;

int GL_FFI_obj::TEXTURE_2D;

int GL_FFI_obj::TEXTURE;

int GL_FFI_obj::TEXTURE_CUBE_MAP;

int GL_FFI_obj::TEXTURE_BINDING_CUBE_MAP;

int GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_X;

int GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_X;

int GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_Y;

int GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y;

int GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_Z;

int GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z;

int GL_FFI_obj::MAX_CUBE_MAP_TEXTURE_SIZE;

int GL_FFI_obj::TEXTURE0;

int GL_FFI_obj::TEXTURE1;

int GL_FFI_obj::TEXTURE2;

int GL_FFI_obj::TEXTURE3;

int GL_FFI_obj::TEXTURE4;

int GL_FFI_obj::TEXTURE5;

int GL_FFI_obj::TEXTURE6;

int GL_FFI_obj::TEXTURE7;

int GL_FFI_obj::TEXTURE8;

int GL_FFI_obj::TEXTURE9;

int GL_FFI_obj::TEXTURE10;

int GL_FFI_obj::TEXTURE11;

int GL_FFI_obj::TEXTURE12;

int GL_FFI_obj::TEXTURE13;

int GL_FFI_obj::TEXTURE14;

int GL_FFI_obj::TEXTURE15;

int GL_FFI_obj::TEXTURE16;

int GL_FFI_obj::TEXTURE17;

int GL_FFI_obj::TEXTURE18;

int GL_FFI_obj::TEXTURE19;

int GL_FFI_obj::TEXTURE20;

int GL_FFI_obj::TEXTURE21;

int GL_FFI_obj::TEXTURE22;

int GL_FFI_obj::TEXTURE23;

int GL_FFI_obj::TEXTURE24;

int GL_FFI_obj::TEXTURE25;

int GL_FFI_obj::TEXTURE26;

int GL_FFI_obj::TEXTURE27;

int GL_FFI_obj::TEXTURE28;

int GL_FFI_obj::TEXTURE29;

int GL_FFI_obj::TEXTURE30;

int GL_FFI_obj::TEXTURE31;

int GL_FFI_obj::ACTIVE_TEXTURE;

int GL_FFI_obj::REPEAT;

int GL_FFI_obj::CLAMP_TO_EDGE;

int GL_FFI_obj::MIRRORED_REPEAT;

int GL_FFI_obj::FLOAT_VEC2;

int GL_FFI_obj::FLOAT_VEC3;

int GL_FFI_obj::FLOAT_VEC4;

int GL_FFI_obj::INT_VEC2;

int GL_FFI_obj::INT_VEC3;

int GL_FFI_obj::INT_VEC4;

int GL_FFI_obj::BOOL;

int GL_FFI_obj::BOOL_VEC2;

int GL_FFI_obj::BOOL_VEC3;

int GL_FFI_obj::BOOL_VEC4;

int GL_FFI_obj::FLOAT_MAT2;

int GL_FFI_obj::FLOAT_MAT3;

int GL_FFI_obj::FLOAT_MAT4;

int GL_FFI_obj::SAMPLER_2D;

int GL_FFI_obj::SAMPLER_CUBE;

int GL_FFI_obj::VERTEX_ATTRIB_ARRAY_ENABLED;

int GL_FFI_obj::VERTEX_ATTRIB_ARRAY_SIZE;

int GL_FFI_obj::VERTEX_ATTRIB_ARRAY_STRIDE;

int GL_FFI_obj::VERTEX_ATTRIB_ARRAY_TYPE;

int GL_FFI_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED;

int GL_FFI_obj::VERTEX_ATTRIB_ARRAY_POINTER;

int GL_FFI_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

int GL_FFI_obj::VERTEX_PROGRAM_POINT_SIZE;

int GL_FFI_obj::POINT_SPRITE;

int GL_FFI_obj::COMPILE_STATUS;

int GL_FFI_obj::LOW_FLOAT;

int GL_FFI_obj::MEDIUM_FLOAT;

int GL_FFI_obj::HIGH_FLOAT;

int GL_FFI_obj::LOW_INT;

int GL_FFI_obj::MEDIUM_INT;

int GL_FFI_obj::HIGH_INT;

int GL_FFI_obj::FRAMEBUFFER;

int GL_FFI_obj::RENDERBUFFER;

int GL_FFI_obj::RGBA4;

int GL_FFI_obj::RGB5_A1;

int GL_FFI_obj::RGB565;

int GL_FFI_obj::DEPTH_COMPONENT16;

int GL_FFI_obj::STENCIL_INDEX;

int GL_FFI_obj::STENCIL_INDEX8;

int GL_FFI_obj::DEPTH_STENCIL;

int GL_FFI_obj::RENDERBUFFER_WIDTH;

int GL_FFI_obj::RENDERBUFFER_HEIGHT;

int GL_FFI_obj::RENDERBUFFER_INTERNAL_FORMAT;

int GL_FFI_obj::RENDERBUFFER_RED_SIZE;

int GL_FFI_obj::RENDERBUFFER_GREEN_SIZE;

int GL_FFI_obj::RENDERBUFFER_BLUE_SIZE;

int GL_FFI_obj::RENDERBUFFER_ALPHA_SIZE;

int GL_FFI_obj::RENDERBUFFER_DEPTH_SIZE;

int GL_FFI_obj::RENDERBUFFER_STENCIL_SIZE;

int GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;

int GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;

int GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

int GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;

int GL_FFI_obj::COLOR_ATTACHMENT0;

int GL_FFI_obj::DEPTH_ATTACHMENT;

int GL_FFI_obj::STENCIL_ATTACHMENT;

int GL_FFI_obj::DEPTH_STENCIL_ATTACHMENT;

int GL_FFI_obj::NONE;

int GL_FFI_obj::FRAMEBUFFER_COMPLETE;

int GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT;

int GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;

int GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS;

int GL_FFI_obj::FRAMEBUFFER_UNSUPPORTED;

int GL_FFI_obj::FRAMEBUFFER_BINDING;

int GL_FFI_obj::RENDERBUFFER_BINDING;

int GL_FFI_obj::MAX_RENDERBUFFER_SIZE;

int GL_FFI_obj::INVALID_FRAMEBUFFER_OPERATION;

int GL_FFI_obj::UNPACK_FLIP_Y_WEBGL;

int GL_FFI_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL;

int GL_FFI_obj::CONTEXT_LOST_WEBGL;

int GL_FFI_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL;

int GL_FFI_obj::BROWSER_DEFAULT_WEBGL;


GL_FFI_obj::GL_FFI_obj()
{
}

bool GL_FFI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { outValue = hint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"finish") ) { outValue = finish_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scissor") ) { outValue = scissor_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cullFace") ) { outValue = cullFace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { outValue = isBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isShader") ) { outValue = isShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"viewport") ) { outValue = viewport_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendFunc") ) { outValue = blendFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"colorMask") ) { outValue = colorMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { outValue = depthFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthMask") ) { outValue = depthMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"frontFace") ) { outValue = frontFace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { outValue = isEnabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isProgram") ) { outValue = isProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isTexture") ) { outValue = isTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { outValue = lineWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { outValue = stencilOp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { outValue = uniform1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { outValue = uniform1i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { outValue = uniform2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { outValue = uniform2i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { outValue = uniform3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { outValue = uniform3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { outValue = uniform4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { outValue = uniform4i_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { outValue = bindBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendColor") ) { outValue = blendColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearColor") ) { outValue = clearColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { outValue = clearDepth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthRange") ) { outValue = depthRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { outValue = drawArrays_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniform") ) { outValue = getUniform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readPixels") ) { outValue = readPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { outValue = texImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { outValue = uniform1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { outValue = uniform1iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { outValue = uniform2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { outValue = uniform2iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { outValue = uniform3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { outValue = uniform3iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { outValue = uniform4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { outValue = uniform4iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"useProgram") ) { outValue = useProgram_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindTexture") ) { outValue = bindTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { outValue = linkProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { outValue = pixelStorei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { outValue = stencilFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { outValue = stencilMask_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attachShader") ) { outValue = attachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { outValue = clearStencil_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { outValue = createBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createShader") ) { outValue = createShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { outValue = deleteBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { outValue = deleteShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"detachShader") ) { outValue = detachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawElements") ) { outValue = drawElements_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getExtension") ) { outValue = getExtension_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getParameter") ) { outValue = getParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { outValue = shaderSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_hint") ) { outValue = snow_gl_hint; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"versionString") ) { outValue = versionString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"activeTexture") ) { outValue = activeTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { outValue = blendEquation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { outValue = bufferSubData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createProgram") ) { outValue = createProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createTexture") ) { outValue = createTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { outValue = deleteProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { outValue = deleteTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { outValue = isFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { outValue = polygonOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { outValue = texParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { outValue = texParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { outValue = texSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_clear") ) { outValue = snow_gl_clear; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_flush") ) { outValue = snow_gl_flush; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { outValue = copyTexImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { outValue = generateMipmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { outValue = isRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { outValue = sampleCoverage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { outValue = vertexAttrib1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { outValue = vertexAttrib2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { outValue = vertexAttrib3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { outValue = vertexAttrib4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_enable") ) { outValue = snow_gl_enable; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_finish") ) { outValue = snow_gl_finish; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { outValue = bindFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { outValue = getActiveAttrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { outValue = getShaderSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { outValue = getTexParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { outValue = getVertexAttrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { outValue = validateProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { outValue = vertexAttrib1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { outValue = vertexAttrib2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { outValue = vertexAttrib3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { outValue = vertexAttrib4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_disable") ) { outValue = snow_gl_disable; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_scissor") ) { outValue = snow_gl_scissor; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_version") ) { outValue = snow_gl_version; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { outValue = bindRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { outValue = getActiveUniform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { outValue = getShaderInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { outValue = uniformMatrix2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { outValue = uniformMatrix3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { outValue = uniformMatrix4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_viewport") ) { outValue = snow_gl_viewport; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { outValue = blendFuncSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { outValue = copyTexSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { outValue = createFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { outValue = deleteFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { outValue = getAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { outValue = getProgramInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { outValue = stencilOpSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_cull_face") ) { outValue = snow_gl_cull_face; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_error") ) { outValue = snow_gl_get_error; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_is_buffer") ) { outValue = snow_gl_is_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_is_shader") ) { outValue = snow_gl_is_shader; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1f") ) { outValue = snow_gl_uniform1f; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1i") ) { outValue = snow_gl_uniform1i; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2f") ) { outValue = snow_gl_uniform2f; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2i") ) { outValue = snow_gl_uniform2i; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3f") ) { outValue = snow_gl_uniform3f; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3i") ) { outValue = snow_gl_uniform3i; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4f") ) { outValue = snow_gl_uniform4f; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4i") ) { outValue = snow_gl_uniform4i; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { outValue = bindAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { outValue = createRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { outValue = deleteRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { outValue = getAttachedShaders_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { outValue = getBufferParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { outValue = getShaderParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { outValue = getUniformLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_blend_func") ) { outValue = snow_gl_blend_func; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_color_mask") ) { outValue = snow_gl_color_mask; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_depth_func") ) { outValue = snow_gl_depth_func; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_depth_mask") ) { outValue = snow_gl_depth_mask; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_front_face") ) { outValue = snow_gl_front_face; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_is_enabled") ) { outValue = snow_gl_is_enabled; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_is_program") ) { outValue = snow_gl_is_program; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_is_texture") ) { outValue = snow_gl_is_texture; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_line_width") ) { outValue = snow_gl_line_width; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_op") ) { outValue = snow_gl_stencil_op; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1fv") ) { outValue = snow_gl_uniform1fv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform1iv") ) { outValue = snow_gl_uniform1iv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2fv") ) { outValue = snow_gl_uniform2fv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform2iv") ) { outValue = snow_gl_uniform2iv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3fv") ) { outValue = snow_gl_uniform3fv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform3iv") ) { outValue = snow_gl_uniform3iv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4fv") ) { outValue = snow_gl_uniform4fv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform4iv") ) { outValue = snow_gl_uniform4iv; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { outValue = getProgramParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { outValue = renderbufferStorage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { outValue = stencilFuncSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { outValue = stencilMaskSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { outValue = vertexAttribPointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_bind_buffer") ) { outValue = snow_gl_bind_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_blend_color") ) { outValue = snow_gl_blend_color; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_buffer_data") ) { outValue = snow_gl_buffer_data; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_clear_color") ) { outValue = snow_gl_clear_color; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_clear_depth") ) { outValue = snow_gl_clear_depth; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_depth_range") ) { outValue = snow_gl_depth_range; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_draw_arrays") ) { outValue = snow_gl_draw_arrays; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_uniform") ) { outValue = snow_gl_get_uniform; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_read_pixels") ) { outValue = snow_gl_read_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_use_program") ) { outValue = snow_gl_use_program; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { outValue = compressedTexImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { outValue = framebufferTexture2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { outValue = getContextAttributes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_bind_texture") ) { outValue = snow_gl_bind_texture; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_link_program") ) { outValue = snow_gl_link_program; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_pixel_storei") ) { outValue = snow_gl_pixel_storei; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_func") ) { outValue = snow_gl_stencil_func; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_mask") ) { outValue = snow_gl_stencil_mask; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_image_2d") ) { outValue = snow_gl_tex_image_2d; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { outValue = blendEquationSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribOffset") ) { outValue = getVertexAttribOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_attach_shader") ) { outValue = snow_gl_attach_shader; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_clear_stencil") ) { outValue = snow_gl_clear_stencil; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_create_buffer") ) { outValue = snow_gl_create_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_create_shader") ) { outValue = snow_gl_create_shader; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_buffer") ) { outValue = snow_gl_delete_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_shader") ) { outValue = snow_gl_delete_shader; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_detach_shader") ) { outValue = snow_gl_detach_shader; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_draw_elements") ) { outValue = snow_gl_draw_elements; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_parameter") ) { outValue = snow_gl_get_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_shader_source") ) { outValue = snow_gl_shader_source; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { outValue = checkFramebufferStatus_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { outValue = getSupportedExtensions_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_active_texture") ) { outValue = snow_gl_active_texture; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_blend_equation") ) { outValue = snow_gl_blend_equation; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_compile_shader") ) { outValue = snow_gl_compile_shader; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_create_program") ) { outValue = snow_gl_create_program; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_create_texture") ) { outValue = snow_gl_create_texture; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_program") ) { outValue = snow_gl_delete_program; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_texture") ) { outValue = snow_gl_delete_texture; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_is_framebuffer") ) { outValue = snow_gl_is_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_polygon_offset") ) { outValue = snow_gl_polygon_offset; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_parameterf") ) { outValue = snow_gl_tex_parameterf; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_parameteri") ) { outValue = snow_gl_tex_parameteri; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_uniform_matrix") ) { outValue = snow_gl_uniform_matrix; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { outValue = compressedTexSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { outValue = enableVertexAttribArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { outValue = framebufferRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_buffer_sub_data") ) { outValue = snow_gl_buffer_sub_data; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_generate_mipmap") ) { outValue = snow_gl_generate_mipmap; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_is_renderbuffer") ) { outValue = snow_gl_is_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_sample_coverage") ) { outValue = snow_gl_sample_coverage; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib1f") ) { outValue = snow_gl_vertex_attrib1f; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib2f") ) { outValue = snow_gl_vertex_attrib2f; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib3f") ) { outValue = snow_gl_vertex_attrib3f; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib4f") ) { outValue = snow_gl_vertex_attrib4f; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { outValue = disableVertexAttribArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { outValue = getRenderbufferParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { outValue = getShaderPrecisionFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_bind_framebuffer") ) { outValue = snow_gl_bind_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_tex_sub_image_2d") ) { outValue = snow_gl_tex_sub_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_validate_program") ) { outValue = snow_gl_validate_program; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib1fv") ) { outValue = snow_gl_vertex_attrib1fv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib2fv") ) { outValue = snow_gl_vertex_attrib2fv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib3fv") ) { outValue = snow_gl_vertex_attrib3fv; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib4fv") ) { outValue = snow_gl_vertex_attrib4fv; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"snow_gl_bind_renderbuffer") ) { outValue = snow_gl_bind_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_copy_tex_image_2d") ) { outValue = snow_gl_copy_tex_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_active_attrib") ) { outValue = snow_gl_get_active_attrib; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_source") ) { outValue = snow_gl_get_shader_source; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_tex_parameter") ) { outValue = snow_gl_get_tex_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_vertex_attrib") ) { outValue = snow_gl_get_vertex_attrib; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"snow_gl_create_framebuffer") ) { outValue = snow_gl_create_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_framebuffer") ) { outValue = snow_gl_delete_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_active_uniform") ) { outValue = snow_gl_get_active_uniform; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"snow_gl_blend_func_separate") ) { outValue = snow_gl_blend_func_separate; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_attrib_location") ) { outValue = snow_gl_get_attrib_location; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_info_log") ) { outValue = snow_gl_get_shader_info_log; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_op_separate") ) { outValue = snow_gl_stencil_op_separate; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"snow_gl_bind_attrib_location") ) { outValue = snow_gl_bind_attrib_location; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_create_render_buffer") ) { outValue = snow_gl_create_render_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_delete_render_buffer") ) { outValue = snow_gl_delete_render_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_program_info_log") ) { outValue = snow_gl_get_program_info_log; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_parameter") ) { outValue = snow_gl_get_shader_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_uniform_location") ) { outValue = snow_gl_get_uniform_location; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_renderbuffer_storage") ) { outValue = snow_gl_renderbuffer_storage; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"snow_gl_copy_tex_sub_image_2d") ) { outValue = snow_gl_copy_tex_sub_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_framebuffer_texture2D") ) { outValue = snow_gl_framebuffer_texture2D; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_buffer_paramerter") ) { outValue = snow_gl_get_buffer_paramerter; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_program_parameter") ) { outValue = snow_gl_get_program_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_func_separate") ) { outValue = snow_gl_stencil_func_separate; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_stencil_mask_separate") ) { outValue = snow_gl_stencil_mask_separate; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_vertex_attrib_pointer") ) { outValue = snow_gl_vertex_attrib_pointer; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"snow_gl_get_context_attributes") ) { outValue = snow_gl_get_context_attributes; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_gl_blend_equation_separate") ) { outValue = snow_gl_blend_equation_separate; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_compressed_tex_image_2d") ) { outValue = snow_gl_compressed_tex_image_2d; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"snow_gl_check_framebuffer_status") ) { outValue = snow_gl_check_framebuffer_status; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_framebuffer_renderbuffer") ) { outValue = snow_gl_framebuffer_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_supported_extensions") ) { outValue = snow_gl_get_supported_extensions; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_vertex_attrib_offset") ) { outValue = snow_gl_get_vertex_attrib_offset; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { outValue = getFramebufferAttachmentParameter_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"snow_gl_enable_vertex_attrib_array") ) { outValue = snow_gl_enable_vertex_attrib_array; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"snow_gl_compressed_tex_sub_image_2d") ) { outValue = snow_gl_compressed_tex_sub_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_disable_vertex_attrib_array") ) { outValue = snow_gl_disable_vertex_attrib_array; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_render_buffer_parameter") ) { outValue = snow_gl_get_render_buffer_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"snow_gl_get_shader_precision_format") ) { outValue = snow_gl_get_shader_precision_format; return true;  }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"snow_gl_get_framebuffer_attachment_parameter") ) { outValue = snow_gl_get_framebuffer_attachment_parameter; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_active_texture,HX_HCSTRING("snow_gl_active_texture","\x40","\x9e","\xa9","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_attach_shader,HX_HCSTRING("snow_gl_attach_shader","\x41","\x71","\xd1","\xb6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_bind_attrib_location,HX_HCSTRING("snow_gl_bind_attrib_location","\xe6","\x75","\x2c","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_bind_buffer,HX_HCSTRING("snow_gl_bind_buffer","\xa4","\x17","\x73","\x69")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_bind_framebuffer,HX_HCSTRING("snow_gl_bind_framebuffer","\xc9","\xa7","\xaa","\xad")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_bind_renderbuffer,HX_HCSTRING("snow_gl_bind_renderbuffer","\x7a","\x3a","\x34","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_bind_texture,HX_HCSTRING("snow_gl_bind_texture","\xb7","\xbd","\x91","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_blend_color,HX_HCSTRING("snow_gl_blend_color","\xd7","\x90","\x68","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_blend_equation,HX_HCSTRING("snow_gl_blend_equation","\x98","\xbc","\x3a","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_blend_equation_separate,HX_HCSTRING("snow_gl_blend_equation_separate","\x2a","\x07","\x77","\x96")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_blend_func,HX_HCSTRING("snow_gl_blend_func","\x50","\x76","\x92","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_blend_func_separate,HX_HCSTRING("snow_gl_blend_func_separate","\x72","\x56","\x66","\x16")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_buffer_data,HX_HCSTRING("snow_gl_buffer_data","\x2b","\xf2","\xd9","\xfa")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_buffer_sub_data,HX_HCSTRING("snow_gl_buffer_sub_data","\x0a","\x89","\xc1","\x18")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_check_framebuffer_status,HX_HCSTRING("snow_gl_check_framebuffer_status","\x79","\x29","\xb4","\xd2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_clear,HX_HCSTRING("snow_gl_clear","\x2f","\x69","\xfa","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_clear_color,HX_HCSTRING("snow_gl_clear_color","\x13","\xaf","\xe3","\xa0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_clear_depth,HX_HCSTRING("snow_gl_clear_depth","\xb3","\x2e","\xb1","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_clear_stencil,HX_HCSTRING("snow_gl_clear_stencil","\xac","\xc7","\x19","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_color_mask,HX_HCSTRING("snow_gl_color_mask","\xa6","\x21","\x38","\x91")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_compile_shader,HX_HCSTRING("snow_gl_compile_shader","\xcf","\x93","\x9a","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_compressed_tex_image_2d,HX_HCSTRING("snow_gl_compressed_tex_image_2d","\x0e","\x64","\x9a","\xb4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_compressed_tex_sub_image_2d,HX_HCSTRING("snow_gl_compressed_tex_sub_image_2d","\xed","\x1d","\x60","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_copy_tex_image_2d,HX_HCSTRING("snow_gl_copy_tex_image_2d","\xda","\xde","\x60","\xa4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_copy_tex_sub_image_2d,HX_HCSTRING("snow_gl_copy_tex_sub_image_2d","\xb9","\xee","\xa9","\x82")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_create_buffer,HX_HCSTRING("snow_gl_create_buffer","\xc5","\xe8","\xaf","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_create_framebuffer,HX_HCSTRING("snow_gl_create_framebuffer","\x08","\x1f","\x1f","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_create_program,HX_HCSTRING("snow_gl_create_program","\x1f","\x6b","\xa4","\x40")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_create_render_buffer,HX_HCSTRING("snow_gl_create_render_buffer","\xe4","\x20","\xea","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_create_shader,HX_HCSTRING("snow_gl_create_shader","\xea","\xea","\x3b","\x88")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_create_texture,HX_HCSTRING("snow_gl_create_texture","\x76","\xe9","\x8b","\xeb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_cull_face,HX_HCSTRING("snow_gl_cull_face","\x2c","\x16","\x9a","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_delete_buffer,HX_HCSTRING("snow_gl_delete_buffer","\x76","\xa3","\xf6","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_delete_framebuffer,HX_HCSTRING("snow_gl_delete_framebuffer","\xb7","\x02","\x61","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_delete_program,HX_HCSTRING("snow_gl_delete_program","\x4e","\x0b","\x41","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_delete_render_buffer,HX_HCSTRING("snow_gl_delete_render_buffer","\x53","\x8e","\x2f","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_delete_shader,HX_HCSTRING("snow_gl_delete_shader","\x9b","\xa5","\x82","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_delete_texture,HX_HCSTRING("snow_gl_delete_texture","\xa5","\x89","\x28","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_depth_func,HX_HCSTRING("snow_gl_depth_func","\x5e","\xa8","\xa6","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_depth_mask,HX_HCSTRING("snow_gl_depth_mask","\x06","\xfe","\x37","\xc9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_depth_range,HX_HCSTRING("snow_gl_depth_range","\x63","\x5f","\xc3","\x28")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_detach_shader,HX_HCSTRING("snow_gl_detach_shader","\x73","\x7d","\xdb","\xad")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_disable,HX_HCSTRING("snow_gl_disable","\x0a","\x0e","\x5e","\x7b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_disable_vertex_attrib_array,HX_HCSTRING("snow_gl_disable_vertex_attrib_array","\xaa","\xbe","\xc1","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_draw_arrays,HX_HCSTRING("snow_gl_draw_arrays","\xf7","\x03","\xa6","\x9d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_draw_elements,HX_HCSTRING("snow_gl_draw_elements","\xb4","\xca","\x60","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_enable,HX_HCSTRING("snow_gl_enable","\xa1","\x64","\x01","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_enable_vertex_attrib_array,HX_HCSTRING("snow_gl_enable_vertex_attrib_array","\xc1","\x8a","\x6d","\xa4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_finish,HX_HCSTRING("snow_gl_finish","\x71","\xf6","\xf8","\x26")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_flush,HX_HCSTRING("snow_gl_flush","\x66","\x5a","\x3a","\xad")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_framebuffer_renderbuffer,HX_HCSTRING("snow_gl_framebuffer_renderbuffer","\x46","\x10","\x1e","\x82")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_framebuffer_texture2D,HX_HCSTRING("snow_gl_framebuffer_texture2D","\xfd","\xd7","\x05","\x42")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_front_face,HX_HCSTRING("snow_gl_front_face","\x51","\xd0","\x03","\x95")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_generate_mipmap,HX_HCSTRING("snow_gl_generate_mipmap","\xb4","\xf6","\x8d","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_active_attrib,HX_HCSTRING("snow_gl_get_active_attrib","\xdc","\x09","\x01","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_active_uniform,HX_HCSTRING("snow_gl_get_active_uniform","\x62","\x5e","\x1e","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_attrib_location,HX_HCSTRING("snow_gl_get_attrib_location","\x43","\x63","\x78","\x8d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_buffer_paramerter,HX_HCSTRING("snow_gl_get_buffer_paramerter","\x7f","\xb6","\xd1","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_context_attributes,HX_HCSTRING("snow_gl_get_context_attributes","\xce","\x23","\x56","\x9e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_error,HX_HCSTRING("snow_gl_get_error","\xc1","\x98","\xa3","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_framebuffer_attachment_parameter,HX_HCSTRING("snow_gl_get_framebuffer_attachment_parameter","\x86","\x34","\x22","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_parameter,HX_HCSTRING("snow_gl_get_parameter","\x22","\x73","\xc6","\xeb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_program_info_log,HX_HCSTRING("snow_gl_get_program_info_log","\xf5","\x30","\x25","\x18")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_program_parameter,HX_HCSTRING("snow_gl_get_program_parameter","\x67","\xa7","\x71","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_render_buffer_parameter,HX_HCSTRING("snow_gl_get_render_buffer_parameter","\xec","\x8f","\x46","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_shader_info_log,HX_HCSTRING("snow_gl_get_shader_info_log","\xc6","\x6a","\x18","\x82")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_shader_parameter,HX_HCSTRING("snow_gl_get_shader_parameter","\x76","\x04","\x51","\x95")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_shader_precision_format,HX_HCSTRING("snow_gl_get_shader_precision_format","\x2b","\x64","\xe4","\x61")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_shader_source,HX_HCSTRING("snow_gl_get_shader_source","\xee","\x4f","\xed","\x51")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_supported_extensions,HX_HCSTRING("snow_gl_get_supported_extensions","\xec","\xa8","\x03","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_tex_parameter,HX_HCSTRING("snow_gl_get_tex_parameter","\x0a","\x04","\x49","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_uniform,HX_HCSTRING("snow_gl_get_uniform","\x6d","\xfe","\xa5","\x36")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_uniform_location,HX_HCSTRING("snow_gl_get_uniform_location","\x87","\xb1","\x3b","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_vertex_attrib,HX_HCSTRING("snow_gl_get_vertex_attrib","\xfe","\xff","\x76","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_get_vertex_attrib_offset,HX_HCSTRING("snow_gl_get_vertex_attrib_offset","\xf4","\xc4","\xba","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_hint,HX_HCSTRING("snow_gl_hint","\x25","\x90","\x97","\x72")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_is_buffer,HX_HCSTRING("snow_gl_is_buffer","\x97","\x94","\x89","\x07")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_is_enabled,HX_HCSTRING("snow_gl_is_enabled","\x0a","\xd1","\x78","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_is_framebuffer,HX_HCSTRING("snow_gl_is_framebuffer","\xf6","\x59","\x4b","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_is_program,HX_HCSTRING("snow_gl_is_program","\x0d","\x17","\x41","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_is_renderbuffer,HX_HCSTRING("snow_gl_is_renderbuffer","\xad","\x6f","\x2f","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_is_shader,HX_HCSTRING("snow_gl_is_shader","\xbc","\x96","\x15","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_is_texture,HX_HCSTRING("snow_gl_is_texture","\x64","\x95","\x28","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_line_width,HX_HCSTRING("snow_gl_line_width","\x59","\xa1","\xef","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_link_program,HX_HCSTRING("snow_gl_link_program","\x9d","\x66","\xbe","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_pixel_storei,HX_HCSTRING("snow_gl_pixel_storei","\xdf","\x39","\x45","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_polygon_offset,HX_HCSTRING("snow_gl_polygon_offset","\x16","\x4e","\x9e","\xe1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_read_pixels,HX_HCSTRING("snow_gl_read_pixels","\x58","\xc9","\x02","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_renderbuffer_storage,HX_HCSTRING("snow_gl_renderbuffer_storage","\x30","\x3a","\xfa","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_sample_coverage,HX_HCSTRING("snow_gl_sample_coverage","\xff","\xe9","\x1a","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_scissor,HX_HCSTRING("snow_gl_scissor","\x3e","\xcc","\xec","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_shader_source,HX_HCSTRING("snow_gl_shader_source","\x97","\xcb","\xaa","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_stencil_func,HX_HCSTRING("snow_gl_stencil_func","\x45","\x38","\x3e","\xa4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_stencil_func_separate,HX_HCSTRING("snow_gl_stencil_func_separate","\xdd","\x2d","\xff","\x50")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_stencil_mask,HX_HCSTRING("snow_gl_stencil_mask","\xed","\x8d","\xcf","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_stencil_mask_separate,HX_HCSTRING("snow_gl_stencil_mask_separate","\x35","\xe3","\xf9","\x9c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_stencil_op,HX_HCSTRING("snow_gl_stencil_op","\xe2","\xbb","\x9c","\xbc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_stencil_op_separate,HX_HCSTRING("snow_gl_stencil_op_separate","\xa0","\xce","\xe3","\x45")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_tex_image_2d,HX_HCSTRING("snow_gl_tex_image_2d","\xcc","\x32","\x69","\x74")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_tex_parameterf,HX_HCSTRING("snow_gl_tex_parameterf","\x53","\x3d","\xa9","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_tex_parameteri,HX_HCSTRING("snow_gl_tex_parameteri","\x56","\x3d","\xa9","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_tex_sub_image_2d,HX_HCSTRING("snow_gl_tex_sub_image_2d","\xab","\x23","\xd0","\x8f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform1f,HX_HCSTRING("snow_gl_uniform1f","\xeb","\x91","\xae","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform1fv,HX_HCSTRING("snow_gl_uniform1fv","\x2b","\x1c","\x11","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform1i,HX_HCSTRING("snow_gl_uniform1i","\xee","\x91","\xae","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform1iv,HX_HCSTRING("snow_gl_uniform1iv","\xc8","\x1e","\x11","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform2f,HX_HCSTRING("snow_gl_uniform2f","\xca","\x92","\xae","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform2fv,HX_HCSTRING("snow_gl_uniform2fv","\x6c","\xde","\x11","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform2i,HX_HCSTRING("snow_gl_uniform2i","\xcd","\x92","\xae","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform2iv,HX_HCSTRING("snow_gl_uniform2iv","\x09","\xe1","\x11","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform3f,HX_HCSTRING("snow_gl_uniform3f","\xa9","\x93","\xae","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform3fv,HX_HCSTRING("snow_gl_uniform3fv","\xad","\xa0","\x12","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform3i,HX_HCSTRING("snow_gl_uniform3i","\xac","\x93","\xae","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform3iv,HX_HCSTRING("snow_gl_uniform3iv","\x4a","\xa3","\x12","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform4f,HX_HCSTRING("snow_gl_uniform4f","\x88","\x94","\xae","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform4fv,HX_HCSTRING("snow_gl_uniform4fv","\xee","\x62","\x13","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform4i,HX_HCSTRING("snow_gl_uniform4i","\x8b","\x94","\xae","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform4iv,HX_HCSTRING("snow_gl_uniform4iv","\x8b","\x65","\x13","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_uniform_matrix,HX_HCSTRING("snow_gl_uniform_matrix","\x4a","\x59","\xfe","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_use_program,HX_HCSTRING("snow_gl_use_program","\x6e","\x4c","\x52","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_validate_program,HX_HCSTRING("snow_gl_validate_program","\x39","\xc2","\x62","\x98")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_version,HX_HCSTRING("snow_gl_version","\x3a","\x8b","\xf7","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_vertex_attrib1f,HX_HCSTRING("snow_gl_vertex_attrib1f","\x7c","\x1e","\x08","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_vertex_attrib1fv,HX_HCSTRING("snow_gl_vertex_attrib1fv","\x7a","\x8e","\x12","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_vertex_attrib2f,HX_HCSTRING("snow_gl_vertex_attrib2f","\x5b","\x1f","\x08","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_vertex_attrib2fv,HX_HCSTRING("snow_gl_vertex_attrib2fv","\xbb","\x50","\x13","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_vertex_attrib3f,HX_HCSTRING("snow_gl_vertex_attrib3f","\x3a","\x20","\x08","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_vertex_attrib3fv,HX_HCSTRING("snow_gl_vertex_attrib3fv","\xfc","\x12","\x14","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_vertex_attrib4f,HX_HCSTRING("snow_gl_vertex_attrib4f","\x19","\x21","\x08","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_vertex_attrib4fv,HX_HCSTRING("snow_gl_vertex_attrib4fv","\x3d","\xd5","\x14","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_vertex_attrib_pointer,HX_HCSTRING("snow_gl_vertex_attrib_pointer","\xe5","\x14","\xfd","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_FFI_obj::snow_gl_viewport,HX_HCSTRING("snow_gl_viewport","\x04","\x46","\x8f","\x97")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_BUFFER_BIT,HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_BUFFER_BIT,HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde")},
	{hx::fsInt,(void *) &GL_FFI_obj::COLOR_BUFFER_BIT,HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb")},
	{hx::fsInt,(void *) &GL_FFI_obj::POINTS,HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9")},
	{hx::fsInt,(void *) &GL_FFI_obj::LINES,HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2")},
	{hx::fsInt,(void *) &GL_FFI_obj::LINE_LOOP,HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16")},
	{hx::fsInt,(void *) &GL_FFI_obj::LINE_STRIP,HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd")},
	{hx::fsInt,(void *) &GL_FFI_obj::TRIANGLES,HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a")},
	{hx::fsInt,(void *) &GL_FFI_obj::TRIANGLE_STRIP,HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6")},
	{hx::fsInt,(void *) &GL_FFI_obj::TRIANGLE_FAN,HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91")},
	{hx::fsInt,(void *) &GL_FFI_obj::ZERO,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{hx::fsInt,(void *) &GL_FFI_obj::ONE,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(void *) &GL_FFI_obj::SRC_COLOR,HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c")},
	{hx::fsInt,(void *) &GL_FFI_obj::ONE_MINUS_SRC_COLOR,HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48")},
	{hx::fsInt,(void *) &GL_FFI_obj::SRC_ALPHA,HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33")},
	{hx::fsInt,(void *) &GL_FFI_obj::ONE_MINUS_SRC_ALPHA,HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20")},
	{hx::fsInt,(void *) &GL_FFI_obj::DST_ALPHA,HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3")},
	{hx::fsInt,(void *) &GL_FFI_obj::ONE_MINUS_DST_ALPHA,HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0")},
	{hx::fsInt,(void *) &GL_FFI_obj::DST_COLOR,HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc")},
	{hx::fsInt,(void *) &GL_FFI_obj::ONE_MINUS_DST_COLOR,HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8")},
	{hx::fsInt,(void *) &GL_FFI_obj::SRC_ALPHA_SATURATE,HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33")},
	{hx::fsInt,(void *) &GL_FFI_obj::FUNC_ADD,HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLEND_EQUATION,HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLEND_EQUATION_RGB,HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLEND_EQUATION_ALPHA,HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37")},
	{hx::fsInt,(void *) &GL_FFI_obj::FUNC_SUBTRACT,HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17")},
	{hx::fsInt,(void *) &GL_FFI_obj::FUNC_REVERSE_SUBTRACT,HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLEND_DST_RGB,HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLEND_SRC_RGB,HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLEND_DST_ALPHA,HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLEND_SRC_ALPHA,HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4")},
	{hx::fsInt,(void *) &GL_FFI_obj::CONSTANT_COLOR,HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8")},
	{hx::fsInt,(void *) &GL_FFI_obj::ONE_MINUS_CONSTANT_COLOR,HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06")},
	{hx::fsInt,(void *) &GL_FFI_obj::CONSTANT_ALPHA,HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f")},
	{hx::fsInt,(void *) &GL_FFI_obj::ONE_MINUS_CONSTANT_ALPHA,HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLEND_COLOR,HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67")},
	{hx::fsInt,(void *) &GL_FFI_obj::ARRAY_BUFFER,HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4")},
	{hx::fsInt,(void *) &GL_FFI_obj::ELEMENT_ARRAY_BUFFER,HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d")},
	{hx::fsInt,(void *) &GL_FFI_obj::ARRAY_BUFFER_BINDING,HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79")},
	{hx::fsInt,(void *) &GL_FFI_obj::ELEMENT_ARRAY_BUFFER_BINDING,HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2")},
	{hx::fsInt,(void *) &GL_FFI_obj::STREAM_DRAW,HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15")},
	{hx::fsInt,(void *) &GL_FFI_obj::STATIC_DRAW,HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")},
	{hx::fsInt,(void *) &GL_FFI_obj::DYNAMIC_DRAW,HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")},
	{hx::fsInt,(void *) &GL_FFI_obj::BUFFER_SIZE,HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c")},
	{hx::fsInt,(void *) &GL_FFI_obj::BUFFER_USAGE,HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0")},
	{hx::fsInt,(void *) &GL_FFI_obj::CURRENT_VERTEX_ATTRIB,HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRONT,HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84")},
	{hx::fsInt,(void *) &GL_FFI_obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRONT_AND_BACK,HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1")},
	{hx::fsInt,(void *) &GL_FFI_obj::CULL_FACE,HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLEND,HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32")},
	{hx::fsInt,(void *) &GL_FFI_obj::DITHER,HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_TEST,HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_TEST,HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28")},
	{hx::fsInt,(void *) &GL_FFI_obj::SCISSOR_TEST,HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59")},
	{hx::fsInt,(void *) &GL_FFI_obj::POLYGON_OFFSET_FILL,HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac")},
	{hx::fsInt,(void *) &GL_FFI_obj::SAMPLE_ALPHA_TO_COVERAGE,HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1")},
	{hx::fsInt,(void *) &GL_FFI_obj::SAMPLE_COVERAGE,HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1")},
	{hx::fsInt,(void *) &GL_FFI_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &GL_FFI_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &GL_FFI_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &GL_FFI_obj::INVALID_OPERATION,HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(void *) &GL_FFI_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &GL_FFI_obj::CW,HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00")},
	{hx::fsInt,(void *) &GL_FFI_obj::CCW,HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00")},
	{hx::fsInt,(void *) &GL_FFI_obj::LINE_WIDTH,HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23")},
	{hx::fsInt,(void *) &GL_FFI_obj::ALIASED_POINT_SIZE_RANGE,HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b")},
	{hx::fsInt,(void *) &GL_FFI_obj::ALIASED_LINE_WIDTH_RANGE,HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a")},
	{hx::fsInt,(void *) &GL_FFI_obj::CULL_FACE_MODE,HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRONT_FACE,HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_RANGE,HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_WRITEMASK,HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_CLEAR_VALUE,HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_FUNC,HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_CLEAR_VALUE,HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_FUNC,HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_FAIL,HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_PASS_DEPTH_FAIL,HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_PASS_DEPTH_PASS,HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_REF,HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_VALUE_MASK,HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_WRITEMASK,HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_BACK_FUNC,HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_BACK_FAIL,HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_BACK_PASS_DEPTH_FAIL,HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_BACK_PASS_DEPTH_PASS,HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_BACK_REF,HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_BACK_VALUE_MASK,HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_BACK_WRITEMASK,HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2")},
	{hx::fsInt,(void *) &GL_FFI_obj::VIEWPORT,HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6")},
	{hx::fsInt,(void *) &GL_FFI_obj::SCISSOR_BOX,HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55")},
	{hx::fsInt,(void *) &GL_FFI_obj::COLOR_CLEAR_VALUE,HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8")},
	{hx::fsInt,(void *) &GL_FFI_obj::COLOR_WRITEMASK,HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNPACK_ALIGNMENT,HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b")},
	{hx::fsInt,(void *) &GL_FFI_obj::PACK_ALIGNMENT,HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_TEXTURE_SIZE,HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_VIEWPORT_DIMS,HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08")},
	{hx::fsInt,(void *) &GL_FFI_obj::SUBPIXEL_BITS,HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a")},
	{hx::fsInt,(void *) &GL_FFI_obj::RED_BITS,HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96")},
	{hx::fsInt,(void *) &GL_FFI_obj::GREEN_BITS,HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94")},
	{hx::fsInt,(void *) &GL_FFI_obj::BLUE_BITS,HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1")},
	{hx::fsInt,(void *) &GL_FFI_obj::ALPHA_BITS,HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_BITS,HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_BITS,HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9")},
	{hx::fsInt,(void *) &GL_FFI_obj::POLYGON_OFFSET_UNITS,HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6")},
	{hx::fsInt,(void *) &GL_FFI_obj::POLYGON_OFFSET_FACTOR,HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_BINDING_2D,HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1")},
	{hx::fsInt,(void *) &GL_FFI_obj::SAMPLE_BUFFERS,HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c")},
	{hx::fsInt,(void *) &GL_FFI_obj::SAMPLES,HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03")},
	{hx::fsInt,(void *) &GL_FFI_obj::SAMPLE_COVERAGE_VALUE,HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69")},
	{hx::fsInt,(void *) &GL_FFI_obj::SAMPLE_COVERAGE_INVERT,HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd")},
	{hx::fsInt,(void *) &GL_FFI_obj::COMPRESSED_TEXTURE_FORMATS,HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12")},
	{hx::fsInt,(void *) &GL_FFI_obj::DONT_CARE,HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf")},
	{hx::fsInt,(void *) &GL_FFI_obj::FASTEST,HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e")},
	{hx::fsInt,(void *) &GL_FFI_obj::NICEST,HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64")},
	{hx::fsInt,(void *) &GL_FFI_obj::GENERATE_MIPMAP_HINT,HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83")},
	{hx::fsInt,(void *) &GL_FFI_obj::BYTE,HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNSIGNED_BYTE,HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01")},
	{hx::fsInt,(void *) &GL_FFI_obj::SHORT,HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNSIGNED_SHORT,HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb")},
	{hx::fsInt,(void *) &GL_FFI_obj::INT,HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNSIGNED_INT,HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c")},
	{hx::fsInt,(void *) &GL_FFI_obj::FLOAT,HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_COMPONENT,HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f")},
	{hx::fsInt,(void *) &GL_FFI_obj::ALPHA,HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")},
	{hx::fsInt,(void *) &GL_FFI_obj::RGB,HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")},
	{hx::fsInt,(void *) &GL_FFI_obj::RGBA,HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36")},
	{hx::fsInt,(void *) &GL_FFI_obj::LUMINANCE,HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63")},
	{hx::fsInt,(void *) &GL_FFI_obj::LUMINANCE_ALPHA,HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNSIGNED_SHORT_4_4_4_4,HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNSIGNED_SHORT_5_5_5_1,HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNSIGNED_SHORT_5_6_5,HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAGMENT_SHADER,HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERTEX_SHADER,HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_VERTEX_ATTRIBS,HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_VERTEX_UNIFORM_VECTORS,HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_VARYING_VECTORS,HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_FRAGMENT_UNIFORM_VECTORS,HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a")},
	{hx::fsInt,(void *) &GL_FFI_obj::SHADER_TYPE,HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87")},
	{hx::fsInt,(void *) &GL_FFI_obj::DELETE_STATUS,HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e")},
	{hx::fsInt,(void *) &GL_FFI_obj::LINK_STATUS,HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45")},
	{hx::fsInt,(void *) &GL_FFI_obj::VALIDATE_STATUS,HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6")},
	{hx::fsInt,(void *) &GL_FFI_obj::ATTACHED_SHADERS,HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75")},
	{hx::fsInt,(void *) &GL_FFI_obj::ACTIVE_UNIFORMS,HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c")},
	{hx::fsInt,(void *) &GL_FFI_obj::ACTIVE_ATTRIBUTES,HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a")},
	{hx::fsInt,(void *) &GL_FFI_obj::SHADING_LANGUAGE_VERSION,HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70")},
	{hx::fsInt,(void *) &GL_FFI_obj::CURRENT_PROGRAM,HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f")},
	{hx::fsInt,(void *) &GL_FFI_obj::NEVER,HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{hx::fsInt,(void *) &GL_FFI_obj::LESS,HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32")},
	{hx::fsInt,(void *) &GL_FFI_obj::EQUAL,HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsInt,(void *) &GL_FFI_obj::LEQUAL,HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53")},
	{hx::fsInt,(void *) &GL_FFI_obj::GREATER,HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37")},
	{hx::fsInt,(void *) &GL_FFI_obj::NOTEQUAL,HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8")},
	{hx::fsInt,(void *) &GL_FFI_obj::GEQUAL,HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53")},
	{hx::fsInt,(void *) &GL_FFI_obj::ALWAYS,HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsInt,(void *) &GL_FFI_obj::KEEP,HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31")},
	{hx::fsInt,(void *) &GL_FFI_obj::REPLACE,HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a")},
	{hx::fsInt,(void *) &GL_FFI_obj::INCR,HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30")},
	{hx::fsInt,(void *) &GL_FFI_obj::DECR,HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d")},
	{hx::fsInt,(void *) &GL_FFI_obj::INVERT,HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsInt,(void *) &GL_FFI_obj::INCR_WRAP,HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c")},
	{hx::fsInt,(void *) &GL_FFI_obj::DECR_WRAP,HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a")},
	{hx::fsInt,(void *) &GL_FFI_obj::VENDOR,HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERER,HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(void *) &GL_FFI_obj::NEAREST,HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")},
	{hx::fsInt,(void *) &GL_FFI_obj::LINEAR,HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")},
	{hx::fsInt,(void *) &GL_FFI_obj::NEAREST_MIPMAP_NEAREST,HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e")},
	{hx::fsInt,(void *) &GL_FFI_obj::LINEAR_MIPMAP_NEAREST,HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65")},
	{hx::fsInt,(void *) &GL_FFI_obj::NEAREST_MIPMAP_LINEAR,HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b")},
	{hx::fsInt,(void *) &GL_FFI_obj::LINEAR_MIPMAP_LINEAR,HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_MAG_FILTER,HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_MIN_FILTER,HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_WRAP_S,HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_WRAP_T,HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_2D,HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE,HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_CUBE_MAP,HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_BINDING_CUBE_MAP,HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_X,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_CUBE_MAP_TEXTURE_SIZE,HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE0,HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE1,HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE2,HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE3,HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE4,HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE5,HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE6,HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE7,HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE8,HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE9,HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE10,HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE11,HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE12,HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE13,HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE14,HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE15,HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE16,HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE17,HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE18,HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE19,HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE20,HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE21,HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE22,HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE23,HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE24,HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE25,HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE26,HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE27,HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE28,HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE29,HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE30,HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::TEXTURE31,HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_FFI_obj::ACTIVE_TEXTURE,HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce")},
	{hx::fsInt,(void *) &GL_FFI_obj::REPEAT,HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")},
	{hx::fsInt,(void *) &GL_FFI_obj::CLAMP_TO_EDGE,HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96")},
	{hx::fsInt,(void *) &GL_FFI_obj::MIRRORED_REPEAT,HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a")},
	{hx::fsInt,(void *) &GL_FFI_obj::FLOAT_VEC2,HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_FFI_obj::FLOAT_VEC3,HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_FFI_obj::FLOAT_VEC4,HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_FFI_obj::INT_VEC2,HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_FFI_obj::INT_VEC3,HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_FFI_obj::INT_VEC4,HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_FFI_obj::BOOL,HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b")},
	{hx::fsInt,(void *) &GL_FFI_obj::BOOL_VEC2,HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_FFI_obj::BOOL_VEC3,HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_FFI_obj::BOOL_VEC4,HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_FFI_obj::FLOAT_MAT2,HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_FFI_obj::FLOAT_MAT3,HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_FFI_obj::FLOAT_MAT4,HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_FFI_obj::SAMPLER_2D,HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e")},
	{hx::fsInt,(void *) &GL_FFI_obj::SAMPLER_CUBE,HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERTEX_ATTRIB_ARRAY_ENABLED,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERTEX_ATTRIB_ARRAY_SIZE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERTEX_ATTRIB_ARRAY_STRIDE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERTEX_ATTRIB_ARRAY_TYPE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERTEX_ATTRIB_ARRAY_POINTER,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97")},
	{hx::fsInt,(void *) &GL_FFI_obj::VERTEX_PROGRAM_POINT_SIZE,HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34")},
	{hx::fsInt,(void *) &GL_FFI_obj::POINT_SPRITE,HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14")},
	{hx::fsInt,(void *) &GL_FFI_obj::COMPILE_STATUS,HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c")},
	{hx::fsInt,(void *) &GL_FFI_obj::LOW_FLOAT,HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4")},
	{hx::fsInt,(void *) &GL_FFI_obj::MEDIUM_FLOAT,HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9")},
	{hx::fsInt,(void *) &GL_FFI_obj::HIGH_FLOAT,HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47")},
	{hx::fsInt,(void *) &GL_FFI_obj::LOW_INT,HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45")},
	{hx::fsInt,(void *) &GL_FFI_obj::MEDIUM_INT,HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f")},
	{hx::fsInt,(void *) &GL_FFI_obj::HIGH_INT,HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER,HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER,HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9")},
	{hx::fsInt,(void *) &GL_FFI_obj::RGBA4,HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65")},
	{hx::fsInt,(void *) &GL_FFI_obj::RGB5_A1,HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8")},
	{hx::fsInt,(void *) &GL_FFI_obj::RGB565,HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_COMPONENT16,HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_INDEX,HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_INDEX8,HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_STENCIL,HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_WIDTH,HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_HEIGHT,HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_INTERNAL_FORMAT,HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_RED_SIZE,HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_GREEN_SIZE,HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_BLUE_SIZE,HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_ALPHA_SIZE,HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_DEPTH_SIZE,HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_STENCIL_SIZE,HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a")},
	{hx::fsInt,(void *) &GL_FFI_obj::COLOR_ATTACHMENT0,HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_ATTACHMENT,HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9")},
	{hx::fsInt,(void *) &GL_FFI_obj::STENCIL_ATTACHMENT,HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01")},
	{hx::fsInt,(void *) &GL_FFI_obj::DEPTH_STENCIL_ATTACHMENT,HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f")},
	{hx::fsInt,(void *) &GL_FFI_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_COMPLETE,HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_UNSUPPORTED,HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8")},
	{hx::fsInt,(void *) &GL_FFI_obj::FRAMEBUFFER_BINDING,HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5")},
	{hx::fsInt,(void *) &GL_FFI_obj::RENDERBUFFER_BINDING,HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23")},
	{hx::fsInt,(void *) &GL_FFI_obj::MAX_RENDERBUFFER_SIZE,HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65")},
	{hx::fsInt,(void *) &GL_FFI_obj::INVALID_FRAMEBUFFER_OPERATION,HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNPACK_FLIP_Y_WEBGL,HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6")},
	{hx::fsInt,(void *) &GL_FFI_obj::CONTEXT_LOST_WEBGL,HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45")},
	{hx::fsInt,(void *) &GL_FFI_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9")},
	{hx::fsInt,(void *) &GL_FFI_obj::BROWSER_DEFAULT_WEBGL,HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_FFI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_active_texture,"snow_gl_active_texture");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_attach_shader,"snow_gl_attach_shader");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_attrib_location,"snow_gl_bind_attrib_location");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_buffer,"snow_gl_bind_buffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_framebuffer,"snow_gl_bind_framebuffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_renderbuffer,"snow_gl_bind_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_texture,"snow_gl_bind_texture");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_color,"snow_gl_blend_color");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_equation,"snow_gl_blend_equation");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_equation_separate,"snow_gl_blend_equation_separate");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_func,"snow_gl_blend_func");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_func_separate,"snow_gl_blend_func_separate");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_buffer_data,"snow_gl_buffer_data");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_buffer_sub_data,"snow_gl_buffer_sub_data");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_check_framebuffer_status,"snow_gl_check_framebuffer_status");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_clear,"snow_gl_clear");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_clear_color,"snow_gl_clear_color");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_clear_depth,"snow_gl_clear_depth");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_clear_stencil,"snow_gl_clear_stencil");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_color_mask,"snow_gl_color_mask");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_compile_shader,"snow_gl_compile_shader");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_compressed_tex_image_2d,"snow_gl_compressed_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_compressed_tex_sub_image_2d,"snow_gl_compressed_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_copy_tex_image_2d,"snow_gl_copy_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_copy_tex_sub_image_2d,"snow_gl_copy_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_create_buffer,"snow_gl_create_buffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_create_framebuffer,"snow_gl_create_framebuffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_create_program,"snow_gl_create_program");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_create_render_buffer,"snow_gl_create_render_buffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_create_shader,"snow_gl_create_shader");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_create_texture,"snow_gl_create_texture");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_cull_face,"snow_gl_cull_face");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_buffer,"snow_gl_delete_buffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_framebuffer,"snow_gl_delete_framebuffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_program,"snow_gl_delete_program");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_render_buffer,"snow_gl_delete_render_buffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_shader,"snow_gl_delete_shader");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_texture,"snow_gl_delete_texture");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_depth_func,"snow_gl_depth_func");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_depth_mask,"snow_gl_depth_mask");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_depth_range,"snow_gl_depth_range");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_detach_shader,"snow_gl_detach_shader");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_disable,"snow_gl_disable");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_disable_vertex_attrib_array,"snow_gl_disable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_draw_arrays,"snow_gl_draw_arrays");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_draw_elements,"snow_gl_draw_elements");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_enable,"snow_gl_enable");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_enable_vertex_attrib_array,"snow_gl_enable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_finish,"snow_gl_finish");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_flush,"snow_gl_flush");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_framebuffer_renderbuffer,"snow_gl_framebuffer_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_framebuffer_texture2D,"snow_gl_framebuffer_texture2D");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_front_face,"snow_gl_front_face");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_generate_mipmap,"snow_gl_generate_mipmap");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_active_attrib,"snow_gl_get_active_attrib");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_active_uniform,"snow_gl_get_active_uniform");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_attrib_location,"snow_gl_get_attrib_location");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_buffer_paramerter,"snow_gl_get_buffer_paramerter");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_context_attributes,"snow_gl_get_context_attributes");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_error,"snow_gl_get_error");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_framebuffer_attachment_parameter,"snow_gl_get_framebuffer_attachment_parameter");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_parameter,"snow_gl_get_parameter");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_program_info_log,"snow_gl_get_program_info_log");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_program_parameter,"snow_gl_get_program_parameter");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_render_buffer_parameter,"snow_gl_get_render_buffer_parameter");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_shader_info_log,"snow_gl_get_shader_info_log");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_shader_parameter,"snow_gl_get_shader_parameter");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_shader_precision_format,"snow_gl_get_shader_precision_format");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_shader_source,"snow_gl_get_shader_source");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_supported_extensions,"snow_gl_get_supported_extensions");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_tex_parameter,"snow_gl_get_tex_parameter");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_uniform,"snow_gl_get_uniform");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_uniform_location,"snow_gl_get_uniform_location");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_vertex_attrib,"snow_gl_get_vertex_attrib");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_get_vertex_attrib_offset,"snow_gl_get_vertex_attrib_offset");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_hint,"snow_gl_hint");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_is_buffer,"snow_gl_is_buffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_is_enabled,"snow_gl_is_enabled");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_is_framebuffer,"snow_gl_is_framebuffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_is_program,"snow_gl_is_program");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_is_renderbuffer,"snow_gl_is_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_is_shader,"snow_gl_is_shader");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_is_texture,"snow_gl_is_texture");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_line_width,"snow_gl_line_width");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_link_program,"snow_gl_link_program");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_pixel_storei,"snow_gl_pixel_storei");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_polygon_offset,"snow_gl_polygon_offset");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_read_pixels,"snow_gl_read_pixels");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_renderbuffer_storage,"snow_gl_renderbuffer_storage");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_sample_coverage,"snow_gl_sample_coverage");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_scissor,"snow_gl_scissor");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_shader_source,"snow_gl_shader_source");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_func,"snow_gl_stencil_func");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_func_separate,"snow_gl_stencil_func_separate");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_mask,"snow_gl_stencil_mask");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_mask_separate,"snow_gl_stencil_mask_separate");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_op,"snow_gl_stencil_op");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_op_separate,"snow_gl_stencil_op_separate");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_tex_image_2d,"snow_gl_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_tex_parameterf,"snow_gl_tex_parameterf");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_tex_parameteri,"snow_gl_tex_parameteri");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_tex_sub_image_2d,"snow_gl_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform1f,"snow_gl_uniform1f");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform1fv,"snow_gl_uniform1fv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform1i,"snow_gl_uniform1i");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform1iv,"snow_gl_uniform1iv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform2f,"snow_gl_uniform2f");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform2fv,"snow_gl_uniform2fv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform2i,"snow_gl_uniform2i");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform2iv,"snow_gl_uniform2iv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform3f,"snow_gl_uniform3f");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform3fv,"snow_gl_uniform3fv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform3i,"snow_gl_uniform3i");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform3iv,"snow_gl_uniform3iv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform4f,"snow_gl_uniform4f");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform4fv,"snow_gl_uniform4fv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform4i,"snow_gl_uniform4i");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform4iv,"snow_gl_uniform4iv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform_matrix,"snow_gl_uniform_matrix");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_use_program,"snow_gl_use_program");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_validate_program,"snow_gl_validate_program");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_version,"snow_gl_version");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib1f,"snow_gl_vertex_attrib1f");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib1fv,"snow_gl_vertex_attrib1fv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib2f,"snow_gl_vertex_attrib2f");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib2fv,"snow_gl_vertex_attrib2fv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib3f,"snow_gl_vertex_attrib3f");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib3fv,"snow_gl_vertex_attrib3fv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib4f,"snow_gl_vertex_attrib4f");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib4fv,"snow_gl_vertex_attrib4fv");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib_pointer,"snow_gl_vertex_attrib_pointer");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::snow_gl_viewport,"snow_gl_viewport");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::POINTS,"POINTS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LINES,"LINES");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LINE_LOOP,"LINE_LOOP");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LINE_STRIP,"LINE_STRIP");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FUNC_ADD,"FUNC_ADD");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CULL_FACE,"CULL_FACE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DITHER,"DITHER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CW,"CW");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CCW,"CCW");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRONT_FACE,"FRONT_FACE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_REF,"STENCIL_REF");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VIEWPORT,"VIEWPORT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RED_BITS,"RED_BITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::GREEN_BITS,"GREEN_BITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BLUE_BITS,"BLUE_BITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SAMPLES,"SAMPLES");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DONT_CARE,"DONT_CARE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FASTEST,"FASTEST");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::NICEST,"NICEST");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INT,"INT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RGB,"RGB");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LUMINANCE,"LUMINANCE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LINK_STATUS,"LINK_STATUS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LEQUAL,"LEQUAL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::NOTEQUAL,"NOTEQUAL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::GEQUAL,"GEQUAL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::REPLACE,"REPLACE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INCR,"INCR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DECR,"DECR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INCR_WRAP,"INCR_WRAP");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DECR_WRAP,"DECR_WRAP");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE0,"TEXTURE0");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE1,"TEXTURE1");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE2,"TEXTURE2");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE3,"TEXTURE3");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE4,"TEXTURE4");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE5,"TEXTURE5");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE6,"TEXTURE6");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE7,"TEXTURE7");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE8,"TEXTURE8");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE9,"TEXTURE9");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE10,"TEXTURE10");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE11,"TEXTURE11");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE12,"TEXTURE12");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE13,"TEXTURE13");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE14,"TEXTURE14");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE15,"TEXTURE15");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE16,"TEXTURE16");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE17,"TEXTURE17");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE18,"TEXTURE18");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE19,"TEXTURE19");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE20,"TEXTURE20");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE21,"TEXTURE21");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE22,"TEXTURE22");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE23,"TEXTURE23");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE24,"TEXTURE24");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE25,"TEXTURE25");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE26,"TEXTURE26");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE27,"TEXTURE27");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE28,"TEXTURE28");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE29,"TEXTURE29");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE30,"TEXTURE30");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::TEXTURE31,"TEXTURE31");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INT_VEC2,"INT_VEC2");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INT_VEC3,"INT_VEC3");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INT_VEC4,"INT_VEC4");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::LOW_INT,"LOW_INT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::HIGH_INT,"HIGH_INT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RGBA4,"RGBA4");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RGB5_A1,"RGB5_A1");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_MARK_MEMBER_NAME(GL_FFI_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_active_texture,"snow_gl_active_texture");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_attach_shader,"snow_gl_attach_shader");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_attrib_location,"snow_gl_bind_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_buffer,"snow_gl_bind_buffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_framebuffer,"snow_gl_bind_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_renderbuffer,"snow_gl_bind_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_bind_texture,"snow_gl_bind_texture");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_color,"snow_gl_blend_color");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_equation,"snow_gl_blend_equation");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_equation_separate,"snow_gl_blend_equation_separate");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_func,"snow_gl_blend_func");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_blend_func_separate,"snow_gl_blend_func_separate");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_buffer_data,"snow_gl_buffer_data");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_buffer_sub_data,"snow_gl_buffer_sub_data");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_check_framebuffer_status,"snow_gl_check_framebuffer_status");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_clear,"snow_gl_clear");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_clear_color,"snow_gl_clear_color");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_clear_depth,"snow_gl_clear_depth");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_clear_stencil,"snow_gl_clear_stencil");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_color_mask,"snow_gl_color_mask");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_compile_shader,"snow_gl_compile_shader");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_compressed_tex_image_2d,"snow_gl_compressed_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_compressed_tex_sub_image_2d,"snow_gl_compressed_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_copy_tex_image_2d,"snow_gl_copy_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_copy_tex_sub_image_2d,"snow_gl_copy_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_create_buffer,"snow_gl_create_buffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_create_framebuffer,"snow_gl_create_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_create_program,"snow_gl_create_program");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_create_render_buffer,"snow_gl_create_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_create_shader,"snow_gl_create_shader");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_create_texture,"snow_gl_create_texture");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_cull_face,"snow_gl_cull_face");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_buffer,"snow_gl_delete_buffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_framebuffer,"snow_gl_delete_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_program,"snow_gl_delete_program");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_render_buffer,"snow_gl_delete_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_shader,"snow_gl_delete_shader");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_delete_texture,"snow_gl_delete_texture");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_depth_func,"snow_gl_depth_func");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_depth_mask,"snow_gl_depth_mask");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_depth_range,"snow_gl_depth_range");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_detach_shader,"snow_gl_detach_shader");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_disable,"snow_gl_disable");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_disable_vertex_attrib_array,"snow_gl_disable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_draw_arrays,"snow_gl_draw_arrays");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_draw_elements,"snow_gl_draw_elements");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_enable,"snow_gl_enable");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_enable_vertex_attrib_array,"snow_gl_enable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_finish,"snow_gl_finish");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_flush,"snow_gl_flush");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_framebuffer_renderbuffer,"snow_gl_framebuffer_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_framebuffer_texture2D,"snow_gl_framebuffer_texture2D");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_front_face,"snow_gl_front_face");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_generate_mipmap,"snow_gl_generate_mipmap");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_active_attrib,"snow_gl_get_active_attrib");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_active_uniform,"snow_gl_get_active_uniform");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_attrib_location,"snow_gl_get_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_buffer_paramerter,"snow_gl_get_buffer_paramerter");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_context_attributes,"snow_gl_get_context_attributes");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_error,"snow_gl_get_error");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_framebuffer_attachment_parameter,"snow_gl_get_framebuffer_attachment_parameter");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_parameter,"snow_gl_get_parameter");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_program_info_log,"snow_gl_get_program_info_log");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_program_parameter,"snow_gl_get_program_parameter");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_render_buffer_parameter,"snow_gl_get_render_buffer_parameter");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_shader_info_log,"snow_gl_get_shader_info_log");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_shader_parameter,"snow_gl_get_shader_parameter");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_shader_precision_format,"snow_gl_get_shader_precision_format");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_shader_source,"snow_gl_get_shader_source");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_supported_extensions,"snow_gl_get_supported_extensions");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_tex_parameter,"snow_gl_get_tex_parameter");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_uniform,"snow_gl_get_uniform");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_uniform_location,"snow_gl_get_uniform_location");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_vertex_attrib,"snow_gl_get_vertex_attrib");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_get_vertex_attrib_offset,"snow_gl_get_vertex_attrib_offset");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_hint,"snow_gl_hint");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_is_buffer,"snow_gl_is_buffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_is_enabled,"snow_gl_is_enabled");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_is_framebuffer,"snow_gl_is_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_is_program,"snow_gl_is_program");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_is_renderbuffer,"snow_gl_is_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_is_shader,"snow_gl_is_shader");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_is_texture,"snow_gl_is_texture");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_line_width,"snow_gl_line_width");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_link_program,"snow_gl_link_program");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_pixel_storei,"snow_gl_pixel_storei");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_polygon_offset,"snow_gl_polygon_offset");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_read_pixels,"snow_gl_read_pixels");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_renderbuffer_storage,"snow_gl_renderbuffer_storage");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_sample_coverage,"snow_gl_sample_coverage");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_scissor,"snow_gl_scissor");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_shader_source,"snow_gl_shader_source");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_func,"snow_gl_stencil_func");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_func_separate,"snow_gl_stencil_func_separate");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_mask,"snow_gl_stencil_mask");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_mask_separate,"snow_gl_stencil_mask_separate");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_op,"snow_gl_stencil_op");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_stencil_op_separate,"snow_gl_stencil_op_separate");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_tex_image_2d,"snow_gl_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_tex_parameterf,"snow_gl_tex_parameterf");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_tex_parameteri,"snow_gl_tex_parameteri");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_tex_sub_image_2d,"snow_gl_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform1f,"snow_gl_uniform1f");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform1fv,"snow_gl_uniform1fv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform1i,"snow_gl_uniform1i");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform1iv,"snow_gl_uniform1iv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform2f,"snow_gl_uniform2f");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform2fv,"snow_gl_uniform2fv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform2i,"snow_gl_uniform2i");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform2iv,"snow_gl_uniform2iv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform3f,"snow_gl_uniform3f");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform3fv,"snow_gl_uniform3fv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform3i,"snow_gl_uniform3i");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform3iv,"snow_gl_uniform3iv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform4f,"snow_gl_uniform4f");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform4fv,"snow_gl_uniform4fv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform4i,"snow_gl_uniform4i");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform4iv,"snow_gl_uniform4iv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_uniform_matrix,"snow_gl_uniform_matrix");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_use_program,"snow_gl_use_program");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_validate_program,"snow_gl_validate_program");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_version,"snow_gl_version");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib1f,"snow_gl_vertex_attrib1f");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib1fv,"snow_gl_vertex_attrib1fv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib2f,"snow_gl_vertex_attrib2f");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib2fv,"snow_gl_vertex_attrib2fv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib3f,"snow_gl_vertex_attrib3f");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib3fv,"snow_gl_vertex_attrib3fv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib4f,"snow_gl_vertex_attrib4f");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib4fv,"snow_gl_vertex_attrib4fv");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_vertex_attrib_pointer,"snow_gl_vertex_attrib_pointer");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::snow_gl_viewport,"snow_gl_viewport");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::POINTS,"POINTS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LINES,"LINES");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LINE_LOOP,"LINE_LOOP");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LINE_STRIP,"LINE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TRIANGLES,"TRIANGLES");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SRC_COLOR,"SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DST_ALPHA,"DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DST_COLOR,"DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FUNC_ADD,"FUNC_ADD");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CULL_FACE,"CULL_FACE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLEND,"BLEND");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DITHER,"DITHER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CW,"CW");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CCW,"CCW");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRONT_FACE,"FRONT_FACE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_REF,"STENCIL_REF");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VIEWPORT,"VIEWPORT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RED_BITS,"RED_BITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::GREEN_BITS,"GREEN_BITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BLUE_BITS,"BLUE_BITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SAMPLES,"SAMPLES");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DONT_CARE,"DONT_CARE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FASTEST,"FASTEST");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::NICEST,"NICEST");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BYTE,"BYTE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SHORT,"SHORT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INT,"INT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RGB,"RGB");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LUMINANCE,"LUMINANCE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LINK_STATUS,"LINK_STATUS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LEQUAL,"LEQUAL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::NOTEQUAL,"NOTEQUAL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::GEQUAL,"GEQUAL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::REPLACE,"REPLACE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INCR,"INCR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DECR,"DECR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INCR_WRAP,"INCR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DECR_WRAP,"DECR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE,"TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE0,"TEXTURE0");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE1,"TEXTURE1");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE2,"TEXTURE2");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE3,"TEXTURE3");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE4,"TEXTURE4");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE5,"TEXTURE5");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE6,"TEXTURE6");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE7,"TEXTURE7");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE8,"TEXTURE8");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE9,"TEXTURE9");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE10,"TEXTURE10");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE11,"TEXTURE11");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE12,"TEXTURE12");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE13,"TEXTURE13");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE14,"TEXTURE14");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE15,"TEXTURE15");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE16,"TEXTURE16");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE17,"TEXTURE17");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE18,"TEXTURE18");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE19,"TEXTURE19");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE20,"TEXTURE20");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE21,"TEXTURE21");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE22,"TEXTURE22");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE23,"TEXTURE23");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE24,"TEXTURE24");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE25,"TEXTURE25");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE26,"TEXTURE26");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE27,"TEXTURE27");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE28,"TEXTURE28");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE29,"TEXTURE29");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE30,"TEXTURE30");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::TEXTURE31,"TEXTURE31");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INT_VEC2,"INT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INT_VEC3,"INT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INT_VEC4,"INT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BOOL,"BOOL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::LOW_INT,"LOW_INT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::HIGH_INT,"HIGH_INT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RGBA4,"RGBA4");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RGB5_A1,"RGB5_A1");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RGB565,"RGB565");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_FFI_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
};

#endif

hx::Class GL_FFI_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("versionString","\x09","\xe6","\xa0","\x51"),
	HX_HCSTRING("activeTexture","\xb5","\x13","\xaa","\x56"),
	HX_HCSTRING("attachShader","\xca","\xd0","\x77","\xb2"),
	HX_HCSTRING("bindAttribLocation","\x3c","\xa6","\x30","\x1e"),
	HX_HCSTRING("bindBuffer","\x9d","\x92","\xbe","\xf8"),
	HX_HCSTRING("bindFramebuffer","\x30","\xc6","\x61","\xe7"),
	HX_HCSTRING("bindRenderbuffer","\x33","\xb6","\xb7","\x14"),
	HX_HCSTRING("bindTexture","\x9e","\xdc","\x51","\x9b"),
	HX_HCSTRING("blendColor","\x52","\x33","\xb4","\xe2"),
	HX_HCSTRING("blendEquation","\xfd","\x98","\xad","\x02"),
	HX_HCSTRING("blendEquationSeparate","\x80","\x39","\x68","\xa7"),
	HX_HCSTRING("blendFunc","\x35","\xfc","\x9b","\x07"),
	HX_HCSTRING("blendFuncSeparate","\xb8","\x94","\xc0","\xca"),
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("bufferSubData","\xaa","\xf6","\xe4","\x45"),
	HX_HCSTRING("checkFramebufferStatus","\x17","\x26","\x75","\x0a"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clearColor","\x96","\xb0","\x66","\x1f"),
	HX_HCSTRING("clearDepth","\x36","\x30","\x34","\xac"),
	HX_HCSTRING("clearStencil","\xef","\x6f","\x82","\x5b"),
	HX_HCSTRING("colorMask","\xef","\xcb","\xc3","\x23"),
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("compressedTexImage2D","\xa7","\xd8","\x5d","\x24"),
	HX_HCSTRING("compressedTexSubImage2D","\xd3","\xb5","\x7d","\x36"),
	HX_HCSTRING("copyTexImage2D","\xdb","\xd0","\x76","\xe4"),
	HX_HCSTRING("copyTexSubImage2D","\x1f","\xd6","\xae","\xa4"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("createFramebuffer","\x51","\xef","\xe8","\xcc"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createRenderbuffer","\xf2","\x89","\x74","\x05"),
	HX_HCSTRING("createShader","\x41","\xff","\x75","\x3f"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("cullFace","\x6f","\xe7","\x31","\xac"),
	HX_HCSTRING("deleteBuffer","\x8b","\xe3","\x2c","\x37"),
	HX_HCSTRING("deleteFramebuffer","\x82","\x56","\x01","\x50"),
	HX_HCSTRING("deleteProgram","\x99","\xdd","\x82","\x52"),
	HX_HCSTRING("deleteRenderbuffer","\xa1","\x6d","\xb6","\x37"),
	HX_HCSTRING("deleteShader","\xb0","\xe5","\xb8","\x83"),
	HX_HCSTRING("deleteTexture","\xf0","\x5b","\x6a","\xfd"),
	HX_HCSTRING("depthFunc","\xe7","\x45","\x48","\x9a"),
	HX_HCSTRING("depthMask","\x8f","\x9b","\xd9","\x9e"),
	HX_HCSTRING("depthRange","\xba","\x99","\x8b","\x40"),
	HX_HCSTRING("detachShader","\xd8","\xd0","\xad","\xea"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("disableVertexAttribArray","\xe3","\x69","\x74","\x4a"),
	HX_HCSTRING("drawArrays","\xde","\xf3","\xb3","\xf9"),
	HX_HCSTRING("drawElements","\x5b","\xc2","\xb7","\x59"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("enableVertexAttribArray","\xe8","\x46","\x5a","\xac"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("framebufferRenderbuffer","\x63","\xdd","\xb2","\x36"),
	HX_HCSTRING("framebufferTexture2D","\xc0","\x66","\x22","\x24"),
	HX_HCSTRING("frontFace","\xe6","\x01","\xc1","\x80"),
	HX_HCSTRING("generateMipmap","\x9d","\xd6","\x0d","\x5b"),
	HX_HCSTRING("getActiveAttrib","\x66","\x8b","\x22","\x63"),
	HX_HCSTRING("getActiveUniform","\x98","\x35","\x4e","\xd7"),
	HX_HCSTRING("getAttachedShaders","\xb4","\x2e","\x77","\x93"),
	HX_HCSTRING("getAttribLocation","\xd5","\x1a","\x10","\x5d"),
	HX_HCSTRING("getBufferParameter","\x93","\x58","\xb4","\x14"),
	HX_HCSTRING("getContextAttributes","\x30","\xda","\xe1","\xad"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getExtension","\x09","\x30","\x67","\xf4"),
	HX_HCSTRING("getFramebufferAttachmentParameter","\x8f","\xbf","\x8d","\xff"),
	HX_HCSTRING("getParameter","\x33","\xd2","\x06","\x58"),
	HX_HCSTRING("getProgramInfoLog","\xc8","\xf1","\xf2","\xcd"),
	HX_HCSTRING("getProgramParameter","\x3b","\xc3","\x9c","\x96"),
	HX_HCSTRING("getRenderbufferParameter","\x7d","\xc1","\xd7","\x3c"),
	HX_HCSTRING("getShaderInfoLog","\x9b","\xbd","\xc8","\xf3"),
	HX_HCSTRING("getShaderParameter","\xce","\x69","\x5b","\x36"),
	HX_HCSTRING("getShaderPrecisionFormat","\xfa","\xb8","\xcf","\xce"),
	HX_HCSTRING("getShaderSource","\x96","\xa3","\x04","\xc5"),
	HX_HCSTRING("getSupportedExtensions","\xec","\x78","\x6d","\xa1"),
	HX_HCSTRING("getTexParameter","\x78","\x98","\xd3","\xd2"),
	HX_HCSTRING("getUniform","\x3e","\xc7","\xc5","\x04"),
	HX_HCSTRING("getUniformLocation","\x93","\x5f","\xd4","\x4f"),
	HX_HCSTRING("getVertexAttrib","\x84","\x2f","\x1c","\xa3"),
	HX_HCSTRING("getVertexAttribOffset","\x37","\xb6","\xce","\x56"),
	HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"),
	HX_HCSTRING("isBuffer","\x8a","\x58","\xfe","\x28"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("isFramebuffer","\x23","\x65","\x6c","\x83"),
	HX_HCSTRING("isProgram","\xba","\xc7","\xf7","\xf7"),
	HX_HCSTRING("isRenderbuffer","\xe0","\x2b","\xf8","\x01"),
	HX_HCSTRING("isShader","\xaf","\x5a","\x8a","\x75"),
	HX_HCSTRING("isTexture","\x11","\x46","\xdf","\xa2"),
	HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"),
	HX_HCSTRING("linkProgram","\xaa","\xad","\x7b","\x89"),
	HX_HCSTRING("pixelStorei","\x8e","\x34","\xc8","\x80"),
	HX_HCSTRING("polygonOffset","\xad","\x25","\x4d","\x66"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("renderbufferStorage","\x05","\xa1","\x70","\x87"),
	HX_HCSTRING("sampleCoverage","\x32","\x68","\x81","\x3b"),
	HX_HCSTRING("scissor","\x1c","\x28","\xe7","\x04"),
	HX_HCSTRING("shaderSource","\xe0","\x4d","\x1a","\xa2"),
	HX_HCSTRING("stencilFunc","\x60","\x83","\xbe","\x40"),
	HX_HCSTRING("stencilFuncSeparate","\xe3","\xbe","\xce","\xb2"),
	HX_HCSTRING("stencilMask","\x08","\xd9","\x4f","\x45"),
	HX_HCSTRING("stencilMaskSeparate","\x8b","\xfc","\xa9","\xc6"),
	HX_HCSTRING("stencilOp","\x3d","\x7a","\xec","\x56"),
	HX_HCSTRING("stencilOpSeparate","\xc0","\x5a","\x4a","\x53"),
	HX_HCSTRING("texImage2D","\xc6","\x7c","\x67","\xb9"),
	HX_HCSTRING("texParameterf","\x64","\x27","\x31","\x3c"),
	HX_HCSTRING("texParameteri","\x67","\x27","\x31","\x3c"),
	HX_HCSTRING("texSubImage2D","\x14","\x2f","\x90","\x28"),
	HX_HCSTRING("uniform1f","\x49","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1fv","\x0d","\xff","\x7e","\xda"),
	HX_HCSTRING("uniform1i","\x4c","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1iv","\xaa","\x01","\x7f","\xda"),
	HX_HCSTRING("uniform2f","\x28","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2fv","\x4e","\xc1","\x7f","\xda"),
	HX_HCSTRING("uniform2i","\x2b","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2iv","\xeb","\xc3","\x7f","\xda"),
	HX_HCSTRING("uniform3f","\x07","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3fv","\x8f","\x83","\x80","\xda"),
	HX_HCSTRING("uniform3i","\x0a","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3iv","\x2c","\x86","\x80","\xda"),
	HX_HCSTRING("uniform4f","\xe6","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4fv","\xd0","\x45","\x81","\xda"),
	HX_HCSTRING("uniform4i","\xe9","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4iv","\x6d","\x48","\x81","\xda"),
	HX_HCSTRING("uniformMatrix2fv","\x8d","\x8a","\x59","\xc5"),
	HX_HCSTRING("uniformMatrix3fv","\xce","\x4c","\x5a","\xc5"),
	HX_HCSTRING("uniformMatrix4fv","\x0f","\x0f","\x5b","\xc5"),
	HX_HCSTRING("useProgram","\xfd","\x6c","\xac","\xf6"),
	HX_HCSTRING("validateProgram","\x8e","\x80","\x0f","\xef"),
	HX_HCSTRING("vertexAttrib1f","\x63","\x94","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib1fv","\xb3","\x42","\x0b","\xec"),
	HX_HCSTRING("vertexAttrib2f","\x42","\x95","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib2fv","\xf4","\x04","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib3f","\x21","\x96","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib3fv","\x35","\xc7","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib4f","\x00","\x97","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib4fv","\x76","\x89","\x0d","\xec"),
	HX_HCSTRING("vertexAttribPointer","\x8f","\x04","\xb6","\x3f"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("snow_gl_active_texture","\x40","\x9e","\xa9","\xb1"),
	HX_HCSTRING("snow_gl_attach_shader","\x41","\x71","\xd1","\xb6"),
	HX_HCSTRING("snow_gl_bind_attrib_location","\xe6","\x75","\x2c","\xea"),
	HX_HCSTRING("snow_gl_bind_buffer","\xa4","\x17","\x73","\x69"),
	HX_HCSTRING("snow_gl_bind_framebuffer","\xc9","\xa7","\xaa","\xad"),
	HX_HCSTRING("snow_gl_bind_renderbuffer","\x7a","\x3a","\x34","\xce"),
	HX_HCSTRING("snow_gl_bind_texture","\xb7","\xbd","\x91","\xc8"),
	HX_HCSTRING("snow_gl_blend_color","\xd7","\x90","\x68","\xc1"),
	HX_HCSTRING("snow_gl_blend_equation","\x98","\xbc","\x3a","\x1d"),
	HX_HCSTRING("snow_gl_blend_equation_separate","\x2a","\x07","\x77","\x96"),
	HX_HCSTRING("snow_gl_blend_func","\x50","\x76","\x92","\x00"),
	HX_HCSTRING("snow_gl_blend_func_separate","\x72","\x56","\x66","\x16"),
	HX_HCSTRING("snow_gl_buffer_data","\x2b","\xf2","\xd9","\xfa"),
	HX_HCSTRING("snow_gl_buffer_sub_data","\x0a","\x89","\xc1","\x18"),
	HX_HCSTRING("snow_gl_check_framebuffer_status","\x79","\x29","\xb4","\xd2"),
	HX_HCSTRING("snow_gl_clear","\x2f","\x69","\xfa","\xf2"),
	HX_HCSTRING("snow_gl_clear_color","\x13","\xaf","\xe3","\xa0"),
	HX_HCSTRING("snow_gl_clear_depth","\xb3","\x2e","\xb1","\x2d"),
	HX_HCSTRING("snow_gl_clear_stencil","\xac","\xc7","\x19","\xf5"),
	HX_HCSTRING("snow_gl_color_mask","\xa6","\x21","\x38","\x91"),
	HX_HCSTRING("snow_gl_compile_shader","\xcf","\x93","\x9a","\x7a"),
	HX_HCSTRING("snow_gl_compressed_tex_image_2d","\x0e","\x64","\x9a","\xb4"),
	HX_HCSTRING("snow_gl_compressed_tex_sub_image_2d","\xed","\x1d","\x60","\xdf"),
	HX_HCSTRING("snow_gl_copy_tex_image_2d","\xda","\xde","\x60","\xa4"),
	HX_HCSTRING("snow_gl_copy_tex_sub_image_2d","\xb9","\xee","\xa9","\x82"),
	HX_HCSTRING("snow_gl_create_buffer","\xc5","\xe8","\xaf","\x3b"),
	HX_HCSTRING("snow_gl_create_framebuffer","\x08","\x1f","\x1f","\x0a"),
	HX_HCSTRING("snow_gl_create_program","\x1f","\x6b","\xa4","\x40"),
	HX_HCSTRING("snow_gl_create_render_buffer","\xe4","\x20","\xea","\xe8"),
	HX_HCSTRING("snow_gl_create_shader","\xea","\xea","\x3b","\x88"),
	HX_HCSTRING("snow_gl_create_texture","\x76","\xe9","\x8b","\xeb"),
	HX_HCSTRING("snow_gl_cull_face","\x2c","\x16","\x9a","\xf9"),
	HX_HCSTRING("snow_gl_delete_buffer","\x76","\xa3","\xf6","\xb1"),
	HX_HCSTRING("snow_gl_delete_framebuffer","\xb7","\x02","\x61","\x3c"),
	HX_HCSTRING("snow_gl_delete_program","\x4e","\x0b","\x41","\x48"),
	HX_HCSTRING("snow_gl_delete_render_buffer","\x53","\x8e","\x2f","\x9a"),
	HX_HCSTRING("snow_gl_delete_shader","\x9b","\xa5","\x82","\xfe"),
	HX_HCSTRING("snow_gl_delete_texture","\xa5","\x89","\x28","\xf3"),
	HX_HCSTRING("snow_gl_depth_func","\x5e","\xa8","\xa6","\xc4"),
	HX_HCSTRING("snow_gl_depth_mask","\x06","\xfe","\x37","\xc9"),
	HX_HCSTRING("snow_gl_depth_range","\x63","\x5f","\xc3","\x28"),
	HX_HCSTRING("snow_gl_detach_shader","\x73","\x7d","\xdb","\xad"),
	HX_HCSTRING("snow_gl_disable","\x0a","\x0e","\x5e","\x7b"),
	HX_HCSTRING("snow_gl_disable_vertex_attrib_array","\xaa","\xbe","\xc1","\xe2"),
	HX_HCSTRING("snow_gl_draw_arrays","\xf7","\x03","\xa6","\x9d"),
	HX_HCSTRING("snow_gl_draw_elements","\xb4","\xca","\x60","\x6a"),
	HX_HCSTRING("snow_gl_enable","\xa1","\x64","\x01","\x99"),
	HX_HCSTRING("snow_gl_enable_vertex_attrib_array","\xc1","\x8a","\x6d","\xa4"),
	HX_HCSTRING("snow_gl_finish","\x71","\xf6","\xf8","\x26"),
	HX_HCSTRING("snow_gl_flush","\x66","\x5a","\x3a","\xad"),
	HX_HCSTRING("snow_gl_framebuffer_renderbuffer","\x46","\x10","\x1e","\x82"),
	HX_HCSTRING("snow_gl_framebuffer_texture2D","\xfd","\xd7","\x05","\x42"),
	HX_HCSTRING("snow_gl_front_face","\x51","\xd0","\x03","\x95"),
	HX_HCSTRING("snow_gl_generate_mipmap","\xb4","\xf6","\x8d","\x53"),
	HX_HCSTRING("snow_gl_get_active_attrib","\xdc","\x09","\x01","\x3c"),
	HX_HCSTRING("snow_gl_get_active_uniform","\x62","\x5e","\x1e","\xc1"),
	HX_HCSTRING("snow_gl_get_attrib_location","\x43","\x63","\x78","\x8d"),
	HX_HCSTRING("snow_gl_get_buffer_paramerter","\x7f","\xb6","\xd1","\xe9"),
	HX_HCSTRING("snow_gl_get_context_attributes","\xce","\x23","\x56","\x9e"),
	HX_HCSTRING("snow_gl_get_error","\xc1","\x98","\xa3","\x48"),
	HX_HCSTRING("snow_gl_get_framebuffer_attachment_parameter","\x86","\x34","\x22","\x2d"),
	HX_HCSTRING("snow_gl_get_parameter","\x22","\x73","\xc6","\xeb"),
	HX_HCSTRING("snow_gl_get_program_info_log","\xf5","\x30","\x25","\x18"),
	HX_HCSTRING("snow_gl_get_program_parameter","\x67","\xa7","\x71","\x4a"),
	HX_HCSTRING("snow_gl_get_render_buffer_parameter","\xec","\x8f","\x46","\xd0"),
	HX_HCSTRING("snow_gl_get_shader_info_log","\xc6","\x6a","\x18","\x82"),
	HX_HCSTRING("snow_gl_get_shader_parameter","\x76","\x04","\x51","\x95"),
	HX_HCSTRING("snow_gl_get_shader_precision_format","\x2b","\x64","\xe4","\x61"),
	HX_HCSTRING("snow_gl_get_shader_source","\xee","\x4f","\xed","\x51"),
	HX_HCSTRING("snow_gl_get_supported_extensions","\xec","\xa8","\x03","\x7a"),
	HX_HCSTRING("snow_gl_get_tex_parameter","\x0a","\x04","\x49","\x9b"),
	HX_HCSTRING("snow_gl_get_uniform","\x6d","\xfe","\xa5","\x36"),
	HX_HCSTRING("snow_gl_get_uniform_location","\x87","\xb1","\x3b","\x3c"),
	HX_HCSTRING("snow_gl_get_vertex_attrib","\xfe","\xff","\x76","\xf6"),
	HX_HCSTRING("snow_gl_get_vertex_attrib_offset","\xf4","\xc4","\xba","\x32"),
	HX_HCSTRING("snow_gl_hint","\x25","\x90","\x97","\x72"),
	HX_HCSTRING("snow_gl_is_buffer","\x97","\x94","\x89","\x07"),
	HX_HCSTRING("snow_gl_is_enabled","\x0a","\xd1","\x78","\x5d"),
	HX_HCSTRING("snow_gl_is_framebuffer","\xf6","\x59","\x4b","\xa9"),
	HX_HCSTRING("snow_gl_is_program","\x0d","\x17","\x41","\xd3"),
	HX_HCSTRING("snow_gl_is_renderbuffer","\xad","\x6f","\x2f","\xff"),
	HX_HCSTRING("snow_gl_is_shader","\xbc","\x96","\x15","\x54"),
	HX_HCSTRING("snow_gl_is_texture","\x64","\x95","\x28","\x7e"),
	HX_HCSTRING("snow_gl_line_width","\x59","\xa1","\xef","\x6a"),
	HX_HCSTRING("snow_gl_link_program","\x9d","\x66","\xbe","\x73"),
	HX_HCSTRING("snow_gl_pixel_storei","\xdf","\x39","\x45","\x7d"),
	HX_HCSTRING("snow_gl_polygon_offset","\x16","\x4e","\x9e","\xe1"),
	HX_HCSTRING("snow_gl_read_pixels","\x58","\xc9","\x02","\x7c"),
	HX_HCSTRING("snow_gl_renderbuffer_storage","\x30","\x3a","\xfa","\x4b"),
	HX_HCSTRING("snow_gl_sample_coverage","\xff","\xe9","\x1a","\xf4"),
	HX_HCSTRING("snow_gl_scissor","\x3e","\xcc","\xec","\xce"),
	HX_HCSTRING("snow_gl_shader_source","\x97","\xcb","\xaa","\x30"),
	HX_HCSTRING("snow_gl_stencil_func","\x45","\x38","\x3e","\xa4"),
	HX_HCSTRING("snow_gl_stencil_func_separate","\xdd","\x2d","\xff","\x50"),
	HX_HCSTRING("snow_gl_stencil_mask","\xed","\x8d","\xcf","\xa8"),
	HX_HCSTRING("snow_gl_stencil_mask_separate","\x35","\xe3","\xf9","\x9c"),
	HX_HCSTRING("snow_gl_stencil_op","\xe2","\xbb","\x9c","\xbc"),
	HX_HCSTRING("snow_gl_stencil_op_separate","\xa0","\xce","\xe3","\x45"),
	HX_HCSTRING("snow_gl_tex_image_2d","\xcc","\x32","\x69","\x74"),
	HX_HCSTRING("snow_gl_tex_parameterf","\x53","\x3d","\xa9","\x4b"),
	HX_HCSTRING("snow_gl_tex_parameteri","\x56","\x3d","\xa9","\x4b"),
	HX_HCSTRING("snow_gl_tex_sub_image_2d","\xab","\x23","\xd0","\x8f"),
	HX_HCSTRING("snow_gl_uniform1f","\xeb","\x91","\xae","\x99"),
	HX_HCSTRING("snow_gl_uniform1fv","\x2b","\x1c","\x11","\xdf"),
	HX_HCSTRING("snow_gl_uniform1i","\xee","\x91","\xae","\x99"),
	HX_HCSTRING("snow_gl_uniform1iv","\xc8","\x1e","\x11","\xdf"),
	HX_HCSTRING("snow_gl_uniform2f","\xca","\x92","\xae","\x99"),
	HX_HCSTRING("snow_gl_uniform2fv","\x6c","\xde","\x11","\xdf"),
	HX_HCSTRING("snow_gl_uniform2i","\xcd","\x92","\xae","\x99"),
	HX_HCSTRING("snow_gl_uniform2iv","\x09","\xe1","\x11","\xdf"),
	HX_HCSTRING("snow_gl_uniform3f","\xa9","\x93","\xae","\x99"),
	HX_HCSTRING("snow_gl_uniform3fv","\xad","\xa0","\x12","\xdf"),
	HX_HCSTRING("snow_gl_uniform3i","\xac","\x93","\xae","\x99"),
	HX_HCSTRING("snow_gl_uniform3iv","\x4a","\xa3","\x12","\xdf"),
	HX_HCSTRING("snow_gl_uniform4f","\x88","\x94","\xae","\x99"),
	HX_HCSTRING("snow_gl_uniform4fv","\xee","\x62","\x13","\xdf"),
	HX_HCSTRING("snow_gl_uniform4i","\x8b","\x94","\xae","\x99"),
	HX_HCSTRING("snow_gl_uniform4iv","\x8b","\x65","\x13","\xdf"),
	HX_HCSTRING("snow_gl_uniform_matrix","\x4a","\x59","\xfe","\xb0"),
	HX_HCSTRING("snow_gl_use_program","\x6e","\x4c","\x52","\xa9"),
	HX_HCSTRING("snow_gl_validate_program","\x39","\xc2","\x62","\x98"),
	HX_HCSTRING("snow_gl_version","\x3a","\x8b","\xf7","\x46"),
	HX_HCSTRING("snow_gl_vertex_attrib1f","\x7c","\x1e","\x08","\xe8"),
	HX_HCSTRING("snow_gl_vertex_attrib1fv","\x7a","\x8e","\x12","\x1f"),
	HX_HCSTRING("snow_gl_vertex_attrib2f","\x5b","\x1f","\x08","\xe8"),
	HX_HCSTRING("snow_gl_vertex_attrib2fv","\xbb","\x50","\x13","\x1f"),
	HX_HCSTRING("snow_gl_vertex_attrib3f","\x3a","\x20","\x08","\xe8"),
	HX_HCSTRING("snow_gl_vertex_attrib3fv","\xfc","\x12","\x14","\x1f"),
	HX_HCSTRING("snow_gl_vertex_attrib4f","\x19","\x21","\x08","\xe8"),
	HX_HCSTRING("snow_gl_vertex_attrib4fv","\x3d","\xd5","\x14","\x1f"),
	HX_HCSTRING("snow_gl_vertex_attrib_pointer","\xe5","\x14","\xfd","\x4c"),
	HX_HCSTRING("snow_gl_viewport","\x04","\x46","\x8f","\x97"),
	HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6"),
	HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde"),
	HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb"),
	HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9"),
	HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2"),
	HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16"),
	HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd"),
	HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"),
	HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6"),
	HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c"),
	HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48"),
	HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33"),
	HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20"),
	HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3"),
	HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0"),
	HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc"),
	HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8"),
	HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33"),
	HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75"),
	HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71"),
	HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90"),
	HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37"),
	HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17"),
	HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3"),
	HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec"),
	HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c"),
	HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74"),
	HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4"),
	HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06"),
	HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde"),
	HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67"),
	HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d"),
	HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2"),
	HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15"),
	HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),
	HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),
	HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c"),
	HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0"),
	HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab"),
	HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1"),
	HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf"),
	HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32"),
	HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70"),
	HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5"),
	HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28"),
	HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59"),
	HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac"),
	HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1"),
	HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00"),
	HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00"),
	HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23"),
	HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b"),
	HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a"),
	HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1"),
	HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef"),
	HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf"),
	HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66"),
	HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b"),
	HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e"),
	HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73"),
	HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc"),
	HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf"),
	HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c"),
	HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0"),
	HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49"),
	HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90"),
	HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a"),
	HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08"),
	HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88"),
	HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2"),
	HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6"),
	HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55"),
	HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8"),
	HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14"),
	HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b"),
	HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3"),
	HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb"),
	HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08"),
	HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a"),
	HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96"),
	HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94"),
	HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1"),
	HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0"),
	HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c"),
	HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9"),
	HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6"),
	HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a"),
	HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1"),
	HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c"),
	HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03"),
	HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69"),
	HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd"),
	HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12"),
	HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf"),
	HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e"),
	HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64"),
	HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83"),
	HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b"),
	HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01"),
	HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa"),
	HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb"),
	HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00"),
	HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"),
	HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80"),
	HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f"),
	HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),
	HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),
	HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"),
	HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63"),
	HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd"),
	HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b"),
	HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38"),
	HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c"),
	HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9"),
	HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49"),
	HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f"),
	HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a"),
	HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37"),
	HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77"),
	HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b"),
	HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54"),
	HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a"),
	HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87"),
	HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e"),
	HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45"),
	HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6"),
	HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75"),
	HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c"),
	HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a"),
	HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70"),
	HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53"),
	HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"),
	HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8"),
	HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53"),
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31"),
	HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a"),
	HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30"),
	HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c"),
	HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a"),
	HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"),
	HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"),
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e"),
	HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65"),
	HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b"),
	HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99"),
	HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e"),
	HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46"),
	HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2"),
	HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e"),
	HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad"),
	HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b"),
	HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d"),
	HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa"),
	HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce"),
	HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),
	HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96"),
	HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a"),
	HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb"),
	HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d"),
	HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b"),
	HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d"),
	HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5"),
	HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"),
	HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97"),
	HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34"),
	HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14"),
	HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c"),
	HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4"),
	HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9"),
	HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47"),
	HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45"),
	HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f"),
	HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09"),
	HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50"),
	HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9"),
	HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65"),
	HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8"),
	HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6"),
	HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43"),
	HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97"),
	HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27"),
	HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b"),
	HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43"),
	HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7"),
	HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5"),
	HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e"),
	HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b"),
	HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd"),
	HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87"),
	HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3"),
	HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a"),
	HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86"),
	HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9"),
	HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01"),
	HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c"),
	HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8"),
	HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5"),
	HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23"),
	HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65"),
	HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43"),
	HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d"),
	HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6"),
	HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45"),
	HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9"),
	HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0"),
	::String(null()) };

void GL_FFI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.opengl.native.GL_FFI","\xb9","\xfa","\xcc","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GL_FFI_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GL_FFI_obj >;
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

void GL_FFI_obj::__boot()
{
	snow_gl_active_texture= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_active_texture","\x40","\x9e","\xa9","\xb1"),(int)1);
	snow_gl_attach_shader= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_attach_shader","\x41","\x71","\xd1","\xb6"),(int)2);
	snow_gl_bind_attrib_location= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_bind_attrib_location","\xe6","\x75","\x2c","\xea"),(int)3);
	snow_gl_bind_buffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_bind_buffer","\xa4","\x17","\x73","\x69"),(int)2);
	snow_gl_bind_framebuffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_bind_framebuffer","\xc9","\xa7","\xaa","\xad"),(int)2);
	snow_gl_bind_renderbuffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_bind_renderbuffer","\x7a","\x3a","\x34","\xce"),(int)2);
	snow_gl_bind_texture= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_bind_texture","\xb7","\xbd","\x91","\xc8"),(int)2);
	snow_gl_blend_color= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_blend_color","\xd7","\x90","\x68","\xc1"),(int)4);
	snow_gl_blend_equation= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_blend_equation","\x98","\xbc","\x3a","\x1d"),(int)1);
	snow_gl_blend_equation_separate= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_blend_equation_separate","\x2a","\x07","\x77","\x96"),(int)2);
	snow_gl_blend_func= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_blend_func","\x50","\x76","\x92","\x00"),(int)2);
	snow_gl_blend_func_separate= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_blend_func_separate","\x72","\x56","\x66","\x16"),(int)4);
	snow_gl_buffer_data= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_buffer_data","\x2b","\xf2","\xd9","\xfa"),(int)5);
	snow_gl_buffer_sub_data= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_buffer_sub_data","\x0a","\x89","\xc1","\x18"),(int)5);
	snow_gl_check_framebuffer_status= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_check_framebuffer_status","\x79","\x29","\xb4","\xd2"),(int)1);
	snow_gl_clear= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_clear","\x2f","\x69","\xfa","\xf2"),(int)1);
	snow_gl_clear_color= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_clear_color","\x13","\xaf","\xe3","\xa0"),(int)4);
	snow_gl_clear_depth= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_clear_depth","\xb3","\x2e","\xb1","\x2d"),(int)1);
	snow_gl_clear_stencil= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_clear_stencil","\xac","\xc7","\x19","\xf5"),(int)1);
	snow_gl_color_mask= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_color_mask","\xa6","\x21","\x38","\x91"),(int)4);
	snow_gl_compile_shader= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_compile_shader","\xcf","\x93","\x9a","\x7a"),(int)1);
	snow_gl_compressed_tex_image_2d= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_compressed_tex_image_2d","\x0e","\x64","\x9a","\xb4"),(int)-1);
	snow_gl_compressed_tex_sub_image_2d= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_compressed_tex_sub_image_2d","\xed","\x1d","\x60","\xdf"),(int)-1);
	snow_gl_copy_tex_image_2d= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_copy_tex_image_2d","\xda","\xde","\x60","\xa4"),(int)-1);
	snow_gl_copy_tex_sub_image_2d= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_copy_tex_sub_image_2d","\xb9","\xee","\xa9","\x82"),(int)-1);
	snow_gl_create_buffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_create_buffer","\xc5","\xe8","\xaf","\x3b"),(int)0);
	snow_gl_create_framebuffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_create_framebuffer","\x08","\x1f","\x1f","\x0a"),(int)0);
	snow_gl_create_program= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_create_program","\x1f","\x6b","\xa4","\x40"),(int)0);
	snow_gl_create_render_buffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_create_render_buffer","\xe4","\x20","\xea","\xe8"),(int)0);
	snow_gl_create_shader= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_create_shader","\xea","\xea","\x3b","\x88"),(int)1);
	snow_gl_create_texture= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_create_texture","\x76","\xe9","\x8b","\xeb"),(int)0);
	snow_gl_cull_face= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_cull_face","\x2c","\x16","\x9a","\xf9"),(int)1);
	snow_gl_delete_buffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_delete_buffer","\x76","\xa3","\xf6","\xb1"),(int)1);
	snow_gl_delete_framebuffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_delete_framebuffer","\xb7","\x02","\x61","\x3c"),(int)1);
	snow_gl_delete_program= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_delete_program","\x4e","\x0b","\x41","\x48"),(int)1);
	snow_gl_delete_render_buffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_delete_render_buffer","\x53","\x8e","\x2f","\x9a"),(int)1);
	snow_gl_delete_shader= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_delete_shader","\x9b","\xa5","\x82","\xfe"),(int)1);
	snow_gl_delete_texture= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_delete_texture","\xa5","\x89","\x28","\xf3"),(int)1);
	snow_gl_depth_func= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_depth_func","\x5e","\xa8","\xa6","\xc4"),(int)1);
	snow_gl_depth_mask= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_depth_mask","\x06","\xfe","\x37","\xc9"),(int)1);
	snow_gl_depth_range= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_depth_range","\x63","\x5f","\xc3","\x28"),(int)2);
	snow_gl_detach_shader= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_detach_shader","\x73","\x7d","\xdb","\xad"),(int)2);
	snow_gl_disable= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_disable","\x0a","\x0e","\x5e","\x7b"),(int)1);
	snow_gl_disable_vertex_attrib_array= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_disable_vertex_attrib_array","\xaa","\xbe","\xc1","\xe2"),(int)1);
	snow_gl_draw_arrays= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_draw_arrays","\xf7","\x03","\xa6","\x9d"),(int)3);
	snow_gl_draw_elements= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_draw_elements","\xb4","\xca","\x60","\x6a"),(int)4);
	snow_gl_enable= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_enable","\xa1","\x64","\x01","\x99"),(int)1);
	snow_gl_enable_vertex_attrib_array= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_enable_vertex_attrib_array","\xc1","\x8a","\x6d","\xa4"),(int)1);
	snow_gl_finish= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_finish","\x71","\xf6","\xf8","\x26"),(int)0);
	snow_gl_flush= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_flush","\x66","\x5a","\x3a","\xad"),(int)0);
	snow_gl_framebuffer_renderbuffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_framebuffer_renderbuffer","\x46","\x10","\x1e","\x82"),(int)4);
	snow_gl_framebuffer_texture2D= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_framebuffer_texture2D","\xfd","\xd7","\x05","\x42"),(int)5);
	snow_gl_front_face= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_front_face","\x51","\xd0","\x03","\x95"),(int)1);
	snow_gl_generate_mipmap= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_generate_mipmap","\xb4","\xf6","\x8d","\x53"),(int)1);
	snow_gl_get_active_attrib= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_active_attrib","\xdc","\x09","\x01","\x3c"),(int)2);
	snow_gl_get_active_uniform= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_active_uniform","\x62","\x5e","\x1e","\xc1"),(int)2);
	snow_gl_get_attrib_location= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_attrib_location","\x43","\x63","\x78","\x8d"),(int)2);
	snow_gl_get_buffer_paramerter= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_buffer_paramerter","\x7f","\xb6","\xd1","\xe9"),(int)2);
	snow_gl_get_context_attributes= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_context_attributes","\xce","\x23","\x56","\x9e"),(int)0);
	snow_gl_get_error= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_error","\xc1","\x98","\xa3","\x48"),(int)0);
	snow_gl_get_framebuffer_attachment_parameter= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_framebuffer_attachment_parameter","\x86","\x34","\x22","\x2d"),(int)3);
	snow_gl_get_parameter= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_parameter","\x22","\x73","\xc6","\xeb"),(int)1);
	snow_gl_get_program_info_log= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_program_info_log","\xf5","\x30","\x25","\x18"),(int)1);
	snow_gl_get_program_parameter= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_program_parameter","\x67","\xa7","\x71","\x4a"),(int)2);
	snow_gl_get_render_buffer_parameter= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_render_buffer_parameter","\xec","\x8f","\x46","\xd0"),(int)2);
	snow_gl_get_shader_info_log= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_shader_info_log","\xc6","\x6a","\x18","\x82"),(int)1);
	snow_gl_get_shader_parameter= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_shader_parameter","\x76","\x04","\x51","\x95"),(int)2);
	snow_gl_get_shader_precision_format= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_shader_precision_format","\x2b","\x64","\xe4","\x61"),(int)2);
	snow_gl_get_shader_source= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_shader_source","\xee","\x4f","\xed","\x51"),(int)1);
	snow_gl_get_supported_extensions= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_supported_extensions","\xec","\xa8","\x03","\x7a"),(int)1);
	snow_gl_get_tex_parameter= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_tex_parameter","\x0a","\x04","\x49","\x9b"),(int)2);
	snow_gl_get_uniform= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_uniform","\x6d","\xfe","\xa5","\x36"),(int)2);
	snow_gl_get_uniform_location= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_uniform_location","\x87","\xb1","\x3b","\x3c"),(int)2);
	snow_gl_get_vertex_attrib= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_vertex_attrib","\xfe","\xff","\x76","\xf6"),(int)2);
	snow_gl_get_vertex_attrib_offset= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_get_vertex_attrib_offset","\xf4","\xc4","\xba","\x32"),(int)2);
	snow_gl_hint= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_hint","\x25","\x90","\x97","\x72"),(int)2);
	snow_gl_is_buffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_is_buffer","\x97","\x94","\x89","\x07"),(int)1);
	snow_gl_is_enabled= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_is_enabled","\x0a","\xd1","\x78","\x5d"),(int)1);
	snow_gl_is_framebuffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_is_framebuffer","\xf6","\x59","\x4b","\xa9"),(int)1);
	snow_gl_is_program= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_is_program","\x0d","\x17","\x41","\xd3"),(int)1);
	snow_gl_is_renderbuffer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_is_renderbuffer","\xad","\x6f","\x2f","\xff"),(int)1);
	snow_gl_is_shader= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_is_shader","\xbc","\x96","\x15","\x54"),(int)1);
	snow_gl_is_texture= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_is_texture","\x64","\x95","\x28","\x7e"),(int)1);
	snow_gl_line_width= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_line_width","\x59","\xa1","\xef","\x6a"),(int)1);
	snow_gl_link_program= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_link_program","\x9d","\x66","\xbe","\x73"),(int)1);
	snow_gl_pixel_storei= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_pixel_storei","\xdf","\x39","\x45","\x7d"),(int)2);
	snow_gl_polygon_offset= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_polygon_offset","\x16","\x4e","\x9e","\xe1"),(int)2);
	snow_gl_read_pixels= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_read_pixels","\x58","\xc9","\x02","\x7c"),(int)-1);
	snow_gl_renderbuffer_storage= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_renderbuffer_storage","\x30","\x3a","\xfa","\x4b"),(int)4);
	snow_gl_sample_coverage= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_sample_coverage","\xff","\xe9","\x1a","\xf4"),(int)2);
	snow_gl_scissor= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_scissor","\x3e","\xcc","\xec","\xce"),(int)4);
	snow_gl_shader_source= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_shader_source","\x97","\xcb","\xaa","\x30"),(int)2);
	snow_gl_stencil_func= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_stencil_func","\x45","\x38","\x3e","\xa4"),(int)3);
	snow_gl_stencil_func_separate= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_stencil_func_separate","\xdd","\x2d","\xff","\x50"),(int)4);
	snow_gl_stencil_mask= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_stencil_mask","\xed","\x8d","\xcf","\xa8"),(int)1);
	snow_gl_stencil_mask_separate= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_stencil_mask_separate","\x35","\xe3","\xf9","\x9c"),(int)2);
	snow_gl_stencil_op= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_stencil_op","\xe2","\xbb","\x9c","\xbc"),(int)3);
	snow_gl_stencil_op_separate= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_stencil_op_separate","\xa0","\xce","\xe3","\x45"),(int)4);
	snow_gl_tex_image_2d= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_tex_image_2d","\xcc","\x32","\x69","\x74"),(int)-1);
	snow_gl_tex_parameterf= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_tex_parameterf","\x53","\x3d","\xa9","\x4b"),(int)3);
	snow_gl_tex_parameteri= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_tex_parameteri","\x56","\x3d","\xa9","\x4b"),(int)3);
	snow_gl_tex_sub_image_2d= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_tex_sub_image_2d","\xab","\x23","\xd0","\x8f"),(int)-1);
	snow_gl_uniform1f= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform1f","\xeb","\x91","\xae","\x99"),(int)2);
	snow_gl_uniform1fv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform1fv","\x2b","\x1c","\x11","\xdf"),(int)4);
	snow_gl_uniform1i= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform1i","\xee","\x91","\xae","\x99"),(int)2);
	snow_gl_uniform1iv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform1iv","\xc8","\x1e","\x11","\xdf"),(int)4);
	snow_gl_uniform2f= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform2f","\xca","\x92","\xae","\x99"),(int)3);
	snow_gl_uniform2fv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform2fv","\x6c","\xde","\x11","\xdf"),(int)4);
	snow_gl_uniform2i= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform2i","\xcd","\x92","\xae","\x99"),(int)3);
	snow_gl_uniform2iv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform2iv","\x09","\xe1","\x11","\xdf"),(int)4);
	snow_gl_uniform3f= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform3f","\xa9","\x93","\xae","\x99"),(int)4);
	snow_gl_uniform3fv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform3fv","\xad","\xa0","\x12","\xdf"),(int)4);
	snow_gl_uniform3i= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform3i","\xac","\x93","\xae","\x99"),(int)4);
	snow_gl_uniform3iv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform3iv","\x4a","\xa3","\x12","\xdf"),(int)4);
	snow_gl_uniform4f= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform4f","\x88","\x94","\xae","\x99"),(int)5);
	snow_gl_uniform4fv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform4fv","\xee","\x62","\x13","\xdf"),(int)4);
	snow_gl_uniform4i= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform4i","\x8b","\x94","\xae","\x99"),(int)5);
	snow_gl_uniform4iv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform4iv","\x8b","\x65","\x13","\xdf"),(int)4);
	snow_gl_uniform_matrix= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_uniform_matrix","\x4a","\x59","\xfe","\xb0"),(int)-1);
	snow_gl_use_program= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_use_program","\x6e","\x4c","\x52","\xa9"),(int)1);
	snow_gl_validate_program= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_validate_program","\x39","\xc2","\x62","\x98"),(int)1);
	snow_gl_version= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_version","\x3a","\x8b","\xf7","\x46"),(int)0);
	snow_gl_vertex_attrib1f= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_vertex_attrib1f","\x7c","\x1e","\x08","\xe8"),(int)2);
	snow_gl_vertex_attrib1fv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_vertex_attrib1fv","\x7a","\x8e","\x12","\x1f"),(int)4);
	snow_gl_vertex_attrib2f= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_vertex_attrib2f","\x5b","\x1f","\x08","\xe8"),(int)3);
	snow_gl_vertex_attrib2fv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_vertex_attrib2fv","\xbb","\x50","\x13","\x1f"),(int)4);
	snow_gl_vertex_attrib3f= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_vertex_attrib3f","\x3a","\x20","\x08","\xe8"),(int)4);
	snow_gl_vertex_attrib3fv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_vertex_attrib3fv","\xfc","\x12","\x14","\x1f"),(int)4);
	snow_gl_vertex_attrib4f= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_vertex_attrib4f","\x19","\x21","\x08","\xe8"),(int)5);
	snow_gl_vertex_attrib4fv= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_vertex_attrib4fv","\x3d","\xd5","\x14","\x1f"),(int)4);
	snow_gl_vertex_attrib_pointer= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_vertex_attrib_pointer","\xe5","\x14","\xfd","\x4c"),(int)-1);
	snow_gl_viewport= ::snow::modules::opengl::native::GL_FFI_obj::load(HX_HCSTRING("snow_gl_viewport","\x04","\x46","\x8f","\x97"),(int)4);
	DEPTH_BUFFER_BIT= (int)256;
	STENCIL_BUFFER_BIT= (int)1024;
	COLOR_BUFFER_BIT= (int)16384;
	POINTS= (int)0;
	LINES= (int)1;
	LINE_LOOP= (int)2;
	LINE_STRIP= (int)3;
	TRIANGLES= (int)4;
	TRIANGLE_STRIP= (int)5;
	TRIANGLE_FAN= (int)6;
	ZERO= (int)0;
	ONE= (int)1;
	SRC_COLOR= (int)768;
	ONE_MINUS_SRC_COLOR= (int)769;
	SRC_ALPHA= (int)770;
	ONE_MINUS_SRC_ALPHA= (int)771;
	DST_ALPHA= (int)772;
	ONE_MINUS_DST_ALPHA= (int)773;
	DST_COLOR= (int)774;
	ONE_MINUS_DST_COLOR= (int)775;
	SRC_ALPHA_SATURATE= (int)776;
	FUNC_ADD= (int)32774;
	BLEND_EQUATION= (int)32777;
	BLEND_EQUATION_RGB= (int)32777;
	BLEND_EQUATION_ALPHA= (int)34877;
	FUNC_SUBTRACT= (int)32778;
	FUNC_REVERSE_SUBTRACT= (int)32779;
	BLEND_DST_RGB= (int)32968;
	BLEND_SRC_RGB= (int)32969;
	BLEND_DST_ALPHA= (int)32970;
	BLEND_SRC_ALPHA= (int)32971;
	CONSTANT_COLOR= (int)32769;
	ONE_MINUS_CONSTANT_COLOR= (int)32770;
	CONSTANT_ALPHA= (int)32771;
	ONE_MINUS_CONSTANT_ALPHA= (int)32772;
	BLEND_COLOR= (int)32773;
	ARRAY_BUFFER= (int)34962;
	ELEMENT_ARRAY_BUFFER= (int)34963;
	ARRAY_BUFFER_BINDING= (int)34964;
	ELEMENT_ARRAY_BUFFER_BINDING= (int)34965;
	STREAM_DRAW= (int)35040;
	STATIC_DRAW= (int)35044;
	DYNAMIC_DRAW= (int)35048;
	BUFFER_SIZE= (int)34660;
	BUFFER_USAGE= (int)34661;
	CURRENT_VERTEX_ATTRIB= (int)34342;
	FRONT= (int)1028;
	BACK= (int)1029;
	FRONT_AND_BACK= (int)1032;
	CULL_FACE= (int)2884;
	BLEND= (int)3042;
	DITHER= (int)3024;
	STENCIL_TEST= (int)2960;
	DEPTH_TEST= (int)2929;
	SCISSOR_TEST= (int)3089;
	POLYGON_OFFSET_FILL= (int)32823;
	SAMPLE_ALPHA_TO_COVERAGE= (int)32926;
	SAMPLE_COVERAGE= (int)32928;
	NO_ERROR= (int)0;
	INVALID_ENUM= (int)1280;
	INVALID_VALUE= (int)1281;
	INVALID_OPERATION= (int)1282;
	OUT_OF_MEMORY= (int)1285;
	CW= (int)2304;
	CCW= (int)2305;
	LINE_WIDTH= (int)2849;
	ALIASED_POINT_SIZE_RANGE= (int)33901;
	ALIASED_LINE_WIDTH_RANGE= (int)33902;
	CULL_FACE_MODE= (int)2885;
	FRONT_FACE= (int)2886;
	DEPTH_RANGE= (int)2928;
	DEPTH_WRITEMASK= (int)2930;
	DEPTH_CLEAR_VALUE= (int)2931;
	DEPTH_FUNC= (int)2932;
	STENCIL_CLEAR_VALUE= (int)2961;
	STENCIL_FUNC= (int)2962;
	STENCIL_FAIL= (int)2964;
	STENCIL_PASS_DEPTH_FAIL= (int)2965;
	STENCIL_PASS_DEPTH_PASS= (int)2966;
	STENCIL_REF= (int)2967;
	STENCIL_VALUE_MASK= (int)2963;
	STENCIL_WRITEMASK= (int)2968;
	STENCIL_BACK_FUNC= (int)34816;
	STENCIL_BACK_FAIL= (int)34817;
	STENCIL_BACK_PASS_DEPTH_FAIL= (int)34818;
	STENCIL_BACK_PASS_DEPTH_PASS= (int)34819;
	STENCIL_BACK_REF= (int)36003;
	STENCIL_BACK_VALUE_MASK= (int)36004;
	STENCIL_BACK_WRITEMASK= (int)36005;
	VIEWPORT= (int)2978;
	SCISSOR_BOX= (int)3088;
	COLOR_CLEAR_VALUE= (int)3106;
	COLOR_WRITEMASK= (int)3107;
	UNPACK_ALIGNMENT= (int)3317;
	PACK_ALIGNMENT= (int)3333;
	MAX_TEXTURE_SIZE= (int)3379;
	MAX_VIEWPORT_DIMS= (int)3386;
	SUBPIXEL_BITS= (int)3408;
	RED_BITS= (int)3410;
	GREEN_BITS= (int)3411;
	BLUE_BITS= (int)3412;
	ALPHA_BITS= (int)3413;
	DEPTH_BITS= (int)3414;
	STENCIL_BITS= (int)3415;
	POLYGON_OFFSET_UNITS= (int)10752;
	POLYGON_OFFSET_FACTOR= (int)32824;
	TEXTURE_BINDING_2D= (int)32873;
	SAMPLE_BUFFERS= (int)32936;
	SAMPLES= (int)32937;
	SAMPLE_COVERAGE_VALUE= (int)32938;
	SAMPLE_COVERAGE_INVERT= (int)32939;
	COMPRESSED_TEXTURE_FORMATS= (int)34467;
	DONT_CARE= (int)4352;
	FASTEST= (int)4353;
	NICEST= (int)4354;
	GENERATE_MIPMAP_HINT= (int)33170;
	BYTE= (int)5120;
	UNSIGNED_BYTE= (int)5121;
	SHORT= (int)5122;
	UNSIGNED_SHORT= (int)5123;
	INT= (int)5124;
	UNSIGNED_INT= (int)5125;
	FLOAT= (int)5126;
	DEPTH_COMPONENT= (int)6402;
	ALPHA= (int)6406;
	RGB= (int)6407;
	RGBA= (int)6408;
	LUMINANCE= (int)6409;
	LUMINANCE_ALPHA= (int)6410;
	UNSIGNED_SHORT_4_4_4_4= (int)32819;
	UNSIGNED_SHORT_5_5_5_1= (int)32820;
	UNSIGNED_SHORT_5_6_5= (int)33635;
	FRAGMENT_SHADER= (int)35632;
	VERTEX_SHADER= (int)35633;
	MAX_VERTEX_ATTRIBS= (int)34921;
	MAX_VERTEX_UNIFORM_VECTORS= (int)36347;
	MAX_VARYING_VECTORS= (int)36348;
	MAX_COMBINED_TEXTURE_IMAGE_UNITS= (int)35661;
	MAX_VERTEX_TEXTURE_IMAGE_UNITS= (int)35660;
	MAX_TEXTURE_IMAGE_UNITS= (int)34930;
	MAX_FRAGMENT_UNIFORM_VECTORS= (int)36349;
	SHADER_TYPE= (int)35663;
	DELETE_STATUS= (int)35712;
	LINK_STATUS= (int)35714;
	VALIDATE_STATUS= (int)35715;
	ATTACHED_SHADERS= (int)35717;
	ACTIVE_UNIFORMS= (int)35718;
	ACTIVE_ATTRIBUTES= (int)35721;
	SHADING_LANGUAGE_VERSION= (int)35724;
	CURRENT_PROGRAM= (int)35725;
	NEVER= (int)512;
	LESS= (int)513;
	EQUAL= (int)514;
	LEQUAL= (int)515;
	GREATER= (int)516;
	NOTEQUAL= (int)517;
	GEQUAL= (int)518;
	ALWAYS= (int)519;
	KEEP= (int)7680;
	REPLACE= (int)7681;
	INCR= (int)7682;
	DECR= (int)7683;
	INVERT= (int)5386;
	INCR_WRAP= (int)34055;
	DECR_WRAP= (int)34056;
	VENDOR= (int)7936;
	RENDERER= (int)7937;
	VERSION= (int)7938;
	NEAREST= (int)9728;
	LINEAR= (int)9729;
	NEAREST_MIPMAP_NEAREST= (int)9984;
	LINEAR_MIPMAP_NEAREST= (int)9985;
	NEAREST_MIPMAP_LINEAR= (int)9986;
	LINEAR_MIPMAP_LINEAR= (int)9987;
	TEXTURE_MAG_FILTER= (int)10240;
	TEXTURE_MIN_FILTER= (int)10241;
	TEXTURE_WRAP_S= (int)10242;
	TEXTURE_WRAP_T= (int)10243;
	TEXTURE_2D= (int)3553;
	TEXTURE= (int)5890;
	TEXTURE_CUBE_MAP= (int)34067;
	TEXTURE_BINDING_CUBE_MAP= (int)34068;
	TEXTURE_CUBE_MAP_POSITIVE_X= (int)34069;
	TEXTURE_CUBE_MAP_NEGATIVE_X= (int)34070;
	TEXTURE_CUBE_MAP_POSITIVE_Y= (int)34071;
	TEXTURE_CUBE_MAP_NEGATIVE_Y= (int)34072;
	TEXTURE_CUBE_MAP_POSITIVE_Z= (int)34073;
	TEXTURE_CUBE_MAP_NEGATIVE_Z= (int)34074;
	MAX_CUBE_MAP_TEXTURE_SIZE= (int)34076;
	TEXTURE0= (int)33984;
	TEXTURE1= (int)33985;
	TEXTURE2= (int)33986;
	TEXTURE3= (int)33987;
	TEXTURE4= (int)33988;
	TEXTURE5= (int)33989;
	TEXTURE6= (int)33990;
	TEXTURE7= (int)33991;
	TEXTURE8= (int)33992;
	TEXTURE9= (int)33993;
	TEXTURE10= (int)33994;
	TEXTURE11= (int)33995;
	TEXTURE12= (int)33996;
	TEXTURE13= (int)33997;
	TEXTURE14= (int)33998;
	TEXTURE15= (int)33999;
	TEXTURE16= (int)34000;
	TEXTURE17= (int)34001;
	TEXTURE18= (int)34002;
	TEXTURE19= (int)34003;
	TEXTURE20= (int)34004;
	TEXTURE21= (int)34005;
	TEXTURE22= (int)34006;
	TEXTURE23= (int)34007;
	TEXTURE24= (int)34008;
	TEXTURE25= (int)34009;
	TEXTURE26= (int)34010;
	TEXTURE27= (int)34011;
	TEXTURE28= (int)34012;
	TEXTURE29= (int)34013;
	TEXTURE30= (int)34014;
	TEXTURE31= (int)34015;
	ACTIVE_TEXTURE= (int)34016;
	REPEAT= (int)10497;
	CLAMP_TO_EDGE= (int)33071;
	MIRRORED_REPEAT= (int)33648;
	FLOAT_VEC2= (int)35664;
	FLOAT_VEC3= (int)35665;
	FLOAT_VEC4= (int)35666;
	INT_VEC2= (int)35667;
	INT_VEC3= (int)35668;
	INT_VEC4= (int)35669;
	BOOL= (int)35670;
	BOOL_VEC2= (int)35671;
	BOOL_VEC3= (int)35672;
	BOOL_VEC4= (int)35673;
	FLOAT_MAT2= (int)35674;
	FLOAT_MAT3= (int)35675;
	FLOAT_MAT4= (int)35676;
	SAMPLER_2D= (int)35678;
	SAMPLER_CUBE= (int)35680;
	VERTEX_ATTRIB_ARRAY_ENABLED= (int)34338;
	VERTEX_ATTRIB_ARRAY_SIZE= (int)34339;
	VERTEX_ATTRIB_ARRAY_STRIDE= (int)34340;
	VERTEX_ATTRIB_ARRAY_TYPE= (int)34341;
	VERTEX_ATTRIB_ARRAY_NORMALIZED= (int)34922;
	VERTEX_ATTRIB_ARRAY_POINTER= (int)34373;
	VERTEX_ATTRIB_ARRAY_BUFFER_BINDING= (int)34975;
	VERTEX_PROGRAM_POINT_SIZE= (int)34370;
	POINT_SPRITE= (int)34913;
	COMPILE_STATUS= (int)35713;
	LOW_FLOAT= (int)36336;
	MEDIUM_FLOAT= (int)36337;
	HIGH_FLOAT= (int)36338;
	LOW_INT= (int)36339;
	MEDIUM_INT= (int)36340;
	HIGH_INT= (int)36341;
	FRAMEBUFFER= (int)36160;
	RENDERBUFFER= (int)36161;
	RGBA4= (int)32854;
	RGB5_A1= (int)32855;
	RGB565= (int)36194;
	DEPTH_COMPONENT16= (int)33189;
	STENCIL_INDEX= (int)6401;
	STENCIL_INDEX8= (int)36168;
	DEPTH_STENCIL= (int)34041;
	RENDERBUFFER_WIDTH= (int)36162;
	RENDERBUFFER_HEIGHT= (int)36163;
	RENDERBUFFER_INTERNAL_FORMAT= (int)36164;
	RENDERBUFFER_RED_SIZE= (int)36176;
	RENDERBUFFER_GREEN_SIZE= (int)36177;
	RENDERBUFFER_BLUE_SIZE= (int)36178;
	RENDERBUFFER_ALPHA_SIZE= (int)36179;
	RENDERBUFFER_DEPTH_SIZE= (int)36180;
	RENDERBUFFER_STENCIL_SIZE= (int)36181;
	FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE= (int)36048;
	FRAMEBUFFER_ATTACHMENT_OBJECT_NAME= (int)36049;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL= (int)36050;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE= (int)36051;
	COLOR_ATTACHMENT0= (int)36064;
	DEPTH_ATTACHMENT= (int)36096;
	STENCIL_ATTACHMENT= (int)36128;
	DEPTH_STENCIL_ATTACHMENT= (int)33306;
	NONE= (int)0;
	FRAMEBUFFER_COMPLETE= (int)36053;
	FRAMEBUFFER_INCOMPLETE_ATTACHMENT= (int)36054;
	FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT= (int)36055;
	FRAMEBUFFER_INCOMPLETE_DIMENSIONS= (int)36057;
	FRAMEBUFFER_UNSUPPORTED= (int)36061;
	FRAMEBUFFER_BINDING= (int)36006;
	RENDERBUFFER_BINDING= (int)36007;
	MAX_RENDERBUFFER_SIZE= (int)34024;
	INVALID_FRAMEBUFFER_OPERATION= (int)1286;
	UNPACK_FLIP_Y_WEBGL= (int)37440;
	UNPACK_PREMULTIPLY_ALPHA_WEBGL= (int)37441;
	CONTEXT_LOST_WEBGL= (int)37442;
	UNPACK_COLORSPACE_CONVERSION_WEBGL= (int)37443;
	BROWSER_DEFAULT_WEBGL= (int)37444;
}

} // end namespace snow
} // end namespace modules
} // end namespace opengl
} // end namespace native
