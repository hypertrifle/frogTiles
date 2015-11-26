#ifndef INCLUDED_luxe_options__DrawOptions_DrawOptions
#define INCLUDED_luxe_options__DrawOptions_DrawOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,options,_DrawOptions,DrawOptions)
namespace luxe{
namespace options{
namespace _DrawOptions{


class HXCPP_CLASS_ATTRIBUTES  DrawOptions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawOptions_obj OBJ_;
		DrawOptions_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.options._DrawOptions.DrawOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DrawOptions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawOptions_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DrawOptions","\x9a","\x0f","\x79","\x0d"); }

};

} // end namespace luxe
} // end namespace options
} // end namespace _DrawOptions

#endif /* INCLUDED_luxe_options__DrawOptions_DrawOptions */ 
