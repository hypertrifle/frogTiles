#ifndef INCLUDED_phoenix_geometry_QuadGeometry
#define INCLUDED_phoenix_geometry_QuadGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  QuadGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef QuadGeometry_obj OBJ_;
		QuadGeometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.QuadGeometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< QuadGeometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadGeometry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("QuadGeometry","\xb9","\xe2","\x17","\xa2"); }

		bool flipx;
		bool flipy;
		int uv_angle;
		Float _uv_x;
		Float _uv_y;
		Float _uv_w;
		Float _uv_h;
		virtual Void uv( ::phoenix::Rectangle _rect);
		Dynamic uv_dyn();

		virtual Void uv_space( Float _rect_x,Float _rect_y,Float _rect_w,Float _rect_h);
		Dynamic uv_space_dyn();

		virtual Void resize_xy( Float _x,Float _y);
		Dynamic resize_xy_dyn();

		virtual Void resize( ::phoenix::Vector quad);
		Dynamic resize_dyn();

		virtual Void set( ::phoenix::Rectangle quad);
		Dynamic set_dyn();

		virtual Void set_xywh( Float _x,Float _y,Float _w,Float _h);
		Dynamic set_xywh_dyn();

		virtual bool set_flipx( bool _val);
		Dynamic set_flipx_dyn();

		virtual bool set_flipy( bool _val);
		Dynamic set_flipy_dyn();

		virtual int set_uv_angle( int _val);
		Dynamic set_uv_angle_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_QuadGeometry */ 
