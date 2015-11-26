#ifndef INCLUDED_snow_core_native_audio_Audio
#define INCLUDED_snow_core_native_audio_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,audio,Audio)
HX_DECLARE_CLASS3(snow,modules,interfaces,Audio)
HX_DECLARE_CLASS3(snow,_system,audio,Audio)
HX_DECLARE_CLASS3(snow,_system,audio,Sound)
namespace snow{
namespace core{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Audio_obj OBJ_;
		Audio_obj();
		Void __construct(::snow::_system::audio::Audio _system);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.audio.Audio")
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
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::snow::modules::interfaces::Audio_obj *();
		::String __ToString() const { return HX_HCSTRING("Audio","\xb6","\xe8","\xad","\xba"); }

		::snow::_system::audio::Audio _system;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void on_event( Dynamic event);
		Dynamic on_event_dyn();

		virtual ::snow::api::Promise create_sound( ::String _id,::String _name,hx::Null< bool >  _streaming,Dynamic _format);
		Dynamic create_sound_dyn();

		virtual ::snow::_system::audio::Sound create_sound_from_bytes( ::String _name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		Dynamic create_sound_from_bytes_dyn();

		virtual Void suspend( );
		Dynamic suspend_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_core_native_audio_Audio */ 
