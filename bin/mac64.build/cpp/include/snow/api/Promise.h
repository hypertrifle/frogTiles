#ifndef INCLUDED_snow_api_Promise
#define INCLUDED_snow_api_Promise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,api,Promise)
namespace snow{
namespace api{


class HXCPP_CLASS_ATTRIBUTES  Promise_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Promise_obj OBJ_;
		Promise_obj();
		Void __construct(Dynamic func);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.api.Promise")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Promise_obj > __new(Dynamic func);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Promise_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Promise","\x7b","\xf5","\x3a","\xc5"); }

		int state;
		Dynamic result;
		cpp::ArrayBase reject_reactions;
		cpp::ArrayBase fulfill_reactions;
		cpp::ArrayBase settle_reactions;
		bool was_caught;
		virtual ::snow::api::Promise then( Dynamic on_fulfilled,Dynamic on_rejected);
		Dynamic then_dyn();

		virtual ::snow::api::Promise error( Dynamic on_rejected);
		Dynamic error_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void add_settle( Dynamic f);
		Dynamic add_settle_dyn();

		virtual ::snow::api::Promise new_linked_promise( );
		Dynamic new_linked_promise_dyn();

		virtual ::snow::api::Promise new_linked_resolve( );
		Dynamic new_linked_resolve_dyn();

		virtual ::snow::api::Promise new_linked_reject( );
		Dynamic new_linked_reject_dyn();

		virtual ::snow::api::Promise new_linked_resolve_empty( );
		Dynamic new_linked_resolve_empty_dyn();

		virtual ::snow::api::Promise new_linked_reject_empty( );
		Dynamic new_linked_reject_empty_dyn();

		virtual Void add_fulfill( Dynamic f);
		Dynamic add_fulfill_dyn();

		virtual Void add_reject( Dynamic f);
		Dynamic add_reject_dyn();

		virtual Void onfulfill( Dynamic val);
		Dynamic onfulfill_dyn();

		virtual Void onreject( Dynamic reason);
		Dynamic onreject_dyn();

		virtual Void onsettle( );
		Dynamic onsettle_dyn();

		virtual Void onexception( Dynamic err);
		Dynamic onexception_dyn();

		virtual ::String state_string( );
		Dynamic state_string_dyn();

		static ::snow::api::Promise all( Array< ::Dynamic > list);
		static Dynamic all_dyn();

		static ::snow::api::Promise race( Array< ::Dynamic > list);
		static Dynamic race_dyn();

		static ::snow::api::Promise reject( Dynamic reason);
		static Dynamic reject_dyn();

		static ::snow::api::Promise resolve( Dynamic val);
		static Dynamic resolve_dyn();

};

} // end namespace snow
} // end namespace api

#endif /* INCLUDED_snow_api_Promise */ 
