#ifndef INCLUDED_phoenix_Batcher
#define INCLUDED_phoenix_Batcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,structural,BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS1(phoenix,BatchState)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryKey)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Batcher_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Batcher_obj OBJ_;
		Batcher_obj();
		Void __construct(::phoenix::Renderer _r,::String __o__name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Batcher")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Batcher_obj > __new(::phoenix::Renderer _r,::String __o__name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Batcher_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Batcher","\x87","\x4a","\x61","\x8d"); }

		static void __boot();
		::String id;
		bool enabled;
		int layer;
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry geometry;
		::luxe::Emitter emitter;
		bool tree_changed;
		::snow::api::buffers::ArrayBufferView pos_list;
		::snow::api::buffers::ArrayBufferView tcoord_list;
		::snow::api::buffers::ArrayBufferView color_list;
		::snow::api::buffers::ArrayBufferView normal_list;
		int max_verts;
		int max_floats;
		int vert_count;
		::phoenix::Renderer renderer;
		::phoenix::Camera view;
		::phoenix::Shader shader;
		int draw_calls;
		int dynamic_batched_count;
		int static_batched_count;
		int visible_count;
		bool log;
		::String name;
		int sequence;
		int pos_floats;
		int tcoord_floats;
		int color_floats;
		int normal_floats;
		virtual Void on( int event,Dynamic handler);
		Dynamic on_dyn();

		virtual bool off( int event,Dynamic handler);
		Dynamic off_dyn();

		virtual Void add( ::phoenix::geometry::Geometry _geom,hx::Null< bool >  _force_add);
		Dynamic add_dyn();

		virtual Void empty( hx::Null< bool >  _drop);
		Dynamic empty_dyn();

		virtual Void destroy( hx::Null< bool >  _drop);
		Dynamic destroy_dyn();

		virtual Void remove( ::phoenix::geometry::Geometry _geom,Dynamic _remove_batcher_from_geometry);
		Dynamic remove_dyn();

		::phoenix::BatchState state;
		Array< ::Dynamic > _dropped;
		virtual Void batch( hx::Null< bool >  persist_immediate);
		Dynamic batch_dyn();

		virtual Void prune( );
		Dynamic prune_dyn();

		virtual Void draw( Dynamic persist_immediate);
		Dynamic draw_dyn();

		virtual Void update_view( );
		Dynamic update_view_dyn();

		virtual Void apply_default_uniforms( ::phoenix::Shader _shader);
		Dynamic apply_default_uniforms_dyn();

		virtual Void submit_geometry( ::phoenix::geometry::Geometry _geom,::phoenix::Shader _shader);
		Dynamic submit_geometry_dyn();

		virtual Void submit_buffers( int type,::snow::api::buffers::ArrayBufferView _pos,::snow::api::buffers::ArrayBufferView _tcoords,::snow::api::buffers::ArrayBufferView _colors,::snow::api::buffers::ArrayBufferView _normals);
		Dynamic submit_buffers_dyn();

		virtual Void submit_static_geometry( ::phoenix::geometry::Geometry geom);
		Dynamic submit_static_geometry_dyn();

		virtual Void submit_current_vertex_list( int type);
		Dynamic submit_current_vertex_list_dyn();

		virtual Void geometry_batch( ::phoenix::geometry::Geometry geom);
		Dynamic geometry_batch_dyn();

		virtual int set_layer( int _layer);
		Dynamic set_layer_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int compare( ::phoenix::Batcher other);
		Dynamic compare_dyn();

		virtual ::String compare_rule_to_string( int r);
		Dynamic compare_rule_to_string_dyn();

		virtual int compare_rule( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b);
		Dynamic compare_rule_dyn();

		virtual int geometry_compare( ::phoenix::geometry::GeometryKey a,::phoenix::geometry::GeometryKey b);
		Dynamic geometry_compare_dyn();

		virtual Void list_geometry( );
		Dynamic list_geometry_dyn();

		static int _sequence_key;
		static int vert_attribute;
		static int tcoord_attribute;
		static int color_attribute;
		static int normal_attribute;
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Batcher */ 
