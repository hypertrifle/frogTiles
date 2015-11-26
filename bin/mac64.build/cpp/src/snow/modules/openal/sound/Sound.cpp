#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
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

Void Sound_obj::__construct(::snow::_system::audio::Audio _system,::String _name,Dynamic __o__is_stream)
{
HX_STACK_FRAME("snow.modules.openal.sound.Sound","new",0x51486a5b,"snow.modules.openal.sound.Sound.new","snow/modules/openal/sound/Sound.hx",21,0x7e43edf5)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(__o__is_stream,"_is_stream")
Dynamic _is_stream = __o__is_stream.Default(false);
{
	HX_STACK_LINE(23)
	::snow::_system::audio::Audio tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	Dynamic tmp2 = _is_stream;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(25)
	bool tmp3 = (_is_stream != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	::snow::modules::openal::sound::ALSound tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	if ((tmp3)){
		HX_STACK_LINE(25)
		Dynamic tmp5 = _is_stream;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		Dynamic _switch_1 = (tmp5);
		if (  ( _switch_1==true)){
			HX_STACK_LINE(26)
			tmp4 = ::snow::modules::openal::sound::ALStream_obj::__new(hx::ObjectPtr<OBJ_>(this));
		}
		else if (  ( _switch_1==false)){
			HX_STACK_LINE(27)
			tmp4 = ::snow::modules::openal::sound::ALSound_obj::__new(hx::ObjectPtr<OBJ_>(this));
		}
		else  {
			HX_STACK_LINE(28)
			tmp4 = null();
		}
;
;
	}
	else{
		HX_STACK_LINE(28)
		tmp4 = null();
	}
	HX_STACK_LINE(25)
	this->instance = tmp4;
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::snow::modules::openal::sound::ALSound tmp5 = this->instance;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		if ((tmp6)){
			HX_STACK_LINE(31)
			::snow::api::DebugError tmp7 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("instance was null","\xc9","\x9e","\x08","\x39"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(31)
			HX_STACK_DO_THROW(tmp7);
		}
	}
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::snow::_system::audio::Audio _system,::String _name,Dynamic __o__is_stream)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(_system,_name,__o__is_stream);
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Sound_obj::play( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","play",0xcf6c4f99,"snow.modules.openal.sound.Sound.play","snow/modules/openal/sound/Sound.hx",39,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		bool tmp = this->get_looping();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(43)
			this->set_looping(false);
		}
		HX_STACK_LINE(47)
		::snow::modules::openal::sound::ALSound tmp1 = this->instance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		tmp1->play();
		HX_STACK_LINE(49)
		this->set_playing(true);
		HX_STACK_LINE(50)
		this->set_paused(false);
	}
return null();
}


Void Sound_obj::loop( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","loop",0xccc9c809,"snow.modules.openal.sound.Sound.loop","snow/modules/openal/sound/Sound.hx",54,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		bool tmp = this->get_looping();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		if ((tmp1)){
			HX_STACK_LINE(57)
			this->set_looping(true);
		}
		HX_STACK_LINE(61)
		::snow::modules::openal::sound::ALSound tmp2 = this->instance;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		tmp2->loop();
		HX_STACK_LINE(63)
		this->set_playing(true);
		HX_STACK_LINE(64)
		this->set_paused(false);
	}
return null();
}


Void Sound_obj::stop( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","stop",0xd16e11a7,"snow.modules.openal.sound.Sound.stop","snow/modules/openal/sound/Sound.hx",68,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		tmp->stop();
		HX_STACK_LINE(71)
		this->onended();
	}
return null();
}


Void Sound_obj::pause( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","pause",0xa82325b1,"snow.modules.openal.sound.Sound.pause","snow/modules/openal/sound/Sound.hx",76,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		tmp->pause();
		HX_STACK_LINE(80)
		this->set_playing(false);
		HX_STACK_LINE(81)
		this->set_paused(true);
	}
return null();
}


Void Sound_obj::destroy( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","destroy",0xd3cee075,"snow.modules.openal.sound.Sound.destroy","snow/modules/openal/sound/Sound.hx",86,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(88)
			tmp->stop();
			HX_STACK_LINE(88)
			this->onended();
		}
		HX_STACK_LINE(89)
		::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		tmp->destroy();
		HX_STACK_LINE(90)
		::snow::_system::audio::Audio tmp1 = this->_system;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		tmp1->__Field(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Sound_obj::internal_update( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","internal_update",0xb2676886,"snow.modules.openal.sound.Sound.internal_update","snow/modules/openal/sound/Sound.hx",96,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		tmp->internal_update();
	}
return null();
}


