#include <hxcpp.h>

#ifndef INCLUDED_snow_modules_opengl_native_GLBO
#include <snow/modules/opengl/native/GLBO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
namespace snow{
namespace modules{
namespace opengl{
namespace native{

Void GLBO_obj::__construct(int id)
{
HX_STACK_FRAME("snow.modules.opengl.native.GLBO","new",0x3d8ce9ae,"snow.modules.opengl.native.GLBO.new","snow/modules/opengl/native/GL.hx",50,0x0a066d0d)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(50)
	int tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	super::__construct(tmp);
}
;
	return null();
}

//GLBO_obj::~GLBO_obj() { }

Dynamic GLBO_obj::__CreateEmpty() { return  new GLBO_obj; }
hx::ObjectPtr< GLBO_obj > GLBO_obj::__new(int id)
{  hx::ObjectPtr< GLBO_obj > _result_ = new GLBO_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic GLBO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBO_obj > _result_ = new GLBO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String GLBO_obj::toString( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GLBO","toString",0x88713c9e,"snow.modules.opengl.native.GLBO.toString","snow/modules/opengl/native/GL.hx",50,0x0a066d0d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::String tmp1 = (HX_HCSTRING("GLBuffer(","\x83","\xcb","\xcf","\xfa") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	return tmp2;
}



GLBO_obj::GLBO_obj()
{
}

Dynamic GLBO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLBO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBO_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBO_obj::__mClass;

void GLBO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.opengl.native.GLBO","\xbc","\x3a","\x57","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBO_obj >;
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
