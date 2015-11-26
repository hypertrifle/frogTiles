#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_Audio
#include <snow/core/native/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_openal_Audio
#include <snow/modules/openal/Audio.h>
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
namespace _system{
namespace audio{

Void Audio_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.system.audio.Audio","new",0x1f53701c,"snow.system.audio.Audio.new","snow/system/audio/Audio.hx",13,0xc91259f5)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(18)
	this->active = false;
	HX_STACK_LINE(31)
	this->app = _app;
	HX_STACK_LINE(33)
	::snow::modules::openal::Audio tmp = ::snow::modules::openal::Audio_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	this->module = tmp;
	HX_STACK_LINE(35)
	::snow::modules::openal::Audio tmp1 = this->module;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	tmp1->init();
	HX_STACK_LINE(37)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(37)
	this->sound_list = tmp2;
	HX_STACK_LINE(38)
	::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(38)
	this->stream_list = tmp3;
	HX_STACK_LINE(40)
	this->active = true;
}
;
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::snow::api::Promise Audio_obj::create( ::String _id,::String __o__name,Dynamic __o__streaming){
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Dynamic _streaming = __o__streaming.Default(false);
	HX_STACK_FRAME("snow.system.audio.Audio","create",0x1ba144c0,"snow.system.audio.Audio.create","snow/system/audio/Audio.hx",49,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_streaming,"_streaming")
{
		HX_STACK_LINE(49)
		::snow::_system::audio::Audio _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		bool tmp = (_name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		if ((tmp)){
			HX_STACK_LINE(51)
			::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			::String tmp2 = tmp1->make_uniqueid(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			_name = tmp2;
		}
		HX_STACK_LINE(53)
		::String tmp1 = (HX_HCSTRING("creating sound named ","\xbf","\x9e","\x56","\x74") + _name);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		::String tmp2 = (tmp1 + HX_HCSTRING(" (stream: ","\x2e","\xcb","\x02","\x85"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		Dynamic tmp3 = _streaming;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		::String tmp6 = (tmp5 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		::String tmp7 = (HX_HCSTRING("    i / audio / ","\x83","\x5a","\x04","\xba") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),53,HX_HCSTRING("snow.system.audio.Audio","\x2a","\x72","\xa2","\x2a"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		::haxe::Log_obj::trace(tmp7,tmp8);

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,::String,_name,::snow::_system::audio::Audio,_g,::String,_id,Dynamic,_streaming)
		int __ArgCount() const { return 2; }
		Void run(Dynamic resolve,Dynamic reject){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/system/audio/Audio.hx",55,0xc91259f5)
			HX_STACK_ARG(resolve,"resolve")
			HX_STACK_ARG(reject,"reject")
			{
				HX_STACK_LINE(57)
				::String tmp9 = _id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				::String tmp10 = _name;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(57)
				Dynamic tmp11 = _streaming;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(57)
				::snow::api::Promise tmp12 = _g->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("create_sound","\x0c","\xa0","\x74","\x6a"), hx::paccDynamic )(tmp9,tmp10,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(57)
				::snow::api::Promise _create = tmp12;		HX_STACK_VAR(_create,"_create");

				HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_2_1,::String,_name,::snow::_system::audio::Audio,_g,Dynamic,resolve,Dynamic,_streaming)
				int __ArgCount() const { return 1; }
				Void run(::snow::_system::audio::Sound _sound){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/system/audio/Audio.hx",59,0xc91259f5)
					HX_STACK_ARG(_sound,"_sound")
					{
						HX_STACK_LINE(61)
						::String tmp13 = _name;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(61)
						::snow::_system::audio::Sound tmp14 = _sound;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(61)
						_g->__Field(HX_HCSTRING("sound_list","\x0e","\xdd","\xdb","\xd0"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp13,tmp14);
						HX_STACK_LINE(63)
						Dynamic tmp15 = _streaming;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(63)
						if ((tmp15)){
							HX_STACK_LINE(63)
							::String tmp16 = _name;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(63)
							::snow::_system::audio::Sound tmp17 = _sound;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(63)
							_g->__Field(HX_HCSTRING("stream_list","\xbd","\xd3","\x5c","\xd7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp16,tmp17);
						}
						HX_STACK_LINE(65)
						::snow::_system::audio::Sound tmp16 = _sound;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(65)
						resolve(tmp16);
						HX_STACK_LINE(67)
						_sound->__Field(HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"), hx::paccDynamic )(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(59)
				::snow::api::Promise tmp13 = _create->then( Dynamic(new _Function_2_1(_name,_g,resolve,_streaming)),null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(69)
				Dynamic tmp14 = reject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(59)
				tmp13->error(tmp14);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(55)
		::snow::api::Promise tmp9 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_name,_g,_id,_streaming)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,create,return )

::snow::_system::audio::Sound Audio_obj::create_from_bytes( ::String __o__name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("snow.system.audio.Audio","create_from_bytes",0x796820f5,"snow.system.audio.Audio.create_from_bytes","snow/system/audio/Audio.hx",79,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
{
		HX_STACK_LINE(81)
		bool tmp = (_name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		if ((tmp)){
			HX_STACK_LINE(81)
			::snow::Snow tmp1 = this->app;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			::String tmp2 = tmp1->make_uniqueid(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			_name = tmp2;
		}
		HX_STACK_LINE(83)
		::snow::modules::openal::Audio tmp1 = this->module;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		::snow::api::buffers::ArrayBufferView tmp3 = _bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		Dynamic tmp4 = _format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		::snow::modules::openal::sound::Sound tmp5 = hx::TCast< ::snow::modules::openal::sound::Sound >::cast(tmp1->create_sound_from_bytes(tmp2,tmp3,tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		::snow::modules::openal::sound::Sound sound = tmp5;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			bool tmp6 = (sound == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			if ((tmp6)){
				HX_STACK_LINE(85)
				::snow::api::DebugError tmp7 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("sound was null","\x4f","\xba","\xa6","\xa2"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(85)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(87)
		::haxe::ds::StringMap tmp6 = this->sound_list;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		::snow::modules::openal::sound::Sound tmp8 = sound;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		tmp6->set(tmp7,tmp8);
		HX_STACK_LINE(89)
		::snow::modules::openal::sound::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(89)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,create_from_bytes,return )

Void Audio_obj::uncreate( ::String _name){
{
		HX_STACK_FRAME("snow.system.audio.Audio","uncreate",0x8c6e6cd9,"snow.system.audio.Audio.uncreate","snow/system/audio/Audio.hx",94,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(96)
		::haxe::ds::StringMap tmp = this->sound_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		::snow::_system::audio::Sound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		::snow::_system::audio::Sound _sound = tmp2;		HX_STACK_VAR(_sound,"_sound");
		HX_STACK_LINE(98)
		bool tmp3 = (_sound == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		if ((tmp3)){
			HX_STACK_LINE(99)
			::String tmp4 = (HX_HCSTRING("can't find sound, unable to uncreate, use create first: ","\x6b","\x7e","\x2d","\x2e") + _name);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			::String tmp5 = (HX_HCSTRING("    i / audio / ","\x83","\x5a","\x04","\xba") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),99,HX_HCSTRING("snow.system.audio.Audio","\x2a","\x72","\xa2","\x2a"),HX_HCSTRING("uncreate","\x15","\x96","\x56","\x7e"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			::haxe::Log_obj::trace(tmp5,tmp6);
		}
		HX_STACK_LINE(103)
		_sound->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,uncreate,(void))

Void Audio_obj::add( ::snow::_system::audio::Sound sound){
{
		HX_STACK_FRAME("snow.system.audio.Audio","add",0x1f4991dd,"snow.system.audio.Audio.add","snow/system/audio/Audio.hx",110,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sound,"sound")
		HX_STACK_LINE(111)
		::haxe::ds::StringMap tmp = this->sound_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		::String tmp1 = sound->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		::snow::_system::audio::Sound tmp2 = sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		tmp->set(tmp1,tmp2);
		HX_STACK_LINE(112)
		bool tmp3 = sound->__Field(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		if ((tmp3)){
			HX_STACK_LINE(112)
			::haxe::ds::StringMap tmp4 = this->stream_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			::String tmp5 = sound->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			::snow::_system::audio::Sound tmp6 = sound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			tmp4->set(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,add,(void))

Void Audio_obj::on( ::String _name,::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.system.audio.Audio","on",0x1cd70ce3,"snow.system.audio.Audio.on","snow/system/audio/Audio.hx",121,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(124)
		bool tmp = (_event == HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		if ((tmp)){
			HX_STACK_LINE(125)
			::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(125)
			::snow::_system::audio::Sound tmp2 = this->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			::snow::_system::audio::Sound sound = tmp2;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(126)
			bool tmp3 = (sound != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			if ((tmp3)){
				HX_STACK_LINE(127)
				bool tmp4 = sound->__Field(HX_HCSTRING("get_loaded","\xce","\xb7","\xf6","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(127)
				if ((tmp4)){
					HX_STACK_LINE(129)
					::snow::_system::audio::Sound tmp5 = sound;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(129)
					_handler(tmp5).Cast< Void >();
					HX_STACK_LINE(130)
					return null();
				}
			}
		}
		HX_STACK_LINE(135)
		::String tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _event);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		::String tmp2 = ::snow::_system::audio::Audio_obj::splitter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		::String tmp4 = _name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		::String _event_id = tmp5;		HX_STACK_VAR(_event_id,"_event_id");
		HX_STACK_LINE(140)
		::haxe::ds::StringMap tmp6 = this->handlers;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		if ((tmp7)){
			HX_STACK_LINE(140)
			::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(140)
				::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(140)
				tmp8 = tmp10;
			}
			HX_STACK_LINE(140)
			this->handlers = tmp8;
		}
		HX_STACK_LINE(142)
		::haxe::ds::StringMap tmp8 = this->handlers;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		::String tmp9 = _event_id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(142)
		bool tmp10 = tmp8->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(142)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(142)
		if ((tmp11)){
			HX_STACK_LINE(142)
			::haxe::ds::StringMap tmp12 = this->handlers;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(142)
			::String tmp13 = _event_id;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(142)
			tmp12->set(tmp13,cpp::ArrayBase_obj::__new());
		}
		HX_STACK_LINE(145)
		::haxe::ds::StringMap tmp12 = this->handlers;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(145)
		::String tmp13 = _event_id;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(145)
		cpp::ArrayBase _list = ((cpp::ArrayBase)(tmp12->get(tmp13)));		HX_STACK_VAR(_list,"_list");
		HX_STACK_LINE(147)
		Dynamic tmp14 = _handler;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(147)
		int tmp15 = _list->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(147)
		bool tmp16 = (tmp15 != (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(147)
		if ((tmp16)){
			HX_STACK_LINE(147)
			HX_STACK_DO_THROW(HX_HCSTRING("Audio on event adding the same handler twice","\xe9","\x4f","\xdc","\xf6"));
		}
		HX_STACK_LINE(149)
		Dynamic tmp17 = _handler;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(149)
		_list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
		HX_STACK_LINE(151)
		::haxe::ds::StringMap tmp18 = this->handlers;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(151)
		::String tmp19 = _event_id;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(151)
		tmp18->set(tmp19,_list);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,on,(void))

Void Audio_obj::off( ::String _name,::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("snow.system.audio.Audio","off",0x1f54332b,"snow.system.audio.Audio.off","snow/system/audio/Audio.hx",156,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(158)
		::haxe::ds::StringMap tmp = this->handlers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		if ((tmp1)){
			HX_STACK_LINE(158)
			return null();
		}
		HX_STACK_LINE(160)
		::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _event);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		::String tmp3 = ::snow::_system::audio::Audio_obj::splitter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		::String tmp5 = _name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		::String _event_id = tmp6;		HX_STACK_VAR(_event_id,"_event_id");
		HX_STACK_LINE(162)
		::haxe::ds::StringMap tmp7 = this->handlers;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		::String tmp8 = _event_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(162)
		cpp::ArrayBase _list = ((cpp::ArrayBase)(tmp7->get(tmp8)));		HX_STACK_VAR(_list,"_list");
		HX_STACK_LINE(163)
		bool tmp9 = (_list != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(163)
		if ((tmp9)){
			HX_STACK_LINE(164)
			Dynamic tmp10 = _handler;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(164)
			_list->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp10);
			HX_STACK_LINE(165)
			::haxe::ds::StringMap tmp11 = this->handlers;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(165)
			::String tmp12 = _event_id;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(165)
			tmp11->set(tmp12,_list);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,off,(void))

::snow::_system::audio::Sound Audio_obj::get( ::String _name){
	HX_STACK_FRAME("snow.system.audio.Audio","get",0x1f4e2052,"snow.system.audio.Audio.get","snow/system/audio/Audio.hx",171,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(173)
	::haxe::ds::StringMap tmp = this->sound_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	::snow::_system::audio::Sound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	::snow::_system::audio::Sound _sound = tmp2;		HX_STACK_VAR(_sound,"_sound");
	HX_STACK_LINE(175)
	::snow::_system::audio::Sound tmp3 = _sound;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,get,return )

Float Audio_obj::volume( ::String _name,Dynamic _volume){
	HX_STACK_FRAME("snow.system.audio.Audio","volume",0xfee5079e,"snow.system.audio.Audio.volume","snow/system/audio/Audio.hx",181,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(182)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	::snow::_system::audio::Sound tmp1 = this->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	::snow::_system::audio::Sound sound = tmp1;		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(183)
	bool tmp2 = (sound != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	if ((tmp2)){
		HX_STACK_LINE(184)
		bool tmp3 = (_volume != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		if ((tmp3)){
			HX_STACK_LINE(185)
			Dynamic tmp4 = _volume;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			Float tmp5 = sound->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			return tmp5;
		}
		else{
			HX_STACK_LINE(187)
			Float tmp4 = sound->__Field(HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			return tmp4;
		}
	}
	HX_STACK_LINE(190)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,volume,return )

Float Audio_obj::pan( ::String _name,Dynamic _pan){
	HX_STACK_FRAME("snow.system.audio.Audio","pan",0x1f54f119,"snow.system.audio.Audio.pan","snow/system/audio/Audio.hx",195,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(196)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	::snow::_system::audio::Sound tmp1 = this->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	::snow::_system::audio::Sound sound = tmp1;		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(197)
	bool tmp2 = (sound != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	if ((tmp2)){
		HX_STACK_LINE(198)
		bool tmp3 = (_pan != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		if ((tmp3)){
			HX_STACK_LINE(199)
			Dynamic tmp4 = _pan;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			Float tmp5 = sound->__Field(HX_HCSTRING("set_pan","\x00","\xab","\xcb","\x19"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			return tmp5;
		}
		else{
			HX_STACK_LINE(201)
			Float tmp4 = sound->__Field(HX_HCSTRING("get_pan","\xf4","\x19","\xca","\x26"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			return tmp4;
		}
	}
	HX_STACK_LINE(204)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pan,return )

Float Audio_obj::pitch( ::String _name,Dynamic _pitch){
	HX_STACK_FRAME("snow.system.audio.Audio","pitch",0x5894c27c,"snow.system.audio.Audio.pitch","snow/system/audio/Audio.hx",209,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(210)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	::snow::_system::audio::Sound tmp1 = this->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	::snow::_system::audio::Sound sound = tmp1;		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(211)
	bool tmp2 = (sound != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	if ((tmp2)){
		HX_STACK_LINE(212)
		bool tmp3 = (_pitch != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		if ((tmp3)){
			HX_STACK_LINE(213)
			Dynamic tmp4 = _pitch;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			Float tmp5 = sound->__Field(HX_HCSTRING("set_pitch","\x23","\x04","\x9b","\xe9"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(213)
			return tmp5;
		}
		else{
			HX_STACK_LINE(215)
			Float tmp4 = sound->__Field(HX_HCSTRING("get_pitch","\x17","\x18","\x4a","\x06"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			return tmp4;
		}
	}
	HX_STACK_LINE(218)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pitch,return )

Float Audio_obj::position( ::String _name,Dynamic _position){
	HX_STACK_FRAME("snow.system.audio.Audio","position",0xd912776d,"snow.system.audio.Audio.position","snow/system/audio/Audio.hx",223,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(224)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	::snow::_system::audio::Sound tmp1 = this->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	::snow::_system::audio::Sound sound = tmp1;		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(225)
	bool tmp2 = (sound != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	if ((tmp2)){
		HX_STACK_LINE(226)
		bool tmp3 = (_position != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		if ((tmp3)){
			HX_STACK_LINE(227)
			Dynamic tmp4 = _position;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			Float tmp5 = sound->__Field(HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			return tmp5;
		}
		else{
			HX_STACK_LINE(229)
			Float tmp4 = sound->__Field(HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			return tmp4;
		}
	}
	HX_STACK_LINE(232)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,position,return )

Float Audio_obj::duration( ::String _name){
	HX_STACK_FRAME("snow.system.audio.Audio","duration",0x22a5e618,"snow.system.audio.Audio.duration","snow/system/audio/Audio.hx",237,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(238)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	::snow::_system::audio::Sound tmp1 = this->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	::snow::_system::audio::Sound sound = tmp1;		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(239)
	bool tmp2 = (sound != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	if ((tmp2)){
		HX_STACK_LINE(240)
		Float tmp3 = sound->__Field(HX_HCSTRING("get_duration","\x5d","\xc3","\xa7","\xc9"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		return tmp3;
	}
	HX_STACK_LINE(242)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,duration,return )

Void Audio_obj::play( ::String _name){
{
		HX_STACK_FRAME("snow.system.audio.Audio","play",0x4b0652b8,"snow.system.audio.Audio.play","snow/system/audio/Audio.hx",246,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(248)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		if ((tmp1)){
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(252)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		::snow::_system::audio::Sound tmp3 = this->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		::snow::_system::audio::Sound sound = tmp3;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(253)
		bool tmp4 = (sound != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(253)
		if ((tmp4)){
			HX_STACK_LINE(254)
			sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,play,(void))

Void Audio_obj::loop( ::String _name){
{
		HX_STACK_FRAME("snow.system.audio.Audio","loop",0x4863cb28,"snow.system.audio.Audio.loop","snow/system/audio/Audio.hx",259,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(261)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		if ((tmp1)){
			HX_STACK_LINE(262)
			return null();
		}
		HX_STACK_LINE(265)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		::snow::_system::audio::Sound tmp3 = this->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		::snow::_system::audio::Sound sound = tmp3;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(266)
		bool tmp4 = (sound != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		if ((tmp4)){
			HX_STACK_LINE(267)
			sound->__Field(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,loop,(void))

Void Audio_obj::pause( ::String _name){
{
		HX_STACK_FRAME("snow.system.audio.Audio","pause",0x534bddb2,"snow.system.audio.Audio.pause","snow/system/audio/Audio.hx",273,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(275)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		if ((tmp1)){
			HX_STACK_LINE(276)
			return null();
		}
		HX_STACK_LINE(279)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(279)
		::snow::_system::audio::Sound tmp3 = this->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		::snow::_system::audio::Sound sound = tmp3;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(280)
		bool tmp4 = (sound != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(280)
		if ((tmp4)){
			HX_STACK_LINE(281)
			sound->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pause,(void))

Void Audio_obj::stop( ::String _name){
{
		HX_STACK_FRAME("snow.system.audio.Audio","stop",0x4d0814c6,"snow.system.audio.Audio.stop","snow/system/audio/Audio.hx",286,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(288)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		if ((tmp1)){
			HX_STACK_LINE(289)
			return null();
		}
		HX_STACK_LINE(292)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		::snow::_system::audio::Sound tmp3 = this->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		::snow::_system::audio::Sound sound = tmp3;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(293)
		bool tmp4 = (sound != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(293)
		if ((tmp4)){
			HX_STACK_LINE(294)
			sound->__Field(HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,stop,(void))

Void Audio_obj::toggle( ::String _name){
{
		HX_STACK_FRAME("snow.system.audio.Audio","toggle",0x2ed59d58,"snow.system.audio.Audio.toggle","snow/system/audio/Audio.hx",299,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(301)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		if ((tmp1)){
			HX_STACK_LINE(302)
			return null();
		}
		HX_STACK_LINE(305)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(305)
		::snow::_system::audio::Sound tmp3 = this->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		::snow::_system::audio::Sound sound = tmp3;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(306)
		bool tmp4 = (sound != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		if ((tmp4)){
			HX_STACK_LINE(307)
			sound->__Field(HX_HCSTRING("toggle","\x94","\xbf","\x43","\x8f"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,toggle,(void))

Float Audio_obj::bytes_to_seconds( Dynamic info,int _bytes){
	HX_STACK_FRAME("snow.system.audio.Audio","bytes_to_seconds",0xbac4b9d3,"snow.system.audio.Audio.bytes_to_seconds","snow/system/audio/Audio.hx",317,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(319)
	int tmp = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	bool tmp1 = (tmp == (int)16);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(319)
	if ((tmp1)){
		HX_STACK_LINE(319)
		tmp2 = (int)2;
	}
	else{
		HX_STACK_LINE(319)
		tmp2 = (int)1;
	}
	HX_STACK_LINE(319)
	int word = tmp2;		HX_STACK_VAR(word,"word");
	HX_STACK_LINE(320)
	int tmp3 = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(320)
	int tmp4 = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(320)
	int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(320)
	int tmp6 = word;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(320)
	int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(320)
	int sample_frames = tmp7;		HX_STACK_VAR(sample_frames,"sample_frames");
	HX_STACK_LINE(322)
	Float tmp8 = (Float(_bytes) / Float(sample_frames));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(322)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,bytes_to_seconds,return )

int Audio_obj::seconds_to_bytes( Dynamic info,Float _seconds){
	HX_STACK_FRAME("snow.system.audio.Audio","seconds_to_bytes",0x816eb72b,"snow.system.audio.Audio.seconds_to_bytes","snow/system/audio/Audio.hx",327,0xc91259f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(_seconds,"_seconds")
	HX_STACK_LINE(329)
	int tmp = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	bool tmp1 = (tmp == (int)16);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(329)
	if ((tmp1)){
		HX_STACK_LINE(329)
		tmp2 = (int)2;
	}
	else{
		HX_STACK_LINE(329)
		tmp2 = (int)1;
	}
	HX_STACK_LINE(329)
	int word = tmp2;		HX_STACK_VAR(word,"word");
	HX_STACK_LINE(330)
	int tmp3 = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(330)
	int tmp4 = info->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(330)
	int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(330)
	int tmp6 = word;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(330)
	int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(330)
	int sample_frames = tmp7;		HX_STACK_VAR(sample_frames,"sample_frames");
	HX_STACK_LINE(332)
	Float tmp8 = (_seconds * sample_frames);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(332)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(332)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,seconds_to_bytes,return )

Void Audio_obj::kill( ::snow::_system::audio::Sound _sound){
{
		HX_STACK_FRAME("snow.system.audio.Audio","kill",0x47b60462,"snow.system.audio.Audio.kill","snow/system/audio/Audio.hx",339,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_sound,"_sound")
		HX_STACK_LINE(341)
		bool tmp = (_sound == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		if ((tmp)){
			HX_STACK_LINE(341)
			return null();
		}
		HX_STACK_LINE(343)
		::haxe::ds::StringMap tmp1 = this->sound_list;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		::String tmp2 = _sound->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		tmp1->remove(tmp2);
		HX_STACK_LINE(344)
		::haxe::ds::StringMap tmp3 = this->stream_list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		::String tmp4 = _sound->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(344)
		tmp3->remove(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,kill,(void))

Void Audio_obj::suspend( ){
{
		HX_STACK_FRAME("snow.system.audio.Audio","suspend",0xf75f5d38,"snow.system.audio.Audio.suspend","snow/system/audio/Audio.hx",348,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(350)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		if ((tmp1)){
			HX_STACK_LINE(351)
			return null();
		}
		HX_STACK_LINE(354)
		::String tmp2 = HX_HCSTRING("    i / audio / suspending sound context","\x67","\xfe","\x55","\x87");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),354,HX_HCSTRING("snow.system.audio.Audio","\x2a","\x72","\xa2","\x2a"),HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(354)
		::haxe::Log_obj::trace(tmp2,tmp3);
		HX_STACK_LINE(356)
		this->active = false;
		HX_STACK_LINE(358)
		::haxe::ds::StringMap tmp4 = this->stream_list;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(358)
		Dynamic tmp5 = tmp4->iterator();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(358)
		for(::cpp::FastIterator_obj< ::snow::_system::audio::Sound > *__it = ::cpp::CreateFastIterator< ::snow::_system::audio::Sound >(tmp5);  __it->hasNext(); ){
			::snow::_system::audio::Sound sound = __it->next();
			sound->__Field(HX_HCSTRING("internal_pause","\x34","\x11","\x9a","\xa9"), hx::paccDynamic )();
		}
		HX_STACK_LINE(362)
		::snow::modules::openal::Audio tmp6 = this->module;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(362)
		tmp6->suspend();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,suspend,(void))

Void Audio_obj::resume( ){
{
		HX_STACK_FRAME("snow.system.audio.Audio","resume",0xa8164771,"snow.system.audio.Audio.resume","snow/system/audio/Audio.hx",366,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(368)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		if ((tmp)){
			HX_STACK_LINE(369)
			return null();
		}
		HX_STACK_LINE(372)
		::String tmp1 = HX_HCSTRING("    i / audio / resuming sound context","\xeb","\xdb","\x9a","\x8e");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),372,HX_HCSTRING("snow.system.audio.Audio","\x2a","\x72","\xa2","\x2a"),HX_HCSTRING("resume","\xad","\x69","\x84","\x08"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(372)
		::haxe::Log_obj::trace(tmp1,tmp2);
		HX_STACK_LINE(374)
		this->active = true;
		HX_STACK_LINE(376)
		::snow::modules::openal::Audio tmp3 = this->module;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(376)
		tmp3->resume();
		HX_STACK_LINE(378)
		::haxe::ds::StringMap tmp4 = this->stream_list;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(378)
		Dynamic tmp5 = tmp4->iterator();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(378)
		for(::cpp::FastIterator_obj< ::snow::_system::audio::Sound > *__it = ::cpp::CreateFastIterator< ::snow::_system::audio::Sound >(tmp5);  __it->hasNext(); ){
			::snow::_system::audio::Sound sound = __it->next();
			sound->__Field(HX_HCSTRING("internal_play","\x76","\x85","\x24","\x8f"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,resume,(void))

Void Audio_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.system.audio.Audio","on_event",0x2adc687e,"snow.system.audio.Audio.on_event","snow/system/audio/Audio.hx",386,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(388)
		::snow::modules::openal::Audio tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		Dynamic tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		tmp->on_event(tmp1);
		HX_STACK_LINE(390)
		bool tmp2 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		if ((tmp2)){
			HX_STACK_LINE(391)
			this->suspend();
		}
		else{
			HX_STACK_LINE(392)
			bool tmp3 = (_event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == (int)12);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(392)
			if ((tmp3)){
				HX_STACK_LINE(393)
				this->resume();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,on_event,(void))

Void Audio_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.audio.Audio","destroy",0x24965ab6,"snow.system.audio.Audio.destroy","snow/system/audio/Audio.hx",414,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(416)
		this->active = false;
		HX_STACK_LINE(418)
		::haxe::ds::StringMap tmp = this->sound_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(418)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(418)
		for(::cpp::FastIterator_obj< ::snow::_system::audio::Sound > *__it = ::cpp::CreateFastIterator< ::snow::_system::audio::Sound >(tmp1);  __it->hasNext(); ){
			::snow::_system::audio::Sound sound = __it->next();
			sound->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		}
		HX_STACK_LINE(422)
		::snow::modules::openal::Audio tmp2 = this->module;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(422)
		tmp2->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,destroy,(void))

Void Audio_obj::update( ){
{
		HX_STACK_FRAME("snow.system.audio.Audio","update",0x269763cd,"snow.system.audio.Audio.update","snow/system/audio/Audio.hx",428,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(430)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		if ((tmp1)){
			HX_STACK_LINE(431)
			return null();
		}
		HX_STACK_LINE(434)
		::haxe::ds::StringMap tmp2 = this->sound_list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(434)
		Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(434)
		for(::cpp::FastIterator_obj< ::snow::_system::audio::Sound > *__it = ::cpp::CreateFastIterator< ::snow::_system::audio::Sound >(tmp3);  __it->hasNext(); ){
			::snow::_system::audio::Sound _sound = __it->next();
			{
				HX_STACK_LINE(435)
				bool tmp4 = _sound->__Field(HX_HCSTRING("get_playing","\x85","\x6f","\x12","\x10"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(435)
				if ((tmp4)){
					HX_STACK_LINE(436)
					_sound->__Field(HX_HCSTRING("internal_update","\x0b","\x42","\xb6","\x54"), hx::paccDynamic )();
				}
			}
;
		}
		HX_STACK_LINE(440)
		::snow::modules::openal::Audio tmp4 = this->module;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(440)
		tmp4->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,update,(void))

Void Audio_obj::sound_event( ::snow::_system::audio::Sound _sound,::String _event){
{
		HX_STACK_FRAME("snow.system.audio.Audio","sound_event",0x7fc45d26,"snow.system.audio.Audio.sound_event","snow/system/audio/Audio.hx",446,0xc91259f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_sound,"_sound")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(448)
		::String tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _event);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		::String tmp1 = ::snow::_system::audio::Audio_obj::splitter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(448)
		::String tmp3 = _sound->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(448)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(448)
		::String _event_id = tmp4;		HX_STACK_VAR(_event_id,"_event_id");
		HX_STACK_LINE(452)
		::haxe::ds::StringMap tmp5 = this->handlers;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(452)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(452)
		if ((tmp6)){
			HX_STACK_LINE(452)
			return null();
		}
		HX_STACK_LINE(454)
		::haxe::ds::StringMap tmp7 = this->handlers;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(454)
		::String tmp8 = _event_id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(454)
		cpp::ArrayBase _list = ((cpp::ArrayBase)(tmp7->get(tmp8)));		HX_STACK_VAR(_list,"_list");
		HX_STACK_LINE(455)
		bool tmp9 = (_list != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(455)
		if ((tmp9)){
			HX_STACK_LINE(456)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(456)
			while((true)){
				HX_STACK_LINE(456)
				bool tmp10 = (_g < _list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(456)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(456)
				if ((tmp11)){
					HX_STACK_LINE(456)
					break;
				}
				HX_STACK_LINE(456)
				Dynamic tmp12 = _list->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(456)
				Dynamic fn = tmp12;		HX_STACK_VAR(fn,"fn");
				HX_STACK_LINE(456)
				++(_g);
				HX_STACK_LINE(457)
				::snow::_system::audio::Sound tmp13 = _sound;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(457)
				fn(tmp13).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,sound_event,(void))

::String Audio_obj::splitter;


Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(sound_list,"sound_list");
	HX_MARK_MEMBER_NAME(stream_list,"stream_list");
	HX_MARK_MEMBER_NAME(handlers,"handlers");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(sound_list,"sound_list");
	HX_VISIT_MEMBER_NAME(stream_list,"stream_list");
	HX_VISIT_MEMBER_NAME(handlers,"handlers");
}

Dynamic Audio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pan") ) { return pan_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { return pitch_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume_dyn(); }
		if (HX_FIELD_EQ(inName,"toggle") ) { return toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uncreate") ) { return uncreate_dyn(); }
		if (HX_FIELD_EQ(inName,"handlers") ) { return handlers; }
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sound_list") ) { return sound_list; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stream_list") ) { return stream_list; }
		if (HX_FIELD_EQ(inName,"sound_event") ) { return sound_event_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytes_to_seconds") ) { return bytes_to_seconds_dyn(); }
		if (HX_FIELD_EQ(inName,"seconds_to_bytes") ) { return seconds_to_bytes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"create_from_bytes") ) { return create_from_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Audio_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"splitter") ) { outValue = splitter; return true;  }
	}
	return false;
}

Dynamic Audio_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::modules::openal::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"handlers") ) { handlers=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sound_list") ) { sound_list=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stream_list") ) { stream_list=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Audio_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"splitter") ) { splitter=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("sound_list","\x0e","\xdd","\xdb","\xd0"));
	outFields->push(HX_HCSTRING("stream_list","\xbd","\xd3","\x5c","\xd7"));
	outFields->push(HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::modules::openal::Audio*/ ,(int)offsetof(Audio_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{hx::fsBool,(int)offsetof(Audio_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Audio_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Audio_obj,sound_list),HX_HCSTRING("sound_list","\x0e","\xdd","\xdb","\xd0")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Audio_obj,stream_list),HX_HCSTRING("stream_list","\xbd","\xd3","\x5c","\xd7")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Audio_obj,handlers),HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Audio_obj::splitter,HX_HCSTRING("splitter","\x47","\x37","\xb0","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("sound_list","\x0e","\xdd","\xdb","\xd0"),
	HX_HCSTRING("stream_list","\xbd","\xd3","\x5c","\xd7"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("create_from_bytes","\x39","\xf0","\x26","\x09"),
	HX_HCSTRING("uncreate","\x15","\x96","\x56","\x7e"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("handlers","\x69","\x21","\x24","\xd5"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("toggle","\x94","\xbf","\x43","\x8f"),
	HX_HCSTRING("bytes_to_seconds","\x0f","\x7f","\x12","\xef"),
	HX_HCSTRING("seconds_to_bytes","\x67","\x7c","\xbc","\xb5"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("sound_event","\x6a","\xa1","\x44","\xf0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Audio_obj::splitter,"splitter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Audio_obj::splitter,"splitter");
};

#endif

hx::Class Audio_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("splitter","\x47","\x37","\xb0","\xd3"),
	::String(null()) };

void Audio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.audio.Audio","\x2a","\x72","\xa2","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Audio_obj::__GetStatic;
	__mClass->mSetStaticField = &Audio_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Audio_obj >;
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

void Audio_obj::__boot()
{
	splitter= HX_HCSTRING(" \xe2""\x80""\xa2"" ","\x3c","\x76","\x96","\x02");
}

} // end namespace snow
} // end namespace system
} // end namespace audio