Void Sound_obj::internal_play( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","internal_play",0x61458731,"snow.modules.openal.sound.Sound.internal_play","snow/modules/openal/sound/Sound.hx",97,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		tmp->internal_play();
	}
return null();
}


Void Sound_obj::internal_loop( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","internal_loop",0x5ea2ffa1,"snow.modules.openal.sound.Sound.internal_loop","snow/modules/openal/sound/Sound.hx",98,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		tmp->internal_loop();
	}
return null();
}


Void Sound_obj::internal_stop( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","internal_stop",0x6347493f,"snow.modules.openal.sound.Sound.internal_stop","snow/modules/openal/sound/Sound.hx",99,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		tmp->internal_stop();
	}
return null();
}


Void Sound_obj::internal_pause( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","internal_pause",0xb45a9319,"snow.modules.openal.sound.Sound.internal_pause","snow/modules/openal/sound/Sound.hx",100,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		tmp->internal_pause();
	}
return null();
}


Void Sound_obj::onended( ){
{
		HX_STACK_FRAME("snow.modules.openal.sound.Sound","onended",0x22d32af6,"snow.modules.openal.sound.Sound.onended","snow/modules/openal/sound/Sound.hx",104,0x7e43edf5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		this->set_playing(false);
		HX_STACK_LINE(107)
		this->set_paused(false);
		HX_STACK_LINE(108)
		this->emit(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,onended,(void))

Dynamic Sound_obj::set_info( Dynamic _info){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_info",0x2427a590,"snow.modules.openal.sound.Sound.set_info","snow/modules/openal/sound/Sound.hx",114,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_LINE(117)
	Dynamic tmp = this->get_info();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	if ((tmp1)){
		HX_STACK_LINE(118)
		this->destroy();
	}
	HX_STACK_LINE(122)
	this->info = null();
	HX_STACK_LINE(125)
	bool tmp2 = (_info == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	if ((tmp2)){
		HX_STACK_LINE(126)
		::String tmp3 = HX_HCSTRING("    i / sound / not creating sound, info was null!","\x84","\x42","\x2f","\xfd");		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Sound.hx","\x6f","\x1d","\x3b","\xf3"),126,HX_HCSTRING("snow.modules.openal.sound.Sound","\xe9","\xa0","\xdf","\x11"),HX_HCSTRING("set_info","\x6b","\x4d","\xd3","\x73"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		::haxe::Log_obj::trace(tmp3,tmp4);
		HX_STACK_LINE(127)
		Dynamic tmp5 = this->get_info();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		return tmp5;
	}
	HX_STACK_LINE(131)
	this->info = _info;
	HX_STACK_LINE(132)
	this->set_loaded(true);
	HX_STACK_LINE(134)
	::snow::modules::openal::sound::ALSound tmp3 = this->instance;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	Dynamic tmp4 = this->get_info();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(134)
	tmp3->update_info(tmp4);
	HX_STACK_LINE(136)
	Dynamic tmp5 = this->get_info();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	return tmp5;
}


bool Sound_obj::get_playing( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_playing",0x8f79fc80,"snow.modules.openal.sound.Sound.get_playing","snow/modules/openal/sound/Sound.hx",141,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	bool tmp = this->playing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}


bool Sound_obj::get_paused( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_paused",0x90421bdc,"snow.modules.openal.sound.Sound.get_paused","snow/modules/openal/sound/Sound.hx",142,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	return tmp;
}


bool Sound_obj::get_loaded( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_loaded",0xf92d2333,"snow.modules.openal.sound.Sound.get_loaded","snow/modules/openal/sound/Sound.hx",143,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	bool tmp = this->loaded;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	return tmp;
}


Dynamic Sound_obj::get_info( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_info",0x75ca4c1c,"snow.modules.openal.sound.Sound.get_info","snow/modules/openal/sound/Sound.hx",144,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	Dynamic tmp = this->info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	return tmp;
}


Float Sound_obj::get_pan( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_pan",0xd612cd6f,"snow.modules.openal.sound.Sound.get_pan","snow/modules/openal/sound/Sound.hx",145,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	Float tmp = this->pan;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	return tmp;
}


Float Sound_obj::get_pitch( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_pitch",0x9fc2e052,"snow.modules.openal.sound.Sound.get_pitch","snow/modules/openal/sound/Sound.hx",146,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	Float tmp = this->pitch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	return tmp;
}


Float Sound_obj::get_volume( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_volume",0x00110508,"snow.modules.openal.sound.Sound.get_volume","snow/modules/openal/sound/Sound.hx",147,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	Float tmp = this->volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	return tmp;
}


bool Sound_obj::get_looping( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_looping",0x25df6a10,"snow.modules.openal.sound.Sound.get_looping","snow/modules/openal/sound/Sound.hx",148,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	bool tmp = this->looping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	return tmp;
}


int Sound_obj::get_length_bytes( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_length_bytes",0x3ea606c0,"snow.modules.openal.sound.Sound.get_length_bytes","snow/modules/openal/sound/Sound.hx",150,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	Dynamic tmp = this->get_info();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	int tmp1 = tmp->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length_pcm","\x01","\x98","\xab","\x29"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	return tmp1;
}


Float Sound_obj::get_position( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_position",0x7b482357,"snow.modules.openal.sound.Sound.get_position","snow/modules/openal/sound/Sound.hx",151,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	Float tmp1 = tmp->get_position();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	return tmp1;
}


int Sound_obj::get_position_bytes( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_position_bytes",0x6bcf0e43,"snow.modules.openal.sound.Sound.get_position_bytes","snow/modules/openal/sound/Sound.hx",152,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	int tmp1 = tmp->get_position_bytes();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	return tmp1;
}


Float Sound_obj::get_duration( ){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","get_duration",0xc4db9202,"snow.modules.openal.sound.Sound.get_duration","snow/modules/openal/sound/Sound.hx",153,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	::snow::_system::audio::Audio tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	Dynamic tmp1 = this->get_info();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	int tmp2 = this->get_length_bytes();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	Float tmp3 = tmp->__Field(HX_HCSTRING("bytes_to_seconds","\x0f","\x7f","\x12","\xef"), hx::paccDynamic )(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	return tmp3;
}


bool Sound_obj::set_playing( bool _playing){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_playing",0x99e7038c,"snow.modules.openal.sound.Sound.set_playing","snow/modules/openal/sound/Sound.hx",155,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_playing,"_playing")
	HX_STACK_LINE(156)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	bool tmp1 = _playing;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	bool tmp2 = tmp->set_playing(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	this->playing = tmp2;
	HX_STACK_LINE(157)
	bool tmp3 = this->get_playing();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	return tmp3;
}


bool Sound_obj::set_paused( bool _paused){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_paused",0x93bfba50,"snow.modules.openal.sound.Sound.set_paused","snow/modules/openal/sound/Sound.hx",160,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_paused,"_paused")
	HX_STACK_LINE(161)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	bool tmp1 = _paused;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	bool tmp2 = tmp->set_paused(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	this->paused = tmp2;
	HX_STACK_LINE(162)
	bool tmp3 = this->get_paused();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(162)
	return tmp3;
}


bool Sound_obj::set_loaded( bool _loaded){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_loaded",0xfcaac1a7,"snow.modules.openal.sound.Sound.set_loaded","snow/modules/openal/sound/Sound.hx",165,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_loaded,"_loaded")
	HX_STACK_LINE(166)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	bool tmp1 = _loaded;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	bool tmp2 = tmp->set_loaded(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	this->loaded = tmp2;
	HX_STACK_LINE(167)
	bool tmp3 = this->get_loaded();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(167)
	return tmp3;
}


Float Sound_obj::set_pan( Float _pan){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_pan",0xc9145e7b,"snow.modules.openal.sound.Sound.set_pan","snow/modules/openal/sound/Sound.hx",171,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(172)
	Dynamic tmp = this->get_info();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	int tmp1 = tmp->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	bool tmp2 = (tmp1 > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	if ((tmp2)){
		HX_STACK_LINE(172)
		::String tmp3 = HX_HCSTRING("    i / sound / OpenAL: Pan on Stereo sound sources is not supported, nothing will happen!","\x4b","\x87","\x2e","\x6f");		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Sound.hx","\x6f","\x1d","\x3b","\xf3"),172,HX_HCSTRING("snow.modules.openal.sound.Sound","\xe9","\xa0","\xdf","\x11"),HX_HCSTRING("set_pan","\x00","\xab","\xcb","\x19"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		::haxe::Log_obj::trace(tmp3,tmp4);
	}
	HX_STACK_LINE(173)
	::snow::modules::openal::sound::ALSound tmp3 = this->instance;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	Float tmp4 = _pan;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	Float tmp5 = tmp3->set_pan(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(173)
	this->pan = tmp5;
	HX_STACK_LINE(174)
	Float tmp6 = this->get_pan();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(174)
	return tmp6;
}


Float Sound_obj::set_pitch( Float _pitch){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_pitch",0x8313cc5e,"snow.modules.openal.sound.Sound.set_pitch","snow/modules/openal/sound/Sound.hx",177,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(178)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	Float tmp1 = _pitch;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	Float tmp2 = tmp->set_pitch(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	this->pitch = tmp2;
	HX_STACK_LINE(179)
	Float tmp3 = this->get_pitch();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	return tmp3;
}


Float Sound_obj::set_volume( Float _volume){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_volume",0x038ea37c,"snow.modules.openal.sound.Sound.set_volume","snow/modules/openal/sound/Sound.hx",182,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(183)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	Float tmp1 = _volume;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	Float tmp2 = tmp->set_volume(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	this->volume = tmp2;
	HX_STACK_LINE(184)
	Float tmp3 = this->get_volume();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	return tmp3;
}


Float Sound_obj::set_position( Float _position){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_position",0x904146cb,"snow.modules.openal.sound.Sound.set_position","snow/modules/openal/sound/Sound.hx",187,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(188)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	Float tmp1 = _position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	Float tmp2 = tmp->set_position(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	this->position = tmp2;
	HX_STACK_LINE(189)
	Float tmp3 = this->get_position();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(189)
	return tmp3;
}


bool Sound_obj::set_looping( bool _looping){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_looping",0x304c711c,"snow.modules.openal.sound.Sound.set_looping","snow/modules/openal/sound/Sound.hx",192,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_looping,"_looping")
	HX_STACK_LINE(193)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	bool tmp1 = _looping;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	bool tmp2 = tmp->set_looping(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	this->looping = tmp2;
	HX_STACK_LINE(194)
	bool tmp3 = this->get_looping();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	return tmp3;
}


int Sound_obj::set_position_bytes( int _position_bytes){
	HX_STACK_FRAME("snow.modules.openal.sound.Sound","set_position_bytes",0x487e40b7,"snow.modules.openal.sound.Sound.set_position_bytes","snow/modules/openal/sound/Sound.hx",197,0x7e43edf5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_position_bytes,"_position_bytes")
	HX_STACK_LINE(198)
	::snow::modules::openal::sound::ALSound tmp = this->instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	int tmp1 = _position_bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	int tmp2 = tmp->set_position_bytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	this->position_bytes = tmp2;
	HX_STACK_LINE(199)
	int tmp3 = this->get_position_bytes();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	return tmp3;
}



Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(instance,"instance");
	::snow::_system::audio::Sound_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(instance,"instance");
	::snow::_system::audio::Sound_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onended") ) { return onended_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"set_info") ) { return set_info_dyn(); }
		if (HX_FIELD_EQ(inName,"get_info") ) { return get_info_dyn(); }
		break;
	case 9:
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
		if (HX_FIELD_EQ(inName,"internal_pause") ) { return internal_pause_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"internal_update") ) { return internal_update_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_length_bytes") ) { return get_length_bytes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_position_bytes") ) { return get_position_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position_bytes") ) { return set_position_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::snow::modules::openal::sound::ALSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::modules::openal::sound::ALSound*/ ,(int)offsetof(Sound_obj,instance),HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
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
	HX_HCSTRING("onended","\x7b","\x77","\x8a","\x73"),
	HX_HCSTRING("set_info","\x6b","\x4d","\xd3","\x73"),
	HX_HCSTRING("get_playing","\x85","\x6f","\x12","\x10"),
	HX_HCSTRING("get_paused","\x77","\xb0","\x0b","\xe0"),
	HX_HCSTRING("get_loaded","\xce","\xb7","\xf6","\x48"),
	HX_HCSTRING("get_info","\xf7","\xf3","\x75","\xc5"),
	HX_HCSTRING("get_pan","\xf4","\x19","\xca","\x26"),
	HX_HCSTRING("get_pitch","\x17","\x18","\x4a","\x06"),
	HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"),
	HX_HCSTRING("get_looping","\x15","\xdd","\x77","\xa6"),
	HX_HCSTRING("get_length_bytes","\x9b","\x81","\x55","\xa1"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("get_position_bytes","\xde","\x35","\x77","\x75"),
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
	__mClass->mName = HX_HCSTRING("snow.modules.openal.sound.Sound","\xe9","\xa0","\xdf","\x11");
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
} // end namespace modules
} // end namespace openal
} // end namespace sound
