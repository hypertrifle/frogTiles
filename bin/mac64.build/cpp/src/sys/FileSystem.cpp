#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace sys{

Void FileSystem_obj::__construct()
{
	return null();
}

//FileSystem_obj::~FileSystem_obj() { }

Dynamic FileSystem_obj::__CreateEmpty() { return  new FileSystem_obj; }
hx::ObjectPtr< FileSystem_obj > FileSystem_obj::__new()
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

::String FileSystem_obj::fullPath( ::String relPath){
	HX_STACK_FRAME("sys.FileSystem","fullPath",0xc6463316,"sys.FileSystem.fullPath","/usr/lib/haxe/std/cpp/_std/sys/FileSystem.hx",52,0x65d3e0d3)
	HX_STACK_ARG(relPath,"relPath")
	HX_STACK_LINE(53)
	::String tmp = relPath;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::String tmp1 = ::sys::FileSystem_obj::file_full_path(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	::String tmp2 = ::String(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,fullPath,return )

Void FileSystem_obj::deleteFile( ::String path){
{
		HX_STACK_FRAME("sys.FileSystem","deleteFile",0x4bd48509,"sys.FileSystem.deleteFile","/usr/lib/haxe/std/cpp/_std/sys/FileSystem.hx",88,0x65d3e0d3)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(89)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		Dynamic tmp1 = ::sys::FileSystem_obj::file_delete(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		if ((tmp2)){
			HX_STACK_LINE(90)
			::String tmp3 = (HX_HCSTRING("Could not delete file:","\xd5","\xc3","\x43","\x01") + path);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			HX_STACK_DO_THROW(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,deleteFile,(void))

Dynamic FileSystem_obj::file_delete;

Dynamic FileSystem_obj::file_full_path;


FileSystem_obj::FileSystem_obj()
{
}

bool FileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fullPath") ) { outValue = fullPath_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deleteFile") ) { outValue = deleteFile_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"file_delete") ) { outValue = file_delete; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"file_full_path") ) { outValue = file_full_path; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::file_delete,HX_HCSTRING("file_delete","\xce","\x0a","\x39","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::file_full_path,HX_HCSTRING("file_full_path","\xd2","\xce","\x61","\x04")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileSystem_obj::file_delete,"file_delete");
	HX_MARK_MEMBER_NAME(FileSystem_obj::file_full_path,"file_full_path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::file_delete,"file_delete");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::file_full_path,"file_full_path");
};

#endif

hx::Class FileSystem_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fullPath","\xd4","\x6e","\x65","\x5e"),
	HX_HCSTRING("deleteFile","\x47","\xac","\x08","\x97"),
	HX_HCSTRING("file_delete","\xce","\x0a","\x39","\x9f"),
	HX_HCSTRING("file_full_path","\xd2","\xce","\x61","\x04"),
	::String(null()) };

void FileSystem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.FileSystem","\x6c","\x2c","\xe5","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileSystem_obj >;
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

void FileSystem_obj::__boot()
{
	file_delete= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_delete","\xce","\x0a","\x39","\x9f"),(int)1);
	file_full_path= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_full_path","\xd2","\xce","\x61","\x04"),(int)1);
}

} // end namespace sys
