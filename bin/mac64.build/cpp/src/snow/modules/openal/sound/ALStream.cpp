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
#ifndef INCLUDED_snow_modules_openal_AL
#include <snow/modules/openal/AL.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALHelper
#include <snow/modules/openal/ALHelper.h>
#endif
#ifndef INCLUDED_snow_modules_openal_sound_ALSound
#include <snow/modules/openal/sound/ALSound.h>
#endif
#ifndef INCLUDED_snow_modules_openal_sound_ALStream
#include <snow/modules/openal/sound/ALStream.h>
#endif
#ifndef INCLUDED_snow_modules_openal_sound_Sound
#include <snow/modules/openal/sound/Sound.h>
#endif
#ifndef INCLUDED_snow_system_audio_Audio
#include <snow/system/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_system_audio_Sound
#include <snow/system/audio/Sound.h>
#endif
namespace snow{
namespace modules{
namespace openal{
namespace sound{

Void ALStream_obj::__construct(::snow::modules::openal::sound::Sound _owner)
{
HX_STACK_FRAME("snow.modules.openal.sound.ALStream","new",0x6ae55d43,"snow.modules.openal.sound.ALStream.new","snow/modules/openal/sound/ALStream.hx",14,0x0549770d)
HX_STACK_THIS(this)
HX_STACK_ARG(_owner,"_owner")
{
	HX_STACK_LINE(255)
	this->current_time = ((Float)0);
	HX_STACK_LINE(19)
	this->buffers_left = (int)0;
	HX_STACK_LINE(14)
	::snow::modules::openal::sound::Sound tmp = _owner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	super::__construct(tmp);
}
;
	return null();
}

//ALStream_obj::~ALStream_obj() { }

Dynamic ALStream_obj::__CreateEmpty() { return  new ALStream_obj; }
hx::ObjectPtr< ALStream_obj > ALStream_obj::__new(::snow::modules::openal::sound::Sound _owner)
{  hx::ObjectPtr< ALStream_obj > _result_ = new ALStream_obj();
	_result_->__construct(_owner);
	return _result_;}

Dynamic ALStream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALStream_obj > _result_ = new ALStream_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ALStream_obj::update_info( Dynamic info){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALStream","update_info",0x4044f587,"snow.modules.openal.sound.ALStream.update_info","snow/modules/openal/sound/ALStream.hx",23,0x0549770d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(36)
		int tmp = ::snow::modules::openal::AL_obj::genSource();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		this->source = tmp;
		HX_STACK_LINE(39)
		int tmp1 = this->source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		::snow::modules::openal::ALHelper_obj::default_source_setup(tmp1);
		HX_STACK_LINE(44)
		::snow::modules::openal::sound::Sound tmp2 = this->owner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		int tmp3 = tmp2->stream_buffer_count;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		this->buffers = ::snow::modules::openal::AL_obj::genBuffers(tmp3);
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			Array< int > _g1 = this->buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(48)
				if ((tmp5)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				int b = tmp6;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(48)
				++(_g);
				HX_STACK_LINE(138)
				Dynamic();
			}
		}
		HX_STACK_LINE(52)
		Dynamic tmp4 = info;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		int tmp5 = ::snow::modules::openal::ALHelper_obj::determine_format(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		this->format = tmp5;
		HX_STACK_LINE(55)
		this->init_queue(null());
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


Dynamic ALStream_obj::fill_buffer( int _buffer){
	HX_STACK_FRAME("snow.modules.openal.sound.ALStream","fill_buffer",0x8a63ce5f,"snow.modules.openal.sound.ALStream.fill_buffer","snow/modules/openal/sound/ALStream.hx",63,0x0549770d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_buffer,"_buffer")
	HX_STACK_LINE(66)
	::snow::modules::openal::sound::Sound tmp = this->owner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	::snow::modules::openal::sound::Sound tmp1 = this->owner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	int tmp2 = tmp1->stream_buffer_length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	Dynamic tmp3 = tmp->stream_data_get((int)-1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	Dynamic _blob = tmp3;		HX_STACK_VAR(_blob,"_blob");
	HX_STACK_LINE(68)
	bool tmp4 = (_blob != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(68)
	if ((tmp5)){
		HX_STACK_LINE(68)
		tmp6 = (_blob->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ) != null());
	}
	else{
		HX_STACK_LINE(68)
		tmp6 = false;
	}
	HX_STACK_LINE(68)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	if ((tmp6)){
		HX_STACK_LINE(68)
		int tmp8 = ((::snow::api::buffers::ArrayBufferView)(_blob->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )))->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		tmp7 = (tmp9 != (int)0);
	}
	else{
		HX_STACK_LINE(68)
		tmp7 = false;
	}
	HX_STACK_LINE(68)
	if ((tmp7)){
		HX_STACK_LINE(69)
		int tmp8 = _buffer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		int tmp9 = this->format;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::haxe::io::Bytes tmp11 = _blob->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(69)
			::haxe::io::Bytes buffer = tmp11;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(69)
			::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(69)
			bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(69)
			if ((tmp12)){
				HX_STACK_LINE(69)
				::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(69)
				this1 = tmp13;
			}
			else{
				HX_STACK_LINE(69)
				bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(69)
				if ((tmp13)){
					HX_STACK_LINE(69)
					::snow::api::buffers::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::snow::api::buffers::ArrayBufferView tmp15 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(69)
						::snow::api::buffers::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(69)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(69)
						int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(69)
						_this->length = tmp16;
						HX_STACK_LINE(69)
						int tmp17 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(69)
						_this->byteLength = tmp17;
						HX_STACK_LINE(69)
						::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(69)
							int tmp19 = _this->byteLength;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(69)
							::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(69)
							this2 = tmp20;
							HX_STACK_LINE(69)
							tmp18 = this2;
						}
						HX_STACK_LINE(69)
						_this->buffer = tmp18;
						HX_STACK_LINE(69)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(69)
						tmp14 = _this;
					}
					HX_STACK_LINE(69)
					this1 = tmp14;
				}
				else{
					HX_STACK_LINE(69)
					bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(69)
					if ((tmp14)){
						HX_STACK_LINE(69)
						::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(69)
							::snow::api::buffers::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(69)
							::haxe::io::Bytes tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(69)
							::haxe::io::Bytes srcData = tmp17;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(69)
							int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(69)
							int srcLength = tmp18;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(69)
							int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(69)
							int srcByteOffset = tmp19;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(69)
							int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(69)
							int srcElementSize = tmp20;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(69)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(69)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(69)
							int tmp22 = _this->type;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(69)
							bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(69)
							if ((tmp23)){
								HX_STACK_LINE(69)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(69)
								int tmp24 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(69)
								int cloneLength = tmp24;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(69)
								::haxe::io::Bytes tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(69)
								{
									HX_STACK_LINE(69)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(69)
									int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(69)
									::haxe::io::Bytes tmp27 = ::haxe::io::Bytes_obj::alloc(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(69)
									this2 = tmp27;
									HX_STACK_LINE(69)
									tmp25 = this2;
								}
								HX_STACK_LINE(69)
								_this->buffer = tmp25;
								HX_STACK_LINE(69)
								::haxe::io::Bytes tmp26 = srcData;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(69)
								int tmp27 = srcByteOffset;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(69)
								int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(69)
								_this->buffer->blit((int)0,tmp26,tmp27,tmp28);
							}
							else{
								HX_STACK_LINE(69)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(69)
							int tmp24 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(69)
							_this->byteLength = tmp24;
							HX_STACK_LINE(69)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(69)
							_this->length = srcLength;
							HX_STACK_LINE(69)
							tmp15 = _this;
						}
						HX_STACK_LINE(69)
						this1 = tmp15;
					}
					else{
						HX_STACK_LINE(69)
						bool tmp15 = (buffer != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(69)
						if ((tmp15)){
							HX_STACK_LINE(69)
							::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(69)
							{
								HX_STACK_LINE(69)
								::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(69)
								::snow::api::buffers::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(69)
								bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(69)
								if ((tmp18)){
									HX_STACK_LINE(69)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(69)
								int tmp19 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(69)
								bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(69)
								if ((tmp20)){
									HX_STACK_LINE(69)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(69)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(69)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(69)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(69)
								bool tmp21 = true;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(69)
								if ((tmp21)){
									HX_STACK_LINE(69)
									int tmp22 = bufferByteLength;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(69)
									newByteLength = tmp22;
									HX_STACK_LINE(69)
									int tmp23 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(69)
									bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(69)
									if ((tmp24)){
										HX_STACK_LINE(69)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(69)
									bool tmp25 = (newByteLength < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(69)
									if ((tmp25)){
										HX_STACK_LINE(69)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(69)
									int tmp22 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(69)
									newByteLength = tmp22;
									HX_STACK_LINE(69)
									int tmp23 = newByteLength;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(69)
									int newRange = tmp23;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(69)
									bool tmp24 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(69)
									if ((tmp24)){
										HX_STACK_LINE(69)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(69)
								_this->buffer = buffer;
								HX_STACK_LINE(69)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(69)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(69)
								Float tmp22 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(69)
								int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(69)
								_this->length = tmp23;
								HX_STACK_LINE(69)
								tmp16 = _this;
							}
							HX_STACK_LINE(69)
							this1 = tmp16;
						}
						else{
							HX_STACK_LINE(69)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(69)
			tmp10 = this1;
		}
		HX_STACK_LINE(69)
		::snow::modules::openal::sound::Sound tmp11 = this->owner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		Dynamic tmp12 = tmp11->get_info();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		int tmp13 = tmp12->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		::snow::modules::openal::AL_obj::bufferData(tmp8,tmp9,tmp10,tmp13);
		HX_STACK_LINE(69)
		::snow::modules::openal::AL_obj::getError();
	}
	HX_STACK_LINE(72)
	Dynamic tmp8 = _blob;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(72)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(ALStream_obj,fill_buffer,return )

Void ALStream_obj::init_queue( Dynamic __o__buffer_start){
Dynamic _buffer_start = __o__buffer_start.Default(-1);
	HX_STACK_FRAME("snow.modules.openal.sound.ALStream","init_queue",0xf135e15f,"snow.modules.openal.sound.ALStream.init_queue","snow/modules/openal/sound/ALStream.hx",79,0x0549770d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_buffer_start,"_buffer_start")
{
		HX_STACK_LINE(81)
		bool tmp = (_buffer_start != (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		if ((tmp)){
			HX_STACK_LINE(82)
			::snow::modules::openal::sound::Sound tmp1 = this->owner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(82)
			Dynamic tmp2 = _buffer_start;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			tmp1->stream_data_seek(tmp2);
		}
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(85)
			::snow::modules::openal::sound::Sound tmp1 = this->owner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			int _g = tmp1->stream_buffer_count;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(85)
			while((true)){
				HX_STACK_LINE(85)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(85)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(85)
				if ((tmp3)){
					HX_STACK_LINE(85)
					break;
				}
				HX_STACK_LINE(85)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(85)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(86)
				int tmp5 = this->buffers->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				this->fill_buffer(tmp5);
				HX_STACK_LINE(88)
				int tmp6 = this->source;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				int tmp7 = this->buffers->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(88)
				::snow::modules::openal::AL_obj::sourceQueueBuffer(tmp6,tmp7);
			}
		}
		HX_STACK_LINE(91)
		::snow::modules::openal::sound::Sound tmp1 = this->owner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		this->buffers_left = tmp1->stream_buffer_count;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALStream_obj,init_queue,(void))

Void ALStream_obj::flush_queue( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALStream","flush_queue",0xc59f4a79,"snow.modules.openal.sound.ALStream.flush_queue","snow/modules/openal/sound/ALStream.hx",99,0x0549770d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		int tmp1 = ::snow::modules::openal::AL_obj::BUFFERS_QUEUED;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		int tmp2 = ::snow::modules::openal::AL_obj::getSourcei(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		int queued = tmp2;		HX_STACK_VAR(queued,"queued");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp3 = (_g < queued);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(105)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				if ((tmp4)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(106)
				int tmp6 = this->source;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(106)
				::snow::modules::openal::AL_obj::sourceUnqueueBuffer(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ALStream_obj,flush_queue,(void))

bool ALStream_obj::update_stream( ){
	HX_STACK_FRAME("snow.modules.openal.sound.ALStream","update_stream",0x0f7309d9,"snow.modules.openal.sound.ALStream.update_stream","snow/modules/openal/sound/ALStream.hx",112,0x0549770d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	bool still_busy = true;		HX_STACK_VAR(still_busy,"still_busy");
	HX_STACK_LINE(118)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	int tmp1 = ::snow::modules::openal::AL_obj::BUFFERS_PROCESSED;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	int tmp2 = ::snow::modules::openal::AL_obj::getSourcei(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	int processed_buffers = tmp2;		HX_STACK_VAR(processed_buffers,"processed_buffers");
	HX_STACK_LINE(121)
	int tmp3 = processed_buffers;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	::snow::modules::openal::sound::Sound tmp4 = this->owner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(121)
	int tmp5 = tmp4->stream_buffer_count;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(121)
	bool tmp6 = (tmp3 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(121)
	if ((tmp6)){
		HX_STACK_LINE(122)
		::snow::modules::openal::sound::Sound tmp7 = this->owner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		processed_buffers = tmp7->stream_buffer_count;
	}
	HX_STACK_LINE(127)
	while((true)){
		HX_STACK_LINE(127)
		bool tmp7 = (processed_buffers > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(127)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		if ((tmp8)){
			HX_STACK_LINE(127)
			break;
		}
		HX_STACK_LINE(129)
		int tmp9 = ::snow::modules::openal::AL_obj::getError();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(129)
		int err = tmp9;		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(130)
		int tmp10 = err;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(130)
		int tmp11 = ::snow::modules::openal::AL_obj::NO_ERROR;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(130)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(130)
		if ((tmp12)){
			HX_STACK_LINE(131)
			int tmp13 = err;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(131)
			::String tmp14 = ::snow::modules::openal::AL_obj::getErrorMeaning(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(131)
			::String tmp15 = (HX_HCSTRING("failed failed with ","\xfa","\xe4","\x83","\x8c") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(131)
			HX_STACK_DO_THROW(tmp15);
		}
		HX_STACK_LINE(134)
		int tmp13 = this->source;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(134)
		int tmp14 = ::snow::modules::openal::AL_obj::sourceUnqueueBuffer(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(134)
		int _buffer = tmp14;		HX_STACK_VAR(_buffer,"_buffer");
		HX_STACK_LINE(136)
		int tmp15 = ::snow::modules::openal::AL_obj::getError();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(136)
		int err1 = tmp15;		HX_STACK_VAR(err1,"err1");
		HX_STACK_LINE(137)
		int tmp16 = err1;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(137)
		int tmp17 = ::snow::modules::openal::AL_obj::NO_ERROR;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(137)
		bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(137)
		if ((tmp18)){
			HX_STACK_LINE(138)
			int tmp19 = err1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(138)
			::String tmp20 = ::snow::modules::openal::AL_obj::getErrorMeaning(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(138)
			::String tmp21 = (HX_HCSTRING("sourceUnqueueBuffer failed with ","\xda","\x6c","\x69","\x6a") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(138)
			HX_STACK_DO_THROW(tmp21);
		}
		HX_STACK_LINE(141)
		int tmp19 = _buffer;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(141)
		int tmp20 = ::snow::modules::openal::AL_obj::SIZE;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(141)
		int tmp21 = ::snow::modules::openal::AL_obj::getBufferi(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(141)
		int _buffer_size = tmp21;		HX_STACK_VAR(_buffer_size,"_buffer_size");
		HX_STACK_LINE(143)
		::snow::modules::openal::sound::Sound tmp22 = this->owner;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(143)
		::snow::modules::openal::sound::Sound tmp23 = this->owner;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(143)
		Dynamic tmp24 = tmp23->get_info();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(143)
		int tmp25 = _buffer_size;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(143)
		Float tmp26 = tmp22->_system->__Field(HX_HCSTRING("bytes_to_seconds","\x0f","\x7f","\x12","\xef"), hx::paccDynamic )(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(143)
		hx::AddEq(this->current_time,tmp26);
		HX_STACK_LINE(150)
		int tmp27 = _buffer;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(150)
		Dynamic tmp28 = this->fill_buffer(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(150)
		Dynamic blob = tmp28;		HX_STACK_VAR(blob,"blob");
		HX_STACK_LINE(152)
		::snow::modules::openal::sound::Sound tmp29 = this->owner;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(152)
		bool tmp30 = tmp29->get_looping();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(152)
		bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(152)
		bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(152)
		bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(152)
		if ((tmp32)){
			HX_STACK_LINE(152)
			tmp33 = blob->__Field(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(152)
			tmp33 = false;
		}
		HX_STACK_LINE(152)
		bool skip_queue = tmp33;		HX_STACK_VAR(skip_queue,"skip_queue");
		HX_STACK_LINE(155)
		::snow::modules::openal::sound::Sound tmp34 = this->owner;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(155)
		Float tmp35 = tmp34->get_position();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(155)
		::snow::modules::openal::sound::Sound tmp36 = this->owner;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(155)
		Float tmp37 = tmp36->get_duration();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(155)
		bool tmp38 = (tmp35 >= tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(155)
		bool at_end = tmp38;		HX_STACK_VAR(at_end,"at_end");
		HX_STACK_LINE(156)
		bool tmp39 = at_end;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(156)
		bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(156)
		if ((tmp39)){
			HX_STACK_LINE(156)
			::snow::modules::openal::sound::Sound tmp41 = this->owner;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(156)
			::snow::modules::openal::sound::Sound tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(156)
			tmp40 = tmp42->get_looping();
		}
		else{
			HX_STACK_LINE(156)
			tmp40 = false;
		}
		HX_STACK_LINE(156)
		if ((tmp40)){
			HX_STACK_LINE(157)
			this->current_time = (int)0;
			HX_STACK_LINE(158)
			::snow::modules::openal::sound::Sound tmp41 = this->owner;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(158)
			tmp41->emit(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
		}
		HX_STACK_LINE(161)
		bool tmp41 = blob->__Field(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(161)
		if ((tmp41)){
			HX_STACK_LINE(163)
			::snow::modules::openal::sound::Sound tmp42 = this->owner;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(163)
			bool tmp43 = tmp42->get_looping();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(163)
			if ((tmp43)){
				HX_STACK_LINE(165)
				::snow::modules::openal::sound::Sound tmp44 = this->owner;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(165)
				tmp44->stream_data_seek((int)0);
			}
			else{
				HX_STACK_LINE(168)
				(this->buffers_left)--;
				HX_STACK_LINE(170)
				int tmp44 = this->buffers_left;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(170)
				bool tmp45 = (tmp44 < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(170)
				if ((tmp45)){
					HX_STACK_LINE(171)
					still_busy = false;
				}
				else{
					HX_STACK_LINE(173)
					skip_queue = false;
				}
			}
		}
		HX_STACK_LINE(179)
		bool tmp42 = skip_queue;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(179)
		bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(179)
		bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(179)
		bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(179)
		if ((tmp44)){
			HX_STACK_LINE(179)
			int tmp46 = ((::snow::api::buffers::ArrayBufferView)(blob->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )))->length;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(179)
			int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(179)
			tmp45 = (tmp47 != (int)0);
		}
		else{
			HX_STACK_LINE(179)
			tmp45 = false;
		}
		HX_STACK_LINE(179)
		if ((tmp45)){
			HX_STACK_LINE(180)
			int tmp46 = this->source;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(180)
			int tmp47 = _buffer;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(180)
			::snow::modules::openal::AL_obj::sourceQueueBuffer(tmp46,tmp47);
			HX_STACK_LINE(171)
			Dynamic();
		}
		HX_STACK_LINE(184)
		(processed_buffers)--;
	}
	HX_STACK_LINE(188)
	int tmp7 = this->source;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(188)
	int tmp8 = ::snow::modules::openal::AL_obj::SOURCE_STATE;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(188)
	int tmp9 = ::snow::modules::openal::AL_obj::getSourcei(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(188)
	int _al_play_state = tmp9;		HX_STACK_VAR(_al_play_state,"_al_play_state");
	HX_STACK_LINE(189)
	int tmp10 = _al_play_state;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(189)
	int tmp11 = ::snow::modules::openal::AL_obj::PLAYING;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(189)
	bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(189)
	if ((tmp12)){
		HX_STACK_LINE(191)
		still_busy = false;
	}
	HX_STACK_LINE(194)
	bool tmp13 = still_busy;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(194)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC0(ALStream_obj,update_stream,return )

Void ALStream_obj::internal_update( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALStream","internal_update",0xf319176e,"snow.modules.openal.sound.ALStream.internal_update","snow/modules/openal/sound/ALStream.hx",198,0x0549770d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		::snow::modules::openal::sound::Sound tmp = this->owner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		bool tmp1 = tmp->get_playing();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		if ((tmp2)){
			HX_STACK_LINE(201)
			return null();
		}
		HX_STACK_LINE(204)
		bool tmp3 = this->update_stream();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		if ((tmp4)){
			HX_STACK_LINE(206)
			::snow::modules::openal::sound::Sound tmp5 = this->owner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			::snow::modules::openal::sound::Sound _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(206)
			_this->instance->stop();
			HX_STACK_LINE(206)
			_this->onended();
		}
	}
return null();
}


Void ALStream_obj::internal_pause( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALStream","internal_pause",0x935a3931,"snow.modules.openal.sound.ALStream.internal_pause","snow/modules/openal/sound/ALStream.hx",211,0x0549770d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(213)
		int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		::snow::modules::openal::AL_obj::sourcePause(tmp);
		HX_STACK_LINE(215)
		this->flush_queue();
	}
return null();
}


Void ALStream_obj::internal_play( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALStream","internal_play",0x20d62c19,"snow.modules.openal.sound.ALStream.internal_play","snow/modules/openal/sound/ALStream.hx",219,0x0549770d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		::snow::modules::openal::sound::Sound tmp = this->owner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		bool tmp1 = tmp->get_playing();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		if ((tmp1)){
			HX_STACK_LINE(222)
			int tmp2 = this->source;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			::snow::modules::openal::AL_obj::sourcePlay(tmp2);
		}
	}
return null();
}


Void ALStream_obj::pause( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALStream","pause",0x1910a299,"snow.modules.openal.sound.ALStream.pause","snow/modules/openal/sound/ALStream.hx",227,0x0549770d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->super::pause();
		HX_STACK_LINE(230)
		this->flush_queue();
	}
return null();
}


Void ALStream_obj::stop( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALStream","stop",0x2125a9bf,"snow.modules.openal.sound.ALStream.stop","snow/modules/openal/sound/ALStream.hx",234,0x0549770d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		this->super::stop();
		HX_STACK_LINE(238)
		this->flush_queue();
		HX_STACK_LINE(239)
		::snow::modules::openal::sound::Sound tmp = this->owner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		tmp->set_position((int)0);
	}
return null();
}


Void ALStream_obj::destroy( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.ALStream","destroy",0x78c3675d,"snow.modules.openal.sound.ALStream.destroy","snow/modules/openal/sound/ALStream.hx",243,0x0549770d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		this->super::destroy();
		HX_STACK_LINE(247)
		::snow::modules::openal::AL_obj::deleteBuffers(this->buffers);
	}
return null();
}


int ALStream_obj::get_position_bytes( ){
	HX_STACK_FRAME("snow.modules.openal.sound.ALStream","get_position_bytes",0x8c37a05b,"snow.modules.openal.sound.ALStream.get_position_bytes","snow/modules/openal/sound/ALStream.hx",257,0x0549770d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	::snow::modules::openal::sound::Sound tmp = this->owner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	::snow::modules::openal::sound::Sound tmp1 = this->owner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	Dynamic tmp2 = tmp1->get_info();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	::snow::modules::openal::sound::Sound tmp3 = this->owner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	Float tmp4 = tmp3->get_position();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(259)
	int tmp5 = tmp->_system->__Field(HX_HCSTRING("seconds_to_bytes","\x67","\x7c","\xbc","\xb5"), hx::paccDynamic )(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(259)
	return tmp5;
}


Float ALStream_obj::get_position( ){
	HX_STACK_FRAME("snow.modules.openal.sound.ALStream","get_position",0xf6f9936f,"snow.modules.openal.sound.ALStream.get_position","snow/modules/openal/sound/ALStream.hx",263,0x0549770d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = ::snow::modules::openal::AL_obj::SEC_OFFSET;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	Float tmp2 = ::snow::modules::openal::AL_obj::getSourcef(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	Float _pos_sec = tmp2;		HX_STACK_VAR(_pos_sec,"_pos_sec");
	HX_STACK_LINE(268)
	Float tmp3 = this->current_time;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(268)
	Float tmp4 = _pos_sec;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(268)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(268)
	return tmp5;
}


int ALStream_obj::set_position_bytes( int _position_bytes){
	HX_STACK_FRAME("snow.modules.openal.sound.ALStream","set_position_bytes",0x68e6d2cf,"snow.modules.openal.sound.ALStream.set_position_bytes","snow/modules/openal/sound/ALStream.hx",272,0x0549770d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position_bytes,"_position_bytes")
	HX_STACK_LINE(274)
	::snow::modules::openal::sound::Sound tmp = this->owner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	::snow::modules::openal::sound::Sound tmp1 = this->owner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	::snow::modules::openal::sound::Sound tmp2 = this->owner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(274)
	Dynamic tmp3 = tmp2->get_info();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(274)
	int tmp4 = _position_bytes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(274)
	Float tmp5 = tmp1->_system->__Field(HX_HCSTRING("bytes_to_seconds","\x0f","\x7f","\x12","\xef"), hx::paccDynamic )(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(274)
	tmp->set_position(tmp5);
	HX_STACK_LINE(276)
	int tmp6 = _position_bytes;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(276)
	return tmp6;
}


Float ALStream_obj::set_position( Float _position){
	HX_STACK_FRAME("snow.modules.openal.sound.ALStream","set_position",0x0bf2b6e3,"snow.modules.openal.sound.ALStream.set_position","snow/modules/openal/sound/ALStream.hx",280,0x0549770d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(283)
	int tmp = this->source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	::snow::modules::openal::AL_obj::sourceStop(tmp);
	HX_STACK_LINE(285)
	this->flush_queue();
	HX_STACK_LINE(288)
	bool tmp1 = (_position < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	if ((tmp1)){
		HX_STACK_LINE(288)
		_position = (int)0;
	}
	HX_STACK_LINE(289)
	Float tmp2 = _position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(289)
	::snow::modules::openal::sound::Sound tmp3 = this->owner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	Float tmp4 = tmp3->get_duration();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(289)
	bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(289)
	if ((tmp5)){
		HX_STACK_LINE(289)
		::snow::modules::openal::sound::Sound tmp6 = this->owner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(289)
		Float tmp7 = tmp6->get_duration();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(289)
		_position = tmp7;
	}
	HX_STACK_LINE(291)
	this->current_time = _position;
	HX_STACK_LINE(294)
	::snow::modules::openal::sound::Sound tmp6 = this->owner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(294)
	::snow::modules::openal::sound::Sound tmp7 = this->owner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(294)
	Dynamic tmp8 = tmp7->get_info();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(294)
	Float tmp9 = _position;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(294)
	int tmp10 = tmp6->_system->__Field(HX_HCSTRING("seconds_to_bytes","\x67","\x7c","\xbc","\xb5"), hx::paccDynamic )(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(294)
	this->init_queue(tmp10);
	HX_STACK_LINE(297)
	::snow::modules::openal::sound::Sound tmp11 = this->owner;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(297)
	bool tmp12 = tmp11->get_playing();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(297)
	if ((tmp12)){
		HX_STACK_LINE(298)
		int tmp13 = this->source;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(298)
		::snow::modules::openal::AL_obj::sourcePlay(tmp13);
	}
	HX_STACK_LINE(301)
	Float tmp13 = _position;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(301)
	return tmp13;
}


bool ALStream_obj::set_looping( bool _looping){
	HX_STACK_FRAME("snow.modules.openal.sound.ALStream","set_looping",0xa5f28c04,"snow.modules.openal.sound.ALStream.set_looping","snow/modules/openal/sound/ALStream.hx",307,0x0549770d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_looping,"_looping")
	HX_STACK_LINE(308)
	bool tmp = _looping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(308)
	return tmp;
}


Float ALStream_obj::half_pi;


ALStream_obj::ALStream_obj()
{
}

void ALStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ALStream);
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(buffers_left,"buffers_left");
	HX_MARK_MEMBER_NAME(current_time,"current_time");
	::snow::modules::openal::sound::ALSound_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ALStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(buffers_left,"buffers_left");
	HX_VISIT_MEMBER_NAME(current_time,"current_time");
	::snow::modules::openal::sound::ALSound_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ALStream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return buffers; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"init_queue") ) { return init_queue_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_info") ) { return update_info_dyn(); }
		if (HX_FIELD_EQ(inName,"fill_buffer") ) { return fill_buffer_dyn(); }
		if (HX_FIELD_EQ(inName,"flush_queue") ) { return flush_queue_dyn(); }
		if (HX_FIELD_EQ(inName,"set_looping") ) { return set_looping_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffers_left") ) { return buffers_left; }
		if (HX_FIELD_EQ(inName,"current_time") ) { return current_time; }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"update_stream") ) { return update_stream_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_play") ) { return internal_play_dyn(); }
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

bool ALStream_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"half_pi") ) { outValue = half_pi; return true;  }
	}
	return false;
}

Dynamic ALStream_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffers_left") ) { buffers_left=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current_time") ) { current_time=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ALStream_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"half_pi") ) { half_pi=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void ALStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"));
	outFields->push(HX_HCSTRING("buffers_left","\x93","\x1f","\x0c","\xc6"));
	outFields->push(HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ALStream_obj,buffers),HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1")},
	{hx::fsInt,(int)offsetof(ALStream_obj,buffers_left),HX_HCSTRING("buffers_left","\x93","\x1f","\x0c","\xc6")},
	{hx::fsFloat,(int)offsetof(ALStream_obj,current_time),HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &ALStream_obj::half_pi,HX_HCSTRING("half_pi","\x45","\x20","\x51","\x20")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffers","\x73","\xa3","\x90","\xb1"),
	HX_HCSTRING("buffers_left","\x93","\x1f","\x0c","\xc6"),
	HX_HCSTRING("update_info","\xa4","\x4d","\x37","\x4b"),
	HX_HCSTRING("fill_buffer","\x7c","\x26","\x56","\x95"),
	HX_HCSTRING("init_queue","\xe2","\xbb","\x82","\x29"),
	HX_HCSTRING("flush_queue","\x96","\xa2","\x91","\xd0"),
	HX_HCSTRING("update_stream","\x36","\x63","\xc1","\x7d"),
	HX_HCSTRING("internal_update","\x0b","\x42","\xb6","\x54"),
	HX_HCSTRING("internal_pause","\x34","\x11","\x9a","\xa9"),
	HX_HCSTRING("internal_play","\x76","\x85","\x24","\x8f"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("current_time","\x13","\x5d","\xec","\xb3"),
	HX_HCSTRING("get_position_bytes","\xde","\x35","\x77","\x75"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position_bytes","\x52","\x68","\x26","\x52"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("set_looping","\x21","\xe4","\xe4","\xb0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALStream_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALStream_obj::half_pi,"half_pi");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALStream_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALStream_obj::half_pi,"half_pi");
};

#endif

hx::Class ALStream_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("half_pi","\x45","\x20","\x51","\x20"),
	::String(null()) };

void ALStream_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.openal.sound.ALStream","\xd1","\xff","\x7e","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALStream_obj::__GetStatic;
	__mClass->mSetStaticField = &ALStream_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ALStream_obj >;
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

void ALStream_obj::__boot()
{
	half_pi= ((Float)1.5707);
}

} // end namespace snow
} // end namespace modules
} // end namespace openal
} // end namespace sound
