#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#define INCLUDED_luxe_tween_actuators_PropertyDetails

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,tween,actuators,PropertyDetails)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  PropertyDetails_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PropertyDetails_obj OBJ_;
		PropertyDetails_obj();
		Void __construct(Dynamic target,::String propertyName,Float start,Float change,hx::Null< bool >  __o_isField);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tween.actuators.PropertyDetails")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PropertyDetails_obj > __new(Dynamic target,::String propertyName,Float start,Float change,hx::Null< bool >  __o_isField);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PropertyDetails_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PropertyDetails","\xcd","\xa8","\xd4","\xd1"); }

		Float change;
		bool isField;
		::String propertyName;
		Float start;
		Dynamic target;
};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_PropertyDetails */ 
