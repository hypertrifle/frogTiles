#ifndef INCLUDED_phoenix_Uniform
#define INCLUDED_phoenix_Uniform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Uniform)
namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES  Uniform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Uniform_obj OBJ_;
		Uniform_obj();
		Void __construct(::String _name,Dynamic _value,Dynamic _location);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="phoenix.Uniform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Uniform_obj > __new(::String _name,Dynamic _value,Dynamic _location);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Uniform","\x14","\x69","\xb5","\x82"); }

		::String name;
		Dynamic value;
		Dynamic location;
};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_Uniform */ 
