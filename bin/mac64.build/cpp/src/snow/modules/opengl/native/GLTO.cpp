#include <hxcpp.h>

#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLTO
#include <snow/modules/opengl/native/GLTO.h>
#endif
namespace snow{
namespace modules{
namespace opengl{
namespace native{

Void GLTO_obj::__construct(int id)
{
HX_STACK_FRAME("snow.modules.opengl.native.GLTO","new",0x6ff9685c,"snow.modules.opengl.native.GLTO.new","snow/modules/opengl/native/GL.hx",54,0x0a066d0d)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(54)
	int tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	super::__construct(tmp);
}
;
	return null();
}

//GLTO_obj::~GLTO_obj() { }

Dynamic GLTO_obj::__CreateEmpty() { return  new GLTO_obj; }
hx::ObjectPtr< GLTO_obj > GLTO_obj::__new(int id)
{  hx::ObjectPtr< GLTO_obj > _result_ = new GLTO_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic GLTO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLTO_obj > _result_ = new GLTO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String GLTO_obj::toString( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GLTO","toString",0x9814c730,"snow.modules.opengl.native.GLTO.toString","snow/modules/opengl/native/GL.hx",54,0x0a066d0d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::String tmp1 = (HX_HCSTRING("GLTexture(","\x32","\x1e","\xd3","\x33") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	return tmp2;
}



GLTO_obj::GLTO_obj()
{
}

Dynamic GLTO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLTO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTO_obj::__mClass,"__mClass");
};

#endif

hx::Class GLTO_obj::__mClass;

void GLTO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.opengl.native.GLTO","\x6a","\x4a","\x57","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLTO_obj >;
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
