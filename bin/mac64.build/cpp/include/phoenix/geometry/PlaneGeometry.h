#ifndef INCLUDED_phoenix_geometry_PlaneGeometry
#define INCLUDED_phoenix_geometry_PlaneGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,PlaneGeometry)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  PlaneGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef PlaneGeometry_obj OBJ_;
		PlaneGeometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.PlaneGeometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlaneGeometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlaneGeometry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlaneGeometry","\x0e","\xc9","\xc8","\xe2"); }

		bool flipx;
		bool flipy;
		::phoenix::Rectangle _uv_cache;
		bool is_set;
		virtual Void uv( ::phoenix::Rectangle _rect);
		Dynamic uv_dyn();

		virtual Void uv_space( ::phoenix::Rectangle _rect);
		Dynamic uv_space_dyn();

		virtual Void set( ::phoenix::Rectangle quad,Float y);
		Dynamic set_dyn();

		virtual bool set_flipx( bool _val);
		Dynamic set_flipx_dyn();

		virtual bool set_flipy( bool _val);
		Dynamic set_flipy_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_PlaneGeometry */ 
