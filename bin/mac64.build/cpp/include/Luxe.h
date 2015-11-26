#ifndef INCLUDED_Luxe
#define INCLUDED_Luxe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Luxe)
HX_DECLARE_CLASS1(luxe,Audio)
HX_DECLARE_CLASS1(luxe,Camera)
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Draw)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Events)
HX_DECLARE_CLASS1(luxe,IO)
HX_DECLARE_CLASS1(luxe,Input)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Physics)
HX_DECLARE_CLASS1(luxe,Resources)
HX_DECLARE_CLASS1(luxe,Scene)
HX_DECLARE_CLASS1(luxe,Screen)
HX_DECLARE_CLASS1(luxe,Timer)
HX_DECLARE_CLASS2(luxe,utils,Utils)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS1(snow,Snow)


class HXCPP_CLASS_ATTRIBUTES  Luxe_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Luxe_obj OBJ_;
		Luxe_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Luxe")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Luxe_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Luxe_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Luxe","\xd6","\x67","\x95","\x32"); }

		static void __boot();
		static ::luxe::Core core;
		static ::luxe::Debug debug;
		static ::luxe::IO io;
		static ::luxe::Draw draw;
		static ::luxe::Audio audio;
		static ::luxe::Timer timer;
		static ::luxe::Events events;
		static ::luxe::Input input;
		static ::luxe::Scene scene;
		static ::luxe::utils::Utils utils;
		static ::luxe::Physics physics;
		static ::luxe::Camera camera;
		static ::luxe::Resources resources;
		static ::phoenix::Renderer renderer;
		static ::String version;
		static ::String build;
		static Void on( int event,Dynamic handler);
		static Dynamic on_dyn();

		static bool off( int event,Dynamic handler);
		static Dynamic off_dyn();

		static Void next( Dynamic func);
		static Dynamic next_dyn();

		static Void shutdown( );
		static Dynamic shutdown_dyn();

		static Void showConsole( bool _show);
		static Dynamic showConsole_dyn();

		static ::snow::Snow get_snow( );
		static Dynamic get_snow_dyn();

		static ::luxe::Screen get_screen( );
		static Dynamic get_screen_dyn();

		static Float get_time( );
		static Dynamic get_time_dyn();

		static Float get_timescale( );
		static Dynamic get_timescale_dyn();

		static Float get_fixed_delta( );
		static Dynamic get_fixed_delta_dyn();

		static Float get_update_rate( );
		static Dynamic get_update_rate_dyn();

		static Float get_max_frame_time( );
		static Dynamic get_max_frame_time_dyn();

		static Float get_dt( );
		static Dynamic get_dt_dyn();

		static Float get_delta_sim( );
		static Dynamic get_delta_sim_dyn();

		static Float get_last_frame_start( );
		static Dynamic get_last_frame_start_dyn();

		static Float get_current_time( );
		static Dynamic get_current_time_dyn();

		static Float get_cur_frame_start( );
		static Dynamic get_cur_frame_start_dyn();

		static Float get_alpha( );
		static Dynamic get_alpha_dyn();

		static Float set_timescale( Float value);
		static Dynamic set_timescale_dyn();

		static Float set_fixed_delta( Float value);
		static Dynamic set_fixed_delta_dyn();

		static Float set_update_rate( Float value);
		static Dynamic set_update_rate_dyn();

		static Float set_max_frame_time( Float value);
		static Dynamic set_max_frame_time_dyn();

		static Float set_dt( Float value);
		static Dynamic set_dt_dyn();

		static Float set_delta_sim( Float value);
		static Dynamic set_delta_sim_dyn();

		static Float set_last_frame_start( Float value);
		static Dynamic set_last_frame_start_dyn();

		static Float set_current_time( Float value);
		static Dynamic set_current_time_dyn();

		static Float set_cur_frame_start( Float value);
		static Dynamic set_cur_frame_start_dyn();

		static Float set_alpha( Float value);
		static Dynamic set_alpha_dyn();

};


#endif /* INCLUDED_Luxe */ 
