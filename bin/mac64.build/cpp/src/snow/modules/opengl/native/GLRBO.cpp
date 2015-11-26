#include <hxcpp.h>

#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLRBO
#include <snow/modules/opengl/native/GLRBO.h>
#endif
namespace snow{
namespace modules{
namespace opengl{
namespace native{

Void GLRBO_obj::__construct(int id)
{
HX_STACK_FRAME("snow.modules.opengl.native.GLRBO","new",0xda658bc2,"snow.modules.opengl.native.GLRBO.new","snow/modules/opengl/native/GL.hx",52,0x0a066d0d)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(52)
	int tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	super::__construct(tmp);
}
;
	return null();
}

//GLRBO_obj::~GLRBO_obj() { }

Dynamic GLRBO_obj::__CreateEmpty() { return  new GLRBO_obj; }
hx::ObjectPtr< GLRBO_obj > GLRBO_obj::__new(int id)
{  hx::ObjectPtr< GLRBO_obj > _result_ = new GLRBO_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic GLRBO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRBO_obj > _result_ = new GLRBO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String GLRBO_obj::toString( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GLRBO","toString",0x2c30920a,"snow.modules.opengl.native.GLRBO.toString","snow/modules/opengl/native/GL.hx",52,0x0a066d0d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	::String tmp1 = (HX_HCSTRING("GLRenderbuffer(","\x2d","\x4d","\x5b","\x45") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	return tmp2;
}



GLRBO_obj::GLRBO_obj()
{
}

Dynamic GLRBO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRBO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRBO_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRBO_obj::__mClass;

void GLRBO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.opengl.native.GLRBO","\xd0","\x42","\x08","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRBO_obj >;
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
