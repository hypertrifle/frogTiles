#ifndef INCLUDED_snow_modules_openal_sound_ALSound
#define INCLUDED_snow_modules_openal_sound_ALSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(snow,modules,openal,sound,ALSound)
HX_DECLARE_CLASS4(snow,modules,openal,sound,Sound)
HX_DECLARE_CLASS3(snow,_system,audio,Sound)
namespace snow{
namespace modules{
namespace openal{
namespace sound{


class HXCPP_CLASS_ATTRIBUTES  ALSound_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALSound_obj OBJ_;
		ALSound_obj();
		Void __construct(::snow::modules::openal::sound::Sound _owner);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.openal.sound.ALSound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALSound_obj > __new(::snow::modules::openal::sound::Sound _owner);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALSound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ALSound","\xe4","\x8f","\x0c","\x06"); }

		static void __boot();
		int source;
		int buffer;
		int format;
		::snow::modules::openal::sound::Sound owner;
		virtual Void play( );
		Dynamic play_dyn();

		virtual Void loop( );
		Dynamic loop_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void internal_update( );
		Dynamic internal_update_dyn();

		virtual Void internal_play( );
		Dynamic internal_play_dyn();

		virtual Void internal_loop( );
		Dynamic internal_loop_dyn();

		virtual Void internal_stop( );
		Dynamic internal_stop_dyn();

		virtual Void internal_pause( );
		Dynamic internal_pause_dyn();

		virtual Void update_info( Dynamic info);
		Dynamic update_info_dyn();

		virtual bool set_playing( bool _playing);
		Dynamic set_playing_dyn();

		virtual bool set_paused( bool _paused);
		Dynamic set_paused_dyn();

		virtual bool set_loaded( bool _loaded);
		Dynamic set_loaded_dyn();

		virtual int get_position_bytes( );
		Dynamic get_position_bytes_dyn();

		virtual Float get_position( );
		Dynamic get_position_dyn();

		virtual Float set_pan( Float _pan);
		Dynamic set_pan_dyn();

		virtual Float set_pitch( Float _pitch);
		Dynamic set_pitch_dyn();

		virtual Float set_volume( Float _volume);
		Dynamic set_volume_dyn();

		virtual bool set_looping( bool _looping);
		Dynamic set_looping_dyn();

		virtual int set_position_bytes( int _position_bytes);
		Dynamic set_position_bytes_dyn();

		virtual Float set_position( Float _position);
		Dynamic set_position_dyn();

		static Float half_pi;
};

} // end namespace snow
} // end namespace modules
} // end namespace openal
} // end namespace sound

#endif /* INCLUDED_snow_modules_openal_sound_ALSound */ 
