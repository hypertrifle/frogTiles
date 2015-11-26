#include <hxcpp.h>

#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLPO
#include <snow/modules/opengl/native/GLPO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLSO
#include <snow/modules/opengl/native/GLSO.h>
#endif
namespace snow{
namespace modules{
namespace opengl{
namespace native{

Void GLPO_obj::__construct(int id)
{
HX_STACK_FRAME("snow.modules.opengl.native.GLPO","new",0xd68bf6e0,"snow.modules.opengl.native.GLPO.new","snow/modules/opengl/native/GL.hx",57,0x0a066d0d)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(57)
	int tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	super::__construct(tmp);
	HX_STACK_LINE(57)
	this->shaders = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//GLPO_obj::~GLPO_obj() { }

Dynamic GLPO_obj::__CreateEmpty() { return  new GLPO_obj; }
hx::ObjectPtr< GLPO_obj > GLPO_obj::__new(int id)
{  hx::ObjectPtr< GLPO_obj > _result_ = new GLPO_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic GLPO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLPO_obj > _result_ = new GLPO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String GLPO_obj::toString( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GLPO","toString",0x949b1a2c,"snow.modules.opengl.native.GLPO.toString","snow/modules/opengl/native/GL.hx",58,0x0a066d0d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::String tmp1 = (HX_HCSTRING("GLProgram(","\x69","\x10","\x2c","\x54") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	return tmp2;
}



GLPO_obj::GLPO_obj()
{
}

void GLPO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLPO);
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_END_CLASS();
}

void GLPO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
}

Dynamic GLPO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLPO_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLPO_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GLPO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLPO_obj,shaders),HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLPO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLPO_obj::__mClass,"__mClass");
};

#endif

hx::Class GLPO_obj::__mClass;

void GLPO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.opengl.native.GLPO","\xee","\x46","\x57","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GLPO_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLPO_obj >;
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
} // end namespace modules
} // end namespace opengl
} // end namespace native
