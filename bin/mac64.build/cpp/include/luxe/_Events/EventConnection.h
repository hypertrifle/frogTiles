#ifndef INCLUDED_luxe__Events_EventConnection
#define INCLUDED_luxe__Events_EventConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,_Events,EventConnection)
namespace luxe{
namespace _Events{


class HXCPP_CLASS_ATTRIBUTES  EventConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventConnection_obj OBJ_;
		EventConnection_obj();
		Void __construct(::String _id,::String _event_name,Dynamic _listener);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe._Events.EventConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EventConnection_obj > __new(::String _id,::String _event_name,Dynamic _listener);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventConnection_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EventConnection","\xb8","\x58","\x75","\xf9"); }

		Dynamic listener;
		Dynamic &listener_dyn() { return listener;}
		::String id;
		::String event_name;
};

} // end namespace luxe
} // end namespace _Events

#endif /* INCLUDED_luxe__Events_EventConnection */ 
