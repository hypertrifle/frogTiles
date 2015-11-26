#ifndef INCLUDED_phoenix_Circle
#define INCLUDED_phoenix_Circle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Circle)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Circle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Circle_obj OBJ_;
		Circle_obj();
		Void __construct(Dynamic __o__x,Dynamic __o__y,Dynamic __o__r);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="phoenix.Circle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Circle_obj > __new(Dynamic __o__x,Dynamic __o__y,Dynamic __o__r);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Circle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a"); }

		Float x;
		Float y;
		Float r;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool point_inside( ::phoenix::Vector _p);
		Dynamic point_inside_dyn();

		virtual ::phoenix::Circle clone( );
		Dynamic clone_dyn();

		virtual ::phoenix::Circle set( Dynamic _x,Dynamic _y,Dynamic _r);
		Dynamic set_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Circle */ 
