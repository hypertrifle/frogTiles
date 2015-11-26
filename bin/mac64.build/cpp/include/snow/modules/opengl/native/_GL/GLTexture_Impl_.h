#ifndef INCLUDED_snow_modules_opengl_native__GL_GLTexture_Impl_
#define INCLUDED_snow_modules_opengl_native__GL_GLTexture_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLTO)
HX_DECLARE_CLASS5(snow,modules,opengl,native,_GL,GLTexture_Impl_)
namespace snow{
namespace modules{
namespace opengl{
namespace native{
namespace _GL{


class HXCPP_CLASS_ATTRIBUTES  GLTexture_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLTexture_Impl__obj OBJ_;
		GLTexture_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.modules.opengl.native._GL.GLTexture_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLTexture_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLTexture_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLTexture_Impl_","\x56","\xfa","\x3a","\x10"); }

		static ::snow::modules::opengl::native::GLTO _new( int _id);
		static Dynamic _new_dyn();

		static int get_id( ::snow::modules::opengl::native::GLTO this1);
		static Dynamic get_id_dyn();

		static bool get_invalidated( ::snow::modules::opengl::native::GLTO this1);
		static Dynamic get_invalidated_dyn();

		static bool set_invalidated( ::snow::modules::opengl::native::GLTO this1,bool _invalidated);
		static Dynamic set_invalidated_dyn();

		static int toInt( ::snow::modules::opengl::native::GLTO this1);
		static Dynamic toInt_dyn();

		static Dynamic toDynamic( ::snow::modules::opengl::native::GLTO this1);
		static Dynamic toDynamic_dyn();

		static Dynamic toNullInt( ::snow::modules::opengl::native::GLTO this1);
		static Dynamic toNullInt_dyn();

		static ::snow::modules::opengl::native::GLTO fromInt( int _id);
		static Dynamic fromInt_dyn();

		static ::snow::modules::opengl::native::GLTO fromDynamic( Dynamic _id);
		static Dynamic fromDynamic_dyn();

};

} // end namespace snow
} // end namespace modules
} // end namespace opengl
} // end namespace native
} // end namespace _GL

#endif /* INCLUDED_snow_modules_opengl_native__GL_GLTexture_Impl_ */ 
