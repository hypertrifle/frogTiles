#include <hxcpp.h>

#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
namespace luxe{
namespace debug{

Void DebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.DebugView","new",0x6e3d9b17,"luxe.debug.DebugView.new","luxe/debug/DebugView.hx",8,0xfc1625fb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->visible = false;
	HX_STACK_LINE(10)
	super::__construct(null(),null());
}
;
	return null();
}

//DebugView_obj::~DebugView_obj() { }

Dynamic DebugView_obj::__CreateEmpty() { return  new DebugView_obj; }
hx::ObjectPtr< DebugView_obj > DebugView_obj::__new()
{  hx::ObjectPtr< DebugView_obj > _result_ = new DebugView_obj();
	_result_->__construct();
	return _result_;}

Dynamic DebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebugView_obj > _result_ = new DebugView_obj();
	_result_->__construct();
	return _result_;}

Void DebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","refresh",0x530bcc12,"luxe.debug.DebugView.refresh","luxe/debug/DebugView.hx",15,0xfc1625fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,refresh,(void))

Void DebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","process",0x573594a6,"luxe.debug.DebugView.process","luxe/debug/DebugView.hx",16,0xfc1625fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,process,(void))

Void DebugView_obj::onmousedown( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onmousedown",0xcaaf61bf,"luxe.debug.DebugView.onmousedown","luxe/debug/DebugView.hx",17,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onmousedown,(void))

Void DebugView_obj::onmousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onmousewheel",0x7ab4fc9e,"luxe.debug.DebugView.onmousewheel","luxe/debug/DebugView.hx",18,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onmousewheel,(void))

Void DebugView_obj::onmouseup( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onmouseup",0xb701ce78,"luxe.debug.DebugView.onmouseup","luxe/debug/DebugView.hx",19,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onmouseup,(void))

Void DebugView_obj::onmousemove( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onmousemove",0xd0a24c6e,"luxe.debug.DebugView.onmousemove","luxe/debug/DebugView.hx",20,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onmousemove,(void))

Void DebugView_obj::onkeydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onkeydown",0xa7fcfc39,"luxe.debug.DebugView.onkeydown","luxe/debug/DebugView.hx",21,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onkeydown,(void))

Void DebugView_obj::onkeyup( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onkeyup",0x47f9f672,"luxe.debug.DebugView.onkeyup","luxe/debug/DebugView.hx",22,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onkeyup,(void))

Void DebugView_obj::onwindowsized( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.DebugView","onwindowsized",0x43fea94b,"luxe.debug.DebugView.onwindowsized","luxe/debug/DebugView.hx",23,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebugView_obj,onwindowsized,(void))

Void DebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","create",0xe3d5e8a5,"luxe.debug.DebugView.create","luxe/debug/DebugView.hx",24,0xfc1625fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,create,(void))

Void DebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","show",0x0afa6a66,"luxe.debug.DebugView.show","luxe/debug/DebugView.hx",26,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,show,(void))

Void DebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.DebugView","hide",0x03b5ca2b,"luxe.debug.DebugView.hide","luxe/debug/DebugView.hx",29,0xfc1625fb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->visible = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugView_obj,hide,(void))


DebugView_obj::DebugView_obj()
{
}

Dynamic DebugView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DebugView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DebugView_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebugView_obj::__mClass,"__mClass");
};

#endif

hx::Class DebugView_obj::__mClass;

void DebugView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.DebugView","\xa5","\xc3","\x46","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DebugView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DebugView_obj >;
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
} // end namespace debug
