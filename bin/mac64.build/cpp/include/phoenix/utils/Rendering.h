#ifndef INCLUDED_phoenix_utils_Rendering
#define INCLUDED_phoenix_utils_Rendering

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(phoenix,utils,Rendering)
namespace phoenix{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Rendering_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rendering_obj OBJ_;
		Rendering_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="phoenix.utils.Rendering")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Rendering_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rendering_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Rendering","\x2c","\xbb","\x46","\x6f"); }

		static int gl_blend_mode_from_BlendMode( int _b);
		static Dynamic gl_blend_mode_from_BlendMode_dyn();

		static Float fovx_to_y( Float fovx,Float aspect);
		static Dynamic fovx_to_y_dyn();

};

} // end namespace phoenix
} // end namespace utils

#endif /* INCLUDED_phoenix_utils_Rendering */ 
