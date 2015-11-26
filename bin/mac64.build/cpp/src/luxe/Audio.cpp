#include <hxcpp.h>

#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_system_audio_Audio
#include <snow/system/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_system_audio_Sound
#include <snow/system/audio/Sound.h>
#endif
namespace luxe{

Void Audio_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.Audio","new",0x2e60e1f0,"luxe.Audio.new","luxe/Audio.hx",13,0xbb0b1481)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(13)
	this->core = _core;
}
;
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Audio_obj::init( ){
{
		HX_STACK_FRAME("luxe.Audio","init",0x631d8780,"luxe.Audio.init","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,init,(void))

Void Audio_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.Audio","destroy",0x96a3468a,"luxe.Audio.destroy","luxe/Log.hx",138,0xe5312153)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,destroy,(void))

::snow::api::Promise Audio_obj::create( ::String _id,::String __o__name,Dynamic __o__streaming){
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Dynamic _streaming = __o__streaming.Default(false);
	HX_STACK_FRAME("luxe.Audio","create",0x6ff1af6c,"luxe.Audio.create","luxe/Audio.hx",32,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_streaming,"_streaming")
{
		HX_STACK_LINE(33)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::String tmp2 = _id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		Dynamic tmp4 = _streaming;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		::snow::api::Promise tmp5 = tmp1->__Field(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"), hx::paccDynamic )(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,create,return )

::snow::_system::audio::Sound Audio_obj::create_from_bytes( ::String __o__name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("luxe.Audio","create_from_bytes",0x57199dc9,"luxe.Audio.create_from_bytes","luxe/Audio.hx",38,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
{
		HX_STACK_LINE(39)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::snow::api::buffers::ArrayBufferView tmp3 = _bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		Dynamic tmp4 = _format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		::snow::_system::audio::Sound tmp5 = tmp1->__Field(HX_HCSTRING("create_from_bytes","\x39","\xf0","\x26","\x09"), hx::paccDynamic )(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,create_from_bytes,return )

Void Audio_obj::uncreate( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","uncreate",0xe5afda85,"luxe.Audio.uncreate","luxe/Audio.hx",46,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(47)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		tmp1->__Field(HX_HCSTRING("uncreate","\x15","\x96","\x56","\x7e"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(47)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,uncreate,(void))

Void Audio_obj::add( ::snow::_system::audio::Sound sound){
{
		HX_STACK_FRAME("luxe.Audio","add",0x2e5703b1,"luxe.Audio.add","luxe/Audio.hx",53,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sound,"sound")
		HX_STACK_LINE(54)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		::snow::_system::audio::Sound tmp2 = sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(54)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,add,(void))

Void Audio_obj::on( ::String _name,::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("luxe.Audio","on",0xe819b18f,"luxe.Audio.on","luxe/Audio.hx",59,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(60)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		::String tmp3 = _event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		Dynamic tmp4 = _handler;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		tmp1->__Field(HX_HCSTRING("on","\x1f","\x61","\x00","\x00"), hx::paccDynamic )(tmp2,tmp3,tmp4);
		HX_STACK_LINE(60)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,on,(void))

Void Audio_obj::off( ::String _name,::String _event,Dynamic _handler){
{
		HX_STACK_FRAME("luxe.Audio","off",0x2e61a4ff,"luxe.Audio.off","luxe/Audio.hx",64,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_event,"_event")
		HX_STACK_ARG(_handler,"_handler")
		HX_STACK_LINE(65)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		::String tmp3 = _event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		Dynamic tmp4 = _handler;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		tmp1->__Field(HX_HCSTRING("off","\x6f","\x93","\x54","\x00"), hx::paccDynamic )(tmp2,tmp3,tmp4);
		HX_STACK_LINE(65)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,off,(void))

::snow::_system::audio::Sound Audio_obj::get( ::String _name){
	HX_STACK_FRAME("luxe.Audio","get",0x2e5b9226,"luxe.Audio.get","luxe/Audio.hx",73,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(74)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	::snow::_system::audio::Sound tmp3 = tmp1->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,get,return )

bool Audio_obj::exists( ::String _name){
	HX_STACK_FRAME("luxe.Audio","exists",0xb3c2664c,"luxe.Audio.exists","luxe/Audio.hx",82,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(83)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::snow::_system::audio::Sound tmp1 = this->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,exists,return )

Void Audio_obj::loop( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","loop",0x6519f2d4,"luxe.Audio.loop","luxe/Audio.hx",92,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(93)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		tmp1->__Field(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(93)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,loop,(void))

Void Audio_obj::stop( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","stop",0x69be3c72,"luxe.Audio.stop","luxe/Audio.hx",101,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(102)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		tmp1->__Field(HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(102)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,stop,(void))

Void Audio_obj::play( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","play",0x67bc7a64,"luxe.Audio.play","luxe/Audio.hx",110,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(111)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		tmp1->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(111)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,play,(void))

Void Audio_obj::pause( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","pause",0x55f86c86,"luxe.Audio.pause","luxe/Audio.hx",119,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(120)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		tmp1->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(120)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pause,(void))

Void Audio_obj::toggle( ::String _name){
{
		HX_STACK_FRAME("luxe.Audio","toggle",0x83260804,"luxe.Audio.toggle","luxe/Audio.hx",125,0xbb0b1481)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_LINE(126)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		tmp1->__Field(HX_HCSTRING("toggle","\x94","\xbf","\x43","\x8f"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(126)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,toggle,(void))

Float Audio_obj::volume( ::String _name,Dynamic _volume){
	HX_STACK_FRAME("luxe.Audio","volume",0x5335724a,"luxe.Audio.volume","luxe/Audio.hx",135,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_volume,"_volume")
	HX_STACK_LINE(136)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	Dynamic tmp3 = _volume;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	Float tmp4 = tmp1->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,volume,return )

Float Audio_obj::pan( ::String _name,Dynamic _pan){
	HX_STACK_FRAME("luxe.Audio","pan",0x2e6262ed,"luxe.Audio.pan","luxe/Audio.hx",145,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_pan,"_pan")
	HX_STACK_LINE(146)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	Dynamic tmp3 = _pan;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(146)
	Float tmp4 = tmp1->__Field(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(146)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pan,return )

Float Audio_obj::pitch( ::String _name,Dynamic _pitch){
	HX_STACK_FRAME("luxe.Audio","pitch",0x5b415150,"luxe.Audio.pitch","luxe/Audio.hx",155,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_pitch,"_pitch")
	HX_STACK_LINE(156)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	Dynamic tmp3 = _pitch;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	Float tmp4 = tmp1->__Field(HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pitch,return )

Float Audio_obj::position( ::String _name,Dynamic _position){
	HX_STACK_FRAME("luxe.Audio","position",0x3253e519,"luxe.Audio.position","luxe/Audio.hx",164,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_position,"_position")
	HX_STACK_LINE(165)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	Dynamic tmp3 = _position;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(165)
	Float tmp4 = tmp1->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(165)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,position,return )

Float Audio_obj::duration( ::String _name){
	HX_STACK_FRAME("luxe.Audio","duration",0x7be753c4,"luxe.Audio.duration","luxe/Audio.hx",172,0xbb0b1481)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(173)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	::snow::_system::audio::Audio tmp1 = tmp->app->audio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	::String tmp2 = _name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	Float tmp3 = tmp1->__Field(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,duration,return )

Void Audio_obj::process( ){
{
		HX_STACK_FRAME("luxe.Audio","process",0x6367bbff,"luxe.Audio.process","luxe/Audio.hx",176,0xbb0b1481)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,process,(void))


Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
}

Dynamic Audio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pan") ) { return pan_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"pitch") ) { return pitch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"toggle") ) { return toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return volume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uncreate") ) { return uncreate_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position_dyn(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"create_from_bytes") ) { return create_from_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Audio_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Audio_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Audio_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("create_from_bytes","\x39","\xf0","\x26","\x09"),
	HX_HCSTRING("uncreate","\x15","\x96","\x56","\x7e"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("toggle","\x94","\xbf","\x43","\x8f"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#endif

hx::Class Audio_obj::__mClass;

void Audio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Audio","\xfe","\x69","\x75","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Audio_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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

} // end namespace luxe
