#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerGraph
#define INCLUDED_luxe_debug__ProfilerDebugView_ProfilerGraph

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,debug,_ProfilerDebugView,ProfilerGraph)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
namespace luxe{
namespace debug{
namespace _ProfilerDebugView{


class HXCPP_CLASS_ATTRIBUTES  ProfilerGraph_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ProfilerGraph_obj OBJ_;
		ProfilerGraph_obj();
		Void __construct(::String _name,hx::Null< bool >  __o__bg);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.debug._ProfilerDebugView.ProfilerGraph")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ProfilerGraph_obj > __new(::String _name,hx::Null< bool >  __o__bg);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProfilerGraph_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ProfilerGraph","\x45","\xff","\x8c","\x61"); }

		::phoenix::geometry::QuadGeometry graphbg_geometry;
		::phoenix::geometry::Geometry graph_geometry;
		::String name;
		bool bg;
		Float width;
		Float height;
		Float height2;
		int history;
		bool visible;
		::phoenix::Color color;
		Float max;
		Float ping;
		::phoenix::Vector pos;
		Float segment;
		virtual Void create( );
		Dynamic create_dyn();

		virtual Float set_max( Float _v);
		Dynamic set_max_dyn();

		virtual Float set_ping( Float _v);
		Dynamic set_ping_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector _p);
		Dynamic set_pos_dyn();

};

} // end namespace luxe
} // end namespace debug
} // end namespace _ProfilerDebugView

#endif /* INCLUDED_luxe_debug__ProfilerDebugView_ProfilerGraph */ 
