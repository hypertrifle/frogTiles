#ifndef INCLUDED_luxe_tween_actuators_PropertyPathDetails
#define INCLUDED_luxe_tween_actuators_PropertyPathDetails

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
HX_DECLARE_CLASS2(luxe,tween,IComponentPath)
HX_DECLARE_CLASS3(luxe,tween,actuators,PropertyDetails)
HX_DECLARE_CLASS3(luxe,tween,actuators,PropertyPathDetails)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  PropertyPathDetails_obj : public ::luxe::tween::actuators::PropertyDetails_obj{
	public:
		typedef ::luxe::tween::actuators::PropertyDetails_obj super;
		typedef PropertyPathDetails_obj OBJ_;
		PropertyPathDetails_obj();
		Void __construct(Dynamic target,::String propertyName,::luxe::tween::IComponentPath path,hx::Null< bool >  __o_isField);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tween.actuators.PropertyPathDetails")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PropertyPathDetails_obj > __new(Dynamic target,::String propertyName,::luxe::tween::IComponentPath path,hx::Null< bool >  __o_isField);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PropertyPathDetails_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PropertyPathDetails","\x28","\x7b","\xcc","\x44"); }

		::luxe::tween::IComponentPath path;
};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_PropertyPathDetails */ 
