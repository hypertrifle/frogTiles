#ifndef INCLUDED_snow_api_Promises
#define INCLUDED_snow_api_Promises

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,api,Promises)
namespace snow{
namespace api{


class HXCPP_CLASS_ATTRIBUTES  Promises_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Promises_obj OBJ_;
		Promises_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.api.Promises")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Promises_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Promises_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Promises","\x98","\xd6","\x5b","\xce"); }

		static void __boot();
		static cpp::ArrayBase calls;
		static cpp::ArrayBase defers;
		static Void step( );
		static Dynamic step_dyn();

		static Void next( );
		static Dynamic next_dyn();

		static Void defer( Dynamic f,Dynamic a);
		static Dynamic defer_dyn();

		static Void queue( Dynamic f);
		static Dynamic queue_dyn();

};

} // end namespace snow
} // end namespace api

#endif /* INCLUDED_snow_api_Promises */ 
