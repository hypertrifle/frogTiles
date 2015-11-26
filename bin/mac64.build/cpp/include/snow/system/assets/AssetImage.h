#ifndef INCLUDED_snow_system_assets_AssetImage
#define INCLUDED_snow_system_assets_AssetImage

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
HX_DECLARE_CLASS3(snow,_system,assets,AssetImage)
HX_DECLARE_CLASS3(snow,_system,assets,Assets)
namespace snow{
namespace _system{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  AssetImage_obj : public ::snow::_system::assets::Asset_obj{
	public:
		typedef ::snow::_system::assets::Asset_obj super;
		typedef AssetImage_obj OBJ_;
		AssetImage_obj();
		Void __construct(::snow::_system::assets::Assets _system,::String _id,Dynamic _image);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.system.assets.AssetImage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetImage_obj > __new(::snow::_system::assets::Assets _system,::String _id,Dynamic _image);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetImage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetImage","\x6b","\x23","\xf8","\x60"); }

		Dynamic image;
		virtual ::snow::api::Promise reload( );
		Dynamic reload_dyn();

		virtual Void destroy( );

		virtual ::snow::api::Promise reload_from_bytes( ::snow::api::buffers::ArrayBufferView _bytes);
		Dynamic reload_from_bytes_dyn();

		virtual Void reload_from_pixels( int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels);
		Dynamic reload_from_pixels_dyn();

		virtual Dynamic set_image( Dynamic _image);
		Dynamic set_image_dyn();

		static ::snow::api::Promise load( ::snow::_system::assets::Assets _system,::String _id);
		static Dynamic load_dyn();

		static ::snow::api::Promise load_from_bytes( ::snow::_system::assets::Assets _system,::String _id,::snow::api::buffers::ArrayBufferView _bytes);
		static Dynamic load_from_bytes_dyn();

		static ::snow::_system::assets::AssetImage load_from_pixels( ::snow::_system::assets::Assets _system,::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels);
		static Dynamic load_from_pixels_dyn();

		static ::snow::api::Promise provider( ::snow::Snow _app,::String _path);
		static Dynamic provider_dyn();

		static ::snow::api::Promise processor( ::snow::Snow _app,::String _id,::snow::api::buffers::ArrayBufferView _data);
		static Dynamic processor_dyn();

};

} // end namespace snow
} // end namespace system
} // end namespace assets

#endif /* INCLUDED_snow_system_assets_AssetImage */ 
