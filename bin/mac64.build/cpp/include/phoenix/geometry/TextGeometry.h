#ifndef INCLUDED_phoenix_geometry_TextGeometry
#define INCLUDED_phoenix_geometry_TextGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,TextGeometry)
HX_DECLARE_CLASS2(phoenix,geometry,Vertex)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  TextGeometry_obj : public ::phoenix::geometry::Geometry_obj{
	public:
		typedef ::phoenix::geometry::Geometry_obj super;
		typedef TextGeometry_obj OBJ_;
		TextGeometry_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.TextGeometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextGeometry_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextGeometry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextGeometry","\x9f","\xcc","\x36","\xcf"); }

		static void __boot();
		::String text;
		::phoenix::BitmapFont font;
		Float point_size;
		Float line_spacing;
		Float letter_spacing;
		::phoenix::Rectangle bounds;
		bool bounds_wrap;
		int align;
		int align_vertical;
		bool sdf;
		bool unique;
		Float smoothness;
		Float thickness;
		Float outline;
		::phoenix::Color outline_color;
		Float glow_threshold;
		Float glow_amount;
		::phoenix::Color glow_color;
		Array< Float > line_widths;
		Float text_width;
		Float text_height;
		Array< ::Dynamic > line_offsets;
		Array< ::String > lines;
		::luxe::Emitter emitter;
		Array< ::Dynamic > cache;
		Dynamic options;
		Float text_h_w;
		Float text_h_h;
		Float point_ratio;
		bool dirty_sizing;
		bool dirty_align;
		virtual Void tidy( );
		Dynamic tidy_dyn();

		virtual Void default_options( );
		Dynamic default_options_dyn();

		virtual ::String set_text( ::String _text);
		Dynamic set_text_dyn();

		virtual ::String stats( );
		Dynamic stats_dyn();

		virtual bool update_sizes( );
		Dynamic update_sizes_dyn();

		virtual Void update_text( );
		Dynamic update_text_dyn();

		virtual Void update_char( int _letteridx,Float _x,Float _y,Float _w,Float _h,Float _u,Float _v,Float _u2,Float _v2,::phoenix::Color _color);
		Dynamic update_char_dyn();

		virtual bool set_dirty_sizing( bool _b);
		Dynamic set_dirty_sizing_dyn();

		virtual ::phoenix::Rectangle set_bounds( ::phoenix::Rectangle _bounds);
		Dynamic set_bounds_dyn();

		virtual bool set_bounds_wrap( bool _wrap);
		Dynamic set_bounds_wrap_dyn();

		virtual Float set_line_spacing( Float _line_spacing);
		Dynamic set_line_spacing_dyn();

		virtual Float set_letter_spacing( Float _letter_spacing);
		Dynamic set_letter_spacing_dyn();

		virtual int set_align( int _align);
		Dynamic set_align_dyn();

		virtual int set_align_vertical( int _align_vertical);
		Dynamic set_align_vertical_dyn();

		virtual Float set_point_size( Float s);
		Dynamic set_point_size_dyn();

		virtual Float set_smoothness( Float s);
		Dynamic set_smoothness_dyn();

		virtual Float set_thickness( Float s);
		Dynamic set_thickness_dyn();

		virtual Float set_outline( Float s);
		Dynamic set_outline_dyn();

		virtual Float set_glow_threshold( Float s);
		Dynamic set_glow_threshold_dyn();

		virtual Float set_glow_amount( Float s);
		Dynamic set_glow_amount_dyn();

		virtual ::phoenix::Color set_outline_color( ::phoenix::Color c);
		Dynamic set_outline_color_dyn();

		virtual ::phoenix::Color set_glow_color( ::phoenix::Color c);
		Dynamic set_glow_color_dyn();

		virtual Void flush_uniforms( );
		Dynamic flush_uniforms_dyn();

		static ::EReg tab_regex;
};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_TextGeometry */ 
