#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#define INCLUDED_snow_modules_opengl_native_GLObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
namespace snow{
namespace modules{
namespace opengl{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  GLObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLObject_obj OBJ_;
		GLObject_obj();
		Void __construct(int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.modules.opengl.native.GLObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLObject_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLObject","\xc4","\xda","\x30","\x7f"); }

		int id;
		bool invalidated;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool set_invalidated( bool value);
		Dynamic set_invalidated_dyn();

};

} // end namespace snow
} // end namespace modules
} // end namespace opengl
} // end namespace native

#endif /* INCLUDED_snow_modules_opengl_native_GLObject */ 
