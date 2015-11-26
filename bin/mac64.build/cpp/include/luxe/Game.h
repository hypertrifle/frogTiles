#ifndef INCLUDED_luxe_Game
#define INCLUDED_luxe_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(snow,App)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public ::luxe::Emitter_obj{
	public:
		typedef ::luxe::Emitter_obj super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Game")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Game_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Game","\x12","\x20","\x38","\x2f"); }

		::luxe::Core app;
		virtual Dynamic config( Dynamic _config);
		Dynamic config_dyn();

		virtual Void ready( );
		Dynamic ready_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void onevent( Dynamic event);
		Dynamic onevent_dyn();

		virtual Void ondestroy( );
		Dynamic ondestroy_dyn();

		virtual Void onprerender( );
		Dynamic onprerender_dyn();

		virtual Void onrender( );
		Dynamic onrender_dyn();

		virtual Void onpostrender( );
		Dynamic onpostrender_dyn();

		virtual Void oninputdown( ::String _name,Dynamic e);
		Dynamic oninputdown_dyn();

		virtual Void oninputup( ::String _name,Dynamic e);
		Dynamic oninputup_dyn();

		virtual Void onmousedown( Dynamic event);
		Dynamic onmousedown_dyn();

		virtual Void onmouseup( Dynamic event);
		Dynamic onmouseup_dyn();

		virtual Void onmousewheel( Dynamic event);
		Dynamic onmousewheel_dyn();

		virtual Void onmousemove( Dynamic event);
		Dynamic onmousemove_dyn();

		virtual Void onkeydown( Dynamic event);
		Dynamic onkeydown_dyn();

		virtual Void onkeyup( Dynamic event);
		Dynamic onkeyup_dyn();

		virtual Void ontextinput( Dynamic event);
		Dynamic ontextinput_dyn();

		virtual Void ontouchdown( Dynamic event);
		Dynamic ontouchdown_dyn();

		virtual Void ontouchup( Dynamic event);
		Dynamic ontouchup_dyn();

		virtual Void ontouchmove( Dynamic event);
		Dynamic ontouchmove_dyn();

		virtual Void ongamepadaxis( Dynamic event);
		Dynamic ongamepadaxis_dyn();

		virtual Void ongamepaddown( Dynamic event);
		Dynamic ongamepaddown_dyn();

		virtual Void ongamepadup( Dynamic event);
		Dynamic ongamepadup_dyn();

		virtual Void ongamepaddevice( Dynamic event);
		Dynamic ongamepaddevice_dyn();

		virtual Void onwindowmoved( Dynamic event);
		Dynamic onwindowmoved_dyn();

		virtual Void onwindowresized( Dynamic event);
		Dynamic onwindowresized_dyn();

		virtual Void onwindowsized( Dynamic event);
		Dynamic onwindowsized_dyn();

		virtual Void onwindowminimized( Dynamic event);
		Dynamic onwindowminimized_dyn();

		virtual Void onwindowrestored( Dynamic event);
		Dynamic onwindowrestored_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Game */ 
