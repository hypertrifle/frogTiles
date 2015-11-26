#ifndef INCLUDED_phoenix_Shader
#define INCLUDED_phoenix_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Uniforms)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLPO)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLSO)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		::String log;
		::String vert_source;
		::String frag_source;
		::String vert_id;
		::String frag_id;
		::snow::modules::opengl::native::GLSO vert_shader;
		::snow::modules::opengl::native::GLSO frag_shader;
		::snow::modules::opengl::native::GLPO program;
		::snow::modules::opengl::native::GLSO shader;
		bool no_default_uniforms;
		Dynamic proj_attribute;
		Dynamic view_attribute;
		::phoenix::Uniforms uniforms;
		virtual Void activate( );
		Dynamic activate_dyn();

		virtual Void use( );
		Dynamic use_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual ::phoenix::Shader clone( ::String _id);
		Dynamic clone_dyn();

		virtual Void set_int( ::String _name,int _value);
		Dynamic set_int_dyn();

		virtual Void set_float( ::String _name,Float _value);
		Dynamic set_float_dyn();

		virtual Void set_vector2( ::String _name,::phoenix::Vector _value);
		Dynamic set_vector2_dyn();

		virtual Void set_vector3( ::String _name,::phoenix::Vector _value);
		Dynamic set_vector3_dyn();

		virtual Void set_vector4( ::String _name,::phoenix::Vector _value);
		Dynamic set_vector4_dyn();

		virtual Void set_matrix4( ::String _name,::phoenix::Matrix _value);
		Dynamic set_matrix4_dyn();

		virtual Void set_matrix4_arr( ::String _name,::snow::api::buffers::ArrayBufferView _value);
		Dynamic set_matrix4_arr_dyn();

		virtual Void set_color( ::String _name,::phoenix::Color _value);
		Dynamic set_color_dyn();

		virtual Void set_texture( ::String _name,::phoenix::Texture _value);
		Dynamic set_texture_dyn();

		virtual ::snow::modules::opengl::native::GLSO compile( int _type,::String _source);
		Dynamic compile_dyn();

		virtual bool link( );
		Dynamic link_dyn();

		virtual Dynamic location( ::String _name);
		Dynamic location_dyn();

		virtual Void clear( );

		virtual ::snow::api::Promise reload( );

		virtual bool from_string( ::String _vert_source,::String _fragment_source);
		Dynamic from_string_dyn();

		virtual Void add_log( ::String _log);
		Dynamic add_log_dyn();

		virtual ::String toString( );

		virtual ::String format_log( ::String _log);
		Dynamic format_log_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Shader */ 
