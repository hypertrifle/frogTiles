#ifndef INCLUDED_luxe_ResourceStats
#define INCLUDED_luxe_ResourceStats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,ResourceStats)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  ResourceStats_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResourceStats_obj OBJ_;
		ResourceStats_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.ResourceStats")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ResourceStats_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResourceStats_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ResourceStats","\x51","\xae","\x3f","\xfb"); }

		int total;
		int fonts;
		int textures;
		int render_textures;
		int shaders;
		int texts;
		int jsons;
		int bytes;
		int unknown;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_ResourceStats */ 
