#ifndef INCLUDED_luxe_Parcel
#define INCLUDED_luxe_Parcel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Parcel)
HX_DECLARE_CLASS1(luxe,Resources)
HX_DECLARE_CLASS2(luxe,resource,Resource)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Parcel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Parcel_obj OBJ_;
		Parcel_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.Parcel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Parcel_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parcel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Parcel","\xe9","\xec","\x10","\x22"); }

		::luxe::Resources _system;
		::String id;
		Dynamic list;
		Array< ::String > loaded;
		Float time_to_load;
		int state;
		::luxe::Emitter emitter;
		Dynamic oncomplete;
		Dynamic &oncomplete_dyn() { return oncomplete;}
		Dynamic onprogress;
		Dynamic &onprogress_dyn() { return onprogress;}
		Dynamic onfailed;
		Dynamic &onfailed_dyn() { return onfailed;}
		Float start_load;
		Float load_time_spacing;
		Float load_start_delay;
		virtual Void on( int ev,Dynamic handler);
		Dynamic on_dyn();

		virtual Void off( int ev,Dynamic handler);
		Dynamic off_dyn();

		virtual Void emit( int ev,Dynamic data);
		Dynamic emit_dyn();

		virtual bool is_loaded( ::String _id);
		Dynamic is_loaded_dyn();

		virtual Void load( ::String _load_id);
		Dynamic load_dyn();

		virtual Void unload( Dynamic _empty_list);
		Dynamic unload_dyn();

		virtual Void from_json( Dynamic _json_object);
		Dynamic from_json_dyn();

		virtual Void one_loaded( ::String _item_id,::String _load_id,::luxe::resource::Resource _resource,int _index,int _total);
		Dynamic one_loaded_dyn();

		virtual Void one_failed( ::String _item_id,::String _load_id,Dynamic _error,int _index,int _total);
		Dynamic one_failed_dyn();

		virtual Array< ::String > get_listed( );
		Dynamic get_listed_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual Void do_complete( ::String _load_id);
		Dynamic do_complete_dyn();

		virtual Dynamic empty_list( );
		Dynamic empty_list_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Parcel */ 
