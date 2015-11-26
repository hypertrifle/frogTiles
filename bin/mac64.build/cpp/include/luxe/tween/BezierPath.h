#ifndef INCLUDED_luxe_tween_BezierPath
#define INCLUDED_luxe_tween_BezierPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,tween,BezierPath)
namespace luxe{
namespace tween{


class HXCPP_CLASS_ATTRIBUTES  BezierPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BezierPath_obj OBJ_;
		BezierPath_obj();
		Void __construct(Float end,Float control,Float strength);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.tween.BezierPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BezierPath_obj > __new(Float end,Float control,Float strength);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BezierPath_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BezierPath","\x84","\x11","\xae","\x57"); }

		Float control;
		Float end;
		Float strength;
		virtual Float calculate( Float start,Float k);
		Dynamic calculate_dyn();

};

} // end namespace luxe
} // end namespace tween

#endif /* INCLUDED_luxe_tween_BezierPath */ 
