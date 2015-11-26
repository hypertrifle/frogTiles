#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST
#include <luxe/structural/BalancedBST.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTIterator
#include <luxe/structural/BalancedBSTIterator.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode
#include <luxe/structural/BalancedBSTNode.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTTraverseMethod
#include <luxe/structural/BalancedBSTTraverseMethod.h>
#endif
namespace luxe{
namespace structural{

Void BalancedBST_obj::__construct(Dynamic compare_function)
{
HX_STACK_FRAME("luxe.structural.BalancedBST","new",0x6f8d6d94,"luxe.structural.BalancedBST.new","luxe/structural/BalancedBST.hx",32,0xa0b365fc)
HX_STACK_THIS(this)
HX_STACK_ARG(compare_function,"compare_function")
{
	HX_STACK_LINE(32)
	this->compare = compare_function;
}
;
	return null();
}

//BalancedBST_obj::~BalancedBST_obj() { }

Dynamic BalancedBST_obj::__CreateEmpty() { return  new BalancedBST_obj; }
hx::ObjectPtr< BalancedBST_obj > BalancedBST_obj::__new(Dynamic compare_function)
{  hx::ObjectPtr< BalancedBST_obj > _result_ = new BalancedBST_obj();
	_result_->__construct(compare_function);
	return _result_;}

Dynamic BalancedBST_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BalancedBST_obj > _result_ = new BalancedBST_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int BalancedBST_obj::size( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","size",0x2f83910d,"luxe.structural.BalancedBST.size","luxe/structural/BalancedBST.hx",39,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::luxe::structural::BalancedBSTNode tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::luxe::structural::BalancedBSTNode _node = tmp1;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(41)
		bool tmp2 = (_node == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		if ((tmp2)){
			HX_STACK_LINE(41)
			tmp = (int)0;
		}
		else{
			HX_STACK_LINE(41)
			tmp = _node->nodecount;
		}
	}
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,size,return )

int BalancedBST_obj::depth( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","depth",0xbdec4337,"luxe.structural.BalancedBST.depth","luxe/structural/BalancedBST.hx",46,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = this->node_depth(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,depth,return )

Void BalancedBST_obj::insert( Dynamic _key,Dynamic _value){
{
		HX_STACK_FRAME("luxe.structural.BalancedBST","insert",0xa122de85,"luxe.structural.BalancedBST.insert","luxe/structural/BalancedBST.hx",53,0xa0b365fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_key,"_key")
		HX_STACK_ARG(_value,"_value")
		HX_STACK_LINE(55)
		::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		Dynamic tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		Dynamic tmp2 = _value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		::luxe::structural::BalancedBSTNode tmp3 = this->node_insert(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		this->root = tmp3;
		HX_STACK_LINE(56)
		::luxe::structural::BalancedBSTNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		tmp4->color = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_obj,insert,(void))

bool BalancedBST_obj::contains( Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","contains",0xc0d7606b,"luxe.structural.BalancedBST.contains","luxe/structural/BalancedBST.hx",61,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(64)
	Dynamic tmp = _key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Dynamic tmp1 = this->find(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,contains,return )

Dynamic BalancedBST_obj::find( Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","find",0x26ebc085,"luxe.structural.BalancedBST.find","luxe/structural/BalancedBST.hx",69,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(71)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	Dynamic tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	Dynamic tmp2 = this->node_find(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,find,return )

int BalancedBST_obj::rank( Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","rank",0x2ed43df8,"luxe.structural.BalancedBST.rank","luxe/structural/BalancedBST.hx",77,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(79)
	Dynamic tmp = _key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::luxe::structural::BalancedBSTNode tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	int tmp2 = this->node_rank(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,rank,return )

Dynamic BalancedBST_obj::select( int _rank){
	HX_STACK_FRAME("luxe.structural.BalancedBST","select",0x6d78b648,"luxe.structural.BalancedBST.select","luxe/structural/BalancedBST.hx",85,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_rank,"_rank")
	HX_STACK_LINE(87)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	int tmp1 = _rank;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	::luxe::structural::BalancedBSTNode tmp2 = this->node_select(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	::luxe::structural::BalancedBSTNode _node = tmp2;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(89)
	bool tmp3 = (_node != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	if ((tmp3)){
		HX_STACK_LINE(90)
		Dynamic tmp4 = _node->key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		return tmp4;
	}
	else{
		HX_STACK_LINE(92)
		return null();
	}
	HX_STACK_LINE(89)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,select,return )

Dynamic BalancedBST_obj::smallest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","smallest",0x3a3d942b,"luxe.structural.BalancedBST.smallest","luxe/structural/BalancedBST.hx",98,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::luxe::structural::BalancedBSTNode tmp1 = this->node_smallest(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	::luxe::structural::BalancedBSTNode _node = tmp1;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(102)
	bool tmp2 = (_node != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	if ((tmp2)){
		HX_STACK_LINE(103)
		Dynamic tmp3 = _node->key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		return tmp3;
	}
	else{
		HX_STACK_LINE(105)
		return null();
	}
	HX_STACK_LINE(102)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,smallest,return )

Dynamic BalancedBST_obj::largest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","largest",0x155e8450,"luxe.structural.BalancedBST.largest","luxe/structural/BalancedBST.hx",111,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	::luxe::structural::BalancedBSTNode tmp1 = this->node_largest(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	::luxe::structural::BalancedBSTNode _node = tmp1;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(115)
	bool tmp2 = (_node != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	if ((tmp2)){
		HX_STACK_LINE(116)
		Dynamic tmp3 = _node->key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		return tmp3;
	}
	else{
		HX_STACK_LINE(118)
		return null();
	}
	HX_STACK_LINE(115)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,largest,return )

bool BalancedBST_obj::remove( Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","remove",0x07ce3790,"luxe.structural.BalancedBST.remove","luxe/structural/BalancedBST.hx",124,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(126)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		::luxe::structural::BalancedBSTNode tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		::luxe::structural::BalancedBSTNode _node = tmp1->left;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(126)
		bool tmp2 = (_node == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		if ((tmp2)){
			HX_STACK_LINE(126)
			tmp = false;
		}
		else{
			HX_STACK_LINE(126)
			tmp = (_node->color == true);
		}
	}
	HX_STACK_LINE(126)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	if ((tmp2)){
		HX_STACK_LINE(126)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::luxe::structural::BalancedBSTNode tmp5 = this->root;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			::luxe::structural::BalancedBSTNode tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			::luxe::structural::BalancedBSTNode _node = tmp6->right;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(126)
			bool tmp7 = (_node == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(126)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			if ((tmp9)){
				HX_STACK_LINE(126)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(126)
				bool tmp10 = (_node->color == true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(126)
				tmp4 = tmp10;
			}
		}
		HX_STACK_LINE(126)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		tmp3 = !(tmp5);
	}
	else{
		HX_STACK_LINE(126)
		tmp3 = false;
	}
	HX_STACK_LINE(126)
	if ((tmp3)){
		HX_STACK_LINE(127)
		::luxe::structural::BalancedBSTNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		tmp4->color = true;
	}
	HX_STACK_LINE(130)
	Dynamic tmp4 = _key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(130)
	bool tmp5 = this->contains(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(130)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(130)
	if ((tmp6)){
		HX_STACK_LINE(131)
		return false;
	}
	HX_STACK_LINE(134)
	::luxe::structural::BalancedBSTNode tmp7 = this->root;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(134)
	Dynamic tmp8 = _key;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(134)
	::luxe::structural::BalancedBSTNode tmp9 = this->node_remove(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(134)
	this->root = tmp9;
	HX_STACK_LINE(136)
	::luxe::structural::BalancedBSTNode tmp10 = this->root;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(136)
	bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(136)
	if ((tmp11)){
		HX_STACK_LINE(137)
		::luxe::structural::BalancedBSTNode tmp12 = this->root;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(137)
		tmp12->color = false;
	}
	HX_STACK_LINE(140)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,remove,return )

bool BalancedBST_obj::remove_smallest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","remove_smallest",0xa58ddbae,"luxe.structural.BalancedBST.remove_smallest","luxe/structural/BalancedBST.hx",145,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		::luxe::structural::BalancedBSTNode tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		::luxe::structural::BalancedBSTNode _node = tmp1->left;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(147)
		bool tmp2 = (_node == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		if ((tmp2)){
			HX_STACK_LINE(147)
			tmp = false;
		}
		else{
			HX_STACK_LINE(147)
			tmp = (_node->color == true);
		}
	}
	HX_STACK_LINE(147)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(147)
	if ((tmp2)){
		HX_STACK_LINE(147)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::luxe::structural::BalancedBSTNode tmp5 = this->root;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			::luxe::structural::BalancedBSTNode tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			::luxe::structural::BalancedBSTNode _node = tmp6->right;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(147)
			bool tmp7 = (_node == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(147)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(147)
			if ((tmp9)){
				HX_STACK_LINE(147)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(147)
				bool tmp10 = (_node->color == true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(147)
				tmp4 = tmp10;
			}
		}
		HX_STACK_LINE(147)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		tmp3 = !(tmp5);
	}
	else{
		HX_STACK_LINE(147)
		tmp3 = false;
	}
	HX_STACK_LINE(147)
	if ((tmp3)){
		HX_STACK_LINE(148)
		::luxe::structural::BalancedBSTNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		tmp4->color = true;
	}
	HX_STACK_LINE(151)
	::luxe::structural::BalancedBSTNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(151)
	::luxe::structural::BalancedBSTNode tmp5 = this->node_remove_smallest(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(151)
	this->root = tmp5;
	HX_STACK_LINE(153)
	::luxe::structural::BalancedBSTNode tmp6 = this->root;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(153)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(153)
	if ((tmp7)){
		HX_STACK_LINE(154)
		::luxe::structural::BalancedBSTNode tmp8 = this->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		tmp8->color = false;
	}
	HX_STACK_LINE(157)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,remove_smallest,return )

bool BalancedBST_obj::remove_largest( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","remove_largest",0x809cde2d,"luxe.structural.BalancedBST.remove_largest","luxe/structural/BalancedBST.hx",162,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		::luxe::structural::BalancedBSTNode tmp1 = this->root;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		::luxe::structural::BalancedBSTNode _node = tmp1->left;		HX_STACK_VAR(_node,"_node");
		HX_STACK_LINE(165)
		bool tmp2 = (_node == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(165)
			tmp = false;
		}
		else{
			HX_STACK_LINE(165)
			tmp = (_node->color == true);
		}
	}
	HX_STACK_LINE(165)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(165)
	if ((tmp2)){
		HX_STACK_LINE(165)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::luxe::structural::BalancedBSTNode tmp5 = this->root;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			::luxe::structural::BalancedBSTNode tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			::luxe::structural::BalancedBSTNode _node = tmp6->right;		HX_STACK_VAR(_node,"_node");
			HX_STACK_LINE(165)
			bool tmp7 = (_node == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(165)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(165)
			if ((tmp9)){
				HX_STACK_LINE(165)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(165)
				bool tmp10 = (_node->color == true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(165)
				tmp4 = tmp10;
			}
		}
		HX_STACK_LINE(165)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		tmp3 = !(tmp5);
	}
	else{
		HX_STACK_LINE(165)
		tmp3 = false;
	}
	HX_STACK_LINE(165)
	if ((tmp3)){
		HX_STACK_LINE(166)
		::luxe::structural::BalancedBSTNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		tmp4->color = true;
	}
	HX_STACK_LINE(169)
	::luxe::structural::BalancedBSTNode tmp4 = this->root;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	::luxe::structural::BalancedBSTNode tmp5 = this->node_remove_largest(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(169)
	this->root = tmp5;
	HX_STACK_LINE(171)
	::luxe::structural::BalancedBSTNode tmp6 = this->root;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(171)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(171)
	if ((tmp7)){
		HX_STACK_LINE(172)
		::luxe::structural::BalancedBSTNode tmp8 = this->root;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(172)
		tmp8->color = false;
	}
	HX_STACK_LINE(175)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,remove_largest,return )

Dynamic BalancedBST_obj::floor( Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","floor",0xe9592400,"luxe.structural.BalancedBST.floor","luxe/structural/BalancedBST.hx",180,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(182)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	Dynamic tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	::luxe::structural::BalancedBSTNode tmp2 = this->node_floor(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	::luxe::structural::BalancedBSTNode _node = tmp2;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(184)
	bool tmp3 = (_node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	if ((tmp3)){
		HX_STACK_LINE(185)
		return null();
	}
	HX_STACK_LINE(188)
	Dynamic tmp4 = _node->key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(188)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,floor,return )

Dynamic BalancedBST_obj::ceil( Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","ceil",0x24ed0f51,"luxe.structural.BalancedBST.ceil","luxe/structural/BalancedBST.hx",193,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(195)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	Dynamic tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	::luxe::structural::BalancedBSTNode tmp2 = this->node_ceil(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	::luxe::structural::BalancedBSTNode _node = tmp2;		HX_STACK_VAR(_node,"_node");
	HX_STACK_LINE(197)
	bool tmp3 = (_node == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	if ((tmp3)){
		HX_STACK_LINE(198)
		return null();
	}
	HX_STACK_LINE(201)
	Dynamic tmp4 = _node->key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(201)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,ceil,return )

cpp::ArrayBase BalancedBST_obj::toArray( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","toArray",0xcbb60152,"luxe.structural.BalancedBST.toArray","luxe/structural/BalancedBST.hx",206,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(210)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,cpp::ArrayBase,a)
	int __ArgCount() const { return 1; }
	Void run(::luxe::structural::BalancedBSTNode _node){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/structural/BalancedBST.hx",210,0xa0b365fc)
		HX_STACK_ARG(_node,"_node")
		{
			HX_STACK_LINE(211)
			Dynamic tmp1 = _node->value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(211)
			a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(210)
	this->traverse_node(tmp,::luxe::structural::BalancedBSTTraverseMethod_obj::order_retain, Dynamic(new _Function_1_1(a)));
	HX_STACK_LINE(214)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,toArray,return )

cpp::ArrayBase BalancedBST_obj::keys( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","keys",0x2a36d240,"luxe.structural.BalancedBST.keys","luxe/structural/BalancedBST.hx",219,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(223)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,cpp::ArrayBase,a)
	int __ArgCount() const { return 1; }
	Void run(::luxe::structural::BalancedBSTNode _node){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/structural/BalancedBST.hx",223,0xa0b365fc)
		HX_STACK_ARG(_node,"_node")
		{
			HX_STACK_LINE(224)
			Dynamic tmp1 = _node->key;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(224)
			a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(223)
	this->traverse_node(tmp,::luxe::structural::BalancedBSTTraverseMethod_obj::order_retain, Dynamic(new _Function_1_1(a)));
	HX_STACK_LINE(227)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,keys,return )

::luxe::structural::BalancedBSTIterator BalancedBST_obj::iterator( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","iterator",0x27f6503a,"luxe.structural.BalancedBST.iterator","luxe/structural/BalancedBST.hx",232,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	::luxe::structural::BalancedBSTIterator tmp = ::luxe::structural::BalancedBSTIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,iterator,return )

Void BalancedBST_obj::traverse_node( ::luxe::structural::BalancedBSTNode _node,::luxe::structural::BalancedBSTTraverseMethod _method,Dynamic _on_traverse){
{
		HX_STACK_FRAME("luxe.structural.BalancedBST","traverse_node",0xbc7f6923,"luxe.structural.BalancedBST.traverse_node","luxe/structural/BalancedBST.hx",240,0xa0b365fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_node,"_node")
		HX_STACK_ARG(_method,"_method")
		HX_STACK_ARG(_on_traverse,"_on_traverse")
		HX_STACK_LINE(242)
		bool tmp = (_node != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		if ((tmp)){
			HX_STACK_LINE(244)
			switch( (int)(_method->__Index())){
				case (int)0: {
					HX_STACK_LINE(247)
					::luxe::structural::BalancedBSTNode tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(247)
					_on_traverse(tmp1).Cast< Void >();
					HX_STACK_LINE(248)
					::luxe::structural::BalancedBSTNode tmp2 = _node->left;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(248)
					::luxe::structural::BalancedBSTTraverseMethod tmp3 = _method;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(248)
					Dynamic tmp4 = _on_traverse;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(248)
					this->traverse_node(tmp2,tmp3,tmp4);
					HX_STACK_LINE(249)
					::luxe::structural::BalancedBSTNode tmp5 = _node->right;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(249)
					::luxe::structural::BalancedBSTTraverseMethod tmp6 = _method;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(249)
					Dynamic tmp7 = _on_traverse;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(249)
					this->traverse_node(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(252)
					::luxe::structural::BalancedBSTNode tmp1 = _node->left;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(252)
					::luxe::structural::BalancedBSTTraverseMethod tmp2 = _method;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(252)
					Dynamic tmp3 = _on_traverse;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(252)
					this->traverse_node(tmp1,tmp2,tmp3);
					HX_STACK_LINE(253)
					::luxe::structural::BalancedBSTNode tmp4 = _node;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(253)
					_on_traverse(tmp4).Cast< Void >();
					HX_STACK_LINE(254)
					::luxe::structural::BalancedBSTNode tmp5 = _node->right;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(254)
					::luxe::structural::BalancedBSTTraverseMethod tmp6 = _method;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(254)
					Dynamic tmp7 = _on_traverse;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(254)
					this->traverse_node(tmp5,tmp6,tmp7);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(257)
					::luxe::structural::BalancedBSTNode tmp1 = _node->left;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(257)
					::luxe::structural::BalancedBSTTraverseMethod tmp2 = _method;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(257)
					Dynamic tmp3 = _on_traverse;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(257)
					this->traverse_node(tmp1,tmp2,tmp3);
					HX_STACK_LINE(258)
					::luxe::structural::BalancedBSTNode tmp4 = _node->right;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(258)
					::luxe::structural::BalancedBSTTraverseMethod tmp5 = _method;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(258)
					Dynamic tmp6 = _on_traverse;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(258)
					this->traverse_node(tmp4,tmp5,tmp6);
					HX_STACK_LINE(259)
					::luxe::structural::BalancedBSTNode tmp7 = _node;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(259)
					_on_traverse(tmp7).Cast< Void >();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BalancedBST_obj,traverse_node,(void))

bool BalancedBST_obj::get_empty( ){
	HX_STACK_FRAME("luxe.structural.BalancedBST","get_empty",0xefad1318,"luxe.structural.BalancedBST.get_empty","luxe/structural/BalancedBST.hx",270,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	::luxe::structural::BalancedBSTNode tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedBST_obj,get_empty,return )

int BalancedBST_obj::node_depth( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_depth",0x118ce112,"luxe.structural.BalancedBST.node_depth","luxe/structural/BalancedBST.hx",277,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(279)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	if ((tmp)){
		HX_STACK_LINE(280)
		return (int)0;
	}
	HX_STACK_LINE(284)
	::luxe::structural::BalancedBSTNode tmp1 = _node->left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	int tmp2 = this->node_depth(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	::luxe::structural::BalancedBSTNode tmp3 = _node->right;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(285)
	int tmp4 = this->node_depth(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(283)
	Float tmp5 = ::Math_obj::max(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(283)
	Float _n_depth = tmp5;		HX_STACK_VAR(_n_depth,"_n_depth");
	HX_STACK_LINE(288)
	Float tmp6 = _n_depth;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(288)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(288)
	int tmp8 = ((int)1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(288)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,node_depth,return )

int BalancedBST_obj::node_count( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_count",0x84c634de,"luxe.structural.BalancedBST.node_count","luxe/structural/BalancedBST.hx",293,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(295)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	if ((tmp)){
		HX_STACK_LINE(295)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(295)
		tmp1 = _node->nodecount;
	}
	HX_STACK_LINE(295)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,node_count,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_insert( ::luxe::structural::BalancedBSTNode _node,Dynamic _key,Dynamic _value){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_insert",0x7a0c604a,"luxe.structural.BalancedBST.node_insert","luxe/structural/BalancedBST.hx",300,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_value,"_value")
	HX_STACK_LINE(302)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(302)
	if ((tmp)){
		HX_STACK_LINE(304)
		::luxe::structural::BalancedBSTNode tmp1 = ::luxe::structural::BalancedBSTNode_obj::__new(_key,_value,(int)1,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		return tmp1;
	}
	HX_STACK_LINE(308)
	Dynamic tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(308)
	Dynamic tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(308)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(308)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(310)
	bool tmp4 = (comparison < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(310)
	if ((tmp4)){
		HX_STACK_LINE(312)
		::luxe::structural::BalancedBSTNode tmp5 = _node->left;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(312)
		Dynamic tmp6 = _key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(312)
		Dynamic tmp7 = _value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(312)
		::luxe::structural::BalancedBSTNode tmp8 = this->node_insert(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(312)
		_node->left = tmp8;
	}
	else{
		HX_STACK_LINE(314)
		bool tmp5 = (comparison > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(314)
		if ((tmp5)){
			HX_STACK_LINE(316)
			::luxe::structural::BalancedBSTNode tmp6 = _node->right;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(316)
			Dynamic tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(316)
			Dynamic tmp8 = _value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(316)
			::luxe::structural::BalancedBSTNode tmp9 = this->node_insert(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(316)
			_node->right = tmp9;
		}
		else{
			HX_STACK_LINE(320)
			_node->value = _value;
		}
	}
	HX_STACK_LINE(324)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(324)
	{
		HX_STACK_LINE(324)
		::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(324)
		bool tmp6 = (_node1 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(324)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(324)
		if ((tmp8)){
			HX_STACK_LINE(324)
			tmp5 = false;
		}
		else{
			HX_STACK_LINE(324)
			tmp5 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(324)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(324)
	if ((tmp5)){
		HX_STACK_LINE(324)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(324)
			bool tmp8 = (_node1 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(324)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			if ((tmp10)){
				HX_STACK_LINE(324)
				tmp7 = false;
			}
			else{
				HX_STACK_LINE(324)
				bool tmp11 = (_node1->color == true);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(324)
				tmp7 = tmp11;
			}
		}
		HX_STACK_LINE(324)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(324)
		tmp6 = !(tmp8);
	}
	else{
		HX_STACK_LINE(324)
		tmp6 = false;
	}
	HX_STACK_LINE(324)
	if ((tmp6)){
		HX_STACK_LINE(325)
		::luxe::structural::BalancedBSTNode tmp7 = _node;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(325)
		::luxe::structural::BalancedBSTNode tmp8 = this->rotate_left(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(325)
		_node = tmp8;
	}
	HX_STACK_LINE(328)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(328)
		::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(328)
		bool tmp8 = (_node1 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(328)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(328)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(328)
		if ((tmp10)){
			HX_STACK_LINE(328)
			tmp7 = false;
		}
		else{
			HX_STACK_LINE(328)
			tmp7 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(328)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(328)
	if ((tmp7)){
		HX_STACK_LINE(328)
		::luxe::structural::BalancedBSTNode tmp9 = _node->left->left;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(328)
		::luxe::structural::BalancedBSTNode tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(328)
		::luxe::structural::BalancedBSTNode _node1 = tmp10;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(328)
		bool tmp11 = (_node1 == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(328)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(328)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(328)
		if ((tmp13)){
			HX_STACK_LINE(328)
			tmp8 = false;
		}
		else{
			HX_STACK_LINE(328)
			tmp8 = (_node1->color == true);
		}
	}
	else{
		HX_STACK_LINE(328)
		tmp8 = false;
	}
	HX_STACK_LINE(328)
	if ((tmp8)){
		HX_STACK_LINE(329)
		::luxe::structural::BalancedBSTNode tmp9 = _node;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(329)
		::luxe::structural::BalancedBSTNode tmp10 = this->rotate_right(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(329)
		_node = tmp10;
	}
	HX_STACK_LINE(332)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(332)
	{
		HX_STACK_LINE(332)
		::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(332)
		bool tmp10 = (_node1 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(332)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(332)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(332)
		if ((tmp12)){
			HX_STACK_LINE(332)
			tmp9 = false;
		}
		else{
			HX_STACK_LINE(332)
			tmp9 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(332)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(332)
	if ((tmp9)){
		HX_STACK_LINE(332)
		::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(332)
		bool tmp11 = (_node1 == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(332)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(332)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(332)
		if ((tmp13)){
			HX_STACK_LINE(332)
			tmp10 = false;
		}
		else{
			HX_STACK_LINE(332)
			tmp10 = (_node1->color == true);
		}
	}
	else{
		HX_STACK_LINE(332)
		tmp10 = false;
	}
	HX_STACK_LINE(332)
	if ((tmp10)){
		HX_STACK_LINE(333)
		::luxe::structural::BalancedBSTNode tmp11 = _node;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(333)
		this->swap_color(tmp11);
	}
	HX_STACK_LINE(336)
	{
		HX_STACK_LINE(336)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(336)
			bool tmp12 = (_node1 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(336)
			if ((tmp12)){
				HX_STACK_LINE(336)
				tmp11 = (int)0;
			}
			else{
				HX_STACK_LINE(336)
				tmp11 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(336)
		int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(336)
			bool tmp13 = (_node1 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(336)
			if ((tmp13)){
				HX_STACK_LINE(336)
				tmp12 = (int)0;
			}
			else{
				HX_STACK_LINE(336)
				tmp12 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(336)
		int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(336)
		int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(336)
		_node->nodecount = tmp14;
		HX_STACK_LINE(336)
		_node;
	}
	HX_STACK_LINE(338)
	::luxe::structural::BalancedBSTNode tmp11 = _node;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(338)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC3(BalancedBST_obj,node_insert,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_update_count( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_update_count",0x6c497eaa,"luxe.structural.BalancedBST.node_update_count","luxe/structural/BalancedBST.hx",343,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(345)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(345)
		bool tmp1 = (_node1 == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		if ((tmp1)){
			HX_STACK_LINE(345)
			tmp = (int)0;
		}
		else{
			HX_STACK_LINE(345)
			tmp = _node1->nodecount;
		}
	}
	HX_STACK_LINE(345)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(345)
		bool tmp2 = (_node1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		if ((tmp2)){
			HX_STACK_LINE(345)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(345)
			tmp1 = _node1->nodecount;
		}
	}
	HX_STACK_LINE(345)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	_node->nodecount = tmp3;
	HX_STACK_LINE(347)
	::luxe::structural::BalancedBSTNode tmp4 = _node;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(347)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,node_update_count,return )

Dynamic BalancedBST_obj::node_find( ::luxe::structural::BalancedBSTNode _node,Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_find",0x43fed70a,"luxe.structural.BalancedBST.node_find","luxe/structural/BalancedBST.hx",352,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(354)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	if ((tmp)){
		HX_STACK_LINE(355)
		return null();
	}
	HX_STACK_LINE(358)
	Dynamic tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(358)
	Dynamic tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(358)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(358)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(360)
	bool tmp4 = (comparison < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(360)
	if ((tmp4)){
		HX_STACK_LINE(361)
		::luxe::structural::BalancedBSTNode tmp5 = _node->left;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(361)
		Dynamic tmp6 = _key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(361)
		Dynamic tmp7 = this->node_find(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(361)
		return tmp7;
	}
	else{
		HX_STACK_LINE(362)
		bool tmp5 = (comparison > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(362)
		if ((tmp5)){
			HX_STACK_LINE(363)
			::luxe::structural::BalancedBSTNode tmp6 = _node->right;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			Dynamic tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(363)
			Dynamic tmp8 = this->node_find(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(363)
			return tmp8;
		}
		else{
			HX_STACK_LINE(365)
			Dynamic tmp6 = _node->value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(365)
			return tmp6;
		}
	}
	HX_STACK_LINE(360)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_obj,node_find,return )

int BalancedBST_obj::node_rank( Dynamic _key,::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_rank",0x4be7547d,"luxe.structural.BalancedBST.node_rank","luxe/structural/BalancedBST.hx",371,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(373)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	if ((tmp)){
		HX_STACK_LINE(374)
		return (int)0;
	}
	HX_STACK_LINE(377)
	Dynamic tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	Dynamic tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(377)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(377)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(379)
	bool tmp4 = (comparison < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(379)
	if ((tmp4)){
		HX_STACK_LINE(380)
		Dynamic tmp5 = _key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(380)
		::luxe::structural::BalancedBSTNode tmp6 = _node->left;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(380)
		int tmp7 = this->node_rank(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(380)
		return tmp7;
	}
	else{
		HX_STACK_LINE(381)
		bool tmp5 = (comparison > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(381)
		if ((tmp5)){
			HX_STACK_LINE(382)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(382)
			{
				HX_STACK_LINE(382)
				::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(382)
				bool tmp7 = (_node1 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(382)
				if ((tmp7)){
					HX_STACK_LINE(382)
					tmp6 = (int)0;
				}
				else{
					HX_STACK_LINE(382)
					tmp6 = _node1->nodecount;
				}
			}
			HX_STACK_LINE(382)
			int tmp7 = ((int)1 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(382)
			Dynamic tmp8 = _key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(382)
			::luxe::structural::BalancedBSTNode tmp9 = _node->right;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(382)
			int tmp10 = this->node_rank(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(382)
			int tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(382)
			return tmp11;
		}
		else{
			HX_STACK_LINE(384)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(384)
				bool tmp7 = (_node1 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(384)
				if ((tmp7)){
					HX_STACK_LINE(384)
					tmp6 = (int)0;
				}
				else{
					HX_STACK_LINE(384)
					tmp6 = _node1->nodecount;
				}
			}
			HX_STACK_LINE(384)
			return tmp6;
		}
	}
	HX_STACK_LINE(379)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_obj,node_rank,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_select( ::luxe::structural::BalancedBSTNode _node,int _rank){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_select",0x4662380d,"luxe.structural.BalancedBST.node_select","luxe/structural/BalancedBST.hx",390,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_rank,"_rank")
	HX_STACK_LINE(392)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	if ((tmp)){
		HX_STACK_LINE(393)
		return null();
	}
	HX_STACK_LINE(396)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(396)
	{
		HX_STACK_LINE(396)
		::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(396)
		bool tmp2 = (_node1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		if ((tmp2)){
			HX_STACK_LINE(396)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(396)
			tmp1 = _node1->nodecount;
		}
	}
	HX_STACK_LINE(396)
	int _r = tmp1;		HX_STACK_VAR(_r,"_r");
	HX_STACK_LINE(398)
	bool tmp2 = (_r > _rank);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(398)
	if ((tmp2)){
		HX_STACK_LINE(399)
		::luxe::structural::BalancedBSTNode tmp3 = _node->left;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		int tmp4 = _rank;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		::luxe::structural::BalancedBSTNode tmp5 = this->node_select(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		return tmp5;
	}
	else{
		HX_STACK_LINE(400)
		bool tmp3 = (_r < _rank);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(400)
		if ((tmp3)){
			HX_STACK_LINE(401)
			::luxe::structural::BalancedBSTNode tmp4 = _node->right;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(401)
			int tmp5 = (_rank - _r);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(401)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(401)
			::luxe::structural::BalancedBSTNode tmp7 = this->node_select(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(401)
			return tmp7;
		}
		else{
			HX_STACK_LINE(403)
			::luxe::structural::BalancedBSTNode tmp4 = _node;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(403)
			return tmp4;
		}
	}
	HX_STACK_LINE(398)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_obj,node_select,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_smallest( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_smallest",0x41ded130,"luxe.structural.BalancedBST.node_smallest","luxe/structural/BalancedBST.hx",409,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(411)
	bool tmp = (_node->left == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	if ((tmp)){
		HX_STACK_LINE(412)
		::luxe::structural::BalancedBSTNode tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(412)
		return tmp1;
	}
	HX_STACK_LINE(415)
	::luxe::structural::BalancedBSTNode tmp1 = _node->left;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(415)
	::luxe::structural::BalancedBSTNode tmp2 = this->node_smallest(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(415)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,node_smallest,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_largest( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_largest",0x08c68eeb,"luxe.structural.BalancedBST.node_largest","luxe/structural/BalancedBST.hx",420,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(422)
	bool tmp = (_node->right == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	if ((tmp)){
		HX_STACK_LINE(423)
		::luxe::structural::BalancedBSTNode tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		return tmp1;
	}
	else{
		HX_STACK_LINE(425)
		::luxe::structural::BalancedBSTNode tmp1 = _node->right;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(425)
		::luxe::structural::BalancedBSTNode tmp2 = this->node_largest(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(425)
		return tmp2;
	}
	HX_STACK_LINE(422)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,node_largest,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_floor( ::luxe::structural::BalancedBSTNode _node,Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_floor",0x3cf9c1db,"luxe.structural.BalancedBST.node_floor","luxe/structural/BalancedBST.hx",431,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(433)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	if ((tmp)){
		HX_STACK_LINE(434)
		return null();
	}
	HX_STACK_LINE(437)
	Dynamic tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(437)
	Dynamic tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(437)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(437)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(439)
	bool tmp4 = (comparison == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(439)
	if ((tmp4)){
		HX_STACK_LINE(440)
		::luxe::structural::BalancedBSTNode tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(440)
		return tmp5;
	}
	else{
		HX_STACK_LINE(441)
		bool tmp5 = (comparison < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(441)
		if ((tmp5)){
			HX_STACK_LINE(442)
			::luxe::structural::BalancedBSTNode tmp6 = _node->left;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(442)
			Dynamic tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(442)
			::luxe::structural::BalancedBSTNode tmp8 = this->node_floor(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(442)
			return tmp8;
		}
	}
	HX_STACK_LINE(445)
	::luxe::structural::BalancedBSTNode tmp5 = _node->right;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(445)
	Dynamic tmp6 = _key;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(445)
	::luxe::structural::BalancedBSTNode tmp7 = this->node_floor(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(445)
	::luxe::structural::BalancedBSTNode _n = tmp7;		HX_STACK_VAR(_n,"_n");
	HX_STACK_LINE(447)
	bool tmp8 = (_n != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(447)
	if ((tmp8)){
		HX_STACK_LINE(448)
		::luxe::structural::BalancedBSTNode tmp9 = _n;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(448)
		return tmp9;
	}
	else{
		HX_STACK_LINE(450)
		::luxe::structural::BalancedBSTNode tmp9 = _node;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(450)
		return tmp9;
	}
	HX_STACK_LINE(447)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_obj,node_floor,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_ceil( ::luxe::structural::BalancedBSTNode _node,Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_ceil",0x420025d6,"luxe.structural.BalancedBST.node_ceil","luxe/structural/BalancedBST.hx",456,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(458)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(458)
	if ((tmp)){
		HX_STACK_LINE(459)
		return null();
	}
	HX_STACK_LINE(462)
	Dynamic tmp1 = _key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(462)
	Dynamic tmp2 = _node->key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(462)
	int tmp3 = this->compare(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(462)
	int comparison = tmp3;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(464)
	bool tmp4 = (comparison == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(464)
	if ((tmp4)){
		HX_STACK_LINE(466)
		::luxe::structural::BalancedBSTNode tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(466)
		return tmp5;
	}
	else{
		HX_STACK_LINE(468)
		bool tmp5 = (comparison < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(468)
		if ((tmp5)){
			HX_STACK_LINE(470)
			::luxe::structural::BalancedBSTNode tmp6 = _node->left;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(470)
			Dynamic tmp7 = _key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(470)
			::luxe::structural::BalancedBSTNode tmp8 = this->node_ceil(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(470)
			::luxe::structural::BalancedBSTNode _n = tmp8;		HX_STACK_VAR(_n,"_n");
			HX_STACK_LINE(472)
			bool tmp9 = (_n != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(472)
			if ((tmp9)){
				HX_STACK_LINE(473)
				::luxe::structural::BalancedBSTNode tmp10 = _n;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(473)
				return tmp10;
			}
			else{
				HX_STACK_LINE(475)
				::luxe::structural::BalancedBSTNode tmp10 = _node;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(475)
				return tmp10;
			}
		}
	}
	HX_STACK_LINE(480)
	::luxe::structural::BalancedBSTNode tmp5 = _node->right;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(480)
	Dynamic tmp6 = _key;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(480)
	::luxe::structural::BalancedBSTNode tmp7 = this->node_ceil(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(480)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_obj,node_ceil,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_remove_smallest( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_remove_smallest",0x673a7949,"luxe.structural.BalancedBST.node_remove_smallest","luxe/structural/BalancedBST.hx",485,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(487)
	bool tmp = (_node->left == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(487)
	if ((tmp)){
		HX_STACK_LINE(488)
		return null();
	}
	HX_STACK_LINE(491)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(491)
	{
		HX_STACK_LINE(491)
		::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(491)
		bool tmp2 = (_node1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(491)
		if ((tmp2)){
			HX_STACK_LINE(491)
			tmp1 = false;
		}
		else{
			HX_STACK_LINE(491)
			tmp1 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(491)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(491)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(491)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(491)
	if ((tmp3)){
		HX_STACK_LINE(491)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			::luxe::structural::BalancedBSTNode tmp6 = _node->left->left;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(491)
			::luxe::structural::BalancedBSTNode tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(491)
			::luxe::structural::BalancedBSTNode _node1 = tmp7;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(491)
			bool tmp8 = (_node1 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(491)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(491)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(491)
			if ((tmp10)){
				HX_STACK_LINE(491)
				tmp5 = false;
			}
			else{
				HX_STACK_LINE(491)
				bool tmp11 = (_node1->color == true);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(491)
				tmp5 = tmp11;
			}
		}
		HX_STACK_LINE(491)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(491)
		tmp4 = !(tmp6);
	}
	else{
		HX_STACK_LINE(491)
		tmp4 = false;
	}
	HX_STACK_LINE(491)
	if ((tmp4)){
		HX_STACK_LINE(492)
		::luxe::structural::BalancedBSTNode tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::luxe::structural::BalancedBSTNode _node1 = _node;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(492)
			::luxe::structural::BalancedBSTNode tmp6 = _node1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(492)
			this->swap_color(tmp6);
			HX_STACK_LINE(492)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				::luxe::structural::BalancedBSTNode tmp8 = _node1->right->left;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(492)
				::luxe::structural::BalancedBSTNode _node2 = tmp8;		HX_STACK_VAR(_node2,"_node2");
				HX_STACK_LINE(492)
				bool tmp9 = (_node2 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(492)
				if ((tmp9)){
					HX_STACK_LINE(492)
					tmp7 = false;
				}
				else{
					HX_STACK_LINE(492)
					tmp7 = (_node2->color == true);
				}
			}
			HX_STACK_LINE(492)
			if ((tmp7)){
				HX_STACK_LINE(492)
				::luxe::structural::BalancedBSTNode tmp8 = _node1->right;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(492)
				::luxe::structural::BalancedBSTNode tmp9 = this->rotate_right(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(492)
				_node1->right = tmp9;
				HX_STACK_LINE(492)
				::luxe::structural::BalancedBSTNode tmp10 = _node1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(492)
				::luxe::structural::BalancedBSTNode tmp11 = this->rotate_left(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(492)
				_node1 = tmp11;
			}
			HX_STACK_LINE(492)
			tmp5 = _node1;
		}
		HX_STACK_LINE(492)
		_node = tmp5;
	}
	HX_STACK_LINE(495)
	::luxe::structural::BalancedBSTNode tmp5 = _node->left;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(495)
	::luxe::structural::BalancedBSTNode tmp6 = this->node_remove_smallest(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(495)
	_node->left = tmp6;
	HX_STACK_LINE(496)
	{
		HX_STACK_LINE(496)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(496)
			bool tmp8 = (_node1 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(496)
			if ((tmp8)){
				HX_STACK_LINE(496)
				tmp7 = (int)0;
			}
			else{
				HX_STACK_LINE(496)
				tmp7 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(496)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(496)
			bool tmp9 = (_node1 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(496)
			if ((tmp9)){
				HX_STACK_LINE(496)
				tmp8 = (int)0;
			}
			else{
				HX_STACK_LINE(496)
				tmp8 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(496)
		int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(496)
		int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(496)
		_node->nodecount = tmp10;
		HX_STACK_LINE(496)
		_node;
	}
	HX_STACK_LINE(498)
	::luxe::structural::BalancedBSTNode tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		::luxe::structural::BalancedBSTNode _node1 = _node;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(498)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode _node2 = _node1->right;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(498)
			bool tmp9 = (_node2 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(498)
			if ((tmp9)){
				HX_STACK_LINE(498)
				tmp8 = false;
			}
			else{
				HX_STACK_LINE(498)
				tmp8 = (_node2->color == true);
			}
		}
		HX_STACK_LINE(498)
		if ((tmp8)){
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode tmp9 = _node1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode tmp10 = this->rotate_left(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(498)
			_node1 = tmp10;
		}
		HX_STACK_LINE(498)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode _node2 = _node1->left;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(498)
			bool tmp10 = (_node2 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(498)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			if ((tmp12)){
				HX_STACK_LINE(498)
				tmp9 = false;
			}
			else{
				HX_STACK_LINE(498)
				tmp9 = (_node2->color == true);
			}
		}
		HX_STACK_LINE(498)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		if ((tmp9)){
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode tmp11 = _node1->left->left;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode _node2 = tmp12;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(498)
			bool tmp13 = (_node2 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			if ((tmp15)){
				HX_STACK_LINE(498)
				tmp10 = false;
			}
			else{
				HX_STACK_LINE(498)
				tmp10 = (_node2->color == true);
			}
		}
		else{
			HX_STACK_LINE(498)
			tmp10 = false;
		}
		HX_STACK_LINE(498)
		if ((tmp10)){
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode tmp11 = _node1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode tmp12 = this->rotate_right(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			_node1 = tmp12;
		}
		HX_STACK_LINE(498)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode _node2 = _node1->left;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(498)
			bool tmp12 = (_node2 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			if ((tmp14)){
				HX_STACK_LINE(498)
				tmp11 = false;
			}
			else{
				HX_STACK_LINE(498)
				tmp11 = (_node2->color == true);
			}
		}
		HX_STACK_LINE(498)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(498)
		if ((tmp11)){
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode _node2 = _node1->right;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(498)
			bool tmp13 = (_node2 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			if ((tmp15)){
				HX_STACK_LINE(498)
				tmp12 = false;
			}
			else{
				HX_STACK_LINE(498)
				tmp12 = (_node2->color == true);
			}
		}
		else{
			HX_STACK_LINE(498)
			tmp12 = false;
		}
		HX_STACK_LINE(498)
		if ((tmp12)){
			HX_STACK_LINE(498)
			::luxe::structural::BalancedBSTNode tmp13 = _node1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			this->swap_color(tmp13);
		}
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::luxe::structural::BalancedBSTNode _node2 = _node1->left;		HX_STACK_VAR(_node2,"_node2");
				HX_STACK_LINE(498)
				bool tmp14 = (_node2 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(498)
				if ((tmp14)){
					HX_STACK_LINE(498)
					tmp13 = (int)0;
				}
				else{
					HX_STACK_LINE(498)
					tmp13 = _node2->nodecount;
				}
			}
			HX_STACK_LINE(498)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::luxe::structural::BalancedBSTNode _node2 = _node1->right;		HX_STACK_VAR(_node2,"_node2");
				HX_STACK_LINE(498)
				bool tmp15 = (_node2 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(498)
				if ((tmp15)){
					HX_STACK_LINE(498)
					tmp14 = (int)0;
				}
				else{
					HX_STACK_LINE(498)
					tmp14 = _node2->nodecount;
				}
			}
			HX_STACK_LINE(498)
			int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			int tmp16 = (tmp15 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(498)
			_node1->nodecount = tmp16;
			HX_STACK_LINE(498)
			_node1;
		}
		HX_STACK_LINE(498)
		tmp7 = _node1;
	}
	HX_STACK_LINE(498)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,node_remove_smallest,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_remove_largest( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_remove_largest",0xe4352cf2,"luxe.structural.BalancedBST.node_remove_largest","luxe/structural/BalancedBST.hx",503,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(505)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(505)
	{
		HX_STACK_LINE(505)
		::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(505)
		bool tmp1 = (_node1 == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		if ((tmp1)){
			HX_STACK_LINE(505)
			tmp = false;
		}
		else{
			HX_STACK_LINE(505)
			tmp = (_node1->color == true);
		}
	}
	HX_STACK_LINE(505)
	if ((tmp)){
		HX_STACK_LINE(506)
		::luxe::structural::BalancedBSTNode tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		::luxe::structural::BalancedBSTNode tmp2 = this->rotate_right(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		_node = tmp2;
	}
	HX_STACK_LINE(509)
	bool tmp1 = (_node->right == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(509)
	if ((tmp1)){
		HX_STACK_LINE(510)
		return null();
	}
	HX_STACK_LINE(513)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(513)
		bool tmp3 = (_node1 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(513)
		if ((tmp3)){
			HX_STACK_LINE(513)
			tmp2 = false;
		}
		else{
			HX_STACK_LINE(513)
			tmp2 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(513)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(513)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(513)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(513)
	if ((tmp4)){
		HX_STACK_LINE(513)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::luxe::structural::BalancedBSTNode tmp7 = _node->right->left;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(513)
			::luxe::structural::BalancedBSTNode tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(513)
			::luxe::structural::BalancedBSTNode _node1 = tmp8;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(513)
			bool tmp9 = (_node1 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(513)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(513)
			if ((tmp11)){
				HX_STACK_LINE(513)
				tmp6 = false;
			}
			else{
				HX_STACK_LINE(513)
				bool tmp12 = (_node1->color == true);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(513)
				tmp6 = tmp12;
			}
		}
		HX_STACK_LINE(513)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(513)
		tmp5 = !(tmp7);
	}
	else{
		HX_STACK_LINE(513)
		tmp5 = false;
	}
	HX_STACK_LINE(513)
	if ((tmp5)){
		HX_STACK_LINE(514)
		::luxe::structural::BalancedBSTNode tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			::luxe::structural::BalancedBSTNode _node1 = _node;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(514)
			::luxe::structural::BalancedBSTNode tmp7 = _node1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(514)
			this->swap_color(tmp7);
			HX_STACK_LINE(514)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				::luxe::structural::BalancedBSTNode tmp9 = _node1->left->left;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(514)
				::luxe::structural::BalancedBSTNode _node2 = tmp9;		HX_STACK_VAR(_node2,"_node2");
				HX_STACK_LINE(514)
				bool tmp10 = (_node2 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(514)
				if ((tmp10)){
					HX_STACK_LINE(514)
					tmp8 = false;
				}
				else{
					HX_STACK_LINE(514)
					tmp8 = (_node2->color == true);
				}
			}
			HX_STACK_LINE(514)
			if ((tmp8)){
				HX_STACK_LINE(514)
				::luxe::structural::BalancedBSTNode tmp9 = _node1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(514)
				::luxe::structural::BalancedBSTNode tmp10 = this->rotate_right(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(514)
				_node1 = tmp10;
			}
			HX_STACK_LINE(514)
			tmp6 = _node1;
		}
		HX_STACK_LINE(514)
		_node = tmp6;
	}
	HX_STACK_LINE(517)
	::luxe::structural::BalancedBSTNode tmp6 = _node->right;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(517)
	::luxe::structural::BalancedBSTNode tmp7 = this->node_remove_largest(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(517)
	_node->right = tmp7;
	HX_STACK_LINE(518)
	{
		HX_STACK_LINE(518)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(518)
			::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(518)
			bool tmp9 = (_node1 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(518)
			if ((tmp9)){
				HX_STACK_LINE(518)
				tmp8 = (int)0;
			}
			else{
				HX_STACK_LINE(518)
				tmp8 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(518)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(518)
			::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(518)
			bool tmp10 = (_node1 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(518)
			if ((tmp10)){
				HX_STACK_LINE(518)
				tmp9 = (int)0;
			}
			else{
				HX_STACK_LINE(518)
				tmp9 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(518)
		int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(518)
		int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(518)
		_node->nodecount = tmp11;
		HX_STACK_LINE(518)
		_node;
	}
	HX_STACK_LINE(520)
	::luxe::structural::BalancedBSTNode tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(520)
	{
		HX_STACK_LINE(520)
		::luxe::structural::BalancedBSTNode _node1 = _node;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(520)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(520)
		{
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode _node2 = _node1->right;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(520)
			bool tmp10 = (_node2 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(520)
			if ((tmp10)){
				HX_STACK_LINE(520)
				tmp9 = false;
			}
			else{
				HX_STACK_LINE(520)
				tmp9 = (_node2->color == true);
			}
		}
		HX_STACK_LINE(520)
		if ((tmp9)){
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode tmp10 = _node1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode tmp11 = this->rotate_left(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(520)
			_node1 = tmp11;
		}
		HX_STACK_LINE(520)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(520)
		{
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode _node2 = _node1->left;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(520)
			bool tmp11 = (_node2 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(520)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(520)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(520)
			if ((tmp13)){
				HX_STACK_LINE(520)
				tmp10 = false;
			}
			else{
				HX_STACK_LINE(520)
				tmp10 = (_node2->color == true);
			}
		}
		HX_STACK_LINE(520)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(520)
		if ((tmp10)){
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode tmp12 = _node1->left->left;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode _node2 = tmp13;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(520)
			bool tmp14 = (_node2 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(520)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(520)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(520)
			if ((tmp16)){
				HX_STACK_LINE(520)
				tmp11 = false;
			}
			else{
				HX_STACK_LINE(520)
				tmp11 = (_node2->color == true);
			}
		}
		else{
			HX_STACK_LINE(520)
			tmp11 = false;
		}
		HX_STACK_LINE(520)
		if ((tmp11)){
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode tmp12 = _node1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode tmp13 = this->rotate_right(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(520)
			_node1 = tmp13;
		}
		HX_STACK_LINE(520)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(520)
		{
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode _node2 = _node1->left;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(520)
			bool tmp13 = (_node2 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(520)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(520)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(520)
			if ((tmp15)){
				HX_STACK_LINE(520)
				tmp12 = false;
			}
			else{
				HX_STACK_LINE(520)
				tmp12 = (_node2->color == true);
			}
		}
		HX_STACK_LINE(520)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(520)
		if ((tmp12)){
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode _node2 = _node1->right;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(520)
			bool tmp14 = (_node2 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(520)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(520)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(520)
			if ((tmp16)){
				HX_STACK_LINE(520)
				tmp13 = false;
			}
			else{
				HX_STACK_LINE(520)
				tmp13 = (_node2->color == true);
			}
		}
		else{
			HX_STACK_LINE(520)
			tmp13 = false;
		}
		HX_STACK_LINE(520)
		if ((tmp13)){
			HX_STACK_LINE(520)
			::luxe::structural::BalancedBSTNode tmp14 = _node1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(520)
			this->swap_color(tmp14);
		}
		HX_STACK_LINE(520)
		{
			HX_STACK_LINE(520)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(520)
			{
				HX_STACK_LINE(520)
				::luxe::structural::BalancedBSTNode _node2 = _node1->left;		HX_STACK_VAR(_node2,"_node2");
				HX_STACK_LINE(520)
				bool tmp15 = (_node2 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(520)
				if ((tmp15)){
					HX_STACK_LINE(520)
					tmp14 = (int)0;
				}
				else{
					HX_STACK_LINE(520)
					tmp14 = _node2->nodecount;
				}
			}
			HX_STACK_LINE(520)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(520)
			{
				HX_STACK_LINE(520)
				::luxe::structural::BalancedBSTNode _node2 = _node1->right;		HX_STACK_VAR(_node2,"_node2");
				HX_STACK_LINE(520)
				bool tmp16 = (_node2 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(520)
				if ((tmp16)){
					HX_STACK_LINE(520)
					tmp15 = (int)0;
				}
				else{
					HX_STACK_LINE(520)
					tmp15 = _node2->nodecount;
				}
			}
			HX_STACK_LINE(520)
			int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(520)
			int tmp17 = (tmp16 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(520)
			_node1->nodecount = tmp17;
			HX_STACK_LINE(520)
			_node1;
		}
		HX_STACK_LINE(520)
		tmp8 = _node1;
	}
	HX_STACK_LINE(520)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,node_remove_largest,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::node_remove( ::luxe::structural::BalancedBSTNode _node,Dynamic _key){
	HX_STACK_FRAME("luxe.structural.BalancedBST","node_remove",0xe0b7b955,"luxe.structural.BalancedBST.node_remove","luxe/structural/BalancedBST.hx",525,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_ARG(_key,"_key")
	HX_STACK_LINE(527)
	Dynamic tmp = _key;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	Dynamic tmp1 = _node->key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	int tmp2 = this->compare(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(527)
	int comparison = tmp2;		HX_STACK_VAR(comparison,"comparison");
	HX_STACK_LINE(529)
	bool tmp3 = (comparison < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(529)
	if ((tmp3)){
		HX_STACK_LINE(531)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(531)
		{
			HX_STACK_LINE(531)
			::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(531)
			bool tmp5 = (_node1 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(531)
			if ((tmp5)){
				HX_STACK_LINE(531)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(531)
				tmp4 = (_node1->color == true);
			}
		}
		HX_STACK_LINE(531)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(531)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(531)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(531)
		if ((tmp6)){
			HX_STACK_LINE(531)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(531)
			{
				HX_STACK_LINE(531)
				::luxe::structural::BalancedBSTNode tmp9 = _node->left->left;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(531)
				::luxe::structural::BalancedBSTNode tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(531)
				::luxe::structural::BalancedBSTNode _node1 = tmp10;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(531)
				bool tmp11 = (_node1 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(531)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(531)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(531)
				if ((tmp13)){
					HX_STACK_LINE(531)
					tmp8 = false;
				}
				else{
					HX_STACK_LINE(531)
					bool tmp14 = (_node1->color == true);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(531)
					tmp8 = tmp14;
				}
			}
			HX_STACK_LINE(531)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(531)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(531)
			tmp7 = false;
		}
		HX_STACK_LINE(531)
		if ((tmp7)){
			HX_STACK_LINE(532)
			::luxe::structural::BalancedBSTNode tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(532)
			{
				HX_STACK_LINE(532)
				::luxe::structural::BalancedBSTNode _node1 = _node;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(532)
				::luxe::structural::BalancedBSTNode tmp9 = _node1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(532)
				this->swap_color(tmp9);
				HX_STACK_LINE(532)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(532)
				{
					HX_STACK_LINE(532)
					::luxe::structural::BalancedBSTNode tmp11 = _node1->right->left;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(532)
					::luxe::structural::BalancedBSTNode _node2 = tmp11;		HX_STACK_VAR(_node2,"_node2");
					HX_STACK_LINE(532)
					bool tmp12 = (_node2 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(532)
					if ((tmp12)){
						HX_STACK_LINE(532)
						tmp10 = false;
					}
					else{
						HX_STACK_LINE(532)
						tmp10 = (_node2->color == true);
					}
				}
				HX_STACK_LINE(532)
				if ((tmp10)){
					HX_STACK_LINE(532)
					::luxe::structural::BalancedBSTNode tmp11 = _node1->right;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(532)
					::luxe::structural::BalancedBSTNode tmp12 = this->rotate_right(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(532)
					_node1->right = tmp12;
					HX_STACK_LINE(532)
					::luxe::structural::BalancedBSTNode tmp13 = _node1;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(532)
					::luxe::structural::BalancedBSTNode tmp14 = this->rotate_left(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(532)
					_node1 = tmp14;
				}
				HX_STACK_LINE(532)
				tmp8 = _node1;
			}
			HX_STACK_LINE(532)
			_node = tmp8;
		}
		HX_STACK_LINE(535)
		::luxe::structural::BalancedBSTNode tmp8 = _node->left;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(535)
		Dynamic tmp9 = _key;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(535)
		::luxe::structural::BalancedBSTNode tmp10 = this->node_remove(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(535)
		_node->left = tmp10;
	}
	else{
		HX_STACK_LINE(539)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		{
			HX_STACK_LINE(539)
			::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(539)
			bool tmp5 = (_node1 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(539)
			if ((tmp5)){
				HX_STACK_LINE(539)
				tmp4 = false;
			}
			else{
				HX_STACK_LINE(539)
				tmp4 = (_node1->color == true);
			}
		}
		HX_STACK_LINE(539)
		if ((tmp4)){
			HX_STACK_LINE(540)
			::luxe::structural::BalancedBSTNode tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(540)
			::luxe::structural::BalancedBSTNode tmp6 = this->rotate_right(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(540)
			_node = tmp6;
		}
		HX_STACK_LINE(543)
		Dynamic tmp5 = _key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(543)
		Dynamic tmp6 = _node->key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(543)
		int tmp7 = this->compare(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(543)
		int comparison1 = tmp7;		HX_STACK_VAR(comparison1,"comparison1");
		HX_STACK_LINE(545)
		bool tmp8 = (comparison1 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(545)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(545)
		if ((tmp8)){
			HX_STACK_LINE(545)
			tmp9 = (_node->right == null());
		}
		else{
			HX_STACK_LINE(545)
			tmp9 = false;
		}
		HX_STACK_LINE(545)
		if ((tmp9)){
			HX_STACK_LINE(546)
			return null();
		}
		HX_STACK_LINE(549)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(549)
			bool tmp11 = (_node1 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(549)
			if ((tmp11)){
				HX_STACK_LINE(549)
				tmp10 = false;
			}
			else{
				HX_STACK_LINE(549)
				tmp10 = (_node1->color == true);
			}
		}
		HX_STACK_LINE(549)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(549)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(549)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(549)
		if ((tmp12)){
			HX_STACK_LINE(549)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(549)
			{
				HX_STACK_LINE(549)
				::luxe::structural::BalancedBSTNode tmp15 = _node->right->left;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(549)
				::luxe::structural::BalancedBSTNode tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(549)
				::luxe::structural::BalancedBSTNode _node1 = tmp16;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(549)
				bool tmp17 = (_node1 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(549)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(549)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(549)
				if ((tmp19)){
					HX_STACK_LINE(549)
					tmp14 = false;
				}
				else{
					HX_STACK_LINE(549)
					bool tmp20 = (_node1->color == true);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(549)
					tmp14 = tmp20;
				}
			}
			HX_STACK_LINE(549)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(549)
			tmp13 = !(tmp15);
		}
		else{
			HX_STACK_LINE(549)
			tmp13 = false;
		}
		HX_STACK_LINE(549)
		if ((tmp13)){
			HX_STACK_LINE(550)
			::luxe::structural::BalancedBSTNode tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				::luxe::structural::BalancedBSTNode _node1 = _node;		HX_STACK_VAR(_node1,"_node1");
				HX_STACK_LINE(550)
				::luxe::structural::BalancedBSTNode tmp15 = _node1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(550)
				this->swap_color(tmp15);
				HX_STACK_LINE(550)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::luxe::structural::BalancedBSTNode tmp17 = _node1->left->left;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(550)
					::luxe::structural::BalancedBSTNode _node2 = tmp17;		HX_STACK_VAR(_node2,"_node2");
					HX_STACK_LINE(550)
					bool tmp18 = (_node2 == null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(550)
					if ((tmp18)){
						HX_STACK_LINE(550)
						tmp16 = false;
					}
					else{
						HX_STACK_LINE(550)
						tmp16 = (_node2->color == true);
					}
				}
				HX_STACK_LINE(550)
				if ((tmp16)){
					HX_STACK_LINE(550)
					::luxe::structural::BalancedBSTNode tmp17 = _node1;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(550)
					::luxe::structural::BalancedBSTNode tmp18 = this->rotate_right(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(550)
					_node1 = tmp18;
				}
				HX_STACK_LINE(550)
				tmp14 = _node1;
			}
			HX_STACK_LINE(550)
			_node = tmp14;
		}
		HX_STACK_LINE(553)
		Dynamic tmp14 = _key;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(553)
		Dynamic tmp15 = _node->key;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(553)
		int tmp16 = this->compare(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(553)
		int comparison2 = tmp16;		HX_STACK_VAR(comparison2,"comparison2");
		HX_STACK_LINE(554)
		bool tmp17 = (comparison2 == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(554)
		if ((tmp17)){
			HX_STACK_LINE(556)
			::luxe::structural::BalancedBSTNode tmp18 = _node->right;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(556)
			::luxe::structural::BalancedBSTNode tmp19 = this->node_smallest(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(556)
			::luxe::structural::BalancedBSTNode _n = tmp19;		HX_STACK_VAR(_n,"_n");
			HX_STACK_LINE(557)
			_node->key = _n->key;
			HX_STACK_LINE(558)
			_node->value = _n->value;
			HX_STACK_LINE(560)
			::luxe::structural::BalancedBSTNode tmp20 = _node->right;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(560)
			::luxe::structural::BalancedBSTNode tmp21 = this->node_remove_smallest(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(560)
			_node->right = tmp21;
		}
		else{
			HX_STACK_LINE(563)
			::luxe::structural::BalancedBSTNode tmp18 = _node->right;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(563)
			Dynamic tmp19 = _key;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(563)
			::luxe::structural::BalancedBSTNode tmp20 = this->node_remove(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(563)
			_node->right = tmp20;
		}
	}
	HX_STACK_LINE(568)
	::luxe::structural::BalancedBSTNode tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(568)
	{
		HX_STACK_LINE(568)
		::luxe::structural::BalancedBSTNode _node1 = _node;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(568)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode _node2 = _node1->right;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(568)
			bool tmp6 = (_node2 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(568)
			if ((tmp6)){
				HX_STACK_LINE(568)
				tmp5 = false;
			}
			else{
				HX_STACK_LINE(568)
				tmp5 = (_node2->color == true);
			}
		}
		HX_STACK_LINE(568)
		if ((tmp5)){
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode tmp6 = _node1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode tmp7 = this->rotate_left(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(568)
			_node1 = tmp7;
		}
		HX_STACK_LINE(568)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode _node2 = _node1->left;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(568)
			bool tmp7 = (_node2 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(568)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(568)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(568)
			if ((tmp9)){
				HX_STACK_LINE(568)
				tmp6 = false;
			}
			else{
				HX_STACK_LINE(568)
				tmp6 = (_node2->color == true);
			}
		}
		HX_STACK_LINE(568)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(568)
		if ((tmp6)){
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode tmp8 = _node1->left->left;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode _node2 = tmp9;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(568)
			bool tmp10 = (_node2 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(568)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(568)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(568)
			if ((tmp12)){
				HX_STACK_LINE(568)
				tmp7 = false;
			}
			else{
				HX_STACK_LINE(568)
				tmp7 = (_node2->color == true);
			}
		}
		else{
			HX_STACK_LINE(568)
			tmp7 = false;
		}
		HX_STACK_LINE(568)
		if ((tmp7)){
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode tmp8 = _node1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode tmp9 = this->rotate_right(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(568)
			_node1 = tmp9;
		}
		HX_STACK_LINE(568)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode _node2 = _node1->left;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(568)
			bool tmp9 = (_node2 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(568)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(568)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(568)
			if ((tmp11)){
				HX_STACK_LINE(568)
				tmp8 = false;
			}
			else{
				HX_STACK_LINE(568)
				tmp8 = (_node2->color == true);
			}
		}
		HX_STACK_LINE(568)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(568)
		if ((tmp8)){
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode _node2 = _node1->right;		HX_STACK_VAR(_node2,"_node2");
			HX_STACK_LINE(568)
			bool tmp10 = (_node2 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(568)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(568)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(568)
			if ((tmp12)){
				HX_STACK_LINE(568)
				tmp9 = false;
			}
			else{
				HX_STACK_LINE(568)
				tmp9 = (_node2->color == true);
			}
		}
		else{
			HX_STACK_LINE(568)
			tmp9 = false;
		}
		HX_STACK_LINE(568)
		if ((tmp9)){
			HX_STACK_LINE(568)
			::luxe::structural::BalancedBSTNode tmp10 = _node1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(568)
			this->swap_color(tmp10);
		}
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(568)
			{
				HX_STACK_LINE(568)
				::luxe::structural::BalancedBSTNode _node2 = _node1->left;		HX_STACK_VAR(_node2,"_node2");
				HX_STACK_LINE(568)
				bool tmp11 = (_node2 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(568)
				if ((tmp11)){
					HX_STACK_LINE(568)
					tmp10 = (int)0;
				}
				else{
					HX_STACK_LINE(568)
					tmp10 = _node2->nodecount;
				}
			}
			HX_STACK_LINE(568)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(568)
			{
				HX_STACK_LINE(568)
				::luxe::structural::BalancedBSTNode _node2 = _node1->right;		HX_STACK_VAR(_node2,"_node2");
				HX_STACK_LINE(568)
				bool tmp12 = (_node2 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(568)
				if ((tmp12)){
					HX_STACK_LINE(568)
					tmp11 = (int)0;
				}
				else{
					HX_STACK_LINE(568)
					tmp11 = _node2->nodecount;
				}
			}
			HX_STACK_LINE(568)
			int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(568)
			int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(568)
			_node1->nodecount = tmp13;
			HX_STACK_LINE(568)
			_node1;
		}
		HX_STACK_LINE(568)
		tmp4 = _node1;
	}
	HX_STACK_LINE(568)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedBST_obj,node_remove,return )

bool BalancedBST_obj::is_red( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","is_red",0x74f55288,"luxe.structural.BalancedBST.is_red","luxe/structural/BalancedBST.hx",572,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(574)
	bool tmp = (_node == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	if ((tmp)){
		HX_STACK_LINE(575)
		return false;
	}
	HX_STACK_LINE(578)
	bool tmp1 = (_node->color == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,is_red,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::rotate_left( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","rotate_left",0xf004e4df,"luxe.structural.BalancedBST.rotate_left","luxe/structural/BalancedBST.hx",582,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(584)
	::luxe::structural::BalancedBSTNode _n = _node->right;		HX_STACK_VAR(_n,"_n");
	HX_STACK_LINE(587)
	_n->color = _node->color;
	HX_STACK_LINE(588)
	_node->color = true;
	HX_STACK_LINE(590)
	_node->right = _n->left;
	HX_STACK_LINE(591)
	_n->left = _node;
	HX_STACK_LINE(594)
	_n->nodecount = _node->nodecount;
	HX_STACK_LINE(595)
	{
		HX_STACK_LINE(595)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(595)
		{
			HX_STACK_LINE(595)
			::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(595)
			bool tmp1 = (_node1 == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(595)
			if ((tmp1)){
				HX_STACK_LINE(595)
				tmp = (int)0;
			}
			else{
				HX_STACK_LINE(595)
				tmp = _node1->nodecount;
			}
		}
		HX_STACK_LINE(595)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(595)
		{
			HX_STACK_LINE(595)
			::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(595)
			bool tmp2 = (_node1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(595)
			if ((tmp2)){
				HX_STACK_LINE(595)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(595)
				tmp1 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(595)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(595)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(595)
		_node->nodecount = tmp3;
		HX_STACK_LINE(595)
		_node;
	}
	HX_STACK_LINE(597)
	::luxe::structural::BalancedBSTNode tmp = _n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(597)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,rotate_left,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::rotate_right( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","rotate_right",0x8b506c04,"luxe.structural.BalancedBST.rotate_right","luxe/structural/BalancedBST.hx",601,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(603)
	::luxe::structural::BalancedBSTNode _n = _node->left;		HX_STACK_VAR(_n,"_n");
	HX_STACK_LINE(606)
	_n->color = _node->color;
	HX_STACK_LINE(607)
	_node->color = true;
	HX_STACK_LINE(609)
	_node->left = _n->right;
	HX_STACK_LINE(610)
	_n->right = _node;
	HX_STACK_LINE(613)
	_n->nodecount = _node->nodecount;
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(614)
			bool tmp1 = (_node1 == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(614)
			if ((tmp1)){
				HX_STACK_LINE(614)
				tmp = (int)0;
			}
			else{
				HX_STACK_LINE(614)
				tmp = _node1->nodecount;
			}
		}
		HX_STACK_LINE(614)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(614)
			bool tmp2 = (_node1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			if ((tmp2)){
				HX_STACK_LINE(614)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(614)
				tmp1 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(614)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(614)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		_node->nodecount = tmp3;
		HX_STACK_LINE(614)
		_node;
	}
	HX_STACK_LINE(616)
	::luxe::structural::BalancedBSTNode tmp = _n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(616)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,rotate_right,return )

Void BalancedBST_obj::swap_color( ::luxe::structural::BalancedBSTNode _node){
{
		HX_STACK_FRAME("luxe.structural.BalancedBST","swap_color",0xfb93c4c3,"luxe.structural.BalancedBST.swap_color","luxe/structural/BalancedBST.hx",620,0xa0b365fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_node,"_node")
		HX_STACK_LINE(622)
		bool tmp = _node->color;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(622)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(622)
		_node->color = tmp1;
		HX_STACK_LINE(623)
		bool tmp2 = _node->left->color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(623)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(623)
		_node->left->color = tmp3;
		HX_STACK_LINE(624)
		bool tmp4 = _node->right->color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(624)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(624)
		_node->right->color = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,swap_color,(void))

::luxe::structural::BalancedBSTNode BalancedBST_obj::move_red_left( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","move_red_left",0x3cc03557,"luxe.structural.BalancedBST.move_red_left","luxe/structural/BalancedBST.hx",628,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(630)
	::luxe::structural::BalancedBSTNode tmp = _node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(630)
	this->swap_color(tmp);
	HX_STACK_LINE(632)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(632)
	{
		HX_STACK_LINE(632)
		::luxe::structural::BalancedBSTNode tmp2 = _node->right->left;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(632)
		::luxe::structural::BalancedBSTNode _node1 = tmp2;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(632)
		bool tmp3 = (_node1 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(632)
		if ((tmp3)){
			HX_STACK_LINE(632)
			tmp1 = false;
		}
		else{
			HX_STACK_LINE(632)
			tmp1 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(632)
	if ((tmp1)){
		HX_STACK_LINE(633)
		::luxe::structural::BalancedBSTNode tmp2 = _node->right;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(633)
		::luxe::structural::BalancedBSTNode tmp3 = this->rotate_right(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(633)
		_node->right = tmp3;
		HX_STACK_LINE(634)
		::luxe::structural::BalancedBSTNode tmp4 = _node;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(634)
		::luxe::structural::BalancedBSTNode tmp5 = this->rotate_left(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(634)
		_node = tmp5;
	}
	HX_STACK_LINE(637)
	::luxe::structural::BalancedBSTNode tmp2 = _node;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(637)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,move_red_left,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::move_red_right( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","move_red_right",0x627b848c,"luxe.structural.BalancedBST.move_red_right","luxe/structural/BalancedBST.hx",640,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(642)
	::luxe::structural::BalancedBSTNode tmp = _node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(642)
	this->swap_color(tmp);
	HX_STACK_LINE(644)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(644)
	{
		HX_STACK_LINE(644)
		::luxe::structural::BalancedBSTNode tmp2 = _node->left->left;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(644)
		::luxe::structural::BalancedBSTNode _node1 = tmp2;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(644)
		bool tmp3 = (_node1 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(644)
		if ((tmp3)){
			HX_STACK_LINE(644)
			tmp1 = false;
		}
		else{
			HX_STACK_LINE(644)
			tmp1 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(644)
	if ((tmp1)){
		HX_STACK_LINE(645)
		::luxe::structural::BalancedBSTNode tmp2 = _node;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(645)
		::luxe::structural::BalancedBSTNode tmp3 = this->rotate_right(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(645)
		_node = tmp3;
	}
	HX_STACK_LINE(648)
	::luxe::structural::BalancedBSTNode tmp2 = _node;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(648)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,move_red_right,return )

::luxe::structural::BalancedBSTNode BalancedBST_obj::balance( ::luxe::structural::BalancedBSTNode _node){
	HX_STACK_FRAME("luxe.structural.BalancedBST","balance",0xfd2fe450,"luxe.structural.BalancedBST.balance","luxe/structural/BalancedBST.hx",651,0xa0b365fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_node,"_node")
	HX_STACK_LINE(653)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(653)
	{
		HX_STACK_LINE(653)
		::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(653)
		bool tmp1 = (_node1 == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		if ((tmp1)){
			HX_STACK_LINE(653)
			tmp = false;
		}
		else{
			HX_STACK_LINE(653)
			tmp = (_node1->color == true);
		}
	}
	HX_STACK_LINE(653)
	if ((tmp)){
		HX_STACK_LINE(654)
		::luxe::structural::BalancedBSTNode tmp1 = _node;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(654)
		::luxe::structural::BalancedBSTNode tmp2 = this->rotate_left(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(654)
		_node = tmp2;
	}
	HX_STACK_LINE(657)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(657)
	{
		HX_STACK_LINE(657)
		::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(657)
		bool tmp2 = (_node1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(657)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(657)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(657)
		if ((tmp4)){
			HX_STACK_LINE(657)
			tmp1 = false;
		}
		else{
			HX_STACK_LINE(657)
			tmp1 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(657)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(657)
	if ((tmp1)){
		HX_STACK_LINE(657)
		::luxe::structural::BalancedBSTNode tmp3 = _node->left->left;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(657)
		::luxe::structural::BalancedBSTNode tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(657)
		::luxe::structural::BalancedBSTNode _node1 = tmp4;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(657)
		bool tmp5 = (_node1 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(657)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(657)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(657)
		if ((tmp7)){
			HX_STACK_LINE(657)
			tmp2 = false;
		}
		else{
			HX_STACK_LINE(657)
			tmp2 = (_node1->color == true);
		}
	}
	else{
		HX_STACK_LINE(657)
		tmp2 = false;
	}
	HX_STACK_LINE(657)
	if ((tmp2)){
		HX_STACK_LINE(658)
		::luxe::structural::BalancedBSTNode tmp3 = _node;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(658)
		::luxe::structural::BalancedBSTNode tmp4 = this->rotate_right(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(658)
		_node = tmp4;
	}
	HX_STACK_LINE(661)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(661)
	{
		HX_STACK_LINE(661)
		::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(661)
		bool tmp4 = (_node1 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(661)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(661)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(661)
		if ((tmp6)){
			HX_STACK_LINE(661)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(661)
			tmp3 = (_node1->color == true);
		}
	}
	HX_STACK_LINE(661)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(661)
	if ((tmp3)){
		HX_STACK_LINE(661)
		::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
		HX_STACK_LINE(661)
		bool tmp5 = (_node1 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(661)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(661)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(661)
		if ((tmp7)){
			HX_STACK_LINE(661)
			tmp4 = false;
		}
		else{
			HX_STACK_LINE(661)
			tmp4 = (_node1->color == true);
		}
	}
	else{
		HX_STACK_LINE(661)
		tmp4 = false;
	}
	HX_STACK_LINE(661)
	if ((tmp4)){
		HX_STACK_LINE(662)
		::luxe::structural::BalancedBSTNode tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(662)
		this->swap_color(tmp5);
	}
	HX_STACK_LINE(665)
	{
		HX_STACK_LINE(665)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(665)
		{
			HX_STACK_LINE(665)
			::luxe::structural::BalancedBSTNode _node1 = _node->left;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(665)
			bool tmp6 = (_node1 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(665)
			if ((tmp6)){
				HX_STACK_LINE(665)
				tmp5 = (int)0;
			}
			else{
				HX_STACK_LINE(665)
				tmp5 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(665)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(665)
		{
			HX_STACK_LINE(665)
			::luxe::structural::BalancedBSTNode _node1 = _node->right;		HX_STACK_VAR(_node1,"_node1");
			HX_STACK_LINE(665)
			bool tmp7 = (_node1 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(665)
			if ((tmp7)){
				HX_STACK_LINE(665)
				tmp6 = (int)0;
			}
			else{
				HX_STACK_LINE(665)
				tmp6 = _node1->nodecount;
			}
		}
		HX_STACK_LINE(665)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(665)
		int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(665)
		_node->nodecount = tmp8;
		HX_STACK_LINE(665)
		_node;
	}
	HX_STACK_LINE(667)
	::luxe::structural::BalancedBSTNode tmp5 = _node;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(667)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedBST_obj,balance,return )


BalancedBST_obj::BalancedBST_obj()
{
}

void BalancedBST_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedBST);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(compare,"compare");
	HX_MARK_MEMBER_NAME(empty,"empty");
	HX_MARK_END_CLASS();
}

void BalancedBST_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(compare,"compare");
	HX_VISIT_MEMBER_NAME(empty,"empty");
}

Dynamic BalancedBST_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		if (HX_FIELD_EQ(inName,"rank") ) { return rank_dyn(); }
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return inCallProp == hx::paccAlways ? get_empty() : empty; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth_dyn(); }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"select") ) { return select_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"is_red") ) { return is_red_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare; }
		if (HX_FIELD_EQ(inName,"largest") ) { return largest_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"balance") ) { return balance_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"smallest") ) { return smallest_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { return get_empty_dyn(); }
		if (HX_FIELD_EQ(inName,"node_find") ) { return node_find_dyn(); }
		if (HX_FIELD_EQ(inName,"node_rank") ) { return node_rank_dyn(); }
		if (HX_FIELD_EQ(inName,"node_ceil") ) { return node_ceil_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"node_depth") ) { return node_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"node_count") ) { return node_count_dyn(); }
		if (HX_FIELD_EQ(inName,"node_floor") ) { return node_floor_dyn(); }
		if (HX_FIELD_EQ(inName,"swap_color") ) { return swap_color_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"node_insert") ) { return node_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"node_select") ) { return node_select_dyn(); }
		if (HX_FIELD_EQ(inName,"node_remove") ) { return node_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_left") ) { return rotate_left_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"node_largest") ) { return node_largest_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate_right") ) { return rotate_right_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"traverse_node") ) { return traverse_node_dyn(); }
		if (HX_FIELD_EQ(inName,"node_smallest") ) { return node_smallest_dyn(); }
		if (HX_FIELD_EQ(inName,"move_red_left") ) { return move_red_left_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"remove_largest") ) { return remove_largest_dyn(); }
		if (HX_FIELD_EQ(inName,"move_red_right") ) { return move_red_right_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"remove_smallest") ) { return remove_smallest_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"node_update_count") ) { return node_update_count_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"node_remove_largest") ) { return node_remove_largest_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"node_remove_smallest") ) { return node_remove_smallest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BalancedBST_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::luxe::structural::BalancedBSTNode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { compare=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BalancedBST_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BalancedBST_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::BalancedBSTNode*/ ,(int)offsetof(BalancedBST_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BalancedBST_obj,compare),HX_HCSTRING("compare","\xa5","\x18","\x69","\x83")},
	{hx::fsBool,(int)offsetof(BalancedBST_obj,empty),HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("find","\x39","\xd0","\xbb","\x43"),
	HX_HCSTRING("rank","\xac","\x4d","\xa4","\x4b"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("smallest","\xdf","\x8d","\xe1","\xa5"),
	HX_HCSTRING("largest","\x1c","\x3d","\xbc","\x3b"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("remove_smallest","\x7a","\x40","\xc3","\x8c"),
	HX_HCSTRING("remove_largest","\xe1","\x16","\x19","\x66"),
	HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"),
	HX_HCSTRING("ceil","\x05","\x1f","\xbd","\x41"),
	HX_HCSTRING("toArray","\x1e","\xba","\x13","\xf2"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("traverse_node","\xef","\xc2","\x11","\x17"),
	HX_HCSTRING("get_empty","\xe4","\x96","\x83","\xb3"),
	HX_HCSTRING("node_depth","\xc6","\xaf","\x69","\xa9"),
	HX_HCSTRING("node_count","\x92","\x03","\xa3","\x1c"),
	HX_HCSTRING("node_insert","\x16","\x6f","\x64","\xc3"),
	HX_HCSTRING("node_update_count","\x76","\xae","\x3a","\x97"),
	HX_HCSTRING("node_find","\xd6","\x5a","\xd5","\x07"),
	HX_HCSTRING("node_rank","\x49","\xd8","\xbd","\x0f"),
	HX_HCSTRING("node_select","\xd9","\x46","\xba","\x8f"),
	HX_HCSTRING("node_smallest","\xfc","\x2a","\x71","\x9c"),
	HX_HCSTRING("node_largest","\x9f","\x72","\x7b","\xec"),
	HX_HCSTRING("node_floor","\x8f","\x90","\xd6","\xd4"),
	HX_HCSTRING("node_ceil","\xa2","\xa9","\xd6","\x05"),
	HX_HCSTRING("node_remove_smallest","\xfd","\x30","\xc8","\x80"),
	HX_HCSTRING("node_remove_largest","\xbe","\xe7","\xaa","\x91"),
	HX_HCSTRING("node_remove","\x21","\xc8","\x0f","\x2a"),
	HX_HCSTRING("is_red","\x3c","\xb7","\xaf","\x71"),
	HX_HCSTRING("rotate_left","\xab","\xf3","\x5c","\x39"),
	HX_HCSTRING("rotate_right","\xb8","\x4f","\x05","\x6f"),
	HX_HCSTRING("swap_color","\x77","\x93","\x70","\x93"),
	HX_HCSTRING("move_red_left","\x23","\x8f","\x52","\x97"),
	HX_HCSTRING("move_red_right","\x40","\xbd","\xf7","\x47"),
	HX_HCSTRING("balance","\x1c","\x9d","\x8d","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBST_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBST_obj::__mClass,"__mClass");
};

#endif

hx::Class BalancedBST_obj::__mClass;

void BalancedBST_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.BalancedBST","\xa2","\x53","\xc2","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BalancedBST_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BalancedBST_obj >;
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
