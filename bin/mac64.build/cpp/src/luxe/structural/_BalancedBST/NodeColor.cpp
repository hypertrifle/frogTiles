#include <hxcpp.h>

#ifndef INCLUDED_luxe_structural__BalancedBST_NodeColor
#include <luxe/structural/_BalancedBST/NodeColor.h>
#endif
namespace luxe{
namespace structural{
namespace _BalancedBST{

Void NodeColor_obj::__construct()
{
	return null();
}

//NodeColor_obj::~NodeColor_obj() { }

Dynamic NodeColor_obj::__CreateEmpty() { return  new NodeColor_obj; }
hx::ObjectPtr< NodeColor_obj > NodeColor_obj::__new()
{  hx::ObjectPtr< NodeColor_obj > _result_ = new NodeColor_obj();
	_result_->__construct();
	return _result_;}

Dynamic NodeColor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NodeColor_obj > _result_ = new NodeColor_obj();
	_result_->__construct();
	return _result_;}

bool NodeColor_obj::red;

bool NodeColor_obj::black;


NodeColor_obj::NodeColor_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &NodeColor_obj::red,HX_HCSTRING("red","\x51","\xd9","\x56","\x00")},
	{hx::fsBool,(void *) &NodeColor_obj::black,HX_HCSTRING("black","\xbf","\xd5","\xf1","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NodeColor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NodeColor_obj::red,"red");
	HX_MARK_MEMBER_NAME(NodeColor_obj::black,"black");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NodeColor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NodeColor_obj::red,"red");
	HX_VISIT_MEMBER_NAME(NodeColor_obj::black,"black");
};

#endif

hx::Class NodeColor_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("red","\x51","\xd9","\x56","\x00"),
	HX_HCSTRING("black","\xbf","\xd5","\xf1","\xb4"),
	::String(null()) };

void NodeColor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural._BalancedBST.NodeColor","\xa8","\x27","\xc7","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NodeColor_obj >;
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

void NodeColor_obj::__boot()
{
	red= true;
	black= false;
}

} // end namespace luxe
} // end namespace structural
} // end namespace _BalancedBST
