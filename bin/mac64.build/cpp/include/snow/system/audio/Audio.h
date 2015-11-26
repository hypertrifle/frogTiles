#ifndef INCLUDED_snow_system_audio_Audio
#define INCLUDED_snow_system_audio_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,audio,Audio)
HX_DECLARE_CLASS3(snow,modules,interfaces,Audio)
HX_DECLARE_CLASS3(snow,modules,openal,Audio)
HX_DECLARE_CLASS3(snow,_system,audio,Audio)
HX_DECLARE_CLASS3(snow,_system,audio,Sound)
namespace snow{
namespace _system{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Audio_obj OBJ_;
		Audio_obj();
		Void __construct(::snow::Snow _app);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.system.audio.Audio")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Audio_obj > __new(::snow::Snow _app);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Audio_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Audio","\xb6","\xe8","\xad","\xba"); }

		static void __boot();
		::snow::modules::openal::Audio module;
		bool active;
		::snow::Snow app;
		::haxe::ds::StringMap sound_list;
		::haxe::ds::StringMap stream_list;
		virtual ::snow::api::Promise create( ::String _id,::String _name,Dynamic _streaming);
		Dynamic create_dyn();

		virtual ::snow::_system::audio::Sound create_from_bytes( ::String _name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		Dynamic create_from_bytes_dyn();

		virtual Void uncreate( ::String _name);
		Dynamic uncreate_dyn();

		virtual Void add( ::snow::_system::audio::Sound sound);
		Dynamic add_dyn();

		::haxe::ds::StringMap handlers;
		virtual Void on( ::String _name,::String _event,Dynamic _handler);
		Dynamic on_dyn();

		virtual Void off( ::String _name,::String _event,Dynamic _handler);
		Dynamic off_dyn();

		virtual ::snow::_system::audio::Sound get( ::String _name);
		Dynamic get_dyn();

		virtual Float volume( ::String _name,Dynamic _volume);
		Dynamic volume_dyn();

		virtual Float pan( ::String _name,Dynamic _pan);
		Dynamic pan_dyn();

		virtual Float pitch( ::String _name,Dynamic _pitch);
		Dynamic pitch_dyn();

		virtual Float position( ::String _name,Dynamic _position);
		Dynamic position_dyn();

		virtual Float duration( ::String _name);
		Dynamic duration_dyn();

		virtual Void play( ::String _name);
		Dynamic play_dyn();

		virtual Void loop( ::String _name);
		Dynamic loop_dyn();

		virtual Void pause( ::String _name);
		Dynamic pause_dyn();

		virtual Void stop( ::String _name);
		Dynamic stop_dyn();

		virtual Void toggle( ::String _name);
		Dynamic toggle_dyn();

		virtual Float bytes_to_seconds( Dynamic info,int _bytes);
		Dynamic bytes_to_seconds_dyn();

		virtual int seconds_to_bytes( Dynamic info,Float _seconds);
		Dynamic seconds_to_bytes_dyn();

		virtual Void kill( ::snow::_system::audio::Sound _sound);
		Dynamic kill_dyn();

		virtual Void suspend( );
		Dynamic suspend_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void sound_event( ::snow::_system::audio::Sound _sound,::String _event);
		Dynamic sound_event_dyn();

		static ::String splitter;
};

} // end namespace snow
} // end namespace system
} // end namespace audio

#endif /* INCLUDED_snow_system_audio_Audio */ 
