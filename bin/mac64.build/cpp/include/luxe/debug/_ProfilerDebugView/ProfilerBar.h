#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerBar
#define INCLUDED_luxe_debug__ProfilerDebugView_ProfilerBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Text)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS3(luxe,debug,_ProfilerDebugView,ProfilerBar)
HX_DECLARE_CLASS3(luxe,debug,_ProfilerDebugView,ProfilerGraph)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
namespace luxe{
namespace debug{
namespace _ProfilerDebugView{


class HXCPP_CLASS_ATTRIBUTES  ProfilerBar_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ProfilerBar_obj OBJ_;
		ProfilerBar_obj();
		Void __construct(::String _name,Dynamic _max,::phoenix::Color _color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.debug._ProfilerDebugView.ProfilerBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ProfilerBar_obj > __new(::String _name,Dynamic _max,::phoenix::Color _color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProfilerBar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ProfilerBar","\x0a","\xe6","\x4e","\xd7"); }

		::phoenix::geometry::QuadGeometry bar_geometry;
		::phoenix::geometry::QuadGeometry bg_geometry;
		::luxe::debug::_ProfilerDebugView::ProfilerGraph graph;
		::luxe::Text text_item;
		::String name;
		bool visible;
		Float height;
		Float max;
		::String text;
		::phoenix::Vector pos;
		Float value;
		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Float set_value( Float _v);
		Dynamic set_value_dyn();

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector _p);
		Dynamic set_pos_dyn();

		virtual ::String set_text( ::String _t);
		Dynamic set_text_dyn();

};

} // end namespace luxe
} // end namespace debug
} // end namespace _ProfilerDebugView

#endif /* INCLUDED_luxe_debug__ProfilerDebugView_ProfilerBar */ 
