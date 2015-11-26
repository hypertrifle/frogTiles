#ifndef INCLUDED_snow_types__Types_GamepadDeviceEventType_Impl_
#define INCLUDED_snow_types__Types_GamepadDeviceEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,GamepadDeviceEventType_Impl_)
namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES  GamepadDeviceEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GamepadDeviceEventType_Impl__obj OBJ_;
		GamepadDeviceEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.GamepadDeviceEventType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GamepadDeviceEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamepadDeviceEventType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GamepadDeviceEventType_Impl_","\x5d","\x0d","\xe9","\x82"); }

		static void __boot();
		static int unknown;
		static int device_added;
		static int device_removed;
		static int device_remapped;
		static ::String toString( int this1);
		static Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_GamepadDeviceEventType_Impl_ */ 
