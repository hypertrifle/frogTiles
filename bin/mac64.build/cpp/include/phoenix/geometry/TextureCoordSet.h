#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#define INCLUDED_phoenix_geometry_TextureCoordSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,geometry,TextureCoord)
HX_DECLARE_CLASS2(phoenix,geometry,TextureCoordSet)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  TextureCoordSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureCoordSet_obj OBJ_;
		TextureCoordSet_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.TextureCoordSet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextureCoordSet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureCoordSet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextureCoordSet","\xc8","\xd7","\x9f","\x35"); }

		::phoenix::geometry::TextureCoord uv0;
		::phoenix::geometry::TextureCoord uv1;
		::phoenix::geometry::TextureCoord uv2;
		::phoenix::geometry::TextureCoord uv3;
		::phoenix::geometry::TextureCoord uv4;
		::phoenix::geometry::TextureCoord uv5;
		::phoenix::geometry::TextureCoord uv6;
		::phoenix::geometry::TextureCoord uv7;
		virtual ::phoenix::geometry::TextureCoordSet clone( );
		Dynamic clone_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_TextureCoordSet */ 
