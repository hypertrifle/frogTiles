#ifndef INCLUDED_luxe_PhysicsEngine
#define INCLUDED_luxe_PhysicsEngine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,PhysicsEngine)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  PhysicsEngine_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PhysicsEngine_obj OBJ_;
		PhysicsEngine_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.PhysicsEngine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PhysicsEngine_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsEngine_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PhysicsEngine","\xc9","\x93","\x43","\x4f"); }

		::String name;
		bool paused;
		::phoenix::Vector gravity;
		bool draw;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void _render( Dynamic _);
		Dynamic _render_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool get_paused( );
		Dynamic get_paused_dyn();

		virtual bool set_paused( Dynamic _pause);
		Dynamic set_paused_dyn();

		virtual bool get_draw( );
		Dynamic get_draw_dyn();

		virtual bool set_draw( bool _draw);
		Dynamic set_draw_dyn();

		virtual ::phoenix::Vector get_gravity( );
		Dynamic get_gravity_dyn();

		virtual ::phoenix::Vector set_gravity( ::phoenix::Vector _gravity);
		Dynamic set_gravity_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_PhysicsEngine */ 
