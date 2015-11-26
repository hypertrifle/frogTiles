#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8_Impl_
#define INCLUDED_luxe_utils_unifill__Utf8_Utf8_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(luxe,utils,unifill,_Utf8,Utf8_Impl_)
namespace luxe{
namespace utils{
namespace unifill{
namespace _Utf8{


class HXCPP_CLASS_ATTRIBUTES  Utf8_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utf8_Impl__obj OBJ_;
		Utf8_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.utils.unifill._Utf8.Utf8_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Utf8_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utf8_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Utf8_Impl_","\xb1","\x10","\x72","\x9d"); }

		static ::String fromCodePoint( int codePoint);
		static Dynamic fromCodePoint_dyn();

		static ::String fromCodePoints( Dynamic codePoints);
		static Dynamic fromCodePoints_dyn();

		static ::String fromString( ::String s);
		static Dynamic fromString_dyn();

		static ::String fromBytes( ::haxe::io::Bytes b);
		static Dynamic fromBytes_dyn();

		static int codeUnitAt( ::String this1,int index);
		static Dynamic codeUnitAt_dyn();

		static int codePointAt( ::String this1,int index);
		static Dynamic codePointAt_dyn();

		static ::String charAt( ::String this1,int index);
		static Dynamic charAt_dyn();

		static int codePointCount( ::String this1,int beginIndex,int endIndex);
		static Dynamic codePointCount_dyn();

		static int codePointWidthAt( ::String this1,int index);
		static Dynamic codePointWidthAt_dyn();

		static int codePointWidthBefore( ::String this1,int index);
		static Dynamic codePointWidthBefore_dyn();

		static int offsetByCodePoints( ::String this1,int index,int codePointOffset);
		static Dynamic offsetByCodePoints_dyn();

		static ::String substr( ::String this1,int index,Dynamic len);
		static Dynamic substr_dyn();

		static Void validate( ::String this1);
		static Dynamic validate_dyn();

		static ::String toString( ::String this1);
		static Dynamic toString_dyn();

		static ::haxe::io::Bytes toBytes( ::String this1);
		static Dynamic toBytes_dyn();

		static ::String _new( ::String s);
		static Dynamic _new_dyn();

		static int get_length( ::String this1);
		static Dynamic get_length_dyn();

		static int forward_offset_by_code_points( ::String this1,int index,int codePointOffset);
		static Dynamic forward_offset_by_code_points_dyn();

		static int backward_offset_by_code_points( ::String this1,int index,int codePointOffset);
		static Dynamic backward_offset_by_code_points_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
} // end namespace _Utf8

#endif /* INCLUDED_luxe_utils_unifill__Utf8_Utf8_Impl_ */ 
