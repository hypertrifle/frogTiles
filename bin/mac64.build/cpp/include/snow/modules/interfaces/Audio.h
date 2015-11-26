#ifndef INCLUDED_snow_modules_interfaces_Audio
#define INCLUDED_snow_modules_interfaces_Audio

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,modules,interfaces,Audio)
HX_DECLARE_CLASS3(snow,_system,audio,Sound)
namespace snow{
namespace modules{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  Audio_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Audio_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void init( )=0;
		virtual Dynamic init_dyn()=0;
		virtual Void update( )=0;
		virtual Dynamic update_dyn()=0;
		virtual Void destroy( )=0;
		virtual Dynamic destroy_dyn()=0;
		virtual Void on_event( Dynamic event)=0;
		virtual Dynamic on_event_dyn()=0;
		virtual ::snow::api::Promise create_sound( ::String _id,::String _name,hx::Null< bool >  _streaming,Dynamic _format)=0;
		virtual Dynamic create_sound_dyn()=0;
		virtual ::snow::_system::audio::Sound create_sound_from_bytes( ::String _name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format)=0;
		virtual Dynamic create_sound_from_bytes_dyn()=0;
		virtual Void suspend( )=0;
		virtual Dynamic suspend_dyn()=0;
		virtual Void resume( )=0;
		virtual Dynamic resume_dyn()=0;
};

#define DELEGATE_snow_modules_interfaces_Audio \
virtual Void init( ) { return mDelegate->init();}  \
virtual Dynamic init_dyn() { return mDelegate->init_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual Void destroy( ) { return mDelegate->destroy();}  \
virtual Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}  \
virtual Void on_event( Dynamic event) { return mDelegate->on_event(event);}  \
virtual Dynamic on_event_dyn() { return mDelegate->on_event_dyn();}  \
virtual ::snow::api::Promise create_sound( ::String _id,::String _name,hx::Null< bool >  _streaming,Dynamic _format) { return mDelegate->create_sound(_id,_name,_streaming,_format);}  \
virtual Dynamic create_sound_dyn() { return mDelegate->create_sound_dyn();}  \
virtual ::snow::_system::audio::Sound create_sound_from_bytes( ::String _name,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format) { return mDelegate->create_sound_from_bytes(_name,_bytes,_format);}  \
virtual Dynamic create_sound_from_bytes_dyn() { return mDelegate->create_sound_from_bytes_dyn();}  \
virtual Void suspend( ) { return mDelegate->suspend();}  \
virtual Dynamic suspend_dyn() { return mDelegate->suspend_dyn();}  \
virtual Void resume( ) { return mDelegate->resume();}  \
virtual Dynamic resume_dyn() { return mDelegate->resume_dyn();}  \


template<typename IMPL>
class Audio_delegate_ : public Audio_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Audio_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_snow_modules_interfaces_Audio
};

} // end namespace snow
} // end namespace modules
} // end namespace interfaces

#endif /* INCLUDED_snow_modules_interfaces_Audio */ 
