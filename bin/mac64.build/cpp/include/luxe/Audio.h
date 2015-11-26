#ifndef INCLUDED_luxe_Audio
#define INCLUDED_luxe_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Audio)
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,_system,audio,Sound)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Audio_obj OBJ_;
		Audio_obj();
		Void __construct(::luxe::Core _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Audio")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Audio_obj > __new(::luxe::Core _core);
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

		::luxe::Core core;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::snow::api::Promise create( ::String _id,::String _name,Dynamic _streaming);
		Dynamic create_dyn();

		virtual ::snow::_system::audio::Sound create_from_bytes( ::String _name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		Dynamic create_from_bytes_dyn();

		virtual Void uncreate( ::String _name);
		Dynamic uncreate_dyn();

		virtual Void add( ::snow::_system::audio::Sound sound);
		Dynamic add_dyn();

		virtual Void on( ::String _name,::String _event,Dynamic _handler);
		Dynamic on_dyn();

		virtual Void off( ::String _name,::String _event,Dynamic _handler);
		Dynamic off_dyn();

		virtual ::snow::_system::audio::Sound get( ::String _name);
		Dynamic get_dyn();

		virtual bool exists( ::String _name);
		Dynamic exists_dyn();

		virtual Void loop( ::String _name);
		Dynamic loop_dyn();

		virtual Void stop( ::String _name);
		Dynamic stop_dyn();

		virtual Void play( ::String _name);
		Dynamic play_dyn();

		virtual Void pause( ::String _name);
		Dynamic pause_dyn();

		virtual Void toggle( ::String _name);
		Dynamic toggle_dyn();

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

		virtual Void process( );
		Dynamic process_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Audio */ 
