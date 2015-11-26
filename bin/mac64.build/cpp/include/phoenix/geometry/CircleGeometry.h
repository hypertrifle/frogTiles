#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#define INCLUDED_phoenix_geometry_CircleGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
HX_DECLARE_CLASS2(phoenix,geometry,CircleGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  CircleGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef CircleGeometry_obj OBJ_;
		CircleGeometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.CircleGeometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CircleGeometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CircleGeometry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CircleGeometry","\x02","\x55","\x96","\xb1"); }

		virtual Void set( Float _x,Float _y,Float _rx,Float _ry,int _steps,hx::Null< Float >  _start_angle,hx::Null< Float >  _end_angle);
		Dynamic set_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_CircleGeometry */ 
