#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_snow_system_window__Windowing_WindowHandleMap
#include <snow/system/window/_Windowing/WindowHandleMap.h>
#endif
namespace snow{
namespace _system{
namespace window{
namespace _Windowing{

Void WindowHandleMap_obj::__construct()
{
HX_STACK_FRAME("snow.system.window._Windowing.WindowHandleMap","new",0x4af9a805,"snow.system.window._Windowing.WindowHandleMap.new","snow/system/window/Windowing.hx",217,0x84f7a4d7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(217)
	super::__construct();
}
;
	return null();
}

//WindowHandleMap_obj::~WindowHandleMap_obj() { }

Dynamic WindowHandleMap_obj::__CreateEmpty() { return  new WindowHandleMap_obj; }
hx::ObjectPtr< WindowHandleMap_obj > WindowHandleMap_obj::__new()
{  hx::ObjectPtr< WindowHandleMap_obj > _result_ = new WindowHandleMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic WindowHandleMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowHandleMap_obj > _result_ = new WindowHandleMap_obj();
	_result_->__construct();
	return _result_;}

int WindowHandleMap_obj::compare( Dynamic _tmp_k1,Dynamic _tmp_k2){
	HX_STACK_FRAME("snow.system.window._Windowing.WindowHandleMap","compare",0xac6426ca,"snow.system.window._Windowing.WindowHandleMap.compare","snow/system/window/Windowing.hx",219,0x84f7a4d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_k1,"_tmp_k1")
	HX_STACK_ARG(_tmp_k2,"_tmp_k2")
	HX_STACK_LINE(220)
	Dynamic k1 = _tmp_k1;		HX_STACK_VAR(k1,"k1");
	HX_STACK_LINE(220)
	Dynamic k2 = _tmp_k2;		HX_STACK_VAR(k2,"k2");
	HX_STACK_LINE(220)
	bool tmp = (k1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	if ((tmp)){
		HX_STACK_LINE(220)
		return (int)1;
	}
	HX_STACK_LINE(221)
	bool tmp1 = (k2 == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	if ((tmp1)){
		HX_STACK_LINE(221)
		return (int)1;
	}
	HX_STACK_LINE(222)
	bool tmp2 = (k1 == k2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	if ((tmp2)){
		HX_STACK_LINE(222)
		return (int)0;
	}
	HX_STACK_LINE(223)
	bool tmp3 = (k1 < k2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(223)
	if ((tmp3)){
		HX_STACK_LINE(223)
		return (int)-1;
	}
	HX_STACK_LINE(224)
	return (int)1;
}



WindowHandleMap_obj::WindowHandleMap_obj()
{
}

Dynamic WindowHandleMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowHandleMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowHandleMap_obj::__mClass,"__mClass");
};

#endif

hx::Class WindowHandleMap_obj::__mClass;

void WindowHandleMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.window._Windowing.WindowHandleMap","\x93","\x41","\xa2","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowHandleMap_obj >;
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

} // end namespace snow
} // end namespace system
} // end namespace window
} // end namespace _Windowing
