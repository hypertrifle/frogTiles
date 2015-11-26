#ifndef INCLUDED_snow_modules_openal_sound_ALStream
#define INCLUDED_snow_modules_openal_sound_ALStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_openal_sound_ALSound
#include <snow/modules/openal/sound/ALSound.h>
#endif
HX_DECLARE_CLASS4(snow,modules,openal,sound,ALSound)
HX_DECLARE_CLASS4(snow,modules,openal,sound,ALStream)
HX_DECLARE_CLASS4(snow,modules,openal,sound,Sound)
HX_DECLARE_CLASS3(snow,_system,audio,Sound)
namespace snow{
namespace modules{
namespace openal{
namespace sound{


class HXCPP_CLASS_ATTRIBUTES  ALStream_obj : public ::snow::modules::openal::sound::ALSound_obj{
	public:
		typedef ::snow::modules::openal::sound::ALSound_obj super;
		typedef ALStream_obj OBJ_;
		ALStream_obj();
		Void __construct(::snow::modules::openal::sound::Sound _owner);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.openal.sound.ALStream")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALStream_obj > __new(::snow::modules::openal::sound::Sound _owner);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALStream_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ALStream","\xcb","\xc3","\xef","\x23"); }

		static void __boot();
		Array< int > buffers;
		int buffers_left;
		virtual Void update_info( Dynamic info);

		virtual Dynamic fill_buffer( int _buffer);
		Dynamic fill_buffer_dyn();

		virtual Void init_queue( Dynamic _buffer_start);
		Dynamic init_queue_dyn();

		virtual Void flush_queue( );
		Dynamic flush_queue_dyn();

		virtual bool update_stream( );
		Dynamic update_stream_dyn();

		virtual Void internal_update( );

		virtual Void internal_pause( );

		virtual Void internal_play( );

		virtual Void pause( );

		virtual Void stop( );

		virtual Void destroy( );

		Float current_time;
		virtual int get_position_bytes( );

		virtual Float get_position( );

		virtual int set_position_bytes( int _position_bytes);

		virtual Float set_position( Float _position);

		virtual bool set_looping( bool _looping);

		static Float half_pi;
};

} // end namespace snow
} // end namespace modules
} // end namespace openal
} // end namespace sound

#endif /* INCLUDED_snow_modules_openal_sound_ALStream */ 
