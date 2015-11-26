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
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_modules_openal_AL
#include <snow/modules/openal/AL.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALHelper
#include <snow/modules/openal/ALHelper.h>
#endif
#ifndef INCLUDED_snow_modules_openal_sound_ALSound
#include <snow/modules/openal/sound/ALSound.h>
#endif
#ifndef INCLUDED_snow_modules_openal_sound_Sound
#include <snow/modules/openal/sound/Sound.h>
#endif
#ifndef INCLUDED_snow_system_audio_Sound
#include <snow/system/audio/Sound.h>
#endif
namespace snow{
namespace modules{
namespace openal{
namespace sound{

Void ALSound_obj::__construct(::snow::modules::openal::sound::Sound _owner)
{
HX_STACK_FRAME("snow.modules.openal.sound.ALSound","new",0xd2ad7e90,"snow.modules.openal.sound.ALSound.new","snow/modules/openal/sound/ALSound.hx",15,0x61113760)
HX_STACK_THIS(this)
HX_STACK_ARG(_owner,"_owner")
{
	HX_STACK_LINE(20)
	this->buffer = (int)-1;
	HX_STACK_LINE(27)
	this->owner = _owner;
}
;
	return null();
}

//ALSound_obj::~ALSound_obj() { }

Dynamic ALSound_obj::__CreateEmpty() { return  new ALSound_obj; }
hx::ObjectPtr< ALSound_obj > ALSound_obj::__new(::snow::modules::openal::sound::Sound _owner)
{  hx::ObjectPtr< ALSound_obj > _result_ = new ALSound_obj();
	_result_->__construct(_owner);
	return _result_;}

Dynamic ALSound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALSound_obj > _result_ = new ALSound_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ALSound_obj::play( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","play",0x8678e9c4,"snow.modules.openal.sound.ALSound.play","snow/modules/openal/sound/ALSound.hx",29,0x61113760)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		::snow::modules::openal::AL_obj::sourcePlay(tmp);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,play,(void))

Void ALSound_obj::loop( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","loop",0x83d66234,"snow.modules.openal.sound.ALSound.loop","snow/modules/openal/sound/ALSound.hx",39,0x61113760)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::snow::modules::openal::AL_obj::sourcePlay(tmp);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,loop,(void))

Void ALSound_obj::pause( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","pause",0x1c1d7126,"snow.modules.openal.sound.ALSound.pause","snow/modules/openal/sound/ALSound.hx",47,0x61113760)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::snow::modules::openal::AL_obj::sourcePause(tmp);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,pause,(void))

Void ALSound_obj::stop( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","stop",0x887aabd2,"snow.modules.openal.sound.ALSound.stop","snow/modules/openal/sound/ALSound.hx",55,0x61113760)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		::snow::modules::openal::AL_obj::sourceStop(tmp);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,stop,(void))

Void ALSound_obj::destroy( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","destroy",0xf38ab32a,"snow.modules.openal.sound.ALSound.destroy","snow/modules/openal/sound/ALSound.hx",63,0x61113760)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::snow::modules::openal::AL_obj::deleteSource(tmp);
		HX_STACK_LINE(66)
		int tmp1 = this->buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		if ((tmp2)){
			HX_STACK_LINE(66)
			int tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::snow::modules::openal::AL_obj::deleteBuffer(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,destroy,(void))

Void ALSound_obj::internal_update( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","internal_update",0xb1f4783b,"snow.modules.openal.sound.ALSound.internal_update","snow/modules/openal/sound/ALSound.hx",72,0x61113760)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		::snow::modules::openal::sound::Sound tmp = this->owner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		bool tmp1 = tmp->get_playing();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		if ((tmp2)){
			HX_STACK_LINE(75)
			return null();
		}
		HX_STACK_LINE(78)
		int tmp3 = this->source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		int tmp4 = ::snow::modules::openal::AL_obj::SOURCE_STATE;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		int tmp5 = ::snow::modules::openal::AL_obj::getSourcei(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		int tmp6 = ::snow::modules::openal::AL_obj::STOPPED;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		if ((tmp7)){
			HX_STACK_LINE(79)
			::snow::modules::openal::sound::Sound tmp8 = this->owner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(79)
			tmp8->onended();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,internal_update,(void))

Void ALSound_obj::internal_play( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","internal_play",0x8157cfa6,"snow.modules.openal.sound.ALSound.internal_play","snow/modules/openal/sound/ALSound.hx",84,0x61113760)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,internal_play,(void))

Void ALSound_obj::internal_loop( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","internal_loop",0x7eb54816,"snow.modules.openal.sound.ALSound.internal_loop","snow/modules/openal/sound/ALSound.hx",85,0x61113760)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,internal_loop,(void))

Void ALSound_obj::internal_stop( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","internal_stop",0x835991b4,"snow.modules.openal.sound.ALSound.internal_stop","snow/modules/openal/sound/ALSound.hx",86,0x61113760)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,internal_stop,(void))

Void ALSound_obj::internal_pause( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","internal_pause",0xa447b104,"snow.modules.openal.sound.ALSound.internal_pause","snow/modules/openal/sound/ALSound.hx",87,0x61113760)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,internal_pause,(void))

Void ALSound_obj::update_info( Dynamic info){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALSound","update_info",0x4132abd4,"snow.modules.openal.sound.ALSound.update_info","snow/modules/openal/sound/ALSound.hx",91,0x61113760)
		HX_STACK_THIS(this)
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(103)
		int tmp = ::snow::modules::openal::AL_obj::genSource();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		this->source = tmp;
		HX_STACK_LINE(108)
		int tmp1 = this->source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		::snow::modules::openal::ALHelper_obj::default_source_setup(tmp1);
		HX_STACK_LINE(111)
		int tmp2 = ::snow::modules::openal::AL_obj::genBuffer();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		this->buffer = tmp2;
		HX_STACK_LINE(116)
		Dynamic tmp3 = info;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		int tmp4 = ::snow::modules::openal::ALHelper_obj::determine_format(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		this->format = tmp4;
		HX_STACK_LINE(119)
		::snow::api::buffers::ArrayBufferView tmp5 = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(119)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(119)
		if ((tmp7)){
			HX_STACK_LINE(119)
			::snow::api::buffers::ArrayBufferView tmp9 = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(119)
			::snow::api::buffers::ArrayBufferView tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(119)
			int tmp11 = tmp10->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(119)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(119)
			tmp8 = (tmp12 == (int)0);
		}
		else{
			HX_STACK_LINE(119)
			tmp8 = true;
		}
		HX_STACK_LINE(119)
		if ((tmp8)){
			HX_STACK_LINE(121)
			return null();
		}
		HX_STACK_LINE(125)
		int tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(125)
		int tmp10 = this->format;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(125)
		::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::snow::api::buffers::ArrayBufferView tmp12 = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			::haxe::io::Bytes buffer = tmp12->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(125)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(125)
			bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(125)
			if ((tmp13)){
				HX_STACK_LINE(125)
				::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(125)
				this1 = tmp14;
			}
			else{
				HX_STACK_LINE(125)
				bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(125)
				if ((tmp14)){
					HX_STACK_LINE(125)
					::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(125)
					{
						HX_STACK_LINE(125)
						::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(125)
						::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(125)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(125)
						int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(125)
						_this->length = tmp17;
						HX_STACK_LINE(125)
						int tmp18 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(125)
						_this->byteLength = tmp18;
						HX_STACK_LINE(125)
						::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(125)
							int tmp20 = _this->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(125)
							::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(125)
							this2 = tmp21;
							HX_STACK_LINE(125)
							tmp19 = this2;
						}
						HX_STACK_LINE(125)
						_this->buffer = tmp19;
						HX_STACK_LINE(125)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(125)
						tmp15 = _this;
					}
					HX_STACK_LINE(125)
					this1 = tmp15;
				}
				else{
					HX_STACK_LINE(125)
					bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(125)
					if ((tmp15)){
						HX_STACK_LINE(125)
						::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(125)
							::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(125)
							::haxe::io::Bytes tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(125)
							::haxe::io::Bytes srcData = tmp18;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(125)
							int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(125)
							int srcLength = tmp19;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(125)
							int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(125)
							int srcByteOffset = tmp20;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(125)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(125)
							int srcElementSize = tmp21;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(125)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(125)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(125)
							int tmp23 = _this->type;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(125)
							bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(125)
							if ((tmp24)){
								HX_STACK_LINE(125)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(125)
								int tmp25 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(125)
								int cloneLength = tmp25;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(125)
								::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(125)
								{
									HX_STACK_LINE(125)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(125)
									int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(125)
									::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(125)
									this2 = tmp28;
									HX_STACK_LINE(125)
									tmp26 = this2;
								}
								HX_STACK_LINE(125)
								_this->buffer = tmp26;
								HX_STACK_LINE(125)
								::haxe::io::Bytes tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(125)
								int tmp28 = srcByteOffset;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(125)
								int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(125)
								_this->buffer->blit((int)0,tmp27,tmp28,tmp29);
							}
							else{
								HX_STACK_LINE(125)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(125)
							int tmp25 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(125)
							_this->byteLength = tmp25;
							HX_STACK_LINE(125)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(125)
							_this->length = srcLength;
							HX_STACK_LINE(125)
							tmp16 = _this;
						}
						HX_STACK_LINE(125)
						this1 = tmp16;
					}
					else{
						HX_STACK_LINE(125)
						bool tmp16 = (buffer != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(125)
						if ((tmp16)){
							HX_STACK_LINE(125)
							::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(125)
							{
								HX_STACK_LINE(125)
								::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(125)
								::snow::api::buffers::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(125)
								bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(125)
								if ((tmp19)){
									HX_STACK_LINE(125)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(125)
								int tmp20 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(125)
								bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(125)
								if ((tmp21)){
									HX_STACK_LINE(125)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(125)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(125)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(125)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(125)
								bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(125)
								if ((tmp22)){
									HX_STACK_LINE(125)
									int tmp23 = bufferByteLength;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(125)
									newByteLength = tmp23;
									HX_STACK_LINE(125)
									int tmp24 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(125)
									bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(125)
									if ((tmp25)){
										HX_STACK_LINE(125)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(125)
									bool tmp26 = (newByteLength < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(125)
									if ((tmp26)){
										HX_STACK_LINE(125)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(125)
									int tmp23 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(125)
									newByteLength = tmp23;
									HX_STACK_LINE(125)
									int tmp24 = newByteLength;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(125)
									int newRange = tmp24;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(125)
									bool tmp25 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(125)
									if ((tmp25)){
										HX_STACK_LINE(125)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(125)
								_this->buffer = buffer;
								HX_STACK_LINE(125)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(125)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(125)
								Float tmp23 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(125)
								int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(125)
								_this->length = tmp24;
								HX_STACK_LINE(125)
								tmp17 = _this;
							}
							HX_STACK_LINE(125)
							this1 = tmp17;
						}
						else{
							HX_STACK_LINE(125)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(125)
			tmp11 = this1;
		}
		HX_STACK_LINE(125)
		int tmp12 = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(125)
		::snow::modules::openal::AL_obj::bufferData(tmp9,tmp10,tmp11,tmp12);
		HX_STACK_LINE(130)
		int tmp13 = this->source;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(130)
		int tmp14 = ::snow::modules::openal::AL_obj::BUFFER;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(130)
		int tmp15 = this->buffer;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(130)
		::snow::modules::openal::AL_obj::sourcei(tmp13,tmp14,tmp15);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,update_info,(void))

bool ALSound_obj::set_playing( bool _playing){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","set_playing",0x107ad4c1,"snow.modules.openal.sound.ALSound.set_playing","snow/modules/openal/sound/ALSound.hx",136,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_playing,"_playing")
	HX_STACK_LINE(136)
	bool tmp = _playing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,set_playing,return )

bool ALSound_obj::set_paused( bool _paused){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","set_paused",0x0156c6bb,"snow.modules.openal.sound.ALSound.set_paused","snow/modules/openal/sound/ALSound.hx",137,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_paused,"_paused")
	HX_STACK_LINE(137)
	bool tmp = _paused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,set_paused,return )

bool ALSound_obj::set_loaded( bool _loaded){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","set_loaded",0x6a41ce12,"snow.modules.openal.sound.ALSound.set_loaded","snow/modules/openal/sound/ALSound.hx",138,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_loaded,"_loaded")
	HX_STACK_LINE(138)
	bool tmp = _loaded;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,set_loaded,return )

int ALSound_obj::get_position_bytes( ){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","get_position_bytes",0x4438fdae,"snow.modules.openal.sound.ALSound.get_position_bytes","snow/modules/openal/sound/ALSound.hx",142,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	int tmp1 = ::snow::modules::openal::AL_obj::SAMPLE_OFFSET;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	Float tmp2 = ::snow::modules::openal::AL_obj::getSourcef(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(144)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,get_position_bytes,return )

Float ALSound_obj::get_position( ){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","get_position",0xc60b6082,"snow.modules.openal.sound.ALSound.get_position","snow/modules/openal/sound/ALSound.hx",148,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	int tmp1 = ::snow::modules::openal::AL_obj::SEC_OFFSET;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	Float tmp2 = ::snow::modules::openal::AL_obj::getSourcef(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ALSound_obj,get_position,return )

Float ALSound_obj::set_pan( Float _pan){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","set_pan",0xe8d03130,"snow.modules.openal.sound.ALSound.set_pan","snow/modules/openal/sound/ALSound.hx",154,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(156)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	int tmp1 = ::snow::modules::openal::AL_obj::POSITION;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	Float tmp2 = (_pan - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	Float tmp3 = ::snow::modules::openal::sound::ALSound_obj::half_pi;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(156)
	Float tmp6 = (_pan + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(156)
	Float tmp7 = ::snow::modules::openal::sound::ALSound_obj::half_pi;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(156)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(156)
	Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(156)
	::snow::modules::openal::AL_obj::source3f(tmp,tmp1,tmp5,(int)0,tmp9);
	HX_STACK_LINE(158)
	Float tmp10 = _pan;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(158)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,set_pan,return )

Float ALSound_obj::set_pitch( Float _pitch){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","set_pitch",0xe7717653,"snow.modules.openal.sound.ALSound.set_pitch","snow/modules/openal/sound/ALSound.hx",162,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(164)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	int tmp1 = ::snow::modules::openal::AL_obj::PITCH;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	Float tmp2 = _pitch;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	::snow::modules::openal::AL_obj::sourcef(tmp,tmp1,tmp2);
	HX_STACK_LINE(166)
	Float tmp3 = _pitch;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,set_pitch,return )

Float ALSound_obj::set_volume( Float _volume){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","set_volume",0x7125afe7,"snow.modules.openal.sound.ALSound.set_volume","snow/modules/openal/sound/ALSound.hx",170,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(172)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	int tmp1 = ::snow::modules::openal::AL_obj::GAIN;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	Float tmp2 = _volume;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	::snow::modules::openal::AL_obj::sourcef(tmp,tmp1,tmp2);
	HX_STACK_LINE(174)
	Float tmp3 = _volume;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,set_volume,return )

bool ALSound_obj::set_looping( bool _looping){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","set_looping",0xa6e04251,"snow.modules.openal.sound.ALSound.set_looping","snow/modules/openal/sound/ALSound.hx",178,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_looping,"_looping")
	HX_STACK_LINE(180)
	::snow::modules::openal::sound::Sound tmp = this->owner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	::String tmp1 = tmp->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	::String tmp3 = (tmp2 + HX_HCSTRING(" pre looping / ","\xf0","\xa3","\x68","\x11"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	int tmp4 = ::snow::modules::openal::AL_obj::getError();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(180)
	::String tmp5 = ::snow::modules::openal::AL_obj::getErrorMeaning(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(180)
	::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	::String tmp7 = (tmp6 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(180)
	::String tmp8 = (HX_HCSTRING("  i / alsound / ","\x15","\xce","\x20","\x38") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(180)
	Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("ALSound.hx","\x5a","\xb9","\xce","\x65"),180,HX_HCSTRING("snow.modules.openal.sound.ALSound","\x9e","\x36","\xcf","\x83"),HX_HCSTRING("set_looping","\x21","\xe4","\xe4","\xb0"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(180)
	::haxe::Log_obj::trace(tmp8,tmp9);
	HX_STACK_LINE(182)
	int tmp10 = this->source;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(182)
	int tmp11 = ::snow::modules::openal::AL_obj::LOOPING;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(182)
	bool tmp12 = _looping;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(182)
	int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(182)
	if ((tmp12)){
		HX_STACK_LINE(182)
		tmp13 = ::snow::modules::openal::AL_obj::TRUE;
	}
	else{
		HX_STACK_LINE(182)
		tmp13 = ::snow::modules::openal::AL_obj::FALSE;
	}
	HX_STACK_LINE(182)
	::snow::modules::openal::AL_obj::sourcei(tmp10,tmp11,tmp13);
	HX_STACK_LINE(184)
	::snow::modules::openal::sound::Sound tmp14 = this->owner;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(184)
	::String tmp15 = tmp14->name;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(184)
	::String tmp16 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(184)
	::String tmp17 = (tmp16 + HX_HCSTRING(" set looping on sound source / ","\x64","\xb1","\x20","\xb3"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(184)
	int tmp18 = ::snow::modules::openal::AL_obj::getError();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(184)
	::String tmp19 = ::snow::modules::openal::AL_obj::getErrorMeaning(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(184)
	::String tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(184)
	::String tmp21 = (tmp20 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(184)
	::String tmp22 = (HX_HCSTRING("  i / alsound / ","\x15","\xce","\x20","\x38") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(184)
	Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("ALSound.hx","\x5a","\xb9","\xce","\x65"),184,HX_HCSTRING("snow.modules.openal.sound.ALSound","\x9e","\x36","\xcf","\x83"),HX_HCSTRING("set_looping","\x21","\xe4","\xe4","\xb0"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(184)
	::haxe::Log_obj::trace(tmp22,tmp23);
	HX_STACK_LINE(186)
	bool tmp24 = _looping;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(186)
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,set_looping,return )

int ALSound_obj::set_position_bytes( int _position_bytes){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","set_position_bytes",0x20e83022,"snow.modules.openal.sound.ALSound.set_position_bytes","snow/modules/openal/sound/ALSound.hx",190,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position_bytes,"_position_bytes")
	HX_STACK_LINE(192)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	int tmp1 = ::snow::modules::openal::AL_obj::SAMPLE_OFFSET;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	int tmp2 = _position_bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	::snow::modules::openal::AL_obj::sourcef(tmp,tmp1,tmp2);
	HX_STACK_LINE(194)
	int tmp3 = _position_bytes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,set_position_bytes,return )

Float ALSound_obj::set_position( Float _position){
	HX_STACK_FRAME("snow.modules.openal.sound.ALSound","set_position",0xdb0483f6,"snow.modules.openal.sound.ALSound.set_position","snow/modules/openal/sound/ALSound.hx",198,0x61113760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(200)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	int tmp1 = ::snow::modules::openal::AL_obj::SEC_OFFSET;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	Float tmp2 = _position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	::snow::modules::openal::AL_obj::sourcef(tmp,tmp1,tmp2);
	HX_STACK_LINE(202)
	Float tmp3 = _position;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ALSound_obj,set_position,return )

Float ALSound_obj::half_pi;


ALSound_obj::ALSound_obj()
{
}

void ALSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ALSound);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(owner,"owner");
	HX_MARK_END_CLASS();
}

void ALSound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(owner,"owner");
}

Dynamic ALSound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { return owner; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_pitch") ) { return set_pitch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_loaded") ) { return set_loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_info") ) { return update_info_dyn(); }
		if (HX_FIELD_EQ(inName,"set_playing") ) { return set_playing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_looping") ) { return set_looping_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"internal_play") ) { return internal_play_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_loop") ) { return internal_loop_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_stop") ) { return internal_stop_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_pause") ) { return internal_pause_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"internal_update") ) { return internal_update_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_position_bytes") ) { return get_position_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position_bytes") ) { return set_position_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ALSound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"half_pi") ) { outValue = half_pi; return true;  }
	}
	return false;
}

Dynamic ALSound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast< ::snow::modules::openal::sound::Sound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ALSound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"half_pi") ) { half_pi=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void ALSound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("owner","\x33","\x98","\x76","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ALSound_obj,source),HX_HCSTRING("source","\xdb","\xb0","\x31","\x32")},
	{hx::fsInt,(int)offsetof(ALSound_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(ALSound_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsObject /*::snow::modules::openal::sound::Sound*/ ,(int)offsetof(ALSound_obj,owner),HX_HCSTRING("owner","\x33","\x98","\x76","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &ALSound_obj::half_pi,HX_HCSTRING("half_pi","\x45","\x20","\x51","\x20")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("owner","\x33","\x98","\x76","\x38"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("internal_update","\x0b","\x42","\xb6","\x54"),
	HX_HCSTRING("internal_play","\x76","\x85","\x24","\x8f"),
	HX_HCSTRING("internal_loop","\xe6","\xfd","\x81","\x8c"),
	HX_HCSTRING("internal_stop","\x84","\x47","\x26","\x91"),
	HX_HCSTRING("internal_pause","\x34","\x11","\x9a","\xa9"),
	HX_HCSTRING("update_info","\xa4","\x4d","\x37","\x4b"),
	HX_HCSTRING("set_playing","\x91","\x76","\x7f","\x1a"),
	HX_HCSTRING("set_paused","\xeb","\x4e","\x89","\xe3"),
	HX_HCSTRING("set_loaded","\x42","\x56","\x74","\x4c"),
	HX_HCSTRING("get_position_bytes","\xde","\x35","\x77","\x75"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_pan","\x00","\xab","\xcb","\x19"),
	HX_HCSTRING("set_pitch","\x23","\x04","\x9b","\xe9"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	HX_HCSTRING("set_looping","\x21","\xe4","\xe4","\xb0"),
	HX_HCSTRING("set_position_bytes","\x52","\x68","\x26","\x52"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALSound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALSound_obj::half_pi,"half_pi");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALSound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALSound_obj::half_pi,"half_pi");
};

#endif

hx::Class ALSound_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("half_pi","\x45","\x20","\x51","\x20"),
	::String(null()) };

void ALSound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.openal.sound.ALSound","\x9e","\x36","\xcf","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALSound_obj::__GetStatic;
	__mClass->mSetStaticField = &ALSound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ALSound_obj >;
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

void ALSound_obj::__boot()
{
	half_pi= ((Float)1.5707);
}

} // end namespace snow
} // end namespace modules
} // end namespace openal
} // end namespace sound
