#ifndef INCLUDED_luxe_tween_RotationPath
#define INCLUDED_luxe_tween_RotationPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_IComponentPath
#include <luxe/tween/IComponentPath.h>
#endif
HX_DECLARE_CLASS2(luxe,tween,ComponentPath)
HX_DECLARE_CLASS2(luxe,tween,IComponentPath)
HX_DECLARE_CLASS2(luxe,tween,RotationPath)
namespace luxe{
namespace tween{


class HXCPP_CLASS_ATTRIBUTES  RotationPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RotationPath_obj OBJ_;
		RotationPath_obj();
		Void __construct(::luxe::tween::ComponentPath x,::luxe::tween::ComponentPath y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tween.RotationPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RotationPath_obj > __new(::luxe::tween::ComponentPath x,::luxe::tween::ComponentPath y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RotationPath_obj();

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
		::String __ToString() const { return HX_HCSTRING("RotationPath","\x23","\x12","\xfe","\xe4"); }

		Float end;
		Float offset;
		Float start;
		Float step;
		::luxe::tween::ComponentPath _x;
		::luxe::tween::ComponentPath _y;
		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		virtual Float get_end( );
		Dynamic get_end_dyn();

};

} // end namespace luxe
} // end namespace tween

#endif /* INCLUDED_luxe_tween_RotationPath */ 
