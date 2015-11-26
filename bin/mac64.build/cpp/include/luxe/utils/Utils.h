#ifndef INCLUDED_luxe_utils_Utils
#define INCLUDED_luxe_utils_Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS2(luxe,utils,GeometryUtils)
HX_DECLARE_CLASS2(luxe,utils,Random)
HX_DECLARE_CLASS2(luxe,utils,Utils)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
namespace luxe{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Utils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utils_obj OBJ_;
		Utils_obj();
		Void __construct(::luxe::Core _luxe);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.utils.Utils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Utils_obj > __new(::luxe::Core _luxe);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utils_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Utils","\x11","\x1a","\x0c","\x3e"); }

		::luxe::utils::GeometryUtils geometry;
		::luxe::utils::Random random;
		::luxe::Core core;
		Array< ::String > _byte_levels;
		virtual ::String pos_info( Dynamic pos);
		Dynamic pos_info_dyn();

		virtual ::String uniqueid( Dynamic val);
		Dynamic uniqueid_dyn();

		virtual int uniquehash( );
		Dynamic uniquehash_dyn();

		virtual int hash( ::String string);
		Dynamic hash_dyn();

		virtual int hashdjb2( ::String string);
		Dynamic hashdjb2_dyn();

		virtual ::String uniqueid2( );
		Dynamic uniqueid2_dyn();

		virtual ::String stacktrace( Dynamic _depth);
		Dynamic stacktrace_dyn();

		virtual bool path_is_relative( ::String _path);
		Dynamic path_is_relative_dyn();

		virtual Array< ::String > find_assets_sequence( ::String _name,::String _ext,::String _start);
		Dynamic find_assets_sequence_dyn();

		virtual Array< ::String > text_wrap_column_knuth_plass( ::String _string,hx::Null< int >  _column);
		Dynamic text_wrap_column_knuth_plass_dyn();

		virtual ::String text_wrap_column( ::String _text,::String _brk,hx::Null< int >  _column);
		Dynamic text_wrap_column_dyn();

		virtual ::String bytes_to_string( int bytes,Dynamic precision);
		Dynamic bytes_to_string_dyn();

		virtual ::haxe::io::Bytes array_to_bytes( Array< int > array);
		Dynamic array_to_bytes_dyn();

		virtual ::snow::api::buffers::ArrayBufferView premultiply_alpha( ::snow::api::buffers::ArrayBufferView _pixels);
		Dynamic premultiply_alpha_dyn();

		virtual ::snow::api::buffers::ArrayBufferView premultiply_alpha_normalized( ::snow::api::buffers::ArrayBufferView _pixels);
		Dynamic premultiply_alpha_normalized_dyn();

};

} // end namespace luxe
} // end namespace utils

#endif /* INCLUDED_luxe_utils_Utils */ 
