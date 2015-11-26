#ifndef INCLUDED_snow_modules_sdl_Windowing
#define INCLUDED_snow_modules_sdl_Windowing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_core_native_window_Windowing
#include <snow/core/native/window/Windowing.h>
#endif
HX_DECLARE_CLASS4(snow,core,native,window,Windowing)
HX_DECLARE_CLASS3(snow,modules,interfaces,Windowing)
HX_DECLARE_CLASS3(snow,modules,sdl,Windowing)
HX_DECLARE_CLASS3(snow,_system,window,Windowing)
namespace snow{
namespace modules{
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  Windowing_obj : public ::snow::core::native::window::Windowing_obj{
	public:
		typedef ::snow::core::native::window::Windowing_obj super;
		typedef Windowing_obj OBJ_;
		Windowing_obj();
		Void __construct(::snow::_system::window::Windowing _system);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.sdl.Windowing")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Windowing_obj > __new(::snow::_system::window::Windowing _system);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Windowing_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Windowing","\xd2","\x6e","\x17","\x38"); }

};

} // end namespace snow
} // end namespace modules
} // end namespace sdl

#endif /* INCLUDED_snow_modules_sdl_Windowing */ 
