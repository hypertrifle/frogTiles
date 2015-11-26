#ifndef INCLUDED_luxe_structural__BalancedBST_NodeColor
#define INCLUDED_luxe_structural__BalancedBST_NodeColor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(luxe,structural,_BalancedBST,NodeColor)
namespace luxe{
namespace structural{
namespace _BalancedBST{


class HXCPP_CLASS_ATTRIBUTES  NodeColor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NodeColor_obj OBJ_;
		NodeColor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.structural._BalancedBST.NodeColor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NodeColor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NodeColor_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NodeColor","\xe1","\x2f","\x65","\x90"); }

		static void __boot();
		static bool red;
		static bool black;
};

} // end namespace luxe
} // end namespace structural
} // end namespace _BalancedBST

#endif /* INCLUDED_luxe_structural__BalancedBST_NodeColor */ 
