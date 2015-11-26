#ifndef INCLUDED_phoenix_Texture
#define INCLUDED_phoenix_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLTO)
HX_DECLARE_CLASS3(snow,_system,assets,Asset)
HX_DECLARE_CLASS3(snow,_system,assets,AssetImage)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Texture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Texture_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Texture","\xbb","\xf0","\x31","\x6c"); }

		static void __boot();
		int slot;
		int border;
		::snow::modules::opengl::native::GLTO texture;
		int format;
		int type;
		int data_type;
		bool compressed;
		int width_actual;
		int height_actual;
		int width;
		int height;
		int filter_min;
		int filter_mag;
		int clamp_s;
		int clamp_t;
		bool load_premultiply_alpha;
		virtual Float memory_use( );

		virtual ::snow::api::buffers::ArrayBufferView fetch( ::snow::api::buffers::ArrayBufferView _into,Dynamic _x,Dynamic _y,Dynamic _w,Dynamic _h);
		Dynamic fetch_dyn();

		virtual Void submit( ::snow::api::buffers::ArrayBufferView _pixels,Dynamic _target,Dynamic _level);
		Dynamic submit_dyn();

		virtual Void generate_mipmaps( );
		Dynamic generate_mipmaps_dyn();

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual ::snow::api::Promise reload( );

		virtual Void from_asset( ::snow::_system::assets::AssetImage _asset,hx::Null< bool >  _clear_asset);
		Dynamic from_asset_dyn();

		virtual Void clear( );

		virtual ::snow::modules::opengl::native::GLTO create_texture_id( );
		Dynamic create_texture_id_dyn();

		virtual Void apply_props( );
		Dynamic apply_props_dyn();

		virtual Void apply_default_options( Dynamic _options);
		Dynamic apply_default_options_dyn();

		virtual int set_clamp_s( int _clamp);
		Dynamic set_clamp_s_dyn();

		virtual int set_clamp_t( int _clamp);
		Dynamic set_clamp_t_dyn();

		virtual int set_filter_min( int _filter);
		Dynamic set_filter_min_dyn();

		virtual int set_filter_mag( int _filter);
		Dynamic set_filter_mag_dyn();

		virtual Void apply_clamp( int _clamp,int _type);
		Dynamic apply_clamp_dyn();

		virtual Void apply_filter( int _filter,int _type);
		Dynamic apply_filter_dyn();

		virtual ::String toString( );

		static int default_filter;
		static int default_clamp;
		static int max_size( );
		static Dynamic max_size_dyn();

		static Void dump_asset_info( ::snow::_system::assets::AssetImage _asset);
		static Dynamic dump_asset_info_dyn();

		static ::String type_name( int _type);
		static Dynamic type_name_dyn();

		static ::String filter_name( int _filter);
		static Dynamic filter_name_dyn();

		static ::String clamp_name( int _clamp);
		static Dynamic clamp_name_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Texture */ 
