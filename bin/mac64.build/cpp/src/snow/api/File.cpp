#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_api_File
#include <snow/api/File.h>
#endif
#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
namespace snow{
namespace api{

Void File_obj::__construct(Dynamic _handle)
{
HX_STACK_FRAME("snow.api.File","new",0x42172cad,"snow.api.File.new","snow/api/File.hx",24,0x2d2da721)
HX_STACK_THIS(this)
HX_STACK_ARG(_handle,"_handle")
{
	HX_STACK_LINE(24)
	this->handle = _handle;
}
;
	return null();
}

//File_obj::~File_obj() { }

Dynamic File_obj::__CreateEmpty() { return  new File_obj; }
hx::ObjectPtr< File_obj > File_obj::__new(Dynamic _handle)
{  hx::ObjectPtr< File_obj > _result_ = new File_obj();
	_result_->__construct(_handle);
	return _result_;}

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< File_obj > _result_ = new File_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic File_obj::read( ::snow::api::buffers::ArrayBufferView dest,int size,int maxnum){
	HX_STACK_FRAME("snow.api.File","read",0x94d4b269,"snow.api.File.read","snow/api/File.hx",28,0x2d2da721)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(maxnum,"maxnum")
	HX_STACK_LINE(29)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	int tmp2 = maxnum;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	Dynamic tmp3 = ::snow::api::File_obj::snow_iosrc_file_read(tmp,dest->buffer->b,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(File_obj,read,return )

int File_obj::write( ::snow::api::buffers::ArrayBufferView src,int size,int num){
	HX_STACK_FRAME("snow.api.File","write",0x8ee6366c,"snow.api.File.write","snow/api/File.hx",33,0x2d2da721)
	HX_STACK_THIS(this)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(num,"num")
	HX_STACK_LINE(34)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int tmp2 = num;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	int tmp3 = ::snow::api::File_obj::snow_iosrc_file_write(tmp,src->buffer->b,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(File_obj,write,return )

Dynamic File_obj::seek( int offset,int whence){
	HX_STACK_FRAME("snow.api.File","seek",0x957dec8b,"snow.api.File.seek","snow/api/File.hx",38,0x2d2da721)
	HX_STACK_THIS(this)
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(whence,"whence")
	HX_STACK_LINE(39)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	int tmp1 = offset;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	int tmp2 = whence;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	Dynamic tmp3 = ::snow::api::File_obj::snow_iosrc_file_seek(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(File_obj,seek,return )

Dynamic File_obj::tell( ){
	HX_STACK_FRAME("snow.api.File","tell",0x96272944,"snow.api.File.tell","snow/api/File.hx",43,0x2d2da721)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Dynamic tmp1 = ::snow::api::File_obj::snow_iosrc_file_tell(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,tell,return )

int File_obj::close( ){
	HX_STACK_FRAME("snow.api.File","close",0x06efe145,"snow.api.File.close","snow/api/File.hx",49,0x2d2da721)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = ::snow::api::File_obj::snow_iosrc_file_close(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	int res = tmp1;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(51)
	this->handle = null();
	HX_STACK_LINE(52)
	int tmp2 = res;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(File_obj,close,return )

::snow::api::File File_obj::from_file( ::String _id,::String __o__mode){
::String _mode = __o__mode.Default(HX_HCSTRING("rb","\xb0","\x63","\x00","\x00"));
	HX_STACK_FRAME("snow.api.File","from_file",0xc6cd78be,"snow.api.File.from_file","snow/api/File.hx",57,0x2d2da721)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_mode,"_mode")
{
		HX_STACK_LINE(59)
		::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		::String tmp1 = _mode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Dynamic tmp2 = ::snow::api::File_obj::snow_iosrc_from_file(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Dynamic handle = tmp2;		HX_STACK_VAR(handle,"handle");
		HX_STACK_LINE(61)
		bool tmp3 = (handle != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		if ((tmp3)){
			HX_STACK_LINE(62)
			::snow::api::File tmp4 = ::snow::api::File_obj::__new(handle);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			return tmp4;
		}
		HX_STACK_LINE(65)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,from_file,return )

Dynamic File_obj::snow_iosrc_from_file;

Dynamic File_obj::snow_iosrc_file_read;

Dynamic File_obj::snow_iosrc_file_write;

Dynamic File_obj::snow_iosrc_file_seek;

Dynamic File_obj::snow_iosrc_file_tell;

Dynamic File_obj::snow_iosrc_file_close;


File_obj::File_obj()
{
}

void File_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(File);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void File_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic File_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		if (HX_FIELD_EQ(inName,"tell") ) { return tell_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
	}
	return super::__Field(inName,inCallProp);
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"from_file") ) { outValue = from_file_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_iosrc_from_file") ) { outValue = snow_iosrc_from_file; return true;  }
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_read") ) { outValue = snow_iosrc_file_read; return true;  }
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_seek") ) { outValue = snow_iosrc_file_seek; return true;  }
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_tell") ) { outValue = snow_iosrc_file_tell; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_write") ) { outValue = snow_iosrc_file_write; return true;  }
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_close") ) { outValue = snow_iosrc_file_close; return true;  }
	}
	return false;
}

Dynamic File_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool File_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"snow_iosrc_from_file") ) { snow_iosrc_from_file=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_read") ) { snow_iosrc_file_read=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_seek") ) { snow_iosrc_file_seek=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_tell") ) { snow_iosrc_file_tell=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_write") ) { snow_iosrc_file_write=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_iosrc_file_close") ) { snow_iosrc_file_close=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(File_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::snow_iosrc_from_file,HX_HCSTRING("snow_iosrc_from_file","\xb4","\x53","\x40","\x59")},
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::snow_iosrc_file_read,HX_HCSTRING("snow_iosrc_file_read","\x3c","\x86","\xca","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::snow_iosrc_file_write,HX_HCSTRING("snow_iosrc_file_write","\x39","\xbb","\x09","\x2c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::snow_iosrc_file_seek,HX_HCSTRING("snow_iosrc_file_seek","\x5e","\xc0","\x73","\xaf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::snow_iosrc_file_tell,HX_HCSTRING("snow_iosrc_file_tell","\x17","\xfd","\x1c","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::snow_iosrc_file_close,HX_HCSTRING("snow_iosrc_file_close","\x12","\x66","\x13","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("tell","\x31","\xc2","\xf9","\x4c"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(File_obj::snow_iosrc_from_file,"snow_iosrc_from_file");
	HX_MARK_MEMBER_NAME(File_obj::snow_iosrc_file_read,"snow_iosrc_file_read");
	HX_MARK_MEMBER_NAME(File_obj::snow_iosrc_file_write,"snow_iosrc_file_write");
	HX_MARK_MEMBER_NAME(File_obj::snow_iosrc_file_seek,"snow_iosrc_file_seek");
	HX_MARK_MEMBER_NAME(File_obj::snow_iosrc_file_tell,"snow_iosrc_file_tell");
	HX_MARK_MEMBER_NAME(File_obj::snow_iosrc_file_close,"snow_iosrc_file_close");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(File_obj::snow_iosrc_from_file,"snow_iosrc_from_file");
	HX_VISIT_MEMBER_NAME(File_obj::snow_iosrc_file_read,"snow_iosrc_file_read");
	HX_VISIT_MEMBER_NAME(File_obj::snow_iosrc_file_write,"snow_iosrc_file_write");
	HX_VISIT_MEMBER_NAME(File_obj::snow_iosrc_file_seek,"snow_iosrc_file_seek");
	HX_VISIT_MEMBER_NAME(File_obj::snow_iosrc_file_tell,"snow_iosrc_file_tell");
	HX_VISIT_MEMBER_NAME(File_obj::snow_iosrc_file_close,"snow_iosrc_file_close");
};

#endif

hx::Class File_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("from_file","\xb1","\x64","\x28","\x18"),
	HX_HCSTRING("snow_iosrc_from_file","\xb4","\x53","\x40","\x59"),
	HX_HCSTRING("snow_iosrc_file_read","\x3c","\x86","\xca","\xae"),
	HX_HCSTRING("snow_iosrc_file_write","\x39","\xbb","\x09","\x2c"),
	HX_HCSTRING("snow_iosrc_file_seek","\x5e","\xc0","\x73","\xaf"),
	HX_HCSTRING("snow_iosrc_file_tell","\x17","\xfd","\x1c","\xb0"),
	HX_HCSTRING("snow_iosrc_file_close","\x12","\x66","\x13","\xa4"),
	::String(null()) };

void File_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.File","\x3b","\x52","\x26","\x44");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &File_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< File_obj >;
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

void File_obj::__boot()
{
	snow_iosrc_from_file= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_iosrc_from_file","\xb4","\x53","\x40","\x59"),(int)2);
	snow_iosrc_file_read= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_iosrc_file_read","\x3c","\x86","\xca","\xae"),(int)4);
	snow_iosrc_file_write= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_iosrc_file_write","\x39","\xbb","\x09","\x2c"),(int)4);
	snow_iosrc_file_seek= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_iosrc_file_seek","\x5e","\xc0","\x73","\xaf"),(int)3);
	snow_iosrc_file_tell= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_iosrc_file_tell","\x17","\xfd","\x1c","\xb0"),(int)1);
	snow_iosrc_file_close= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_iosrc_file_close","\x12","\x66","\x13","\xa4"),(int)1);
}

} // end namespace snow
} // end namespace api
