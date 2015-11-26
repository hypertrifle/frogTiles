#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_api_buffers__Uint8ClampedArray_Uint8ClampedArray_Impl_
#include <snow/api/buffers/_Uint8ClampedArray/Uint8ClampedArray_Impl_.h>
#endif
namespace snow{
namespace api{
namespace buffers{
namespace _Uint8ClampedArray{

Void Uint8ClampedArray_Impl__obj::__construct()
{
	return null();
}

//Uint8ClampedArray_Impl__obj::~Uint8ClampedArray_Impl__obj() { }

Dynamic Uint8ClampedArray_Impl__obj::__CreateEmpty() { return  new Uint8ClampedArray_Impl__obj; }
hx::ObjectPtr< Uint8ClampedArray_Impl__obj > Uint8ClampedArray_Impl__obj::__new()
{  hx::ObjectPtr< Uint8ClampedArray_Impl__obj > _result_ = new Uint8ClampedArray_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Uint8ClampedArray_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uint8ClampedArray_Impl__obj > _result_ = new Uint8ClampedArray_Impl__obj();
	_result_->__construct();
	return _result_;}

int Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT;

::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::subarray( ::snow::api::buffers::ArrayBufferView this1,int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","subarray",0xf02df8c0,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.subarray","snow/api/buffers/Uint8ClampedArray.hx",103,0xc60b32de)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(103)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		bool tmp1 = (end == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		if ((tmp1)){
			HX_STACK_LINE(103)
			(end == this1->length);
		}
		HX_STACK_LINE(103)
		int tmp2 = (end - begin);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		int len = tmp2;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(103)
		int tmp3 = (begin * this1->bytesPerElement);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		int tmp4 = this1->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		int byte_offset = tmp5;		HX_STACK_VAR(byte_offset,"byte_offset");
		HX_STACK_LINE(103)
		::snow::api::buffers::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int _g = this1->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			switch( (int)(tmp7)){
				case (int)1: {
					HX_STACK_LINE(103)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(103)
					::snow::api::buffers::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					if ((tmp8)){
						HX_STACK_LINE(103)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						if ((tmp9)){
							HX_STACK_LINE(103)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								_this->length = tmp12;
								HX_STACK_LINE(103)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								_this->byteLength = tmp13;
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(103)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									this3 = tmp16;
									HX_STACK_LINE(103)
									tmp14 = this3;
								}
								HX_STACK_LINE(103)
								_this->buffer = tmp14;
								HX_STACK_LINE(103)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(103)
								tmp10 = _this;
							}
							HX_STACK_LINE(103)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(103)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(103)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(103)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									if ((tmp19)){
										HX_STACK_LINE(103)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(103)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(103)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(103)
										{
											HX_STACK_LINE(103)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(103)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(103)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(103)
											this3 = tmp23;
											HX_STACK_LINE(103)
											tmp21 = this3;
										}
										HX_STACK_LINE(103)
										_this->buffer = tmp21;
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(103)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(103)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(103)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(103)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->byteLength = tmp20;
									HX_STACK_LINE(103)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(103)
									_this->length = srcLength;
									HX_STACK_LINE(103)
									tmp11 = _this;
								}
								HX_STACK_LINE(103)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(103)
								bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								if ((tmp11)){
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(103)
										bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(103)
										if ((tmp14)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										if ((tmp16)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(103)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(103)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(103)
										bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(103)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(103)
											if ((tmp21)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(103)
											int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(103)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(103)
										_this->buffer = buffer;
										HX_STACK_LINE(103)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(103)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(103)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										_this->length = tmp19;
										HX_STACK_LINE(103)
										tmp12 = _this;
									}
									HX_STACK_LINE(103)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
					HX_STACK_LINE(103)
					tmp6 = this2;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(103)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(103)
					::snow::api::buffers::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					if ((tmp8)){
						HX_STACK_LINE(103)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						if ((tmp9)){
							HX_STACK_LINE(103)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								_this->length = tmp12;
								HX_STACK_LINE(103)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								_this->byteLength = tmp13;
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(103)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									this3 = tmp16;
									HX_STACK_LINE(103)
									tmp14 = this3;
								}
								HX_STACK_LINE(103)
								_this->buffer = tmp14;
								HX_STACK_LINE(103)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(103)
								tmp10 = _this;
							}
							HX_STACK_LINE(103)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(103)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(103)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(103)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									if ((tmp19)){
										HX_STACK_LINE(103)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(103)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(103)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(103)
										{
											HX_STACK_LINE(103)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(103)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(103)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(103)
											this3 = tmp23;
											HX_STACK_LINE(103)
											tmp21 = this3;
										}
										HX_STACK_LINE(103)
										_this->buffer = tmp21;
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(103)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(103)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(103)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(103)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->byteLength = tmp20;
									HX_STACK_LINE(103)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(103)
									_this->length = srcLength;
									HX_STACK_LINE(103)
									tmp11 = _this;
								}
								HX_STACK_LINE(103)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(103)
								bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								if ((tmp11)){
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(103)
										bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(103)
										if ((tmp14)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										if ((tmp16)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(103)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(103)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(103)
										bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(103)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(103)
											if ((tmp21)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(103)
											int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(103)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(103)
										_this->buffer = buffer;
										HX_STACK_LINE(103)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(103)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(103)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										_this->length = tmp19;
										HX_STACK_LINE(103)
										tmp12 = _this;
									}
									HX_STACK_LINE(103)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
					HX_STACK_LINE(103)
					tmp6 = this2;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(103)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(103)
					::snow::api::buffers::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					if ((tmp8)){
						HX_STACK_LINE(103)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						if ((tmp9)){
							HX_STACK_LINE(103)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								_this->length = tmp12;
								HX_STACK_LINE(103)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								_this->byteLength = tmp13;
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(103)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									this3 = tmp16;
									HX_STACK_LINE(103)
									tmp14 = this3;
								}
								HX_STACK_LINE(103)
								_this->buffer = tmp14;
								HX_STACK_LINE(103)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(103)
								tmp10 = _this;
							}
							HX_STACK_LINE(103)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(103)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(103)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(103)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									if ((tmp19)){
										HX_STACK_LINE(103)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(103)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(103)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(103)
										{
											HX_STACK_LINE(103)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(103)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(103)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(103)
											this3 = tmp23;
											HX_STACK_LINE(103)
											tmp21 = this3;
										}
										HX_STACK_LINE(103)
										_this->buffer = tmp21;
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(103)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(103)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(103)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(103)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->byteLength = tmp20;
									HX_STACK_LINE(103)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(103)
									_this->length = srcLength;
									HX_STACK_LINE(103)
									tmp11 = _this;
								}
								HX_STACK_LINE(103)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(103)
								bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								if ((tmp11)){
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(103)
										bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(103)
										if ((tmp14)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										if ((tmp16)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(103)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(103)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(103)
										bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(103)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(103)
											if ((tmp21)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(103)
											int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(103)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(103)
										_this->buffer = buffer;
										HX_STACK_LINE(103)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(103)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(103)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										_this->length = tmp19;
										HX_STACK_LINE(103)
										tmp12 = _this;
									}
									HX_STACK_LINE(103)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
					HX_STACK_LINE(103)
					tmp6 = this2;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(103)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(103)
					::snow::api::buffers::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					if ((tmp8)){
						HX_STACK_LINE(103)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						if ((tmp9)){
							HX_STACK_LINE(103)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								_this->length = tmp12;
								HX_STACK_LINE(103)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								_this->byteLength = tmp13;
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(103)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									this3 = tmp16;
									HX_STACK_LINE(103)
									tmp14 = this3;
								}
								HX_STACK_LINE(103)
								_this->buffer = tmp14;
								HX_STACK_LINE(103)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(103)
								tmp10 = _this;
							}
							HX_STACK_LINE(103)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(103)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(103)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(103)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									if ((tmp19)){
										HX_STACK_LINE(103)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(103)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(103)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(103)
										{
											HX_STACK_LINE(103)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(103)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(103)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(103)
											this3 = tmp23;
											HX_STACK_LINE(103)
											tmp21 = this3;
										}
										HX_STACK_LINE(103)
										_this->buffer = tmp21;
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(103)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(103)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(103)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(103)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->byteLength = tmp20;
									HX_STACK_LINE(103)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(103)
									_this->length = srcLength;
									HX_STACK_LINE(103)
									tmp11 = _this;
								}
								HX_STACK_LINE(103)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(103)
								bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								if ((tmp11)){
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(103)
										bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(103)
										if ((tmp14)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										if ((tmp16)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(103)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(103)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(103)
										bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(103)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(103)
											if ((tmp21)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(103)
											int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(103)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(103)
										_this->buffer = buffer;
										HX_STACK_LINE(103)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(103)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(103)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										_this->length = tmp19;
										HX_STACK_LINE(103)
										tmp12 = _this;
									}
									HX_STACK_LINE(103)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
								}
							}
						}
					}
					HX_STACK_LINE(103)
					tmp6 = this2;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(103)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(103)
					::snow::api::buffers::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					if ((tmp8)){
						HX_STACK_LINE(103)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						if ((tmp9)){
							HX_STACK_LINE(103)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								_this->length = tmp12;
								HX_STACK_LINE(103)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								_this->byteLength = tmp13;
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(103)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									this3 = tmp16;
									HX_STACK_LINE(103)
									tmp14 = this3;
								}
								HX_STACK_LINE(103)
								_this->buffer = tmp14;
								HX_STACK_LINE(103)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(103)
								tmp10 = _this;
							}
							HX_STACK_LINE(103)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(103)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(103)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(103)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									if ((tmp19)){
										HX_STACK_LINE(103)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(103)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(103)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(103)
										{
											HX_STACK_LINE(103)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(103)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(103)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(103)
											this3 = tmp23;
											HX_STACK_LINE(103)
											tmp21 = this3;
										}
										HX_STACK_LINE(103)
										_this->buffer = tmp21;
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(103)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(103)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(103)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(103)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->byteLength = tmp20;
									HX_STACK_LINE(103)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(103)
									_this->length = srcLength;
									HX_STACK_LINE(103)
									tmp11 = _this;
								}
								HX_STACK_LINE(103)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(103)
								bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								if ((tmp11)){
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(103)
										bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(103)
										if ((tmp14)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										if ((tmp16)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(103)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(103)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(103)
										bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(103)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(103)
											if ((tmp21)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(103)
											int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(103)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(103)
										_this->buffer = buffer;
										HX_STACK_LINE(103)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(103)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(103)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										_this->length = tmp19;
										HX_STACK_LINE(103)
										tmp12 = _this;
									}
									HX_STACK_LINE(103)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
								}
							}
						}
					}
					HX_STACK_LINE(103)
					tmp6 = this2;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(103)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(103)
					::snow::api::buffers::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					if ((tmp8)){
						HX_STACK_LINE(103)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						if ((tmp9)){
							HX_STACK_LINE(103)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								_this->length = tmp12;
								HX_STACK_LINE(103)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								_this->byteLength = tmp13;
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(103)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									this3 = tmp16;
									HX_STACK_LINE(103)
									tmp14 = this3;
								}
								HX_STACK_LINE(103)
								_this->buffer = tmp14;
								HX_STACK_LINE(103)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(103)
								tmp10 = _this;
							}
							HX_STACK_LINE(103)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(103)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(103)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(103)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									if ((tmp19)){
										HX_STACK_LINE(103)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(103)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(103)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(103)
										{
											HX_STACK_LINE(103)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(103)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(103)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(103)
											this3 = tmp23;
											HX_STACK_LINE(103)
											tmp21 = this3;
										}
										HX_STACK_LINE(103)
										_this->buffer = tmp21;
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(103)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(103)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(103)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(103)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->byteLength = tmp20;
									HX_STACK_LINE(103)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(103)
									_this->length = srcLength;
									HX_STACK_LINE(103)
									tmp11 = _this;
								}
								HX_STACK_LINE(103)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(103)
								bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								if ((tmp11)){
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(103)
										bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(103)
										if ((tmp14)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										if ((tmp16)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(103)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(103)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(103)
										bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(103)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(103)
											if ((tmp21)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(103)
											int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(103)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(103)
										_this->buffer = buffer;
										HX_STACK_LINE(103)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(103)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(103)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										_this->length = tmp19;
										HX_STACK_LINE(103)
										tmp12 = _this;
									}
									HX_STACK_LINE(103)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
								}
							}
						}
					}
					HX_STACK_LINE(103)
					tmp6 = this2;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(103)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(103)
					::snow::api::buffers::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					if ((tmp8)){
						HX_STACK_LINE(103)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						if ((tmp9)){
							HX_STACK_LINE(103)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								_this->length = tmp12;
								HX_STACK_LINE(103)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								_this->byteLength = tmp13;
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(103)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									this3 = tmp16;
									HX_STACK_LINE(103)
									tmp14 = this3;
								}
								HX_STACK_LINE(103)
								_this->buffer = tmp14;
								HX_STACK_LINE(103)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(103)
								tmp10 = _this;
							}
							HX_STACK_LINE(103)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(103)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(103)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(103)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									if ((tmp19)){
										HX_STACK_LINE(103)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(103)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(103)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(103)
										{
											HX_STACK_LINE(103)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(103)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(103)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(103)
											this3 = tmp23;
											HX_STACK_LINE(103)
											tmp21 = this3;
										}
										HX_STACK_LINE(103)
										_this->buffer = tmp21;
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(103)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(103)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(103)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(103)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->byteLength = tmp20;
									HX_STACK_LINE(103)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(103)
									_this->length = srcLength;
									HX_STACK_LINE(103)
									tmp11 = _this;
								}
								HX_STACK_LINE(103)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(103)
								bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								if ((tmp11)){
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(103)
										bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(103)
										if ((tmp14)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										if ((tmp16)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(103)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(103)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(103)
										bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(103)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(103)
											if ((tmp21)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(103)
											int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(103)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(103)
										_this->buffer = buffer;
										HX_STACK_LINE(103)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(103)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(103)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										_this->length = tmp19;
										HX_STACK_LINE(103)
										tmp12 = _this;
									}
									HX_STACK_LINE(103)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
								}
							}
						}
					}
					HX_STACK_LINE(103)
					tmp6 = this2;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(103)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(103)
					::snow::api::buffers::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					if ((tmp8)){
						HX_STACK_LINE(103)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						if ((tmp9)){
							HX_STACK_LINE(103)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								_this->length = tmp12;
								HX_STACK_LINE(103)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								_this->byteLength = tmp13;
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(103)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									this3 = tmp16;
									HX_STACK_LINE(103)
									tmp14 = this3;
								}
								HX_STACK_LINE(103)
								_this->buffer = tmp14;
								HX_STACK_LINE(103)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(103)
								tmp10 = _this;
							}
							HX_STACK_LINE(103)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(103)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(103)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(103)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									if ((tmp19)){
										HX_STACK_LINE(103)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(103)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(103)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(103)
										{
											HX_STACK_LINE(103)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(103)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(103)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(103)
											this3 = tmp23;
											HX_STACK_LINE(103)
											tmp21 = this3;
										}
										HX_STACK_LINE(103)
										_this->buffer = tmp21;
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(103)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(103)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(103)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(103)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->byteLength = tmp20;
									HX_STACK_LINE(103)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(103)
									_this->length = srcLength;
									HX_STACK_LINE(103)
									tmp11 = _this;
								}
								HX_STACK_LINE(103)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(103)
								bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								if ((tmp11)){
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(103)
										bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(103)
										if ((tmp14)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										if ((tmp16)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(103)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(103)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(103)
										bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(103)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(103)
											if ((tmp21)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(103)
											int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(103)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(103)
										_this->buffer = buffer;
										HX_STACK_LINE(103)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(103)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(103)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										_this->length = tmp19;
										HX_STACK_LINE(103)
										tmp12 = _this;
									}
									HX_STACK_LINE(103)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
					HX_STACK_LINE(103)
					tmp6 = this2;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(103)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(103)
					::snow::api::buffers::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(103)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					if ((tmp8)){
						HX_STACK_LINE(103)
						::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						if ((tmp9)){
							HX_STACK_LINE(103)
							::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								_this->length = tmp12;
								HX_STACK_LINE(103)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								_this->byteLength = tmp13;
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(103)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									this3 = tmp16;
									HX_STACK_LINE(103)
									tmp14 = this3;
								}
								HX_STACK_LINE(103)
								_this->buffer = tmp14;
								HX_STACK_LINE(103)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(103)
								tmp10 = _this;
							}
							HX_STACK_LINE(103)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							if ((tmp10)){
								HX_STACK_LINE(103)
								::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(103)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(103)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(103)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									if ((tmp19)){
										HX_STACK_LINE(103)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(103)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(103)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(103)
										{
											HX_STACK_LINE(103)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(103)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(103)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(103)
											this3 = tmp23;
											HX_STACK_LINE(103)
											tmp21 = this3;
										}
										HX_STACK_LINE(103)
										_this->buffer = tmp21;
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(103)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(103)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(103)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(103)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->byteLength = tmp20;
									HX_STACK_LINE(103)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(103)
									_this->length = srcLength;
									HX_STACK_LINE(103)
									tmp11 = _this;
								}
								HX_STACK_LINE(103)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(103)
								bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								if ((tmp11)){
									HX_STACK_LINE(103)
									::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(103)
										::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(103)
										bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(103)
										if ((tmp14)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										if ((tmp16)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(103)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(103)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(103)
										bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(103)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(103)
											if ((tmp21)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(103)
											int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(103)
											newByteLength = tmp18;
											HX_STACK_LINE(103)
											int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(103)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(103)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(103)
											if ((tmp20)){
												HX_STACK_LINE(103)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(103)
										_this->buffer = buffer;
										HX_STACK_LINE(103)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(103)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(103)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										_this->length = tmp19;
										HX_STACK_LINE(103)
										tmp12 = _this;
									}
									HX_STACK_LINE(103)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
					HX_STACK_LINE(103)
					tmp6 = this2;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(103)
					HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
				}
				;break;
			}
		}
		HX_STACK_LINE(103)
		::snow::api::buffers::ArrayBufferView view = tmp6;		HX_STACK_VAR(view,"view");
		HX_STACK_LINE(103)
		tmp = view;
	}
	HX_STACK_LINE(103)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint8ClampedArray_Impl__obj,subarray,return )

::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::fromBytes( ::haxe::io::Bytes bytes,Dynamic __o_byteOffset,Dynamic len){
Dynamic byteOffset = __o_byteOffset.Default(0);
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","fromBytes",0x2084601a,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.fromBytes","snow/api/buffers/Uint8ClampedArray.hx",107,0xc60b32de)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(len,"len")
{
		HX_STACK_LINE(108)
		::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(108)
			bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			if ((tmp1)){
				HX_STACK_LINE(108)
				::snow::api::buffers::ArrayBufferView tmp2 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(108)
				this1 = tmp2;
			}
			else{
				HX_STACK_LINE(108)
				bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(108)
				if ((tmp2)){
					HX_STACK_LINE(108)
					::snow::api::buffers::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						::snow::api::buffers::ArrayBufferView tmp4 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(108)
						::snow::api::buffers::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(108)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(108)
						int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(108)
						_this->length = tmp5;
						HX_STACK_LINE(108)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(108)
						_this->byteLength = tmp6;
						HX_STACK_LINE(108)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(108)
						{
							HX_STACK_LINE(108)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(108)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(108)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(108)
							this2 = tmp9;
							HX_STACK_LINE(108)
							tmp7 = this2;
						}
						HX_STACK_LINE(108)
						_this->buffer = tmp7;
						HX_STACK_LINE(108)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(108)
						tmp3 = _this;
					}
					HX_STACK_LINE(108)
					this1 = tmp3;
				}
				else{
					HX_STACK_LINE(108)
					bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(108)
					if ((tmp3)){
						HX_STACK_LINE(108)
						::snow::api::buffers::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(108)
						{
							HX_STACK_LINE(108)
							::snow::api::buffers::ArrayBufferView tmp5 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(108)
							::snow::api::buffers::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(108)
							::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(108)
							::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(108)
							int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(108)
							int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(108)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(108)
							int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(108)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(108)
							int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(108)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(108)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(108)
							int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(108)
							bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(108)
							if ((tmp12)){
								HX_STACK_LINE(108)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(108)
								int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(108)
								int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(108)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(108)
								{
									HX_STACK_LINE(108)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(108)
									int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(108)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(108)
									this2 = tmp16;
									HX_STACK_LINE(108)
									tmp14 = this2;
								}
								HX_STACK_LINE(108)
								_this->buffer = tmp14;
								HX_STACK_LINE(108)
								::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(108)
								int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(108)
								int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(108)
								_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
							}
							else{
								HX_STACK_LINE(108)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(108)
							int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(108)
							_this->byteLength = tmp13;
							HX_STACK_LINE(108)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(108)
							_this->length = srcLength;
							HX_STACK_LINE(108)
							tmp4 = _this;
						}
						HX_STACK_LINE(108)
						this1 = tmp4;
					}
					else{
						HX_STACK_LINE(108)
						bool tmp4 = (bytes != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(108)
						if ((tmp4)){
							HX_STACK_LINE(108)
							::snow::api::buffers::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(108)
							{
								HX_STACK_LINE(108)
								::snow::api::buffers::ArrayBufferView tmp6 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(108)
								::snow::api::buffers::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(108)
								bool tmp7 = (byteOffset < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(108)
								if ((tmp7)){
									HX_STACK_LINE(108)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(108)
								int tmp8 = hx::Mod(byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(108)
								bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(108)
								if ((tmp9)){
									HX_STACK_LINE(108)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(108)
								int bufferByteLength = bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(108)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(108)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(108)
								bool tmp10 = (len == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(108)
								if ((tmp10)){
									HX_STACK_LINE(108)
									int tmp11 = (bufferByteLength - byteOffset);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(108)
									newByteLength = tmp11;
									HX_STACK_LINE(108)
									int tmp12 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(108)
									bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(108)
									if ((tmp13)){
										HX_STACK_LINE(108)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(108)
									bool tmp14 = (newByteLength < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(108)
									if ((tmp14)){
										HX_STACK_LINE(108)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(108)
									int tmp11 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(108)
									newByteLength = tmp11;
									HX_STACK_LINE(108)
									int tmp12 = (byteOffset + newByteLength);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(108)
									int newRange = tmp12;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(108)
									bool tmp13 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(108)
									if ((tmp13)){
										HX_STACK_LINE(108)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(108)
								_this->buffer = bytes;
								HX_STACK_LINE(108)
								_this->byteOffset = byteOffset;
								HX_STACK_LINE(108)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(108)
								Float tmp11 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(108)
								int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(108)
								_this->length = tmp12;
								HX_STACK_LINE(108)
								tmp5 = _this;
							}
							HX_STACK_LINE(108)
							this1 = tmp5;
						}
						else{
							HX_STACK_LINE(108)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
						}
					}
				}
			}
			HX_STACK_LINE(108)
			tmp = this1;
		}
		HX_STACK_LINE(108)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint8ClampedArray_Impl__obj,fromBytes,return )

::haxe::io::Bytes Uint8ClampedArray_Impl__obj::toBytes( ::snow::api::buffers::ArrayBufferView this1){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","toBytes",0xc7ff4229,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.toBytes","snow/api/buffers/Uint8ClampedArray.hx",111,0xc60b32de)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(112)
	::haxe::io::Bytes tmp = this1->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,toBytes,return )

int Uint8ClampedArray_Impl__obj::get_length( ::snow::api::buffers::ArrayBufferView this1){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","get_length",0x782b6116,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.get_length","snow/api/buffers/Uint8ClampedArray.hx",117,0xc60b32de)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(117)
	int tmp = this1->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,get_length,return )

::String Uint8ClampedArray_Impl__obj::toString( ::snow::api::buffers::ArrayBufferView this1){
	HX_STACK_FRAME("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","toString",0x211b7553,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.toString","snow/api/buffers/Uint8ClampedArray.hx",132,0xc60b32de)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(132)
	::String tmp = (HX_HCSTRING("Uint8ClampedArray [byteLength:","\x74","\x68","\x3d","\x9d") + this1->byteLength);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	::String tmp1 = (tmp + HX_HCSTRING(", length:","\xa0","\x04","\x67","\xef"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	int tmp2 = this1->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	::String tmp4 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(132)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,toString,return )


Uint8ClampedArray_Impl__obj::Uint8ClampedArray_Impl__obj()
{
}

bool Uint8ClampedArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uint8ClampedArray_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uint8ClampedArray_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Uint8ClampedArray_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Uint8ClampedArray_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","\xa7","\xec","\x8a","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Uint8ClampedArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Uint8ClampedArray_Impl__obj >;
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

void Uint8ClampedArray_Impl__obj::__boot()
{
	BYTES_PER_ELEMENT= (int)1;
}

} // end namespace snow
} // end namespace api
} // end namespace buffers
} // end namespace _Uint8ClampedArray
