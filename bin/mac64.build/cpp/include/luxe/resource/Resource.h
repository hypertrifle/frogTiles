#ifndef INCLUDED_luxe_resource_Resource
#define INCLUDED_luxe_resource_Resource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Resources)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(snow,api,Promise)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  Resource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Resource_obj OBJ_;
		Resource_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.resource.Resource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Resource_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Resource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Resource","\xee","\x18","\x52","\xec"); }

		::String id;
		::luxe::Resources _system;
		int resource_type;
		int state;
		int ref;
		virtual Void destroy( Dynamic _force);
		Dynamic destroy_dyn();

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		virtual ::snow::api::Promise reload( );
		Dynamic reload_dyn();

		virtual Float memory_use( );
		Dynamic memory_use_dyn();

		virtual int set_ref( int _ref);
		Dynamic set_ref_dyn();

		virtual int set_state( int _state);
		Dynamic set_state_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::String state_string( );
		Dynamic state_string_dyn();

		virtual ::String type_string( );
		Dynamic type_string_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_Resource */ 
