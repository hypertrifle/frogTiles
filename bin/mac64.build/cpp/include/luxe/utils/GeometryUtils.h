#ifndef INCLUDED_luxe_utils_GeometryUtils
#define INCLUDED_luxe_utils_GeometryUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,utils,GeometryUtils)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
namespace luxe{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  GeometryUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GeometryUtils_obj OBJ_;
		GeometryUtils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.utils.GeometryUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GeometryUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GeometryUtils_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GeometryUtils","\xff","\x61","\xf2","\x50"); }

		static void __boot();
		virtual int segments_for_smooth_circle( Float _radius,hx::Null< Float >  _smooth);
		Dynamic segments_for_smooth_circle_dyn();

		virtual ::phoenix::Vector random_point_in_unit_circle( );
		Dynamic random_point_in_unit_circle_dyn();

		virtual bool point_in_polygon( ::phoenix::Vector _point,::phoenix::Vector _offset,Array< ::Dynamic > _verts);
		Dynamic point_in_polygon_dyn();

		virtual bool point_in_geometry( ::phoenix::Vector _point,::phoenix::geometry::Geometry _geometry);
		Dynamic point_in_geometry_dyn();

		virtual ::phoenix::Vector intersect_ray_plane( ::phoenix::Vector _ray_start,::phoenix::Vector _ray_dir,::phoenix::Vector _plane_normal,::phoenix::Vector _plane_point);
		Dynamic intersect_ray_plane_dyn();

		static Float two_pi;
};

} // end namespace luxe
} // end namespace utils

#endif /* INCLUDED_luxe_utils_GeometryUtils */ 
