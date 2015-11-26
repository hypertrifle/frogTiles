#ifndef INCLUDED_luxe_Core
#define INCLUDED_luxe_Core

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
HX_DECLARE_CLASS1(luxe,Audio)
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Draw)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Events)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(luxe,IO)
HX_DECLARE_CLASS1(luxe,Input)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Parcel)
HX_DECLARE_CLASS1(luxe,Physics)
HX_DECLARE_CLASS1(luxe,Resources)
HX_DECLARE_CLASS1(luxe,Scene)
HX_DECLARE_CLASS1(luxe,Screen)
HX_DECLARE_CLASS1(luxe,Timer)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS3(snow,_system,assets,Asset)
HX_DECLARE_CLASS3(snow,_system,assets,AssetImage)
HX_DECLARE_CLASS3(snow,_system,window,Window)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Core_obj : public ::snow::App_obj{
	public:
		typedef ::snow::App_obj super;
		typedef Core_obj OBJ_;
		Core_obj();
		Void __construct(::luxe::Game _game,Dynamic _config);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Core")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Core_obj > __new(::luxe::Game _game,Dynamic _config);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Core_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Core","\x7f","\xe9","\x9d","\x2c"); }

		::luxe::Game game;
		Dynamic appconfig;
		bool console_visible;
		bool headless;
		::luxe::Emitter emitter;
		::luxe::Debug debug;
		::luxe::IO io;
		::luxe::Draw draw;
		::luxe::Timer timer;
		::luxe::Events events;
		::luxe::Input input;
		::luxe::Audio audio;
		::luxe::Scene scene;
		::luxe::Resources resources;
		::phoenix::Renderer renderer;
		::luxe::Screen screen;
		::luxe::Physics physics;
		bool shutting_down;
		bool has_shutdown;
		bool inited;
		Dynamic init_config;
		virtual Void ready( );

		virtual Void ondestroy( );

		virtual Void init( ::snow::_system::assets::AssetImage asset);
		Dynamic init_dyn();

		virtual Void internal_pre_ready( );
		Dynamic internal_pre_ready_dyn();

		virtual Void internal_ready( ::luxe::Parcel _);
		Dynamic internal_ready_dyn();

		virtual Void shutdown( );
		Dynamic shutdown_dyn();

		virtual Void on( int event,Dynamic handler);
		Dynamic on_dyn();

		virtual bool off( int event,Dynamic handler);
		Dynamic off_dyn();

		virtual Void emit( int event,Dynamic data);
		Dynamic emit_dyn();

		virtual Void ontickstart( );

		virtual Void ontickend( );

		virtual Void onevent( Dynamic event);

		virtual Void update( Float dt);

		virtual Void window_event( Dynamic _event);
		Dynamic window_event_dyn();

		virtual Void render( ::snow::_system::window::Window window);
		Dynamic render_dyn();

		virtual Void show_console( hx::Null< bool >  _show);
		Dynamic show_console_dyn();

		virtual Void onkeydown( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id);

		virtual Void onkeyup( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id);

		virtual Void ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id);

		virtual Void oninputdown( ::String name,Dynamic event);
		Dynamic oninputdown_dyn();

		virtual Void oninputup( ::String name,Dynamic event);
		Dynamic oninputup_dyn();

		virtual Void onmousedown( int x,int y,int button,Float timestamp,int window_id);

		virtual Void onmouseup( int x,int y,int button,Float timestamp,int window_id);

		virtual Void onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id);

		virtual Void onmousewheel( int x,int y,Float timestamp,int window_id);

		::phoenix::Vector _touch_pos;
		virtual Void ontouchdown( Float x,Float y,int touch_id,Float timestamp);

		virtual Void ontouchup( Float x,Float y,int touch_id,Float timestamp);

		virtual Void ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp);

		virtual Void ongamepadaxis( int gamepad,int axis,Float value,Float timestamp);

		virtual Void ongamepaddown( int gamepad,int button,Float value,Float timestamp);

		virtual Void ongamepadup( int gamepad,int button,Float value,Float timestamp);

		virtual Void ongamepaddevice( int gamepad,::String id,int type,Float timestamp);

		virtual Dynamic config( Dynamic config);

		virtual ::String runtime_info( );
		Dynamic runtime_info_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Core */ 
