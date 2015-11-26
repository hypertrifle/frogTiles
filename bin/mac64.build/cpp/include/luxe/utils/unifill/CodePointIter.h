#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#define INCLUDED_luxe_utils_unifill_CodePointIter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,utils,unifill,CodePointIter)
namespace luxe{
namespace utils{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES  CodePointIter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CodePointIter_obj OBJ_;
		CodePointIter_obj();
		Void __construct(::String s);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.utils.unifill.CodePointIter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CodePointIter_obj > __new(::String s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CodePointIter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CodePointIter","\x7b","\x7e","\x98","\xb4"); }

		::String string;
		int index;
		int endIndex;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		int i;
		virtual int next( );
		Dynamic next_dyn();

};

} // end namespace luxe
} // end namespace utils
} // end namespace unifill

#endif /* INCLUDED_luxe_utils_unifill_CodePointIter */ 
