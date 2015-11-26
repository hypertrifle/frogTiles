#ifndef INCLUDED_luxe_Emitter
#define INCLUDED_luxe_Emitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(luxe,Emitter)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Emitter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Emitter_obj OBJ_;
		Emitter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Emitter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Emitter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Emitter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Emitter","\x4e","\x5d","\x47","\x8c"); }

		::haxe::ds::IntMap bindings;
		::List connected;
		::List _to_remove;
		virtual Void emit( Dynamic event,Dynamic data,Dynamic pos);
		Dynamic emit_dyn();

		virtual Void on( Dynamic event,Dynamic handler,Dynamic pos);
		Dynamic on_dyn();

		virtual bool off( Dynamic event,Dynamic handler,Dynamic pos);
		Dynamic off_dyn();

		virtual cpp::ArrayBase connections( Dynamic handler);
		Dynamic connections_dyn();

		bool _checking;
		virtual Void _check( );
		Dynamic _check_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Emitter */ 
