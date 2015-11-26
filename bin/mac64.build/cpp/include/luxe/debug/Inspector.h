#ifndef INCLUDED_luxe_debug_Inspector
#define INCLUDED_luxe_debug_Inspector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Text)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,debug,Inspector)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Inspector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Inspector_obj OBJ_;
		Inspector_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.debug.Inspector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Inspector_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Inspector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Inspector","\xd7","\xd9","\xe1","\x99"); }

		::phoenix::Vector pos;
		::phoenix::Vector size;
		::luxe::Text title;
		::luxe::Text version;
		::luxe::Sprite window;
		::phoenix::Batcher batcher;
		Dynamic onrefresh;
		Dynamic &onrefresh_dyn() { return onrefresh;}
		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual ::phoenix::Vector set_size( ::phoenix::Vector _size);
		Dynamic set_size_dyn();

		virtual ::phoenix::Vector set_pos( ::phoenix::Vector _pos);
		Dynamic set_pos_dyn();

		virtual Void create_window( );
		Dynamic create_window_dyn();

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_Inspector */ 
