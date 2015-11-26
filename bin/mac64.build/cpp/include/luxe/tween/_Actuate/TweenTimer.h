#ifndef INCLUDED_luxe_tween__Actuate_TweenTimer
#define INCLUDED_luxe_tween__Actuate_TweenTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,_Actuate,TweenTimer)
namespace luxe{
namespace tween{
namespace _Actuate{


class HXCPP_CLASS_ATTRIBUTES  TweenTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TweenTimer_obj OBJ_;
		TweenTimer_obj();
		Void __construct(Float progress);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.tween._Actuate.TweenTimer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TweenTimer_obj > __new(Float progress);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TweenTimer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TweenTimer","\x7a","\xe5","\x2a","\xbe"); }

		Float progress;
};

} // end namespace luxe
} // end namespace tween
} // end namespace _Actuate

#endif /* INCLUDED_luxe_tween__Actuate_TweenTimer */ 
