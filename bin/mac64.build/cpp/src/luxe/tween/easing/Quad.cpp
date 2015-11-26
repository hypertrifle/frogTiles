#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_Quad
#include <luxe/tween/easing/Quad.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_QuadEaseIn
#include <luxe/tween/easing/QuadEaseIn.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_QuadEaseInOut
#include <luxe/tween/easing/QuadEaseInOut.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_QuadEaseOut
#include <luxe/tween/easing/QuadEaseOut.h>
#endif
namespace luxe{
namespace tween{
namespace easing{

Void Quad_obj::__construct()
{
	return null();
}

//Quad_obj::~Quad_obj() { }

Dynamic Quad_obj::__CreateEmpty() { return  new Quad_obj; }
hx::ObjectPtr< Quad_obj > Quad_obj::__new()
{  hx::ObjectPtr< Quad_obj > _result_ = new Quad_obj();
	_result_->__construct();
	return _result_;}

Dynamic Quad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quad_obj > _result_ = new Quad_obj();
	_result_->__construct();
	return _result_;}

::luxe::tween::easing::IEasing Quad_obj::get_easeIn( ){
	HX_STACK_FRAME("luxe.tween.easing.Quad","get_easeIn",0x2d7bd2fb,"luxe.tween.easing.Quad.get_easeIn","luxe/tween/easing/Quad.hx",19,0xf74ebc30)
	HX_STACK_LINE(21)
	::luxe::tween::easing::QuadEaseIn tmp = ::luxe::tween::easing::QuadEaseIn_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quad_obj,get_easeIn,return )

::luxe::tween::easing::IEasing Quad_obj::get_easeInOut( ){
	HX_STACK_FRAME("luxe.tween.easing.Quad","get_easeInOut",0xa6585453,"luxe.tween.easing.Quad.get_easeInOut","luxe/tween/easing/Quad.hx",26,0xf74ebc30)
	HX_STACK_LINE(28)
	::luxe::tween::easing::QuadEaseInOut tmp = ::luxe::tween::easing::QuadEaseInOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quad_obj,get_easeInOut,return )

::luxe::tween::easing::IEasing Quad_obj::get_easeOut( ){
	HX_STACK_FRAME("luxe.tween.easing.Quad","get_easeOut",0x9ee15cb8,"luxe.tween.easing.Quad.get_easeOut","luxe/tween/easing/Quad.hx",33,0xf74ebc30)
	HX_STACK_LINE(35)
	::luxe::tween::easing::QuadEaseOut tmp = ::luxe::tween::easing::QuadEaseOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quad_obj,get_easeOut,return )


Quad_obj::Quad_obj()
{
}

bool Quad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeIn(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeOut(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeInOut(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { outValue = get_easeIn_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { outValue = get_easeOut_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { outValue = get_easeInOut_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quad_obj::__mClass,"__mClass");
};

#endif

hx::Class Quad_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null()) };

void Quad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.easing.Quad","\x4f","\x1a","\xb2","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Quad_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Quad_obj >;
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
} // end namespace tween
} // end namespace easing
