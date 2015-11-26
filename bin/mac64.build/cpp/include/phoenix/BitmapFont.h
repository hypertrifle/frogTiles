#ifndef INCLUDED_phoenix_BitmapFont
#define INCLUDED_phoenix_BitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(snow,api,Promise)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  BitmapFont_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef BitmapFont_obj OBJ_;
		BitmapFont_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.BitmapFont")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapFont_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFont_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapFont","\x7e","\xc1","\xce","\x2b"); }

		::haxe::ds::IntMap pages;
		Dynamic info;
		Dynamic space_char;
		::String texture_path;
		virtual Dynamic kerning( int _first,int _second);
		Dynamic kerning_dyn();

		virtual ::String wrap_string_to_bounds( ::String _string,::phoenix::Rectangle _bounds,hx::Null< Float >  _point_size,hx::Null< Float >  _letter_spc);
		Dynamic wrap_string_to_bounds_dyn();

		virtual Float width_of_line( ::String _string,hx::Null< Float >  _point_size,hx::Null< Float >  _letter_spc);
		Dynamic width_of_line_dyn();

		virtual Float width_of( ::String _string,hx::Null< Float >  _point_size,hx::Null< Float >  _letter_spc,Array< Float > _line_widths);
		Dynamic width_of_dyn();

		virtual Float height_of( ::String _string,Float _point_size,hx::Null< Float >  _line_spc);
		Dynamic height_of_dyn();

		virtual ::phoenix::Vector dimensions_of( ::String _string,Float _point_size,::phoenix::Vector _into,hx::Null< Float >  _letter_spc,hx::Null< Float >  _line_spc);
		Dynamic dimensions_of_dyn();

		virtual Float height_of_lines( Array< ::String > _lines,Float _point_size,hx::Null< Float >  _line_spc);
		Dynamic height_of_lines_dyn();

		virtual Float line_height_to_point_size( Float _pixel_height,hx::Null< Float >  _line_spc);
		Dynamic line_height_to_point_size_dyn();

		virtual Void clear( );

		virtual ::snow::api::Promise reload( );

		virtual Void apply_pages( Array< ::Dynamic > _pages);
		Dynamic apply_pages_dyn();

		virtual Dynamic set_info( Dynamic _info);
		Dynamic set_info_dyn();

		virtual ::String toString( );

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_BitmapFont */ 
