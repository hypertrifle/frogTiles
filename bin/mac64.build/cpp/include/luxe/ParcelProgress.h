#ifndef INCLUDED_luxe_ParcelProgress
#define INCLUDED_luxe_ParcelProgress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Parcel)
HX_DECLARE_CLASS1(luxe,ParcelProgress)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  ParcelProgress_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ParcelProgress_obj OBJ_;
		ParcelProgress_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.ParcelProgress")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ParcelProgress_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ParcelProgress_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ParcelProgress","\xb6","\x31","\x72","\x9c"); }

		::luxe::Parcel parcel;
		::luxe::Sprite progress_bar;
		::luxe::Visual progress_border;
		::luxe::Sprite background;
		::luxe::Sprite image_logo;
		Dynamic options;
		Float width;
		Float height;
		virtual Void set_progress( Float amount);
		Dynamic set_progress_dyn();

		virtual Void onprogress( Dynamic _state);
		Dynamic onprogress_dyn();

		virtual Void oncomplete( ::luxe::Parcel p);
		Dynamic oncomplete_dyn();

		virtual Void do_complete( );
		Dynamic do_complete_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_ParcelProgress */ 
