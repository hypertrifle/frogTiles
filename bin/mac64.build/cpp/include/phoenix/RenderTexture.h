#ifndef INCLUDED_phoenix_RenderTexture
#define INCLUDED_phoenix_RenderTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,RenderTexture)
HX_DECLARE_CLASS1(phoenix,Texture)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLFBO)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLObject)
HX_DECLARE_CLASS4(snow,modules,opengl,native,GLRBO)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  RenderTexture_obj : public ::phoenix::Texture_obj{
	public:
		typedef ::phoenix::Texture_obj super;
		typedef RenderTexture_obj OBJ_;
		RenderTexture_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.RenderTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RenderTexture_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderTexture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RenderTexture","\x05","\x8c","\xbe","\xe2"); }

		::snow::modules::opengl::native::GLFBO fbo;
		::snow::modules::opengl::native::GLRBO renderbuffer;
		virtual Void clear( );

		virtual Void bindBuffer( );
		Dynamic bindBuffer_dyn();

		virtual Void unbindBuffer( ::snow::modules::opengl::native::GLFBO _other);
		Dynamic unbindBuffer_dyn();

		virtual Void bindRenderBuffer( );
		Dynamic bindRenderBuffer_dyn();

		virtual Void unbindRenderBuffer( ::snow::modules::opengl::native::GLRBO _other);
		Dynamic unbindRenderBuffer_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RenderTexture */ 
