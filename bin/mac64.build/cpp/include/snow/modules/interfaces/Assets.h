#ifndef INCLUDED_snow_modules_interfaces_Assets
#define INCLUDED_snow_modules_interfaces_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,modules,interfaces,Assets)
namespace snow{
namespace modules{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Assets_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void init( )=0;
		virtual Dynamic init_dyn()=0;
		virtual Void update( )=0;
		virtual Dynamic update_dyn()=0;
		virtual Void destroy( )=0;
		virtual Dynamic destroy_dyn()=0;
		virtual Void on_event( Dynamic event)=0;
		virtual Dynamic on_event_dyn()=0;
		virtual ::snow::api::Promise image_load_info( ::String _path,Dynamic _components)=0;
		virtual Dynamic image_load_info_dyn()=0;
		virtual ::snow::api::Promise image_info_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _components)=0;
		virtual Dynamic image_info_from_bytes_dyn()=0;
		virtual Dynamic image_info_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels)=0;
		virtual Dynamic image_info_from_pixels_dyn()=0;
};

#define DELEGATE_snow_modules_interfaces_Assets \
virtual Void init( ) { return mDelegate->init();}  \
virtual Dynamic init_dyn() { return mDelegate->init_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual Void destroy( ) { return mDelegate->destroy();}  \
virtual Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}  \
virtual Void on_event( Dynamic event) { return mDelegate->on_event(event);}  \
virtual Dynamic on_event_dyn() { return mDelegate->on_event_dyn();}  \
virtual ::snow::api::Promise image_load_info( ::String _path,Dynamic _components) { return mDelegate->image_load_info(_path,_components);}  \
virtual Dynamic image_load_info_dyn() { return mDelegate->image_load_info_dyn();}  \
virtual ::snow::api::Promise image_info_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _components) { return mDelegate->image_info_from_bytes(_path,_bytes,_components);}  \
virtual Dynamic image_info_from_bytes_dyn() { return mDelegate->image_info_from_bytes_dyn();}  \
virtual Dynamic image_info_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels) { return mDelegate->image_info_from_pixels(_id,_width,_height,_pixels);}  \
virtual Dynamic image_info_from_pixels_dyn() { return mDelegate->image_info_from_pixels_dyn();}  \


template<typename IMPL>
class Assets_delegate_ : public Assets_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Assets_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_snow_modules_interfaces_Assets
};

} // end namespace snow
} // end namespace modules
} // end namespace interfaces

#endif /* INCLUDED_snow_modules_interfaces_Assets */ 
