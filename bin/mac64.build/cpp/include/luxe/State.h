#ifndef INCLUDED_luxe_State
#define INCLUDED_luxe_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,State)
HX_DECLARE_CLASS1(luxe,States)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  State_obj : public ::luxe::ID_obj{
	public:
		typedef ::luxe::ID_obj super;
		typedef State_obj OBJ_;
		State_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.State")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< State_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~State_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("State","\xf1","\xe5","\x38","\x17"); }

		::luxe::States machine;
		bool active;
		bool enabled;
		bool inited;
		virtual Void enable( Dynamic _enable_with);
		Dynamic enable_dyn();

		virtual Void disable( Dynamic _disable_with);
		Dynamic disable_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( Float dt);
		Dynamic update_dyn();

		virtual Void onfixedupdate( );
		Dynamic onfixedupdate_dyn();

		virtual Void onleave( Dynamic d);
		Dynamic onleave_dyn();

		virtual Void onenter( Dynamic d);
		Dynamic onenter_dyn();

		virtual Void onenabled( Dynamic d);
		Dynamic onenabled_dyn();

		virtual Void ondisabled( Dynamic d);
		Dynamic ondisabled_dyn();

		virtual Void onadded( );
		Dynamic onadded_dyn();

		virtual Void onremoved( );
		Dynamic onremoved_dyn();

		virtual Void onrender( );
		Dynamic onrender_dyn();

		virtual Void onprerender( );
		Dynamic onprerender_dyn();

		virtual Void onpostrender( );
		Dynamic onpostrender_dyn();

		virtual Void onreset( );
		Dynamic onreset_dyn();

		virtual Void ondestroy( );
		Dynamic ondestroy_dyn();

		virtual Void onkeyup( Dynamic event);
		Dynamic onkeyup_dyn();

		virtual Void onkeydown( Dynamic event);
		Dynamic onkeydown_dyn();

		virtual Void ontextinput( Dynamic event);
		Dynamic ontextinput_dyn();

		virtual Void oninputdown( ::String name,Dynamic event);
		Dynamic oninputdown_dyn();

		virtual Void oninputup( ::String name,Dynamic event);
		Dynamic oninputup_dyn();

		virtual Void onmousedown( Dynamic event);
		Dynamic onmousedown_dyn();

		virtual Void onmouseup( Dynamic event);
		Dynamic onmouseup_dyn();

		virtual Void onmousemove( Dynamic event);
		Dynamic onmousemove_dyn();

		virtual Void onmousewheel( Dynamic event);
		Dynamic onmousewheel_dyn();

		virtual Void ontouchdown( Dynamic event);
		Dynamic ontouchdown_dyn();

		virtual Void ontouchup( Dynamic event);
		Dynamic ontouchup_dyn();

		virtual Void ontouchmove( Dynamic event);
		Dynamic ontouchmove_dyn();

		virtual Void ongamepadup( Dynamic event);
		Dynamic ongamepadup_dyn();

		virtual Void ongamepaddown( Dynamic event);
		Dynamic ongamepaddown_dyn();

		virtual Void ongamepadaxis( Dynamic event);
		Dynamic ongamepadaxis_dyn();

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

		virtual Void _init( );
		Dynamic _init_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_State */ 
