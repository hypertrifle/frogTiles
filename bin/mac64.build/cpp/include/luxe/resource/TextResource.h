#ifndef INCLUDED_luxe_resource_TextResource
#define INCLUDED_luxe_resource_TextResource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(luxe,resource,TextResource)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,_system,assets,Asset)
HX_DECLARE_CLASS3(snow,_system,assets,AssetText)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  TextResource_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef TextResource_obj OBJ_;
		TextResource_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.resource.TextResource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextResource_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextResource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextResource","\xbb","\x26","\x2e","\x0f"); }

		::snow::_system::assets::AssetText asset;
		virtual ::snow::api::Promise reload( );

		virtual Void clear( );

		virtual Float memory_use( );

};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_TextResource */ 
