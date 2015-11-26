#include <hxcpp.h>

#ifndef INCLUDED_luxe_structural_BalancedBSTNode
#include <luxe/structural/BalancedBSTNode.h>
#endif
namespace luxe{
namespace structural{

Void BalancedBSTNode_obj::__construct(Dynamic _key,Dynamic _value,int _node_count,bool _color)
{
HX_STACK_FRAME("luxe.structural.BalancedBSTNode","new",0x49a355b6,"luxe.structural.BalancedBSTNode.new","luxe/structural/BalancedBST.hx",777,0xa0b365fc)
HX_STACK_THIS(this)
HX_STACK_ARG(_key,"_key")
HX_STACK_ARG(_value,"_value")
HX_STACK_ARG(_node_count,"_node_count")
HX_STACK_ARG(_color,"_color")
{
	HX_STACK_LINE(779)
	this->left = null();
	HX_STACK_LINE(780)
	this->right = null();
	HX_STACK_LINE(782)
	this->key = _key;
	HX_STACK_LINE(783)
	this->value = _value;
	HX_STACK_LINE(785)
	this->nodecount = _node_count;
	HX_STACK_LINE(786)
	this->color = _color;
}
;
	return null();
}

//BalancedBSTNode_obj::~BalancedBSTNode_obj() { }

Dynamic BalancedBSTNode_obj::__CreateEmpty() { return  new BalancedBSTNode_obj; }
hx::ObjectPtr< BalancedBSTNode_obj > BalancedBSTNode_obj::__new(Dynamic _key,Dynamic _value,int _node_count,bool _color)
{  hx::ObjectPtr< BalancedBSTNode_obj > _result_ = new BalancedBSTNode_obj();
	_result_->__construct(_key,_value,_node_count,_color);
	return _result_;}

Dynamic BalancedBSTNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BalancedBSTNode_obj > _result_ = new BalancedBSTNode_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}


BalancedBSTNode_obj::BalancedBSTNode_obj()
{
}

void BalancedBSTNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedBSTNode);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(nodecount,"nodecount");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void BalancedBSTNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(nodecount,"nodecount");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic BalancedBSTNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodecount") ) { return nodecount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BalancedBSTNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::luxe::structural::BalancedBSTNode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::luxe::structural::BalancedBSTNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodecount") ) { nodecount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BalancedBSTNode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BalancedBSTNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("nodecount","\x8d","\xb3","\x6b","\x5b"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::BalancedBSTNode*/ ,(int)offsetof(BalancedBSTNode_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsObject /*::luxe::structural::BalancedBSTNode*/ ,(int)offsetof(BalancedBSTNode_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsInt,(int)offsetof(BalancedBSTNode_obj,nodecount),HX_HCSTRING("nodecount","\x8d","\xb3","\x6b","\x5b")},
	{hx::fsBool,(int)offsetof(BalancedBSTNode_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BalancedBSTNode_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BalancedBSTNode_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("nodecount","\x8d","\xb3","\x6b","\x5b"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBSTNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBSTNode_obj::__mClass,"__mClass");
};

#endif

hx::Class BalancedBSTNode_obj::__mClass;

void BalancedBSTNode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.BalancedBSTNode","\xc4","\x02","\xb5","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BalancedBSTNode_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BalancedBSTNode_obj >;
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
