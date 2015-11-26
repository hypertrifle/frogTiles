#ifndef INCLUDED_snow_core_native_io_IO
#define INCLUDED_snow_core_native_io_IO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,io,IO)
HX_DECLARE_CLASS3(snow,modules,interfaces,IO)
HX_DECLARE_CLASS3(snow,_system,io,IO)
namespace snow{
namespace core{
namespace native{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  IO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IO_obj OBJ_;
		IO_obj();
		Void __construct(::snow::_system::io::IO _system);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.core.native.io.IO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IO_obj > __new(::snow::_system::io::IO _system);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IO_obj();

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
		operator ::snow::modules::interfaces::IO_obj *();
		::String __ToString() const { return HX_HCSTRING("IO","\xe6","\x3f","\x00","\x00"); }

		static void __boot();
		::snow::_system::io::IO _system;
		virtual ::String app_path( );
		Dynamic app_path_dyn();

		virtual ::String app_path_prefs( );
		Dynamic app_path_prefs_dyn();

		virtual Void watch_add( ::String _path);
		Dynamic watch_add_dyn();

		virtual Void watch_remove( ::String _path);
		Dynamic watch_remove_dyn();

		virtual ::String dialog_open( ::String _title,cpp::ArrayBase _filters);
		Dynamic dialog_open_dyn();

		virtual ::String dialog_save( ::String _title,Dynamic _filter);
		Dynamic dialog_save_dyn();

		virtual ::String dialog_folder( ::String _title);
		Dynamic dialog_folder_dyn();

		virtual ::String string_save_path( hx::Null< int >  _slot);
		Dynamic string_save_path_dyn();

		virtual Void url_open( ::String _url);
		Dynamic url_open_dyn();

		virtual ::snow::api::Promise data_load( ::String _path,Dynamic _options);
		Dynamic data_load_dyn();

		virtual bool data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options);
		Dynamic data_save_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void on_event( Dynamic _event);
		Dynamic on_event_dyn();

		virtual bool string_slot_destroy( hx::Null< int >  _slot);
		Dynamic string_slot_destroy_dyn();

		virtual bool string_slot_save( hx::Null< int >  _slot,::String _contents);
		Dynamic string_slot_save_dyn();

		virtual ::String string_slot_load( hx::Null< int >  _slot);
		Dynamic string_slot_load_dyn();

		virtual ::String string_slot_encode( ::String _string);
		Dynamic string_slot_encode_dyn();

		virtual ::String string_slot_decode( ::String _string);
		Dynamic string_slot_decode_dyn();

		virtual ::snow::api::buffers::ArrayBufferView _data_load( ::String _path,Dynamic _options);
		Dynamic _data_load_dyn();

		static bool isAbsolute( ::String path);
		static Dynamic isAbsolute_dyn();

		static ::String path_resolve( ::String _path);
		static Dynamic path_resolve_dyn();

		static Dynamic snow_io_url_open;
		static Dynamic &snow_io_url_open_dyn() { return snow_io_url_open;}
		static Dynamic snow_app_path;
		static Dynamic &snow_app_path_dyn() { return snow_app_path;}
		static Dynamic snow_pref_path;
		static Dynamic &snow_pref_path_dyn() { return snow_pref_path;}
		static Dynamic snow_io_add_watch;
		static Dynamic &snow_io_add_watch_dyn() { return snow_io_add_watch;}
		static Dynamic snow_io_remove_watch;
		static Dynamic &snow_io_remove_watch_dyn() { return snow_io_remove_watch;}
		static Dynamic snow_io_dialog_open;
		static Dynamic &snow_io_dialog_open_dyn() { return snow_io_dialog_open;}
		static Dynamic snow_io_dialog_save;
		static Dynamic &snow_io_dialog_save_dyn() { return snow_io_dialog_save;}
		static Dynamic snow_io_dialog_folder;
		static Dynamic &snow_io_dialog_folder_dyn() { return snow_io_dialog_folder;}
};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace io

#endif /* INCLUDED_snow_core_native_io_IO */ 
