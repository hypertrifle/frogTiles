#ifndef INCLUDED_phoenix_geometry_GeometryState
#define INCLUDED_phoenix_geometry_GeometryState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Shader)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS2(phoenix,geometry,GeometryState)
namespace phoenix{
namespace geometry{


class HXCPP_CLASS_ATTRIBUTES  GeometryState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GeometryState_obj OBJ_;
		GeometryState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.geometry.GeometryState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GeometryState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GeometryState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GeometryState","\xdf","\x2d","\x1f","\x2a"); }

		bool dirty;
		int primitive_type;
		::phoenix::Shader shader;
		::phoenix::Texture texture;
		Float depth;
		bool clip;
		Float clip_x;
		Float clip_y;
		Float clip_w;
		Float clip_h;
		bool log;
		virtual Void clone_onto( ::phoenix::geometry::GeometryState _other);
		Dynamic clone_onto_dyn();

		virtual Void str( );
		Dynamic str_dyn();

		virtual Void clean( );
		Dynamic clean_dyn();

		virtual Void update( ::phoenix::geometry::GeometryState other);
		Dynamic update_dyn();

		virtual int set_primitive_type( int val);
		Dynamic set_primitive_type_dyn();

		virtual ::phoenix::Texture set_texture( ::phoenix::Texture val);
		Dynamic set_texture_dyn();

		virtual ::phoenix::Shader set_shader( ::phoenix::Shader val);
		Dynamic set_shader_dyn();

		virtual Float set_depth( Float val);
		Dynamic set_depth_dyn();

		virtual bool set_clip( bool val);
		Dynamic set_clip_dyn();

		virtual Float set_clip_x( Float val);
		Dynamic set_clip_x_dyn();

		virtual Float set_clip_y( Float val);
		Dynamic set_clip_y_dyn();

		virtual Float set_clip_w( Float val);
		Dynamic set_clip_w_dyn();

		virtual Float set_clip_h( Float val);
		Dynamic set_clip_h_dyn();

};

} // end namespace phoenix
} // end namespace geometry

#endif /* INCLUDED_phoenix_geometry_GeometryState */ 
