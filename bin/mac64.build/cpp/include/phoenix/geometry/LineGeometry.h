#ifndef INCLUDED_phoenix_geometry_LineGeometry
#define INCLUDED_phoenix_geometry_LineGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,LineGeometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  LineGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef LineGeometry_obj OBJ_;
		LineGeometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.LineGeometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LineGeometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineGeometry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LineGeometry","\xe6","\x36","\xa7","\xe5"); }

		::phoenix::Vector p0;
		::phoenix::Vector p1;
		::phoenix::Color color0;
		::phoenix::Color color1;
		virtual ::phoenix::Vector set_p0( ::phoenix::Vector _p);
		Dynamic set_p0_dyn();

		virtual ::phoenix::Vector set_p1( ::phoenix::Vector _p);
		Dynamic set_p1_dyn();

		virtual ::phoenix::Color set_color0( ::phoenix::Color _c);
		Dynamic set_color0_dyn();

		virtual ::phoenix::Color set_color1( ::phoenix::Color _c);
		Dynamic set_color1_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_LineGeometry */ 
