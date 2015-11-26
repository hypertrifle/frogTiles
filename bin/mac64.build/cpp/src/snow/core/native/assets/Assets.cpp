#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_core_native_assets_Assets
#include <snow/core/native/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Assets
#include <snow/modules/interfaces/Assets.h>
#endif
#ifndef INCLUDED_snow_system_assets_Assets
#include <snow/system/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace assets{

Void Assets_obj::__construct(::snow::_system::assets::Assets _system)
{
HX_STACK_FRAME("snow.core.native.assets.Assets","new",0x87934a4d,"snow.core.native.assets.Assets.new","snow/core/native/assets/Assets.hx",14,0x2669b743)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
{
	HX_STACK_LINE(14)
	this->_system = _system;
}
;
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new(::snow::_system::assets::Assets _system)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(_system);
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Assets_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::modules::interfaces::Assets_obj)) return operator ::snow::modules::interfaces::Assets_obj *();
	return super::__ToInterface(inType);
}

Assets_obj::operator ::snow::modules::interfaces::Assets_obj *()
	{ return new ::snow::modules::interfaces::Assets_delegate_< Assets_obj >(this); }
::snow::api::Promise Assets_obj::image_load_info( ::String _path,Dynamic __o__components){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.core.native.assets.Assets","image_load_info",0x0d73d4b0,"snow.core.native.assets.Assets.image_load_info","snow/core/native/assets/Assets.hx",18,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_components,"_components")
{

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::String,_path,Dynamic,_components)
		int __ArgCount() const { return 2; }
		Dynamic run(Dynamic resolve,Dynamic reject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/core/native/assets/Assets.hx",20,0x2669b743)
			HX_STACK_ARG(resolve,"resolve")
			HX_STACK_ARG(reject,"reject")
			{
				HX_STACK_LINE(22)
				::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(22)
				Dynamic tmp1 = _components;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(22)
				Dynamic tmp2 = ::snow::core::native::assets::Assets_obj::snow_assets_image_load_info(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(22)
				Dynamic _native_info = tmp2;		HX_STACK_VAR(_native_info,"_native_info");
				HX_STACK_LINE(23)
				bool tmp3 = (_native_info == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(23)
				if ((tmp3)){
					HX_STACK_LINE(23)
					::String tmp4 = (HX_HCSTRING("failed to load ","\x98","\x41","\xad","\x02") + _path);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(23)
					::String tmp5 = (tmp4 + HX_HCSTRING(" : does the file exist?","\xfc","\x38","\x3e","\xee"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(23)
					::snow::types::Error tmp6 = ::snow::types::Error_obj::error(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(23)
					Dynamic tmp7 = reject(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(23)
					return tmp7;
				}
				HX_STACK_LINE(24)
				bool tmp4 = (_native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(24)
				if ((tmp4)){
					HX_STACK_LINE(24)
					::String tmp5 = (HX_HCSTRING("failed to load ","\x98","\x41","\xad","\x02") + _path);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(24)
					::String tmp6 = (tmp5 + HX_HCSTRING(" : data was null.","\x60","\xfd","\x6f","\x18"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(24)
					::snow::types::Error tmp7 = ::snow::types::Error_obj::error(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(24)
					Dynamic tmp8 = reject(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(24)
					return tmp8;
				}
				HX_STACK_LINE(26)
				::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::ofData(_native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				::haxe::io::Bytes _bytes = tmp5;		HX_STACK_VAR(_bytes,"_bytes");
				HX_STACK_LINE(29)
				::String tmp6 = _native_info->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(30)
				int tmp7 = _native_info->__Field(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(31)
				int tmp8 = _native_info->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(32)
				int tmp9 = _native_info->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(33)
				int tmp10 = _native_info->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(34)
				int tmp11 = _native_info->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(35)
				int tmp12 = _native_info->__Field(HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(36)
				::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(36)
				{
					HX_STACK_LINE(36)
					::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(36)
					bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(36)
					if ((tmp14)){
						HX_STACK_LINE(36)
						::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(36)
						this1 = tmp15;
					}
					else{
						HX_STACK_LINE(36)
						bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(36)
						if ((tmp15)){
							HX_STACK_LINE(36)
							::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(36)
							{
								HX_STACK_LINE(36)
								::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(36)
								::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(36)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(36)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(36)
								_this->length = tmp18;
								HX_STACK_LINE(36)
								int tmp19 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(36)
								_this->byteLength = tmp19;
								HX_STACK_LINE(36)
								::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(36)
								{
									HX_STACK_LINE(36)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(36)
									int tmp21 = _this->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(36)
									::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(36)
									this2 = tmp22;
									HX_STACK_LINE(36)
									tmp20 = this2;
								}
								HX_STACK_LINE(36)
								_this->buffer = tmp20;
								HX_STACK_LINE(36)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(36)
								tmp16 = _this;
							}
							HX_STACK_LINE(36)
							this1 = tmp16;
						}
						else{
							HX_STACK_LINE(36)
							bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(36)
							if ((tmp16)){
								HX_STACK_LINE(36)
								::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(36)
								{
									HX_STACK_LINE(36)
									::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(36)
									::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(36)
									::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(36)
									::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(36)
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(36)
									int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(36)
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(36)
									int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(36)
									int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(36)
									int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(36)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(36)
									int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(36)
									int tmp24 = _this->type;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(36)
									bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(36)
									if ((tmp25)){
										HX_STACK_LINE(36)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(36)
										int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(36)
										int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(36)
										::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(36)
										{
											HX_STACK_LINE(36)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(36)
											int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(36)
											::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(36)
											this2 = tmp29;
											HX_STACK_LINE(36)
											tmp27 = this2;
										}
										HX_STACK_LINE(36)
										_this->buffer = tmp27;
										HX_STACK_LINE(36)
										::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(36)
										int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(36)
										int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(36)
										_this->buffer->blit((int)0,tmp28,tmp29,tmp30);
									}
									else{
										HX_STACK_LINE(36)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(36)
									int tmp26 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(36)
									_this->byteLength = tmp26;
									HX_STACK_LINE(36)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(36)
									_this->length = srcLength;
									HX_STACK_LINE(36)
									tmp17 = _this;
								}
								HX_STACK_LINE(36)
								this1 = tmp17;
							}
							else{
								HX_STACK_LINE(36)
								bool tmp17 = (_bytes != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(36)
								if ((tmp17)){
									HX_STACK_LINE(36)
									::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(36)
									{
										HX_STACK_LINE(36)
										::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(36)
										::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(36)
										bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(36)
										if ((tmp20)){
											HX_STACK_LINE(36)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(36)
										int tmp21 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(36)
										bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(36)
										if ((tmp22)){
											HX_STACK_LINE(36)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(36)
										int bufferByteLength = _bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(36)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(36)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(36)
										bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(36)
										if ((tmp23)){
											HX_STACK_LINE(36)
											int tmp24 = bufferByteLength;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(36)
											newByteLength = tmp24;
											HX_STACK_LINE(36)
											int tmp25 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(36)
											bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(36)
											if ((tmp26)){
												HX_STACK_LINE(36)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(36)
											bool tmp27 = (newByteLength < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(36)
											if ((tmp27)){
												HX_STACK_LINE(36)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(36)
											int tmp24 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(36)
											newByteLength = tmp24;
											HX_STACK_LINE(36)
											int tmp25 = newByteLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(36)
											int newRange = tmp25;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(36)
											bool tmp26 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(36)
											if ((tmp26)){
												HX_STACK_LINE(36)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(36)
										_this->buffer = _bytes;
										HX_STACK_LINE(36)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(36)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(36)
										Float tmp24 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(36)
										int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(36)
										_this->length = tmp25;
										HX_STACK_LINE(36)
										tmp18 = _this;
									}
									HX_STACK_LINE(36)
									this1 = tmp18;
								}
								else{
									HX_STACK_LINE(36)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
								}
							}
						}
					}
					HX_STACK_LINE(36)
					tmp13 = this1;
				}
				struct _Function_2_1{
					inline static Dynamic Block( ::String &tmp6,::snow::api::buffers::ArrayBufferView &tmp13,int &tmp9,int &tmp11,int &tmp10,int &tmp7,int &tmp8,int &tmp12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",28,0x2669b743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp6,false);
							__result->Add(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00") , tmp7,false);
							__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp8,false);
							__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp9,false);
							__result->Add(HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde") , tmp10,false);
							__result->Add(HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1") , tmp11,false);
							__result->Add(HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c") , tmp12,false);
							__result->Add(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c") , tmp13,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(28)
				Dynamic tmp14 = _Function_2_1::Block(tmp6,tmp13,tmp9,tmp11,tmp10,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(28)
				Dynamic info = tmp14;		HX_STACK_VAR(info,"info");
				HX_STACK_LINE(39)
				_native_info = null();
				HX_STACK_LINE(41)
				Dynamic tmp15 = info;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(41)
				Dynamic tmp16 = resolve(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(41)
				return tmp16;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(20)
		::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_path,_components)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,image_load_info,return )

::snow::api::Promise Assets_obj::image_info_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic __o__components){
Dynamic _components = __o__components.Default(4);
	HX_STACK_FRAME("snow.core.native.assets.Assets","image_info_from_bytes",0xa5291110,"snow.core.native.assets.Assets.image_info_from_bytes","snow/core/native/assets/Assets.hx",47,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_components,"_components")
{
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			if ((tmp)){
				HX_STACK_LINE(49)
				::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(49)
				HX_STACK_DO_THROW(tmp1);
			}
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			bool tmp = (_bytes == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(50)
			if ((tmp)){
				HX_STACK_LINE(50)
				::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_bytes was null","\xd2","\x33","\xd5","\x32"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(50)
				HX_STACK_DO_THROW(tmp1);
			}
		}

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,::String,_id,::snow::api::buffers::ArrayBufferView,_bytes,Dynamic,_components)
		int __ArgCount() const { return 2; }
		Dynamic run(Dynamic resolve,Dynamic reject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/core/native/assets/Assets.hx",52,0x2669b743)
			HX_STACK_ARG(resolve,"resolve")
			HX_STACK_ARG(reject,"reject")
			{
				HX_STACK_LINE(54)
				::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(54)
				int tmp1 = _bytes->byteOffset;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				int tmp2 = _bytes->byteLength;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				Dynamic tmp3 = _components;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(54)
				Dynamic tmp4 = ::snow::core::native::assets::Assets_obj::snow_assets_image_info_from_bytes(tmp,_bytes->buffer->b,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				Dynamic _native_info = tmp4;		HX_STACK_VAR(_native_info,"_native_info");
				HX_STACK_LINE(56)
				bool tmp5 = (_native_info == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				if ((tmp5)){
					HX_STACK_LINE(57)
					::snow::types::Error tmp6 = ::snow::types::Error_obj::error(HX_HCSTRING("failed to load image from bytes, native code returned null.","\x66","\xdc","\xb6","\x44"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					Dynamic tmp7 = reject(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(57)
					return tmp7;
				}
				HX_STACK_LINE(58)
				bool tmp6 = (_native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				if ((tmp6)){
					HX_STACK_LINE(59)
					::snow::types::Error tmp7 = ::snow::types::Error_obj::error(HX_HCSTRING("failed to load image from bytes, native code returned null data.","\x6c","\x73","\xdb","\x6e"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(59)
					Dynamic tmp8 = reject(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(59)
					return tmp8;
				}
				HX_STACK_LINE(61)
				::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::ofData(_native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(61)
				::haxe::io::Bytes _out_bytes = tmp7;		HX_STACK_VAR(_out_bytes,"_out_bytes");
				HX_STACK_LINE(64)
				::String tmp8 = _native_info->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				int tmp9 = _native_info->__Field(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				int tmp10 = _native_info->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				int tmp11 = _native_info->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(68)
				int tmp12 = _native_info->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(69)
				int tmp13 = _native_info->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(70)
				int tmp14 = _native_info->__Field(HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(71)
				::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(71)
					bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(71)
					if ((tmp16)){
						HX_STACK_LINE(71)
						::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(71)
						this1 = tmp17;
					}
					else{
						HX_STACK_LINE(71)
						bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(71)
						if ((tmp17)){
							HX_STACK_LINE(71)
							::snow::api::buffers::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(71)
							{
								HX_STACK_LINE(71)
								::snow::api::buffers::ArrayBufferView tmp19 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(71)
								::snow::api::buffers::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(71)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(71)
								int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(71)
								_this->length = tmp20;
								HX_STACK_LINE(71)
								int tmp21 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(71)
								_this->byteLength = tmp21;
								HX_STACK_LINE(71)
								::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(71)
								{
									HX_STACK_LINE(71)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(71)
									int tmp23 = _this->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(71)
									::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(71)
									this2 = tmp24;
									HX_STACK_LINE(71)
									tmp22 = this2;
								}
								HX_STACK_LINE(71)
								_this->buffer = tmp22;
								HX_STACK_LINE(71)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(71)
								tmp18 = _this;
							}
							HX_STACK_LINE(71)
							this1 = tmp18;
						}
						else{
							HX_STACK_LINE(71)
							bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(71)
							if ((tmp18)){
								HX_STACK_LINE(71)
								::snow::api::buffers::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(71)
								{
									HX_STACK_LINE(71)
									::snow::api::buffers::ArrayBufferView tmp20 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(71)
									::snow::api::buffers::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(71)
									::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(71)
									::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(71)
									int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(71)
									int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(71)
									int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(71)
									int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(71)
									int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(71)
									int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(71)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(71)
									int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(71)
									int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(71)
									bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(71)
									if ((tmp27)){
										HX_STACK_LINE(71)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(71)
										int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(71)
										int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(71)
										::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(71)
										{
											HX_STACK_LINE(71)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(71)
											int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(71)
											::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(71)
											this2 = tmp31;
											HX_STACK_LINE(71)
											tmp29 = this2;
										}
										HX_STACK_LINE(71)
										_this->buffer = tmp29;
										HX_STACK_LINE(71)
										::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(71)
										int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(71)
										int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(71)
										_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
									}
									else{
										HX_STACK_LINE(71)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(71)
									int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(71)
									_this->byteLength = tmp28;
									HX_STACK_LINE(71)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(71)
									_this->length = srcLength;
									HX_STACK_LINE(71)
									tmp19 = _this;
								}
								HX_STACK_LINE(71)
								this1 = tmp19;
							}
							else{
								HX_STACK_LINE(71)
								bool tmp19 = (_out_bytes != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(71)
								if ((tmp19)){
									HX_STACK_LINE(71)
									::snow::api::buffers::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(71)
									{
										HX_STACK_LINE(71)
										::snow::api::buffers::ArrayBufferView tmp21 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(71)
										::snow::api::buffers::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(71)
										bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(71)
										if ((tmp22)){
											HX_STACK_LINE(71)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(71)
										int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(71)
										bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(71)
										if ((tmp24)){
											HX_STACK_LINE(71)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(71)
										int bufferByteLength = _out_bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(71)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(71)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(71)
										bool tmp25 = true;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(71)
										if ((tmp25)){
											HX_STACK_LINE(71)
											int tmp26 = bufferByteLength;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(71)
											newByteLength = tmp26;
											HX_STACK_LINE(71)
											int tmp27 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(71)
											bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(71)
											if ((tmp28)){
												HX_STACK_LINE(71)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(71)
											bool tmp29 = (newByteLength < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(71)
											if ((tmp29)){
												HX_STACK_LINE(71)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(71)
											int tmp26 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(71)
											newByteLength = tmp26;
											HX_STACK_LINE(71)
											int tmp27 = newByteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(71)
											int newRange = tmp27;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(71)
											bool tmp28 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(71)
											if ((tmp28)){
												HX_STACK_LINE(71)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(71)
										_this->buffer = _out_bytes;
										HX_STACK_LINE(71)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(71)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(71)
										Float tmp26 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(71)
										int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(71)
										_this->length = tmp27;
										HX_STACK_LINE(71)
										tmp20 = _this;
									}
									HX_STACK_LINE(71)
									this1 = tmp20;
								}
								else{
									HX_STACK_LINE(71)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
								}
							}
						}
					}
					HX_STACK_LINE(71)
					tmp15 = this1;
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &tmp13,int &tmp9,int &tmp11,int &tmp10,::snow::api::buffers::ArrayBufferView &tmp15,::String &tmp8,int &tmp12,int &tmp14){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",63,0x2669b743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp8,false);
							__result->Add(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00") , tmp9,false);
							__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp10,false);
							__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp11,false);
							__result->Add(HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde") , tmp12,false);
							__result->Add(HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1") , tmp13,false);
							__result->Add(HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c") , tmp14,false);
							__result->Add(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c") , tmp15,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(63)
				Dynamic tmp16 = _Function_2_1::Block(tmp13,tmp9,tmp11,tmp10,tmp15,tmp8,tmp12,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(63)
				Dynamic info = tmp16;		HX_STACK_VAR(info,"info");
				HX_STACK_LINE(74)
				_native_info = null();
				HX_STACK_LINE(76)
				Dynamic tmp17 = info;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(76)
				Dynamic tmp18 = resolve(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(76)
				return tmp18;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(52)
		::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_id,_bytes,_components)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,image_info_from_bytes,return )

Dynamic Assets_obj::image_info_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels){
	HX_STACK_FRAME("snow.core.native.assets.Assets","image_info_from_pixels",0x440076e8,"snow.core.native.assets.Assets.image_info_from_pixels","snow/core/native/assets/Assets.hx",83,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_width,"_width")
	HX_STACK_ARG(_height,"_height")
	HX_STACK_ARG(_pixels,"_pixels")
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		if ((tmp)){
			HX_STACK_LINE(85)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		bool tmp = (_pixels == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		if ((tmp)){
			HX_STACK_LINE(86)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_pixels was null","\xb2","\x5e","\x44","\xbb"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( int &_height,int &_width,::String &_id,::snow::api::buffers::ArrayBufferView &_pixels){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",88,0x2669b743)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _id,false);
				__result->Add(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00") , (int)4,false);
				__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , _width,false);
				__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , _height,false);
				__result->Add(HX_HCSTRING("width_actual","\xe7","\x12","\xf5","\xde") , _width,false);
				__result->Add(HX_HCSTRING("height_actual","\x26","\x2f","\x9e","\xa1") , _height,false);
				__result->Add(HX_HCSTRING("bpp_source","\xd8","\x83","\xda","\x8c") , (int)4,false);
				__result->Add(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c") , _pixels,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(88)
	Dynamic tmp = _Function_1_1::Block(_height,_width,_id,_pixels);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Dynamic info = tmp;		HX_STACK_VAR(info,"info");
	HX_STACK_LINE(99)
	Dynamic tmp1 = info;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,image_info_from_pixels,return )

Dynamic Assets_obj::audio_load_info( ::String _path,Dynamic __o__load,Dynamic _format){
Dynamic _load = __o__load.Default(true);
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_info",0xd871f5eb,"snow.core.native.assets.Assets.audio_load_info","snow/core/native/assets/Assets.hx",105,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_load,"_load")
	HX_STACK_ARG(_format,"_format")
{
		HX_STACK_LINE(107)
		bool tmp = (_format == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		if ((tmp)){
			HX_STACK_LINE(108)
			::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			::String tmp2 = ::haxe::io::Path_obj::extension(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			::String _ext = tmp2;		HX_STACK_VAR(_ext,"_ext");
			HX_STACK_LINE(109)
			::String tmp3 = _ext;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			::String _switch_1 = (tmp3);
			if (  ( _switch_1==HX_HCSTRING("wav","\x2c","\xa1","\x5a","\x00"))){
				HX_STACK_LINE(110)
				tmp4 = ((Dynamic)((int)2));
			}
			else if (  ( _switch_1==HX_HCSTRING("ogg","\x4f","\x94","\x54","\x00"))){
				HX_STACK_LINE(111)
				tmp4 = ((Dynamic)((int)1));
			}
			else if (  ( _switch_1==HX_HCSTRING("pcm","\x1a","\x53","\x55","\x00"))){
				HX_STACK_LINE(112)
				tmp4 = ((Dynamic)((int)3));
			}
			else  {
				HX_STACK_LINE(113)
				tmp4 = ((Dynamic)((int)0));
			}
;
;
			HX_STACK_LINE(109)
			_format = tmp4;
		}
		HX_STACK_LINE(117)
		bool tmp1 = (_format != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		if ((tmp1)){
			HX_STACK_LINE(117)
			Dynamic tmp3 = _format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			switch( (int)(tmp3)){
				case (int)2: {
					HX_STACK_LINE(118)
					::String tmp4 = _path;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(118)
					Dynamic tmp5 = _load;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(118)
					tmp2 = this->audio_load_wav(tmp4,tmp5);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(119)
					::String tmp4 = _path;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(119)
					Dynamic tmp5 = _load;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(119)
					tmp2 = this->audio_load_ogg(tmp4,tmp5);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(120)
					::String tmp4 = _path;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(120)
					Dynamic tmp5 = _load;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(120)
					tmp2 = this->audio_load_pcm(tmp4,tmp5);
				}
				;break;
				default: {
					HX_STACK_LINE(121)
					tmp2 = null();
				}
			}
		}
		else{
			HX_STACK_LINE(121)
			tmp2 = null();
		}
		HX_STACK_LINE(117)
		Dynamic _native_info = tmp2;		HX_STACK_VAR(_native_info,"_native_info");
		HX_STACK_LINE(125)
		bool tmp3 = (_native_info == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		if ((tmp3)){
			HX_STACK_LINE(125)
			::String tmp4 = (HX_HCSTRING("failed to load ","\x98","\x41","\xad","\x02") + _path);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			::String tmp5 = (tmp4 + HX_HCSTRING(" : does the file exist?","\xfc","\x38","\x3e","\xee"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			::snow::types::Error tmp6 = ::snow::types::Error_obj::error(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(126)
		bool tmp4 = (_native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		if ((tmp4)){
			HX_STACK_LINE(126)
			::String tmp5 = (HX_HCSTRING("failed to load ","\x98","\x41","\xad","\x02") + _path);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			::String tmp6 = (tmp5 + HX_HCSTRING(" : data was null.","\x60","\xfd","\x6f","\x18"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			::snow::types::Error tmp7 = ::snow::types::Error_obj::error(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(128)
		::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::ofData(_native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		::haxe::io::Bytes _result_bytes = tmp5;		HX_STACK_VAR(_result_bytes,"_result_bytes");
		HX_STACK_LINE(131)
		::String tmp6 = _native_info->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		int tmp7 = _native_info->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(133)
		Dynamic tmp8 = _native_info->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(136)
		::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(136)
			bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(136)
			if ((tmp10)){
				HX_STACK_LINE(136)
				::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(136)
				this1 = tmp11;
			}
			else{
				HX_STACK_LINE(136)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(136)
				if ((tmp11)){
					HX_STACK_LINE(136)
					::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(136)
					{
						HX_STACK_LINE(136)
						::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(136)
						::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(136)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(136)
						int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(136)
						_this->length = tmp14;
						HX_STACK_LINE(136)
						int tmp15 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(136)
						_this->byteLength = tmp15;
						HX_STACK_LINE(136)
						::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(136)
						{
							HX_STACK_LINE(136)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(136)
							int tmp17 = _this->byteLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(136)
							::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(136)
							this2 = tmp18;
							HX_STACK_LINE(136)
							tmp16 = this2;
						}
						HX_STACK_LINE(136)
						_this->buffer = tmp16;
						HX_STACK_LINE(136)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(136)
						tmp12 = _this;
					}
					HX_STACK_LINE(136)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(136)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(136)
					if ((tmp12)){
						HX_STACK_LINE(136)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(136)
						{
							HX_STACK_LINE(136)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(136)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(136)
							::haxe::io::Bytes tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(136)
							::haxe::io::Bytes srcData = tmp15;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(136)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(136)
							int srcLength = tmp16;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(136)
							int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(136)
							int srcByteOffset = tmp17;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(136)
							int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(136)
							int srcElementSize = tmp18;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(136)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(136)
							int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(136)
							int tmp20 = _this->type;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(136)
							bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(136)
							if ((tmp21)){
								HX_STACK_LINE(136)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(136)
								int tmp22 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(136)
								int cloneLength = tmp22;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(136)
								::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(136)
								{
									HX_STACK_LINE(136)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(136)
									int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(136)
									::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(136)
									this2 = tmp25;
									HX_STACK_LINE(136)
									tmp23 = this2;
								}
								HX_STACK_LINE(136)
								_this->buffer = tmp23;
								HX_STACK_LINE(136)
								::haxe::io::Bytes tmp24 = srcData;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(136)
								int tmp25 = srcByteOffset;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(136)
								int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(136)
								_this->buffer->blit((int)0,tmp24,tmp25,tmp26);
							}
							else{
								HX_STACK_LINE(136)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(136)
							int tmp22 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(136)
							_this->byteLength = tmp22;
							HX_STACK_LINE(136)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(136)
							_this->length = srcLength;
							HX_STACK_LINE(136)
							tmp13 = _this;
						}
						HX_STACK_LINE(136)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(136)
						bool tmp13 = (_result_bytes != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(136)
						if ((tmp13)){
							HX_STACK_LINE(136)
							::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(136)
							{
								HX_STACK_LINE(136)
								::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(136)
								::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(136)
								bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(136)
								if ((tmp16)){
									HX_STACK_LINE(136)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(136)
								int tmp17 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(136)
								bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(136)
								if ((tmp18)){
									HX_STACK_LINE(136)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(136)
								int bufferByteLength = _result_bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(136)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(136)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(136)
								bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(136)
								if ((tmp19)){
									HX_STACK_LINE(136)
									int tmp20 = bufferByteLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(136)
									newByteLength = tmp20;
									HX_STACK_LINE(136)
									int tmp21 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(136)
									bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(136)
									if ((tmp22)){
										HX_STACK_LINE(136)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(136)
									bool tmp23 = (newByteLength < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(136)
									if ((tmp23)){
										HX_STACK_LINE(136)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(136)
									int tmp20 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(136)
									newByteLength = tmp20;
									HX_STACK_LINE(136)
									int tmp21 = newByteLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(136)
									int newRange = tmp21;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(136)
									bool tmp22 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(136)
									if ((tmp22)){
										HX_STACK_LINE(136)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(136)
								_this->buffer = _result_bytes;
								HX_STACK_LINE(136)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(136)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(136)
								Float tmp20 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(136)
								int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(136)
								_this->length = tmp21;
								HX_STACK_LINE(136)
								tmp14 = _this;
							}
							HX_STACK_LINE(136)
							this1 = tmp14;
						}
						else{
							HX_STACK_LINE(136)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(136)
			tmp9 = this1;
		}
		HX_STACK_LINE(137)
		int tmp10 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(138)
		int tmp11 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length_pcm","\x01","\x98","\xab","\x29"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(139)
		int tmp12 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		int tmp13 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(141)
		int tmp14 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bitrate","\x2d","\xf6","\xcf","\xfc"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(142)
		int tmp15 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp13,::snow::api::buffers::ArrayBufferView &tmp9,int &tmp11,int &tmp10,int &tmp15,int &tmp12,int &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",135,0x2669b743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83") , tmp9,false);
					__result->Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f") , tmp10,false);
					__result->Add(HX_HCSTRING("length_pcm","\x01","\x98","\xab","\x29") , tmp11,false);
					__result->Add(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a") , tmp12,false);
					__result->Add(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b") , tmp13,false);
					__result->Add(HX_HCSTRING("bitrate","\x2d","\xf6","\xcf","\xfc") , tmp14,false);
					__result->Add(HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36") , tmp15,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(135)
		Dynamic tmp16 = _Function_1_1::Block(tmp13,tmp9,tmp11,tmp10,tmp15,tmp12,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_2{
			inline static Dynamic Block( ::String &tmp6,int &tmp7,Dynamic &tmp8,Dynamic &tmp16){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",129,0x2669b743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , tmp7,false);
					__result->Add(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7") , tmp8,false);
					__result->Add(HX_HCSTRING("data","\x2a","\x56","\x63","\x42") , tmp16,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(129)
		Dynamic tmp17 = _Function_1_2::Block(tmp6,tmp7,tmp8,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(129)
		Dynamic _result_info = tmp17;		HX_STACK_VAR(_result_info,"_result_info");
		HX_STACK_LINE(147)
		_native_info = null();
		HX_STACK_LINE(149)
		Dynamic tmp18 = _result_info;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(149)
		return tmp18;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,audio_load_info,return )

Dynamic Assets_obj::audio_info_from_bytes( ::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_info_from_bytes",0x9c68508b,"snow.core.native.assets.Assets.audio_info_from_bytes","snow/core/native/assets/Assets.hx",154,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		bool tmp = (_bytes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		if ((tmp)){
			HX_STACK_LINE(156)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_bytes was null","\xd2","\x33","\xd5","\x32"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(158)
	::String tmp = (HX_HCSTRING("audio_info_from_bytes/","\x11","\x9b","\xc1","\x85") + _format);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	::String _id = tmp;		HX_STACK_VAR(_id,"_id");
	HX_STACK_LINE(160)
	Dynamic tmp1 = _format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	switch( (int)(tmp1)){
		case (int)2: {
			HX_STACK_LINE(161)
			::String tmp3 = _id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			::snow::api::buffers::ArrayBufferView tmp4 = _bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			tmp2 = this->audio_load_wav_from_bytes(tmp3,tmp4);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(162)
			::String tmp3 = _id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			::snow::api::buffers::ArrayBufferView tmp4 = _bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			tmp2 = this->audio_load_ogg_from_bytes(tmp3,tmp4);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(163)
			::String tmp3 = _id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			::snow::api::buffers::ArrayBufferView tmp4 = _bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			tmp2 = this->audio_load_pcm_from_bytes(tmp3,tmp4);
		}
		;break;
		default: {
			HX_STACK_LINE(164)
			tmp2 = null();
		}
	}
	HX_STACK_LINE(160)
	Dynamic _native_info = tmp2;		HX_STACK_VAR(_native_info,"_native_info");
	HX_STACK_LINE(168)
	bool tmp3 = (_native_info == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	if ((tmp3)){
		HX_STACK_LINE(168)
		::String tmp4 = (HX_HCSTRING("failed to process bytes for ","\xbf","\x75","\x62","\x92") + _id);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		::snow::types::Error tmp5 = ::snow::types::Error_obj::error(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(169)
	bool tmp4 = (_native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	if ((tmp4)){
		HX_STACK_LINE(169)
		::String tmp5 = (HX_HCSTRING("failed to process bytes for ","\xbf","\x75","\x62","\x92") + _id);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		::String tmp6 = (tmp5 + HX_HCSTRING(", data was null.","\x8e","\x7d","\x53","\xd5"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		::snow::types::Error tmp7 = ::snow::types::Error_obj::error(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		HX_STACK_DO_THROW(tmp7);
	}
	HX_STACK_LINE(171)
	::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::ofData(_native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(171)
	::haxe::io::Bytes _result_bytes = tmp5;		HX_STACK_VAR(_result_bytes,"_result_bytes");
	HX_STACK_LINE(174)
	::String tmp6 = _native_info->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(175)
	int tmp7 = _native_info->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(176)
	Dynamic tmp8 = _native_info->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(179)
	::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(179)
		bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		if ((tmp10)){
			HX_STACK_LINE(179)
			::snow::api::buffers::ArrayBufferView tmp11 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(179)
			this1 = tmp11;
		}
		else{
			HX_STACK_LINE(179)
			bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(179)
			if ((tmp11)){
				HX_STACK_LINE(179)
				::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(179)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(179)
					int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					_this->length = tmp14;
					HX_STACK_LINE(179)
					int tmp15 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					_this->byteLength = tmp15;
					HX_STACK_LINE(179)
					::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(179)
						int tmp17 = _this->byteLength;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(179)
						this2 = tmp18;
						HX_STACK_LINE(179)
						tmp16 = this2;
					}
					HX_STACK_LINE(179)
					_this->buffer = tmp16;
					HX_STACK_LINE(179)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(179)
					tmp12 = _this;
				}
				HX_STACK_LINE(179)
				this1 = tmp12;
			}
			else{
				HX_STACK_LINE(179)
				bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(179)
				if ((tmp12)){
					HX_STACK_LINE(179)
					::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(179)
						::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(179)
						::haxe::io::Bytes tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(179)
						::haxe::io::Bytes srcData = tmp15;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(179)
						int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(179)
						int srcLength = tmp16;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(179)
						int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						int srcByteOffset = tmp17;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(179)
						int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(179)
						int srcElementSize = tmp18;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(179)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(179)
						int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(179)
						int tmp20 = _this->type;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(179)
						bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(179)
						if ((tmp21)){
							HX_STACK_LINE(179)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(179)
							int tmp22 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(179)
							int cloneLength = tmp22;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(179)
								this2 = tmp25;
								HX_STACK_LINE(179)
								tmp23 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp23;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp24 = srcData;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(179)
							int tmp25 = srcByteOffset;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(179)
							int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(179)
							_this->buffer->blit((int)0,tmp24,tmp25,tmp26);
						}
						else{
							HX_STACK_LINE(179)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(179)
						int tmp22 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(179)
						_this->byteLength = tmp22;
						HX_STACK_LINE(179)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(179)
						_this->length = srcLength;
						HX_STACK_LINE(179)
						tmp13 = _this;
					}
					HX_STACK_LINE(179)
					this1 = tmp13;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp13 = (_result_bytes != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(179)
					if ((tmp13)){
						HX_STACK_LINE(179)
						::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(179)
							if ((tmp16)){
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(179)
							int tmp17 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(179)
							bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(179)
							if ((tmp18)){
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(179)
							int bufferByteLength = _result_bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(179)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(179)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(179)
							bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(179)
							if ((tmp19)){
								HX_STACK_LINE(179)
								int tmp20 = bufferByteLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								newByteLength = tmp20;
								HX_STACK_LINE(179)
								int tmp21 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(179)
								if ((tmp22)){
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(179)
								bool tmp23 = (newByteLength < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(179)
								if ((tmp23)){
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(179)
								int tmp20 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								newByteLength = tmp20;
								HX_STACK_LINE(179)
								int tmp21 = newByteLength;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								int newRange = tmp21;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(179)
								bool tmp22 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(179)
								if ((tmp22)){
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(179)
							_this->buffer = _result_bytes;
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(179)
							Float tmp20 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(179)
							int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(179)
							_this->length = tmp21;
							HX_STACK_LINE(179)
							tmp14 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp14;
					}
					else{
						HX_STACK_LINE(179)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
					}
				}
			}
		}
		HX_STACK_LINE(179)
		tmp9 = this1;
	}
	HX_STACK_LINE(180)
	int tmp10 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(181)
	int tmp11 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length_pcm","\x01","\x98","\xab","\x29"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(182)
	int tmp12 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(183)
	int tmp13 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(184)
	int tmp14 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bitrate","\x2d","\xf6","\xcf","\xfc"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(185)
	int tmp15 = _native_info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
	struct _Function_1_1{
		inline static Dynamic Block( int &tmp13,::snow::api::buffers::ArrayBufferView &tmp9,int &tmp11,int &tmp10,int &tmp15,int &tmp12,int &tmp14){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",178,0x2669b743)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83") , tmp9,false);
				__result->Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f") , tmp10,false);
				__result->Add(HX_HCSTRING("length_pcm","\x01","\x98","\xab","\x29") , tmp11,false);
				__result->Add(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a") , tmp12,false);
				__result->Add(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b") , tmp13,false);
				__result->Add(HX_HCSTRING("bitrate","\x2d","\xf6","\xcf","\xfc") , tmp14,false);
				__result->Add(HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36") , tmp15,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(178)
	Dynamic tmp16 = _Function_1_1::Block(tmp13,tmp9,tmp11,tmp10,tmp15,tmp12,tmp14);		HX_STACK_VAR(tmp16,"tmp16");
	struct _Function_1_2{
		inline static Dynamic Block( ::String &tmp6,int &tmp7,Dynamic &tmp8,Dynamic &tmp16){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",172,0x2669b743)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp6,false);
				__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , tmp7,false);
				__result->Add(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7") , tmp8,false);
				__result->Add(HX_HCSTRING("data","\x2a","\x56","\x63","\x42") , tmp16,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(172)
	Dynamic tmp17 = _Function_1_2::Block(tmp6,tmp7,tmp8,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(172)
	Dynamic _result_info = tmp17;		HX_STACK_VAR(_result_info,"_result_info");
	HX_STACK_LINE(190)
	_native_info = null();
	HX_STACK_LINE(192)
	Dynamic tmp18 = _result_info;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(192)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_info_from_bytes,return )

bool Assets_obj::audio_seek_source( Dynamic _info,int _to){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_seek_source",0xcd838a86,"snow.core.native.assets.Assets.audio_seek_source","snow/core/native/assets/Assets.hx",197,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		int _g = _info->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(200)
				Dynamic tmp1 = _info;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(200)
				int tmp2 = _to;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(200)
				bool tmp3 = this->audio_seek_source_ogg(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				return tmp3;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(201)
				Dynamic tmp1 = _info;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(201)
				int tmp2 = _to;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(201)
				bool tmp3 = this->audio_seek_source_wav(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				return tmp3;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(202)
				Dynamic tmp1 = _info;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(202)
				int tmp2 = _to;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(202)
				bool tmp3 = this->audio_seek_source_pcm(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				return tmp3;
			}
			;break;
			default: {
				HX_STACK_LINE(203)
				return false;
			}
		}
	}
	HX_STACK_LINE(206)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_seek_source,return )

Dynamic Assets_obj::audio_load_portion( Dynamic _info,int _start,int _len){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_portion",0x46a8ff8a,"snow.core.native.assets.Assets.audio_load_portion","snow/core/native/assets/Assets.hx",210,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_LINE(212)
	Dynamic native_blob = null();		HX_STACK_VAR(native_blob,"native_blob");
	HX_STACK_LINE(213)
	Dynamic result_blob = null();		HX_STACK_VAR(result_blob,"result_blob");
	HX_STACK_LINE(215)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		int _g = _info->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(215)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		switch( (int)(tmp1)){
			case (int)1: {
				HX_STACK_LINE(216)
				Dynamic tmp2 = _info;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(216)
				int tmp3 = _start;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(216)
				int tmp4 = _len;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(216)
				tmp = this->audio_load_portion_ogg(tmp2,tmp3,tmp4);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(217)
				Dynamic tmp2 = _info;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(217)
				int tmp3 = _start;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				int tmp4 = _len;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(217)
				tmp = this->audio_load_portion_wav(tmp2,tmp3,tmp4);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(218)
				Dynamic tmp2 = _info;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(218)
				int tmp3 = _start;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(218)
				int tmp4 = _len;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(218)
				tmp = this->audio_load_portion_pcm(tmp2,tmp3,tmp4);
			}
			;break;
			default: {
				HX_STACK_LINE(219)
				tmp = null();
			}
		}
	}
	HX_STACK_LINE(215)
	native_blob = tmp;
	HX_STACK_LINE(222)
	bool tmp1 = (native_blob != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	if ((tmp1)){
		HX_STACK_LINE(223)
		::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(native_blob->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		::haxe::io::Bytes _result_bytes = tmp2;		HX_STACK_VAR(_result_bytes,"_result_bytes");
		HX_STACK_LINE(225)
		::snow::api::buffers::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(225)
			bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			if ((tmp4)){
				HX_STACK_LINE(225)
				::snow::api::buffers::ArrayBufferView tmp5 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(225)
				this1 = tmp5;
			}
			else{
				HX_STACK_LINE(225)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(225)
				if ((tmp5)){
					HX_STACK_LINE(225)
					::snow::api::buffers::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(225)
					{
						HX_STACK_LINE(225)
						::snow::api::buffers::ArrayBufferView tmp7 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(225)
						::snow::api::buffers::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(225)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(225)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(225)
						_this->length = tmp8;
						HX_STACK_LINE(225)
						int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(225)
						_this->byteLength = tmp9;
						HX_STACK_LINE(225)
						::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(225)
						{
							HX_STACK_LINE(225)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(225)
							int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(225)
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(225)
							this2 = tmp12;
							HX_STACK_LINE(225)
							tmp10 = this2;
						}
						HX_STACK_LINE(225)
						_this->buffer = tmp10;
						HX_STACK_LINE(225)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(225)
						tmp6 = _this;
					}
					HX_STACK_LINE(225)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(225)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(225)
					if ((tmp6)){
						HX_STACK_LINE(225)
						::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(225)
						{
							HX_STACK_LINE(225)
							::snow::api::buffers::ArrayBufferView tmp8 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(225)
							::snow::api::buffers::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(225)
							::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(225)
							::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(225)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(225)
							int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(225)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(225)
							int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(225)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(225)
							int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(225)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(225)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(225)
							int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(225)
							bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(225)
							if ((tmp15)){
								HX_STACK_LINE(225)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(225)
								int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(225)
								int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(225)
								::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(225)
								{
									HX_STACK_LINE(225)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(225)
									int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(225)
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(225)
									this2 = tmp19;
									HX_STACK_LINE(225)
									tmp17 = this2;
								}
								HX_STACK_LINE(225)
								_this->buffer = tmp17;
								HX_STACK_LINE(225)
								::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(225)
								int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(225)
								int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(225)
								_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
							}
							else{
								HX_STACK_LINE(225)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(225)
							int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(225)
							_this->byteLength = tmp16;
							HX_STACK_LINE(225)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(225)
							_this->length = srcLength;
							HX_STACK_LINE(225)
							tmp7 = _this;
						}
						HX_STACK_LINE(225)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(225)
						bool tmp7 = (_result_bytes != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(225)
						if ((tmp7)){
							HX_STACK_LINE(225)
							::snow::api::buffers::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(225)
							{
								HX_STACK_LINE(225)
								::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(225)
								::snow::api::buffers::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(225)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(225)
								if ((tmp10)){
									HX_STACK_LINE(225)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(225)
								int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(225)
								bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(225)
								if ((tmp12)){
									HX_STACK_LINE(225)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(225)
								int bufferByteLength = _result_bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(225)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(225)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(225)
								bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(225)
								if ((tmp13)){
									HX_STACK_LINE(225)
									int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(225)
									newByteLength = tmp14;
									HX_STACK_LINE(225)
									int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(225)
									bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(225)
									if ((tmp16)){
										HX_STACK_LINE(225)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(225)
									bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(225)
									if ((tmp17)){
										HX_STACK_LINE(225)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(225)
									int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(225)
									newByteLength = tmp14;
									HX_STACK_LINE(225)
									int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(225)
									int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(225)
									bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(225)
									if ((tmp16)){
										HX_STACK_LINE(225)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(225)
								_this->buffer = _result_bytes;
								HX_STACK_LINE(225)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(225)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(225)
								Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(225)
								int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(225)
								_this->length = tmp15;
								HX_STACK_LINE(225)
								tmp8 = _this;
							}
							HX_STACK_LINE(225)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(225)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(225)
			tmp3 = this1;
		}
		HX_STACK_LINE(226)
		bool tmp4 = native_blob->__Field(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_2_1{
			inline static Dynamic Block( bool &tmp4,::snow::api::buffers::ArrayBufferView &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/core/native/assets/Assets.hx",224,0x2669b743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , tmp3,false);
					__result->Add(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f") , tmp4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(224)
		Dynamic tmp5 = _Function_2_1::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(224)
		result_blob = tmp5;
	}
	HX_STACK_LINE(230)
	Dynamic tmp2 = result_blob;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,audio_load_portion,return )

Dynamic Assets_obj::audio_load_ogg( ::String _path,Dynamic __o_load){
Dynamic load = __o_load.Default(true);
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_ogg",0xc796d572,"snow.core.native.assets.Assets.audio_load_ogg","snow/core/native/assets/Assets.hx",236,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(load,"load")
{
		HX_STACK_LINE(237)
		::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		Dynamic tmp1 = load;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		Dynamic tmp2 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_load_info_ogg(tmp,tmp1,null(),(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_load_ogg,return )

Dynamic Assets_obj::audio_load_ogg_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_ogg_from_bytes",0xfc56c983,"snow.core.native.assets.Assets.audio_load_ogg_from_bytes","snow/core/native/assets/Assets.hx",240,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(241)
	::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	::haxe::io::Bytes tmp1 = _bytes->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	int tmp2 = _bytes->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	int tmp3 = _bytes->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(241)
	Dynamic tmp4 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_load_info_ogg(tmp,true,tmp1->b,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(241)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_load_ogg_from_bytes,return )

Dynamic Assets_obj::audio_load_portion_ogg( Dynamic _info,int _start,int _len){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_portion_ogg",0x9d0065da,"snow.core.native.assets.Assets.audio_load_portion_ogg","snow/core/native/assets/Assets.hx",244,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_LINE(245)
	Dynamic tmp = _info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	int tmp1 = _start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	int tmp2 = _len;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(245)
	Dynamic tmp3 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_read_bytes_ogg(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,audio_load_portion_ogg,return )

bool Assets_obj::audio_seek_source_ogg( Dynamic _info,int _to){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_seek_source_ogg",0xfde21ed6,"snow.core.native.assets.Assets.audio_seek_source_ogg","snow/core/native/assets/Assets.hx",248,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(249)
	Dynamic tmp = _info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	int tmp1 = _to;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	bool tmp2 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_seek_bytes_ogg(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_seek_source_ogg,return )

Dynamic Assets_obj::audio_load_wav( ::String _path,Dynamic __o_load){
Dynamic load = __o_load.Default(true);
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_wav",0xc79ce24f,"snow.core.native.assets.Assets.audio_load_wav","snow/core/native/assets/Assets.hx",254,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(load,"load")
{
		HX_STACK_LINE(255)
		::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		Dynamic tmp1 = load;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		Dynamic tmp2 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_load_info_wav(tmp,tmp1,null(),(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_load_wav,return )

Dynamic Assets_obj::audio_load_wav_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_wav_from_bytes",0x4975dfc6,"snow.core.native.assets.Assets.audio_load_wav_from_bytes","snow/core/native/assets/Assets.hx",258,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(259)
	::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	::haxe::io::Bytes tmp1 = _bytes->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	int tmp2 = _bytes->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	int tmp3 = _bytes->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	Dynamic tmp4 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_load_info_wav(tmp,true,tmp1->b,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(259)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_load_wav_from_bytes,return )

Dynamic Assets_obj::audio_load_portion_wav( Dynamic _info,int _start,int _len){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_portion_wav",0x9d0672b7,"snow.core.native.assets.Assets.audio_load_portion_wav","snow/core/native/assets/Assets.hx",262,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_LINE(263)
	Dynamic tmp = _info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	int tmp1 = _start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	int tmp2 = _len;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(263)
	Dynamic tmp3 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_read_bytes_wav(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(263)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,audio_load_portion_wav,return )

bool Assets_obj::audio_seek_source_wav( Dynamic _info,int _to){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_seek_source_wav",0xfde82bb3,"snow.core.native.assets.Assets.audio_seek_source_wav","snow/core/native/assets/Assets.hx",266,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(267)
	Dynamic tmp = _info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	int tmp1 = _to;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	bool tmp2 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_seek_bytes_wav(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_seek_source_wav,return )

Dynamic Assets_obj::audio_load_pcm( ::String _path,Dynamic __o_load){
Dynamic load = __o_load.Default(true);
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_pcm",0xc797943d,"snow.core.native.assets.Assets.audio_load_pcm","snow/core/native/assets/Assets.hx",272,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(load,"load")
{
		HX_STACK_LINE(273)
		::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		Dynamic tmp1 = load;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		Dynamic tmp2 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_load_info_pcm(tmp,tmp1,null(),(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_load_pcm,return )

Dynamic Assets_obj::audio_load_pcm_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_pcm_from_bytes",0x327eb898,"snow.core.native.assets.Assets.audio_load_pcm_from_bytes","snow/core/native/assets/Assets.hx",276,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(277)
	::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	::haxe::io::Bytes tmp1 = _bytes->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	int tmp2 = _bytes->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(277)
	int tmp3 = _bytes->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(277)
	Dynamic tmp4 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_load_info_pcm(tmp,true,tmp1->b,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(277)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_load_pcm_from_bytes,return )

Dynamic Assets_obj::audio_load_portion_pcm( Dynamic _info,int _start,int _len){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_load_portion_pcm",0x9d0124a5,"snow.core.native.assets.Assets.audio_load_portion_pcm","snow/core/native/assets/Assets.hx",280,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_len,"_len")
	HX_STACK_LINE(281)
	Dynamic tmp = _info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	int tmp1 = _start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	int tmp2 = _len;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(281)
	Dynamic tmp3 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_read_bytes_pcm(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(281)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,audio_load_portion_pcm,return )

bool Assets_obj::audio_seek_source_pcm( Dynamic _info,int _to){
	HX_STACK_FRAME("snow.core.native.assets.Assets","audio_seek_source_pcm",0xfde2dda1,"snow.core.native.assets.Assets.audio_seek_source_pcm","snow/core/native/assets/Assets.hx",284,0x2669b743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(285)
	Dynamic tmp = _info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	int tmp1 = _to;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	bool tmp2 = ::snow::core::native::assets::Assets_obj::snow_assets_audio_seek_bytes_pcm(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio_seek_source_pcm,return )

Void Assets_obj::init( ){
{
		HX_STACK_FRAME("snow.core.native.assets.Assets","init",0x16067083,"snow.core.native.assets.Assets.init","snow/core/native/assets/Assets.hx",310,0x2669b743)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,init,(void))

Void Assets_obj::update( ){
{
		HX_STACK_FRAME("snow.core.native.assets.Assets","update",0x689f3e3c,"snow.core.native.assets.Assets.update","snow/core/native/assets/Assets.hx",311,0x2669b743)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,update,(void))

Void Assets_obj::destroy( ){
{
		HX_STACK_FRAME("snow.core.native.assets.Assets","destroy",0xa96da167,"snow.core.native.assets.Assets.destroy","snow/core/native/assets/Assets.hx",312,0x2669b743)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,destroy,(void))

Void Assets_obj::on_event( Dynamic event){
{
		HX_STACK_FRAME("snow.core.native.assets.Assets","on_event",0xe262fcad,"snow.core.native.assets.Assets.on_event","snow/core/native/assets/Assets.hx",313,0x2669b743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,on_event,(void))

Dynamic Assets_obj::snow_assets_image_load_info;

Dynamic Assets_obj::snow_assets_image_info_from_bytes;

Dynamic Assets_obj::snow_assets_audio_load_info_ogg;

Dynamic Assets_obj::snow_assets_audio_read_bytes_ogg;

Dynamic Assets_obj::snow_assets_audio_seek_bytes_ogg;

Dynamic Assets_obj::snow_assets_audio_load_info_wav;

Dynamic Assets_obj::snow_assets_audio_read_bytes_wav;

Dynamic Assets_obj::snow_assets_audio_seek_bytes_wav;

Dynamic Assets_obj::snow_assets_audio_load_info_pcm;

Dynamic Assets_obj::snow_assets_audio_read_bytes_pcm;

Dynamic Assets_obj::snow_assets_audio_seek_bytes_pcm;


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
}

Dynamic Assets_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"audio_load_ogg") ) { return audio_load_ogg_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_wav") ) { return audio_load_wav_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_pcm") ) { return audio_load_pcm_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"image_load_info") ) { return image_load_info_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_info") ) { return audio_load_info_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"audio_seek_source") ) { return audio_seek_source_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"audio_load_portion") ) { return audio_load_portion_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"image_info_from_bytes") ) { return image_info_from_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_info_from_bytes") ) { return audio_info_from_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_seek_source_ogg") ) { return audio_seek_source_ogg_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_seek_source_wav") ) { return audio_seek_source_wav_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_seek_source_pcm") ) { return audio_seek_source_pcm_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"image_info_from_pixels") ) { return image_info_from_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_portion_ogg") ) { return audio_load_portion_ogg_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_portion_wav") ) { return audio_load_portion_wav_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_portion_pcm") ) { return audio_load_portion_pcm_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"audio_load_ogg_from_bytes") ) { return audio_load_ogg_from_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_wav_from_bytes") ) { return audio_load_wav_from_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"audio_load_pcm_from_bytes") ) { return audio_load_pcm_from_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 27:
		if (HX_FIELD_EQ(inName,"snow_assets_image_load_info") ) { outValue = snow_assets_image_load_info; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_ogg") ) { outValue = snow_assets_audio_load_info_ogg; return true;  }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_wav") ) { outValue = snow_assets_audio_load_info_wav; return true;  }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_pcm") ) { outValue = snow_assets_audio_load_info_pcm; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_ogg") ) { outValue = snow_assets_audio_read_bytes_ogg; return true;  }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_ogg") ) { outValue = snow_assets_audio_seek_bytes_ogg; return true;  }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_wav") ) { outValue = snow_assets_audio_read_bytes_wav; return true;  }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_wav") ) { outValue = snow_assets_audio_seek_bytes_wav; return true;  }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_pcm") ) { outValue = snow_assets_audio_read_bytes_pcm; return true;  }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_pcm") ) { outValue = snow_assets_audio_seek_bytes_pcm; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"snow_assets_image_info_from_bytes") ) { outValue = snow_assets_image_info_from_bytes; return true;  }
	}
	return false;
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::snow::_system::assets::Assets >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 27:
		if (HX_FIELD_EQ(inName,"snow_assets_image_load_info") ) { snow_assets_image_load_info=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_ogg") ) { snow_assets_audio_load_info_ogg=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_wav") ) { snow_assets_audio_load_info_wav=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_load_info_pcm") ) { snow_assets_audio_load_info_pcm=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_ogg") ) { snow_assets_audio_read_bytes_ogg=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_ogg") ) { snow_assets_audio_seek_bytes_ogg=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_wav") ) { snow_assets_audio_read_bytes_wav=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_wav") ) { snow_assets_audio_seek_bytes_wav=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_read_bytes_pcm") ) { snow_assets_audio_read_bytes_pcm=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_assets_audio_seek_bytes_pcm") ) { snow_assets_audio_seek_bytes_pcm=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"snow_assets_image_info_from_bytes") ) { snow_assets_image_info_from_bytes=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::_system::assets::Assets*/ ,(int)offsetof(Assets_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_image_load_info,HX_HCSTRING("snow_assets_image_load_info","\xc3","\xb9","\x39","\x3a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_image_info_from_bytes,HX_HCSTRING("snow_assets_image_info_from_bytes","\x63","\x86","\x00","\xfd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_audio_load_info_ogg,HX_HCSTRING("snow_assets_audio_load_info_ogg","\x4e","\x0b","\x14","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_audio_read_bytes_ogg,HX_HCSTRING("snow_assets_audio_read_bytes_ogg","\xdb","\x13","\xa3","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_audio_seek_bytes_ogg,HX_HCSTRING("snow_assets_audio_seek_bytes_ogg","\x7d","\x0c","\x63","\xa2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_audio_load_info_wav,HX_HCSTRING("snow_assets_audio_load_info_wav","\x2b","\x18","\x1a","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_audio_read_bytes_wav,HX_HCSTRING("snow_assets_audio_read_bytes_wav","\xb8","\x20","\xa9","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_audio_seek_bytes_wav,HX_HCSTRING("snow_assets_audio_seek_bytes_wav","\x5a","\x19","\x69","\xa2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_audio_load_info_pcm,HX_HCSTRING("snow_assets_audio_load_info_pcm","\x19","\xca","\x14","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_audio_read_bytes_pcm,HX_HCSTRING("snow_assets_audio_read_bytes_pcm","\xa6","\xd2","\xa3","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::snow_assets_audio_seek_bytes_pcm,HX_HCSTRING("snow_assets_audio_seek_bytes_pcm","\x48","\xcb","\x63","\xa2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("image_load_info","\x43","\xab","\x2e","\x95"),
	HX_HCSTRING("image_info_from_bytes","\xe3","\x97","\x7b","\x86"),
	HX_HCSTRING("image_info_from_pixels","\xb5","\xe8","\xe3","\x8a"),
	HX_HCSTRING("audio_load_info","\x7e","\xcc","\x2c","\x60"),
	HX_HCSTRING("audio_info_from_bytes","\x5e","\xd7","\xba","\x7d"),
	HX_HCSTRING("audio_seek_source","\xd9","\x6b","\x8f","\xda"),
	HX_HCSTRING("audio_load_portion","\xd7","\x46","\x02","\xa4"),
	HX_HCSTRING("audio_load_ogg","\x3f","\x32","\x6d","\x9b"),
	HX_HCSTRING("audio_load_ogg_from_bytes","\xd6","\xb5","\xf0","\x1d"),
	HX_HCSTRING("audio_load_portion_ogg","\xa7","\xd7","\xe3","\xe3"),
	HX_HCSTRING("audio_seek_source_ogg","\xa9","\xa5","\x34","\xdf"),
	HX_HCSTRING("audio_load_wav","\x1c","\x3f","\x73","\x9b"),
	HX_HCSTRING("audio_load_wav_from_bytes","\x19","\xcc","\x0f","\x6b"),
	HX_HCSTRING("audio_load_portion_wav","\x84","\xe4","\xe9","\xe3"),
	HX_HCSTRING("audio_seek_source_wav","\x86","\xb2","\x3a","\xdf"),
	HX_HCSTRING("audio_load_pcm","\x0a","\xf1","\x6d","\x9b"),
	HX_HCSTRING("audio_load_pcm_from_bytes","\xeb","\xa4","\x18","\x54"),
	HX_HCSTRING("audio_load_portion_pcm","\x72","\x96","\xe4","\xe3"),
	HX_HCSTRING("audio_seek_source_pcm","\x74","\x64","\x35","\xdf"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_image_load_info,"snow_assets_image_load_info");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_image_info_from_bytes,"snow_assets_image_info_from_bytes");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_audio_load_info_ogg,"snow_assets_audio_load_info_ogg");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_audio_read_bytes_ogg,"snow_assets_audio_read_bytes_ogg");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_audio_seek_bytes_ogg,"snow_assets_audio_seek_bytes_ogg");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_audio_load_info_wav,"snow_assets_audio_load_info_wav");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_audio_read_bytes_wav,"snow_assets_audio_read_bytes_wav");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_audio_seek_bytes_wav,"snow_assets_audio_seek_bytes_wav");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_audio_load_info_pcm,"snow_assets_audio_load_info_pcm");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_audio_read_bytes_pcm,"snow_assets_audio_read_bytes_pcm");
	HX_MARK_MEMBER_NAME(Assets_obj::snow_assets_audio_seek_bytes_pcm,"snow_assets_audio_seek_bytes_pcm");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_image_load_info,"snow_assets_image_load_info");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_image_info_from_bytes,"snow_assets_image_info_from_bytes");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_audio_load_info_ogg,"snow_assets_audio_load_info_ogg");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_audio_read_bytes_ogg,"snow_assets_audio_read_bytes_ogg");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_audio_seek_bytes_ogg,"snow_assets_audio_seek_bytes_ogg");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_audio_load_info_wav,"snow_assets_audio_load_info_wav");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_audio_read_bytes_wav,"snow_assets_audio_read_bytes_wav");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_audio_seek_bytes_wav,"snow_assets_audio_seek_bytes_wav");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_audio_load_info_pcm,"snow_assets_audio_load_info_pcm");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_audio_read_bytes_pcm,"snow_assets_audio_read_bytes_pcm");
	HX_VISIT_MEMBER_NAME(Assets_obj::snow_assets_audio_seek_bytes_pcm,"snow_assets_audio_seek_bytes_pcm");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("snow_assets_image_load_info","\xc3","\xb9","\x39","\x3a"),
	HX_HCSTRING("snow_assets_image_info_from_bytes","\x63","\x86","\x00","\xfd"),
	HX_HCSTRING("snow_assets_audio_load_info_ogg","\x4e","\x0b","\x14","\x46"),
	HX_HCSTRING("snow_assets_audio_read_bytes_ogg","\xdb","\x13","\xa3","\x52"),
	HX_HCSTRING("snow_assets_audio_seek_bytes_ogg","\x7d","\x0c","\x63","\xa2"),
	HX_HCSTRING("snow_assets_audio_load_info_wav","\x2b","\x18","\x1a","\x46"),
	HX_HCSTRING("snow_assets_audio_read_bytes_wav","\xb8","\x20","\xa9","\x52"),
	HX_HCSTRING("snow_assets_audio_seek_bytes_wav","\x5a","\x19","\x69","\xa2"),
	HX_HCSTRING("snow_assets_audio_load_info_pcm","\x19","\xca","\x14","\x46"),
	HX_HCSTRING("snow_assets_audio_read_bytes_pcm","\xa6","\xd2","\xa3","\x52"),
	HX_HCSTRING("snow_assets_audio_seek_bytes_pcm","\x48","\xcb","\x63","\xa2"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.assets.Assets","\xdb","\x1f","\x9b","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
	snow_assets_image_load_info= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_image_load_info","\xc3","\xb9","\x39","\x3a"),(int)2);
	snow_assets_image_info_from_bytes= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_image_info_from_bytes","\x63","\x86","\x00","\xfd"),(int)5);
	snow_assets_audio_load_info_ogg= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_audio_load_info_ogg","\x4e","\x0b","\x14","\x46"),(int)5);
	snow_assets_audio_read_bytes_ogg= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_audio_read_bytes_ogg","\xdb","\x13","\xa3","\x52"),(int)3);
	snow_assets_audio_seek_bytes_ogg= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_audio_seek_bytes_ogg","\x7d","\x0c","\x63","\xa2"),(int)2);
	snow_assets_audio_load_info_wav= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_audio_load_info_wav","\x2b","\x18","\x1a","\x46"),(int)5);
	snow_assets_audio_read_bytes_wav= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_audio_read_bytes_wav","\xb8","\x20","\xa9","\x52"),(int)3);
	snow_assets_audio_seek_bytes_wav= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_audio_seek_bytes_wav","\x5a","\x19","\x69","\xa2"),(int)2);
	snow_assets_audio_load_info_pcm= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_audio_load_info_pcm","\x19","\xca","\x14","\x46"),(int)5);
	snow_assets_audio_read_bytes_pcm= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_audio_read_bytes_pcm","\xa6","\xd2","\xa3","\x52"),(int)3);
	snow_assets_audio_seek_bytes_pcm= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_assets_audio_seek_bytes_pcm","\x48","\xcb","\x63","\xa2"),(int)2);
}

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace assets
