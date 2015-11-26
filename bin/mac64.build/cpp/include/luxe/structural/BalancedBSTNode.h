#ifndef INCLUDED_luxe_structural_BalancedBSTNode
#define INCLUDED_luxe_structural_BalancedBSTNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,structural,BalancedBSTNode)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  BalancedBSTNode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BalancedBSTNode_obj OBJ_;
		BalancedBSTNode_obj();
		Void __construct(Dynamic _key,Dynamic _value,int _node_count,bool _color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.structural.BalancedBSTNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BalancedBSTNode_obj > __new(Dynamic _key,Dynamic _value,int _node_count,bool _color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedBSTNode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BalancedBSTNode","\x1d","\x36","\x4e","\x4a"); }

		::luxe::structural::BalancedBSTNode left;
		::luxe::structural::BalancedBSTNode right;
		int nodecount;
		bool color;
		Dynamic key;
		Dynamic value;
};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_BalancedBSTNode */ 
