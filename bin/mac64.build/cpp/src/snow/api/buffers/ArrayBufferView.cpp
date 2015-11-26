#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferIO
#include <snow/api/buffers/ArrayBufferIO.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
namespace snow{
namespace api{
namespace buffers{

Void ArrayBufferView_obj::__construct(Dynamic elements,int in_type)
{
HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","new",0x3a2b1616,"snow.api.buffers.ArrayBufferView.new","snow/api/buffers/ArrayBufferView.hx",11,0xa074815d)
HX_STACK_THIS(this)
HX_STACK_ARG(elements,"elements")
HX_STACK_ARG(in_type,"in_type")
{
	HX_STACK_LINE(20)
	this->bytesPerElement = (int)0;
	HX_STACK_LINE(13)
	this->type = (int)0;
	HX_STACK_LINE(26)
	this->type = in_type;
	HX_STACK_LINE(27)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(27)
			tmp1 = (int)1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(27)
			tmp1 = (int)1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(27)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(27)
			tmp1 = (int)2;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(27)
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(27)
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(27)
			tmp1 = (int)4;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(27)
			tmp1 = (int)4;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(27)
			tmp1 = (int)8;
		}
		;break;
		default: {
			HX_STACK_LINE(27)
			tmp1 = (int)1;
		}
	}
	HX_STACK_LINE(27)
	this->bytesPerElement = tmp1;
	HX_STACK_LINE(31)
	bool tmp2 = (elements != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	if ((tmp2)){
		HX_STACK_LINE(31)
		tmp3 = (elements != (int)0);
	}
	else{
		HX_STACK_LINE(31)
		tmp3 = false;
	}
	HX_STACK_LINE(31)
	if ((tmp3)){
		HX_STACK_LINE(33)
		bool tmp4 = (elements < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		if ((tmp4)){
			HX_STACK_LINE(33)
			elements = (int)0;
		}
		HX_STACK_LINE(37)
		this->byteOffset = (int)0;
		HX_STACK_LINE(38)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			int elemCount = elements;		HX_STACK_VAR(elemCount,"elemCount");
			HX_STACK_LINE(38)
			int tmp6 = elemCount;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			int tmp7 = this->bytesPerElement;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(38)
			tmp5 = (tmp6 * tmp7);
		}
		HX_STACK_LINE(38)
		this->byteLength = tmp5;
		HX_STACK_LINE(39)
		::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(39)
			int tmp7 = this->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::alloc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(39)
			this1 = tmp8;
			HX_STACK_LINE(39)
			tmp6 = this1;
		}
		HX_STACK_LINE(39)
		this->buffer = tmp6;
		HX_STACK_LINE(40)
		this->length = elements;
	}
}
;
	return null();
}

//ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(Dynamic elements,int in_type)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(elements,in_type);
	return _result_;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Uint8Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Uint8Array",0x52f6e86c,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Uint8Array","snow/api/buffers/ArrayBufferView.hx",162,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(164)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(165)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(166)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = this->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		switch( (int)(tmp9)){
			case (int)1: {
				HX_STACK_LINE(172)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(172)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					if ((tmp12)){
						HX_STACK_LINE(172)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(172)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							_this->length = tmp15;
							HX_STACK_LINE(172)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							_this->byteLength = tmp16;
							HX_STACK_LINE(172)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(172)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								this2 = tmp19;
								HX_STACK_LINE(172)
								tmp17 = this2;
							}
							HX_STACK_LINE(172)
							_this->buffer = tmp17;
							HX_STACK_LINE(172)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(172)
							tmp13 = _this;
						}
						HX_STACK_LINE(172)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(172)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						if ((tmp13)){
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(172)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(172)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(172)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(172)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(172)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(172)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(172)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(172)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(172)
								if ((tmp22)){
									HX_STACK_LINE(172)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(172)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(172)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(172)
									{
										HX_STACK_LINE(172)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(172)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(172)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(172)
										this2 = tmp26;
										HX_STACK_LINE(172)
										tmp24 = this2;
									}
									HX_STACK_LINE(172)
									_this->buffer = tmp24;
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(172)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(172)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(172)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(172)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(172)
								_this->byteLength = tmp23;
								HX_STACK_LINE(172)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(172)
								_this->length = srcLength;
								HX_STACK_LINE(172)
								tmp14 = _this;
							}
							HX_STACK_LINE(172)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							if ((tmp14)){
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								{
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(172)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(172)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(172)
									if ((tmp19)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(172)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(172)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(172)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(172)
									if ((tmp20)){
										HX_STACK_LINE(172)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(172)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(172)
										if ((tmp24)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(172)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(172)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(172)
									_this->buffer = buffer;
									HX_STACK_LINE(172)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(172)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(172)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(172)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(172)
									_this->length = tmp22;
									HX_STACK_LINE(172)
									tmp15 = _this;
								}
								HX_STACK_LINE(172)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(172)
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(175)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(175)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(175)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(175)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							_this->length = tmp15;
							HX_STACK_LINE(175)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(175)
							_this->byteLength = tmp16;
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(175)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								this2 = tmp19;
								HX_STACK_LINE(175)
								tmp17 = this2;
							}
							HX_STACK_LINE(175)
							_this->buffer = tmp17;
							HX_STACK_LINE(175)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(175)
							tmp13 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						if ((tmp13)){
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(175)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(175)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(175)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(175)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(175)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(175)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(175)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(175)
								if ((tmp22)){
									HX_STACK_LINE(175)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(175)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(175)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(175)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(175)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(175)
										this2 = tmp26;
										HX_STACK_LINE(175)
										tmp24 = this2;
									}
									HX_STACK_LINE(175)
									_this->buffer = tmp24;
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(175)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(175)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(175)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(175)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(175)
								_this->byteLength = tmp23;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->length = srcLength;
								HX_STACK_LINE(175)
								tmp14 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(175)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							if ((tmp14)){
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(175)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(175)
									if ((tmp17)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(175)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(175)
									if ((tmp19)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(175)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(175)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(175)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(175)
									if ((tmp20)){
										HX_STACK_LINE(175)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(175)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(175)
										if ((tmp24)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(175)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(175)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(175)
									_this->buffer = buffer;
									HX_STACK_LINE(175)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(175)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(175)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(175)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(175)
									_this->length = tmp22;
									HX_STACK_LINE(175)
									tmp15 = _this;
								}
								HX_STACK_LINE(175)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(175)
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(178)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(178)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(178)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(178)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(178)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(178)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(178)
							_this->length = tmp15;
							HX_STACK_LINE(178)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(178)
							_this->byteLength = tmp16;
							HX_STACK_LINE(178)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(178)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								this2 = tmp19;
								HX_STACK_LINE(178)
								tmp17 = this2;
							}
							HX_STACK_LINE(178)
							_this->buffer = tmp17;
							HX_STACK_LINE(178)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(178)
							tmp13 = _this;
						}
						HX_STACK_LINE(178)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(178)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						if ((tmp13)){
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(178)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(178)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(178)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(178)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(178)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								if ((tmp22)){
									HX_STACK_LINE(178)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(178)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(178)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(178)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(178)
										this2 = tmp26;
										HX_STACK_LINE(178)
										tmp24 = this2;
									}
									HX_STACK_LINE(178)
									_this->buffer = tmp24;
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(178)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(178)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(178)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(178)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								_this->byteLength = tmp23;
								HX_STACK_LINE(178)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(178)
								_this->length = srcLength;
								HX_STACK_LINE(178)
								tmp14 = _this;
							}
							HX_STACK_LINE(178)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(178)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							if ((tmp14)){
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(178)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(178)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(178)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(178)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(178)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(178)
										if ((tmp24)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(178)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(178)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(178)
									_this->buffer = buffer;
									HX_STACK_LINE(178)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(178)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(178)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(178)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(178)
									_this->length = tmp22;
									HX_STACK_LINE(178)
									tmp15 = _this;
								}
								HX_STACK_LINE(178)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(178)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(178)
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(181)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(181)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				if ((tmp11)){
					HX_STACK_LINE(181)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(181)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(181)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(181)
							_this->length = tmp15;
							HX_STACK_LINE(181)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(181)
							_this->byteLength = tmp16;
							HX_STACK_LINE(181)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(181)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								this2 = tmp19;
								HX_STACK_LINE(181)
								tmp17 = this2;
							}
							HX_STACK_LINE(181)
							_this->buffer = tmp17;
							HX_STACK_LINE(181)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(181)
							tmp13 = _this;
						}
						HX_STACK_LINE(181)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(181)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						if ((tmp13)){
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(181)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(181)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(181)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(181)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(181)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(181)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(181)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(181)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(181)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(181)
								if ((tmp22)){
									HX_STACK_LINE(181)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(181)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(181)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(181)
									{
										HX_STACK_LINE(181)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(181)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(181)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(181)
										this2 = tmp26;
										HX_STACK_LINE(181)
										tmp24 = this2;
									}
									HX_STACK_LINE(181)
									_this->buffer = tmp24;
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(181)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(181)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(181)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(181)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(181)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(181)
								_this->byteLength = tmp23;
								HX_STACK_LINE(181)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(181)
								_this->length = srcLength;
								HX_STACK_LINE(181)
								tmp14 = _this;
							}
							HX_STACK_LINE(181)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(181)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							if ((tmp14)){
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								{
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(181)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(181)
									if ((tmp17)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(181)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(181)
									if ((tmp19)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(181)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(181)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(181)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(181)
									if ((tmp20)){
										HX_STACK_LINE(181)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(181)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(181)
										if ((tmp24)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(181)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(181)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(181)
									_this->buffer = buffer;
									HX_STACK_LINE(181)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(181)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(181)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(181)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(181)
									_this->length = tmp22;
									HX_STACK_LINE(181)
									tmp15 = _this;
								}
								HX_STACK_LINE(181)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(181)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(181)
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(184)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(184)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					if ((tmp12)){
						HX_STACK_LINE(184)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(184)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(184)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(184)
							_this->length = tmp15;
							HX_STACK_LINE(184)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							_this->byteLength = tmp16;
							HX_STACK_LINE(184)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(184)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								this2 = tmp19;
								HX_STACK_LINE(184)
								tmp17 = this2;
							}
							HX_STACK_LINE(184)
							_this->buffer = tmp17;
							HX_STACK_LINE(184)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(184)
							tmp13 = _this;
						}
						HX_STACK_LINE(184)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(184)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						if ((tmp13)){
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(184)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(184)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(184)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(184)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(184)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(184)
								if ((tmp22)){
									HX_STACK_LINE(184)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(184)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(184)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(184)
									{
										HX_STACK_LINE(184)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(184)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(184)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(184)
										this2 = tmp26;
										HX_STACK_LINE(184)
										tmp24 = this2;
									}
									HX_STACK_LINE(184)
									_this->buffer = tmp24;
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(184)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(184)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(184)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(184)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(184)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(184)
								_this->byteLength = tmp23;
								HX_STACK_LINE(184)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(184)
								_this->length = srcLength;
								HX_STACK_LINE(184)
								tmp14 = _this;
							}
							HX_STACK_LINE(184)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(184)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							if ((tmp14)){
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								{
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(184)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(184)
									if ((tmp17)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(184)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(184)
									if ((tmp19)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(184)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(184)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(184)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(184)
									if ((tmp20)){
										HX_STACK_LINE(184)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(184)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(184)
										if ((tmp24)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(184)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(184)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(184)
									_this->buffer = buffer;
									HX_STACK_LINE(184)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(184)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(184)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(184)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(184)
									_this->length = tmp22;
									HX_STACK_LINE(184)
									tmp15 = _this;
								}
								HX_STACK_LINE(184)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(184)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(184)
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(187)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(187)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				if ((tmp11)){
					HX_STACK_LINE(187)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(187)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					if ((tmp12)){
						HX_STACK_LINE(187)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(187)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(187)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							_this->length = tmp15;
							HX_STACK_LINE(187)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(187)
							_this->byteLength = tmp16;
							HX_STACK_LINE(187)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(187)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								this2 = tmp19;
								HX_STACK_LINE(187)
								tmp17 = this2;
							}
							HX_STACK_LINE(187)
							_this->buffer = tmp17;
							HX_STACK_LINE(187)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(187)
							tmp13 = _this;
						}
						HX_STACK_LINE(187)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(187)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						if ((tmp13)){
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(187)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(187)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(187)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(187)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(187)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(187)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(187)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(187)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(187)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(187)
								if ((tmp22)){
									HX_STACK_LINE(187)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(187)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(187)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(187)
									{
										HX_STACK_LINE(187)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(187)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(187)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(187)
										this2 = tmp26;
										HX_STACK_LINE(187)
										tmp24 = this2;
									}
									HX_STACK_LINE(187)
									_this->buffer = tmp24;
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(187)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(187)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(187)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(187)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(187)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(187)
								_this->byteLength = tmp23;
								HX_STACK_LINE(187)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(187)
								_this->length = srcLength;
								HX_STACK_LINE(187)
								tmp14 = _this;
							}
							HX_STACK_LINE(187)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(187)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								{
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(187)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(187)
									if ((tmp17)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(187)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(187)
									if ((tmp19)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(187)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(187)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(187)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(187)
									if ((tmp20)){
										HX_STACK_LINE(187)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(187)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(187)
										if ((tmp24)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(187)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(187)
									_this->buffer = buffer;
									HX_STACK_LINE(187)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(187)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(187)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(187)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(187)
									_this->length = tmp22;
									HX_STACK_LINE(187)
									tmp15 = _this;
								}
								HX_STACK_LINE(187)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(187)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(187)
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(190)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(190)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(190)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							_this->length = tmp15;
							HX_STACK_LINE(190)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(190)
							_this->byteLength = tmp16;
							HX_STACK_LINE(190)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(190)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								this2 = tmp19;
								HX_STACK_LINE(190)
								tmp17 = this2;
							}
							HX_STACK_LINE(190)
							_this->buffer = tmp17;
							HX_STACK_LINE(190)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(190)
							tmp13 = _this;
						}
						HX_STACK_LINE(190)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(190)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						if ((tmp13)){
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(190)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(190)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(190)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(190)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(190)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(190)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(190)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(190)
								if ((tmp22)){
									HX_STACK_LINE(190)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(190)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(190)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(190)
									{
										HX_STACK_LINE(190)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(190)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(190)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(190)
										this2 = tmp26;
										HX_STACK_LINE(190)
										tmp24 = this2;
									}
									HX_STACK_LINE(190)
									_this->buffer = tmp24;
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(190)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(190)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(190)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(190)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(190)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(190)
								_this->byteLength = tmp23;
								HX_STACK_LINE(190)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(190)
								_this->length = srcLength;
								HX_STACK_LINE(190)
								tmp14 = _this;
							}
							HX_STACK_LINE(190)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(190)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							if ((tmp14)){
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								{
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(190)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(190)
									if ((tmp17)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(190)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(190)
									if ((tmp19)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(190)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(190)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(190)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(190)
									if ((tmp20)){
										HX_STACK_LINE(190)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(190)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(190)
										if ((tmp24)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(190)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(190)
									_this->buffer = buffer;
									HX_STACK_LINE(190)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(190)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(190)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(190)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(190)
									_this->length = tmp22;
									HX_STACK_LINE(190)
									tmp15 = _this;
								}
								HX_STACK_LINE(190)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(190)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(190)
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(193)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(193)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(193)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				if ((tmp11)){
					HX_STACK_LINE(193)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					if ((tmp12)){
						HX_STACK_LINE(193)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(193)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(193)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							_this->length = tmp15;
							HX_STACK_LINE(193)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							_this->byteLength = tmp16;
							HX_STACK_LINE(193)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(193)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								this2 = tmp19;
								HX_STACK_LINE(193)
								tmp17 = this2;
							}
							HX_STACK_LINE(193)
							_this->buffer = tmp17;
							HX_STACK_LINE(193)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(193)
							tmp13 = _this;
						}
						HX_STACK_LINE(193)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(193)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(193)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(193)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(193)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(193)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(193)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								if ((tmp22)){
									HX_STACK_LINE(193)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(193)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(193)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(193)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(193)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(193)
										this2 = tmp26;
										HX_STACK_LINE(193)
										tmp24 = this2;
									}
									HX_STACK_LINE(193)
									_this->buffer = tmp24;
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(193)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(193)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(193)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(193)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(193)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								_this->byteLength = tmp23;
								HX_STACK_LINE(193)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(193)
								_this->length = srcLength;
								HX_STACK_LINE(193)
								tmp14 = _this;
							}
							HX_STACK_LINE(193)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							if ((tmp14)){
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(193)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									if ((tmp19)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(193)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(193)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(193)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									if ((tmp20)){
										HX_STACK_LINE(193)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(193)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(193)
										if ((tmp24)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(193)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(193)
									_this->buffer = buffer;
									HX_STACK_LINE(193)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(193)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(193)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(193)
									_this->length = tmp22;
									HX_STACK_LINE(193)
									tmp15 = _this;
								}
								HX_STACK_LINE(193)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(193)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(196)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(196)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				if ((tmp11)){
					HX_STACK_LINE(196)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					if ((tmp12)){
						HX_STACK_LINE(196)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(196)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(196)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							_this->length = tmp15;
							HX_STACK_LINE(196)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							_this->byteLength = tmp16;
							HX_STACK_LINE(196)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(196)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								this2 = tmp19;
								HX_STACK_LINE(196)
								tmp17 = this2;
							}
							HX_STACK_LINE(196)
							_this->buffer = tmp17;
							HX_STACK_LINE(196)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(196)
							tmp13 = _this;
						}
						HX_STACK_LINE(196)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(196)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						if ((tmp13)){
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(196)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(196)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(196)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(196)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(196)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(196)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								if ((tmp22)){
									HX_STACK_LINE(196)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(196)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(196)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(196)
									{
										HX_STACK_LINE(196)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(196)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(196)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(196)
										this2 = tmp26;
										HX_STACK_LINE(196)
										tmp24 = this2;
									}
									HX_STACK_LINE(196)
									_this->buffer = tmp24;
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(196)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(196)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(196)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(196)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(196)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								_this->byteLength = tmp23;
								HX_STACK_LINE(196)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(196)
								_this->length = srcLength;
								HX_STACK_LINE(196)
								tmp14 = _this;
							}
							HX_STACK_LINE(196)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(196)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							if ((tmp14)){
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(196)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(196)
									if ((tmp17)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(196)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(196)
									if ((tmp19)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(196)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(196)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(196)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(196)
									if ((tmp20)){
										HX_STACK_LINE(196)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(196)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(196)
										if ((tmp24)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(196)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(196)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(196)
									_this->buffer = buffer;
									HX_STACK_LINE(196)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(196)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(196)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(196)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(196)
									_this->length = tmp22;
									HX_STACK_LINE(196)
									tmp15 = _this;
								}
								HX_STACK_LINE(196)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(196)
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(199)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(202)
	::snow::api::buffers::ArrayBufferView tmp8 = view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Uint8Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Int32Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Int32Array",0xd047b27c,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Int32Array","snow/api/buffers/ArrayBufferView.hx",162,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(164)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(165)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(166)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = this->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		switch( (int)(tmp9)){
			case (int)1: {
				HX_STACK_LINE(172)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(172)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					if ((tmp12)){
						HX_STACK_LINE(172)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(172)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							_this->length = tmp15;
							HX_STACK_LINE(172)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							_this->byteLength = tmp16;
							HX_STACK_LINE(172)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(172)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								this2 = tmp19;
								HX_STACK_LINE(172)
								tmp17 = this2;
							}
							HX_STACK_LINE(172)
							_this->buffer = tmp17;
							HX_STACK_LINE(172)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(172)
							tmp13 = _this;
						}
						HX_STACK_LINE(172)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(172)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						if ((tmp13)){
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(172)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(172)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(172)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(172)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(172)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(172)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(172)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(172)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(172)
								if ((tmp22)){
									HX_STACK_LINE(172)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(172)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(172)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(172)
									{
										HX_STACK_LINE(172)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(172)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(172)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(172)
										this2 = tmp26;
										HX_STACK_LINE(172)
										tmp24 = this2;
									}
									HX_STACK_LINE(172)
									_this->buffer = tmp24;
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(172)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(172)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(172)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(172)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(172)
								_this->byteLength = tmp23;
								HX_STACK_LINE(172)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(172)
								_this->length = srcLength;
								HX_STACK_LINE(172)
								tmp14 = _this;
							}
							HX_STACK_LINE(172)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							if ((tmp14)){
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								{
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(172)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(172)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(172)
									if ((tmp19)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(172)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(172)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(172)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(172)
									if ((tmp20)){
										HX_STACK_LINE(172)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(172)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(172)
										if ((tmp24)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(172)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(172)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(172)
									_this->buffer = buffer;
									HX_STACK_LINE(172)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(172)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(172)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(172)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(172)
									_this->length = tmp22;
									HX_STACK_LINE(172)
									tmp15 = _this;
								}
								HX_STACK_LINE(172)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(172)
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(175)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(175)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(175)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(175)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							_this->length = tmp15;
							HX_STACK_LINE(175)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(175)
							_this->byteLength = tmp16;
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(175)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								this2 = tmp19;
								HX_STACK_LINE(175)
								tmp17 = this2;
							}
							HX_STACK_LINE(175)
							_this->buffer = tmp17;
							HX_STACK_LINE(175)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(175)
							tmp13 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						if ((tmp13)){
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(175)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(175)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(175)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(175)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(175)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(175)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(175)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(175)
								if ((tmp22)){
									HX_STACK_LINE(175)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(175)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(175)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(175)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(175)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(175)
										this2 = tmp26;
										HX_STACK_LINE(175)
										tmp24 = this2;
									}
									HX_STACK_LINE(175)
									_this->buffer = tmp24;
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(175)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(175)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(175)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(175)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(175)
								_this->byteLength = tmp23;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->length = srcLength;
								HX_STACK_LINE(175)
								tmp14 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(175)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							if ((tmp14)){
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(175)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(175)
									if ((tmp17)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(175)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(175)
									if ((tmp19)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(175)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(175)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(175)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(175)
									if ((tmp20)){
										HX_STACK_LINE(175)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(175)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(175)
										if ((tmp24)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(175)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(175)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(175)
									_this->buffer = buffer;
									HX_STACK_LINE(175)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(175)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(175)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(175)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(175)
									_this->length = tmp22;
									HX_STACK_LINE(175)
									tmp15 = _this;
								}
								HX_STACK_LINE(175)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(175)
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(178)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(178)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(178)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(178)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(178)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(178)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(178)
							_this->length = tmp15;
							HX_STACK_LINE(178)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(178)
							_this->byteLength = tmp16;
							HX_STACK_LINE(178)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(178)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								this2 = tmp19;
								HX_STACK_LINE(178)
								tmp17 = this2;
							}
							HX_STACK_LINE(178)
							_this->buffer = tmp17;
							HX_STACK_LINE(178)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(178)
							tmp13 = _this;
						}
						HX_STACK_LINE(178)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(178)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						if ((tmp13)){
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(178)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(178)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(178)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(178)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(178)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								if ((tmp22)){
									HX_STACK_LINE(178)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(178)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(178)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(178)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(178)
										this2 = tmp26;
										HX_STACK_LINE(178)
										tmp24 = this2;
									}
									HX_STACK_LINE(178)
									_this->buffer = tmp24;
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(178)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(178)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(178)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(178)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								_this->byteLength = tmp23;
								HX_STACK_LINE(178)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(178)
								_this->length = srcLength;
								HX_STACK_LINE(178)
								tmp14 = _this;
							}
							HX_STACK_LINE(178)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(178)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							if ((tmp14)){
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(178)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(178)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(178)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(178)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(178)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(178)
										if ((tmp24)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(178)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(178)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(178)
									_this->buffer = buffer;
									HX_STACK_LINE(178)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(178)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(178)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(178)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(178)
									_this->length = tmp22;
									HX_STACK_LINE(178)
									tmp15 = _this;
								}
								HX_STACK_LINE(178)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(178)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(178)
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(181)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(181)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				if ((tmp11)){
					HX_STACK_LINE(181)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(181)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(181)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(181)
							_this->length = tmp15;
							HX_STACK_LINE(181)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(181)
							_this->byteLength = tmp16;
							HX_STACK_LINE(181)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(181)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								this2 = tmp19;
								HX_STACK_LINE(181)
								tmp17 = this2;
							}
							HX_STACK_LINE(181)
							_this->buffer = tmp17;
							HX_STACK_LINE(181)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(181)
							tmp13 = _this;
						}
						HX_STACK_LINE(181)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(181)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						if ((tmp13)){
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(181)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(181)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(181)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(181)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(181)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(181)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(181)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(181)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(181)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(181)
								if ((tmp22)){
									HX_STACK_LINE(181)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(181)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(181)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(181)
									{
										HX_STACK_LINE(181)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(181)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(181)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(181)
										this2 = tmp26;
										HX_STACK_LINE(181)
										tmp24 = this2;
									}
									HX_STACK_LINE(181)
									_this->buffer = tmp24;
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(181)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(181)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(181)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(181)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(181)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(181)
								_this->byteLength = tmp23;
								HX_STACK_LINE(181)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(181)
								_this->length = srcLength;
								HX_STACK_LINE(181)
								tmp14 = _this;
							}
							HX_STACK_LINE(181)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(181)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							if ((tmp14)){
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								{
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(181)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(181)
									if ((tmp17)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(181)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(181)
									if ((tmp19)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(181)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(181)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(181)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(181)
									if ((tmp20)){
										HX_STACK_LINE(181)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(181)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(181)
										if ((tmp24)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(181)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(181)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(181)
									_this->buffer = buffer;
									HX_STACK_LINE(181)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(181)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(181)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(181)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(181)
									_this->length = tmp22;
									HX_STACK_LINE(181)
									tmp15 = _this;
								}
								HX_STACK_LINE(181)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(181)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(181)
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(184)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(184)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					if ((tmp12)){
						HX_STACK_LINE(184)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(184)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(184)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(184)
							_this->length = tmp15;
							HX_STACK_LINE(184)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							_this->byteLength = tmp16;
							HX_STACK_LINE(184)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(184)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								this2 = tmp19;
								HX_STACK_LINE(184)
								tmp17 = this2;
							}
							HX_STACK_LINE(184)
							_this->buffer = tmp17;
							HX_STACK_LINE(184)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(184)
							tmp13 = _this;
						}
						HX_STACK_LINE(184)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(184)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						if ((tmp13)){
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(184)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(184)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(184)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(184)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(184)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(184)
								if ((tmp22)){
									HX_STACK_LINE(184)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(184)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(184)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(184)
									{
										HX_STACK_LINE(184)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(184)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(184)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(184)
										this2 = tmp26;
										HX_STACK_LINE(184)
										tmp24 = this2;
									}
									HX_STACK_LINE(184)
									_this->buffer = tmp24;
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(184)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(184)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(184)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(184)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(184)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(184)
								_this->byteLength = tmp23;
								HX_STACK_LINE(184)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(184)
								_this->length = srcLength;
								HX_STACK_LINE(184)
								tmp14 = _this;
							}
							HX_STACK_LINE(184)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(184)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							if ((tmp14)){
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								{
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(184)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(184)
									if ((tmp17)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(184)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(184)
									if ((tmp19)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(184)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(184)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(184)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(184)
									if ((tmp20)){
										HX_STACK_LINE(184)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(184)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(184)
										if ((tmp24)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(184)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(184)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(184)
									_this->buffer = buffer;
									HX_STACK_LINE(184)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(184)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(184)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(184)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(184)
									_this->length = tmp22;
									HX_STACK_LINE(184)
									tmp15 = _this;
								}
								HX_STACK_LINE(184)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(184)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(184)
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(187)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(187)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				if ((tmp11)){
					HX_STACK_LINE(187)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(187)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					if ((tmp12)){
						HX_STACK_LINE(187)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(187)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(187)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							_this->length = tmp15;
							HX_STACK_LINE(187)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(187)
							_this->byteLength = tmp16;
							HX_STACK_LINE(187)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(187)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								this2 = tmp19;
								HX_STACK_LINE(187)
								tmp17 = this2;
							}
							HX_STACK_LINE(187)
							_this->buffer = tmp17;
							HX_STACK_LINE(187)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(187)
							tmp13 = _this;
						}
						HX_STACK_LINE(187)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(187)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						if ((tmp13)){
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(187)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(187)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(187)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(187)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(187)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(187)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(187)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(187)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(187)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(187)
								if ((tmp22)){
									HX_STACK_LINE(187)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(187)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(187)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(187)
									{
										HX_STACK_LINE(187)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(187)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(187)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(187)
										this2 = tmp26;
										HX_STACK_LINE(187)
										tmp24 = this2;
									}
									HX_STACK_LINE(187)
									_this->buffer = tmp24;
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(187)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(187)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(187)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(187)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(187)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(187)
								_this->byteLength = tmp23;
								HX_STACK_LINE(187)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(187)
								_this->length = srcLength;
								HX_STACK_LINE(187)
								tmp14 = _this;
							}
							HX_STACK_LINE(187)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(187)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								{
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(187)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(187)
									if ((tmp17)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(187)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(187)
									if ((tmp19)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(187)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(187)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(187)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(187)
									if ((tmp20)){
										HX_STACK_LINE(187)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(187)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(187)
										if ((tmp24)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(187)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(187)
									_this->buffer = buffer;
									HX_STACK_LINE(187)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(187)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(187)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(187)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(187)
									_this->length = tmp22;
									HX_STACK_LINE(187)
									tmp15 = _this;
								}
								HX_STACK_LINE(187)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(187)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(187)
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(190)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(190)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(190)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							_this->length = tmp15;
							HX_STACK_LINE(190)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(190)
							_this->byteLength = tmp16;
							HX_STACK_LINE(190)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(190)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								this2 = tmp19;
								HX_STACK_LINE(190)
								tmp17 = this2;
							}
							HX_STACK_LINE(190)
							_this->buffer = tmp17;
							HX_STACK_LINE(190)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(190)
							tmp13 = _this;
						}
						HX_STACK_LINE(190)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(190)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						if ((tmp13)){
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(190)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(190)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(190)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(190)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(190)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(190)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(190)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(190)
								if ((tmp22)){
									HX_STACK_LINE(190)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(190)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(190)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(190)
									{
										HX_STACK_LINE(190)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(190)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(190)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(190)
										this2 = tmp26;
										HX_STACK_LINE(190)
										tmp24 = this2;
									}
									HX_STACK_LINE(190)
									_this->buffer = tmp24;
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(190)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(190)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(190)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(190)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(190)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(190)
								_this->byteLength = tmp23;
								HX_STACK_LINE(190)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(190)
								_this->length = srcLength;
								HX_STACK_LINE(190)
								tmp14 = _this;
							}
							HX_STACK_LINE(190)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(190)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							if ((tmp14)){
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								{
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(190)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(190)
									if ((tmp17)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(190)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(190)
									if ((tmp19)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(190)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(190)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(190)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(190)
									if ((tmp20)){
										HX_STACK_LINE(190)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(190)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(190)
										if ((tmp24)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(190)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(190)
									_this->buffer = buffer;
									HX_STACK_LINE(190)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(190)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(190)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(190)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(190)
									_this->length = tmp22;
									HX_STACK_LINE(190)
									tmp15 = _this;
								}
								HX_STACK_LINE(190)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(190)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(190)
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(193)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(193)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(193)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				if ((tmp11)){
					HX_STACK_LINE(193)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					if ((tmp12)){
						HX_STACK_LINE(193)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(193)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(193)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							_this->length = tmp15;
							HX_STACK_LINE(193)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							_this->byteLength = tmp16;
							HX_STACK_LINE(193)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(193)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								this2 = tmp19;
								HX_STACK_LINE(193)
								tmp17 = this2;
							}
							HX_STACK_LINE(193)
							_this->buffer = tmp17;
							HX_STACK_LINE(193)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(193)
							tmp13 = _this;
						}
						HX_STACK_LINE(193)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(193)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(193)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(193)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(193)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(193)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(193)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								if ((tmp22)){
									HX_STACK_LINE(193)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(193)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(193)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(193)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(193)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(193)
										this2 = tmp26;
										HX_STACK_LINE(193)
										tmp24 = this2;
									}
									HX_STACK_LINE(193)
									_this->buffer = tmp24;
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(193)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(193)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(193)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(193)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(193)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								_this->byteLength = tmp23;
								HX_STACK_LINE(193)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(193)
								_this->length = srcLength;
								HX_STACK_LINE(193)
								tmp14 = _this;
							}
							HX_STACK_LINE(193)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							if ((tmp14)){
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(193)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									if ((tmp19)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(193)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(193)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(193)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									if ((tmp20)){
										HX_STACK_LINE(193)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(193)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(193)
										if ((tmp24)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(193)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(193)
									_this->buffer = buffer;
									HX_STACK_LINE(193)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(193)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(193)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(193)
									_this->length = tmp22;
									HX_STACK_LINE(193)
									tmp15 = _this;
								}
								HX_STACK_LINE(193)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(193)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(196)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(196)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				if ((tmp11)){
					HX_STACK_LINE(196)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					if ((tmp12)){
						HX_STACK_LINE(196)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(196)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(196)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							_this->length = tmp15;
							HX_STACK_LINE(196)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							_this->byteLength = tmp16;
							HX_STACK_LINE(196)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(196)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								this2 = tmp19;
								HX_STACK_LINE(196)
								tmp17 = this2;
							}
							HX_STACK_LINE(196)
							_this->buffer = tmp17;
							HX_STACK_LINE(196)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(196)
							tmp13 = _this;
						}
						HX_STACK_LINE(196)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(196)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						if ((tmp13)){
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(196)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(196)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(196)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(196)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(196)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(196)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								if ((tmp22)){
									HX_STACK_LINE(196)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(196)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(196)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(196)
									{
										HX_STACK_LINE(196)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(196)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(196)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(196)
										this2 = tmp26;
										HX_STACK_LINE(196)
										tmp24 = this2;
									}
									HX_STACK_LINE(196)
									_this->buffer = tmp24;
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(196)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(196)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(196)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(196)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(196)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								_this->byteLength = tmp23;
								HX_STACK_LINE(196)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(196)
								_this->length = srcLength;
								HX_STACK_LINE(196)
								tmp14 = _this;
							}
							HX_STACK_LINE(196)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(196)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							if ((tmp14)){
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(196)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(196)
									if ((tmp17)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(196)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(196)
									if ((tmp19)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(196)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(196)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(196)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(196)
									if ((tmp20)){
										HX_STACK_LINE(196)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(196)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(196)
										if ((tmp24)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(196)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(196)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(196)
									_this->buffer = buffer;
									HX_STACK_LINE(196)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(196)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(196)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(196)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(196)
									_this->length = tmp22;
									HX_STACK_LINE(196)
									tmp15 = _this;
								}
								HX_STACK_LINE(196)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(196)
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(199)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(202)
	::snow::api::buffers::ArrayBufferView tmp8 = view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Int32Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Float32Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Float32Array",0x4cfabfaf,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Float32Array","snow/api/buffers/ArrayBufferView.hx",162,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(164)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(165)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(166)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = this->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		switch( (int)(tmp9)){
			case (int)1: {
				HX_STACK_LINE(172)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(172)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					if ((tmp12)){
						HX_STACK_LINE(172)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(172)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							_this->length = tmp15;
							HX_STACK_LINE(172)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							_this->byteLength = tmp16;
							HX_STACK_LINE(172)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(172)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								this2 = tmp19;
								HX_STACK_LINE(172)
								tmp17 = this2;
							}
							HX_STACK_LINE(172)
							_this->buffer = tmp17;
							HX_STACK_LINE(172)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(172)
							tmp13 = _this;
						}
						HX_STACK_LINE(172)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(172)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						if ((tmp13)){
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(172)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(172)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(172)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(172)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(172)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(172)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(172)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(172)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(172)
								if ((tmp22)){
									HX_STACK_LINE(172)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(172)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(172)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(172)
									{
										HX_STACK_LINE(172)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(172)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(172)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(172)
										this2 = tmp26;
										HX_STACK_LINE(172)
										tmp24 = this2;
									}
									HX_STACK_LINE(172)
									_this->buffer = tmp24;
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(172)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(172)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(172)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(172)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(172)
								_this->byteLength = tmp23;
								HX_STACK_LINE(172)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(172)
								_this->length = srcLength;
								HX_STACK_LINE(172)
								tmp14 = _this;
							}
							HX_STACK_LINE(172)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							if ((tmp14)){
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								{
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(172)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(172)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(172)
									if ((tmp19)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(172)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(172)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(172)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(172)
									if ((tmp20)){
										HX_STACK_LINE(172)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(172)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(172)
										if ((tmp24)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(172)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(172)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(172)
									_this->buffer = buffer;
									HX_STACK_LINE(172)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(172)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(172)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(172)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(172)
									_this->length = tmp22;
									HX_STACK_LINE(172)
									tmp15 = _this;
								}
								HX_STACK_LINE(172)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(172)
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(175)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(175)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(175)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(175)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							_this->length = tmp15;
							HX_STACK_LINE(175)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(175)
							_this->byteLength = tmp16;
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(175)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								this2 = tmp19;
								HX_STACK_LINE(175)
								tmp17 = this2;
							}
							HX_STACK_LINE(175)
							_this->buffer = tmp17;
							HX_STACK_LINE(175)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(175)
							tmp13 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						if ((tmp13)){
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(175)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(175)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(175)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(175)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(175)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(175)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(175)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(175)
								if ((tmp22)){
									HX_STACK_LINE(175)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(175)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(175)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(175)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(175)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(175)
										this2 = tmp26;
										HX_STACK_LINE(175)
										tmp24 = this2;
									}
									HX_STACK_LINE(175)
									_this->buffer = tmp24;
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(175)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(175)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(175)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(175)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(175)
								_this->byteLength = tmp23;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->length = srcLength;
								HX_STACK_LINE(175)
								tmp14 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(175)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							if ((tmp14)){
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(175)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(175)
									if ((tmp17)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(175)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(175)
									if ((tmp19)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(175)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(175)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(175)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(175)
									if ((tmp20)){
										HX_STACK_LINE(175)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(175)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(175)
										if ((tmp24)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(175)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(175)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(175)
									_this->buffer = buffer;
									HX_STACK_LINE(175)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(175)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(175)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(175)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(175)
									_this->length = tmp22;
									HX_STACK_LINE(175)
									tmp15 = _this;
								}
								HX_STACK_LINE(175)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(175)
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(178)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(178)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(178)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(178)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(178)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(178)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(178)
							_this->length = tmp15;
							HX_STACK_LINE(178)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(178)
							_this->byteLength = tmp16;
							HX_STACK_LINE(178)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(178)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								this2 = tmp19;
								HX_STACK_LINE(178)
								tmp17 = this2;
							}
							HX_STACK_LINE(178)
							_this->buffer = tmp17;
							HX_STACK_LINE(178)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(178)
							tmp13 = _this;
						}
						HX_STACK_LINE(178)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(178)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						if ((tmp13)){
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(178)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(178)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(178)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(178)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(178)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								if ((tmp22)){
									HX_STACK_LINE(178)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(178)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(178)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(178)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(178)
										this2 = tmp26;
										HX_STACK_LINE(178)
										tmp24 = this2;
									}
									HX_STACK_LINE(178)
									_this->buffer = tmp24;
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(178)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(178)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(178)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(178)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								_this->byteLength = tmp23;
								HX_STACK_LINE(178)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(178)
								_this->length = srcLength;
								HX_STACK_LINE(178)
								tmp14 = _this;
							}
							HX_STACK_LINE(178)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(178)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							if ((tmp14)){
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(178)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(178)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(178)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(178)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(178)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(178)
										if ((tmp24)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(178)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(178)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(178)
									_this->buffer = buffer;
									HX_STACK_LINE(178)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(178)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(178)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(178)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(178)
									_this->length = tmp22;
									HX_STACK_LINE(178)
									tmp15 = _this;
								}
								HX_STACK_LINE(178)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(178)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(178)
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(181)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(181)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				if ((tmp11)){
					HX_STACK_LINE(181)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(181)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(181)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(181)
							_this->length = tmp15;
							HX_STACK_LINE(181)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(181)
							_this->byteLength = tmp16;
							HX_STACK_LINE(181)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(181)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								this2 = tmp19;
								HX_STACK_LINE(181)
								tmp17 = this2;
							}
							HX_STACK_LINE(181)
							_this->buffer = tmp17;
							HX_STACK_LINE(181)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(181)
							tmp13 = _this;
						}
						HX_STACK_LINE(181)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(181)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						if ((tmp13)){
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(181)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(181)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(181)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(181)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(181)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(181)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(181)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(181)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(181)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(181)
								if ((tmp22)){
									HX_STACK_LINE(181)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(181)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(181)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(181)
									{
										HX_STACK_LINE(181)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(181)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(181)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(181)
										this2 = tmp26;
										HX_STACK_LINE(181)
										tmp24 = this2;
									}
									HX_STACK_LINE(181)
									_this->buffer = tmp24;
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(181)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(181)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(181)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(181)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(181)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(181)
								_this->byteLength = tmp23;
								HX_STACK_LINE(181)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(181)
								_this->length = srcLength;
								HX_STACK_LINE(181)
								tmp14 = _this;
							}
							HX_STACK_LINE(181)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(181)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							if ((tmp14)){
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								{
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(181)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(181)
									if ((tmp17)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(181)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(181)
									if ((tmp19)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(181)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(181)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(181)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(181)
									if ((tmp20)){
										HX_STACK_LINE(181)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(181)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(181)
										if ((tmp24)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(181)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(181)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(181)
									_this->buffer = buffer;
									HX_STACK_LINE(181)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(181)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(181)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(181)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(181)
									_this->length = tmp22;
									HX_STACK_LINE(181)
									tmp15 = _this;
								}
								HX_STACK_LINE(181)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(181)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(181)
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(184)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(184)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					if ((tmp12)){
						HX_STACK_LINE(184)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(184)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(184)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(184)
							_this->length = tmp15;
							HX_STACK_LINE(184)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							_this->byteLength = tmp16;
							HX_STACK_LINE(184)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(184)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								this2 = tmp19;
								HX_STACK_LINE(184)
								tmp17 = this2;
							}
							HX_STACK_LINE(184)
							_this->buffer = tmp17;
							HX_STACK_LINE(184)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(184)
							tmp13 = _this;
						}
						HX_STACK_LINE(184)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(184)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						if ((tmp13)){
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(184)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(184)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(184)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(184)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(184)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(184)
								if ((tmp22)){
									HX_STACK_LINE(184)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(184)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(184)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(184)
									{
										HX_STACK_LINE(184)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(184)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(184)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(184)
										this2 = tmp26;
										HX_STACK_LINE(184)
										tmp24 = this2;
									}
									HX_STACK_LINE(184)
									_this->buffer = tmp24;
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(184)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(184)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(184)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(184)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(184)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(184)
								_this->byteLength = tmp23;
								HX_STACK_LINE(184)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(184)
								_this->length = srcLength;
								HX_STACK_LINE(184)
								tmp14 = _this;
							}
							HX_STACK_LINE(184)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(184)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							if ((tmp14)){
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								{
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(184)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(184)
									if ((tmp17)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(184)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(184)
									if ((tmp19)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(184)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(184)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(184)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(184)
									if ((tmp20)){
										HX_STACK_LINE(184)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(184)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(184)
										if ((tmp24)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(184)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(184)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(184)
									_this->buffer = buffer;
									HX_STACK_LINE(184)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(184)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(184)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(184)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(184)
									_this->length = tmp22;
									HX_STACK_LINE(184)
									tmp15 = _this;
								}
								HX_STACK_LINE(184)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(184)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(184)
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(187)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(187)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				if ((tmp11)){
					HX_STACK_LINE(187)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(187)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					if ((tmp12)){
						HX_STACK_LINE(187)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(187)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(187)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							_this->length = tmp15;
							HX_STACK_LINE(187)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(187)
							_this->byteLength = tmp16;
							HX_STACK_LINE(187)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(187)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								this2 = tmp19;
								HX_STACK_LINE(187)
								tmp17 = this2;
							}
							HX_STACK_LINE(187)
							_this->buffer = tmp17;
							HX_STACK_LINE(187)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(187)
							tmp13 = _this;
						}
						HX_STACK_LINE(187)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(187)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						if ((tmp13)){
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(187)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(187)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(187)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(187)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(187)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(187)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(187)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(187)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(187)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(187)
								if ((tmp22)){
									HX_STACK_LINE(187)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(187)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(187)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(187)
									{
										HX_STACK_LINE(187)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(187)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(187)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(187)
										this2 = tmp26;
										HX_STACK_LINE(187)
										tmp24 = this2;
									}
									HX_STACK_LINE(187)
									_this->buffer = tmp24;
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(187)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(187)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(187)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(187)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(187)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(187)
								_this->byteLength = tmp23;
								HX_STACK_LINE(187)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(187)
								_this->length = srcLength;
								HX_STACK_LINE(187)
								tmp14 = _this;
							}
							HX_STACK_LINE(187)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(187)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								{
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(187)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(187)
									if ((tmp17)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(187)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(187)
									if ((tmp19)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(187)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(187)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(187)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(187)
									if ((tmp20)){
										HX_STACK_LINE(187)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(187)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(187)
										if ((tmp24)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(187)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(187)
									_this->buffer = buffer;
									HX_STACK_LINE(187)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(187)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(187)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(187)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(187)
									_this->length = tmp22;
									HX_STACK_LINE(187)
									tmp15 = _this;
								}
								HX_STACK_LINE(187)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(187)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(187)
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(190)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(190)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(190)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							_this->length = tmp15;
							HX_STACK_LINE(190)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(190)
							_this->byteLength = tmp16;
							HX_STACK_LINE(190)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(190)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								this2 = tmp19;
								HX_STACK_LINE(190)
								tmp17 = this2;
							}
							HX_STACK_LINE(190)
							_this->buffer = tmp17;
							HX_STACK_LINE(190)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(190)
							tmp13 = _this;
						}
						HX_STACK_LINE(190)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(190)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						if ((tmp13)){
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(190)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(190)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(190)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(190)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(190)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(190)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(190)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(190)
								if ((tmp22)){
									HX_STACK_LINE(190)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(190)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(190)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(190)
									{
										HX_STACK_LINE(190)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(190)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(190)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(190)
										this2 = tmp26;
										HX_STACK_LINE(190)
										tmp24 = this2;
									}
									HX_STACK_LINE(190)
									_this->buffer = tmp24;
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(190)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(190)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(190)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(190)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(190)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(190)
								_this->byteLength = tmp23;
								HX_STACK_LINE(190)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(190)
								_this->length = srcLength;
								HX_STACK_LINE(190)
								tmp14 = _this;
							}
							HX_STACK_LINE(190)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(190)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							if ((tmp14)){
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								{
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(190)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(190)
									if ((tmp17)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(190)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(190)
									if ((tmp19)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(190)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(190)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(190)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(190)
									if ((tmp20)){
										HX_STACK_LINE(190)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(190)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(190)
										if ((tmp24)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(190)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(190)
									_this->buffer = buffer;
									HX_STACK_LINE(190)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(190)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(190)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(190)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(190)
									_this->length = tmp22;
									HX_STACK_LINE(190)
									tmp15 = _this;
								}
								HX_STACK_LINE(190)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(190)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(190)
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(193)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(193)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(193)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				if ((tmp11)){
					HX_STACK_LINE(193)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					if ((tmp12)){
						HX_STACK_LINE(193)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(193)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(193)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							_this->length = tmp15;
							HX_STACK_LINE(193)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							_this->byteLength = tmp16;
							HX_STACK_LINE(193)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(193)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								this2 = tmp19;
								HX_STACK_LINE(193)
								tmp17 = this2;
							}
							HX_STACK_LINE(193)
							_this->buffer = tmp17;
							HX_STACK_LINE(193)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(193)
							tmp13 = _this;
						}
						HX_STACK_LINE(193)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(193)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(193)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(193)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(193)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(193)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(193)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								if ((tmp22)){
									HX_STACK_LINE(193)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(193)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(193)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(193)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(193)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(193)
										this2 = tmp26;
										HX_STACK_LINE(193)
										tmp24 = this2;
									}
									HX_STACK_LINE(193)
									_this->buffer = tmp24;
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(193)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(193)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(193)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(193)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(193)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								_this->byteLength = tmp23;
								HX_STACK_LINE(193)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(193)
								_this->length = srcLength;
								HX_STACK_LINE(193)
								tmp14 = _this;
							}
							HX_STACK_LINE(193)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							if ((tmp14)){
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(193)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									if ((tmp19)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(193)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(193)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(193)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									if ((tmp20)){
										HX_STACK_LINE(193)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(193)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(193)
										if ((tmp24)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(193)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(193)
									_this->buffer = buffer;
									HX_STACK_LINE(193)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(193)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(193)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(193)
									_this->length = tmp22;
									HX_STACK_LINE(193)
									tmp15 = _this;
								}
								HX_STACK_LINE(193)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(193)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(196)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(196)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				if ((tmp11)){
					HX_STACK_LINE(196)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					if ((tmp12)){
						HX_STACK_LINE(196)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(196)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(196)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							_this->length = tmp15;
							HX_STACK_LINE(196)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							_this->byteLength = tmp16;
							HX_STACK_LINE(196)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(196)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								this2 = tmp19;
								HX_STACK_LINE(196)
								tmp17 = this2;
							}
							HX_STACK_LINE(196)
							_this->buffer = tmp17;
							HX_STACK_LINE(196)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(196)
							tmp13 = _this;
						}
						HX_STACK_LINE(196)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(196)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						if ((tmp13)){
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(196)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(196)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(196)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(196)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(196)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(196)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								if ((tmp22)){
									HX_STACK_LINE(196)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(196)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(196)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(196)
									{
										HX_STACK_LINE(196)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(196)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(196)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(196)
										this2 = tmp26;
										HX_STACK_LINE(196)
										tmp24 = this2;
									}
									HX_STACK_LINE(196)
									_this->buffer = tmp24;
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(196)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(196)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(196)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(196)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(196)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								_this->byteLength = tmp23;
								HX_STACK_LINE(196)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(196)
								_this->length = srcLength;
								HX_STACK_LINE(196)
								tmp14 = _this;
							}
							HX_STACK_LINE(196)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(196)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							if ((tmp14)){
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(196)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(196)
									if ((tmp17)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(196)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(196)
									if ((tmp19)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(196)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(196)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(196)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(196)
									if ((tmp20)){
										HX_STACK_LINE(196)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(196)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(196)
										if ((tmp24)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(196)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(196)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(196)
									_this->buffer = buffer;
									HX_STACK_LINE(196)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(196)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(196)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(196)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(196)
									_this->length = tmp22;
									HX_STACK_LINE(196)
									tmp15 = _this;
								}
								HX_STACK_LINE(196)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(196)
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(199)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(202)
	::snow::api::buffers::ArrayBufferView tmp8 = view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Float32Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Int8Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Int8Array",0x82aea67f,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Int8Array","snow/api/buffers/ArrayBufferView.hx",162,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(164)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(165)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(166)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = this->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		switch( (int)(tmp9)){
			case (int)1: {
				HX_STACK_LINE(172)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(172)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					if ((tmp12)){
						HX_STACK_LINE(172)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(172)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							_this->length = tmp15;
							HX_STACK_LINE(172)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							_this->byteLength = tmp16;
							HX_STACK_LINE(172)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(172)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								this2 = tmp19;
								HX_STACK_LINE(172)
								tmp17 = this2;
							}
							HX_STACK_LINE(172)
							_this->buffer = tmp17;
							HX_STACK_LINE(172)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(172)
							tmp13 = _this;
						}
						HX_STACK_LINE(172)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(172)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						if ((tmp13)){
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(172)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(172)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(172)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(172)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(172)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(172)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(172)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(172)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(172)
								if ((tmp22)){
									HX_STACK_LINE(172)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(172)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(172)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(172)
									{
										HX_STACK_LINE(172)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(172)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(172)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(172)
										this2 = tmp26;
										HX_STACK_LINE(172)
										tmp24 = this2;
									}
									HX_STACK_LINE(172)
									_this->buffer = tmp24;
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(172)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(172)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(172)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(172)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(172)
								_this->byteLength = tmp23;
								HX_STACK_LINE(172)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(172)
								_this->length = srcLength;
								HX_STACK_LINE(172)
								tmp14 = _this;
							}
							HX_STACK_LINE(172)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							if ((tmp14)){
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								{
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(172)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(172)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(172)
									if ((tmp19)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(172)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(172)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(172)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(172)
									if ((tmp20)){
										HX_STACK_LINE(172)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(172)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(172)
										if ((tmp24)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(172)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(172)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(172)
									_this->buffer = buffer;
									HX_STACK_LINE(172)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(172)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(172)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(172)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(172)
									_this->length = tmp22;
									HX_STACK_LINE(172)
									tmp15 = _this;
								}
								HX_STACK_LINE(172)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(172)
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(175)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(175)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(175)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(175)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							_this->length = tmp15;
							HX_STACK_LINE(175)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(175)
							_this->byteLength = tmp16;
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(175)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								this2 = tmp19;
								HX_STACK_LINE(175)
								tmp17 = this2;
							}
							HX_STACK_LINE(175)
							_this->buffer = tmp17;
							HX_STACK_LINE(175)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(175)
							tmp13 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						if ((tmp13)){
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(175)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(175)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(175)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(175)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(175)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(175)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(175)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(175)
								if ((tmp22)){
									HX_STACK_LINE(175)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(175)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(175)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(175)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(175)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(175)
										this2 = tmp26;
										HX_STACK_LINE(175)
										tmp24 = this2;
									}
									HX_STACK_LINE(175)
									_this->buffer = tmp24;
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(175)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(175)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(175)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(175)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(175)
								_this->byteLength = tmp23;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->length = srcLength;
								HX_STACK_LINE(175)
								tmp14 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(175)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							if ((tmp14)){
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(175)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(175)
									if ((tmp17)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(175)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(175)
									if ((tmp19)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(175)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(175)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(175)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(175)
									if ((tmp20)){
										HX_STACK_LINE(175)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(175)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(175)
										if ((tmp24)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(175)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(175)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(175)
									_this->buffer = buffer;
									HX_STACK_LINE(175)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(175)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(175)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(175)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(175)
									_this->length = tmp22;
									HX_STACK_LINE(175)
									tmp15 = _this;
								}
								HX_STACK_LINE(175)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(175)
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(178)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(178)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(178)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(178)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(178)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(178)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(178)
							_this->length = tmp15;
							HX_STACK_LINE(178)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(178)
							_this->byteLength = tmp16;
							HX_STACK_LINE(178)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(178)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								this2 = tmp19;
								HX_STACK_LINE(178)
								tmp17 = this2;
							}
							HX_STACK_LINE(178)
							_this->buffer = tmp17;
							HX_STACK_LINE(178)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(178)
							tmp13 = _this;
						}
						HX_STACK_LINE(178)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(178)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						if ((tmp13)){
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(178)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(178)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(178)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(178)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(178)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								if ((tmp22)){
									HX_STACK_LINE(178)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(178)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(178)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(178)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(178)
										this2 = tmp26;
										HX_STACK_LINE(178)
										tmp24 = this2;
									}
									HX_STACK_LINE(178)
									_this->buffer = tmp24;
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(178)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(178)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(178)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(178)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								_this->byteLength = tmp23;
								HX_STACK_LINE(178)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(178)
								_this->length = srcLength;
								HX_STACK_LINE(178)
								tmp14 = _this;
							}
							HX_STACK_LINE(178)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(178)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							if ((tmp14)){
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(178)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(178)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(178)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(178)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(178)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(178)
										if ((tmp24)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(178)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(178)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(178)
									_this->buffer = buffer;
									HX_STACK_LINE(178)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(178)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(178)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(178)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(178)
									_this->length = tmp22;
									HX_STACK_LINE(178)
									tmp15 = _this;
								}
								HX_STACK_LINE(178)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(178)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(178)
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(181)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(181)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				if ((tmp11)){
					HX_STACK_LINE(181)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(181)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(181)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(181)
							_this->length = tmp15;
							HX_STACK_LINE(181)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(181)
							_this->byteLength = tmp16;
							HX_STACK_LINE(181)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(181)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								this2 = tmp19;
								HX_STACK_LINE(181)
								tmp17 = this2;
							}
							HX_STACK_LINE(181)
							_this->buffer = tmp17;
							HX_STACK_LINE(181)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(181)
							tmp13 = _this;
						}
						HX_STACK_LINE(181)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(181)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						if ((tmp13)){
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(181)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(181)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(181)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(181)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(181)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(181)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(181)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(181)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(181)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(181)
								if ((tmp22)){
									HX_STACK_LINE(181)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(181)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(181)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(181)
									{
										HX_STACK_LINE(181)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(181)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(181)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(181)
										this2 = tmp26;
										HX_STACK_LINE(181)
										tmp24 = this2;
									}
									HX_STACK_LINE(181)
									_this->buffer = tmp24;
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(181)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(181)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(181)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(181)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(181)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(181)
								_this->byteLength = tmp23;
								HX_STACK_LINE(181)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(181)
								_this->length = srcLength;
								HX_STACK_LINE(181)
								tmp14 = _this;
							}
							HX_STACK_LINE(181)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(181)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							if ((tmp14)){
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								{
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(181)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(181)
									if ((tmp17)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(181)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(181)
									if ((tmp19)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(181)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(181)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(181)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(181)
									if ((tmp20)){
										HX_STACK_LINE(181)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(181)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(181)
										if ((tmp24)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(181)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(181)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(181)
									_this->buffer = buffer;
									HX_STACK_LINE(181)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(181)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(181)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(181)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(181)
									_this->length = tmp22;
									HX_STACK_LINE(181)
									tmp15 = _this;
								}
								HX_STACK_LINE(181)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(181)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(181)
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(184)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(184)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					if ((tmp12)){
						HX_STACK_LINE(184)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(184)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(184)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(184)
							_this->length = tmp15;
							HX_STACK_LINE(184)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							_this->byteLength = tmp16;
							HX_STACK_LINE(184)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(184)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								this2 = tmp19;
								HX_STACK_LINE(184)
								tmp17 = this2;
							}
							HX_STACK_LINE(184)
							_this->buffer = tmp17;
							HX_STACK_LINE(184)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(184)
							tmp13 = _this;
						}
						HX_STACK_LINE(184)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(184)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						if ((tmp13)){
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(184)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(184)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(184)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(184)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(184)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(184)
								if ((tmp22)){
									HX_STACK_LINE(184)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(184)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(184)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(184)
									{
										HX_STACK_LINE(184)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(184)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(184)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(184)
										this2 = tmp26;
										HX_STACK_LINE(184)
										tmp24 = this2;
									}
									HX_STACK_LINE(184)
									_this->buffer = tmp24;
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(184)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(184)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(184)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(184)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(184)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(184)
								_this->byteLength = tmp23;
								HX_STACK_LINE(184)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(184)
								_this->length = srcLength;
								HX_STACK_LINE(184)
								tmp14 = _this;
							}
							HX_STACK_LINE(184)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(184)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							if ((tmp14)){
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								{
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(184)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(184)
									if ((tmp17)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(184)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(184)
									if ((tmp19)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(184)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(184)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(184)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(184)
									if ((tmp20)){
										HX_STACK_LINE(184)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(184)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(184)
										if ((tmp24)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(184)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(184)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(184)
									_this->buffer = buffer;
									HX_STACK_LINE(184)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(184)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(184)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(184)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(184)
									_this->length = tmp22;
									HX_STACK_LINE(184)
									tmp15 = _this;
								}
								HX_STACK_LINE(184)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(184)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(184)
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(187)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(187)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				if ((tmp11)){
					HX_STACK_LINE(187)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(187)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					if ((tmp12)){
						HX_STACK_LINE(187)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(187)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(187)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							_this->length = tmp15;
							HX_STACK_LINE(187)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(187)
							_this->byteLength = tmp16;
							HX_STACK_LINE(187)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(187)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								this2 = tmp19;
								HX_STACK_LINE(187)
								tmp17 = this2;
							}
							HX_STACK_LINE(187)
							_this->buffer = tmp17;
							HX_STACK_LINE(187)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(187)
							tmp13 = _this;
						}
						HX_STACK_LINE(187)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(187)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						if ((tmp13)){
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(187)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(187)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(187)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(187)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(187)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(187)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(187)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(187)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(187)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(187)
								if ((tmp22)){
									HX_STACK_LINE(187)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(187)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(187)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(187)
									{
										HX_STACK_LINE(187)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(187)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(187)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(187)
										this2 = tmp26;
										HX_STACK_LINE(187)
										tmp24 = this2;
									}
									HX_STACK_LINE(187)
									_this->buffer = tmp24;
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(187)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(187)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(187)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(187)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(187)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(187)
								_this->byteLength = tmp23;
								HX_STACK_LINE(187)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(187)
								_this->length = srcLength;
								HX_STACK_LINE(187)
								tmp14 = _this;
							}
							HX_STACK_LINE(187)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(187)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								{
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(187)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(187)
									if ((tmp17)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(187)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(187)
									if ((tmp19)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(187)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(187)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(187)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(187)
									if ((tmp20)){
										HX_STACK_LINE(187)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(187)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(187)
										if ((tmp24)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(187)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(187)
									_this->buffer = buffer;
									HX_STACK_LINE(187)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(187)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(187)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(187)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(187)
									_this->length = tmp22;
									HX_STACK_LINE(187)
									tmp15 = _this;
								}
								HX_STACK_LINE(187)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(187)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(187)
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(190)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(190)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(190)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							_this->length = tmp15;
							HX_STACK_LINE(190)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(190)
							_this->byteLength = tmp16;
							HX_STACK_LINE(190)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(190)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								this2 = tmp19;
								HX_STACK_LINE(190)
								tmp17 = this2;
							}
							HX_STACK_LINE(190)
							_this->buffer = tmp17;
							HX_STACK_LINE(190)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(190)
							tmp13 = _this;
						}
						HX_STACK_LINE(190)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(190)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						if ((tmp13)){
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(190)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(190)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(190)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(190)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(190)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(190)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(190)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(190)
								if ((tmp22)){
									HX_STACK_LINE(190)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(190)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(190)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(190)
									{
										HX_STACK_LINE(190)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(190)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(190)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(190)
										this2 = tmp26;
										HX_STACK_LINE(190)
										tmp24 = this2;
									}
									HX_STACK_LINE(190)
									_this->buffer = tmp24;
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(190)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(190)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(190)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(190)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(190)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(190)
								_this->byteLength = tmp23;
								HX_STACK_LINE(190)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(190)
								_this->length = srcLength;
								HX_STACK_LINE(190)
								tmp14 = _this;
							}
							HX_STACK_LINE(190)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(190)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							if ((tmp14)){
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								{
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(190)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(190)
									if ((tmp17)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(190)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(190)
									if ((tmp19)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(190)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(190)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(190)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(190)
									if ((tmp20)){
										HX_STACK_LINE(190)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(190)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(190)
										if ((tmp24)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(190)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(190)
									_this->buffer = buffer;
									HX_STACK_LINE(190)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(190)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(190)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(190)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(190)
									_this->length = tmp22;
									HX_STACK_LINE(190)
									tmp15 = _this;
								}
								HX_STACK_LINE(190)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(190)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(190)
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(193)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(193)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(193)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				if ((tmp11)){
					HX_STACK_LINE(193)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					if ((tmp12)){
						HX_STACK_LINE(193)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(193)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(193)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							_this->length = tmp15;
							HX_STACK_LINE(193)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							_this->byteLength = tmp16;
							HX_STACK_LINE(193)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(193)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								this2 = tmp19;
								HX_STACK_LINE(193)
								tmp17 = this2;
							}
							HX_STACK_LINE(193)
							_this->buffer = tmp17;
							HX_STACK_LINE(193)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(193)
							tmp13 = _this;
						}
						HX_STACK_LINE(193)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(193)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(193)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(193)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(193)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(193)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(193)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								if ((tmp22)){
									HX_STACK_LINE(193)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(193)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(193)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(193)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(193)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(193)
										this2 = tmp26;
										HX_STACK_LINE(193)
										tmp24 = this2;
									}
									HX_STACK_LINE(193)
									_this->buffer = tmp24;
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(193)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(193)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(193)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(193)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(193)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								_this->byteLength = tmp23;
								HX_STACK_LINE(193)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(193)
								_this->length = srcLength;
								HX_STACK_LINE(193)
								tmp14 = _this;
							}
							HX_STACK_LINE(193)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							if ((tmp14)){
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(193)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									if ((tmp19)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(193)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(193)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(193)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									if ((tmp20)){
										HX_STACK_LINE(193)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(193)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(193)
										if ((tmp24)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(193)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(193)
									_this->buffer = buffer;
									HX_STACK_LINE(193)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(193)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(193)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(193)
									_this->length = tmp22;
									HX_STACK_LINE(193)
									tmp15 = _this;
								}
								HX_STACK_LINE(193)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(193)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(196)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(196)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				if ((tmp11)){
					HX_STACK_LINE(196)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					if ((tmp12)){
						HX_STACK_LINE(196)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(196)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(196)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							_this->length = tmp15;
							HX_STACK_LINE(196)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							_this->byteLength = tmp16;
							HX_STACK_LINE(196)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(196)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								this2 = tmp19;
								HX_STACK_LINE(196)
								tmp17 = this2;
							}
							HX_STACK_LINE(196)
							_this->buffer = tmp17;
							HX_STACK_LINE(196)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(196)
							tmp13 = _this;
						}
						HX_STACK_LINE(196)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(196)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						if ((tmp13)){
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(196)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(196)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(196)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(196)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(196)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(196)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								if ((tmp22)){
									HX_STACK_LINE(196)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(196)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(196)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(196)
									{
										HX_STACK_LINE(196)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(196)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(196)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(196)
										this2 = tmp26;
										HX_STACK_LINE(196)
										tmp24 = this2;
									}
									HX_STACK_LINE(196)
									_this->buffer = tmp24;
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(196)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(196)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(196)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(196)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(196)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								_this->byteLength = tmp23;
								HX_STACK_LINE(196)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(196)
								_this->length = srcLength;
								HX_STACK_LINE(196)
								tmp14 = _this;
							}
							HX_STACK_LINE(196)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(196)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							if ((tmp14)){
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(196)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(196)
									if ((tmp17)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(196)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(196)
									if ((tmp19)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(196)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(196)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(196)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(196)
									if ((tmp20)){
										HX_STACK_LINE(196)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(196)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(196)
										if ((tmp24)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(196)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(196)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(196)
									_this->buffer = buffer;
									HX_STACK_LINE(196)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(196)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(196)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(196)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(196)
									_this->length = tmp22;
									HX_STACK_LINE(196)
									tmp15 = _this;
								}
								HX_STACK_LINE(196)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(196)
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(199)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(202)
	::snow::api::buffers::ArrayBufferView tmp8 = view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Int8Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Uint8ClampedArray( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Uint8ClampedArray",0x26c454ac,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Uint8ClampedArray","snow/api/buffers/ArrayBufferView.hx",162,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(164)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(165)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(166)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = this->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		switch( (int)(tmp9)){
			case (int)1: {
				HX_STACK_LINE(172)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(172)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					if ((tmp12)){
						HX_STACK_LINE(172)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(172)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							_this->length = tmp15;
							HX_STACK_LINE(172)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							_this->byteLength = tmp16;
							HX_STACK_LINE(172)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(172)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								this2 = tmp19;
								HX_STACK_LINE(172)
								tmp17 = this2;
							}
							HX_STACK_LINE(172)
							_this->buffer = tmp17;
							HX_STACK_LINE(172)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(172)
							tmp13 = _this;
						}
						HX_STACK_LINE(172)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(172)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						if ((tmp13)){
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(172)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(172)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(172)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(172)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(172)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(172)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(172)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(172)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(172)
								if ((tmp22)){
									HX_STACK_LINE(172)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(172)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(172)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(172)
									{
										HX_STACK_LINE(172)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(172)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(172)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(172)
										this2 = tmp26;
										HX_STACK_LINE(172)
										tmp24 = this2;
									}
									HX_STACK_LINE(172)
									_this->buffer = tmp24;
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(172)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(172)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(172)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(172)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(172)
								_this->byteLength = tmp23;
								HX_STACK_LINE(172)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(172)
								_this->length = srcLength;
								HX_STACK_LINE(172)
								tmp14 = _this;
							}
							HX_STACK_LINE(172)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							if ((tmp14)){
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								{
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(172)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(172)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(172)
									if ((tmp19)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(172)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(172)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(172)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(172)
									if ((tmp20)){
										HX_STACK_LINE(172)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(172)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(172)
										if ((tmp24)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(172)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(172)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(172)
									_this->buffer = buffer;
									HX_STACK_LINE(172)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(172)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(172)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(172)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(172)
									_this->length = tmp22;
									HX_STACK_LINE(172)
									tmp15 = _this;
								}
								HX_STACK_LINE(172)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(172)
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(175)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(175)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(175)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(175)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							_this->length = tmp15;
							HX_STACK_LINE(175)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(175)
							_this->byteLength = tmp16;
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(175)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								this2 = tmp19;
								HX_STACK_LINE(175)
								tmp17 = this2;
							}
							HX_STACK_LINE(175)
							_this->buffer = tmp17;
							HX_STACK_LINE(175)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(175)
							tmp13 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						if ((tmp13)){
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(175)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(175)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(175)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(175)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(175)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(175)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(175)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(175)
								if ((tmp22)){
									HX_STACK_LINE(175)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(175)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(175)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(175)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(175)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(175)
										this2 = tmp26;
										HX_STACK_LINE(175)
										tmp24 = this2;
									}
									HX_STACK_LINE(175)
									_this->buffer = tmp24;
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(175)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(175)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(175)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(175)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(175)
								_this->byteLength = tmp23;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->length = srcLength;
								HX_STACK_LINE(175)
								tmp14 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(175)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							if ((tmp14)){
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(175)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(175)
									if ((tmp17)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(175)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(175)
									if ((tmp19)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(175)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(175)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(175)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(175)
									if ((tmp20)){
										HX_STACK_LINE(175)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(175)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(175)
										if ((tmp24)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(175)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(175)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(175)
									_this->buffer = buffer;
									HX_STACK_LINE(175)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(175)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(175)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(175)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(175)
									_this->length = tmp22;
									HX_STACK_LINE(175)
									tmp15 = _this;
								}
								HX_STACK_LINE(175)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(175)
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(178)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(178)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(178)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(178)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(178)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(178)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(178)
							_this->length = tmp15;
							HX_STACK_LINE(178)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(178)
							_this->byteLength = tmp16;
							HX_STACK_LINE(178)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(178)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								this2 = tmp19;
								HX_STACK_LINE(178)
								tmp17 = this2;
							}
							HX_STACK_LINE(178)
							_this->buffer = tmp17;
							HX_STACK_LINE(178)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(178)
							tmp13 = _this;
						}
						HX_STACK_LINE(178)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(178)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						if ((tmp13)){
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(178)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(178)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(178)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(178)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(178)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								if ((tmp22)){
									HX_STACK_LINE(178)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(178)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(178)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(178)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(178)
										this2 = tmp26;
										HX_STACK_LINE(178)
										tmp24 = this2;
									}
									HX_STACK_LINE(178)
									_this->buffer = tmp24;
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(178)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(178)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(178)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(178)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								_this->byteLength = tmp23;
								HX_STACK_LINE(178)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(178)
								_this->length = srcLength;
								HX_STACK_LINE(178)
								tmp14 = _this;
							}
							HX_STACK_LINE(178)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(178)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							if ((tmp14)){
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(178)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(178)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(178)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(178)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(178)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(178)
										if ((tmp24)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(178)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(178)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(178)
									_this->buffer = buffer;
									HX_STACK_LINE(178)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(178)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(178)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(178)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(178)
									_this->length = tmp22;
									HX_STACK_LINE(178)
									tmp15 = _this;
								}
								HX_STACK_LINE(178)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(178)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(178)
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(181)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(181)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				if ((tmp11)){
					HX_STACK_LINE(181)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(181)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(181)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(181)
							_this->length = tmp15;
							HX_STACK_LINE(181)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(181)
							_this->byteLength = tmp16;
							HX_STACK_LINE(181)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(181)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								this2 = tmp19;
								HX_STACK_LINE(181)
								tmp17 = this2;
							}
							HX_STACK_LINE(181)
							_this->buffer = tmp17;
							HX_STACK_LINE(181)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(181)
							tmp13 = _this;
						}
						HX_STACK_LINE(181)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(181)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						if ((tmp13)){
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(181)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(181)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(181)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(181)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(181)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(181)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(181)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(181)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(181)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(181)
								if ((tmp22)){
									HX_STACK_LINE(181)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(181)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(181)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(181)
									{
										HX_STACK_LINE(181)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(181)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(181)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(181)
										this2 = tmp26;
										HX_STACK_LINE(181)
										tmp24 = this2;
									}
									HX_STACK_LINE(181)
									_this->buffer = tmp24;
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(181)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(181)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(181)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(181)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(181)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(181)
								_this->byteLength = tmp23;
								HX_STACK_LINE(181)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(181)
								_this->length = srcLength;
								HX_STACK_LINE(181)
								tmp14 = _this;
							}
							HX_STACK_LINE(181)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(181)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							if ((tmp14)){
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								{
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(181)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(181)
									if ((tmp17)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(181)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(181)
									if ((tmp19)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(181)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(181)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(181)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(181)
									if ((tmp20)){
										HX_STACK_LINE(181)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(181)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(181)
										if ((tmp24)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(181)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(181)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(181)
									_this->buffer = buffer;
									HX_STACK_LINE(181)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(181)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(181)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(181)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(181)
									_this->length = tmp22;
									HX_STACK_LINE(181)
									tmp15 = _this;
								}
								HX_STACK_LINE(181)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(181)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(181)
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(184)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(184)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					if ((tmp12)){
						HX_STACK_LINE(184)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(184)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(184)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(184)
							_this->length = tmp15;
							HX_STACK_LINE(184)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							_this->byteLength = tmp16;
							HX_STACK_LINE(184)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(184)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								this2 = tmp19;
								HX_STACK_LINE(184)
								tmp17 = this2;
							}
							HX_STACK_LINE(184)
							_this->buffer = tmp17;
							HX_STACK_LINE(184)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(184)
							tmp13 = _this;
						}
						HX_STACK_LINE(184)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(184)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						if ((tmp13)){
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(184)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(184)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(184)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(184)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(184)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(184)
								if ((tmp22)){
									HX_STACK_LINE(184)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(184)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(184)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(184)
									{
										HX_STACK_LINE(184)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(184)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(184)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(184)
										this2 = tmp26;
										HX_STACK_LINE(184)
										tmp24 = this2;
									}
									HX_STACK_LINE(184)
									_this->buffer = tmp24;
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(184)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(184)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(184)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(184)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(184)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(184)
								_this->byteLength = tmp23;
								HX_STACK_LINE(184)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(184)
								_this->length = srcLength;
								HX_STACK_LINE(184)
								tmp14 = _this;
							}
							HX_STACK_LINE(184)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(184)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							if ((tmp14)){
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								{
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(184)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(184)
									if ((tmp17)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(184)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(184)
									if ((tmp19)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(184)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(184)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(184)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(184)
									if ((tmp20)){
										HX_STACK_LINE(184)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(184)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(184)
										if ((tmp24)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(184)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(184)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(184)
									_this->buffer = buffer;
									HX_STACK_LINE(184)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(184)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(184)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(184)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(184)
									_this->length = tmp22;
									HX_STACK_LINE(184)
									tmp15 = _this;
								}
								HX_STACK_LINE(184)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(184)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(184)
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(187)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(187)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				if ((tmp11)){
					HX_STACK_LINE(187)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(187)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					if ((tmp12)){
						HX_STACK_LINE(187)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(187)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(187)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							_this->length = tmp15;
							HX_STACK_LINE(187)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(187)
							_this->byteLength = tmp16;
							HX_STACK_LINE(187)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(187)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								this2 = tmp19;
								HX_STACK_LINE(187)
								tmp17 = this2;
							}
							HX_STACK_LINE(187)
							_this->buffer = tmp17;
							HX_STACK_LINE(187)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(187)
							tmp13 = _this;
						}
						HX_STACK_LINE(187)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(187)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						if ((tmp13)){
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(187)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(187)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(187)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(187)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(187)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(187)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(187)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(187)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(187)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(187)
								if ((tmp22)){
									HX_STACK_LINE(187)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(187)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(187)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(187)
									{
										HX_STACK_LINE(187)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(187)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(187)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(187)
										this2 = tmp26;
										HX_STACK_LINE(187)
										tmp24 = this2;
									}
									HX_STACK_LINE(187)
									_this->buffer = tmp24;
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(187)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(187)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(187)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(187)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(187)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(187)
								_this->byteLength = tmp23;
								HX_STACK_LINE(187)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(187)
								_this->length = srcLength;
								HX_STACK_LINE(187)
								tmp14 = _this;
							}
							HX_STACK_LINE(187)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(187)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								{
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(187)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(187)
									if ((tmp17)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(187)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(187)
									if ((tmp19)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(187)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(187)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(187)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(187)
									if ((tmp20)){
										HX_STACK_LINE(187)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(187)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(187)
										if ((tmp24)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(187)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(187)
									_this->buffer = buffer;
									HX_STACK_LINE(187)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(187)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(187)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(187)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(187)
									_this->length = tmp22;
									HX_STACK_LINE(187)
									tmp15 = _this;
								}
								HX_STACK_LINE(187)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(187)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(187)
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(190)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(190)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(190)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							_this->length = tmp15;
							HX_STACK_LINE(190)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(190)
							_this->byteLength = tmp16;
							HX_STACK_LINE(190)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(190)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								this2 = tmp19;
								HX_STACK_LINE(190)
								tmp17 = this2;
							}
							HX_STACK_LINE(190)
							_this->buffer = tmp17;
							HX_STACK_LINE(190)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(190)
							tmp13 = _this;
						}
						HX_STACK_LINE(190)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(190)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						if ((tmp13)){
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(190)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(190)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(190)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(190)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(190)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(190)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(190)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(190)
								if ((tmp22)){
									HX_STACK_LINE(190)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(190)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(190)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(190)
									{
										HX_STACK_LINE(190)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(190)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(190)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(190)
										this2 = tmp26;
										HX_STACK_LINE(190)
										tmp24 = this2;
									}
									HX_STACK_LINE(190)
									_this->buffer = tmp24;
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(190)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(190)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(190)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(190)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(190)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(190)
								_this->byteLength = tmp23;
								HX_STACK_LINE(190)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(190)
								_this->length = srcLength;
								HX_STACK_LINE(190)
								tmp14 = _this;
							}
							HX_STACK_LINE(190)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(190)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							if ((tmp14)){
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								{
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(190)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(190)
									if ((tmp17)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(190)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(190)
									if ((tmp19)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(190)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(190)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(190)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(190)
									if ((tmp20)){
										HX_STACK_LINE(190)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(190)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(190)
										if ((tmp24)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(190)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(190)
									_this->buffer = buffer;
									HX_STACK_LINE(190)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(190)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(190)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(190)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(190)
									_this->length = tmp22;
									HX_STACK_LINE(190)
									tmp15 = _this;
								}
								HX_STACK_LINE(190)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(190)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(190)
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(193)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(193)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(193)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				if ((tmp11)){
					HX_STACK_LINE(193)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					if ((tmp12)){
						HX_STACK_LINE(193)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(193)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(193)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							_this->length = tmp15;
							HX_STACK_LINE(193)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							_this->byteLength = tmp16;
							HX_STACK_LINE(193)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(193)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								this2 = tmp19;
								HX_STACK_LINE(193)
								tmp17 = this2;
							}
							HX_STACK_LINE(193)
							_this->buffer = tmp17;
							HX_STACK_LINE(193)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(193)
							tmp13 = _this;
						}
						HX_STACK_LINE(193)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(193)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(193)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(193)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(193)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(193)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(193)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								if ((tmp22)){
									HX_STACK_LINE(193)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(193)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(193)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(193)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(193)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(193)
										this2 = tmp26;
										HX_STACK_LINE(193)
										tmp24 = this2;
									}
									HX_STACK_LINE(193)
									_this->buffer = tmp24;
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(193)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(193)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(193)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(193)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(193)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								_this->byteLength = tmp23;
								HX_STACK_LINE(193)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(193)
								_this->length = srcLength;
								HX_STACK_LINE(193)
								tmp14 = _this;
							}
							HX_STACK_LINE(193)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							if ((tmp14)){
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(193)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									if ((tmp19)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(193)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(193)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(193)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									if ((tmp20)){
										HX_STACK_LINE(193)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(193)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(193)
										if ((tmp24)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(193)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(193)
									_this->buffer = buffer;
									HX_STACK_LINE(193)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(193)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(193)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(193)
									_this->length = tmp22;
									HX_STACK_LINE(193)
									tmp15 = _this;
								}
								HX_STACK_LINE(193)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(193)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(196)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(196)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				if ((tmp11)){
					HX_STACK_LINE(196)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					if ((tmp12)){
						HX_STACK_LINE(196)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(196)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(196)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							_this->length = tmp15;
							HX_STACK_LINE(196)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							_this->byteLength = tmp16;
							HX_STACK_LINE(196)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(196)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								this2 = tmp19;
								HX_STACK_LINE(196)
								tmp17 = this2;
							}
							HX_STACK_LINE(196)
							_this->buffer = tmp17;
							HX_STACK_LINE(196)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(196)
							tmp13 = _this;
						}
						HX_STACK_LINE(196)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(196)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						if ((tmp13)){
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(196)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(196)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(196)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(196)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(196)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(196)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								if ((tmp22)){
									HX_STACK_LINE(196)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(196)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(196)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(196)
									{
										HX_STACK_LINE(196)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(196)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(196)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(196)
										this2 = tmp26;
										HX_STACK_LINE(196)
										tmp24 = this2;
									}
									HX_STACK_LINE(196)
									_this->buffer = tmp24;
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(196)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(196)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(196)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(196)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(196)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								_this->byteLength = tmp23;
								HX_STACK_LINE(196)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(196)
								_this->length = srcLength;
								HX_STACK_LINE(196)
								tmp14 = _this;
							}
							HX_STACK_LINE(196)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(196)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							if ((tmp14)){
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(196)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(196)
									if ((tmp17)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(196)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(196)
									if ((tmp19)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(196)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(196)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(196)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(196)
									if ((tmp20)){
										HX_STACK_LINE(196)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(196)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(196)
										if ((tmp24)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(196)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(196)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(196)
									_this->buffer = buffer;
									HX_STACK_LINE(196)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(196)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(196)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(196)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(196)
									_this->length = tmp22;
									HX_STACK_LINE(196)
									tmp15 = _this;
								}
								HX_STACK_LINE(196)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(196)
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(199)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(202)
	::snow::api::buffers::ArrayBufferView tmp8 = view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Uint8ClampedArray,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Int16Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Int16Array",0x168a3676,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Int16Array","snow/api/buffers/ArrayBufferView.hx",162,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(164)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(165)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(166)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = this->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		switch( (int)(tmp9)){
			case (int)1: {
				HX_STACK_LINE(172)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(172)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					if ((tmp12)){
						HX_STACK_LINE(172)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(172)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							_this->length = tmp15;
							HX_STACK_LINE(172)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							_this->byteLength = tmp16;
							HX_STACK_LINE(172)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(172)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								this2 = tmp19;
								HX_STACK_LINE(172)
								tmp17 = this2;
							}
							HX_STACK_LINE(172)
							_this->buffer = tmp17;
							HX_STACK_LINE(172)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(172)
							tmp13 = _this;
						}
						HX_STACK_LINE(172)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(172)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						if ((tmp13)){
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(172)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(172)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(172)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(172)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(172)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(172)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(172)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(172)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(172)
								if ((tmp22)){
									HX_STACK_LINE(172)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(172)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(172)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(172)
									{
										HX_STACK_LINE(172)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(172)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(172)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(172)
										this2 = tmp26;
										HX_STACK_LINE(172)
										tmp24 = this2;
									}
									HX_STACK_LINE(172)
									_this->buffer = tmp24;
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(172)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(172)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(172)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(172)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(172)
								_this->byteLength = tmp23;
								HX_STACK_LINE(172)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(172)
								_this->length = srcLength;
								HX_STACK_LINE(172)
								tmp14 = _this;
							}
							HX_STACK_LINE(172)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							if ((tmp14)){
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								{
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(172)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(172)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(172)
									if ((tmp19)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(172)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(172)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(172)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(172)
									if ((tmp20)){
										HX_STACK_LINE(172)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(172)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(172)
										if ((tmp24)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(172)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(172)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(172)
									_this->buffer = buffer;
									HX_STACK_LINE(172)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(172)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(172)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(172)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(172)
									_this->length = tmp22;
									HX_STACK_LINE(172)
									tmp15 = _this;
								}
								HX_STACK_LINE(172)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(172)
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(175)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(175)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(175)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(175)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							_this->length = tmp15;
							HX_STACK_LINE(175)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(175)
							_this->byteLength = tmp16;
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(175)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								this2 = tmp19;
								HX_STACK_LINE(175)
								tmp17 = this2;
							}
							HX_STACK_LINE(175)
							_this->buffer = tmp17;
							HX_STACK_LINE(175)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(175)
							tmp13 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						if ((tmp13)){
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(175)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(175)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(175)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(175)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(175)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(175)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(175)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(175)
								if ((tmp22)){
									HX_STACK_LINE(175)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(175)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(175)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(175)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(175)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(175)
										this2 = tmp26;
										HX_STACK_LINE(175)
										tmp24 = this2;
									}
									HX_STACK_LINE(175)
									_this->buffer = tmp24;
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(175)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(175)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(175)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(175)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(175)
								_this->byteLength = tmp23;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->length = srcLength;
								HX_STACK_LINE(175)
								tmp14 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(175)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							if ((tmp14)){
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(175)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(175)
									if ((tmp17)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(175)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(175)
									if ((tmp19)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(175)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(175)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(175)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(175)
									if ((tmp20)){
										HX_STACK_LINE(175)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(175)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(175)
										if ((tmp24)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(175)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(175)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(175)
									_this->buffer = buffer;
									HX_STACK_LINE(175)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(175)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(175)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(175)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(175)
									_this->length = tmp22;
									HX_STACK_LINE(175)
									tmp15 = _this;
								}
								HX_STACK_LINE(175)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(175)
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(178)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(178)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(178)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(178)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(178)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(178)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(178)
							_this->length = tmp15;
							HX_STACK_LINE(178)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(178)
							_this->byteLength = tmp16;
							HX_STACK_LINE(178)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(178)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								this2 = tmp19;
								HX_STACK_LINE(178)
								tmp17 = this2;
							}
							HX_STACK_LINE(178)
							_this->buffer = tmp17;
							HX_STACK_LINE(178)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(178)
							tmp13 = _this;
						}
						HX_STACK_LINE(178)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(178)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						if ((tmp13)){
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(178)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(178)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(178)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(178)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(178)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								if ((tmp22)){
									HX_STACK_LINE(178)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(178)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(178)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(178)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(178)
										this2 = tmp26;
										HX_STACK_LINE(178)
										tmp24 = this2;
									}
									HX_STACK_LINE(178)
									_this->buffer = tmp24;
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(178)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(178)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(178)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(178)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								_this->byteLength = tmp23;
								HX_STACK_LINE(178)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(178)
								_this->length = srcLength;
								HX_STACK_LINE(178)
								tmp14 = _this;
							}
							HX_STACK_LINE(178)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(178)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							if ((tmp14)){
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(178)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(178)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(178)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(178)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(178)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(178)
										if ((tmp24)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(178)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(178)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(178)
									_this->buffer = buffer;
									HX_STACK_LINE(178)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(178)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(178)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(178)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(178)
									_this->length = tmp22;
									HX_STACK_LINE(178)
									tmp15 = _this;
								}
								HX_STACK_LINE(178)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(178)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(178)
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(181)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(181)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				if ((tmp11)){
					HX_STACK_LINE(181)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(181)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(181)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(181)
							_this->length = tmp15;
							HX_STACK_LINE(181)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(181)
							_this->byteLength = tmp16;
							HX_STACK_LINE(181)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(181)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								this2 = tmp19;
								HX_STACK_LINE(181)
								tmp17 = this2;
							}
							HX_STACK_LINE(181)
							_this->buffer = tmp17;
							HX_STACK_LINE(181)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(181)
							tmp13 = _this;
						}
						HX_STACK_LINE(181)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(181)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						if ((tmp13)){
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(181)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(181)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(181)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(181)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(181)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(181)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(181)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(181)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(181)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(181)
								if ((tmp22)){
									HX_STACK_LINE(181)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(181)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(181)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(181)
									{
										HX_STACK_LINE(181)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(181)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(181)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(181)
										this2 = tmp26;
										HX_STACK_LINE(181)
										tmp24 = this2;
									}
									HX_STACK_LINE(181)
									_this->buffer = tmp24;
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(181)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(181)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(181)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(181)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(181)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(181)
								_this->byteLength = tmp23;
								HX_STACK_LINE(181)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(181)
								_this->length = srcLength;
								HX_STACK_LINE(181)
								tmp14 = _this;
							}
							HX_STACK_LINE(181)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(181)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							if ((tmp14)){
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								{
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(181)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(181)
									if ((tmp17)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(181)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(181)
									if ((tmp19)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(181)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(181)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(181)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(181)
									if ((tmp20)){
										HX_STACK_LINE(181)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(181)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(181)
										if ((tmp24)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(181)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(181)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(181)
									_this->buffer = buffer;
									HX_STACK_LINE(181)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(181)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(181)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(181)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(181)
									_this->length = tmp22;
									HX_STACK_LINE(181)
									tmp15 = _this;
								}
								HX_STACK_LINE(181)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(181)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(181)
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(184)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(184)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					if ((tmp12)){
						HX_STACK_LINE(184)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(184)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(184)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(184)
							_this->length = tmp15;
							HX_STACK_LINE(184)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							_this->byteLength = tmp16;
							HX_STACK_LINE(184)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(184)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								this2 = tmp19;
								HX_STACK_LINE(184)
								tmp17 = this2;
							}
							HX_STACK_LINE(184)
							_this->buffer = tmp17;
							HX_STACK_LINE(184)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(184)
							tmp13 = _this;
						}
						HX_STACK_LINE(184)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(184)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						if ((tmp13)){
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(184)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(184)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(184)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(184)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(184)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(184)
								if ((tmp22)){
									HX_STACK_LINE(184)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(184)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(184)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(184)
									{
										HX_STACK_LINE(184)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(184)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(184)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(184)
										this2 = tmp26;
										HX_STACK_LINE(184)
										tmp24 = this2;
									}
									HX_STACK_LINE(184)
									_this->buffer = tmp24;
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(184)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(184)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(184)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(184)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(184)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(184)
								_this->byteLength = tmp23;
								HX_STACK_LINE(184)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(184)
								_this->length = srcLength;
								HX_STACK_LINE(184)
								tmp14 = _this;
							}
							HX_STACK_LINE(184)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(184)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							if ((tmp14)){
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								{
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(184)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(184)
									if ((tmp17)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(184)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(184)
									if ((tmp19)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(184)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(184)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(184)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(184)
									if ((tmp20)){
										HX_STACK_LINE(184)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(184)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(184)
										if ((tmp24)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(184)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(184)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(184)
									_this->buffer = buffer;
									HX_STACK_LINE(184)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(184)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(184)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(184)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(184)
									_this->length = tmp22;
									HX_STACK_LINE(184)
									tmp15 = _this;
								}
								HX_STACK_LINE(184)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(184)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(184)
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(187)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(187)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				if ((tmp11)){
					HX_STACK_LINE(187)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(187)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					if ((tmp12)){
						HX_STACK_LINE(187)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(187)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(187)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							_this->length = tmp15;
							HX_STACK_LINE(187)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(187)
							_this->byteLength = tmp16;
							HX_STACK_LINE(187)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(187)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								this2 = tmp19;
								HX_STACK_LINE(187)
								tmp17 = this2;
							}
							HX_STACK_LINE(187)
							_this->buffer = tmp17;
							HX_STACK_LINE(187)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(187)
							tmp13 = _this;
						}
						HX_STACK_LINE(187)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(187)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						if ((tmp13)){
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(187)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(187)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(187)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(187)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(187)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(187)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(187)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(187)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(187)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(187)
								if ((tmp22)){
									HX_STACK_LINE(187)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(187)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(187)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(187)
									{
										HX_STACK_LINE(187)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(187)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(187)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(187)
										this2 = tmp26;
										HX_STACK_LINE(187)
										tmp24 = this2;
									}
									HX_STACK_LINE(187)
									_this->buffer = tmp24;
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(187)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(187)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(187)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(187)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(187)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(187)
								_this->byteLength = tmp23;
								HX_STACK_LINE(187)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(187)
								_this->length = srcLength;
								HX_STACK_LINE(187)
								tmp14 = _this;
							}
							HX_STACK_LINE(187)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(187)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								{
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(187)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(187)
									if ((tmp17)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(187)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(187)
									if ((tmp19)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(187)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(187)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(187)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(187)
									if ((tmp20)){
										HX_STACK_LINE(187)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(187)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(187)
										if ((tmp24)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(187)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(187)
									_this->buffer = buffer;
									HX_STACK_LINE(187)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(187)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(187)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(187)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(187)
									_this->length = tmp22;
									HX_STACK_LINE(187)
									tmp15 = _this;
								}
								HX_STACK_LINE(187)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(187)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(187)
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(190)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(190)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(190)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							_this->length = tmp15;
							HX_STACK_LINE(190)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(190)
							_this->byteLength = tmp16;
							HX_STACK_LINE(190)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(190)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								this2 = tmp19;
								HX_STACK_LINE(190)
								tmp17 = this2;
							}
							HX_STACK_LINE(190)
							_this->buffer = tmp17;
							HX_STACK_LINE(190)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(190)
							tmp13 = _this;
						}
						HX_STACK_LINE(190)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(190)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						if ((tmp13)){
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(190)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(190)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(190)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(190)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(190)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(190)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(190)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(190)
								if ((tmp22)){
									HX_STACK_LINE(190)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(190)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(190)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(190)
									{
										HX_STACK_LINE(190)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(190)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(190)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(190)
										this2 = tmp26;
										HX_STACK_LINE(190)
										tmp24 = this2;
									}
									HX_STACK_LINE(190)
									_this->buffer = tmp24;
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(190)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(190)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(190)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(190)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(190)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(190)
								_this->byteLength = tmp23;
								HX_STACK_LINE(190)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(190)
								_this->length = srcLength;
								HX_STACK_LINE(190)
								tmp14 = _this;
							}
							HX_STACK_LINE(190)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(190)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							if ((tmp14)){
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								{
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(190)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(190)
									if ((tmp17)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(190)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(190)
									if ((tmp19)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(190)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(190)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(190)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(190)
									if ((tmp20)){
										HX_STACK_LINE(190)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(190)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(190)
										if ((tmp24)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(190)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(190)
									_this->buffer = buffer;
									HX_STACK_LINE(190)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(190)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(190)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(190)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(190)
									_this->length = tmp22;
									HX_STACK_LINE(190)
									tmp15 = _this;
								}
								HX_STACK_LINE(190)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(190)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(190)
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(193)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(193)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(193)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				if ((tmp11)){
					HX_STACK_LINE(193)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					if ((tmp12)){
						HX_STACK_LINE(193)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(193)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(193)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							_this->length = tmp15;
							HX_STACK_LINE(193)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							_this->byteLength = tmp16;
							HX_STACK_LINE(193)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(193)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								this2 = tmp19;
								HX_STACK_LINE(193)
								tmp17 = this2;
							}
							HX_STACK_LINE(193)
							_this->buffer = tmp17;
							HX_STACK_LINE(193)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(193)
							tmp13 = _this;
						}
						HX_STACK_LINE(193)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(193)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(193)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(193)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(193)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(193)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(193)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								if ((tmp22)){
									HX_STACK_LINE(193)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(193)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(193)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(193)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(193)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(193)
										this2 = tmp26;
										HX_STACK_LINE(193)
										tmp24 = this2;
									}
									HX_STACK_LINE(193)
									_this->buffer = tmp24;
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(193)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(193)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(193)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(193)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(193)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								_this->byteLength = tmp23;
								HX_STACK_LINE(193)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(193)
								_this->length = srcLength;
								HX_STACK_LINE(193)
								tmp14 = _this;
							}
							HX_STACK_LINE(193)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							if ((tmp14)){
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(193)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									if ((tmp19)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(193)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(193)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(193)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									if ((tmp20)){
										HX_STACK_LINE(193)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(193)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(193)
										if ((tmp24)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(193)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(193)
									_this->buffer = buffer;
									HX_STACK_LINE(193)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(193)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(193)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(193)
									_this->length = tmp22;
									HX_STACK_LINE(193)
									tmp15 = _this;
								}
								HX_STACK_LINE(193)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(193)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(196)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(196)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				if ((tmp11)){
					HX_STACK_LINE(196)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					if ((tmp12)){
						HX_STACK_LINE(196)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(196)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(196)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							_this->length = tmp15;
							HX_STACK_LINE(196)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							_this->byteLength = tmp16;
							HX_STACK_LINE(196)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(196)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								this2 = tmp19;
								HX_STACK_LINE(196)
								tmp17 = this2;
							}
							HX_STACK_LINE(196)
							_this->buffer = tmp17;
							HX_STACK_LINE(196)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(196)
							tmp13 = _this;
						}
						HX_STACK_LINE(196)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(196)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						if ((tmp13)){
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(196)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(196)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(196)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(196)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(196)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(196)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								if ((tmp22)){
									HX_STACK_LINE(196)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(196)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(196)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(196)
									{
										HX_STACK_LINE(196)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(196)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(196)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(196)
										this2 = tmp26;
										HX_STACK_LINE(196)
										tmp24 = this2;
									}
									HX_STACK_LINE(196)
									_this->buffer = tmp24;
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(196)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(196)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(196)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(196)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(196)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								_this->byteLength = tmp23;
								HX_STACK_LINE(196)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(196)
								_this->length = srcLength;
								HX_STACK_LINE(196)
								tmp14 = _this;
							}
							HX_STACK_LINE(196)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(196)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							if ((tmp14)){
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(196)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(196)
									if ((tmp17)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(196)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(196)
									if ((tmp19)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(196)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(196)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(196)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(196)
									if ((tmp20)){
										HX_STACK_LINE(196)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(196)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(196)
										if ((tmp24)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(196)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(196)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(196)
									_this->buffer = buffer;
									HX_STACK_LINE(196)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(196)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(196)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(196)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(196)
									_this->length = tmp22;
									HX_STACK_LINE(196)
									tmp15 = _this;
								}
								HX_STACK_LINE(196)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(196)
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(199)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(202)
	::snow::api::buffers::ArrayBufferView tmp8 = view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Int16Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Uint16Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Uint16Array",0x857ba3e9,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Uint16Array","snow/api/buffers/ArrayBufferView.hx",162,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(164)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(165)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(166)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = this->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		switch( (int)(tmp9)){
			case (int)1: {
				HX_STACK_LINE(172)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(172)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					if ((tmp12)){
						HX_STACK_LINE(172)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(172)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							_this->length = tmp15;
							HX_STACK_LINE(172)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							_this->byteLength = tmp16;
							HX_STACK_LINE(172)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(172)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								this2 = tmp19;
								HX_STACK_LINE(172)
								tmp17 = this2;
							}
							HX_STACK_LINE(172)
							_this->buffer = tmp17;
							HX_STACK_LINE(172)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(172)
							tmp13 = _this;
						}
						HX_STACK_LINE(172)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(172)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						if ((tmp13)){
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(172)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(172)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(172)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(172)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(172)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(172)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(172)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(172)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(172)
								if ((tmp22)){
									HX_STACK_LINE(172)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(172)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(172)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(172)
									{
										HX_STACK_LINE(172)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(172)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(172)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(172)
										this2 = tmp26;
										HX_STACK_LINE(172)
										tmp24 = this2;
									}
									HX_STACK_LINE(172)
									_this->buffer = tmp24;
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(172)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(172)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(172)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(172)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(172)
								_this->byteLength = tmp23;
								HX_STACK_LINE(172)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(172)
								_this->length = srcLength;
								HX_STACK_LINE(172)
								tmp14 = _this;
							}
							HX_STACK_LINE(172)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							if ((tmp14)){
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								{
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(172)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(172)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(172)
									if ((tmp19)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(172)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(172)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(172)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(172)
									if ((tmp20)){
										HX_STACK_LINE(172)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(172)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(172)
										if ((tmp24)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(172)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(172)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(172)
									_this->buffer = buffer;
									HX_STACK_LINE(172)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(172)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(172)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(172)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(172)
									_this->length = tmp22;
									HX_STACK_LINE(172)
									tmp15 = _this;
								}
								HX_STACK_LINE(172)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(172)
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(175)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(175)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(175)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(175)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							_this->length = tmp15;
							HX_STACK_LINE(175)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(175)
							_this->byteLength = tmp16;
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(175)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								this2 = tmp19;
								HX_STACK_LINE(175)
								tmp17 = this2;
							}
							HX_STACK_LINE(175)
							_this->buffer = tmp17;
							HX_STACK_LINE(175)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(175)
							tmp13 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						if ((tmp13)){
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(175)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(175)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(175)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(175)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(175)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(175)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(175)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(175)
								if ((tmp22)){
									HX_STACK_LINE(175)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(175)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(175)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(175)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(175)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(175)
										this2 = tmp26;
										HX_STACK_LINE(175)
										tmp24 = this2;
									}
									HX_STACK_LINE(175)
									_this->buffer = tmp24;
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(175)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(175)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(175)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(175)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(175)
								_this->byteLength = tmp23;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->length = srcLength;
								HX_STACK_LINE(175)
								tmp14 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(175)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							if ((tmp14)){
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(175)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(175)
									if ((tmp17)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(175)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(175)
									if ((tmp19)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(175)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(175)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(175)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(175)
									if ((tmp20)){
										HX_STACK_LINE(175)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(175)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(175)
										if ((tmp24)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(175)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(175)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(175)
									_this->buffer = buffer;
									HX_STACK_LINE(175)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(175)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(175)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(175)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(175)
									_this->length = tmp22;
									HX_STACK_LINE(175)
									tmp15 = _this;
								}
								HX_STACK_LINE(175)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(175)
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(178)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(178)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(178)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(178)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(178)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(178)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(178)
							_this->length = tmp15;
							HX_STACK_LINE(178)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(178)
							_this->byteLength = tmp16;
							HX_STACK_LINE(178)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(178)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								this2 = tmp19;
								HX_STACK_LINE(178)
								tmp17 = this2;
							}
							HX_STACK_LINE(178)
							_this->buffer = tmp17;
							HX_STACK_LINE(178)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(178)
							tmp13 = _this;
						}
						HX_STACK_LINE(178)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(178)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						if ((tmp13)){
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(178)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(178)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(178)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(178)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(178)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								if ((tmp22)){
									HX_STACK_LINE(178)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(178)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(178)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(178)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(178)
										this2 = tmp26;
										HX_STACK_LINE(178)
										tmp24 = this2;
									}
									HX_STACK_LINE(178)
									_this->buffer = tmp24;
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(178)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(178)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(178)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(178)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								_this->byteLength = tmp23;
								HX_STACK_LINE(178)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(178)
								_this->length = srcLength;
								HX_STACK_LINE(178)
								tmp14 = _this;
							}
							HX_STACK_LINE(178)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(178)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							if ((tmp14)){
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(178)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(178)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(178)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(178)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(178)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(178)
										if ((tmp24)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(178)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(178)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(178)
									_this->buffer = buffer;
									HX_STACK_LINE(178)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(178)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(178)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(178)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(178)
									_this->length = tmp22;
									HX_STACK_LINE(178)
									tmp15 = _this;
								}
								HX_STACK_LINE(178)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(178)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(178)
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(181)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(181)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				if ((tmp11)){
					HX_STACK_LINE(181)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(181)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(181)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(181)
							_this->length = tmp15;
							HX_STACK_LINE(181)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(181)
							_this->byteLength = tmp16;
							HX_STACK_LINE(181)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(181)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								this2 = tmp19;
								HX_STACK_LINE(181)
								tmp17 = this2;
							}
							HX_STACK_LINE(181)
							_this->buffer = tmp17;
							HX_STACK_LINE(181)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(181)
							tmp13 = _this;
						}
						HX_STACK_LINE(181)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(181)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						if ((tmp13)){
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(181)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(181)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(181)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(181)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(181)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(181)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(181)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(181)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(181)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(181)
								if ((tmp22)){
									HX_STACK_LINE(181)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(181)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(181)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(181)
									{
										HX_STACK_LINE(181)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(181)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(181)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(181)
										this2 = tmp26;
										HX_STACK_LINE(181)
										tmp24 = this2;
									}
									HX_STACK_LINE(181)
									_this->buffer = tmp24;
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(181)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(181)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(181)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(181)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(181)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(181)
								_this->byteLength = tmp23;
								HX_STACK_LINE(181)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(181)
								_this->length = srcLength;
								HX_STACK_LINE(181)
								tmp14 = _this;
							}
							HX_STACK_LINE(181)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(181)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							if ((tmp14)){
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								{
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(181)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(181)
									if ((tmp17)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(181)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(181)
									if ((tmp19)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(181)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(181)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(181)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(181)
									if ((tmp20)){
										HX_STACK_LINE(181)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(181)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(181)
										if ((tmp24)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(181)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(181)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(181)
									_this->buffer = buffer;
									HX_STACK_LINE(181)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(181)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(181)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(181)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(181)
									_this->length = tmp22;
									HX_STACK_LINE(181)
									tmp15 = _this;
								}
								HX_STACK_LINE(181)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(181)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(181)
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(184)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(184)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					if ((tmp12)){
						HX_STACK_LINE(184)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(184)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(184)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(184)
							_this->length = tmp15;
							HX_STACK_LINE(184)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							_this->byteLength = tmp16;
							HX_STACK_LINE(184)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(184)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								this2 = tmp19;
								HX_STACK_LINE(184)
								tmp17 = this2;
							}
							HX_STACK_LINE(184)
							_this->buffer = tmp17;
							HX_STACK_LINE(184)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(184)
							tmp13 = _this;
						}
						HX_STACK_LINE(184)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(184)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						if ((tmp13)){
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(184)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(184)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(184)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(184)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(184)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(184)
								if ((tmp22)){
									HX_STACK_LINE(184)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(184)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(184)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(184)
									{
										HX_STACK_LINE(184)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(184)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(184)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(184)
										this2 = tmp26;
										HX_STACK_LINE(184)
										tmp24 = this2;
									}
									HX_STACK_LINE(184)
									_this->buffer = tmp24;
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(184)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(184)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(184)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(184)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(184)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(184)
								_this->byteLength = tmp23;
								HX_STACK_LINE(184)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(184)
								_this->length = srcLength;
								HX_STACK_LINE(184)
								tmp14 = _this;
							}
							HX_STACK_LINE(184)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(184)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							if ((tmp14)){
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								{
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(184)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(184)
									if ((tmp17)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(184)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(184)
									if ((tmp19)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(184)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(184)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(184)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(184)
									if ((tmp20)){
										HX_STACK_LINE(184)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(184)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(184)
										if ((tmp24)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(184)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(184)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(184)
									_this->buffer = buffer;
									HX_STACK_LINE(184)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(184)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(184)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(184)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(184)
									_this->length = tmp22;
									HX_STACK_LINE(184)
									tmp15 = _this;
								}
								HX_STACK_LINE(184)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(184)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(184)
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(187)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(187)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				if ((tmp11)){
					HX_STACK_LINE(187)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(187)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					if ((tmp12)){
						HX_STACK_LINE(187)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(187)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(187)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							_this->length = tmp15;
							HX_STACK_LINE(187)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(187)
							_this->byteLength = tmp16;
							HX_STACK_LINE(187)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(187)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								this2 = tmp19;
								HX_STACK_LINE(187)
								tmp17 = this2;
							}
							HX_STACK_LINE(187)
							_this->buffer = tmp17;
							HX_STACK_LINE(187)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(187)
							tmp13 = _this;
						}
						HX_STACK_LINE(187)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(187)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						if ((tmp13)){
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(187)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(187)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(187)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(187)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(187)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(187)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(187)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(187)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(187)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(187)
								if ((tmp22)){
									HX_STACK_LINE(187)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(187)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(187)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(187)
									{
										HX_STACK_LINE(187)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(187)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(187)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(187)
										this2 = tmp26;
										HX_STACK_LINE(187)
										tmp24 = this2;
									}
									HX_STACK_LINE(187)
									_this->buffer = tmp24;
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(187)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(187)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(187)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(187)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(187)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(187)
								_this->byteLength = tmp23;
								HX_STACK_LINE(187)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(187)
								_this->length = srcLength;
								HX_STACK_LINE(187)
								tmp14 = _this;
							}
							HX_STACK_LINE(187)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(187)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								{
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(187)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(187)
									if ((tmp17)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(187)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(187)
									if ((tmp19)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(187)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(187)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(187)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(187)
									if ((tmp20)){
										HX_STACK_LINE(187)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(187)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(187)
										if ((tmp24)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(187)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(187)
									_this->buffer = buffer;
									HX_STACK_LINE(187)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(187)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(187)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(187)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(187)
									_this->length = tmp22;
									HX_STACK_LINE(187)
									tmp15 = _this;
								}
								HX_STACK_LINE(187)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(187)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(187)
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(190)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(190)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(190)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							_this->length = tmp15;
							HX_STACK_LINE(190)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(190)
							_this->byteLength = tmp16;
							HX_STACK_LINE(190)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(190)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								this2 = tmp19;
								HX_STACK_LINE(190)
								tmp17 = this2;
							}
							HX_STACK_LINE(190)
							_this->buffer = tmp17;
							HX_STACK_LINE(190)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(190)
							tmp13 = _this;
						}
						HX_STACK_LINE(190)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(190)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						if ((tmp13)){
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(190)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(190)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(190)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(190)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(190)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(190)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(190)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(190)
								if ((tmp22)){
									HX_STACK_LINE(190)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(190)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(190)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(190)
									{
										HX_STACK_LINE(190)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(190)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(190)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(190)
										this2 = tmp26;
										HX_STACK_LINE(190)
										tmp24 = this2;
									}
									HX_STACK_LINE(190)
									_this->buffer = tmp24;
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(190)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(190)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(190)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(190)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(190)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(190)
								_this->byteLength = tmp23;
								HX_STACK_LINE(190)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(190)
								_this->length = srcLength;
								HX_STACK_LINE(190)
								tmp14 = _this;
							}
							HX_STACK_LINE(190)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(190)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							if ((tmp14)){
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								{
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(190)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(190)
									if ((tmp17)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(190)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(190)
									if ((tmp19)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(190)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(190)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(190)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(190)
									if ((tmp20)){
										HX_STACK_LINE(190)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(190)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(190)
										if ((tmp24)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(190)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(190)
									_this->buffer = buffer;
									HX_STACK_LINE(190)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(190)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(190)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(190)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(190)
									_this->length = tmp22;
									HX_STACK_LINE(190)
									tmp15 = _this;
								}
								HX_STACK_LINE(190)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(190)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(190)
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(193)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(193)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(193)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				if ((tmp11)){
					HX_STACK_LINE(193)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					if ((tmp12)){
						HX_STACK_LINE(193)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(193)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(193)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							_this->length = tmp15;
							HX_STACK_LINE(193)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							_this->byteLength = tmp16;
							HX_STACK_LINE(193)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(193)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								this2 = tmp19;
								HX_STACK_LINE(193)
								tmp17 = this2;
							}
							HX_STACK_LINE(193)
							_this->buffer = tmp17;
							HX_STACK_LINE(193)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(193)
							tmp13 = _this;
						}
						HX_STACK_LINE(193)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(193)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(193)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(193)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(193)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(193)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(193)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								if ((tmp22)){
									HX_STACK_LINE(193)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(193)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(193)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(193)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(193)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(193)
										this2 = tmp26;
										HX_STACK_LINE(193)
										tmp24 = this2;
									}
									HX_STACK_LINE(193)
									_this->buffer = tmp24;
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(193)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(193)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(193)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(193)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(193)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								_this->byteLength = tmp23;
								HX_STACK_LINE(193)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(193)
								_this->length = srcLength;
								HX_STACK_LINE(193)
								tmp14 = _this;
							}
							HX_STACK_LINE(193)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							if ((tmp14)){
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(193)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									if ((tmp19)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(193)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(193)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(193)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									if ((tmp20)){
										HX_STACK_LINE(193)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(193)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(193)
										if ((tmp24)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(193)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(193)
									_this->buffer = buffer;
									HX_STACK_LINE(193)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(193)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(193)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(193)
									_this->length = tmp22;
									HX_STACK_LINE(193)
									tmp15 = _this;
								}
								HX_STACK_LINE(193)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(193)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(196)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(196)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				if ((tmp11)){
					HX_STACK_LINE(196)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					if ((tmp12)){
						HX_STACK_LINE(196)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(196)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(196)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							_this->length = tmp15;
							HX_STACK_LINE(196)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							_this->byteLength = tmp16;
							HX_STACK_LINE(196)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(196)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								this2 = tmp19;
								HX_STACK_LINE(196)
								tmp17 = this2;
							}
							HX_STACK_LINE(196)
							_this->buffer = tmp17;
							HX_STACK_LINE(196)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(196)
							tmp13 = _this;
						}
						HX_STACK_LINE(196)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(196)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						if ((tmp13)){
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(196)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(196)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(196)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(196)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(196)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(196)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								if ((tmp22)){
									HX_STACK_LINE(196)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(196)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(196)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(196)
									{
										HX_STACK_LINE(196)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(196)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(196)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(196)
										this2 = tmp26;
										HX_STACK_LINE(196)
										tmp24 = this2;
									}
									HX_STACK_LINE(196)
									_this->buffer = tmp24;
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(196)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(196)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(196)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(196)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(196)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								_this->byteLength = tmp23;
								HX_STACK_LINE(196)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(196)
								_this->length = srcLength;
								HX_STACK_LINE(196)
								tmp14 = _this;
							}
							HX_STACK_LINE(196)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(196)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							if ((tmp14)){
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(196)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(196)
									if ((tmp17)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(196)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(196)
									if ((tmp19)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(196)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(196)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(196)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(196)
									if ((tmp20)){
										HX_STACK_LINE(196)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(196)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(196)
										if ((tmp24)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(196)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(196)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(196)
									_this->buffer = buffer;
									HX_STACK_LINE(196)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(196)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(196)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(196)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(196)
									_this->length = tmp22;
									HX_STACK_LINE(196)
									tmp15 = _this;
								}
								HX_STACK_LINE(196)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(196)
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(199)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(202)
	::snow::api::buffers::ArrayBufferView tmp8 = view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Uint16Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Uint32Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Uint32Array",0x3f391fef,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Uint32Array","snow/api/buffers/ArrayBufferView.hx",162,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(164)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(165)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(166)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = this->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		switch( (int)(tmp9)){
			case (int)1: {
				HX_STACK_LINE(172)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(172)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					if ((tmp12)){
						HX_STACK_LINE(172)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(172)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							_this->length = tmp15;
							HX_STACK_LINE(172)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							_this->byteLength = tmp16;
							HX_STACK_LINE(172)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(172)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								this2 = tmp19;
								HX_STACK_LINE(172)
								tmp17 = this2;
							}
							HX_STACK_LINE(172)
							_this->buffer = tmp17;
							HX_STACK_LINE(172)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(172)
							tmp13 = _this;
						}
						HX_STACK_LINE(172)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(172)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						if ((tmp13)){
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(172)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(172)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(172)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(172)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(172)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(172)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(172)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(172)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(172)
								if ((tmp22)){
									HX_STACK_LINE(172)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(172)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(172)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(172)
									{
										HX_STACK_LINE(172)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(172)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(172)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(172)
										this2 = tmp26;
										HX_STACK_LINE(172)
										tmp24 = this2;
									}
									HX_STACK_LINE(172)
									_this->buffer = tmp24;
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(172)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(172)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(172)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(172)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(172)
								_this->byteLength = tmp23;
								HX_STACK_LINE(172)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(172)
								_this->length = srcLength;
								HX_STACK_LINE(172)
								tmp14 = _this;
							}
							HX_STACK_LINE(172)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							if ((tmp14)){
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								{
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(172)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(172)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(172)
									if ((tmp19)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(172)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(172)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(172)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(172)
									if ((tmp20)){
										HX_STACK_LINE(172)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(172)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(172)
										if ((tmp24)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(172)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(172)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(172)
									_this->buffer = buffer;
									HX_STACK_LINE(172)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(172)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(172)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(172)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(172)
									_this->length = tmp22;
									HX_STACK_LINE(172)
									tmp15 = _this;
								}
								HX_STACK_LINE(172)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(172)
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(175)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(175)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(175)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(175)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							_this->length = tmp15;
							HX_STACK_LINE(175)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(175)
							_this->byteLength = tmp16;
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(175)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								this2 = tmp19;
								HX_STACK_LINE(175)
								tmp17 = this2;
							}
							HX_STACK_LINE(175)
							_this->buffer = tmp17;
							HX_STACK_LINE(175)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(175)
							tmp13 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						if ((tmp13)){
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(175)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(175)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(175)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(175)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(175)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(175)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(175)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(175)
								if ((tmp22)){
									HX_STACK_LINE(175)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(175)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(175)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(175)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(175)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(175)
										this2 = tmp26;
										HX_STACK_LINE(175)
										tmp24 = this2;
									}
									HX_STACK_LINE(175)
									_this->buffer = tmp24;
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(175)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(175)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(175)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(175)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(175)
								_this->byteLength = tmp23;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->length = srcLength;
								HX_STACK_LINE(175)
								tmp14 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(175)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							if ((tmp14)){
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(175)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(175)
									if ((tmp17)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(175)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(175)
									if ((tmp19)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(175)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(175)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(175)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(175)
									if ((tmp20)){
										HX_STACK_LINE(175)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(175)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(175)
										if ((tmp24)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(175)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(175)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(175)
									_this->buffer = buffer;
									HX_STACK_LINE(175)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(175)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(175)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(175)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(175)
									_this->length = tmp22;
									HX_STACK_LINE(175)
									tmp15 = _this;
								}
								HX_STACK_LINE(175)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(175)
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(178)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(178)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(178)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(178)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(178)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(178)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(178)
							_this->length = tmp15;
							HX_STACK_LINE(178)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(178)
							_this->byteLength = tmp16;
							HX_STACK_LINE(178)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(178)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								this2 = tmp19;
								HX_STACK_LINE(178)
								tmp17 = this2;
							}
							HX_STACK_LINE(178)
							_this->buffer = tmp17;
							HX_STACK_LINE(178)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(178)
							tmp13 = _this;
						}
						HX_STACK_LINE(178)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(178)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						if ((tmp13)){
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(178)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(178)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(178)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(178)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(178)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								if ((tmp22)){
									HX_STACK_LINE(178)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(178)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(178)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(178)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(178)
										this2 = tmp26;
										HX_STACK_LINE(178)
										tmp24 = this2;
									}
									HX_STACK_LINE(178)
									_this->buffer = tmp24;
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(178)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(178)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(178)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(178)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								_this->byteLength = tmp23;
								HX_STACK_LINE(178)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(178)
								_this->length = srcLength;
								HX_STACK_LINE(178)
								tmp14 = _this;
							}
							HX_STACK_LINE(178)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(178)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							if ((tmp14)){
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(178)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(178)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(178)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(178)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(178)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(178)
										if ((tmp24)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(178)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(178)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(178)
									_this->buffer = buffer;
									HX_STACK_LINE(178)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(178)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(178)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(178)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(178)
									_this->length = tmp22;
									HX_STACK_LINE(178)
									tmp15 = _this;
								}
								HX_STACK_LINE(178)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(178)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(178)
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(181)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(181)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				if ((tmp11)){
					HX_STACK_LINE(181)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(181)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(181)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(181)
							_this->length = tmp15;
							HX_STACK_LINE(181)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(181)
							_this->byteLength = tmp16;
							HX_STACK_LINE(181)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(181)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								this2 = tmp19;
								HX_STACK_LINE(181)
								tmp17 = this2;
							}
							HX_STACK_LINE(181)
							_this->buffer = tmp17;
							HX_STACK_LINE(181)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(181)
							tmp13 = _this;
						}
						HX_STACK_LINE(181)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(181)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						if ((tmp13)){
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(181)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(181)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(181)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(181)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(181)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(181)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(181)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(181)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(181)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(181)
								if ((tmp22)){
									HX_STACK_LINE(181)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(181)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(181)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(181)
									{
										HX_STACK_LINE(181)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(181)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(181)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(181)
										this2 = tmp26;
										HX_STACK_LINE(181)
										tmp24 = this2;
									}
									HX_STACK_LINE(181)
									_this->buffer = tmp24;
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(181)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(181)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(181)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(181)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(181)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(181)
								_this->byteLength = tmp23;
								HX_STACK_LINE(181)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(181)
								_this->length = srcLength;
								HX_STACK_LINE(181)
								tmp14 = _this;
							}
							HX_STACK_LINE(181)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(181)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							if ((tmp14)){
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								{
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(181)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(181)
									if ((tmp17)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(181)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(181)
									if ((tmp19)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(181)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(181)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(181)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(181)
									if ((tmp20)){
										HX_STACK_LINE(181)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(181)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(181)
										if ((tmp24)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(181)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(181)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(181)
									_this->buffer = buffer;
									HX_STACK_LINE(181)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(181)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(181)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(181)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(181)
									_this->length = tmp22;
									HX_STACK_LINE(181)
									tmp15 = _this;
								}
								HX_STACK_LINE(181)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(181)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(181)
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(184)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(184)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					if ((tmp12)){
						HX_STACK_LINE(184)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(184)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(184)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(184)
							_this->length = tmp15;
							HX_STACK_LINE(184)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							_this->byteLength = tmp16;
							HX_STACK_LINE(184)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(184)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								this2 = tmp19;
								HX_STACK_LINE(184)
								tmp17 = this2;
							}
							HX_STACK_LINE(184)
							_this->buffer = tmp17;
							HX_STACK_LINE(184)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(184)
							tmp13 = _this;
						}
						HX_STACK_LINE(184)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(184)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						if ((tmp13)){
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(184)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(184)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(184)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(184)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(184)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(184)
								if ((tmp22)){
									HX_STACK_LINE(184)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(184)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(184)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(184)
									{
										HX_STACK_LINE(184)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(184)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(184)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(184)
										this2 = tmp26;
										HX_STACK_LINE(184)
										tmp24 = this2;
									}
									HX_STACK_LINE(184)
									_this->buffer = tmp24;
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(184)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(184)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(184)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(184)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(184)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(184)
								_this->byteLength = tmp23;
								HX_STACK_LINE(184)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(184)
								_this->length = srcLength;
								HX_STACK_LINE(184)
								tmp14 = _this;
							}
							HX_STACK_LINE(184)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(184)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							if ((tmp14)){
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								{
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(184)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(184)
									if ((tmp17)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(184)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(184)
									if ((tmp19)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(184)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(184)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(184)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(184)
									if ((tmp20)){
										HX_STACK_LINE(184)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(184)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(184)
										if ((tmp24)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(184)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(184)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(184)
									_this->buffer = buffer;
									HX_STACK_LINE(184)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(184)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(184)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(184)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(184)
									_this->length = tmp22;
									HX_STACK_LINE(184)
									tmp15 = _this;
								}
								HX_STACK_LINE(184)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(184)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(184)
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(187)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(187)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				if ((tmp11)){
					HX_STACK_LINE(187)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(187)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					if ((tmp12)){
						HX_STACK_LINE(187)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(187)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(187)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							_this->length = tmp15;
							HX_STACK_LINE(187)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(187)
							_this->byteLength = tmp16;
							HX_STACK_LINE(187)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(187)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								this2 = tmp19;
								HX_STACK_LINE(187)
								tmp17 = this2;
							}
							HX_STACK_LINE(187)
							_this->buffer = tmp17;
							HX_STACK_LINE(187)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(187)
							tmp13 = _this;
						}
						HX_STACK_LINE(187)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(187)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						if ((tmp13)){
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(187)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(187)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(187)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(187)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(187)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(187)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(187)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(187)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(187)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(187)
								if ((tmp22)){
									HX_STACK_LINE(187)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(187)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(187)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(187)
									{
										HX_STACK_LINE(187)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(187)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(187)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(187)
										this2 = tmp26;
										HX_STACK_LINE(187)
										tmp24 = this2;
									}
									HX_STACK_LINE(187)
									_this->buffer = tmp24;
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(187)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(187)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(187)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(187)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(187)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(187)
								_this->byteLength = tmp23;
								HX_STACK_LINE(187)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(187)
								_this->length = srcLength;
								HX_STACK_LINE(187)
								tmp14 = _this;
							}
							HX_STACK_LINE(187)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(187)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								{
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(187)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(187)
									if ((tmp17)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(187)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(187)
									if ((tmp19)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(187)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(187)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(187)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(187)
									if ((tmp20)){
										HX_STACK_LINE(187)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(187)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(187)
										if ((tmp24)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(187)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(187)
									_this->buffer = buffer;
									HX_STACK_LINE(187)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(187)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(187)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(187)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(187)
									_this->length = tmp22;
									HX_STACK_LINE(187)
									tmp15 = _this;
								}
								HX_STACK_LINE(187)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(187)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(187)
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(190)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(190)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(190)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							_this->length = tmp15;
							HX_STACK_LINE(190)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(190)
							_this->byteLength = tmp16;
							HX_STACK_LINE(190)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(190)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								this2 = tmp19;
								HX_STACK_LINE(190)
								tmp17 = this2;
							}
							HX_STACK_LINE(190)
							_this->buffer = tmp17;
							HX_STACK_LINE(190)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(190)
							tmp13 = _this;
						}
						HX_STACK_LINE(190)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(190)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						if ((tmp13)){
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(190)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(190)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(190)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(190)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(190)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(190)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(190)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(190)
								if ((tmp22)){
									HX_STACK_LINE(190)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(190)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(190)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(190)
									{
										HX_STACK_LINE(190)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(190)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(190)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(190)
										this2 = tmp26;
										HX_STACK_LINE(190)
										tmp24 = this2;
									}
									HX_STACK_LINE(190)
									_this->buffer = tmp24;
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(190)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(190)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(190)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(190)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(190)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(190)
								_this->byteLength = tmp23;
								HX_STACK_LINE(190)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(190)
								_this->length = srcLength;
								HX_STACK_LINE(190)
								tmp14 = _this;
							}
							HX_STACK_LINE(190)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(190)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							if ((tmp14)){
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								{
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(190)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(190)
									if ((tmp17)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(190)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(190)
									if ((tmp19)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(190)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(190)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(190)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(190)
									if ((tmp20)){
										HX_STACK_LINE(190)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(190)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(190)
										if ((tmp24)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(190)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(190)
									_this->buffer = buffer;
									HX_STACK_LINE(190)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(190)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(190)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(190)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(190)
									_this->length = tmp22;
									HX_STACK_LINE(190)
									tmp15 = _this;
								}
								HX_STACK_LINE(190)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(190)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(190)
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(193)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(193)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(193)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				if ((tmp11)){
					HX_STACK_LINE(193)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					if ((tmp12)){
						HX_STACK_LINE(193)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(193)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(193)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							_this->length = tmp15;
							HX_STACK_LINE(193)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							_this->byteLength = tmp16;
							HX_STACK_LINE(193)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(193)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								this2 = tmp19;
								HX_STACK_LINE(193)
								tmp17 = this2;
							}
							HX_STACK_LINE(193)
							_this->buffer = tmp17;
							HX_STACK_LINE(193)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(193)
							tmp13 = _this;
						}
						HX_STACK_LINE(193)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(193)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(193)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(193)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(193)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(193)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(193)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								if ((tmp22)){
									HX_STACK_LINE(193)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(193)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(193)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(193)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(193)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(193)
										this2 = tmp26;
										HX_STACK_LINE(193)
										tmp24 = this2;
									}
									HX_STACK_LINE(193)
									_this->buffer = tmp24;
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(193)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(193)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(193)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(193)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(193)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								_this->byteLength = tmp23;
								HX_STACK_LINE(193)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(193)
								_this->length = srcLength;
								HX_STACK_LINE(193)
								tmp14 = _this;
							}
							HX_STACK_LINE(193)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							if ((tmp14)){
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(193)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									if ((tmp19)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(193)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(193)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(193)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									if ((tmp20)){
										HX_STACK_LINE(193)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(193)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(193)
										if ((tmp24)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(193)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(193)
									_this->buffer = buffer;
									HX_STACK_LINE(193)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(193)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(193)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(193)
									_this->length = tmp22;
									HX_STACK_LINE(193)
									tmp15 = _this;
								}
								HX_STACK_LINE(193)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(193)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(196)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(196)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				if ((tmp11)){
					HX_STACK_LINE(196)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					if ((tmp12)){
						HX_STACK_LINE(196)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(196)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(196)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							_this->length = tmp15;
							HX_STACK_LINE(196)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							_this->byteLength = tmp16;
							HX_STACK_LINE(196)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(196)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								this2 = tmp19;
								HX_STACK_LINE(196)
								tmp17 = this2;
							}
							HX_STACK_LINE(196)
							_this->buffer = tmp17;
							HX_STACK_LINE(196)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(196)
							tmp13 = _this;
						}
						HX_STACK_LINE(196)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(196)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						if ((tmp13)){
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(196)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(196)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(196)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(196)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(196)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(196)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								if ((tmp22)){
									HX_STACK_LINE(196)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(196)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(196)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(196)
									{
										HX_STACK_LINE(196)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(196)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(196)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(196)
										this2 = tmp26;
										HX_STACK_LINE(196)
										tmp24 = this2;
									}
									HX_STACK_LINE(196)
									_this->buffer = tmp24;
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(196)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(196)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(196)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(196)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(196)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								_this->byteLength = tmp23;
								HX_STACK_LINE(196)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(196)
								_this->length = srcLength;
								HX_STACK_LINE(196)
								tmp14 = _this;
							}
							HX_STACK_LINE(196)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(196)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							if ((tmp14)){
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(196)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(196)
									if ((tmp17)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(196)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(196)
									if ((tmp19)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(196)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(196)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(196)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(196)
									if ((tmp20)){
										HX_STACK_LINE(196)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(196)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(196)
										if ((tmp24)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(196)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(196)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(196)
									_this->buffer = buffer;
									HX_STACK_LINE(196)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(196)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(196)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(196)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(196)
									_this->length = tmp22;
									HX_STACK_LINE(196)
									tmp15 = _this;
								}
								HX_STACK_LINE(196)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(196)
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(199)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(202)
	::snow::api::buffers::ArrayBufferView tmp8 = view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Uint32Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::subarray_snow_api_buffers_Float64Array( int begin,Dynamic end){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","subarray_snow_api_buffers_Float64Array",0x9671dcb0,"snow.api.buffers.ArrayBufferView.subarray_snow_api_buffers_Float64Array","snow/api/buffers/ArrayBufferView.hx",162,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(164)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(165)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(166)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = this->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		switch( (int)(tmp9)){
			case (int)1: {
				HX_STACK_LINE(172)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(172)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(172)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(172)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					if ((tmp12)){
						HX_STACK_LINE(172)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(172)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(172)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							_this->length = tmp15;
							HX_STACK_LINE(172)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							_this->byteLength = tmp16;
							HX_STACK_LINE(172)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(172)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								this2 = tmp19;
								HX_STACK_LINE(172)
								tmp17 = this2;
							}
							HX_STACK_LINE(172)
							_this->buffer = tmp17;
							HX_STACK_LINE(172)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(172)
							tmp13 = _this;
						}
						HX_STACK_LINE(172)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(172)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						if ((tmp13)){
							HX_STACK_LINE(172)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(172)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(172)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(172)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(172)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(172)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(172)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(172)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(172)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(172)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(172)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(172)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(172)
								if ((tmp22)){
									HX_STACK_LINE(172)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(172)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(172)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(172)
									{
										HX_STACK_LINE(172)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(172)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(172)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(172)
										this2 = tmp26;
										HX_STACK_LINE(172)
										tmp24 = this2;
									}
									HX_STACK_LINE(172)
									_this->buffer = tmp24;
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(172)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(172)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(172)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(172)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(172)
								_this->byteLength = tmp23;
								HX_STACK_LINE(172)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(172)
								_this->length = srcLength;
								HX_STACK_LINE(172)
								tmp14 = _this;
							}
							HX_STACK_LINE(172)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(172)
							if ((tmp14)){
								HX_STACK_LINE(172)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(172)
								{
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(172)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(172)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(172)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(172)
									if ((tmp19)){
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(172)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(172)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(172)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(172)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(172)
									if ((tmp20)){
										HX_STACK_LINE(172)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(172)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(172)
										if ((tmp24)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(172)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(172)
										newByteLength = tmp21;
										HX_STACK_LINE(172)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(172)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(172)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(172)
										if ((tmp23)){
											HX_STACK_LINE(172)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(172)
									_this->buffer = buffer;
									HX_STACK_LINE(172)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(172)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(172)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(172)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(172)
									_this->length = tmp22;
									HX_STACK_LINE(172)
									tmp15 = _this;
								}
								HX_STACK_LINE(172)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(172)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(172)
				tmp7 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(175)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(175)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(175)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(175)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(175)
							_this->length = tmp15;
							HX_STACK_LINE(175)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(175)
							_this->byteLength = tmp16;
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(175)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								this2 = tmp19;
								HX_STACK_LINE(175)
								tmp17 = this2;
							}
							HX_STACK_LINE(175)
							_this->buffer = tmp17;
							HX_STACK_LINE(175)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(175)
							tmp13 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						if ((tmp13)){
							HX_STACK_LINE(175)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(175)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(175)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(175)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(175)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(175)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(175)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(175)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(175)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(175)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(175)
								if ((tmp22)){
									HX_STACK_LINE(175)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(175)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(175)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(175)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(175)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(175)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(175)
										this2 = tmp26;
										HX_STACK_LINE(175)
										tmp24 = this2;
									}
									HX_STACK_LINE(175)
									_this->buffer = tmp24;
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(175)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(175)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(175)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(175)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(175)
								_this->byteLength = tmp23;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->length = srcLength;
								HX_STACK_LINE(175)
								tmp14 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(175)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							if ((tmp14)){
								HX_STACK_LINE(175)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(175)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(175)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(175)
									if ((tmp17)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(175)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(175)
									if ((tmp19)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(175)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(175)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(175)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(175)
									if ((tmp20)){
										HX_STACK_LINE(175)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(175)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(175)
										if ((tmp24)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(175)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(175)
										newByteLength = tmp21;
										HX_STACK_LINE(175)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(175)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(175)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(175)
										if ((tmp23)){
											HX_STACK_LINE(175)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(175)
									_this->buffer = buffer;
									HX_STACK_LINE(175)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(175)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(175)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(175)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(175)
									_this->length = tmp22;
									HX_STACK_LINE(175)
									tmp15 = _this;
								}
								HX_STACK_LINE(175)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(175)
				tmp7 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(178)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(178)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(178)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(178)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(178)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					if ((tmp12)){
						HX_STACK_LINE(178)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(178)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(178)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(178)
							_this->length = tmp15;
							HX_STACK_LINE(178)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(178)
							_this->byteLength = tmp16;
							HX_STACK_LINE(178)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(178)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								this2 = tmp19;
								HX_STACK_LINE(178)
								tmp17 = this2;
							}
							HX_STACK_LINE(178)
							_this->buffer = tmp17;
							HX_STACK_LINE(178)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(178)
							tmp13 = _this;
						}
						HX_STACK_LINE(178)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(178)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						if ((tmp13)){
							HX_STACK_LINE(178)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(178)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(178)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(178)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(178)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(178)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								if ((tmp22)){
									HX_STACK_LINE(178)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(178)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(178)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(178)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(178)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(178)
										this2 = tmp26;
										HX_STACK_LINE(178)
										tmp24 = this2;
									}
									HX_STACK_LINE(178)
									_this->buffer = tmp24;
									HX_STACK_LINE(178)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(178)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(178)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(178)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(178)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								_this->byteLength = tmp23;
								HX_STACK_LINE(178)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(178)
								_this->length = srcLength;
								HX_STACK_LINE(178)
								tmp14 = _this;
							}
							HX_STACK_LINE(178)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(178)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(178)
							if ((tmp14)){
								HX_STACK_LINE(178)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(178)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(178)
									if ((tmp17)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(178)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(178)
									if ((tmp19)){
										HX_STACK_LINE(178)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(178)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(178)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(178)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(178)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(178)
									if ((tmp20)){
										HX_STACK_LINE(178)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(178)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(178)
										if ((tmp24)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(178)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(178)
										newByteLength = tmp21;
										HX_STACK_LINE(178)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(178)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(178)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(178)
										if ((tmp23)){
											HX_STACK_LINE(178)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(178)
									_this->buffer = buffer;
									HX_STACK_LINE(178)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(178)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(178)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(178)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(178)
									_this->length = tmp22;
									HX_STACK_LINE(178)
									tmp15 = _this;
								}
								HX_STACK_LINE(178)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(178)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(178)
				tmp7 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(181)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(181)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				if ((tmp11)){
					HX_STACK_LINE(181)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					if ((tmp12)){
						HX_STACK_LINE(181)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(181)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(181)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(181)
							_this->length = tmp15;
							HX_STACK_LINE(181)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(181)
							_this->byteLength = tmp16;
							HX_STACK_LINE(181)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(181)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								this2 = tmp19;
								HX_STACK_LINE(181)
								tmp17 = this2;
							}
							HX_STACK_LINE(181)
							_this->buffer = tmp17;
							HX_STACK_LINE(181)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(181)
							tmp13 = _this;
						}
						HX_STACK_LINE(181)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(181)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(181)
						if ((tmp13)){
							HX_STACK_LINE(181)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(181)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(181)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(181)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(181)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(181)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(181)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(181)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(181)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(181)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(181)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(181)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(181)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(181)
								if ((tmp22)){
									HX_STACK_LINE(181)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(181)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(181)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(181)
									{
										HX_STACK_LINE(181)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(181)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(181)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(181)
										this2 = tmp26;
										HX_STACK_LINE(181)
										tmp24 = this2;
									}
									HX_STACK_LINE(181)
									_this->buffer = tmp24;
									HX_STACK_LINE(181)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(181)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(181)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(181)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(181)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(181)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(181)
								_this->byteLength = tmp23;
								HX_STACK_LINE(181)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(181)
								_this->length = srcLength;
								HX_STACK_LINE(181)
								tmp14 = _this;
							}
							HX_STACK_LINE(181)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(181)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(181)
							if ((tmp14)){
								HX_STACK_LINE(181)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(181)
								{
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(181)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(181)
									if ((tmp17)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(181)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(181)
									if ((tmp19)){
										HX_STACK_LINE(181)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(181)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(181)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(181)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(181)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(181)
									if ((tmp20)){
										HX_STACK_LINE(181)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(181)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(181)
										if ((tmp24)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(181)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(181)
										newByteLength = tmp21;
										HX_STACK_LINE(181)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(181)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(181)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(181)
										if ((tmp23)){
											HX_STACK_LINE(181)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(181)
									_this->buffer = buffer;
									HX_STACK_LINE(181)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(181)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(181)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(181)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(181)
									_this->length = tmp22;
									HX_STACK_LINE(181)
									tmp15 = _this;
								}
								HX_STACK_LINE(181)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(181)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(181)
				tmp7 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(184)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(184)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(184)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(184)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					if ((tmp12)){
						HX_STACK_LINE(184)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(184)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(184)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(184)
							_this->length = tmp15;
							HX_STACK_LINE(184)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							_this->byteLength = tmp16;
							HX_STACK_LINE(184)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(184)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								this2 = tmp19;
								HX_STACK_LINE(184)
								tmp17 = this2;
							}
							HX_STACK_LINE(184)
							_this->buffer = tmp17;
							HX_STACK_LINE(184)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(184)
							tmp13 = _this;
						}
						HX_STACK_LINE(184)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(184)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						if ((tmp13)){
							HX_STACK_LINE(184)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(184)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(184)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(184)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(184)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(184)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(184)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(184)
								if ((tmp22)){
									HX_STACK_LINE(184)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(184)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(184)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(184)
									{
										HX_STACK_LINE(184)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(184)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(184)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(184)
										this2 = tmp26;
										HX_STACK_LINE(184)
										tmp24 = this2;
									}
									HX_STACK_LINE(184)
									_this->buffer = tmp24;
									HX_STACK_LINE(184)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(184)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(184)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(184)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(184)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(184)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(184)
								_this->byteLength = tmp23;
								HX_STACK_LINE(184)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(184)
								_this->length = srcLength;
								HX_STACK_LINE(184)
								tmp14 = _this;
							}
							HX_STACK_LINE(184)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(184)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(184)
							if ((tmp14)){
								HX_STACK_LINE(184)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								{
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(184)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(184)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(184)
									if ((tmp17)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(184)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(184)
									if ((tmp19)){
										HX_STACK_LINE(184)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(184)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(184)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(184)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(184)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(184)
									if ((tmp20)){
										HX_STACK_LINE(184)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(184)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(184)
										if ((tmp24)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(184)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(184)
										newByteLength = tmp21;
										HX_STACK_LINE(184)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(184)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(184)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(184)
										if ((tmp23)){
											HX_STACK_LINE(184)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(184)
									_this->buffer = buffer;
									HX_STACK_LINE(184)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(184)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(184)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(184)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(184)
									_this->length = tmp22;
									HX_STACK_LINE(184)
									tmp15 = _this;
								}
								HX_STACK_LINE(184)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(184)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(184)
				tmp7 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(187)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(187)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(187)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(187)
				if ((tmp11)){
					HX_STACK_LINE(187)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(187)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					if ((tmp12)){
						HX_STACK_LINE(187)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(187)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(187)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							_this->length = tmp15;
							HX_STACK_LINE(187)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(187)
							_this->byteLength = tmp16;
							HX_STACK_LINE(187)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(187)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								this2 = tmp19;
								HX_STACK_LINE(187)
								tmp17 = this2;
							}
							HX_STACK_LINE(187)
							_this->buffer = tmp17;
							HX_STACK_LINE(187)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(187)
							tmp13 = _this;
						}
						HX_STACK_LINE(187)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(187)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(187)
						if ((tmp13)){
							HX_STACK_LINE(187)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							{
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(187)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(187)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(187)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(187)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(187)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(187)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(187)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(187)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(187)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(187)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(187)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(187)
								if ((tmp22)){
									HX_STACK_LINE(187)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(187)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(187)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(187)
									{
										HX_STACK_LINE(187)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(187)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(187)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(187)
										this2 = tmp26;
										HX_STACK_LINE(187)
										tmp24 = this2;
									}
									HX_STACK_LINE(187)
									_this->buffer = tmp24;
									HX_STACK_LINE(187)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(187)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(187)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(187)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(187)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(187)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(187)
								_this->byteLength = tmp23;
								HX_STACK_LINE(187)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(187)
								_this->length = srcLength;
								HX_STACK_LINE(187)
								tmp14 = _this;
							}
							HX_STACK_LINE(187)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(187)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(187)
								{
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(187)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(187)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(187)
									if ((tmp17)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(187)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(187)
									if ((tmp19)){
										HX_STACK_LINE(187)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(187)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(187)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(187)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(187)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(187)
									if ((tmp20)){
										HX_STACK_LINE(187)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(187)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(187)
										if ((tmp24)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(187)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(187)
										newByteLength = tmp21;
										HX_STACK_LINE(187)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(187)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(187)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(187)
										if ((tmp23)){
											HX_STACK_LINE(187)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(187)
									_this->buffer = buffer;
									HX_STACK_LINE(187)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(187)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(187)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(187)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(187)
									_this->length = tmp22;
									HX_STACK_LINE(187)
									tmp15 = _this;
								}
								HX_STACK_LINE(187)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(187)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(187)
				tmp7 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(190)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(190)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(190)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				if ((tmp11)){
					HX_STACK_LINE(190)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(190)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							_this->length = tmp15;
							HX_STACK_LINE(190)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(190)
							_this->byteLength = tmp16;
							HX_STACK_LINE(190)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(190)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								this2 = tmp19;
								HX_STACK_LINE(190)
								tmp17 = this2;
							}
							HX_STACK_LINE(190)
							_this->buffer = tmp17;
							HX_STACK_LINE(190)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(190)
							tmp13 = _this;
						}
						HX_STACK_LINE(190)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(190)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						if ((tmp13)){
							HX_STACK_LINE(190)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(190)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(190)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(190)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(190)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(190)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(190)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(190)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(190)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(190)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(190)
								if ((tmp22)){
									HX_STACK_LINE(190)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(190)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(190)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(190)
									{
										HX_STACK_LINE(190)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(190)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(190)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(190)
										this2 = tmp26;
										HX_STACK_LINE(190)
										tmp24 = this2;
									}
									HX_STACK_LINE(190)
									_this->buffer = tmp24;
									HX_STACK_LINE(190)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(190)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(190)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(190)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(190)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(190)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(190)
								_this->byteLength = tmp23;
								HX_STACK_LINE(190)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(190)
								_this->length = srcLength;
								HX_STACK_LINE(190)
								tmp14 = _this;
							}
							HX_STACK_LINE(190)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(190)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							if ((tmp14)){
								HX_STACK_LINE(190)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								{
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(190)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(190)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(190)
									if ((tmp17)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(190)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(190)
									if ((tmp19)){
										HX_STACK_LINE(190)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(190)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(190)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(190)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(190)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(190)
									if ((tmp20)){
										HX_STACK_LINE(190)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(190)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(190)
										if ((tmp24)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(190)
										newByteLength = tmp21;
										HX_STACK_LINE(190)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(190)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(190)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(190)
										if ((tmp23)){
											HX_STACK_LINE(190)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(190)
									_this->buffer = buffer;
									HX_STACK_LINE(190)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(190)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(190)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(190)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(190)
									_this->length = tmp22;
									HX_STACK_LINE(190)
									tmp15 = _this;
								}
								HX_STACK_LINE(190)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(190)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(190)
				tmp7 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(193)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(193)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(193)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				if ((tmp11)){
					HX_STACK_LINE(193)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(193)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(193)
					if ((tmp12)){
						HX_STACK_LINE(193)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						{
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(193)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(193)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							_this->length = tmp15;
							HX_STACK_LINE(193)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							_this->byteLength = tmp16;
							HX_STACK_LINE(193)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(193)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								this2 = tmp19;
								HX_STACK_LINE(193)
								tmp17 = this2;
							}
							HX_STACK_LINE(193)
							_this->buffer = tmp17;
							HX_STACK_LINE(193)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(193)
							tmp13 = _this;
						}
						HX_STACK_LINE(193)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(193)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						if ((tmp13)){
							HX_STACK_LINE(193)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(193)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(193)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(193)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(193)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(193)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(193)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(193)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(193)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(193)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(193)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(193)
								if ((tmp22)){
									HX_STACK_LINE(193)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(193)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(193)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(193)
									{
										HX_STACK_LINE(193)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(193)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(193)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(193)
										this2 = tmp26;
										HX_STACK_LINE(193)
										tmp24 = this2;
									}
									HX_STACK_LINE(193)
									_this->buffer = tmp24;
									HX_STACK_LINE(193)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(193)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(193)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(193)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(193)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(193)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(193)
								_this->byteLength = tmp23;
								HX_STACK_LINE(193)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(193)
								_this->length = srcLength;
								HX_STACK_LINE(193)
								tmp14 = _this;
							}
							HX_STACK_LINE(193)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(193)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							if ((tmp14)){
								HX_STACK_LINE(193)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								{
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(193)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(193)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(193)
									if ((tmp17)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(193)
									if ((tmp19)){
										HX_STACK_LINE(193)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(193)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(193)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(193)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(193)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(193)
									if ((tmp20)){
										HX_STACK_LINE(193)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(193)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(193)
										if ((tmp24)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(193)
										newByteLength = tmp21;
										HX_STACK_LINE(193)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(193)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(193)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(193)
										if ((tmp23)){
											HX_STACK_LINE(193)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(193)
									_this->buffer = buffer;
									HX_STACK_LINE(193)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(193)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(193)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(193)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(193)
									_this->length = tmp22;
									HX_STACK_LINE(193)
									tmp15 = _this;
								}
								HX_STACK_LINE(193)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(193)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(193)
				tmp7 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				::haxe::io::Bytes tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(196)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(196)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				if ((tmp11)){
					HX_STACK_LINE(196)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(196)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					if ((tmp12)){
						HX_STACK_LINE(196)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						{
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(196)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(196)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							_this->length = tmp15;
							HX_STACK_LINE(196)
							int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							_this->byteLength = tmp16;
							HX_STACK_LINE(196)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(196)
								int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								this2 = tmp19;
								HX_STACK_LINE(196)
								tmp17 = this2;
							}
							HX_STACK_LINE(196)
							_this->buffer = tmp17;
							HX_STACK_LINE(196)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(196)
							tmp13 = _this;
						}
						HX_STACK_LINE(196)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(196)
						bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						if ((tmp13)){
							HX_STACK_LINE(196)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(196)
								::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(196)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(196)
								int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(196)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(196)
								int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(196)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(196)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(196)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								if ((tmp22)){
									HX_STACK_LINE(196)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(196)
									int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(196)
									int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(196)
									{
										HX_STACK_LINE(196)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(196)
										int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(196)
										::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(196)
										this2 = tmp26;
										HX_STACK_LINE(196)
										tmp24 = this2;
									}
									HX_STACK_LINE(196)
									_this->buffer = tmp24;
									HX_STACK_LINE(196)
									::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(196)
									int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(196)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(196)
									_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
								}
								else{
									HX_STACK_LINE(196)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(196)
								int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(196)
								_this->byteLength = tmp23;
								HX_STACK_LINE(196)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(196)
								_this->length = srcLength;
								HX_STACK_LINE(196)
								tmp14 = _this;
							}
							HX_STACK_LINE(196)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(196)
							bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(196)
							if ((tmp14)){
								HX_STACK_LINE(196)
								::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								{
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(196)
									::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(196)
									bool tmp17 = (byte_offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(196)
									if ((tmp17)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int tmp18 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(196)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(196)
									if ((tmp19)){
										HX_STACK_LINE(196)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(196)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(196)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(196)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(196)
									bool tmp20 = (len == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(196)
									if ((tmp20)){
										HX_STACK_LINE(196)
										int tmp21 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(196)
										bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(196)
										if ((tmp24)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(196)
										int tmp21 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(196)
										newByteLength = tmp21;
										HX_STACK_LINE(196)
										int tmp22 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(196)
										int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(196)
										bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(196)
										if ((tmp23)){
											HX_STACK_LINE(196)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(196)
									_this->buffer = buffer;
									HX_STACK_LINE(196)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(196)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(196)
									Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(196)
									int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(196)
									_this->length = tmp22;
									HX_STACK_LINE(196)
									tmp15 = _this;
								}
								HX_STACK_LINE(196)
								this1 = tmp15;
							}
							else{
								HX_STACK_LINE(196)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(196)
				tmp7 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(199)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(169)
	::snow::api::buffers::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(202)
	::snow::api::buffers::ArrayBufferView tmp8 = view;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_snow_api_buffers_Float64Array,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::initTypedArray( ::snow::api::buffers::ArrayBufferView view){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","initTypedArray",0xeb472a09,"snow.api.buffers.ArrayBufferView.initTypedArray","snow/api/buffers/ArrayBufferView.hx",50,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(view,"view")
	HX_STACK_LINE(52)
	::haxe::io::Bytes srcData = view->buffer;		HX_STACK_VAR(srcData,"srcData");
	HX_STACK_LINE(53)
	int srcLength = view->length;		HX_STACK_VAR(srcLength,"srcLength");
	HX_STACK_LINE(54)
	int srcByteOffset = view->byteOffset;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
	HX_STACK_LINE(55)
	int srcElementSize = view->bytesPerElement;		HX_STACK_VAR(srcElementSize,"srcElementSize");
	HX_STACK_LINE(56)
	int tmp = this->bytesPerElement;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	int elementSize = tmp;		HX_STACK_VAR(elementSize,"elementSize");
	HX_STACK_LINE(60)
	int tmp1 = view->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	if ((tmp3)){
		HX_STACK_LINE(61)
		int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
		HX_STACK_LINE(61)
		int tmp4 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		int cloneLength = tmp4;		HX_STACK_VAR(cloneLength,"cloneLength");
		HX_STACK_LINE(61)
		::haxe::io::Bytes tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(61)
			int tmp6 = cloneLength;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::alloc(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			this1 = tmp7;
			HX_STACK_LINE(61)
			tmp5 = this1;
		}
		HX_STACK_LINE(61)
		this->buffer = tmp5;
		HX_STACK_LINE(61)
		::haxe::io::Bytes tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		::haxe::io::Bytes tmp7 = srcData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		int tmp8 = srcByteOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		int tmp9 = cloneLength;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		tmp6->blit((int)0,tmp7,tmp8,tmp9);
	}
	else{
		HX_STACK_LINE(64)
		HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
	}
	HX_STACK_LINE(67)
	int tmp4 = this->bytesPerElement;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	int tmp5 = srcLength;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(67)
	this->byteLength = tmp6;
	HX_STACK_LINE(68)
	this->byteOffset = (int)0;
	HX_STACK_LINE(69)
	this->length = srcLength;
	HX_STACK_LINE(71)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,initTypedArray,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::initBuffer( ::haxe::io::Bytes in_buffer,Dynamic __o_in_byteOffset,Dynamic len){
Dynamic in_byteOffset = __o_in_byteOffset.Default(0);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","initBuffer",0xd682953a,"snow.api.buffers.ArrayBufferView.initBuffer","snow/api/buffers/ArrayBufferView.hx",77,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(in_buffer,"in_buffer")
	HX_STACK_ARG(in_byteOffset,"in_byteOffset")
	HX_STACK_ARG(len,"len")
{
		HX_STACK_LINE(79)
		bool tmp = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		if ((tmp)){
			HX_STACK_LINE(79)
			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
		}
		HX_STACK_LINE(80)
		Dynamic tmp1 = in_byteOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		int tmp3 = hx::Mod(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp4)){
			HX_STACK_LINE(80)
			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
		}
		HX_STACK_LINE(82)
		int bufferByteLength = in_buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
		HX_STACK_LINE(83)
		int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		int elementSize = tmp5;		HX_STACK_VAR(elementSize,"elementSize");
		HX_STACK_LINE(84)
		int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
		HX_STACK_LINE(86)
		bool tmp6 = (len == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		if ((tmp6)){
			HX_STACK_LINE(88)
			int tmp7 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			newByteLength = tmp7;
			HX_STACK_LINE(90)
			int tmp8 = bufferByteLength;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			int tmp9 = this->bytesPerElement;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(90)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(90)
			if ((tmp11)){
				HX_STACK_LINE(90)
				HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
			}
			HX_STACK_LINE(91)
			bool tmp12 = (newByteLength < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(91)
			if ((tmp12)){
				HX_STACK_LINE(91)
				HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
			}
		}
		else{
			HX_STACK_LINE(95)
			Dynamic tmp7 = len;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			int tmp8 = this->bytesPerElement;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(95)
			newByteLength = tmp9;
			HX_STACK_LINE(97)
			int tmp10 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(97)
			int newRange = tmp10;		HX_STACK_VAR(newRange,"newRange");
			HX_STACK_LINE(98)
			bool tmp11 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			if ((tmp11)){
				HX_STACK_LINE(98)
				HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
			}
		}
		HX_STACK_LINE(102)
		this->buffer = in_buffer;
		HX_STACK_LINE(103)
		this->byteOffset = in_byteOffset;
		HX_STACK_LINE(104)
		this->byteLength = newByteLength;
		HX_STACK_LINE(105)
		int tmp7 = newByteLength;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		int tmp8 = this->bytesPerElement;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(105)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(105)
		this->length = tmp10;
		HX_STACK_LINE(107)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_obj,initBuffer,return )

::snow::api::buffers::ArrayBufferView ArrayBufferView_obj::initArray( cpp::ArrayBase array){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","initArray",0xcf7cfa9f,"snow.api.buffers.ArrayBufferView.initArray","snow/api/buffers/ArrayBufferView.hx",114,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(116)
	this->byteOffset = (int)0;
	HX_STACK_LINE(117)
	this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
	HX_STACK_LINE(118)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	int tmp1 = this->bytesPerElement;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	this->byteLength = tmp2;
	HX_STACK_LINE(120)
	::haxe::io::Bytes tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(120)
		int tmp4 = this->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::alloc(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		this1 = tmp5;
		HX_STACK_LINE(120)
		tmp3 = this1;
	}
	HX_STACK_LINE(120)
	this->buffer = tmp3;
	HX_STACK_LINE(121)
	this->copyFromArray(((Array< Float >)(array)),null());
	HX_STACK_LINE(123)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,initArray,return )

Void ArrayBufferView_obj::set( ::snow::api::buffers::ArrayBufferView view,cpp::ArrayBase array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","set",0x3a2ee158,"snow.api.buffers.ArrayBufferView.set","snow/api/buffers/ArrayBufferView.hx",132,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(view,"view")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(134)
		bool tmp = (view != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		if ((tmp)){
			HX_STACK_LINE(134)
			tmp1 = (array == null());
		}
		else{
			HX_STACK_LINE(134)
			tmp1 = false;
		}
		HX_STACK_LINE(134)
		if ((tmp1)){
			HX_STACK_LINE(135)
			::haxe::io::Bytes tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			int tmp3 = offset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			int tmp4 = this->bytesPerElement;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			::haxe::io::Bytes tmp6 = view->buffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(135)
			int tmp7 = view->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(135)
			int tmp8 = view->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(135)
			tmp2->blit(tmp5,tmp6,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(136)
			bool tmp2 = (array != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			if ((tmp2)){
				HX_STACK_LINE(136)
				tmp3 = (view == null());
			}
			else{
				HX_STACK_LINE(136)
				tmp3 = false;
			}
			HX_STACK_LINE(136)
			if ((tmp3)){
				HX_STACK_LINE(137)
				int tmp4 = offset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(137)
				this->copyFromArray(((Array< Float >)(array)),tmp4);
			}
			else{
				HX_STACK_LINE(139)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_obj,set,(void))

Void ArrayBufferView_obj::cloneBuffer( ::haxe::io::Bytes src,hx::Null< int >  __o_srcByteOffset){
int srcByteOffset = __o_srcByteOffset.Default(0);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","cloneBuffer",0xdead93f3,"snow.api.buffers.ArrayBufferView.cloneBuffer","snow/api/buffers/ArrayBufferView.hx",148,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(srcByteOffset,"srcByteOffset")
{
		HX_STACK_LINE(150)
		int srcLength = src->length;		HX_STACK_VAR(srcLength,"srcLength");
		HX_STACK_LINE(151)
		int tmp = (srcLength - srcByteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		int cloneLength = tmp;		HX_STACK_VAR(cloneLength,"cloneLength");
		HX_STACK_LINE(153)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(153)
			int tmp2 = cloneLength;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			this1 = tmp3;
			HX_STACK_LINE(153)
			tmp1 = this1;
		}
		HX_STACK_LINE(153)
		this->buffer = tmp1;
		HX_STACK_LINE(154)
		::haxe::io::Bytes tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		::haxe::io::Bytes tmp3 = src;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		int tmp4 = srcByteOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		int tmp5 = cloneLength;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		tmp2->blit((int)0,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,cloneBuffer,(void))

int ArrayBufferView_obj::bytesForType( int type){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","bytesForType",0xd7a3c4c2,"snow.api.buffers.ArrayBufferView.bytesForType","snow/api/buffers/ArrayBufferView.hx",207,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(210)
	int tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(213)
			tmp1 = (int)1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(216)
			tmp1 = (int)1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(219)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(222)
			tmp1 = (int)2;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(225)
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(228)
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(231)
			tmp1 = (int)4;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(234)
			tmp1 = (int)4;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(237)
			tmp1 = (int)8;
		}
		;break;
		default: {
			HX_STACK_LINE(239)
			tmp1 = (int)1;
		}
	}
	HX_STACK_LINE(209)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,bytesForType,return )

::String ArrayBufferView_obj::toString( ){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","toString",0x58111736,"snow.api.buffers.ArrayBufferView.toString","snow/api/buffers/ArrayBufferView.hx",245,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(248)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(248)
		int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(248)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(249)
				tmp = HX_HCSTRING("Int8Array","\x50","\xdc","\xf6","\xae");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(250)
				tmp = HX_HCSTRING("Uint8Array","\x7b","\xc9","\xdd","\xe5");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(251)
				tmp = HX_HCSTRING("Uint8ClampedArray","\x7d","\x43","\xe0","\x0c");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(252)
				tmp = HX_HCSTRING("Int16Array","\x85","\x17","\x71","\xa9");
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(253)
				tmp = HX_HCSTRING("Uint16Array","\xfa","\xaf","\x99","\x7c");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(254)
				tmp = HX_HCSTRING("Int32Array","\x8b","\x93","\x2e","\x63");
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(255)
				tmp = HX_HCSTRING("Uint32Array","\x00","\x2c","\x57","\x36");
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(256)
				tmp = HX_HCSTRING("Float32Array","\x7e","\x42","\x27","\x90");
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(257)
				tmp = HX_HCSTRING("Float64Array","\x7f","\x5f","\x9e","\xd9");
			}
			;break;
			default: {
				HX_STACK_LINE(258)
				tmp = HX_HCSTRING("ArrayBufferView","\x5e","\x6e","\x84","\xfd");
			}
		}
	}
	HX_STACK_LINE(248)
	::String name = tmp;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(261)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(261)
	int tmp2 = this->byteLength;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	::String tmp3 = (HX_HCSTRING(" [byteLength:","\x11","\xd6","\xa9","\xca") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	::String tmp4 = (tmp3 + HX_HCSTRING(", length:","\xa0","\x04","\x67","\xef"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	::String tmp7 = (tmp6 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(261)
	::String tmp8 = (tmp1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(261)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,toString,return )

int ArrayBufferView_obj::toByteLength( int elemCount){
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","toByteLength",0x3374a2f3,"snow.api.buffers.ArrayBufferView.toByteLength","snow/api/buffers/ArrayBufferView.hx",266,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(elemCount,"elemCount")
	HX_STACK_LINE(268)
	int tmp = elemCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	int tmp1 = this->bytesPerElement;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,toByteLength,return )

Void ArrayBufferView_obj::copyFromArray( Array< Float > array,Dynamic __o_offset){
Dynamic offset = __o_offset.Default(0);
	HX_STACK_FRAME("snow.api.buffers.ArrayBufferView","copyFromArray",0x597da290,"snow.api.buffers.ArrayBufferView.copyFromArray","snow/api/buffers/ArrayBufferView.hx",275,0xa074815d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(278)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(278)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(280)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(280)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			switch( (int)(tmp1)){
				case (int)1: {
					HX_STACK_LINE(282)
					while((true)){
						HX_STACK_LINE(282)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(282)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(282)
						if ((tmp3)){
							HX_STACK_LINE(282)
							break;
						}
						HX_STACK_LINE(283)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(283)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(283)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(283)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(284)
						{
							HX_STACK_LINE(285)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(285)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(285)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(284)
							::__hxcpp_memory_set_byte(this->buffer->b,pos,value);
						}
						HX_STACK_LINE(286)
						++(i);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(289)
					while((true)){
						HX_STACK_LINE(289)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(289)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(289)
						if ((tmp3)){
							HX_STACK_LINE(289)
							break;
						}
						HX_STACK_LINE(290)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(290)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(290)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(290)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(291)
						::haxe::io::Bytes tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(292)
						int tmp8 = pos;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(292)
						Float tmp9 = array->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(292)
						int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(291)
						::snow::api::buffers::ArrayBufferIO_obj::setInt16(tmp7,tmp8,tmp10);
						HX_STACK_LINE(293)
						++(i);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(296)
					while((true)){
						HX_STACK_LINE(296)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(296)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(296)
						if ((tmp3)){
							HX_STACK_LINE(296)
							break;
						}
						HX_STACK_LINE(297)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(297)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(297)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(297)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(299)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(299)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(299)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(298)
							::__hxcpp_memory_set_i32(this->buffer->b,pos,value);
						}
						HX_STACK_LINE(300)
						++(i);
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(303)
					while((true)){
						HX_STACK_LINE(303)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(303)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(303)
						if ((tmp3)){
							HX_STACK_LINE(303)
							break;
						}
						HX_STACK_LINE(304)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(304)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(304)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(304)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(306)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(306)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(306)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(305)
							::__hxcpp_memory_set_byte(this->buffer->b,pos,value);
						}
						HX_STACK_LINE(307)
						++(i);
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(310)
					while((true)){
						HX_STACK_LINE(310)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(310)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(310)
						if ((tmp3)){
							HX_STACK_LINE(310)
							break;
						}
						HX_STACK_LINE(311)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(311)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(311)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(311)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(313)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(313)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(313)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(312)
							::__hxcpp_memory_set_ui16(this->buffer->b,pos,value);
						}
						HX_STACK_LINE(314)
						++(i);
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(317)
					while((true)){
						HX_STACK_LINE(317)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(317)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(317)
						if ((tmp3)){
							HX_STACK_LINE(317)
							break;
						}
						HX_STACK_LINE(318)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(318)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(318)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(318)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(320)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(320)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(320)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(319)
							::__hxcpp_memory_set_ui32(this->buffer->b,pos,value);
						}
						HX_STACK_LINE(321)
						++(i);
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(324)
					while((true)){
						HX_STACK_LINE(324)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(324)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(324)
						if ((tmp3)){
							HX_STACK_LINE(324)
							break;
						}
						HX_STACK_LINE(325)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(325)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(325)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(325)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(326)
						{
							HX_STACK_LINE(327)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(327)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(327)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(326)
							{
								HX_STACK_LINE(326)
								int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(326)
								{
									HX_STACK_LINE(326)
									Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(326)
									{
										HX_STACK_LINE(326)
										int _int = value;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(326)
										bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(326)
										if ((tmp11)){
											HX_STACK_LINE(326)
											tmp10 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(326)
											tmp10 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(326)
									int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(326)
									int _out = tmp11;		HX_STACK_VAR(_out,"_out");
									HX_STACK_LINE(326)
									bool tmp12 = (_out > (int)255);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(326)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(326)
									if ((tmp12)){
										HX_STACK_LINE(326)
										tmp13 = (int)255;
									}
									else{
										HX_STACK_LINE(326)
										tmp13 = _out;
									}
									HX_STACK_LINE(326)
									_out = tmp13;
									HX_STACK_LINE(326)
									bool tmp14 = (_out < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(326)
									if ((tmp14)){
										HX_STACK_LINE(326)
										tmp9 = (int)0;
									}
									else{
										HX_STACK_LINE(326)
										tmp9 = _out;
									}
								}
								HX_STACK_LINE(326)
								int value1 = tmp9;		HX_STACK_VAR(value1,"value1");
								HX_STACK_LINE(326)
								::__hxcpp_memory_set_byte(this->buffer->b,pos,value1);
							}
						}
						HX_STACK_LINE(328)
						++(i);
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(331)
					while((true)){
						HX_STACK_LINE(331)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(331)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(331)
						if ((tmp3)){
							HX_STACK_LINE(331)
							break;
						}
						HX_STACK_LINE(332)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(332)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(332)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(332)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(333)
						::__hxcpp_memory_set_float(this->buffer->b,pos,array->__get(i));
						HX_STACK_LINE(335)
						++(i);
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(338)
					while((true)){
						HX_STACK_LINE(338)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(338)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(338)
						if ((tmp3)){
							HX_STACK_LINE(338)
							break;
						}
						HX_STACK_LINE(339)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(339)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(339)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(339)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(340)
						::__hxcpp_memory_set_double(this->buffer->b,pos,array->__get(i));
						HX_STACK_LINE(342)
						++(i);
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(346)
					HX_STACK_DO_THROW(HX_HCSTRING("copyFromArray on a base type ArrayBuffer","\xe8","\x01","\x1a","\xe2"));
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,copyFromArray,(void))


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(bytesPerElement,"bytesPerElement");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(bytesPerElement,"bytesPerElement");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initArray") ) { return initArray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"initBuffer") ) { return initBuffer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneBuffer") ) { return cloneBuffer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bytesForType") ) { return bytesForType_dyn(); }
		if (HX_FIELD_EQ(inName,"toByteLength") ) { return toByteLength_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromArray") ) { return copyFromArray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initTypedArray") ) { return initTypedArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { return bytesPerElement; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Int8Array") ) { return subarray_snow_api_buffers_Int8Array_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Uint8Array") ) { return subarray_snow_api_buffers_Uint8Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Int32Array") ) { return subarray_snow_api_buffers_Int32Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Int16Array") ) { return subarray_snow_api_buffers_Int16Array_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Uint16Array") ) { return subarray_snow_api_buffers_Uint16Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Uint32Array") ) { return subarray_snow_api_buffers_Uint32Array_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Float32Array") ) { return subarray_snow_api_buffers_Float32Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Float64Array") ) { return subarray_snow_api_buffers_Float64Array_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"subarray_snow_api_buffers_Uint8ClampedArray") ) { return subarray_snow_api_buffers_Uint8ClampedArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { bytesPerElement=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ArrayBufferView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,bytesPerElement),HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("subarray_snow_api_buffers_Uint8Array","\xe2","\xc6","\x66","\x6f"),
	HX_HCSTRING("subarray_snow_api_buffers_Int32Array","\xf2","\x90","\xb7","\xec"),
	HX_HCSTRING("subarray_snow_api_buffers_Float32Array","\xa5","\xa7","\xf7","\x4b"),
	HX_HCSTRING("subarray_snow_api_buffers_Int8Array","\xc9","\xc8","\x9c","\xd6"),
	HX_HCSTRING("subarray_snow_api_buffers_Uint8ClampedArray","\xf6","\xd0","\x6c","\x22"),
	HX_HCSTRING("subarray_snow_api_buffers_Int16Array","\xec","\x14","\xfa","\x32"),
	HX_HCSTRING("subarray_snow_api_buffers_Uint16Array","\xb3","\x6c","\xee","\x4a"),
	HX_HCSTRING("subarray_snow_api_buffers_Uint32Array","\xb9","\xe8","\xab","\x04"),
	HX_HCSTRING("subarray_snow_api_buffers_Float64Array","\xa6","\xc4","\x6e","\x95"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"),
	HX_HCSTRING("initTypedArray","\xff","\x5f","\x1a","\x1d"),
	HX_HCSTRING("initBuffer","\x30","\x18","\xda","\xd4"),
	HX_HCSTRING("initArray","\x69","\x88","\x21","\x41"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("cloneBuffer","\x3d","\xa8","\xe8","\x6c"),
	HX_HCSTRING("bytesForType","\x38","\x71","\x1a","\xbd"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toByteLength","\x69","\x4f","\xeb","\x18"),
	HX_HCSTRING("copyFromArray","\x5a","\xdd","\xdd","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.buffers.ArrayBufferView","\x24","\x13","\x7d","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ArrayBufferView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferView_obj >;
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

} // end namespace snow
} // end namespace api
} // end namespace buffers
