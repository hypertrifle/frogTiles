#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_luxe_structural_BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_BatchState
#include <phoenix/BatchState.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
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
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLBO
#include <snow/modules/opengl/native/GLBO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLPO
#include <snow/modules/opengl/native/GLPO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLTO
#include <snow/modules/opengl/native/GLTO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
namespace phoenix{

Void Batcher_obj::__construct(::phoenix::Renderer _r,::String __o__name)
{
HX_STACK_FRAME("phoenix.Batcher","new",0x3e82c79a,"phoenix.Batcher.new","phoenix/Batcher.hx",16,0xa9541457)
HX_STACK_THIS(this)
HX_STACK_ARG(_r,"_r")
HX_STACK_ARG(__o__name,"_name")
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(57)
	this->normal_floats = (int)0;
	HX_STACK_LINE(56)
	this->color_floats = (int)0;
	HX_STACK_LINE(55)
	this->tcoord_floats = (int)0;
	HX_STACK_LINE(54)
	this->pos_floats = (int)0;
	HX_STACK_LINE(52)
	this->sequence = (int)-1;
	HX_STACK_LINE(47)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(46)
	this->log = false;
	HX_STACK_LINE(44)
	this->visible_count = (int)0;
	HX_STACK_LINE(43)
	this->static_batched_count = (int)0;
	HX_STACK_LINE(42)
	this->dynamic_batched_count = (int)0;
	HX_STACK_LINE(41)
	this->draw_calls = (int)0;
	HX_STACK_LINE(33)
	this->vert_count = (int)0;
	HX_STACK_LINE(32)
	this->max_floats = (int)0;
	HX_STACK_LINE(31)
	this->max_verts = (int)0;
	HX_STACK_LINE(24)
	this->tree_changed = false;
	HX_STACK_LINE(20)
	this->layer = (int)0;
	HX_STACK_LINE(19)
	this->enabled = true;
	HX_STACK_LINE(61)
	::luxe::utils::Utils tmp = ::Luxe_obj::utils;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::String tmp1 = tmp->uniqueid(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	this->id = tmp1;
	HX_STACK_LINE(62)
	this->renderer = _r;
	HX_STACK_LINE(63)
	int tmp2 = ++(::phoenix::Batcher_obj::_sequence_key);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	this->sequence = tmp2;
	HX_STACK_LINE(65)
	Dynamic tmp3 = this->geometry_compare_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	this->geometry = tmp4;
	HX_STACK_LINE(66)
	::luxe::Emitter tmp5 = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	this->emitter = tmp5;
	HX_STACK_LINE(68)
	Float tmp6 = ::Math_obj::pow((int)2,(int)16);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(68)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	this->max_verts = tmp7;
	HX_STACK_LINE(70)
	int tmp8 = this->max_verts;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(70)
	int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(70)
	this->max_floats = tmp9;
	HX_STACK_LINE(73)
	::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int tmp11 = this->max_floats;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(73)
		Dynamic elements = tmp11;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(73)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(73)
		bool tmp12 = (elements != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(73)
		if ((tmp12)){
			HX_STACK_LINE(73)
			::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			this1 = tmp13;
		}
		else{
			HX_STACK_LINE(73)
			bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			if ((tmp13)){
				HX_STACK_LINE(73)
				::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(73)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(73)
					int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					_this->length = tmp16;
					HX_STACK_LINE(73)
					int tmp17 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(73)
					_this->byteLength = tmp17;
					HX_STACK_LINE(73)
					::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(73)
						int tmp19 = _this->byteLength;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(73)
						::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(73)
						this2 = tmp20;
						HX_STACK_LINE(73)
						tmp18 = this2;
					}
					HX_STACK_LINE(73)
					_this->buffer = tmp18;
					HX_STACK_LINE(73)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(73)
					tmp14 = _this;
				}
				HX_STACK_LINE(73)
				this1 = tmp14;
			}
			else{
				HX_STACK_LINE(73)
				bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				if ((tmp14)){
					HX_STACK_LINE(73)
					::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(73)
						::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(73)
						::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(73)
						::haxe::io::Bytes srcData = tmp17;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(73)
						int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(73)
						int srcLength = tmp18;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(73)
						int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(73)
						int srcByteOffset = tmp19;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(73)
						int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(73)
						int srcElementSize = tmp20;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(73)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(73)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(73)
						int tmp22 = _this->type;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(73)
						bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(73)
						if ((tmp23)){
							HX_STACK_LINE(73)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(73)
							int tmp24 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(73)
							int cloneLength = tmp24;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(73)
							::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(73)
							{
								HX_STACK_LINE(73)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(73)
								int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(73)
								::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(73)
								this2 = tmp27;
								HX_STACK_LINE(73)
								tmp25 = this2;
							}
							HX_STACK_LINE(73)
							_this->buffer = tmp25;
							HX_STACK_LINE(73)
							::haxe::io::Bytes tmp26 = srcData;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(73)
							int tmp27 = srcByteOffset;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(73)
							int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(73)
							_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
						}
						else{
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(73)
						int tmp24 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(73)
						_this->byteLength = tmp24;
						HX_STACK_LINE(73)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(73)
						_this->length = srcLength;
						HX_STACK_LINE(73)
						tmp15 = _this;
					}
					HX_STACK_LINE(73)
					this1 = tmp15;
				}
				else{
					HX_STACK_LINE(73)
					bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					if ((tmp15)){
						HX_STACK_LINE(73)
						::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(73)
							::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(73)
							bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(73)
							if ((tmp18)){
								HX_STACK_LINE(73)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(73)
							int tmp19 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(73)
							bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(73)
							if ((tmp20)){
								HX_STACK_LINE(73)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(73)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(73)
							int bufferByteLength = tmp21;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(73)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(73)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(73)
							bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(73)
							if ((tmp22)){
								HX_STACK_LINE(73)
								int tmp23 = bufferByteLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(73)
								newByteLength = tmp23;
								HX_STACK_LINE(73)
								int tmp24 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(73)
								bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(73)
								if ((tmp25)){
									HX_STACK_LINE(73)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(73)
								bool tmp26 = (newByteLength < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(73)
								if ((tmp26)){
									HX_STACK_LINE(73)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(73)
								int tmp23 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(73)
								newByteLength = tmp23;
								HX_STACK_LINE(73)
								int tmp24 = newByteLength;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(73)
								int newRange = tmp24;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(73)
								bool tmp25 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(73)
								if ((tmp25)){
									HX_STACK_LINE(73)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(73)
							_this->buffer = null();
							HX_STACK_LINE(73)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(73)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(73)
							Float tmp23 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(73)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(73)
							_this->length = tmp24;
							HX_STACK_LINE(73)
							tmp16 = _this;
						}
						HX_STACK_LINE(73)
						this1 = tmp16;
					}
					else{
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(73)
		tmp10 = this1;
	}
	HX_STACK_LINE(73)
	this->pos_list = tmp10;
	HX_STACK_LINE(74)
	::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		int tmp12 = this->max_floats;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(74)
		Dynamic elements = tmp12;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(74)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(74)
		bool tmp13 = (elements != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(74)
		if ((tmp13)){
			HX_STACK_LINE(74)
			::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(74)
			this1 = tmp14;
		}
		else{
			HX_STACK_LINE(74)
			bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(74)
			if ((tmp14)){
				HX_STACK_LINE(74)
				::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(74)
					::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(74)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(74)
					int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(74)
					_this->length = tmp17;
					HX_STACK_LINE(74)
					int tmp18 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(74)
					_this->byteLength = tmp18;
					HX_STACK_LINE(74)
					::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(74)
						int tmp20 = _this->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(74)
						::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(74)
						this2 = tmp21;
						HX_STACK_LINE(74)
						tmp19 = this2;
					}
					HX_STACK_LINE(74)
					_this->buffer = tmp19;
					HX_STACK_LINE(74)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(74)
					tmp15 = _this;
				}
				HX_STACK_LINE(74)
				this1 = tmp15;
			}
			else{
				HX_STACK_LINE(74)
				bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(74)
				if ((tmp15)){
					HX_STACK_LINE(74)
					::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(74)
						::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(74)
						::haxe::io::Bytes tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(74)
						::haxe::io::Bytes srcData = tmp18;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(74)
						int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(74)
						int srcLength = tmp19;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(74)
						int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(74)
						int srcByteOffset = tmp20;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(74)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(74)
						int srcElementSize = tmp21;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(74)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(74)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(74)
						int tmp23 = _this->type;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(74)
						bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(74)
						if ((tmp24)){
							HX_STACK_LINE(74)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(74)
							int tmp25 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(74)
							int cloneLength = tmp25;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(74)
							::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(74)
								int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(74)
								::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(74)
								this2 = tmp28;
								HX_STACK_LINE(74)
								tmp26 = this2;
							}
							HX_STACK_LINE(74)
							_this->buffer = tmp26;
							HX_STACK_LINE(74)
							::haxe::io::Bytes tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(74)
							int tmp28 = srcByteOffset;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(74)
							int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(74)
							_this->buffer->blit((int)0,tmp27,tmp28,tmp29);
						}
						else{
							HX_STACK_LINE(74)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(74)
						int tmp25 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(74)
						_this->byteLength = tmp25;
						HX_STACK_LINE(74)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(74)
						_this->length = srcLength;
						HX_STACK_LINE(74)
						tmp16 = _this;
					}
					HX_STACK_LINE(74)
					this1 = tmp16;
				}
				else{
					HX_STACK_LINE(74)
					bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(74)
					if ((tmp16)){
						HX_STACK_LINE(74)
						::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(74)
							::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(74)
							bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(74)
							if ((tmp19)){
								HX_STACK_LINE(74)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(74)
							int tmp20 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(74)
							bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(74)
							if ((tmp21)){
								HX_STACK_LINE(74)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(74)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(74)
							int bufferByteLength = tmp22;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(74)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(74)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(74)
							bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(74)
							if ((tmp23)){
								HX_STACK_LINE(74)
								int tmp24 = bufferByteLength;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(74)
								newByteLength = tmp24;
								HX_STACK_LINE(74)
								int tmp25 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(74)
								bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(74)
								if ((tmp26)){
									HX_STACK_LINE(74)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(74)
								bool tmp27 = (newByteLength < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(74)
								if ((tmp27)){
									HX_STACK_LINE(74)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(74)
								int tmp24 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(74)
								newByteLength = tmp24;
								HX_STACK_LINE(74)
								int tmp25 = newByteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(74)
								int newRange = tmp25;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(74)
								bool tmp26 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(74)
								if ((tmp26)){
									HX_STACK_LINE(74)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(74)
							_this->buffer = null();
							HX_STACK_LINE(74)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(74)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(74)
							Float tmp24 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(74)
							int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(74)
							_this->length = tmp25;
							HX_STACK_LINE(74)
							tmp17 = _this;
						}
						HX_STACK_LINE(74)
						this1 = tmp17;
					}
					else{
						HX_STACK_LINE(74)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(74)
		tmp11 = this1;
	}
	HX_STACK_LINE(74)
	this->tcoord_list = tmp11;
	HX_STACK_LINE(75)
	::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		int tmp13 = this->max_floats;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(75)
		Dynamic elements = tmp13;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(75)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(75)
		bool tmp14 = (elements != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(75)
		if ((tmp14)){
			HX_STACK_LINE(75)
			::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(75)
			this1 = tmp15;
		}
		else{
			HX_STACK_LINE(75)
			bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(75)
			if ((tmp15)){
				HX_STACK_LINE(75)
				::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(75)
				{
					HX_STACK_LINE(75)
					::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(75)
					::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(75)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(75)
					int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(75)
					_this->length = tmp18;
					HX_STACK_LINE(75)
					int tmp19 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(75)
					_this->byteLength = tmp19;
					HX_STACK_LINE(75)
					::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(75)
					{
						HX_STACK_LINE(75)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(75)
						int tmp21 = _this->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(75)
						::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(75)
						this2 = tmp22;
						HX_STACK_LINE(75)
						tmp20 = this2;
					}
					HX_STACK_LINE(75)
					_this->buffer = tmp20;
					HX_STACK_LINE(75)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(75)
					tmp16 = _this;
				}
				HX_STACK_LINE(75)
				this1 = tmp16;
			}
			else{
				HX_STACK_LINE(75)
				bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(75)
				if ((tmp16)){
					HX_STACK_LINE(75)
					::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(75)
					{
						HX_STACK_LINE(75)
						::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(75)
						::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(75)
						::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(75)
						::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(75)
						int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(75)
						int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(75)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(75)
						int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(75)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(75)
						int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(75)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(75)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(75)
						int tmp24 = _this->type;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(75)
						bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(75)
						if ((tmp25)){
							HX_STACK_LINE(75)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(75)
							int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(75)
							int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(75)
							::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(75)
							{
								HX_STACK_LINE(75)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(75)
								int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(75)
								::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(75)
								this2 = tmp29;
								HX_STACK_LINE(75)
								tmp27 = this2;
							}
							HX_STACK_LINE(75)
							_this->buffer = tmp27;
							HX_STACK_LINE(75)
							::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(75)
							int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(75)
							int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(75)
							_this->buffer->blit((int)0,tmp28,tmp29,tmp30);
						}
						else{
							HX_STACK_LINE(75)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(75)
						int tmp26 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(75)
						_this->byteLength = tmp26;
						HX_STACK_LINE(75)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(75)
						_this->length = srcLength;
						HX_STACK_LINE(75)
						tmp17 = _this;
					}
					HX_STACK_LINE(75)
					this1 = tmp17;
				}
				else{
					HX_STACK_LINE(75)
					bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(75)
					if ((tmp17)){
						HX_STACK_LINE(75)
						::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(75)
						{
							HX_STACK_LINE(75)
							::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(75)
							::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(75)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(75)
							if ((tmp20)){
								HX_STACK_LINE(75)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(75)
							int tmp21 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(75)
							bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(75)
							if ((tmp22)){
								HX_STACK_LINE(75)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(75)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(75)
							int bufferByteLength = tmp23;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(75)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(75)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(75)
							bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(75)
							if ((tmp24)){
								HX_STACK_LINE(75)
								int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(75)
								newByteLength = tmp25;
								HX_STACK_LINE(75)
								int tmp26 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(75)
								bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(75)
								if ((tmp27)){
									HX_STACK_LINE(75)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(75)
								bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(75)
								if ((tmp28)){
									HX_STACK_LINE(75)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(75)
								int tmp25 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(75)
								newByteLength = tmp25;
								HX_STACK_LINE(75)
								int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(75)
								int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(75)
								bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(75)
								if ((tmp27)){
									HX_STACK_LINE(75)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(75)
							_this->buffer = null();
							HX_STACK_LINE(75)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(75)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(75)
							Float tmp25 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(75)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(75)
							_this->length = tmp26;
							HX_STACK_LINE(75)
							tmp18 = _this;
						}
						HX_STACK_LINE(75)
						this1 = tmp18;
					}
					else{
						HX_STACK_LINE(75)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(75)
		tmp12 = this1;
	}
	HX_STACK_LINE(75)
	this->color_list = tmp12;
	HX_STACK_LINE(82)
	::phoenix::Renderer tmp13 = this->renderer;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(82)
	this->view = tmp13->camera;
	HX_STACK_LINE(84)
	::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable_vertex_attrib_array((int)0);
	HX_STACK_LINE(85)
	::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable_vertex_attrib_array((int)1);
	HX_STACK_LINE(86)
	::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable_vertex_attrib_array((int)2);
	HX_STACK_LINE(93)
	bool tmp14 = (_name.length == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(93)
	if ((tmp14)){
		HX_STACK_LINE(94)
		::luxe::utils::Utils tmp15 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(94)
		::String tmp16 = tmp15->uniqueid(null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(94)
		this->name = tmp16;
	}
	else{
		HX_STACK_LINE(96)
		this->name = _name;
	}
	HX_STACK_LINE(99)
	this->_dropped = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Batcher_obj::~Batcher_obj() { }

Dynamic Batcher_obj::__CreateEmpty() { return  new Batcher_obj; }
hx::ObjectPtr< Batcher_obj > Batcher_obj::__new(::phoenix::Renderer _r,::String __o__name)
{  hx::ObjectPtr< Batcher_obj > _result_ = new Batcher_obj();
	_result_->__construct(_r,__o__name);
	return _result_;}

Dynamic Batcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Batcher_obj > _result_ = new Batcher_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Batcher_obj::on( int event,Dynamic handler){
{
		HX_STACK_FRAME("phoenix.Batcher","on",0x2875af25,"phoenix.Batcher.on","phoenix/Batcher.hx",105,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(106)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),106,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		tmp->on(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,on,(void))

bool Batcher_obj::off( int event,Dynamic handler){
	HX_STACK_FRAME("phoenix.Batcher","off",0x3e838aa9,"phoenix.Batcher.off","phoenix/Batcher.hx",110,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(111)
	::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),111,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	bool tmp4 = tmp->off(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(111)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,off,return )

Void Batcher_obj::add( ::phoenix::geometry::Geometry _geom,hx::Null< bool >  __o__force_add){
bool _force_add = __o__force_add.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","add",0x3e78e95b,"phoenix.Batcher.add","phoenix/Batcher.hx",114,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_geom,"_geom")
	HX_STACK_ARG(_force_add,"_force_add")
{
		HX_STACK_LINE(120)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		::phoenix::geometry::GeometryKey tmp1 = _geom->key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::phoenix::geometry::Geometry tmp2 = tmp->find(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		if ((tmp4)){
			HX_STACK_LINE(120)
			tmp5 = _force_add;
		}
		else{
			HX_STACK_LINE(120)
			tmp5 = true;
		}
		HX_STACK_LINE(120)
		if ((tmp5)){
			HX_STACK_LINE(123)
			bool tmp6 = ::Lambda_obj::has(_geom->batchers,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			if ((tmp7)){
				HX_STACK_LINE(124)
				_geom->batchers->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->geometry;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(128)
				::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(128)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = _this->root;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(128)
				::phoenix::geometry::GeometryKey tmp10 = _geom->key;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(128)
				::phoenix::geometry::Geometry tmp11 = _geom;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(128)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp12 = _this->node_insert(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(128)
				_this->root = tmp12;
				HX_STACK_LINE(128)
				_this->root->color = false;
			}
			HX_STACK_LINE(131)
			_geom->added = true;
			HX_STACK_LINE(134)
			this->tree_changed = true;
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,add,(void))

Void Batcher_obj::empty( hx::Null< bool >  __o__drop){
bool _drop = __o__drop.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","empty",0xd120f447,"phoenix.Batcher.empty","phoenix/Batcher.hx",146,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_drop,"_drop")
{
		HX_STACK_LINE(148)
		bool tmp = _drop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		if ((tmp)){
			HX_STACK_LINE(149)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = ::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				bool tmp3 = (_g->current == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(149)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(149)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(149)
				if ((tmp4)){
					HX_STACK_LINE(149)
					tmp5 = (_g->rightest == null());
				}
				else{
					HX_STACK_LINE(149)
					tmp5 = true;
				}
				HX_STACK_LINE(149)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(149)
				if ((tmp5)){
					HX_STACK_LINE(149)
					tmp6 = false;
				}
				else{
					HX_STACK_LINE(149)
					::phoenix::geometry::GeometryKey tmp7 = _g->current->key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(149)
					::phoenix::geometry::GeometryKey tmp8 = _g->rightest->key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(149)
					int tmp9 = _g->tree->compare(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(149)
					tmp6 = (tmp9 <= (int)0);
				}
				HX_STACK_LINE(149)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(149)
				if ((tmp7)){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				::phoenix::geometry::Geometry tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = _g->current;		HX_STACK_VAR(_temp,"_temp");
					HX_STACK_LINE(149)
					bool tmp9 = (_g->current == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(149)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(149)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(149)
					if ((tmp10)){
						HX_STACK_LINE(149)
						tmp11 = (_g->rightest == null());
					}
					else{
						HX_STACK_LINE(149)
						tmp11 = true;
					}
					HX_STACK_LINE(149)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(149)
					if ((tmp11)){
						HX_STACK_LINE(149)
						tmp12 = false;
					}
					else{
						HX_STACK_LINE(149)
						::phoenix::geometry::GeometryKey tmp13 = _g->current->key;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(149)
						::phoenix::geometry::GeometryKey tmp14 = _g->rightest->key;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(149)
						int tmp15 = _g->tree->compare(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(149)
						tmp12 = (tmp15 <= (int)0);
					}
					HX_STACK_LINE(149)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(149)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(149)
					if ((tmp13)){
						HX_STACK_LINE(149)
						tmp14 = null();
					}
					else{
						HX_STACK_LINE(149)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp15 = _g->current->right;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(149)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(149)
						if ((tmp16)){
							HX_STACK_LINE(149)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->current->right;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(149)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp17;		HX_STACK_VAR(_node,"_node");
							HX_STACK_LINE(149)
							while((true)){
								HX_STACK_LINE(149)
								bool tmp18 = (_node->left != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(149)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(149)
								if ((tmp19)){
									HX_STACK_LINE(149)
									break;
								}
								HX_STACK_LINE(149)
								_node = _node->left;
							}
							HX_STACK_LINE(149)
							tmp14 = _node;
						}
						else{
							HX_STACK_LINE(149)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
							HX_STACK_LINE(149)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->tree->root;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(149)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp1 = tmp17;		HX_STACK_VAR(_temp1,"_temp1");
							HX_STACK_LINE(149)
							while((true)){
								HX_STACK_LINE(149)
								bool tmp18 = (_temp1 != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(149)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(149)
								if ((tmp19)){
									HX_STACK_LINE(149)
									break;
								}
								HX_STACK_LINE(149)
								::phoenix::geometry::GeometryKey tmp20 = _g->current->key;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(149)
								::phoenix::geometry::GeometryKey tmp21 = _temp1->key;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(149)
								int tmp22 = _g->tree->compare(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(149)
								int _comp = tmp22;		HX_STACK_VAR(_comp,"_comp");
								HX_STACK_LINE(149)
								bool tmp23 = (_comp < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(149)
								if ((tmp23)){
									HX_STACK_LINE(149)
									_next = _temp1;
									HX_STACK_LINE(149)
									_temp1 = _temp1->left;
								}
								else{
									HX_STACK_LINE(149)
									bool tmp24 = (_comp > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(149)
									if ((tmp24)){
										HX_STACK_LINE(149)
										_temp1 = _temp1->right;
									}
									else{
										HX_STACK_LINE(149)
										_g->current = _next;
										HX_STACK_LINE(149)
										break;
									}
								}
							}
							HX_STACK_LINE(149)
							tmp14 = _next;
						}
					}
					HX_STACK_LINE(149)
					_g->current = tmp14;
					HX_STACK_LINE(149)
					tmp8 = _temp->value;
				}
				HX_STACK_LINE(149)
				::phoenix::geometry::Geometry geom = tmp8;		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(150)
				geom->drop(true);
				HX_STACK_LINE(151)
				geom = null();
			}
		}
		else{
			HX_STACK_LINE(154)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(154)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = ::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(154)
			while((true)){
				HX_STACK_LINE(154)
				bool tmp3 = (_g->current == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(154)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(154)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(154)
				if ((tmp4)){
					HX_STACK_LINE(154)
					tmp5 = (_g->rightest == null());
				}
				else{
					HX_STACK_LINE(154)
					tmp5 = true;
				}
				HX_STACK_LINE(154)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(154)
				if ((tmp5)){
					HX_STACK_LINE(154)
					tmp6 = false;
				}
				else{
					HX_STACK_LINE(154)
					::phoenix::geometry::GeometryKey tmp7 = _g->current->key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(154)
					::phoenix::geometry::GeometryKey tmp8 = _g->rightest->key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(154)
					int tmp9 = _g->tree->compare(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(154)
					tmp6 = (tmp9 <= (int)0);
				}
				HX_STACK_LINE(154)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				if ((tmp7)){
					HX_STACK_LINE(154)
					break;
				}
				HX_STACK_LINE(154)
				::phoenix::geometry::Geometry tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = _g->current;		HX_STACK_VAR(_temp,"_temp");
					HX_STACK_LINE(154)
					bool tmp9 = (_g->current == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(154)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(154)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(154)
					if ((tmp10)){
						HX_STACK_LINE(154)
						tmp11 = (_g->rightest == null());
					}
					else{
						HX_STACK_LINE(154)
						tmp11 = true;
					}
					HX_STACK_LINE(154)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(154)
					if ((tmp11)){
						HX_STACK_LINE(154)
						tmp12 = false;
					}
					else{
						HX_STACK_LINE(154)
						::phoenix::geometry::GeometryKey tmp13 = _g->current->key;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(154)
						::phoenix::geometry::GeometryKey tmp14 = _g->rightest->key;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(154)
						int tmp15 = _g->tree->compare(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(154)
						tmp12 = (tmp15 <= (int)0);
					}
					HX_STACK_LINE(154)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(154)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(154)
					if ((tmp13)){
						HX_STACK_LINE(154)
						tmp14 = null();
					}
					else{
						HX_STACK_LINE(154)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp15 = _g->current->right;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(154)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(154)
						if ((tmp16)){
							HX_STACK_LINE(154)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->current->right;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(154)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp17;		HX_STACK_VAR(_node,"_node");
							HX_STACK_LINE(154)
							while((true)){
								HX_STACK_LINE(154)
								bool tmp18 = (_node->left != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(154)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(154)
								if ((tmp19)){
									HX_STACK_LINE(154)
									break;
								}
								HX_STACK_LINE(154)
								_node = _node->left;
							}
							HX_STACK_LINE(154)
							tmp14 = _node;
						}
						else{
							HX_STACK_LINE(154)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
							HX_STACK_LINE(154)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->tree->root;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(154)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp1 = tmp17;		HX_STACK_VAR(_temp1,"_temp1");
							HX_STACK_LINE(154)
							while((true)){
								HX_STACK_LINE(154)
								bool tmp18 = (_temp1 != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(154)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(154)
								if ((tmp19)){
									HX_STACK_LINE(154)
									break;
								}
								HX_STACK_LINE(154)
								::phoenix::geometry::GeometryKey tmp20 = _g->current->key;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(154)
								::phoenix::geometry::GeometryKey tmp21 = _temp1->key;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(154)
								int tmp22 = _g->tree->compare(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(154)
								int _comp = tmp22;		HX_STACK_VAR(_comp,"_comp");
								HX_STACK_LINE(154)
								bool tmp23 = (_comp < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(154)
								if ((tmp23)){
									HX_STACK_LINE(154)
									_next = _temp1;
									HX_STACK_LINE(154)
									_temp1 = _temp1->left;
								}
								else{
									HX_STACK_LINE(154)
									bool tmp24 = (_comp > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(154)
									if ((tmp24)){
										HX_STACK_LINE(154)
										_temp1 = _temp1->right;
									}
									else{
										HX_STACK_LINE(154)
										_g->current = _next;
										HX_STACK_LINE(154)
										break;
									}
								}
							}
							HX_STACK_LINE(154)
							tmp14 = _next;
						}
					}
					HX_STACK_LINE(154)
					_g->current = tmp14;
					HX_STACK_LINE(154)
					tmp8 = _temp->value;
				}
				HX_STACK_LINE(154)
				::phoenix::geometry::Geometry geom = tmp8;		HX_STACK_VAR(geom,"geom");
				HX_STACK_LINE(155)
				::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = this->geometry;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(155)
				::phoenix::geometry::GeometryKey tmp10 = geom->key;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(155)
				tmp9->remove(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,empty,(void))

Void Batcher_obj::destroy( hx::Null< bool >  __o__drop){
bool _drop = __o__drop.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","destroy",0x703a4934,"phoenix.Batcher.destroy","phoenix/Batcher.hx",166,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_drop,"_drop")
{
		HX_STACK_LINE(168)
		bool tmp = _drop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		this->empty(tmp);
		HX_STACK_LINE(170)
		::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		tmp1->remove_batch(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(172)
		this->emitter = null();
		HX_STACK_LINE(173)
		this->geometry = null();
		HX_STACK_LINE(174)
		this->pos_list = null();
		HX_STACK_LINE(175)
		this->tcoord_list = null();
		HX_STACK_LINE(176)
		this->color_list = null();
		HX_STACK_LINE(177)
		this->normal_list = null();
		HX_STACK_LINE(179)
		this->max_verts = (int)0;
		HX_STACK_LINE(180)
		this->max_floats = (int)0;
		HX_STACK_LINE(181)
		this->vert_count = (int)0;
		HX_STACK_LINE(183)
		this->renderer = null();
		HX_STACK_LINE(184)
		this->view = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,destroy,(void))

Void Batcher_obj::remove( ::phoenix::geometry::Geometry _geom,Dynamic __o__remove_batcher_from_geometry){
Dynamic _remove_batcher_from_geometry = __o__remove_batcher_from_geometry.Default(true);
	HX_STACK_FRAME("phoenix.Batcher","remove",0xc124654a,"phoenix.Batcher.remove","phoenix/Batcher.hx",188,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_geom,"_geom")
	HX_STACK_ARG(_remove_batcher_from_geometry,"_remove_batcher_from_geometry")
{
		HX_STACK_LINE(190)
		Dynamic tmp = _remove_batcher_from_geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		if ((tmp)){
			HX_STACK_LINE(191)
			_geom->batchers->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(192)
			int tmp1 = _geom->batchers->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(192)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			if ((tmp2)){
				HX_STACK_LINE(193)
				_geom->added = false;
			}
		}
		HX_STACK_LINE(197)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp2->root;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(197)
			bool tmp3 = (_node == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			if ((tmp3)){
				HX_STACK_LINE(197)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(197)
				tmp1 = _node->nodecount;
			}
		}
		HX_STACK_LINE(197)
		int countbefore = tmp1;		HX_STACK_VAR(countbefore,"countbefore");
		HX_STACK_LINE(199)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = this->geometry;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		::phoenix::geometry::GeometryKey tmp3 = _geom->key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		tmp2->remove(tmp3);
		HX_STACK_LINE(201)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->geometry;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp5->root;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(201)
			bool tmp6 = (_node == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(201)
			if ((tmp6)){
				HX_STACK_LINE(201)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(201)
				tmp4 = _node->nodecount;
			}
		}
		HX_STACK_LINE(201)
		int countafter = tmp4;		HX_STACK_VAR(countafter,"countafter");
		HX_STACK_LINE(203)
		bool tmp5 = (countbefore == countafter);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		if ((tmp5)){
		}
		HX_STACK_LINE(208)
		this->tree_changed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,remove,(void))

Void Batcher_obj::batch( hx::Null< bool >  __o_persist_immediate){
bool persist_immediate = __o_persist_immediate.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","batch",0x0f01a174,"phoenix.Batcher.batch","phoenix/Batcher.hx",217,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(persist_immediate,"persist_immediate")
{
		HX_STACK_LINE(220)
		this->dynamic_batched_count = (int)0;
		HX_STACK_LINE(221)
		this->static_batched_count = (int)0;
		HX_STACK_LINE(222)
		this->visible_count = (int)0;
		HX_STACK_LINE(224)
		this->pos_floats = (int)0;
		HX_STACK_LINE(225)
		this->tcoord_floats = (int)0;
		HX_STACK_LINE(226)
		this->color_floats = (int)0;
		HX_STACK_LINE(227)
		this->normal_floats = (int)0;
		HX_STACK_LINE(230)
		::phoenix::BatchState tmp = ::phoenix::BatchState_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		this->state = tmp;
		HX_STACK_LINE(232)
		::phoenix::geometry::Geometry geom = null();		HX_STACK_VAR(geom,"geom");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->geometry;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(235)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2 = ::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				bool tmp3 = (_g->current == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(235)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(235)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(235)
				if ((tmp4)){
					HX_STACK_LINE(235)
					tmp5 = (_g->rightest == null());
				}
				else{
					HX_STACK_LINE(235)
					tmp5 = true;
				}
				HX_STACK_LINE(235)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(235)
				if ((tmp5)){
					HX_STACK_LINE(235)
					tmp6 = false;
				}
				else{
					HX_STACK_LINE(235)
					::phoenix::geometry::GeometryKey tmp7 = _g->current->key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(235)
					::phoenix::geometry::GeometryKey tmp8 = _g->rightest->key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(235)
					int tmp9 = _g->tree->compare(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(235)
					tmp6 = (tmp9 <= (int)0);
				}
				HX_STACK_LINE(235)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(235)
				if ((tmp7)){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				::phoenix::geometry::Geometry tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(235)
				{
					HX_STACK_LINE(235)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = _g->current;		HX_STACK_VAR(_temp,"_temp");
					HX_STACK_LINE(235)
					bool tmp9 = (_g->current == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(235)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(235)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(235)
					if ((tmp10)){
						HX_STACK_LINE(235)
						tmp11 = (_g->rightest == null());
					}
					else{
						HX_STACK_LINE(235)
						tmp11 = true;
					}
					HX_STACK_LINE(235)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(235)
					if ((tmp11)){
						HX_STACK_LINE(235)
						tmp12 = false;
					}
					else{
						HX_STACK_LINE(235)
						::phoenix::geometry::GeometryKey tmp13 = _g->current->key;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(235)
						::phoenix::geometry::GeometryKey tmp14 = _g->rightest->key;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(235)
						int tmp15 = _g->tree->compare(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(235)
						tmp12 = (tmp15 <= (int)0);
					}
					HX_STACK_LINE(235)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(235)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(235)
					if ((tmp13)){
						HX_STACK_LINE(235)
						tmp14 = null();
					}
					else{
						HX_STACK_LINE(235)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp15 = _g->current->right;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(235)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(235)
						if ((tmp16)){
							HX_STACK_LINE(235)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->current->right;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(235)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp17;		HX_STACK_VAR(_node,"_node");
							HX_STACK_LINE(235)
							while((true)){
								HX_STACK_LINE(235)
								bool tmp18 = (_node->left != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(235)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(235)
								if ((tmp19)){
									HX_STACK_LINE(235)
									break;
								}
								HX_STACK_LINE(235)
								_node = _node->left;
							}
							HX_STACK_LINE(235)
							tmp14 = _node;
						}
						else{
							HX_STACK_LINE(235)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
							HX_STACK_LINE(235)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp17 = _g->tree->root;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(235)
							::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp1 = tmp17;		HX_STACK_VAR(_temp1,"_temp1");
							HX_STACK_LINE(235)
							while((true)){
								HX_STACK_LINE(235)
								bool tmp18 = (_temp1 != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(235)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(235)
								if ((tmp19)){
									HX_STACK_LINE(235)
									break;
								}
								HX_STACK_LINE(235)
								::phoenix::geometry::GeometryKey tmp20 = _g->current->key;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(235)
								::phoenix::geometry::GeometryKey tmp21 = _temp1->key;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(235)
								int tmp22 = _g->tree->compare(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(235)
								int _comp = tmp22;		HX_STACK_VAR(_comp,"_comp");
								HX_STACK_LINE(235)
								bool tmp23 = (_comp < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(235)
								if ((tmp23)){
									HX_STACK_LINE(235)
									_next = _temp1;
									HX_STACK_LINE(235)
									_temp1 = _temp1->left;
								}
								else{
									HX_STACK_LINE(235)
									bool tmp24 = (_comp > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(235)
									if ((tmp24)){
										HX_STACK_LINE(235)
										_temp1 = _temp1->right;
									}
									else{
										HX_STACK_LINE(235)
										_g->current = _next;
										HX_STACK_LINE(235)
										break;
									}
								}
							}
							HX_STACK_LINE(235)
							tmp14 = _next;
						}
					}
					HX_STACK_LINE(235)
					_g->current = tmp14;
					HX_STACK_LINE(235)
					tmp8 = _temp->value;
				}
				HX_STACK_LINE(235)
				::phoenix::geometry::Geometry _geom = tmp8;		HX_STACK_VAR(_geom,"_geom");
				HX_STACK_LINE(238)
				geom = _geom;
				HX_STACK_LINE(241)
				bool tmp9 = (geom != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(241)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(241)
				if ((tmp9)){
					HX_STACK_LINE(241)
					bool tmp11 = geom->dropped;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(241)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(241)
					tmp10 = !(tmp12);
				}
				else{
					HX_STACK_LINE(241)
					tmp10 = false;
				}
				HX_STACK_LINE(241)
				if ((tmp10)){
					HX_STACK_LINE(244)
					::phoenix::BatchState tmp11 = this->state;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(244)
					::phoenix::geometry::Geometry tmp12 = geom;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(244)
					bool tmp13 = tmp11->update(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(244)
					if ((tmp13)){
						HX_STACK_LINE(248)
						int tmp14 = this->pos_floats;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(248)
						bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(248)
						if ((tmp15)){
							HX_STACK_LINE(248)
							Dynamic();
						}
						else{
							HX_STACK_LINE(248)
							int tmp16 = this->pos_floats;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(248)
							int tmp17 = this->max_floats;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(248)
							bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(248)
							if ((tmp18)){
								HX_STACK_LINE(248)
								HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
							}
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(248)
							{
								HX_STACK_LINE(248)
								::snow::api::buffers::ArrayBufferView tmp20 = this->pos_list;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(248)
								::haxe::io::Bytes buffer = tmp20->buffer;		HX_STACK_VAR(buffer,"buffer");
								HX_STACK_LINE(248)
								int tmp21 = this->pos_floats;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(248)
								Dynamic len = tmp21;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(248)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(248)
								bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(248)
								if ((tmp22)){
									HX_STACK_LINE(248)
									::snow::api::buffers::ArrayBufferView tmp23 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(248)
									this1 = tmp23;
								}
								else{
									HX_STACK_LINE(248)
									bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(248)
									if ((tmp23)){
										HX_STACK_LINE(248)
										::snow::api::buffers::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(248)
										{
											HX_STACK_LINE(248)
											::snow::api::buffers::ArrayBufferView tmp25 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(248)
											::snow::api::buffers::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(248)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(248)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(248)
											_this->length = tmp26;
											HX_STACK_LINE(248)
											int tmp27 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(248)
											_this->byteLength = tmp27;
											HX_STACK_LINE(248)
											::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(248)
											{
												HX_STACK_LINE(248)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(248)
												int tmp29 = _this->byteLength;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(248)
												::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(248)
												this2 = tmp30;
												HX_STACK_LINE(248)
												tmp28 = this2;
											}
											HX_STACK_LINE(248)
											_this->buffer = tmp28;
											HX_STACK_LINE(248)
											_this->copyFromArray(((Array< Float >)(null())),null());
											HX_STACK_LINE(248)
											tmp24 = _this;
										}
										HX_STACK_LINE(248)
										this1 = tmp24;
									}
									else{
										HX_STACK_LINE(248)
										bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(248)
										if ((tmp24)){
											HX_STACK_LINE(248)
											::snow::api::buffers::ArrayBufferView tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(248)
											{
												HX_STACK_LINE(248)
												::snow::api::buffers::ArrayBufferView tmp26 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(248)
												::snow::api::buffers::ArrayBufferView _this = tmp26;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(248)
												::haxe::io::Bytes tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(248)
												::haxe::io::Bytes srcData = tmp27;		HX_STACK_VAR(srcData,"srcData");
												HX_STACK_LINE(248)
												int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(248)
												int srcLength = tmp28;		HX_STACK_VAR(srcLength,"srcLength");
												HX_STACK_LINE(248)
												int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(248)
												int srcByteOffset = tmp29;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
												HX_STACK_LINE(248)
												int tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(248)
												int srcElementSize = tmp30;		HX_STACK_VAR(srcElementSize,"srcElementSize");
												HX_STACK_LINE(248)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(248)
												int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(248)
												int tmp32 = _this->type;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(248)
												bool tmp33 = (tmp31 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(248)
												if ((tmp33)){
													HX_STACK_LINE(248)
													int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
													HX_STACK_LINE(248)
													int tmp34 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(248)
													int cloneLength = tmp34;		HX_STACK_VAR(cloneLength,"cloneLength");
													HX_STACK_LINE(248)
													::haxe::io::Bytes tmp35;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(248)
													{
														HX_STACK_LINE(248)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(248)
														int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(248)
														::haxe::io::Bytes tmp37 = ::haxe::io::Bytes_obj::alloc(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(248)
														this2 = tmp37;
														HX_STACK_LINE(248)
														tmp35 = this2;
													}
													HX_STACK_LINE(248)
													_this->buffer = tmp35;
													HX_STACK_LINE(248)
													::haxe::io::Bytes tmp36 = srcData;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(248)
													int tmp37 = srcByteOffset;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(248)
													int tmp38 = cloneLength;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(248)
													_this->buffer->blit((int)0,tmp36,tmp37,tmp38);
												}
												else{
													HX_STACK_LINE(248)
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												HX_STACK_LINE(248)
												int tmp34 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(248)
												_this->byteLength = tmp34;
												HX_STACK_LINE(248)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(248)
												_this->length = srcLength;
												HX_STACK_LINE(248)
												tmp25 = _this;
											}
											HX_STACK_LINE(248)
											this1 = tmp25;
										}
										else{
											HX_STACK_LINE(248)
											bool tmp25 = (buffer != null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(248)
											if ((tmp25)){
												HX_STACK_LINE(248)
												::snow::api::buffers::ArrayBufferView tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(248)
												{
													HX_STACK_LINE(248)
													::snow::api::buffers::ArrayBufferView tmp27 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(248)
													::snow::api::buffers::ArrayBufferView _this = tmp27;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(248)
													bool tmp28 = false;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(248)
													if ((tmp28)){
														HX_STACK_LINE(248)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(248)
													int tmp29 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(248)
													bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(248)
													if ((tmp30)){
														HX_STACK_LINE(248)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(248)
													int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
													HX_STACK_LINE(248)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(248)
													int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
													HX_STACK_LINE(248)
													bool tmp31 = (len == null());		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(248)
													if ((tmp31)){
														HX_STACK_LINE(248)
														int tmp32 = bufferByteLength;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(248)
														newByteLength = tmp32;
														HX_STACK_LINE(248)
														int tmp33 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(248)
														bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(248)
														if ((tmp34)){
															HX_STACK_LINE(248)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(248)
														bool tmp35 = (newByteLength < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(248)
														if ((tmp35)){
															HX_STACK_LINE(248)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													else{
														HX_STACK_LINE(248)
														int tmp32 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(248)
														newByteLength = tmp32;
														HX_STACK_LINE(248)
														int tmp33 = newByteLength;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(248)
														int newRange = tmp33;		HX_STACK_VAR(newRange,"newRange");
														HX_STACK_LINE(248)
														bool tmp34 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(248)
														if ((tmp34)){
															HX_STACK_LINE(248)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													HX_STACK_LINE(248)
													_this->buffer = buffer;
													HX_STACK_LINE(248)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(248)
													_this->byteLength = newByteLength;
													HX_STACK_LINE(248)
													Float tmp32 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(248)
													int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(248)
													_this->length = tmp33;
													HX_STACK_LINE(248)
													tmp26 = _this;
												}
												HX_STACK_LINE(248)
												this1 = tmp26;
											}
											else{
												HX_STACK_LINE(248)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
										}
									}
								}
								HX_STACK_LINE(248)
								tmp19 = this1;
							}
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView _pos = tmp19;		HX_STACK_VAR(_pos,"_pos");
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(248)
							{
								HX_STACK_LINE(248)
								::snow::api::buffers::ArrayBufferView tmp21 = this->tcoord_list;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(248)
								::haxe::io::Bytes buffer = tmp21->buffer;		HX_STACK_VAR(buffer,"buffer");
								HX_STACK_LINE(248)
								int tmp22 = this->tcoord_floats;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(248)
								Dynamic len = tmp22;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(248)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(248)
								bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(248)
								if ((tmp23)){
									HX_STACK_LINE(248)
									::snow::api::buffers::ArrayBufferView tmp24 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(248)
									this1 = tmp24;
								}
								else{
									HX_STACK_LINE(248)
									bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(248)
									if ((tmp24)){
										HX_STACK_LINE(248)
										::snow::api::buffers::ArrayBufferView tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(248)
										{
											HX_STACK_LINE(248)
											::snow::api::buffers::ArrayBufferView tmp26 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(248)
											::snow::api::buffers::ArrayBufferView _this = tmp26;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(248)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(248)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(248)
											_this->length = tmp27;
											HX_STACK_LINE(248)
											int tmp28 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(248)
											_this->byteLength = tmp28;
											HX_STACK_LINE(248)
											::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(248)
											{
												HX_STACK_LINE(248)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(248)
												int tmp30 = _this->byteLength;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(248)
												::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(248)
												this2 = tmp31;
												HX_STACK_LINE(248)
												tmp29 = this2;
											}
											HX_STACK_LINE(248)
											_this->buffer = tmp29;
											HX_STACK_LINE(248)
											_this->copyFromArray(((Array< Float >)(null())),null());
											HX_STACK_LINE(248)
											tmp25 = _this;
										}
										HX_STACK_LINE(248)
										this1 = tmp25;
									}
									else{
										HX_STACK_LINE(248)
										bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(248)
										if ((tmp25)){
											HX_STACK_LINE(248)
											::snow::api::buffers::ArrayBufferView tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(248)
											{
												HX_STACK_LINE(248)
												::snow::api::buffers::ArrayBufferView tmp27 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(248)
												::snow::api::buffers::ArrayBufferView _this = tmp27;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(248)
												::haxe::io::Bytes tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(248)
												::haxe::io::Bytes srcData = tmp28;		HX_STACK_VAR(srcData,"srcData");
												HX_STACK_LINE(248)
												int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(248)
												int srcLength = tmp29;		HX_STACK_VAR(srcLength,"srcLength");
												HX_STACK_LINE(248)
												int tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(248)
												int srcByteOffset = tmp30;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
												HX_STACK_LINE(248)
												int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(248)
												int srcElementSize = tmp31;		HX_STACK_VAR(srcElementSize,"srcElementSize");
												HX_STACK_LINE(248)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(248)
												int tmp32 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(248)
												int tmp33 = _this->type;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(248)
												bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(248)
												if ((tmp34)){
													HX_STACK_LINE(248)
													int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
													HX_STACK_LINE(248)
													int tmp35 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(248)
													int cloneLength = tmp35;		HX_STACK_VAR(cloneLength,"cloneLength");
													HX_STACK_LINE(248)
													::haxe::io::Bytes tmp36;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(248)
													{
														HX_STACK_LINE(248)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(248)
														int tmp37 = cloneLength;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(248)
														::haxe::io::Bytes tmp38 = ::haxe::io::Bytes_obj::alloc(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(248)
														this2 = tmp38;
														HX_STACK_LINE(248)
														tmp36 = this2;
													}
													HX_STACK_LINE(248)
													_this->buffer = tmp36;
													HX_STACK_LINE(248)
													::haxe::io::Bytes tmp37 = srcData;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(248)
													int tmp38 = srcByteOffset;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(248)
													int tmp39 = cloneLength;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(248)
													_this->buffer->blit((int)0,tmp37,tmp38,tmp39);
												}
												else{
													HX_STACK_LINE(248)
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												HX_STACK_LINE(248)
												int tmp35 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(248)
												_this->byteLength = tmp35;
												HX_STACK_LINE(248)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(248)
												_this->length = srcLength;
												HX_STACK_LINE(248)
												tmp26 = _this;
											}
											HX_STACK_LINE(248)
											this1 = tmp26;
										}
										else{
											HX_STACK_LINE(248)
											bool tmp26 = (buffer != null());		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(248)
											if ((tmp26)){
												HX_STACK_LINE(248)
												::snow::api::buffers::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(248)
												{
													HX_STACK_LINE(248)
													::snow::api::buffers::ArrayBufferView tmp28 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(248)
													::snow::api::buffers::ArrayBufferView _this = tmp28;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(248)
													bool tmp29 = false;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(248)
													if ((tmp29)){
														HX_STACK_LINE(248)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(248)
													int tmp30 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(248)
													bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(248)
													if ((tmp31)){
														HX_STACK_LINE(248)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(248)
													int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
													HX_STACK_LINE(248)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(248)
													int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
													HX_STACK_LINE(248)
													bool tmp32 = (len == null());		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(248)
													if ((tmp32)){
														HX_STACK_LINE(248)
														int tmp33 = bufferByteLength;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(248)
														newByteLength = tmp33;
														HX_STACK_LINE(248)
														int tmp34 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(248)
														bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(248)
														if ((tmp35)){
															HX_STACK_LINE(248)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(248)
														bool tmp36 = (newByteLength < (int)0);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(248)
														if ((tmp36)){
															HX_STACK_LINE(248)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													else{
														HX_STACK_LINE(248)
														int tmp33 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(248)
														newByteLength = tmp33;
														HX_STACK_LINE(248)
														int tmp34 = newByteLength;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(248)
														int newRange = tmp34;		HX_STACK_VAR(newRange,"newRange");
														HX_STACK_LINE(248)
														bool tmp35 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(248)
														if ((tmp35)){
															HX_STACK_LINE(248)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													HX_STACK_LINE(248)
													_this->buffer = buffer;
													HX_STACK_LINE(248)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(248)
													_this->byteLength = newByteLength;
													HX_STACK_LINE(248)
													Float tmp33 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(248)
													int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(248)
													_this->length = tmp34;
													HX_STACK_LINE(248)
													tmp27 = _this;
												}
												HX_STACK_LINE(248)
												this1 = tmp27;
											}
											else{
												HX_STACK_LINE(248)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
										}
									}
								}
								HX_STACK_LINE(248)
								tmp20 = this1;
							}
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView _tcoords = tmp20;		HX_STACK_VAR(_tcoords,"_tcoords");
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(248)
							{
								HX_STACK_LINE(248)
								::snow::api::buffers::ArrayBufferView tmp22 = this->color_list;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(248)
								::haxe::io::Bytes buffer = tmp22->buffer;		HX_STACK_VAR(buffer,"buffer");
								HX_STACK_LINE(248)
								int tmp23 = this->color_floats;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(248)
								Dynamic len = tmp23;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(248)
								::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(248)
								bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(248)
								if ((tmp24)){
									HX_STACK_LINE(248)
									::snow::api::buffers::ArrayBufferView tmp25 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(248)
									this1 = tmp25;
								}
								else{
									HX_STACK_LINE(248)
									bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(248)
									if ((tmp25)){
										HX_STACK_LINE(248)
										::snow::api::buffers::ArrayBufferView tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(248)
										{
											HX_STACK_LINE(248)
											::snow::api::buffers::ArrayBufferView tmp27 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(248)
											::snow::api::buffers::ArrayBufferView _this = tmp27;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(248)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(248)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(248)
											_this->length = tmp28;
											HX_STACK_LINE(248)
											int tmp29 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(248)
											_this->byteLength = tmp29;
											HX_STACK_LINE(248)
											::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(248)
											{
												HX_STACK_LINE(248)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(248)
												int tmp31 = _this->byteLength;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(248)
												::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(248)
												this2 = tmp32;
												HX_STACK_LINE(248)
												tmp30 = this2;
											}
											HX_STACK_LINE(248)
											_this->buffer = tmp30;
											HX_STACK_LINE(248)
											_this->copyFromArray(((Array< Float >)(null())),null());
											HX_STACK_LINE(248)
											tmp26 = _this;
										}
										HX_STACK_LINE(248)
										this1 = tmp26;
									}
									else{
										HX_STACK_LINE(248)
										bool tmp26 = false;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(248)
										if ((tmp26)){
											HX_STACK_LINE(248)
											::snow::api::buffers::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(248)
											{
												HX_STACK_LINE(248)
												::snow::api::buffers::ArrayBufferView tmp28 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(248)
												::snow::api::buffers::ArrayBufferView _this = tmp28;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(248)
												::haxe::io::Bytes tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(248)
												::haxe::io::Bytes srcData = tmp29;		HX_STACK_VAR(srcData,"srcData");
												HX_STACK_LINE(248)
												int tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(248)
												int srcLength = tmp30;		HX_STACK_VAR(srcLength,"srcLength");
												HX_STACK_LINE(248)
												int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(248)
												int srcByteOffset = tmp31;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
												HX_STACK_LINE(248)
												int tmp32 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(248)
												int srcElementSize = tmp32;		HX_STACK_VAR(srcElementSize,"srcElementSize");
												HX_STACK_LINE(248)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(248)
												int tmp33 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(248)
												int tmp34 = _this->type;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(248)
												bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(248)
												if ((tmp35)){
													HX_STACK_LINE(248)
													int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
													HX_STACK_LINE(248)
													int tmp36 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(248)
													int cloneLength = tmp36;		HX_STACK_VAR(cloneLength,"cloneLength");
													HX_STACK_LINE(248)
													::haxe::io::Bytes tmp37;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(248)
													{
														HX_STACK_LINE(248)
														::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
														HX_STACK_LINE(248)
														int tmp38 = cloneLength;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(248)
														::haxe::io::Bytes tmp39 = ::haxe::io::Bytes_obj::alloc(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(248)
														this2 = tmp39;
														HX_STACK_LINE(248)
														tmp37 = this2;
													}
													HX_STACK_LINE(248)
													_this->buffer = tmp37;
													HX_STACK_LINE(248)
													::haxe::io::Bytes tmp38 = srcData;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(248)
													int tmp39 = srcByteOffset;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(248)
													int tmp40 = cloneLength;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(248)
													_this->buffer->blit((int)0,tmp38,tmp39,tmp40);
												}
												else{
													HX_STACK_LINE(248)
													HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
												}
												HX_STACK_LINE(248)
												int tmp36 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(248)
												_this->byteLength = tmp36;
												HX_STACK_LINE(248)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(248)
												_this->length = srcLength;
												HX_STACK_LINE(248)
												tmp27 = _this;
											}
											HX_STACK_LINE(248)
											this1 = tmp27;
										}
										else{
											HX_STACK_LINE(248)
											bool tmp27 = (buffer != null());		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(248)
											if ((tmp27)){
												HX_STACK_LINE(248)
												::snow::api::buffers::ArrayBufferView tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(248)
												{
													HX_STACK_LINE(248)
													::snow::api::buffers::ArrayBufferView tmp29 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(248)
													::snow::api::buffers::ArrayBufferView _this = tmp29;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(248)
													bool tmp30 = false;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(248)
													if ((tmp30)){
														HX_STACK_LINE(248)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(248)
													int tmp31 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(248)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(248)
													if ((tmp32)){
														HX_STACK_LINE(248)
														HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
													}
													HX_STACK_LINE(248)
													int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
													HX_STACK_LINE(248)
													int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
													HX_STACK_LINE(248)
													int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
													HX_STACK_LINE(248)
													bool tmp33 = (len == null());		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(248)
													if ((tmp33)){
														HX_STACK_LINE(248)
														int tmp34 = bufferByteLength;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(248)
														newByteLength = tmp34;
														HX_STACK_LINE(248)
														int tmp35 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(248)
														bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(248)
														if ((tmp36)){
															HX_STACK_LINE(248)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
														HX_STACK_LINE(248)
														bool tmp37 = (newByteLength < (int)0);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(248)
														if ((tmp37)){
															HX_STACK_LINE(248)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													else{
														HX_STACK_LINE(248)
														int tmp34 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(248)
														newByteLength = tmp34;
														HX_STACK_LINE(248)
														int tmp35 = newByteLength;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(248)
														int newRange = tmp35;		HX_STACK_VAR(newRange,"newRange");
														HX_STACK_LINE(248)
														bool tmp36 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(248)
														if ((tmp36)){
															HX_STACK_LINE(248)
															HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
														}
													}
													HX_STACK_LINE(248)
													_this->buffer = buffer;
													HX_STACK_LINE(248)
													_this->byteOffset = (int)0;
													HX_STACK_LINE(248)
													_this->byteLength = newByteLength;
													HX_STACK_LINE(248)
													Float tmp34 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(248)
													int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(248)
													_this->length = tmp35;
													HX_STACK_LINE(248)
													tmp28 = _this;
												}
												HX_STACK_LINE(248)
												this1 = tmp28;
											}
											else{
												HX_STACK_LINE(248)
												HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
											}
										}
									}
								}
								HX_STACK_LINE(248)
								tmp21 = this1;
							}
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView _colors = tmp21;		HX_STACK_VAR(_colors,"_colors");
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
							HX_STACK_LINE(248)
							::phoenix::BatchState tmp22 = this->state;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(248)
							int tmp23 = tmp22->last_geom_state->primitive_type;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView tmp24 = _pos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView tmp25 = _tcoords;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView tmp26 = _colors;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(248)
							::snow::api::buffers::ArrayBufferView tmp27 = _normals;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(248)
							this->submit_buffers(tmp23,tmp24,tmp25,tmp26,tmp27);
							HX_STACK_LINE(248)
							_pos = null();
							HX_STACK_LINE(248)
							_tcoords = null();
							HX_STACK_LINE(248)
							_colors = null();
							HX_STACK_LINE(248)
							_normals = null();
							HX_STACK_LINE(248)
							this->pos_floats = (int)0;
							HX_STACK_LINE(248)
							this->tcoord_floats = (int)0;
							HX_STACK_LINE(248)
							this->color_floats = (int)0;
							HX_STACK_LINE(248)
							this->normal_floats = (int)0;
						}
					}
					HX_STACK_LINE(253)
					{
						HX_STACK_LINE(253)
						::phoenix::BatchState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(253)
						::phoenix::BatchState _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(253)
						bool tmp15 = _this->geom_state->dirty;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(253)
						if ((tmp15)){
							HX_STACK_LINE(253)
							::phoenix::Texture tmp16 = _this->geom_state->texture;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(253)
							bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(253)
							if ((tmp17)){
								HX_STACK_LINE(253)
								Dynamic tmp18 = _this->last_texture_id;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(253)
								::phoenix::Texture tmp19 = _this->geom_state->texture;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(253)
								::String tmp20 = tmp19->id;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(253)
								bool tmp21 = (tmp18 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(253)
								if ((tmp21)){
									HX_STACK_LINE(253)
									::phoenix::Texture tmp22 = _this->geom_state->texture;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(253)
									_this->last_texture_id = tmp22->id;
									HX_STACK_LINE(253)
									::phoenix::Texture tmp23 = _this->geom_state->texture;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(253)
									::snow::modules::opengl::native::GLTO tmp24 = tmp23->texture;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(253)
									bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(253)
									if ((tmp25)){
										HX_STACK_LINE(253)
										::phoenix::Texture tmp26 = _this->geom_state->texture;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(253)
										tmp26->bind();
									}
								}
							}
							else{
								HX_STACK_LINE(253)
								::phoenix::Renderer tmp18 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(253)
								tmp18->state->bindTexture2D(null());
								HX_STACK_LINE(253)
								_this->last_texture_id = null();
							}
							HX_STACK_LINE(253)
							::phoenix::Shader tmp18 = this->shader;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(253)
							bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(253)
							::phoenix::Shader tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(253)
							if ((tmp19)){
								HX_STACK_LINE(253)
								tmp20 = _this->geom_state->shader;
							}
							else{
								HX_STACK_LINE(253)
								tmp20 = this->shader;
							}
							HX_STACK_LINE(253)
							::phoenix::Shader _shader = tmp20;		HX_STACK_VAR(_shader,"_shader");
							HX_STACK_LINE(253)
							bool tmp21 = (_shader == null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(253)
							if ((tmp21)){
								HX_STACK_LINE(253)
								::phoenix::Texture tmp22 = _this->geom_state->texture;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(253)
								bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(253)
								if ((tmp23)){
									HX_STACK_LINE(253)
									::phoenix::Renderer tmp24 = this->renderer;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(253)
									Dynamic tmp25 = tmp24->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(253)
									_shader = tmp25->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
								}
								else{
									HX_STACK_LINE(253)
									::phoenix::Renderer tmp24 = this->renderer;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(253)
									Dynamic tmp25 = tmp24->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(253)
									_shader = tmp25->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
								}
							}
							HX_STACK_LINE(253)
							::snow::modules::opengl::native::GLPO tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(253)
							{
								HX_STACK_LINE(253)
								Dynamic tmp23 = _this->last_shader_id;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(253)
								int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(253)
								int _id = tmp24;		HX_STACK_VAR(_id,"_id");
								HX_STACK_LINE(253)
								::snow::modules::opengl::native::GLPO tmp25 = ::snow::modules::opengl::native::GLPO_obj::__new(_id);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(253)
								tmp22 = tmp25;
							}
							HX_STACK_LINE(253)
							::snow::modules::opengl::native::GLPO tmp23 = _shader->program;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(253)
							bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(253)
							if ((tmp24)){
								HX_STACK_LINE(253)
								{
									HX_STACK_LINE(253)
									bool tmp25 = _shader->no_default_uniforms;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(253)
									bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(253)
									if ((tmp26)){
										HX_STACK_LINE(253)
										{
											HX_STACK_LINE(253)
											::phoenix::Camera tmp27 = this->view;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(253)
											::snow::api::buffers::ArrayBufferView _value = tmp27->proj_arr;		HX_STACK_VAR(_value,"_value");
											HX_STACK_LINE(253)
											{
												HX_STACK_LINE(253)
												::phoenix::Uniforms _this1 = _shader->uniforms;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(253)
												int tmp28 = _shader->program->id;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(253)
												Dynamic tmp29 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp28,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(253)
												Dynamic _location = tmp29;		HX_STACK_VAR(_location,"_location");
												HX_STACK_LINE(253)
												::phoenix::Uniform tmp30 = _this1->matrix4arrs->get(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(253)
												::phoenix::Uniform _matrix4 = tmp30;		HX_STACK_VAR(_matrix4,"_matrix4");
												HX_STACK_LINE(253)
												bool tmp31 = (_matrix4 != null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(253)
												if ((tmp31)){
													HX_STACK_LINE(253)
													_matrix4->value = _value;
												}
												else{
													HX_STACK_LINE(253)
													::phoenix::Uniform tmp32 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),_value,_location);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(253)
													_matrix4 = tmp32;
													HX_STACK_LINE(253)
													::phoenix::Uniform tmp33 = _matrix4;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(253)
													_this1->matrix4arrs->set(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),tmp33);
												}
												HX_STACK_LINE(253)
												::phoenix::Uniform tmp32 = _matrix4;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(253)
												_this1->dirty_matrix4arrs->push(tmp32);
											}
										}
										HX_STACK_LINE(253)
										{
											HX_STACK_LINE(253)
											::phoenix::Camera tmp27 = this->view;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(253)
											::snow::api::buffers::ArrayBufferView _value = tmp27->view_inverse_arr;		HX_STACK_VAR(_value,"_value");
											HX_STACK_LINE(253)
											{
												HX_STACK_LINE(253)
												::phoenix::Uniforms _this1 = _shader->uniforms;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(253)
												int tmp28 = _shader->program->id;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(253)
												Dynamic tmp29 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp28,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(253)
												Dynamic _location = tmp29;		HX_STACK_VAR(_location,"_location");
												HX_STACK_LINE(253)
												::phoenix::Uniform tmp30 = _this1->matrix4arrs->get(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(253)
												::phoenix::Uniform _matrix4 = tmp30;		HX_STACK_VAR(_matrix4,"_matrix4");
												HX_STACK_LINE(253)
												bool tmp31 = (_matrix4 != null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(253)
												if ((tmp31)){
													HX_STACK_LINE(253)
													_matrix4->value = _value;
												}
												else{
													HX_STACK_LINE(253)
													::phoenix::Uniform tmp32 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),_value,_location);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(253)
													_matrix4 = tmp32;
													HX_STACK_LINE(253)
													::phoenix::Uniform tmp33 = _matrix4;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(253)
													_this1->matrix4arrs->set(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),tmp33);
												}
												HX_STACK_LINE(253)
												::phoenix::Uniform tmp32 = _matrix4;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(253)
												_this1->dirty_matrix4arrs->push(tmp32);
											}
										}
									}
								}
								HX_STACK_LINE(253)
								{
									HX_STACK_LINE(253)
									_shader->use();
									HX_STACK_LINE(253)
									_shader->uniforms->apply();
									HX_STACK_LINE(253)
									::phoenix::Renderer tmp25 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(253)
									tmp25->state->activeTexture((int)33984);
								}
								HX_STACK_LINE(253)
								_this->last_shader_id = _shader->program;
							}
						}
						HX_STACK_LINE(253)
						bool tmp16 = _this->geom_state->clip;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(253)
						if ((tmp16)){
							HX_STACK_LINE(253)
							bool tmp17 = _this->is_clipping;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(253)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(253)
							if ((tmp18)){
								HX_STACK_LINE(253)
								::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable((int)3089);
								HX_STACK_LINE(253)
								_this->is_clipping = true;
							}
							HX_STACK_LINE(253)
							bool tmp19 = (_this->clip_rect != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(253)
							if ((tmp19)){
								HX_STACK_LINE(253)
								::phoenix::Rectangle tmp20 = _this->last_clip_rect;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(253)
								bool tmp21 = _this->clip_rect->equal(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(253)
								bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(253)
								if ((tmp22)){
									HX_STACK_LINE(253)
									::phoenix::Camera tmp23 = this->view;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(253)
									::phoenix::Rectangle tmp24 = tmp23->get_viewport();		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(253)
									Float tmp25 = tmp24->h;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(253)
									Float tmp26 = _this->clip_rect->y;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(253)
									Float tmp27 = _this->clip_rect->h;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(253)
									Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(253)
									Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(253)
									Float _y = tmp29;		HX_STACK_VAR(_y,"_y");
									HX_STACK_LINE(253)
									{
										HX_STACK_LINE(253)
										Float tmp30 = _this->clip_rect->x;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(253)
										int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(253)
										int x = tmp31;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(253)
										Float tmp32 = _y;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(253)
										int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(253)
										int y = tmp33;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(253)
										Float tmp34 = _this->clip_rect->w;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(253)
										int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(253)
										int width = tmp35;		HX_STACK_VAR(width,"width");
										HX_STACK_LINE(253)
										Float tmp36 = _this->clip_rect->h;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(253)
										int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(253)
										int height = tmp37;		HX_STACK_VAR(height,"height");
										HX_STACK_LINE(253)
										int tmp38 = x;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(253)
										int tmp39 = y;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(253)
										int tmp40 = width;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(253)
										int tmp41 = height;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(253)
										::snow::modules::opengl::native::GL_FFI_obj::snow_gl_scissor(tmp38,tmp39,tmp40,tmp41);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(253)
							bool tmp17 = _this->is_clipping;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(253)
							if ((tmp17)){
								HX_STACK_LINE(253)
								::snow::modules::opengl::native::GL_FFI_obj::snow_gl_disable((int)3089);
								HX_STACK_LINE(253)
								_this->is_clipping = false;
							}
						}
						HX_STACK_LINE(253)
						_this->geom_state->dirty = false;
					}
					HX_STACK_LINE(255)
					bool tmp14 = geom->visible;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(255)
					if ((tmp14)){
						HX_STACK_LINE(258)
						(this->visible_count)++;
						HX_STACK_LINE(261)
						bool tmp15 = geom->buffer_based;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(261)
						if ((tmp15)){
							HX_STACK_LINE(262)
							(this->visible_count)--;
							HX_STACK_LINE(263)
							continue;
						}
						HX_STACK_LINE(267)
						bool tmp16 = geom->locked;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(267)
						if ((tmp16)){
							HX_STACK_LINE(268)
							{
								HX_STACK_LINE(268)
								int tmp17 = geom->vertices->length;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(268)
								int _length = tmp17;		HX_STACK_VAR(_length,"_length");
								HX_STACK_LINE(268)
								bool tmp18 = (_length == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(268)
								if ((tmp18)){
									HX_STACK_LINE(268)
									Dynamic();
								}
								else{
									HX_STACK_LINE(268)
									bool tmp19 = geom->update_buffers();		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(268)
									bool _updated = tmp19;		HX_STACK_VAR(_updated,"_updated");
									HX_STACK_LINE(268)
									bool tmp20 = _updated;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(268)
									if ((tmp20)){
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											{
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GLBO buffer = geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(268)
												bool tmp21 = (buffer == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(268)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												if ((tmp21)){
													HX_STACK_LINE(268)
													tmp22 = (int)0;
												}
												else{
													HX_STACK_LINE(268)
													tmp22 = buffer->id;
												}
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp22);
											}
											HX_STACK_LINE(268)
											::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
										}
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											::snow::api::buffers::ArrayBufferView data = geom->buffer_pos;		HX_STACK_VAR(data,"data");
											HX_STACK_LINE(268)
											int usage = geom->buffer_type;		HX_STACK_VAR(usage,"usage");
											HX_STACK_LINE(268)
											bool tmp21 = (data != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(268)
											if ((tmp21)){
												HX_STACK_LINE(268)
												int tmp22 = data->byteOffset;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												int tmp23 = data->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(268)
												int tmp24 = usage;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp22,tmp23,tmp24);
											}
											else{
												HX_STACK_LINE(268)
												int tmp22 = usage;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp22);
											}
										}
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											{
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GLBO buffer = geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(268)
												bool tmp21 = (buffer == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(268)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												if ((tmp21)){
													HX_STACK_LINE(268)
													tmp22 = (int)0;
												}
												else{
													HX_STACK_LINE(268)
													tmp22 = buffer->id;
												}
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp22);
											}
											HX_STACK_LINE(268)
											::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
										}
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											::snow::api::buffers::ArrayBufferView data = geom->buffer_tcoords;		HX_STACK_VAR(data,"data");
											HX_STACK_LINE(268)
											int usage = geom->buffer_type;		HX_STACK_VAR(usage,"usage");
											HX_STACK_LINE(268)
											bool tmp21 = (data != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(268)
											if ((tmp21)){
												HX_STACK_LINE(268)
												int tmp22 = data->byteOffset;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												int tmp23 = data->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(268)
												int tmp24 = usage;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp22,tmp23,tmp24);
											}
											else{
												HX_STACK_LINE(268)
												int tmp22 = usage;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp22);
											}
										}
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											{
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GLBO buffer = geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(268)
												bool tmp21 = (buffer == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(268)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												if ((tmp21)){
													HX_STACK_LINE(268)
													tmp22 = (int)0;
												}
												else{
													HX_STACK_LINE(268)
													tmp22 = buffer->id;
												}
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp22);
											}
											HX_STACK_LINE(268)
											::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
										}
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											::snow::api::buffers::ArrayBufferView data = geom->buffer_colors;		HX_STACK_VAR(data,"data");
											HX_STACK_LINE(268)
											int usage = geom->buffer_type;		HX_STACK_VAR(usage,"usage");
											HX_STACK_LINE(268)
											bool tmp21 = (data != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(268)
											if ((tmp21)){
												HX_STACK_LINE(268)
												int tmp22 = data->byteOffset;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												int tmp23 = data->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(268)
												int tmp24 = usage;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp22,tmp23,tmp24);
											}
											else{
												HX_STACK_LINE(268)
												int tmp22 = usage;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp22);
											}
										}
									}
									else{
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											{
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GLBO buffer = geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(268)
												bool tmp21 = (buffer == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(268)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												if ((tmp21)){
													HX_STACK_LINE(268)
													tmp22 = (int)0;
												}
												else{
													HX_STACK_LINE(268)
													tmp22 = buffer->id;
												}
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp22);
											}
											HX_STACK_LINE(268)
											::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
										}
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											{
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GLBO buffer = geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(268)
												bool tmp21 = (buffer == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(268)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												if ((tmp21)){
													HX_STACK_LINE(268)
													tmp22 = (int)0;
												}
												else{
													HX_STACK_LINE(268)
													tmp22 = buffer->id;
												}
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp22);
											}
											HX_STACK_LINE(268)
											::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
										}
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											{
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GLBO buffer = geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(268)
												bool tmp21 = (buffer == null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(268)
												int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(268)
												if ((tmp21)){
													HX_STACK_LINE(268)
													tmp22 = (int)0;
												}
												else{
													HX_STACK_LINE(268)
													tmp22 = buffer->id;
												}
												HX_STACK_LINE(268)
												::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp22);
											}
											HX_STACK_LINE(268)
											::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
										}
									}
									HX_STACK_LINE(268)
									{
										HX_STACK_LINE(268)
										int tmp21 = geom->buffer_pos->length;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(268)
										Float tmp22 = (Float(tmp21) / Float((int)4));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(268)
										int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(268)
										int count = tmp23;		HX_STACK_VAR(count,"count");
										HX_STACK_LINE(268)
										int tmp24 = geom->state->primitive_type;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(268)
										int tmp25 = count;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(268)
										::snow::modules::opengl::native::GL_FFI_obj::snow_gl_draw_arrays(tmp24,(int)0,tmp25);
									}
									HX_STACK_LINE(268)
									(this->static_batched_count)++;
									HX_STACK_LINE(268)
									(this->draw_calls)++;
									HX_STACK_LINE(268)
									geom->set_dirty(false);
								}
							}
							HX_STACK_LINE(269)
							int tmp17 = geom->vertices->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(269)
							hx::AddEq(this->vert_count,tmp17);
						}
						else{
							HX_STACK_LINE(273)
							int tmp17 = geom->state->primitive_type;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(273)
							bool tmp18 = (tmp17 == (int)3);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(273)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(273)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(273)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(273)
							if ((tmp20)){
								HX_STACK_LINE(274)
								int tmp22 = geom->state->primitive_type;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(274)
								int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(274)
								int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(274)
								tmp21 = (tmp24 == (int)2);
							}
							else{
								HX_STACK_LINE(273)
								tmp21 = true;
							}
							HX_STACK_LINE(273)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(273)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(273)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(273)
							if ((tmp23)){
								HX_STACK_LINE(275)
								int tmp25 = geom->state->primitive_type;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(275)
								int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(275)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(275)
								tmp24 = (tmp27 == (int)5);
							}
							else{
								HX_STACK_LINE(273)
								tmp24 = true;
							}
							HX_STACK_LINE(273)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(273)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(273)
							if ((tmp25)){
								HX_STACK_LINE(276)
								int tmp27 = geom->state->primitive_type;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(276)
								int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(276)
								tmp26 = (tmp28 == (int)6);
							}
							else{
								HX_STACK_LINE(273)
								tmp26 = true;
							}
							HX_STACK_LINE(273)
							if ((tmp26)){
								HX_STACK_LINE(280)
								{
									HX_STACK_LINE(280)
									int tmp27 = geom->vertices->length;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(280)
									int tmp28 = this->pos_floats;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(280)
									Float tmp29 = (Float(tmp28) / Float((int)4));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(280)
									Float tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(280)
									Float _count_after = tmp30;		HX_STACK_VAR(_count_after,"_count_after");
									HX_STACK_LINE(280)
									Float tmp31 = _count_after;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(280)
									int tmp32 = this->max_verts;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(280)
									bool tmp33 = (tmp31 > tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(280)
									if ((tmp33)){
										HX_STACK_LINE(280)
										int tmp34 = this->pos_floats;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(280)
										bool tmp35 = (tmp34 == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(280)
										if ((tmp35)){
											HX_STACK_LINE(280)
											Dynamic();
										}
										else{
											HX_STACK_LINE(280)
											int tmp36 = this->pos_floats;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(280)
											int tmp37 = this->max_floats;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(280)
											bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(280)
											if ((tmp38)){
												HX_STACK_LINE(280)
												HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
											}
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView tmp39;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(280)
											{
												HX_STACK_LINE(280)
												::snow::api::buffers::ArrayBufferView tmp40 = this->pos_list;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(280)
												::haxe::io::Bytes buffer = tmp40->buffer;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(280)
												int tmp41 = this->pos_floats;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(280)
												Dynamic len = tmp41;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(280)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(280)
												bool tmp42 = false;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(280)
												if ((tmp42)){
													HX_STACK_LINE(280)
													::snow::api::buffers::ArrayBufferView tmp43 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(280)
													this1 = tmp43;
												}
												else{
													HX_STACK_LINE(280)
													bool tmp43 = false;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(280)
													if ((tmp43)){
														HX_STACK_LINE(280)
														::snow::api::buffers::ArrayBufferView tmp44;		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(280)
														{
															HX_STACK_LINE(280)
															::snow::api::buffers::ArrayBufferView tmp45 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(280)
															::snow::api::buffers::ArrayBufferView _this = tmp45;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(280)
															_this->byteOffset = (int)0;
															HX_STACK_LINE(280)
															int tmp46 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(280)
															_this->length = tmp46;
															HX_STACK_LINE(280)
															int tmp47 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(280)
															_this->byteLength = tmp47;
															HX_STACK_LINE(280)
															::haxe::io::Bytes tmp48;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(280)
															{
																HX_STACK_LINE(280)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(280)
																int tmp49 = _this->byteLength;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(280)
																::haxe::io::Bytes tmp50 = ::haxe::io::Bytes_obj::alloc(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																this2 = tmp50;
																HX_STACK_LINE(280)
																tmp48 = this2;
															}
															HX_STACK_LINE(280)
															_this->buffer = tmp48;
															HX_STACK_LINE(280)
															_this->copyFromArray(((Array< Float >)(null())),null());
															HX_STACK_LINE(280)
															tmp44 = _this;
														}
														HX_STACK_LINE(280)
														this1 = tmp44;
													}
													else{
														HX_STACK_LINE(280)
														bool tmp44 = false;		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(280)
														if ((tmp44)){
															HX_STACK_LINE(280)
															::snow::api::buffers::ArrayBufferView tmp45;		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(280)
															{
																HX_STACK_LINE(280)
																::snow::api::buffers::ArrayBufferView tmp46 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(280)
																::snow::api::buffers::ArrayBufferView _this = tmp46;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(280)
																::haxe::io::Bytes tmp47 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(280)
																::haxe::io::Bytes srcData = tmp47;		HX_STACK_VAR(srcData,"srcData");
																HX_STACK_LINE(280)
																int tmp48 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(280)
																int srcLength = tmp48;		HX_STACK_VAR(srcLength,"srcLength");
																HX_STACK_LINE(280)
																int tmp49 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(280)
																int srcByteOffset = tmp49;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																HX_STACK_LINE(280)
																int tmp50 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																int srcElementSize = tmp50;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																HX_STACK_LINE(280)
																int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(280)
																int tmp51 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(280)
																int tmp52 = _this->type;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(280)
																bool tmp53 = (tmp51 == tmp52);		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(280)
																if ((tmp53)){
																	HX_STACK_LINE(280)
																	int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																	HX_STACK_LINE(280)
																	int tmp54 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(280)
																	int cloneLength = tmp54;		HX_STACK_VAR(cloneLength,"cloneLength");
																	HX_STACK_LINE(280)
																	::haxe::io::Bytes tmp55;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(280)
																	{
																		HX_STACK_LINE(280)
																		::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																		HX_STACK_LINE(280)
																		int tmp56 = cloneLength;		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(280)
																		::haxe::io::Bytes tmp57 = ::haxe::io::Bytes_obj::alloc(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
																		HX_STACK_LINE(280)
																		this2 = tmp57;
																		HX_STACK_LINE(280)
																		tmp55 = this2;
																	}
																	HX_STACK_LINE(280)
																	_this->buffer = tmp55;
																	HX_STACK_LINE(280)
																	::haxe::io::Bytes tmp56 = srcData;		HX_STACK_VAR(tmp56,"tmp56");
																	HX_STACK_LINE(280)
																	int tmp57 = srcByteOffset;		HX_STACK_VAR(tmp57,"tmp57");
																	HX_STACK_LINE(280)
																	int tmp58 = cloneLength;		HX_STACK_VAR(tmp58,"tmp58");
																	HX_STACK_LINE(280)
																	_this->buffer->blit((int)0,tmp56,tmp57,tmp58);
																}
																else{
																	HX_STACK_LINE(280)
																	HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																}
																HX_STACK_LINE(280)
																int tmp54 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(280)
																_this->byteLength = tmp54;
																HX_STACK_LINE(280)
																_this->byteOffset = (int)0;
																HX_STACK_LINE(280)
																_this->length = srcLength;
																HX_STACK_LINE(280)
																tmp45 = _this;
															}
															HX_STACK_LINE(280)
															this1 = tmp45;
														}
														else{
															HX_STACK_LINE(280)
															bool tmp45 = (buffer != null());		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(280)
															if ((tmp45)){
																HX_STACK_LINE(280)
																::snow::api::buffers::ArrayBufferView tmp46;		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(280)
																{
																	HX_STACK_LINE(280)
																	::snow::api::buffers::ArrayBufferView tmp47 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(280)
																	::snow::api::buffers::ArrayBufferView _this = tmp47;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(280)
																	bool tmp48 = false;		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(280)
																	if ((tmp48)){
																		HX_STACK_LINE(280)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(280)
																	int tmp49 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(280)
																	bool tmp50 = (tmp49 != (int)0);		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(280)
																	if ((tmp50)){
																		HX_STACK_LINE(280)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(280)
																	int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																	HX_STACK_LINE(280)
																	int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																	HX_STACK_LINE(280)
																	int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																	HX_STACK_LINE(280)
																	bool tmp51 = (len == null());		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(280)
																	if ((tmp51)){
																		HX_STACK_LINE(280)
																		int tmp52 = bufferByteLength;		HX_STACK_VAR(tmp52,"tmp52");
																		HX_STACK_LINE(280)
																		newByteLength = tmp52;
																		HX_STACK_LINE(280)
																		int tmp53 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp53,"tmp53");
																		HX_STACK_LINE(280)
																		bool tmp54 = (tmp53 != (int)0);		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(280)
																		if ((tmp54)){
																			HX_STACK_LINE(280)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																		HX_STACK_LINE(280)
																		bool tmp55 = (newByteLength < (int)0);		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(280)
																		if ((tmp55)){
																			HX_STACK_LINE(280)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	else{
																		HX_STACK_LINE(280)
																		int tmp52 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp52,"tmp52");
																		HX_STACK_LINE(280)
																		newByteLength = tmp52;
																		HX_STACK_LINE(280)
																		int tmp53 = newByteLength;		HX_STACK_VAR(tmp53,"tmp53");
																		HX_STACK_LINE(280)
																		int newRange = tmp53;		HX_STACK_VAR(newRange,"newRange");
																		HX_STACK_LINE(280)
																		bool tmp54 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(280)
																		if ((tmp54)){
																			HX_STACK_LINE(280)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	HX_STACK_LINE(280)
																	_this->buffer = buffer;
																	HX_STACK_LINE(280)
																	_this->byteOffset = (int)0;
																	HX_STACK_LINE(280)
																	_this->byteLength = newByteLength;
																	HX_STACK_LINE(280)
																	Float tmp52 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(280)
																	int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(280)
																	_this->length = tmp53;
																	HX_STACK_LINE(280)
																	tmp46 = _this;
																}
																HX_STACK_LINE(280)
																this1 = tmp46;
															}
															else{
																HX_STACK_LINE(280)
																HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
															}
														}
													}
												}
												HX_STACK_LINE(280)
												tmp39 = this1;
											}
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView _pos = tmp39;		HX_STACK_VAR(_pos,"_pos");
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(280)
											{
												HX_STACK_LINE(280)
												::snow::api::buffers::ArrayBufferView tmp41 = this->tcoord_list;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(280)
												::haxe::io::Bytes buffer = tmp41->buffer;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(280)
												int tmp42 = this->tcoord_floats;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(280)
												Dynamic len = tmp42;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(280)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(280)
												bool tmp43 = false;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(280)
												if ((tmp43)){
													HX_STACK_LINE(280)
													::snow::api::buffers::ArrayBufferView tmp44 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(280)
													this1 = tmp44;
												}
												else{
													HX_STACK_LINE(280)
													bool tmp44 = false;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(280)
													if ((tmp44)){
														HX_STACK_LINE(280)
														::snow::api::buffers::ArrayBufferView tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(280)
														{
															HX_STACK_LINE(280)
															::snow::api::buffers::ArrayBufferView tmp46 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(280)
															::snow::api::buffers::ArrayBufferView _this = tmp46;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(280)
															_this->byteOffset = (int)0;
															HX_STACK_LINE(280)
															int tmp47 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(280)
															_this->length = tmp47;
															HX_STACK_LINE(280)
															int tmp48 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(280)
															_this->byteLength = tmp48;
															HX_STACK_LINE(280)
															::haxe::io::Bytes tmp49;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(280)
															{
																HX_STACK_LINE(280)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(280)
																int tmp50 = _this->byteLength;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																::haxe::io::Bytes tmp51 = ::haxe::io::Bytes_obj::alloc(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(280)
																this2 = tmp51;
																HX_STACK_LINE(280)
																tmp49 = this2;
															}
															HX_STACK_LINE(280)
															_this->buffer = tmp49;
															HX_STACK_LINE(280)
															_this->copyFromArray(((Array< Float >)(null())),null());
															HX_STACK_LINE(280)
															tmp45 = _this;
														}
														HX_STACK_LINE(280)
														this1 = tmp45;
													}
													else{
														HX_STACK_LINE(280)
														bool tmp45 = false;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(280)
														if ((tmp45)){
															HX_STACK_LINE(280)
															::snow::api::buffers::ArrayBufferView tmp46;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(280)
															{
																HX_STACK_LINE(280)
																::snow::api::buffers::ArrayBufferView tmp47 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(280)
																::snow::api::buffers::ArrayBufferView _this = tmp47;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(280)
																::haxe::io::Bytes tmp48 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(280)
																::haxe::io::Bytes srcData = tmp48;		HX_STACK_VAR(srcData,"srcData");
																HX_STACK_LINE(280)
																int tmp49 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(280)
																int srcLength = tmp49;		HX_STACK_VAR(srcLength,"srcLength");
																HX_STACK_LINE(280)
																int tmp50 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																int srcByteOffset = tmp50;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																HX_STACK_LINE(280)
																int tmp51 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(280)
																int srcElementSize = tmp51;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																HX_STACK_LINE(280)
																int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(280)
																int tmp52 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(280)
																int tmp53 = _this->type;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(280)
																bool tmp54 = (tmp52 == tmp53);		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(280)
																if ((tmp54)){
																	HX_STACK_LINE(280)
																	int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																	HX_STACK_LINE(280)
																	int tmp55 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(280)
																	int cloneLength = tmp55;		HX_STACK_VAR(cloneLength,"cloneLength");
																	HX_STACK_LINE(280)
																	::haxe::io::Bytes tmp56;		HX_STACK_VAR(tmp56,"tmp56");
																	HX_STACK_LINE(280)
																	{
																		HX_STACK_LINE(280)
																		::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																		HX_STACK_LINE(280)
																		int tmp57 = cloneLength;		HX_STACK_VAR(tmp57,"tmp57");
																		HX_STACK_LINE(280)
																		::haxe::io::Bytes tmp58 = ::haxe::io::Bytes_obj::alloc(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
																		HX_STACK_LINE(280)
																		this2 = tmp58;
																		HX_STACK_LINE(280)
																		tmp56 = this2;
																	}
																	HX_STACK_LINE(280)
																	_this->buffer = tmp56;
																	HX_STACK_LINE(280)
																	::haxe::io::Bytes tmp57 = srcData;		HX_STACK_VAR(tmp57,"tmp57");
																	HX_STACK_LINE(280)
																	int tmp58 = srcByteOffset;		HX_STACK_VAR(tmp58,"tmp58");
																	HX_STACK_LINE(280)
																	int tmp59 = cloneLength;		HX_STACK_VAR(tmp59,"tmp59");
																	HX_STACK_LINE(280)
																	_this->buffer->blit((int)0,tmp57,tmp58,tmp59);
																}
																else{
																	HX_STACK_LINE(280)
																	HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																}
																HX_STACK_LINE(280)
																int tmp55 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(280)
																_this->byteLength = tmp55;
																HX_STACK_LINE(280)
																_this->byteOffset = (int)0;
																HX_STACK_LINE(280)
																_this->length = srcLength;
																HX_STACK_LINE(280)
																tmp46 = _this;
															}
															HX_STACK_LINE(280)
															this1 = tmp46;
														}
														else{
															HX_STACK_LINE(280)
															bool tmp46 = (buffer != null());		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(280)
															if ((tmp46)){
																HX_STACK_LINE(280)
																::snow::api::buffers::ArrayBufferView tmp47;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(280)
																{
																	HX_STACK_LINE(280)
																	::snow::api::buffers::ArrayBufferView tmp48 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(280)
																	::snow::api::buffers::ArrayBufferView _this = tmp48;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(280)
																	bool tmp49 = false;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(280)
																	if ((tmp49)){
																		HX_STACK_LINE(280)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(280)
																	int tmp50 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(280)
																	bool tmp51 = (tmp50 != (int)0);		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(280)
																	if ((tmp51)){
																		HX_STACK_LINE(280)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(280)
																	int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																	HX_STACK_LINE(280)
																	int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																	HX_STACK_LINE(280)
																	int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																	HX_STACK_LINE(280)
																	bool tmp52 = (len == null());		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(280)
																	if ((tmp52)){
																		HX_STACK_LINE(280)
																		int tmp53 = bufferByteLength;		HX_STACK_VAR(tmp53,"tmp53");
																		HX_STACK_LINE(280)
																		newByteLength = tmp53;
																		HX_STACK_LINE(280)
																		int tmp54 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(280)
																		bool tmp55 = (tmp54 != (int)0);		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(280)
																		if ((tmp55)){
																			HX_STACK_LINE(280)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																		HX_STACK_LINE(280)
																		bool tmp56 = (newByteLength < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(280)
																		if ((tmp56)){
																			HX_STACK_LINE(280)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	else{
																		HX_STACK_LINE(280)
																		int tmp53 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp53,"tmp53");
																		HX_STACK_LINE(280)
																		newByteLength = tmp53;
																		HX_STACK_LINE(280)
																		int tmp54 = newByteLength;		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(280)
																		int newRange = tmp54;		HX_STACK_VAR(newRange,"newRange");
																		HX_STACK_LINE(280)
																		bool tmp55 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(280)
																		if ((tmp55)){
																			HX_STACK_LINE(280)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	HX_STACK_LINE(280)
																	_this->buffer = buffer;
																	HX_STACK_LINE(280)
																	_this->byteOffset = (int)0;
																	HX_STACK_LINE(280)
																	_this->byteLength = newByteLength;
																	HX_STACK_LINE(280)
																	Float tmp53 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(280)
																	int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(280)
																	_this->length = tmp54;
																	HX_STACK_LINE(280)
																	tmp47 = _this;
																}
																HX_STACK_LINE(280)
																this1 = tmp47;
															}
															else{
																HX_STACK_LINE(280)
																HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
															}
														}
													}
												}
												HX_STACK_LINE(280)
												tmp40 = this1;
											}
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView _tcoords = tmp40;		HX_STACK_VAR(_tcoords,"_tcoords");
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(280)
											{
												HX_STACK_LINE(280)
												::snow::api::buffers::ArrayBufferView tmp42 = this->color_list;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(280)
												::haxe::io::Bytes buffer = tmp42->buffer;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(280)
												int tmp43 = this->color_floats;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(280)
												Dynamic len = tmp43;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(280)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(280)
												bool tmp44 = false;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(280)
												if ((tmp44)){
													HX_STACK_LINE(280)
													::snow::api::buffers::ArrayBufferView tmp45 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(280)
													this1 = tmp45;
												}
												else{
													HX_STACK_LINE(280)
													bool tmp45 = false;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(280)
													if ((tmp45)){
														HX_STACK_LINE(280)
														::snow::api::buffers::ArrayBufferView tmp46;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(280)
														{
															HX_STACK_LINE(280)
															::snow::api::buffers::ArrayBufferView tmp47 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(280)
															::snow::api::buffers::ArrayBufferView _this = tmp47;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(280)
															_this->byteOffset = (int)0;
															HX_STACK_LINE(280)
															int tmp48 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(280)
															_this->length = tmp48;
															HX_STACK_LINE(280)
															int tmp49 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(280)
															_this->byteLength = tmp49;
															HX_STACK_LINE(280)
															::haxe::io::Bytes tmp50;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(280)
															{
																HX_STACK_LINE(280)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(280)
																int tmp51 = _this->byteLength;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(280)
																::haxe::io::Bytes tmp52 = ::haxe::io::Bytes_obj::alloc(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(280)
																this2 = tmp52;
																HX_STACK_LINE(280)
																tmp50 = this2;
															}
															HX_STACK_LINE(280)
															_this->buffer = tmp50;
															HX_STACK_LINE(280)
															_this->copyFromArray(((Array< Float >)(null())),null());
															HX_STACK_LINE(280)
															tmp46 = _this;
														}
														HX_STACK_LINE(280)
														this1 = tmp46;
													}
													else{
														HX_STACK_LINE(280)
														bool tmp46 = false;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(280)
														if ((tmp46)){
															HX_STACK_LINE(280)
															::snow::api::buffers::ArrayBufferView tmp47;		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(280)
															{
																HX_STACK_LINE(280)
																::snow::api::buffers::ArrayBufferView tmp48 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(280)
																::snow::api::buffers::ArrayBufferView _this = tmp48;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(280)
																::haxe::io::Bytes tmp49 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(280)
																::haxe::io::Bytes srcData = tmp49;		HX_STACK_VAR(srcData,"srcData");
																HX_STACK_LINE(280)
																int tmp50 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																int srcLength = tmp50;		HX_STACK_VAR(srcLength,"srcLength");
																HX_STACK_LINE(280)
																int tmp51 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(280)
																int srcByteOffset = tmp51;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																HX_STACK_LINE(280)
																int tmp52 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(280)
																int srcElementSize = tmp52;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																HX_STACK_LINE(280)
																int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(280)
																int tmp53 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(280)
																int tmp54 = _this->type;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(280)
																bool tmp55 = (tmp53 == tmp54);		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(280)
																if ((tmp55)){
																	HX_STACK_LINE(280)
																	int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																	HX_STACK_LINE(280)
																	int tmp56 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp56,"tmp56");
																	HX_STACK_LINE(280)
																	int cloneLength = tmp56;		HX_STACK_VAR(cloneLength,"cloneLength");
																	HX_STACK_LINE(280)
																	::haxe::io::Bytes tmp57;		HX_STACK_VAR(tmp57,"tmp57");
																	HX_STACK_LINE(280)
																	{
																		HX_STACK_LINE(280)
																		::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																		HX_STACK_LINE(280)
																		int tmp58 = cloneLength;		HX_STACK_VAR(tmp58,"tmp58");
																		HX_STACK_LINE(280)
																		::haxe::io::Bytes tmp59 = ::haxe::io::Bytes_obj::alloc(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
																		HX_STACK_LINE(280)
																		this2 = tmp59;
																		HX_STACK_LINE(280)
																		tmp57 = this2;
																	}
																	HX_STACK_LINE(280)
																	_this->buffer = tmp57;
																	HX_STACK_LINE(280)
																	::haxe::io::Bytes tmp58 = srcData;		HX_STACK_VAR(tmp58,"tmp58");
																	HX_STACK_LINE(280)
																	int tmp59 = srcByteOffset;		HX_STACK_VAR(tmp59,"tmp59");
																	HX_STACK_LINE(280)
																	int tmp60 = cloneLength;		HX_STACK_VAR(tmp60,"tmp60");
																	HX_STACK_LINE(280)
																	_this->buffer->blit((int)0,tmp58,tmp59,tmp60);
																}
																else{
																	HX_STACK_LINE(280)
																	HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																}
																HX_STACK_LINE(280)
																int tmp56 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(280)
																_this->byteLength = tmp56;
																HX_STACK_LINE(280)
																_this->byteOffset = (int)0;
																HX_STACK_LINE(280)
																_this->length = srcLength;
																HX_STACK_LINE(280)
																tmp47 = _this;
															}
															HX_STACK_LINE(280)
															this1 = tmp47;
														}
														else{
															HX_STACK_LINE(280)
															bool tmp47 = (buffer != null());		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(280)
															if ((tmp47)){
																HX_STACK_LINE(280)
																::snow::api::buffers::ArrayBufferView tmp48;		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(280)
																{
																	HX_STACK_LINE(280)
																	::snow::api::buffers::ArrayBufferView tmp49 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(280)
																	::snow::api::buffers::ArrayBufferView _this = tmp49;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(280)
																	bool tmp50 = false;		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(280)
																	if ((tmp50)){
																		HX_STACK_LINE(280)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(280)
																	int tmp51 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(280)
																	bool tmp52 = (tmp51 != (int)0);		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(280)
																	if ((tmp52)){
																		HX_STACK_LINE(280)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(280)
																	int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																	HX_STACK_LINE(280)
																	int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																	HX_STACK_LINE(280)
																	int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																	HX_STACK_LINE(280)
																	bool tmp53 = (len == null());		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(280)
																	if ((tmp53)){
																		HX_STACK_LINE(280)
																		int tmp54 = bufferByteLength;		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(280)
																		newByteLength = tmp54;
																		HX_STACK_LINE(280)
																		int tmp55 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(280)
																		bool tmp56 = (tmp55 != (int)0);		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(280)
																		if ((tmp56)){
																			HX_STACK_LINE(280)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																		HX_STACK_LINE(280)
																		bool tmp57 = (newByteLength < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
																		HX_STACK_LINE(280)
																		if ((tmp57)){
																			HX_STACK_LINE(280)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	else{
																		HX_STACK_LINE(280)
																		int tmp54 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(280)
																		newByteLength = tmp54;
																		HX_STACK_LINE(280)
																		int tmp55 = newByteLength;		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(280)
																		int newRange = tmp55;		HX_STACK_VAR(newRange,"newRange");
																		HX_STACK_LINE(280)
																		bool tmp56 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(280)
																		if ((tmp56)){
																			HX_STACK_LINE(280)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	HX_STACK_LINE(280)
																	_this->buffer = buffer;
																	HX_STACK_LINE(280)
																	_this->byteOffset = (int)0;
																	HX_STACK_LINE(280)
																	_this->byteLength = newByteLength;
																	HX_STACK_LINE(280)
																	Float tmp54 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(280)
																	int tmp55 = ::Std_obj::_int(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(280)
																	_this->length = tmp55;
																	HX_STACK_LINE(280)
																	tmp48 = _this;
																}
																HX_STACK_LINE(280)
																this1 = tmp48;
															}
															else{
																HX_STACK_LINE(280)
																HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
															}
														}
													}
												}
												HX_STACK_LINE(280)
												tmp41 = this1;
											}
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView _colors = tmp41;		HX_STACK_VAR(_colors,"_colors");
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
											HX_STACK_LINE(280)
											int tmp42 = geom->state->primitive_type;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView tmp43 = _pos;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView tmp44 = _tcoords;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView tmp45 = _colors;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(280)
											::snow::api::buffers::ArrayBufferView tmp46 = _normals;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(280)
											this->submit_buffers(tmp42,tmp43,tmp44,tmp45,tmp46);
											HX_STACK_LINE(280)
											_pos = null();
											HX_STACK_LINE(280)
											_tcoords = null();
											HX_STACK_LINE(280)
											_colors = null();
											HX_STACK_LINE(280)
											_normals = null();
											HX_STACK_LINE(280)
											this->pos_floats = (int)0;
											HX_STACK_LINE(280)
											this->tcoord_floats = (int)0;
											HX_STACK_LINE(280)
											this->color_floats = (int)0;
											HX_STACK_LINE(280)
											this->normal_floats = (int)0;
										}
									}
									HX_STACK_LINE(280)
									{
										HX_STACK_LINE(280)
										int tmp34 = this->pos_floats;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(280)
										int vert_index = tmp34;		HX_STACK_VAR(vert_index,"vert_index");
										HX_STACK_LINE(280)
										int tmp35 = this->tcoord_floats;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(280)
										int tcoord_index = tmp35;		HX_STACK_VAR(tcoord_index,"tcoord_index");
										HX_STACK_LINE(280)
										int tmp36 = this->color_floats;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(280)
										int color_index = tmp36;		HX_STACK_VAR(color_index,"color_index");
										HX_STACK_LINE(280)
										int tmp37 = this->normal_floats;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(280)
										int normal_index = tmp37;		HX_STACK_VAR(normal_index,"normal_index");
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView tmp38 = this->pos_list;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView vertlist = tmp38;		HX_STACK_VAR(vertlist,"vertlist");
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView tmp39 = this->tcoord_list;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView tcoordlist = tmp39;		HX_STACK_VAR(tcoordlist,"tcoordlist");
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView tmp40 = this->color_list;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(280)
										::snow::api::buffers::ArrayBufferView colorlist = tmp40;		HX_STACK_VAR(colorlist,"colorlist");
										HX_STACK_LINE(280)
										{
											HX_STACK_LINE(280)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(280)
											Array< ::Dynamic > _g11 = geom->vertices;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(280)
											while((true)){
												HX_STACK_LINE(280)
												bool tmp41 = (_g1 < _g11->length);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(280)
												bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(280)
												if ((tmp42)){
													HX_STACK_LINE(280)
													break;
												}
												HX_STACK_LINE(280)
												::phoenix::geometry::Vertex tmp43 = _g11->__get(_g1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(280)
												::phoenix::geometry::Vertex v = tmp43;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(280)
												++(_g1);
												HX_STACK_LINE(280)
												{
													HX_STACK_LINE(280)
													::phoenix::Vector _this = geom->_final_vert_position;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(280)
													Float tmp44 = v->pos->x;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(280)
													Float _x = tmp44;		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(280)
													Float tmp45 = v->pos->y;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(280)
													Float _y = tmp45;		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(280)
													Float tmp46 = v->pos->z;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(280)
													Float _z = tmp46;		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(280)
													bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
													HX_STACK_LINE(280)
													_this->ignore_listeners = true;
													HX_STACK_LINE(280)
													{
														HX_STACK_LINE(280)
														_this->x = _x;
														HX_STACK_LINE(280)
														bool tmp47 = _this->_construct;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(280)
														if ((tmp47)){
															HX_STACK_LINE(280)
															_this->x;
														}
														else{
															HX_STACK_LINE(280)
															bool tmp48 = (_this->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(280)
															bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(280)
															if ((tmp48)){
																HX_STACK_LINE(280)
																bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(280)
																tmp49 = !(tmp51);
															}
															else{
																HX_STACK_LINE(280)
																tmp49 = false;
															}
															HX_STACK_LINE(280)
															if ((tmp49)){
																HX_STACK_LINE(280)
																Float tmp50 = _x;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																_this->listen_x(tmp50);
															}
															HX_STACK_LINE(280)
															_this->x;
														}
													}
													HX_STACK_LINE(280)
													{
														HX_STACK_LINE(280)
														_this->y = _y;
														HX_STACK_LINE(280)
														bool tmp47 = _this->_construct;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(280)
														if ((tmp47)){
															HX_STACK_LINE(280)
															_this->y;
														}
														else{
															HX_STACK_LINE(280)
															bool tmp48 = (_this->listen_y != null());		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(280)
															bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(280)
															if ((tmp48)){
																HX_STACK_LINE(280)
																bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(280)
																tmp49 = !(tmp51);
															}
															else{
																HX_STACK_LINE(280)
																tmp49 = false;
															}
															HX_STACK_LINE(280)
															if ((tmp49)){
																HX_STACK_LINE(280)
																Float tmp50 = _y;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																_this->listen_y(tmp50);
															}
															HX_STACK_LINE(280)
															_this->y;
														}
													}
													HX_STACK_LINE(280)
													{
														HX_STACK_LINE(280)
														_this->z = _z;
														HX_STACK_LINE(280)
														bool tmp47 = _this->_construct;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(280)
														if ((tmp47)){
															HX_STACK_LINE(280)
															_this->z;
														}
														else{
															HX_STACK_LINE(280)
															bool tmp48 = (_this->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(280)
															bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(280)
															if ((tmp48)){
																HX_STACK_LINE(280)
																bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(280)
																tmp49 = !(tmp51);
															}
															else{
																HX_STACK_LINE(280)
																tmp49 = false;
															}
															HX_STACK_LINE(280)
															if ((tmp49)){
																HX_STACK_LINE(280)
																Float tmp50 = _z;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																_this->listen_z(tmp50);
															}
															HX_STACK_LINE(280)
															_this->z;
														}
													}
													HX_STACK_LINE(280)
													Float tmp47 = v->pos->w;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(280)
													_this->w = tmp47;
													HX_STACK_LINE(280)
													_this->ignore_listeners = prev;
													HX_STACK_LINE(280)
													bool tmp48 = (_this->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(280)
													bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(280)
													if ((tmp48)){
														HX_STACK_LINE(280)
														bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(280)
														bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(280)
														tmp49 = !(tmp51);
													}
													else{
														HX_STACK_LINE(280)
														tmp49 = false;
													}
													HX_STACK_LINE(280)
													if ((tmp49)){
														HX_STACK_LINE(280)
														Float tmp50 = _this->x;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(280)
														_this->listen_x(tmp50);
													}
													HX_STACK_LINE(280)
													bool tmp50 = (_this->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(280)
													bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(280)
													if ((tmp50)){
														HX_STACK_LINE(280)
														bool tmp52 = _this->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(280)
														bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(280)
														tmp51 = !(tmp53);
													}
													else{
														HX_STACK_LINE(280)
														tmp51 = false;
													}
													HX_STACK_LINE(280)
													if ((tmp51)){
														HX_STACK_LINE(280)
														Float tmp52 = _this->y;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(280)
														_this->listen_y(tmp52);
													}
													HX_STACK_LINE(280)
													bool tmp52 = (_this->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(280)
													bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(280)
													if ((tmp52)){
														HX_STACK_LINE(280)
														bool tmp54 = _this->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(280)
														bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(280)
														tmp53 = !(tmp55);
													}
													else{
														HX_STACK_LINE(280)
														tmp53 = false;
													}
													HX_STACK_LINE(280)
													if ((tmp53)){
														HX_STACK_LINE(280)
														Float tmp54 = _this->z;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(280)
														_this->listen_z(tmp54);
													}
													HX_STACK_LINE(280)
													_this;
												}
												HX_STACK_LINE(280)
												{
													HX_STACK_LINE(280)
													::phoenix::Vector _this = geom->_final_vert_position;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(280)
													::phoenix::Matrix tmp44;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(280)
													{
														HX_STACK_LINE(280)
														::phoenix::Spatial tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(280)
														{
															HX_STACK_LINE(280)
															::phoenix::Transform _this1 = geom->transform;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(280)
															bool tmp46 = _this1->_destroying;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(280)
															bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(280)
															if ((tmp47)){
																HX_STACK_LINE(280)
																bool tmp48 = (_this1->parent != null());		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(280)
																if ((tmp48)){
																	HX_STACK_LINE(280)
																	bool tmp49 = _this1->parent->dirty;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(280)
																	if ((tmp49)){
																		HX_STACK_LINE(280)
																		_this1->parent->clean();
																	}
																}
																HX_STACK_LINE(280)
																bool tmp49 = _this1->dirty;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(280)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(280)
																if ((tmp49)){
																	HX_STACK_LINE(280)
																	bool tmp51 = _this1->_cleaning;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(280)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(280)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(280)
																	tmp50 = false;
																}
																HX_STACK_LINE(280)
																if ((tmp50)){
																	HX_STACK_LINE(280)
																	_this1->clean();
																}
															}
															HX_STACK_LINE(280)
															tmp45 = _this1->world;
														}
														HX_STACK_LINE(280)
														::phoenix::Spatial _this1 = tmp45;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(280)
														tmp44 = _this1->matrix;
													}
													HX_STACK_LINE(280)
													::phoenix::Matrix _m = tmp44;		HX_STACK_VAR(_m,"_m");
													HX_STACK_LINE(280)
													Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(280)
													Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(280)
													Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(280)
													Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
													HX_STACK_LINE(280)
													{
														HX_STACK_LINE(280)
														Float tmp45 = e->__get((int)0);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(280)
														Float tmp46 = _x;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(280)
														Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(280)
														Float tmp48 = e->__get((int)4);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(280)
														Float tmp49 = _y;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(280)
														Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(280)
														Float tmp51 = (tmp47 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(280)
														Float tmp52 = e->__get((int)8);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(280)
														Float tmp53 = _z;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(280)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(280)
														Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(280)
														Float tmp56 = e->__get((int)12);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(280)
														Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(280)
														Float _x1 = tmp57;		HX_STACK_VAR(_x1,"_x1");
														HX_STACK_LINE(280)
														Float tmp58 = e->__get((int)1);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(280)
														Float tmp59 = _x;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(280)
														Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(280)
														Float tmp61 = e->__get((int)5);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(280)
														Float tmp62 = _y;		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(280)
														Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(280)
														Float tmp64 = (tmp60 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(280)
														Float tmp65 = e->__get((int)9);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(280)
														Float tmp66 = _z;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(280)
														Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(280)
														Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(280)
														Float tmp69 = e->__get((int)13);		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(280)
														Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(280)
														Float _y1 = tmp70;		HX_STACK_VAR(_y1,"_y1");
														HX_STACK_LINE(280)
														Float tmp71 = e->__get((int)2);		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(280)
														Float tmp72 = _x;		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(280)
														Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(280)
														Float tmp74 = e->__get((int)6);		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(280)
														Float tmp75 = _y;		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(280)
														Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(280)
														Float tmp77 = (tmp73 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(280)
														Float tmp78 = e->__get((int)10);		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(280)
														Float tmp79 = _z;		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(280)
														Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(280)
														Float tmp81 = (tmp77 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(280)
														Float tmp82 = e->__get((int)14);		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(280)
														Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(280)
														Float _z1 = tmp83;		HX_STACK_VAR(_z1,"_z1");
														HX_STACK_LINE(280)
														bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
														HX_STACK_LINE(280)
														_this->ignore_listeners = true;
														HX_STACK_LINE(280)
														{
															HX_STACK_LINE(280)
															_this->x = _x1;
															HX_STACK_LINE(280)
															bool tmp84 = _this->_construct;		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(280)
															if ((tmp84)){
																HX_STACK_LINE(280)
																_this->x;
															}
															else{
																HX_STACK_LINE(280)
																bool tmp85 = (_this->listen_x != null());		HX_STACK_VAR(tmp85,"tmp85");
																HX_STACK_LINE(280)
																bool tmp86;		HX_STACK_VAR(tmp86,"tmp86");
																HX_STACK_LINE(280)
																if ((tmp85)){
																	HX_STACK_LINE(280)
																	bool tmp87 = _this->ignore_listeners;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(280)
																	bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
																	HX_STACK_LINE(280)
																	tmp86 = !(tmp88);
																}
																else{
																	HX_STACK_LINE(280)
																	tmp86 = false;
																}
																HX_STACK_LINE(280)
																if ((tmp86)){
																	HX_STACK_LINE(280)
																	Float tmp87 = _x1;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(280)
																	_this->listen_x(tmp87);
																}
																HX_STACK_LINE(280)
																_this->x;
															}
														}
														HX_STACK_LINE(280)
														{
															HX_STACK_LINE(280)
															_this->y = _y1;
															HX_STACK_LINE(280)
															bool tmp84 = _this->_construct;		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(280)
															if ((tmp84)){
																HX_STACK_LINE(280)
																_this->y;
															}
															else{
																HX_STACK_LINE(280)
																bool tmp85 = (_this->listen_y != null());		HX_STACK_VAR(tmp85,"tmp85");
																HX_STACK_LINE(280)
																bool tmp86;		HX_STACK_VAR(tmp86,"tmp86");
																HX_STACK_LINE(280)
																if ((tmp85)){
																	HX_STACK_LINE(280)
																	bool tmp87 = _this->ignore_listeners;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(280)
																	bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
																	HX_STACK_LINE(280)
																	tmp86 = !(tmp88);
																}
																else{
																	HX_STACK_LINE(280)
																	tmp86 = false;
																}
																HX_STACK_LINE(280)
																if ((tmp86)){
																	HX_STACK_LINE(280)
																	Float tmp87 = _y1;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(280)
																	_this->listen_y(tmp87);
																}
																HX_STACK_LINE(280)
																_this->y;
															}
														}
														HX_STACK_LINE(280)
														{
															HX_STACK_LINE(280)
															_this->z = _z1;
															HX_STACK_LINE(280)
															bool tmp84 = _this->_construct;		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(280)
															if ((tmp84)){
																HX_STACK_LINE(280)
																_this->z;
															}
															else{
																HX_STACK_LINE(280)
																bool tmp85 = (_this->listen_z != null());		HX_STACK_VAR(tmp85,"tmp85");
																HX_STACK_LINE(280)
																bool tmp86;		HX_STACK_VAR(tmp86,"tmp86");
																HX_STACK_LINE(280)
																if ((tmp85)){
																	HX_STACK_LINE(280)
																	bool tmp87 = _this->ignore_listeners;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(280)
																	bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
																	HX_STACK_LINE(280)
																	tmp86 = !(tmp88);
																}
																else{
																	HX_STACK_LINE(280)
																	tmp86 = false;
																}
																HX_STACK_LINE(280)
																if ((tmp86)){
																	HX_STACK_LINE(280)
																	Float tmp87 = _z1;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(280)
																	_this->listen_z(tmp87);
																}
																HX_STACK_LINE(280)
																_this->z;
															}
														}
														HX_STACK_LINE(280)
														_this->ignore_listeners = prev;
														HX_STACK_LINE(280)
														bool tmp84 = (_this->listen_x != null());		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(280)
														bool tmp85;		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(280)
														if ((tmp84)){
															HX_STACK_LINE(280)
															bool tmp86 = _this->ignore_listeners;		HX_STACK_VAR(tmp86,"tmp86");
															HX_STACK_LINE(280)
															bool tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
															HX_STACK_LINE(280)
															tmp85 = !(tmp87);
														}
														else{
															HX_STACK_LINE(280)
															tmp85 = false;
														}
														HX_STACK_LINE(280)
														if ((tmp85)){
															HX_STACK_LINE(280)
															Float tmp86 = _this->x;		HX_STACK_VAR(tmp86,"tmp86");
															HX_STACK_LINE(280)
															_this->listen_x(tmp86);
														}
														HX_STACK_LINE(280)
														bool tmp86 = (_this->listen_y != null());		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(280)
														bool tmp87;		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(280)
														if ((tmp86)){
															HX_STACK_LINE(280)
															bool tmp88 = _this->ignore_listeners;		HX_STACK_VAR(tmp88,"tmp88");
															HX_STACK_LINE(280)
															bool tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
															HX_STACK_LINE(280)
															tmp87 = !(tmp89);
														}
														else{
															HX_STACK_LINE(280)
															tmp87 = false;
														}
														HX_STACK_LINE(280)
														if ((tmp87)){
															HX_STACK_LINE(280)
															Float tmp88 = _this->y;		HX_STACK_VAR(tmp88,"tmp88");
															HX_STACK_LINE(280)
															_this->listen_y(tmp88);
														}
														HX_STACK_LINE(280)
														bool tmp88 = (_this->listen_z != null());		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(280)
														bool tmp89;		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(280)
														if ((tmp88)){
															HX_STACK_LINE(280)
															bool tmp90 = _this->ignore_listeners;		HX_STACK_VAR(tmp90,"tmp90");
															HX_STACK_LINE(280)
															bool tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
															HX_STACK_LINE(280)
															tmp89 = !(tmp91);
														}
														else{
															HX_STACK_LINE(280)
															tmp89 = false;
														}
														HX_STACK_LINE(280)
														if ((tmp89)){
															HX_STACK_LINE(280)
															Float tmp90 = _this->z;		HX_STACK_VAR(tmp90,"tmp90");
															HX_STACK_LINE(280)
															_this->listen_z(tmp90);
														}
														HX_STACK_LINE(280)
														_this;
													}
													HX_STACK_LINE(280)
													_this;
												}
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (vert_index * (int)4)),geom->_final_vert_position->x);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),geom->_final_vert_position->y);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),geom->_final_vert_position->z);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),geom->_final_vert_position->w);
												HX_STACK_LINE(280)
												hx::AddEq(vert_index,(int)4);
												HX_STACK_LINE(280)
												::phoenix::geometry::TextureCoord tmp44 = v->uv->uv0;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(280)
												::phoenix::geometry::TextureCoord _vuv = tmp44;		HX_STACK_VAR(_vuv,"_vuv");
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
												HX_STACK_LINE(280)
												hx::AddEq(tcoord_index,(int)4);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
												HX_STACK_LINE(280)
												::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
												HX_STACK_LINE(280)
												hx::AddEq(color_index,(int)4);
												HX_STACK_LINE(280)
												hx::AddEq(normal_index,(int)4);
											}
										}
									}
									HX_STACK_LINE(280)
									int tmp34 = geom->vertices->length;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(280)
									int tmp35 = (tmp34 * (int)4);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(280)
									int _length = tmp35;		HX_STACK_VAR(_length,"_length");
									HX_STACK_LINE(280)
									hx::AddEq(this->pos_floats,_length);
									HX_STACK_LINE(280)
									hx::AddEq(this->tcoord_floats,_length);
									HX_STACK_LINE(280)
									hx::AddEq(this->color_floats,_length);
									HX_STACK_LINE(280)
									hx::AddEq(this->normal_floats,_length);
								}
								HX_STACK_LINE(282)
								{
									HX_STACK_LINE(282)
									int tmp27 = this->pos_floats;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(282)
									bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(282)
									if ((tmp28)){
										HX_STACK_LINE(282)
										Dynamic();
									}
									else{
										HX_STACK_LINE(282)
										int tmp29 = this->pos_floats;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(282)
										int tmp30 = this->max_floats;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(282)
										bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(282)
										if ((tmp31)){
											HX_STACK_LINE(282)
											HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
										}
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											::snow::api::buffers::ArrayBufferView tmp33 = this->pos_list;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(282)
											::haxe::io::Bytes buffer = tmp33->buffer;		HX_STACK_VAR(buffer,"buffer");
											HX_STACK_LINE(282)
											int tmp34 = this->pos_floats;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(282)
											Dynamic len = tmp34;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(282)
											::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(282)
											bool tmp35 = false;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(282)
											if ((tmp35)){
												HX_STACK_LINE(282)
												::snow::api::buffers::ArrayBufferView tmp36 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(282)
												this1 = tmp36;
											}
											else{
												HX_STACK_LINE(282)
												bool tmp36 = false;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(282)
												if ((tmp36)){
													HX_STACK_LINE(282)
													::snow::api::buffers::ArrayBufferView tmp37;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(282)
													{
														HX_STACK_LINE(282)
														::snow::api::buffers::ArrayBufferView tmp38 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(282)
														::snow::api::buffers::ArrayBufferView _this = tmp38;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(282)
														_this->byteOffset = (int)0;
														HX_STACK_LINE(282)
														int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(282)
														_this->length = tmp39;
														HX_STACK_LINE(282)
														int tmp40 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(282)
														_this->byteLength = tmp40;
														HX_STACK_LINE(282)
														::haxe::io::Bytes tmp41;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(282)
														{
															HX_STACK_LINE(282)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(282)
															int tmp42 = _this->byteLength;		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(282)
															::haxe::io::Bytes tmp43 = ::haxe::io::Bytes_obj::alloc(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(282)
															this2 = tmp43;
															HX_STACK_LINE(282)
															tmp41 = this2;
														}
														HX_STACK_LINE(282)
														_this->buffer = tmp41;
														HX_STACK_LINE(282)
														_this->copyFromArray(((Array< Float >)(null())),null());
														HX_STACK_LINE(282)
														tmp37 = _this;
													}
													HX_STACK_LINE(282)
													this1 = tmp37;
												}
												else{
													HX_STACK_LINE(282)
													bool tmp37 = false;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(282)
													if ((tmp37)){
														HX_STACK_LINE(282)
														::snow::api::buffers::ArrayBufferView tmp38;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(282)
														{
															HX_STACK_LINE(282)
															::snow::api::buffers::ArrayBufferView tmp39 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(282)
															::snow::api::buffers::ArrayBufferView _this = tmp39;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(282)
															::haxe::io::Bytes tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(282)
															::haxe::io::Bytes srcData = tmp40;		HX_STACK_VAR(srcData,"srcData");
															HX_STACK_LINE(282)
															int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(282)
															int srcLength = tmp41;		HX_STACK_VAR(srcLength,"srcLength");
															HX_STACK_LINE(282)
															int tmp42 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(282)
															int srcByteOffset = tmp42;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
															HX_STACK_LINE(282)
															int tmp43 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(282)
															int srcElementSize = tmp43;		HX_STACK_VAR(srcElementSize,"srcElementSize");
															HX_STACK_LINE(282)
															int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
															HX_STACK_LINE(282)
															int tmp44 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(282)
															int tmp45 = _this->type;		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(282)
															bool tmp46 = (tmp44 == tmp45);		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(282)
															if ((tmp46)){
																HX_STACK_LINE(282)
																int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																HX_STACK_LINE(282)
																int tmp47 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(282)
																int cloneLength = tmp47;		HX_STACK_VAR(cloneLength,"cloneLength");
																HX_STACK_LINE(282)
																::haxe::io::Bytes tmp48;		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(282)
																{
																	HX_STACK_LINE(282)
																	::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																	HX_STACK_LINE(282)
																	int tmp49 = cloneLength;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(282)
																	::haxe::io::Bytes tmp50 = ::haxe::io::Bytes_obj::alloc(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(282)
																	this2 = tmp50;
																	HX_STACK_LINE(282)
																	tmp48 = this2;
																}
																HX_STACK_LINE(282)
																_this->buffer = tmp48;
																HX_STACK_LINE(282)
																::haxe::io::Bytes tmp49 = srcData;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(282)
																int tmp50 = srcByteOffset;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(282)
																int tmp51 = cloneLength;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(282)
																_this->buffer->blit((int)0,tmp49,tmp50,tmp51);
															}
															else{
																HX_STACK_LINE(282)
																HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
															}
															HX_STACK_LINE(282)
															int tmp47 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(282)
															_this->byteLength = tmp47;
															HX_STACK_LINE(282)
															_this->byteOffset = (int)0;
															HX_STACK_LINE(282)
															_this->length = srcLength;
															HX_STACK_LINE(282)
															tmp38 = _this;
														}
														HX_STACK_LINE(282)
														this1 = tmp38;
													}
													else{
														HX_STACK_LINE(282)
														bool tmp38 = (buffer != null());		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(282)
														if ((tmp38)){
															HX_STACK_LINE(282)
															::snow::api::buffers::ArrayBufferView tmp39;		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(282)
															{
																HX_STACK_LINE(282)
																::snow::api::buffers::ArrayBufferView tmp40 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(282)
																::snow::api::buffers::ArrayBufferView _this = tmp40;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(282)
																bool tmp41 = false;		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(282)
																if ((tmp41)){
																	HX_STACK_LINE(282)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(282)
																int tmp42 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(282)
																bool tmp43 = (tmp42 != (int)0);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(282)
																if ((tmp43)){
																	HX_STACK_LINE(282)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(282)
																int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																HX_STACK_LINE(282)
																int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(282)
																int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																HX_STACK_LINE(282)
																bool tmp44 = (len == null());		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(282)
																if ((tmp44)){
																	HX_STACK_LINE(282)
																	int tmp45 = bufferByteLength;		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(282)
																	newByteLength = tmp45;
																	HX_STACK_LINE(282)
																	int tmp46 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(282)
																	bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(282)
																	if ((tmp47)){
																		HX_STACK_LINE(282)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(282)
																	bool tmp48 = (newByteLength < (int)0);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(282)
																	if ((tmp48)){
																		HX_STACK_LINE(282)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																else{
																	HX_STACK_LINE(282)
																	int tmp45 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(282)
																	newByteLength = tmp45;
																	HX_STACK_LINE(282)
																	int tmp46 = newByteLength;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(282)
																	int newRange = tmp46;		HX_STACK_VAR(newRange,"newRange");
																	HX_STACK_LINE(282)
																	bool tmp47 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(282)
																	if ((tmp47)){
																		HX_STACK_LINE(282)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																HX_STACK_LINE(282)
																_this->buffer = buffer;
																HX_STACK_LINE(282)
																_this->byteOffset = (int)0;
																HX_STACK_LINE(282)
																_this->byteLength = newByteLength;
																HX_STACK_LINE(282)
																Float tmp45 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(282)
																int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(282)
																_this->length = tmp46;
																HX_STACK_LINE(282)
																tmp39 = _this;
															}
															HX_STACK_LINE(282)
															this1 = tmp39;
														}
														else{
															HX_STACK_LINE(282)
															HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
														}
													}
												}
											}
											HX_STACK_LINE(282)
											tmp32 = this1;
										}
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView _pos = tmp32;		HX_STACK_VAR(_pos,"_pos");
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											::snow::api::buffers::ArrayBufferView tmp34 = this->tcoord_list;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(282)
											::haxe::io::Bytes buffer = tmp34->buffer;		HX_STACK_VAR(buffer,"buffer");
											HX_STACK_LINE(282)
											int tmp35 = this->tcoord_floats;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(282)
											Dynamic len = tmp35;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(282)
											::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(282)
											bool tmp36 = false;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(282)
											if ((tmp36)){
												HX_STACK_LINE(282)
												::snow::api::buffers::ArrayBufferView tmp37 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(282)
												this1 = tmp37;
											}
											else{
												HX_STACK_LINE(282)
												bool tmp37 = false;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(282)
												if ((tmp37)){
													HX_STACK_LINE(282)
													::snow::api::buffers::ArrayBufferView tmp38;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(282)
													{
														HX_STACK_LINE(282)
														::snow::api::buffers::ArrayBufferView tmp39 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(282)
														::snow::api::buffers::ArrayBufferView _this = tmp39;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(282)
														_this->byteOffset = (int)0;
														HX_STACK_LINE(282)
														int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(282)
														_this->length = tmp40;
														HX_STACK_LINE(282)
														int tmp41 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(282)
														_this->byteLength = tmp41;
														HX_STACK_LINE(282)
														::haxe::io::Bytes tmp42;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(282)
														{
															HX_STACK_LINE(282)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(282)
															int tmp43 = _this->byteLength;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(282)
															::haxe::io::Bytes tmp44 = ::haxe::io::Bytes_obj::alloc(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(282)
															this2 = tmp44;
															HX_STACK_LINE(282)
															tmp42 = this2;
														}
														HX_STACK_LINE(282)
														_this->buffer = tmp42;
														HX_STACK_LINE(282)
														_this->copyFromArray(((Array< Float >)(null())),null());
														HX_STACK_LINE(282)
														tmp38 = _this;
													}
													HX_STACK_LINE(282)
													this1 = tmp38;
												}
												else{
													HX_STACK_LINE(282)
													bool tmp38 = false;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(282)
													if ((tmp38)){
														HX_STACK_LINE(282)
														::snow::api::buffers::ArrayBufferView tmp39;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(282)
														{
															HX_STACK_LINE(282)
															::snow::api::buffers::ArrayBufferView tmp40 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(282)
															::snow::api::buffers::ArrayBufferView _this = tmp40;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(282)
															::haxe::io::Bytes tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(282)
															::haxe::io::Bytes srcData = tmp41;		HX_STACK_VAR(srcData,"srcData");
															HX_STACK_LINE(282)
															int tmp42 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(282)
															int srcLength = tmp42;		HX_STACK_VAR(srcLength,"srcLength");
															HX_STACK_LINE(282)
															int tmp43 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(282)
															int srcByteOffset = tmp43;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
															HX_STACK_LINE(282)
															int tmp44 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(282)
															int srcElementSize = tmp44;		HX_STACK_VAR(srcElementSize,"srcElementSize");
															HX_STACK_LINE(282)
															int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
															HX_STACK_LINE(282)
															int tmp45 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(282)
															int tmp46 = _this->type;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(282)
															bool tmp47 = (tmp45 == tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(282)
															if ((tmp47)){
																HX_STACK_LINE(282)
																int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																HX_STACK_LINE(282)
																int tmp48 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(282)
																int cloneLength = tmp48;		HX_STACK_VAR(cloneLength,"cloneLength");
																HX_STACK_LINE(282)
																::haxe::io::Bytes tmp49;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(282)
																{
																	HX_STACK_LINE(282)
																	::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																	HX_STACK_LINE(282)
																	int tmp50 = cloneLength;		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(282)
																	::haxe::io::Bytes tmp51 = ::haxe::io::Bytes_obj::alloc(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(282)
																	this2 = tmp51;
																	HX_STACK_LINE(282)
																	tmp49 = this2;
																}
																HX_STACK_LINE(282)
																_this->buffer = tmp49;
																HX_STACK_LINE(282)
																::haxe::io::Bytes tmp50 = srcData;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(282)
																int tmp51 = srcByteOffset;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(282)
																int tmp52 = cloneLength;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(282)
																_this->buffer->blit((int)0,tmp50,tmp51,tmp52);
															}
															else{
																HX_STACK_LINE(282)
																HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
															}
															HX_STACK_LINE(282)
															int tmp48 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(282)
															_this->byteLength = tmp48;
															HX_STACK_LINE(282)
															_this->byteOffset = (int)0;
															HX_STACK_LINE(282)
															_this->length = srcLength;
															HX_STACK_LINE(282)
															tmp39 = _this;
														}
														HX_STACK_LINE(282)
														this1 = tmp39;
													}
													else{
														HX_STACK_LINE(282)
														bool tmp39 = (buffer != null());		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(282)
														if ((tmp39)){
															HX_STACK_LINE(282)
															::snow::api::buffers::ArrayBufferView tmp40;		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(282)
															{
																HX_STACK_LINE(282)
																::snow::api::buffers::ArrayBufferView tmp41 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(282)
																::snow::api::buffers::ArrayBufferView _this = tmp41;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(282)
																bool tmp42 = false;		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(282)
																if ((tmp42)){
																	HX_STACK_LINE(282)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(282)
																int tmp43 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(282)
																bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(282)
																if ((tmp44)){
																	HX_STACK_LINE(282)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(282)
																int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																HX_STACK_LINE(282)
																int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(282)
																int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																HX_STACK_LINE(282)
																bool tmp45 = (len == null());		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(282)
																if ((tmp45)){
																	HX_STACK_LINE(282)
																	int tmp46 = bufferByteLength;		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(282)
																	newByteLength = tmp46;
																	HX_STACK_LINE(282)
																	int tmp47 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(282)
																	bool tmp48 = (tmp47 != (int)0);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(282)
																	if ((tmp48)){
																		HX_STACK_LINE(282)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(282)
																	bool tmp49 = (newByteLength < (int)0);		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(282)
																	if ((tmp49)){
																		HX_STACK_LINE(282)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																else{
																	HX_STACK_LINE(282)
																	int tmp46 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp46,"tmp46");
																	HX_STACK_LINE(282)
																	newByteLength = tmp46;
																	HX_STACK_LINE(282)
																	int tmp47 = newByteLength;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(282)
																	int newRange = tmp47;		HX_STACK_VAR(newRange,"newRange");
																	HX_STACK_LINE(282)
																	bool tmp48 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(282)
																	if ((tmp48)){
																		HX_STACK_LINE(282)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																HX_STACK_LINE(282)
																_this->buffer = buffer;
																HX_STACK_LINE(282)
																_this->byteOffset = (int)0;
																HX_STACK_LINE(282)
																_this->byteLength = newByteLength;
																HX_STACK_LINE(282)
																Float tmp46 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(282)
																int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(282)
																_this->length = tmp47;
																HX_STACK_LINE(282)
																tmp40 = _this;
															}
															HX_STACK_LINE(282)
															this1 = tmp40;
														}
														else{
															HX_STACK_LINE(282)
															HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
														}
													}
												}
											}
											HX_STACK_LINE(282)
											tmp33 = this1;
										}
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView _tcoords = tmp33;		HX_STACK_VAR(_tcoords,"_tcoords");
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											::snow::api::buffers::ArrayBufferView tmp35 = this->color_list;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(282)
											::haxe::io::Bytes buffer = tmp35->buffer;		HX_STACK_VAR(buffer,"buffer");
											HX_STACK_LINE(282)
											int tmp36 = this->color_floats;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(282)
											Dynamic len = tmp36;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(282)
											::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(282)
											bool tmp37 = false;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(282)
											if ((tmp37)){
												HX_STACK_LINE(282)
												::snow::api::buffers::ArrayBufferView tmp38 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(282)
												this1 = tmp38;
											}
											else{
												HX_STACK_LINE(282)
												bool tmp38 = false;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(282)
												if ((tmp38)){
													HX_STACK_LINE(282)
													::snow::api::buffers::ArrayBufferView tmp39;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(282)
													{
														HX_STACK_LINE(282)
														::snow::api::buffers::ArrayBufferView tmp40 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(282)
														::snow::api::buffers::ArrayBufferView _this = tmp40;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(282)
														_this->byteOffset = (int)0;
														HX_STACK_LINE(282)
														int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(282)
														_this->length = tmp41;
														HX_STACK_LINE(282)
														int tmp42 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(282)
														_this->byteLength = tmp42;
														HX_STACK_LINE(282)
														::haxe::io::Bytes tmp43;		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(282)
														{
															HX_STACK_LINE(282)
															::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
															HX_STACK_LINE(282)
															int tmp44 = _this->byteLength;		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(282)
															::haxe::io::Bytes tmp45 = ::haxe::io::Bytes_obj::alloc(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(282)
															this2 = tmp45;
															HX_STACK_LINE(282)
															tmp43 = this2;
														}
														HX_STACK_LINE(282)
														_this->buffer = tmp43;
														HX_STACK_LINE(282)
														_this->copyFromArray(((Array< Float >)(null())),null());
														HX_STACK_LINE(282)
														tmp39 = _this;
													}
													HX_STACK_LINE(282)
													this1 = tmp39;
												}
												else{
													HX_STACK_LINE(282)
													bool tmp39 = false;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(282)
													if ((tmp39)){
														HX_STACK_LINE(282)
														::snow::api::buffers::ArrayBufferView tmp40;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(282)
														{
															HX_STACK_LINE(282)
															::snow::api::buffers::ArrayBufferView tmp41 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(282)
															::snow::api::buffers::ArrayBufferView _this = tmp41;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(282)
															::haxe::io::Bytes tmp42 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(282)
															::haxe::io::Bytes srcData = tmp42;		HX_STACK_VAR(srcData,"srcData");
															HX_STACK_LINE(282)
															int tmp43 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(282)
															int srcLength = tmp43;		HX_STACK_VAR(srcLength,"srcLength");
															HX_STACK_LINE(282)
															int tmp44 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(282)
															int srcByteOffset = tmp44;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
															HX_STACK_LINE(282)
															int tmp45 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(282)
															int srcElementSize = tmp45;		HX_STACK_VAR(srcElementSize,"srcElementSize");
															HX_STACK_LINE(282)
															int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
															HX_STACK_LINE(282)
															int tmp46 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(282)
															int tmp47 = _this->type;		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(282)
															bool tmp48 = (tmp46 == tmp47);		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(282)
															if ((tmp48)){
																HX_STACK_LINE(282)
																int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																HX_STACK_LINE(282)
																int tmp49 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(282)
																int cloneLength = tmp49;		HX_STACK_VAR(cloneLength,"cloneLength");
																HX_STACK_LINE(282)
																::haxe::io::Bytes tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(282)
																{
																	HX_STACK_LINE(282)
																	::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																	HX_STACK_LINE(282)
																	int tmp51 = cloneLength;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(282)
																	::haxe::io::Bytes tmp52 = ::haxe::io::Bytes_obj::alloc(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(282)
																	this2 = tmp52;
																	HX_STACK_LINE(282)
																	tmp50 = this2;
																}
																HX_STACK_LINE(282)
																_this->buffer = tmp50;
																HX_STACK_LINE(282)
																::haxe::io::Bytes tmp51 = srcData;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(282)
																int tmp52 = srcByteOffset;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(282)
																int tmp53 = cloneLength;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(282)
																_this->buffer->blit((int)0,tmp51,tmp52,tmp53);
															}
															else{
																HX_STACK_LINE(282)
																HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
															}
															HX_STACK_LINE(282)
															int tmp49 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(282)
															_this->byteLength = tmp49;
															HX_STACK_LINE(282)
															_this->byteOffset = (int)0;
															HX_STACK_LINE(282)
															_this->length = srcLength;
															HX_STACK_LINE(282)
															tmp40 = _this;
														}
														HX_STACK_LINE(282)
														this1 = tmp40;
													}
													else{
														HX_STACK_LINE(282)
														bool tmp40 = (buffer != null());		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(282)
														if ((tmp40)){
															HX_STACK_LINE(282)
															::snow::api::buffers::ArrayBufferView tmp41;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(282)
															{
																HX_STACK_LINE(282)
																::snow::api::buffers::ArrayBufferView tmp42 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(282)
																::snow::api::buffers::ArrayBufferView _this = tmp42;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(282)
																bool tmp43 = false;		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(282)
																if ((tmp43)){
																	HX_STACK_LINE(282)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(282)
																int tmp44 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(282)
																bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(282)
																if ((tmp45)){
																	HX_STACK_LINE(282)
																	HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																}
																HX_STACK_LINE(282)
																int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																HX_STACK_LINE(282)
																int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(282)
																int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																HX_STACK_LINE(282)
																bool tmp46 = (len == null());		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(282)
																if ((tmp46)){
																	HX_STACK_LINE(282)
																	int tmp47 = bufferByteLength;		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(282)
																	newByteLength = tmp47;
																	HX_STACK_LINE(282)
																	int tmp48 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(282)
																	bool tmp49 = (tmp48 != (int)0);		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(282)
																	if ((tmp49)){
																		HX_STACK_LINE(282)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(282)
																	bool tmp50 = (newByteLength < (int)0);		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(282)
																	if ((tmp50)){
																		HX_STACK_LINE(282)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																else{
																	HX_STACK_LINE(282)
																	int tmp47 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(282)
																	newByteLength = tmp47;
																	HX_STACK_LINE(282)
																	int tmp48 = newByteLength;		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(282)
																	int newRange = tmp48;		HX_STACK_VAR(newRange,"newRange");
																	HX_STACK_LINE(282)
																	bool tmp49 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(282)
																	if ((tmp49)){
																		HX_STACK_LINE(282)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																}
																HX_STACK_LINE(282)
																_this->buffer = buffer;
																HX_STACK_LINE(282)
																_this->byteOffset = (int)0;
																HX_STACK_LINE(282)
																_this->byteLength = newByteLength;
																HX_STACK_LINE(282)
																Float tmp47 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(282)
																int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(282)
																_this->length = tmp48;
																HX_STACK_LINE(282)
																tmp41 = _this;
															}
															HX_STACK_LINE(282)
															this1 = tmp41;
														}
														else{
															HX_STACK_LINE(282)
															HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
														}
													}
												}
											}
											HX_STACK_LINE(282)
											tmp34 = this1;
										}
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView _colors = tmp34;		HX_STACK_VAR(_colors,"_colors");
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
										HX_STACK_LINE(282)
										int tmp35 = geom->state->primitive_type;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView tmp36 = _pos;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView tmp37 = _tcoords;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView tmp38 = _colors;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(282)
										::snow::api::buffers::ArrayBufferView tmp39 = _normals;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(282)
										this->submit_buffers(tmp35,tmp36,tmp37,tmp38,tmp39);
										HX_STACK_LINE(282)
										_pos = null();
										HX_STACK_LINE(282)
										_tcoords = null();
										HX_STACK_LINE(282)
										_colors = null();
										HX_STACK_LINE(282)
										_normals = null();
										HX_STACK_LINE(282)
										this->pos_floats = (int)0;
										HX_STACK_LINE(282)
										this->tcoord_floats = (int)0;
										HX_STACK_LINE(282)
										this->color_floats = (int)0;
										HX_STACK_LINE(282)
										this->normal_floats = (int)0;
									}
								}
								HX_STACK_LINE(284)
								int tmp27 = geom->vertices->length;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(284)
								hx::AddEq(this->vert_count,tmp27);
							}
							else{
								HX_STACK_LINE(291)
								{
									HX_STACK_LINE(291)
									int tmp27 = geom->vertices->length;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(291)
									int tmp28 = this->pos_floats;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(291)
									Float tmp29 = (Float(tmp28) / Float((int)4));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(291)
									Float tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(291)
									Float _count_after = tmp30;		HX_STACK_VAR(_count_after,"_count_after");
									HX_STACK_LINE(291)
									Float tmp31 = _count_after;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(291)
									int tmp32 = this->max_verts;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(291)
									bool tmp33 = (tmp31 > tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(291)
									if ((tmp33)){
										HX_STACK_LINE(291)
										int tmp34 = this->pos_floats;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(291)
										bool tmp35 = (tmp34 == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(291)
										if ((tmp35)){
											HX_STACK_LINE(291)
											Dynamic();
										}
										else{
											HX_STACK_LINE(291)
											int tmp36 = this->pos_floats;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(291)
											int tmp37 = this->max_floats;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(291)
											bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(291)
											if ((tmp38)){
												HX_STACK_LINE(291)
												HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
											}
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView tmp39;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(291)
											{
												HX_STACK_LINE(291)
												::snow::api::buffers::ArrayBufferView tmp40 = this->pos_list;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(291)
												::haxe::io::Bytes buffer = tmp40->buffer;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(291)
												int tmp41 = this->pos_floats;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(291)
												Dynamic len = tmp41;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(291)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(291)
												bool tmp42 = false;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(291)
												if ((tmp42)){
													HX_STACK_LINE(291)
													::snow::api::buffers::ArrayBufferView tmp43 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(291)
													this1 = tmp43;
												}
												else{
													HX_STACK_LINE(291)
													bool tmp43 = false;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(291)
													if ((tmp43)){
														HX_STACK_LINE(291)
														::snow::api::buffers::ArrayBufferView tmp44;		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(291)
														{
															HX_STACK_LINE(291)
															::snow::api::buffers::ArrayBufferView tmp45 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(291)
															::snow::api::buffers::ArrayBufferView _this = tmp45;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(291)
															_this->byteOffset = (int)0;
															HX_STACK_LINE(291)
															int tmp46 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(291)
															_this->length = tmp46;
															HX_STACK_LINE(291)
															int tmp47 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(291)
															_this->byteLength = tmp47;
															HX_STACK_LINE(291)
															::haxe::io::Bytes tmp48;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(291)
															{
																HX_STACK_LINE(291)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(291)
																int tmp49 = _this->byteLength;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(291)
																::haxe::io::Bytes tmp50 = ::haxe::io::Bytes_obj::alloc(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																this2 = tmp50;
																HX_STACK_LINE(291)
																tmp48 = this2;
															}
															HX_STACK_LINE(291)
															_this->buffer = tmp48;
															HX_STACK_LINE(291)
															_this->copyFromArray(((Array< Float >)(null())),null());
															HX_STACK_LINE(291)
															tmp44 = _this;
														}
														HX_STACK_LINE(291)
														this1 = tmp44;
													}
													else{
														HX_STACK_LINE(291)
														bool tmp44 = false;		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(291)
														if ((tmp44)){
															HX_STACK_LINE(291)
															::snow::api::buffers::ArrayBufferView tmp45;		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(291)
															{
																HX_STACK_LINE(291)
																::snow::api::buffers::ArrayBufferView tmp46 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(291)
																::snow::api::buffers::ArrayBufferView _this = tmp46;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(291)
																::haxe::io::Bytes tmp47 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(291)
																::haxe::io::Bytes srcData = tmp47;		HX_STACK_VAR(srcData,"srcData");
																HX_STACK_LINE(291)
																int tmp48 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(291)
																int srcLength = tmp48;		HX_STACK_VAR(srcLength,"srcLength");
																HX_STACK_LINE(291)
																int tmp49 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(291)
																int srcByteOffset = tmp49;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																HX_STACK_LINE(291)
																int tmp50 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																int srcElementSize = tmp50;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																HX_STACK_LINE(291)
																int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(291)
																int tmp51 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(291)
																int tmp52 = _this->type;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(291)
																bool tmp53 = (tmp51 == tmp52);		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(291)
																if ((tmp53)){
																	HX_STACK_LINE(291)
																	int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																	HX_STACK_LINE(291)
																	int tmp54 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(291)
																	int cloneLength = tmp54;		HX_STACK_VAR(cloneLength,"cloneLength");
																	HX_STACK_LINE(291)
																	::haxe::io::Bytes tmp55;		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(291)
																	{
																		HX_STACK_LINE(291)
																		::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																		HX_STACK_LINE(291)
																		int tmp56 = cloneLength;		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(291)
																		::haxe::io::Bytes tmp57 = ::haxe::io::Bytes_obj::alloc(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
																		HX_STACK_LINE(291)
																		this2 = tmp57;
																		HX_STACK_LINE(291)
																		tmp55 = this2;
																	}
																	HX_STACK_LINE(291)
																	_this->buffer = tmp55;
																	HX_STACK_LINE(291)
																	::haxe::io::Bytes tmp56 = srcData;		HX_STACK_VAR(tmp56,"tmp56");
																	HX_STACK_LINE(291)
																	int tmp57 = srcByteOffset;		HX_STACK_VAR(tmp57,"tmp57");
																	HX_STACK_LINE(291)
																	int tmp58 = cloneLength;		HX_STACK_VAR(tmp58,"tmp58");
																	HX_STACK_LINE(291)
																	_this->buffer->blit((int)0,tmp56,tmp57,tmp58);
																}
																else{
																	HX_STACK_LINE(291)
																	HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																}
																HX_STACK_LINE(291)
																int tmp54 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(291)
																_this->byteLength = tmp54;
																HX_STACK_LINE(291)
																_this->byteOffset = (int)0;
																HX_STACK_LINE(291)
																_this->length = srcLength;
																HX_STACK_LINE(291)
																tmp45 = _this;
															}
															HX_STACK_LINE(291)
															this1 = tmp45;
														}
														else{
															HX_STACK_LINE(291)
															bool tmp45 = (buffer != null());		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(291)
															if ((tmp45)){
																HX_STACK_LINE(291)
																::snow::api::buffers::ArrayBufferView tmp46;		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(291)
																{
																	HX_STACK_LINE(291)
																	::snow::api::buffers::ArrayBufferView tmp47 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp47,"tmp47");
																	HX_STACK_LINE(291)
																	::snow::api::buffers::ArrayBufferView _this = tmp47;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(291)
																	bool tmp48 = false;		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(291)
																	if ((tmp48)){
																		HX_STACK_LINE(291)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(291)
																	int tmp49 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(291)
																	bool tmp50 = (tmp49 != (int)0);		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(291)
																	if ((tmp50)){
																		HX_STACK_LINE(291)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(291)
																	int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																	HX_STACK_LINE(291)
																	int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																	HX_STACK_LINE(291)
																	int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																	HX_STACK_LINE(291)
																	bool tmp51 = (len == null());		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(291)
																	if ((tmp51)){
																		HX_STACK_LINE(291)
																		int tmp52 = bufferByteLength;		HX_STACK_VAR(tmp52,"tmp52");
																		HX_STACK_LINE(291)
																		newByteLength = tmp52;
																		HX_STACK_LINE(291)
																		int tmp53 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp53,"tmp53");
																		HX_STACK_LINE(291)
																		bool tmp54 = (tmp53 != (int)0);		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(291)
																		if ((tmp54)){
																			HX_STACK_LINE(291)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																		HX_STACK_LINE(291)
																		bool tmp55 = (newByteLength < (int)0);		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(291)
																		if ((tmp55)){
																			HX_STACK_LINE(291)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	else{
																		HX_STACK_LINE(291)
																		int tmp52 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp52,"tmp52");
																		HX_STACK_LINE(291)
																		newByteLength = tmp52;
																		HX_STACK_LINE(291)
																		int tmp53 = newByteLength;		HX_STACK_VAR(tmp53,"tmp53");
																		HX_STACK_LINE(291)
																		int newRange = tmp53;		HX_STACK_VAR(newRange,"newRange");
																		HX_STACK_LINE(291)
																		bool tmp54 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(291)
																		if ((tmp54)){
																			HX_STACK_LINE(291)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	HX_STACK_LINE(291)
																	_this->buffer = buffer;
																	HX_STACK_LINE(291)
																	_this->byteOffset = (int)0;
																	HX_STACK_LINE(291)
																	_this->byteLength = newByteLength;
																	HX_STACK_LINE(291)
																	Float tmp52 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(291)
																	int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(291)
																	_this->length = tmp53;
																	HX_STACK_LINE(291)
																	tmp46 = _this;
																}
																HX_STACK_LINE(291)
																this1 = tmp46;
															}
															else{
																HX_STACK_LINE(291)
																HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
															}
														}
													}
												}
												HX_STACK_LINE(291)
												tmp39 = this1;
											}
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView _pos = tmp39;		HX_STACK_VAR(_pos,"_pos");
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(291)
											{
												HX_STACK_LINE(291)
												::snow::api::buffers::ArrayBufferView tmp41 = this->tcoord_list;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(291)
												::haxe::io::Bytes buffer = tmp41->buffer;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(291)
												int tmp42 = this->tcoord_floats;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(291)
												Dynamic len = tmp42;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(291)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(291)
												bool tmp43 = false;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(291)
												if ((tmp43)){
													HX_STACK_LINE(291)
													::snow::api::buffers::ArrayBufferView tmp44 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(291)
													this1 = tmp44;
												}
												else{
													HX_STACK_LINE(291)
													bool tmp44 = false;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(291)
													if ((tmp44)){
														HX_STACK_LINE(291)
														::snow::api::buffers::ArrayBufferView tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(291)
														{
															HX_STACK_LINE(291)
															::snow::api::buffers::ArrayBufferView tmp46 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(291)
															::snow::api::buffers::ArrayBufferView _this = tmp46;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(291)
															_this->byteOffset = (int)0;
															HX_STACK_LINE(291)
															int tmp47 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(291)
															_this->length = tmp47;
															HX_STACK_LINE(291)
															int tmp48 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(291)
															_this->byteLength = tmp48;
															HX_STACK_LINE(291)
															::haxe::io::Bytes tmp49;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(291)
															{
																HX_STACK_LINE(291)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(291)
																int tmp50 = _this->byteLength;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																::haxe::io::Bytes tmp51 = ::haxe::io::Bytes_obj::alloc(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(291)
																this2 = tmp51;
																HX_STACK_LINE(291)
																tmp49 = this2;
															}
															HX_STACK_LINE(291)
															_this->buffer = tmp49;
															HX_STACK_LINE(291)
															_this->copyFromArray(((Array< Float >)(null())),null());
															HX_STACK_LINE(291)
															tmp45 = _this;
														}
														HX_STACK_LINE(291)
														this1 = tmp45;
													}
													else{
														HX_STACK_LINE(291)
														bool tmp45 = false;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(291)
														if ((tmp45)){
															HX_STACK_LINE(291)
															::snow::api::buffers::ArrayBufferView tmp46;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(291)
															{
																HX_STACK_LINE(291)
																::snow::api::buffers::ArrayBufferView tmp47 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(291)
																::snow::api::buffers::ArrayBufferView _this = tmp47;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(291)
																::haxe::io::Bytes tmp48 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(291)
																::haxe::io::Bytes srcData = tmp48;		HX_STACK_VAR(srcData,"srcData");
																HX_STACK_LINE(291)
																int tmp49 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(291)
																int srcLength = tmp49;		HX_STACK_VAR(srcLength,"srcLength");
																HX_STACK_LINE(291)
																int tmp50 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																int srcByteOffset = tmp50;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																HX_STACK_LINE(291)
																int tmp51 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(291)
																int srcElementSize = tmp51;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																HX_STACK_LINE(291)
																int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(291)
																int tmp52 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(291)
																int tmp53 = _this->type;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(291)
																bool tmp54 = (tmp52 == tmp53);		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(291)
																if ((tmp54)){
																	HX_STACK_LINE(291)
																	int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																	HX_STACK_LINE(291)
																	int tmp55 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(291)
																	int cloneLength = tmp55;		HX_STACK_VAR(cloneLength,"cloneLength");
																	HX_STACK_LINE(291)
																	::haxe::io::Bytes tmp56;		HX_STACK_VAR(tmp56,"tmp56");
																	HX_STACK_LINE(291)
																	{
																		HX_STACK_LINE(291)
																		::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																		HX_STACK_LINE(291)
																		int tmp57 = cloneLength;		HX_STACK_VAR(tmp57,"tmp57");
																		HX_STACK_LINE(291)
																		::haxe::io::Bytes tmp58 = ::haxe::io::Bytes_obj::alloc(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
																		HX_STACK_LINE(291)
																		this2 = tmp58;
																		HX_STACK_LINE(291)
																		tmp56 = this2;
																	}
																	HX_STACK_LINE(291)
																	_this->buffer = tmp56;
																	HX_STACK_LINE(291)
																	::haxe::io::Bytes tmp57 = srcData;		HX_STACK_VAR(tmp57,"tmp57");
																	HX_STACK_LINE(291)
																	int tmp58 = srcByteOffset;		HX_STACK_VAR(tmp58,"tmp58");
																	HX_STACK_LINE(291)
																	int tmp59 = cloneLength;		HX_STACK_VAR(tmp59,"tmp59");
																	HX_STACK_LINE(291)
																	_this->buffer->blit((int)0,tmp57,tmp58,tmp59);
																}
																else{
																	HX_STACK_LINE(291)
																	HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																}
																HX_STACK_LINE(291)
																int tmp55 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(291)
																_this->byteLength = tmp55;
																HX_STACK_LINE(291)
																_this->byteOffset = (int)0;
																HX_STACK_LINE(291)
																_this->length = srcLength;
																HX_STACK_LINE(291)
																tmp46 = _this;
															}
															HX_STACK_LINE(291)
															this1 = tmp46;
														}
														else{
															HX_STACK_LINE(291)
															bool tmp46 = (buffer != null());		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(291)
															if ((tmp46)){
																HX_STACK_LINE(291)
																::snow::api::buffers::ArrayBufferView tmp47;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(291)
																{
																	HX_STACK_LINE(291)
																	::snow::api::buffers::ArrayBufferView tmp48 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp48,"tmp48");
																	HX_STACK_LINE(291)
																	::snow::api::buffers::ArrayBufferView _this = tmp48;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(291)
																	bool tmp49 = false;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(291)
																	if ((tmp49)){
																		HX_STACK_LINE(291)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(291)
																	int tmp50 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(291)
																	bool tmp51 = (tmp50 != (int)0);		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(291)
																	if ((tmp51)){
																		HX_STACK_LINE(291)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(291)
																	int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																	HX_STACK_LINE(291)
																	int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																	HX_STACK_LINE(291)
																	int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																	HX_STACK_LINE(291)
																	bool tmp52 = (len == null());		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(291)
																	if ((tmp52)){
																		HX_STACK_LINE(291)
																		int tmp53 = bufferByteLength;		HX_STACK_VAR(tmp53,"tmp53");
																		HX_STACK_LINE(291)
																		newByteLength = tmp53;
																		HX_STACK_LINE(291)
																		int tmp54 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(291)
																		bool tmp55 = (tmp54 != (int)0);		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(291)
																		if ((tmp55)){
																			HX_STACK_LINE(291)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																		HX_STACK_LINE(291)
																		bool tmp56 = (newByteLength < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(291)
																		if ((tmp56)){
																			HX_STACK_LINE(291)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	else{
																		HX_STACK_LINE(291)
																		int tmp53 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp53,"tmp53");
																		HX_STACK_LINE(291)
																		newByteLength = tmp53;
																		HX_STACK_LINE(291)
																		int tmp54 = newByteLength;		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(291)
																		int newRange = tmp54;		HX_STACK_VAR(newRange,"newRange");
																		HX_STACK_LINE(291)
																		bool tmp55 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(291)
																		if ((tmp55)){
																			HX_STACK_LINE(291)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	HX_STACK_LINE(291)
																	_this->buffer = buffer;
																	HX_STACK_LINE(291)
																	_this->byteOffset = (int)0;
																	HX_STACK_LINE(291)
																	_this->byteLength = newByteLength;
																	HX_STACK_LINE(291)
																	Float tmp53 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(291)
																	int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(291)
																	_this->length = tmp54;
																	HX_STACK_LINE(291)
																	tmp47 = _this;
																}
																HX_STACK_LINE(291)
																this1 = tmp47;
															}
															else{
																HX_STACK_LINE(291)
																HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
															}
														}
													}
												}
												HX_STACK_LINE(291)
												tmp40 = this1;
											}
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView _tcoords = tmp40;		HX_STACK_VAR(_tcoords,"_tcoords");
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(291)
											{
												HX_STACK_LINE(291)
												::snow::api::buffers::ArrayBufferView tmp42 = this->color_list;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(291)
												::haxe::io::Bytes buffer = tmp42->buffer;		HX_STACK_VAR(buffer,"buffer");
												HX_STACK_LINE(291)
												int tmp43 = this->color_floats;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(291)
												Dynamic len = tmp43;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(291)
												::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(291)
												bool tmp44 = false;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(291)
												if ((tmp44)){
													HX_STACK_LINE(291)
													::snow::api::buffers::ArrayBufferView tmp45 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(291)
													this1 = tmp45;
												}
												else{
													HX_STACK_LINE(291)
													bool tmp45 = false;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(291)
													if ((tmp45)){
														HX_STACK_LINE(291)
														::snow::api::buffers::ArrayBufferView tmp46;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(291)
														{
															HX_STACK_LINE(291)
															::snow::api::buffers::ArrayBufferView tmp47 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(291)
															::snow::api::buffers::ArrayBufferView _this = tmp47;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(291)
															_this->byteOffset = (int)0;
															HX_STACK_LINE(291)
															int tmp48 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(291)
															_this->length = tmp48;
															HX_STACK_LINE(291)
															int tmp49 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(291)
															_this->byteLength = tmp49;
															HX_STACK_LINE(291)
															::haxe::io::Bytes tmp50;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(291)
															{
																HX_STACK_LINE(291)
																::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																HX_STACK_LINE(291)
																int tmp51 = _this->byteLength;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(291)
																::haxe::io::Bytes tmp52 = ::haxe::io::Bytes_obj::alloc(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(291)
																this2 = tmp52;
																HX_STACK_LINE(291)
																tmp50 = this2;
															}
															HX_STACK_LINE(291)
															_this->buffer = tmp50;
															HX_STACK_LINE(291)
															_this->copyFromArray(((Array< Float >)(null())),null());
															HX_STACK_LINE(291)
															tmp46 = _this;
														}
														HX_STACK_LINE(291)
														this1 = tmp46;
													}
													else{
														HX_STACK_LINE(291)
														bool tmp46 = false;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(291)
														if ((tmp46)){
															HX_STACK_LINE(291)
															::snow::api::buffers::ArrayBufferView tmp47;		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(291)
															{
																HX_STACK_LINE(291)
																::snow::api::buffers::ArrayBufferView tmp48 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(291)
																::snow::api::buffers::ArrayBufferView _this = tmp48;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(291)
																::haxe::io::Bytes tmp49 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(291)
																::haxe::io::Bytes srcData = tmp49;		HX_STACK_VAR(srcData,"srcData");
																HX_STACK_LINE(291)
																int tmp50 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																int srcLength = tmp50;		HX_STACK_VAR(srcLength,"srcLength");
																HX_STACK_LINE(291)
																int tmp51 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(291)
																int srcByteOffset = tmp51;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
																HX_STACK_LINE(291)
																int tmp52 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(291)
																int srcElementSize = tmp52;		HX_STACK_VAR(srcElementSize,"srcElementSize");
																HX_STACK_LINE(291)
																int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																HX_STACK_LINE(291)
																int tmp53 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(291)
																int tmp54 = _this->type;		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(291)
																bool tmp55 = (tmp53 == tmp54);		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(291)
																if ((tmp55)){
																	HX_STACK_LINE(291)
																	int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
																	HX_STACK_LINE(291)
																	int tmp56 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp56,"tmp56");
																	HX_STACK_LINE(291)
																	int cloneLength = tmp56;		HX_STACK_VAR(cloneLength,"cloneLength");
																	HX_STACK_LINE(291)
																	::haxe::io::Bytes tmp57;		HX_STACK_VAR(tmp57,"tmp57");
																	HX_STACK_LINE(291)
																	{
																		HX_STACK_LINE(291)
																		::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
																		HX_STACK_LINE(291)
																		int tmp58 = cloneLength;		HX_STACK_VAR(tmp58,"tmp58");
																		HX_STACK_LINE(291)
																		::haxe::io::Bytes tmp59 = ::haxe::io::Bytes_obj::alloc(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
																		HX_STACK_LINE(291)
																		this2 = tmp59;
																		HX_STACK_LINE(291)
																		tmp57 = this2;
																	}
																	HX_STACK_LINE(291)
																	_this->buffer = tmp57;
																	HX_STACK_LINE(291)
																	::haxe::io::Bytes tmp58 = srcData;		HX_STACK_VAR(tmp58,"tmp58");
																	HX_STACK_LINE(291)
																	int tmp59 = srcByteOffset;		HX_STACK_VAR(tmp59,"tmp59");
																	HX_STACK_LINE(291)
																	int tmp60 = cloneLength;		HX_STACK_VAR(tmp60,"tmp60");
																	HX_STACK_LINE(291)
																	_this->buffer->blit((int)0,tmp58,tmp59,tmp60);
																}
																else{
																	HX_STACK_LINE(291)
																	HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
																}
																HX_STACK_LINE(291)
																int tmp56 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp56,"tmp56");
																HX_STACK_LINE(291)
																_this->byteLength = tmp56;
																HX_STACK_LINE(291)
																_this->byteOffset = (int)0;
																HX_STACK_LINE(291)
																_this->length = srcLength;
																HX_STACK_LINE(291)
																tmp47 = _this;
															}
															HX_STACK_LINE(291)
															this1 = tmp47;
														}
														else{
															HX_STACK_LINE(291)
															bool tmp47 = (buffer != null());		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(291)
															if ((tmp47)){
																HX_STACK_LINE(291)
																::snow::api::buffers::ArrayBufferView tmp48;		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(291)
																{
																	HX_STACK_LINE(291)
																	::snow::api::buffers::ArrayBufferView tmp49 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(291)
																	::snow::api::buffers::ArrayBufferView _this = tmp49;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(291)
																	bool tmp50 = false;		HX_STACK_VAR(tmp50,"tmp50");
																	HX_STACK_LINE(291)
																	if ((tmp50)){
																		HX_STACK_LINE(291)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(291)
																	int tmp51 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(291)
																	bool tmp52 = (tmp51 != (int)0);		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(291)
																	if ((tmp52)){
																		HX_STACK_LINE(291)
																		HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																	}
																	HX_STACK_LINE(291)
																	int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
																	HX_STACK_LINE(291)
																	int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
																	HX_STACK_LINE(291)
																	int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
																	HX_STACK_LINE(291)
																	bool tmp53 = (len == null());		HX_STACK_VAR(tmp53,"tmp53");
																	HX_STACK_LINE(291)
																	if ((tmp53)){
																		HX_STACK_LINE(291)
																		int tmp54 = bufferByteLength;		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(291)
																		newByteLength = tmp54;
																		HX_STACK_LINE(291)
																		int tmp55 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(291)
																		bool tmp56 = (tmp55 != (int)0);		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(291)
																		if ((tmp56)){
																			HX_STACK_LINE(291)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																		HX_STACK_LINE(291)
																		bool tmp57 = (newByteLength < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
																		HX_STACK_LINE(291)
																		if ((tmp57)){
																			HX_STACK_LINE(291)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	else{
																		HX_STACK_LINE(291)
																		int tmp54 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp54,"tmp54");
																		HX_STACK_LINE(291)
																		newByteLength = tmp54;
																		HX_STACK_LINE(291)
																		int tmp55 = newByteLength;		HX_STACK_VAR(tmp55,"tmp55");
																		HX_STACK_LINE(291)
																		int newRange = tmp55;		HX_STACK_VAR(newRange,"newRange");
																		HX_STACK_LINE(291)
																		bool tmp56 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp56,"tmp56");
																		HX_STACK_LINE(291)
																		if ((tmp56)){
																			HX_STACK_LINE(291)
																			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
																		}
																	}
																	HX_STACK_LINE(291)
																	_this->buffer = buffer;
																	HX_STACK_LINE(291)
																	_this->byteOffset = (int)0;
																	HX_STACK_LINE(291)
																	_this->byteLength = newByteLength;
																	HX_STACK_LINE(291)
																	Float tmp54 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp54,"tmp54");
																	HX_STACK_LINE(291)
																	int tmp55 = ::Std_obj::_int(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
																	HX_STACK_LINE(291)
																	_this->length = tmp55;
																	HX_STACK_LINE(291)
																	tmp48 = _this;
																}
																HX_STACK_LINE(291)
																this1 = tmp48;
															}
															else{
																HX_STACK_LINE(291)
																HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
															}
														}
													}
												}
												HX_STACK_LINE(291)
												tmp41 = this1;
											}
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView _colors = tmp41;		HX_STACK_VAR(_colors,"_colors");
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
											HX_STACK_LINE(291)
											int tmp42 = geom->state->primitive_type;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView tmp43 = _pos;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView tmp44 = _tcoords;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView tmp45 = _colors;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(291)
											::snow::api::buffers::ArrayBufferView tmp46 = _normals;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(291)
											this->submit_buffers(tmp42,tmp43,tmp44,tmp45,tmp46);
											HX_STACK_LINE(291)
											_pos = null();
											HX_STACK_LINE(291)
											_tcoords = null();
											HX_STACK_LINE(291)
											_colors = null();
											HX_STACK_LINE(291)
											_normals = null();
											HX_STACK_LINE(291)
											this->pos_floats = (int)0;
											HX_STACK_LINE(291)
											this->tcoord_floats = (int)0;
											HX_STACK_LINE(291)
											this->color_floats = (int)0;
											HX_STACK_LINE(291)
											this->normal_floats = (int)0;
										}
									}
									HX_STACK_LINE(291)
									{
										HX_STACK_LINE(291)
										int tmp34 = this->pos_floats;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(291)
										int vert_index = tmp34;		HX_STACK_VAR(vert_index,"vert_index");
										HX_STACK_LINE(291)
										int tmp35 = this->tcoord_floats;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(291)
										int tcoord_index = tmp35;		HX_STACK_VAR(tcoord_index,"tcoord_index");
										HX_STACK_LINE(291)
										int tmp36 = this->color_floats;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(291)
										int color_index = tmp36;		HX_STACK_VAR(color_index,"color_index");
										HX_STACK_LINE(291)
										int tmp37 = this->normal_floats;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(291)
										int normal_index = tmp37;		HX_STACK_VAR(normal_index,"normal_index");
										HX_STACK_LINE(291)
										::snow::api::buffers::ArrayBufferView tmp38 = this->pos_list;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(291)
										::snow::api::buffers::ArrayBufferView vertlist = tmp38;		HX_STACK_VAR(vertlist,"vertlist");
										HX_STACK_LINE(291)
										::snow::api::buffers::ArrayBufferView tmp39 = this->tcoord_list;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(291)
										::snow::api::buffers::ArrayBufferView tcoordlist = tmp39;		HX_STACK_VAR(tcoordlist,"tcoordlist");
										HX_STACK_LINE(291)
										::snow::api::buffers::ArrayBufferView tmp40 = this->color_list;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(291)
										::snow::api::buffers::ArrayBufferView colorlist = tmp40;		HX_STACK_VAR(colorlist,"colorlist");
										HX_STACK_LINE(291)
										{
											HX_STACK_LINE(291)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(291)
											Array< ::Dynamic > _g11 = geom->vertices;		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(291)
											while((true)){
												HX_STACK_LINE(291)
												bool tmp41 = (_g1 < _g11->length);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(291)
												bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(291)
												if ((tmp42)){
													HX_STACK_LINE(291)
													break;
												}
												HX_STACK_LINE(291)
												::phoenix::geometry::Vertex tmp43 = _g11->__get(_g1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(291)
												::phoenix::geometry::Vertex v = tmp43;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(291)
												++(_g1);
												HX_STACK_LINE(291)
												{
													HX_STACK_LINE(291)
													::phoenix::Vector _this = geom->_final_vert_position;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(291)
													Float tmp44 = v->pos->x;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(291)
													Float _x = tmp44;		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(291)
													Float tmp45 = v->pos->y;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(291)
													Float _y = tmp45;		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(291)
													Float tmp46 = v->pos->z;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(291)
													Float _z = tmp46;		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(291)
													bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
													HX_STACK_LINE(291)
													_this->ignore_listeners = true;
													HX_STACK_LINE(291)
													{
														HX_STACK_LINE(291)
														_this->x = _x;
														HX_STACK_LINE(291)
														bool tmp47 = _this->_construct;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(291)
														if ((tmp47)){
															HX_STACK_LINE(291)
															_this->x;
														}
														else{
															HX_STACK_LINE(291)
															bool tmp48 = (_this->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(291)
															bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(291)
															if ((tmp48)){
																HX_STACK_LINE(291)
																bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(291)
																tmp49 = !(tmp51);
															}
															else{
																HX_STACK_LINE(291)
																tmp49 = false;
															}
															HX_STACK_LINE(291)
															if ((tmp49)){
																HX_STACK_LINE(291)
																Float tmp50 = _x;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																_this->listen_x(tmp50);
															}
															HX_STACK_LINE(291)
															_this->x;
														}
													}
													HX_STACK_LINE(291)
													{
														HX_STACK_LINE(291)
														_this->y = _y;
														HX_STACK_LINE(291)
														bool tmp47 = _this->_construct;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(291)
														if ((tmp47)){
															HX_STACK_LINE(291)
															_this->y;
														}
														else{
															HX_STACK_LINE(291)
															bool tmp48 = (_this->listen_y != null());		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(291)
															bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(291)
															if ((tmp48)){
																HX_STACK_LINE(291)
																bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(291)
																tmp49 = !(tmp51);
															}
															else{
																HX_STACK_LINE(291)
																tmp49 = false;
															}
															HX_STACK_LINE(291)
															if ((tmp49)){
																HX_STACK_LINE(291)
																Float tmp50 = _y;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																_this->listen_y(tmp50);
															}
															HX_STACK_LINE(291)
															_this->y;
														}
													}
													HX_STACK_LINE(291)
													{
														HX_STACK_LINE(291)
														_this->z = _z;
														HX_STACK_LINE(291)
														bool tmp47 = _this->_construct;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(291)
														if ((tmp47)){
															HX_STACK_LINE(291)
															_this->z;
														}
														else{
															HX_STACK_LINE(291)
															bool tmp48 = (_this->listen_z != null());		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(291)
															bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(291)
															if ((tmp48)){
																HX_STACK_LINE(291)
																bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(291)
																tmp49 = !(tmp51);
															}
															else{
																HX_STACK_LINE(291)
																tmp49 = false;
															}
															HX_STACK_LINE(291)
															if ((tmp49)){
																HX_STACK_LINE(291)
																Float tmp50 = _z;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																_this->listen_z(tmp50);
															}
															HX_STACK_LINE(291)
															_this->z;
														}
													}
													HX_STACK_LINE(291)
													Float tmp47 = v->pos->w;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(291)
													_this->w = tmp47;
													HX_STACK_LINE(291)
													_this->ignore_listeners = prev;
													HX_STACK_LINE(291)
													bool tmp48 = (_this->listen_x != null());		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(291)
													bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(291)
													if ((tmp48)){
														HX_STACK_LINE(291)
														bool tmp50 = _this->ignore_listeners;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(291)
														bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(291)
														tmp49 = !(tmp51);
													}
													else{
														HX_STACK_LINE(291)
														tmp49 = false;
													}
													HX_STACK_LINE(291)
													if ((tmp49)){
														HX_STACK_LINE(291)
														Float tmp50 = _this->x;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(291)
														_this->listen_x(tmp50);
													}
													HX_STACK_LINE(291)
													bool tmp50 = (_this->listen_y != null());		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(291)
													bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(291)
													if ((tmp50)){
														HX_STACK_LINE(291)
														bool tmp52 = _this->ignore_listeners;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(291)
														bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(291)
														tmp51 = !(tmp53);
													}
													else{
														HX_STACK_LINE(291)
														tmp51 = false;
													}
													HX_STACK_LINE(291)
													if ((tmp51)){
														HX_STACK_LINE(291)
														Float tmp52 = _this->y;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(291)
														_this->listen_y(tmp52);
													}
													HX_STACK_LINE(291)
													bool tmp52 = (_this->listen_z != null());		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(291)
													bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(291)
													if ((tmp52)){
														HX_STACK_LINE(291)
														bool tmp54 = _this->ignore_listeners;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(291)
														bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(291)
														tmp53 = !(tmp55);
													}
													else{
														HX_STACK_LINE(291)
														tmp53 = false;
													}
													HX_STACK_LINE(291)
													if ((tmp53)){
														HX_STACK_LINE(291)
														Float tmp54 = _this->z;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(291)
														_this->listen_z(tmp54);
													}
													HX_STACK_LINE(291)
													_this;
												}
												HX_STACK_LINE(291)
												{
													HX_STACK_LINE(291)
													::phoenix::Vector _this = geom->_final_vert_position;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(291)
													::phoenix::Matrix tmp44;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(291)
													{
														HX_STACK_LINE(291)
														::phoenix::Spatial tmp45;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(291)
														{
															HX_STACK_LINE(291)
															::phoenix::Transform _this1 = geom->transform;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(291)
															bool tmp46 = _this1->_destroying;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(291)
															bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(291)
															if ((tmp47)){
																HX_STACK_LINE(291)
																bool tmp48 = (_this1->parent != null());		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(291)
																if ((tmp48)){
																	HX_STACK_LINE(291)
																	bool tmp49 = _this1->parent->dirty;		HX_STACK_VAR(tmp49,"tmp49");
																	HX_STACK_LINE(291)
																	if ((tmp49)){
																		HX_STACK_LINE(291)
																		_this1->parent->clean();
																	}
																}
																HX_STACK_LINE(291)
																bool tmp49 = _this1->dirty;		HX_STACK_VAR(tmp49,"tmp49");
																HX_STACK_LINE(291)
																bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
																HX_STACK_LINE(291)
																if ((tmp49)){
																	HX_STACK_LINE(291)
																	bool tmp51 = _this1->_cleaning;		HX_STACK_VAR(tmp51,"tmp51");
																	HX_STACK_LINE(291)
																	bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
																	HX_STACK_LINE(291)
																	tmp50 = !(tmp52);
																}
																else{
																	HX_STACK_LINE(291)
																	tmp50 = false;
																}
																HX_STACK_LINE(291)
																if ((tmp50)){
																	HX_STACK_LINE(291)
																	_this1->clean();
																}
															}
															HX_STACK_LINE(291)
															tmp45 = _this1->world;
														}
														HX_STACK_LINE(291)
														::phoenix::Spatial _this1 = tmp45;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(291)
														tmp44 = _this1->matrix;
													}
													HX_STACK_LINE(291)
													::phoenix::Matrix _m = tmp44;		HX_STACK_VAR(_m,"_m");
													HX_STACK_LINE(291)
													Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
													HX_STACK_LINE(291)
													Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
													HX_STACK_LINE(291)
													Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
													HX_STACK_LINE(291)
													Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
													HX_STACK_LINE(291)
													{
														HX_STACK_LINE(291)
														Float tmp45 = e->__get((int)0);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(291)
														Float tmp46 = _x;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(291)
														Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(291)
														Float tmp48 = e->__get((int)4);		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(291)
														Float tmp49 = _y;		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(291)
														Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(291)
														Float tmp51 = (tmp47 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(291)
														Float tmp52 = e->__get((int)8);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(291)
														Float tmp53 = _z;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(291)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(291)
														Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(291)
														Float tmp56 = e->__get((int)12);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(291)
														Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(291)
														Float _x1 = tmp57;		HX_STACK_VAR(_x1,"_x1");
														HX_STACK_LINE(291)
														Float tmp58 = e->__get((int)1);		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(291)
														Float tmp59 = _x;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(291)
														Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(291)
														Float tmp61 = e->__get((int)5);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(291)
														Float tmp62 = _y;		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(291)
														Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(291)
														Float tmp64 = (tmp60 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(291)
														Float tmp65 = e->__get((int)9);		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(291)
														Float tmp66 = _z;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(291)
														Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(291)
														Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(291)
														Float tmp69 = e->__get((int)13);		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(291)
														Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(291)
														Float _y1 = tmp70;		HX_STACK_VAR(_y1,"_y1");
														HX_STACK_LINE(291)
														Float tmp71 = e->__get((int)2);		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(291)
														Float tmp72 = _x;		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(291)
														Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(291)
														Float tmp74 = e->__get((int)6);		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(291)
														Float tmp75 = _y;		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(291)
														Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(291)
														Float tmp77 = (tmp73 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(291)
														Float tmp78 = e->__get((int)10);		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(291)
														Float tmp79 = _z;		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(291)
														Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(291)
														Float tmp81 = (tmp77 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(291)
														Float tmp82 = e->__get((int)14);		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(291)
														Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(291)
														Float _z1 = tmp83;		HX_STACK_VAR(_z1,"_z1");
														HX_STACK_LINE(291)
														bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
														HX_STACK_LINE(291)
														_this->ignore_listeners = true;
														HX_STACK_LINE(291)
														{
															HX_STACK_LINE(291)
															_this->x = _x1;
															HX_STACK_LINE(291)
															bool tmp84 = _this->_construct;		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(291)
															if ((tmp84)){
																HX_STACK_LINE(291)
																_this->x;
															}
															else{
																HX_STACK_LINE(291)
																bool tmp85 = (_this->listen_x != null());		HX_STACK_VAR(tmp85,"tmp85");
																HX_STACK_LINE(291)
																bool tmp86;		HX_STACK_VAR(tmp86,"tmp86");
																HX_STACK_LINE(291)
																if ((tmp85)){
																	HX_STACK_LINE(291)
																	bool tmp87 = _this->ignore_listeners;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(291)
																	bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
																	HX_STACK_LINE(291)
																	tmp86 = !(tmp88);
																}
																else{
																	HX_STACK_LINE(291)
																	tmp86 = false;
																}
																HX_STACK_LINE(291)
																if ((tmp86)){
																	HX_STACK_LINE(291)
																	Float tmp87 = _x1;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(291)
																	_this->listen_x(tmp87);
																}
																HX_STACK_LINE(291)
																_this->x;
															}
														}
														HX_STACK_LINE(291)
														{
															HX_STACK_LINE(291)
															_this->y = _y1;
															HX_STACK_LINE(291)
															bool tmp84 = _this->_construct;		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(291)
															if ((tmp84)){
																HX_STACK_LINE(291)
																_this->y;
															}
															else{
																HX_STACK_LINE(291)
																bool tmp85 = (_this->listen_y != null());		HX_STACK_VAR(tmp85,"tmp85");
																HX_STACK_LINE(291)
																bool tmp86;		HX_STACK_VAR(tmp86,"tmp86");
																HX_STACK_LINE(291)
																if ((tmp85)){
																	HX_STACK_LINE(291)
																	bool tmp87 = _this->ignore_listeners;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(291)
																	bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
																	HX_STACK_LINE(291)
																	tmp86 = !(tmp88);
																}
																else{
																	HX_STACK_LINE(291)
																	tmp86 = false;
																}
																HX_STACK_LINE(291)
																if ((tmp86)){
																	HX_STACK_LINE(291)
																	Float tmp87 = _y1;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(291)
																	_this->listen_y(tmp87);
																}
																HX_STACK_LINE(291)
																_this->y;
															}
														}
														HX_STACK_LINE(291)
														{
															HX_STACK_LINE(291)
															_this->z = _z1;
															HX_STACK_LINE(291)
															bool tmp84 = _this->_construct;		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(291)
															if ((tmp84)){
																HX_STACK_LINE(291)
																_this->z;
															}
															else{
																HX_STACK_LINE(291)
																bool tmp85 = (_this->listen_z != null());		HX_STACK_VAR(tmp85,"tmp85");
																HX_STACK_LINE(291)
																bool tmp86;		HX_STACK_VAR(tmp86,"tmp86");
																HX_STACK_LINE(291)
																if ((tmp85)){
																	HX_STACK_LINE(291)
																	bool tmp87 = _this->ignore_listeners;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(291)
																	bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
																	HX_STACK_LINE(291)
																	tmp86 = !(tmp88);
																}
																else{
																	HX_STACK_LINE(291)
																	tmp86 = false;
																}
																HX_STACK_LINE(291)
																if ((tmp86)){
																	HX_STACK_LINE(291)
																	Float tmp87 = _z1;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(291)
																	_this->listen_z(tmp87);
																}
																HX_STACK_LINE(291)
																_this->z;
															}
														}
														HX_STACK_LINE(291)
														_this->ignore_listeners = prev;
														HX_STACK_LINE(291)
														bool tmp84 = (_this->listen_x != null());		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(291)
														bool tmp85;		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(291)
														if ((tmp84)){
															HX_STACK_LINE(291)
															bool tmp86 = _this->ignore_listeners;		HX_STACK_VAR(tmp86,"tmp86");
															HX_STACK_LINE(291)
															bool tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
															HX_STACK_LINE(291)
															tmp85 = !(tmp87);
														}
														else{
															HX_STACK_LINE(291)
															tmp85 = false;
														}
														HX_STACK_LINE(291)
														if ((tmp85)){
															HX_STACK_LINE(291)
															Float tmp86 = _this->x;		HX_STACK_VAR(tmp86,"tmp86");
															HX_STACK_LINE(291)
															_this->listen_x(tmp86);
														}
														HX_STACK_LINE(291)
														bool tmp86 = (_this->listen_y != null());		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(291)
														bool tmp87;		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(291)
														if ((tmp86)){
															HX_STACK_LINE(291)
															bool tmp88 = _this->ignore_listeners;		HX_STACK_VAR(tmp88,"tmp88");
															HX_STACK_LINE(291)
															bool tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
															HX_STACK_LINE(291)
															tmp87 = !(tmp89);
														}
														else{
															HX_STACK_LINE(291)
															tmp87 = false;
														}
														HX_STACK_LINE(291)
														if ((tmp87)){
															HX_STACK_LINE(291)
															Float tmp88 = _this->y;		HX_STACK_VAR(tmp88,"tmp88");
															HX_STACK_LINE(291)
															_this->listen_y(tmp88);
														}
														HX_STACK_LINE(291)
														bool tmp88 = (_this->listen_z != null());		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(291)
														bool tmp89;		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(291)
														if ((tmp88)){
															HX_STACK_LINE(291)
															bool tmp90 = _this->ignore_listeners;		HX_STACK_VAR(tmp90,"tmp90");
															HX_STACK_LINE(291)
															bool tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
															HX_STACK_LINE(291)
															tmp89 = !(tmp91);
														}
														else{
															HX_STACK_LINE(291)
															tmp89 = false;
														}
														HX_STACK_LINE(291)
														if ((tmp89)){
															HX_STACK_LINE(291)
															Float tmp90 = _this->z;		HX_STACK_VAR(tmp90,"tmp90");
															HX_STACK_LINE(291)
															_this->listen_z(tmp90);
														}
														HX_STACK_LINE(291)
														_this;
													}
													HX_STACK_LINE(291)
													_this;
												}
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (vert_index * (int)4)),geom->_final_vert_position->x);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),geom->_final_vert_position->y);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),geom->_final_vert_position->z);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),geom->_final_vert_position->w);
												HX_STACK_LINE(291)
												hx::AddEq(vert_index,(int)4);
												HX_STACK_LINE(291)
												::phoenix::geometry::TextureCoord tmp44 = v->uv->uv0;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(291)
												::phoenix::geometry::TextureCoord _vuv = tmp44;		HX_STACK_VAR(_vuv,"_vuv");
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
												HX_STACK_LINE(291)
												hx::AddEq(tcoord_index,(int)4);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
												HX_STACK_LINE(291)
												::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
												HX_STACK_LINE(291)
												hx::AddEq(color_index,(int)4);
												HX_STACK_LINE(291)
												hx::AddEq(normal_index,(int)4);
											}
										}
									}
									HX_STACK_LINE(291)
									int tmp34 = geom->vertices->length;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(291)
									int tmp35 = (tmp34 * (int)4);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(291)
									int _length = tmp35;		HX_STACK_VAR(_length,"_length");
									HX_STACK_LINE(291)
									hx::AddEq(this->pos_floats,_length);
									HX_STACK_LINE(291)
									hx::AddEq(this->tcoord_floats,_length);
									HX_STACK_LINE(291)
									hx::AddEq(this->color_floats,_length);
									HX_STACK_LINE(291)
									hx::AddEq(this->normal_floats,_length);
								}
								HX_STACK_LINE(294)
								(this->dynamic_batched_count)++;
								HX_STACK_LINE(295)
								int tmp27 = geom->vertices->length;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(295)
								hx::AddEq(this->vert_count,tmp27);
							}
						}
						HX_STACK_LINE(302)
						bool tmp17 = persist_immediate;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(302)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(302)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(302)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(302)
						if ((tmp19)){
							HX_STACK_LINE(302)
							tmp20 = geom->immediate;
						}
						else{
							HX_STACK_LINE(302)
							tmp20 = false;
						}
						HX_STACK_LINE(302)
						if ((tmp20)){
							HX_STACK_LINE(304)
							geom->dropped = true;
							HX_STACK_LINE(306)
							::phoenix::geometry::Geometry tmp21 = geom;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(306)
							this->_dropped->push(tmp21);
						}
					}
				}
			}
		}
		HX_STACK_LINE(316)
		int tmp1 = this->pos_floats;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(316)
		if ((tmp2)){
			HX_STACK_LINE(316)
			tmp3 = (geom != null());
		}
		else{
			HX_STACK_LINE(316)
			tmp3 = false;
		}
		HX_STACK_LINE(316)
		if ((tmp3)){
			HX_STACK_LINE(319)
			::phoenix::BatchState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(319)
			::phoenix::geometry::Geometry tmp5 = geom;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(319)
			tmp4->update(tmp5);
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				::phoenix::BatchState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(321)
				::phoenix::BatchState _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(321)
				bool tmp7 = _this->geom_state->dirty;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(321)
				if ((tmp7)){
					HX_STACK_LINE(321)
					::phoenix::Texture tmp8 = _this->geom_state->texture;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(321)
					bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(321)
					if ((tmp9)){
						HX_STACK_LINE(321)
						Dynamic tmp10 = _this->last_texture_id;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(321)
						::phoenix::Texture tmp11 = _this->geom_state->texture;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(321)
						::String tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(321)
						bool tmp13 = (tmp10 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(321)
						if ((tmp13)){
							HX_STACK_LINE(321)
							::phoenix::Texture tmp14 = _this->geom_state->texture;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(321)
							_this->last_texture_id = tmp14->id;
							HX_STACK_LINE(321)
							::phoenix::Texture tmp15 = _this->geom_state->texture;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(321)
							::snow::modules::opengl::native::GLTO tmp16 = tmp15->texture;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(321)
							bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(321)
							if ((tmp17)){
								HX_STACK_LINE(321)
								::phoenix::Texture tmp18 = _this->geom_state->texture;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(321)
								tmp18->bind();
							}
						}
					}
					else{
						HX_STACK_LINE(321)
						::phoenix::Renderer tmp10 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(321)
						tmp10->state->bindTexture2D(null());
						HX_STACK_LINE(321)
						_this->last_texture_id = null();
					}
					HX_STACK_LINE(321)
					::phoenix::Shader tmp10 = this->shader;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(321)
					bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(321)
					::phoenix::Shader tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(321)
					if ((tmp11)){
						HX_STACK_LINE(321)
						tmp12 = _this->geom_state->shader;
					}
					else{
						HX_STACK_LINE(321)
						tmp12 = this->shader;
					}
					HX_STACK_LINE(321)
					::phoenix::Shader _shader = tmp12;		HX_STACK_VAR(_shader,"_shader");
					HX_STACK_LINE(321)
					bool tmp13 = (_shader == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(321)
					if ((tmp13)){
						HX_STACK_LINE(321)
						::phoenix::Texture tmp14 = _this->geom_state->texture;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(321)
						bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(321)
						if ((tmp15)){
							HX_STACK_LINE(321)
							::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(321)
							Dynamic tmp17 = tmp16->shaders->__Field(HX_HCSTRING("textured","\x29","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(321)
							_shader = tmp17->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
						}
						else{
							HX_STACK_LINE(321)
							::phoenix::Renderer tmp16 = this->renderer;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(321)
							Dynamic tmp17 = tmp16->shaders->__Field(HX_HCSTRING("plain","\x0a","\xfa","\x8d","\xc4"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(321)
							_shader = tmp17->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic );
						}
					}
					HX_STACK_LINE(321)
					::snow::modules::opengl::native::GLPO tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(321)
					{
						HX_STACK_LINE(321)
						Dynamic tmp15 = _this->last_shader_id;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(321)
						int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(321)
						int _id = tmp16;		HX_STACK_VAR(_id,"_id");
						HX_STACK_LINE(321)
						::snow::modules::opengl::native::GLPO tmp17 = ::snow::modules::opengl::native::GLPO_obj::__new(_id);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(321)
						tmp14 = tmp17;
					}
					HX_STACK_LINE(321)
					::snow::modules::opengl::native::GLPO tmp15 = _shader->program;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(321)
					bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(321)
					if ((tmp16)){
						HX_STACK_LINE(321)
						{
							HX_STACK_LINE(321)
							bool tmp17 = _shader->no_default_uniforms;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(321)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(321)
							if ((tmp18)){
								HX_STACK_LINE(321)
								{
									HX_STACK_LINE(321)
									::phoenix::Camera tmp19 = this->view;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(321)
									::snow::api::buffers::ArrayBufferView _value = tmp19->proj_arr;		HX_STACK_VAR(_value,"_value");
									HX_STACK_LINE(321)
									{
										HX_STACK_LINE(321)
										::phoenix::Uniforms _this1 = _shader->uniforms;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(321)
										int tmp20 = _shader->program->id;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(321)
										Dynamic tmp21 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp20,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(321)
										Dynamic _location = tmp21;		HX_STACK_VAR(_location,"_location");
										HX_STACK_LINE(321)
										::phoenix::Uniform tmp22 = _this1->matrix4arrs->get(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(321)
										::phoenix::Uniform _matrix4 = tmp22;		HX_STACK_VAR(_matrix4,"_matrix4");
										HX_STACK_LINE(321)
										bool tmp23 = (_matrix4 != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(321)
										if ((tmp23)){
											HX_STACK_LINE(321)
											_matrix4->value = _value;
										}
										else{
											HX_STACK_LINE(321)
											::phoenix::Uniform tmp24 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),_value,_location);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(321)
											_matrix4 = tmp24;
											HX_STACK_LINE(321)
											::phoenix::Uniform tmp25 = _matrix4;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(321)
											_this1->matrix4arrs->set(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),tmp25);
										}
										HX_STACK_LINE(321)
										::phoenix::Uniform tmp24 = _matrix4;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(321)
										_this1->dirty_matrix4arrs->push(tmp24);
									}
								}
								HX_STACK_LINE(321)
								{
									HX_STACK_LINE(321)
									::phoenix::Camera tmp19 = this->view;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(321)
									::snow::api::buffers::ArrayBufferView _value = tmp19->view_inverse_arr;		HX_STACK_VAR(_value,"_value");
									HX_STACK_LINE(321)
									{
										HX_STACK_LINE(321)
										::phoenix::Uniforms _this1 = _shader->uniforms;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(321)
										int tmp20 = _shader->program->id;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(321)
										Dynamic tmp21 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp20,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(321)
										Dynamic _location = tmp21;		HX_STACK_VAR(_location,"_location");
										HX_STACK_LINE(321)
										::phoenix::Uniform tmp22 = _this1->matrix4arrs->get(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(321)
										::phoenix::Uniform _matrix4 = tmp22;		HX_STACK_VAR(_matrix4,"_matrix4");
										HX_STACK_LINE(321)
										bool tmp23 = (_matrix4 != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(321)
										if ((tmp23)){
											HX_STACK_LINE(321)
											_matrix4->value = _value;
										}
										else{
											HX_STACK_LINE(321)
											::phoenix::Uniform tmp24 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),_value,_location);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(321)
											_matrix4 = tmp24;
											HX_STACK_LINE(321)
											::phoenix::Uniform tmp25 = _matrix4;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(321)
											_this1->matrix4arrs->set(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),tmp25);
										}
										HX_STACK_LINE(321)
										::phoenix::Uniform tmp24 = _matrix4;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(321)
										_this1->dirty_matrix4arrs->push(tmp24);
									}
								}
							}
						}
						HX_STACK_LINE(321)
						{
							HX_STACK_LINE(321)
							_shader->use();
							HX_STACK_LINE(321)
							_shader->uniforms->apply();
							HX_STACK_LINE(321)
							::phoenix::Renderer tmp17 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(321)
							tmp17->state->activeTexture((int)33984);
						}
						HX_STACK_LINE(321)
						_this->last_shader_id = _shader->program;
					}
				}
				HX_STACK_LINE(321)
				bool tmp8 = _this->geom_state->clip;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(321)
				if ((tmp8)){
					HX_STACK_LINE(321)
					bool tmp9 = _this->is_clipping;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(321)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(321)
					if ((tmp10)){
						HX_STACK_LINE(321)
						::snow::modules::opengl::native::GL_FFI_obj::snow_gl_enable((int)3089);
						HX_STACK_LINE(321)
						_this->is_clipping = true;
					}
					HX_STACK_LINE(321)
					bool tmp11 = (_this->clip_rect != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(321)
					if ((tmp11)){
						HX_STACK_LINE(321)
						::phoenix::Rectangle tmp12 = _this->last_clip_rect;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(321)
						bool tmp13 = _this->clip_rect->equal(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(321)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(321)
						if ((tmp14)){
							HX_STACK_LINE(321)
							::phoenix::Camera tmp15 = this->view;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(321)
							::phoenix::Rectangle tmp16 = tmp15->get_viewport();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(321)
							Float tmp17 = tmp16->h;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(321)
							Float tmp18 = _this->clip_rect->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(321)
							Float tmp19 = _this->clip_rect->h;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(321)
							Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(321)
							Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(321)
							Float _y = tmp21;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(321)
							{
								HX_STACK_LINE(321)
								Float tmp22 = _this->clip_rect->x;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(321)
								int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(321)
								int x = tmp23;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(321)
								Float tmp24 = _y;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(321)
								int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(321)
								int y = tmp25;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(321)
								Float tmp26 = _this->clip_rect->w;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(321)
								int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(321)
								int width = tmp27;		HX_STACK_VAR(width,"width");
								HX_STACK_LINE(321)
								Float tmp28 = _this->clip_rect->h;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(321)
								int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(321)
								int height = tmp29;		HX_STACK_VAR(height,"height");
								HX_STACK_LINE(321)
								int tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(321)
								int tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(321)
								int tmp32 = width;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(321)
								int tmp33 = height;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(321)
								::snow::modules::opengl::native::GL_FFI_obj::snow_gl_scissor(tmp30,tmp31,tmp32,tmp33);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(321)
					bool tmp9 = _this->is_clipping;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(321)
					if ((tmp9)){
						HX_STACK_LINE(321)
						::snow::modules::opengl::native::GL_FFI_obj::snow_gl_disable((int)3089);
						HX_STACK_LINE(321)
						_this->is_clipping = false;
					}
				}
				HX_STACK_LINE(321)
				_this->geom_state->dirty = false;
			}
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				int tmp6 = this->pos_floats;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(323)
				bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(323)
				if ((tmp7)){
					HX_STACK_LINE(323)
					Dynamic();
				}
				else{
					HX_STACK_LINE(323)
					int tmp8 = this->pos_floats;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(323)
					int tmp9 = this->max_floats;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(323)
					bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(323)
					if ((tmp10)){
						HX_STACK_LINE(323)
						HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
					}
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(323)
					{
						HX_STACK_LINE(323)
						::snow::api::buffers::ArrayBufferView tmp12 = this->pos_list;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(323)
						::haxe::io::Bytes buffer = tmp12->buffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(323)
						int tmp13 = this->pos_floats;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(323)
						Dynamic len = tmp13;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(323)
						::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(323)
						bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(323)
						if ((tmp14)){
							HX_STACK_LINE(323)
							::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(323)
							this1 = tmp15;
						}
						else{
							HX_STACK_LINE(323)
							bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(323)
							if ((tmp15)){
								HX_STACK_LINE(323)
								::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(323)
								{
									HX_STACK_LINE(323)
									::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(323)
									::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(323)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(323)
									int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(323)
									_this->length = tmp18;
									HX_STACK_LINE(323)
									int tmp19 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(323)
									_this->byteLength = tmp19;
									HX_STACK_LINE(323)
									::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(323)
									{
										HX_STACK_LINE(323)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(323)
										int tmp21 = _this->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(323)
										::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(323)
										this2 = tmp22;
										HX_STACK_LINE(323)
										tmp20 = this2;
									}
									HX_STACK_LINE(323)
									_this->buffer = tmp20;
									HX_STACK_LINE(323)
									_this->copyFromArray(((Array< Float >)(null())),null());
									HX_STACK_LINE(323)
									tmp16 = _this;
								}
								HX_STACK_LINE(323)
								this1 = tmp16;
							}
							else{
								HX_STACK_LINE(323)
								bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(323)
								if ((tmp16)){
									HX_STACK_LINE(323)
									::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(323)
									{
										HX_STACK_LINE(323)
										::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(323)
										::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(323)
										::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(323)
										::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(323)
										int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(323)
										int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(323)
										int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(323)
										int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(323)
										int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(323)
										int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(323)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(323)
										int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(323)
										int tmp24 = _this->type;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(323)
										bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(323)
										if ((tmp25)){
											HX_STACK_LINE(323)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(323)
											int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(323)
											int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(323)
											::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(323)
											{
												HX_STACK_LINE(323)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(323)
												int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(323)
												::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(323)
												this2 = tmp29;
												HX_STACK_LINE(323)
												tmp27 = this2;
											}
											HX_STACK_LINE(323)
											_this->buffer = tmp27;
											HX_STACK_LINE(323)
											::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(323)
											int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(323)
											int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(323)
											_this->buffer->blit((int)0,tmp28,tmp29,tmp30);
										}
										else{
											HX_STACK_LINE(323)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(323)
										int tmp26 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(323)
										_this->byteLength = tmp26;
										HX_STACK_LINE(323)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(323)
										_this->length = srcLength;
										HX_STACK_LINE(323)
										tmp17 = _this;
									}
									HX_STACK_LINE(323)
									this1 = tmp17;
								}
								else{
									HX_STACK_LINE(323)
									bool tmp17 = (buffer != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(323)
									if ((tmp17)){
										HX_STACK_LINE(323)
										::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(323)
										{
											HX_STACK_LINE(323)
											::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(323)
											::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(323)
											bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(323)
											if ((tmp20)){
												HX_STACK_LINE(323)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(323)
											int tmp21 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(323)
											bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(323)
											if ((tmp22)){
												HX_STACK_LINE(323)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(323)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(323)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(323)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(323)
											bool tmp23 = (len == null());		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(323)
											if ((tmp23)){
												HX_STACK_LINE(323)
												int tmp24 = bufferByteLength;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(323)
												newByteLength = tmp24;
												HX_STACK_LINE(323)
												int tmp25 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(323)
												bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(323)
												if ((tmp26)){
													HX_STACK_LINE(323)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(323)
												bool tmp27 = (newByteLength < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(323)
												if ((tmp27)){
													HX_STACK_LINE(323)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(323)
												int tmp24 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(323)
												newByteLength = tmp24;
												HX_STACK_LINE(323)
												int tmp25 = newByteLength;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(323)
												int newRange = tmp25;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(323)
												bool tmp26 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(323)
												if ((tmp26)){
													HX_STACK_LINE(323)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(323)
											_this->buffer = buffer;
											HX_STACK_LINE(323)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(323)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(323)
											Float tmp24 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(323)
											int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(323)
											_this->length = tmp25;
											HX_STACK_LINE(323)
											tmp18 = _this;
										}
										HX_STACK_LINE(323)
										this1 = tmp18;
									}
									else{
										HX_STACK_LINE(323)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
								}
							}
						}
						HX_STACK_LINE(323)
						tmp11 = this1;
					}
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView _pos = tmp11;		HX_STACK_VAR(_pos,"_pos");
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(323)
					{
						HX_STACK_LINE(323)
						::snow::api::buffers::ArrayBufferView tmp13 = this->tcoord_list;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(323)
						::haxe::io::Bytes buffer = tmp13->buffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(323)
						int tmp14 = this->tcoord_floats;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(323)
						Dynamic len = tmp14;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(323)
						::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(323)
						bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(323)
						if ((tmp15)){
							HX_STACK_LINE(323)
							::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(323)
							this1 = tmp16;
						}
						else{
							HX_STACK_LINE(323)
							bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(323)
							if ((tmp16)){
								HX_STACK_LINE(323)
								::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(323)
								{
									HX_STACK_LINE(323)
									::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(323)
									::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(323)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(323)
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(323)
									_this->length = tmp19;
									HX_STACK_LINE(323)
									int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(323)
									_this->byteLength = tmp20;
									HX_STACK_LINE(323)
									::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(323)
									{
										HX_STACK_LINE(323)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(323)
										int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(323)
										::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(323)
										this2 = tmp23;
										HX_STACK_LINE(323)
										tmp21 = this2;
									}
									HX_STACK_LINE(323)
									_this->buffer = tmp21;
									HX_STACK_LINE(323)
									_this->copyFromArray(((Array< Float >)(null())),null());
									HX_STACK_LINE(323)
									tmp17 = _this;
								}
								HX_STACK_LINE(323)
								this1 = tmp17;
							}
							else{
								HX_STACK_LINE(323)
								bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(323)
								if ((tmp17)){
									HX_STACK_LINE(323)
									::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(323)
									{
										HX_STACK_LINE(323)
										::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(323)
										::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(323)
										::haxe::io::Bytes tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(323)
										::haxe::io::Bytes srcData = tmp20;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(323)
										int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(323)
										int srcLength = tmp21;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(323)
										int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(323)
										int srcByteOffset = tmp22;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(323)
										int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(323)
										int srcElementSize = tmp23;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(323)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(323)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(323)
										int tmp25 = _this->type;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(323)
										bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(323)
										if ((tmp26)){
											HX_STACK_LINE(323)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(323)
											int tmp27 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(323)
											int cloneLength = tmp27;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(323)
											::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(323)
											{
												HX_STACK_LINE(323)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(323)
												int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(323)
												::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(323)
												this2 = tmp30;
												HX_STACK_LINE(323)
												tmp28 = this2;
											}
											HX_STACK_LINE(323)
											_this->buffer = tmp28;
											HX_STACK_LINE(323)
											::haxe::io::Bytes tmp29 = srcData;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(323)
											int tmp30 = srcByteOffset;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(323)
											int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(323)
											_this->buffer->blit((int)0,tmp29,tmp30,tmp31);
										}
										else{
											HX_STACK_LINE(323)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(323)
										int tmp27 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(323)
										_this->byteLength = tmp27;
										HX_STACK_LINE(323)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(323)
										_this->length = srcLength;
										HX_STACK_LINE(323)
										tmp18 = _this;
									}
									HX_STACK_LINE(323)
									this1 = tmp18;
								}
								else{
									HX_STACK_LINE(323)
									bool tmp18 = (buffer != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(323)
									if ((tmp18)){
										HX_STACK_LINE(323)
										::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(323)
										{
											HX_STACK_LINE(323)
											::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(323)
											::snow::api::buffers::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(323)
											bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(323)
											if ((tmp21)){
												HX_STACK_LINE(323)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(323)
											int tmp22 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(323)
											bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(323)
											if ((tmp23)){
												HX_STACK_LINE(323)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(323)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(323)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(323)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(323)
											bool tmp24 = (len == null());		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(323)
											if ((tmp24)){
												HX_STACK_LINE(323)
												int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(323)
												newByteLength = tmp25;
												HX_STACK_LINE(323)
												int tmp26 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(323)
												bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(323)
												if ((tmp27)){
													HX_STACK_LINE(323)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(323)
												bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(323)
												if ((tmp28)){
													HX_STACK_LINE(323)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(323)
												int tmp25 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(323)
												newByteLength = tmp25;
												HX_STACK_LINE(323)
												int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(323)
												int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(323)
												bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(323)
												if ((tmp27)){
													HX_STACK_LINE(323)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(323)
											_this->buffer = buffer;
											HX_STACK_LINE(323)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(323)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(323)
											Float tmp25 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(323)
											int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(323)
											_this->length = tmp26;
											HX_STACK_LINE(323)
											tmp19 = _this;
										}
										HX_STACK_LINE(323)
										this1 = tmp19;
									}
									else{
										HX_STACK_LINE(323)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
								}
							}
						}
						HX_STACK_LINE(323)
						tmp12 = this1;
					}
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView _tcoords = tmp12;		HX_STACK_VAR(_tcoords,"_tcoords");
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(323)
					{
						HX_STACK_LINE(323)
						::snow::api::buffers::ArrayBufferView tmp14 = this->color_list;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(323)
						::haxe::io::Bytes buffer = tmp14->buffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(323)
						int tmp15 = this->color_floats;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(323)
						Dynamic len = tmp15;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(323)
						::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(323)
						bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(323)
						if ((tmp16)){
							HX_STACK_LINE(323)
							::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(323)
							this1 = tmp17;
						}
						else{
							HX_STACK_LINE(323)
							bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(323)
							if ((tmp17)){
								HX_STACK_LINE(323)
								::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(323)
								{
									HX_STACK_LINE(323)
									::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(323)
									::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(323)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(323)
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(323)
									_this->length = tmp20;
									HX_STACK_LINE(323)
									int tmp21 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(323)
									_this->byteLength = tmp21;
									HX_STACK_LINE(323)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(323)
									{
										HX_STACK_LINE(323)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(323)
										int tmp23 = _this->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(323)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(323)
										this2 = tmp24;
										HX_STACK_LINE(323)
										tmp22 = this2;
									}
									HX_STACK_LINE(323)
									_this->buffer = tmp22;
									HX_STACK_LINE(323)
									_this->copyFromArray(((Array< Float >)(null())),null());
									HX_STACK_LINE(323)
									tmp18 = _this;
								}
								HX_STACK_LINE(323)
								this1 = tmp18;
							}
							else{
								HX_STACK_LINE(323)
								bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(323)
								if ((tmp18)){
									HX_STACK_LINE(323)
									::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(323)
									{
										HX_STACK_LINE(323)
										::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(323)
										::snow::api::buffers::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(323)
										::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(323)
										::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(323)
										int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(323)
										int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(323)
										int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(323)
										int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(323)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(323)
										int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(323)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(323)
										int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(323)
										int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(323)
										bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(323)
										if ((tmp27)){
											HX_STACK_LINE(323)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(323)
											int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(323)
											int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(323)
											::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(323)
											{
												HX_STACK_LINE(323)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(323)
												int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(323)
												::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(323)
												this2 = tmp31;
												HX_STACK_LINE(323)
												tmp29 = this2;
											}
											HX_STACK_LINE(323)
											_this->buffer = tmp29;
											HX_STACK_LINE(323)
											::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(323)
											int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(323)
											int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(323)
											_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
										}
										else{
											HX_STACK_LINE(323)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(323)
										int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(323)
										_this->byteLength = tmp28;
										HX_STACK_LINE(323)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(323)
										_this->length = srcLength;
										HX_STACK_LINE(323)
										tmp19 = _this;
									}
									HX_STACK_LINE(323)
									this1 = tmp19;
								}
								else{
									HX_STACK_LINE(323)
									bool tmp19 = (buffer != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(323)
									if ((tmp19)){
										HX_STACK_LINE(323)
										::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(323)
										{
											HX_STACK_LINE(323)
											::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(323)
											::snow::api::buffers::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(323)
											bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(323)
											if ((tmp22)){
												HX_STACK_LINE(323)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(323)
											int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(323)
											bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(323)
											if ((tmp24)){
												HX_STACK_LINE(323)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(323)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(323)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(323)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(323)
											bool tmp25 = (len == null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(323)
											if ((tmp25)){
												HX_STACK_LINE(323)
												int tmp26 = bufferByteLength;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(323)
												newByteLength = tmp26;
												HX_STACK_LINE(323)
												int tmp27 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(323)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(323)
												if ((tmp28)){
													HX_STACK_LINE(323)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
												HX_STACK_LINE(323)
												bool tmp29 = (newByteLength < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(323)
												if ((tmp29)){
													HX_STACK_LINE(323)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(323)
												int tmp26 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(323)
												newByteLength = tmp26;
												HX_STACK_LINE(323)
												int tmp27 = newByteLength;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(323)
												int newRange = tmp27;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(323)
												bool tmp28 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(323)
												if ((tmp28)){
													HX_STACK_LINE(323)
													HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(323)
											_this->buffer = buffer;
											HX_STACK_LINE(323)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(323)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(323)
											Float tmp26 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(323)
											int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(323)
											_this->length = tmp27;
											HX_STACK_LINE(323)
											tmp20 = _this;
										}
										HX_STACK_LINE(323)
										this1 = tmp20;
									}
									else{
										HX_STACK_LINE(323)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
								}
							}
						}
						HX_STACK_LINE(323)
						tmp13 = this1;
					}
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView _colors = tmp13;		HX_STACK_VAR(_colors,"_colors");
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
					HX_STACK_LINE(323)
					::phoenix::BatchState tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(323)
					int tmp15 = tmp14->last_geom_state->primitive_type;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView tmp16 = _pos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView tmp17 = _tcoords;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView tmp18 = _colors;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(323)
					::snow::api::buffers::ArrayBufferView tmp19 = _normals;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(323)
					this->submit_buffers(tmp15,tmp16,tmp17,tmp18,tmp19);
					HX_STACK_LINE(323)
					_pos = null();
					HX_STACK_LINE(323)
					_tcoords = null();
					HX_STACK_LINE(323)
					_colors = null();
					HX_STACK_LINE(323)
					_normals = null();
					HX_STACK_LINE(323)
					this->pos_floats = (int)0;
					HX_STACK_LINE(323)
					this->tcoord_floats = (int)0;
					HX_STACK_LINE(323)
					this->color_floats = (int)0;
					HX_STACK_LINE(323)
					this->normal_floats = (int)0;
				}
			}
		}
		HX_STACK_LINE(328)
		::phoenix::BatchState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(328)
		tmp4->deactivate(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(330)
		this->state = null();
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			int tmp5 = this->_dropped->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(332)
			bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(332)
			if ((tmp6)){
				HX_STACK_LINE(332)
				{
					HX_STACK_LINE(332)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(332)
					Array< ::Dynamic > _g1 = this->_dropped;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(332)
					while((true)){
						HX_STACK_LINE(332)
						bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(332)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(332)
						if ((tmp8)){
							HX_STACK_LINE(332)
							break;
						}
						HX_STACK_LINE(332)
						::phoenix::geometry::Geometry tmp9 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(332)
						::phoenix::geometry::Geometry geom1 = tmp9;		HX_STACK_VAR(geom1,"geom1");
						HX_STACK_LINE(332)
						++(_g);
						HX_STACK_LINE(332)
						geom1->drop(null());
						HX_STACK_LINE(332)
						geom1 = null();
					}
				}
				HX_STACK_LINE(332)
				this->_dropped = null();
				HX_STACK_LINE(332)
				this->_dropped = Array_obj< ::Dynamic >::__new();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,batch,(void))

Void Batcher_obj::prune( ){
{
		HX_STACK_FRAME("phoenix.Batcher","prune",0x29db2ce4,"phoenix.Batcher.prune","phoenix/Batcher.hx",336,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(339)
		int tmp = this->_dropped->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(339)
		if ((tmp1)){
			HX_STACK_LINE(340)
			{
				HX_STACK_LINE(340)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(340)
				Array< ::Dynamic > _g1 = this->_dropped;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(340)
				while((true)){
					HX_STACK_LINE(340)
					bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(340)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(340)
					if ((tmp3)){
						HX_STACK_LINE(340)
						break;
					}
					HX_STACK_LINE(340)
					::phoenix::geometry::Geometry tmp4 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Geometry >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(340)
					::phoenix::geometry::Geometry geom = tmp4;		HX_STACK_VAR(geom,"geom");
					HX_STACK_LINE(340)
					++(_g);
					HX_STACK_LINE(341)
					geom->drop(null());
					HX_STACK_LINE(342)
					geom = null();
				}
			}
			HX_STACK_LINE(344)
			this->_dropped = null();
			HX_STACK_LINE(345)
			this->_dropped = Array_obj< ::Dynamic >::__new();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,prune,(void))

Void Batcher_obj::draw( Dynamic __o_persist_immediate){
Dynamic persist_immediate = __o_persist_immediate.Default(false);
	HX_STACK_FRAME("phoenix.Batcher","draw",0x6d59878a,"phoenix.Batcher.draw","phoenix/Batcher.hx",351,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(persist_immediate,"persist_immediate")
{
		HX_STACK_LINE(354)
		this->draw_calls = (int)0;
		HX_STACK_LINE(355)
		this->vert_count = (int)0;
		HX_STACK_LINE(357)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),357,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		tmp->emit((int)1,hx::ObjectPtr<OBJ_>(this),tmp1);
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			tmp2->process();
			HX_STACK_LINE(359)
			::phoenix::Renderer tmp3 = this->renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(359)
			::phoenix::Camera tmp4 = this->view;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(359)
			::phoenix::Rectangle tmp5 = tmp4->get_viewport();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(359)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(359)
			::phoenix::Camera tmp7 = this->view;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(359)
			::phoenix::Rectangle tmp8 = tmp7->get_viewport();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(359)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(359)
			::phoenix::Camera tmp10 = this->view;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(359)
			::phoenix::Rectangle tmp11 = tmp10->get_viewport();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(359)
			Float tmp12 = tmp11->w;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(359)
			::phoenix::Camera tmp13 = this->view;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(359)
			::phoenix::Rectangle tmp14 = tmp13->get_viewport();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(359)
			Float tmp15 = tmp14->h;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(359)
			tmp3->state->viewport(tmp6,tmp9,tmp12,tmp15);
		}
		HX_STACK_LINE(361)
		Dynamic tmp2 = persist_immediate;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(361)
		this->batch(tmp2);
		HX_STACK_LINE(363)
		::luxe::Emitter tmp3 = this->emitter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),363,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(363)
		tmp3->emit((int)2,hx::ObjectPtr<OBJ_>(this),tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,draw,(void))

Void Batcher_obj::update_view( ){
{
		HX_STACK_FRAME("phoenix.Batcher","update_view",0x26fb08d5,"phoenix.Batcher.update_view","phoenix/Batcher.hx",369,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(372)
		::phoenix::Camera tmp = this->view;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		tmp->process();
		HX_STACK_LINE(377)
		::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(377)
		::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(377)
		::phoenix::Rectangle tmp3 = tmp2->get_viewport();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(377)
		::phoenix::Camera tmp5 = this->view;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(377)
		::phoenix::Rectangle tmp6 = tmp5->get_viewport();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(377)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(377)
		::phoenix::Camera tmp8 = this->view;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(377)
		::phoenix::Rectangle tmp9 = tmp8->get_viewport();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(377)
		Float tmp10 = tmp9->w;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(377)
		::phoenix::Camera tmp11 = this->view;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(377)
		::phoenix::Rectangle tmp12 = tmp11->get_viewport();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(377)
		Float tmp13 = tmp12->h;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(377)
		tmp1->state->viewport(tmp4,tmp7,tmp10,tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,update_view,(void))

Void Batcher_obj::apply_default_uniforms( ::phoenix::Shader _shader){
{
		HX_STACK_FRAME("phoenix.Batcher","apply_default_uniforms",0xa32f6d74,"phoenix.Batcher.apply_default_uniforms","phoenix/Batcher.hx",383,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_shader,"_shader")
		HX_STACK_LINE(384)
		bool tmp = _shader->no_default_uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		if ((tmp1)){
			HX_STACK_LINE(385)
			{
				HX_STACK_LINE(385)
				::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(385)
				::snow::api::buffers::ArrayBufferView _value = tmp2->proj_arr;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(385)
				{
					HX_STACK_LINE(385)
					::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(385)
					int tmp3 = _shader->program->id;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(385)
					Dynamic tmp4 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp3,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(385)
					Dynamic _location = tmp4;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(385)
					::phoenix::Uniform tmp5 = _this->matrix4arrs->get(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(385)
					::phoenix::Uniform _matrix4 = tmp5;		HX_STACK_VAR(_matrix4,"_matrix4");
					HX_STACK_LINE(385)
					bool tmp6 = (_matrix4 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(385)
					if ((tmp6)){
						HX_STACK_LINE(385)
						_matrix4->value = _value;
					}
					else{
						HX_STACK_LINE(385)
						::phoenix::Uniform tmp7 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),_value,_location);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(385)
						_matrix4 = tmp7;
						HX_STACK_LINE(385)
						::phoenix::Uniform tmp8 = _matrix4;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(385)
						_this->matrix4arrs->set(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),tmp8);
					}
					HX_STACK_LINE(385)
					::phoenix::Uniform tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(385)
					_this->dirty_matrix4arrs->push(tmp7);
				}
			}
			HX_STACK_LINE(386)
			{
				HX_STACK_LINE(386)
				::phoenix::Camera tmp2 = this->view;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(386)
				::snow::api::buffers::ArrayBufferView _value = tmp2->view_inverse_arr;		HX_STACK_VAR(_value,"_value");
				HX_STACK_LINE(386)
				{
					HX_STACK_LINE(386)
					::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(386)
					int tmp3 = _shader->program->id;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(386)
					Dynamic tmp4 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp3,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(386)
					Dynamic _location = tmp4;		HX_STACK_VAR(_location,"_location");
					HX_STACK_LINE(386)
					::phoenix::Uniform tmp5 = _this->matrix4arrs->get(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(386)
					::phoenix::Uniform _matrix4 = tmp5;		HX_STACK_VAR(_matrix4,"_matrix4");
					HX_STACK_LINE(386)
					bool tmp6 = (_matrix4 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(386)
					if ((tmp6)){
						HX_STACK_LINE(386)
						_matrix4->value = _value;
					}
					else{
						HX_STACK_LINE(386)
						::phoenix::Uniform tmp7 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),_value,_location);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(386)
						_matrix4 = tmp7;
						HX_STACK_LINE(386)
						::phoenix::Uniform tmp8 = _matrix4;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(386)
						_this->matrix4arrs->set(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),tmp8);
					}
					HX_STACK_LINE(386)
					::phoenix::Uniform tmp7 = _matrix4;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(386)
					_this->dirty_matrix4arrs->push(tmp7);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,apply_default_uniforms,(void))

Void Batcher_obj::submit_geometry( ::phoenix::geometry::Geometry _geom,::phoenix::Shader _shader){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_geometry",0x018ac533,"phoenix.Batcher.submit_geometry","phoenix/Batcher.hx",394,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_geom,"_geom")
		HX_STACK_ARG(_shader,"_shader")
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			bool tmp = _geom->buffer_based;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(396)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(396)
			if ((tmp1)){
				HX_STACK_LINE(214)
				::String tmp2 = HX_HCSTRING(" ( Only buffer based geometry can be submitted directly","\xab","\x29","\x69","\x3a");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::String tmp3 = (tmp2 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(396)
				::String tmp4 = (HX_HCSTRING("_geom.buffer_based","\x27","\x99","\x8e","\x98") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(396)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(396)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(398)
		bool tmp = _geom->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		if ((tmp1)){
			HX_STACK_LINE(398)
			return null();
		}
		HX_STACK_LINE(399)
		bool tmp2 = (_shader == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		if ((tmp2)){
			HX_STACK_LINE(399)
			::phoenix::Shader tmp3 = _geom->state->shader;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(399)
			_shader = tmp3;
		}
		HX_STACK_LINE(400)
		::phoenix::Shader tmp3 = this->shader;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(400)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(400)
		if ((tmp4)){
			HX_STACK_LINE(400)
			::phoenix::Shader tmp5 = this->shader;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(400)
			_shader = tmp5;
		}
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(402)
			_shader->use();
			HX_STACK_LINE(402)
			_shader->uniforms->apply();
			HX_STACK_LINE(402)
			::phoenix::Renderer tmp5 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(402)
			tmp5->state->activeTexture((int)33984);
		}
		HX_STACK_LINE(403)
		{
			HX_STACK_LINE(403)
			bool tmp5 = _shader->no_default_uniforms;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(403)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(403)
			if ((tmp6)){
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					::phoenix::Camera tmp7 = this->view;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(403)
					::snow::api::buffers::ArrayBufferView _value = tmp7->proj_arr;		HX_STACK_VAR(_value,"_value");
					HX_STACK_LINE(403)
					{
						HX_STACK_LINE(403)
						::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(403)
						int tmp8 = _shader->program->id;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(403)
						Dynamic tmp9 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp8,HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(403)
						Dynamic _location = tmp9;		HX_STACK_VAR(_location,"_location");
						HX_STACK_LINE(403)
						::phoenix::Uniform tmp10 = _this->matrix4arrs->get(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(403)
						::phoenix::Uniform _matrix4 = tmp10;		HX_STACK_VAR(_matrix4,"_matrix4");
						HX_STACK_LINE(403)
						bool tmp11 = (_matrix4 != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(403)
						if ((tmp11)){
							HX_STACK_LINE(403)
							_matrix4->value = _value;
						}
						else{
							HX_STACK_LINE(403)
							::phoenix::Uniform tmp12 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),_value,_location);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(403)
							_matrix4 = tmp12;
							HX_STACK_LINE(403)
							::phoenix::Uniform tmp13 = _matrix4;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(403)
							_this->matrix4arrs->set(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),tmp13);
						}
						HX_STACK_LINE(403)
						::phoenix::Uniform tmp12 = _matrix4;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(403)
						_this->dirty_matrix4arrs->push(tmp12);
					}
				}
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					::phoenix::Camera tmp7 = this->view;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(403)
					::snow::api::buffers::ArrayBufferView _value = tmp7->view_inverse_arr;		HX_STACK_VAR(_value,"_value");
					HX_STACK_LINE(403)
					{
						HX_STACK_LINE(403)
						::phoenix::Uniforms _this = _shader->uniforms;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(403)
						int tmp8 = _shader->program->id;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(403)
						Dynamic tmp9 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_get_uniform_location(tmp8,HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(403)
						Dynamic _location = tmp9;		HX_STACK_VAR(_location,"_location");
						HX_STACK_LINE(403)
						::phoenix::Uniform tmp10 = _this->matrix4arrs->get(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(403)
						::phoenix::Uniform _matrix4 = tmp10;		HX_STACK_VAR(_matrix4,"_matrix4");
						HX_STACK_LINE(403)
						bool tmp11 = (_matrix4 != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(403)
						if ((tmp11)){
							HX_STACK_LINE(403)
							_matrix4->value = _value;
						}
						else{
							HX_STACK_LINE(403)
							::phoenix::Uniform tmp12 = ::phoenix::Uniform_obj::__new(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),_value,_location);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(403)
							_matrix4 = tmp12;
							HX_STACK_LINE(403)
							::phoenix::Uniform tmp13 = _matrix4;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(403)
							_this->matrix4arrs->set(HX_HCSTRING("modelViewMatrix","\x8f","\xeb","\x9c","\x59"),tmp13);
						}
						HX_STACK_LINE(403)
						::phoenix::Uniform tmp12 = _matrix4;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(403)
						_this->dirty_matrix4arrs->push(tmp12);
					}
				}
			}
		}
		HX_STACK_LINE(404)
		_geom->uniforms->apply();
		HX_STACK_LINE(406)
		int tmp5 = _geom->vertices->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(406)
		int _length = tmp5;		HX_STACK_VAR(_length,"_length");
		HX_STACK_LINE(407)
		int tmp6 = (_length * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(407)
		int _length4 = tmp6;		HX_STACK_VAR(_length4,"_length4");
		HX_STACK_LINE(408)
		bool tmp7 = _geom->update_buffers();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(408)
		bool _updated = tmp7;		HX_STACK_VAR(_updated,"_updated");
		HX_STACK_LINE(410)
		bool tmp8 = _updated;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(410)
		if ((tmp8)){
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				{
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GLBO buffer = _geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(411)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(411)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					if ((tmp9)){
						HX_STACK_LINE(411)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(411)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp10);
				}
				HX_STACK_LINE(411)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::snow::api::buffers::ArrayBufferView data = _geom->buffer_pos;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(411)
				int usage = _geom->buffer_type;		HX_STACK_VAR(usage,"usage");
				HX_STACK_LINE(411)
				bool tmp9 = (data != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(411)
				if ((tmp9)){
					HX_STACK_LINE(411)
					int tmp10 = data->byteOffset;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					int tmp11 = data->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(411)
					int tmp12 = usage;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp10,tmp11,tmp12);
				}
				else{
					HX_STACK_LINE(411)
					int tmp10 = usage;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp10);
				}
			}
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				{
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GLBO buffer = _geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(411)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(411)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					if ((tmp9)){
						HX_STACK_LINE(411)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(411)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp10);
				}
				HX_STACK_LINE(411)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::snow::api::buffers::ArrayBufferView data = _geom->buffer_tcoords;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(411)
				int usage = _geom->buffer_type;		HX_STACK_VAR(usage,"usage");
				HX_STACK_LINE(411)
				bool tmp9 = (data != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(411)
				if ((tmp9)){
					HX_STACK_LINE(411)
					int tmp10 = data->byteOffset;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					int tmp11 = data->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(411)
					int tmp12 = usage;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp10,tmp11,tmp12);
				}
				else{
					HX_STACK_LINE(411)
					int tmp10 = usage;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp10);
				}
			}
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				{
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GLBO buffer = _geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(411)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(411)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					if ((tmp9)){
						HX_STACK_LINE(411)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(411)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp10);
				}
				HX_STACK_LINE(411)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::snow::api::buffers::ArrayBufferView data = _geom->buffer_colors;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(411)
				int usage = _geom->buffer_type;		HX_STACK_VAR(usage,"usage");
				HX_STACK_LINE(411)
				bool tmp9 = (data != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(411)
				if ((tmp9)){
					HX_STACK_LINE(411)
					int tmp10 = data->byteOffset;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					int tmp11 = data->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(411)
					int tmp12 = usage;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp10,tmp11,tmp12);
				}
				else{
					HX_STACK_LINE(411)
					int tmp10 = usage;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp10);
				}
			}
		}
		else{
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				{
					HX_STACK_LINE(413)
					::snow::modules::opengl::native::GLBO buffer = _geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(413)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(413)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(413)
					if ((tmp9)){
						HX_STACK_LINE(413)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(413)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(413)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp10);
				}
				HX_STACK_LINE(413)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				{
					HX_STACK_LINE(413)
					::snow::modules::opengl::native::GLBO buffer = _geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(413)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(413)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(413)
					if ((tmp9)){
						HX_STACK_LINE(413)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(413)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(413)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp10);
				}
				HX_STACK_LINE(413)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				{
					HX_STACK_LINE(413)
					::snow::modules::opengl::native::GLBO buffer = _geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(413)
					bool tmp9 = (buffer == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(413)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(413)
					if ((tmp9)){
						HX_STACK_LINE(413)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(413)
						tmp10 = buffer->id;
					}
					HX_STACK_LINE(413)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp10);
				}
				HX_STACK_LINE(413)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
			}
		}
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int tmp9 = _geom->buffer_pos->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(416)
			Float tmp10 = (Float(tmp9) / Float((int)4));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(416)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			int count = tmp11;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(416)
			int tmp12 = _geom->state->primitive_type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(416)
			int tmp13 = count;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(416)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_draw_arrays(tmp12,(int)0,tmp13);
		}
		HX_STACK_LINE(418)
		::phoenix::Renderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(418)
		::phoenix::RendererStats _stats = tmp9->stats;		HX_STACK_VAR(_stats,"_stats");
		HX_STACK_LINE(419)
		(_stats->geometry_count)++;
		HX_STACK_LINE(420)
		(_stats->visible_count)++;
		HX_STACK_LINE(421)
		(_stats->draw_calls)++;
		HX_STACK_LINE(422)
		hx::AddEq(_stats->vert_count,_length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,submit_geometry,(void))

Void Batcher_obj::submit_buffers( int type,::snow::api::buffers::ArrayBufferView _pos,::snow::api::buffers::ArrayBufferView _tcoords,::snow::api::buffers::ArrayBufferView _colors,::snow::api::buffers::ArrayBufferView _normals){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_buffers",0x8abe6c12,"phoenix.Batcher.submit_buffers","phoenix/Batcher.hx",428,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_ARG(_tcoords,"_tcoords")
		HX_STACK_ARG(_colors,"_colors")
		HX_STACK_ARG(_normals,"_normals")
		HX_STACK_LINE(430)
		::snow::modules::opengl::native::GLBO tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			int tmp1 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(430)
			int _id = tmp1;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(430)
			::snow::modules::opengl::native::GLBO tmp2 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(430)
			tmp = tmp2;
		}
		HX_STACK_LINE(430)
		::snow::modules::opengl::native::GLBO pb = tmp;		HX_STACK_VAR(pb,"pb");
		HX_STACK_LINE(431)
		::snow::modules::opengl::native::GLBO tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			int tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(431)
			int _id = tmp2;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(431)
			::snow::modules::opengl::native::GLBO tmp3 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(431)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(431)
		::snow::modules::opengl::native::GLBO cb = tmp1;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(432)
		::snow::modules::opengl::native::GLBO tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(432)
		{
			HX_STACK_LINE(432)
			int tmp3 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_create_buffer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(432)
			int _id = tmp3;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(432)
			::snow::modules::opengl::native::GLBO tmp4 = ::snow::modules::opengl::native::GLBO_obj::__new(_id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(432)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(432)
		::snow::modules::opengl::native::GLBO tb = tmp2;		HX_STACK_VAR(tb,"tb");
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(437)
			bool tmp3 = (pb == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(437)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(437)
			if ((tmp3)){
				HX_STACK_LINE(437)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(437)
				tmp4 = pb->id;
			}
			HX_STACK_LINE(437)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp4);
		}
		HX_STACK_LINE(438)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			bool tmp3 = (_pos != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(439)
			if ((tmp3)){
				HX_STACK_LINE(439)
				int tmp4 = _pos->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(439)
				int tmp5 = _pos->byteLength;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(439)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,_pos->buffer->b,tmp4,tmp5,(int)35040);
			}
			else{
				HX_STACK_LINE(439)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,(int)35040);
			}
		}
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			bool tmp3 = (tb == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(441)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(441)
			if ((tmp3)){
				HX_STACK_LINE(441)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(441)
				tmp4 = tb->id;
			}
			HX_STACK_LINE(441)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp4);
		}
		HX_STACK_LINE(442)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			bool tmp3 = (_tcoords != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(443)
			if ((tmp3)){
				HX_STACK_LINE(443)
				int tmp4 = _tcoords->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(443)
				int tmp5 = _tcoords->byteLength;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(443)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,_tcoords->buffer->b,tmp4,tmp5,(int)35040);
			}
			else{
				HX_STACK_LINE(443)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,(int)35040);
			}
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			bool tmp3 = (cb == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(445)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			if ((tmp3)){
				HX_STACK_LINE(445)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(445)
				tmp4 = cb->id;
			}
			HX_STACK_LINE(445)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp4);
		}
		HX_STACK_LINE(446)
		::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			bool tmp3 = (_colors != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(447)
			if ((tmp3)){
				HX_STACK_LINE(447)
				int tmp4 = _colors->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(447)
				int tmp5 = _colors->byteLength;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(447)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,_colors->buffer->b,tmp4,tmp5,(int)35040);
			}
			else{
				HX_STACK_LINE(447)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,(int)35040);
			}
		}
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			int tmp3 = _pos->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(456)
			Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(456)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(456)
			int count = tmp5;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(456)
			int tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(456)
			int tmp7 = count;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(456)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_draw_arrays(tmp6,(int)0,tmp7);
		}
		HX_STACK_LINE(458)
		{
			HX_STACK_LINE(458)
			int tmp3 = pb->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_buffer(tmp3);
			HX_STACK_LINE(458)
			pb->set_invalidated(true);
		}
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			int tmp3 = cb->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(459)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_buffer(tmp3);
			HX_STACK_LINE(459)
			cb->set_invalidated(true);
		}
		HX_STACK_LINE(460)
		{
			HX_STACK_LINE(460)
			int tmp3 = tb->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(460)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_delete_buffer(tmp3);
			HX_STACK_LINE(460)
			tb->set_invalidated(true);
		}
		HX_STACK_LINE(465)
		(this->draw_calls)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Batcher_obj,submit_buffers,(void))

Void Batcher_obj::submit_static_geometry( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_static_geometry",0x9aab1742,"phoenix.Batcher.submit_static_geometry","phoenix/Batcher.hx",471,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(473)
		int tmp = geom->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		int _length = tmp;		HX_STACK_VAR(_length,"_length");
		HX_STACK_LINE(475)
		bool tmp1 = (_length == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(475)
		if ((tmp1)){
			HX_STACK_LINE(476)
			return null();
		}
		HX_STACK_LINE(479)
		bool tmp2 = geom->update_buffers();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(479)
		bool _updated = tmp2;		HX_STACK_VAR(_updated,"_updated");
		HX_STACK_LINE(481)
		bool tmp3 = _updated;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		if ((tmp3)){
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GLBO buffer = geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(482)
					bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(482)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					if ((tmp4)){
						HX_STACK_LINE(482)
						tmp5 = (int)0;
					}
					else{
						HX_STACK_LINE(482)
						tmp5 = buffer->id;
					}
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp5);
				}
				HX_STACK_LINE(482)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				::snow::api::buffers::ArrayBufferView data = geom->buffer_pos;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(482)
				int usage = geom->buffer_type;		HX_STACK_VAR(usage,"usage");
				HX_STACK_LINE(482)
				bool tmp4 = (data != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(482)
				if ((tmp4)){
					HX_STACK_LINE(482)
					int tmp5 = data->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					int tmp6 = data->byteLength;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(482)
					int tmp7 = usage;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp5,tmp6,tmp7);
				}
				else{
					HX_STACK_LINE(482)
					int tmp5 = usage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp5);
				}
			}
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GLBO buffer = geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(482)
					bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(482)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					if ((tmp4)){
						HX_STACK_LINE(482)
						tmp5 = (int)0;
					}
					else{
						HX_STACK_LINE(482)
						tmp5 = buffer->id;
					}
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp5);
				}
				HX_STACK_LINE(482)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				::snow::api::buffers::ArrayBufferView data = geom->buffer_tcoords;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(482)
				int usage = geom->buffer_type;		HX_STACK_VAR(usage,"usage");
				HX_STACK_LINE(482)
				bool tmp4 = (data != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(482)
				if ((tmp4)){
					HX_STACK_LINE(482)
					int tmp5 = data->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					int tmp6 = data->byteLength;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(482)
					int tmp7 = usage;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp5,tmp6,tmp7);
				}
				else{
					HX_STACK_LINE(482)
					int tmp5 = usage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp5);
				}
			}
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GLBO buffer = geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(482)
					bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(482)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					if ((tmp4)){
						HX_STACK_LINE(482)
						tmp5 = (int)0;
					}
					else{
						HX_STACK_LINE(482)
						tmp5 = buffer->id;
					}
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp5);
				}
				HX_STACK_LINE(482)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				::snow::api::buffers::ArrayBufferView data = geom->buffer_colors;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(482)
				int usage = geom->buffer_type;		HX_STACK_VAR(usage,"usage");
				HX_STACK_LINE(482)
				bool tmp4 = (data != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(482)
				if ((tmp4)){
					HX_STACK_LINE(482)
					int tmp5 = data->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					int tmp6 = data->byteLength;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(482)
					int tmp7 = usage;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,data->buffer->b,tmp5,tmp6,tmp7);
				}
				else{
					HX_STACK_LINE(482)
					int tmp5 = usage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_buffer_data((int)34962,null(),(int)0,(int)0,tmp5);
				}
			}
		}
		else{
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				{
					HX_STACK_LINE(484)
					::snow::modules::opengl::native::GLBO buffer = geom->vb_pos;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(484)
					bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(484)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(484)
					if ((tmp4)){
						HX_STACK_LINE(484)
						tmp5 = (int)0;
					}
					else{
						HX_STACK_LINE(484)
						tmp5 = buffer->id;
					}
					HX_STACK_LINE(484)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp5);
				}
				HX_STACK_LINE(484)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)0,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				{
					HX_STACK_LINE(484)
					::snow::modules::opengl::native::GLBO buffer = geom->vb_tcoords;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(484)
					bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(484)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(484)
					if ((tmp4)){
						HX_STACK_LINE(484)
						tmp5 = (int)0;
					}
					else{
						HX_STACK_LINE(484)
						tmp5 = buffer->id;
					}
					HX_STACK_LINE(484)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp5);
				}
				HX_STACK_LINE(484)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)1,(int)4,(int)5126,false,(int)0,(int)0);
			}
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				{
					HX_STACK_LINE(484)
					::snow::modules::opengl::native::GLBO buffer = geom->vb_colors;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(484)
					bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(484)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(484)
					if ((tmp4)){
						HX_STACK_LINE(484)
						tmp5 = (int)0;
					}
					else{
						HX_STACK_LINE(484)
						tmp5 = buffer->id;
					}
					HX_STACK_LINE(484)
					::snow::modules::opengl::native::GL_FFI_obj::snow_gl_bind_buffer((int)34962,tmp5);
				}
				HX_STACK_LINE(484)
				::snow::modules::opengl::native::GL_FFI_obj::snow_gl_vertex_attrib_pointer((int)2,(int)4,(int)5126,false,(int)0,(int)0);
			}
		}
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(487)
			int tmp4 = geom->buffer_pos->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(487)
			Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(487)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(487)
			int count = tmp6;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(487)
			int tmp7 = geom->state->primitive_type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(487)
			int tmp8 = count;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(487)
			::snow::modules::opengl::native::GL_FFI_obj::snow_gl_draw_arrays(tmp7,(int)0,tmp8);
		}
		HX_STACK_LINE(490)
		(this->static_batched_count)++;
		HX_STACK_LINE(491)
		(this->draw_calls)++;
		HX_STACK_LINE(494)
		geom->set_dirty(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,submit_static_geometry,(void))

Void Batcher_obj::submit_current_vertex_list( int type){
{
		HX_STACK_FRAME("phoenix.Batcher","submit_current_vertex_list",0x67dd8932,"phoenix.Batcher.submit_current_vertex_list","phoenix/Batcher.hx",500,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(502)
		int tmp = this->pos_floats;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(502)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(502)
		if ((tmp1)){
			HX_STACK_LINE(503)
			return null();
		}
		HX_STACK_LINE(506)
		int tmp2 = this->pos_floats;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		int tmp3 = this->max_floats;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		if ((tmp4)){
			HX_STACK_LINE(507)
			HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
		}
		HX_STACK_LINE(510)
		::snow::api::buffers::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::snow::api::buffers::ArrayBufferView tmp6 = this->pos_list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(510)
			::haxe::io::Bytes buffer = tmp6->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(510)
			int tmp7 = this->pos_floats;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(510)
			Dynamic len = tmp7;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(510)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(510)
			bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(510)
			if ((tmp8)){
				HX_STACK_LINE(510)
				::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(510)
				this1 = tmp9;
			}
			else{
				HX_STACK_LINE(510)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(510)
				if ((tmp9)){
					HX_STACK_LINE(510)
					::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(510)
						::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(510)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(510)
						int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(510)
						_this->length = tmp12;
						HX_STACK_LINE(510)
						int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(510)
						_this->byteLength = tmp13;
						HX_STACK_LINE(510)
						::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(510)
						{
							HX_STACK_LINE(510)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(510)
							this2 = tmp16;
							HX_STACK_LINE(510)
							tmp14 = this2;
						}
						HX_STACK_LINE(510)
						_this->buffer = tmp14;
						HX_STACK_LINE(510)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(510)
						tmp10 = _this;
					}
					HX_STACK_LINE(510)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(510)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(510)
					if ((tmp10)){
						HX_STACK_LINE(510)
						::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(510)
						{
							HX_STACK_LINE(510)
							::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(510)
							::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(510)
							::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(510)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(510)
							int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(510)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(510)
							int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(510)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(510)
							int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(510)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(510)
							int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(510)
							int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(510)
							bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							if ((tmp19)){
								HX_STACK_LINE(510)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(510)
								int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(510)
								int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(510)
								::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								{
									HX_STACK_LINE(510)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(510)
									int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(510)
									this2 = tmp23;
									HX_STACK_LINE(510)
									tmp21 = this2;
								}
								HX_STACK_LINE(510)
								_this->buffer = tmp21;
								HX_STACK_LINE(510)
								::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(510)
								int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(510)
								int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(510)
								_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
							}
							else{
								HX_STACK_LINE(510)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(510)
							int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							_this->byteLength = tmp20;
							HX_STACK_LINE(510)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(510)
							_this->length = srcLength;
							HX_STACK_LINE(510)
							tmp11 = _this;
						}
						HX_STACK_LINE(510)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(510)
						bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(510)
						if ((tmp11)){
							HX_STACK_LINE(510)
							::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(510)
							{
								HX_STACK_LINE(510)
								::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(510)
								::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(510)
								bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(510)
								if ((tmp14)){
									HX_STACK_LINE(510)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(510)
								int tmp15 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(510)
								bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(510)
								if ((tmp16)){
									HX_STACK_LINE(510)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(510)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(510)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(510)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(510)
								bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(510)
								if ((tmp17)){
									HX_STACK_LINE(510)
									int tmp18 = bufferByteLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(510)
									newByteLength = tmp18;
									HX_STACK_LINE(510)
									int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(510)
									bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(510)
									if ((tmp20)){
										HX_STACK_LINE(510)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(510)
									bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(510)
									if ((tmp21)){
										HX_STACK_LINE(510)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(510)
									int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(510)
									newByteLength = tmp18;
									HX_STACK_LINE(510)
									int tmp19 = newByteLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(510)
									int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(510)
									bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(510)
									if ((tmp20)){
										HX_STACK_LINE(510)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(510)
								_this->buffer = buffer;
								HX_STACK_LINE(510)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(510)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(510)
								Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(510)
								int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(510)
								_this->length = tmp19;
								HX_STACK_LINE(510)
								tmp12 = _this;
							}
							HX_STACK_LINE(510)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(510)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(510)
			tmp5 = this1;
		}
		HX_STACK_LINE(510)
		::snow::api::buffers::ArrayBufferView _pos = tmp5;		HX_STACK_VAR(_pos,"_pos");
		HX_STACK_LINE(511)
		::snow::api::buffers::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(511)
		{
			HX_STACK_LINE(511)
			::snow::api::buffers::ArrayBufferView tmp7 = this->tcoord_list;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(511)
			::haxe::io::Bytes buffer = tmp7->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(511)
			int tmp8 = this->tcoord_floats;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(511)
			Dynamic len = tmp8;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(511)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(511)
			bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(511)
			if ((tmp9)){
				HX_STACK_LINE(511)
				::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(511)
				this1 = tmp10;
			}
			else{
				HX_STACK_LINE(511)
				bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(511)
				if ((tmp10)){
					HX_STACK_LINE(511)
					::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(511)
					{
						HX_STACK_LINE(511)
						::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(511)
						::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(511)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(511)
						int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(511)
						_this->length = tmp13;
						HX_STACK_LINE(511)
						int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(511)
						_this->byteLength = tmp14;
						HX_STACK_LINE(511)
						::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(511)
						{
							HX_STACK_LINE(511)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(511)
							int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(511)
							::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(511)
							this2 = tmp17;
							HX_STACK_LINE(511)
							tmp15 = this2;
						}
						HX_STACK_LINE(511)
						_this->buffer = tmp15;
						HX_STACK_LINE(511)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(511)
						tmp11 = _this;
					}
					HX_STACK_LINE(511)
					this1 = tmp11;
				}
				else{
					HX_STACK_LINE(511)
					bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(511)
					if ((tmp11)){
						HX_STACK_LINE(511)
						::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(511)
						{
							HX_STACK_LINE(511)
							::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(511)
							::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(511)
							::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(511)
							::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(511)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(511)
							int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(511)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(511)
							int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(511)
							int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(511)
							int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(511)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(511)
							int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(511)
							int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(511)
							bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(511)
							if ((tmp20)){
								HX_STACK_LINE(511)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(511)
								int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(511)
								int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(511)
								::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(511)
								{
									HX_STACK_LINE(511)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(511)
									int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(511)
									::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(511)
									this2 = tmp24;
									HX_STACK_LINE(511)
									tmp22 = this2;
								}
								HX_STACK_LINE(511)
								_this->buffer = tmp22;
								HX_STACK_LINE(511)
								::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(511)
								int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(511)
								int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(511)
								_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
							}
							else{
								HX_STACK_LINE(511)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(511)
							int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(511)
							_this->byteLength = tmp21;
							HX_STACK_LINE(511)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(511)
							_this->length = srcLength;
							HX_STACK_LINE(511)
							tmp12 = _this;
						}
						HX_STACK_LINE(511)
						this1 = tmp12;
					}
					else{
						HX_STACK_LINE(511)
						bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(511)
						if ((tmp12)){
							HX_STACK_LINE(511)
							::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(511)
							{
								HX_STACK_LINE(511)
								::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(511)
								::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(511)
								bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(511)
								if ((tmp15)){
									HX_STACK_LINE(511)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(511)
								int tmp16 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(511)
								bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(511)
								if ((tmp17)){
									HX_STACK_LINE(511)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(511)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(511)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(511)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(511)
								bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(511)
								if ((tmp18)){
									HX_STACK_LINE(511)
									int tmp19 = bufferByteLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(511)
									newByteLength = tmp19;
									HX_STACK_LINE(511)
									int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(511)
									bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(511)
									if ((tmp21)){
										HX_STACK_LINE(511)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(511)
									bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(511)
									if ((tmp22)){
										HX_STACK_LINE(511)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(511)
									int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(511)
									newByteLength = tmp19;
									HX_STACK_LINE(511)
									int tmp20 = newByteLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(511)
									int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(511)
									bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(511)
									if ((tmp21)){
										HX_STACK_LINE(511)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(511)
								_this->buffer = buffer;
								HX_STACK_LINE(511)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(511)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(511)
								Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(511)
								int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(511)
								_this->length = tmp20;
								HX_STACK_LINE(511)
								tmp13 = _this;
							}
							HX_STACK_LINE(511)
							this1 = tmp13;
						}
						else{
							HX_STACK_LINE(511)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(511)
			tmp6 = this1;
		}
		HX_STACK_LINE(511)
		::snow::api::buffers::ArrayBufferView _tcoords = tmp6;		HX_STACK_VAR(_tcoords,"_tcoords");
		HX_STACK_LINE(512)
		::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(512)
		{
			HX_STACK_LINE(512)
			::snow::api::buffers::ArrayBufferView tmp8 = this->color_list;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(512)
			::haxe::io::Bytes buffer = tmp8->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(512)
			int tmp9 = this->color_floats;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(512)
			Dynamic len = tmp9;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(512)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(512)
			bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(512)
			if ((tmp10)){
				HX_STACK_LINE(512)
				::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(512)
				this1 = tmp11;
			}
			else{
				HX_STACK_LINE(512)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(512)
				if ((tmp11)){
					HX_STACK_LINE(512)
					::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(512)
					{
						HX_STACK_LINE(512)
						::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(512)
						::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(512)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(512)
						int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(512)
						_this->length = tmp14;
						HX_STACK_LINE(512)
						int tmp15 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(512)
						_this->byteLength = tmp15;
						HX_STACK_LINE(512)
						::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(512)
						{
							HX_STACK_LINE(512)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(512)
							int tmp17 = _this->byteLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(512)
							::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(512)
							this2 = tmp18;
							HX_STACK_LINE(512)
							tmp16 = this2;
						}
						HX_STACK_LINE(512)
						_this->buffer = tmp16;
						HX_STACK_LINE(512)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(512)
						tmp12 = _this;
					}
					HX_STACK_LINE(512)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(512)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(512)
					if ((tmp12)){
						HX_STACK_LINE(512)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(512)
						{
							HX_STACK_LINE(512)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(512)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(512)
							::haxe::io::Bytes tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(512)
							::haxe::io::Bytes srcData = tmp15;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(512)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(512)
							int srcLength = tmp16;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(512)
							int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(512)
							int srcByteOffset = tmp17;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(512)
							int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(512)
							int srcElementSize = tmp18;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(512)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(512)
							int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(512)
							int tmp20 = _this->type;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(512)
							bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(512)
							if ((tmp21)){
								HX_STACK_LINE(512)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(512)
								int tmp22 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(512)
								int cloneLength = tmp22;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(512)
								::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(512)
								{
									HX_STACK_LINE(512)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(512)
									int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(512)
									::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(512)
									this2 = tmp25;
									HX_STACK_LINE(512)
									tmp23 = this2;
								}
								HX_STACK_LINE(512)
								_this->buffer = tmp23;
								HX_STACK_LINE(512)
								::haxe::io::Bytes tmp24 = srcData;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(512)
								int tmp25 = srcByteOffset;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(512)
								int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(512)
								_this->buffer->blit((int)0,tmp24,tmp25,tmp26);
							}
							else{
								HX_STACK_LINE(512)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(512)
							int tmp22 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(512)
							_this->byteLength = tmp22;
							HX_STACK_LINE(512)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(512)
							_this->length = srcLength;
							HX_STACK_LINE(512)
							tmp13 = _this;
						}
						HX_STACK_LINE(512)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(512)
						bool tmp13 = (buffer != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(512)
						if ((tmp13)){
							HX_STACK_LINE(512)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(512)
							{
								HX_STACK_LINE(512)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(512)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(512)
								bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(512)
								if ((tmp16)){
									HX_STACK_LINE(512)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(512)
								int tmp17 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(512)
								bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(512)
								if ((tmp18)){
									HX_STACK_LINE(512)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(512)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(512)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(512)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(512)
								bool tmp19 = (len == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(512)
								if ((tmp19)){
									HX_STACK_LINE(512)
									int tmp20 = bufferByteLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(512)
									newByteLength = tmp20;
									HX_STACK_LINE(512)
									int tmp21 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(512)
									bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(512)
									if ((tmp22)){
										HX_STACK_LINE(512)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(512)
									bool tmp23 = (newByteLength < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(512)
									if ((tmp23)){
										HX_STACK_LINE(512)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(512)
									int tmp20 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(512)
									newByteLength = tmp20;
									HX_STACK_LINE(512)
									int tmp21 = newByteLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(512)
									int newRange = tmp21;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(512)
									bool tmp22 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(512)
									if ((tmp22)){
										HX_STACK_LINE(512)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(512)
								_this->buffer = buffer;
								HX_STACK_LINE(512)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(512)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(512)
								Float tmp20 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(512)
								int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(512)
								_this->length = tmp21;
								HX_STACK_LINE(512)
								tmp14 = _this;
							}
							HX_STACK_LINE(512)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(512)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(512)
			tmp7 = this1;
		}
		HX_STACK_LINE(512)
		::snow::api::buffers::ArrayBufferView _colors = tmp7;		HX_STACK_VAR(_colors,"_colors");
		HX_STACK_LINE(513)
		::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
		HX_STACK_LINE(519)
		int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(519)
		::snow::api::buffers::ArrayBufferView tmp9 = _pos;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(519)
		::snow::api::buffers::ArrayBufferView tmp10 = _tcoords;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(519)
		::snow::api::buffers::ArrayBufferView tmp11 = _colors;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(519)
		::snow::api::buffers::ArrayBufferView tmp12 = _normals;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(519)
		this->submit_buffers(tmp8,tmp9,tmp10,tmp11,tmp12);
		HX_STACK_LINE(521)
		_pos = null();
		HX_STACK_LINE(522)
		_tcoords = null();
		HX_STACK_LINE(523)
		_colors = null();
		HX_STACK_LINE(524)
		_normals = null();
		HX_STACK_LINE(526)
		this->pos_floats = (int)0;
		HX_STACK_LINE(527)
		this->tcoord_floats = (int)0;
		HX_STACK_LINE(528)
		this->color_floats = (int)0;
		HX_STACK_LINE(529)
		this->normal_floats = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,submit_current_vertex_list,(void))

Void Batcher_obj::geometry_batch( ::phoenix::geometry::Geometry geom){
{
		HX_STACK_FRAME("phoenix.Batcher","geometry_batch",0x429a8233,"phoenix.Batcher.geometry_batch","phoenix/Batcher.hx",536,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_ARG(geom,"geom")
		HX_STACK_LINE(539)
		int tmp = geom->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(539)
		int tmp1 = this->pos_floats;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(539)
		Float tmp2 = (Float(tmp1) / Float((int)4));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(539)
		Float _count_after = tmp3;		HX_STACK_VAR(_count_after,"_count_after");
		HX_STACK_LINE(542)
		Float tmp4 = _count_after;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(542)
		int tmp5 = this->max_verts;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(542)
		bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(542)
		if ((tmp6)){
			HX_STACK_LINE(543)
			int tmp7 = this->pos_floats;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(543)
			bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(543)
			if ((tmp8)){
				HX_STACK_LINE(543)
				Dynamic();
			}
			else{
				HX_STACK_LINE(543)
				int tmp9 = this->pos_floats;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(543)
				int tmp10 = this->max_floats;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(543)
				bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(543)
				if ((tmp11)){
					HX_STACK_LINE(543)
					HX_STACK_DO_THROW(HX_HCSTRING("uh oh, somehow too many floats are being submitted (max:$max_floats, attempt:$pos_floats).","\x4e","\xe8","\x8c","\x4a"));
				}
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(543)
				{
					HX_STACK_LINE(543)
					::snow::api::buffers::ArrayBufferView tmp13 = this->pos_list;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(543)
					::haxe::io::Bytes buffer = tmp13->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(543)
					int tmp14 = this->pos_floats;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(543)
					Dynamic len = tmp14;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(543)
					::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(543)
					bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(543)
					if ((tmp15)){
						HX_STACK_LINE(543)
						::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(543)
						this1 = tmp16;
					}
					else{
						HX_STACK_LINE(543)
						bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(543)
						if ((tmp16)){
							HX_STACK_LINE(543)
							::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(543)
							{
								HX_STACK_LINE(543)
								::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(543)
								::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(543)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(543)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(543)
								_this->length = tmp19;
								HX_STACK_LINE(543)
								int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(543)
								_this->byteLength = tmp20;
								HX_STACK_LINE(543)
								::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(543)
								{
									HX_STACK_LINE(543)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(543)
									int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(543)
									::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(543)
									this2 = tmp23;
									HX_STACK_LINE(543)
									tmp21 = this2;
								}
								HX_STACK_LINE(543)
								_this->buffer = tmp21;
								HX_STACK_LINE(543)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(543)
								tmp17 = _this;
							}
							HX_STACK_LINE(543)
							this1 = tmp17;
						}
						else{
							HX_STACK_LINE(543)
							bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(543)
							if ((tmp17)){
								HX_STACK_LINE(543)
								::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(543)
								{
									HX_STACK_LINE(543)
									::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(543)
									::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(543)
									::haxe::io::Bytes tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(543)
									::haxe::io::Bytes srcData = tmp20;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(543)
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(543)
									int srcLength = tmp21;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(543)
									int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(543)
									int srcByteOffset = tmp22;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(543)
									int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(543)
									int srcElementSize = tmp23;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(543)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(543)
									int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(543)
									int tmp25 = _this->type;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(543)
									bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(543)
									if ((tmp26)){
										HX_STACK_LINE(543)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(543)
										int tmp27 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(543)
										int cloneLength = tmp27;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(543)
										::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(543)
										{
											HX_STACK_LINE(543)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(543)
											int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(543)
											::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(543)
											this2 = tmp30;
											HX_STACK_LINE(543)
											tmp28 = this2;
										}
										HX_STACK_LINE(543)
										_this->buffer = tmp28;
										HX_STACK_LINE(543)
										::haxe::io::Bytes tmp29 = srcData;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(543)
										int tmp30 = srcByteOffset;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(543)
										int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(543)
										_this->buffer->blit((int)0,tmp29,tmp30,tmp31);
									}
									else{
										HX_STACK_LINE(543)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(543)
									int tmp27 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(543)
									_this->byteLength = tmp27;
									HX_STACK_LINE(543)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(543)
									_this->length = srcLength;
									HX_STACK_LINE(543)
									tmp18 = _this;
								}
								HX_STACK_LINE(543)
								this1 = tmp18;
							}
							else{
								HX_STACK_LINE(543)
								bool tmp18 = (buffer != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(543)
								if ((tmp18)){
									HX_STACK_LINE(543)
									::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(543)
									{
										HX_STACK_LINE(543)
										::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(543)
										::snow::api::buffers::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(543)
										bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(543)
										if ((tmp21)){
											HX_STACK_LINE(543)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(543)
										int tmp22 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(543)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(543)
										if ((tmp23)){
											HX_STACK_LINE(543)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(543)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(543)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(543)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(543)
										bool tmp24 = (len == null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(543)
										if ((tmp24)){
											HX_STACK_LINE(543)
											int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(543)
											newByteLength = tmp25;
											HX_STACK_LINE(543)
											int tmp26 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(543)
											bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(543)
											if ((tmp27)){
												HX_STACK_LINE(543)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(543)
											bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(543)
											if ((tmp28)){
												HX_STACK_LINE(543)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(543)
											int tmp25 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(543)
											newByteLength = tmp25;
											HX_STACK_LINE(543)
											int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(543)
											int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(543)
											bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(543)
											if ((tmp27)){
												HX_STACK_LINE(543)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(543)
										_this->buffer = buffer;
										HX_STACK_LINE(543)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(543)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(543)
										Float tmp25 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(543)
										int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(543)
										_this->length = tmp26;
										HX_STACK_LINE(543)
										tmp19 = _this;
									}
									HX_STACK_LINE(543)
									this1 = tmp19;
								}
								else{
									HX_STACK_LINE(543)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
					HX_STACK_LINE(543)
					tmp12 = this1;
				}
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView _pos = tmp12;		HX_STACK_VAR(_pos,"_pos");
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(543)
				{
					HX_STACK_LINE(543)
					::snow::api::buffers::ArrayBufferView tmp14 = this->tcoord_list;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(543)
					::haxe::io::Bytes buffer = tmp14->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(543)
					int tmp15 = this->tcoord_floats;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(543)
					Dynamic len = tmp15;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(543)
					::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(543)
					bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(543)
					if ((tmp16)){
						HX_STACK_LINE(543)
						::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(543)
						this1 = tmp17;
					}
					else{
						HX_STACK_LINE(543)
						bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(543)
						if ((tmp17)){
							HX_STACK_LINE(543)
							::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(543)
							{
								HX_STACK_LINE(543)
								::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(543)
								::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(543)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(543)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(543)
								_this->length = tmp20;
								HX_STACK_LINE(543)
								int tmp21 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(543)
								_this->byteLength = tmp21;
								HX_STACK_LINE(543)
								::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(543)
								{
									HX_STACK_LINE(543)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(543)
									int tmp23 = _this->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(543)
									::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(543)
									this2 = tmp24;
									HX_STACK_LINE(543)
									tmp22 = this2;
								}
								HX_STACK_LINE(543)
								_this->buffer = tmp22;
								HX_STACK_LINE(543)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(543)
								tmp18 = _this;
							}
							HX_STACK_LINE(543)
							this1 = tmp18;
						}
						else{
							HX_STACK_LINE(543)
							bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(543)
							if ((tmp18)){
								HX_STACK_LINE(543)
								::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(543)
								{
									HX_STACK_LINE(543)
									::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(543)
									::snow::api::buffers::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(543)
									::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(543)
									::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(543)
									int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(543)
									int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(543)
									int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(543)
									int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(543)
									int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(543)
									int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(543)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(543)
									int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(543)
									int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(543)
									bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(543)
									if ((tmp27)){
										HX_STACK_LINE(543)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(543)
										int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(543)
										int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(543)
										::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(543)
										{
											HX_STACK_LINE(543)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(543)
											int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(543)
											::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(543)
											this2 = tmp31;
											HX_STACK_LINE(543)
											tmp29 = this2;
										}
										HX_STACK_LINE(543)
										_this->buffer = tmp29;
										HX_STACK_LINE(543)
										::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(543)
										int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(543)
										int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(543)
										_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
									}
									else{
										HX_STACK_LINE(543)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(543)
									int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(543)
									_this->byteLength = tmp28;
									HX_STACK_LINE(543)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(543)
									_this->length = srcLength;
									HX_STACK_LINE(543)
									tmp19 = _this;
								}
								HX_STACK_LINE(543)
								this1 = tmp19;
							}
							else{
								HX_STACK_LINE(543)
								bool tmp19 = (buffer != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(543)
								if ((tmp19)){
									HX_STACK_LINE(543)
									::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(543)
									{
										HX_STACK_LINE(543)
										::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(543)
										::snow::api::buffers::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(543)
										bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(543)
										if ((tmp22)){
											HX_STACK_LINE(543)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(543)
										int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(543)
										bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(543)
										if ((tmp24)){
											HX_STACK_LINE(543)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(543)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(543)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(543)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(543)
										bool tmp25 = (len == null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(543)
										if ((tmp25)){
											HX_STACK_LINE(543)
											int tmp26 = bufferByteLength;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(543)
											newByteLength = tmp26;
											HX_STACK_LINE(543)
											int tmp27 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(543)
											bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(543)
											if ((tmp28)){
												HX_STACK_LINE(543)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(543)
											bool tmp29 = (newByteLength < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(543)
											if ((tmp29)){
												HX_STACK_LINE(543)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(543)
											int tmp26 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(543)
											newByteLength = tmp26;
											HX_STACK_LINE(543)
											int tmp27 = newByteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(543)
											int newRange = tmp27;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(543)
											bool tmp28 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(543)
											if ((tmp28)){
												HX_STACK_LINE(543)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(543)
										_this->buffer = buffer;
										HX_STACK_LINE(543)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(543)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(543)
										Float tmp26 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(543)
										int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(543)
										_this->length = tmp27;
										HX_STACK_LINE(543)
										tmp20 = _this;
									}
									HX_STACK_LINE(543)
									this1 = tmp20;
								}
								else{
									HX_STACK_LINE(543)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
					HX_STACK_LINE(543)
					tmp13 = this1;
				}
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView _tcoords = tmp13;		HX_STACK_VAR(_tcoords,"_tcoords");
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(543)
				{
					HX_STACK_LINE(543)
					::snow::api::buffers::ArrayBufferView tmp15 = this->color_list;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(543)
					::haxe::io::Bytes buffer = tmp15->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(543)
					int tmp16 = this->color_floats;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(543)
					Dynamic len = tmp16;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(543)
					::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(543)
					bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(543)
					if ((tmp17)){
						HX_STACK_LINE(543)
						::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(543)
						this1 = tmp18;
					}
					else{
						HX_STACK_LINE(543)
						bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(543)
						if ((tmp18)){
							HX_STACK_LINE(543)
							::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(543)
							{
								HX_STACK_LINE(543)
								::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(543)
								::snow::api::buffers::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(543)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(543)
								int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(543)
								_this->length = tmp21;
								HX_STACK_LINE(543)
								int tmp22 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(543)
								_this->byteLength = tmp22;
								HX_STACK_LINE(543)
								::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(543)
								{
									HX_STACK_LINE(543)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(543)
									int tmp24 = _this->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(543)
									::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(543)
									this2 = tmp25;
									HX_STACK_LINE(543)
									tmp23 = this2;
								}
								HX_STACK_LINE(543)
								_this->buffer = tmp23;
								HX_STACK_LINE(543)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(543)
								tmp19 = _this;
							}
							HX_STACK_LINE(543)
							this1 = tmp19;
						}
						else{
							HX_STACK_LINE(543)
							bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(543)
							if ((tmp19)){
								HX_STACK_LINE(543)
								::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(543)
								{
									HX_STACK_LINE(543)
									::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(543)
									::snow::api::buffers::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(543)
									::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(543)
									::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(543)
									int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(543)
									int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(543)
									int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(543)
									int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(543)
									int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(543)
									int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(543)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(543)
									int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(543)
									int tmp27 = _this->type;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(543)
									bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(543)
									if ((tmp28)){
										HX_STACK_LINE(543)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(543)
										int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(543)
										int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(543)
										::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(543)
										{
											HX_STACK_LINE(543)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(543)
											int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(543)
											::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(543)
											this2 = tmp32;
											HX_STACK_LINE(543)
											tmp30 = this2;
										}
										HX_STACK_LINE(543)
										_this->buffer = tmp30;
										HX_STACK_LINE(543)
										::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(543)
										int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(543)
										int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(543)
										_this->buffer->blit((int)0,tmp31,tmp32,tmp33);
									}
									else{
										HX_STACK_LINE(543)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(543)
									int tmp29 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(543)
									_this->byteLength = tmp29;
									HX_STACK_LINE(543)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(543)
									_this->length = srcLength;
									HX_STACK_LINE(543)
									tmp20 = _this;
								}
								HX_STACK_LINE(543)
								this1 = tmp20;
							}
							else{
								HX_STACK_LINE(543)
								bool tmp20 = (buffer != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(543)
								if ((tmp20)){
									HX_STACK_LINE(543)
									::snow::api::buffers::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(543)
									{
										HX_STACK_LINE(543)
										::snow::api::buffers::ArrayBufferView tmp22 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(543)
										::snow::api::buffers::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(543)
										bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(543)
										if ((tmp23)){
											HX_STACK_LINE(543)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(543)
										int tmp24 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(543)
										bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(543)
										if ((tmp25)){
											HX_STACK_LINE(543)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(543)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(543)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(543)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(543)
										bool tmp26 = (len == null());		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(543)
										if ((tmp26)){
											HX_STACK_LINE(543)
											int tmp27 = bufferByteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(543)
											newByteLength = tmp27;
											HX_STACK_LINE(543)
											int tmp28 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(543)
											bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(543)
											if ((tmp29)){
												HX_STACK_LINE(543)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(543)
											bool tmp30 = (newByteLength < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(543)
											if ((tmp30)){
												HX_STACK_LINE(543)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(543)
											int tmp27 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(543)
											newByteLength = tmp27;
											HX_STACK_LINE(543)
											int tmp28 = newByteLength;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(543)
											int newRange = tmp28;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(543)
											bool tmp29 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(543)
											if ((tmp29)){
												HX_STACK_LINE(543)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(543)
										_this->buffer = buffer;
										HX_STACK_LINE(543)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(543)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(543)
										Float tmp27 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(543)
										int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(543)
										_this->length = tmp28;
										HX_STACK_LINE(543)
										tmp21 = _this;
									}
									HX_STACK_LINE(543)
									this1 = tmp21;
								}
								else{
									HX_STACK_LINE(543)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
					HX_STACK_LINE(543)
					tmp14 = this1;
				}
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView _colors = tmp14;		HX_STACK_VAR(_colors,"_colors");
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView _normals = null();		HX_STACK_VAR(_normals,"_normals");
				HX_STACK_LINE(543)
				int tmp15 = geom->state->primitive_type;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView tmp16 = _pos;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView tmp17 = _tcoords;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView tmp18 = _colors;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(543)
				::snow::api::buffers::ArrayBufferView tmp19 = _normals;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(543)
				this->submit_buffers(tmp15,tmp16,tmp17,tmp18,tmp19);
				HX_STACK_LINE(543)
				_pos = null();
				HX_STACK_LINE(543)
				_tcoords = null();
				HX_STACK_LINE(543)
				_colors = null();
				HX_STACK_LINE(543)
				_normals = null();
				HX_STACK_LINE(543)
				this->pos_floats = (int)0;
				HX_STACK_LINE(543)
				this->tcoord_floats = (int)0;
				HX_STACK_LINE(543)
				this->color_floats = (int)0;
				HX_STACK_LINE(543)
				this->normal_floats = (int)0;
			}
		}
		HX_STACK_LINE(546)
		{
			HX_STACK_LINE(547)
			int tmp7 = this->pos_floats;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(547)
			int vert_index = tmp7;		HX_STACK_VAR(vert_index,"vert_index");
			HX_STACK_LINE(547)
			int tmp8 = this->tcoord_floats;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(547)
			int tcoord_index = tmp8;		HX_STACK_VAR(tcoord_index,"tcoord_index");
			HX_STACK_LINE(547)
			int tmp9 = this->color_floats;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(547)
			int color_index = tmp9;		HX_STACK_VAR(color_index,"color_index");
			HX_STACK_LINE(547)
			int tmp10 = this->normal_floats;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(547)
			int normal_index = tmp10;		HX_STACK_VAR(normal_index,"normal_index");
			HX_STACK_LINE(548)
			::snow::api::buffers::ArrayBufferView tmp11 = this->pos_list;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(548)
			::snow::api::buffers::ArrayBufferView vertlist = tmp11;		HX_STACK_VAR(vertlist,"vertlist");
			HX_STACK_LINE(548)
			::snow::api::buffers::ArrayBufferView tmp12 = this->tcoord_list;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(548)
			::snow::api::buffers::ArrayBufferView tcoordlist = tmp12;		HX_STACK_VAR(tcoordlist,"tcoordlist");
			HX_STACK_LINE(548)
			::snow::api::buffers::ArrayBufferView tmp13 = this->color_list;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(548)
			::snow::api::buffers::ArrayBufferView colorlist = tmp13;		HX_STACK_VAR(colorlist,"colorlist");
			HX_STACK_LINE(546)
			{
				HX_STACK_LINE(546)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(546)
				Array< ::Dynamic > _g1 = geom->vertices;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(546)
				while((true)){
					HX_STACK_LINE(546)
					bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(546)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(546)
					if ((tmp15)){
						HX_STACK_LINE(546)
						break;
					}
					HX_STACK_LINE(546)
					::phoenix::geometry::Vertex tmp16 = _g1->__get(_g).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(546)
					::phoenix::geometry::Vertex v = tmp16;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(546)
					++(_g);
					HX_STACK_LINE(546)
					{
						HX_STACK_LINE(546)
						::phoenix::Vector _this = geom->_final_vert_position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(546)
						Float tmp17 = v->pos->x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(546)
						Float _x = tmp17;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(546)
						Float tmp18 = v->pos->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(546)
						Float _y = tmp18;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(546)
						Float tmp19 = v->pos->z;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(546)
						Float _z = tmp19;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(546)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(546)
						_this->ignore_listeners = true;
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							_this->x = _x;
							HX_STACK_LINE(546)
							bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(546)
							if ((tmp20)){
								HX_STACK_LINE(546)
								_this->x;
							}
							else{
								HX_STACK_LINE(546)
								bool tmp21 = (_this->listen_x != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(546)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(546)
								if ((tmp21)){
									HX_STACK_LINE(546)
									bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(546)
									bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(546)
									tmp22 = !(tmp24);
								}
								else{
									HX_STACK_LINE(546)
									tmp22 = false;
								}
								HX_STACK_LINE(546)
								if ((tmp22)){
									HX_STACK_LINE(546)
									Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(546)
									_this->listen_x(tmp23);
								}
								HX_STACK_LINE(546)
								_this->x;
							}
						}
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							_this->y = _y;
							HX_STACK_LINE(546)
							bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(546)
							if ((tmp20)){
								HX_STACK_LINE(546)
								_this->y;
							}
							else{
								HX_STACK_LINE(546)
								bool tmp21 = (_this->listen_y != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(546)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(546)
								if ((tmp21)){
									HX_STACK_LINE(546)
									bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(546)
									bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(546)
									tmp22 = !(tmp24);
								}
								else{
									HX_STACK_LINE(546)
									tmp22 = false;
								}
								HX_STACK_LINE(546)
								if ((tmp22)){
									HX_STACK_LINE(546)
									Float tmp23 = _y;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(546)
									_this->listen_y(tmp23);
								}
								HX_STACK_LINE(546)
								_this->y;
							}
						}
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							_this->z = _z;
							HX_STACK_LINE(546)
							bool tmp20 = _this->_construct;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(546)
							if ((tmp20)){
								HX_STACK_LINE(546)
								_this->z;
							}
							else{
								HX_STACK_LINE(546)
								bool tmp21 = (_this->listen_z != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(546)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(546)
								if ((tmp21)){
									HX_STACK_LINE(546)
									bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(546)
									bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(546)
									tmp22 = !(tmp24);
								}
								else{
									HX_STACK_LINE(546)
									tmp22 = false;
								}
								HX_STACK_LINE(546)
								if ((tmp22)){
									HX_STACK_LINE(546)
									Float tmp23 = _z;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(546)
									_this->listen_z(tmp23);
								}
								HX_STACK_LINE(546)
								_this->z;
							}
						}
						HX_STACK_LINE(546)
						Float tmp20 = v->pos->w;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(546)
						_this->w = tmp20;
						HX_STACK_LINE(546)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(546)
						bool tmp21 = (_this->listen_x != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(546)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(546)
						if ((tmp21)){
							HX_STACK_LINE(546)
							bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(546)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(546)
							tmp22 = !(tmp24);
						}
						else{
							HX_STACK_LINE(546)
							tmp22 = false;
						}
						HX_STACK_LINE(546)
						if ((tmp22)){
							HX_STACK_LINE(546)
							Float tmp23 = _this->x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(546)
							_this->listen_x(tmp23);
						}
						HX_STACK_LINE(546)
						bool tmp23 = (_this->listen_y != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(546)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(546)
						if ((tmp23)){
							HX_STACK_LINE(546)
							bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(546)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(546)
							tmp24 = !(tmp26);
						}
						else{
							HX_STACK_LINE(546)
							tmp24 = false;
						}
						HX_STACK_LINE(546)
						if ((tmp24)){
							HX_STACK_LINE(546)
							Float tmp25 = _this->y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(546)
							_this->listen_y(tmp25);
						}
						HX_STACK_LINE(546)
						bool tmp25 = (_this->listen_z != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(546)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(546)
						if ((tmp25)){
							HX_STACK_LINE(546)
							bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(546)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(546)
							tmp26 = !(tmp28);
						}
						else{
							HX_STACK_LINE(546)
							tmp26 = false;
						}
						HX_STACK_LINE(546)
						if ((tmp26)){
							HX_STACK_LINE(546)
							Float tmp27 = _this->z;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(546)
							_this->listen_z(tmp27);
						}
						HX_STACK_LINE(546)
						_this;
					}
					HX_STACK_LINE(546)
					{
						HX_STACK_LINE(546)
						::phoenix::Vector _this = geom->_final_vert_position;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(546)
						::phoenix::Matrix tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							::phoenix::Spatial tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(546)
							{
								HX_STACK_LINE(546)
								::phoenix::Transform _this1 = geom->transform;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(546)
								bool tmp19 = _this1->_destroying;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(546)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(546)
								if ((tmp20)){
									HX_STACK_LINE(546)
									bool tmp21 = (_this1->parent != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(546)
									if ((tmp21)){
										HX_STACK_LINE(546)
										bool tmp22 = _this1->parent->dirty;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(546)
										if ((tmp22)){
											HX_STACK_LINE(546)
											_this1->parent->clean();
										}
									}
									HX_STACK_LINE(546)
									bool tmp22 = _this1->dirty;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(546)
									bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(546)
									if ((tmp22)){
										HX_STACK_LINE(546)
										bool tmp24 = _this1->_cleaning;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(546)
										bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(546)
										tmp23 = !(tmp25);
									}
									else{
										HX_STACK_LINE(546)
										tmp23 = false;
									}
									HX_STACK_LINE(546)
									if ((tmp23)){
										HX_STACK_LINE(546)
										_this1->clean();
									}
								}
								HX_STACK_LINE(546)
								tmp18 = _this1->world;
							}
							HX_STACK_LINE(546)
							::phoenix::Spatial _this1 = tmp18;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(546)
							tmp17 = _this1->matrix;
						}
						HX_STACK_LINE(546)
						::phoenix::Matrix _m = tmp17;		HX_STACK_VAR(_m,"_m");
						HX_STACK_LINE(546)
						Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(546)
						Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(546)
						Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(546)
						Array< Float > e = _m->elements;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							Float tmp18 = e->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(546)
							Float tmp19 = _x;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(546)
							Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(546)
							Float tmp21 = e->__get((int)4);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(546)
							Float tmp22 = _y;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(546)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(546)
							Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(546)
							Float tmp25 = e->__get((int)8);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(546)
							Float tmp26 = _z;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(546)
							Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(546)
							Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(546)
							Float tmp29 = e->__get((int)12);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(546)
							Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(546)
							Float _x1 = tmp30;		HX_STACK_VAR(_x1,"_x1");
							HX_STACK_LINE(546)
							Float tmp31 = e->__get((int)1);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(546)
							Float tmp32 = _x;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(546)
							Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(546)
							Float tmp34 = e->__get((int)5);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(546)
							Float tmp35 = _y;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(546)
							Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(546)
							Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(546)
							Float tmp38 = e->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(546)
							Float tmp39 = _z;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(546)
							Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(546)
							Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(546)
							Float tmp42 = e->__get((int)13);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(546)
							Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(546)
							Float _y1 = tmp43;		HX_STACK_VAR(_y1,"_y1");
							HX_STACK_LINE(546)
							Float tmp44 = e->__get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(546)
							Float tmp45 = _x;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(546)
							Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(546)
							Float tmp47 = e->__get((int)6);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(546)
							Float tmp48 = _y;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(546)
							Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(546)
							Float tmp50 = (tmp46 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(546)
							Float tmp51 = e->__get((int)10);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(546)
							Float tmp52 = _z;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(546)
							Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(546)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(546)
							Float tmp55 = e->__get((int)14);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(546)
							Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(546)
							Float _z1 = tmp56;		HX_STACK_VAR(_z1,"_z1");
							HX_STACK_LINE(546)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(546)
							_this->ignore_listeners = true;
							HX_STACK_LINE(546)
							{
								HX_STACK_LINE(546)
								_this->x = _x1;
								HX_STACK_LINE(546)
								bool tmp57 = _this->_construct;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(546)
								if ((tmp57)){
									HX_STACK_LINE(546)
									_this->x;
								}
								else{
									HX_STACK_LINE(546)
									bool tmp58 = (_this->listen_x != null());		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(546)
									bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(546)
									if ((tmp58)){
										HX_STACK_LINE(546)
										bool tmp60 = _this->ignore_listeners;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(546)
										bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(546)
										tmp59 = !(tmp61);
									}
									else{
										HX_STACK_LINE(546)
										tmp59 = false;
									}
									HX_STACK_LINE(546)
									if ((tmp59)){
										HX_STACK_LINE(546)
										Float tmp60 = _x1;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(546)
										_this->listen_x(tmp60);
									}
									HX_STACK_LINE(546)
									_this->x;
								}
							}
							HX_STACK_LINE(546)
							{
								HX_STACK_LINE(546)
								_this->y = _y1;
								HX_STACK_LINE(546)
								bool tmp57 = _this->_construct;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(546)
								if ((tmp57)){
									HX_STACK_LINE(546)
									_this->y;
								}
								else{
									HX_STACK_LINE(546)
									bool tmp58 = (_this->listen_y != null());		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(546)
									bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(546)
									if ((tmp58)){
										HX_STACK_LINE(546)
										bool tmp60 = _this->ignore_listeners;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(546)
										bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(546)
										tmp59 = !(tmp61);
									}
									else{
										HX_STACK_LINE(546)
										tmp59 = false;
									}
									HX_STACK_LINE(546)
									if ((tmp59)){
										HX_STACK_LINE(546)
										Float tmp60 = _y1;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(546)
										_this->listen_y(tmp60);
									}
									HX_STACK_LINE(546)
									_this->y;
								}
							}
							HX_STACK_LINE(546)
							{
								HX_STACK_LINE(546)
								_this->z = _z1;
								HX_STACK_LINE(546)
								bool tmp57 = _this->_construct;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(546)
								if ((tmp57)){
									HX_STACK_LINE(546)
									_this->z;
								}
								else{
									HX_STACK_LINE(546)
									bool tmp58 = (_this->listen_z != null());		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(546)
									bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(546)
									if ((tmp58)){
										HX_STACK_LINE(546)
										bool tmp60 = _this->ignore_listeners;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(546)
										bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(546)
										tmp59 = !(tmp61);
									}
									else{
										HX_STACK_LINE(546)
										tmp59 = false;
									}
									HX_STACK_LINE(546)
									if ((tmp59)){
										HX_STACK_LINE(546)
										Float tmp60 = _z1;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(546)
										_this->listen_z(tmp60);
									}
									HX_STACK_LINE(546)
									_this->z;
								}
							}
							HX_STACK_LINE(546)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(546)
							bool tmp57 = (_this->listen_x != null());		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(546)
							bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(546)
							if ((tmp57)){
								HX_STACK_LINE(546)
								bool tmp59 = _this->ignore_listeners;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(546)
								bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(546)
								tmp58 = !(tmp60);
							}
							else{
								HX_STACK_LINE(546)
								tmp58 = false;
							}
							HX_STACK_LINE(546)
							if ((tmp58)){
								HX_STACK_LINE(546)
								Float tmp59 = _this->x;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(546)
								_this->listen_x(tmp59);
							}
							HX_STACK_LINE(546)
							bool tmp59 = (_this->listen_y != null());		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(546)
							bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(546)
							if ((tmp59)){
								HX_STACK_LINE(546)
								bool tmp61 = _this->ignore_listeners;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(546)
								bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(546)
								tmp60 = !(tmp62);
							}
							else{
								HX_STACK_LINE(546)
								tmp60 = false;
							}
							HX_STACK_LINE(546)
							if ((tmp60)){
								HX_STACK_LINE(546)
								Float tmp61 = _this->y;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(546)
								_this->listen_y(tmp61);
							}
							HX_STACK_LINE(546)
							bool tmp61 = (_this->listen_z != null());		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(546)
							bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(546)
							if ((tmp61)){
								HX_STACK_LINE(546)
								bool tmp63 = _this->ignore_listeners;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(546)
								bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(546)
								tmp62 = !(tmp64);
							}
							else{
								HX_STACK_LINE(546)
								tmp62 = false;
							}
							HX_STACK_LINE(546)
							if ((tmp62)){
								HX_STACK_LINE(546)
								Float tmp63 = _this->z;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(546)
								_this->listen_z(tmp63);
							}
							HX_STACK_LINE(546)
							_this;
						}
						HX_STACK_LINE(546)
						_this;
					}
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (vert_index * (int)4)),geom->_final_vert_position->x);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)1)) * (int)4)),geom->_final_vert_position->y);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)2)) * (int)4)),geom->_final_vert_position->z);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(vertlist->buffer->b,(vertlist->byteOffset + (((vert_index + (int)3)) * (int)4)),geom->_final_vert_position->w);
					HX_STACK_LINE(546)
					hx::AddEq(vert_index,(int)4);
					HX_STACK_LINE(546)
					::phoenix::geometry::TextureCoord tmp17 = v->uv->uv0;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(546)
					::phoenix::geometry::TextureCoord _vuv = tmp17;		HX_STACK_VAR(_vuv,"_vuv");
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (tcoord_index * (int)4)),_vuv->u);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)1)) * (int)4)),_vuv->v);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)2)) * (int)4)),_vuv->w);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(tcoordlist->buffer->b,(tcoordlist->byteOffset + (((tcoord_index + (int)3)) * (int)4)),_vuv->t);
					HX_STACK_LINE(546)
					hx::AddEq(tcoord_index,(int)4);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (color_index * (int)4)),v->color->r);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)1)) * (int)4)),v->color->g);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)2)) * (int)4)),v->color->b);
					HX_STACK_LINE(546)
					::__hxcpp_memory_set_float(colorlist->buffer->b,(colorlist->byteOffset + (((color_index + (int)3)) * (int)4)),v->color->a);
					HX_STACK_LINE(546)
					hx::AddEq(color_index,(int)4);
					HX_STACK_LINE(546)
					hx::AddEq(normal_index,(int)4);
				}
			}
		}
		HX_STACK_LINE(551)
		int tmp7 = geom->vertices->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(551)
		int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(551)
		int _length = tmp8;		HX_STACK_VAR(_length,"_length");
		HX_STACK_LINE(553)
		hx::AddEq(this->pos_floats,_length);
		HX_STACK_LINE(554)
		hx::AddEq(this->tcoord_floats,_length);
		HX_STACK_LINE(555)
		hx::AddEq(this->color_floats,_length);
		HX_STACK_LINE(556)
		hx::AddEq(this->normal_floats,_length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,geometry_batch,(void))

int Batcher_obj::set_layer( int _layer){
	HX_STACK_FRAME("phoenix.Batcher","set_layer",0x4cd9e8ee,"phoenix.Batcher.set_layer","phoenix/Batcher.hx",563,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_layer,"_layer")
	HX_STACK_LINE(566)
	this->layer = _layer;
	HX_STACK_LINE(568)
	::phoenix::Renderer tmp = this->renderer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	::phoenix::Renderer tmp1 = this->renderer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(568)
	Dynamic tmp2 = tmp1->sort_batchers_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(568)
	tmp->batchers->sort(tmp2);
	HX_STACK_LINE(571)
	int tmp3 = this->layer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(571)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,set_layer,return )

::String Batcher_obj::toString( ){
	HX_STACK_FRAME("phoenix.Batcher","toString",0x2a536732,"phoenix.Batcher.toString","phoenix/Batcher.hx",576,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_LINE(577)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(577)
	::String tmp1 = (HX_HCSTRING("Batcher(","\xc1","\xeb","\xbf","\x27") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(577)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(577)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,toString,return )

int Batcher_obj::compare( ::phoenix::Batcher other){
	HX_STACK_FRAME("phoenix.Batcher","compare",0xcf1d34df,"phoenix.Batcher.compare","phoenix/Batcher.hx",582,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(584)
	int tmp = this->layer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(584)
	int tmp1 = other->layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(584)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(584)
	if ((tmp2)){
		HX_STACK_LINE(584)
		return (int)0;
	}
	HX_STACK_LINE(585)
	int tmp3 = this->layer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(585)
	int tmp4 = other->layer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(585)
	bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(585)
	if ((tmp5)){
		HX_STACK_LINE(585)
		return (int)-1;
	}
	HX_STACK_LINE(587)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,compare,return )

::String Batcher_obj::compare_rule_to_string( int r){
	HX_STACK_FRAME("phoenix.Batcher","compare_rule_to_string",0xb26938b2,"phoenix.Batcher.compare_rule_to_string","phoenix/Batcher.hx",591,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(592)
	int tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(592)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(592)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(594)
			tmp1 = HX_HCSTRING("same","\x66","\x83","\x4d","\x4c");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(595)
			tmp1 = HX_HCSTRING("depth <","\xdf","\x93","\x4a","\x6a");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(596)
			tmp1 = HX_HCSTRING("depth >","\xe1","\x93","\x4a","\x6a");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(598)
			tmp1 = HX_HCSTRING("shader <","\x81","\xae","\x2a","\x36");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(599)
			tmp1 = HX_HCSTRING("shader >","\x83","\xae","\x2a","\x36");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(600)
			tmp1 = HX_HCSTRING("shader s._ >","\x87","\x6d","\x84","\x5c");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(601)
			tmp1 = HX_HCSTRING("shader _.s <","\x85","\x00","\x90","\xd8");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(603)
			tmp1 = HX_HCSTRING("texture <","\xb7","\x11","\x49","\xaf");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(604)
			tmp1 = HX_HCSTRING("texture >","\xb9","\x11","\x49","\xaf");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(605)
			tmp1 = HX_HCSTRING("texture t._ >","\x3e","\x38","\x1a","\x13");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(606)
			tmp1 = HX_HCSTRING("texture _.t <","\xfc","\xf8","\xbf","\xfb");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(608)
			tmp1 = HX_HCSTRING("primitive <","\x83","\x5c","\x09","\x15");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(609)
			tmp1 = HX_HCSTRING("primitive >","\x85","\x5c","\x09","\x15");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(610)
			tmp1 = HX_HCSTRING("unclipped","\xc6","\x0e","\xca","\xfe");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(611)
			tmp1 = HX_HCSTRING("clipped","\xff","\x07","\xc8","\x02");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(612)
			tmp1 = HX_HCSTRING("timestamp <","\x72","\x52","\xce","\xd6");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(613)
			tmp1 = HX_HCSTRING("timestamp >","\x74","\x52","\xce","\xd6");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(614)
			tmp1 = HX_HCSTRING("timestamp ==","\x6a","\xd2","\xb9","\x1d");
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(615)
			tmp1 = HX_HCSTRING("sequence <","\x9d","\x0c","\x22","\xd5");
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(616)
			tmp1 = HX_HCSTRING("sequence >","\x9f","\x0c","\x22","\xd5");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(617)
			tmp1 = HX_HCSTRING("fallback","\x22","\xf0","\x9d","\x2a");
		}
		;break;
		default: {
			HX_STACK_LINE(618)
			tmp1 = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
		}
	}
	HX_STACK_LINE(592)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Batcher_obj,compare_rule_to_string,return )

int Batcher_obj::compare_rule( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b){
	HX_STACK_FRAME("phoenix.Batcher","compare_rule",0xfee0579c,"phoenix.Batcher.compare_rule","phoenix/Batcher.hx",624,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(626)
	bool tmp = (a->uuid == b->uuid);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(626)
	if ((tmp)){
		HX_STACK_LINE(627)
		return (int)0;
	}
	HX_STACK_LINE(630)
	bool tmp1 = (a->depth < b->depth);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(630)
	if ((tmp1)){
		HX_STACK_LINE(631)
		return (int)1;
	}
	HX_STACK_LINE(632)
	bool tmp2 = (a->depth > b->depth);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(632)
	if ((tmp2)){
		HX_STACK_LINE(633)
		return (int)2;
	}
	HX_STACK_LINE(638)
	bool tmp3 = (a->shader != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(638)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(638)
	if ((tmp3)){
		HX_STACK_LINE(638)
		tmp4 = (b->shader != null());
	}
	else{
		HX_STACK_LINE(638)
		tmp4 = false;
	}
	HX_STACK_LINE(638)
	if ((tmp4)){
		HX_STACK_LINE(641)
		::String tmp5 = a->shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(641)
		::String tmp6 = b->shader->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(641)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(641)
		if ((tmp7)){
			HX_STACK_LINE(642)
			return (int)3;
		}
		HX_STACK_LINE(643)
		::String tmp8 = a->shader->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(643)
		::String tmp9 = b->shader->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(643)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(643)
		if ((tmp10)){
			HX_STACK_LINE(644)
			return (int)4;
		}
	}
	else{
		HX_STACK_LINE(647)
		bool tmp5 = (a->shader != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(647)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(647)
		if ((tmp5)){
			HX_STACK_LINE(647)
			tmp6 = (b->shader == null());
		}
		else{
			HX_STACK_LINE(647)
			tmp6 = false;
		}
		HX_STACK_LINE(647)
		if ((tmp6)){
			HX_STACK_LINE(648)
			return (int)5;
		}
		else{
			HX_STACK_LINE(650)
			bool tmp7 = (a->shader == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(650)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(650)
			if ((tmp7)){
				HX_STACK_LINE(650)
				tmp8 = (b->shader != null());
			}
			else{
				HX_STACK_LINE(650)
				tmp8 = false;
			}
			HX_STACK_LINE(650)
			if ((tmp8)){
				HX_STACK_LINE(651)
				return (int)6;
			}
		}
	}
	HX_STACK_LINE(655)
	bool tmp5 = (a->texture != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(655)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(655)
	if ((tmp5)){
		HX_STACK_LINE(655)
		tmp6 = (b->texture != null());
	}
	else{
		HX_STACK_LINE(655)
		tmp6 = false;
	}
	HX_STACK_LINE(655)
	if ((tmp6)){
		HX_STACK_LINE(658)
		::String tmp7 = a->texture->id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(658)
		::String tmp8 = b->texture->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(658)
		bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(658)
		if ((tmp9)){
			HX_STACK_LINE(659)
			return (int)7;
		}
		HX_STACK_LINE(660)
		::String tmp10 = a->texture->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(660)
		::String tmp11 = b->texture->id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(660)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(660)
		if ((tmp12)){
			HX_STACK_LINE(661)
			return (int)8;
		}
	}
	else{
		HX_STACK_LINE(664)
		bool tmp7 = (a->texture != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(664)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(664)
		if ((tmp7)){
			HX_STACK_LINE(664)
			tmp8 = (b->texture == null());
		}
		else{
			HX_STACK_LINE(664)
			tmp8 = false;
		}
		HX_STACK_LINE(664)
		if ((tmp8)){
			HX_STACK_LINE(665)
			return (int)9;
		}
		else{
			HX_STACK_LINE(667)
			bool tmp9 = (a->texture == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(667)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(667)
			if ((tmp9)){
				HX_STACK_LINE(667)
				tmp10 = (b->texture != null());
			}
			else{
				HX_STACK_LINE(667)
				tmp10 = false;
			}
			HX_STACK_LINE(667)
			if ((tmp10)){
				HX_STACK_LINE(668)
				return (int)10;
			}
		}
	}
	HX_STACK_LINE(674)
	int a_primitive_index = a->primitive_type;		HX_STACK_VAR(a_primitive_index,"a_primitive_index");
	HX_STACK_LINE(675)
	int b_primitive_index = b->primitive_type;		HX_STACK_VAR(b_primitive_index,"b_primitive_index");
	HX_STACK_LINE(677)
	bool tmp7 = (a_primitive_index < b_primitive_index);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(677)
	if ((tmp7)){
		HX_STACK_LINE(678)
		return (int)11;
	}
	HX_STACK_LINE(679)
	bool tmp8 = (a_primitive_index > b_primitive_index);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(679)
	if ((tmp8)){
		HX_STACK_LINE(680)
		return (int)12;
	}
	HX_STACK_LINE(683)
	bool tmp9 = (a->clip != b->clip);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(683)
	if ((tmp9)){
		HX_STACK_LINE(685)
		bool tmp10 = (a->clip == false);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(685)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(685)
		if ((tmp10)){
			HX_STACK_LINE(685)
			tmp11 = (b->clip == true);
		}
		else{
			HX_STACK_LINE(685)
			tmp11 = false;
		}
		HX_STACK_LINE(685)
		if ((tmp11)){
			HX_STACK_LINE(686)
			return (int)13;
		}
		else{
			HX_STACK_LINE(689)
			bool tmp12 = (a->clip == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(689)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(689)
			if ((tmp12)){
				HX_STACK_LINE(689)
				tmp13 = (b->clip == false);
			}
			else{
				HX_STACK_LINE(689)
				tmp13 = false;
			}
			HX_STACK_LINE(689)
			if ((tmp13)){
				HX_STACK_LINE(690)
				return (int)14;
			}
		}
	}
	HX_STACK_LINE(698)
	bool tmp10 = (a->timestamp < b->timestamp);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(698)
	if ((tmp10)){
		HX_STACK_LINE(699)
		return (int)15;
	}
	HX_STACK_LINE(700)
	bool tmp11 = (a->timestamp > b->timestamp);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(700)
	if ((tmp11)){
		HX_STACK_LINE(701)
		return (int)16;
	}
	HX_STACK_LINE(702)
	bool tmp12 = (a->timestamp == b->timestamp);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(702)
	if ((tmp12)){
		HX_STACK_LINE(703)
		return (int)17;
	}
	HX_STACK_LINE(705)
	bool tmp13 = (a->sequence < b->sequence);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(705)
	if ((tmp13)){
		HX_STACK_LINE(706)
		return (int)18;
	}
	HX_STACK_LINE(707)
	bool tmp14 = (a->sequence > b->sequence);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(707)
	if ((tmp14)){
		HX_STACK_LINE(708)
		return (int)19;
	}
	HX_STACK_LINE(711)
	return (int)20;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,compare_rule,return )

int Batcher_obj::geometry_compare( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b){
	HX_STACK_FRAME("phoenix.Batcher","geometry_compare",0xc33f035e,"phoenix.Batcher.geometry_compare","phoenix/Batcher.hx",715,0xa9541457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(727)
	bool tmp = (a->uuid == b->uuid);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	if ((tmp)){
		HX_STACK_LINE(728)
		return (int)0;
	}
	HX_STACK_LINE(731)
	bool tmp1 = (a->depth < b->depth);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(731)
	if ((tmp1)){
		HX_STACK_LINE(732)
		return (int)-1;
	}
	HX_STACK_LINE(733)
	bool tmp2 = (a->depth > b->depth);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(733)
	if ((tmp2)){
		HX_STACK_LINE(734)
		return (int)1;
	}
	HX_STACK_LINE(738)
	bool tmp3 = (a->shader != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(738)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(738)
	if ((tmp3)){
		HX_STACK_LINE(738)
		tmp4 = (b->shader != null());
	}
	else{
		HX_STACK_LINE(738)
		tmp4 = false;
	}
	HX_STACK_LINE(738)
	if ((tmp4)){
		HX_STACK_LINE(741)
		::String tmp5 = a->shader->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(741)
		::String tmp6 = b->shader->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(741)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(741)
		if ((tmp7)){
			HX_STACK_LINE(742)
			return (int)-1;
		}
		HX_STACK_LINE(743)
		::String tmp8 = a->shader->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(743)
		::String tmp9 = b->shader->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(743)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(743)
		if ((tmp10)){
			HX_STACK_LINE(744)
			return (int)1;
		}
	}
	else{
		HX_STACK_LINE(747)
		bool tmp5 = (a->shader != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(747)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(747)
		if ((tmp5)){
			HX_STACK_LINE(747)
			tmp6 = (b->shader == null());
		}
		else{
			HX_STACK_LINE(747)
			tmp6 = false;
		}
		HX_STACK_LINE(747)
		if ((tmp6)){
			HX_STACK_LINE(748)
			return (int)1;
		}
		else{
			HX_STACK_LINE(750)
			bool tmp7 = (a->shader == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(750)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(750)
			if ((tmp7)){
				HX_STACK_LINE(750)
				tmp8 = (b->shader != null());
			}
			else{
				HX_STACK_LINE(750)
				tmp8 = false;
			}
			HX_STACK_LINE(750)
			if ((tmp8)){
				HX_STACK_LINE(751)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(755)
	bool tmp5 = (a->texture != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(755)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(755)
	if ((tmp5)){
		HX_STACK_LINE(755)
		tmp6 = (b->texture != null());
	}
	else{
		HX_STACK_LINE(755)
		tmp6 = false;
	}
	HX_STACK_LINE(755)
	if ((tmp6)){
		HX_STACK_LINE(758)
		::String tmp7 = a->texture->id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(758)
		::String tmp8 = b->texture->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(758)
		bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(758)
		if ((tmp9)){
			HX_STACK_LINE(759)
			return (int)-1;
		}
		HX_STACK_LINE(760)
		::String tmp10 = a->texture->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(760)
		::String tmp11 = b->texture->id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(760)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(760)
		if ((tmp12)){
			HX_STACK_LINE(761)
			return (int)1;
		}
	}
	else{
		HX_STACK_LINE(764)
		bool tmp7 = (a->texture != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(764)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(764)
		if ((tmp7)){
			HX_STACK_LINE(764)
			tmp8 = (b->texture == null());
		}
		else{
			HX_STACK_LINE(764)
			tmp8 = false;
		}
		HX_STACK_LINE(764)
		if ((tmp8)){
			HX_STACK_LINE(765)
			return (int)1;
		}
		else{
			HX_STACK_LINE(767)
			bool tmp9 = (a->texture == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(767)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(767)
			if ((tmp9)){
				HX_STACK_LINE(767)
				tmp10 = (b->texture != null());
			}
			else{
				HX_STACK_LINE(767)
				tmp10 = false;
			}
			HX_STACK_LINE(767)
			if ((tmp10)){
				HX_STACK_LINE(768)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(773)
	int a_primitive_index = a->primitive_type;		HX_STACK_VAR(a_primitive_index,"a_primitive_index");
	HX_STACK_LINE(774)
	int b_primitive_index = b->primitive_type;		HX_STACK_VAR(b_primitive_index,"b_primitive_index");
	HX_STACK_LINE(776)
	bool tmp7 = (a_primitive_index < b_primitive_index);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(776)
	if ((tmp7)){
		HX_STACK_LINE(777)
		return (int)-1;
	}
	HX_STACK_LINE(778)
	bool tmp8 = (a_primitive_index > b_primitive_index);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(778)
	if ((tmp8)){
		HX_STACK_LINE(779)
		return (int)1;
	}
	HX_STACK_LINE(782)
	bool tmp9 = (a->clip != b->clip);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(782)
	if ((tmp9)){
		HX_STACK_LINE(784)
		bool tmp10 = (a->clip == false);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(784)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(784)
		if ((tmp10)){
			HX_STACK_LINE(784)
			tmp11 = (b->clip == true);
		}
		else{
			HX_STACK_LINE(784)
			tmp11 = false;
		}
		HX_STACK_LINE(784)
		if ((tmp11)){
			HX_STACK_LINE(785)
			return (int)1;
		}
		else{
			HX_STACK_LINE(788)
			bool tmp12 = (a->clip == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(788)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(788)
			if ((tmp12)){
				HX_STACK_LINE(788)
				tmp13 = (b->clip == false);
			}
			else{
				HX_STACK_LINE(788)
				tmp13 = false;
			}
			HX_STACK_LINE(788)
			if ((tmp13)){
				HX_STACK_LINE(789)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(797)
	bool tmp10 = (a->timestamp < b->timestamp);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(797)
	if ((tmp10)){
		HX_STACK_LINE(798)
		return (int)-1;
	}
	HX_STACK_LINE(799)
	bool tmp11 = (a->timestamp >= b->timestamp);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(799)
	if ((tmp11)){
		HX_STACK_LINE(800)
		return (int)1;
	}
	HX_STACK_LINE(801)
	bool tmp12 = (a->sequence < b->sequence);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(801)
	if ((tmp12)){
		HX_STACK_LINE(802)
		return (int)-1;
	}
	HX_STACK_LINE(803)
	bool tmp13 = (a->sequence > b->sequence);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(803)
	if ((tmp13)){
		HX_STACK_LINE(804)
		return (int)1;
	}
	HX_STACK_LINE(807)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC2(Batcher_obj,geometry_compare,return )

Void Batcher_obj::list_geometry( ){
{
		HX_STACK_FRAME("phoenix.Batcher","list_geometry",0x542e65ad,"phoenix.Batcher.list_geometry","phoenix/Batcher.hx",812,0xa9541457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(812)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->geometry;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = ::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		::luxe::structural::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(812)
		while((true)){
			HX_STACK_LINE(812)
			bool tmp2 = (_g->current == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(812)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(812)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(812)
			if ((tmp3)){
				HX_STACK_LINE(812)
				tmp4 = (_g->rightest == null());
			}
			else{
				HX_STACK_LINE(812)
				tmp4 = true;
			}
			HX_STACK_LINE(812)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(812)
			if ((tmp4)){
				HX_STACK_LINE(812)
				tmp5 = false;
			}
			else{
				HX_STACK_LINE(812)
				::phoenix::geometry::GeometryKey tmp6 = _g->current->key;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(812)
				::phoenix::geometry::GeometryKey tmp7 = _g->rightest->key;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(812)
				int tmp8 = _g->tree->compare(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(812)
				tmp5 = (tmp8 <= (int)0);
			}
			HX_STACK_LINE(812)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(812)
			if ((tmp6)){
				HX_STACK_LINE(812)
				break;
			}
			HX_STACK_LINE(812)
			::phoenix::geometry::Geometry tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(812)
			{
				HX_STACK_LINE(812)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = _g->current;		HX_STACK_VAR(_temp,"_temp");
				HX_STACK_LINE(812)
				bool tmp8 = (_g->current == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(812)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(812)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(812)
				if ((tmp9)){
					HX_STACK_LINE(812)
					tmp10 = (_g->rightest == null());
				}
				else{
					HX_STACK_LINE(812)
					tmp10 = true;
				}
				HX_STACK_LINE(812)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(812)
				if ((tmp10)){
					HX_STACK_LINE(812)
					tmp11 = false;
				}
				else{
					HX_STACK_LINE(812)
					::phoenix::geometry::GeometryKey tmp12 = _g->current->key;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(812)
					::phoenix::geometry::GeometryKey tmp13 = _g->rightest->key;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(812)
					int tmp14 = _g->tree->compare(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(812)
					tmp11 = (tmp14 <= (int)0);
				}
				HX_STACK_LINE(812)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(812)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(812)
				if ((tmp12)){
					HX_STACK_LINE(812)
					tmp13 = null();
				}
				else{
					HX_STACK_LINE(812)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14 = _g->current->right;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(812)
					bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(812)
					if ((tmp15)){
						HX_STACK_LINE(812)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp16 = _g->current->right;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(812)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp16;		HX_STACK_VAR(_node,"_node");
						HX_STACK_LINE(812)
						while((true)){
							HX_STACK_LINE(812)
							bool tmp17 = (_node->left != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(812)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(812)
							if ((tmp18)){
								HX_STACK_LINE(812)
								break;
							}
							HX_STACK_LINE(812)
							_node = _node->left;
						}
						HX_STACK_LINE(812)
						tmp13 = _node;
					}
					else{
						HX_STACK_LINE(812)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
						HX_STACK_LINE(812)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp16 = _g->tree->root;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(812)
						::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp1 = tmp16;		HX_STACK_VAR(_temp1,"_temp1");
						HX_STACK_LINE(812)
						while((true)){
							HX_STACK_LINE(812)
							bool tmp17 = (_temp1 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(812)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(812)
							if ((tmp18)){
								HX_STACK_LINE(812)
								break;
							}
							HX_STACK_LINE(812)
							::phoenix::geometry::GeometryKey tmp19 = _g->current->key;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(812)
							::phoenix::geometry::GeometryKey tmp20 = _temp1->key;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(812)
							int tmp21 = _g->tree->compare(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(812)
							int _comp = tmp21;		HX_STACK_VAR(_comp,"_comp");
							HX_STACK_LINE(812)
							bool tmp22 = (_comp < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(812)
							if ((tmp22)){
								HX_STACK_LINE(812)
								_next = _temp1;
								HX_STACK_LINE(812)
								_temp1 = _temp1->left;
							}
							else{
								HX_STACK_LINE(812)
								bool tmp23 = (_comp > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(812)
								if ((tmp23)){
									HX_STACK_LINE(812)
									_temp1 = _temp1->right;
								}
								else{
									HX_STACK_LINE(812)
									_g->current = _next;
									HX_STACK_LINE(812)
									break;
								}
							}
						}
						HX_STACK_LINE(812)
						tmp13 = _next;
					}
				}
				HX_STACK_LINE(812)
				_g->current = tmp13;
				HX_STACK_LINE(812)
				tmp7 = _temp->value;
			}
			HX_STACK_LINE(812)
			::phoenix::geometry::Geometry geom = tmp7;		HX_STACK_VAR(geom,"geom");
			HX_STACK_LINE(138)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Batcher_obj,list_geometry,(void))

int Batcher_obj::_sequence_key;

int Batcher_obj::vert_attribute;

int Batcher_obj::tcoord_attribute;

int Batcher_obj::color_attribute;

int Batcher_obj::normal_attribute;


Batcher_obj::Batcher_obj()
{
}

void Batcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Batcher);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(tree_changed,"tree_changed");
	HX_MARK_MEMBER_NAME(pos_list,"pos_list");
	HX_MARK_MEMBER_NAME(tcoord_list,"tcoord_list");
	HX_MARK_MEMBER_NAME(color_list,"color_list");
	HX_MARK_MEMBER_NAME(normal_list,"normal_list");
	HX_MARK_MEMBER_NAME(max_verts,"max_verts");
	HX_MARK_MEMBER_NAME(max_floats,"max_floats");
	HX_MARK_MEMBER_NAME(vert_count,"vert_count");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(draw_calls,"draw_calls");
	HX_MARK_MEMBER_NAME(dynamic_batched_count,"dynamic_batched_count");
	HX_MARK_MEMBER_NAME(static_batched_count,"static_batched_count");
	HX_MARK_MEMBER_NAME(visible_count,"visible_count");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(sequence,"sequence");
	HX_MARK_MEMBER_NAME(pos_floats,"pos_floats");
	HX_MARK_MEMBER_NAME(tcoord_floats,"tcoord_floats");
	HX_MARK_MEMBER_NAME(color_floats,"color_floats");
	HX_MARK_MEMBER_NAME(normal_floats,"normal_floats");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(_dropped,"_dropped");
	HX_MARK_END_CLASS();
}

void Batcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(tree_changed,"tree_changed");
	HX_VISIT_MEMBER_NAME(pos_list,"pos_list");
	HX_VISIT_MEMBER_NAME(tcoord_list,"tcoord_list");
	HX_VISIT_MEMBER_NAME(color_list,"color_list");
	HX_VISIT_MEMBER_NAME(normal_list,"normal_list");
	HX_VISIT_MEMBER_NAME(max_verts,"max_verts");
	HX_VISIT_MEMBER_NAME(max_floats,"max_floats");
	HX_VISIT_MEMBER_NAME(vert_count,"vert_count");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(draw_calls,"draw_calls");
	HX_VISIT_MEMBER_NAME(dynamic_batched_count,"dynamic_batched_count");
	HX_VISIT_MEMBER_NAME(static_batched_count,"static_batched_count");
	HX_VISIT_MEMBER_NAME(visible_count,"visible_count");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(sequence,"sequence");
	HX_VISIT_MEMBER_NAME(pos_floats,"pos_floats");
	HX_VISIT_MEMBER_NAME(tcoord_floats,"tcoord_floats");
	HX_VISIT_MEMBER_NAME(color_floats,"color_floats");
	HX_VISIT_MEMBER_NAME(normal_floats,"normal_floats");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(_dropped,"_dropped");
}

Dynamic Batcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"batch") ) { return batch_dyn(); }
		if (HX_FIELD_EQ(inName,"prune") ) { return prune_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"pos_list") ) { return pos_list; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"sequence") ) { return sequence; }
		if (HX_FIELD_EQ(inName,"_dropped") ) { return _dropped; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_verts") ) { return max_verts; }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"color_list") ) { return color_list; }
		if (HX_FIELD_EQ(inName,"max_floats") ) { return max_floats; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { return vert_count; }
		if (HX_FIELD_EQ(inName,"draw_calls") ) { return draw_calls; }
		if (HX_FIELD_EQ(inName,"pos_floats") ) { return pos_floats; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tcoord_list") ) { return tcoord_list; }
		if (HX_FIELD_EQ(inName,"normal_list") ) { return normal_list; }
		if (HX_FIELD_EQ(inName,"update_view") ) { return update_view_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tree_changed") ) { return tree_changed; }
		if (HX_FIELD_EQ(inName,"color_floats") ) { return color_floats; }
		if (HX_FIELD_EQ(inName,"compare_rule") ) { return compare_rule_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visible_count") ) { return visible_count; }
		if (HX_FIELD_EQ(inName,"tcoord_floats") ) { return tcoord_floats; }
		if (HX_FIELD_EQ(inName,"normal_floats") ) { return normal_floats; }
		if (HX_FIELD_EQ(inName,"list_geometry") ) { return list_geometry_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"submit_buffers") ) { return submit_buffers_dyn(); }
		if (HX_FIELD_EQ(inName,"geometry_batch") ) { return geometry_batch_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"submit_geometry") ) { return submit_geometry_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"geometry_compare") ) { return geometry_compare_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { return static_batched_count; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { return dynamic_batched_count; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"apply_default_uniforms") ) { return apply_default_uniforms_dyn(); }
		if (HX_FIELD_EQ(inName,"submit_static_geometry") ) { return submit_static_geometry_dyn(); }
		if (HX_FIELD_EQ(inName,"compare_rule_to_string") ) { return compare_rule_to_string_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"submit_current_vertex_list") ) { return submit_current_vertex_list_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Batcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { outValue = _sequence_key; return true;  }
	}
	return false;
}

Dynamic Batcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == hx::paccAlways) return set_layer(inValue);layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::phoenix::BatchState >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos_list") ) { pos_list=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sequence") ) { sequence=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dropped") ) { _dropped=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_verts") ) { max_verts=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"color_list") ) { color_list=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max_floats") ) { max_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { vert_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw_calls") ) { draw_calls=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos_floats") ) { pos_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tcoord_list") ) { tcoord_list=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal_list") ) { normal_list=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tree_changed") ) { tree_changed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color_floats") ) { color_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visible_count") ) { visible_count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tcoord_floats") ) { tcoord_floats=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal_floats") ) { normal_floats=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { static_batched_count=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { dynamic_batched_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Batcher_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_sequence_key") ) { _sequence_key=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Batcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	outFields->push(HX_HCSTRING("tree_changed","\xd3","\x31","\xee","\x4a"));
	outFields->push(HX_HCSTRING("pos_list","\x29","\x22","\xaf","\x03"));
	outFields->push(HX_HCSTRING("tcoord_list","\xdc","\x26","\x24","\x80"));
	outFields->push(HX_HCSTRING("color_list","\xfa","\xdf","\x02","\x8c"));
	outFields->push(HX_HCSTRING("normal_list","\xb6","\x98","\xc8","\xf4"));
	outFields->push(HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"));
	outFields->push(HX_HCSTRING("max_floats","\xd2","\x86","\xa0","\x4c"));
	outFields->push(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"));
	outFields->push(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"));
	outFields->push(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"));
	outFields->push(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8"));
	outFields->push(HX_HCSTRING("pos_floats","\xe2","\x71","\xb7","\xf8"));
	outFields->push(HX_HCSTRING("tcoord_floats","\x55","\x49","\xfd","\x3f"));
	outFields->push(HX_HCSTRING("color_floats","\xf3","\x05","\xd3","\x0b"));
	outFields->push(HX_HCSTRING("normal_floats","\xaf","\x65","\x05","\x7c"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("_dropped","\x81","\x7d","\xa1","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Batcher_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Batcher_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsInt,(int)offsetof(Batcher_obj,layer),HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")},
	{hx::fsObject /*::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(Batcher_obj,geometry),HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(Batcher_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{hx::fsBool,(int)offsetof(Batcher_obj,tree_changed),HX_HCSTRING("tree_changed","\xd3","\x31","\xee","\x4a")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,pos_list),HX_HCSTRING("pos_list","\x29","\x22","\xaf","\x03")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,tcoord_list),HX_HCSTRING("tcoord_list","\xdc","\x26","\x24","\x80")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,color_list),HX_HCSTRING("color_list","\xfa","\xdf","\x02","\x8c")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Batcher_obj,normal_list),HX_HCSTRING("normal_list","\xb6","\x98","\xc8","\xf4")},
	{hx::fsInt,(int)offsetof(Batcher_obj,max_verts),HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b")},
	{hx::fsInt,(int)offsetof(Batcher_obj,max_floats),HX_HCSTRING("max_floats","\xd2","\x86","\xa0","\x4c")},
	{hx::fsInt,(int)offsetof(Batcher_obj,vert_count),HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(Batcher_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Batcher_obj,view),HX_HCSTRING("view","\x65","\x32","\x4f","\x4e")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(Batcher_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsInt,(int)offsetof(Batcher_obj,draw_calls),HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a")},
	{hx::fsInt,(int)offsetof(Batcher_obj,dynamic_batched_count),HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66")},
	{hx::fsInt,(int)offsetof(Batcher_obj,static_batched_count),HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c")},
	{hx::fsInt,(int)offsetof(Batcher_obj,visible_count),HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70")},
	{hx::fsBool,(int)offsetof(Batcher_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsString,(int)offsetof(Batcher_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Batcher_obj,sequence),HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8")},
	{hx::fsInt,(int)offsetof(Batcher_obj,pos_floats),HX_HCSTRING("pos_floats","\xe2","\x71","\xb7","\xf8")},
	{hx::fsInt,(int)offsetof(Batcher_obj,tcoord_floats),HX_HCSTRING("tcoord_floats","\x55","\x49","\xfd","\x3f")},
	{hx::fsInt,(int)offsetof(Batcher_obj,color_floats),HX_HCSTRING("color_floats","\xf3","\x05","\xd3","\x0b")},
	{hx::fsInt,(int)offsetof(Batcher_obj,normal_floats),HX_HCSTRING("normal_floats","\xaf","\x65","\x05","\x7c")},
	{hx::fsObject /*::phoenix::BatchState*/ ,(int)offsetof(Batcher_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Batcher_obj,_dropped),HX_HCSTRING("_dropped","\x81","\x7d","\xa1","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Batcher_obj::_sequence_key,HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7")},
	{hx::fsInt,(void *) &Batcher_obj::vert_attribute,HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43")},
	{hx::fsInt,(void *) &Batcher_obj::tcoord_attribute,HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b")},
	{hx::fsInt,(void *) &Batcher_obj::color_attribute,HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf")},
	{hx::fsInt,(void *) &Batcher_obj::normal_attribute,HX_HCSTRING("normal_attribute","\xc4","\x34","\xe1","\x31")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"),
	HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("tree_changed","\xd3","\x31","\xee","\x4a"),
	HX_HCSTRING("pos_list","\x29","\x22","\xaf","\x03"),
	HX_HCSTRING("tcoord_list","\xdc","\x26","\x24","\x80"),
	HX_HCSTRING("color_list","\xfa","\xdf","\x02","\x8c"),
	HX_HCSTRING("normal_list","\xb6","\x98","\xc8","\xf4"),
	HX_HCSTRING("max_verts","\x87","\xcb","\x3f","\x2b"),
	HX_HCSTRING("max_floats","\xd2","\x86","\xa0","\x4c"),
	HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("view","\x65","\x32","\x4f","\x4e"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"),
	HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"),
	HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"),
	HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8"),
	HX_HCSTRING("pos_floats","\xe2","\x71","\xb7","\xf8"),
	HX_HCSTRING("tcoord_floats","\x55","\x49","\xfd","\x3f"),
	HX_HCSTRING("color_floats","\xf3","\x05","\xd3","\x0b"),
	HX_HCSTRING("normal_floats","\xaf","\x65","\x05","\x7c"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("_dropped","\x81","\x7d","\xa1","\x40"),
	HX_HCSTRING("batch","\xba","\xe7","\xba","\xad"),
	HX_HCSTRING("prune","\x2a","\x73","\x94","\xc8"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("update_view","\x9b","\x47","\xcb","\x53"),
	HX_HCSTRING("apply_default_uniforms","\x6e","\xb8","\xfa","\x3e"),
	HX_HCSTRING("submit_geometry","\xf9","\xde","\xa8","\xaf"),
	HX_HCSTRING("submit_buffers","\x0c","\x2d","\x09","\xbe"),
	HX_HCSTRING("submit_static_geometry","\x3c","\x62","\x76","\x36"),
	HX_HCSTRING("submit_current_vertex_list","\x2c","\xd9","\x42","\xde"),
	HX_HCSTRING("geometry_batch","\x2d","\x43","\xe5","\x75"),
	HX_HCSTRING("set_layer","\x34","\xca","\xba","\x96"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("compare_rule_to_string","\xac","\x83","\x34","\x4e"),
	HX_HCSTRING("compare_rule","\x16","\x06","\x47","\x08"),
	HX_HCSTRING("geometry_compare","\xd8","\x76","\x77","\x6f"),
	HX_HCSTRING("list_geometry","\xf3","\x61","\xa0","\x84"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Batcher_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Batcher_obj::_sequence_key,"_sequence_key");
	HX_MARK_MEMBER_NAME(Batcher_obj::vert_attribute,"vert_attribute");
	HX_MARK_MEMBER_NAME(Batcher_obj::tcoord_attribute,"tcoord_attribute");
	HX_MARK_MEMBER_NAME(Batcher_obj::color_attribute,"color_attribute");
	HX_MARK_MEMBER_NAME(Batcher_obj::normal_attribute,"normal_attribute");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Batcher_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Batcher_obj::_sequence_key,"_sequence_key");
	HX_VISIT_MEMBER_NAME(Batcher_obj::vert_attribute,"vert_attribute");
	HX_VISIT_MEMBER_NAME(Batcher_obj::tcoord_attribute,"tcoord_attribute");
	HX_VISIT_MEMBER_NAME(Batcher_obj::color_attribute,"color_attribute");
	HX_VISIT_MEMBER_NAME(Batcher_obj::normal_attribute,"normal_attribute");
};

#endif

hx::Class Batcher_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_sequence_key","\x40","\x34","\x6b","\xf7"),
	HX_HCSTRING("vert_attribute","\xce","\x47","\x70","\x43"),
	HX_HCSTRING("tcoord_attribute","\xde","\x9c","\x72","\x7b"),
	HX_HCSTRING("color_attribute","\x00","\x17","\x4a","\xaf"),
	HX_HCSTRING("normal_attribute","\xc4","\x34","\xe1","\x31"),
	::String(null()) };

void Batcher_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Batcher_obj::__GetStatic;
	__mClass->mSetStaticField = &Batcher_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Batcher_obj >;
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

void Batcher_obj::__boot()
{
	_sequence_key= (int)-1;
	vert_attribute= (int)0;
	tcoord_attribute= (int)1;
	color_attribute= (int)2;
	normal_attribute= (int)3;
}

} // end namespace phoenix
