#ifndef INCLUDED_snow_types__Types_WindowEventType_Impl_
#define INCLUDED_snow_types__Types_WindowEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,WindowEventType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  WindowEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WindowEventType_Impl__obj OBJ_;
		WindowEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.WindowEventType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WindowEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowEventType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WindowEventType_Impl_","\x64","\x39","\x19","\x2f"); }

		static void __boot();
		static int unknown;
		static int created;
		static int shown;
		static int hidden;
		static int exposed;
		static int moved;
		static int resized;
		static int size_changed;
		static int minimized;
		static int maximized;
		static int restored;
		static int enter;
		static int leave;
		static int focus_gained;
		static int focus_lost;
		static int close;
		static int destroy;
		static ::String toString( int this1);
		static Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_WindowEventType_Impl_ */ 
