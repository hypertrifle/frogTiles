#ifndef INCLUDED_luxe_structural_BalancedBSTIterator
#define INCLUDED_luxe_structural_BalancedBSTIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,structural,BalancedBST)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTIterator)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTNode)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  BalancedBSTIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BalancedBSTIterator_obj OBJ_;
		BalancedBSTIterator_obj();
		Void __construct(::luxe::structural::BalancedBST _tree);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.structural.BalancedBSTIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BalancedBSTIterator_obj > __new(::luxe::structural::BalancedBST _tree);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedBSTIterator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BalancedBSTIterator","\x89","\x1f","\x36","\xb4"); }

		::luxe::structural::BalancedBST tree;
		::luxe::structural::BalancedBSTNode current;
		::luxe::structural::BalancedBSTNode rightest;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual Dynamic next( );
		Dynamic next_dyn();

		virtual ::luxe::structural::BalancedBSTNode update_next( );
		Dynamic update_next_dyn();

		virtual ::luxe::structural::BalancedBSTNode _min( ::luxe::structural::BalancedBSTNode _node);
		Dynamic _min_dyn();

		virtual ::luxe::structural::BalancedBSTNode _max( ::luxe::structural::BalancedBSTNode _node);
		Dynamic _max_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_BalancedBSTIterator */ 
