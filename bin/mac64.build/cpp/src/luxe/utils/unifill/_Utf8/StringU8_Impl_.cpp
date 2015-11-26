#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_StringU8_Impl_
#include <luxe/utils/unifill/_Utf8/StringU8_Impl_.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{
namespace _Utf8{

Void StringU8_Impl__obj::__construct()
{
	return null();
}

//StringU8_Impl__obj::~StringU8_Impl__obj() { }

Dynamic StringU8_Impl__obj::__CreateEmpty() { return  new StringU8_Impl__obj; }
hx::ObjectPtr< StringU8_Impl__obj > StringU8_Impl__obj::__new()
{  hx::ObjectPtr< StringU8_Impl__obj > _result_ = new StringU8_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StringU8_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringU8_Impl__obj > _result_ = new StringU8_Impl__obj();
	_result_->__construct();
	return _result_;}

::String StringU8_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","fromString",0x27489647,"luxe.utils.unifill._Utf8.StringU8_Impl_.fromString","luxe/utils/unifill/Utf8.hx",251,0xbecfbbba)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(252)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,fromString,return )

::String StringU8_Impl__obj::ofBytes( ::haxe::io::Bytes b){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","ofBytes",0x70201fe8,"luxe.utils.unifill._Utf8.StringU8_Impl_.ofBytes","luxe/utils/unifill/Utf8.hx",255,0xbecfbbba)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(256)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		::String tmp1 = b->toString();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		::String s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(256)
		tmp = s;
	}
	HX_STACK_LINE(256)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,ofBytes,return )

::String StringU8_Impl__obj::fromBytes( ::haxe::io::Bytes b){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","fromBytes",0xda647bb5,"luxe.utils.unifill._Utf8.StringU8_Impl_.fromBytes","luxe/utils/unifill/Utf8.hx",259,0xbecfbbba)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(260)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(260)
		::String tmp1 = b->toString();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		::String s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(260)
		tmp = s;
	}
	HX_STACK_LINE(260)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,fromBytes,return )

int StringU8_Impl__obj::codeUnitAt( ::String this1,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","codeUnitAt",0xfe22da10,"luxe.utils.unifill._Utf8.StringU8_Impl_.codeUnitAt","luxe/utils/unifill/Utf8.hx",265,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(266)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = this1.cca(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringU8_Impl__obj,codeUnitAt,return )

::String StringU8_Impl__obj::substr( ::String this1,int index,Dynamic len){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","substr",0xaf0fb19d,"luxe.utils.unifill._Utf8.StringU8_Impl_.substr","luxe/utils/unifill/Utf8.hx",269,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(270)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(270)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		Dynamic tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		::String tmp3 = this1.substr(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		::String s = tmp3;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(270)
		tmp = s;
	}
	HX_STACK_LINE(270)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringU8_Impl__obj,substr,return )

::String StringU8_Impl__obj::toString( ::String this1){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","toString",0x29fa0618,"luxe.utils.unifill._Utf8.StringU8_Impl_.toString","luxe/utils/unifill/Utf8.hx",273,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(274)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,toString,return )

::haxe::io::Bytes StringU8_Impl__obj::toBytes( ::String this1){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","toBytes",0xd941b104,"luxe.utils.unifill._Utf8.StringU8_Impl_.toBytes","luxe/utils/unifill/Utf8.hx",277,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(278)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(278)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,toBytes,return )

::String StringU8_Impl__obj::_new( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","_new",0xa23024cd,"luxe.utils.unifill._Utf8.StringU8_Impl_._new","luxe/utils/unifill/Utf8.hx",282,0xbecfbbba)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(282)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,_new,return )

int StringU8_Impl__obj::get_length( ::String this1){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.StringU8_Impl_","get_length",0x62636d1b,"luxe.utils.unifill._Utf8.StringU8_Impl_.get_length","luxe/utils/unifill/Utf8.hx",285,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(286)
	int tmp = this1.length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringU8_Impl__obj,get_length,return )


StringU8_Impl__obj::StringU8_Impl__obj()
{
}

bool StringU8_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"substr") ) { outValue = substr_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ofBytes") ) { outValue = ofBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { outValue = codeUnitAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringU8_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringU8_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class StringU8_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("ofBytes","\xd4","\xc3","\xfa","\x20"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("codeUnitAt","\xa4","\x71","\x4e","\x2b"),
	HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

void StringU8_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill._Utf8.StringU8_Impl_","\x82","\x88","\xb5","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringU8_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringU8_Impl__obj >;
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

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
} // end namespace _Utf8
