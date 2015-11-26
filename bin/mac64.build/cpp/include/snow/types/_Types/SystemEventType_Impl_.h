#ifndef INCLUDED_snow_types__Types_SystemEventType_Impl_
#define INCLUDED_snow_types__Types_SystemEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,SystemEventType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  SystemEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SystemEventType_Impl__obj OBJ_;
		SystemEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.SystemEventType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SystemEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SystemEventType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SystemEventType_Impl_","\x45","\x6d","\xce","\x28"); }

		static void __boot();
		static int unknown;
		static int init;
		static int ready;
		static int update;
		static int shutdown;
		static int window;
		static int input;
		static int quit;
		static int app_terminating;
		static int app_lowmemory;
		static int app_willenterbackground;
		static int app_didenterbackground;
		static int app_willenterforeground;
		static int app_didenterforeground;
		static int file;
		static ::String toString( int this1);
		static Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_SystemEventType_Impl_ */ 
