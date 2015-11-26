#ifndef INCLUDED_luxe_utils_unifill_Unicode
#define INCLUDED_luxe_utils_unifill_Unicode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,utils,unifill,Unicode)
namespace luxe{
namespace utils{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES  Unicode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Unicode_obj OBJ_;
		Unicode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.utils.unifill.Unicode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Unicode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Unicode_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Unicode","\xfd","\xb8","\xb9","\x80"); }

		static void __boot();
		static int minCodePoint;
		static int maxCodePoint;
		static int minHighSurrogate;
		static int maxHighSurrogate;
		static int minLowSurrogate;
		static int maxLowSurrogate;
		static int decodeSurrogate( int hi,int lo);
		static Dynamic decodeSurrogate_dyn();

		static int encodeHighSurrogate( int c);
		static Dynamic encodeHighSurrogate_dyn();

		static int encodeLowSurrogate( int c);
		static Dynamic encodeLowSurrogate_dyn();

		static bool isScalar( int code);
		static Dynamic isScalar_dyn();

		static bool isHighSurrogate( int code);
		static Dynamic isHighSurrogate_dyn();

		static bool isLowSurrogate( int code);
		static Dynamic isLowSurrogate_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill

#endif /* INCLUDED_luxe_utils_unifill_Unicode */ 
