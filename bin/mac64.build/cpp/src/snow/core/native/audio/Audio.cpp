#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_snow_system_audio_Audio
#include <snow/system/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_system_audio_Sound
#include <snow/system/audio/Sound.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace audio{

Void Audio_obj::__construct(::snow::_system::audio::Audio _system)
{
HX_STACK_FRAME("snow.core.native.audio.Audio","new",0xb7bd7afd,"snow.core.native.audio.Audio.new","snow/core/native/audio/Audio.hx",12,0xcd4bc375)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
{
	HX_STACK_LINE(12)
	this->_system = _system;
}
;
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new(::snow::_system::audio::Audio _system)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(_system);
	return _result_;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Audio_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::modules::interfaces::Audio_obj)) return operator ::snow::modules::interfaces::Audio_obj *();
	return super::__ToInterface(inType);
}

Audio_obj::operator ::snow::modules::interfaces::Audio_obj *()
	{ return new ::snow::modules::interfaces::Audio_delegate_< Audio_obj >(this); }
Void Audio_obj::init( ){
{
		HX_STACK_FRAME("snow.core.native.audio.Audio","init",0x0ac6d9d3,"snow.core.native.audio.Audio.init","snow/core/native/audio/Audio.hx",14,0xcd4bc375)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,init,(void))

Void Audio_obj::update( ){
{
		HX_STACK_FRAME("snow.core.native.audio.Audio","update",0x5d489b8c,"snow.core.native.audio.Audio.update","snow/core/native/audio/Audio.hx",15,0xcd4bc375)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,update,(void))

Void Audio_obj::destroy( ){
{
		HX_STACK_FRAME("snow.core.native.audio.Audio","destroy",0xc8f5ea17,"snow.core.native.audio.Audio.destroy","snow/core/native/audio/Audio.hx",16,0xcd4bc375)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,destroy,(void))

Void Audio_obj::on_event( Dynamic event){
{
		HX_STACK_FRAME("snow.core.native.audio.Audio","on_event",0x5a1a4dfd,"snow.core.native.audio.Audio.on_event","snow/core/native/audio/Audio.hx",17,0xcd4bc375)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,on_event,(void))

::snow::api::Promise Audio_obj::create_sound( ::String _id,::String _name,hx::Null< bool >  __o__streaming,Dynamic _format){
bool _streaming = __o__streaming.Default(false);
	HX_STACK_FRAME("snow.core.native.audio.Audio","create_sound",0x5f3139cf,"snow.core.native.audio.Audio.create_sound","snow/core/native/audio/Audio.hx",19,0xcd4bc375)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_streaming,"_streaming")
	HX_STACK_ARG(_format,"_format")
{
		HX_STACK_LINE(20)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),20,HX_HCSTRING("snow.core.native.audio.Audio","\x8b","\x38","\x53","\xfa"),HX_HCSTRING("create_sound","\x0c","\xa0","\x74","\x6a"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		::haxe::Log_obj::trace(HX_HCSTRING("Audio: create_sound in root module. Nothing will happen.","\xea","\x8b","\x7c","\x1a"),tmp);
		HX_STACK_LINE(21)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Audio_obj,create_sound,return )

::snow::_system::audio::Sound Audio_obj::create_sound_from_bytes( ::String _name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.core.native.audio.Audio","create_sound_from_bytes",0x6059b846,"snow.core.native.audio.Audio.create_sound_from_bytes","snow/core/native/audio/Audio.hx",24,0xcd4bc375)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(25)
	Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),25,HX_HCSTRING("snow.core.native.audio.Audio","\x8b","\x38","\x53","\xfa"),HX_HCSTRING("create_sound_from_bytes","\x29","\x31","\x41","\xd6"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::haxe::Log_obj::trace(HX_HCSTRING("Audio: create_sound_from_bytes in root module. Nothing will happen.","\xe5","\x90","\x51","\x65"),tmp);
	HX_STACK_LINE(26)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,create_sound_from_bytes,return )

Void Audio_obj::suspend( ){
{
		HX_STACK_FRAME("snow.core.native.audio.Audio","suspend",0x9bbeec99,"snow.core.native.audio.Audio.suspend","snow/core/native/audio/Audio.hx",30,0xcd4bc375)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,suspend,(void))

Void Audio_obj::resume( ){
{
		HX_STACK_FRAME("snow.core.native.audio.Audio","resume",0xdec77f30,"snow.core.native.audio.Audio.resume","snow/core/native/audio/Audio.hx",32,0xcd4bc375)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,resume,(void))


Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
}

Dynamic Audio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"create_sound") ) { return create_sound_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"create_sound_from_bytes") ) { return create_sound_from_bytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Audio_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::snow::_system::audio::Audio >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Audio_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::_system::audio::Audio*/ ,(int)offsetof(Audio_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("create_sound","\x0c","\xa0","\x74","\x6a"),
	HX_HCSTRING("create_sound_from_bytes","\x29","\x31","\x41","\xd6"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
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
	__mClass->mName = HX_HCSTRING("snow.core.native.audio.Audio","\x8b","\x38","\x53","\xfa");
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

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio
