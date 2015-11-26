#ifndef INCLUDED_phoenix_RendererStats
#define INCLUDED_phoenix_RendererStats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,RendererStats)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  RendererStats_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RendererStats_obj OBJ_;
		RendererStats_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="phoenix.RendererStats")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RendererStats_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RendererStats_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("RendererStats","\xbc","\x7d","\x6c","\x8a"); }

		int batchers;
		int geometry_count;
		int dynamic_batched_count;
		int static_batched_count;
		int visible_count;
		int draw_calls;
		int vert_count;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RendererStats */ 
