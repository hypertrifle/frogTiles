#ifndef INCLUDED_luxe_utils_Maths
#define INCLUDED_luxe_utils_Maths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,utils,Maths)
namespace luxe{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Maths_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Maths_obj OBJ_;
		Maths_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.utils.Maths")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Maths_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Maths_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Maths","\x8b","\xbd","\x50","\x96"); }

		static void __boot();
		static Float fixed( Float value,int precision);
		static Dynamic fixed_dyn();

		static Float lerp( Float value,Float target,Float t);
		static Dynamic lerp_dyn();

		static Float weighted_avg( Float value,Float target,Float slowness);
		static Dynamic weighted_avg_dyn();

		static Float clamp( Float value,Float a,Float b);
		static Dynamic clamp_dyn();

		static int clampi( int value,int a,int b);
		static Dynamic clampi_dyn();

		static Float clamp_bottom( Float value,Float a);
		static Dynamic clamp_bottom_dyn();

		static bool within_range( Float value,Float start_range,Float end_range);
		static Dynamic within_range_dyn();

		static Float wrap_angle( Float degrees,Float lower,Float upper);
		static Dynamic wrap_angle_dyn();

		static int nearest_power_of_two( int _value);
		static Dynamic nearest_power_of_two_dyn();

		static Float map_linear( Float value,Float a1,Float a2,Float b1,Float b2);
		static Dynamic map_linear_dyn();

		static Float smoothstep( Float x,Float min,Float max);
		static Dynamic smoothstep_dyn();

		static Float smootherstep( Float x,Float min,Float max);
		static Dynamic smootherstep_dyn();

		static int sign( Float x);
		static Dynamic sign_dyn();

		static int sign0( Float x);
		static Dynamic sign0_dyn();

		static Float radians( Float degrees);
		static Dynamic radians_dyn();

		static Float degrees( Float radians);
		static Dynamic degrees_dyn();

		static Float _PI_OVER_180;
		static Float _180_OVER_PI;
};

} // end namespace luxe
} // end namespace utils

#endif /* INCLUDED_luxe_utils_Maths */ 
