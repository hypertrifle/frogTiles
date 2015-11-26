#ifndef INCLUDED_phoenix_geometry_ArcGeometry
#define INCLUDED_phoenix_geometry_ArcGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
HX_DECLARE_CLASS2(phoenix,geometry,ArcGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,CircleGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,RingGeometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  ArcGeometry_obj : public ::phoenix::geometry::RingGeometry_obj{
	public:
		typedef ::phoenix::geometry::RingGeometry_obj super;
		typedef ArcGeometry_obj OBJ_;
		ArcGeometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.ArcGeometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArcGeometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArcGeometry_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ArcGeometry","\x04","\xf7","\x58","\x99"); }

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_ArcGeometry */ 
