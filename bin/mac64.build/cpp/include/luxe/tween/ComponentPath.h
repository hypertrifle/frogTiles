#ifndef INCLUDED_luxe_tween_ComponentPath
#define INCLUDED_luxe_tween_ComponentPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_IComponentPath
#include <luxe/tween/IComponentPath.h>
#endif
HX_DECLARE_CLASS2(luxe,tween,BezierPath)
HX_DECLARE_CLASS2(luxe,tween,ComponentPath)
HX_DECLARE_CLASS2(luxe,tween,IComponentPath)
namespace luxe{
namespace tween{


class HXCPP_CLASS_ATTRIBUTES  ComponentPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ComponentPath_obj OBJ_;
		ComponentPath_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tween.ComponentPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ComponentPath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentPath_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::luxe::tween::IComponentPath_obj *();
		::String __ToString() const { return HX_HCSTRING("ComponentPath","\xe2","\xf4","\xe2","\x2f"); }

		Float start;
		Float end;
		Array< ::Dynamic > paths;
		Float totalStrength;
		virtual Void addPath( ::luxe::tween::BezierPath path);
		Dynamic addPath_dyn();

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		virtual Float get_end( );
		Dynamic get_end_dyn();

};

} // end namespace luxe
} // end namespace tween

#endif /* INCLUDED_luxe_tween_ComponentPath */ 
