#ifndef INCLUDED_snow_modules_sdl_Input
#define INCLUDED_snow_modules_sdl_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_core_native_input_Input
#include <snow/core/native/input/Input.h>
#endif
HX_DECLARE_CLASS4(snow,core,native,input,Input)
HX_DECLARE_CLASS3(snow,modules,interfaces,Input)
HX_DECLARE_CLASS3(snow,modules,sdl,Input)
HX_DECLARE_CLASS3(snow,_system,input,Input)
namespace snow{
namespace modules{
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  Input_obj : public ::snow::core::native::input::Input_obj{
	public:
		typedef ::snow::core::native::input::Input_obj super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct(::snow::_system::input::Input _system);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.sdl.Input")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Input_obj > __new(::snow::_system::input::Input _system);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Input_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Input","\xea","\x33","\x4b","\x51"); }

		virtual Void on_event( Dynamic event);

		virtual Void handle_controller_ev( Dynamic _input);
		Dynamic handle_controller_ev_dyn();

		virtual Void handle_joystick_ev( Dynamic _input);
		Dynamic handle_joystick_ev_dyn();

		virtual Void handle_mouse_ev( Dynamic _input);
		Dynamic handle_mouse_ev_dyn();

		virtual Void handle_touch_ev( Dynamic _input);
		Dynamic handle_touch_ev_dyn();

		virtual Void handle_key_ev( Dynamic _input);
		Dynamic handle_key_ev_dyn();

		virtual Dynamic get_key_mod_state( Dynamic _event);
		Dynamic get_key_mod_state_dyn();

};

} // end namespace snow
} // end namespace modules
} // end namespace sdl

#endif /* INCLUDED_snow_modules_sdl_Input */ 
