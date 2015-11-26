#ifndef INCLUDED_luxe_debug_SceneDebugView
#define INCLUDED_luxe_debug_SceneDebugView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Scene)
HX_DECLARE_CLASS1(luxe,Text)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(luxe,debug,SceneDebugView)
namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  SceneDebugView_obj : public ::luxe::debug::DebugView_obj{
	public:
		typedef ::luxe::debug::DebugView_obj super;
		typedef SceneDebugView_obj OBJ_;
		SceneDebugView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.debug.SceneDebugView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SceneDebugView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SceneDebugView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SceneDebugView","\x8c","\xe7","\x89","\x18"); }

		::luxe::Text items_list;
		int margin;
		Float font_size;
		virtual Void create( );

		Array< ::Dynamic > scenes;
		virtual Void add_scene( ::luxe::Scene _scene);
		Dynamic add_scene_dyn();

		virtual bool remove_scene( ::luxe::Scene _scene);
		Dynamic remove_scene_dyn();

		virtual Void onkeydown( Dynamic e);

		bool hide_ids;
		virtual Void toggle_ids( );
		Dynamic toggle_ids_dyn();

		virtual ::String tabs( int _d);
		Dynamic tabs_dyn();

		virtual ::String list_entity( ::String _list,::luxe::Entity e,hx::Null< int >  _depth);
		Dynamic list_entity_dyn();

		virtual ::String get_list( );
		Dynamic get_list_dyn();

		virtual Void refresh( );

		virtual Void process( );

		virtual Void onmousewheel( Dynamic e);

		virtual Void show( );

		virtual Void hide( );

		virtual Void resize( );
		Dynamic resize_dyn();

		virtual Void onwindowsized( Dynamic e);

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_SceneDebugView */ 
