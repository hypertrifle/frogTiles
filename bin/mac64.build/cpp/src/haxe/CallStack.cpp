#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
namespace haxe{

Void CallStack_obj::__construct()
{
	return null();
}

//CallStack_obj::~CallStack_obj() { }

Dynamic CallStack_obj::__CreateEmpty() { return  new CallStack_obj; }
hx::ObjectPtr< CallStack_obj > CallStack_obj::__new()
{  hx::ObjectPtr< CallStack_obj > _result_ = new CallStack_obj();
	_result_->__construct();
	return _result_;}

Dynamic CallStack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CallStack_obj > _result_ = new CallStack_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > CallStack_obj::callStack( ){
	HX_STACK_FRAME("haxe.CallStack","callStack",0xfa9165be,"haxe.CallStack.callStack","/usr/lib/haxe/std/haxe/CallStack.hx",77,0xab2662dc)
	HX_STACK_LINE(89)
	Array< ::String > s = ::__hxcpp_get_call_stack(true);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(90)
	return ::haxe::CallStack_obj::makeStack(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_obj,callStack,return )

Array< ::Dynamic > CallStack_obj::makeStack( Array< ::String > s){
	Array< ::String > stack = s;
	Array< ::Dynamic > m = Array_obj< ::Dynamic >::__new();
	{
		int _g = (int)0;
		while((true)){
			bool tmp = (_g < stack->length);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			::String tmp2 = stack->__get(_g);
			::String func = tmp2;
			++(_g);
			Array< ::String > words = func.split(HX_HCSTRING("::","\xc0","\x32","\x00","\x00"));
			bool tmp3 = (words->length == (int)0);
			if ((tmp3)){
				m->push(::haxe::StackItem_obj::CFunction);
			}
			else{
				bool tmp4 = (words->length == (int)2);
				if ((tmp4)){
					::String tmp5 = words->__get((int)0);
					::String tmp6 = words->__get((int)1);
					::haxe::StackItem tmp7 = ::haxe::StackItem_obj::Method(tmp5,tmp6);
					m->push(tmp7);
				}
				else{
					bool tmp5 = (words->length == (int)4);
					if ((tmp5)){
						::String tmp6 = words->__get((int)0);
						::String tmp7 = words->__get((int)1);
						::haxe::StackItem tmp8 = ::haxe::StackItem_obj::Method(tmp6,tmp7);
						::String tmp9 = words->__get((int)2);
						::String tmp10 = words->__get((int)3);
						Dynamic tmp11 = ::Std_obj::parseInt(tmp10);
						::haxe::StackItem tmp12 = ::haxe::StackItem_obj::FilePos(tmp8,tmp9,tmp11);
						m->push(tmp12);
					}
				}
			}
		}
	}
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_obj,makeStack,return )


CallStack_obj::CallStack_obj()
{
}

bool CallStack_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { outValue = callStack_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"makeStack") ) { outValue = makeStack_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallStack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallStack_obj::__mClass,"__mClass");
};

#endif

hx::Class CallStack_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("callStack","\xca","\xc1","\x4a","\x10"),
	HX_HCSTRING("makeStack","\x7a","\xde","\xa3","\x57"),
	::String(null()) };

void CallStack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.CallStack","\x62","\x4b","\x54","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallStack_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CallStack_obj >;
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

} // end namespace haxe
