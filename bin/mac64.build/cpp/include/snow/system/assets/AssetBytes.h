#ifndef INCLUDED_snow_system_assets_AssetBytes
#define INCLUDED_snow_system_assets_AssetBytes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,_system,assets,Asset)
HX_DECLARE_CLASS3(snow,_system,assets,AssetBytes)
HX_DECLARE_CLASS3(snow,_system,assets,Assets)
namespace snow{
namespace _system{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetBytes_obj : public ::snow::_system::assets::Asset_obj{
	public:
		typedef ::snow::_system::assets::Asset_obj super;
		typedef AssetBytes_obj OBJ_;
		AssetBytes_obj();
		Void __construct(::snow::_system::assets::Assets _system,::String _id,::snow::api::buffers::ArrayBufferView _bytes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.system.assets.AssetBytes")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetBytes_obj > __new(::snow::_system::assets::Assets _system,::String _id,::snow::api::buffers::ArrayBufferView _bytes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetBytes_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetBytes","\x7b","\x0c","\x27","\x61"); }

		::snow::api::buffers::ArrayBufferView bytes;
		virtual ::snow::api::Promise reload( );
		Dynamic reload_dyn();

		virtual Void destroy( );

		virtual ::snow::api::buffers::ArrayBufferView set_bytes( ::snow::api::buffers::ArrayBufferView _bytes);
		Dynamic set_bytes_dyn();

		static ::snow::api::Promise load( ::snow::_system::assets::Assets _system,::String _id);
		static Dynamic load_dyn();

};

} // end namespace snow
} // end namespace system
} // end namespace assets

#endif /* INCLUDED_snow_system_assets_AssetBytes */ 
