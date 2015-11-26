#ifndef INCLUDED_luxe_Timer
#define INCLUDED_luxe_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,Timer)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS2(snow,api,Timer)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Timer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(::luxe::Core _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Timer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Timer_obj > __new(::luxe::Core _core);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"); }

		::luxe::Core core;
		Array< ::Dynamic > timers;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::snow::api::Timer schedule( Float _time_in_seconds,Dynamic _on_time,Dynamic repeat);
		Dynamic schedule_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Timer */ 
