#ifndef INCLUDED_luxe_utils_Random
#define INCLUDED_luxe_utils_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,utils,Random)
namespace luxe{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Random_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();
		Void __construct(Float _initial_seed);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.utils.Random")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Random_obj > __new(Float _initial_seed);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Random","\x23","\x96","\x23","\xec"); }

		virtual Float get( );
		Dynamic get_dyn();

		virtual Float _float( Float min,Dynamic max);
		Dynamic _float_dyn();

		virtual int _int( Float min,Dynamic max);
		Dynamic _int_dyn();

		virtual bool _bool( hx::Null< Float >  chance);
		Dynamic _bool_dyn();

		virtual int sign( hx::Null< Float >  chance);
		Dynamic sign_dyn();

		virtual int bit( hx::Null< Float >  chance);
		Dynamic bit_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		Float seed;
		Float initial;
		virtual Float set_initial( Float _initial);
		Dynamic set_initial_dyn();

};

} // end namespace luxe
} // end namespace utils

#endif /* INCLUDED_luxe_utils_Random */ 
