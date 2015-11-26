#ifndef INCLUDED_luxe_Cursor
#define INCLUDED_luxe_Cursor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Cursor)
HX_DECLARE_CLASS1(luxe,Screen)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Cursor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Cursor_obj OBJ_;
		Cursor_obj();
		Void __construct(::luxe::Screen _screen);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Cursor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Cursor_obj > __new(::luxe::Screen _screen);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cursor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Cursor","\xf6","\x02","\x7d","\x73"); }

		bool visible;
		bool grab;
		bool lock;
		::phoenix::Vector pos;
		::luxe::Screen screen;
		bool ignore;
		virtual Void set_internal( ::phoenix::Vector _pos);
		Dynamic set_internal_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool _visible);
		Dynamic set_visible_dyn();

		virtual bool get_grab( );
		Dynamic get_grab_dyn();

		virtual bool get_lock( );
		Dynamic get_lock_dyn();

		virtual bool set_grab( bool _grab);
		Dynamic set_grab_dyn();

		virtual bool set_lock( bool _lock);
		Dynamic set_lock_dyn();

		virtual ::phoenix::Vector get_pos( );
		Dynamic get_pos_dyn();

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector _p);
		Dynamic set_pos_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Cursor */ 
