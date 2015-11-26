#ifndef INCLUDED_luxe_Screen
#define INCLUDED_luxe_Screen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Cursor)
HX_DECLARE_CLASS1(luxe,Screen)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS1(snow,App)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Screen_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Screen_obj OBJ_;
		Screen_obj();
		Void __construct(::luxe::Core _core,int _w,int _h);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Screen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Screen_obj > __new(::luxe::Core _core,int _w,int _h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Screen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Screen","\x8c","\xaf","\xf1","\x7b"); }

		::phoenix::Vector mid;
		::phoenix::Vector size;
		::phoenix::Rectangle bounds;
		int w;
		int h;
		Float width;
		Float height;
		::luxe::Cursor cursor;
		::luxe::Core core;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool point_inside( ::phoenix::Vector _p);
		Dynamic point_inside_dyn();

		virtual bool point_inside_xy( Float _x,Float _y);
		Dynamic point_inside_xy_dyn();

		virtual Void internal_resized( Float _w,Float _h);
		Dynamic internal_resized_dyn();

		virtual ::phoenix::Vector get_mid( );
		Dynamic get_mid_dyn();

		virtual ::phoenix::Vector get_size( );
		Dynamic get_size_dyn();

		virtual ::phoenix::Rectangle get_bounds( );
		Dynamic get_bounds_dyn();

		virtual int get_w( );
		Dynamic get_w_dyn();

		virtual int get_h( );
		Dynamic get_h_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Screen */ 
