#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLSO
#include <snow/modules/opengl/native/GLSO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native__GL_GLShader_Impl_
#include <snow/modules/opengl/native/_GL/GLShader_Impl_.h>
#endif
namespace snow{
namespace modules{
namespace opengl{
namespace native{
namespace _GL{

Void GLShader_Impl__obj::__construct()
{
	return null();
}

//GLShader_Impl__obj::~GLShader_Impl__obj() { }

Dynamic GLShader_Impl__obj::__CreateEmpty() { return  new GLShader_Impl__obj; }
hx::ObjectPtr< GLShader_Impl__obj > GLShader_Impl__obj::__new()
{  hx::ObjectPtr< GLShader_Impl__obj > _result_ = new GLShader_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GLShader_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShader_Impl__obj > _result_ = new GLShader_Impl__obj();
	_result_->__construct();
	return _result_;}

::snow::modules::opengl::native::GLSO GLShader_Impl__obj::_new( int _id){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLShader_Impl_","_new",0xbd7c9691,"snow.modules.opengl.native._GL.GLShader_Impl_._new","snow/modules/opengl/native/GL.hx",121,0x0a066d0d)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(121)
	::snow::modules::opengl::native::GLSO tmp = ::snow::modules::opengl::native::GLSO_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	::snow::modules::opengl::native::GLSO tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,_new,return )

int GLShader_Impl__obj::get_id( ::snow::modules::opengl::native::GLSO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLShader_Impl_","get_id",0x94d42054,"snow.modules.opengl.native._GL.GLShader_Impl_.get_id","snow/modules/opengl/native/GL.hx",122,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(122)
	int tmp = this1->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,get_id,return )

bool GLShader_Impl__obj::get_invalidated( ::snow::modules::opengl::native::GLSO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLShader_Impl_","get_invalidated",0x5d7296f0,"snow.modules.opengl.native._GL.GLShader_Impl_.get_invalidated","snow/modules/opengl/native/GL.hx",123,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(123)
	bool tmp = this1->invalidated;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,get_invalidated,return )

bool GLShader_Impl__obj::set_invalidated( ::snow::modules::opengl::native::GLSO this1,bool _invalidated){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLShader_Impl_","set_invalidated",0x593e13fc,"snow.modules.opengl.native._GL.GLShader_Impl_.set_invalidated","snow/modules/opengl/native/GL.hx",124,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(_invalidated,"_invalidated")
	HX_STACK_LINE(124)
	bool tmp = _invalidated;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	bool tmp1 = this1->set_invalidated(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLShader_Impl__obj,set_invalidated,return )

int GLShader_Impl__obj::toInt( ::snow::modules::opengl::native::GLSO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLShader_Impl_","toInt",0x27854704,"snow.modules.opengl.native._GL.GLShader_Impl_.toInt","snow/modules/opengl/native/GL.hx",125,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(125)
	int tmp = this1->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,toInt,return )

Dynamic GLShader_Impl__obj::toDynamic( ::snow::modules::opengl::native::GLSO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLShader_Impl_","toDynamic",0xf0da0814,"snow.modules.opengl.native._GL.GLShader_Impl_.toDynamic","snow/modules/opengl/native/GL.hx",126,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(126)
	int tmp = this1->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,toDynamic,return )

Dynamic GLShader_Impl__obj::toNullInt( ::snow::modules::opengl::native::GLSO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLShader_Impl_","toNullInt",0xd7a01d3d,"snow.modules.opengl.native._GL.GLShader_Impl_.toNullInt","snow/modules/opengl/native/GL.hx",127,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(127)
	int tmp = this1->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,toNullInt,return )

::snow::modules::opengl::native::GLSO GLShader_Impl__obj::fromInt( int _id){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLShader_Impl_","fromInt",0xd5fe3a75,"snow.modules.opengl.native._GL.GLShader_Impl_.fromInt","snow/modules/opengl/native/GL.hx",128,0x0a066d0d)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(128)
	::snow::modules::opengl::native::GLSO tmp = ::snow::modules::opengl::native::GLSO_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	::snow::modules::opengl::native::GLSO tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,fromInt,return )

::snow::modules::opengl::native::GLSO GLShader_Impl__obj::fromDynamic( Dynamic _id){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLShader_Impl_","fromDynamic",0xaa900805,"snow.modules.opengl.native._GL.GLShader_Impl_.fromDynamic","snow/modules/opengl/native/GL.hx",129,0x0a066d0d)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(129)
	::snow::modules::opengl::native::GLSO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		Dynamic tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		int _id1 = tmp2;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(129)
		::snow::modules::opengl::native::GLSO tmp3 = ::snow::modules::opengl::native::GLSO_obj::__new(_id1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		tmp = tmp3;
	}
	HX_STACK_LINE(129)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLShader_Impl__obj,fromDynamic,return )


GLShader_Impl__obj::GLShader_Impl__obj()
{
}

bool GLShader_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { outValue = get_id_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toDynamic") ) { outValue = toDynamic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toNullInt") ) { outValue = toNullInt_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromDynamic") ) { outValue = fromDynamic_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_invalidated") ) { outValue = get_invalidated_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_invalidated") ) { outValue = set_invalidated_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShader_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShader_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLShader_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("get_invalidated","\x20","\xea","\x8d","\x7e"),
	HX_HCSTRING("set_invalidated","\x2c","\x67","\x59","\x7a"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	HX_HCSTRING("toDynamic","\x44","\xd7","\xa9","\x65"),
	HX_HCSTRING("toNullInt","\x6d","\xec","\x6f","\x4c"),
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("fromDynamic","\x35","\x03","\x56","\xce"),
	::String(null()) };

void GLShader_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.opengl.native._GL.GLShader_Impl_","\x3e","\x6d","\xc6","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLShader_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLShader_Impl__obj >;
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
} // end namespace _GL
