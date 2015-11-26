#ifndef INCLUDED_luxe_Objects
#define INCLUDED_luxe_Objects

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Objects)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Objects_obj : public ::luxe::Emitter_obj{
	public:
		typedef ::luxe::Emitter_obj super;
		typedef Objects_obj OBJ_;
		Objects_obj();
		Void __construct(::String __o__name,::String __o__id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Objects")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Objects_obj > __new(::String __o__name,::String __o__id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Objects_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Objects","\xb4","\x90","\xa0","\x4f"); }

		::String id;
		::String name;
		virtual ::String set_name( ::String _name);
		Dynamic set_name_dyn();

		virtual ::String set_id( ::String _id);
		Dynamic set_id_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String get_id( );
		Dynamic get_id_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Objects */ 
