#include <hxcpp.h>

#ifndef INCLUDED_luxe_structural_BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
namespace luxe{
namespace structural{

Void BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__construct(::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _tree)
{
HX_STACK_FRAME("luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","new",0xb4bc9901,"luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.new","luxe/structural/BalancedBST.hx",681,0xa0b365fc)
HX_STACK_THIS(this)
HX_STACK_ARG(_tree,"_tree")
{
	HX_STACK_LINE(683)
	bool tmp = (_tree == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(683)
	if ((tmp)){
		HX_STACK_LINE(683)
		return null();
	}
	HX_STACK_LINE(684)
	bool tmp1 = (_tree->root == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(684)
	if ((tmp1)){
		HX_STACK_LINE(684)
		return null();
	}
	HX_STACK_LINE(686)
	this->tree = _tree;
	HX_STACK_LINE(687)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(687)
	{
		HX_STACK_LINE(687)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3 = this->tree;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(687)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp3->root;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(687)
		while((true)){
			HX_STACK_LINE(687)
			bool tmp4 = (_node->left != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(687)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(687)
			if ((tmp5)){
				HX_STACK_LINE(687)
				break;
			}
			HX_STACK_LINE(687)
			_node = _node->left;
		}
		HX_STACK_LINE(687)
		tmp2 = _node;
	}
	HX_STACK_LINE(687)
	this->current = tmp2;
	HX_STACK_LINE(688)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(688)
	{
		HX_STACK_LINE(688)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->tree;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(688)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp4->root;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(688)
		while((true)){
			HX_STACK_LINE(688)
			bool tmp5 = (_node->right != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(688)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(688)
			if ((tmp6)){
				HX_STACK_LINE(688)
				break;
			}
			HX_STACK_LINE(688)
			_node = _node->right;
		}
		HX_STACK_LINE(688)
		tmp3 = _node;
	}
	HX_STACK_LINE(688)
	this->rightest = tmp3;
}
;
	return null();
}

//BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::~BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj() { }

Dynamic BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__CreateEmpty() { return  new BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj; }
hx::ObjectPtr< BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new(::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _tree)
{  hx::ObjectPtr< BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > _result_ = new BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	_result_->__construct(_tree);
	return _result_;}

Dynamic BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > _result_ = new BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::hasNext( ){
	HX_STACK_FRAME("luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","hasNext",0xf836d28e,"luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.hasNext","luxe/structural/BalancedBST.hx",692,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(694)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(694)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(694)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(694)
	if ((tmp2)){
		HX_STACK_LINE(694)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->rightest;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(694)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(694)
		tmp3 = (tmp5 == null());
	}
	else{
		HX_STACK_LINE(694)
		tmp3 = true;
	}
	HX_STACK_LINE(694)
	if ((tmp3)){
		HX_STACK_LINE(694)
		return false;
	}
	HX_STACK_LINE(696)
	::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->tree;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(696)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->current;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(696)
	::phoenix::geometry::GeometryKey tmp6 = tmp5->key;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(696)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = this->rightest;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(696)
	::phoenix::geometry::GeometryKey tmp8 = tmp7->key;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(696)
	int tmp9 = tmp4->compare(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(696)
	bool tmp10 = (tmp9 <= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(696)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,hasNext,return )

::phoenix::geometry::Geometry BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::next( ){
	HX_STACK_FRAME("luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","next",0x70494932,"luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.next","luxe/structural/BalancedBST.hx",700,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(701)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(701)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = tmp;		HX_STACK_VAR(_temp,"_temp");
	HX_STACK_LINE(702)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(702)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(702)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(702)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(702)
	if ((tmp3)){
		HX_STACK_LINE(702)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->rightest;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(702)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(702)
		tmp4 = (tmp6 == null());
	}
	else{
		HX_STACK_LINE(702)
		tmp4 = true;
	}
	HX_STACK_LINE(702)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(702)
	if ((tmp4)){
		HX_STACK_LINE(702)
		tmp5 = false;
	}
	else{
		HX_STACK_LINE(702)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = this->tree;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(702)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = this->current;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(702)
		::phoenix::geometry::GeometryKey tmp8 = tmp7->key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(702)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = this->rightest;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(702)
		::phoenix::geometry::GeometryKey tmp10 = tmp9->key;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(702)
		int tmp11 = tmp6->compare(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(702)
		tmp5 = (tmp11 <= (int)0);
	}
	HX_STACK_LINE(702)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(702)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(702)
	if ((tmp6)){
		HX_STACK_LINE(702)
		tmp7 = null();
	}
	else{
		HX_STACK_LINE(702)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->current;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(702)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = tmp8->right;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(702)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(702)
		if ((tmp10)){
			HX_STACK_LINE(702)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp11 = this->current;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(702)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp11->right;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(702)
			while((true)){
				HX_STACK_LINE(702)
				bool tmp12 = (_node->left != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(702)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(702)
				if ((tmp13)){
					HX_STACK_LINE(702)
					break;
				}
				HX_STACK_LINE(702)
				_node = _node->left;
			}
			HX_STACK_LINE(702)
			tmp7 = _node;
		}
		else{
			HX_STACK_LINE(702)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
			HX_STACK_LINE(702)
			::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp11 = this->tree;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(702)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp1 = tmp11->root;		HX_STACK_VAR(_temp1,"_temp1");
			HX_STACK_LINE(702)
			while((true)){
				HX_STACK_LINE(702)
				bool tmp12 = (_temp1 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(702)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(702)
				if ((tmp13)){
					HX_STACK_LINE(702)
					break;
				}
				HX_STACK_LINE(702)
				::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp14 = this->tree;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(702)
				::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp15 = this->current;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(702)
				::phoenix::geometry::GeometryKey tmp16 = tmp15->key;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(702)
				::phoenix::geometry::GeometryKey tmp17 = _temp1->key;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(702)
				int tmp18 = tmp14->compare(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(702)
				int _comp = tmp18;		HX_STACK_VAR(_comp,"_comp");
				HX_STACK_LINE(702)
				bool tmp19 = (_comp < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(702)
				if ((tmp19)){
					HX_STACK_LINE(702)
					_next = _temp1;
					HX_STACK_LINE(702)
					_temp1 = _temp1->left;
				}
				else{
					HX_STACK_LINE(702)
					bool tmp20 = (_comp > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(702)
					if ((tmp20)){
						HX_STACK_LINE(702)
						_temp1 = _temp1->right;
					}
					else{
						HX_STACK_LINE(702)
						this->current = _next;
						HX_STACK_LINE(702)
						break;
					}
				}
			}
			HX_STACK_LINE(702)
			tmp7 = _next;
		}
	}
	HX_STACK_LINE(702)
	this->current = tmp7;
	HX_STACK_LINE(703)
	::phoenix::geometry::Geometry tmp8 = _temp->value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(703)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,next,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::update_next( ){
	HX_STACK_FRAME("luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","update_next",0xeec26bca,"luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.update_next","luxe/structural/BalancedBST.hx",706,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(708)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(708)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(708)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(708)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(708)
	if ((tmp2)){
		HX_STACK_LINE(708)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp4 = this->rightest;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(708)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(708)
		tmp3 = (tmp5 == null());
	}
	else{
		HX_STACK_LINE(708)
		tmp3 = true;
	}
	HX_STACK_LINE(708)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(708)
	if ((tmp3)){
		HX_STACK_LINE(708)
		tmp4 = false;
	}
	else{
		HX_STACK_LINE(708)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp5 = this->tree;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(708)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = this->current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(708)
		::phoenix::geometry::GeometryKey tmp7 = tmp6->key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(708)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp8 = this->rightest;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(708)
		::phoenix::geometry::GeometryKey tmp9 = tmp8->key;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(708)
		int tmp10 = tmp5->compare(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(708)
		tmp4 = (tmp10 <= (int)0);
	}
	HX_STACK_LINE(708)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(708)
	if ((tmp5)){
		HX_STACK_LINE(708)
		return null();
	}
	HX_STACK_LINE(709)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp6 = this->current;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(709)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp7 = tmp6->right;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(709)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(709)
	if ((tmp8)){
		HX_STACK_LINE(709)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(709)
		{
			HX_STACK_LINE(709)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = this->current;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(709)
			::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp10->right;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(709)
			while((true)){
				HX_STACK_LINE(709)
				bool tmp11 = (_node->left != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(709)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(709)
				if ((tmp12)){
					HX_STACK_LINE(709)
					break;
				}
				HX_STACK_LINE(709)
				_node = _node->left;
			}
			HX_STACK_LINE(709)
			tmp9 = _node;
		}
		HX_STACK_LINE(709)
		return tmp9;
	}
	HX_STACK_LINE(711)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _next = null();		HX_STACK_VAR(_next,"_next");
	HX_STACK_LINE(712)
	::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp9 = this->tree;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(712)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _temp = tmp9->root;		HX_STACK_VAR(_temp,"_temp");
	HX_STACK_LINE(713)
	while((true)){
		HX_STACK_LINE(713)
		bool tmp10 = (_temp != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(713)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(713)
		if ((tmp11)){
			HX_STACK_LINE(713)
			break;
		}
		HX_STACK_LINE(715)
		::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp12 = this->tree;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(715)
		::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp13 = this->current;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(715)
		::phoenix::geometry::GeometryKey tmp14 = tmp13->key;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(715)
		::phoenix::geometry::GeometryKey tmp15 = _temp->key;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(715)
		int tmp16 = tmp12->compare(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(715)
		int _comp = tmp16;		HX_STACK_VAR(_comp,"_comp");
		HX_STACK_LINE(716)
		bool tmp17 = (_comp < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(716)
		if ((tmp17)){
			HX_STACK_LINE(717)
			_next = _temp;
			HX_STACK_LINE(718)
			_temp = _temp->left;
		}
		else{
			HX_STACK_LINE(719)
			bool tmp18 = (_comp > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(719)
			if ((tmp18)){
				HX_STACK_LINE(720)
				_temp = _temp->right;
			}
			else{
				HX_STACK_LINE(722)
				this->current = _next;
				HX_STACK_LINE(723)
				break;
			}
		}
	}
	HX_STACK_LINE(728)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp10 = _next;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(728)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,update_next,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::_min( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","_min",0x66651ad2,"luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry._min","luxe/structural/BalancedBST.hx",732,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(734)
	while((true)){
		HX_STACK_LINE(734)
		bool tmp = (_node->left != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(734)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(734)
		if ((tmp1)){
			HX_STACK_LINE(734)
			break;
		}
		HX_STACK_LINE(734)
		_node = _node->left;
	}
	HX_STACK_LINE(736)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = _node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(736)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,_min,return )

::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::_max( ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node){
	HX_STACK_FRAME("luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","_max",0x666513e4,"luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry._max","luxe/structural/BalancedBST.hx",740,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(742)
	while((true)){
		HX_STACK_LINE(742)
		bool tmp = (_node->right != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(742)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(742)
		if ((tmp1)){
			HX_STACK_LINE(742)
			break;
		}
		HX_STACK_LINE(742)
		_node = _node->right;
	}
	HX_STACK_LINE(744)
	::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp = _node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(744)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,_max,return )


BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj()
{
}

void BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry);
	HX_MARK_MEMBER_NAME(tree,"tree");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(rightest,"rightest");
	HX_MARK_END_CLASS();
}

void BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tree,"tree");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(rightest,"rightest");
}

Dynamic BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { return tree; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"_min") ) { return _min_dyn(); }
		if (HX_FIELD_EQ(inName,"_max") ) { return _max_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightest") ) { return rightest; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_next") ) { return update_next_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { tree=inValue.Cast< ::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightest") ) { rightest=inValue.Cast< ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"));
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("rightest","\xea","\xcd","\x2c","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,tree),HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d")},
	{hx::fsObject /*::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsObject /*::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,rightest),HX_HCSTRING("rightest","\xea","\xcd","\x2c","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("rightest","\xea","\xcd","\x2c","\xe4"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("update_next","\x29","\x9a","\x7e","\x4e"),
	HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"),
	HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#endif

hx::Class BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass;

void BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","\x8f","\x04","\x62","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BalancedBSTIterator_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace structural
