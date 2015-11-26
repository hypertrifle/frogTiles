#ifndef INCLUDED_phoenix_Uniforms
#define INCLUDED_phoenix_Uniforms

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Uniform)
HX_DECLARE_CLASS1(phoenix,Uniforms)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Uniforms_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Uniforms_obj OBJ_;
		Uniforms_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Uniforms")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Uniforms_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniforms_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Uniforms","\xdf","\x88","\x06","\xdc"); }

		::haxe::ds::StringMap ints;
		::haxe::ds::StringMap floats;
		::haxe::ds::StringMap vector2s;
		::haxe::ds::StringMap vector3s;
		::haxe::ds::StringMap vector4s;
		::haxe::ds::StringMap matrix4s;
		::haxe::ds::StringMap matrix4arrs;
		::haxe::ds::StringMap colors;
		::haxe::ds::StringMap textures;
		Array< ::Dynamic > dirty_ints;
		Array< ::Dynamic > dirty_floats;
		Array< ::Dynamic > dirty_vector2s;
		Array< ::Dynamic > dirty_vector3s;
		Array< ::Dynamic > dirty_vector4s;
		Array< ::Dynamic > dirty_matrix4s;
		Array< ::Dynamic > dirty_matrix4arrs;
		Array< ::Dynamic > dirty_colors;
		Array< ::Dynamic > dirty_textures;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void set_int( ::String _name,int _value,Dynamic _location);
		Dynamic set_int_dyn();

		virtual Void set_float( ::String _name,Float _value,Dynamic _location);
		Dynamic set_float_dyn();

		virtual Void set_vector2( ::String _name,::phoenix::Vector _value,Dynamic _location);
		Dynamic set_vector2_dyn();

		virtual Void set_vector3( ::String _name,::phoenix::Vector _value,Dynamic _location);
		Dynamic set_vector3_dyn();

		virtual Void set_vector4( ::String _name,::phoenix::Vector _value,Dynamic _location);
		Dynamic set_vector4_dyn();

		virtual Void set_matrix4( ::String _name,::phoenix::Matrix _value,Dynamic _location);
		Dynamic set_matrix4_dyn();

		virtual Void set_matrix4_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value,Dynamic _location);
		Dynamic set_matrix4_arr_dyn();

		virtual Void set_color( ::String _name,::phoenix::Color _value,Dynamic _location);
		Dynamic set_color_dyn();

		virtual Void set_texture( ::String _name,::phoenix::Texture _value,Dynamic _location);
		Dynamic set_texture_dyn();

		virtual Void apply( );
		Dynamic apply_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Uniforms */ 
