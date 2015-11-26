#ifndef INCLUDED_luxe_Resources
#define INCLUDED_luxe_Resources

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Parcel)
HX_DECLARE_CLASS1(luxe,ResourceStats)
HX_DECLARE_CLASS1(luxe,Resources)
HX_DECLARE_CLASS2(luxe,resource,BytesResource)
HX_DECLARE_CLASS2(luxe,resource,JSONResource)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,TextResource)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS2(snow,api,Promise)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Resources_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Resources_obj OBJ_;
		Resources_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Resources")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Resources_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Resources_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Resources","\xc5","\xb7","\x83","\xdb"); }

		Array< ::Dynamic > parcels;
		::haxe::ds::StringMap cache;
		::luxe::ResourceStats stats;
		::luxe::Emitter emitter;
		virtual Void track( ::luxe::Parcel _cache);
		Dynamic track_dyn();

		virtual Void untrack( ::luxe::Parcel _cache);
		Dynamic untrack_dyn();

		virtual Void add( ::luxe::resource::Resource resource);
		Dynamic add_dyn();

		virtual bool remove( ::luxe::resource::Resource resource,Dynamic _pos);
		Dynamic remove_dyn();

		virtual bool destroy( ::String _id,Dynamic _force);
		Dynamic destroy_dyn();

		virtual bool invalidate( ::String _id);
		Dynamic invalidate_dyn();

		virtual Void on( int ev,Dynamic handler);
		Dynamic on_dyn();

		virtual Void off( int ev,Dynamic handler);
		Dynamic off_dyn();

		virtual Void emit( int ev,Dynamic data);
		Dynamic emit_dyn();

		virtual ::snow::api::Promise load_bytes( ::String _id);
		Dynamic load_bytes_dyn();

		virtual ::snow::api::Promise load_text( ::String _id);
		Dynamic load_text_dyn();

		virtual ::snow::api::Promise load_json( ::String _id);
		Dynamic load_json_dyn();

		virtual ::snow::api::Promise load_texture( ::String _id,Dynamic _options);
		Dynamic load_texture_dyn();

		virtual ::snow::api::Promise load_font( ::String _id,Dynamic _options);
		Dynamic load_font_dyn();

		virtual ::snow::api::Promise load_shader( ::String _id,Dynamic _options);
		Dynamic load_shader_dyn();

		virtual bool has( ::String _id);
		Dynamic has_dyn();

		virtual ::luxe::resource::Resource get( ::String _id);
		Dynamic get_dyn();

		virtual ::luxe::resource::BytesResource bytes( ::String _id);
		Dynamic bytes_dyn();

		virtual ::luxe::resource::TextResource text( ::String _id);
		Dynamic text_dyn();

		virtual ::luxe::resource::JSONResource json( ::String _id);
		Dynamic json_dyn();

		virtual ::phoenix::Texture texture( ::String _id);
		Dynamic texture_dyn();

		virtual ::phoenix::BitmapFont font( ::String _id);
		Dynamic font_dyn();

		virtual ::phoenix::Shader shader( ::String _id);
		Dynamic shader_dyn();

		virtual Dynamic fetch( ::String _id);
		Dynamic fetch_dyn();

		virtual Void update_stats( ::luxe::resource::Resource _res,int _offset);
		Dynamic update_stats_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Resources */ 
