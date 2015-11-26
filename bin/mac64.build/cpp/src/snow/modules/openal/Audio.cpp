#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
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
#ifndef INCLUDED_snow_core_native_assets_Assets
#include <snow/core/native/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_Audio
#include <snow/core/native/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Assets
#include <snow/modules/interfaces/Assets.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALC
#include <snow/modules/openal/ALC.h>
#endif
#ifndef INCLUDED_snow_modules_openal_Audio
#include <snow/modules/openal/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_openal_sound_Sound
#include <snow/modules/openal/sound/Sound.h>
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
namespace modules{
namespace openal{

Void Audio_obj::__construct(::snow::_system::audio::Audio _system)
{
HX_STACK_FRAME("snow.modules.openal.Audio","new",0x5594ed81,"snow.modules.openal.Audio.new","snow/modules/openal/Audio.hx",20,0x042b6f4e)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
{
	HX_STACK_LINE(20)
	::snow::_system::audio::Audio tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	super::__construct(tmp);
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

Void Audio_obj::init( ){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","init",0x89739acf,"snow.modules.openal.Audio.init","snow/modules/openal/Audio.hx",25,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		Dynamic tmp = ::snow::modules::openal::ALC_obj::openDevice(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		this->device = tmp;
		HX_STACK_LINE(31)
		Dynamic tmp1 = this->device;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		if ((tmp2)){
			HX_STACK_LINE(32)
			::String tmp3 = HX_HCSTRING("    i / audio / failed / didn't create device!","\x7a","\xf2","\x93","\x9c");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Audio.hx","\xc8","\x2f","\x63","\x41"),32,HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac"),HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			::haxe::Log_obj::trace(tmp3,tmp4);
			HX_STACK_LINE(33)
			return null();
		}
		HX_STACK_LINE(38)
		Dynamic tmp3 = this->device;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		Dynamic tmp4 = ::snow::modules::openal::ALC_obj::createContext(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		this->context = tmp4;
		HX_STACK_LINE(42)
		Dynamic tmp5 = this->context;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		::snow::modules::openal::ALC_obj::makeContextCurrent(tmp5);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


Void Audio_obj::destroy( ){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","destroy",0x4d52ee9b,"snow.modules.openal.Audio.destroy","snow/modules/openal/Audio.hx",48,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::snow::modules::openal::ALC_obj::makeContextCurrent(null());
		HX_STACK_LINE(51)
		Dynamic tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::snow::modules::openal::ALC_obj::destroyContext(tmp);
		HX_STACK_LINE(52)
		Dynamic tmp1 = this->device;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::snow::modules::openal::ALC_obj::closeDevice(tmp1);
		HX_STACK_LINE(138)
		Dynamic();
	}
return null();
}


Void Audio_obj::suspend( ){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","suspend",0x201bf11d,"snow.modules.openal.Audio.suspend","snow/modules/openal/Audio.hx",58,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		Dynamic tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		::snow::modules::openal::ALC_obj::suspendContext(tmp);
		HX_STACK_LINE(63)
		::snow::modules::openal::ALC_obj::makeContextCurrent(null());
	}
return null();
}


Void Audio_obj::resume( ){
{
		HX_STACK_FRAME("snow.modules.openal.Audio","resume",0xf2e3772c,"snow.modules.openal.Audio.resume","snow/modules/openal/Audio.hx",67,0x042b6f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		Dynamic tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		::snow::modules::openal::ALC_obj::processContext(tmp);
		HX_STACK_LINE(72)
		Dynamic tmp1 = this->context;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		::snow::modules::openal::ALC_obj::makeContextCurrent(tmp1);
	}
return null();
}


::snow::api::Promise Audio_obj::create_sound( ::String _id,::String _name,hx::Null< bool >  __o__streaming,Dynamic _format){
bool _streaming = __o__streaming.Default(false);
	HX_STACK_FRAME("snow.modules.openal.Audio","create_sound",0x1e4156cb,"snow.modules.openal.Audio.create_sound","snow/modules/openal/Audio.hx",76,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_streaming,"_streaming")
	HX_STACK_ARG(_format,"_format")
{
		HX_STACK_LINE(78)
		::snow::_system::audio::Audio tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		bool tmp2 = _streaming;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		::snow::modules::openal::sound::Sound tmp3 = ::snow::modules::openal::sound::Sound_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		::snow::modules::openal::sound::Sound sound = tmp3;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(79)
		::snow::_system::audio::Audio tmp4 = this->_system;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		::snow::_system::assets::Assets tmp5 = tmp4->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		::snow::_system::assets::Assets assets = tmp5;		HX_STACK_VAR(assets,"assets");
		HX_STACK_LINE(83)
		::String tmp6 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(assets->__Field(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"), hx::paccDynamic )).Add(_id));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		bool tmp7 = _streaming;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		Dynamic tmp9 = _format;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		Dynamic tmp10 = assets->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("audio_load_info","\x7e","\xcc","\x2c","\x60"), hx::paccDynamic )(tmp6,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		sound->set_info(tmp10);
		HX_STACK_LINE(85)
		::snow::modules::openal::sound::Sound tmp11 = sound;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		::snow::api::Promise tmp12 = ::snow::api::Promise_obj::resolve(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(85)
		return tmp12;
	}
}


::snow::_system::audio::Sound Audio_obj::create_sound_from_bytes( ::String _name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format){
	HX_STACK_FRAME("snow.modules.openal.Audio","create_sound_from_bytes",0x83b704ca,"snow.modules.openal.Audio.create_sound_from_bytes","snow/modules/openal/Audio.hx",89,0x042b6f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_ARG(_format,"_format")
	HX_STACK_LINE(91)
	::snow::_system::audio::Audio tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	::snow::modules::openal::sound::Sound tmp2 = ::snow::modules::openal::sound::Sound_obj::__new(tmp,tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	::snow::modules::openal::sound::Sound sound = tmp2;		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(92)
	::snow::_system::audio::Audio tmp3 = this->_system;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	::snow::_system::assets::Assets tmp4 = tmp3->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("assets","\x83","\x48","\x03","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	::snow::_system::assets::Assets assets = tmp4;		HX_STACK_VAR(assets,"assets");
	HX_STACK_LINE(94)
	::snow::api::buffers::ArrayBufferView tmp5 = _bytes;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(94)
	Dynamic tmp6 = _format;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(94)
	Dynamic tmp7 = assets->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("audio_info_from_bytes","\x5e","\xd7","\xba","\x7d"), hx::paccDynamic )(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(94)
	sound->set_info(tmp7);
	HX_STACK_LINE(96)
	::snow::modules::openal::sound::Sound tmp8 = sound;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(96)
	return tmp8;
}



Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(context,"context");
	::snow::core::native::audio::Audio_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(context,"context");
	::snow::core::native::audio::Audio_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Audio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
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
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Audio_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Audio_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Audio_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("create_sound","\x0c","\xa0","\x74","\x6a"),
	HX_HCSTRING("create_sound_from_bytes","\x29","\x31","\x41","\xd6"),
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
	__mClass->mName = HX_HCSTRING("snow.modules.openal.Audio","\x0f","\x19","\x56","\xac");
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
} // end namespace modules
} // end namespace openal
