#ifndef INCLUDED_luxe_tween_actuators_MotionPathActuator
#define INCLUDED_luxe_tween_actuators_MotionPathActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif
HX_DECLARE_CLASS3(luxe,tween,actuators,GenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,MotionPathActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,SimpleActuator)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  MotionPathActuator_obj : public ::luxe::tween::actuators::SimpleActuator_obj{
	public:
		typedef ::luxe::tween::actuators::SimpleActuator_obj super;
		typedef MotionPathActuator_obj OBJ_;
		MotionPathActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tween.actuators.MotionPathActuator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MotionPathActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MotionPathActuator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MotionPathActuator","\x74","\xbb","\xee","\xdc"); }

		virtual Void apply( );

		virtual Void initialize( );

		virtual Void update( Float currentTime);

};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_MotionPathActuator */ 
