#ifndef INCLUDED_phoenix_geometry_Geometry
#define INCLUDED_phoenix_geometry_Geometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS1(phoenix,Transform)
HX_DECLARE_CLASS1(phoenix,Uniforms)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryKey)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryState)
HX_DECLARE_CLASS2(phoenix,geometry,Vertex)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLBO)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  Geometry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Geometry_obj OBJ_;
		Geometry_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.Geometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Geometry_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Geometry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Geometry","\xd2","\xbe","\x5a","\xac"); }

		static void __boot();
		::phoenix::Transform transform;
		Array< ::Dynamic > vertices;
		bool object_space;
		bool buffer_based;
		int buffer_type;
		::snow::api::buffers::ArrayBufferView buffer_pos;
		::snow::api::buffers::ArrayBufferView buffer_tcoords;
		::snow::api::buffers::ArrayBufferView buffer_colors;
		::snow::api::buffers::ArrayBufferView buffer_normals;
		::snow::modules::opengl::native::GLBO vb_pos;
		::snow::modules::opengl::native::GLBO vb_tcoords;
		::snow::modules::opengl::native::GLBO vb_colors;
		::snow::modules::opengl::native::GLBO vb_normals;
		::phoenix::Uniforms uniforms;
		bool added;
		Array< ::Dynamic > batchers;
		::phoenix::geometry::GeometryState state;
		bool dropped;
		::String uuid;
		::String id;
		int primitive_type;
		::phoenix::Texture texture;
		::phoenix::Shader shader;
		Float depth;
		::phoenix::Rectangle clip_rect;
		int shadow_primitive_type;
		::phoenix::Texture shadow_texture;
		::phoenix::Shader shadow_shader;
		Float shadow_depth;
		bool shadow_clip;
		bool dirty_primitive_type;
		bool dirty_texture;
		bool dirty_shader;
		bool dirty_depth;
		bool dirty_clip;
		bool visible;
		bool immediate;
		bool locked;
		bool dirty;
		::phoenix::Color color;
		bool clip;
		::phoenix::Vector _final_vert_position;
		::phoenix::geometry::GeometryKey key;
		virtual ::String key_string( );
		Dynamic key_string_dyn();

		virtual Void refresh_key( );
		Dynamic refresh_key_dyn();

		virtual Void str( );
		Dynamic str_dyn();

		virtual Void drop( Dynamic remove);
		Dynamic drop_dyn();

		virtual Void add( ::phoenix::geometry::Vertex v);
		Dynamic add_dyn();

		virtual Void remove( ::phoenix::geometry::Vertex v);
		Dynamic remove_dyn();

		virtual Void batch( int vert_index,int tcoord_index,int color_index,int normal_index,::snow::api::buffers::ArrayBufferView vertlist,::snow::api::buffers::ArrayBufferView tcoordlist,::snow::api::buffers::ArrayBufferView colorlist,::snow::api::buffers::ArrayBufferView normallist);
		Dynamic batch_dyn();

		virtual Void batch_object_space( int vert_index,int tcoord_index,int color_index,int normal_index,::snow::api::buffers::ArrayBufferView vertlist,::snow::api::buffers::ArrayBufferView tcoordlist,::snow::api::buffers::ArrayBufferView colorlist,::snow::api::buffers::ArrayBufferView normallist);
		Dynamic batch_object_space_dyn();

		virtual Void batch_into_arrays( Array< Float > vertlist,Array< Float > tcoordlist,Array< Float > colorlist,Array< Float > normallist);
		Dynamic batch_into_arrays_dyn();

		virtual Void destroy_vbos( );
		Dynamic destroy_vbos_dyn();

		virtual Void create_vbos( );
		Dynamic create_vbos_dyn();

		virtual Void bind( );
		Dynamic bind_dyn();

		virtual Void bind_pos( );
		Dynamic bind_pos_dyn();

		virtual Void bind_tcoords( );
		Dynamic bind_tcoords_dyn();

		virtual Void bind_colors( );
		Dynamic bind_colors_dyn();

		virtual Void unbind( );
		Dynamic unbind_dyn();

		virtual Void bind_and_upload( );
		Dynamic bind_and_upload_dyn();

		int _prev_count;
		virtual bool update_buffers( );
		Dynamic update_buffers_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void translate( ::phoenix::Vector _offset);
		Dynamic translate_dyn();

		virtual bool set_locked( bool _locked);
		Dynamic set_locked_dyn();

		virtual bool get_locked( );
		Dynamic get_locked_dyn();

		virtual bool set_dirty( bool _dirty);
		Dynamic set_dirty_dyn();

		virtual bool get_dirty( );
		Dynamic get_dirty_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual int get_primitive_type( );
		Dynamic get_primitive_type_dyn();

		virtual int set_primitive_type( int val);
		Dynamic set_primitive_type_dyn();

		virtual ::phoenix::Texture get_texture( );
		Dynamic get_texture_dyn();

		virtual ::phoenix::Texture set_texture( ::phoenix::Texture val);
		Dynamic set_texture_dyn();

		virtual bool set_visible( bool val);
		Dynamic set_visible_dyn();

		virtual ::phoenix::Color set_color( ::phoenix::Color val);
		Dynamic set_color_dyn();

		virtual ::phoenix::Shader get_shader( );
		Dynamic get_shader_dyn();

		virtual ::phoenix::Shader set_shader( ::phoenix::Shader val);
		Dynamic set_shader_dyn();

		virtual Float get_depth( );
		Dynamic get_depth_dyn();

		virtual Float set_depth( Float val);
		Dynamic set_depth_dyn();

		virtual bool get_clip( );
		Dynamic get_clip_dyn();

		virtual bool set_clip( bool val);
		Dynamic set_clip_dyn();

		virtual ::phoenix::Rectangle get_clip_rect( );
		Dynamic get_clip_rect_dyn();

		virtual ::phoenix::Rectangle set_clip_rect( ::phoenix::Rectangle val);
		Dynamic set_clip_rect_dyn();

		static int _sequence_key;
};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_Geometry */ 
