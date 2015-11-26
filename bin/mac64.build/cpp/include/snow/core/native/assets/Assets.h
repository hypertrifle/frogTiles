#ifndef INCLUDED_snow_core_native_assets_Assets
#define INCLUDED_snow_core_native_assets_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_interfaces_Assets
#include <snow/modules/interfaces/Assets.h>
#endif
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,assets,Assets)
HX_DECLARE_CLASS3(snow,modules,interfaces,Assets)
HX_DECLARE_CLASS3(snow,_system,assets,Assets)
namespace snow{
namespace core{
namespace native{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct(::snow::_system::assets::Assets _system);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.assets.Assets")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Assets_obj > __new(::snow::_system::assets::Assets _system);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::snow::modules::interfaces::Assets_obj *();
		::String __ToString() const { return HX_HCSTRING("Assets","\xa3","\xbc","\x97","\x80"); }

		static void __boot();
		::snow::_system::assets::Assets _system;
		virtual ::snow::api::Promise image_load_info( ::String _path,Dynamic _components);
		Dynamic image_load_info_dyn();

		virtual ::snow::api::Promise image_info_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes,Dynamic _components);
		Dynamic image_info_from_bytes_dyn();

		virtual Dynamic image_info_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels);
		Dynamic image_info_from_pixels_dyn();

		virtual Dynamic audio_load_info( ::String _path,Dynamic _load,Dynamic _format);
		Dynamic audio_load_info_dyn();

		virtual Dynamic audio_info_from_bytes( ::snow::api::buffers::ArrayBufferView _bytes,Dynamic _format);
		Dynamic audio_info_from_bytes_dyn();

		virtual bool audio_seek_source( Dynamic _info,int _to);
		Dynamic audio_seek_source_dyn();

		virtual Dynamic audio_load_portion( Dynamic _info,int _start,int _len);
		Dynamic audio_load_portion_dyn();

		virtual Dynamic audio_load_ogg( ::String _path,Dynamic load);
		Dynamic audio_load_ogg_dyn();

		virtual Dynamic audio_load_ogg_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes);
		Dynamic audio_load_ogg_from_bytes_dyn();

		virtual Dynamic audio_load_portion_ogg( Dynamic _info,int _start,int _len);
		Dynamic audio_load_portion_ogg_dyn();

		virtual bool audio_seek_source_ogg( Dynamic _info,int _to);
		Dynamic audio_seek_source_ogg_dyn();

		virtual Dynamic audio_load_wav( ::String _path,Dynamic load);
		Dynamic audio_load_wav_dyn();

		virtual Dynamic audio_load_wav_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes);
		Dynamic audio_load_wav_from_bytes_dyn();

		virtual Dynamic audio_load_portion_wav( Dynamic _info,int _start,int _len);
		Dynamic audio_load_portion_wav_dyn();

		virtual bool audio_seek_source_wav( Dynamic _info,int _to);
		Dynamic audio_seek_source_wav_dyn();

		virtual Dynamic audio_load_pcm( ::String _path,Dynamic load);
		Dynamic audio_load_pcm_dyn();

		virtual Dynamic audio_load_pcm_from_bytes( ::String _path,::snow::api::buffers::ArrayBufferView _bytes);
		Dynamic audio_load_pcm_from_bytes_dyn();

		virtual Dynamic audio_load_portion_pcm( Dynamic _info,int _start,int _len);
		Dynamic audio_load_portion_pcm_dyn();

		virtual bool audio_seek_source_pcm( Dynamic _info,int _to);
		Dynamic audio_seek_source_pcm_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void on_event( Dynamic event);
		Dynamic on_event_dyn();

		static Dynamic snow_assets_image_load_info;
		static Dynamic &snow_assets_image_load_info_dyn() { return snow_assets_image_load_info;}
		static Dynamic snow_assets_image_info_from_bytes;
		static Dynamic &snow_assets_image_info_from_bytes_dyn() { return snow_assets_image_info_from_bytes;}
		static Dynamic snow_assets_audio_load_info_ogg;
		static Dynamic &snow_assets_audio_load_info_ogg_dyn() { return snow_assets_audio_load_info_ogg;}
		static Dynamic snow_assets_audio_read_bytes_ogg;
		static Dynamic &snow_assets_audio_read_bytes_ogg_dyn() { return snow_assets_audio_read_bytes_ogg;}
		static Dynamic snow_assets_audio_seek_bytes_ogg;
		static Dynamic &snow_assets_audio_seek_bytes_ogg_dyn() { return snow_assets_audio_seek_bytes_ogg;}
		static Dynamic snow_assets_audio_load_info_wav;
		static Dynamic &snow_assets_audio_load_info_wav_dyn() { return snow_assets_audio_load_info_wav;}
		static Dynamic snow_assets_audio_read_bytes_wav;
		static Dynamic &snow_assets_audio_read_bytes_wav_dyn() { return snow_assets_audio_read_bytes_wav;}
		static Dynamic snow_assets_audio_seek_bytes_wav;
		static Dynamic &snow_assets_audio_seek_bytes_wav_dyn() { return snow_assets_audio_seek_bytes_wav;}
		static Dynamic snow_assets_audio_load_info_pcm;
		static Dynamic &snow_assets_audio_load_info_pcm_dyn() { return snow_assets_audio_load_info_pcm;}
		static Dynamic snow_assets_audio_read_bytes_pcm;
		static Dynamic &snow_assets_audio_read_bytes_pcm_dyn() { return snow_assets_audio_read_bytes_pcm;}
		static Dynamic snow_assets_audio_seek_bytes_pcm;
		static Dynamic &snow_assets_audio_seek_bytes_pcm_dyn() { return snow_assets_audio_seek_bytes_pcm;}
};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace assets

#endif /* INCLUDED_snow_core_native_assets_Assets */ 
