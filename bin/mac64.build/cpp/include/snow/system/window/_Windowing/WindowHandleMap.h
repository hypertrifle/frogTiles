#ifndef INCLUDED_snow_system_window__Windowing_WindowHandleMap
#define INCLUDED_snow_system_window__Windowing_WindowHandleMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS4(snow,_system,window,_Windowing,WindowHandleMap)
namespace snow{
namespace _system{
namespace window{
namespace _Windowing{


class HXCPP_CLASS_ATTRIBUTES  WindowHandleMap_obj : public ::haxe::ds::BalancedTree_obj{
	public:
		typedef ::haxe::ds::BalancedTree_obj super;
		typedef WindowHandleMap_obj OBJ_;
		WindowHandleMap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.system.window._Windowing.WindowHandleMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WindowHandleMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowHandleMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WindowHandleMap","\xa4","\x4d","\x55","\xb1"); }

		virtual int compare( Dynamic _tmp_k1,Dynamic _tmp_k2);

};

} // end namespace snow
} // end namespace system
} // end namespace window
} // end namespace _Windowing

#endif /* INCLUDED_snow_system_window__Windowing_WindowHandleMap */ 
