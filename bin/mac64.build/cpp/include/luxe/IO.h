#ifndef INCLUDED_luxe_IO
#define INCLUDED_luxe_IO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Core)
HX_DECLARE_CLASS1(luxe,IO)
HX_DECLARE_CLASS1(snow,App)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  IO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IO_obj OBJ_;
		IO_obj();
		Void __construct(::luxe::Core _core);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.IO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IO_obj > __new(::luxe::Core _core);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IO_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("IO","\xe6","\x3f","\x00","\x00"); }

		::luxe::Core core;
		virtual Void url_open( ::String _url);
		Dynamic url_open_dyn();

		virtual bool string_save( ::String _key,::String _value,hx::Null< int >  _slot);
		Dynamic string_save_dyn();

		virtual ::String string_load( ::String _key,hx::Null< int >  _slot);
		Dynamic string_load_dyn();

		virtual bool string_destroy( hx::Null< int >  _slot);
		Dynamic string_destroy_dyn();

		virtual ::String get_app_path( );
		Dynamic get_app_path_dyn();

		virtual ::String get_app_path_prefs( );
		Dynamic get_app_path_prefs_dyn();

		virtual Void init( );
		Dynamic init_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_IO */ 
