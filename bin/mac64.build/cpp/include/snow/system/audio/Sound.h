#ifndef INCLUDED_snow_system_audio_Sound
#define INCLUDED_snow_system_audio_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,_system,audio,Audio)
HX_DECLARE_CLASS3(snow,_system,audio,Sound)
namespace snow{
namespace _system{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::snow::_system::audio::Audio _system,::String _name,hx::Null< bool >  __o__is_stream);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.system.audio.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sound_obj > __new(::snow::_system::audio::Audio _system,::String _name,hx::Null< bool >  __o__is_stream);
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

		::snow::_system::audio::Audio _system;
		::String name;
		bool playing;
		bool paused;
		bool loaded;
		Dynamic info;
		Float pitch;
		Float volume;
		Float pan;
		bool looping;
		Float position;
		Float duration;
		int length_bytes;
		int position_bytes;
		bool is_stream;
		int stream_buffer_length;
		int stream_buffer_count;
		Dynamic stream_data_get;
		Dynamic &stream_data_get_dyn() { return stream_data_get;}
		Dynamic stream_data_seek;
		Dynamic &stream_data_seek_dyn() { return stream_data_seek;}
		virtual Void emit( ::String _event);
		Dynamic emit_dyn();

		virtual Void on( ::String _event,Dynamic _handler);
		Dynamic on_dyn();

		virtual Void off( ::String _event,Dynamic _handler);
		Dynamic off_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void loop( );
		Dynamic loop_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

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

		virtual Void toggle( );
		Dynamic toggle_dyn();

		virtual bool default_stream_data_seek( int _to);
		Dynamic default_stream_data_seek_dyn();

		virtual Dynamic default_stream_data_get( int _start,int _length);
		Dynamic default_stream_data_get_dyn();

		virtual bool get_playing( );
		Dynamic get_playing_dyn();

		virtual bool get_paused( );
		Dynamic get_paused_dyn();

		virtual bool get_loaded( );
		Dynamic get_loaded_dyn();

		virtual Dynamic get_info( );
		Dynamic get_info_dyn();

		virtual Dynamic set_info( Dynamic _info);
		Dynamic set_info_dyn();

		virtual Float get_pan( );
		Dynamic get_pan_dyn();

		virtual Float get_pitch( );
		Dynamic get_pitch_dyn();

		virtual Float get_volume( );
		Dynamic get_volume_dyn();

		virtual bool get_looping( );
		Dynamic get_looping_dyn();

		virtual Float get_position( );
		Dynamic get_position_dyn();

		virtual int get_position_bytes( );
		Dynamic get_position_bytes_dyn();

		virtual int get_length_bytes( );
		Dynamic get_length_bytes_dyn();

		virtual Float get_duration( );
		Dynamic get_duration_dyn();

		virtual bool set_playing( bool _playing);
		Dynamic set_playing_dyn();

		virtual bool set_paused( bool _paused);
		Dynamic set_paused_dyn();

		virtual bool set_loaded( bool _loaded);
		Dynamic set_loaded_dyn();

		virtual Float set_pan( Float _pan);
		Dynamic set_pan_dyn();

		virtual Float set_pitch( Float _pitch);
		Dynamic set_pitch_dyn();

		virtual Float set_volume( Float _volume);
		Dynamic set_volume_dyn();

		virtual Float set_position( Float _position);
		Dynamic set_position_dyn();

		virtual bool set_looping( bool _looping);
		Dynamic set_looping_dyn();

		virtual int set_position_bytes( int _position_bytes);
		Dynamic set_position_bytes_dyn();

};

} // end namespace snow
} // end namespace system
} // end namespace audio

#endif /* INCLUDED_snow_system_audio_Sound */ 
