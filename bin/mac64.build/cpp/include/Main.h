#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS1(components,LevelModel)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,States)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::luxe::Game_obj{
	public:
		typedef ::luxe::Game_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		bool inputDone;
		int playerX;
		bool timerRunning;
		Float time;
		virtual Dynamic config( Dynamic config);

		virtual Void ready( );

		virtual Void setup_events( );
		Dynamic setup_events_dyn();

		virtual Void setup_input( );
		Dynamic setup_input_dyn();

		virtual Void finish_game( bool won);
		Dynamic finish_game_dyn();

		virtual Void onkeyup( Dynamic e);

		virtual Void update( Float dt);

		virtual Void update_input( Float dt);
		Dynamic update_input_dyn();

		virtual Void step( hx::Null< int >  x,hx::Null< int >  y);
		Dynamic step_dyn();

		static ::luxe::States states;
		static ::luxe::Entity levelModel;
		static ::components::LevelModel levelGen;
};


#endif /* INCLUDED_Main */ 
