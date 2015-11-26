#ifndef INCLUDED_snow_system_assets_AssetText
#define INCLUDED_snow_system_assets_AssetText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,_system,assets,Asset)
HX_DECLARE_CLASS3(snow,_system,assets,AssetText)
HX_DECLARE_CLASS3(snow,_system,assets,Assets)
namespace snow{
namespace _system{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetText_obj : public ::snow::_system::assets::Asset_obj{
	public:
		typedef ::snow::_system::assets::Asset_obj super;
		typedef AssetText_obj OBJ_;
		AssetText_obj();
		Void __construct(::snow::_system::assets::Assets _system,::String _id,::String _text);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.system.assets.AssetText")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetText_obj > __new(::snow::_system::assets::Assets _system,::String _id,::String _text);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetText_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetText","\x9d","\xfa","\x72","\x53"); }

		::String text;
		virtual ::snow::api::Promise reload( );
		Dynamic reload_dyn();

		virtual Void destroy( );

		virtual ::String set_text( ::String _text);
		Dynamic set_text_dyn();

		static ::snow::api::Promise load( ::snow::_system::assets::Assets _system,::String _id);
		static Dynamic load_dyn();

		static ::snow::api::Promise processor( ::snow::Snow _app,::String _id,::snow::api::buffers::ArrayBufferView _data);
		static Dynamic processor_dyn();

};

} // end namespace snow
} // end namespace system
} // end namespace assets

#endif /* INCLUDED_snow_system_assets_AssetText */ 
