#ifndef INCLUDED_luxe_structural_BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#define INCLUDED_luxe_structural_BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,structural,BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS2(luxe,structural,BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj OBJ_;
		BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
		Void __construct(::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _tree);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __new(::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _tree);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","\xd6","\x87","\xe4","\xde"); }

		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tree;
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry current;
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry rightest;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::phoenix::geometry::Geometry next( );
		Dynamic next_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry update_next( );
		Dynamic update_next_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _min( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic _min_dyn();

		virtual ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _max( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node);
		Dynamic _max_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry */ 
