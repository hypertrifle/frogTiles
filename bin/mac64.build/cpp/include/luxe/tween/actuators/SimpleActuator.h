#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#define INCLUDED_luxe_tween_actuators_SimpleActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS3(luxe,tween,actuators,GenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,PropertyDetails)
HX_DECLARE_CLASS3(luxe,tween,actuators,SimpleActuator)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  SimpleActuator_obj : public ::luxe::tween::actuators::GenericActuator_obj{
	public:
		typedef ::luxe::tween::actuators::GenericActuator_obj super;
		typedef SimpleActuator_obj OBJ_;
		SimpleActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tween.actuators.SimpleActuator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SimpleActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleActuator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SimpleActuator","\xab","\xd3","\xf8","\x0c"); }

		static void __boot();
		Float timeOffset;
		bool active;
		bool cacheVisible;
		int detailsLength;
		bool initialized;
		bool paused;
		Float pauseTime;
		Array< ::Dynamic > propertyDetails;
		bool sendChange;
		bool setVisible;
		Float startTime;
		bool toggleVisible;
		bool has_timescaled_starttime;
		virtual ::luxe::tween::actuators::IGenericActuator autoVisible( Dynamic value);

		virtual ::luxe::tween::actuators::IGenericActuator delay( Float duration);

		virtual Dynamic getField( Dynamic target,::String propertyName);
		Dynamic getField_dyn();

		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual Void move( );

		virtual ::luxe::tween::actuators::IGenericActuator onUpdate( Dynamic handler,cpp::ArrayBase parameters);

		virtual Void pause( );

		virtual Void resume( );

		virtual Void setField( Dynamic target,::String propertyName,Dynamic value);
		Dynamic setField_dyn();

		virtual Void setProperty( ::luxe::tween::actuators::PropertyDetails details,Dynamic value);
		Dynamic setProperty_dyn();

		virtual Void stop( Dynamic properties,bool complete,bool sendEvent);

		virtual Void update( Float currentTime);
		Dynamic update_dyn();

		static Array< ::Dynamic > actuators;
		static int actuatorsLength;
		static bool addedEvent;
		static ::haxe::Timer timer;
		static Float update_timer;
		static Float current_time;
		static Void on_internal_update( Dynamic _);
		static Dynamic on_internal_update_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_SimpleActuator */ 
