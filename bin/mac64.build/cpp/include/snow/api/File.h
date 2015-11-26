#ifndef INCLUDED_snow_api_File
#define INCLUDED_snow_api_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(snow,api,File)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
namespace snow{
namespace api{


class HXCPP_CLASS_ATTRIBUTES  File_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef File_obj OBJ_;
		File_obj();
		Void __construct(Dynamic _handle);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.api.File")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< File_obj > __new(Dynamic _handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~File_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("File","\x9c","\xfa","\x94","\x2e"); }

		static void __boot();
		Dynamic handle;
		virtual Dynamic read( ::snow::api::buffers::ArrayBufferView dest,int size,int maxnum);
		Dynamic read_dyn();

		virtual int write( ::snow::api::buffers::ArrayBufferView src,int size,int num);
		Dynamic write_dyn();

		virtual Dynamic seek( int offset,int whence);
		Dynamic seek_dyn();

		virtual Dynamic tell( );
		Dynamic tell_dyn();

		virtual int close( );
		Dynamic close_dyn();

		static ::snow::api::File from_file( ::String _id,::String _mode);
		static Dynamic from_file_dyn();

		static Dynamic snow_iosrc_from_file;
		static Dynamic &snow_iosrc_from_file_dyn() { return snow_iosrc_from_file;}
		static Dynamic snow_iosrc_file_read;
		static Dynamic &snow_iosrc_file_read_dyn() { return snow_iosrc_file_read;}
		static Dynamic snow_iosrc_file_write;
		static Dynamic &snow_iosrc_file_write_dyn() { return snow_iosrc_file_write;}
		static Dynamic snow_iosrc_file_seek;
		static Dynamic &snow_iosrc_file_seek_dyn() { return snow_iosrc_file_seek;}
		static Dynamic snow_iosrc_file_tell;
		static Dynamic &snow_iosrc_file_tell_dyn() { return snow_iosrc_file_tell;}
		static Dynamic snow_iosrc_file_close;
		static Dynamic &snow_iosrc_file_close_dyn() { return snow_iosrc_file_close;}
};

} // end namespace snow
} // end namespace api

#endif /* INCLUDED_snow_api_File */ 
