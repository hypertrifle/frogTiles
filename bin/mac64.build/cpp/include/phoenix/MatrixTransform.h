#ifndef INCLUDED_phoenix_MatrixTransform
#define INCLUDED_phoenix_MatrixTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,MatrixTransform)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  MatrixTransform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MatrixTransform_obj OBJ_;
		MatrixTransform_obj();
		Void __construct(::phoenix::Vector p,::phoenix::Quaternion r,::phoenix::Vector s);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.MatrixTransform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MatrixTransform_obj > __new(::phoenix::Vector p,::phoenix::Quaternion r,::phoenix::Vector s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MatrixTransform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MatrixTransform","\xcb","\x8e","\x5b","\x5b"); }

		::phoenix::Vector pos;
		::phoenix::Quaternion rotation;
		::phoenix::Vector scale;
		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_MatrixTransform */ 
