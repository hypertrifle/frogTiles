#include <hxcpp.h>

#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_snow_core_native_input_Input
#include <snow/core/native/input/Input.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Input
#include <snow/modules/interfaces/Input.h>
#endif
#ifndef INCLUDED_snow_system_input_Input
#include <snow/system/input/Input.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace input{

Void Input_obj::__construct(::snow::_system::input::Input _system)
{
HX_STACK_FRAME("snow.core.native.input.Input","new",0x92a94465,"snow.core.native.input.Input.new","snow/core/native/input/Input.hx",13,0x3a301f0d)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
{
	HX_STACK_LINE(13)
	this->_system = _system;
}
;
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new(::snow::_system::input::Input _system)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(_system);
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Input_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::modules::interfaces::Input_obj)) return operator ::snow::modules::interfaces::Input_obj *();
	return super::__ToInterface(inType);
}

Input_obj::operator ::snow::modules::interfaces::Input_obj *()
	{ return new ::snow::modules::interfaces::Input_delegate_< Input_obj >(this); }
Void Input_obj::init( ){
{
		HX_STACK_FRAME("snow.core.native.input.Input","init",0xbe2b4b6b,"snow.core.native.input.Input.init","snow/core/native/input/Input.hx",17,0x3a301f0d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,init,(void))

Void Input_obj::update( ){
{
		HX_STACK_FRAME("snow.core.native.input.Input","update",0x07dea324,"snow.core.native.input.Input.update","snow/core/native/input/Input.hx",18,0x3a301f0d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::destroy( ){
{
		HX_STACK_FRAME("snow.core.native.input.Input","destroy",0x61a6877f,"snow.core.native.input.Input.destroy","snow/core/native/input/Input.hx",19,0x3a301f0d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,destroy,(void))

Void Input_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.core.native.input.Input","on_event",0x5bf36b95,"snow.core.native.input.Input.on_event","snow/core/native/input/Input.hx",20,0x3a301f0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,on_event,(void))

Void Input_obj::listen( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.input.Input","listen",0x70d2e562,"snow.core.native.input.Input.listen","snow/core/native/input/Input.hx",22,0x3a301f0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,listen,(void))

Void Input_obj::unlisten( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("snow.core.native.input.Input","unlisten",0x316fd13b,"snow.core.native.input.Input.unlisten","snow/core/native/input/Input.hx",23,0x3a301f0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,unlisten,(void))

Void Input_obj::text_input_start( ){
{
		HX_STACK_FRAME("snow.core.native.input.Input","text_input_start",0xbfe11a36,"snow.core.native.input.Input.text_input_start","snow/core/native/input/Input.hx",28,0x3a301f0d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		::snow::core::native::input::Input_obj::snow_input_text_start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,text_input_start,(void))

Void Input_obj::text_input_stop( ){
{
		HX_STACK_FRAME("snow.core.native.input.Input","text_input_stop",0x5dd8e0ae,"snow.core.native.input.Input.text_input_stop","snow/core/native/input/Input.hx",30,0x3a301f0d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::snow::core::native::input::Input_obj::snow_input_text_stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,text_input_stop,(void))

Void Input_obj::text_input_rect( int x,int y,int w,int h){
{
		HX_STACK_FRAME("snow.core.native.input.Input","text_input_rect",0x5d243dd0,"snow.core.native.input.Input.text_input_rect","snow/core/native/input/Input.hx",32,0x3a301f0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(32)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		int tmp2 = w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		int tmp3 = h;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		::snow::core::native::input::Input_obj::snow_input_text_rect(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Input_obj,text_input_rect,(void))

Dynamic Input_obj::snow_input_text_start;

Dynamic Input_obj::snow_input_text_stop;

Dynamic Input_obj::snow_input_text_rect;


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"listen") ) { return listen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		if (HX_FIELD_EQ(inName,"unlisten") ) { return unlisten_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"text_input_stop") ) { return text_input_stop_dyn(); }
		if (HX_FIELD_EQ(inName,"text_input_rect") ) { return text_input_rect_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"text_input_start") ) { return text_input_start_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Input_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"snow_input_text_stop") ) { outValue = snow_input_text_stop; return true;  }
		if (HX_FIELD_EQ(inName,"snow_input_text_rect") ) { outValue = snow_input_text_rect; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_input_text_start") ) { outValue = snow_input_text_start; return true;  }
	}
	return false;
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::snow::_system::input::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Input_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"snow_input_text_stop") ) { snow_input_text_stop=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_input_text_rect") ) { snow_input_text_rect=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_input_text_start") ) { snow_input_text_start=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::_system::input::Input*/ ,(int)offsetof(Input_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Input_obj::snow_input_text_start,HX_HCSTRING("snow_input_text_start","\xe1","\x21","\x1c","\x88")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Input_obj::snow_input_text_stop,HX_HCSTRING("snow_input_text_stop","\x63","\xb7","\x59","\x06")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Input_obj::snow_input_text_rect,HX_HCSTRING("snow_input_text_rect","\x85","\x14","\xa5","\x05")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("listen","\x47","\xc8","\xf9","\xef"),
	HX_HCSTRING("unlisten","\x60","\xf7","\x40","\xf2"),
	HX_HCSTRING("text_input_start","\x5b","\x6d","\x2c","\x8c"),
	HX_HCSTRING("text_input_stop","\x29","\xf9","\x62","\x8a"),
	HX_HCSTRING("text_input_rect","\x4b","\x56","\xae","\x89"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::snow_input_text_start,"snow_input_text_start");
	HX_MARK_MEMBER_NAME(Input_obj::snow_input_text_stop,"snow_input_text_stop");
	HX_MARK_MEMBER_NAME(Input_obj::snow_input_text_rect,"snow_input_text_rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::snow_input_text_start,"snow_input_text_start");
	HX_VISIT_MEMBER_NAME(Input_obj::snow_input_text_stop,"snow_input_text_stop");
	HX_VISIT_MEMBER_NAME(Input_obj::snow_input_text_rect,"snow_input_text_rect");
};

#endif

hx::Class Input_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("snow_input_text_start","\xe1","\x21","\x1c","\x88"),
	HX_HCSTRING("snow_input_text_stop","\x63","\xb7","\x59","\x06"),
	HX_HCSTRING("snow_input_text_rect","\x85","\x14","\xa5","\x05"),
	::String(null()) };

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.input.Input","\xf3","\x2d","\x74","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Input_obj::__GetStatic;
	__mClass->mSetStaticField = &Input_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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

void Input_obj::__boot()
{
	snow_input_text_start= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_input_text_start","\xe1","\x21","\x1c","\x88"),(int)0);
	snow_input_text_stop= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_input_text_stop","\x63","\xb7","\x59","\x06"),(int)0);
	snow_input_text_rect= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_input_text_rect","\x85","\x14","\xa5","\x05"),(int)4);
}

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace input
