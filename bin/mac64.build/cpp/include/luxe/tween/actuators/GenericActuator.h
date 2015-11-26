#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#define INCLUDED_luxe_tween_actuators_GenericActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
HX_DECLARE_CLASS3(luxe,tween,actuators,GenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS3(luxe,tween,easing,IEasing)
namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  GenericActuator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GenericActuator_obj OBJ_;
		GenericActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.tween.actuators.GenericActuator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GenericActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericActuator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::luxe::tween::actuators::IGenericActuator_obj *();
		::String __ToString() const { return HX_HCSTRING("GenericActuator","\x50","\xa2","\xb3","\x78"); }

		Float duration;
		::String id;
		Dynamic properties;
		Dynamic target;
		bool _autoVisible;
		Float _delay;
		::luxe::tween::easing::IEasing _ease;
		Dynamic _onComplete;
		cpp::ArrayBase _onCompleteParams;
		Dynamic _onRepeat;
		cpp::ArrayBase _onRepeatParams;
		Dynamic _onUpdate;
		cpp::ArrayBase _onUpdateParams;
		bool _reflect;
		int _repeat;
		bool _reverse;
		bool _smartRotation;
		bool _snapping;
		bool special;
		virtual Void apply( );
		Dynamic apply_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator autoVisible( Dynamic value);
		Dynamic autoVisible_dyn();

		virtual Dynamic callMethod( Dynamic method,cpp::ArrayBase params);
		Dynamic callMethod_dyn();

		virtual Void change( );
		Dynamic change_dyn();

		virtual Void complete( hx::Null< bool >  sendEvent);
		Dynamic complete_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator delay( Float duration);
		Dynamic delay_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator ease( ::luxe::tween::easing::IEasing easing);
		Dynamic ease_dyn();

		virtual Void move( );
		Dynamic move_dyn();

		bool timescaled;
		virtual ::luxe::tween::actuators::IGenericActuator timescale( hx::Null< bool >  _value);
		Dynamic timescale_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator onComplete( Dynamic handler,cpp::ArrayBase parameters);
		Dynamic onComplete_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator onRepeat( Dynamic handler,cpp::ArrayBase parameters);
		Dynamic onRepeat_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator onUpdate( Dynamic handler,cpp::ArrayBase parameters);
		Dynamic onUpdate_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator reflect( Dynamic value);
		Dynamic reflect_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator repeat( Dynamic times);
		Dynamic repeat_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator reverse( Dynamic value);
		Dynamic reverse_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator smartRotation( Dynamic value);
		Dynamic smartRotation_dyn();

		virtual ::luxe::tween::actuators::IGenericActuator snapping( Dynamic value);
		Dynamic snapping_dyn();

		virtual Void stop( Dynamic properties,bool complete,bool sendEvent);
		Dynamic stop_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_GenericActuator */ 
