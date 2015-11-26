#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_MatrixTransform
#include <phoenix/MatrixTransform.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
namespace phoenix{

Void Matrix_obj::__construct(hx::Null< Float >  __o_n11,hx::Null< Float >  __o_n12,hx::Null< Float >  __o_n13,hx::Null< Float >  __o_n14,hx::Null< Float >  __o_n21,hx::Null< Float >  __o_n22,hx::Null< Float >  __o_n23,hx::Null< Float >  __o_n24,hx::Null< Float >  __o_n31,hx::Null< Float >  __o_n32,hx::Null< Float >  __o_n33,hx::Null< Float >  __o_n34,hx::Null< Float >  __o_n41,hx::Null< Float >  __o_n42,hx::Null< Float >  __o_n43,hx::Null< Float >  __o_n44)
{
HX_STACK_FRAME("phoenix.Matrix","new",0x05a13252,"phoenix.Matrix.new","phoenix/Matrix.hx",27,0x938b753d)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_n11,"n11")
HX_STACK_ARG(__o_n12,"n12")
HX_STACK_ARG(__o_n13,"n13")
HX_STACK_ARG(__o_n14,"n14")
HX_STACK_ARG(__o_n21,"n21")
HX_STACK_ARG(__o_n22,"n22")
HX_STACK_ARG(__o_n23,"n23")
HX_STACK_ARG(__o_n24,"n24")
HX_STACK_ARG(__o_n31,"n31")
HX_STACK_ARG(__o_n32,"n32")
HX_STACK_ARG(__o_n33,"n33")
HX_STACK_ARG(__o_n34,"n34")
HX_STACK_ARG(__o_n41,"n41")
HX_STACK_ARG(__o_n42,"n42")
HX_STACK_ARG(__o_n43,"n43")
HX_STACK_ARG(__o_n44,"n44")
Float n11 = __o_n11.Default(1);
Float n12 = __o_n12.Default(0);
Float n13 = __o_n13.Default(0);
Float n14 = __o_n14.Default(0);
Float n21 = __o_n21.Default(0);
Float n22 = __o_n22.Default(1);
Float n23 = __o_n23.Default(0);
Float n24 = __o_n24.Default(0);
Float n31 = __o_n31.Default(0);
Float n32 = __o_n32.Default(0);
Float n33 = __o_n33.Default(1);
Float n34 = __o_n34.Default(0);
Float n41 = __o_n41.Default(0);
Float n42 = __o_n42.Default(0);
Float n43 = __o_n43.Default(0);
Float n44 = __o_n44.Default(1);
{
	HX_STACK_LINE(50)
	this->M44 = ((Float)1);
	HX_STACK_LINE(49)
	this->M34 = ((Float)0);
	HX_STACK_LINE(48)
	this->M24 = ((Float)0);
	HX_STACK_LINE(47)
	this->M14 = ((Float)0);
	HX_STACK_LINE(45)
	this->M43 = ((Float)0);
	HX_STACK_LINE(44)
	this->M33 = ((Float)1);
	HX_STACK_LINE(43)
	this->M23 = ((Float)0);
	HX_STACK_LINE(42)
	this->M13 = ((Float)0);
	HX_STACK_LINE(40)
	this->M42 = ((Float)0);
	HX_STACK_LINE(39)
	this->M32 = ((Float)0);
	HX_STACK_LINE(38)
	this->M22 = ((Float)1);
	HX_STACK_LINE(37)
	this->M12 = ((Float)0);
	HX_STACK_LINE(35)
	this->M41 = ((Float)0);
	HX_STACK_LINE(34)
	this->M31 = ((Float)0);
	HX_STACK_LINE(33)
	this->M21 = ((Float)0);
	HX_STACK_LINE(32)
	this->M11 = ((Float)1);
	HX_STACK_LINE(58)
	this->elements = Array_obj< Float >::__new();
	HX_STACK_LINE(60)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(61)
	while((true)){
		HX_STACK_LINE(61)
		int tmp = (i)++;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = (tmp < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		if ((tmp2)){
			HX_STACK_LINE(61)
			break;
		}
		HX_STACK_LINE(62)
		this->elements->push(((Float)0.0));
	}
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(66)
		Float tmp = n11;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		e[(int)0] = tmp;
		HX_STACK_LINE(66)
		Float tmp1 = n12;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		e[(int)4] = tmp1;
		HX_STACK_LINE(66)
		Float tmp2 = n13;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		e[(int)8] = tmp2;
		HX_STACK_LINE(66)
		Float tmp3 = n14;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		e[(int)12] = tmp3;
		HX_STACK_LINE(67)
		Float tmp4 = n21;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		e[(int)1] = tmp4;
		HX_STACK_LINE(67)
		Float tmp5 = n22;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		e[(int)5] = tmp5;
		HX_STACK_LINE(67)
		Float tmp6 = n23;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		e[(int)9] = tmp6;
		HX_STACK_LINE(67)
		Float tmp7 = n24;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		e[(int)13] = tmp7;
		HX_STACK_LINE(68)
		Float tmp8 = n31;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		e[(int)2] = tmp8;
		HX_STACK_LINE(68)
		Float tmp9 = n32;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		e[(int)6] = tmp9;
		HX_STACK_LINE(68)
		Float tmp10 = n33;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		e[(int)10] = tmp10;
		HX_STACK_LINE(68)
		Float tmp11 = n34;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		e[(int)14] = tmp11;
		HX_STACK_LINE(69)
		Float tmp12 = n41;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(65)
		e[(int)3] = tmp12;
		HX_STACK_LINE(69)
		Float tmp13 = n42;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(65)
		e[(int)7] = tmp13;
		HX_STACK_LINE(69)
		Float tmp14 = n43;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(65)
		e[(int)11] = tmp14;
		HX_STACK_LINE(69)
		Float tmp15 = n44;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(65)
		e[(int)15] = tmp15;
		HX_STACK_LINE(65)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(72)
	::snow::api::buffers::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		cpp::ArrayBase array = this->elements;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(72)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(72)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(72)
			::snow::api::buffers::ArrayBufferView tmp2 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			this1 = tmp2;
		}
		else{
			HX_STACK_LINE(72)
			bool tmp2 = (array != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			if ((tmp2)){
				HX_STACK_LINE(72)
				::snow::api::buffers::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					::snow::api::buffers::ArrayBufferView tmp4 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(72)
					::snow::api::buffers::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(72)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(72)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(72)
					int tmp5 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					_this->byteLength = tmp5;
					HX_STACK_LINE(72)
					::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(72)
						int tmp7 = _this->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(72)
						::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::alloc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(72)
						this2 = tmp8;
						HX_STACK_LINE(72)
						tmp6 = this2;
					}
					HX_STACK_LINE(72)
					_this->buffer = tmp6;
					HX_STACK_LINE(72)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(72)
					tmp3 = _this;
				}
				HX_STACK_LINE(72)
				this1 = tmp3;
			}
			else{
				HX_STACK_LINE(72)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(72)
				if ((tmp3)){
					HX_STACK_LINE(72)
					::snow::api::buffers::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						::snow::api::buffers::ArrayBufferView tmp5 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						::snow::api::buffers::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(72)
						::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(72)
						::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(72)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(72)
						int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(72)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(72)
						int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(72)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(72)
						int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(72)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(72)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(72)
						int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(72)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(72)
						if ((tmp12)){
							HX_STACK_LINE(72)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(72)
							int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(72)
							int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(72)
							::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(72)
							{
								HX_STACK_LINE(72)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(72)
								int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(72)
								::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(72)
								this2 = tmp16;
								HX_STACK_LINE(72)
								tmp14 = this2;
							}
							HX_STACK_LINE(72)
							_this->buffer = tmp14;
							HX_STACK_LINE(72)
							::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(72)
							int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(72)
							int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(72)
							_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
						}
						else{
							HX_STACK_LINE(72)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(72)
						int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(72)
						_this->byteLength = tmp13;
						HX_STACK_LINE(72)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(72)
						_this->length = srcLength;
						HX_STACK_LINE(72)
						tmp4 = _this;
					}
					HX_STACK_LINE(72)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(72)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(72)
					if ((tmp4)){
						HX_STACK_LINE(72)
						::snow::api::buffers::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							::snow::api::buffers::ArrayBufferView tmp6 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(72)
							::snow::api::buffers::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(72)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(72)
							if ((tmp7)){
								HX_STACK_LINE(72)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(72)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(72)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(72)
							if ((tmp9)){
								HX_STACK_LINE(72)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(72)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(72)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(72)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(72)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(72)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(72)
							if ((tmp11)){
								HX_STACK_LINE(72)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(72)
								newByteLength = tmp12;
								HX_STACK_LINE(72)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(72)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(72)
								if ((tmp14)){
									HX_STACK_LINE(72)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(72)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(72)
								if ((tmp15)){
									HX_STACK_LINE(72)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(72)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(72)
								newByteLength = tmp12;
								HX_STACK_LINE(72)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(72)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(72)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(72)
								if ((tmp14)){
									HX_STACK_LINE(72)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(72)
							_this->buffer = null();
							HX_STACK_LINE(72)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(72)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(72)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(72)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(72)
							_this->length = tmp13;
							HX_STACK_LINE(72)
							tmp5 = _this;
						}
						HX_STACK_LINE(72)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(72)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(72)
		tmp = this1;
	}
	HX_STACK_LINE(72)
	this->_float32array = tmp;
}
;
	return null();
}

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_n11,hx::Null< Float >  __o_n12,hx::Null< Float >  __o_n13,hx::Null< Float >  __o_n14,hx::Null< Float >  __o_n21,hx::Null< Float >  __o_n22,hx::Null< Float >  __o_n23,hx::Null< Float >  __o_n24,hx::Null< Float >  __o_n31,hx::Null< Float >  __o_n32,hx::Null< Float >  __o_n33,hx::Null< Float >  __o_n34,hx::Null< Float >  __o_n41,hx::Null< Float >  __o_n42,hx::Null< Float >  __o_n43,hx::Null< Float >  __o_n44)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(__o_n11,__o_n12,__o_n13,__o_n14,__o_n21,__o_n22,__o_n23,__o_n24,__o_n31,__o_n32,__o_n33,__o_n34,__o_n41,__o_n42,__o_n43,__o_n44);
	return _result_;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15]);
	return _result_;}

::phoenix::Matrix Matrix_obj::set( Float n11,Float n12,Float n13,Float n14,Float n21,Float n22,Float n23,Float n24,Float n31,Float n32,Float n33,Float n34,Float n41,Float n42,Float n43,Float n44){
	HX_STACK_FRAME("phoenix.Matrix","set",0x05a4fd94,"phoenix.Matrix.set","phoenix/Matrix.hx",82,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n11,"n11")
	HX_STACK_ARG(n12,"n12")
	HX_STACK_ARG(n13,"n13")
	HX_STACK_ARG(n14,"n14")
	HX_STACK_ARG(n21,"n21")
	HX_STACK_ARG(n22,"n22")
	HX_STACK_ARG(n23,"n23")
	HX_STACK_ARG(n24,"n24")
	HX_STACK_ARG(n31,"n31")
	HX_STACK_ARG(n32,"n32")
	HX_STACK_ARG(n33,"n33")
	HX_STACK_ARG(n34,"n34")
	HX_STACK_ARG(n41,"n41")
	HX_STACK_ARG(n42,"n42")
	HX_STACK_ARG(n43,"n43")
	HX_STACK_ARG(n44,"n44")
	HX_STACK_LINE(84)
	Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(86)
	Float tmp = n11;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	e[(int)0] = tmp;
	HX_STACK_LINE(86)
	Float tmp1 = n12;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	e[(int)4] = tmp1;
	HX_STACK_LINE(86)
	Float tmp2 = n13;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	e[(int)8] = tmp2;
	HX_STACK_LINE(86)
	Float tmp3 = n14;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	e[(int)12] = tmp3;
	HX_STACK_LINE(87)
	Float tmp4 = n21;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	e[(int)1] = tmp4;
	HX_STACK_LINE(87)
	Float tmp5 = n22;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(87)
	e[(int)5] = tmp5;
	HX_STACK_LINE(87)
	Float tmp6 = n23;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	e[(int)9] = tmp6;
	HX_STACK_LINE(87)
	Float tmp7 = n24;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(87)
	e[(int)13] = tmp7;
	HX_STACK_LINE(88)
	Float tmp8 = n31;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(88)
	e[(int)2] = tmp8;
	HX_STACK_LINE(88)
	Float tmp9 = n32;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(88)
	e[(int)6] = tmp9;
	HX_STACK_LINE(88)
	Float tmp10 = n33;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(88)
	e[(int)10] = tmp10;
	HX_STACK_LINE(88)
	Float tmp11 = n34;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(88)
	e[(int)14] = tmp11;
	HX_STACK_LINE(89)
	Float tmp12 = n41;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(89)
	e[(int)3] = tmp12;
	HX_STACK_LINE(89)
	Float tmp13 = n42;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(89)
	e[(int)7] = tmp13;
	HX_STACK_LINE(89)
	Float tmp14 = n43;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(89)
	e[(int)11] = tmp14;
	HX_STACK_LINE(89)
	Float tmp15 = n44;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(89)
	e[(int)15] = tmp15;
	HX_STACK_LINE(91)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC16(Matrix_obj,set,return )

::String Matrix_obj::toString( ){
	HX_STACK_FRAME("phoenix.Matrix","toString",0x3c5f217a,"phoenix.Matrix.toString","phoenix/Matrix.hx",94,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(96)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Float tmp1 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		Float n = tmp1;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(96)
		Float tmp2 = e->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		Float tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		Float tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		tmp = (Float(tmp5) / Float(tmp6));
	}
	HX_STACK_LINE(96)
	::String tmp1 = (HX_HCSTRING("{ 11:","\x35","\x87","\x95","\xe7") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	::String tmp2 = (tmp1 + HX_HCSTRING(", 12:","\x45","\xb4","\xed","\x6a"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Float tmp4 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		Float n = tmp4;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(96)
		Float tmp5 = e->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		Float tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		Float tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		tmp3 = (Float(tmp8) / Float(tmp9));
	}
	HX_STACK_LINE(96)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(96)
	::String tmp5 = (tmp4 + HX_HCSTRING(", 13:","\x24","\xb5","\xed","\x6a"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Float tmp7 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		Float n = tmp7;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(96)
		Float tmp8 = e->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		Float tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(96)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(96)
		Float tmp12 = n;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(96)
		tmp6 = (Float(tmp11) / Float(tmp12));
	}
	HX_STACK_LINE(96)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	::String tmp8 = (tmp7 + HX_HCSTRING(", 14:","\x03","\xb6","\xed","\x6a"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(96)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Float tmp10 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(96)
		Float n = tmp10;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(96)
		Float tmp11 = e->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(96)
		Float tmp12 = n;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(96)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(96)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(96)
		Float tmp15 = n;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(96)
		tmp9 = (Float(tmp14) / Float(tmp15));
	}
	HX_STACK_LINE(96)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(96)
	::String tmp11 = (tmp10 + HX_HCSTRING(" }, ","\x11","\xd4","\x85","\x15"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(96)
	::String tmp12 = (tmp11 + HX_HCSTRING("{ 21:","\x76","\x49","\x96","\xe7"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(97)
	Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		Float tmp14 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(97)
		Float n = tmp14;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(97)
		Float tmp15 = e->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(97)
		Float tmp16 = n;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(97)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(97)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(97)
		Float tmp19 = n;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(97)
		tmp13 = (Float(tmp18) / Float(tmp19));
	}
	HX_STACK_LINE(96)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(96)
	::String tmp15 = (tmp14 + HX_HCSTRING(", 22:","\x86","\x76","\xee","\x6a"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(97)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		Float tmp17 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(97)
		Float n = tmp17;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(97)
		Float tmp18 = e->__get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(97)
		Float tmp19 = n;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(97)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(97)
		int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(97)
		Float tmp22 = n;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(97)
		tmp16 = (Float(tmp21) / Float(tmp22));
	}
	HX_STACK_LINE(96)
	::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(96)
	::String tmp18 = (tmp17 + HX_HCSTRING(", 23:","\x65","\x77","\xee","\x6a"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(97)
	Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		Float tmp20 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(97)
		Float n = tmp20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(97)
		Float tmp21 = e->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(97)
		Float tmp22 = n;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(97)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(97)
		int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(97)
		Float tmp25 = n;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(97)
		tmp19 = (Float(tmp24) / Float(tmp25));
	}
	HX_STACK_LINE(96)
	::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(96)
	::String tmp21 = (tmp20 + HX_HCSTRING(", 24:","\x44","\x78","\xee","\x6a"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(97)
	Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		Float tmp23 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(97)
		Float n = tmp23;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(97)
		Float tmp24 = e->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(97)
		Float tmp25 = n;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(97)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(97)
		int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(97)
		Float tmp28 = n;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(97)
		tmp22 = (Float(tmp27) / Float(tmp28));
	}
	HX_STACK_LINE(96)
	::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(96)
	::String tmp24 = (tmp23 + HX_HCSTRING(" }, ","\x11","\xd4","\x85","\x15"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(96)
	::String tmp25 = (tmp24 + HX_HCSTRING("{ 31:","\xb7","\x0b","\x97","\xe7"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(98)
	Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		Float tmp27 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(98)
		Float n = tmp27;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(98)
		Float tmp28 = e->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(98)
		Float tmp29 = n;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(98)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(98)
		int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(98)
		Float tmp32 = n;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(98)
		tmp26 = (Float(tmp31) / Float(tmp32));
	}
	HX_STACK_LINE(96)
	::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(96)
	::String tmp28 = (tmp27 + HX_HCSTRING(", 32:","\xc7","\x38","\xef","\x6a"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(98)
	Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		Float tmp30 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(98)
		Float n = tmp30;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(98)
		Float tmp31 = e->__get((int)6);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(98)
		Float tmp32 = n;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(98)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(98)
		int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(98)
		Float tmp35 = n;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(98)
		tmp29 = (Float(tmp34) / Float(tmp35));
	}
	HX_STACK_LINE(96)
	::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(96)
	::String tmp31 = (tmp30 + HX_HCSTRING(", 33:","\xa6","\x39","\xef","\x6a"));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(98)
	Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		Float tmp33 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(98)
		Float n = tmp33;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(98)
		Float tmp34 = e->__get((int)10);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(98)
		Float tmp35 = n;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(98)
		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(98)
		int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(98)
		Float tmp38 = n;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(98)
		tmp32 = (Float(tmp37) / Float(tmp38));
	}
	HX_STACK_LINE(96)
	::String tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(96)
	::String tmp34 = (tmp33 + HX_HCSTRING(", 34:","\x85","\x3a","\xef","\x6a"));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(98)
	Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		Float tmp36 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(98)
		Float n = tmp36;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(98)
		Float tmp37 = e->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(98)
		Float tmp38 = n;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(98)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(98)
		int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(98)
		Float tmp41 = n;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(98)
		tmp35 = (Float(tmp40) / Float(tmp41));
	}
	HX_STACK_LINE(96)
	::String tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(96)
	::String tmp37 = (tmp36 + HX_HCSTRING(" }, ","\x11","\xd4","\x85","\x15"));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(96)
	::String tmp38 = (tmp37 + HX_HCSTRING("{ 41:","\xf8","\xcd","\x97","\xe7"));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(99)
	Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float tmp40 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(99)
		Float n = tmp40;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(99)
		Float tmp41 = e->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(99)
		Float tmp42 = n;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(99)
		Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(99)
		int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(99)
		Float tmp45 = n;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(99)
		tmp39 = (Float(tmp44) / Float(tmp45));
	}
	HX_STACK_LINE(96)
	::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(96)
	::String tmp41 = (tmp40 + HX_HCSTRING(", 42:","\x08","\xfb","\xef","\x6a"));		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(99)
	Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float tmp43 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(99)
		Float n = tmp43;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(99)
		Float tmp44 = e->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(99)
		Float tmp45 = n;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(99)
		Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(99)
		int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(99)
		Float tmp48 = n;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(99)
		tmp42 = (Float(tmp47) / Float(tmp48));
	}
	HX_STACK_LINE(96)
	::String tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(96)
	::String tmp44 = (tmp43 + HX_HCSTRING(", 43:","\xe7","\xfb","\xef","\x6a"));		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(99)
	Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float tmp46 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(99)
		Float n = tmp46;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(99)
		Float tmp47 = e->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(99)
		Float tmp48 = n;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(99)
		Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(99)
		int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(99)
		Float tmp51 = n;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(99)
		tmp45 = (Float(tmp50) / Float(tmp51));
	}
	HX_STACK_LINE(96)
	::String tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(96)
	::String tmp47 = (tmp46 + HX_HCSTRING(", 44:","\xc6","\xfc","\xef","\x6a"));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(99)
	Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		Float tmp49 = ::Math_obj::pow((int)10,(int)3);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(99)
		Float n = tmp49;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(99)
		Float tmp50 = e->__get((int)15);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(99)
		Float tmp51 = n;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(99)
		Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(99)
		int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(99)
		Float tmp54 = n;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(99)
		tmp48 = (Float(tmp53) / Float(tmp54));
	}
	HX_STACK_LINE(96)
	::String tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(96)
	::String tmp50 = (tmp49 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(96)
	::String str = tmp50;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(100)
	::String tmp51 = str;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(100)
	return tmp51;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

Float Matrix_obj::get_M11( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M11",0x8bb9a3f6,"phoenix.Matrix.get_M11","phoenix/Matrix.hx",103,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	Float tmp = this->elements->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M11,return )

Float Matrix_obj::get_M12( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M12",0x8bb9a3f7,"phoenix.Matrix.get_M12","phoenix/Matrix.hx",104,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	Float tmp = this->elements->__get((int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M12,return )

Float Matrix_obj::get_M13( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M13",0x8bb9a3f8,"phoenix.Matrix.get_M13","phoenix/Matrix.hx",105,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	Float tmp = this->elements->__get((int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M13,return )

Float Matrix_obj::get_M14( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M14",0x8bb9a3f9,"phoenix.Matrix.get_M14","phoenix/Matrix.hx",106,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	Float tmp = this->elements->__get((int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M14,return )

Float Matrix_obj::get_M21( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M21",0x8bb9a4d5,"phoenix.Matrix.get_M21","phoenix/Matrix.hx",108,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	Float tmp = this->elements->__get((int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M21,return )

Float Matrix_obj::get_M22( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M22",0x8bb9a4d6,"phoenix.Matrix.get_M22","phoenix/Matrix.hx",109,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	Float tmp = this->elements->__get((int)5);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M22,return )

Float Matrix_obj::get_M23( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M23",0x8bb9a4d7,"phoenix.Matrix.get_M23","phoenix/Matrix.hx",110,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	Float tmp = this->elements->__get((int)6);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M23,return )

Float Matrix_obj::get_M24( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M24",0x8bb9a4d8,"phoenix.Matrix.get_M24","phoenix/Matrix.hx",111,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	Float tmp = this->elements->__get((int)7);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M24,return )

Float Matrix_obj::get_M31( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M31",0x8bb9a5b4,"phoenix.Matrix.get_M31","phoenix/Matrix.hx",113,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	Float tmp = this->elements->__get((int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M31,return )

Float Matrix_obj::get_M32( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M32",0x8bb9a5b5,"phoenix.Matrix.get_M32","phoenix/Matrix.hx",114,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	Float tmp = this->elements->__get((int)9);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M32,return )

Float Matrix_obj::get_M33( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M33",0x8bb9a5b6,"phoenix.Matrix.get_M33","phoenix/Matrix.hx",115,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	Float tmp = this->elements->__get((int)10);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M33,return )

Float Matrix_obj::get_M34( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M34",0x8bb9a5b7,"phoenix.Matrix.get_M34","phoenix/Matrix.hx",116,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	Float tmp = this->elements->__get((int)11);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M34,return )

Float Matrix_obj::get_M41( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M41",0x8bb9a693,"phoenix.Matrix.get_M41","phoenix/Matrix.hx",118,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	Float tmp = this->elements->__get((int)12);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M41,return )

Float Matrix_obj::get_M42( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M42",0x8bb9a694,"phoenix.Matrix.get_M42","phoenix/Matrix.hx",119,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	Float tmp = this->elements->__get((int)13);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M42,return )

Float Matrix_obj::get_M43( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M43",0x8bb9a695,"phoenix.Matrix.get_M43","phoenix/Matrix.hx",120,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	Float tmp = this->elements->__get((int)14);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M43,return )

Float Matrix_obj::get_M44( ){
	HX_STACK_FRAME("phoenix.Matrix","get_M44",0x8bb9a696,"phoenix.Matrix.get_M44","phoenix/Matrix.hx",121,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	Float tmp = this->elements->__get((int)15);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,get_M44,return )

Float Matrix_obj::set_M11( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M11",0x7ebb3502,"phoenix.Matrix.set_M11","phoenix/Matrix.hx",123,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(123)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	this->elements[(int)0] = tmp;
	HX_STACK_LINE(123)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M11,return )

Float Matrix_obj::set_M12( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M12",0x7ebb3503,"phoenix.Matrix.set_M12","phoenix/Matrix.hx",124,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(124)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	this->elements[(int)1] = tmp;
	HX_STACK_LINE(124)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M12,return )

Float Matrix_obj::set_M13( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M13",0x7ebb3504,"phoenix.Matrix.set_M13","phoenix/Matrix.hx",125,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(125)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	this->elements[(int)2] = tmp;
	HX_STACK_LINE(125)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M13,return )

Float Matrix_obj::set_M14( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M14",0x7ebb3505,"phoenix.Matrix.set_M14","phoenix/Matrix.hx",126,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(126)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	this->elements[(int)3] = tmp;
	HX_STACK_LINE(126)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M14,return )

Float Matrix_obj::set_M21( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M21",0x7ebb35e1,"phoenix.Matrix.set_M21","phoenix/Matrix.hx",128,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(128)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	this->elements[(int)4] = tmp;
	HX_STACK_LINE(128)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M21,return )

Float Matrix_obj::set_M22( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M22",0x7ebb35e2,"phoenix.Matrix.set_M22","phoenix/Matrix.hx",129,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(129)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	this->elements[(int)5] = tmp;
	HX_STACK_LINE(129)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M22,return )

Float Matrix_obj::set_M23( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M23",0x7ebb35e3,"phoenix.Matrix.set_M23","phoenix/Matrix.hx",130,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(130)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	this->elements[(int)6] = tmp;
	HX_STACK_LINE(130)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M23,return )

Float Matrix_obj::set_M24( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M24",0x7ebb35e4,"phoenix.Matrix.set_M24","phoenix/Matrix.hx",131,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(131)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	this->elements[(int)7] = tmp;
	HX_STACK_LINE(131)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M24,return )

Float Matrix_obj::set_M31( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M31",0x7ebb36c0,"phoenix.Matrix.set_M31","phoenix/Matrix.hx",133,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(133)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	this->elements[(int)8] = tmp;
	HX_STACK_LINE(133)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M31,return )

Float Matrix_obj::set_M32( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M32",0x7ebb36c1,"phoenix.Matrix.set_M32","phoenix/Matrix.hx",134,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(134)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	this->elements[(int)9] = tmp;
	HX_STACK_LINE(134)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M32,return )

Float Matrix_obj::set_M33( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M33",0x7ebb36c2,"phoenix.Matrix.set_M33","phoenix/Matrix.hx",135,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(135)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	this->elements[(int)10] = tmp;
	HX_STACK_LINE(135)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M33,return )

Float Matrix_obj::set_M34( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M34",0x7ebb36c3,"phoenix.Matrix.set_M34","phoenix/Matrix.hx",136,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(136)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	this->elements[(int)11] = tmp;
	HX_STACK_LINE(136)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M34,return )

Float Matrix_obj::set_M41( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M41",0x7ebb379f,"phoenix.Matrix.set_M41","phoenix/Matrix.hx",138,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(138)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	this->elements[(int)12] = tmp;
	HX_STACK_LINE(138)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M41,return )

Float Matrix_obj::set_M42( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M42",0x7ebb37a0,"phoenix.Matrix.set_M42","phoenix/Matrix.hx",139,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(139)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	this->elements[(int)13] = tmp;
	HX_STACK_LINE(139)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M42,return )

Float Matrix_obj::set_M43( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M43",0x7ebb37a1,"phoenix.Matrix.set_M43","phoenix/Matrix.hx",140,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(140)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	this->elements[(int)14] = tmp;
	HX_STACK_LINE(140)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M43,return )

Float Matrix_obj::set_M44( Float _value){
	HX_STACK_FRAME("phoenix.Matrix","set_M44",0x7ebb37a2,"phoenix.Matrix.set_M44","phoenix/Matrix.hx",141,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(141)
	Float tmp = _value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	this->elements[(int)15] = tmp;
	HX_STACK_LINE(141)
	Float tmp1 = _value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,set_M44,return )

::snow::api::buffers::ArrayBufferView Matrix_obj::float32array( ){
	HX_STACK_FRAME("phoenix.Matrix","float32array",0x9bcb564c,"phoenix.Matrix.float32array","phoenix/Matrix.hx",143,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(147)
	while((true)){
		HX_STACK_LINE(147)
		bool tmp = (i < (int)16);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		if ((tmp1)){
			HX_STACK_LINE(147)
			break;
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			::snow::api::buffers::ArrayBufferView tmp2 = this->_float32array;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			::snow::api::buffers::ArrayBufferView this1 = tmp2;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(148)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),this->elements->__get(i));
		}
		HX_STACK_LINE(149)
		++(i);
	}
	HX_STACK_LINE(152)
	::snow::api::buffers::ArrayBufferView tmp = this->_float32array;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,float32array,return )

::phoenix::Matrix Matrix_obj::identity( ){
	HX_STACK_FRAME("phoenix.Matrix","identity",0xbd1f960c,"phoenix.Matrix.identity","phoenix/Matrix.hx",156,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(158)
		e[(int)0] = (int)1;
		HX_STACK_LINE(158)
		e[(int)4] = (int)0;
		HX_STACK_LINE(158)
		e[(int)8] = (int)0;
		HX_STACK_LINE(158)
		e[(int)12] = (int)0;
		HX_STACK_LINE(158)
		e[(int)1] = (int)0;
		HX_STACK_LINE(158)
		e[(int)5] = (int)1;
		HX_STACK_LINE(158)
		e[(int)9] = (int)0;
		HX_STACK_LINE(158)
		e[(int)13] = (int)0;
		HX_STACK_LINE(158)
		e[(int)2] = (int)0;
		HX_STACK_LINE(158)
		e[(int)6] = (int)0;
		HX_STACK_LINE(158)
		e[(int)10] = (int)1;
		HX_STACK_LINE(158)
		e[(int)14] = (int)0;
		HX_STACK_LINE(158)
		e[(int)3] = (int)0;
		HX_STACK_LINE(158)
		e[(int)7] = (int)0;
		HX_STACK_LINE(158)
		e[(int)11] = (int)0;
		HX_STACK_LINE(158)
		e[(int)15] = (int)1;
		HX_STACK_LINE(158)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(165)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,return )

::phoenix::Matrix Matrix_obj::copy( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Matrix","copy",0xe02d0d83,"phoenix.Matrix.copy","phoenix/Matrix.hx",170,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(172)
	Array< Float > me = m->elements;		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(175)
		Float tmp = me->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		e[(int)0] = tmp;
		HX_STACK_LINE(175)
		Float tmp1 = me->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		e[(int)4] = tmp1;
		HX_STACK_LINE(175)
		Float tmp2 = me->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		e[(int)8] = tmp2;
		HX_STACK_LINE(175)
		Float tmp3 = me->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		e[(int)12] = tmp3;
		HX_STACK_LINE(176)
		Float tmp4 = me->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		e[(int)1] = tmp4;
		HX_STACK_LINE(176)
		Float tmp5 = me->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		e[(int)5] = tmp5;
		HX_STACK_LINE(176)
		Float tmp6 = me->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		e[(int)9] = tmp6;
		HX_STACK_LINE(176)
		Float tmp7 = me->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		e[(int)13] = tmp7;
		HX_STACK_LINE(177)
		Float tmp8 = me->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		e[(int)2] = tmp8;
		HX_STACK_LINE(177)
		Float tmp9 = me->__get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		e[(int)6] = tmp9;
		HX_STACK_LINE(177)
		Float tmp10 = me->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(174)
		e[(int)10] = tmp10;
		HX_STACK_LINE(177)
		Float tmp11 = me->__get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(174)
		e[(int)14] = tmp11;
		HX_STACK_LINE(178)
		Float tmp12 = me->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(174)
		e[(int)3] = tmp12;
		HX_STACK_LINE(178)
		Float tmp13 = me->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(174)
		e[(int)7] = tmp13;
		HX_STACK_LINE(178)
		Float tmp14 = me->__get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(174)
		e[(int)11] = tmp14;
		HX_STACK_LINE(178)
		Float tmp15 = me->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(174)
		e[(int)15] = tmp15;
		HX_STACK_LINE(174)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(181)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copy,return )

::phoenix::Matrix Matrix_obj::make2D( Float _x,Float _y,hx::Null< Float >  __o__scale,hx::Null< Float >  __o__rotation){
Float _scale = __o__scale.Default(1);
Float _rotation = __o__rotation.Default(0);
	HX_STACK_FRAME("phoenix.Matrix","make2D",0xfc461e8e,"phoenix.Matrix.make2D","phoenix/Matrix.hx",184,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_ARG(_rotation,"_rotation")
{
		HX_STACK_LINE(186)
		Float tmp = (_rotation * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		Float theta = tmp;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(187)
		Float tmp1 = theta;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		Float c = tmp2;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(188)
		Float tmp3 = theta;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		Float s = tmp4;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(191)
			Float tmp5 = (c * _scale);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			e[(int)0] = tmp5;
			HX_STACK_LINE(191)
			Float tmp6 = (s * _scale);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			e[(int)4] = tmp6;
			HX_STACK_LINE(190)
			e[(int)8] = (int)0;
			HX_STACK_LINE(191)
			Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			e[(int)12] = tmp7;
			HX_STACK_LINE(192)
			Float tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(192)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(192)
			Float tmp10 = _scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(192)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(190)
			e[(int)1] = tmp11;
			HX_STACK_LINE(192)
			Float tmp12 = (c * _scale);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(190)
			e[(int)5] = tmp12;
			HX_STACK_LINE(190)
			e[(int)9] = (int)0;
			HX_STACK_LINE(192)
			Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(190)
			e[(int)13] = tmp13;
			HX_STACK_LINE(190)
			e[(int)2] = (int)0;
			HX_STACK_LINE(190)
			e[(int)6] = (int)0;
			HX_STACK_LINE(190)
			e[(int)10] = (int)1;
			HX_STACK_LINE(190)
			e[(int)14] = (int)0;
			HX_STACK_LINE(190)
			e[(int)3] = (int)0;
			HX_STACK_LINE(190)
			e[(int)7] = (int)0;
			HX_STACK_LINE(190)
			e[(int)11] = (int)0;
			HX_STACK_LINE(190)
			e[(int)15] = (int)1;
			HX_STACK_LINE(190)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(197)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,make2D,return )

::phoenix::Matrix Matrix_obj::copyPosition( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Matrix","copyPosition",0x2db7254c,"phoenix.Matrix.copyPosition","phoenix/Matrix.hx",201,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(203)
	Float tmp = m->elements->__get((int)12);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	this->elements[(int)12] = tmp;
	HX_STACK_LINE(204)
	Float tmp1 = m->elements->__get((int)13);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	this->elements[(int)13] = tmp1;
	HX_STACK_LINE(205)
	Float tmp2 = m->elements->__get((int)14);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	this->elements[(int)14] = tmp2;
	HX_STACK_LINE(207)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyPosition,return )

::phoenix::Vector Matrix_obj::getPosition( ){
	HX_STACK_FRAME("phoenix.Matrix","getPosition",0x6c3a0751,"phoenix.Matrix.getPosition","phoenix/Matrix.hx",211,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	Float tmp = this->elements->__get((int)12);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	Float tmp1 = this->elements->__get((int)13);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	Float tmp2 = this->elements->__get((int)14);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(212)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,getPosition,return )

::phoenix::Matrix Matrix_obj::extractRotation( ::phoenix::Matrix m){
	HX_STACK_FRAME("phoenix.Matrix","extractRotation",0xb7fcdc91,"phoenix.Matrix.extractRotation","phoenix/Matrix.hx",215,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(217)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	::phoenix::Vector _temp = tmp;		HX_STACK_VAR(_temp,"_temp");
	HX_STACK_LINE(218)
	Array< Float > me = m->elements;		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(220)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	{
		HX_STACK_LINE(220)
		::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			Float tmp3 = me->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(220)
			Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(220)
			Float tmp4 = me->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(220)
			Float _y = tmp4;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(220)
			Float tmp5 = me->__get((int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(220)
			Float _z = tmp5;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(220)
			bool prev = _temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(220)
			_temp->ignore_listeners = true;
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				_temp->x = _x;
				HX_STACK_LINE(220)
				bool tmp6 = _temp->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(220)
				if ((tmp6)){
					HX_STACK_LINE(220)
					_temp->x;
				}
				else{
					HX_STACK_LINE(220)
					bool tmp7 = (_temp->listen_x != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(220)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(220)
					if ((tmp7)){
						HX_STACK_LINE(220)
						bool tmp9 = _temp->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(220)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(220)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(220)
						tmp8 = false;
					}
					HX_STACK_LINE(220)
					if ((tmp8)){
						HX_STACK_LINE(220)
						Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(220)
						_temp->listen_x(tmp9);
					}
					HX_STACK_LINE(220)
					_temp->x;
				}
			}
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				_temp->y = _y;
				HX_STACK_LINE(220)
				bool tmp6 = _temp->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(220)
				if ((tmp6)){
					HX_STACK_LINE(220)
					_temp->y;
				}
				else{
					HX_STACK_LINE(220)
					bool tmp7 = (_temp->listen_y != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(220)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(220)
					if ((tmp7)){
						HX_STACK_LINE(220)
						bool tmp9 = _temp->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(220)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(220)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(220)
						tmp8 = false;
					}
					HX_STACK_LINE(220)
					if ((tmp8)){
						HX_STACK_LINE(220)
						Float tmp9 = _y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(220)
						_temp->listen_y(tmp9);
					}
					HX_STACK_LINE(220)
					_temp->y;
				}
			}
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				_temp->z = _z;
				HX_STACK_LINE(220)
				bool tmp6 = _temp->_construct;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(220)
				if ((tmp6)){
					HX_STACK_LINE(220)
					_temp->z;
				}
				else{
					HX_STACK_LINE(220)
					bool tmp7 = (_temp->listen_z != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(220)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(220)
					if ((tmp7)){
						HX_STACK_LINE(220)
						bool tmp9 = _temp->ignore_listeners;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(220)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(220)
						tmp8 = !(tmp10);
					}
					else{
						HX_STACK_LINE(220)
						tmp8 = false;
					}
					HX_STACK_LINE(220)
					if ((tmp8)){
						HX_STACK_LINE(220)
						Float tmp9 = _z;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(220)
						_temp->listen_z(tmp9);
					}
					HX_STACK_LINE(220)
					_temp->z;
				}
			}
			HX_STACK_LINE(220)
			_temp->ignore_listeners = prev;
			HX_STACK_LINE(220)
			bool tmp6 = (_temp->listen_x != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(220)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(220)
			if ((tmp6)){
				HX_STACK_LINE(220)
				bool tmp8 = _temp->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(220)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(220)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(220)
				tmp7 = false;
			}
			HX_STACK_LINE(220)
			if ((tmp7)){
				HX_STACK_LINE(220)
				Float tmp8 = _temp->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(220)
				_temp->listen_x(tmp8);
			}
			HX_STACK_LINE(220)
			bool tmp8 = (_temp->listen_y != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(220)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(220)
			if ((tmp8)){
				HX_STACK_LINE(220)
				bool tmp10 = _temp->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(220)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(220)
				tmp9 = !(tmp11);
			}
			else{
				HX_STACK_LINE(220)
				tmp9 = false;
			}
			HX_STACK_LINE(220)
			if ((tmp9)){
				HX_STACK_LINE(220)
				Float tmp10 = _temp->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(220)
				_temp->listen_y(tmp10);
			}
			HX_STACK_LINE(220)
			bool tmp10 = (_temp->listen_z != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(220)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			if ((tmp10)){
				HX_STACK_LINE(220)
				bool tmp12 = _temp->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(220)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(220)
				tmp11 = !(tmp13);
			}
			else{
				HX_STACK_LINE(220)
				tmp11 = false;
			}
			HX_STACK_LINE(220)
			if ((tmp11)){
				HX_STACK_LINE(220)
				Float tmp12 = _temp->z;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(220)
				_temp->listen_z(tmp12);
			}
			HX_STACK_LINE(220)
			tmp2 = _temp;
		}
		HX_STACK_LINE(220)
		::phoenix::Vector _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(220)
		Float tmp3 = (_this->x * _this->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		Float tmp4 = (_this->y * _this->y);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		Float tmp6 = (_this->z * _this->z);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(220)
		tmp1 = ::Math_obj::sqrt(tmp7);
	}
	HX_STACK_LINE(220)
	Float tmp2 = (Float((int)1) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	Float _scale_x = tmp2;		HX_STACK_VAR(_scale_x,"_scale_x");
	HX_STACK_LINE(221)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(221)
		::phoenix::Vector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			Float tmp5 = me->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(221)
			Float _x = tmp5;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(221)
			Float tmp6 = me->__get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(221)
			Float _y = tmp6;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(221)
			Float tmp7 = me->__get((int)6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(221)
			Float _z = tmp7;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(221)
			bool prev = _temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(221)
			_temp->ignore_listeners = true;
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				_temp->x = _x;
				HX_STACK_LINE(221)
				bool tmp8 = _temp->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				if ((tmp8)){
					HX_STACK_LINE(221)
					_temp->x;
				}
				else{
					HX_STACK_LINE(221)
					bool tmp9 = (_temp->listen_x != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(221)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(221)
					if ((tmp9)){
						HX_STACK_LINE(221)
						bool tmp11 = _temp->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(221)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(221)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(221)
						tmp10 = false;
					}
					HX_STACK_LINE(221)
					if ((tmp10)){
						HX_STACK_LINE(221)
						Float tmp11 = _x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(221)
						_temp->listen_x(tmp11);
					}
					HX_STACK_LINE(221)
					_temp->x;
				}
			}
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				_temp->y = _y;
				HX_STACK_LINE(221)
				bool tmp8 = _temp->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				if ((tmp8)){
					HX_STACK_LINE(221)
					_temp->y;
				}
				else{
					HX_STACK_LINE(221)
					bool tmp9 = (_temp->listen_y != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(221)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(221)
					if ((tmp9)){
						HX_STACK_LINE(221)
						bool tmp11 = _temp->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(221)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(221)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(221)
						tmp10 = false;
					}
					HX_STACK_LINE(221)
					if ((tmp10)){
						HX_STACK_LINE(221)
						Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(221)
						_temp->listen_y(tmp11);
					}
					HX_STACK_LINE(221)
					_temp->y;
				}
			}
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				_temp->z = _z;
				HX_STACK_LINE(221)
				bool tmp8 = _temp->_construct;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				if ((tmp8)){
					HX_STACK_LINE(221)
					_temp->z;
				}
				else{
					HX_STACK_LINE(221)
					bool tmp9 = (_temp->listen_z != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(221)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(221)
					if ((tmp9)){
						HX_STACK_LINE(221)
						bool tmp11 = _temp->ignore_listeners;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(221)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(221)
						tmp10 = !(tmp12);
					}
					else{
						HX_STACK_LINE(221)
						tmp10 = false;
					}
					HX_STACK_LINE(221)
					if ((tmp10)){
						HX_STACK_LINE(221)
						Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(221)
						_temp->listen_z(tmp11);
					}
					HX_STACK_LINE(221)
					_temp->z;
				}
			}
			HX_STACK_LINE(221)
			_temp->ignore_listeners = prev;
			HX_STACK_LINE(221)
			bool tmp8 = (_temp->listen_x != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(221)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(221)
			if ((tmp8)){
				HX_STACK_LINE(221)
				bool tmp10 = _temp->ignore_listeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(221)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(221)
				tmp9 = !(tmp11);
			}
			else{
				HX_STACK_LINE(221)
				tmp9 = false;
			}
			HX_STACK_LINE(221)
			if ((tmp9)){
				HX_STACK_LINE(221)
				Float tmp10 = _temp->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(221)
				_temp->listen_x(tmp10);
			}
			HX_STACK_LINE(221)
			bool tmp10 = (_temp->listen_y != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(221)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(221)
			if ((tmp10)){
				HX_STACK_LINE(221)
				bool tmp12 = _temp->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(221)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(221)
				tmp11 = !(tmp13);
			}
			else{
				HX_STACK_LINE(221)
				tmp11 = false;
			}
			HX_STACK_LINE(221)
			if ((tmp11)){
				HX_STACK_LINE(221)
				Float tmp12 = _temp->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(221)
				_temp->listen_y(tmp12);
			}
			HX_STACK_LINE(221)
			bool tmp12 = (_temp->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(221)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(221)
			if ((tmp12)){
				HX_STACK_LINE(221)
				bool tmp14 = _temp->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(221)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(221)
				tmp13 = !(tmp15);
			}
			else{
				HX_STACK_LINE(221)
				tmp13 = false;
			}
			HX_STACK_LINE(221)
			if ((tmp13)){
				HX_STACK_LINE(221)
				Float tmp14 = _temp->z;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(221)
				_temp->listen_z(tmp14);
			}
			HX_STACK_LINE(221)
			tmp4 = _temp;
		}
		HX_STACK_LINE(221)
		::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(221)
		Float tmp5 = (_this->x * _this->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		Float tmp6 = (_this->y * _this->y);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		Float tmp8 = (_this->z * _this->z);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(221)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(221)
		tmp3 = ::Math_obj::sqrt(tmp9);
	}
	HX_STACK_LINE(221)
	Float tmp4 = (Float((int)1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(221)
	Float _scale_y = tmp4;		HX_STACK_VAR(_scale_y,"_scale_y");
	HX_STACK_LINE(222)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		::phoenix::Vector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			Float tmp7 = me->__get((int)8);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(222)
			Float _x = tmp7;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(222)
			Float tmp8 = me->__get((int)9);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(222)
			Float _y = tmp8;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(222)
			Float tmp9 = me->__get((int)10);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(222)
			Float _z = tmp9;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(222)
			bool prev = _temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(222)
			_temp->ignore_listeners = true;
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				_temp->x = _x;
				HX_STACK_LINE(222)
				bool tmp10 = _temp->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(222)
				if ((tmp10)){
					HX_STACK_LINE(222)
					_temp->x;
				}
				else{
					HX_STACK_LINE(222)
					bool tmp11 = (_temp->listen_x != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(222)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(222)
					if ((tmp11)){
						HX_STACK_LINE(222)
						bool tmp13 = _temp->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(222)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(222)
						tmp12 = !(tmp14);
					}
					else{
						HX_STACK_LINE(222)
						tmp12 = false;
					}
					HX_STACK_LINE(222)
					if ((tmp12)){
						HX_STACK_LINE(222)
						Float tmp13 = _x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(222)
						_temp->listen_x(tmp13);
					}
					HX_STACK_LINE(222)
					_temp->x;
				}
			}
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				_temp->y = _y;
				HX_STACK_LINE(222)
				bool tmp10 = _temp->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(222)
				if ((tmp10)){
					HX_STACK_LINE(222)
					_temp->y;
				}
				else{
					HX_STACK_LINE(222)
					bool tmp11 = (_temp->listen_y != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(222)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(222)
					if ((tmp11)){
						HX_STACK_LINE(222)
						bool tmp13 = _temp->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(222)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(222)
						tmp12 = !(tmp14);
					}
					else{
						HX_STACK_LINE(222)
						tmp12 = false;
					}
					HX_STACK_LINE(222)
					if ((tmp12)){
						HX_STACK_LINE(222)
						Float tmp13 = _y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(222)
						_temp->listen_y(tmp13);
					}
					HX_STACK_LINE(222)
					_temp->y;
				}
			}
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				_temp->z = _z;
				HX_STACK_LINE(222)
				bool tmp10 = _temp->_construct;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(222)
				if ((tmp10)){
					HX_STACK_LINE(222)
					_temp->z;
				}
				else{
					HX_STACK_LINE(222)
					bool tmp11 = (_temp->listen_z != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(222)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(222)
					if ((tmp11)){
						HX_STACK_LINE(222)
						bool tmp13 = _temp->ignore_listeners;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(222)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(222)
						tmp12 = !(tmp14);
					}
					else{
						HX_STACK_LINE(222)
						tmp12 = false;
					}
					HX_STACK_LINE(222)
					if ((tmp12)){
						HX_STACK_LINE(222)
						Float tmp13 = _z;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(222)
						_temp->listen_z(tmp13);
					}
					HX_STACK_LINE(222)
					_temp->z;
				}
			}
			HX_STACK_LINE(222)
			_temp->ignore_listeners = prev;
			HX_STACK_LINE(222)
			bool tmp10 = (_temp->listen_x != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(222)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(222)
			if ((tmp10)){
				HX_STACK_LINE(222)
				bool tmp12 = _temp->ignore_listeners;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(222)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(222)
				tmp11 = !(tmp13);
			}
			else{
				HX_STACK_LINE(222)
				tmp11 = false;
			}
			HX_STACK_LINE(222)
			if ((tmp11)){
				HX_STACK_LINE(222)
				Float tmp12 = _temp->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(222)
				_temp->listen_x(tmp12);
			}
			HX_STACK_LINE(222)
			bool tmp12 = (_temp->listen_y != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(222)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(222)
			if ((tmp12)){
				HX_STACK_LINE(222)
				bool tmp14 = _temp->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(222)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(222)
				tmp13 = !(tmp15);
			}
			else{
				HX_STACK_LINE(222)
				tmp13 = false;
			}
			HX_STACK_LINE(222)
			if ((tmp13)){
				HX_STACK_LINE(222)
				Float tmp14 = _temp->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(222)
				_temp->listen_y(tmp14);
			}
			HX_STACK_LINE(222)
			bool tmp14 = (_temp->listen_z != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(222)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(222)
			if ((tmp14)){
				HX_STACK_LINE(222)
				bool tmp16 = _temp->ignore_listeners;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(222)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(222)
				tmp15 = !(tmp17);
			}
			else{
				HX_STACK_LINE(222)
				tmp15 = false;
			}
			HX_STACK_LINE(222)
			if ((tmp15)){
				HX_STACK_LINE(222)
				Float tmp16 = _temp->z;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(222)
				_temp->listen_z(tmp16);
			}
			HX_STACK_LINE(222)
			tmp6 = _temp;
		}
		HX_STACK_LINE(222)
		::phoenix::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(222)
		Float tmp7 = (_this->x * _this->x);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		Float tmp8 = (_this->y * _this->y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		Float tmp10 = (_this->z * _this->z);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		tmp5 = ::Math_obj::sqrt(tmp11);
	}
	HX_STACK_LINE(222)
	Float tmp6 = (Float((int)1) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(222)
	Float _scale_z = tmp6;		HX_STACK_VAR(_scale_z,"_scale_z");
	HX_STACK_LINE(224)
	Float tmp7 = me->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(224)
	Float tmp8 = _scale_x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(224)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(224)
	this->elements[(int)0] = tmp9;
	HX_STACK_LINE(225)
	Float tmp10 = me->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(225)
	Float tmp11 = _scale_x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(225)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(225)
	this->elements[(int)1] = tmp12;
	HX_STACK_LINE(226)
	Float tmp13 = me->__get((int)2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(226)
	Float tmp14 = _scale_x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(226)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(226)
	this->elements[(int)2] = tmp15;
	HX_STACK_LINE(228)
	Float tmp16 = me->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(228)
	Float tmp17 = _scale_y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(228)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(228)
	this->elements[(int)4] = tmp18;
	HX_STACK_LINE(229)
	Float tmp19 = me->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(229)
	Float tmp20 = _scale_y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(229)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(229)
	this->elements[(int)5] = tmp21;
	HX_STACK_LINE(230)
	Float tmp22 = me->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(230)
	Float tmp23 = _scale_y;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(230)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(230)
	this->elements[(int)6] = tmp24;
	HX_STACK_LINE(232)
	Float tmp25 = me->__get((int)8);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(232)
	Float tmp26 = _scale_z;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(232)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(232)
	this->elements[(int)8] = tmp27;
	HX_STACK_LINE(233)
	Float tmp28 = me->__get((int)9);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(233)
	Float tmp29 = _scale_z;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(233)
	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(233)
	this->elements[(int)9] = tmp30;
	HX_STACK_LINE(234)
	Float tmp31 = me->__get((int)10);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(234)
	Float tmp32 = _scale_z;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(234)
	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(234)
	this->elements[(int)10] = tmp33;
	HX_STACK_LINE(236)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,extractRotation,return )

::phoenix::Matrix Matrix_obj::makeRotationFromEuler( ::phoenix::Vector _v,hx::Null< int >  __o__order){
int _order = __o__order.Default(0);
	HX_STACK_FRAME("phoenix.Matrix","makeRotationFromEuler",0xdbee0f25,"phoenix.Matrix.makeRotationFromEuler","phoenix/Matrix.hx",239,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_ARG(_order,"_order")
{
		HX_STACK_LINE(241)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(243)
		Float x = _v->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(244)
		Float y = _v->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(245)
		Float z = _v->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(247)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		Float a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(247)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		Float b = tmp3;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(248)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(248)
		Float c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(248)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(248)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(248)
		Float d = tmp7;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(249)
		Float tmp8 = z;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(249)
		Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(249)
		Float e = tmp9;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(249)
		Float tmp10 = z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(249)
		Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(249)
		Float f = tmp11;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(251)
		bool tmp12 = (_order == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(251)
		if ((tmp12)){
			HX_STACK_LINE(253)
			Float tmp13 = (a * e);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(253)
			Float ae = tmp13;		HX_STACK_VAR(ae,"ae");
			HX_STACK_LINE(253)
			Float tmp14 = (a * f);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(253)
			Float af = tmp14;		HX_STACK_VAR(af,"af");
			HX_STACK_LINE(253)
			Float tmp15 = (b * e);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(253)
			Float be = tmp15;		HX_STACK_VAR(be,"be");
			HX_STACK_LINE(253)
			Float tmp16 = (b * f);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(253)
			Float bf = tmp16;		HX_STACK_VAR(bf,"bf");
			HX_STACK_LINE(255)
			Float tmp17 = (c * e);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(255)
			te[(int)0] = tmp17;
			HX_STACK_LINE(256)
			Float tmp18 = c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(256)
			Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(256)
			Float tmp20 = f;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(256)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(256)
			te[(int)4] = tmp21;
			HX_STACK_LINE(257)
			Float tmp22 = d;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(257)
			te[(int)8] = tmp22;
			HX_STACK_LINE(259)
			Float tmp23 = af;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(259)
			Float tmp24 = (be * d);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(259)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(259)
			te[(int)1] = tmp25;
			HX_STACK_LINE(260)
			Float tmp26 = ae;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(260)
			Float tmp27 = (bf * d);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(260)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(260)
			te[(int)5] = tmp28;
			HX_STACK_LINE(261)
			Float tmp29 = b;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(261)
			Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(261)
			Float tmp31 = c;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(261)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(261)
			te[(int)9] = tmp32;
			HX_STACK_LINE(263)
			Float tmp33 = bf;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(263)
			Float tmp34 = (ae * d);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(263)
			Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(263)
			te[(int)2] = tmp35;
			HX_STACK_LINE(264)
			Float tmp36 = be;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(264)
			Float tmp37 = (af * d);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(264)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(264)
			te[(int)6] = tmp38;
			HX_STACK_LINE(265)
			Float tmp39 = (a * c);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(265)
			te[(int)10] = tmp39;
		}
		else{
			HX_STACK_LINE(267)
			bool tmp13 = (_order == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(267)
			if ((tmp13)){
				HX_STACK_LINE(269)
				Float tmp14 = (c * e);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(269)
				Float ce = tmp14;		HX_STACK_VAR(ce,"ce");
				HX_STACK_LINE(269)
				Float tmp15 = (c * f);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(269)
				Float cf = tmp15;		HX_STACK_VAR(cf,"cf");
				HX_STACK_LINE(269)
				Float tmp16 = (d * e);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(269)
				Float de = tmp16;		HX_STACK_VAR(de,"de");
				HX_STACK_LINE(269)
				Float tmp17 = (d * f);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(269)
				Float df = tmp17;		HX_STACK_VAR(df,"df");
				HX_STACK_LINE(271)
				Float tmp18 = ce;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(271)
				Float tmp19 = (df * b);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(271)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(271)
				te[(int)0] = tmp20;
				HX_STACK_LINE(272)
				Float tmp21 = (de * b);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(272)
				Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(272)
				Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(272)
				te[(int)4] = tmp23;
				HX_STACK_LINE(273)
				Float tmp24 = (a * d);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(273)
				te[(int)8] = tmp24;
				HX_STACK_LINE(275)
				Float tmp25 = (a * f);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(275)
				te[(int)1] = tmp25;
				HX_STACK_LINE(276)
				Float tmp26 = (a * e);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(276)
				te[(int)5] = tmp26;
				HX_STACK_LINE(277)
				Float tmp27 = b;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(277)
				Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(277)
				te[(int)9] = tmp28;
				HX_STACK_LINE(279)
				Float tmp29 = (cf * b);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(279)
				Float tmp30 = de;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(279)
				Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(279)
				te[(int)2] = tmp31;
				HX_STACK_LINE(280)
				Float tmp32 = df;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(280)
				Float tmp33 = (ce * b);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(280)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(280)
				te[(int)6] = tmp34;
				HX_STACK_LINE(281)
				Float tmp35 = (a * c);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(281)
				te[(int)10] = tmp35;
			}
			else{
				HX_STACK_LINE(283)
				bool tmp14 = (_order == (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(283)
				if ((tmp14)){
					HX_STACK_LINE(285)
					Float tmp15 = (c * e);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(285)
					Float ce = tmp15;		HX_STACK_VAR(ce,"ce");
					HX_STACK_LINE(285)
					Float tmp16 = (c * f);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(285)
					Float cf = tmp16;		HX_STACK_VAR(cf,"cf");
					HX_STACK_LINE(285)
					Float tmp17 = (d * e);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(285)
					Float de = tmp17;		HX_STACK_VAR(de,"de");
					HX_STACK_LINE(285)
					Float tmp18 = (d * f);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(285)
					Float df = tmp18;		HX_STACK_VAR(df,"df");
					HX_STACK_LINE(287)
					Float tmp19 = ce;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(287)
					Float tmp20 = (df * b);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(287)
					Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(287)
					te[(int)0] = tmp21;
					HX_STACK_LINE(288)
					Float tmp22 = a;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(288)
					Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(288)
					Float tmp24 = f;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(288)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(288)
					te[(int)4] = tmp25;
					HX_STACK_LINE(289)
					Float tmp26 = de;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(289)
					Float tmp27 = (cf * b);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(289)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(289)
					te[(int)8] = tmp28;
					HX_STACK_LINE(291)
					Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(291)
					Float tmp30 = (de * b);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(291)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(291)
					te[(int)1] = tmp31;
					HX_STACK_LINE(292)
					Float tmp32 = (a * e);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(292)
					te[(int)5] = tmp32;
					HX_STACK_LINE(293)
					Float tmp33 = df;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(293)
					Float tmp34 = (ce * b);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(293)
					Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(293)
					te[(int)9] = tmp35;
					HX_STACK_LINE(295)
					Float tmp36 = a;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(295)
					Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(295)
					Float tmp38 = d;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(295)
					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(295)
					te[(int)2] = tmp39;
					HX_STACK_LINE(296)
					Float tmp40 = b;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(296)
					te[(int)6] = tmp40;
					HX_STACK_LINE(297)
					Float tmp41 = (a * c);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(297)
					te[(int)10] = tmp41;
				}
				else{
					HX_STACK_LINE(299)
					bool tmp15 = (_order == (int)3);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(299)
					if ((tmp15)){
						HX_STACK_LINE(301)
						Float tmp16 = (a * e);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(301)
						Float ae = tmp16;		HX_STACK_VAR(ae,"ae");
						HX_STACK_LINE(301)
						Float tmp17 = (a * f);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(301)
						Float af = tmp17;		HX_STACK_VAR(af,"af");
						HX_STACK_LINE(301)
						Float tmp18 = (b * e);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(301)
						Float be = tmp18;		HX_STACK_VAR(be,"be");
						HX_STACK_LINE(301)
						Float tmp19 = (b * f);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(301)
						Float bf = tmp19;		HX_STACK_VAR(bf,"bf");
						HX_STACK_LINE(303)
						Float tmp20 = (c * e);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(303)
						te[(int)0] = tmp20;
						HX_STACK_LINE(304)
						Float tmp21 = (be * d);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(304)
						Float tmp22 = af;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(304)
						Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(304)
						te[(int)4] = tmp23;
						HX_STACK_LINE(305)
						Float tmp24 = (ae * d);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(305)
						Float tmp25 = bf;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(305)
						Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(305)
						te[(int)8] = tmp26;
						HX_STACK_LINE(307)
						Float tmp27 = (c * f);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(307)
						te[(int)1] = tmp27;
						HX_STACK_LINE(308)
						Float tmp28 = (bf * d);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(308)
						Float tmp29 = ae;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(308)
						Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(308)
						te[(int)5] = tmp30;
						HX_STACK_LINE(309)
						Float tmp31 = (af * d);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(309)
						Float tmp32 = be;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(309)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(309)
						te[(int)9] = tmp33;
						HX_STACK_LINE(311)
						Float tmp34 = d;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(311)
						Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(311)
						te[(int)2] = tmp35;
						HX_STACK_LINE(312)
						Float tmp36 = (b * c);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(312)
						te[(int)6] = tmp36;
						HX_STACK_LINE(313)
						Float tmp37 = (a * c);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(313)
						te[(int)10] = tmp37;
					}
					else{
						HX_STACK_LINE(315)
						bool tmp16 = (_order == (int)4);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(315)
						if ((tmp16)){
							HX_STACK_LINE(317)
							Float tmp17 = (a * c);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(317)
							Float ac = tmp17;		HX_STACK_VAR(ac,"ac");
							HX_STACK_LINE(317)
							Float tmp18 = (a * d);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(317)
							Float ad = tmp18;		HX_STACK_VAR(ad,"ad");
							HX_STACK_LINE(317)
							Float tmp19 = (b * c);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(317)
							Float bc = tmp19;		HX_STACK_VAR(bc,"bc");
							HX_STACK_LINE(317)
							Float tmp20 = (b * d);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(317)
							Float bd = tmp20;		HX_STACK_VAR(bd,"bd");
							HX_STACK_LINE(319)
							Float tmp21 = (c * e);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(319)
							te[(int)0] = tmp21;
							HX_STACK_LINE(320)
							Float tmp22 = bd;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(320)
							Float tmp23 = (ac * f);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(320)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(320)
							te[(int)4] = tmp24;
							HX_STACK_LINE(321)
							Float tmp25 = (bc * f);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(321)
							Float tmp26 = ad;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(321)
							Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(321)
							te[(int)8] = tmp27;
							HX_STACK_LINE(323)
							Float tmp28 = f;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(323)
							te[(int)1] = tmp28;
							HX_STACK_LINE(324)
							Float tmp29 = (a * e);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(324)
							te[(int)5] = tmp29;
							HX_STACK_LINE(325)
							Float tmp30 = b;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(325)
							Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(325)
							Float tmp32 = e;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(325)
							Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(325)
							te[(int)9] = tmp33;
							HX_STACK_LINE(327)
							Float tmp34 = d;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(327)
							Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(327)
							Float tmp36 = e;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(327)
							Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(327)
							te[(int)2] = tmp37;
							HX_STACK_LINE(328)
							Float tmp38 = (ad * f);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(328)
							Float tmp39 = bc;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(328)
							Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(328)
							te[(int)6] = tmp40;
							HX_STACK_LINE(329)
							Float tmp41 = ac;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(329)
							Float tmp42 = (bd * f);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(329)
							Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(329)
							te[(int)10] = tmp43;
						}
						else{
							HX_STACK_LINE(331)
							bool tmp17 = (_order == (int)5);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(331)
							if ((tmp17)){
								HX_STACK_LINE(333)
								Float tmp18 = (a * c);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(333)
								Float ac = tmp18;		HX_STACK_VAR(ac,"ac");
								HX_STACK_LINE(333)
								Float tmp19 = (a * d);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(333)
								Float ad = tmp19;		HX_STACK_VAR(ad,"ad");
								HX_STACK_LINE(333)
								Float tmp20 = (b * c);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(333)
								Float bc = tmp20;		HX_STACK_VAR(bc,"bc");
								HX_STACK_LINE(333)
								Float tmp21 = (b * d);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(333)
								Float bd = tmp21;		HX_STACK_VAR(bd,"bd");
								HX_STACK_LINE(335)
								Float tmp22 = (c * e);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(335)
								te[(int)0] = tmp22;
								HX_STACK_LINE(336)
								Float tmp23 = f;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(336)
								Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(336)
								te[(int)4] = tmp24;
								HX_STACK_LINE(337)
								Float tmp25 = (d * e);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(337)
								te[(int)8] = tmp25;
								HX_STACK_LINE(339)
								Float tmp26 = (ac * f);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(339)
								Float tmp27 = bd;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(339)
								Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(339)
								te[(int)1] = tmp28;
								HX_STACK_LINE(340)
								Float tmp29 = (a * e);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(340)
								te[(int)5] = tmp29;
								HX_STACK_LINE(341)
								Float tmp30 = (ad * f);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(341)
								Float tmp31 = bc;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(341)
								Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(341)
								te[(int)9] = tmp32;
								HX_STACK_LINE(343)
								Float tmp33 = (bc * f);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(343)
								Float tmp34 = ad;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(343)
								Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(343)
								te[(int)2] = tmp35;
								HX_STACK_LINE(344)
								Float tmp36 = (b * e);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(344)
								te[(int)6] = tmp36;
								HX_STACK_LINE(345)
								Float tmp37 = (bd * f);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(345)
								Float tmp38 = ac;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(345)
								Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(345)
								te[(int)10] = tmp39;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(350)
		te[(int)3] = (int)0;
		HX_STACK_LINE(351)
		te[(int)7] = (int)0;
		HX_STACK_LINE(352)
		te[(int)11] = (int)0;
		HX_STACK_LINE(355)
		te[(int)12] = (int)0;
		HX_STACK_LINE(356)
		te[(int)13] = (int)0;
		HX_STACK_LINE(357)
		te[(int)14] = (int)0;
		HX_STACK_LINE(358)
		te[(int)15] = (int)1;
		HX_STACK_LINE(360)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,makeRotationFromEuler,return )

::phoenix::Matrix Matrix_obj::makeRotationFromQuaternion( ::phoenix::Quaternion q){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationFromQuaternion",0x03148de2,"phoenix.Matrix.makeRotationFromQuaternion","phoenix/Matrix.hx",364,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_LINE(366)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(368)
	Float tmp = (q->x + q->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	Float x2 = tmp;		HX_STACK_VAR(x2,"x2");
	HX_STACK_LINE(368)
	Float tmp1 = (q->y + q->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	Float y2 = tmp1;		HX_STACK_VAR(y2,"y2");
	HX_STACK_LINE(368)
	Float tmp2 = (q->z + q->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(368)
	Float z2 = tmp2;		HX_STACK_VAR(z2,"z2");
	HX_STACK_LINE(369)
	Float tmp3 = (q->x * x2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(369)
	Float xx = tmp3;		HX_STACK_VAR(xx,"xx");
	HX_STACK_LINE(369)
	Float tmp4 = (q->x * y2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(369)
	Float xy = tmp4;		HX_STACK_VAR(xy,"xy");
	HX_STACK_LINE(369)
	Float tmp5 = (q->x * z2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(369)
	Float xz = tmp5;		HX_STACK_VAR(xz,"xz");
	HX_STACK_LINE(370)
	Float tmp6 = (q->y * y2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(370)
	Float yy = tmp6;		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(370)
	Float tmp7 = (q->y * z2);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(370)
	Float yz = tmp7;		HX_STACK_VAR(yz,"yz");
	HX_STACK_LINE(370)
	Float tmp8 = (q->z * z2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(370)
	Float zz = tmp8;		HX_STACK_VAR(zz,"zz");
	HX_STACK_LINE(371)
	Float tmp9 = (q->w * x2);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(371)
	Float wx = tmp9;		HX_STACK_VAR(wx,"wx");
	HX_STACK_LINE(371)
	Float tmp10 = (q->w * y2);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(371)
	Float wy = tmp10;		HX_STACK_VAR(wy,"wy");
	HX_STACK_LINE(371)
	Float tmp11 = (q->w * z2);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(371)
	Float wz = tmp11;		HX_STACK_VAR(wz,"wz");
	HX_STACK_LINE(373)
	Float tmp12 = (yy + zz);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(373)
	Float tmp13 = ((int)1 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(373)
	te[(int)0] = tmp13;
	HX_STACK_LINE(374)
	Float tmp14 = (xy - wz);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(374)
	te[(int)4] = tmp14;
	HX_STACK_LINE(375)
	Float tmp15 = (xz + wy);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(375)
	te[(int)8] = tmp15;
	HX_STACK_LINE(377)
	Float tmp16 = (xy + wz);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(377)
	te[(int)1] = tmp16;
	HX_STACK_LINE(378)
	Float tmp17 = (xx + zz);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(378)
	Float tmp18 = ((int)1 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(378)
	te[(int)5] = tmp18;
	HX_STACK_LINE(379)
	Float tmp19 = (yz - wx);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(379)
	te[(int)9] = tmp19;
	HX_STACK_LINE(381)
	Float tmp20 = (xz - wy);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(381)
	te[(int)2] = tmp20;
	HX_STACK_LINE(382)
	Float tmp21 = (yz + wx);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(382)
	te[(int)6] = tmp21;
	HX_STACK_LINE(383)
	Float tmp22 = (xx + yy);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(383)
	Float tmp23 = ((int)1 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(383)
	te[(int)10] = tmp23;
	HX_STACK_LINE(386)
	te[(int)3] = (int)0;
	HX_STACK_LINE(387)
	te[(int)7] = (int)0;
	HX_STACK_LINE(388)
	te[(int)11] = (int)0;
	HX_STACK_LINE(391)
	te[(int)12] = (int)0;
	HX_STACK_LINE(392)
	te[(int)13] = (int)0;
	HX_STACK_LINE(393)
	te[(int)14] = (int)0;
	HX_STACK_LINE(394)
	te[(int)15] = (int)1;
	HX_STACK_LINE(396)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,makeRotationFromQuaternion,return )

::phoenix::Matrix Matrix_obj::lookAt( ::phoenix::Vector _eye,::phoenix::Vector _target,::phoenix::Vector _up){
	HX_STACK_FRAME("phoenix.Matrix","lookAt",0xa8305680,"phoenix.Matrix.lookAt","phoenix/Matrix.hx",401,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_eye,"_eye")
	HX_STACK_ARG(_target,"_target")
	HX_STACK_ARG(_up,"_up")
	HX_STACK_LINE(403)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	::phoenix::Vector _x = tmp;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(404)
	::phoenix::Vector tmp1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	::phoenix::Vector _y = tmp1;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(405)
	::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	::phoenix::Vector _z = tmp2;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(407)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(409)
	::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(409)
	{
		HX_STACK_LINE(409)
		Float tmp4 = (_target->x - _eye->x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(409)
		Float tmp5 = (_target->y - _eye->y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(409)
		Float tmp6 = (_target->z - _eye->z);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(409)
		::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp4,tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(409)
		::phoenix::Vector _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(409)
		{
			HX_STACK_LINE(409)
			Float tmp8 = (_this->x * _this->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(409)
			Float tmp9 = (_this->y * _this->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(409)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(409)
			Float tmp11 = (_this->z * _this->z);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(409)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(409)
			Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(409)
			Float b = tmp13;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(409)
			Float tmp14 = (Float(_this->x) / Float(b));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(409)
			Float tmp15 = (Float(_this->y) / Float(b));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(409)
			Float tmp16 = (Float(_this->z) / Float(b));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(409)
			tmp3 = ::phoenix::Vector_obj::__new(tmp14,tmp15,tmp16,null());
		}
	}
	HX_STACK_LINE(409)
	_z = tmp3;
	HX_STACK_LINE(411)
	Float tmp4 = (_z->x * _z->x);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(411)
	Float tmp5 = (_z->y * _z->y);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(411)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(411)
	Float tmp7 = (_z->z * _z->z);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(411)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(411)
	Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(411)
	bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(411)
	if ((tmp10)){
		HX_STACK_LINE(412)
		_z->z = (int)1;
		HX_STACK_LINE(412)
		bool tmp11 = _z->_construct;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(412)
		if ((tmp11)){
			HX_STACK_LINE(412)
			_z->z;
		}
		else{
			HX_STACK_LINE(412)
			bool tmp12 = (_z->listen_z != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(412)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(412)
			if ((tmp12)){
				HX_STACK_LINE(412)
				bool tmp14 = _z->ignore_listeners;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(412)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(412)
				tmp13 = !(tmp15);
			}
			else{
				HX_STACK_LINE(412)
				tmp13 = false;
			}
			HX_STACK_LINE(412)
			if ((tmp13)){
				HX_STACK_LINE(412)
				_z->listen_z((int)1);
			}
			HX_STACK_LINE(412)
			_z->z;
		}
	}
	HX_STACK_LINE(415)
	::phoenix::Vector tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(415)
	{
		HX_STACK_LINE(415)
		Float tmp12 = (_up->y * _z->z);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(415)
		Float tmp13 = (_up->z * _z->y);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(415)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(415)
		Float tmp15 = (_up->z * _z->x);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(415)
		Float tmp16 = (_up->x * _z->z);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(415)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(415)
		Float tmp18 = (_up->x * _z->y);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(415)
		Float tmp19 = (_up->y * _z->x);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(415)
		Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(415)
		::phoenix::Vector tmp21 = ::phoenix::Vector_obj::__new(tmp14,tmp17,tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(415)
		::phoenix::Vector _this = tmp21;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			Float tmp22 = (_this->x * _this->x);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(415)
			Float tmp23 = (_this->y * _this->y);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(415)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(415)
			Float tmp25 = (_this->z * _this->z);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(415)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(415)
			Float tmp27 = ::Math_obj::sqrt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(415)
			Float b = tmp27;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(415)
			Float tmp28 = (Float(_this->x) / Float(b));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(415)
			Float tmp29 = (Float(_this->y) / Float(b));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(415)
			Float tmp30 = (Float(_this->z) / Float(b));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(415)
			tmp11 = ::phoenix::Vector_obj::__new(tmp28,tmp29,tmp30,null());
		}
	}
	HX_STACK_LINE(415)
	_x = tmp11;
	HX_STACK_LINE(417)
	Float tmp12 = (_x->x * _x->x);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(417)
	Float tmp13 = (_x->y * _x->y);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(417)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(417)
	Float tmp15 = (_x->z * _x->z);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(417)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(417)
	Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(417)
	bool tmp18 = (tmp17 == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(417)
	if ((tmp18)){
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			::phoenix::Vector _g = _z;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(418)
			{
				HX_STACK_LINE(418)
				Float tmp19 = (_g->x + ((Float)0.0001));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(418)
				Float _x1 = tmp19;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(418)
				_g->x = _x1;
				HX_STACK_LINE(418)
				bool tmp20 = _g->_construct;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(418)
				if ((tmp20)){
					HX_STACK_LINE(418)
					_g->x;
				}
				else{
					HX_STACK_LINE(418)
					bool tmp21 = (_g->listen_x != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(418)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(418)
					if ((tmp21)){
						HX_STACK_LINE(418)
						bool tmp23 = _g->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(418)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(418)
						tmp22 = !(tmp24);
					}
					else{
						HX_STACK_LINE(418)
						tmp22 = false;
					}
					HX_STACK_LINE(418)
					if ((tmp22)){
						HX_STACK_LINE(418)
						Float tmp23 = _x1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(418)
						_g->listen_x(tmp23);
					}
					HX_STACK_LINE(418)
					_g->x;
				}
			}
		}
		HX_STACK_LINE(419)
		::phoenix::Vector tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			Float tmp20 = (_up->y * _z->z);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(419)
			Float tmp21 = (_up->z * _z->y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(419)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(419)
			Float tmp23 = (_up->z * _z->x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(419)
			Float tmp24 = (_up->x * _z->z);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(419)
			Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(419)
			Float tmp26 = (_up->x * _z->y);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(419)
			Float tmp27 = (_up->y * _z->x);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(419)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(419)
			::phoenix::Vector tmp29 = ::phoenix::Vector_obj::__new(tmp22,tmp25,tmp28,null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(419)
			::phoenix::Vector _this = tmp29;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				Float tmp30 = (_this->x * _this->x);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(419)
				Float tmp31 = (_this->y * _this->y);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(419)
				Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(419)
				Float tmp33 = (_this->z * _this->z);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(419)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(419)
				Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(419)
				Float b = tmp35;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(419)
				Float tmp36 = (Float(_this->x) / Float(b));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(419)
				Float tmp37 = (Float(_this->y) / Float(b));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(419)
				Float tmp38 = (Float(_this->z) / Float(b));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(419)
				tmp19 = ::phoenix::Vector_obj::__new(tmp36,tmp37,tmp38,null());
			}
		}
		HX_STACK_LINE(419)
		_x = tmp19;
	}
	HX_STACK_LINE(422)
	Float tmp19 = (_z->y * _x->z);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(422)
	Float tmp20 = (_z->z * _x->y);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(422)
	Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(422)
	Float tmp22 = (_z->z * _x->x);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(422)
	Float tmp23 = (_z->x * _x->z);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(422)
	Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(422)
	Float tmp25 = (_z->x * _x->y);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(422)
	Float tmp26 = (_z->y * _x->x);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(422)
	Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(422)
	::phoenix::Vector tmp28 = ::phoenix::Vector_obj::__new(tmp21,tmp24,tmp27,null());		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(422)
	_y = tmp28;
	HX_STACK_LINE(424)
	Float tmp29 = _x->x;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(424)
	te[(int)0] = tmp29;
	HX_STACK_LINE(424)
	Float tmp30 = _y->x;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(424)
	te[(int)4] = tmp30;
	HX_STACK_LINE(424)
	Float tmp31 = _z->x;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(424)
	te[(int)8] = tmp31;
	HX_STACK_LINE(425)
	Float tmp32 = _x->y;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(425)
	te[(int)1] = tmp32;
	HX_STACK_LINE(425)
	Float tmp33 = _y->y;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(425)
	te[(int)5] = tmp33;
	HX_STACK_LINE(425)
	Float tmp34 = _z->y;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(425)
	te[(int)9] = tmp34;
	HX_STACK_LINE(426)
	Float tmp35 = _x->z;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(426)
	te[(int)2] = tmp35;
	HX_STACK_LINE(426)
	Float tmp36 = _y->z;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(426)
	te[(int)6] = tmp36;
	HX_STACK_LINE(426)
	Float tmp37 = _z->z;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(426)
	te[(int)10] = tmp37;
	HX_STACK_LINE(428)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,lookAt,return )

::phoenix::Matrix Matrix_obj::multiply( ::phoenix::Matrix _m){
	HX_STACK_FRAME("phoenix.Matrix","multiply",0x9e7d32f2,"phoenix.Matrix.multiply","phoenix/Matrix.hx",433,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(435)
	::phoenix::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(435)
		Array< Float > ae = this->elements;		HX_STACK_VAR(ae,"ae");
		HX_STACK_LINE(435)
		Array< Float > be = _m->elements;		HX_STACK_VAR(be,"be");
		HX_STACK_LINE(435)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(435)
		Float tmp1 = ae->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(435)
		Float a11 = tmp1;		HX_STACK_VAR(a11,"a11");
		HX_STACK_LINE(435)
		Float tmp2 = ae->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(435)
		Float a12 = tmp2;		HX_STACK_VAR(a12,"a12");
		HX_STACK_LINE(435)
		Float tmp3 = ae->__get((int)8);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		Float a13 = tmp3;		HX_STACK_VAR(a13,"a13");
		HX_STACK_LINE(435)
		Float tmp4 = ae->__get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(435)
		Float a14 = tmp4;		HX_STACK_VAR(a14,"a14");
		HX_STACK_LINE(435)
		Float tmp5 = ae->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(435)
		Float a21 = tmp5;		HX_STACK_VAR(a21,"a21");
		HX_STACK_LINE(435)
		Float tmp6 = ae->__get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(435)
		Float a22 = tmp6;		HX_STACK_VAR(a22,"a22");
		HX_STACK_LINE(435)
		Float tmp7 = ae->__get((int)9);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(435)
		Float a23 = tmp7;		HX_STACK_VAR(a23,"a23");
		HX_STACK_LINE(435)
		Float tmp8 = ae->__get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(435)
		Float a24 = tmp8;		HX_STACK_VAR(a24,"a24");
		HX_STACK_LINE(435)
		Float tmp9 = ae->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(435)
		Float a31 = tmp9;		HX_STACK_VAR(a31,"a31");
		HX_STACK_LINE(435)
		Float tmp10 = ae->__get((int)6);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(435)
		Float a32 = tmp10;		HX_STACK_VAR(a32,"a32");
		HX_STACK_LINE(435)
		Float tmp11 = ae->__get((int)10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(435)
		Float a33 = tmp11;		HX_STACK_VAR(a33,"a33");
		HX_STACK_LINE(435)
		Float tmp12 = ae->__get((int)14);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(435)
		Float a34 = tmp12;		HX_STACK_VAR(a34,"a34");
		HX_STACK_LINE(435)
		Float tmp13 = ae->__get((int)3);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(435)
		Float a41 = tmp13;		HX_STACK_VAR(a41,"a41");
		HX_STACK_LINE(435)
		Float tmp14 = ae->__get((int)7);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(435)
		Float a42 = tmp14;		HX_STACK_VAR(a42,"a42");
		HX_STACK_LINE(435)
		Float tmp15 = ae->__get((int)11);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(435)
		Float a43 = tmp15;		HX_STACK_VAR(a43,"a43");
		HX_STACK_LINE(435)
		Float tmp16 = ae->__get((int)15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(435)
		Float a44 = tmp16;		HX_STACK_VAR(a44,"a44");
		HX_STACK_LINE(435)
		Float tmp17 = be->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(435)
		Float b11 = tmp17;		HX_STACK_VAR(b11,"b11");
		HX_STACK_LINE(435)
		Float tmp18 = be->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(435)
		Float b12 = tmp18;		HX_STACK_VAR(b12,"b12");
		HX_STACK_LINE(435)
		Float tmp19 = be->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(435)
		Float b13 = tmp19;		HX_STACK_VAR(b13,"b13");
		HX_STACK_LINE(435)
		Float tmp20 = be->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(435)
		Float b14 = tmp20;		HX_STACK_VAR(b14,"b14");
		HX_STACK_LINE(435)
		Float tmp21 = be->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(435)
		Float b21 = tmp21;		HX_STACK_VAR(b21,"b21");
		HX_STACK_LINE(435)
		Float tmp22 = be->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(435)
		Float b22 = tmp22;		HX_STACK_VAR(b22,"b22");
		HX_STACK_LINE(435)
		Float tmp23 = be->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(435)
		Float b23 = tmp23;		HX_STACK_VAR(b23,"b23");
		HX_STACK_LINE(435)
		Float tmp24 = be->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(435)
		Float b24 = tmp24;		HX_STACK_VAR(b24,"b24");
		HX_STACK_LINE(435)
		Float tmp25 = be->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(435)
		Float b31 = tmp25;		HX_STACK_VAR(b31,"b31");
		HX_STACK_LINE(435)
		Float tmp26 = be->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(435)
		Float b32 = tmp26;		HX_STACK_VAR(b32,"b32");
		HX_STACK_LINE(435)
		Float tmp27 = be->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(435)
		Float b33 = tmp27;		HX_STACK_VAR(b33,"b33");
		HX_STACK_LINE(435)
		Float tmp28 = be->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(435)
		Float b34 = tmp28;		HX_STACK_VAR(b34,"b34");
		HX_STACK_LINE(435)
		Float tmp29 = be->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(435)
		Float b41 = tmp29;		HX_STACK_VAR(b41,"b41");
		HX_STACK_LINE(435)
		Float tmp30 = be->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(435)
		Float b42 = tmp30;		HX_STACK_VAR(b42,"b42");
		HX_STACK_LINE(435)
		Float tmp31 = be->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(435)
		Float b43 = tmp31;		HX_STACK_VAR(b43,"b43");
		HX_STACK_LINE(435)
		Float tmp32 = be->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(435)
		Float b44 = tmp32;		HX_STACK_VAR(b44,"b44");
		HX_STACK_LINE(435)
		Float tmp33 = (a11 * b11);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(435)
		Float tmp34 = (a12 * b21);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(435)
		Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(435)
		Float tmp36 = (a13 * b31);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(435)
		Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(435)
		Float tmp38 = (a14 * b41);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(435)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(435)
		te[(int)0] = tmp39;
		HX_STACK_LINE(435)
		Float tmp40 = (a11 * b12);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(435)
		Float tmp41 = (a12 * b22);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(435)
		Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(435)
		Float tmp43 = (a13 * b32);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(435)
		Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(435)
		Float tmp45 = (a14 * b42);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(435)
		Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(435)
		te[(int)4] = tmp46;
		HX_STACK_LINE(435)
		Float tmp47 = (a11 * b13);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(435)
		Float tmp48 = (a12 * b23);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(435)
		Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(435)
		Float tmp50 = (a13 * b33);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(435)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(435)
		Float tmp52 = (a14 * b43);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(435)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(435)
		te[(int)8] = tmp53;
		HX_STACK_LINE(435)
		Float tmp54 = (a11 * b14);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(435)
		Float tmp55 = (a12 * b24);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(435)
		Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(435)
		Float tmp57 = (a13 * b34);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(435)
		Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(435)
		Float tmp59 = (a14 * b44);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(435)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(435)
		te[(int)12] = tmp60;
		HX_STACK_LINE(435)
		Float tmp61 = (a21 * b11);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(435)
		Float tmp62 = (a22 * b21);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(435)
		Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(435)
		Float tmp64 = (a23 * b31);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(435)
		Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(435)
		Float tmp66 = (a24 * b41);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(435)
		Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(435)
		te[(int)1] = tmp67;
		HX_STACK_LINE(435)
		Float tmp68 = (a21 * b12);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(435)
		Float tmp69 = (a22 * b22);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(435)
		Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(435)
		Float tmp71 = (a23 * b32);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(435)
		Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(435)
		Float tmp73 = (a24 * b42);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(435)
		Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(435)
		te[(int)5] = tmp74;
		HX_STACK_LINE(435)
		Float tmp75 = (a21 * b13);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(435)
		Float tmp76 = (a22 * b23);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(435)
		Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(435)
		Float tmp78 = (a23 * b33);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(435)
		Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(435)
		Float tmp80 = (a24 * b43);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(435)
		Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(435)
		te[(int)9] = tmp81;
		HX_STACK_LINE(435)
		Float tmp82 = (a21 * b14);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(435)
		Float tmp83 = (a22 * b24);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(435)
		Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(435)
		Float tmp85 = (a23 * b34);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(435)
		Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(435)
		Float tmp87 = (a24 * b44);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(435)
		Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(435)
		te[(int)13] = tmp88;
		HX_STACK_LINE(435)
		Float tmp89 = (a31 * b11);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(435)
		Float tmp90 = (a32 * b21);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(435)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(435)
		Float tmp92 = (a33 * b31);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(435)
		Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(435)
		Float tmp94 = (a34 * b41);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(435)
		Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(435)
		te[(int)2] = tmp95;
		HX_STACK_LINE(435)
		Float tmp96 = (a31 * b12);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(435)
		Float tmp97 = (a32 * b22);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(435)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(435)
		Float tmp99 = (a33 * b32);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(435)
		Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(435)
		Float tmp101 = (a34 * b42);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(435)
		Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(435)
		te[(int)6] = tmp102;
		HX_STACK_LINE(435)
		Float tmp103 = (a31 * b13);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(435)
		Float tmp104 = (a32 * b23);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(435)
		Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(435)
		Float tmp106 = (a33 * b33);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(435)
		Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(435)
		Float tmp108 = (a34 * b43);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(435)
		Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(435)
		te[(int)10] = tmp109;
		HX_STACK_LINE(435)
		Float tmp110 = (a31 * b14);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(435)
		Float tmp111 = (a32 * b24);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(435)
		Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(435)
		Float tmp113 = (a33 * b34);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(435)
		Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(435)
		Float tmp115 = (a34 * b44);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(435)
		Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(435)
		te[(int)14] = tmp116;
		HX_STACK_LINE(435)
		Float tmp117 = (a41 * b11);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(435)
		Float tmp118 = (a42 * b21);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(435)
		Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(435)
		Float tmp120 = (a43 * b31);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(435)
		Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(435)
		Float tmp122 = (a44 * b41);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(435)
		Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(435)
		te[(int)3] = tmp123;
		HX_STACK_LINE(435)
		Float tmp124 = (a41 * b12);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(435)
		Float tmp125 = (a42 * b22);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(435)
		Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(435)
		Float tmp127 = (a43 * b32);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(435)
		Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(435)
		Float tmp129 = (a44 * b42);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(435)
		Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(435)
		te[(int)7] = tmp130;
		HX_STACK_LINE(435)
		Float tmp131 = (a41 * b13);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(435)
		Float tmp132 = (a42 * b23);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(435)
		Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(435)
		Float tmp134 = (a43 * b33);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(435)
		Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(435)
		Float tmp136 = (a44 * b43);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(435)
		Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(435)
		te[(int)11] = tmp137;
		HX_STACK_LINE(435)
		Float tmp138 = (a41 * b14);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(435)
		Float tmp139 = (a42 * b24);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(435)
		Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(435)
		Float tmp141 = (a43 * b34);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(435)
		Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(435)
		Float tmp143 = (a44 * b44);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(435)
		Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(435)
		te[(int)15] = tmp144;
		HX_STACK_LINE(435)
		tmp = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(435)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiply,return )

::phoenix::Matrix Matrix_obj::multiplyMatrices( ::phoenix::Matrix _a,::phoenix::Matrix _b){
	HX_STACK_FRAME("phoenix.Matrix","multiplyMatrices",0xb2c9a2ac,"phoenix.Matrix.multiplyMatrices","phoenix/Matrix.hx",440,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(442)
	Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
	HX_STACK_LINE(443)
	Array< Float > be = _b->elements;		HX_STACK_VAR(be,"be");
	HX_STACK_LINE(444)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(446)
	Float tmp = ae->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(446)
	Float a11 = tmp;		HX_STACK_VAR(a11,"a11");
	HX_STACK_LINE(446)
	Float tmp1 = ae->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(446)
	Float a12 = tmp1;		HX_STACK_VAR(a12,"a12");
	HX_STACK_LINE(446)
	Float tmp2 = ae->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(446)
	Float a13 = tmp2;		HX_STACK_VAR(a13,"a13");
	HX_STACK_LINE(446)
	Float tmp3 = ae->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(446)
	Float a14 = tmp3;		HX_STACK_VAR(a14,"a14");
	HX_STACK_LINE(447)
	Float tmp4 = ae->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(447)
	Float a21 = tmp4;		HX_STACK_VAR(a21,"a21");
	HX_STACK_LINE(447)
	Float tmp5 = ae->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(447)
	Float a22 = tmp5;		HX_STACK_VAR(a22,"a22");
	HX_STACK_LINE(447)
	Float tmp6 = ae->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(447)
	Float a23 = tmp6;		HX_STACK_VAR(a23,"a23");
	HX_STACK_LINE(447)
	Float tmp7 = ae->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(447)
	Float a24 = tmp7;		HX_STACK_VAR(a24,"a24");
	HX_STACK_LINE(448)
	Float tmp8 = ae->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(448)
	Float a31 = tmp8;		HX_STACK_VAR(a31,"a31");
	HX_STACK_LINE(448)
	Float tmp9 = ae->__get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(448)
	Float a32 = tmp9;		HX_STACK_VAR(a32,"a32");
	HX_STACK_LINE(448)
	Float tmp10 = ae->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(448)
	Float a33 = tmp10;		HX_STACK_VAR(a33,"a33");
	HX_STACK_LINE(448)
	Float tmp11 = ae->__get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(448)
	Float a34 = tmp11;		HX_STACK_VAR(a34,"a34");
	HX_STACK_LINE(449)
	Float tmp12 = ae->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(449)
	Float a41 = tmp12;		HX_STACK_VAR(a41,"a41");
	HX_STACK_LINE(449)
	Float tmp13 = ae->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(449)
	Float a42 = tmp13;		HX_STACK_VAR(a42,"a42");
	HX_STACK_LINE(449)
	Float tmp14 = ae->__get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(449)
	Float a43 = tmp14;		HX_STACK_VAR(a43,"a43");
	HX_STACK_LINE(449)
	Float tmp15 = ae->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(449)
	Float a44 = tmp15;		HX_STACK_VAR(a44,"a44");
	HX_STACK_LINE(451)
	Float tmp16 = be->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(451)
	Float b11 = tmp16;		HX_STACK_VAR(b11,"b11");
	HX_STACK_LINE(451)
	Float tmp17 = be->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(451)
	Float b12 = tmp17;		HX_STACK_VAR(b12,"b12");
	HX_STACK_LINE(451)
	Float tmp18 = be->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(451)
	Float b13 = tmp18;		HX_STACK_VAR(b13,"b13");
	HX_STACK_LINE(451)
	Float tmp19 = be->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(451)
	Float b14 = tmp19;		HX_STACK_VAR(b14,"b14");
	HX_STACK_LINE(452)
	Float tmp20 = be->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(452)
	Float b21 = tmp20;		HX_STACK_VAR(b21,"b21");
	HX_STACK_LINE(452)
	Float tmp21 = be->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(452)
	Float b22 = tmp21;		HX_STACK_VAR(b22,"b22");
	HX_STACK_LINE(452)
	Float tmp22 = be->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(452)
	Float b23 = tmp22;		HX_STACK_VAR(b23,"b23");
	HX_STACK_LINE(452)
	Float tmp23 = be->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(452)
	Float b24 = tmp23;		HX_STACK_VAR(b24,"b24");
	HX_STACK_LINE(453)
	Float tmp24 = be->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(453)
	Float b31 = tmp24;		HX_STACK_VAR(b31,"b31");
	HX_STACK_LINE(453)
	Float tmp25 = be->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(453)
	Float b32 = tmp25;		HX_STACK_VAR(b32,"b32");
	HX_STACK_LINE(453)
	Float tmp26 = be->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(453)
	Float b33 = tmp26;		HX_STACK_VAR(b33,"b33");
	HX_STACK_LINE(453)
	Float tmp27 = be->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(453)
	Float b34 = tmp27;		HX_STACK_VAR(b34,"b34");
	HX_STACK_LINE(454)
	Float tmp28 = be->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(454)
	Float b41 = tmp28;		HX_STACK_VAR(b41,"b41");
	HX_STACK_LINE(454)
	Float tmp29 = be->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(454)
	Float b42 = tmp29;		HX_STACK_VAR(b42,"b42");
	HX_STACK_LINE(454)
	Float tmp30 = be->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(454)
	Float b43 = tmp30;		HX_STACK_VAR(b43,"b43");
	HX_STACK_LINE(454)
	Float tmp31 = be->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(454)
	Float b44 = tmp31;		HX_STACK_VAR(b44,"b44");
	HX_STACK_LINE(456)
	Float tmp32 = (a11 * b11);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(456)
	Float tmp33 = (a12 * b21);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(456)
	Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(456)
	Float tmp35 = (a13 * b31);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(456)
	Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(456)
	Float tmp37 = (a14 * b41);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(456)
	Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(456)
	te[(int)0] = tmp38;
	HX_STACK_LINE(457)
	Float tmp39 = (a11 * b12);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(457)
	Float tmp40 = (a12 * b22);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(457)
	Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(457)
	Float tmp42 = (a13 * b32);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(457)
	Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(457)
	Float tmp44 = (a14 * b42);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(457)
	Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(457)
	te[(int)4] = tmp45;
	HX_STACK_LINE(458)
	Float tmp46 = (a11 * b13);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(458)
	Float tmp47 = (a12 * b23);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(458)
	Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(458)
	Float tmp49 = (a13 * b33);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(458)
	Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(458)
	Float tmp51 = (a14 * b43);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(458)
	Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(458)
	te[(int)8] = tmp52;
	HX_STACK_LINE(459)
	Float tmp53 = (a11 * b14);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(459)
	Float tmp54 = (a12 * b24);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(459)
	Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(459)
	Float tmp56 = (a13 * b34);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(459)
	Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(459)
	Float tmp58 = (a14 * b44);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(459)
	Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(459)
	te[(int)12] = tmp59;
	HX_STACK_LINE(461)
	Float tmp60 = (a21 * b11);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(461)
	Float tmp61 = (a22 * b21);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(461)
	Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(461)
	Float tmp63 = (a23 * b31);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(461)
	Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(461)
	Float tmp65 = (a24 * b41);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(461)
	Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(461)
	te[(int)1] = tmp66;
	HX_STACK_LINE(462)
	Float tmp67 = (a21 * b12);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(462)
	Float tmp68 = (a22 * b22);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(462)
	Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(462)
	Float tmp70 = (a23 * b32);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(462)
	Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(462)
	Float tmp72 = (a24 * b42);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(462)
	Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(462)
	te[(int)5] = tmp73;
	HX_STACK_LINE(463)
	Float tmp74 = (a21 * b13);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(463)
	Float tmp75 = (a22 * b23);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(463)
	Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(463)
	Float tmp77 = (a23 * b33);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(463)
	Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(463)
	Float tmp79 = (a24 * b43);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(463)
	Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(463)
	te[(int)9] = tmp80;
	HX_STACK_LINE(464)
	Float tmp81 = (a21 * b14);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(464)
	Float tmp82 = (a22 * b24);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(464)
	Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(464)
	Float tmp84 = (a23 * b34);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(464)
	Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(464)
	Float tmp86 = (a24 * b44);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(464)
	Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(464)
	te[(int)13] = tmp87;
	HX_STACK_LINE(466)
	Float tmp88 = (a31 * b11);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(466)
	Float tmp89 = (a32 * b21);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(466)
	Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(466)
	Float tmp91 = (a33 * b31);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(466)
	Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(466)
	Float tmp93 = (a34 * b41);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(466)
	Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(466)
	te[(int)2] = tmp94;
	HX_STACK_LINE(467)
	Float tmp95 = (a31 * b12);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(467)
	Float tmp96 = (a32 * b22);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(467)
	Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(467)
	Float tmp98 = (a33 * b32);		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(467)
	Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(467)
	Float tmp100 = (a34 * b42);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(467)
	Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(467)
	te[(int)6] = tmp101;
	HX_STACK_LINE(468)
	Float tmp102 = (a31 * b13);		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(468)
	Float tmp103 = (a32 * b23);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(468)
	Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(468)
	Float tmp105 = (a33 * b33);		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(468)
	Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(468)
	Float tmp107 = (a34 * b43);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(468)
	Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(468)
	te[(int)10] = tmp108;
	HX_STACK_LINE(469)
	Float tmp109 = (a31 * b14);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(469)
	Float tmp110 = (a32 * b24);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(469)
	Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(469)
	Float tmp112 = (a33 * b34);		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(469)
	Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(469)
	Float tmp114 = (a34 * b44);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(469)
	Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(469)
	te[(int)14] = tmp115;
	HX_STACK_LINE(471)
	Float tmp116 = (a41 * b11);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(471)
	Float tmp117 = (a42 * b21);		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(471)
	Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(471)
	Float tmp119 = (a43 * b31);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(471)
	Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(471)
	Float tmp121 = (a44 * b41);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(471)
	Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(471)
	te[(int)3] = tmp122;
	HX_STACK_LINE(472)
	Float tmp123 = (a41 * b12);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(472)
	Float tmp124 = (a42 * b22);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(472)
	Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(472)
	Float tmp126 = (a43 * b32);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(472)
	Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(472)
	Float tmp128 = (a44 * b42);		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(472)
	Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(472)
	te[(int)7] = tmp129;
	HX_STACK_LINE(473)
	Float tmp130 = (a41 * b13);		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(473)
	Float tmp131 = (a42 * b23);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(473)
	Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(473)
	Float tmp133 = (a43 * b33);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(473)
	Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(473)
	Float tmp135 = (a44 * b43);		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(473)
	Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(473)
	te[(int)11] = tmp136;
	HX_STACK_LINE(474)
	Float tmp137 = (a41 * b14);		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(474)
	Float tmp138 = (a42 * b24);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(474)
	Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(474)
	Float tmp140 = (a43 * b34);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(474)
	Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(474)
	Float tmp142 = (a44 * b44);		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(474)
	Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(474)
	te[(int)15] = tmp143;
	HX_STACK_LINE(476)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,multiplyMatrices,return )

::phoenix::Matrix Matrix_obj::multiplyToArray( ::phoenix::Matrix _a,::phoenix::Matrix _b,Array< Float > _r){
	HX_STACK_FRAME("phoenix.Matrix","multiplyToArray",0x8681d14c,"phoenix.Matrix.multiplyToArray","phoenix/Matrix.hx",481,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_ARG(_r,"_r")
	HX_STACK_LINE(483)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(485)
	{
		HX_STACK_LINE(485)
		Array< Float > ae = _a->elements;		HX_STACK_VAR(ae,"ae");
		HX_STACK_LINE(485)
		Array< Float > be = _b->elements;		HX_STACK_VAR(be,"be");
		HX_STACK_LINE(485)
		Array< Float > te1 = this->elements;		HX_STACK_VAR(te1,"te1");
		HX_STACK_LINE(485)
		Float tmp = ae->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(485)
		Float a11 = tmp;		HX_STACK_VAR(a11,"a11");
		HX_STACK_LINE(485)
		Float tmp1 = ae->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(485)
		Float a12 = tmp1;		HX_STACK_VAR(a12,"a12");
		HX_STACK_LINE(485)
		Float tmp2 = ae->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(485)
		Float a13 = tmp2;		HX_STACK_VAR(a13,"a13");
		HX_STACK_LINE(485)
		Float tmp3 = ae->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(485)
		Float a14 = tmp3;		HX_STACK_VAR(a14,"a14");
		HX_STACK_LINE(485)
		Float tmp4 = ae->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(485)
		Float a21 = tmp4;		HX_STACK_VAR(a21,"a21");
		HX_STACK_LINE(485)
		Float tmp5 = ae->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(485)
		Float a22 = tmp5;		HX_STACK_VAR(a22,"a22");
		HX_STACK_LINE(485)
		Float tmp6 = ae->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(485)
		Float a23 = tmp6;		HX_STACK_VAR(a23,"a23");
		HX_STACK_LINE(485)
		Float tmp7 = ae->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(485)
		Float a24 = tmp7;		HX_STACK_VAR(a24,"a24");
		HX_STACK_LINE(485)
		Float tmp8 = ae->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(485)
		Float a31 = tmp8;		HX_STACK_VAR(a31,"a31");
		HX_STACK_LINE(485)
		Float tmp9 = ae->__get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(485)
		Float a32 = tmp9;		HX_STACK_VAR(a32,"a32");
		HX_STACK_LINE(485)
		Float tmp10 = ae->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(485)
		Float a33 = tmp10;		HX_STACK_VAR(a33,"a33");
		HX_STACK_LINE(485)
		Float tmp11 = ae->__get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(485)
		Float a34 = tmp11;		HX_STACK_VAR(a34,"a34");
		HX_STACK_LINE(485)
		Float tmp12 = ae->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(485)
		Float a41 = tmp12;		HX_STACK_VAR(a41,"a41");
		HX_STACK_LINE(485)
		Float tmp13 = ae->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(485)
		Float a42 = tmp13;		HX_STACK_VAR(a42,"a42");
		HX_STACK_LINE(485)
		Float tmp14 = ae->__get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(485)
		Float a43 = tmp14;		HX_STACK_VAR(a43,"a43");
		HX_STACK_LINE(485)
		Float tmp15 = ae->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(485)
		Float a44 = tmp15;		HX_STACK_VAR(a44,"a44");
		HX_STACK_LINE(485)
		Float tmp16 = be->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(485)
		Float b11 = tmp16;		HX_STACK_VAR(b11,"b11");
		HX_STACK_LINE(485)
		Float tmp17 = be->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(485)
		Float b12 = tmp17;		HX_STACK_VAR(b12,"b12");
		HX_STACK_LINE(485)
		Float tmp18 = be->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(485)
		Float b13 = tmp18;		HX_STACK_VAR(b13,"b13");
		HX_STACK_LINE(485)
		Float tmp19 = be->__get((int)12);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(485)
		Float b14 = tmp19;		HX_STACK_VAR(b14,"b14");
		HX_STACK_LINE(485)
		Float tmp20 = be->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(485)
		Float b21 = tmp20;		HX_STACK_VAR(b21,"b21");
		HX_STACK_LINE(485)
		Float tmp21 = be->__get((int)5);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(485)
		Float b22 = tmp21;		HX_STACK_VAR(b22,"b22");
		HX_STACK_LINE(485)
		Float tmp22 = be->__get((int)9);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(485)
		Float b23 = tmp22;		HX_STACK_VAR(b23,"b23");
		HX_STACK_LINE(485)
		Float tmp23 = be->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(485)
		Float b24 = tmp23;		HX_STACK_VAR(b24,"b24");
		HX_STACK_LINE(485)
		Float tmp24 = be->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(485)
		Float b31 = tmp24;		HX_STACK_VAR(b31,"b31");
		HX_STACK_LINE(485)
		Float tmp25 = be->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(485)
		Float b32 = tmp25;		HX_STACK_VAR(b32,"b32");
		HX_STACK_LINE(485)
		Float tmp26 = be->__get((int)10);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(485)
		Float b33 = tmp26;		HX_STACK_VAR(b33,"b33");
		HX_STACK_LINE(485)
		Float tmp27 = be->__get((int)14);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(485)
		Float b34 = tmp27;		HX_STACK_VAR(b34,"b34");
		HX_STACK_LINE(485)
		Float tmp28 = be->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(485)
		Float b41 = tmp28;		HX_STACK_VAR(b41,"b41");
		HX_STACK_LINE(485)
		Float tmp29 = be->__get((int)7);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(485)
		Float b42 = tmp29;		HX_STACK_VAR(b42,"b42");
		HX_STACK_LINE(485)
		Float tmp30 = be->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(485)
		Float b43 = tmp30;		HX_STACK_VAR(b43,"b43");
		HX_STACK_LINE(485)
		Float tmp31 = be->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(485)
		Float b44 = tmp31;		HX_STACK_VAR(b44,"b44");
		HX_STACK_LINE(485)
		Float tmp32 = (a11 * b11);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(485)
		Float tmp33 = (a12 * b21);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(485)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(485)
		Float tmp35 = (a13 * b31);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(485)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(485)
		Float tmp37 = (a14 * b41);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(485)
		Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(485)
		te1[(int)0] = tmp38;
		HX_STACK_LINE(485)
		Float tmp39 = (a11 * b12);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(485)
		Float tmp40 = (a12 * b22);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(485)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(485)
		Float tmp42 = (a13 * b32);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(485)
		Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(485)
		Float tmp44 = (a14 * b42);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(485)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(485)
		te1[(int)4] = tmp45;
		HX_STACK_LINE(485)
		Float tmp46 = (a11 * b13);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(485)
		Float tmp47 = (a12 * b23);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(485)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(485)
		Float tmp49 = (a13 * b33);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(485)
		Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(485)
		Float tmp51 = (a14 * b43);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(485)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(485)
		te1[(int)8] = tmp52;
		HX_STACK_LINE(485)
		Float tmp53 = (a11 * b14);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(485)
		Float tmp54 = (a12 * b24);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(485)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(485)
		Float tmp56 = (a13 * b34);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(485)
		Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(485)
		Float tmp58 = (a14 * b44);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(485)
		Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(485)
		te1[(int)12] = tmp59;
		HX_STACK_LINE(485)
		Float tmp60 = (a21 * b11);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(485)
		Float tmp61 = (a22 * b21);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(485)
		Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(485)
		Float tmp63 = (a23 * b31);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(485)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(485)
		Float tmp65 = (a24 * b41);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(485)
		Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(485)
		te1[(int)1] = tmp66;
		HX_STACK_LINE(485)
		Float tmp67 = (a21 * b12);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(485)
		Float tmp68 = (a22 * b22);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(485)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(485)
		Float tmp70 = (a23 * b32);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(485)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(485)
		Float tmp72 = (a24 * b42);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(485)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(485)
		te1[(int)5] = tmp73;
		HX_STACK_LINE(485)
		Float tmp74 = (a21 * b13);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(485)
		Float tmp75 = (a22 * b23);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(485)
		Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(485)
		Float tmp77 = (a23 * b33);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(485)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(485)
		Float tmp79 = (a24 * b43);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(485)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(485)
		te1[(int)9] = tmp80;
		HX_STACK_LINE(485)
		Float tmp81 = (a21 * b14);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(485)
		Float tmp82 = (a22 * b24);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(485)
		Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(485)
		Float tmp84 = (a23 * b34);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(485)
		Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(485)
		Float tmp86 = (a24 * b44);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(485)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(485)
		te1[(int)13] = tmp87;
		HX_STACK_LINE(485)
		Float tmp88 = (a31 * b11);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(485)
		Float tmp89 = (a32 * b21);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(485)
		Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(485)
		Float tmp91 = (a33 * b31);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(485)
		Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(485)
		Float tmp93 = (a34 * b41);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(485)
		Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(485)
		te1[(int)2] = tmp94;
		HX_STACK_LINE(485)
		Float tmp95 = (a31 * b12);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(485)
		Float tmp96 = (a32 * b22);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(485)
		Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(485)
		Float tmp98 = (a33 * b32);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(485)
		Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(485)
		Float tmp100 = (a34 * b42);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(485)
		Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(485)
		te1[(int)6] = tmp101;
		HX_STACK_LINE(485)
		Float tmp102 = (a31 * b13);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(485)
		Float tmp103 = (a32 * b23);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(485)
		Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(485)
		Float tmp105 = (a33 * b33);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(485)
		Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(485)
		Float tmp107 = (a34 * b43);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(485)
		Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(485)
		te1[(int)10] = tmp108;
		HX_STACK_LINE(485)
		Float tmp109 = (a31 * b14);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(485)
		Float tmp110 = (a32 * b24);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(485)
		Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(485)
		Float tmp112 = (a33 * b34);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(485)
		Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(485)
		Float tmp114 = (a34 * b44);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(485)
		Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(485)
		te1[(int)14] = tmp115;
		HX_STACK_LINE(485)
		Float tmp116 = (a41 * b11);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(485)
		Float tmp117 = (a42 * b21);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(485)
		Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(485)
		Float tmp119 = (a43 * b31);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(485)
		Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(485)
		Float tmp121 = (a44 * b41);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(485)
		Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(485)
		te1[(int)3] = tmp122;
		HX_STACK_LINE(485)
		Float tmp123 = (a41 * b12);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(485)
		Float tmp124 = (a42 * b22);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(485)
		Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(485)
		Float tmp126 = (a43 * b32);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(485)
		Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(485)
		Float tmp128 = (a44 * b42);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(485)
		Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(485)
		te1[(int)7] = tmp129;
		HX_STACK_LINE(485)
		Float tmp130 = (a41 * b13);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(485)
		Float tmp131 = (a42 * b23);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(485)
		Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(485)
		Float tmp133 = (a43 * b33);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(485)
		Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(485)
		Float tmp135 = (a44 * b43);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(485)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(485)
		te1[(int)11] = tmp136;
		HX_STACK_LINE(485)
		Float tmp137 = (a41 * b14);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(485)
		Float tmp138 = (a42 * b24);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(485)
		Float tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(485)
		Float tmp140 = (a43 * b34);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(485)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(485)
		Float tmp142 = (a44 * b44);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(485)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(485)
		te1[(int)15] = tmp143;
		HX_STACK_LINE(485)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(487)
	Float tmp = te->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(487)
	_r[(int)0] = tmp;
	HX_STACK_LINE(487)
	Float tmp1 = te->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(487)
	_r[(int)1] = tmp1;
	HX_STACK_LINE(487)
	Float tmp2 = te->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(487)
	_r[(int)2] = tmp2;
	HX_STACK_LINE(487)
	Float tmp3 = te->__get((int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(487)
	_r[(int)3] = tmp3;
	HX_STACK_LINE(488)
	Float tmp4 = te->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(488)
	_r[(int)4] = tmp4;
	HX_STACK_LINE(488)
	Float tmp5 = te->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(488)
	_r[(int)5] = tmp5;
	HX_STACK_LINE(488)
	Float tmp6 = te->__get((int)6);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(488)
	_r[(int)6] = tmp6;
	HX_STACK_LINE(488)
	Float tmp7 = te->__get((int)7);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(488)
	_r[(int)7] = tmp7;
	HX_STACK_LINE(489)
	Float tmp8 = te->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(489)
	_r[(int)8] = tmp8;
	HX_STACK_LINE(489)
	Float tmp9 = te->__get((int)9);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(489)
	_r[(int)9] = tmp9;
	HX_STACK_LINE(489)
	Float tmp10 = te->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(489)
	_r[(int)10] = tmp10;
	HX_STACK_LINE(489)
	Float tmp11 = te->__get((int)11);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(489)
	_r[(int)11] = tmp11;
	HX_STACK_LINE(490)
	Float tmp12 = te->__get((int)12);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(490)
	_r[(int)12] = tmp12;
	HX_STACK_LINE(490)
	Float tmp13 = te->__get((int)13);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(490)
	_r[(int)13] = tmp13;
	HX_STACK_LINE(490)
	Float tmp14 = te->__get((int)14);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(490)
	_r[(int)14] = tmp14;
	HX_STACK_LINE(490)
	Float tmp15 = te->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(490)
	_r[(int)15] = tmp15;
	HX_STACK_LINE(492)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,multiplyToArray,return )

::phoenix::Matrix Matrix_obj::multiplyScalar( Float _s){
	HX_STACK_FRAME("phoenix.Matrix","multiplyScalar",0x0b734fbe,"phoenix.Matrix.multiplyScalar","phoenix/Matrix.hx",497,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(499)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(501)
	Float tmp = _s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(501)
	hx::MultEq(te[(int)0],tmp);
	HX_STACK_LINE(501)
	Float tmp1 = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(501)
	hx::MultEq(te[(int)4],tmp1);
	HX_STACK_LINE(501)
	Float tmp2 = _s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(501)
	hx::MultEq(te[(int)8],tmp2);
	HX_STACK_LINE(501)
	Float tmp3 = _s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(501)
	hx::MultEq(te[(int)12],tmp3);
	HX_STACK_LINE(502)
	Float tmp4 = _s;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(502)
	hx::MultEq(te[(int)1],tmp4);
	HX_STACK_LINE(502)
	Float tmp5 = _s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(502)
	hx::MultEq(te[(int)5],tmp5);
	HX_STACK_LINE(502)
	Float tmp6 = _s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(502)
	hx::MultEq(te[(int)9],tmp6);
	HX_STACK_LINE(502)
	Float tmp7 = _s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(502)
	hx::MultEq(te[(int)13],tmp7);
	HX_STACK_LINE(503)
	Float tmp8 = _s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(503)
	hx::MultEq(te[(int)2],tmp8);
	HX_STACK_LINE(503)
	Float tmp9 = _s;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(503)
	hx::MultEq(te[(int)6],tmp9);
	HX_STACK_LINE(503)
	Float tmp10 = _s;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(503)
	hx::MultEq(te[(int)10],tmp10);
	HX_STACK_LINE(503)
	Float tmp11 = _s;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(503)
	hx::MultEq(te[(int)14],tmp11);
	HX_STACK_LINE(504)
	Float tmp12 = _s;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(504)
	hx::MultEq(te[(int)3],tmp12);
	HX_STACK_LINE(504)
	Float tmp13 = _s;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(504)
	hx::MultEq(te[(int)7],tmp13);
	HX_STACK_LINE(504)
	Float tmp14 = _s;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(504)
	hx::MultEq(te[(int)11],tmp14);
	HX_STACK_LINE(504)
	Float tmp15 = _s;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(504)
	hx::MultEq(te[(int)15],tmp15);
	HX_STACK_LINE(506)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiplyScalar,return )

Array< Float > Matrix_obj::multiplyVector3Array( Array< Float > _a){
	HX_STACK_FRAME("phoenix.Matrix","multiplyVector3Array",0xbd148b7b,"phoenix.Matrix.multiplyVector3Array","phoenix/Matrix.hx",511,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(513)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(513)
	::phoenix::Vector v1 = tmp;		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(514)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(515)
	int il = _a->length;		HX_STACK_VAR(il,"il");
	HX_STACK_LINE(517)
	while((true)){
		HX_STACK_LINE(517)
		bool tmp1 = (i < il);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(517)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(517)
		if ((tmp2)){
			HX_STACK_LINE(517)
			break;
		}
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			Float tmp3 = _a->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(519)
			Float _x = tmp3;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(519)
			v1->x = _x;
			HX_STACK_LINE(519)
			bool tmp4 = v1->_construct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(519)
			if ((tmp4)){
				HX_STACK_LINE(519)
				v1->x;
			}
			else{
				HX_STACK_LINE(519)
				bool tmp5 = (v1->listen_x != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(519)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(519)
				if ((tmp5)){
					HX_STACK_LINE(519)
					bool tmp7 = v1->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(519)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(519)
					tmp6 = !(tmp8);
				}
				else{
					HX_STACK_LINE(519)
					tmp6 = false;
				}
				HX_STACK_LINE(519)
				if ((tmp6)){
					HX_STACK_LINE(519)
					Float tmp7 = _x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(519)
					v1->listen_x(tmp7);
				}
				HX_STACK_LINE(519)
				v1->x;
			}
		}
		HX_STACK_LINE(520)
		{
			HX_STACK_LINE(520)
			int tmp3 = (i + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(520)
			Float tmp4 = _a->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(520)
			Float _y = tmp4;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(520)
			v1->y = _y;
			HX_STACK_LINE(520)
			bool tmp5 = v1->_construct;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(520)
			if ((tmp5)){
				HX_STACK_LINE(520)
				v1->y;
			}
			else{
				HX_STACK_LINE(520)
				bool tmp6 = (v1->listen_y != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(520)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(520)
				if ((tmp6)){
					HX_STACK_LINE(520)
					bool tmp8 = v1->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(520)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(520)
					tmp7 = !(tmp9);
				}
				else{
					HX_STACK_LINE(520)
					tmp7 = false;
				}
				HX_STACK_LINE(520)
				if ((tmp7)){
					HX_STACK_LINE(520)
					Float tmp8 = _y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(520)
					v1->listen_y(tmp8);
				}
				HX_STACK_LINE(520)
				v1->y;
			}
		}
		HX_STACK_LINE(521)
		{
			HX_STACK_LINE(521)
			int tmp3 = (i + (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(521)
			Float tmp4 = _a->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(521)
			Float _z = tmp4;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(521)
			v1->z = _z;
			HX_STACK_LINE(521)
			bool tmp5 = v1->_construct;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(521)
			if ((tmp5)){
				HX_STACK_LINE(521)
				v1->z;
			}
			else{
				HX_STACK_LINE(521)
				bool tmp6 = (v1->listen_z != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(521)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(521)
				if ((tmp6)){
					HX_STACK_LINE(521)
					bool tmp8 = v1->ignore_listeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(521)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(521)
					tmp7 = !(tmp9);
				}
				else{
					HX_STACK_LINE(521)
					tmp7 = false;
				}
				HX_STACK_LINE(521)
				if ((tmp7)){
					HX_STACK_LINE(521)
					Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(521)
					v1->listen_z(tmp8);
				}
				HX_STACK_LINE(521)
				v1->z;
			}
		}
		HX_STACK_LINE(523)
		{
			HX_STACK_LINE(523)
			Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(523)
			Float x = v1->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(523)
			Float y = v1->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(523)
			Float z = v1->z;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(523)
			Float tmp3 = e->__get((int)3);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(523)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(523)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(523)
			Float tmp6 = e->__get((int)7);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(523)
			Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(523)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(523)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(523)
			Float tmp10 = e->__get((int)11);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(523)
			Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(523)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(523)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(523)
			Float tmp14 = e->__get((int)15);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(523)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(523)
			Float tmp16 = (Float((int)1) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(523)
			Float d = tmp16;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				Float tmp17 = e->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(523)
				Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(523)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(523)
				Float tmp20 = e->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(523)
				Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(523)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(523)
				Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(523)
				Float tmp24 = e->__get((int)8);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(523)
				Float tmp25 = z;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(523)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(523)
				Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(523)
				Float tmp28 = e->__get((int)12);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(523)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(523)
				Float tmp30 = d;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(523)
				Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(523)
				Float _x = tmp31;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(523)
				Float tmp32 = e->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(523)
				Float tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(523)
				Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(523)
				Float tmp35 = e->__get((int)5);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(523)
				Float tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(523)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(523)
				Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(523)
				Float tmp39 = e->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(523)
				Float tmp40 = z;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(523)
				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(523)
				Float tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(523)
				Float tmp43 = e->__get((int)13);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(523)
				Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(523)
				Float tmp45 = d;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(523)
				Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(523)
				Float _y = tmp46;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(523)
				Float tmp47 = e->__get((int)2);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(523)
				Float tmp48 = x;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(523)
				Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(523)
				Float tmp50 = e->__get((int)6);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(523)
				Float tmp51 = y;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(523)
				Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(523)
				Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(523)
				Float tmp54 = e->__get((int)10);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(523)
				Float tmp55 = z;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(523)
				Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(523)
				Float tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(523)
				Float tmp58 = e->__get((int)14);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(523)
				Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(523)
				Float tmp60 = d;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(523)
				Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(523)
				Float _z = tmp61;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(523)
				bool prev = v1->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(523)
				v1->ignore_listeners = true;
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					v1->x = _x;
					HX_STACK_LINE(523)
					bool tmp62 = v1->_construct;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(523)
					if ((tmp62)){
						HX_STACK_LINE(523)
						v1->x;
					}
					else{
						HX_STACK_LINE(523)
						bool tmp63 = (v1->listen_x != null());		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(523)
						bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(523)
						if ((tmp63)){
							HX_STACK_LINE(523)
							bool tmp65 = v1->ignore_listeners;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(523)
							bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(523)
							tmp64 = !(tmp66);
						}
						else{
							HX_STACK_LINE(523)
							tmp64 = false;
						}
						HX_STACK_LINE(523)
						if ((tmp64)){
							HX_STACK_LINE(523)
							Float tmp65 = _x;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(523)
							v1->listen_x(tmp65);
						}
						HX_STACK_LINE(523)
						v1->x;
					}
				}
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					v1->y = _y;
					HX_STACK_LINE(523)
					bool tmp62 = v1->_construct;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(523)
					if ((tmp62)){
						HX_STACK_LINE(523)
						v1->y;
					}
					else{
						HX_STACK_LINE(523)
						bool tmp63 = (v1->listen_y != null());		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(523)
						bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(523)
						if ((tmp63)){
							HX_STACK_LINE(523)
							bool tmp65 = v1->ignore_listeners;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(523)
							bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(523)
							tmp64 = !(tmp66);
						}
						else{
							HX_STACK_LINE(523)
							tmp64 = false;
						}
						HX_STACK_LINE(523)
						if ((tmp64)){
							HX_STACK_LINE(523)
							Float tmp65 = _y;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(523)
							v1->listen_y(tmp65);
						}
						HX_STACK_LINE(523)
						v1->y;
					}
				}
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					v1->z = _z;
					HX_STACK_LINE(523)
					bool tmp62 = v1->_construct;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(523)
					if ((tmp62)){
						HX_STACK_LINE(523)
						v1->z;
					}
					else{
						HX_STACK_LINE(523)
						bool tmp63 = (v1->listen_z != null());		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(523)
						bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(523)
						if ((tmp63)){
							HX_STACK_LINE(523)
							bool tmp65 = v1->ignore_listeners;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(523)
							bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(523)
							tmp64 = !(tmp66);
						}
						else{
							HX_STACK_LINE(523)
							tmp64 = false;
						}
						HX_STACK_LINE(523)
						if ((tmp64)){
							HX_STACK_LINE(523)
							Float tmp65 = _z;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(523)
							v1->listen_z(tmp65);
						}
						HX_STACK_LINE(523)
						v1->z;
					}
				}
				HX_STACK_LINE(523)
				v1->ignore_listeners = prev;
				HX_STACK_LINE(523)
				bool tmp62 = (v1->listen_x != null());		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(523)
				bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(523)
				if ((tmp62)){
					HX_STACK_LINE(523)
					bool tmp64 = v1->ignore_listeners;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(523)
					bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(523)
					tmp63 = !(tmp65);
				}
				else{
					HX_STACK_LINE(523)
					tmp63 = false;
				}
				HX_STACK_LINE(523)
				if ((tmp63)){
					HX_STACK_LINE(523)
					Float tmp64 = v1->x;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(523)
					v1->listen_x(tmp64);
				}
				HX_STACK_LINE(523)
				bool tmp64 = (v1->listen_y != null());		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(523)
				bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(523)
				if ((tmp64)){
					HX_STACK_LINE(523)
					bool tmp66 = v1->ignore_listeners;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(523)
					bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(523)
					tmp65 = !(tmp67);
				}
				else{
					HX_STACK_LINE(523)
					tmp65 = false;
				}
				HX_STACK_LINE(523)
				if ((tmp65)){
					HX_STACK_LINE(523)
					Float tmp66 = v1->y;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(523)
					v1->listen_y(tmp66);
				}
				HX_STACK_LINE(523)
				bool tmp66 = (v1->listen_z != null());		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(523)
				bool tmp67;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(523)
				if ((tmp66)){
					HX_STACK_LINE(523)
					bool tmp68 = v1->ignore_listeners;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(523)
					bool tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(523)
					tmp67 = !(tmp69);
				}
				else{
					HX_STACK_LINE(523)
					tmp67 = false;
				}
				HX_STACK_LINE(523)
				if ((tmp67)){
					HX_STACK_LINE(523)
					Float tmp68 = v1->z;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(523)
					v1->listen_z(tmp68);
				}
				HX_STACK_LINE(523)
				v1;
			}
			HX_STACK_LINE(523)
			v1;
		}
		HX_STACK_LINE(525)
		int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(525)
		Float tmp4 = v1->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(525)
		_a[tmp3] = tmp4;
		HX_STACK_LINE(526)
		int tmp5 = (i + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(526)
		Float tmp6 = v1->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(526)
		_a[tmp5] = tmp6;
		HX_STACK_LINE(527)
		int tmp7 = (i + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(527)
		Float tmp8 = v1->z;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(527)
		_a[tmp7] = tmp8;
		HX_STACK_LINE(529)
		hx::AddEq(i,(int)3);
	}
	HX_STACK_LINE(533)
	return _a;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,multiplyVector3Array,return )

Float Matrix_obj::determinant( ){
	HX_STACK_FRAME("phoenix.Matrix","determinant",0xad610187,"phoenix.Matrix.determinant","phoenix/Matrix.hx",537,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(539)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(541)
	Float tmp = te->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(541)
	Float n11 = tmp;		HX_STACK_VAR(n11,"n11");
	HX_STACK_LINE(541)
	Float tmp1 = te->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(541)
	Float n12 = tmp1;		HX_STACK_VAR(n12,"n12");
	HX_STACK_LINE(541)
	Float tmp2 = te->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(541)
	Float n13 = tmp2;		HX_STACK_VAR(n13,"n13");
	HX_STACK_LINE(541)
	Float tmp3 = te->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(541)
	Float n14 = tmp3;		HX_STACK_VAR(n14,"n14");
	HX_STACK_LINE(542)
	Float tmp4 = te->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(542)
	Float n21 = tmp4;		HX_STACK_VAR(n21,"n21");
	HX_STACK_LINE(542)
	Float tmp5 = te->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(542)
	Float n22 = tmp5;		HX_STACK_VAR(n22,"n22");
	HX_STACK_LINE(542)
	Float tmp6 = te->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(542)
	Float n23 = tmp6;		HX_STACK_VAR(n23,"n23");
	HX_STACK_LINE(542)
	Float tmp7 = te->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(542)
	Float n24 = tmp7;		HX_STACK_VAR(n24,"n24");
	HX_STACK_LINE(543)
	Float tmp8 = te->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(543)
	Float n31 = tmp8;		HX_STACK_VAR(n31,"n31");
	HX_STACK_LINE(543)
	Float tmp9 = te->__get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(543)
	Float n32 = tmp9;		HX_STACK_VAR(n32,"n32");
	HX_STACK_LINE(543)
	Float tmp10 = te->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(543)
	Float n33 = tmp10;		HX_STACK_VAR(n33,"n33");
	HX_STACK_LINE(543)
	Float tmp11 = te->__get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(543)
	Float n34 = tmp11;		HX_STACK_VAR(n34,"n34");
	HX_STACK_LINE(544)
	Float tmp12 = te->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(544)
	Float n41 = tmp12;		HX_STACK_VAR(n41,"n41");
	HX_STACK_LINE(544)
	Float tmp13 = te->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(544)
	Float n42 = tmp13;		HX_STACK_VAR(n42,"n42");
	HX_STACK_LINE(544)
	Float tmp14 = te->__get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(544)
	Float n43 = tmp14;		HX_STACK_VAR(n43,"n43");
	HX_STACK_LINE(544)
	Float tmp15 = te->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(544)
	Float n44 = tmp15;		HX_STACK_VAR(n44,"n44");
	HX_STACK_LINE(547)
	Float tmp16 = n41;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(548)
	Float tmp17 = (n14 * n23);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(548)
	Float tmp18 = n32;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(548)
	Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(549)
	Float tmp20 = (n13 * n24);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(549)
	Float tmp21 = n32;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(549)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(548)
	Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(550)
	Float tmp24 = (n14 * n22);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(550)
	Float tmp25 = n33;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(550)
	Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(548)
	Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(551)
	Float tmp28 = (n12 * n24);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(551)
	Float tmp29 = n33;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(551)
	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(548)
	Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(552)
	Float tmp32 = (n13 * n22);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(552)
	Float tmp33 = n34;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(552)
	Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(548)
	Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(553)
	Float tmp36 = (n12 * n23);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(553)
	Float tmp37 = n34;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(553)
	Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(548)
	Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(547)
	Float tmp40 = (tmp16 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(555)
	Float tmp41 = n42;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(556)
	Float tmp42 = (n11 * n23);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(556)
	Float tmp43 = n34;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(556)
	Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(557)
	Float tmp45 = (n11 * n24);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(557)
	Float tmp46 = n33;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(557)
	Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(556)
	Float tmp48 = (tmp44 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(558)
	Float tmp49 = (n14 * n21);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(558)
	Float tmp50 = n33;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(558)
	Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(556)
	Float tmp52 = (tmp48 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(559)
	Float tmp53 = (n13 * n21);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(559)
	Float tmp54 = n34;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(559)
	Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(556)
	Float tmp56 = (tmp52 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(560)
	Float tmp57 = (n13 * n24);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(560)
	Float tmp58 = n31;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(560)
	Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(556)
	Float tmp60 = (tmp56 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(561)
	Float tmp61 = (n14 * n23);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(561)
	Float tmp62 = n31;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(561)
	Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(556)
	Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(555)
	Float tmp65 = (tmp41 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(547)
	Float tmp66 = (tmp40 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(563)
	Float tmp67 = n43;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(564)
	Float tmp68 = (n11 * n24);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(564)
	Float tmp69 = n32;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(564)
	Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(565)
	Float tmp71 = (n11 * n22);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(565)
	Float tmp72 = n34;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(565)
	Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(564)
	Float tmp74 = (tmp70 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(566)
	Float tmp75 = (n14 * n21);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(566)
	Float tmp76 = n32;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(566)
	Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(564)
	Float tmp78 = (tmp74 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(567)
	Float tmp79 = (n12 * n21);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(567)
	Float tmp80 = n34;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(567)
	Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(564)
	Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(568)
	Float tmp83 = (n14 * n22);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(568)
	Float tmp84 = n31;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(568)
	Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(564)
	Float tmp86 = (tmp82 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(569)
	Float tmp87 = (n12 * n24);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(569)
	Float tmp88 = n31;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(569)
	Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(564)
	Float tmp90 = (tmp86 - tmp89);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(563)
	Float tmp91 = (tmp67 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(547)
	Float tmp92 = (tmp66 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(571)
	Float tmp93 = n44;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(572)
	Float tmp94 = n13;		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(572)
	Float tmp95 = -(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(572)
	Float tmp96 = n22;		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(572)
	Float tmp97 = (tmp95 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(572)
	Float tmp98 = n31;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(572)
	Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(573)
	Float tmp100 = (n11 * n23);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(573)
	Float tmp101 = n32;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(573)
	Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(572)
	Float tmp103 = (tmp99 - tmp102);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(574)
	Float tmp104 = (n11 * n22);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(574)
	Float tmp105 = n33;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(574)
	Float tmp106 = (tmp104 * tmp105);		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(572)
	Float tmp107 = (tmp103 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(575)
	Float tmp108 = (n13 * n21);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(575)
	Float tmp109 = n32;		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(575)
	Float tmp110 = (tmp108 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(572)
	Float tmp111 = (tmp107 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(576)
	Float tmp112 = (n12 * n21);		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(576)
	Float tmp113 = n33;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(576)
	Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(572)
	Float tmp115 = (tmp111 - tmp114);		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(577)
	Float tmp116 = (n12 * n23);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(577)
	Float tmp117 = n31;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(577)
	Float tmp118 = (tmp116 * tmp117);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(572)
	Float tmp119 = (tmp115 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(571)
	Float tmp120 = (tmp93 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(547)
	Float tmp121 = (tmp92 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(546)
	return tmp121;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,determinant,return )

::phoenix::Matrix Matrix_obj::transpose( ){
	HX_STACK_FRAME("phoenix.Matrix","transpose",0xba85b3eb,"phoenix.Matrix.transpose","phoenix/Matrix.hx",582,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(584)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(585)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	Float tmp1 = te->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(587)
	tmp = tmp1;
	HX_STACK_LINE(587)
	Float tmp2 = te->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(587)
	te[(int)1] = tmp2;
	HX_STACK_LINE(587)
	Float tmp3 = tmp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(587)
	te[(int)4] = tmp3;
	HX_STACK_LINE(588)
	Float tmp4 = te->__get((int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(588)
	tmp = tmp4;
	HX_STACK_LINE(588)
	Float tmp5 = te->__get((int)8);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(588)
	te[(int)2] = tmp5;
	HX_STACK_LINE(588)
	Float tmp6 = tmp;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(588)
	te[(int)8] = tmp6;
	HX_STACK_LINE(589)
	Float tmp7 = te->__get((int)6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(589)
	tmp = tmp7;
	HX_STACK_LINE(589)
	Float tmp8 = te->__get((int)9);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(589)
	te[(int)6] = tmp8;
	HX_STACK_LINE(589)
	Float tmp9 = tmp;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(589)
	te[(int)9] = tmp9;
	HX_STACK_LINE(591)
	Float tmp10 = te->__get((int)3);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(591)
	tmp = tmp10;
	HX_STACK_LINE(591)
	Float tmp11 = te->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(591)
	te[(int)3] = tmp11;
	HX_STACK_LINE(591)
	Float tmp12 = tmp;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(591)
	te[(int)12] = tmp12;
	HX_STACK_LINE(592)
	Float tmp13 = te->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(592)
	tmp = tmp13;
	HX_STACK_LINE(592)
	Float tmp14 = te->__get((int)13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(592)
	te[(int)7] = tmp14;
	HX_STACK_LINE(592)
	Float tmp15 = tmp;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(592)
	te[(int)13] = tmp15;
	HX_STACK_LINE(593)
	Float tmp16 = te->__get((int)11);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(593)
	tmp = tmp16;
	HX_STACK_LINE(593)
	Float tmp17 = te->__get((int)14);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(593)
	te[(int)11] = tmp17;
	HX_STACK_LINE(593)
	Float tmp18 = tmp;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(593)
	te[(int)14] = tmp18;
	HX_STACK_LINE(595)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,transpose,return )

Array< Float > Matrix_obj::flattenToArray( Array< Float > _flat){
	HX_STACK_FRAME("phoenix.Matrix","flattenToArray",0xbdf5d608,"phoenix.Matrix.flattenToArray","phoenix/Matrix.hx",599,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_flat,"_flat")
	HX_STACK_LINE(601)
	bool tmp = (_flat == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(601)
	if ((tmp)){
		HX_STACK_LINE(602)
		_flat = Array_obj< Float >::__new();
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(603)
			while((true)){
				HX_STACK_LINE(603)
				bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(603)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(603)
				if ((tmp2)){
					HX_STACK_LINE(603)
					break;
				}
				HX_STACK_LINE(603)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(603)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(603)
				_flat->push(((Float)0.0));
			}
		}
	}
	HX_STACK_LINE(606)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(608)
	Float tmp1 = te->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(608)
	_flat[(int)0] = tmp1;
	HX_STACK_LINE(608)
	Float tmp2 = te->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(608)
	_flat[(int)1] = tmp2;
	HX_STACK_LINE(608)
	Float tmp3 = te->__get((int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(608)
	_flat[(int)2] = tmp3;
	HX_STACK_LINE(608)
	Float tmp4 = te->__get((int)3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(608)
	_flat[(int)3] = tmp4;
	HX_STACK_LINE(609)
	Float tmp5 = te->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(609)
	_flat[(int)4] = tmp5;
	HX_STACK_LINE(609)
	Float tmp6 = te->__get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(609)
	_flat[(int)5] = tmp6;
	HX_STACK_LINE(609)
	Float tmp7 = te->__get((int)6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(609)
	_flat[(int)6] = tmp7;
	HX_STACK_LINE(609)
	Float tmp8 = te->__get((int)7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(609)
	_flat[(int)7] = tmp8;
	HX_STACK_LINE(610)
	Float tmp9 = te->__get((int)8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(610)
	_flat[(int)8] = tmp9;
	HX_STACK_LINE(610)
	Float tmp10 = te->__get((int)9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(610)
	_flat[(int)9] = tmp10;
	HX_STACK_LINE(610)
	Float tmp11 = te->__get((int)10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(610)
	_flat[(int)10] = tmp11;
	HX_STACK_LINE(610)
	Float tmp12 = te->__get((int)11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(610)
	_flat[(int)11] = tmp12;
	HX_STACK_LINE(611)
	Float tmp13 = te->__get((int)12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(611)
	_flat[(int)12] = tmp13;
	HX_STACK_LINE(611)
	Float tmp14 = te->__get((int)13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(611)
	_flat[(int)13] = tmp14;
	HX_STACK_LINE(611)
	Float tmp15 = te->__get((int)14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(611)
	_flat[(int)14] = tmp15;
	HX_STACK_LINE(611)
	Float tmp16 = te->__get((int)15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(611)
	_flat[(int)15] = tmp16;
	HX_STACK_LINE(613)
	return _flat;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,flattenToArray,return )

Array< Float > Matrix_obj::flattenToArrayOffset( Array< Float > _flat,int _offset){
	HX_STACK_FRAME("phoenix.Matrix","flattenToArrayOffset",0xf67a17bb,"phoenix.Matrix.flattenToArrayOffset","phoenix/Matrix.hx",618,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_flat,"_flat")
	HX_STACK_ARG(_offset,"_offset")
	HX_STACK_LINE(620)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(622)
	int tmp = _offset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(622)
	Float tmp1 = te->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(622)
	_flat[tmp] = tmp1;
	HX_STACK_LINE(623)
	int tmp2 = (_offset + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(623)
	Float tmp3 = te->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(623)
	_flat[tmp2] = tmp3;
	HX_STACK_LINE(624)
	int tmp4 = (_offset + (int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(624)
	Float tmp5 = te->__get((int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(624)
	_flat[tmp4] = tmp5;
	HX_STACK_LINE(625)
	int tmp6 = (_offset + (int)3);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(625)
	Float tmp7 = te->__get((int)3);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(625)
	_flat[tmp6] = tmp7;
	HX_STACK_LINE(627)
	int tmp8 = (_offset + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(627)
	Float tmp9 = te->__get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(627)
	_flat[tmp8] = tmp9;
	HX_STACK_LINE(628)
	int tmp10 = (_offset + (int)5);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(628)
	Float tmp11 = te->__get((int)5);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(628)
	_flat[tmp10] = tmp11;
	HX_STACK_LINE(629)
	int tmp12 = (_offset + (int)6);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(629)
	Float tmp13 = te->__get((int)6);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(629)
	_flat[tmp12] = tmp13;
	HX_STACK_LINE(630)
	int tmp14 = (_offset + (int)7);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(630)
	Float tmp15 = te->__get((int)7);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(630)
	_flat[tmp14] = tmp15;
	HX_STACK_LINE(632)
	int tmp16 = (_offset + (int)8);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(632)
	Float tmp17 = te->__get((int)8);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(632)
	_flat[tmp16] = tmp17;
	HX_STACK_LINE(633)
	int tmp18 = (_offset + (int)9);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(633)
	Float tmp19 = te->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(633)
	_flat[tmp18] = tmp19;
	HX_STACK_LINE(634)
	int tmp20 = (_offset + (int)10);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(634)
	Float tmp21 = te->__get((int)10);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(634)
	_flat[tmp20] = tmp21;
	HX_STACK_LINE(635)
	int tmp22 = (_offset + (int)11);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(635)
	Float tmp23 = te->__get((int)11);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(635)
	_flat[tmp22] = tmp23;
	HX_STACK_LINE(637)
	int tmp24 = (_offset + (int)12);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(637)
	Float tmp25 = te->__get((int)12);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(637)
	_flat[tmp24] = tmp25;
	HX_STACK_LINE(638)
	int tmp26 = (_offset + (int)13);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(638)
	Float tmp27 = te->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(638)
	_flat[tmp26] = tmp27;
	HX_STACK_LINE(639)
	int tmp28 = (_offset + (int)14);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(639)
	Float tmp29 = te->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(639)
	_flat[tmp28] = tmp29;
	HX_STACK_LINE(640)
	int tmp30 = (_offset + (int)15);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(640)
	Float tmp31 = te->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(640)
	_flat[tmp30] = tmp31;
	HX_STACK_LINE(642)
	return _flat;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,flattenToArrayOffset,return )

::phoenix::Matrix Matrix_obj::setPosition( ::phoenix::Vector _v){
	HX_STACK_FRAME("phoenix.Matrix","setPosition",0x76a70e5d,"phoenix.Matrix.setPosition","phoenix/Matrix.hx",647,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(649)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(651)
	Float tmp = _v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(651)
	te[(int)12] = tmp;
	HX_STACK_LINE(652)
	Float tmp1 = _v->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(652)
	te[(int)13] = tmp1;
	HX_STACK_LINE(653)
	Float tmp2 = _v->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(653)
	te[(int)14] = tmp2;
	HX_STACK_LINE(655)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,setPosition,return )

::phoenix::Matrix Matrix_obj::inverse( ){
	HX_STACK_FRAME("phoenix.Matrix","inverse",0xa2fb8ea2,"phoenix.Matrix.inverse","phoenix/Matrix.hx",659,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(660)
	::phoenix::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(660)
	{
		HX_STACK_LINE(660)
		::phoenix::Matrix tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(660)
		{
			HX_STACK_LINE(660)
			Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(660)
			Float tmp2 = te->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(660)
			Float tmp3 = te->__get((int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(660)
			Float tmp4 = te->__get((int)8);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(660)
			Float tmp5 = te->__get((int)12);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(660)
			Float tmp6 = te->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(660)
			Float tmp7 = te->__get((int)5);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(660)
			Float tmp8 = te->__get((int)9);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(660)
			Float tmp9 = te->__get((int)13);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(660)
			Float tmp10 = te->__get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(660)
			Float tmp11 = te->__get((int)6);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(660)
			Float tmp12 = te->__get((int)10);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(660)
			Float tmp13 = te->__get((int)14);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(660)
			Float tmp14 = te->__get((int)3);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(660)
			Float tmp15 = te->__get((int)7);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(660)
			Float tmp16 = te->__get((int)11);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(660)
			Float tmp17 = te->__get((int)15);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(660)
			tmp1 = ::phoenix::Matrix_obj::__new(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17);
		}
		HX_STACK_LINE(660)
		::phoenix::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(660)
		Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(660)
		Array< Float > me = this->elements;		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(660)
		Float tmp2 = me->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(660)
		Float n11 = tmp2;		HX_STACK_VAR(n11,"n11");
		HX_STACK_LINE(660)
		Float tmp3 = me->__get((int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(660)
		Float n12 = tmp3;		HX_STACK_VAR(n12,"n12");
		HX_STACK_LINE(660)
		Float tmp4 = me->__get((int)8);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(660)
		Float n13 = tmp4;		HX_STACK_VAR(n13,"n13");
		HX_STACK_LINE(660)
		Float tmp5 = me->__get((int)12);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(660)
		Float n14 = tmp5;		HX_STACK_VAR(n14,"n14");
		HX_STACK_LINE(660)
		Float tmp6 = me->__get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(660)
		Float n21 = tmp6;		HX_STACK_VAR(n21,"n21");
		HX_STACK_LINE(660)
		Float tmp7 = me->__get((int)5);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(660)
		Float n22 = tmp7;		HX_STACK_VAR(n22,"n22");
		HX_STACK_LINE(660)
		Float tmp8 = me->__get((int)9);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(660)
		Float n23 = tmp8;		HX_STACK_VAR(n23,"n23");
		HX_STACK_LINE(660)
		Float tmp9 = me->__get((int)13);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(660)
		Float n24 = tmp9;		HX_STACK_VAR(n24,"n24");
		HX_STACK_LINE(660)
		Float tmp10 = me->__get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(660)
		Float n31 = tmp10;		HX_STACK_VAR(n31,"n31");
		HX_STACK_LINE(660)
		Float tmp11 = me->__get((int)6);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(660)
		Float n32 = tmp11;		HX_STACK_VAR(n32,"n32");
		HX_STACK_LINE(660)
		Float tmp12 = me->__get((int)10);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(660)
		Float n33 = tmp12;		HX_STACK_VAR(n33,"n33");
		HX_STACK_LINE(660)
		Float tmp13 = me->__get((int)14);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(660)
		Float n34 = tmp13;		HX_STACK_VAR(n34,"n34");
		HX_STACK_LINE(660)
		Float tmp14 = me->__get((int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(660)
		Float n41 = tmp14;		HX_STACK_VAR(n41,"n41");
		HX_STACK_LINE(660)
		Float tmp15 = me->__get((int)7);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(660)
		Float n42 = tmp15;		HX_STACK_VAR(n42,"n42");
		HX_STACK_LINE(660)
		Float tmp16 = me->__get((int)11);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(660)
		Float n43 = tmp16;		HX_STACK_VAR(n43,"n43");
		HX_STACK_LINE(660)
		Float tmp17 = me->__get((int)15);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(660)
		Float n44 = tmp17;		HX_STACK_VAR(n44,"n44");
		HX_STACK_LINE(660)
		Float tmp18 = (n23 * n34);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(660)
		Float tmp19 = n42;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(660)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(660)
		Float tmp21 = (n24 * n33);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(660)
		Float tmp22 = n42;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(660)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(660)
		Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(660)
		Float tmp25 = (n24 * n32);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(660)
		Float tmp26 = n43;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(660)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(660)
		Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(660)
		Float tmp29 = (n22 * n34);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(660)
		Float tmp30 = n43;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(660)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(660)
		Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(660)
		Float tmp33 = (n23 * n32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(660)
		Float tmp34 = n44;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(660)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(660)
		Float tmp36 = (tmp32 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(660)
		Float tmp37 = (n22 * n33);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(660)
		Float tmp38 = n44;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(660)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(660)
		Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(660)
		te[(int)0] = tmp40;
		HX_STACK_LINE(660)
		Float tmp41 = (n14 * n33);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(660)
		Float tmp42 = n42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(660)
		Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(660)
		Float tmp44 = (n13 * n34);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(660)
		Float tmp45 = n42;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(660)
		Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(660)
		Float tmp47 = (tmp43 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(660)
		Float tmp48 = (n14 * n32);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(660)
		Float tmp49 = n43;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(660)
		Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(660)
		Float tmp51 = (tmp47 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(660)
		Float tmp52 = (n12 * n34);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(660)
		Float tmp53 = n43;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(660)
		Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(660)
		Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(660)
		Float tmp56 = (n13 * n32);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(660)
		Float tmp57 = n44;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(660)
		Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(660)
		Float tmp59 = (tmp55 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(660)
		Float tmp60 = (n12 * n33);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(660)
		Float tmp61 = n44;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(660)
		Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(660)
		Float tmp63 = (tmp59 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(660)
		te[(int)4] = tmp63;
		HX_STACK_LINE(660)
		Float tmp64 = (n13 * n24);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(660)
		Float tmp65 = n42;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(660)
		Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(660)
		Float tmp67 = (n14 * n23);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(660)
		Float tmp68 = n42;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(660)
		Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(660)
		Float tmp70 = (tmp66 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(660)
		Float tmp71 = (n14 * n22);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(660)
		Float tmp72 = n43;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(660)
		Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(660)
		Float tmp74 = (tmp70 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(660)
		Float tmp75 = (n12 * n24);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(660)
		Float tmp76 = n43;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(660)
		Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(660)
		Float tmp78 = (tmp74 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(660)
		Float tmp79 = (n13 * n22);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(660)
		Float tmp80 = n44;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(660)
		Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(660)
		Float tmp82 = (tmp78 - tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(660)
		Float tmp83 = (n12 * n23);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(660)
		Float tmp84 = n44;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(660)
		Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(660)
		Float tmp86 = (tmp82 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(660)
		te[(int)8] = tmp86;
		HX_STACK_LINE(660)
		Float tmp87 = (n14 * n23);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(660)
		Float tmp88 = n32;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(660)
		Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(660)
		Float tmp90 = (n13 * n24);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(660)
		Float tmp91 = n32;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(660)
		Float tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(660)
		Float tmp93 = (tmp89 - tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(660)
		Float tmp94 = (n14 * n22);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(660)
		Float tmp95 = n33;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(660)
		Float tmp96 = (tmp94 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(660)
		Float tmp97 = (tmp93 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(660)
		Float tmp98 = (n12 * n24);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(660)
		Float tmp99 = n33;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(660)
		Float tmp100 = (tmp98 * tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(660)
		Float tmp101 = (tmp97 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(660)
		Float tmp102 = (n13 * n22);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(660)
		Float tmp103 = n34;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(660)
		Float tmp104 = (tmp102 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(660)
		Float tmp105 = (tmp101 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(660)
		Float tmp106 = (n12 * n23);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(660)
		Float tmp107 = n34;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(660)
		Float tmp108 = (tmp106 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(660)
		Float tmp109 = (tmp105 - tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(660)
		te[(int)12] = tmp109;
		HX_STACK_LINE(660)
		Float tmp110 = (n24 * n33);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(660)
		Float tmp111 = n41;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(660)
		Float tmp112 = (tmp110 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(660)
		Float tmp113 = (n23 * n34);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(660)
		Float tmp114 = n41;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(660)
		Float tmp115 = (tmp113 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(660)
		Float tmp116 = (tmp112 - tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(660)
		Float tmp117 = (n24 * n31);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(660)
		Float tmp118 = n43;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(660)
		Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(660)
		Float tmp120 = (tmp116 - tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(660)
		Float tmp121 = (n21 * n34);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(660)
		Float tmp122 = n43;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(660)
		Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(660)
		Float tmp124 = (tmp120 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(660)
		Float tmp125 = (n23 * n31);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(660)
		Float tmp126 = n44;		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(660)
		Float tmp127 = (tmp125 * tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(660)
		Float tmp128 = (tmp124 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(660)
		Float tmp129 = (n21 * n33);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(660)
		Float tmp130 = n44;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(660)
		Float tmp131 = (tmp129 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(660)
		Float tmp132 = (tmp128 - tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(660)
		te[(int)1] = tmp132;
		HX_STACK_LINE(660)
		Float tmp133 = (n13 * n34);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(660)
		Float tmp134 = n41;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(660)
		Float tmp135 = (tmp133 * tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(660)
		Float tmp136 = (n14 * n33);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(660)
		Float tmp137 = n41;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(660)
		Float tmp138 = (tmp136 * tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(660)
		Float tmp139 = (tmp135 - tmp138);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(660)
		Float tmp140 = (n14 * n31);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(660)
		Float tmp141 = n43;		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(660)
		Float tmp142 = (tmp140 * tmp141);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(660)
		Float tmp143 = (tmp139 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(660)
		Float tmp144 = (n11 * n34);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(660)
		Float tmp145 = n43;		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(660)
		Float tmp146 = (tmp144 * tmp145);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(660)
		Float tmp147 = (tmp143 - tmp146);		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(660)
		Float tmp148 = (n13 * n31);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(660)
		Float tmp149 = n44;		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(660)
		Float tmp150 = (tmp148 * tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(660)
		Float tmp151 = (tmp147 - tmp150);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(660)
		Float tmp152 = (n11 * n33);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(660)
		Float tmp153 = n44;		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(660)
		Float tmp154 = (tmp152 * tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(660)
		Float tmp155 = (tmp151 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(660)
		te[(int)5] = tmp155;
		HX_STACK_LINE(660)
		Float tmp156 = (n14 * n23);		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(660)
		Float tmp157 = n41;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(660)
		Float tmp158 = (tmp156 * tmp157);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(660)
		Float tmp159 = (n13 * n24);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(660)
		Float tmp160 = n41;		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(660)
		Float tmp161 = (tmp159 * tmp160);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(660)
		Float tmp162 = (tmp158 - tmp161);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(660)
		Float tmp163 = (n14 * n21);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(660)
		Float tmp164 = n43;		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(660)
		Float tmp165 = (tmp163 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(660)
		Float tmp166 = (tmp162 - tmp165);		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(660)
		Float tmp167 = (n11 * n24);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(660)
		Float tmp168 = n43;		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(660)
		Float tmp169 = (tmp167 * tmp168);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(660)
		Float tmp170 = (tmp166 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(660)
		Float tmp171 = (n13 * n21);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(660)
		Float tmp172 = n44;		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(660)
		Float tmp173 = (tmp171 * tmp172);		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(660)
		Float tmp174 = (tmp170 + tmp173);		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(660)
		Float tmp175 = (n11 * n23);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(660)
		Float tmp176 = n44;		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(660)
		Float tmp177 = (tmp175 * tmp176);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(660)
		Float tmp178 = (tmp174 - tmp177);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(660)
		te[(int)9] = tmp178;
		HX_STACK_LINE(660)
		Float tmp179 = (n13 * n24);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(660)
		Float tmp180 = n31;		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(660)
		Float tmp181 = (tmp179 * tmp180);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(660)
		Float tmp182 = (n14 * n23);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(660)
		Float tmp183 = n31;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(660)
		Float tmp184 = (tmp182 * tmp183);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(660)
		Float tmp185 = (tmp181 - tmp184);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(660)
		Float tmp186 = (n14 * n21);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(660)
		Float tmp187 = n33;		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(660)
		Float tmp188 = (tmp186 * tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(660)
		Float tmp189 = (tmp185 + tmp188);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(660)
		Float tmp190 = (n11 * n24);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(660)
		Float tmp191 = n33;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(660)
		Float tmp192 = (tmp190 * tmp191);		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(660)
		Float tmp193 = (tmp189 - tmp192);		HX_STACK_VAR(tmp193,"tmp193");
		HX_STACK_LINE(660)
		Float tmp194 = (n13 * n21);		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(660)
		Float tmp195 = n34;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(660)
		Float tmp196 = (tmp194 * tmp195);		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(660)
		Float tmp197 = (tmp193 - tmp196);		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(660)
		Float tmp198 = (n11 * n23);		HX_STACK_VAR(tmp198,"tmp198");
		HX_STACK_LINE(660)
		Float tmp199 = n34;		HX_STACK_VAR(tmp199,"tmp199");
		HX_STACK_LINE(660)
		Float tmp200 = (tmp198 * tmp199);		HX_STACK_VAR(tmp200,"tmp200");
		HX_STACK_LINE(660)
		Float tmp201 = (tmp197 + tmp200);		HX_STACK_VAR(tmp201,"tmp201");
		HX_STACK_LINE(660)
		te[(int)13] = tmp201;
		HX_STACK_LINE(660)
		Float tmp202 = (n22 * n34);		HX_STACK_VAR(tmp202,"tmp202");
		HX_STACK_LINE(660)
		Float tmp203 = n41;		HX_STACK_VAR(tmp203,"tmp203");
		HX_STACK_LINE(660)
		Float tmp204 = (tmp202 * tmp203);		HX_STACK_VAR(tmp204,"tmp204");
		HX_STACK_LINE(660)
		Float tmp205 = (n24 * n32);		HX_STACK_VAR(tmp205,"tmp205");
		HX_STACK_LINE(660)
		Float tmp206 = n41;		HX_STACK_VAR(tmp206,"tmp206");
		HX_STACK_LINE(660)
		Float tmp207 = (tmp205 * tmp206);		HX_STACK_VAR(tmp207,"tmp207");
		HX_STACK_LINE(660)
		Float tmp208 = (tmp204 - tmp207);		HX_STACK_VAR(tmp208,"tmp208");
		HX_STACK_LINE(660)
		Float tmp209 = (n24 * n31);		HX_STACK_VAR(tmp209,"tmp209");
		HX_STACK_LINE(660)
		Float tmp210 = n42;		HX_STACK_VAR(tmp210,"tmp210");
		HX_STACK_LINE(660)
		Float tmp211 = (tmp209 * tmp210);		HX_STACK_VAR(tmp211,"tmp211");
		HX_STACK_LINE(660)
		Float tmp212 = (tmp208 + tmp211);		HX_STACK_VAR(tmp212,"tmp212");
		HX_STACK_LINE(660)
		Float tmp213 = (n21 * n34);		HX_STACK_VAR(tmp213,"tmp213");
		HX_STACK_LINE(660)
		Float tmp214 = n42;		HX_STACK_VAR(tmp214,"tmp214");
		HX_STACK_LINE(660)
		Float tmp215 = (tmp213 * tmp214);		HX_STACK_VAR(tmp215,"tmp215");
		HX_STACK_LINE(660)
		Float tmp216 = (tmp212 - tmp215);		HX_STACK_VAR(tmp216,"tmp216");
		HX_STACK_LINE(660)
		Float tmp217 = (n22 * n31);		HX_STACK_VAR(tmp217,"tmp217");
		HX_STACK_LINE(660)
		Float tmp218 = n44;		HX_STACK_VAR(tmp218,"tmp218");
		HX_STACK_LINE(660)
		Float tmp219 = (tmp217 * tmp218);		HX_STACK_VAR(tmp219,"tmp219");
		HX_STACK_LINE(660)
		Float tmp220 = (tmp216 - tmp219);		HX_STACK_VAR(tmp220,"tmp220");
		HX_STACK_LINE(660)
		Float tmp221 = (n21 * n32);		HX_STACK_VAR(tmp221,"tmp221");
		HX_STACK_LINE(660)
		Float tmp222 = n44;		HX_STACK_VAR(tmp222,"tmp222");
		HX_STACK_LINE(660)
		Float tmp223 = (tmp221 * tmp222);		HX_STACK_VAR(tmp223,"tmp223");
		HX_STACK_LINE(660)
		Float tmp224 = (tmp220 + tmp223);		HX_STACK_VAR(tmp224,"tmp224");
		HX_STACK_LINE(660)
		te[(int)2] = tmp224;
		HX_STACK_LINE(660)
		Float tmp225 = (n14 * n32);		HX_STACK_VAR(tmp225,"tmp225");
		HX_STACK_LINE(660)
		Float tmp226 = n41;		HX_STACK_VAR(tmp226,"tmp226");
		HX_STACK_LINE(660)
		Float tmp227 = (tmp225 * tmp226);		HX_STACK_VAR(tmp227,"tmp227");
		HX_STACK_LINE(660)
		Float tmp228 = (n12 * n34);		HX_STACK_VAR(tmp228,"tmp228");
		HX_STACK_LINE(660)
		Float tmp229 = n41;		HX_STACK_VAR(tmp229,"tmp229");
		HX_STACK_LINE(660)
		Float tmp230 = (tmp228 * tmp229);		HX_STACK_VAR(tmp230,"tmp230");
		HX_STACK_LINE(660)
		Float tmp231 = (tmp227 - tmp230);		HX_STACK_VAR(tmp231,"tmp231");
		HX_STACK_LINE(660)
		Float tmp232 = (n14 * n31);		HX_STACK_VAR(tmp232,"tmp232");
		HX_STACK_LINE(660)
		Float tmp233 = n42;		HX_STACK_VAR(tmp233,"tmp233");
		HX_STACK_LINE(660)
		Float tmp234 = (tmp232 * tmp233);		HX_STACK_VAR(tmp234,"tmp234");
		HX_STACK_LINE(660)
		Float tmp235 = (tmp231 - tmp234);		HX_STACK_VAR(tmp235,"tmp235");
		HX_STACK_LINE(660)
		Float tmp236 = (n11 * n34);		HX_STACK_VAR(tmp236,"tmp236");
		HX_STACK_LINE(660)
		Float tmp237 = n42;		HX_STACK_VAR(tmp237,"tmp237");
		HX_STACK_LINE(660)
		Float tmp238 = (tmp236 * tmp237);		HX_STACK_VAR(tmp238,"tmp238");
		HX_STACK_LINE(660)
		Float tmp239 = (tmp235 + tmp238);		HX_STACK_VAR(tmp239,"tmp239");
		HX_STACK_LINE(660)
		Float tmp240 = (n12 * n31);		HX_STACK_VAR(tmp240,"tmp240");
		HX_STACK_LINE(660)
		Float tmp241 = n44;		HX_STACK_VAR(tmp241,"tmp241");
		HX_STACK_LINE(660)
		Float tmp242 = (tmp240 * tmp241);		HX_STACK_VAR(tmp242,"tmp242");
		HX_STACK_LINE(660)
		Float tmp243 = (tmp239 + tmp242);		HX_STACK_VAR(tmp243,"tmp243");
		HX_STACK_LINE(660)
		Float tmp244 = (n11 * n32);		HX_STACK_VAR(tmp244,"tmp244");
		HX_STACK_LINE(660)
		Float tmp245 = n44;		HX_STACK_VAR(tmp245,"tmp245");
		HX_STACK_LINE(660)
		Float tmp246 = (tmp244 * tmp245);		HX_STACK_VAR(tmp246,"tmp246");
		HX_STACK_LINE(660)
		Float tmp247 = (tmp243 - tmp246);		HX_STACK_VAR(tmp247,"tmp247");
		HX_STACK_LINE(660)
		te[(int)6] = tmp247;
		HX_STACK_LINE(660)
		Float tmp248 = (n12 * n24);		HX_STACK_VAR(tmp248,"tmp248");
		HX_STACK_LINE(660)
		Float tmp249 = n41;		HX_STACK_VAR(tmp249,"tmp249");
		HX_STACK_LINE(660)
		Float tmp250 = (tmp248 * tmp249);		HX_STACK_VAR(tmp250,"tmp250");
		HX_STACK_LINE(660)
		Float tmp251 = (n14 * n22);		HX_STACK_VAR(tmp251,"tmp251");
		HX_STACK_LINE(660)
		Float tmp252 = n41;		HX_STACK_VAR(tmp252,"tmp252");
		HX_STACK_LINE(660)
		Float tmp253 = (tmp251 * tmp252);		HX_STACK_VAR(tmp253,"tmp253");
		HX_STACK_LINE(660)
		Float tmp254 = (tmp250 - tmp253);		HX_STACK_VAR(tmp254,"tmp254");
		HX_STACK_LINE(660)
		Float tmp255 = (n14 * n21);		HX_STACK_VAR(tmp255,"tmp255");
		HX_STACK_LINE(660)
		Float tmp256 = n42;		HX_STACK_VAR(tmp256,"tmp256");
		HX_STACK_LINE(660)
		Float tmp257 = (tmp255 * tmp256);		HX_STACK_VAR(tmp257,"tmp257");
		HX_STACK_LINE(660)
		Float tmp258 = (tmp254 + tmp257);		HX_STACK_VAR(tmp258,"tmp258");
		HX_STACK_LINE(660)
		Float tmp259 = (n11 * n24);		HX_STACK_VAR(tmp259,"tmp259");
		HX_STACK_LINE(660)
		Float tmp260 = n42;		HX_STACK_VAR(tmp260,"tmp260");
		HX_STACK_LINE(660)
		Float tmp261 = (tmp259 * tmp260);		HX_STACK_VAR(tmp261,"tmp261");
		HX_STACK_LINE(660)
		Float tmp262 = (tmp258 - tmp261);		HX_STACK_VAR(tmp262,"tmp262");
		HX_STACK_LINE(660)
		Float tmp263 = (n12 * n21);		HX_STACK_VAR(tmp263,"tmp263");
		HX_STACK_LINE(660)
		Float tmp264 = n44;		HX_STACK_VAR(tmp264,"tmp264");
		HX_STACK_LINE(660)
		Float tmp265 = (tmp263 * tmp264);		HX_STACK_VAR(tmp265,"tmp265");
		HX_STACK_LINE(660)
		Float tmp266 = (tmp262 - tmp265);		HX_STACK_VAR(tmp266,"tmp266");
		HX_STACK_LINE(660)
		Float tmp267 = (n11 * n22);		HX_STACK_VAR(tmp267,"tmp267");
		HX_STACK_LINE(660)
		Float tmp268 = n44;		HX_STACK_VAR(tmp268,"tmp268");
		HX_STACK_LINE(660)
		Float tmp269 = (tmp267 * tmp268);		HX_STACK_VAR(tmp269,"tmp269");
		HX_STACK_LINE(660)
		Float tmp270 = (tmp266 + tmp269);		HX_STACK_VAR(tmp270,"tmp270");
		HX_STACK_LINE(660)
		te[(int)10] = tmp270;
		HX_STACK_LINE(660)
		Float tmp271 = (n14 * n22);		HX_STACK_VAR(tmp271,"tmp271");
		HX_STACK_LINE(660)
		Float tmp272 = n31;		HX_STACK_VAR(tmp272,"tmp272");
		HX_STACK_LINE(660)
		Float tmp273 = (tmp271 * tmp272);		HX_STACK_VAR(tmp273,"tmp273");
		HX_STACK_LINE(660)
		Float tmp274 = (n12 * n24);		HX_STACK_VAR(tmp274,"tmp274");
		HX_STACK_LINE(660)
		Float tmp275 = n31;		HX_STACK_VAR(tmp275,"tmp275");
		HX_STACK_LINE(660)
		Float tmp276 = (tmp274 * tmp275);		HX_STACK_VAR(tmp276,"tmp276");
		HX_STACK_LINE(660)
		Float tmp277 = (tmp273 - tmp276);		HX_STACK_VAR(tmp277,"tmp277");
		HX_STACK_LINE(660)
		Float tmp278 = (n14 * n21);		HX_STACK_VAR(tmp278,"tmp278");
		HX_STACK_LINE(660)
		Float tmp279 = n32;		HX_STACK_VAR(tmp279,"tmp279");
		HX_STACK_LINE(660)
		Float tmp280 = (tmp278 * tmp279);		HX_STACK_VAR(tmp280,"tmp280");
		HX_STACK_LINE(660)
		Float tmp281 = (tmp277 - tmp280);		HX_STACK_VAR(tmp281,"tmp281");
		HX_STACK_LINE(660)
		Float tmp282 = (n11 * n24);		HX_STACK_VAR(tmp282,"tmp282");
		HX_STACK_LINE(660)
		Float tmp283 = n32;		HX_STACK_VAR(tmp283,"tmp283");
		HX_STACK_LINE(660)
		Float tmp284 = (tmp282 * tmp283);		HX_STACK_VAR(tmp284,"tmp284");
		HX_STACK_LINE(660)
		Float tmp285 = (tmp281 + tmp284);		HX_STACK_VAR(tmp285,"tmp285");
		HX_STACK_LINE(660)
		Float tmp286 = (n12 * n21);		HX_STACK_VAR(tmp286,"tmp286");
		HX_STACK_LINE(660)
		Float tmp287 = n34;		HX_STACK_VAR(tmp287,"tmp287");
		HX_STACK_LINE(660)
		Float tmp288 = (tmp286 * tmp287);		HX_STACK_VAR(tmp288,"tmp288");
		HX_STACK_LINE(660)
		Float tmp289 = (tmp285 + tmp288);		HX_STACK_VAR(tmp289,"tmp289");
		HX_STACK_LINE(660)
		Float tmp290 = (n11 * n22);		HX_STACK_VAR(tmp290,"tmp290");
		HX_STACK_LINE(660)
		Float tmp291 = n34;		HX_STACK_VAR(tmp291,"tmp291");
		HX_STACK_LINE(660)
		Float tmp292 = (tmp290 * tmp291);		HX_STACK_VAR(tmp292,"tmp292");
		HX_STACK_LINE(660)
		Float tmp293 = (tmp289 - tmp292);		HX_STACK_VAR(tmp293,"tmp293");
		HX_STACK_LINE(660)
		te[(int)14] = tmp293;
		HX_STACK_LINE(660)
		Float tmp294 = (n23 * n32);		HX_STACK_VAR(tmp294,"tmp294");
		HX_STACK_LINE(660)
		Float tmp295 = n41;		HX_STACK_VAR(tmp295,"tmp295");
		HX_STACK_LINE(660)
		Float tmp296 = (tmp294 * tmp295);		HX_STACK_VAR(tmp296,"tmp296");
		HX_STACK_LINE(660)
		Float tmp297 = (n22 * n33);		HX_STACK_VAR(tmp297,"tmp297");
		HX_STACK_LINE(660)
		Float tmp298 = n41;		HX_STACK_VAR(tmp298,"tmp298");
		HX_STACK_LINE(660)
		Float tmp299 = (tmp297 * tmp298);		HX_STACK_VAR(tmp299,"tmp299");
		HX_STACK_LINE(660)
		Float tmp300 = (tmp296 - tmp299);		HX_STACK_VAR(tmp300,"tmp300");
		HX_STACK_LINE(660)
		Float tmp301 = (n23 * n31);		HX_STACK_VAR(tmp301,"tmp301");
		HX_STACK_LINE(660)
		Float tmp302 = n42;		HX_STACK_VAR(tmp302,"tmp302");
		HX_STACK_LINE(660)
		Float tmp303 = (tmp301 * tmp302);		HX_STACK_VAR(tmp303,"tmp303");
		HX_STACK_LINE(660)
		Float tmp304 = (tmp300 - tmp303);		HX_STACK_VAR(tmp304,"tmp304");
		HX_STACK_LINE(660)
		Float tmp305 = (n21 * n33);		HX_STACK_VAR(tmp305,"tmp305");
		HX_STACK_LINE(660)
		Float tmp306 = n42;		HX_STACK_VAR(tmp306,"tmp306");
		HX_STACK_LINE(660)
		Float tmp307 = (tmp305 * tmp306);		HX_STACK_VAR(tmp307,"tmp307");
		HX_STACK_LINE(660)
		Float tmp308 = (tmp304 + tmp307);		HX_STACK_VAR(tmp308,"tmp308");
		HX_STACK_LINE(660)
		Float tmp309 = (n22 * n31);		HX_STACK_VAR(tmp309,"tmp309");
		HX_STACK_LINE(660)
		Float tmp310 = n43;		HX_STACK_VAR(tmp310,"tmp310");
		HX_STACK_LINE(660)
		Float tmp311 = (tmp309 * tmp310);		HX_STACK_VAR(tmp311,"tmp311");
		HX_STACK_LINE(660)
		Float tmp312 = (tmp308 + tmp311);		HX_STACK_VAR(tmp312,"tmp312");
		HX_STACK_LINE(660)
		Float tmp313 = (n21 * n32);		HX_STACK_VAR(tmp313,"tmp313");
		HX_STACK_LINE(660)
		Float tmp314 = n43;		HX_STACK_VAR(tmp314,"tmp314");
		HX_STACK_LINE(660)
		Float tmp315 = (tmp313 * tmp314);		HX_STACK_VAR(tmp315,"tmp315");
		HX_STACK_LINE(660)
		Float tmp316 = (tmp312 - tmp315);		HX_STACK_VAR(tmp316,"tmp316");
		HX_STACK_LINE(660)
		te[(int)3] = tmp316;
		HX_STACK_LINE(660)
		Float tmp317 = (n12 * n33);		HX_STACK_VAR(tmp317,"tmp317");
		HX_STACK_LINE(660)
		Float tmp318 = n41;		HX_STACK_VAR(tmp318,"tmp318");
		HX_STACK_LINE(660)
		Float tmp319 = (tmp317 * tmp318);		HX_STACK_VAR(tmp319,"tmp319");
		HX_STACK_LINE(660)
		Float tmp320 = (n13 * n32);		HX_STACK_VAR(tmp320,"tmp320");
		HX_STACK_LINE(660)
		Float tmp321 = n41;		HX_STACK_VAR(tmp321,"tmp321");
		HX_STACK_LINE(660)
		Float tmp322 = (tmp320 * tmp321);		HX_STACK_VAR(tmp322,"tmp322");
		HX_STACK_LINE(660)
		Float tmp323 = (tmp319 - tmp322);		HX_STACK_VAR(tmp323,"tmp323");
		HX_STACK_LINE(660)
		Float tmp324 = (n13 * n31);		HX_STACK_VAR(tmp324,"tmp324");
		HX_STACK_LINE(660)
		Float tmp325 = n42;		HX_STACK_VAR(tmp325,"tmp325");
		HX_STACK_LINE(660)
		Float tmp326 = (tmp324 * tmp325);		HX_STACK_VAR(tmp326,"tmp326");
		HX_STACK_LINE(660)
		Float tmp327 = (tmp323 + tmp326);		HX_STACK_VAR(tmp327,"tmp327");
		HX_STACK_LINE(660)
		Float tmp328 = (n11 * n33);		HX_STACK_VAR(tmp328,"tmp328");
		HX_STACK_LINE(660)
		Float tmp329 = n42;		HX_STACK_VAR(tmp329,"tmp329");
		HX_STACK_LINE(660)
		Float tmp330 = (tmp328 * tmp329);		HX_STACK_VAR(tmp330,"tmp330");
		HX_STACK_LINE(660)
		Float tmp331 = (tmp327 - tmp330);		HX_STACK_VAR(tmp331,"tmp331");
		HX_STACK_LINE(660)
		Float tmp332 = (n12 * n31);		HX_STACK_VAR(tmp332,"tmp332");
		HX_STACK_LINE(660)
		Float tmp333 = n43;		HX_STACK_VAR(tmp333,"tmp333");
		HX_STACK_LINE(660)
		Float tmp334 = (tmp332 * tmp333);		HX_STACK_VAR(tmp334,"tmp334");
		HX_STACK_LINE(660)
		Float tmp335 = (tmp331 - tmp334);		HX_STACK_VAR(tmp335,"tmp335");
		HX_STACK_LINE(660)
		Float tmp336 = (n11 * n32);		HX_STACK_VAR(tmp336,"tmp336");
		HX_STACK_LINE(660)
		Float tmp337 = n43;		HX_STACK_VAR(tmp337,"tmp337");
		HX_STACK_LINE(660)
		Float tmp338 = (tmp336 * tmp337);		HX_STACK_VAR(tmp338,"tmp338");
		HX_STACK_LINE(660)
		Float tmp339 = (tmp335 + tmp338);		HX_STACK_VAR(tmp339,"tmp339");
		HX_STACK_LINE(660)
		te[(int)7] = tmp339;
		HX_STACK_LINE(660)
		Float tmp340 = (n13 * n22);		HX_STACK_VAR(tmp340,"tmp340");
		HX_STACK_LINE(660)
		Float tmp341 = n41;		HX_STACK_VAR(tmp341,"tmp341");
		HX_STACK_LINE(660)
		Float tmp342 = (tmp340 * tmp341);		HX_STACK_VAR(tmp342,"tmp342");
		HX_STACK_LINE(660)
		Float tmp343 = (n12 * n23);		HX_STACK_VAR(tmp343,"tmp343");
		HX_STACK_LINE(660)
		Float tmp344 = n41;		HX_STACK_VAR(tmp344,"tmp344");
		HX_STACK_LINE(660)
		Float tmp345 = (tmp343 * tmp344);		HX_STACK_VAR(tmp345,"tmp345");
		HX_STACK_LINE(660)
		Float tmp346 = (tmp342 - tmp345);		HX_STACK_VAR(tmp346,"tmp346");
		HX_STACK_LINE(660)
		Float tmp347 = (n13 * n21);		HX_STACK_VAR(tmp347,"tmp347");
		HX_STACK_LINE(660)
		Float tmp348 = n42;		HX_STACK_VAR(tmp348,"tmp348");
		HX_STACK_LINE(660)
		Float tmp349 = (tmp347 * tmp348);		HX_STACK_VAR(tmp349,"tmp349");
		HX_STACK_LINE(660)
		Float tmp350 = (tmp346 - tmp349);		HX_STACK_VAR(tmp350,"tmp350");
		HX_STACK_LINE(660)
		Float tmp351 = (n11 * n23);		HX_STACK_VAR(tmp351,"tmp351");
		HX_STACK_LINE(660)
		Float tmp352 = n42;		HX_STACK_VAR(tmp352,"tmp352");
		HX_STACK_LINE(660)
		Float tmp353 = (tmp351 * tmp352);		HX_STACK_VAR(tmp353,"tmp353");
		HX_STACK_LINE(660)
		Float tmp354 = (tmp350 + tmp353);		HX_STACK_VAR(tmp354,"tmp354");
		HX_STACK_LINE(660)
		Float tmp355 = (n12 * n21);		HX_STACK_VAR(tmp355,"tmp355");
		HX_STACK_LINE(660)
		Float tmp356 = n43;		HX_STACK_VAR(tmp356,"tmp356");
		HX_STACK_LINE(660)
		Float tmp357 = (tmp355 * tmp356);		HX_STACK_VAR(tmp357,"tmp357");
		HX_STACK_LINE(660)
		Float tmp358 = (tmp354 + tmp357);		HX_STACK_VAR(tmp358,"tmp358");
		HX_STACK_LINE(660)
		Float tmp359 = (n11 * n22);		HX_STACK_VAR(tmp359,"tmp359");
		HX_STACK_LINE(660)
		Float tmp360 = n43;		HX_STACK_VAR(tmp360,"tmp360");
		HX_STACK_LINE(660)
		Float tmp361 = (tmp359 * tmp360);		HX_STACK_VAR(tmp361,"tmp361");
		HX_STACK_LINE(660)
		Float tmp362 = (tmp358 - tmp361);		HX_STACK_VAR(tmp362,"tmp362");
		HX_STACK_LINE(660)
		te[(int)11] = tmp362;
		HX_STACK_LINE(660)
		Float tmp363 = (n12 * n23);		HX_STACK_VAR(tmp363,"tmp363");
		HX_STACK_LINE(660)
		Float tmp364 = n31;		HX_STACK_VAR(tmp364,"tmp364");
		HX_STACK_LINE(660)
		Float tmp365 = (tmp363 * tmp364);		HX_STACK_VAR(tmp365,"tmp365");
		HX_STACK_LINE(660)
		Float tmp366 = (n13 * n22);		HX_STACK_VAR(tmp366,"tmp366");
		HX_STACK_LINE(660)
		Float tmp367 = n31;		HX_STACK_VAR(tmp367,"tmp367");
		HX_STACK_LINE(660)
		Float tmp368 = (tmp366 * tmp367);		HX_STACK_VAR(tmp368,"tmp368");
		HX_STACK_LINE(660)
		Float tmp369 = (tmp365 - tmp368);		HX_STACK_VAR(tmp369,"tmp369");
		HX_STACK_LINE(660)
		Float tmp370 = (n13 * n21);		HX_STACK_VAR(tmp370,"tmp370");
		HX_STACK_LINE(660)
		Float tmp371 = n32;		HX_STACK_VAR(tmp371,"tmp371");
		HX_STACK_LINE(660)
		Float tmp372 = (tmp370 * tmp371);		HX_STACK_VAR(tmp372,"tmp372");
		HX_STACK_LINE(660)
		Float tmp373 = (tmp369 + tmp372);		HX_STACK_VAR(tmp373,"tmp373");
		HX_STACK_LINE(660)
		Float tmp374 = (n11 * n23);		HX_STACK_VAR(tmp374,"tmp374");
		HX_STACK_LINE(660)
		Float tmp375 = n32;		HX_STACK_VAR(tmp375,"tmp375");
		HX_STACK_LINE(660)
		Float tmp376 = (tmp374 * tmp375);		HX_STACK_VAR(tmp376,"tmp376");
		HX_STACK_LINE(660)
		Float tmp377 = (tmp373 - tmp376);		HX_STACK_VAR(tmp377,"tmp377");
		HX_STACK_LINE(660)
		Float tmp378 = (n12 * n21);		HX_STACK_VAR(tmp378,"tmp378");
		HX_STACK_LINE(660)
		Float tmp379 = n33;		HX_STACK_VAR(tmp379,"tmp379");
		HX_STACK_LINE(660)
		Float tmp380 = (tmp378 * tmp379);		HX_STACK_VAR(tmp380,"tmp380");
		HX_STACK_LINE(660)
		Float tmp381 = (tmp377 - tmp380);		HX_STACK_VAR(tmp381,"tmp381");
		HX_STACK_LINE(660)
		Float tmp382 = (n11 * n22);		HX_STACK_VAR(tmp382,"tmp382");
		HX_STACK_LINE(660)
		Float tmp383 = n33;		HX_STACK_VAR(tmp383,"tmp383");
		HX_STACK_LINE(660)
		Float tmp384 = (tmp382 * tmp383);		HX_STACK_VAR(tmp384,"tmp384");
		HX_STACK_LINE(660)
		Float tmp385 = (tmp381 + tmp384);		HX_STACK_VAR(tmp385,"tmp385");
		HX_STACK_LINE(660)
		te[(int)15] = tmp385;
		HX_STACK_LINE(660)
		Float tmp386 = me->__get((int)0);		HX_STACK_VAR(tmp386,"tmp386");
		HX_STACK_LINE(660)
		Float tmp387 = te->__get((int)0);		HX_STACK_VAR(tmp387,"tmp387");
		HX_STACK_LINE(660)
		Float tmp388 = (tmp386 * tmp387);		HX_STACK_VAR(tmp388,"tmp388");
		HX_STACK_LINE(660)
		Float tmp389 = me->__get((int)1);		HX_STACK_VAR(tmp389,"tmp389");
		HX_STACK_LINE(660)
		Float tmp390 = te->__get((int)4);		HX_STACK_VAR(tmp390,"tmp390");
		HX_STACK_LINE(660)
		Float tmp391 = (tmp389 * tmp390);		HX_STACK_VAR(tmp391,"tmp391");
		HX_STACK_LINE(660)
		Float tmp392 = (tmp388 + tmp391);		HX_STACK_VAR(tmp392,"tmp392");
		HX_STACK_LINE(660)
		Float tmp393 = me->__get((int)2);		HX_STACK_VAR(tmp393,"tmp393");
		HX_STACK_LINE(660)
		Float tmp394 = te->__get((int)8);		HX_STACK_VAR(tmp394,"tmp394");
		HX_STACK_LINE(660)
		Float tmp395 = (tmp393 * tmp394);		HX_STACK_VAR(tmp395,"tmp395");
		HX_STACK_LINE(660)
		Float tmp396 = (tmp392 + tmp395);		HX_STACK_VAR(tmp396,"tmp396");
		HX_STACK_LINE(660)
		Float tmp397 = me->__get((int)3);		HX_STACK_VAR(tmp397,"tmp397");
		HX_STACK_LINE(660)
		Float tmp398 = te->__get((int)12);		HX_STACK_VAR(tmp398,"tmp398");
		HX_STACK_LINE(660)
		Float tmp399 = (tmp397 * tmp398);		HX_STACK_VAR(tmp399,"tmp399");
		HX_STACK_LINE(660)
		Float tmp400 = (tmp396 + tmp399);		HX_STACK_VAR(tmp400,"tmp400");
		HX_STACK_LINE(660)
		Float det = tmp400;		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(660)
		bool tmp401 = (det == (int)0);		HX_STACK_VAR(tmp401,"tmp401");
		HX_STACK_LINE(660)
		if ((tmp401)){
			HX_STACK_LINE(660)
			Dynamic tmp402 = hx::SourceInfo(HX_HCSTRING("Matrix.hx","\xfd","\x8a","\xaa","\x4f"),696,HX_HCSTRING("phoenix.Matrix","\x60","\x61","\xa9","\x39"),HX_HCSTRING("getInverse","\xba","\xd1","\x52","\x8d"));		HX_STACK_VAR(tmp402,"tmp402");
			HX_STACK_LINE(660)
			::haxe::Log_obj::trace(HX_HCSTRING("Matrix.getInverse: cant invert matrix, determinant is 0","\xf5","\x2d","\x16","\x59"),tmp402);
			HX_STACK_LINE(660)
			{
				HX_STACK_LINE(660)
				{
					HX_STACK_LINE(660)
					Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(660)
					e[(int)0] = (int)1;
					HX_STACK_LINE(660)
					e[(int)4] = (int)0;
					HX_STACK_LINE(660)
					e[(int)8] = (int)0;
					HX_STACK_LINE(660)
					e[(int)12] = (int)0;
					HX_STACK_LINE(660)
					e[(int)1] = (int)0;
					HX_STACK_LINE(660)
					e[(int)5] = (int)1;
					HX_STACK_LINE(660)
					e[(int)9] = (int)0;
					HX_STACK_LINE(660)
					e[(int)13] = (int)0;
					HX_STACK_LINE(660)
					e[(int)2] = (int)0;
					HX_STACK_LINE(660)
					e[(int)6] = (int)0;
					HX_STACK_LINE(660)
					e[(int)10] = (int)1;
					HX_STACK_LINE(660)
					e[(int)14] = (int)0;
					HX_STACK_LINE(660)
					e[(int)3] = (int)0;
					HX_STACK_LINE(660)
					e[(int)7] = (int)0;
					HX_STACK_LINE(660)
					e[(int)11] = (int)0;
					HX_STACK_LINE(660)
					e[(int)15] = (int)1;
					HX_STACK_LINE(660)
					_this;
				}
				HX_STACK_LINE(660)
				_this;
			}
			HX_STACK_LINE(660)
			tmp = _this;
		}
		else{
			HX_STACK_LINE(660)
			{
				HX_STACK_LINE(660)
				Float tmp402 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp402,"tmp402");
				HX_STACK_LINE(660)
				Float _s = tmp402;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(660)
				Array< Float > te1 = _this->elements;		HX_STACK_VAR(te1,"te1");
				HX_STACK_LINE(660)
				Float tmp403 = _s;		HX_STACK_VAR(tmp403,"tmp403");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)0],tmp403);
				HX_STACK_LINE(660)
				Float tmp404 = _s;		HX_STACK_VAR(tmp404,"tmp404");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)4],tmp404);
				HX_STACK_LINE(660)
				Float tmp405 = _s;		HX_STACK_VAR(tmp405,"tmp405");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)8],tmp405);
				HX_STACK_LINE(660)
				Float tmp406 = _s;		HX_STACK_VAR(tmp406,"tmp406");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)12],tmp406);
				HX_STACK_LINE(660)
				Float tmp407 = _s;		HX_STACK_VAR(tmp407,"tmp407");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)1],tmp407);
				HX_STACK_LINE(660)
				Float tmp408 = _s;		HX_STACK_VAR(tmp408,"tmp408");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)5],tmp408);
				HX_STACK_LINE(660)
				Float tmp409 = _s;		HX_STACK_VAR(tmp409,"tmp409");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)9],tmp409);
				HX_STACK_LINE(660)
				Float tmp410 = _s;		HX_STACK_VAR(tmp410,"tmp410");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)13],tmp410);
				HX_STACK_LINE(660)
				Float tmp411 = _s;		HX_STACK_VAR(tmp411,"tmp411");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)2],tmp411);
				HX_STACK_LINE(660)
				Float tmp412 = _s;		HX_STACK_VAR(tmp412,"tmp412");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)6],tmp412);
				HX_STACK_LINE(660)
				Float tmp413 = _s;		HX_STACK_VAR(tmp413,"tmp413");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)10],tmp413);
				HX_STACK_LINE(660)
				Float tmp414 = _s;		HX_STACK_VAR(tmp414,"tmp414");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)14],tmp414);
				HX_STACK_LINE(660)
				Float tmp415 = _s;		HX_STACK_VAR(tmp415,"tmp415");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)3],tmp415);
				HX_STACK_LINE(660)
				Float tmp416 = _s;		HX_STACK_VAR(tmp416,"tmp416");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)7],tmp416);
				HX_STACK_LINE(660)
				Float tmp417 = _s;		HX_STACK_VAR(tmp417,"tmp417");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)11],tmp417);
				HX_STACK_LINE(660)
				Float tmp418 = _s;		HX_STACK_VAR(tmp418,"tmp418");
				HX_STACK_LINE(660)
				hx::MultEq(te1[(int)15],tmp418);
				HX_STACK_LINE(660)
				_this;
			}
			HX_STACK_LINE(660)
			tmp = _this;
		}
	}
	HX_STACK_LINE(660)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,inverse,return )

::phoenix::Matrix Matrix_obj::getInverse( ::phoenix::Matrix _m){
	HX_STACK_FRAME("phoenix.Matrix","getInverse",0xaa937208,"phoenix.Matrix.getInverse","phoenix/Matrix.hx",663,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(667)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(668)
	Array< Float > me = _m->elements;		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(670)
	Float tmp = me->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(670)
	Float n11 = tmp;		HX_STACK_VAR(n11,"n11");
	HX_STACK_LINE(670)
	Float tmp1 = me->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(670)
	Float n12 = tmp1;		HX_STACK_VAR(n12,"n12");
	HX_STACK_LINE(670)
	Float tmp2 = me->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(670)
	Float n13 = tmp2;		HX_STACK_VAR(n13,"n13");
	HX_STACK_LINE(670)
	Float tmp3 = me->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(670)
	Float n14 = tmp3;		HX_STACK_VAR(n14,"n14");
	HX_STACK_LINE(671)
	Float tmp4 = me->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(671)
	Float n21 = tmp4;		HX_STACK_VAR(n21,"n21");
	HX_STACK_LINE(671)
	Float tmp5 = me->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(671)
	Float n22 = tmp5;		HX_STACK_VAR(n22,"n22");
	HX_STACK_LINE(671)
	Float tmp6 = me->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(671)
	Float n23 = tmp6;		HX_STACK_VAR(n23,"n23");
	HX_STACK_LINE(671)
	Float tmp7 = me->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(671)
	Float n24 = tmp7;		HX_STACK_VAR(n24,"n24");
	HX_STACK_LINE(672)
	Float tmp8 = me->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(672)
	Float n31 = tmp8;		HX_STACK_VAR(n31,"n31");
	HX_STACK_LINE(672)
	Float tmp9 = me->__get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(672)
	Float n32 = tmp9;		HX_STACK_VAR(n32,"n32");
	HX_STACK_LINE(672)
	Float tmp10 = me->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(672)
	Float n33 = tmp10;		HX_STACK_VAR(n33,"n33");
	HX_STACK_LINE(672)
	Float tmp11 = me->__get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(672)
	Float n34 = tmp11;		HX_STACK_VAR(n34,"n34");
	HX_STACK_LINE(673)
	Float tmp12 = me->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(673)
	Float n41 = tmp12;		HX_STACK_VAR(n41,"n41");
	HX_STACK_LINE(673)
	Float tmp13 = me->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(673)
	Float n42 = tmp13;		HX_STACK_VAR(n42,"n42");
	HX_STACK_LINE(673)
	Float tmp14 = me->__get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(673)
	Float n43 = tmp14;		HX_STACK_VAR(n43,"n43");
	HX_STACK_LINE(673)
	Float tmp15 = me->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(673)
	Float n44 = tmp15;		HX_STACK_VAR(n44,"n44");
	HX_STACK_LINE(675)
	Float tmp16 = (n23 * n34);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(675)
	Float tmp17 = n42;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(675)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(675)
	Float tmp19 = (n24 * n33);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(675)
	Float tmp20 = n42;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(675)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(675)
	Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(675)
	Float tmp23 = (n24 * n32);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(675)
	Float tmp24 = n43;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(675)
	Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(675)
	Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(675)
	Float tmp27 = (n22 * n34);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(675)
	Float tmp28 = n43;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(675)
	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(675)
	Float tmp30 = (tmp26 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(675)
	Float tmp31 = (n23 * n32);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(675)
	Float tmp32 = n44;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(675)
	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(675)
	Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(675)
	Float tmp35 = (n22 * n33);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(675)
	Float tmp36 = n44;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(675)
	Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(675)
	Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(675)
	te[(int)0] = tmp38;
	HX_STACK_LINE(676)
	Float tmp39 = (n14 * n33);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(676)
	Float tmp40 = n42;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(676)
	Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(676)
	Float tmp42 = (n13 * n34);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(676)
	Float tmp43 = n42;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(676)
	Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(676)
	Float tmp45 = (tmp41 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(676)
	Float tmp46 = (n14 * n32);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(676)
	Float tmp47 = n43;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(676)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(676)
	Float tmp49 = (tmp45 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(676)
	Float tmp50 = (n12 * n34);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(676)
	Float tmp51 = n43;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(676)
	Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(676)
	Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(676)
	Float tmp54 = (n13 * n32);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(676)
	Float tmp55 = n44;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(676)
	Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(676)
	Float tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(676)
	Float tmp58 = (n12 * n33);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(676)
	Float tmp59 = n44;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(676)
	Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(676)
	Float tmp61 = (tmp57 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(676)
	te[(int)4] = tmp61;
	HX_STACK_LINE(677)
	Float tmp62 = (n13 * n24);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(677)
	Float tmp63 = n42;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(677)
	Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(677)
	Float tmp65 = (n14 * n23);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(677)
	Float tmp66 = n42;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(677)
	Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(677)
	Float tmp68 = (tmp64 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(677)
	Float tmp69 = (n14 * n22);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(677)
	Float tmp70 = n43;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(677)
	Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(677)
	Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(677)
	Float tmp73 = (n12 * n24);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(677)
	Float tmp74 = n43;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(677)
	Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(677)
	Float tmp76 = (tmp72 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(677)
	Float tmp77 = (n13 * n22);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(677)
	Float tmp78 = n44;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(677)
	Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(677)
	Float tmp80 = (tmp76 - tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(677)
	Float tmp81 = (n12 * n23);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(677)
	Float tmp82 = n44;		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(677)
	Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(677)
	Float tmp84 = (tmp80 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(677)
	te[(int)8] = tmp84;
	HX_STACK_LINE(678)
	Float tmp85 = (n14 * n23);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(678)
	Float tmp86 = n32;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(678)
	Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(678)
	Float tmp88 = (n13 * n24);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(678)
	Float tmp89 = n32;		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(678)
	Float tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(678)
	Float tmp91 = (tmp87 - tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(678)
	Float tmp92 = (n14 * n22);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(678)
	Float tmp93 = n33;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(678)
	Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(678)
	Float tmp95 = (tmp91 - tmp94);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(678)
	Float tmp96 = (n12 * n24);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(678)
	Float tmp97 = n33;		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(678)
	Float tmp98 = (tmp96 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(678)
	Float tmp99 = (tmp95 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(678)
	Float tmp100 = (n13 * n22);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(678)
	Float tmp101 = n34;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(678)
	Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(678)
	Float tmp103 = (tmp99 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(678)
	Float tmp104 = (n12 * n23);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(678)
	Float tmp105 = n34;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(678)
	Float tmp106 = (tmp104 * tmp105);		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(678)
	Float tmp107 = (tmp103 - tmp106);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(678)
	te[(int)12] = tmp107;
	HX_STACK_LINE(679)
	Float tmp108 = (n24 * n33);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(679)
	Float tmp109 = n41;		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(679)
	Float tmp110 = (tmp108 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(679)
	Float tmp111 = (n23 * n34);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(679)
	Float tmp112 = n41;		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(679)
	Float tmp113 = (tmp111 * tmp112);		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(679)
	Float tmp114 = (tmp110 - tmp113);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(679)
	Float tmp115 = (n24 * n31);		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(679)
	Float tmp116 = n43;		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(679)
	Float tmp117 = (tmp115 * tmp116);		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(679)
	Float tmp118 = (tmp114 - tmp117);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(679)
	Float tmp119 = (n21 * n34);		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(679)
	Float tmp120 = n43;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(679)
	Float tmp121 = (tmp119 * tmp120);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(679)
	Float tmp122 = (tmp118 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(679)
	Float tmp123 = (n23 * n31);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(679)
	Float tmp124 = n44;		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(679)
	Float tmp125 = (tmp123 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(679)
	Float tmp126 = (tmp122 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(679)
	Float tmp127 = (n21 * n33);		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(679)
	Float tmp128 = n44;		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(679)
	Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(679)
	Float tmp130 = (tmp126 - tmp129);		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(679)
	te[(int)1] = tmp130;
	HX_STACK_LINE(680)
	Float tmp131 = (n13 * n34);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(680)
	Float tmp132 = n41;		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(680)
	Float tmp133 = (tmp131 * tmp132);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(680)
	Float tmp134 = (n14 * n33);		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(680)
	Float tmp135 = n41;		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(680)
	Float tmp136 = (tmp134 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(680)
	Float tmp137 = (tmp133 - tmp136);		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(680)
	Float tmp138 = (n14 * n31);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(680)
	Float tmp139 = n43;		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(680)
	Float tmp140 = (tmp138 * tmp139);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(680)
	Float tmp141 = (tmp137 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(680)
	Float tmp142 = (n11 * n34);		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(680)
	Float tmp143 = n43;		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(680)
	Float tmp144 = (tmp142 * tmp143);		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(680)
	Float tmp145 = (tmp141 - tmp144);		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(680)
	Float tmp146 = (n13 * n31);		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(680)
	Float tmp147 = n44;		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(680)
	Float tmp148 = (tmp146 * tmp147);		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(680)
	Float tmp149 = (tmp145 - tmp148);		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(680)
	Float tmp150 = (n11 * n33);		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(680)
	Float tmp151 = n44;		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(680)
	Float tmp152 = (tmp150 * tmp151);		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(680)
	Float tmp153 = (tmp149 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(680)
	te[(int)5] = tmp153;
	HX_STACK_LINE(681)
	Float tmp154 = (n14 * n23);		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(681)
	Float tmp155 = n41;		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(681)
	Float tmp156 = (tmp154 * tmp155);		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(681)
	Float tmp157 = (n13 * n24);		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(681)
	Float tmp158 = n41;		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(681)
	Float tmp159 = (tmp157 * tmp158);		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(681)
	Float tmp160 = (tmp156 - tmp159);		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(681)
	Float tmp161 = (n14 * n21);		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(681)
	Float tmp162 = n43;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(681)
	Float tmp163 = (tmp161 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(681)
	Float tmp164 = (tmp160 - tmp163);		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(681)
	Float tmp165 = (n11 * n24);		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(681)
	Float tmp166 = n43;		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(681)
	Float tmp167 = (tmp165 * tmp166);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(681)
	Float tmp168 = (tmp164 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(681)
	Float tmp169 = (n13 * n21);		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(681)
	Float tmp170 = n44;		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(681)
	Float tmp171 = (tmp169 * tmp170);		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(681)
	Float tmp172 = (tmp168 + tmp171);		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(681)
	Float tmp173 = (n11 * n23);		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(681)
	Float tmp174 = n44;		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(681)
	Float tmp175 = (tmp173 * tmp174);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(681)
	Float tmp176 = (tmp172 - tmp175);		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(681)
	te[(int)9] = tmp176;
	HX_STACK_LINE(682)
	Float tmp177 = (n13 * n24);		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(682)
	Float tmp178 = n31;		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(682)
	Float tmp179 = (tmp177 * tmp178);		HX_STACK_VAR(tmp179,"tmp179");
	HX_STACK_LINE(682)
	Float tmp180 = (n14 * n23);		HX_STACK_VAR(tmp180,"tmp180");
	HX_STACK_LINE(682)
	Float tmp181 = n31;		HX_STACK_VAR(tmp181,"tmp181");
	HX_STACK_LINE(682)
	Float tmp182 = (tmp180 * tmp181);		HX_STACK_VAR(tmp182,"tmp182");
	HX_STACK_LINE(682)
	Float tmp183 = (tmp179 - tmp182);		HX_STACK_VAR(tmp183,"tmp183");
	HX_STACK_LINE(682)
	Float tmp184 = (n14 * n21);		HX_STACK_VAR(tmp184,"tmp184");
	HX_STACK_LINE(682)
	Float tmp185 = n33;		HX_STACK_VAR(tmp185,"tmp185");
	HX_STACK_LINE(682)
	Float tmp186 = (tmp184 * tmp185);		HX_STACK_VAR(tmp186,"tmp186");
	HX_STACK_LINE(682)
	Float tmp187 = (tmp183 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
	HX_STACK_LINE(682)
	Float tmp188 = (n11 * n24);		HX_STACK_VAR(tmp188,"tmp188");
	HX_STACK_LINE(682)
	Float tmp189 = n33;		HX_STACK_VAR(tmp189,"tmp189");
	HX_STACK_LINE(682)
	Float tmp190 = (tmp188 * tmp189);		HX_STACK_VAR(tmp190,"tmp190");
	HX_STACK_LINE(682)
	Float tmp191 = (tmp187 - tmp190);		HX_STACK_VAR(tmp191,"tmp191");
	HX_STACK_LINE(682)
	Float tmp192 = (n13 * n21);		HX_STACK_VAR(tmp192,"tmp192");
	HX_STACK_LINE(682)
	Float tmp193 = n34;		HX_STACK_VAR(tmp193,"tmp193");
	HX_STACK_LINE(682)
	Float tmp194 = (tmp192 * tmp193);		HX_STACK_VAR(tmp194,"tmp194");
	HX_STACK_LINE(682)
	Float tmp195 = (tmp191 - tmp194);		HX_STACK_VAR(tmp195,"tmp195");
	HX_STACK_LINE(682)
	Float tmp196 = (n11 * n23);		HX_STACK_VAR(tmp196,"tmp196");
	HX_STACK_LINE(682)
	Float tmp197 = n34;		HX_STACK_VAR(tmp197,"tmp197");
	HX_STACK_LINE(682)
	Float tmp198 = (tmp196 * tmp197);		HX_STACK_VAR(tmp198,"tmp198");
	HX_STACK_LINE(682)
	Float tmp199 = (tmp195 + tmp198);		HX_STACK_VAR(tmp199,"tmp199");
	HX_STACK_LINE(682)
	te[(int)13] = tmp199;
	HX_STACK_LINE(683)
	Float tmp200 = (n22 * n34);		HX_STACK_VAR(tmp200,"tmp200");
	HX_STACK_LINE(683)
	Float tmp201 = n41;		HX_STACK_VAR(tmp201,"tmp201");
	HX_STACK_LINE(683)
	Float tmp202 = (tmp200 * tmp201);		HX_STACK_VAR(tmp202,"tmp202");
	HX_STACK_LINE(683)
	Float tmp203 = (n24 * n32);		HX_STACK_VAR(tmp203,"tmp203");
	HX_STACK_LINE(683)
	Float tmp204 = n41;		HX_STACK_VAR(tmp204,"tmp204");
	HX_STACK_LINE(683)
	Float tmp205 = (tmp203 * tmp204);		HX_STACK_VAR(tmp205,"tmp205");
	HX_STACK_LINE(683)
	Float tmp206 = (tmp202 - tmp205);		HX_STACK_VAR(tmp206,"tmp206");
	HX_STACK_LINE(683)
	Float tmp207 = (n24 * n31);		HX_STACK_VAR(tmp207,"tmp207");
	HX_STACK_LINE(683)
	Float tmp208 = n42;		HX_STACK_VAR(tmp208,"tmp208");
	HX_STACK_LINE(683)
	Float tmp209 = (tmp207 * tmp208);		HX_STACK_VAR(tmp209,"tmp209");
	HX_STACK_LINE(683)
	Float tmp210 = (tmp206 + tmp209);		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(683)
	Float tmp211 = (n21 * n34);		HX_STACK_VAR(tmp211,"tmp211");
	HX_STACK_LINE(683)
	Float tmp212 = n42;		HX_STACK_VAR(tmp212,"tmp212");
	HX_STACK_LINE(683)
	Float tmp213 = (tmp211 * tmp212);		HX_STACK_VAR(tmp213,"tmp213");
	HX_STACK_LINE(683)
	Float tmp214 = (tmp210 - tmp213);		HX_STACK_VAR(tmp214,"tmp214");
	HX_STACK_LINE(683)
	Float tmp215 = (n22 * n31);		HX_STACK_VAR(tmp215,"tmp215");
	HX_STACK_LINE(683)
	Float tmp216 = n44;		HX_STACK_VAR(tmp216,"tmp216");
	HX_STACK_LINE(683)
	Float tmp217 = (tmp215 * tmp216);		HX_STACK_VAR(tmp217,"tmp217");
	HX_STACK_LINE(683)
	Float tmp218 = (tmp214 - tmp217);		HX_STACK_VAR(tmp218,"tmp218");
	HX_STACK_LINE(683)
	Float tmp219 = (n21 * n32);		HX_STACK_VAR(tmp219,"tmp219");
	HX_STACK_LINE(683)
	Float tmp220 = n44;		HX_STACK_VAR(tmp220,"tmp220");
	HX_STACK_LINE(683)
	Float tmp221 = (tmp219 * tmp220);		HX_STACK_VAR(tmp221,"tmp221");
	HX_STACK_LINE(683)
	Float tmp222 = (tmp218 + tmp221);		HX_STACK_VAR(tmp222,"tmp222");
	HX_STACK_LINE(683)
	te[(int)2] = tmp222;
	HX_STACK_LINE(684)
	Float tmp223 = (n14 * n32);		HX_STACK_VAR(tmp223,"tmp223");
	HX_STACK_LINE(684)
	Float tmp224 = n41;		HX_STACK_VAR(tmp224,"tmp224");
	HX_STACK_LINE(684)
	Float tmp225 = (tmp223 * tmp224);		HX_STACK_VAR(tmp225,"tmp225");
	HX_STACK_LINE(684)
	Float tmp226 = (n12 * n34);		HX_STACK_VAR(tmp226,"tmp226");
	HX_STACK_LINE(684)
	Float tmp227 = n41;		HX_STACK_VAR(tmp227,"tmp227");
	HX_STACK_LINE(684)
	Float tmp228 = (tmp226 * tmp227);		HX_STACK_VAR(tmp228,"tmp228");
	HX_STACK_LINE(684)
	Float tmp229 = (tmp225 - tmp228);		HX_STACK_VAR(tmp229,"tmp229");
	HX_STACK_LINE(684)
	Float tmp230 = (n14 * n31);		HX_STACK_VAR(tmp230,"tmp230");
	HX_STACK_LINE(684)
	Float tmp231 = n42;		HX_STACK_VAR(tmp231,"tmp231");
	HX_STACK_LINE(684)
	Float tmp232 = (tmp230 * tmp231);		HX_STACK_VAR(tmp232,"tmp232");
	HX_STACK_LINE(684)
	Float tmp233 = (tmp229 - tmp232);		HX_STACK_VAR(tmp233,"tmp233");
	HX_STACK_LINE(684)
	Float tmp234 = (n11 * n34);		HX_STACK_VAR(tmp234,"tmp234");
	HX_STACK_LINE(684)
	Float tmp235 = n42;		HX_STACK_VAR(tmp235,"tmp235");
	HX_STACK_LINE(684)
	Float tmp236 = (tmp234 * tmp235);		HX_STACK_VAR(tmp236,"tmp236");
	HX_STACK_LINE(684)
	Float tmp237 = (tmp233 + tmp236);		HX_STACK_VAR(tmp237,"tmp237");
	HX_STACK_LINE(684)
	Float tmp238 = (n12 * n31);		HX_STACK_VAR(tmp238,"tmp238");
	HX_STACK_LINE(684)
	Float tmp239 = n44;		HX_STACK_VAR(tmp239,"tmp239");
	HX_STACK_LINE(684)
	Float tmp240 = (tmp238 * tmp239);		HX_STACK_VAR(tmp240,"tmp240");
	HX_STACK_LINE(684)
	Float tmp241 = (tmp237 + tmp240);		HX_STACK_VAR(tmp241,"tmp241");
	HX_STACK_LINE(684)
	Float tmp242 = (n11 * n32);		HX_STACK_VAR(tmp242,"tmp242");
	HX_STACK_LINE(684)
	Float tmp243 = n44;		HX_STACK_VAR(tmp243,"tmp243");
	HX_STACK_LINE(684)
	Float tmp244 = (tmp242 * tmp243);		HX_STACK_VAR(tmp244,"tmp244");
	HX_STACK_LINE(684)
	Float tmp245 = (tmp241 - tmp244);		HX_STACK_VAR(tmp245,"tmp245");
	HX_STACK_LINE(684)
	te[(int)6] = tmp245;
	HX_STACK_LINE(685)
	Float tmp246 = (n12 * n24);		HX_STACK_VAR(tmp246,"tmp246");
	HX_STACK_LINE(685)
	Float tmp247 = n41;		HX_STACK_VAR(tmp247,"tmp247");
	HX_STACK_LINE(685)
	Float tmp248 = (tmp246 * tmp247);		HX_STACK_VAR(tmp248,"tmp248");
	HX_STACK_LINE(685)
	Float tmp249 = (n14 * n22);		HX_STACK_VAR(tmp249,"tmp249");
	HX_STACK_LINE(685)
	Float tmp250 = n41;		HX_STACK_VAR(tmp250,"tmp250");
	HX_STACK_LINE(685)
	Float tmp251 = (tmp249 * tmp250);		HX_STACK_VAR(tmp251,"tmp251");
	HX_STACK_LINE(685)
	Float tmp252 = (tmp248 - tmp251);		HX_STACK_VAR(tmp252,"tmp252");
	HX_STACK_LINE(685)
	Float tmp253 = (n14 * n21);		HX_STACK_VAR(tmp253,"tmp253");
	HX_STACK_LINE(685)
	Float tmp254 = n42;		HX_STACK_VAR(tmp254,"tmp254");
	HX_STACK_LINE(685)
	Float tmp255 = (tmp253 * tmp254);		HX_STACK_VAR(tmp255,"tmp255");
	HX_STACK_LINE(685)
	Float tmp256 = (tmp252 + tmp255);		HX_STACK_VAR(tmp256,"tmp256");
	HX_STACK_LINE(685)
	Float tmp257 = (n11 * n24);		HX_STACK_VAR(tmp257,"tmp257");
	HX_STACK_LINE(685)
	Float tmp258 = n42;		HX_STACK_VAR(tmp258,"tmp258");
	HX_STACK_LINE(685)
	Float tmp259 = (tmp257 * tmp258);		HX_STACK_VAR(tmp259,"tmp259");
	HX_STACK_LINE(685)
	Float tmp260 = (tmp256 - tmp259);		HX_STACK_VAR(tmp260,"tmp260");
	HX_STACK_LINE(685)
	Float tmp261 = (n12 * n21);		HX_STACK_VAR(tmp261,"tmp261");
	HX_STACK_LINE(685)
	Float tmp262 = n44;		HX_STACK_VAR(tmp262,"tmp262");
	HX_STACK_LINE(685)
	Float tmp263 = (tmp261 * tmp262);		HX_STACK_VAR(tmp263,"tmp263");
	HX_STACK_LINE(685)
	Float tmp264 = (tmp260 - tmp263);		HX_STACK_VAR(tmp264,"tmp264");
	HX_STACK_LINE(685)
	Float tmp265 = (n11 * n22);		HX_STACK_VAR(tmp265,"tmp265");
	HX_STACK_LINE(685)
	Float tmp266 = n44;		HX_STACK_VAR(tmp266,"tmp266");
	HX_STACK_LINE(685)
	Float tmp267 = (tmp265 * tmp266);		HX_STACK_VAR(tmp267,"tmp267");
	HX_STACK_LINE(685)
	Float tmp268 = (tmp264 + tmp267);		HX_STACK_VAR(tmp268,"tmp268");
	HX_STACK_LINE(685)
	te[(int)10] = tmp268;
	HX_STACK_LINE(686)
	Float tmp269 = (n14 * n22);		HX_STACK_VAR(tmp269,"tmp269");
	HX_STACK_LINE(686)
	Float tmp270 = n31;		HX_STACK_VAR(tmp270,"tmp270");
	HX_STACK_LINE(686)
	Float tmp271 = (tmp269 * tmp270);		HX_STACK_VAR(tmp271,"tmp271");
	HX_STACK_LINE(686)
	Float tmp272 = (n12 * n24);		HX_STACK_VAR(tmp272,"tmp272");
	HX_STACK_LINE(686)
	Float tmp273 = n31;		HX_STACK_VAR(tmp273,"tmp273");
	HX_STACK_LINE(686)
	Float tmp274 = (tmp272 * tmp273);		HX_STACK_VAR(tmp274,"tmp274");
	HX_STACK_LINE(686)
	Float tmp275 = (tmp271 - tmp274);		HX_STACK_VAR(tmp275,"tmp275");
	HX_STACK_LINE(686)
	Float tmp276 = (n14 * n21);		HX_STACK_VAR(tmp276,"tmp276");
	HX_STACK_LINE(686)
	Float tmp277 = n32;		HX_STACK_VAR(tmp277,"tmp277");
	HX_STACK_LINE(686)
	Float tmp278 = (tmp276 * tmp277);		HX_STACK_VAR(tmp278,"tmp278");
	HX_STACK_LINE(686)
	Float tmp279 = (tmp275 - tmp278);		HX_STACK_VAR(tmp279,"tmp279");
	HX_STACK_LINE(686)
	Float tmp280 = (n11 * n24);		HX_STACK_VAR(tmp280,"tmp280");
	HX_STACK_LINE(686)
	Float tmp281 = n32;		HX_STACK_VAR(tmp281,"tmp281");
	HX_STACK_LINE(686)
	Float tmp282 = (tmp280 * tmp281);		HX_STACK_VAR(tmp282,"tmp282");
	HX_STACK_LINE(686)
	Float tmp283 = (tmp279 + tmp282);		HX_STACK_VAR(tmp283,"tmp283");
	HX_STACK_LINE(686)
	Float tmp284 = (n12 * n21);		HX_STACK_VAR(tmp284,"tmp284");
	HX_STACK_LINE(686)
	Float tmp285 = n34;		HX_STACK_VAR(tmp285,"tmp285");
	HX_STACK_LINE(686)
	Float tmp286 = (tmp284 * tmp285);		HX_STACK_VAR(tmp286,"tmp286");
	HX_STACK_LINE(686)
	Float tmp287 = (tmp283 + tmp286);		HX_STACK_VAR(tmp287,"tmp287");
	HX_STACK_LINE(686)
	Float tmp288 = (n11 * n22);		HX_STACK_VAR(tmp288,"tmp288");
	HX_STACK_LINE(686)
	Float tmp289 = n34;		HX_STACK_VAR(tmp289,"tmp289");
	HX_STACK_LINE(686)
	Float tmp290 = (tmp288 * tmp289);		HX_STACK_VAR(tmp290,"tmp290");
	HX_STACK_LINE(686)
	Float tmp291 = (tmp287 - tmp290);		HX_STACK_VAR(tmp291,"tmp291");
	HX_STACK_LINE(686)
	te[(int)14] = tmp291;
	HX_STACK_LINE(687)
	Float tmp292 = (n23 * n32);		HX_STACK_VAR(tmp292,"tmp292");
	HX_STACK_LINE(687)
	Float tmp293 = n41;		HX_STACK_VAR(tmp293,"tmp293");
	HX_STACK_LINE(687)
	Float tmp294 = (tmp292 * tmp293);		HX_STACK_VAR(tmp294,"tmp294");
	HX_STACK_LINE(687)
	Float tmp295 = (n22 * n33);		HX_STACK_VAR(tmp295,"tmp295");
	HX_STACK_LINE(687)
	Float tmp296 = n41;		HX_STACK_VAR(tmp296,"tmp296");
	HX_STACK_LINE(687)
	Float tmp297 = (tmp295 * tmp296);		HX_STACK_VAR(tmp297,"tmp297");
	HX_STACK_LINE(687)
	Float tmp298 = (tmp294 - tmp297);		HX_STACK_VAR(tmp298,"tmp298");
	HX_STACK_LINE(687)
	Float tmp299 = (n23 * n31);		HX_STACK_VAR(tmp299,"tmp299");
	HX_STACK_LINE(687)
	Float tmp300 = n42;		HX_STACK_VAR(tmp300,"tmp300");
	HX_STACK_LINE(687)
	Float tmp301 = (tmp299 * tmp300);		HX_STACK_VAR(tmp301,"tmp301");
	HX_STACK_LINE(687)
	Float tmp302 = (tmp298 - tmp301);		HX_STACK_VAR(tmp302,"tmp302");
	HX_STACK_LINE(687)
	Float tmp303 = (n21 * n33);		HX_STACK_VAR(tmp303,"tmp303");
	HX_STACK_LINE(687)
	Float tmp304 = n42;		HX_STACK_VAR(tmp304,"tmp304");
	HX_STACK_LINE(687)
	Float tmp305 = (tmp303 * tmp304);		HX_STACK_VAR(tmp305,"tmp305");
	HX_STACK_LINE(687)
	Float tmp306 = (tmp302 + tmp305);		HX_STACK_VAR(tmp306,"tmp306");
	HX_STACK_LINE(687)
	Float tmp307 = (n22 * n31);		HX_STACK_VAR(tmp307,"tmp307");
	HX_STACK_LINE(687)
	Float tmp308 = n43;		HX_STACK_VAR(tmp308,"tmp308");
	HX_STACK_LINE(687)
	Float tmp309 = (tmp307 * tmp308);		HX_STACK_VAR(tmp309,"tmp309");
	HX_STACK_LINE(687)
	Float tmp310 = (tmp306 + tmp309);		HX_STACK_VAR(tmp310,"tmp310");
	HX_STACK_LINE(687)
	Float tmp311 = (n21 * n32);		HX_STACK_VAR(tmp311,"tmp311");
	HX_STACK_LINE(687)
	Float tmp312 = n43;		HX_STACK_VAR(tmp312,"tmp312");
	HX_STACK_LINE(687)
	Float tmp313 = (tmp311 * tmp312);		HX_STACK_VAR(tmp313,"tmp313");
	HX_STACK_LINE(687)
	Float tmp314 = (tmp310 - tmp313);		HX_STACK_VAR(tmp314,"tmp314");
	HX_STACK_LINE(687)
	te[(int)3] = tmp314;
	HX_STACK_LINE(688)
	Float tmp315 = (n12 * n33);		HX_STACK_VAR(tmp315,"tmp315");
	HX_STACK_LINE(688)
	Float tmp316 = n41;		HX_STACK_VAR(tmp316,"tmp316");
	HX_STACK_LINE(688)
	Float tmp317 = (tmp315 * tmp316);		HX_STACK_VAR(tmp317,"tmp317");
	HX_STACK_LINE(688)
	Float tmp318 = (n13 * n32);		HX_STACK_VAR(tmp318,"tmp318");
	HX_STACK_LINE(688)
	Float tmp319 = n41;		HX_STACK_VAR(tmp319,"tmp319");
	HX_STACK_LINE(688)
	Float tmp320 = (tmp318 * tmp319);		HX_STACK_VAR(tmp320,"tmp320");
	HX_STACK_LINE(688)
	Float tmp321 = (tmp317 - tmp320);		HX_STACK_VAR(tmp321,"tmp321");
	HX_STACK_LINE(688)
	Float tmp322 = (n13 * n31);		HX_STACK_VAR(tmp322,"tmp322");
	HX_STACK_LINE(688)
	Float tmp323 = n42;		HX_STACK_VAR(tmp323,"tmp323");
	HX_STACK_LINE(688)
	Float tmp324 = (tmp322 * tmp323);		HX_STACK_VAR(tmp324,"tmp324");
	HX_STACK_LINE(688)
	Float tmp325 = (tmp321 + tmp324);		HX_STACK_VAR(tmp325,"tmp325");
	HX_STACK_LINE(688)
	Float tmp326 = (n11 * n33);		HX_STACK_VAR(tmp326,"tmp326");
	HX_STACK_LINE(688)
	Float tmp327 = n42;		HX_STACK_VAR(tmp327,"tmp327");
	HX_STACK_LINE(688)
	Float tmp328 = (tmp326 * tmp327);		HX_STACK_VAR(tmp328,"tmp328");
	HX_STACK_LINE(688)
	Float tmp329 = (tmp325 - tmp328);		HX_STACK_VAR(tmp329,"tmp329");
	HX_STACK_LINE(688)
	Float tmp330 = (n12 * n31);		HX_STACK_VAR(tmp330,"tmp330");
	HX_STACK_LINE(688)
	Float tmp331 = n43;		HX_STACK_VAR(tmp331,"tmp331");
	HX_STACK_LINE(688)
	Float tmp332 = (tmp330 * tmp331);		HX_STACK_VAR(tmp332,"tmp332");
	HX_STACK_LINE(688)
	Float tmp333 = (tmp329 - tmp332);		HX_STACK_VAR(tmp333,"tmp333");
	HX_STACK_LINE(688)
	Float tmp334 = (n11 * n32);		HX_STACK_VAR(tmp334,"tmp334");
	HX_STACK_LINE(688)
	Float tmp335 = n43;		HX_STACK_VAR(tmp335,"tmp335");
	HX_STACK_LINE(688)
	Float tmp336 = (tmp334 * tmp335);		HX_STACK_VAR(tmp336,"tmp336");
	HX_STACK_LINE(688)
	Float tmp337 = (tmp333 + tmp336);		HX_STACK_VAR(tmp337,"tmp337");
	HX_STACK_LINE(688)
	te[(int)7] = tmp337;
	HX_STACK_LINE(689)
	Float tmp338 = (n13 * n22);		HX_STACK_VAR(tmp338,"tmp338");
	HX_STACK_LINE(689)
	Float tmp339 = n41;		HX_STACK_VAR(tmp339,"tmp339");
	HX_STACK_LINE(689)
	Float tmp340 = (tmp338 * tmp339);		HX_STACK_VAR(tmp340,"tmp340");
	HX_STACK_LINE(689)
	Float tmp341 = (n12 * n23);		HX_STACK_VAR(tmp341,"tmp341");
	HX_STACK_LINE(689)
	Float tmp342 = n41;		HX_STACK_VAR(tmp342,"tmp342");
	HX_STACK_LINE(689)
	Float tmp343 = (tmp341 * tmp342);		HX_STACK_VAR(tmp343,"tmp343");
	HX_STACK_LINE(689)
	Float tmp344 = (tmp340 - tmp343);		HX_STACK_VAR(tmp344,"tmp344");
	HX_STACK_LINE(689)
	Float tmp345 = (n13 * n21);		HX_STACK_VAR(tmp345,"tmp345");
	HX_STACK_LINE(689)
	Float tmp346 = n42;		HX_STACK_VAR(tmp346,"tmp346");
	HX_STACK_LINE(689)
	Float tmp347 = (tmp345 * tmp346);		HX_STACK_VAR(tmp347,"tmp347");
	HX_STACK_LINE(689)
	Float tmp348 = (tmp344 - tmp347);		HX_STACK_VAR(tmp348,"tmp348");
	HX_STACK_LINE(689)
	Float tmp349 = (n11 * n23);		HX_STACK_VAR(tmp349,"tmp349");
	HX_STACK_LINE(689)
	Float tmp350 = n42;		HX_STACK_VAR(tmp350,"tmp350");
	HX_STACK_LINE(689)
	Float tmp351 = (tmp349 * tmp350);		HX_STACK_VAR(tmp351,"tmp351");
	HX_STACK_LINE(689)
	Float tmp352 = (tmp348 + tmp351);		HX_STACK_VAR(tmp352,"tmp352");
	HX_STACK_LINE(689)
	Float tmp353 = (n12 * n21);		HX_STACK_VAR(tmp353,"tmp353");
	HX_STACK_LINE(689)
	Float tmp354 = n43;		HX_STACK_VAR(tmp354,"tmp354");
	HX_STACK_LINE(689)
	Float tmp355 = (tmp353 * tmp354);		HX_STACK_VAR(tmp355,"tmp355");
	HX_STACK_LINE(689)
	Float tmp356 = (tmp352 + tmp355);		HX_STACK_VAR(tmp356,"tmp356");
	HX_STACK_LINE(689)
	Float tmp357 = (n11 * n22);		HX_STACK_VAR(tmp357,"tmp357");
	HX_STACK_LINE(689)
	Float tmp358 = n43;		HX_STACK_VAR(tmp358,"tmp358");
	HX_STACK_LINE(689)
	Float tmp359 = (tmp357 * tmp358);		HX_STACK_VAR(tmp359,"tmp359");
	HX_STACK_LINE(689)
	Float tmp360 = (tmp356 - tmp359);		HX_STACK_VAR(tmp360,"tmp360");
	HX_STACK_LINE(689)
	te[(int)11] = tmp360;
	HX_STACK_LINE(690)
	Float tmp361 = (n12 * n23);		HX_STACK_VAR(tmp361,"tmp361");
	HX_STACK_LINE(690)
	Float tmp362 = n31;		HX_STACK_VAR(tmp362,"tmp362");
	HX_STACK_LINE(690)
	Float tmp363 = (tmp361 * tmp362);		HX_STACK_VAR(tmp363,"tmp363");
	HX_STACK_LINE(690)
	Float tmp364 = (n13 * n22);		HX_STACK_VAR(tmp364,"tmp364");
	HX_STACK_LINE(690)
	Float tmp365 = n31;		HX_STACK_VAR(tmp365,"tmp365");
	HX_STACK_LINE(690)
	Float tmp366 = (tmp364 * tmp365);		HX_STACK_VAR(tmp366,"tmp366");
	HX_STACK_LINE(690)
	Float tmp367 = (tmp363 - tmp366);		HX_STACK_VAR(tmp367,"tmp367");
	HX_STACK_LINE(690)
	Float tmp368 = (n13 * n21);		HX_STACK_VAR(tmp368,"tmp368");
	HX_STACK_LINE(690)
	Float tmp369 = n32;		HX_STACK_VAR(tmp369,"tmp369");
	HX_STACK_LINE(690)
	Float tmp370 = (tmp368 * tmp369);		HX_STACK_VAR(tmp370,"tmp370");
	HX_STACK_LINE(690)
	Float tmp371 = (tmp367 + tmp370);		HX_STACK_VAR(tmp371,"tmp371");
	HX_STACK_LINE(690)
	Float tmp372 = (n11 * n23);		HX_STACK_VAR(tmp372,"tmp372");
	HX_STACK_LINE(690)
	Float tmp373 = n32;		HX_STACK_VAR(tmp373,"tmp373");
	HX_STACK_LINE(690)
	Float tmp374 = (tmp372 * tmp373);		HX_STACK_VAR(tmp374,"tmp374");
	HX_STACK_LINE(690)
	Float tmp375 = (tmp371 - tmp374);		HX_STACK_VAR(tmp375,"tmp375");
	HX_STACK_LINE(690)
	Float tmp376 = (n12 * n21);		HX_STACK_VAR(tmp376,"tmp376");
	HX_STACK_LINE(690)
	Float tmp377 = n33;		HX_STACK_VAR(tmp377,"tmp377");
	HX_STACK_LINE(690)
	Float tmp378 = (tmp376 * tmp377);		HX_STACK_VAR(tmp378,"tmp378");
	HX_STACK_LINE(690)
	Float tmp379 = (tmp375 - tmp378);		HX_STACK_VAR(tmp379,"tmp379");
	HX_STACK_LINE(690)
	Float tmp380 = (n11 * n22);		HX_STACK_VAR(tmp380,"tmp380");
	HX_STACK_LINE(690)
	Float tmp381 = n33;		HX_STACK_VAR(tmp381,"tmp381");
	HX_STACK_LINE(690)
	Float tmp382 = (tmp380 * tmp381);		HX_STACK_VAR(tmp382,"tmp382");
	HX_STACK_LINE(690)
	Float tmp383 = (tmp379 + tmp382);		HX_STACK_VAR(tmp383,"tmp383");
	HX_STACK_LINE(690)
	te[(int)15] = tmp383;
	HX_STACK_LINE(692)
	Float tmp384 = me->__get((int)0);		HX_STACK_VAR(tmp384,"tmp384");
	HX_STACK_LINE(692)
	Float tmp385 = te->__get((int)0);		HX_STACK_VAR(tmp385,"tmp385");
	HX_STACK_LINE(692)
	Float tmp386 = (tmp384 * tmp385);		HX_STACK_VAR(tmp386,"tmp386");
	HX_STACK_LINE(692)
	Float tmp387 = me->__get((int)1);		HX_STACK_VAR(tmp387,"tmp387");
	HX_STACK_LINE(692)
	Float tmp388 = te->__get((int)4);		HX_STACK_VAR(tmp388,"tmp388");
	HX_STACK_LINE(692)
	Float tmp389 = (tmp387 * tmp388);		HX_STACK_VAR(tmp389,"tmp389");
	HX_STACK_LINE(692)
	Float tmp390 = (tmp386 + tmp389);		HX_STACK_VAR(tmp390,"tmp390");
	HX_STACK_LINE(692)
	Float tmp391 = me->__get((int)2);		HX_STACK_VAR(tmp391,"tmp391");
	HX_STACK_LINE(692)
	Float tmp392 = te->__get((int)8);		HX_STACK_VAR(tmp392,"tmp392");
	HX_STACK_LINE(692)
	Float tmp393 = (tmp391 * tmp392);		HX_STACK_VAR(tmp393,"tmp393");
	HX_STACK_LINE(692)
	Float tmp394 = (tmp390 + tmp393);		HX_STACK_VAR(tmp394,"tmp394");
	HX_STACK_LINE(692)
	Float tmp395 = me->__get((int)3);		HX_STACK_VAR(tmp395,"tmp395");
	HX_STACK_LINE(692)
	Float tmp396 = te->__get((int)12);		HX_STACK_VAR(tmp396,"tmp396");
	HX_STACK_LINE(692)
	Float tmp397 = (tmp395 * tmp396);		HX_STACK_VAR(tmp397,"tmp397");
	HX_STACK_LINE(692)
	Float tmp398 = (tmp394 + tmp397);		HX_STACK_VAR(tmp398,"tmp398");
	HX_STACK_LINE(692)
	Float det = tmp398;		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(694)
	bool tmp399 = (det == (int)0);		HX_STACK_VAR(tmp399,"tmp399");
	HX_STACK_LINE(694)
	if ((tmp399)){
		HX_STACK_LINE(696)
		Dynamic tmp400 = hx::SourceInfo(HX_HCSTRING("Matrix.hx","\xfd","\x8a","\xaa","\x4f"),696,HX_HCSTRING("phoenix.Matrix","\x60","\x61","\xa9","\x39"),HX_HCSTRING("getInverse","\xba","\xd1","\x52","\x8d"));		HX_STACK_VAR(tmp400,"tmp400");
		HX_STACK_LINE(696)
		::haxe::Log_obj::trace(HX_HCSTRING("Matrix.getInverse: cant invert matrix, determinant is 0","\xf5","\x2d","\x16","\x59"),tmp400);
		HX_STACK_LINE(698)
		{
			HX_STACK_LINE(698)
			{
				HX_STACK_LINE(698)
				Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(698)
				e[(int)0] = (int)1;
				HX_STACK_LINE(698)
				e[(int)4] = (int)0;
				HX_STACK_LINE(698)
				e[(int)8] = (int)0;
				HX_STACK_LINE(698)
				e[(int)12] = (int)0;
				HX_STACK_LINE(698)
				e[(int)1] = (int)0;
				HX_STACK_LINE(698)
				e[(int)5] = (int)1;
				HX_STACK_LINE(698)
				e[(int)9] = (int)0;
				HX_STACK_LINE(698)
				e[(int)13] = (int)0;
				HX_STACK_LINE(698)
				e[(int)2] = (int)0;
				HX_STACK_LINE(698)
				e[(int)6] = (int)0;
				HX_STACK_LINE(698)
				e[(int)10] = (int)1;
				HX_STACK_LINE(698)
				e[(int)14] = (int)0;
				HX_STACK_LINE(698)
				e[(int)3] = (int)0;
				HX_STACK_LINE(698)
				e[(int)7] = (int)0;
				HX_STACK_LINE(698)
				e[(int)11] = (int)0;
				HX_STACK_LINE(698)
				e[(int)15] = (int)1;
				HX_STACK_LINE(698)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(698)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(700)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(704)
	{
		HX_STACK_LINE(704)
		Float tmp400 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp400,"tmp400");
		HX_STACK_LINE(704)
		Float _s = tmp400;		HX_STACK_VAR(_s,"_s");
		HX_STACK_LINE(704)
		Array< Float > te1 = this->elements;		HX_STACK_VAR(te1,"te1");
		HX_STACK_LINE(704)
		Float tmp401 = _s;		HX_STACK_VAR(tmp401,"tmp401");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)0],tmp401);
		HX_STACK_LINE(704)
		Float tmp402 = _s;		HX_STACK_VAR(tmp402,"tmp402");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)4],tmp402);
		HX_STACK_LINE(704)
		Float tmp403 = _s;		HX_STACK_VAR(tmp403,"tmp403");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)8],tmp403);
		HX_STACK_LINE(704)
		Float tmp404 = _s;		HX_STACK_VAR(tmp404,"tmp404");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)12],tmp404);
		HX_STACK_LINE(704)
		Float tmp405 = _s;		HX_STACK_VAR(tmp405,"tmp405");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)1],tmp405);
		HX_STACK_LINE(704)
		Float tmp406 = _s;		HX_STACK_VAR(tmp406,"tmp406");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)5],tmp406);
		HX_STACK_LINE(704)
		Float tmp407 = _s;		HX_STACK_VAR(tmp407,"tmp407");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)9],tmp407);
		HX_STACK_LINE(704)
		Float tmp408 = _s;		HX_STACK_VAR(tmp408,"tmp408");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)13],tmp408);
		HX_STACK_LINE(704)
		Float tmp409 = _s;		HX_STACK_VAR(tmp409,"tmp409");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)2],tmp409);
		HX_STACK_LINE(704)
		Float tmp410 = _s;		HX_STACK_VAR(tmp410,"tmp410");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)6],tmp410);
		HX_STACK_LINE(704)
		Float tmp411 = _s;		HX_STACK_VAR(tmp411,"tmp411");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)10],tmp411);
		HX_STACK_LINE(704)
		Float tmp412 = _s;		HX_STACK_VAR(tmp412,"tmp412");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)14],tmp412);
		HX_STACK_LINE(704)
		Float tmp413 = _s;		HX_STACK_VAR(tmp413,"tmp413");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)3],tmp413);
		HX_STACK_LINE(704)
		Float tmp414 = _s;		HX_STACK_VAR(tmp414,"tmp414");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)7],tmp414);
		HX_STACK_LINE(704)
		Float tmp415 = _s;		HX_STACK_VAR(tmp415,"tmp415");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)11],tmp415);
		HX_STACK_LINE(704)
		Float tmp416 = _s;		HX_STACK_VAR(tmp416,"tmp416");
		HX_STACK_LINE(704)
		hx::MultEq(te1[(int)15],tmp416);
		HX_STACK_LINE(704)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(706)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,getInverse,return )

::phoenix::Matrix Matrix_obj::scale( ::phoenix::Vector _v){
	HX_STACK_FRAME("phoenix.Matrix","scale",0x75ae10fc,"phoenix.Matrix.scale","phoenix/Matrix.hx",711,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(713)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(715)
	Float _x = _v->x;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(716)
	Float _y = _v->y;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(717)
	Float _z = _v->z;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(719)
	Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	hx::MultEq(te[(int)0],tmp);
	HX_STACK_LINE(719)
	Float tmp1 = _y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(719)
	hx::MultEq(te[(int)4],tmp1);
	HX_STACK_LINE(719)
	Float tmp2 = _z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(719)
	hx::MultEq(te[(int)8],tmp2);
	HX_STACK_LINE(720)
	Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(720)
	hx::MultEq(te[(int)1],tmp3);
	HX_STACK_LINE(720)
	Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(720)
	hx::MultEq(te[(int)5],tmp4);
	HX_STACK_LINE(720)
	Float tmp5 = _z;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(720)
	hx::MultEq(te[(int)9],tmp5);
	HX_STACK_LINE(721)
	Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(721)
	hx::MultEq(te[(int)2],tmp6);
	HX_STACK_LINE(721)
	Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(721)
	hx::MultEq(te[(int)6],tmp7);
	HX_STACK_LINE(721)
	Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(721)
	hx::MultEq(te[(int)10],tmp8);
	HX_STACK_LINE(722)
	Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(722)
	hx::MultEq(te[(int)3],tmp9);
	HX_STACK_LINE(722)
	Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(722)
	hx::MultEq(te[(int)7],tmp10);
	HX_STACK_LINE(722)
	Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(722)
	hx::MultEq(te[(int)11],tmp11);
	HX_STACK_LINE(724)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,scale,return )

Float Matrix_obj::getMaxScaleOnAxis( ){
	HX_STACK_FRAME("phoenix.Matrix","getMaxScaleOnAxis",0x4896c7ee,"phoenix.Matrix.getMaxScaleOnAxis","phoenix/Matrix.hx",729,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(731)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(733)
	Float tmp = te->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(733)
	Float tmp1 = te->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(733)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(733)
	Float tmp3 = te->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(733)
	Float tmp4 = te->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(733)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(733)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(733)
	Float tmp7 = te->__get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(733)
	Float tmp8 = te->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(733)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(733)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(733)
	Float _scaleXSq = tmp10;		HX_STACK_VAR(_scaleXSq,"_scaleXSq");
	HX_STACK_LINE(734)
	Float tmp11 = te->__get((int)4);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(734)
	Float tmp12 = te->__get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(734)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(734)
	Float tmp14 = te->__get((int)5);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(734)
	Float tmp15 = te->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(734)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(734)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(734)
	Float tmp18 = te->__get((int)6);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(734)
	Float tmp19 = te->__get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(734)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(734)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(734)
	Float _scaleYSq = tmp21;		HX_STACK_VAR(_scaleYSq,"_scaleYSq");
	HX_STACK_LINE(735)
	Float tmp22 = te->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(735)
	Float tmp23 = te->__get((int)8);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(735)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(735)
	Float tmp25 = te->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(735)
	Float tmp26 = te->__get((int)9);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(735)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(735)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(735)
	Float tmp29 = te->__get((int)10);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(735)
	Float tmp30 = te->__get((int)10);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(735)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(735)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(735)
	Float _scaleZSq = tmp32;		HX_STACK_VAR(_scaleZSq,"_scaleZSq");
	HX_STACK_LINE(737)
	Float tmp33 = _scaleXSq;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(737)
	Float tmp34 = _scaleYSq;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(737)
	Float tmp35 = _scaleZSq;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(737)
	Float tmp36 = ::Math_obj::max(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(737)
	Float tmp37 = ::Math_obj::max(tmp33,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(737)
	Float tmp38 = ::Math_obj::sqrt(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(737)
	return tmp38;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,getMaxScaleOnAxis,return )

::phoenix::Matrix Matrix_obj::makeTranslation( Float _x,Float _y,Float _z){
	HX_STACK_FRAME("phoenix.Matrix","makeTranslation",0xddf09e95,"phoenix.Matrix.makeTranslation","phoenix/Matrix.hx",742,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(744)
	{
		HX_STACK_LINE(744)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(744)
		e[(int)0] = (int)1;
		HX_STACK_LINE(744)
		e[(int)4] = (int)0;
		HX_STACK_LINE(744)
		e[(int)8] = (int)0;
		HX_STACK_LINE(745)
		Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(744)
		e[(int)12] = tmp;
		HX_STACK_LINE(744)
		e[(int)1] = (int)0;
		HX_STACK_LINE(744)
		e[(int)5] = (int)1;
		HX_STACK_LINE(744)
		e[(int)9] = (int)0;
		HX_STACK_LINE(746)
		Float tmp1 = _y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(744)
		e[(int)13] = tmp1;
		HX_STACK_LINE(744)
		e[(int)2] = (int)0;
		HX_STACK_LINE(744)
		e[(int)6] = (int)0;
		HX_STACK_LINE(744)
		e[(int)10] = (int)1;
		HX_STACK_LINE(747)
		Float tmp2 = _z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(744)
		e[(int)14] = tmp2;
		HX_STACK_LINE(744)
		e[(int)3] = (int)0;
		HX_STACK_LINE(744)
		e[(int)7] = (int)0;
		HX_STACK_LINE(744)
		e[(int)11] = (int)0;
		HX_STACK_LINE(744)
		e[(int)15] = (int)1;
		HX_STACK_LINE(744)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(751)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,makeTranslation,return )

::phoenix::Matrix Matrix_obj::makeRotationX( Float _theta){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationX",0x060a55fe,"phoenix.Matrix.makeRotationX","phoenix/Matrix.hx",756,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_theta,"_theta")
	HX_STACK_LINE(758)
	Float tmp = _theta;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(758)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(758)
	Float _c = tmp1;		HX_STACK_VAR(_c,"_c");
	HX_STACK_LINE(759)
	Float tmp2 = _theta;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(759)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(759)
	Float _s = tmp3;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(761)
	{
		HX_STACK_LINE(761)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(761)
		e[(int)0] = (int)1;
		HX_STACK_LINE(761)
		e[(int)4] = (int)0;
		HX_STACK_LINE(761)
		e[(int)8] = (int)0;
		HX_STACK_LINE(761)
		e[(int)12] = (int)0;
		HX_STACK_LINE(761)
		e[(int)1] = (int)0;
		HX_STACK_LINE(763)
		Float tmp4 = _c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(761)
		e[(int)5] = tmp4;
		HX_STACK_LINE(763)
		Float tmp5 = _s;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(763)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(761)
		e[(int)9] = tmp6;
		HX_STACK_LINE(761)
		e[(int)13] = (int)0;
		HX_STACK_LINE(761)
		e[(int)2] = (int)0;
		HX_STACK_LINE(764)
		Float tmp7 = _s;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(761)
		e[(int)6] = tmp7;
		HX_STACK_LINE(764)
		Float tmp8 = _c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(761)
		e[(int)10] = tmp8;
		HX_STACK_LINE(761)
		e[(int)14] = (int)0;
		HX_STACK_LINE(761)
		e[(int)3] = (int)0;
		HX_STACK_LINE(761)
		e[(int)7] = (int)0;
		HX_STACK_LINE(761)
		e[(int)11] = (int)0;
		HX_STACK_LINE(761)
		e[(int)15] = (int)1;
		HX_STACK_LINE(761)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(768)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,makeRotationX,return )

::phoenix::Matrix Matrix_obj::makeRotationY( Float _theta){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationY",0x060a55ff,"phoenix.Matrix.makeRotationY","phoenix/Matrix.hx",773,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_theta,"_theta")
	HX_STACK_LINE(775)
	Float tmp = _theta;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(775)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(775)
	Float _c = tmp1;		HX_STACK_VAR(_c,"_c");
	HX_STACK_LINE(776)
	Float tmp2 = _theta;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(776)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(776)
	Float _s = tmp3;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(778)
	{
		HX_STACK_LINE(778)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(779)
		Float tmp4 = _c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(778)
		e[(int)0] = tmp4;
		HX_STACK_LINE(778)
		e[(int)4] = (int)0;
		HX_STACK_LINE(779)
		Float tmp5 = _s;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(778)
		e[(int)8] = tmp5;
		HX_STACK_LINE(778)
		e[(int)12] = (int)0;
		HX_STACK_LINE(778)
		e[(int)1] = (int)0;
		HX_STACK_LINE(778)
		e[(int)5] = (int)1;
		HX_STACK_LINE(778)
		e[(int)9] = (int)0;
		HX_STACK_LINE(778)
		e[(int)13] = (int)0;
		HX_STACK_LINE(781)
		Float tmp6 = _s;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(781)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(778)
		e[(int)2] = tmp7;
		HX_STACK_LINE(778)
		e[(int)6] = (int)0;
		HX_STACK_LINE(781)
		Float tmp8 = _c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(778)
		e[(int)10] = tmp8;
		HX_STACK_LINE(778)
		e[(int)14] = (int)0;
		HX_STACK_LINE(778)
		e[(int)3] = (int)0;
		HX_STACK_LINE(778)
		e[(int)7] = (int)0;
		HX_STACK_LINE(778)
		e[(int)11] = (int)0;
		HX_STACK_LINE(778)
		e[(int)15] = (int)1;
		HX_STACK_LINE(778)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(785)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,makeRotationY,return )

::phoenix::Matrix Matrix_obj::makeRotationZ( Float _theta){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationZ",0x060a5600,"phoenix.Matrix.makeRotationZ","phoenix/Matrix.hx",790,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_theta,"_theta")
	HX_STACK_LINE(792)
	Float tmp = _theta;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(792)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(792)
	Float _c = tmp1;		HX_STACK_VAR(_c,"_c");
	HX_STACK_LINE(793)
	Float tmp2 = _theta;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(793)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(793)
	Float _s = tmp3;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(795)
	{
		HX_STACK_LINE(795)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(796)
		Float tmp4 = _c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(795)
		e[(int)0] = tmp4;
		HX_STACK_LINE(796)
		Float tmp5 = _s;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(796)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(795)
		e[(int)4] = tmp6;
		HX_STACK_LINE(795)
		e[(int)8] = (int)0;
		HX_STACK_LINE(795)
		e[(int)12] = (int)0;
		HX_STACK_LINE(797)
		Float tmp7 = _s;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(795)
		e[(int)1] = tmp7;
		HX_STACK_LINE(797)
		Float tmp8 = _c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(795)
		e[(int)5] = tmp8;
		HX_STACK_LINE(795)
		e[(int)9] = (int)0;
		HX_STACK_LINE(795)
		e[(int)13] = (int)0;
		HX_STACK_LINE(795)
		e[(int)2] = (int)0;
		HX_STACK_LINE(795)
		e[(int)6] = (int)0;
		HX_STACK_LINE(795)
		e[(int)10] = (int)1;
		HX_STACK_LINE(795)
		e[(int)14] = (int)0;
		HX_STACK_LINE(795)
		e[(int)3] = (int)0;
		HX_STACK_LINE(795)
		e[(int)7] = (int)0;
		HX_STACK_LINE(795)
		e[(int)11] = (int)0;
		HX_STACK_LINE(795)
		e[(int)15] = (int)1;
		HX_STACK_LINE(795)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(802)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,makeRotationZ,return )

::phoenix::Matrix Matrix_obj::makeRotationAxis( ::phoenix::Vector _axis,Float _angle){
	HX_STACK_FRAME("phoenix.Matrix","makeRotationAxis",0xa4647edb,"phoenix.Matrix.makeRotationAxis","phoenix/Matrix.hx",807,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_ARG(_angle,"_angle")
	HX_STACK_LINE(809)
	Float tmp = _angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(809)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(809)
	Float _c = tmp1;		HX_STACK_VAR(_c,"_c");
	HX_STACK_LINE(810)
	Float tmp2 = _angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(810)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(810)
	Float _s = tmp3;		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(811)
	Float tmp4 = ((int)1 - _c);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(811)
	Float _t = tmp4;		HX_STACK_VAR(_t,"_t");
	HX_STACK_LINE(813)
	Float _ax = _axis->x;		HX_STACK_VAR(_ax,"_ax");
	HX_STACK_LINE(814)
	Float _ay = _axis->y;		HX_STACK_VAR(_ay,"_ay");
	HX_STACK_LINE(815)
	Float _az = _axis->z;		HX_STACK_VAR(_az,"_az");
	HX_STACK_LINE(817)
	Float tmp5 = (_t * _ax);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(817)
	Float _tx = tmp5;		HX_STACK_VAR(_tx,"_tx");
	HX_STACK_LINE(818)
	Float tmp6 = (_t * _ay);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(818)
	Float _ty = tmp6;		HX_STACK_VAR(_ty,"_ty");
	HX_STACK_LINE(820)
	{
		HX_STACK_LINE(820)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(821)
		Float tmp7 = (_tx * _ax);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(821)
		Float tmp8 = _c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(821)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(820)
		e[(int)0] = tmp9;
		HX_STACK_LINE(821)
		Float tmp10 = (_tx * _ay);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(821)
		Float tmp11 = (_s * _az);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(821)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(820)
		e[(int)4] = tmp12;
		HX_STACK_LINE(821)
		Float tmp13 = (_tx * _az);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(821)
		Float tmp14 = (_s * _ay);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(821)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(820)
		e[(int)8] = tmp15;
		HX_STACK_LINE(820)
		e[(int)12] = (int)0;
		HX_STACK_LINE(822)
		Float tmp16 = (_tx * _ay);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(822)
		Float tmp17 = (_s * _az);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(822)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(820)
		e[(int)1] = tmp18;
		HX_STACK_LINE(822)
		Float tmp19 = (_ty * _ay);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(822)
		Float tmp20 = _c;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(822)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(820)
		e[(int)5] = tmp21;
		HX_STACK_LINE(822)
		Float tmp22 = (_ty * _az);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(822)
		Float tmp23 = (_s * _ax);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(822)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(820)
		e[(int)9] = tmp24;
		HX_STACK_LINE(820)
		e[(int)13] = (int)0;
		HX_STACK_LINE(823)
		Float tmp25 = (_tx * _az);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(823)
		Float tmp26 = (_s * _ay);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(823)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(820)
		e[(int)2] = tmp27;
		HX_STACK_LINE(823)
		Float tmp28 = (_ty * _az);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(823)
		Float tmp29 = (_s * _ax);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(823)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(820)
		e[(int)6] = tmp30;
		HX_STACK_LINE(823)
		Float tmp31 = (_t * _az);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(823)
		Float tmp32 = _az;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(823)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(823)
		Float tmp34 = _c;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(823)
		Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(820)
		e[(int)10] = tmp35;
		HX_STACK_LINE(820)
		e[(int)14] = (int)0;
		HX_STACK_LINE(820)
		e[(int)3] = (int)0;
		HX_STACK_LINE(820)
		e[(int)7] = (int)0;
		HX_STACK_LINE(820)
		e[(int)11] = (int)0;
		HX_STACK_LINE(820)
		e[(int)15] = (int)1;
		HX_STACK_LINE(820)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(827)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,makeRotationAxis,return )

::phoenix::Matrix Matrix_obj::makeScale( Float _x,Float _y,Float _z){
	HX_STACK_FRAME("phoenix.Matrix","makeScale",0xbabda92e,"phoenix.Matrix.makeScale","phoenix/Matrix.hx",832,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(835)
		Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(834)
		e[(int)0] = tmp;
		HX_STACK_LINE(834)
		e[(int)4] = (int)0;
		HX_STACK_LINE(834)
		e[(int)8] = (int)0;
		HX_STACK_LINE(834)
		e[(int)12] = (int)0;
		HX_STACK_LINE(834)
		e[(int)1] = (int)0;
		HX_STACK_LINE(836)
		Float tmp1 = _y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(834)
		e[(int)5] = tmp1;
		HX_STACK_LINE(834)
		e[(int)9] = (int)0;
		HX_STACK_LINE(834)
		e[(int)13] = (int)0;
		HX_STACK_LINE(834)
		e[(int)2] = (int)0;
		HX_STACK_LINE(834)
		e[(int)6] = (int)0;
		HX_STACK_LINE(837)
		Float tmp2 = _z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(834)
		e[(int)10] = tmp2;
		HX_STACK_LINE(834)
		e[(int)14] = (int)0;
		HX_STACK_LINE(834)
		e[(int)3] = (int)0;
		HX_STACK_LINE(834)
		e[(int)7] = (int)0;
		HX_STACK_LINE(834)
		e[(int)11] = (int)0;
		HX_STACK_LINE(834)
		e[(int)15] = (int)1;
		HX_STACK_LINE(834)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(841)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,makeScale,return )

::phoenix::Matrix Matrix_obj::compose_with_origin( ::phoenix::Vector _position,::phoenix::Vector _origin,::phoenix::Quaternion _quaternion,::phoenix::Vector _scale){
	HX_STACK_FRAME("phoenix.Matrix","compose_with_origin",0x79dcc244,"phoenix.Matrix.compose_with_origin","phoenix/Matrix.hx",846,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_ARG(_origin,"_origin")
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_LINE(852)
	{
		HX_STACK_LINE(852)
		{
			HX_STACK_LINE(852)
			Array< Float > e = this->elements;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(852)
			e[(int)0] = (int)1;
			HX_STACK_LINE(852)
			e[(int)4] = (int)0;
			HX_STACK_LINE(852)
			e[(int)8] = (int)0;
			HX_STACK_LINE(852)
			Float tmp = _origin->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(852)
			e[(int)12] = tmp;
			HX_STACK_LINE(852)
			e[(int)1] = (int)0;
			HX_STACK_LINE(852)
			e[(int)5] = (int)1;
			HX_STACK_LINE(852)
			e[(int)9] = (int)0;
			HX_STACK_LINE(852)
			Float tmp1 = _origin->y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(852)
			e[(int)13] = tmp1;
			HX_STACK_LINE(852)
			e[(int)2] = (int)0;
			HX_STACK_LINE(852)
			e[(int)6] = (int)0;
			HX_STACK_LINE(852)
			e[(int)10] = (int)1;
			HX_STACK_LINE(852)
			Float tmp2 = _origin->z;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(852)
			e[(int)14] = tmp2;
			HX_STACK_LINE(852)
			e[(int)3] = (int)0;
			HX_STACK_LINE(852)
			e[(int)7] = (int)0;
			HX_STACK_LINE(852)
			e[(int)11] = (int)0;
			HX_STACK_LINE(852)
			e[(int)15] = (int)1;
			HX_STACK_LINE(852)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(852)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(854)
	{
		HX_STACK_LINE(854)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(854)
		Float _x = _scale->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(854)
		Float _y = _scale->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(854)
		Float _z = _scale->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(854)
		Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)0],tmp);
		HX_STACK_LINE(854)
		Float tmp1 = _y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)4],tmp1);
		HX_STACK_LINE(854)
		Float tmp2 = _z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)8],tmp2);
		HX_STACK_LINE(854)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)1],tmp3);
		HX_STACK_LINE(854)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)5],tmp4);
		HX_STACK_LINE(854)
		Float tmp5 = _z;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)9],tmp5);
		HX_STACK_LINE(854)
		Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)2],tmp6);
		HX_STACK_LINE(854)
		Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)6],tmp7);
		HX_STACK_LINE(854)
		Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)10],tmp8);
		HX_STACK_LINE(854)
		Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)3],tmp9);
		HX_STACK_LINE(854)
		Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)7],tmp10);
		HX_STACK_LINE(854)
		Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(854)
		hx::MultEq(te[(int)11],tmp11);
		HX_STACK_LINE(854)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(856)
	{
		HX_STACK_LINE(856)
		::phoenix::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(856)
		{
			HX_STACK_LINE(856)
			::phoenix::Matrix tmp1 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(856)
			::phoenix::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(856)
			Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(856)
			Float tmp2 = (_quaternion->x + _quaternion->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(856)
			Float x2 = tmp2;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(856)
			Float tmp3 = (_quaternion->y + _quaternion->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(856)
			Float y2 = tmp3;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(856)
			Float tmp4 = (_quaternion->z + _quaternion->z);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(856)
			Float z2 = tmp4;		HX_STACK_VAR(z2,"z2");
			HX_STACK_LINE(856)
			Float tmp5 = (_quaternion->x * x2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(856)
			Float xx = tmp5;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(856)
			Float tmp6 = (_quaternion->x * y2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(856)
			Float xy = tmp6;		HX_STACK_VAR(xy,"xy");
			HX_STACK_LINE(856)
			Float tmp7 = (_quaternion->x * z2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(856)
			Float xz = tmp7;		HX_STACK_VAR(xz,"xz");
			HX_STACK_LINE(856)
			Float tmp8 = (_quaternion->y * y2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(856)
			Float yy = tmp8;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(856)
			Float tmp9 = (_quaternion->y * z2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(856)
			Float yz = tmp9;		HX_STACK_VAR(yz,"yz");
			HX_STACK_LINE(856)
			Float tmp10 = (_quaternion->z * z2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(856)
			Float zz = tmp10;		HX_STACK_VAR(zz,"zz");
			HX_STACK_LINE(856)
			Float tmp11 = (_quaternion->w * x2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(856)
			Float wx = tmp11;		HX_STACK_VAR(wx,"wx");
			HX_STACK_LINE(856)
			Float tmp12 = (_quaternion->w * y2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(856)
			Float wy = tmp12;		HX_STACK_VAR(wy,"wy");
			HX_STACK_LINE(856)
			Float tmp13 = (_quaternion->w * z2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(856)
			Float wz = tmp13;		HX_STACK_VAR(wz,"wz");
			HX_STACK_LINE(856)
			Float tmp14 = (yy + zz);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(856)
			Float tmp15 = ((int)1 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(856)
			te[(int)0] = tmp15;
			HX_STACK_LINE(856)
			Float tmp16 = (xy - wz);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(856)
			te[(int)4] = tmp16;
			HX_STACK_LINE(856)
			Float tmp17 = (xz + wy);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(856)
			te[(int)8] = tmp17;
			HX_STACK_LINE(856)
			Float tmp18 = (xy + wz);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(856)
			te[(int)1] = tmp18;
			HX_STACK_LINE(856)
			Float tmp19 = (xx + zz);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(856)
			Float tmp20 = ((int)1 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(856)
			te[(int)5] = tmp20;
			HX_STACK_LINE(856)
			Float tmp21 = (yz - wx);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(856)
			te[(int)9] = tmp21;
			HX_STACK_LINE(856)
			Float tmp22 = (xz - wy);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(856)
			te[(int)2] = tmp22;
			HX_STACK_LINE(856)
			Float tmp23 = (yz + wx);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(856)
			te[(int)6] = tmp23;
			HX_STACK_LINE(856)
			Float tmp24 = (xx + yy);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(856)
			Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(856)
			te[(int)10] = tmp25;
			HX_STACK_LINE(856)
			te[(int)3] = (int)0;
			HX_STACK_LINE(856)
			te[(int)7] = (int)0;
			HX_STACK_LINE(856)
			te[(int)11] = (int)0;
			HX_STACK_LINE(856)
			te[(int)12] = (int)0;
			HX_STACK_LINE(856)
			te[(int)13] = (int)0;
			HX_STACK_LINE(856)
			te[(int)14] = (int)0;
			HX_STACK_LINE(856)
			te[(int)15] = (int)1;
			HX_STACK_LINE(856)
			tmp = _this;
		}
		HX_STACK_LINE(856)
		::phoenix::Matrix _m = tmp;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(856)
		{
			HX_STACK_LINE(856)
			Array< Float > ae = this->elements;		HX_STACK_VAR(ae,"ae");
			HX_STACK_LINE(856)
			Array< Float > be = _m->elements;		HX_STACK_VAR(be,"be");
			HX_STACK_LINE(856)
			Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(856)
			Float tmp1 = ae->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(856)
			Float a11 = tmp1;		HX_STACK_VAR(a11,"a11");
			HX_STACK_LINE(856)
			Float tmp2 = ae->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(856)
			Float a12 = tmp2;		HX_STACK_VAR(a12,"a12");
			HX_STACK_LINE(856)
			Float tmp3 = ae->__get((int)8);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(856)
			Float a13 = tmp3;		HX_STACK_VAR(a13,"a13");
			HX_STACK_LINE(856)
			Float tmp4 = ae->__get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(856)
			Float a14 = tmp4;		HX_STACK_VAR(a14,"a14");
			HX_STACK_LINE(856)
			Float tmp5 = ae->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(856)
			Float a21 = tmp5;		HX_STACK_VAR(a21,"a21");
			HX_STACK_LINE(856)
			Float tmp6 = ae->__get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(856)
			Float a22 = tmp6;		HX_STACK_VAR(a22,"a22");
			HX_STACK_LINE(856)
			Float tmp7 = ae->__get((int)9);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(856)
			Float a23 = tmp7;		HX_STACK_VAR(a23,"a23");
			HX_STACK_LINE(856)
			Float tmp8 = ae->__get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(856)
			Float a24 = tmp8;		HX_STACK_VAR(a24,"a24");
			HX_STACK_LINE(856)
			Float tmp9 = ae->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(856)
			Float a31 = tmp9;		HX_STACK_VAR(a31,"a31");
			HX_STACK_LINE(856)
			Float tmp10 = ae->__get((int)6);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(856)
			Float a32 = tmp10;		HX_STACK_VAR(a32,"a32");
			HX_STACK_LINE(856)
			Float tmp11 = ae->__get((int)10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(856)
			Float a33 = tmp11;		HX_STACK_VAR(a33,"a33");
			HX_STACK_LINE(856)
			Float tmp12 = ae->__get((int)14);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(856)
			Float a34 = tmp12;		HX_STACK_VAR(a34,"a34");
			HX_STACK_LINE(856)
			Float tmp13 = ae->__get((int)3);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(856)
			Float a41 = tmp13;		HX_STACK_VAR(a41,"a41");
			HX_STACK_LINE(856)
			Float tmp14 = ae->__get((int)7);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(856)
			Float a42 = tmp14;		HX_STACK_VAR(a42,"a42");
			HX_STACK_LINE(856)
			Float tmp15 = ae->__get((int)11);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(856)
			Float a43 = tmp15;		HX_STACK_VAR(a43,"a43");
			HX_STACK_LINE(856)
			Float tmp16 = ae->__get((int)15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(856)
			Float a44 = tmp16;		HX_STACK_VAR(a44,"a44");
			HX_STACK_LINE(856)
			Float tmp17 = be->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(856)
			Float b11 = tmp17;		HX_STACK_VAR(b11,"b11");
			HX_STACK_LINE(856)
			Float tmp18 = be->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(856)
			Float b12 = tmp18;		HX_STACK_VAR(b12,"b12");
			HX_STACK_LINE(856)
			Float tmp19 = be->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(856)
			Float b13 = tmp19;		HX_STACK_VAR(b13,"b13");
			HX_STACK_LINE(856)
			Float tmp20 = be->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(856)
			Float b14 = tmp20;		HX_STACK_VAR(b14,"b14");
			HX_STACK_LINE(856)
			Float tmp21 = be->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(856)
			Float b21 = tmp21;		HX_STACK_VAR(b21,"b21");
			HX_STACK_LINE(856)
			Float tmp22 = be->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(856)
			Float b22 = tmp22;		HX_STACK_VAR(b22,"b22");
			HX_STACK_LINE(856)
			Float tmp23 = be->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(856)
			Float b23 = tmp23;		HX_STACK_VAR(b23,"b23");
			HX_STACK_LINE(856)
			Float tmp24 = be->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(856)
			Float b24 = tmp24;		HX_STACK_VAR(b24,"b24");
			HX_STACK_LINE(856)
			Float tmp25 = be->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(856)
			Float b31 = tmp25;		HX_STACK_VAR(b31,"b31");
			HX_STACK_LINE(856)
			Float tmp26 = be->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(856)
			Float b32 = tmp26;		HX_STACK_VAR(b32,"b32");
			HX_STACK_LINE(856)
			Float tmp27 = be->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(856)
			Float b33 = tmp27;		HX_STACK_VAR(b33,"b33");
			HX_STACK_LINE(856)
			Float tmp28 = be->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(856)
			Float b34 = tmp28;		HX_STACK_VAR(b34,"b34");
			HX_STACK_LINE(856)
			Float tmp29 = be->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(856)
			Float b41 = tmp29;		HX_STACK_VAR(b41,"b41");
			HX_STACK_LINE(856)
			Float tmp30 = be->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(856)
			Float b42 = tmp30;		HX_STACK_VAR(b42,"b42");
			HX_STACK_LINE(856)
			Float tmp31 = be->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(856)
			Float b43 = tmp31;		HX_STACK_VAR(b43,"b43");
			HX_STACK_LINE(856)
			Float tmp32 = be->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(856)
			Float b44 = tmp32;		HX_STACK_VAR(b44,"b44");
			HX_STACK_LINE(856)
			Float tmp33 = (a11 * b11);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(856)
			Float tmp34 = (a12 * b21);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(856)
			Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(856)
			Float tmp36 = (a13 * b31);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(856)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(856)
			Float tmp38 = (a14 * b41);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(856)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(856)
			te[(int)0] = tmp39;
			HX_STACK_LINE(856)
			Float tmp40 = (a11 * b12);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(856)
			Float tmp41 = (a12 * b22);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(856)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(856)
			Float tmp43 = (a13 * b32);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(856)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(856)
			Float tmp45 = (a14 * b42);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(856)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(856)
			te[(int)4] = tmp46;
			HX_STACK_LINE(856)
			Float tmp47 = (a11 * b13);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(856)
			Float tmp48 = (a12 * b23);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(856)
			Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(856)
			Float tmp50 = (a13 * b33);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(856)
			Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(856)
			Float tmp52 = (a14 * b43);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(856)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(856)
			te[(int)8] = tmp53;
			HX_STACK_LINE(856)
			Float tmp54 = (a11 * b14);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(856)
			Float tmp55 = (a12 * b24);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(856)
			Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(856)
			Float tmp57 = (a13 * b34);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(856)
			Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(856)
			Float tmp59 = (a14 * b44);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(856)
			Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(856)
			te[(int)12] = tmp60;
			HX_STACK_LINE(856)
			Float tmp61 = (a21 * b11);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(856)
			Float tmp62 = (a22 * b21);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(856)
			Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(856)
			Float tmp64 = (a23 * b31);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(856)
			Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(856)
			Float tmp66 = (a24 * b41);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(856)
			Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(856)
			te[(int)1] = tmp67;
			HX_STACK_LINE(856)
			Float tmp68 = (a21 * b12);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(856)
			Float tmp69 = (a22 * b22);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(856)
			Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(856)
			Float tmp71 = (a23 * b32);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(856)
			Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(856)
			Float tmp73 = (a24 * b42);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(856)
			Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(856)
			te[(int)5] = tmp74;
			HX_STACK_LINE(856)
			Float tmp75 = (a21 * b13);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(856)
			Float tmp76 = (a22 * b23);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(856)
			Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(856)
			Float tmp78 = (a23 * b33);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(856)
			Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(856)
			Float tmp80 = (a24 * b43);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(856)
			Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(856)
			te[(int)9] = tmp81;
			HX_STACK_LINE(856)
			Float tmp82 = (a21 * b14);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(856)
			Float tmp83 = (a22 * b24);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(856)
			Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(856)
			Float tmp85 = (a23 * b34);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(856)
			Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(856)
			Float tmp87 = (a24 * b44);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(856)
			Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(856)
			te[(int)13] = tmp88;
			HX_STACK_LINE(856)
			Float tmp89 = (a31 * b11);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(856)
			Float tmp90 = (a32 * b21);		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(856)
			Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(856)
			Float tmp92 = (a33 * b31);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(856)
			Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(856)
			Float tmp94 = (a34 * b41);		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(856)
			Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(856)
			te[(int)2] = tmp95;
			HX_STACK_LINE(856)
			Float tmp96 = (a31 * b12);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(856)
			Float tmp97 = (a32 * b22);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(856)
			Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(856)
			Float tmp99 = (a33 * b32);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(856)
			Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(856)
			Float tmp101 = (a34 * b42);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(856)
			Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(856)
			te[(int)6] = tmp102;
			HX_STACK_LINE(856)
			Float tmp103 = (a31 * b13);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(856)
			Float tmp104 = (a32 * b23);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(856)
			Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(856)
			Float tmp106 = (a33 * b33);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(856)
			Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(856)
			Float tmp108 = (a34 * b43);		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(856)
			Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(856)
			te[(int)10] = tmp109;
			HX_STACK_LINE(856)
			Float tmp110 = (a31 * b14);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(856)
			Float tmp111 = (a32 * b24);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(856)
			Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(856)
			Float tmp113 = (a33 * b34);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(856)
			Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(856)
			Float tmp115 = (a34 * b44);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(856)
			Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(856)
			te[(int)14] = tmp116;
			HX_STACK_LINE(856)
			Float tmp117 = (a41 * b11);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(856)
			Float tmp118 = (a42 * b21);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(856)
			Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(856)
			Float tmp120 = (a43 * b31);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(856)
			Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(856)
			Float tmp122 = (a44 * b41);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(856)
			Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(856)
			te[(int)3] = tmp123;
			HX_STACK_LINE(856)
			Float tmp124 = (a41 * b12);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(856)
			Float tmp125 = (a42 * b22);		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(856)
			Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(856)
			Float tmp127 = (a43 * b32);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(856)
			Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(856)
			Float tmp129 = (a44 * b42);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(856)
			Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(856)
			te[(int)7] = tmp130;
			HX_STACK_LINE(856)
			Float tmp131 = (a41 * b13);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(856)
			Float tmp132 = (a42 * b23);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(856)
			Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(856)
			Float tmp134 = (a43 * b33);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(856)
			Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(856)
			Float tmp136 = (a44 * b43);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(856)
			Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(856)
			te[(int)11] = tmp137;
			HX_STACK_LINE(856)
			Float tmp138 = (a41 * b14);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(856)
			Float tmp139 = (a42 * b24);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(856)
			Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(856)
			Float tmp141 = (a43 * b34);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(856)
			Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(856)
			Float tmp143 = (a44 * b44);		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(856)
			Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(856)
			te[(int)15] = tmp144;
			HX_STACK_LINE(856)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(858)
	{
		HX_STACK_LINE(858)
		::phoenix::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(858)
		{
			HX_STACK_LINE(858)
			::phoenix::Matrix tmp1 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(858)
			::phoenix::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(858)
			{
				HX_STACK_LINE(858)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(858)
				e[(int)0] = (int)1;
				HX_STACK_LINE(858)
				e[(int)4] = (int)0;
				HX_STACK_LINE(858)
				e[(int)8] = (int)0;
				HX_STACK_LINE(858)
				Float tmp2 = _origin->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(858)
				Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(858)
				e[(int)12] = tmp3;
				HX_STACK_LINE(858)
				e[(int)1] = (int)0;
				HX_STACK_LINE(858)
				e[(int)5] = (int)1;
				HX_STACK_LINE(858)
				e[(int)9] = (int)0;
				HX_STACK_LINE(858)
				Float tmp4 = _origin->y;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(858)
				Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(858)
				e[(int)13] = tmp5;
				HX_STACK_LINE(858)
				e[(int)2] = (int)0;
				HX_STACK_LINE(858)
				e[(int)6] = (int)0;
				HX_STACK_LINE(858)
				e[(int)10] = (int)1;
				HX_STACK_LINE(858)
				Float tmp6 = _origin->z;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(858)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(858)
				e[(int)14] = tmp7;
				HX_STACK_LINE(858)
				e[(int)3] = (int)0;
				HX_STACK_LINE(858)
				e[(int)7] = (int)0;
				HX_STACK_LINE(858)
				e[(int)11] = (int)0;
				HX_STACK_LINE(858)
				e[(int)15] = (int)1;
				HX_STACK_LINE(858)
				_this;
			}
			HX_STACK_LINE(858)
			tmp = _this;
		}
		HX_STACK_LINE(858)
		::phoenix::Matrix _m = tmp;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(858)
		{
			HX_STACK_LINE(858)
			Array< Float > ae = this->elements;		HX_STACK_VAR(ae,"ae");
			HX_STACK_LINE(858)
			Array< Float > be = _m->elements;		HX_STACK_VAR(be,"be");
			HX_STACK_LINE(858)
			Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(858)
			Float tmp1 = ae->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(858)
			Float a11 = tmp1;		HX_STACK_VAR(a11,"a11");
			HX_STACK_LINE(858)
			Float tmp2 = ae->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(858)
			Float a12 = tmp2;		HX_STACK_VAR(a12,"a12");
			HX_STACK_LINE(858)
			Float tmp3 = ae->__get((int)8);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(858)
			Float a13 = tmp3;		HX_STACK_VAR(a13,"a13");
			HX_STACK_LINE(858)
			Float tmp4 = ae->__get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(858)
			Float a14 = tmp4;		HX_STACK_VAR(a14,"a14");
			HX_STACK_LINE(858)
			Float tmp5 = ae->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(858)
			Float a21 = tmp5;		HX_STACK_VAR(a21,"a21");
			HX_STACK_LINE(858)
			Float tmp6 = ae->__get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(858)
			Float a22 = tmp6;		HX_STACK_VAR(a22,"a22");
			HX_STACK_LINE(858)
			Float tmp7 = ae->__get((int)9);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(858)
			Float a23 = tmp7;		HX_STACK_VAR(a23,"a23");
			HX_STACK_LINE(858)
			Float tmp8 = ae->__get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(858)
			Float a24 = tmp8;		HX_STACK_VAR(a24,"a24");
			HX_STACK_LINE(858)
			Float tmp9 = ae->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(858)
			Float a31 = tmp9;		HX_STACK_VAR(a31,"a31");
			HX_STACK_LINE(858)
			Float tmp10 = ae->__get((int)6);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(858)
			Float a32 = tmp10;		HX_STACK_VAR(a32,"a32");
			HX_STACK_LINE(858)
			Float tmp11 = ae->__get((int)10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(858)
			Float a33 = tmp11;		HX_STACK_VAR(a33,"a33");
			HX_STACK_LINE(858)
			Float tmp12 = ae->__get((int)14);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(858)
			Float a34 = tmp12;		HX_STACK_VAR(a34,"a34");
			HX_STACK_LINE(858)
			Float tmp13 = ae->__get((int)3);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(858)
			Float a41 = tmp13;		HX_STACK_VAR(a41,"a41");
			HX_STACK_LINE(858)
			Float tmp14 = ae->__get((int)7);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(858)
			Float a42 = tmp14;		HX_STACK_VAR(a42,"a42");
			HX_STACK_LINE(858)
			Float tmp15 = ae->__get((int)11);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(858)
			Float a43 = tmp15;		HX_STACK_VAR(a43,"a43");
			HX_STACK_LINE(858)
			Float tmp16 = ae->__get((int)15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(858)
			Float a44 = tmp16;		HX_STACK_VAR(a44,"a44");
			HX_STACK_LINE(858)
			Float tmp17 = be->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(858)
			Float b11 = tmp17;		HX_STACK_VAR(b11,"b11");
			HX_STACK_LINE(858)
			Float tmp18 = be->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(858)
			Float b12 = tmp18;		HX_STACK_VAR(b12,"b12");
			HX_STACK_LINE(858)
			Float tmp19 = be->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(858)
			Float b13 = tmp19;		HX_STACK_VAR(b13,"b13");
			HX_STACK_LINE(858)
			Float tmp20 = be->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(858)
			Float b14 = tmp20;		HX_STACK_VAR(b14,"b14");
			HX_STACK_LINE(858)
			Float tmp21 = be->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(858)
			Float b21 = tmp21;		HX_STACK_VAR(b21,"b21");
			HX_STACK_LINE(858)
			Float tmp22 = be->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(858)
			Float b22 = tmp22;		HX_STACK_VAR(b22,"b22");
			HX_STACK_LINE(858)
			Float tmp23 = be->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(858)
			Float b23 = tmp23;		HX_STACK_VAR(b23,"b23");
			HX_STACK_LINE(858)
			Float tmp24 = be->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(858)
			Float b24 = tmp24;		HX_STACK_VAR(b24,"b24");
			HX_STACK_LINE(858)
			Float tmp25 = be->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(858)
			Float b31 = tmp25;		HX_STACK_VAR(b31,"b31");
			HX_STACK_LINE(858)
			Float tmp26 = be->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(858)
			Float b32 = tmp26;		HX_STACK_VAR(b32,"b32");
			HX_STACK_LINE(858)
			Float tmp27 = be->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(858)
			Float b33 = tmp27;		HX_STACK_VAR(b33,"b33");
			HX_STACK_LINE(858)
			Float tmp28 = be->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(858)
			Float b34 = tmp28;		HX_STACK_VAR(b34,"b34");
			HX_STACK_LINE(858)
			Float tmp29 = be->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(858)
			Float b41 = tmp29;		HX_STACK_VAR(b41,"b41");
			HX_STACK_LINE(858)
			Float tmp30 = be->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(858)
			Float b42 = tmp30;		HX_STACK_VAR(b42,"b42");
			HX_STACK_LINE(858)
			Float tmp31 = be->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(858)
			Float b43 = tmp31;		HX_STACK_VAR(b43,"b43");
			HX_STACK_LINE(858)
			Float tmp32 = be->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(858)
			Float b44 = tmp32;		HX_STACK_VAR(b44,"b44");
			HX_STACK_LINE(858)
			Float tmp33 = (a11 * b11);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(858)
			Float tmp34 = (a12 * b21);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(858)
			Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(858)
			Float tmp36 = (a13 * b31);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(858)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(858)
			Float tmp38 = (a14 * b41);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(858)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(858)
			te[(int)0] = tmp39;
			HX_STACK_LINE(858)
			Float tmp40 = (a11 * b12);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(858)
			Float tmp41 = (a12 * b22);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(858)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(858)
			Float tmp43 = (a13 * b32);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(858)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(858)
			Float tmp45 = (a14 * b42);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(858)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(858)
			te[(int)4] = tmp46;
			HX_STACK_LINE(858)
			Float tmp47 = (a11 * b13);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(858)
			Float tmp48 = (a12 * b23);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(858)
			Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(858)
			Float tmp50 = (a13 * b33);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(858)
			Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(858)
			Float tmp52 = (a14 * b43);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(858)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(858)
			te[(int)8] = tmp53;
			HX_STACK_LINE(858)
			Float tmp54 = (a11 * b14);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(858)
			Float tmp55 = (a12 * b24);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(858)
			Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(858)
			Float tmp57 = (a13 * b34);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(858)
			Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(858)
			Float tmp59 = (a14 * b44);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(858)
			Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(858)
			te[(int)12] = tmp60;
			HX_STACK_LINE(858)
			Float tmp61 = (a21 * b11);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(858)
			Float tmp62 = (a22 * b21);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(858)
			Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(858)
			Float tmp64 = (a23 * b31);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(858)
			Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(858)
			Float tmp66 = (a24 * b41);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(858)
			Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(858)
			te[(int)1] = tmp67;
			HX_STACK_LINE(858)
			Float tmp68 = (a21 * b12);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(858)
			Float tmp69 = (a22 * b22);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(858)
			Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(858)
			Float tmp71 = (a23 * b32);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(858)
			Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(858)
			Float tmp73 = (a24 * b42);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(858)
			Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(858)
			te[(int)5] = tmp74;
			HX_STACK_LINE(858)
			Float tmp75 = (a21 * b13);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(858)
			Float tmp76 = (a22 * b23);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(858)
			Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(858)
			Float tmp78 = (a23 * b33);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(858)
			Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(858)
			Float tmp80 = (a24 * b43);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(858)
			Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(858)
			te[(int)9] = tmp81;
			HX_STACK_LINE(858)
			Float tmp82 = (a21 * b14);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(858)
			Float tmp83 = (a22 * b24);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(858)
			Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(858)
			Float tmp85 = (a23 * b34);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(858)
			Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(858)
			Float tmp87 = (a24 * b44);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(858)
			Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(858)
			te[(int)13] = tmp88;
			HX_STACK_LINE(858)
			Float tmp89 = (a31 * b11);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(858)
			Float tmp90 = (a32 * b21);		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(858)
			Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(858)
			Float tmp92 = (a33 * b31);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(858)
			Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(858)
			Float tmp94 = (a34 * b41);		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(858)
			Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(858)
			te[(int)2] = tmp95;
			HX_STACK_LINE(858)
			Float tmp96 = (a31 * b12);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(858)
			Float tmp97 = (a32 * b22);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(858)
			Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(858)
			Float tmp99 = (a33 * b32);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(858)
			Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(858)
			Float tmp101 = (a34 * b42);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(858)
			Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(858)
			te[(int)6] = tmp102;
			HX_STACK_LINE(858)
			Float tmp103 = (a31 * b13);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(858)
			Float tmp104 = (a32 * b23);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(858)
			Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(858)
			Float tmp106 = (a33 * b33);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(858)
			Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(858)
			Float tmp108 = (a34 * b43);		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(858)
			Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(858)
			te[(int)10] = tmp109;
			HX_STACK_LINE(858)
			Float tmp110 = (a31 * b14);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(858)
			Float tmp111 = (a32 * b24);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(858)
			Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(858)
			Float tmp113 = (a33 * b34);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(858)
			Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(858)
			Float tmp115 = (a34 * b44);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(858)
			Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(858)
			te[(int)14] = tmp116;
			HX_STACK_LINE(858)
			Float tmp117 = (a41 * b11);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(858)
			Float tmp118 = (a42 * b21);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(858)
			Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(858)
			Float tmp120 = (a43 * b31);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(858)
			Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(858)
			Float tmp122 = (a44 * b41);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(858)
			Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(858)
			te[(int)3] = tmp123;
			HX_STACK_LINE(858)
			Float tmp124 = (a41 * b12);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(858)
			Float tmp125 = (a42 * b22);		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(858)
			Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(858)
			Float tmp127 = (a43 * b32);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(858)
			Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(858)
			Float tmp129 = (a44 * b42);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(858)
			Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(858)
			te[(int)7] = tmp130;
			HX_STACK_LINE(858)
			Float tmp131 = (a41 * b13);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(858)
			Float tmp132 = (a42 * b23);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(858)
			Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(858)
			Float tmp134 = (a43 * b33);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(858)
			Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(858)
			Float tmp136 = (a44 * b43);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(858)
			Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(858)
			te[(int)11] = tmp137;
			HX_STACK_LINE(858)
			Float tmp138 = (a41 * b14);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(858)
			Float tmp139 = (a42 * b24);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(858)
			Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(858)
			Float tmp141 = (a43 * b34);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(858)
			Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(858)
			Float tmp143 = (a44 * b44);		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(858)
			Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(858)
			te[(int)15] = tmp144;
			HX_STACK_LINE(858)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(860)
	{
		HX_STACK_LINE(860)
		::phoenix::Matrix tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(860)
		{
			HX_STACK_LINE(860)
			::phoenix::Matrix tmp1 = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(860)
			::phoenix::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(860)
			{
				HX_STACK_LINE(860)
				Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(860)
				e[(int)0] = (int)1;
				HX_STACK_LINE(860)
				e[(int)4] = (int)0;
				HX_STACK_LINE(860)
				e[(int)8] = (int)0;
				HX_STACK_LINE(860)
				Float tmp2 = _position->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(860)
				e[(int)12] = tmp2;
				HX_STACK_LINE(860)
				e[(int)1] = (int)0;
				HX_STACK_LINE(860)
				e[(int)5] = (int)1;
				HX_STACK_LINE(860)
				e[(int)9] = (int)0;
				HX_STACK_LINE(860)
				Float tmp3 = _position->y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(860)
				e[(int)13] = tmp3;
				HX_STACK_LINE(860)
				e[(int)2] = (int)0;
				HX_STACK_LINE(860)
				e[(int)6] = (int)0;
				HX_STACK_LINE(860)
				e[(int)10] = (int)1;
				HX_STACK_LINE(860)
				Float tmp4 = _position->z;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(860)
				e[(int)14] = tmp4;
				HX_STACK_LINE(860)
				e[(int)3] = (int)0;
				HX_STACK_LINE(860)
				e[(int)7] = (int)0;
				HX_STACK_LINE(860)
				e[(int)11] = (int)0;
				HX_STACK_LINE(860)
				e[(int)15] = (int)1;
				HX_STACK_LINE(860)
				_this;
			}
			HX_STACK_LINE(860)
			tmp = _this;
		}
		HX_STACK_LINE(860)
		::phoenix::Matrix _m = tmp;		HX_STACK_VAR(_m,"_m");
		HX_STACK_LINE(860)
		{
			HX_STACK_LINE(860)
			Array< Float > ae = this->elements;		HX_STACK_VAR(ae,"ae");
			HX_STACK_LINE(860)
			Array< Float > be = _m->elements;		HX_STACK_VAR(be,"be");
			HX_STACK_LINE(860)
			Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
			HX_STACK_LINE(860)
			Float tmp1 = ae->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(860)
			Float a11 = tmp1;		HX_STACK_VAR(a11,"a11");
			HX_STACK_LINE(860)
			Float tmp2 = ae->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(860)
			Float a12 = tmp2;		HX_STACK_VAR(a12,"a12");
			HX_STACK_LINE(860)
			Float tmp3 = ae->__get((int)8);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(860)
			Float a13 = tmp3;		HX_STACK_VAR(a13,"a13");
			HX_STACK_LINE(860)
			Float tmp4 = ae->__get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(860)
			Float a14 = tmp4;		HX_STACK_VAR(a14,"a14");
			HX_STACK_LINE(860)
			Float tmp5 = ae->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(860)
			Float a21 = tmp5;		HX_STACK_VAR(a21,"a21");
			HX_STACK_LINE(860)
			Float tmp6 = ae->__get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(860)
			Float a22 = tmp6;		HX_STACK_VAR(a22,"a22");
			HX_STACK_LINE(860)
			Float tmp7 = ae->__get((int)9);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(860)
			Float a23 = tmp7;		HX_STACK_VAR(a23,"a23");
			HX_STACK_LINE(860)
			Float tmp8 = ae->__get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(860)
			Float a24 = tmp8;		HX_STACK_VAR(a24,"a24");
			HX_STACK_LINE(860)
			Float tmp9 = ae->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(860)
			Float a31 = tmp9;		HX_STACK_VAR(a31,"a31");
			HX_STACK_LINE(860)
			Float tmp10 = ae->__get((int)6);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(860)
			Float a32 = tmp10;		HX_STACK_VAR(a32,"a32");
			HX_STACK_LINE(860)
			Float tmp11 = ae->__get((int)10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(860)
			Float a33 = tmp11;		HX_STACK_VAR(a33,"a33");
			HX_STACK_LINE(860)
			Float tmp12 = ae->__get((int)14);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(860)
			Float a34 = tmp12;		HX_STACK_VAR(a34,"a34");
			HX_STACK_LINE(860)
			Float tmp13 = ae->__get((int)3);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(860)
			Float a41 = tmp13;		HX_STACK_VAR(a41,"a41");
			HX_STACK_LINE(860)
			Float tmp14 = ae->__get((int)7);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(860)
			Float a42 = tmp14;		HX_STACK_VAR(a42,"a42");
			HX_STACK_LINE(860)
			Float tmp15 = ae->__get((int)11);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(860)
			Float a43 = tmp15;		HX_STACK_VAR(a43,"a43");
			HX_STACK_LINE(860)
			Float tmp16 = ae->__get((int)15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(860)
			Float a44 = tmp16;		HX_STACK_VAR(a44,"a44");
			HX_STACK_LINE(860)
			Float tmp17 = be->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(860)
			Float b11 = tmp17;		HX_STACK_VAR(b11,"b11");
			HX_STACK_LINE(860)
			Float tmp18 = be->__get((int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(860)
			Float b12 = tmp18;		HX_STACK_VAR(b12,"b12");
			HX_STACK_LINE(860)
			Float tmp19 = be->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(860)
			Float b13 = tmp19;		HX_STACK_VAR(b13,"b13");
			HX_STACK_LINE(860)
			Float tmp20 = be->__get((int)12);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(860)
			Float b14 = tmp20;		HX_STACK_VAR(b14,"b14");
			HX_STACK_LINE(860)
			Float tmp21 = be->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(860)
			Float b21 = tmp21;		HX_STACK_VAR(b21,"b21");
			HX_STACK_LINE(860)
			Float tmp22 = be->__get((int)5);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(860)
			Float b22 = tmp22;		HX_STACK_VAR(b22,"b22");
			HX_STACK_LINE(860)
			Float tmp23 = be->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(860)
			Float b23 = tmp23;		HX_STACK_VAR(b23,"b23");
			HX_STACK_LINE(860)
			Float tmp24 = be->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(860)
			Float b24 = tmp24;		HX_STACK_VAR(b24,"b24");
			HX_STACK_LINE(860)
			Float tmp25 = be->__get((int)2);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(860)
			Float b31 = tmp25;		HX_STACK_VAR(b31,"b31");
			HX_STACK_LINE(860)
			Float tmp26 = be->__get((int)6);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(860)
			Float b32 = tmp26;		HX_STACK_VAR(b32,"b32");
			HX_STACK_LINE(860)
			Float tmp27 = be->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(860)
			Float b33 = tmp27;		HX_STACK_VAR(b33,"b33");
			HX_STACK_LINE(860)
			Float tmp28 = be->__get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(860)
			Float b34 = tmp28;		HX_STACK_VAR(b34,"b34");
			HX_STACK_LINE(860)
			Float tmp29 = be->__get((int)3);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(860)
			Float b41 = tmp29;		HX_STACK_VAR(b41,"b41");
			HX_STACK_LINE(860)
			Float tmp30 = be->__get((int)7);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(860)
			Float b42 = tmp30;		HX_STACK_VAR(b42,"b42");
			HX_STACK_LINE(860)
			Float tmp31 = be->__get((int)11);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(860)
			Float b43 = tmp31;		HX_STACK_VAR(b43,"b43");
			HX_STACK_LINE(860)
			Float tmp32 = be->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(860)
			Float b44 = tmp32;		HX_STACK_VAR(b44,"b44");
			HX_STACK_LINE(860)
			Float tmp33 = (a11 * b11);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(860)
			Float tmp34 = (a12 * b21);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(860)
			Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(860)
			Float tmp36 = (a13 * b31);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(860)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(860)
			Float tmp38 = (a14 * b41);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(860)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(860)
			te[(int)0] = tmp39;
			HX_STACK_LINE(860)
			Float tmp40 = (a11 * b12);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(860)
			Float tmp41 = (a12 * b22);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(860)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(860)
			Float tmp43 = (a13 * b32);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(860)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(860)
			Float tmp45 = (a14 * b42);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(860)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(860)
			te[(int)4] = tmp46;
			HX_STACK_LINE(860)
			Float tmp47 = (a11 * b13);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(860)
			Float tmp48 = (a12 * b23);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(860)
			Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(860)
			Float tmp50 = (a13 * b33);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(860)
			Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(860)
			Float tmp52 = (a14 * b43);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(860)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(860)
			te[(int)8] = tmp53;
			HX_STACK_LINE(860)
			Float tmp54 = (a11 * b14);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(860)
			Float tmp55 = (a12 * b24);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(860)
			Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(860)
			Float tmp57 = (a13 * b34);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(860)
			Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(860)
			Float tmp59 = (a14 * b44);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(860)
			Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(860)
			te[(int)12] = tmp60;
			HX_STACK_LINE(860)
			Float tmp61 = (a21 * b11);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(860)
			Float tmp62 = (a22 * b21);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(860)
			Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(860)
			Float tmp64 = (a23 * b31);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(860)
			Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(860)
			Float tmp66 = (a24 * b41);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(860)
			Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(860)
			te[(int)1] = tmp67;
			HX_STACK_LINE(860)
			Float tmp68 = (a21 * b12);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(860)
			Float tmp69 = (a22 * b22);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(860)
			Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(860)
			Float tmp71 = (a23 * b32);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(860)
			Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(860)
			Float tmp73 = (a24 * b42);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(860)
			Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(860)
			te[(int)5] = tmp74;
			HX_STACK_LINE(860)
			Float tmp75 = (a21 * b13);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(860)
			Float tmp76 = (a22 * b23);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(860)
			Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(860)
			Float tmp78 = (a23 * b33);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(860)
			Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(860)
			Float tmp80 = (a24 * b43);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(860)
			Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(860)
			te[(int)9] = tmp81;
			HX_STACK_LINE(860)
			Float tmp82 = (a21 * b14);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(860)
			Float tmp83 = (a22 * b24);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(860)
			Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(860)
			Float tmp85 = (a23 * b34);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(860)
			Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(860)
			Float tmp87 = (a24 * b44);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(860)
			Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(860)
			te[(int)13] = tmp88;
			HX_STACK_LINE(860)
			Float tmp89 = (a31 * b11);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(860)
			Float tmp90 = (a32 * b21);		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(860)
			Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(860)
			Float tmp92 = (a33 * b31);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(860)
			Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(860)
			Float tmp94 = (a34 * b41);		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(860)
			Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(860)
			te[(int)2] = tmp95;
			HX_STACK_LINE(860)
			Float tmp96 = (a31 * b12);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(860)
			Float tmp97 = (a32 * b22);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(860)
			Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(860)
			Float tmp99 = (a33 * b32);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(860)
			Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(860)
			Float tmp101 = (a34 * b42);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(860)
			Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(860)
			te[(int)6] = tmp102;
			HX_STACK_LINE(860)
			Float tmp103 = (a31 * b13);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(860)
			Float tmp104 = (a32 * b23);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(860)
			Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(860)
			Float tmp106 = (a33 * b33);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(860)
			Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(860)
			Float tmp108 = (a34 * b43);		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(860)
			Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(860)
			te[(int)10] = tmp109;
			HX_STACK_LINE(860)
			Float tmp110 = (a31 * b14);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(860)
			Float tmp111 = (a32 * b24);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(860)
			Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(860)
			Float tmp113 = (a33 * b34);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(860)
			Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(860)
			Float tmp115 = (a34 * b44);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(860)
			Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(860)
			te[(int)14] = tmp116;
			HX_STACK_LINE(860)
			Float tmp117 = (a41 * b11);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(860)
			Float tmp118 = (a42 * b21);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(860)
			Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(860)
			Float tmp120 = (a43 * b31);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(860)
			Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(860)
			Float tmp122 = (a44 * b41);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(860)
			Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(860)
			te[(int)3] = tmp123;
			HX_STACK_LINE(860)
			Float tmp124 = (a41 * b12);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(860)
			Float tmp125 = (a42 * b22);		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(860)
			Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(860)
			Float tmp127 = (a43 * b32);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(860)
			Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(860)
			Float tmp129 = (a44 * b42);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(860)
			Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(860)
			te[(int)7] = tmp130;
			HX_STACK_LINE(860)
			Float tmp131 = (a41 * b13);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(860)
			Float tmp132 = (a42 * b23);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(860)
			Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(860)
			Float tmp134 = (a43 * b33);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(860)
			Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(860)
			Float tmp136 = (a44 * b43);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(860)
			Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(860)
			te[(int)11] = tmp137;
			HX_STACK_LINE(860)
			Float tmp138 = (a41 * b14);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(860)
			Float tmp139 = (a42 * b24);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(860)
			Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(860)
			Float tmp141 = (a43 * b34);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(860)
			Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(860)
			Float tmp143 = (a44 * b44);		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(860)
			Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(860)
			te[(int)15] = tmp144;
			HX_STACK_LINE(860)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(862)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,compose_with_origin,return )

::phoenix::Matrix Matrix_obj::compose( ::phoenix::Vector _position,::phoenix::Quaternion _quaternion,::phoenix::Vector _scale){
	HX_STACK_FRAME("phoenix.Matrix","compose",0xe87dfc04,"phoenix.Matrix.compose","phoenix/Matrix.hx",866,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_LINE(868)
	{
		HX_STACK_LINE(868)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(868)
		Float tmp = (_quaternion->x + _quaternion->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(868)
		Float x2 = tmp;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(868)
		Float tmp1 = (_quaternion->y + _quaternion->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(868)
		Float y2 = tmp1;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(868)
		Float tmp2 = (_quaternion->z + _quaternion->z);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(868)
		Float z2 = tmp2;		HX_STACK_VAR(z2,"z2");
		HX_STACK_LINE(868)
		Float tmp3 = (_quaternion->x * x2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(868)
		Float xx = tmp3;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(868)
		Float tmp4 = (_quaternion->x * y2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(868)
		Float xy = tmp4;		HX_STACK_VAR(xy,"xy");
		HX_STACK_LINE(868)
		Float tmp5 = (_quaternion->x * z2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(868)
		Float xz = tmp5;		HX_STACK_VAR(xz,"xz");
		HX_STACK_LINE(868)
		Float tmp6 = (_quaternion->y * y2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(868)
		Float yy = tmp6;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(868)
		Float tmp7 = (_quaternion->y * z2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(868)
		Float yz = tmp7;		HX_STACK_VAR(yz,"yz");
		HX_STACK_LINE(868)
		Float tmp8 = (_quaternion->z * z2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(868)
		Float zz = tmp8;		HX_STACK_VAR(zz,"zz");
		HX_STACK_LINE(868)
		Float tmp9 = (_quaternion->w * x2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(868)
		Float wx = tmp9;		HX_STACK_VAR(wx,"wx");
		HX_STACK_LINE(868)
		Float tmp10 = (_quaternion->w * y2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(868)
		Float wy = tmp10;		HX_STACK_VAR(wy,"wy");
		HX_STACK_LINE(868)
		Float tmp11 = (_quaternion->w * z2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(868)
		Float wz = tmp11;		HX_STACK_VAR(wz,"wz");
		HX_STACK_LINE(868)
		Float tmp12 = (yy + zz);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(868)
		Float tmp13 = ((int)1 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(868)
		te[(int)0] = tmp13;
		HX_STACK_LINE(868)
		Float tmp14 = (xy - wz);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(868)
		te[(int)4] = tmp14;
		HX_STACK_LINE(868)
		Float tmp15 = (xz + wy);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(868)
		te[(int)8] = tmp15;
		HX_STACK_LINE(868)
		Float tmp16 = (xy + wz);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(868)
		te[(int)1] = tmp16;
		HX_STACK_LINE(868)
		Float tmp17 = (xx + zz);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(868)
		Float tmp18 = ((int)1 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(868)
		te[(int)5] = tmp18;
		HX_STACK_LINE(868)
		Float tmp19 = (yz - wx);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(868)
		te[(int)9] = tmp19;
		HX_STACK_LINE(868)
		Float tmp20 = (xz - wy);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(868)
		te[(int)2] = tmp20;
		HX_STACK_LINE(868)
		Float tmp21 = (yz + wx);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(868)
		te[(int)6] = tmp21;
		HX_STACK_LINE(868)
		Float tmp22 = (xx + yy);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(868)
		Float tmp23 = ((int)1 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(868)
		te[(int)10] = tmp23;
		HX_STACK_LINE(868)
		te[(int)3] = (int)0;
		HX_STACK_LINE(868)
		te[(int)7] = (int)0;
		HX_STACK_LINE(868)
		te[(int)11] = (int)0;
		HX_STACK_LINE(868)
		te[(int)12] = (int)0;
		HX_STACK_LINE(868)
		te[(int)13] = (int)0;
		HX_STACK_LINE(868)
		te[(int)14] = (int)0;
		HX_STACK_LINE(868)
		te[(int)15] = (int)1;
		HX_STACK_LINE(868)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(869)
	{
		HX_STACK_LINE(869)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(869)
		Float _x = _scale->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(869)
		Float _y = _scale->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(869)
		Float _z = _scale->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(869)
		Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)0],tmp);
		HX_STACK_LINE(869)
		Float tmp1 = _y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)4],tmp1);
		HX_STACK_LINE(869)
		Float tmp2 = _z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)8],tmp2);
		HX_STACK_LINE(869)
		Float tmp3 = _x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)1],tmp3);
		HX_STACK_LINE(869)
		Float tmp4 = _y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)5],tmp4);
		HX_STACK_LINE(869)
		Float tmp5 = _z;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)9],tmp5);
		HX_STACK_LINE(869)
		Float tmp6 = _x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)2],tmp6);
		HX_STACK_LINE(869)
		Float tmp7 = _y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)6],tmp7);
		HX_STACK_LINE(869)
		Float tmp8 = _z;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)10],tmp8);
		HX_STACK_LINE(869)
		Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)3],tmp9);
		HX_STACK_LINE(869)
		Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)7],tmp10);
		HX_STACK_LINE(869)
		Float tmp11 = _z;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(869)
		hx::MultEq(te[(int)11],tmp11);
		HX_STACK_LINE(869)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(870)
	{
		HX_STACK_LINE(870)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(870)
		Float tmp = _position->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(870)
		te[(int)12] = tmp;
		HX_STACK_LINE(870)
		Float tmp1 = _position->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(870)
		te[(int)13] = tmp1;
		HX_STACK_LINE(870)
		Float tmp2 = _position->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(870)
		te[(int)14] = tmp2;
		HX_STACK_LINE(870)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(872)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,compose,return )

::phoenix::MatrixTransform Matrix_obj::decompose( ::phoenix::Vector _position,::phoenix::Quaternion _quaternion,::phoenix::Vector _scale){
	HX_STACK_FRAME("phoenix.Matrix","decompose",0xe8fe2723,"phoenix.Matrix.decompose","phoenix/Matrix.hx",878,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_ARG(_scale,"_scale")
	HX_STACK_LINE(880)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(881)
	::phoenix::Matrix tmp = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(881)
	::phoenix::Matrix matrix = tmp;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(883)
	Float tmp1 = te->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(883)
	Float _ax_x = tmp1;		HX_STACK_VAR(_ax_x,"_ax_x");
	HX_STACK_LINE(883)
	Float tmp2 = te->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(883)
	Float _ax_y = tmp2;		HX_STACK_VAR(_ax_y,"_ax_y");
	HX_STACK_LINE(883)
	Float tmp3 = te->__get((int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(883)
	Float _ax_z = tmp3;		HX_STACK_VAR(_ax_z,"_ax_z");
	HX_STACK_LINE(884)
	Float tmp4 = te->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(884)
	Float _ay_x = tmp4;		HX_STACK_VAR(_ay_x,"_ay_x");
	HX_STACK_LINE(884)
	Float tmp5 = te->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(884)
	Float _ay_y = tmp5;		HX_STACK_VAR(_ay_y,"_ay_y");
	HX_STACK_LINE(884)
	Float tmp6 = te->__get((int)6);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(884)
	Float _ay_z = tmp6;		HX_STACK_VAR(_ay_z,"_ay_z");
	HX_STACK_LINE(885)
	Float tmp7 = te->__get((int)8);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(885)
	Float _az_x = tmp7;		HX_STACK_VAR(_az_x,"_az_x");
	HX_STACK_LINE(885)
	Float tmp8 = te->__get((int)9);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(885)
	Float _az_y = tmp8;		HX_STACK_VAR(_az_y,"_az_y");
	HX_STACK_LINE(885)
	Float tmp9 = te->__get((int)10);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(885)
	Float _az_z = tmp9;		HX_STACK_VAR(_az_z,"_az_z");
	HX_STACK_LINE(887)
	Float tmp10 = (_ax_x * _ax_x);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(887)
	Float tmp11 = (_ax_y * _ax_y);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(887)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(887)
	Float tmp13 = (_ax_z * _ax_z);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(887)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(887)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(887)
	Float _ax_length = tmp15;		HX_STACK_VAR(_ax_length,"_ax_length");
	HX_STACK_LINE(888)
	Float tmp16 = (_ay_x * _ay_x);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(888)
	Float tmp17 = (_ay_y * _ay_y);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(888)
	Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(888)
	Float tmp19 = (_ay_z * _ay_z);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(888)
	Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(888)
	Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(888)
	Float _ay_length = tmp21;		HX_STACK_VAR(_ay_length,"_ay_length");
	HX_STACK_LINE(889)
	Float tmp22 = (_az_x * _az_x);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(889)
	Float tmp23 = (_az_y * _az_y);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(889)
	Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(889)
	Float tmp25 = (_az_z * _az_z);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(889)
	Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(889)
	Float tmp27 = ::Math_obj::sqrt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(889)
	Float _az_length = tmp27;		HX_STACK_VAR(_az_length,"_az_length");
	HX_STACK_LINE(892)
	bool tmp28 = (_quaternion == null());		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(892)
	if ((tmp28)){
		HX_STACK_LINE(893)
		::phoenix::Quaternion tmp29 = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(893)
		_quaternion = tmp29;
	}
	HX_STACK_LINE(896)
	bool tmp29 = (_position == null());		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(896)
	if ((tmp29)){
		HX_STACK_LINE(897)
		Float tmp30 = te->__get((int)12);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(897)
		Float tmp31 = te->__get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(897)
		Float tmp32 = te->__get((int)14);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(897)
		::phoenix::Vector tmp33 = ::phoenix::Vector_obj::__new(tmp30,tmp31,tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(897)
		_position = tmp33;
	}
	else{
		HX_STACK_LINE(899)
		{
			HX_STACK_LINE(899)
			Float tmp30 = te->__get((int)12);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(899)
			Float _x = tmp30;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(899)
			_position->x = _x;
			HX_STACK_LINE(899)
			bool tmp31 = _position->_construct;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(899)
			if ((tmp31)){
				HX_STACK_LINE(899)
				_position->x;
			}
			else{
				HX_STACK_LINE(899)
				bool tmp32 = (_position->listen_x != null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(899)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(899)
				if ((tmp32)){
					HX_STACK_LINE(899)
					bool tmp34 = _position->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(899)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(899)
					tmp33 = !(tmp35);
				}
				else{
					HX_STACK_LINE(899)
					tmp33 = false;
				}
				HX_STACK_LINE(899)
				if ((tmp33)){
					HX_STACK_LINE(899)
					Float tmp34 = _x;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(899)
					_position->listen_x(tmp34);
				}
				HX_STACK_LINE(899)
				_position->x;
			}
		}
		HX_STACK_LINE(900)
		{
			HX_STACK_LINE(900)
			Float tmp30 = te->__get((int)13);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(900)
			Float _y = tmp30;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(900)
			_position->y = _y;
			HX_STACK_LINE(900)
			bool tmp31 = _position->_construct;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(900)
			if ((tmp31)){
				HX_STACK_LINE(900)
				_position->y;
			}
			else{
				HX_STACK_LINE(900)
				bool tmp32 = (_position->listen_y != null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(900)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(900)
				if ((tmp32)){
					HX_STACK_LINE(900)
					bool tmp34 = _position->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(900)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(900)
					tmp33 = !(tmp35);
				}
				else{
					HX_STACK_LINE(900)
					tmp33 = false;
				}
				HX_STACK_LINE(900)
				if ((tmp33)){
					HX_STACK_LINE(900)
					Float tmp34 = _y;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(900)
					_position->listen_y(tmp34);
				}
				HX_STACK_LINE(900)
				_position->y;
			}
		}
		HX_STACK_LINE(901)
		{
			HX_STACK_LINE(901)
			Float tmp30 = te->__get((int)14);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(901)
			Float _z = tmp30;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(901)
			_position->z = _z;
			HX_STACK_LINE(901)
			bool tmp31 = _position->_construct;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(901)
			if ((tmp31)){
				HX_STACK_LINE(901)
				_position->z;
			}
			else{
				HX_STACK_LINE(901)
				bool tmp32 = (_position->listen_z != null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(901)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(901)
				if ((tmp32)){
					HX_STACK_LINE(901)
					bool tmp34 = _position->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(901)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(901)
					tmp33 = !(tmp35);
				}
				else{
					HX_STACK_LINE(901)
					tmp33 = false;
				}
				HX_STACK_LINE(901)
				if ((tmp33)){
					HX_STACK_LINE(901)
					Float tmp34 = _z;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(901)
					_position->listen_z(tmp34);
				}
				HX_STACK_LINE(901)
				_position->z;
			}
		}
	}
	HX_STACK_LINE(904)
	bool tmp30 = (_scale == null());		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(904)
	if ((tmp30)){
		HX_STACK_LINE(905)
		::phoenix::Vector tmp31 = ::phoenix::Vector_obj::__new(_ax_length,_ay_length,_az_length,null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(905)
		_scale = tmp31;
	}
	else{
		HX_STACK_LINE(907)
		{
			HX_STACK_LINE(907)
			_scale->x = _ax_length;
			HX_STACK_LINE(907)
			bool tmp31 = _scale->_construct;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(907)
			if ((tmp31)){
				HX_STACK_LINE(907)
				_scale->x;
			}
			else{
				HX_STACK_LINE(907)
				bool tmp32 = (_scale->listen_x != null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(907)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(907)
				if ((tmp32)){
					HX_STACK_LINE(907)
					bool tmp34 = _scale->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(907)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(907)
					tmp33 = !(tmp35);
				}
				else{
					HX_STACK_LINE(907)
					tmp33 = false;
				}
				HX_STACK_LINE(907)
				if ((tmp33)){
					HX_STACK_LINE(907)
					Float tmp34 = _ax_length;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(907)
					_scale->listen_x(tmp34);
				}
				HX_STACK_LINE(907)
				_scale->x;
			}
		}
		HX_STACK_LINE(908)
		{
			HX_STACK_LINE(908)
			_scale->y = _ay_length;
			HX_STACK_LINE(908)
			bool tmp31 = _scale->_construct;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(908)
			if ((tmp31)){
				HX_STACK_LINE(908)
				_scale->y;
			}
			else{
				HX_STACK_LINE(908)
				bool tmp32 = (_scale->listen_y != null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(908)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(908)
				if ((tmp32)){
					HX_STACK_LINE(908)
					bool tmp34 = _scale->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(908)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(908)
					tmp33 = !(tmp35);
				}
				else{
					HX_STACK_LINE(908)
					tmp33 = false;
				}
				HX_STACK_LINE(908)
				if ((tmp33)){
					HX_STACK_LINE(908)
					Float tmp34 = _ay_length;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(908)
					_scale->listen_y(tmp34);
				}
				HX_STACK_LINE(908)
				_scale->y;
			}
		}
		HX_STACK_LINE(909)
		{
			HX_STACK_LINE(909)
			_scale->z = _az_length;
			HX_STACK_LINE(909)
			bool tmp31 = _scale->_construct;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(909)
			if ((tmp31)){
				HX_STACK_LINE(909)
				_scale->z;
			}
			else{
				HX_STACK_LINE(909)
				bool tmp32 = (_scale->listen_z != null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(909)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(909)
				if ((tmp32)){
					HX_STACK_LINE(909)
					bool tmp34 = _scale->ignore_listeners;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(909)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(909)
					tmp33 = !(tmp35);
				}
				else{
					HX_STACK_LINE(909)
					tmp33 = false;
				}
				HX_STACK_LINE(909)
				if ((tmp33)){
					HX_STACK_LINE(909)
					Float tmp34 = _az_length;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(909)
					_scale->listen_z(tmp34);
				}
				HX_STACK_LINE(909)
				_scale->z;
			}
		}
	}
	HX_STACK_LINE(913)
	matrix->elements = this->elements->concat(Array_obj< Float >::__new());
	HX_STACK_LINE(915)
	Array< Float > me = matrix->elements;		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(917)
	Float tmp31 = _ax_length;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(917)
	hx::DivEq(me[(int)0],tmp31);
	HX_STACK_LINE(918)
	Float tmp32 = _ax_length;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(918)
	hx::DivEq(me[(int)1],tmp32);
	HX_STACK_LINE(919)
	Float tmp33 = _ax_length;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(919)
	hx::DivEq(me[(int)2],tmp33);
	HX_STACK_LINE(921)
	Float tmp34 = _ay_length;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(921)
	hx::DivEq(me[(int)4],tmp34);
	HX_STACK_LINE(922)
	Float tmp35 = _ay_length;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(922)
	hx::DivEq(me[(int)5],tmp35);
	HX_STACK_LINE(923)
	Float tmp36 = _ay_length;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(923)
	hx::DivEq(me[(int)6],tmp36);
	HX_STACK_LINE(925)
	Float tmp37 = _az_length;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(925)
	hx::DivEq(me[(int)8],tmp37);
	HX_STACK_LINE(926)
	Float tmp38 = _az_length;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(926)
	hx::DivEq(me[(int)9],tmp38);
	HX_STACK_LINE(927)
	Float tmp39 = _az_length;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(927)
	hx::DivEq(me[(int)10],tmp39);
	HX_STACK_LINE(929)
	::phoenix::Matrix tmp40 = matrix;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(929)
	_quaternion->setFromRotationMatrix(tmp40);
	HX_STACK_LINE(932)
	::phoenix::MatrixTransform tmp41 = this->_transform;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(932)
	bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(932)
	if ((tmp42)){
		HX_STACK_LINE(933)
		::phoenix::MatrixTransform tmp43 = ::phoenix::MatrixTransform_obj::__new(_position,_quaternion,_scale);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(933)
		this->_transform = tmp43;
	}
	else{
		HX_STACK_LINE(935)
		::phoenix::MatrixTransform tmp43 = this->_transform;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(935)
		tmp43->pos = _position;
		HX_STACK_LINE(936)
		::phoenix::MatrixTransform tmp44 = this->_transform;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(936)
		tmp44->rotation = _quaternion;
		HX_STACK_LINE(937)
		::phoenix::MatrixTransform tmp45 = this->_transform;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(937)
		tmp45->scale = _scale;
	}
	HX_STACK_LINE(940)
	::phoenix::MatrixTransform tmp43 = this->_transform;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(940)
	return tmp43;
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix_obj,decompose,return )

::phoenix::Matrix Matrix_obj::makeFrustum( Float _left,Float _right,Float _bottom,Float _top,Float _near,Float _far){
	HX_STACK_FRAME("phoenix.Matrix","makeFrustum",0x8fd01306,"phoenix.Matrix.makeFrustum","phoenix/Matrix.hx",945,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_left,"_left")
	HX_STACK_ARG(_right,"_right")
	HX_STACK_ARG(_bottom,"_bottom")
	HX_STACK_ARG(_top,"_top")
	HX_STACK_ARG(_near,"_near")
	HX_STACK_ARG(_far,"_far")
	HX_STACK_LINE(947)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(949)
	Float tmp = ((int)2 * _near);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(949)
	Float tmp1 = (_right - _left);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(949)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(949)
	Float tx = tmp2;		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(950)
	Float tmp3 = ((int)2 * _near);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(950)
	Float tmp4 = (_top - _bottom);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(950)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(950)
	Float ty = tmp5;		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(952)
	Float tmp6 = (_right + _left);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(952)
	Float tmp7 = (_right - _left);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(952)
	Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(952)
	Float a = tmp8;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(953)
	Float tmp9 = (_top + _bottom);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(953)
	Float tmp10 = (_top - _bottom);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(953)
	Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(953)
	Float b = tmp11;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(954)
	Float tmp12 = (_far + _near);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(954)
	Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(954)
	Float tmp14 = (_far - _near);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(954)
	Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(954)
	Float c = tmp15;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(955)
	int tmp16 = (int)-2;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(955)
	Float tmp17 = _far;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(955)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(955)
	Float tmp19 = _near;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(955)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(955)
	Float tmp21 = (_far - _near);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(955)
	Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(955)
	Float d = tmp22;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(957)
	Float tmp23 = tx;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(957)
	te[(int)0] = tmp23;
	HX_STACK_LINE(957)
	te[(int)4] = (int)0;
	HX_STACK_LINE(957)
	Float tmp24 = a;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(957)
	te[(int)8] = tmp24;
	HX_STACK_LINE(957)
	te[(int)12] = (int)0;
	HX_STACK_LINE(958)
	te[(int)1] = (int)0;
	HX_STACK_LINE(958)
	Float tmp25 = ty;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(958)
	te[(int)5] = tmp25;
	HX_STACK_LINE(958)
	Float tmp26 = b;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(958)
	te[(int)9] = tmp26;
	HX_STACK_LINE(958)
	te[(int)13] = (int)0;
	HX_STACK_LINE(959)
	te[(int)2] = (int)0;
	HX_STACK_LINE(959)
	te[(int)6] = (int)0;
	HX_STACK_LINE(959)
	Float tmp27 = c;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(959)
	te[(int)10] = tmp27;
	HX_STACK_LINE(959)
	Float tmp28 = d;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(959)
	te[(int)14] = tmp28;
	HX_STACK_LINE(960)
	te[(int)3] = (int)0;
	HX_STACK_LINE(960)
	te[(int)7] = (int)0;
	HX_STACK_LINE(960)
	te[(int)11] = (int)-1;
	HX_STACK_LINE(960)
	te[(int)15] = (int)0;
	HX_STACK_LINE(962)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,makeFrustum,return )

::phoenix::Matrix Matrix_obj::makePerspective( Float _fov,Float _aspect,Float _near,Float _far){
	HX_STACK_FRAME("phoenix.Matrix","makePerspective",0x14405320,"phoenix.Matrix.makePerspective","phoenix/Matrix.hx",967,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fov,"_fov")
	HX_STACK_ARG(_aspect,"_aspect")
	HX_STACK_ARG(_near,"_near")
	HX_STACK_ARG(_far,"_far")
	HX_STACK_LINE(969)
	Float tmp = _near;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(969)
	Float tmp1 = (_fov * ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(969)
	Float tmp2 = (tmp1 * ((Float)0.0174532925199432781));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(969)
	Float tmp3 = ::Math_obj::tan(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(969)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(969)
	Float ymax = tmp4;		HX_STACK_VAR(ymax,"ymax");
	HX_STACK_LINE(970)
	Float tmp5 = ymax;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(970)
	Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(970)
	Float ymin = tmp6;		HX_STACK_VAR(ymin,"ymin");
	HX_STACK_LINE(971)
	Float tmp7 = (ymin * _aspect);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(971)
	Float xmin = tmp7;		HX_STACK_VAR(xmin,"xmin");
	HX_STACK_LINE(972)
	Float tmp8 = (ymax * _aspect);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(972)
	Float xmax = tmp8;		HX_STACK_VAR(xmax,"xmax");
	HX_STACK_LINE(974)
	::phoenix::Matrix tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(974)
	{
		HX_STACK_LINE(974)
		Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
		HX_STACK_LINE(974)
		Float tmp10 = ((int)2 * _near);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(974)
		Float tmp11 = (xmax - xmin);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(974)
		Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(974)
		Float tx = tmp12;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(974)
		Float tmp13 = ((int)2 * _near);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(974)
		Float tmp14 = (ymax - ymin);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(974)
		Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(974)
		Float ty = tmp15;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(974)
		Float tmp16 = (xmax + xmin);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(974)
		Float tmp17 = (xmax - xmin);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(974)
		Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(974)
		Float a = tmp18;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(974)
		Float tmp19 = (ymax + ymin);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(974)
		Float tmp20 = (ymax - ymin);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(974)
		Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(974)
		Float b = tmp21;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(974)
		Float tmp22 = (_far + _near);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(974)
		Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(974)
		Float tmp24 = (_far - _near);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(974)
		Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(974)
		Float c = tmp25;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(974)
		int tmp26 = (int)-2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(974)
		Float tmp27 = _far;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(974)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(974)
		Float tmp29 = _near;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(974)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(974)
		Float tmp31 = (_far - _near);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(974)
		Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(974)
		Float d = tmp32;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(974)
		Float tmp33 = tx;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(974)
		te[(int)0] = tmp33;
		HX_STACK_LINE(974)
		te[(int)4] = (int)0;
		HX_STACK_LINE(974)
		Float tmp34 = a;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(974)
		te[(int)8] = tmp34;
		HX_STACK_LINE(974)
		te[(int)12] = (int)0;
		HX_STACK_LINE(974)
		te[(int)1] = (int)0;
		HX_STACK_LINE(974)
		Float tmp35 = ty;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(974)
		te[(int)5] = tmp35;
		HX_STACK_LINE(974)
		Float tmp36 = b;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(974)
		te[(int)9] = tmp36;
		HX_STACK_LINE(974)
		te[(int)13] = (int)0;
		HX_STACK_LINE(974)
		te[(int)2] = (int)0;
		HX_STACK_LINE(974)
		te[(int)6] = (int)0;
		HX_STACK_LINE(974)
		Float tmp37 = c;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(974)
		te[(int)10] = tmp37;
		HX_STACK_LINE(974)
		Float tmp38 = d;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(974)
		te[(int)14] = tmp38;
		HX_STACK_LINE(974)
		te[(int)3] = (int)0;
		HX_STACK_LINE(974)
		te[(int)7] = (int)0;
		HX_STACK_LINE(974)
		te[(int)11] = (int)-1;
		HX_STACK_LINE(974)
		te[(int)15] = (int)0;
		HX_STACK_LINE(974)
		tmp9 = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(974)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC4(Matrix_obj,makePerspective,return )

::phoenix::Matrix Matrix_obj::makeOrthographic( Float _left,Float _right,Float _top,Float _bottom,Float _near,Float _far){
	HX_STACK_FRAME("phoenix.Matrix","makeOrthographic",0x8b159c4c,"phoenix.Matrix.makeOrthographic","phoenix/Matrix.hx",979,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_left,"_left")
	HX_STACK_ARG(_right,"_right")
	HX_STACK_ARG(_top,"_top")
	HX_STACK_ARG(_bottom,"_bottom")
	HX_STACK_ARG(_near,"_near")
	HX_STACK_ARG(_far,"_far")
	HX_STACK_LINE(981)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(983)
	Float tmp = (_right - _left);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(983)
	Float w = tmp;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(984)
	Float tmp1 = (_top - _bottom);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(984)
	Float h = tmp1;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(985)
	Float tmp2 = (_far - _near);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(985)
	Float p = tmp2;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(987)
	Float tmp3 = (_right + _left);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(987)
	Float tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(987)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(987)
	Float tx = tmp5;		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(988)
	Float tmp6 = (_top + _bottom);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(988)
	Float tmp7 = h;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(988)
	Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(988)
	Float ty = tmp8;		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(989)
	Float tmp9 = (_far + _near);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(989)
	Float tmp10 = p;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(989)
	Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(989)
	Float tz = tmp11;		HX_STACK_VAR(tz,"tz");
	HX_STACK_LINE(991)
	Float tmp12 = (Float((int)2) / Float(w));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(991)
	te[(int)0] = tmp12;
	HX_STACK_LINE(991)
	te[(int)4] = (int)0;
	HX_STACK_LINE(991)
	te[(int)8] = (int)0;
	HX_STACK_LINE(991)
	Float tmp13 = tx;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(991)
	Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(991)
	te[(int)12] = tmp14;
	HX_STACK_LINE(992)
	te[(int)1] = (int)0;
	HX_STACK_LINE(992)
	Float tmp15 = (Float((int)2) / Float(h));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(992)
	te[(int)5] = tmp15;
	HX_STACK_LINE(992)
	te[(int)9] = (int)0;
	HX_STACK_LINE(992)
	Float tmp16 = ty;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(992)
	Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(992)
	te[(int)13] = tmp17;
	HX_STACK_LINE(993)
	te[(int)2] = (int)0;
	HX_STACK_LINE(993)
	te[(int)6] = (int)0;
	HX_STACK_LINE(993)
	int tmp18 = (int)-2;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(993)
	Float tmp19 = p;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(993)
	Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(993)
	te[(int)10] = tmp20;
	HX_STACK_LINE(993)
	Float tmp21 = tz;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(993)
	Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(993)
	te[(int)14] = tmp22;
	HX_STACK_LINE(994)
	te[(int)3] = (int)0;
	HX_STACK_LINE(994)
	te[(int)7] = (int)0;
	HX_STACK_LINE(994)
	te[(int)11] = (int)0;
	HX_STACK_LINE(994)
	te[(int)15] = (int)1;
	HX_STACK_LINE(996)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,makeOrthographic,return )

Void Matrix_obj::fromArray( Array< Float > _from){
{
		HX_STACK_FRAME("phoenix.Matrix","fromArray",0x486ebb41,"phoenix.Matrix.fromArray","phoenix/Matrix.hx",1002,0x938b753d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_from,"_from")
		HX_STACK_LINE(1002)
		this->elements = _from->concat(Array_obj< Float >::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,fromArray,(void))

Array< Float > Matrix_obj::toArray( ){
	HX_STACK_FRAME("phoenix.Matrix","toArray",0x571dfd10,"phoenix.Matrix.toArray","phoenix/Matrix.hx",1006,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1008)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(1011)
	Float tmp = te->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1011)
	Float tmp1 = te->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1011)
	Float tmp2 = te->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1011)
	Float tmp3 = te->__get((int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1012)
	Float tmp4 = te->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1012)
	Float tmp5 = te->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1012)
	Float tmp6 = te->__get((int)6);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1012)
	Float tmp7 = te->__get((int)7);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1013)
	Float tmp8 = te->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1013)
	Float tmp9 = te->__get((int)9);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1013)
	Float tmp10 = te->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1013)
	Float tmp11 = te->__get((int)11);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1014)
	Float tmp12 = te->__get((int)12);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1014)
	Float tmp13 = te->__get((int)13);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1014)
	Float tmp14 = te->__get((int)14);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1014)
	Float tmp15 = te->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1010)
	return Array_obj< Float >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toArray,return )

::phoenix::Matrix Matrix_obj::clone( ){
	HX_STACK_FRAME("phoenix.Matrix","clone",0x454255cf,"phoenix.Matrix.clone","phoenix/Matrix.hx",1019,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1021)
	Array< Float > te = this->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(1024)
	Float tmp = te->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1024)
	Float tmp1 = te->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1024)
	Float tmp2 = te->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1024)
	Float tmp3 = te->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1025)
	Float tmp4 = te->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1025)
	Float tmp5 = te->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1025)
	Float tmp6 = te->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1025)
	Float tmp7 = te->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1026)
	Float tmp8 = te->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1026)
	Float tmp9 = te->__get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1026)
	Float tmp10 = te->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1026)
	Float tmp11 = te->__get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1027)
	Float tmp12 = te->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1027)
	Float tmp13 = te->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1027)
	Float tmp14 = te->__get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1027)
	Float tmp15 = te->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1023)
	::phoenix::Matrix tmp16 = ::phoenix::Matrix_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1023)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

::phoenix::Vector Matrix_obj::up( ){
	HX_STACK_FRAME("phoenix.Matrix","up",0xd34108a9,"phoenix.Matrix.up","phoenix/Matrix.hx",1032,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1033)
	Float tmp = this->elements->__get((int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1033)
	Float tmp1 = this->elements->__get((int)5);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1033)
	Float tmp2 = this->elements->__get((int)10);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1033)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1033)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,up,return )

::phoenix::Vector Matrix_obj::down( ){
	HX_STACK_FRAME("phoenix.Matrix","down",0xe0d64a30,"phoenix.Matrix.down","phoenix/Matrix.hx",1036,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1037)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1037)
	{
		HX_STACK_LINE(1037)
		Float tmp1 = this->elements->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1037)
		Float tmp2 = this->elements->__get((int)5);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1037)
		Float tmp3 = this->elements->__get((int)10);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1037)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1037)
		::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1037)
		Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1037)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1037)
		Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1037)
		Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1037)
		Float tmp9 = _this->z;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1037)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1037)
		tmp = ::phoenix::Vector_obj::__new(tmp6,tmp8,tmp10,null());
	}
	HX_STACK_LINE(1037)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,down,return )

::phoenix::Vector Matrix_obj::left( ){
	HX_STACK_FRAME("phoenix.Matrix","left",0xe61859d5,"phoenix.Matrix.left","phoenix/Matrix.hx",1040,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1041)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1041)
	{
		HX_STACK_LINE(1041)
		Float tmp1 = this->elements->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1041)
		Float tmp2 = this->elements->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1041)
		Float tmp3 = this->elements->__get((int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1041)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1041)
		::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1041)
		Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1041)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1041)
		Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1041)
		Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1041)
		Float tmp9 = _this->z;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1041)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1041)
		tmp = ::phoenix::Vector_obj::__new(tmp6,tmp8,tmp10,null());
	}
	HX_STACK_LINE(1041)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,left,return )

::phoenix::Vector Matrix_obj::right( ){
	HX_STACK_FRAME("phoenix.Matrix","right",0xe6434e4e,"phoenix.Matrix.right","phoenix/Matrix.hx",1044,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1045)
	Float tmp = this->elements->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1045)
	Float tmp1 = this->elements->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1045)
	Float tmp2 = this->elements->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1045)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1045)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,right,return )

::phoenix::Vector Matrix_obj::backward( ){
	HX_STACK_FRAME("phoenix.Matrix","backward",0x2b092cb1,"phoenix.Matrix.backward","phoenix/Matrix.hx",1048,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1049)
	Float tmp = this->elements->__get((int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1049)
	Float tmp1 = this->elements->__get((int)9);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1049)
	Float tmp2 = this->elements->__get((int)10);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1049)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1049)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,backward,return )

::phoenix::Vector Matrix_obj::forward( ){
	HX_STACK_FRAME("phoenix.Matrix","forward",0x4ad524b7,"phoenix.Matrix.forward","phoenix/Matrix.hx",1052,0x938b753d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1053)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1053)
	{
		HX_STACK_LINE(1053)
		Float tmp1 = this->elements->__get((int)8);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1053)
		Float tmp2 = this->elements->__get((int)9);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1053)
		Float tmp3 = this->elements->__get((int)10);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1053)
		::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1053)
		::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1053)
		Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1053)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1053)
		Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1053)
		Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1053)
		Float tmp9 = _this->z;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1053)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1053)
		tmp = ::phoenix::Vector_obj::__new(tmp6,tmp8,tmp10,null());
	}
	HX_STACK_LINE(1053)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,forward,return )


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(elements,"elements");
	HX_MARK_MEMBER_NAME(_float32array,"_float32array");
	HX_MARK_MEMBER_NAME(M11,"M11");
	HX_MARK_MEMBER_NAME(M21,"M21");
	HX_MARK_MEMBER_NAME(M31,"M31");
	HX_MARK_MEMBER_NAME(M41,"M41");
	HX_MARK_MEMBER_NAME(M12,"M12");
	HX_MARK_MEMBER_NAME(M22,"M22");
	HX_MARK_MEMBER_NAME(M32,"M32");
	HX_MARK_MEMBER_NAME(M42,"M42");
	HX_MARK_MEMBER_NAME(M13,"M13");
	HX_MARK_MEMBER_NAME(M23,"M23");
	HX_MARK_MEMBER_NAME(M33,"M33");
	HX_MARK_MEMBER_NAME(M43,"M43");
	HX_MARK_MEMBER_NAME(M14,"M14");
	HX_MARK_MEMBER_NAME(M24,"M24");
	HX_MARK_MEMBER_NAME(M34,"M34");
	HX_MARK_MEMBER_NAME(M44,"M44");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elements,"elements");
	HX_VISIT_MEMBER_NAME(_float32array,"_float32array");
	HX_VISIT_MEMBER_NAME(M11,"M11");
	HX_VISIT_MEMBER_NAME(M21,"M21");
	HX_VISIT_MEMBER_NAME(M31,"M31");
	HX_VISIT_MEMBER_NAME(M41,"M41");
	HX_VISIT_MEMBER_NAME(M12,"M12");
	HX_VISIT_MEMBER_NAME(M22,"M22");
	HX_VISIT_MEMBER_NAME(M32,"M32");
	HX_VISIT_MEMBER_NAME(M42,"M42");
	HX_VISIT_MEMBER_NAME(M13,"M13");
	HX_VISIT_MEMBER_NAME(M23,"M23");
	HX_VISIT_MEMBER_NAME(M33,"M33");
	HX_VISIT_MEMBER_NAME(M43,"M43");
	HX_VISIT_MEMBER_NAME(M14,"M14");
	HX_VISIT_MEMBER_NAME(M24,"M24");
	HX_VISIT_MEMBER_NAME(M34,"M34");
	HX_VISIT_MEMBER_NAME(M44,"M44");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
}

Dynamic Matrix_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return up_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"M11") ) { return inCallProp == hx::paccAlways ? get_M11() : M11; }
		if (HX_FIELD_EQ(inName,"M21") ) { return inCallProp == hx::paccAlways ? get_M21() : M21; }
		if (HX_FIELD_EQ(inName,"M31") ) { return inCallProp == hx::paccAlways ? get_M31() : M31; }
		if (HX_FIELD_EQ(inName,"M41") ) { return inCallProp == hx::paccAlways ? get_M41() : M41; }
		if (HX_FIELD_EQ(inName,"M12") ) { return inCallProp == hx::paccAlways ? get_M12() : M12; }
		if (HX_FIELD_EQ(inName,"M22") ) { return inCallProp == hx::paccAlways ? get_M22() : M22; }
		if (HX_FIELD_EQ(inName,"M32") ) { return inCallProp == hx::paccAlways ? get_M32() : M32; }
		if (HX_FIELD_EQ(inName,"M42") ) { return inCallProp == hx::paccAlways ? get_M42() : M42; }
		if (HX_FIELD_EQ(inName,"M13") ) { return inCallProp == hx::paccAlways ? get_M13() : M13; }
		if (HX_FIELD_EQ(inName,"M23") ) { return inCallProp == hx::paccAlways ? get_M23() : M23; }
		if (HX_FIELD_EQ(inName,"M33") ) { return inCallProp == hx::paccAlways ? get_M33() : M33; }
		if (HX_FIELD_EQ(inName,"M43") ) { return inCallProp == hx::paccAlways ? get_M43() : M43; }
		if (HX_FIELD_EQ(inName,"M14") ) { return inCallProp == hx::paccAlways ? get_M14() : M14; }
		if (HX_FIELD_EQ(inName,"M24") ) { return inCallProp == hx::paccAlways ? get_M24() : M24; }
		if (HX_FIELD_EQ(inName,"M34") ) { return inCallProp == hx::paccAlways ? get_M34() : M34; }
		if (HX_FIELD_EQ(inName,"M44") ) { return inCallProp == hx::paccAlways ? get_M44() : M44; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"down") ) { return down_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return left_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"right") ) { return right_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"make2D") ) { return make2D_dyn(); }
		if (HX_FIELD_EQ(inName,"lookAt") ) { return lookAt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_M11") ) { return get_M11_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M12") ) { return get_M12_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M13") ) { return get_M13_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M14") ) { return get_M14_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M21") ) { return get_M21_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M22") ) { return get_M22_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M23") ) { return get_M23_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M24") ) { return get_M24_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M31") ) { return get_M31_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M32") ) { return get_M32_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M33") ) { return get_M33_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M34") ) { return get_M34_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M41") ) { return get_M41_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M42") ) { return get_M42_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M43") ) { return get_M43_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M44") ) { return get_M44_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M11") ) { return set_M11_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M12") ) { return set_M12_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M13") ) { return set_M13_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M14") ) { return set_M14_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M21") ) { return set_M21_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M22") ) { return set_M22_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M23") ) { return set_M23_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M24") ) { return set_M24_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M31") ) { return set_M31_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M32") ) { return set_M32_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M33") ) { return set_M33_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M34") ) { return set_M34_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M41") ) { return set_M41_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M42") ) { return set_M42_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M43") ) { return set_M43_dyn(); }
		if (HX_FIELD_EQ(inName,"set_M44") ) { return set_M44_dyn(); }
		if (HX_FIELD_EQ(inName,"inverse") ) { return inverse_dyn(); }
		if (HX_FIELD_EQ(inName,"compose") ) { return compose_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"forward") ) { return forward_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { return elements; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"backward") ) { return backward_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		if (HX_FIELD_EQ(inName,"makeScale") ) { return makeScale_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"fromArray") ) { return fromArray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getInverse") ) { return getInverse_dyn(); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"determinant") ) { return determinant_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"makeFrustum") ) { return makeFrustum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"float32array") ) { return float32array_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPosition") ) { return copyPosition_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_float32array") ) { return _float32array; }
		if (HX_FIELD_EQ(inName,"makeRotationX") ) { return makeRotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"makeRotationY") ) { return makeRotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"makeRotationZ") ) { return makeRotationZ_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"multiplyScalar") ) { return multiplyScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"flattenToArray") ) { return flattenToArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"extractRotation") ) { return extractRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyToArray") ) { return multiplyToArray_dyn(); }
		if (HX_FIELD_EQ(inName,"makeTranslation") ) { return makeTranslation_dyn(); }
		if (HX_FIELD_EQ(inName,"makePerspective") ) { return makePerspective_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"multiplyMatrices") ) { return multiplyMatrices_dyn(); }
		if (HX_FIELD_EQ(inName,"makeRotationAxis") ) { return makeRotationAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"makeOrthographic") ) { return makeOrthographic_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getMaxScaleOnAxis") ) { return getMaxScaleOnAxis_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"compose_with_origin") ) { return compose_with_origin_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"multiplyVector3Array") ) { return multiplyVector3Array_dyn(); }
		if (HX_FIELD_EQ(inName,"flattenToArrayOffset") ) { return flattenToArrayOffset_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"makeRotationFromEuler") ) { return makeRotationFromEuler_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"makeRotationFromQuaternion") ) { return makeRotationFromQuaternion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"M11") ) { if (inCallProp == hx::paccAlways) return set_M11(inValue);M11=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M21") ) { if (inCallProp == hx::paccAlways) return set_M21(inValue);M21=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M31") ) { if (inCallProp == hx::paccAlways) return set_M31(inValue);M31=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M41") ) { if (inCallProp == hx::paccAlways) return set_M41(inValue);M41=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M12") ) { if (inCallProp == hx::paccAlways) return set_M12(inValue);M12=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M22") ) { if (inCallProp == hx::paccAlways) return set_M22(inValue);M22=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M32") ) { if (inCallProp == hx::paccAlways) return set_M32(inValue);M32=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M42") ) { if (inCallProp == hx::paccAlways) return set_M42(inValue);M42=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M13") ) { if (inCallProp == hx::paccAlways) return set_M13(inValue);M13=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M23") ) { if (inCallProp == hx::paccAlways) return set_M23(inValue);M23=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M33") ) { if (inCallProp == hx::paccAlways) return set_M33(inValue);M33=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M43") ) { if (inCallProp == hx::paccAlways) return set_M43(inValue);M43=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M14") ) { if (inCallProp == hx::paccAlways) return set_M14(inValue);M14=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M24") ) { if (inCallProp == hx::paccAlways) return set_M24(inValue);M24=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M34") ) { if (inCallProp == hx::paccAlways) return set_M34(inValue);M34=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M44") ) { if (inCallProp == hx::paccAlways) return set_M44(inValue);M44=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { elements=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::phoenix::MatrixTransform >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_float32array") ) { _float32array=inValue.Cast< ::snow::api::buffers::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("elements","\x37","\x36","\xc4","\x83"));
	outFields->push(HX_HCSTRING("_float32array","\x5d","\x19","\x56","\x17"));
	outFields->push(HX_HCSTRING("M11","\x6d","\x98","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M21","\x4c","\x99","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M31","\x2b","\x9a","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M41","\x0a","\x9b","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M12","\x6e","\x98","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M22","\x4d","\x99","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M32","\x2c","\x9a","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M42","\x0b","\x9b","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M13","\x6f","\x98","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M23","\x4e","\x99","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M33","\x2d","\x9a","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M43","\x0c","\x9b","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M14","\x70","\x98","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M24","\x4f","\x99","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M34","\x2e","\x9a","\x3a","\x00"));
	outFields->push(HX_HCSTRING("M44","\x0d","\x9b","\x3a","\x00"));
	outFields->push(HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Matrix_obj,elements),HX_HCSTRING("elements","\x37","\x36","\xc4","\x83")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(Matrix_obj,_float32array),HX_HCSTRING("_float32array","\x5d","\x19","\x56","\x17")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M11),HX_HCSTRING("M11","\x6d","\x98","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M21),HX_HCSTRING("M21","\x4c","\x99","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M31),HX_HCSTRING("M31","\x2b","\x9a","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M41),HX_HCSTRING("M41","\x0a","\x9b","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M12),HX_HCSTRING("M12","\x6e","\x98","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M22),HX_HCSTRING("M22","\x4d","\x99","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M32),HX_HCSTRING("M32","\x2c","\x9a","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M42),HX_HCSTRING("M42","\x0b","\x9b","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M13),HX_HCSTRING("M13","\x6f","\x98","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M23),HX_HCSTRING("M23","\x4e","\x99","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M33),HX_HCSTRING("M33","\x2d","\x9a","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M43),HX_HCSTRING("M43","\x0c","\x9b","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M14),HX_HCSTRING("M14","\x70","\x98","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M24),HX_HCSTRING("M24","\x4f","\x99","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M34),HX_HCSTRING("M34","\x2e","\x9a","\x3a","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,M44),HX_HCSTRING("M44","\x0d","\x9b","\x3a","\x00")},
	{hx::fsObject /*::phoenix::MatrixTransform*/ ,(int)offsetof(Matrix_obj,_transform),HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("elements","\x37","\x36","\xc4","\x83"),
	HX_HCSTRING("_float32array","\x5d","\x19","\x56","\x17"),
	HX_HCSTRING("M11","\x6d","\x98","\x3a","\x00"),
	HX_HCSTRING("M21","\x4c","\x99","\x3a","\x00"),
	HX_HCSTRING("M31","\x2b","\x9a","\x3a","\x00"),
	HX_HCSTRING("M41","\x0a","\x9b","\x3a","\x00"),
	HX_HCSTRING("M12","\x6e","\x98","\x3a","\x00"),
	HX_HCSTRING("M22","\x4d","\x99","\x3a","\x00"),
	HX_HCSTRING("M32","\x2c","\x9a","\x3a","\x00"),
	HX_HCSTRING("M42","\x0b","\x9b","\x3a","\x00"),
	HX_HCSTRING("M13","\x6f","\x98","\x3a","\x00"),
	HX_HCSTRING("M23","\x4e","\x99","\x3a","\x00"),
	HX_HCSTRING("M33","\x2d","\x9a","\x3a","\x00"),
	HX_HCSTRING("M43","\x0c","\x9b","\x3a","\x00"),
	HX_HCSTRING("M14","\x70","\x98","\x3a","\x00"),
	HX_HCSTRING("M24","\x4f","\x99","\x3a","\x00"),
	HX_HCSTRING("M34","\x2e","\x9a","\x3a","\x00"),
	HX_HCSTRING("M44","\x0d","\x9b","\x3a","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_M11","\x04","\x61","\xaf","\x26"),
	HX_HCSTRING("get_M12","\x05","\x61","\xaf","\x26"),
	HX_HCSTRING("get_M13","\x06","\x61","\xaf","\x26"),
	HX_HCSTRING("get_M14","\x07","\x61","\xaf","\x26"),
	HX_HCSTRING("get_M21","\xe3","\x61","\xaf","\x26"),
	HX_HCSTRING("get_M22","\xe4","\x61","\xaf","\x26"),
	HX_HCSTRING("get_M23","\xe5","\x61","\xaf","\x26"),
	HX_HCSTRING("get_M24","\xe6","\x61","\xaf","\x26"),
	HX_HCSTRING("get_M31","\xc2","\x62","\xaf","\x26"),
	HX_HCSTRING("get_M32","\xc3","\x62","\xaf","\x26"),
	HX_HCSTRING("get_M33","\xc4","\x62","\xaf","\x26"),
	HX_HCSTRING("get_M34","\xc5","\x62","\xaf","\x26"),
	HX_HCSTRING("get_M41","\xa1","\x63","\xaf","\x26"),
	HX_HCSTRING("get_M42","\xa2","\x63","\xaf","\x26"),
	HX_HCSTRING("get_M43","\xa3","\x63","\xaf","\x26"),
	HX_HCSTRING("get_M44","\xa4","\x63","\xaf","\x26"),
	HX_HCSTRING("set_M11","\x10","\xf2","\xb0","\x19"),
	HX_HCSTRING("set_M12","\x11","\xf2","\xb0","\x19"),
	HX_HCSTRING("set_M13","\x12","\xf2","\xb0","\x19"),
	HX_HCSTRING("set_M14","\x13","\xf2","\xb0","\x19"),
	HX_HCSTRING("set_M21","\xef","\xf2","\xb0","\x19"),
	HX_HCSTRING("set_M22","\xf0","\xf2","\xb0","\x19"),
	HX_HCSTRING("set_M23","\xf1","\xf2","\xb0","\x19"),
	HX_HCSTRING("set_M24","\xf2","\xf2","\xb0","\x19"),
	HX_HCSTRING("set_M31","\xce","\xf3","\xb0","\x19"),
	HX_HCSTRING("set_M32","\xcf","\xf3","\xb0","\x19"),
	HX_HCSTRING("set_M33","\xd0","\xf3","\xb0","\x19"),
	HX_HCSTRING("set_M34","\xd1","\xf3","\xb0","\x19"),
	HX_HCSTRING("set_M41","\xad","\xf4","\xb0","\x19"),
	HX_HCSTRING("set_M42","\xae","\xf4","\xb0","\x19"),
	HX_HCSTRING("set_M43","\xaf","\xf4","\xb0","\x19"),
	HX_HCSTRING("set_M44","\xb0","\xf4","\xb0","\x19"),
	HX_HCSTRING("float32array","\x7e","\x86","\xe7","\x34"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("make2D","\x40","\x3d","\xcb","\xb5"),
	HX_HCSTRING("copyPosition","\x7e","\x55","\xd3","\xc6"),
	HX_HCSTRING("getPosition","\x5f","\x63","\xee","\xf0"),
	HX_HCSTRING("extractRotation","\x9f","\x57","\xab","\x93"),
	HX_HCSTRING("makeRotationFromEuler","\xb3","\x48","\x57","\xc4"),
	HX_HCSTRING("makeRotationFromQuaternion","\x94","\xf1","\x49","\x1c"),
	HX_HCSTRING("lookAt","\x32","\x75","\xb5","\x61"),
	HX_HCSTRING("multiply","\x24","\xe2","\x8c","\x9a"),
	HX_HCSTRING("multiplyMatrices","\xde","\xd3","\xc6","\x0f"),
	HX_HCSTRING("multiplyToArray","\x5a","\x4c","\x30","\x62"),
	HX_HCSTRING("multiplyScalar","\x70","\x70","\x21","\x48"),
	HX_HCSTRING("multiplyVector3Array","\xad","\x3d","\x07","\x49"),
	HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("flattenToArray","\xba","\xf6","\xa3","\xfa"),
	HX_HCSTRING("flattenToArrayOffset","\xed","\xc9","\x6c","\x82"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d"),
	HX_HCSTRING("getInverse","\xba","\xd1","\x52","\x8d"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("getMaxScaleOnAxis","\x7c","\xa2","\x24","\x49"),
	HX_HCSTRING("makeTranslation","\xa3","\x19","\x9f","\xb9"),
	HX_HCSTRING("makeRotationX","\x8c","\x51","\x98","\x65"),
	HX_HCSTRING("makeRotationY","\x8d","\x51","\x98","\x65"),
	HX_HCSTRING("makeRotationZ","\x8e","\x51","\x98","\x65"),
	HX_HCSTRING("makeRotationAxis","\x0d","\xb0","\x61","\x01"),
	HX_HCSTRING("makeScale","\xbc","\x45","\x67","\x4c"),
	HX_HCSTRING("compose_with_origin","\x52","\xdc","\x80","\x1d"),
	HX_HCSTRING("compose","\x12","\xb9","\x73","\x83"),
	HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("makeFrustum","\x14","\x6f","\x84","\x14"),
	HX_HCSTRING("makePerspective","\x2e","\xce","\xee","\xef"),
	HX_HCSTRING("makeOrthographic","\x7e","\xcd","\x12","\xe8"),
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	HX_HCSTRING("toArray","\x1e","\xba","\x13","\xf2"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("backward","\xe3","\xdb","\x18","\x27"),
	HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#endif

hx::Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Matrix","\x60","\x61","\xa9","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Matrix_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix_obj >;
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
