#ifndef INCLUDED_snow_modules_openal_sound_Sound
#define INCLUDED_snow_modules_openal_sound_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_system_audio_Sound
#include <snow/system/audio/Sound.h>
#endif
HX_DECLARE_CLASS4(snow,modules,openal,sound,ALSound)
HX_DECLARE_CLASS4(snow,modules,openal,sound,Sound)
HX_DECLARE_CLASS3(snow,_system,audio,Audio)
HX_DECLARE_CLASS3(snow,_system,audio,Sound)
namespace snow{
namespace modules{
namespace openal{
namespace sound{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::snow::_system::audio::Sound_obj{
	public:
		typedef ::snow::_system::audio::Sound_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::snow::_system::audio::Audio _system,::String _name,Dynamic __o__is_stream);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.openal.sound.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sound_obj > __new(::snow::_system::audio::Audio _system,::String _name,Dynamic __o__is_stream);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		::snow::modules::openal::sound::ALSound instance;
		virtual Void play( );

		virtual Void loop( );

		virtual Void stop( );

		virtual Void pause( );

		virtual Void destroy( );

		virtual Void internal_update( );

		virtual Void internal_play( );

		virtual Void internal_loop( );

		virtual Void internal_stop( );

		virtual Void internal_pause( );

		virtual Void onended( );
		Dynamic onended_dyn();

		virtual Dynamic set_info( Dynamic _info);

		virtual bool get_playing( );

		virtual bool get_paused( );

		virtual bool get_loaded( );

		virtual Dynamic get_info( );

		virtual Float get_pan( );

		virtual Float get_pitch( );

		virtual Float get_volume( );

		virtual bool get_looping( );

		virtual int get_length_bytes( );

		virtual Float get_position( );

		virtual int get_position_bytes( );

		virtual Float get_duration( );

		virtual bool set_playing( bool _playing);

		virtual bool set_paused( bool _paused);

		virtual bool set_loaded( bool _loaded);

		virtual Float set_pan( Float _pan);

		virtual Float set_pitch( Float _pitch);

		virtual Float set_volume( Float _volume);

		virtual Float set_position( Float _position);

		virtual bool set_looping( bool _looping);

		virtual int set_position_bytes( int _position_bytes);

};

} // end namespace snow
} // end namespace modules
} // end namespace openal
} // end namespace sound

#endif /* INCLUDED_snow_modules_openal_sound_Sound */ 
