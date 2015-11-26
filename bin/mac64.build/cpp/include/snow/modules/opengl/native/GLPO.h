#ifndef INCLUDED_snow_modules_opengl_native_GLPO
#define INCLUDED_snow_modules_opengl_native_GLPO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLPO)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLSO)
namespace snow{
namespace modules{
namespace opengl{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  GLPO_obj : public ::snow::modules::opengl::native::GLObject_obj{
	public:
		typedef ::snow::modules::opengl::native::GLObject_obj super;
		typedef GLPO_obj OBJ_;
		GLPO_obj();
		Void __construct(int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="snow.modules.opengl.native.GLPO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLPO_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLPO_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLPO","\x64","\x17","\x28","\x2f"); }

		Array< ::Dynamic > shaders;
		virtual ::String toString( );

};

} // end namespace snow
} // end namespace modules
} // end namespace opengl
} // end namespace native

#endif /* INCLUDED_snow_modules_opengl_native_GLPO */ 
