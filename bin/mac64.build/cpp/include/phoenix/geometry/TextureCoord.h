#ifndef INCLUDED_phoenix_geometry_TextureCoord
#define INCLUDED_phoenix_geometry_TextureCoord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,geometry,TextureCoord)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  TextureCoord_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureCoord_obj OBJ_;
		TextureCoord_obj();
		Void __construct(hx::Null< Float >  __o__u,hx::Null< Float >  __o__v,hx::Null< Float >  __o__w,hx::Null< Float >  __o__t);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="phoenix.geometry.TextureCoord")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextureCoord_obj > __new(hx::Null< Float >  __o__u,hx::Null< Float >  __o__v,hx::Null< Float >  __o__w,hx::Null< Float >  __o__t);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureCoord_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextureCoord","\xfa","\xb3","\x10","\x0b"); }

		Float u;
		Float v;
		Float w;
		Float t;
		virtual ::phoenix::geometry::TextureCoord clone( );
		Dynamic clone_dyn();

		virtual ::phoenix::geometry::TextureCoord set( Float _u,Float _v,Float _w,Float _t);
		Dynamic set_dyn();

		virtual ::phoenix::geometry::TextureCoord set_uv( Float _u,Float _v);
		Dynamic set_uv_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_TextureCoord */ 
