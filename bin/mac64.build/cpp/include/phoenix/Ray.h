#ifndef INCLUDED_phoenix_Ray
#define INCLUDED_phoenix_Ray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Ray)
HX_DECLARE_CLASS1(phoenix,Rectangle)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Ray_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ray_obj OBJ_;
		Ray_obj();
		Void __construct(::phoenix::Vector _screen_pos,::phoenix::Camera _camera,::phoenix::Rectangle _viewport);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Ray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ray_obj > __new(::phoenix::Vector _screen_pos,::phoenix::Camera _camera,::phoenix::Rectangle _viewport);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ray_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Ray","\xca","\x8d","\x3e","\x00"); }

		::phoenix::Vector origin;
		::phoenix::Vector end;
		::phoenix::Vector dir;
		::phoenix::Camera camera;
		::phoenix::Rectangle viewport;
		virtual Void refresh( ::phoenix::Vector _screen_pos);
		Dynamic refresh_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Ray */ 
