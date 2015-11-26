#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
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
#ifndef INCLUDED_snow_system_audio_Audio
#include <snow/system/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_system_audio_Sound
#include <snow/system/audio/Sound.h>
#endif
namespace snow{
namespace _system{
namespace audio{

Void Sound_obj::__construct(::snow::_system::audio::Audio _system,::String _name,hx::Null< bool >  __o__is_stream)
{
HX_STACK_FRAME("snow.system.audio.Sound","new",0x0a6b7495,"snow.system.audio.Sound.new","snow/system/audio/Sound.hx",9,0x7aea479c)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(__o__is_stream,"_is_stream")
bool _is_stream = __o__is_stream.Default(false);
{
	HX_STACK_LINE(44)
	this->is_stream = false;
	HX_STACK_LINE(39)
	this->position_bytes = (int)0;
	HX_STACK_LINE(37)
	this->length_bytes = (int)0;
	HX_STACK_LINE(35)
	this->duration = ((Float)0.0);
	HX_STACK_LINE(33)
	this->position = ((Float)0.0);
	HX_STACK_LINE(31)
	this->looping = false;
	HX_STACK_LINE(29)
	this->pan = ((Float)0.0);
	HX_STACK_LINE(27)
	this->volume = ((Float)1.0);
	HX_STACK_LINE(25)
	this->pitch = ((Float)1.0);
	HX_STACK_LINE(21)
	this->loaded = false;
	HX_STACK_LINE(19)
	this->paused = false;
	HX_STACK_LINE(17)
	this->playing = false;
	HX_STACK_LINE(14)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(62)
	this->name = _name;
	HX_STACK_LINE(63)
	this->_system = _system;
	HX_STACK_LINE(64)
	this->is_stream = _is_stream;
	HX_STACK_LINE(67)
	::snow::_system::audio::Audio tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Dynamic tmp1 = tmp->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("native","\x97","\xc9","\x1c","\x22"), hx::paccDynamic )->__Field(HX_HCSTRING("audio_buffer_length","\x1c","\x7d","\xb7","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	this->stream_buffer_length = tmp2;
	HX_STACK_LINE(68)
	::snow::_system::audio::Audio tmp3 = this->_system;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("native","\x97","\xc9","\x1c","\x22"), hx::paccDynamic )->__Field(HX_HCSTRING("audio_buffer_count","\x59","\xd5","\x71","\x1d"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	this->stream_buffer_count = tmp5;
	HX_STACK_LINE(69)
	Dynamic tmp6 = this->default_stream_data_get_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(69)
	this->stream_data_get = tmp6;
	HX_STACK_LINE(70)
	Dynamic tmp7 = this->default_stream_data_seek_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	this->stream_data_seek = tmp7;
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::snow::_system::audio::Audio _system,::String _name,hx::Null< bool >  __o__is_stream)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(_system,_name,__o__is_stream);
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Sound_obj::emit( ::String _event){
{
		HX_STACK_FRAME("snow.system.audio.Sound","emit",0x0dada87e,"snow.system.audio.Sound.emit","snow/system/audio/Sound.hx",77,0x7aea479c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(79)
		::snow::_system::audio::Audio tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		::String tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		tmp->__Field(HX_HCSTRING("sound_event","\x6a","\xa1","\x44","\xf0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,emit,(void))

Void Sound_obj::on( ::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.system.audio.Sound","on",0xceaefa8a,"snow.system.audio.Sound.on","snow/system/audio/Sound.hx",85,0x7aea479c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(87)
		::snow::_system::audio::Audio tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		::String tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		Dynamic tmp3 = _handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		tmp->__Field(HX_HCSTRING("on","\x1f","\x61","\x00","\x00"), hx::paccDynamic )(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,on,(void))

Void Sound_obj::off( ::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.system.audio.Sound","off",0x0a6c37a4,"snow.system.audio.Sound.off","snow/system/audio/Sound.hx",92,0x7aea479c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(94)
		::snow::_system::audio::Audio tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		::String tmp2 = _event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		Dynamic tmp3 = _handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		tmp->__Field(HX_HCSTRING("off","\x6f","\x93","\x54","\x00"), hx::paccDynamic )(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,off,(void))

Void Sound_obj::play( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","play",0x14f2381f,"snow.system.audio.Sound.play","snow/system/audio/Sound.hx",102,0x7aea479c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(102)
		::String tmp = HX_HCSTRING("    i / sound / Sound:play called in root Sound module. Nothing will happen.","\xaf","\x15","\x98","\xa2");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Sound.hx","\x6f","\x1d","\x3b","\xf3"),102,HX_HCSTRING("snow.system.audio.Sound","\x23","\x86","\xee","\x83"),HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,play,(void))

Void Sound_obj::loop( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","loop",0x124fb08f,"snow.system.audio.Sound.loop","snow/system/audio/Sound.hx",104,0x7aea479c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		::String tmp = HX_HCSTRING("    i / sound / Sound:loop called in root Sound module. Nothing will happen.","\x1f","\x2a","\x54","\xe7");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Sound.hx","\x6f","\x1d","\x3b","\xf3"),104,HX_HCSTRING("snow.system.audio.Sound","\x23","\x86","\xee","\x83"),HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,loop,(void))

Void Sound_obj::stop( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","stop",0x16f3fa2d,"snow.system.audio.Sound.stop","snow/system/audio/Sound.hx",106,0x7aea479c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::String tmp = HX_HCSTRING("    i / sound / Sound:stop called in root Sound module. Nothing will happen.","\x3d","\x6b","\xb2","\x63");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Sound.hx","\x6f","\x1d","\x3b","\xf3"),106,HX_HCSTRING("snow.system.audio.Sound","\x23","\x86","\xee","\x83"),HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,stop,(void))

Void Sound_obj::pause( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","pause",0x37c8b26b,"snow.system.audio.Sound.pause","snow/system/audio/Sound.hx",108,0x7aea479c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		::String tmp = HX_HCSTRING("    i / sound / Sound:pause called in root Sound module. Nothing will happen.","\x67","\x09","\x50","\xe0");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Sound.hx","\x6f","\x1d","\x3b","\xf3"),108,HX_HCSTRING("snow.system.audio.Sound","\x23","\x86","\xee","\x83"),HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,pause,(void))

Void Sound_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","destroy",0xc17c8faf,"snow.system.audio.Sound.destroy","snow/system/audio/Sound.hx",110,0x7aea479c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		::String tmp = HX_HCSTRING("    i / sound / Sound:destroy called in root Sound module. Nothing will happen.","\x2b","\x29","\xb5","\xb2");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Sound.hx","\x6f","\x1d","\x3b","\xf3"),110,HX_HCSTRING("snow.system.audio.Sound","\x23","\x86","\xee","\x83"),HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,destroy,(void))

Void Sound_obj::internal_update( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","internal_update",0x668de1c0,"snow.system.audio.Sound.internal_update","snow/system/audio/Sound.hx",114,0x7aea479c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,internal_update,(void))

Void Sound_obj::internal_play( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","internal_play",0xe6bd5deb,"snow.system.audio.Sound.internal_play","snow/system/audio/Sound.hx",115,0x7aea479c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,internal_play,(void))

Void Sound_obj::internal_loop( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","internal_loop",0xe41ad65b,"snow.system.audio.Sound.internal_loop","snow/system/audio/Sound.hx",116,0x7aea479c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,internal_loop,(void))

Void Sound_obj::internal_stop( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","internal_stop",0xe8bf1ff9,"snow.system.audio.Sound.internal_stop","snow/system/audio/Sound.hx",117,0x7aea479c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,internal_stop,(void))

Void Sound_obj::internal_pause( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","internal_pause",0xf7be9f1f,"snow.system.audio.Sound.internal_pause","snow/system/audio/Sound.hx",118,0x7aea479c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,internal_pause,(void))

Void Sound_obj::toggle( ){
{
		HX_STACK_FRAME("snow.system.audio.Sound","toggle",0x3792ea7f,"snow.system.audio.Sound.toggle","snow/system/audio/Sound.hx",123,0x7aea479c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		bool tmp = this->get_playing();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		this->set_playing(tmp1);
		HX_STACK_LINE(127)
		bool tmp2 = this->get_playing();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		if ((tmp2)){
			HX_STACK_LINE(128)
			bool tmp3 = this->get_looping();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			if ((tmp3)){
				HX_STACK_LINE(129)
				this->loop();
			}
			else{
				HX_STACK_LINE(131)
				this->play();
			}
		}
		else{
			HX_STACK_LINE(134)
			this->pause();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,toggle,(void))

bool Sound_obj::default_stream_data_seek( int _to){
	HX_STACK_FRAME("snow.system.audio.Sound","default_stream_data_seek",0x79685157,"snow.system.audio.Sound.default_stream_data_seek","snow/system/audio/Sound.hx",145,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(147)
	::snow::_system::audio::Audio tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	::snow::_system::assets::Assets tmp1 = tmp->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	Dynamic tmp2 = this->get_info();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	int tmp3 = _to;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(147)
	bool tmp4 = tmp1->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("audio_seek_source","\xd9","\x6b","\x8f","\xda"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(147)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,default_stream_data_seek,return )

Dynamic Sound_obj::default_stream_data_get( int _start,int _length){
	HX_STACK_FRAME("snow.system.audio.Sound","default_stream_data_get",0xf8791597,"snow.system.audio.Sound.default_stream_data_get","snow/system/audio/Sound.hx",152,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_start,"_start")
	HX_STACK_ARG(_length,"_length")
	HX_STACK_LINE(154)
	::snow::_system::audio::Audio tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	::snow::_system::assets::Assets tmp1 = tmp->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	Dynamic tmp2 = this->get_info();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	int tmp3 = _start;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	int tmp4 = _length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(154)
	Dynamic tmp5 = tmp1->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("audio_load_portion","\xd7","\x46","\x02","\xa4"), hx::paccDynamic )(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(154)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,default_stream_data_get,return )

bool Sound_obj::get_playing( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_playing",0xdc68d0ba,"snow.system.audio.Sound.get_playing","snow/system/audio/Sound.hx",162,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	bool tmp = this->playing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_playing,return )

bool Sound_obj::get_paused( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_paused",0x7f622ce2,"snow.system.audio.Sound.get_paused","snow/system/audio/Sound.hx",163,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_paused,return )

bool Sound_obj::get_loaded( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_loaded",0xe84d3439,"snow.system.audio.Sound.get_loaded","snow/system/audio/Sound.hx",164,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	bool tmp = this->loaded;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_loaded,return )

Dynamic Sound_obj::get_info( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_info",0x8015efa2,"snow.system.audio.Sound.get_info","snow/system/audio/Sound.hx",165,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	Dynamic tmp = this->info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_info,return )

Dynamic Sound_obj::set_info( Dynamic _info){
	HX_STACK_FRAME("snow.system.audio.Sound","set_info",0x2e734916,"snow.system.audio.Sound.set_info","snow/system/audio/Sound.hx",166,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_LINE(166)
	Dynamic tmp = this->info = _info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_info,return )

Float Sound_obj::get_pan( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_pan",0xc3c07ca9,"snow.system.audio.Sound.get_pan","snow/system/audio/Sound.hx",167,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	Float tmp = this->pan;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_pan,return )

Float Sound_obj::get_pitch( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_pitch",0x97a6520c,"snow.system.audio.Sound.get_pitch","snow/system/audio/Sound.hx",168,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	Float tmp = this->pitch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_pitch,return )

Float Sound_obj::get_volume( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_volume",0xef31160e,"snow.system.audio.Sound.get_volume","snow/system/audio/Sound.hx",169,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	Float tmp = this->volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_volume,return )

bool Sound_obj::get_looping( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_looping",0x72ce3e4a,"snow.system.audio.Sound.get_looping","snow/system/audio/Sound.hx",170,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	bool tmp = this->looping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_looping,return )

Float Sound_obj::get_position( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_position",0x7f5301dd,"snow.system.audio.Sound.get_position","snow/system/audio/Sound.hx",171,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	Float tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_position,return )

int Sound_obj::get_position_bytes( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_position_bytes",0x74909549,"snow.system.audio.Sound.get_position_bytes","snow/system/audio/Sound.hx",172,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	int tmp = this->position_bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_position_bytes,return )

int Sound_obj::get_length_bytes( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_length_bytes",0x2c29a046,"snow.system.audio.Sound.get_length_bytes","snow/system/audio/Sound.hx",173,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	int tmp = this->length_bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length_bytes,return )

Float Sound_obj::get_duration( ){
	HX_STACK_FRAME("snow.system.audio.Sound","get_duration",0xc8e67088,"snow.system.audio.Sound.get_duration","snow/system/audio/Sound.hx",175,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_duration,return )

bool Sound_obj::set_playing( bool _playing){
	HX_STACK_FRAME("snow.system.audio.Sound","set_playing",0xe6d5d7c6,"snow.system.audio.Sound.set_playing","snow/system/audio/Sound.hx",176,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_playing,"_playing")
	HX_STACK_LINE(176)
	bool tmp = this->playing = _playing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_playing,return )

bool Sound_obj::set_paused( bool _paused){
	HX_STACK_FRAME("snow.system.audio.Sound","set_paused",0x82dfcb56,"snow.system.audio.Sound.set_paused","snow/system/audio/Sound.hx",177,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_paused,"_paused")
	HX_STACK_LINE(177)
	bool tmp = this->paused = _paused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_paused,return )

bool Sound_obj::set_loaded( bool _loaded){
	HX_STACK_FRAME("snow.system.audio.Sound","set_loaded",0xebcad2ad,"snow.system.audio.Sound.set_loaded","snow/system/audio/Sound.hx",178,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_loaded,"_loaded")
	HX_STACK_LINE(178)
	bool tmp = this->loaded = _loaded;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_loaded,return )

Float Sound_obj::set_pan( Float _pan){
	HX_STACK_FRAME("snow.system.audio.Sound","set_pan",0xb6c20db5,"snow.system.audio.Sound.set_pan","snow/system/audio/Sound.hx",179,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(179)
	Float tmp = this->pan = _pan;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_pan,return )

Float Sound_obj::set_pitch( Float _pitch){
	HX_STACK_FRAME("snow.system.audio.Sound","set_pitch",0x7af73e18,"snow.system.audio.Sound.set_pitch","snow/system/audio/Sound.hx",180,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(180)
	Float tmp = this->pitch = _pitch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_pitch,return )

Float Sound_obj::set_volume( Float _volume){
	HX_STACK_FRAME("snow.system.audio.Sound","set_volume",0xf2aeb482,"snow.system.audio.Sound.set_volume","snow/system/audio/Sound.hx",181,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(181)
	Float tmp = this->volume = _volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_volume,return )

Float Sound_obj::set_position( Float _position){
	HX_STACK_FRAME("snow.system.audio.Sound","set_position",0x944c2551,"snow.system.audio.Sound.set_position","snow/system/audio/Sound.hx",182,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(182)
	Float tmp = this->position = _position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_position,return )

bool Sound_obj::set_looping( bool _looping){
	HX_STACK_FRAME("snow.system.audio.Sound","set_looping",0x7d3b4556,"snow.system.audio.Sound.set_looping","snow/system/audio/Sound.hx",183,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_looping,"_looping")
	HX_STACK_LINE(183)
	bool tmp = this->looping = _looping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_looping,return )

int Sound_obj::set_position_bytes( int _position_bytes){
	HX_STACK_FRAME("snow.system.audio.Sound","set_position_bytes",0x513fc7bd,"snow.system.audio.Sound.set_position_bytes","snow/system/audio/Sound.hx",184,0x7aea479c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position_bytes,"_position_bytes")
	HX_STACK_LINE(184)
	int tmp = this->position_bytes = _position_bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,set_position_bytes,return )


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(pitch,"pitch");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(pan,"pan");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(length_bytes,"length_bytes");
	HX_MARK_MEMBER_NAME(position_bytes,"position_bytes");
	HX_MARK_MEMBER_NAME(is_stream,"is_stream");
	HX_MARK_MEMBER_NAME(stream_buffer_length,"stream_buffer_length");
	HX_MARK_MEMBER_NAME(stream_buffer_count,"stream_buffer_count");
	HX_MARK_MEMBER_NAME(stream_data_get,"stream_data_get");
	HX_MARK_MEMBER_NAME(stream_data_seek,"stream_data_seek");
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(pitch,"pitch");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(pan,"pan");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(length_bytes,"length_bytes");
	HX_VISIT_MEMBER_NAME(position_bytes,"position_bytes");
	HX_VISIT_MEMBER_NAME(is_stream,"is_stream");
	HX_VISIT_MEMBER_NAME(stream_buffer_length,"stream_buffer_length");
	HX_VISIT_MEMBER_NAME(stream_buffer_count,"stream_buffer_count");
	HX_VISIT_MEMBER_NAME(stream_data_get,"stream_data_get");
	HX_VISIT_MEMBER_NAME(stream_data_seek,"stream_data_seek");
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return inCallProp == hx::paccAlways ? get_pan() : pan; }
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"info") ) { return inCallProp == hx::paccAlways ? get_info() : info; }
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { return inCallProp == hx::paccAlways ? get_pitch() : pitch; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"paused") ) { return inCallProp == hx::paccAlways ? get_paused() : paused; }
		if (HX_FIELD_EQ(inName,"loaded") ) { return inCallProp == hx::paccAlways ? get_loaded() : loaded; }
		if (HX_FIELD_EQ(inName,"volume") ) { return inCallProp == hx::paccAlways ? get_volume() : volume; }
		if (HX_FIELD_EQ(inName,"toggle") ) { return toggle_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return inCallProp == hx::paccAlways ? get_playing() : playing; }
		if (HX_FIELD_EQ(inName,"looping") ) { return inCallProp == hx::paccAlways ? get_looping() : looping; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp == hx::paccAlways ? get_position() : position; }
		if (HX_FIELD_EQ(inName,"duration") ) { return inCallProp == hx::paccAlways ? get_duration() : duration; }
		if (HX_FIELD_EQ(inName,"get_info") ) { return get_info_dyn(); }
		if (HX_FIELD_EQ(inName,"set_info") ) { return set_info_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { return is_stream; }
		if (HX_FIELD_EQ(inName,"get_pitch") ) { return get_pitch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pitch") ) { return set_pitch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"get_loaded") ) { return get_loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_loaded") ) { return set_loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_playing") ) { return get_playing_dyn(); }
		if (HX_FIELD_EQ(inName,"get_looping") ) { return get_looping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_playing") ) { return set_playing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_looping") ) { return set_looping_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"length_bytes") ) { return inCallProp == hx::paccAlways ? get_length_bytes() : length_bytes; }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return get_duration_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"internal_play") ) { return internal_play_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_loop") ) { return internal_loop_dyn(); }
		if (HX_FIELD_EQ(inName,"internal_stop") ) { return internal_stop_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"position_bytes") ) { return inCallProp == hx::paccAlways ? get_position_bytes() : position_bytes; }
		if (HX_FIELD_EQ(inName,"internal_pause") ) { return internal_pause_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stream_data_get") ) { return stream_data_get; }
		if (HX_FIELD_EQ(inName,"internal_update") ) { return internal_update_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stream_data_seek") ) { return stream_data_seek; }
		if (HX_FIELD_EQ(inName,"get_length_bytes") ) { return get_length_bytes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_position_bytes") ) { return get_position_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position_bytes") ) { return set_position_bytes_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stream_buffer_count") ) { return stream_buffer_count; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"stream_buffer_length") ) { return stream_buffer_length; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"default_stream_data_get") ) { return default_stream_data_get_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"default_stream_data_seek") ) { return default_stream_data_seek_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == hx::paccAlways) return set_pan(inValue);pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"info") ) { if (inCallProp == hx::paccAlways) return set_info(inValue);info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { if (inCallProp == hx::paccAlways) return set_pitch(inValue);pitch=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::snow::_system::audio::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == hx::paccAlways) return set_paused(inValue);paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaded") ) { if (inCallProp == hx::paccAlways) return set_loaded(inValue);loaded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { if (inCallProp == hx::paccAlways) return set_playing(inValue);playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looping") ) { if (inCallProp == hx::paccAlways) return set_looping(inValue);looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue);position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { is_stream=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"length_bytes") ) { length_bytes=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"position_bytes") ) { if (inCallProp == hx::paccAlways) return set_position_bytes(inValue);position_bytes=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stream_data_get") ) { stream_data_get=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stream_data_seek") ) { stream_data_seek=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stream_buffer_count") ) { stream_buffer_count=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"stream_buffer_length") ) { stream_buffer_length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));
	outFields->push(HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"));
	outFields->push(HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("length_bytes","\x12","\x95","\xb6","\x9c"));
	outFields->push(HX_HCSTRING("position_bytes","\x15","\x55","\xdd","\xd9"));
	outFields->push(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"));
	outFields->push(HX_HCSTRING("stream_buffer_length","\x46","\x6e","\x35","\xc0"));
	outFields->push(HX_HCSTRING("stream_buffer_count","\x6f","\xb7","\xd9","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::_system::audio::Audio*/ ,(int)offsetof(Sound_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{hx::fsString,(int)offsetof(Sound_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsBool,(int)offsetof(Sound_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsBool,(int)offsetof(Sound_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(Sound_obj,loaded),HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Sound_obj,info),HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{hx::fsFloat,(int)offsetof(Sound_obj,pitch),HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2")},
	{hx::fsFloat,(int)offsetof(Sound_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{hx::fsFloat,(int)offsetof(Sound_obj,pan),HX_HCSTRING("pan","\x5d","\x51","\x55","\x00")},
	{hx::fsBool,(int)offsetof(Sound_obj,looping),HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20")},
	{hx::fsFloat,(int)offsetof(Sound_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsFloat,(int)offsetof(Sound_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsInt,(int)offsetof(Sound_obj,length_bytes),HX_HCSTRING("length_bytes","\x12","\x95","\xb6","\x9c")},
	{hx::fsInt,(int)offsetof(Sound_obj,position_bytes),HX_HCSTRING("position_bytes","\x15","\x55","\xdd","\xd9")},
	{hx::fsBool,(int)offsetof(Sound_obj,is_stream),HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6")},
	{hx::fsInt,(int)offsetof(Sound_obj,stream_buffer_length),HX_HCSTRING("stream_buffer_length","\x46","\x6e","\x35","\xc0")},
	{hx::fsInt,(int)offsetof(Sound_obj,stream_buffer_count),HX_HCSTRING("stream_buffer_count","\x6f","\xb7","\xd9","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Sound_obj,stream_data_get),HX_HCSTRING("stream_data_get","\xa0","\xcb","\x16","\xb3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Sound_obj,stream_data_seek),HX_HCSTRING("stream_data_seek","\x2e","\xe3","\xc9","\x08")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("length_bytes","\x12","\x95","\xb6","\x9c"),
	HX_HCSTRING("position_bytes","\x15","\x55","\xdd","\xd9"),
	HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"),
	HX_HCSTRING("stream_buffer_length","\x46","\x6e","\x35","\xc0"),
	HX_HCSTRING("stream_buffer_count","\x6f","\xb7","\xd9","\xd0"),
	HX_HCSTRING("stream_data_get","\xa0","\xcb","\x16","\xb3"),
	HX_HCSTRING("stream_data_seek","\x2e","\xe3","\xc9","\x08"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("internal_update","\x0b","\x42","\xb6","\x54"),
	HX_HCSTRING("internal_play","\x76","\x85","\x24","\x8f"),
	HX_HCSTRING("internal_loop","\xe6","\xfd","\x81","\x8c"),
	HX_HCSTRING("internal_stop","\x84","\x47","\x26","\x91"),
	HX_HCSTRING("internal_pause","\x34","\x11","\x9a","\xa9"),
	HX_HCSTRING("toggle","\x94","\xbf","\x43","\x8f"),
	HX_HCSTRING("default_stream_data_seek","\xac","\x0f","\x05","\xc9"),
	HX_HCSTRING("default_stream_data_get","\xe2","\x38","\xbb","\xa2"),
	HX_HCSTRING("get_playing","\x85","\x6f","\x12","\x10"),
	HX_HCSTRING("get_paused","\x77","\xb0","\x0b","\xe0"),
	HX_HCSTRING("get_loaded","\xce","\xb7","\xf6","\x48"),
	HX_HCSTRING("get_info","\xf7","\xf3","\x75","\xc5"),
	HX_HCSTRING("set_info","\x6b","\x4d","\xd3","\x73"),
	HX_HCSTRING("get_pan","\xf4","\x19","\xca","\x26"),
	HX_HCSTRING("get_pitch","\x17","\x18","\x4a","\x06"),
	HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"),
	HX_HCSTRING("get_looping","\x15","\xdd","\x77","\xa6"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("get_position_bytes","\xde","\x35","\x77","\x75"),
	HX_HCSTRING("get_length_bytes","\x9b","\x81","\x55","\xa1"),
	HX_HCSTRING("get_duration","\x5d","\xc3","\xa7","\xc9"),
	HX_HCSTRING("set_playing","\x91","\x76","\x7f","\x1a"),
	HX_HCSTRING("set_paused","\xeb","\x4e","\x89","\xe3"),
	HX_HCSTRING("set_loaded","\x42","\x56","\x74","\x4c"),
	HX_HCSTRING("set_pan","\x00","\xab","\xcb","\x19"),
	HX_HCSTRING("set_pitch","\x23","\x04","\x9b","\xe9"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("set_looping","\x21","\xe4","\xe4","\xb0"),
	HX_HCSTRING("set_position_bytes","\x52","\x68","\x26","\x52"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

hx::Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.audio.Sound","\x23","\x86","\xee","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Sound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
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
} // end namespace system
} // end namespace audio
