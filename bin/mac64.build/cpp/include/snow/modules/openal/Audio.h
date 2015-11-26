#ifndef INCLUDED_snow_modules_openal_Audio
#define INCLUDED_snow_modules_openal_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_core_native_audio_Audio
#include <snow/core/native/audio/Audio.h>
#endif
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,audio,Audio)
HX_DECLARE_CLASS3(snow,modules,interfaces,Audio)
HX_DECLARE_CLASS3(snow,modules,openal,Audio)
HX_DECLARE_CLASS3(snow,_system,audio,Audio)
HX_DECLARE_CLASS3(snow,_system,audio,Sound)
namespace snow{
namespace modules{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public ::snow::core::native::audio::Audio_obj{
	public:
		typedef ::snow::core::native::audio::Audio_obj super;
		typedef Audio_obj OBJ_;
		Audio_obj();
		Void __construct(::snow::_system::audio::Audio _system);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.openal.Audio")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Audio_obj > __new(::snow::_system::audio::Audio _system);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Audio_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Audio","\xb6","\xe8","\xad","\xba"); }

		Dynamic device;
		Dynamic context;
		virtual Void init( );

		virtual Void destroy( );

		virtual Void suspend( );

		virtual Void resume( );

		virtual ::snow::api::Promise create_sound( ::String _id,::String _name,hx::Null< bool >  _streaming,Dynamic _format);

		virtual ::snow::_system::audio::Sound create_sound_from_bytes( ::String _name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);

};

} // end namespace snow
} // end namespace modules
} // end namespace openal

#endif /* INCLUDED_snow_modules_openal_Audio */ 
