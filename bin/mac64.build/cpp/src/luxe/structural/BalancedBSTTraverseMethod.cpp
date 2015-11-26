#include <hxcpp.h>

#ifndef INCLUDED_luxe_structural_BalancedBSTTraverseMethod
#include <luxe/structural/BalancedBSTTraverseMethod.h>
#endif
namespace luxe{
namespace structural{

::luxe::structural::BalancedBSTTraverseMethod BalancedBSTTraverseMethod_obj::order_post;

::luxe::structural::BalancedBSTTraverseMethod BalancedBSTTraverseMethod_obj::order_pre;

::luxe::structural::BalancedBSTTraverseMethod BalancedBSTTraverseMethod_obj::order_retain;

HX_DEFINE_CREATE_ENUM(BalancedBSTTraverseMethod_obj)

int BalancedBSTTraverseMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("order_post","\xf1","\xec","\x93","\xa1")) return 2;
	if (inName==HX_HCSTRING("order_pre","\xb2","\xf4","\x5f","\x72")) return 0;
	if (inName==HX_HCSTRING("order_retain","\x96","\xde","\x6d","\x2b")) return 1;
	return super::__FindIndex(inName);
}

int BalancedBSTTraverseMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("order_post","\xf1","\xec","\x93","\xa1")) return 0;
	if (inName==HX_HCSTRING("order_pre","\xb2","\xf4","\x5f","\x72")) return 0;
	if (inName==HX_HCSTRING("order_retain","\x96","\xde","\x6d","\x2b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BalancedBSTTraverseMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("order_post","\xf1","\xec","\x93","\xa1")) return order_post;
	if (inName==HX_HCSTRING("order_pre","\xb2","\xf4","\x5f","\x72")) return order_pre;
	if (inName==HX_HCSTRING("order_retain","\x96","\xde","\x6d","\x2b")) return order_retain;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("order_pre","\xb2","\xf4","\x5f","\x72"),
	HX_HCSTRING("order_retain","\x96","\xde","\x6d","\x2b"),
	HX_HCSTRING("order_post","\xf1","\xec","\x93","\xa1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_post,"order_post");
	HX_MARK_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_pre,"order_pre");
	HX_MARK_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_retain,"order_retain");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBSTTraverseMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_post,"order_post");
	HX_VISIT_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_pre,"order_pre");
	HX_VISIT_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_retain,"order_retain");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class BalancedBSTTraverseMethod_obj::__mClass;

Dynamic __Create_BalancedBSTTraverseMethod_obj() { return new BalancedBSTTraverseMethod_obj; }

void BalancedBSTTraverseMethod_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("luxe.structural.BalancedBSTTraverseMethod","\x75","\x79","\x60","\x0f"), hx::TCanCast< BalancedBSTTraverseMethod_obj >,sStaticFields,sMemberFields,
	&__Create_BalancedBSTTraverseMethod_obj, &__Create,
	&super::__SGetClass(), &CreateBalancedBSTTraverseMethod_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BalancedBSTTraverseMethod_obj::__boot()
{
hx::Static(order_post) = hx::CreateEnum< BalancedBSTTraverseMethod_obj >(HX_HCSTRING("order_post","\xf1","\xec","\x93","\xa1"),2);
hx::Static(order_pre) = hx::CreateEnum< BalancedBSTTraverseMethod_obj >(HX_HCSTRING("order_pre","\xb2","\xf4","\x5f","\x72"),0);
hx::Static(order_retain) = hx::CreateEnum< BalancedBSTTraverseMethod_obj >(HX_HCSTRING("order_retain","\x96","\xde","\x6d","\x2b"),1);
}


} // end namespace luxe
} // end namespace structural
