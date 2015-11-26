#ifndef INCLUDED_luxe_debug_DebugView
#define INCLUDED_luxe_debug_DebugView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  DebugView_obj : public ::luxe::Objects_obj{
	public:
		typedef ::luxe::Objects_obj super;
		typedef DebugView_obj OBJ_;
		DebugView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.debug.DebugView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DebugView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DebugView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DebugView","\x38","\xb6","\x6d","\xd3"); }

		bool visible;
		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void onmousedown( Dynamic e);
		Dynamic onmousedown_dyn();

		virtual Void onmousewheel( Dynamic e);
		Dynamic onmousewheel_dyn();

		virtual Void onmouseup( Dynamic e);
		Dynamic onmouseup_dyn();

		virtual Void onmousemove( Dynamic e);
		Dynamic onmousemove_dyn();

		virtual Void onkeydown( Dynamic e);
		Dynamic onkeydown_dyn();

		virtual Void onkeyup( Dynamic e);
		Dynamic onkeyup_dyn();

		virtual Void onwindowsized( Dynamic e);
		Dynamic onwindowsized_dyn();

		virtual Void create( );
		Dynamic create_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_DebugView */ 
