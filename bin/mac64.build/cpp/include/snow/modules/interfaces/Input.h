#ifndef INCLUDED_snow_modules_interfaces_Input
#define INCLUDED_snow_modules_interfaces_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,modules,interfaces,Input)
HX_DECLARE_CLASS3(snow,_system,window,Window)
namespace snow{
namespace modules{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  Input_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Input_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void init( )=0;
		virtual Dynamic init_dyn()=0;
		virtual Void update( )=0;
		virtual Dynamic update_dyn()=0;
		virtual Void destroy( )=0;
		virtual Dynamic destroy_dyn()=0;
		virtual Void on_event( Dynamic event)=0;
		virtual Dynamic on_event_dyn()=0;
		virtual Void listen( ::snow::_system::window::Window window)=0;
		virtual Dynamic listen_dyn()=0;
		virtual Void unlisten( ::snow::_system::window::Window window)=0;
		virtual Dynamic unlisten_dyn()=0;
};

#define DELEGATE_snow_modules_interfaces_Input \
virtual Void init( ) { return mDelegate->init();}  \
virtual Dynamic init_dyn() { return mDelegate->init_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual Void destroy( ) { return mDelegate->destroy();}  \
virtual Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}  \
virtual Void on_event( Dynamic event) { return mDelegate->on_event(event);}  \
virtual Dynamic on_event_dyn() { return mDelegate->on_event_dyn();}  \
virtual Void listen( ::snow::_system::window::Window window) { return mDelegate->listen(window);}  \
virtual Dynamic listen_dyn() { return mDelegate->listen_dyn();}  \
virtual Void unlisten( ::snow::_system::window::Window window) { return mDelegate->unlisten(window);}  \
virtual Dynamic unlisten_dyn() { return mDelegate->unlisten_dyn();}  \


template<typename IMPL>
class Input_delegate_ : public Input_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Input_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_snow_modules_interfaces_Input
};

} // end namespace snow
} // end namespace modules
} // end namespace interfaces

#endif /* INCLUDED_snow_modules_interfaces_Input */ 
