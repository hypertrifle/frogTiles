#ifndef INCLUDED_luxe_tween_easing_Linear
#define INCLUDED_luxe_tween_easing_Linear

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
HX_DECLARE_CLASS3(luxe,tween,easing,Linear)
namespace luxe{
namespace tween{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  Linear_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Linear_obj OBJ_;
		Linear_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.tween.easing.Linear")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Linear_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Linear_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Linear","\x05","\xc6","\x34","\x21"); }

		static ::luxe::tween::easing::IEasing get_easeNone( );
		static Dynamic get_easeNone_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace easing

#endif /* INCLUDED_luxe_tween_easing_Linear */ 
