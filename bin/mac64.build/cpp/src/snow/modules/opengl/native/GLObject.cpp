#include <hxcpp.h>

#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
namespace snow{
namespace modules{
namespace opengl{
namespace native{

Void GLObject_obj::__construct(int id)
{
HX_STACK_FRAME("snow.modules.opengl.native.GLObject","new",0x7583f740,"snow.modules.opengl.native.GLObject.new","snow/modules/opengl/native/GL.hx",41,0x0a066d0d)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(41)
	this->id = id;
}
;
	return null();
}

//GLObject_obj::~GLObject_obj() { }

Dynamic GLObject_obj::__CreateEmpty() { return  new GLObject_obj; }
hx::ObjectPtr< GLObject_obj > GLObject_obj::__new(int id)
{  hx::ObjectPtr< GLObject_obj > _result_ = new GLObject_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic GLObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLObject_obj > _result_ = new GLObject_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String GLObject_obj::toString( ){
	HX_STACK_FRAME("snow.modules.opengl.native.GLObject","toString",0x14e5bdcc,"snow.modules.opengl.native.GLObject.toString","snow/modules/opengl/native/GL.hx",42,0x0a066d0d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::String tmp1 = (HX_HCSTRING("GLObject(","\xe4","\x90","\x8e","\xcb") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,toString,return )

bool GLObject_obj::set_invalidated( bool value){
	HX_STACK_FRAME("snow.modules.opengl.native.GLObject","set_invalidated",0x92985e0c,"snow.modules.opengl.native.GLObject.set_invalidated","snow/modules/opengl/native/GL.hx",43,0x0a066d0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(44)
	this->id = (int)-1;
	HX_STACK_LINE(44)
	bool tmp = this->invalidated = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GLObject_obj,set_invalidated,return )


GLObject_obj::GLObject_obj()
{
}

Dynamic GLObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { return invalidated; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_invalidated") ) { return set_invalidated_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { if (inCallProp == hx::paccAlways) return set_invalidated(inValue);invalidated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GLObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(GLObject_obj,invalidated),HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_invalidated","\x2c","\x67","\x59","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLObject_obj::__mClass;

void GLObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.opengl.native.GLObject","\x4e","\x97","\x6f","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GLObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLObject_obj >;
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
