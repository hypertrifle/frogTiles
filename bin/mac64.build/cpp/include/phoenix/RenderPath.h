#ifndef INCLUDED_phoenix_RenderPath
#define INCLUDED_phoenix_RenderPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,RenderPath)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(phoenix,RendererStats)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  RenderPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderPath_obj OBJ_;
		RenderPath_obj();
		Void __construct(::phoenix::Renderer _renderer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.RenderPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RenderPath_obj > __new(::phoenix::Renderer _renderer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderPath_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RenderPath","\x3b","\xe4","\x0c","\xde"); }

		::phoenix::Renderer renderer;
		virtual Void render( Array< ::Dynamic > _batchers,::phoenix::RendererStats _stats);
		Dynamic render_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RenderPath */ 
