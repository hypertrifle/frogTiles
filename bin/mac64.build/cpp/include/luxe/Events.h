#ifndef INCLUDED_luxe_Events
#define INCLUDED_luxe_Events

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Events)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Events_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Events_obj OBJ_;
		Events_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Events")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Events_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Events_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Events","\x39","\xc3","\xfe","\xca"); }

		::haxe::ds::StringMap event_queue;
		::haxe::ds::StringMap event_connections;
		::haxe::ds::StringMap event_slots;
		::haxe::ds::StringMap event_filters;
		::haxe::ds::StringMap event_schedules;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool does_filter_event( ::String _filter,::String _event);
		Dynamic does_filter_event_dyn();

		virtual ::String listen( ::String _event_name,Dynamic _listener);
		Dynamic listen_dyn();

		virtual bool unlisten( ::String event_id);
		Dynamic unlisten_dyn();

		virtual ::String queue( ::String event_name,Dynamic properties);
		Dynamic queue_dyn();

		virtual bool dequeue( ::String event_id);
		Dynamic dequeue_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual bool fire( ::String _event_name,Dynamic _properties,Dynamic _tag);
		Dynamic fire_dyn();

		virtual ::String schedule( Float time,::String event_name,Dynamic properties);
		Dynamic schedule_dyn();

		virtual bool unschedule( ::String schedule_id);
		Dynamic unschedule_dyn();

		virtual Dynamic tag_properties( Dynamic _properties,::String _name,int _count);
		Dynamic tag_properties_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Events */ 
