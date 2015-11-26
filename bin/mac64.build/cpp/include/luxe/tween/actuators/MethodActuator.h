#ifndef INCLUDED_luxe_tween_actuators_MethodActuator
#define INCLUDED_luxe_tween_actuators_MethodActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif
HX_DECLARE_CLASS3(luxe,tween,actuators,GenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,MethodActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,SimpleActuator)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  MethodActuator_obj : public ::luxe::tween::actuators::SimpleActuator_obj{
	public:
		typedef ::luxe::tween::actuators::SimpleActuator_obj super;
		typedef MethodActuator_obj OBJ_;
		MethodActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tween.actuators.MethodActuator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MethodActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MethodActuator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MethodActuator","\x5a","\x8d","\x1d","\x99"); }

		cpp::ArrayBase currentParameters;
		Dynamic tweenProperties;
		virtual Void apply( );

		virtual Void complete( hx::Null< bool >  sendEvent);

		virtual Void initialize( );

		virtual Void update( Float currentTime);

};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_MethodActuator */ 
