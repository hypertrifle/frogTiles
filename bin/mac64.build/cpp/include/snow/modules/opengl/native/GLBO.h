#ifndef INCLUDED_snow_modules_opengl_native_GLBO
#define INCLUDED_snow_modules_opengl_native_GLBO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLBO)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
namespace snow{
namespace modules{
namespace opengl{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  GLBO_obj : public ::snow::modules::opengl::native::GLObject_obj{
	public:
		typedef ::snow::modules::opengl::native::GLObject_obj super;
		typedef GLBO_obj OBJ_;
		GLBO_obj();
		Void __construct(int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.modules.opengl.native.GLBO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLBO_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBO_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLBO","\x32","\x0b","\x28","\x2f"); }

		virtual ::String toString( );

};

} // end namespace snow
} // end namespace modules
} // end namespace opengl
} // end namespace native

#endif /* INCLUDED_snow_modules_opengl_native_GLBO */ 
