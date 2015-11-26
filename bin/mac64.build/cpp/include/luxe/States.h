#ifndef INCLUDED_luxe_States
#define INCLUDED_luxe_States

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,State)
HX_DECLARE_CLASS1(luxe,States)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  States_obj : public ::luxe::Objects_obj{
	public:
		typedef ::luxe::Objects_obj super;
		typedef States_obj OBJ_;
		States_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.States")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< States_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~States_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("States","\x62","\x4d","\x90","\x3a"); }

		::haxe::ds::StringMap _states;
		Array< ::Dynamic > active_states;
		::luxe::State current_state;
		int active_count;
		int _state_count;
		virtual Dynamic add( Dynamic _state);
		Dynamic add_dyn();

		virtual Dynamic remove( ::String _name,Dynamic _leave_with);
		Dynamic remove_dyn();

		virtual Void kill( ::String _name);
		Dynamic kill_dyn();

		virtual bool enabled( ::String _name);
		Dynamic enabled_dyn();

		virtual Void enable( ::String _name,Dynamic _enable_with);
		Dynamic enable_dyn();

		virtual Void disable( ::String _name,Dynamic _disable_with);
		Dynamic disable_dyn();

		virtual Void enter( ::luxe::State _state,Dynamic _enter_with);
		Dynamic enter_dyn();

		virtual Void leave( ::luxe::State _state,Dynamic _leave_with);
		Dynamic leave_dyn();

		virtual bool set( ::String name,Dynamic _enter_with,Dynamic _leave_with,Dynamic pos);
		Dynamic set_dyn();

		virtual Void unset( Dynamic _leave_with);
		Dynamic unset_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void init( Dynamic _);
		Dynamic init_dyn();

		virtual Void reset( Dynamic _);
		Dynamic reset_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void ondestroy( Dynamic _);
		Dynamic ondestroy_dyn();

		virtual Void render( Dynamic _);
		Dynamic render_dyn();

		virtual Void prerender( Dynamic _);
		Dynamic prerender_dyn();

		virtual Void postrender( Dynamic _);
		Dynamic postrender_dyn();

		virtual Void keydown( Dynamic e);
		Dynamic keydown_dyn();

		virtual Void keyup( Dynamic e);
		Dynamic keyup_dyn();

		virtual Void textinput( Dynamic e);
		Dynamic textinput_dyn();

		virtual Void inputup( Dynamic _event);
		Dynamic inputup_dyn();

		virtual Void inputdown( Dynamic _event);
		Dynamic inputdown_dyn();

		virtual Void mousedown( Dynamic e);
		Dynamic mousedown_dyn();

		virtual Void mousewheel( Dynamic e);
		Dynamic mousewheel_dyn();

		virtual Void mouseup( Dynamic e);
		Dynamic mouseup_dyn();

		virtual Void mousemove( Dynamic e);
		Dynamic mousemove_dyn();

		virtual Void touchdown( Dynamic e);
		Dynamic touchdown_dyn();

		virtual Void touchup( Dynamic e);
		Dynamic touchup_dyn();

		virtual Void touchmove( Dynamic e);
		Dynamic touchmove_dyn();

		virtual Void gamepadaxis( Dynamic e);
		Dynamic gamepadaxis_dyn();

		virtual Void gamepadup( Dynamic e);
		Dynamic gamepadup_dyn();

		virtual Void gamepaddown( Dynamic e);
		Dynamic gamepaddown_dyn();

		virtual Void gamepaddevice( Dynamic e);
		Dynamic gamepaddevice_dyn();

		virtual Void windowmoved( Dynamic e);
		Dynamic windowmoved_dyn();

		virtual Void windowresized( Dynamic e);
		Dynamic windowresized_dyn();

		virtual Void windowsized( Dynamic e);
		Dynamic windowsized_dyn();

		virtual Void windowminimized( Dynamic e);
		Dynamic windowminimized_dyn();

		virtual Void windowrestored( Dynamic e);
		Dynamic windowrestored_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_States */ 
