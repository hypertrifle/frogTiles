#ifndef INCLUDED_luxe_resource_JSONResource
#define INCLUDED_luxe_resource_JSONResource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,JSONResource)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,_system,assets,Asset)
HX_DECLARE_CLASS3(snow,_system,assets,AssetJSON)
namespace luxe{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  JSONResource_obj : public ::luxe::resource::Resource_obj{
	public:
		typedef ::luxe::resource::Resource_obj super;
		typedef JSONResource_obj OBJ_;
		JSONResource_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.resource.JSONResource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JSONResource_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JSONResource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("JSONResource","\x16","\x8b","\x4d","\x52"); }

		::snow::_system::assets::AssetJSON asset;
		virtual ::snow::api::Promise reload( );

		virtual Void clear( );

};

} // end namespace luxe
} // end namespace resource

#endif /* INCLUDED_luxe_resource_JSONResource */ 
