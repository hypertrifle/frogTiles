#ifndef INCLUDED_luxe_importers_bitmapfont_BitmapFontParser
#define INCLUDED_luxe_importers_bitmapfont_BitmapFontParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(luxe,importers,bitmapfont,BitmapFontParser)
namespace luxe{
namespace importers{
namespace bitmapfont{


class HXCPP_CLASS_ATTRIBUTES  BitmapFontParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFontParser_obj OBJ_;
		BitmapFontParser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.importers.bitmapfont.BitmapFontParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapFontParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFontParser_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BitmapFontParser","\xfd","\x04","\x83","\x42"); }

		static Dynamic parse( ::String _font_data);
		static Dynamic parse_dyn();

		static Void parse_token( ::String _token,Array< ::String > _tokens,Dynamic _info);
		static Dynamic parse_token_dyn();

		static ::haxe::ds::StringMap tokenize_line( Array< ::String > _tokens);
		static Dynamic tokenize_line_dyn();

		static ::String trim( ::String _s);
		static Dynamic trim_dyn();

		static ::String unquote( ::String _s);
		static Dynamic unquote_dyn();

};

} // end namespace luxe
} // end namespace importers
} // end namespace bitmapfont

#endif /* INCLUDED_luxe_importers_bitmapfont_BitmapFontParser */ 
