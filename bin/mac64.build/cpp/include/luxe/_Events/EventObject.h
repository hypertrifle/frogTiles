#ifndef INCLUDED_luxe__Events_EventObject
#define INCLUDED_luxe__Events_EventObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,_Events,EventObject)
namespace luxe{
namespace _Events{


class HXCPP_CLASS_ATTRIBUTES  EventObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventObject_obj OBJ_;
		EventObject_obj();
		Void __construct(::String _id,::String _event_name,Dynamic _event_properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe._Events.EventObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EventObject_obj > __new(::String _id,::String _event_name,Dynamic _event_properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EventObject","\x59","\x62","\xbf","\x4c"); }

		::String id;
		::String name;
		Dynamic properties;
};

} // end namespace luxe
} // end namespace _Events

#endif /* INCLUDED_luxe__Events_EventObject */ 
