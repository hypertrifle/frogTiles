#ifndef INCLUDED_snow_core_native_input_Input
#define INCLUDED_snow_core_native_input_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_interfaces_Input
#include <snow/modules/interfaces/Input.h>
#endif
HX_DECLARE_CLASS4(snow,core,native,input,Input)
HX_DECLARE_CLASS3(snow,modules,interfaces,Input)
HX_DECLARE_CLASS3(snow,_system,input,Input)
HX_DECLARE_CLASS3(snow,_system,window,Window)
namespace snow{
namespace core{
namespace native{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  Input_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct(::snow::_system::input::Input _system);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.input.Input")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Input_obj > __new(::snow::_system::input::Input _system);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Input_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::snow::modules::interfaces::Input_obj *();
		::String __ToString() const { return HX_HCSTRING("Input","\xea","\x33","\x4b","\x51"); }

		static void __boot();
		::snow::_system::input::Input _system;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual Void listen( ::snow::_system::window::Window window);
		Dynamic listen_dyn();

		virtual Void unlisten( ::snow::_system::window::Window window);
		Dynamic unlisten_dyn();

		virtual Void text_input_start( );
		Dynamic text_input_start_dyn();

		virtual Void text_input_stop( );
		Dynamic text_input_stop_dyn();

		virtual Void text_input_rect( int x,int y,int w,int h);
		Dynamic text_input_rect_dyn();

		static Dynamic snow_input_text_start;
		static Dynamic &snow_input_text_start_dyn() { return snow_input_text_start;}
		static Dynamic snow_input_text_stop;
		static Dynamic &snow_input_text_stop_dyn() { return snow_input_text_stop;}
		static Dynamic snow_input_text_rect;
		static Dynamic &snow_input_text_rect_dyn() { return snow_input_text_rect;}
};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace input

#endif /* INCLUDED_snow_core_native_input_Input */ 
