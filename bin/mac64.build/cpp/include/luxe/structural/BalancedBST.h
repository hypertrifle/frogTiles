#ifndef INCLUDED_luxe_structural_BalancedBST
#define INCLUDED_luxe_structural_BalancedBST

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,structural,BalancedBST)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTIterator)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTNode)
HX_DECLARE_CLASS2(luxe,structural,BalancedBSTTraverseMethod)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  BalancedBST_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BalancedBST_obj OBJ_;
		BalancedBST_obj();
		Void __construct(Dynamic compare_function);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.structural.BalancedBST")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BalancedBST_obj > __new(Dynamic compare_function);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedBST_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BalancedBST","\x7b","\xa6","\xd6","\x9c"); }

		::luxe::structural::BalancedBSTNode root;
		Dynamic compare;
		Dynamic &compare_dyn() { return compare;}
		bool empty;
		virtual int size( );
		Dynamic size_dyn();

		virtual int depth( );
		Dynamic depth_dyn();

		virtual Void insert( Dynamic _key,Dynamic _value);
		Dynamic insert_dyn();

		virtual bool contains( Dynamic _key);
		Dynamic contains_dyn();

		virtual Dynamic find( Dynamic _key);
		Dynamic find_dyn();

		virtual int rank( Dynamic _key);
		Dynamic rank_dyn();

		virtual Dynamic select( int _rank);
		Dynamic select_dyn();

		virtual Dynamic smallest( );
		Dynamic smallest_dyn();

		virtual Dynamic largest( );
		Dynamic largest_dyn();

		virtual bool remove( Dynamic _key);
		Dynamic remove_dyn();

		virtual bool remove_smallest( );
		Dynamic remove_smallest_dyn();

		virtual bool remove_largest( );
		Dynamic remove_largest_dyn();

		virtual Dynamic floor( Dynamic _key);
		Dynamic floor_dyn();

		virtual Dynamic ceil( Dynamic _key);
		Dynamic ceil_dyn();

		virtual cpp::ArrayBase toArray( );
		Dynamic toArray_dyn();

		virtual cpp::ArrayBase keys( );
		Dynamic keys_dyn();

		virtual ::luxe::structural::BalancedBSTIterator iterator( );
		Dynamic iterator_dyn();

		virtual Void traverse_node( ::luxe::structural::BalancedBSTNode _node,::luxe::structural::BalancedBSTTraverseMethod _method,Dynamic _on_traverse);
		Dynamic traverse_node_dyn();

		virtual bool get_empty( );
		Dynamic get_empty_dyn();

		virtual int node_depth( ::luxe::structural::BalancedBSTNode _node);
		Dynamic node_depth_dyn();

		virtual int node_count( ::luxe::structural::BalancedBSTNode _node);
		Dynamic node_count_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_insert( ::luxe::structural::BalancedBSTNode _node,Dynamic _key,Dynamic _value);
		Dynamic node_insert_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_update_count( ::luxe::structural::BalancedBSTNode _node);
		Dynamic node_update_count_dyn();

		virtual Dynamic node_find( ::luxe::structural::BalancedBSTNode _node,Dynamic _key);
		Dynamic node_find_dyn();

		virtual int node_rank( Dynamic _key,::luxe::structural::BalancedBSTNode _node);
		Dynamic node_rank_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_select( ::luxe::structural::BalancedBSTNode _node,int _rank);
		Dynamic node_select_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_smallest( ::luxe::structural::BalancedBSTNode _node);
		Dynamic node_smallest_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_largest( ::luxe::structural::BalancedBSTNode _node);
		Dynamic node_largest_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_floor( ::luxe::structural::BalancedBSTNode _node,Dynamic _key);
		Dynamic node_floor_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_ceil( ::luxe::structural::BalancedBSTNode _node,Dynamic _key);
		Dynamic node_ceil_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_remove_smallest( ::luxe::structural::BalancedBSTNode _node);
		Dynamic node_remove_smallest_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_remove_largest( ::luxe::structural::BalancedBSTNode _node);
		Dynamic node_remove_largest_dyn();

		virtual ::luxe::structural::BalancedBSTNode node_remove( ::luxe::structural::BalancedBSTNode _node,Dynamic _key);
		Dynamic node_remove_dyn();

		virtual bool is_red( ::luxe::structural::BalancedBSTNode _node);
		Dynamic is_red_dyn();

		virtual ::luxe::structural::BalancedBSTNode rotate_left( ::luxe::structural::BalancedBSTNode _node);
		Dynamic rotate_left_dyn();

		virtual ::luxe::structural::BalancedBSTNode rotate_right( ::luxe::structural::BalancedBSTNode _node);
		Dynamic rotate_right_dyn();

		virtual Void swap_color( ::luxe::structural::BalancedBSTNode _node);
		Dynamic swap_color_dyn();

		virtual ::luxe::structural::BalancedBSTNode move_red_left( ::luxe::structural::BalancedBSTNode _node);
		Dynamic move_red_left_dyn();

		virtual ::luxe::structural::BalancedBSTNode move_red_right( ::luxe::structural::BalancedBSTNode _node);
		Dynamic move_red_right_dyn();

		virtual ::luxe::structural::BalancedBSTNode balance( ::luxe::structural::BalancedBSTNode _node);
		Dynamic balance_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_BalancedBST */ 
