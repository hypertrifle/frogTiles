#ifndef INCLUDED_snow_modules_interfaces_IO
#define INCLUDED_snow_modules_interfaces_IO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,modules,interfaces,IO)
namespace snow{
namespace modules{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IO_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IO_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void init( )=0;
		virtual Dynamic init_dyn()=0;
		virtual Void update( )=0;
		virtual Dynamic update_dyn()=0;
		virtual Void destroy( )=0;
		virtual Dynamic destroy_dyn()=0;
		virtual Void on_event( Dynamic event)=0;
		virtual Dynamic on_event_dyn()=0;
		virtual Void url_open( ::String _url)=0;
		virtual Dynamic url_open_dyn()=0;
		virtual ::snow::api::Promise data_load( ::String _path,Dynamic _options)=0;
		virtual Dynamic data_load_dyn()=0;
		virtual bool data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options)=0;
		virtual Dynamic data_save_dyn()=0;
};

#define DELEGATE_snow_modules_interfaces_IO \
virtual Void init( ) { return mDelegate->init();}  \
virtual Dynamic init_dyn() { return mDelegate->init_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual Void destroy( ) { return mDelegate->destroy();}  \
virtual Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}  \
virtual Void on_event( Dynamic event) { return mDelegate->on_event(event);}  \
virtual Dynamic on_event_dyn() { return mDelegate->on_event_dyn();}  \
virtual Void url_open( ::String _url) { return mDelegate->url_open(_url);}  \
virtual Dynamic url_open_dyn() { return mDelegate->url_open_dyn();}  \
virtual ::snow::api::Promise data_load( ::String _path,Dynamic _options) { return mDelegate->data_load(_path,_options);}  \
virtual Dynamic data_load_dyn() { return mDelegate->data_load_dyn();}  \
virtual bool data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options) { return mDelegate->data_save(_path,_data,_options);}  \
virtual Dynamic data_save_dyn() { return mDelegate->data_save_dyn();}  \


template<typename IMPL>
class IO_delegate_ : public IO_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IO_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_snow_modules_interfaces_IO
};

} // end namespace snow
} // end namespace modules
} // end namespace interfaces

#endif /* INCLUDED_snow_modules_interfaces_IO */ 
