#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLObject
#include <snow/modules/opengl/native/GLObject.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GLTO
#include <snow/modules/opengl/native/GLTO.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native__GL_GLTexture_Impl_
#include <snow/modules/opengl/native/_GL/GLTexture_Impl_.h>
#endif
namespace snow{
namespace modules{
namespace opengl{
namespace native{
namespace _GL{

Void GLTexture_Impl__obj::__construct()
{
	return null();
}

//GLTexture_Impl__obj::~GLTexture_Impl__obj() { }

Dynamic GLTexture_Impl__obj::__CreateEmpty() { return  new GLTexture_Impl__obj; }
hx::ObjectPtr< GLTexture_Impl__obj > GLTexture_Impl__obj::__new()
{  hx::ObjectPtr< GLTexture_Impl__obj > _result_ = new GLTexture_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GLTexture_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLTexture_Impl__obj > _result_ = new GLTexture_Impl__obj();
	_result_->__construct();
	return _result_;}

::snow::modules::opengl::native::GLTO GLTexture_Impl__obj::_new( int _id){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLTexture_Impl_","_new",0x6b96db6d,"snow.modules.opengl.native._GL.GLTexture_Impl_._new","snow/modules/opengl/native/GL.hx",107,0x0a066d0d)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(107)
	::snow::modules::opengl::native::GLTO tmp = ::snow::modules::opengl::native::GLTO_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	::snow::modules::opengl::native::GLTO tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,_new,return )

int GLTexture_Impl__obj::get_id( ::snow::modules::opengl::native::GLTO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLTexture_Impl_","get_id",0xb1ae5430,"snow.modules.opengl.native._GL.GLTexture_Impl_.get_id","snow/modules/opengl/native/GL.hx",108,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(108)
	int tmp = this1->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,get_id,return )

bool GLTexture_Impl__obj::get_invalidated( ::snow::modules::opengl::native::GLTO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLTexture_Impl_","get_invalidated",0xeb390794,"snow.modules.opengl.native._GL.GLTexture_Impl_.get_invalidated","snow/modules/opengl/native/GL.hx",109,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(109)
	bool tmp = this1->invalidated;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,get_invalidated,return )

bool GLTexture_Impl__obj::set_invalidated( ::snow::modules::opengl::native::GLTO this1,bool _invalidated){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLTexture_Impl_","set_invalidated",0xe70484a0,"snow.modules.opengl.native._GL.GLTexture_Impl_.set_invalidated","snow/modules/opengl/native/GL.hx",110,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(_invalidated,"_invalidated")
	HX_STACK_LINE(110)
	bool tmp = _invalidated;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	bool tmp1 = this1->set_invalidated(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLTexture_Impl__obj,set_invalidated,return )

int GLTexture_Impl__obj::toInt( ::snow::modules::opengl::native::GLTO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLTexture_Impl_","toInt",0xd06742a8,"snow.modules.opengl.native._GL.GLTexture_Impl_.toInt","snow/modules/opengl/native/GL.hx",111,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(111)
	int tmp = this1->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,toInt,return )

Dynamic GLTexture_Impl__obj::toDynamic( ::snow::modules::opengl::native::GLTO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLTexture_Impl_","toDynamic",0x1f8ca5b8,"snow.modules.opengl.native._GL.GLTexture_Impl_.toDynamic","snow/modules/opengl/native/GL.hx",112,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(112)
	int tmp = this1->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,toDynamic,return )

Dynamic GLTexture_Impl__obj::toNullInt( ::snow::modules::opengl::native::GLTO this1){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLTexture_Impl_","toNullInt",0x0652bae1,"snow.modules.opengl.native._GL.GLTexture_Impl_.toNullInt","snow/modules/opengl/native/GL.hx",113,0x0a066d0d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(113)
	int tmp = this1->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,toNullInt,return )

::snow::modules::opengl::native::GLTO GLTexture_Impl__obj::fromInt( int _id){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLTexture_Impl_","fromInt",0xf8116719,"snow.modules.opengl.native._GL.GLTexture_Impl_.fromInt","snow/modules/opengl/native/GL.hx",114,0x0a066d0d)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(114)
	::snow::modules::opengl::native::GLTO tmp = ::snow::modules::opengl::native::GLTO_obj::__new(_id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::snow::modules::opengl::native::GLTO tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,fromInt,return )

::snow::modules::opengl::native::GLTO GLTexture_Impl__obj::fromDynamic( Dynamic _id){
	HX_STACK_FRAME("snow.modules.opengl.native._GL.GLTexture_Impl_","fromDynamic",0xe16056a9,"snow.modules.opengl.native._GL.GLTexture_Impl_.fromDynamic","snow/modules/opengl/native/GL.hx",115,0x0a066d0d)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(115)
	::snow::modules::opengl::native::GLTO tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		Dynamic tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		int _id1 = tmp2;		HX_STACK_VAR(_id1,"_id1");
		HX_STACK_LINE(115)
		::snow::modules::opengl::native::GLTO tmp3 = ::snow::modules::opengl::native::GLTO_obj::__new(_id1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		tmp = tmp3;
	}
	HX_STACK_LINE(115)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,fromDynamic,return )


GLTexture_Impl__obj::GLTexture_Impl__obj()
{
}

bool GLTexture_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLTexture_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTexture_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLTexture_Impl__obj::__mClass;

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

void GLTexture_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.opengl.native._GL.GLTexture_Impl_","\xe2","\x55","\x0a","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLTexture_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLTexture_Impl__obj >;
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
