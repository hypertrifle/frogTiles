#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_Unicode
#include <luxe/utils/unifill/Unicode.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

Void Unicode_obj::__construct()
{
	return null();
}

//Unicode_obj::~Unicode_obj() { }

Dynamic Unicode_obj::__CreateEmpty() { return  new Unicode_obj; }
hx::ObjectPtr< Unicode_obj > Unicode_obj::__new()
{  hx::ObjectPtr< Unicode_obj > _result_ = new Unicode_obj();
	_result_->__construct();
	return _result_;}

Dynamic Unicode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Unicode_obj > _result_ = new Unicode_obj();
	_result_->__construct();
	return _result_;}

int Unicode_obj::minCodePoint;

int Unicode_obj::maxCodePoint;

int Unicode_obj::minHighSurrogate;

int Unicode_obj::maxHighSurrogate;

int Unicode_obj::minLowSurrogate;

int Unicode_obj::maxLowSurrogate;

int Unicode_obj::decodeSurrogate( int hi,int lo){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","decodeSurrogate",0x7c7a1569,"luxe.utils.unifill.Unicode.decodeSurrogate","luxe/utils/unifill/Unicode.hx",13,0x9b9efe54)
	HX_STACK_ARG(hi,"hi")
	HX_STACK_ARG(lo,"lo")
	HX_STACK_LINE(13)
	int tmp = (hi - (int)55232);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	int tmp1 = (int(tmp) << int((int)10));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	int tmp2 = (int(lo) & int((int)1023));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	int tmp3 = (int(tmp1) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unicode_obj,decodeSurrogate,return )

int Unicode_obj::encodeHighSurrogate( int c){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","encodeHighSurrogate",0xb587d83f,"luxe.utils.unifill.Unicode.encodeHighSurrogate","luxe/utils/unifill/Unicode.hx",16,0x9b9efe54)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(16)
	int tmp = (int(c) >> int((int)10));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	int tmp1 = (tmp + (int)55232);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,encodeHighSurrogate,return )

int Unicode_obj::encodeLowSurrogate( int c){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","encodeLowSurrogate",0x51ac509b,"luxe.utils.unifill.Unicode.encodeLowSurrogate","luxe/utils/unifill/Unicode.hx",19,0x9b9efe54)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(19)
	int tmp = (int(c) & int((int)1023));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	int tmp1 = (int(tmp) | int((int)56320));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,encodeLowSurrogate,return )

bool Unicode_obj::isScalar( int code){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","isScalar",0xc0c7f237,"luxe.utils.unifill.Unicode.isScalar","luxe/utils/unifill/Unicode.hx",21,0x9b9efe54)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(22)
	bool tmp = ((int)0 <= code);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	if ((tmp1)){
		HX_STACK_LINE(22)
		tmp2 = (code <= (int)1114111);
	}
	else{
		HX_STACK_LINE(22)
		tmp2 = false;
	}
	HX_STACK_LINE(22)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	if ((tmp3)){
		HX_STACK_LINE(22)
		bool tmp5 = ((int)55296 <= code);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(22)
		bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(22)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(22)
		if ((tmp10)){
			HX_STACK_LINE(22)
			bool tmp11 = (code <= (int)56319);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(22)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(22)
			tmp8 = tmp12;
		}
		else{
			HX_STACK_LINE(22)
			tmp8 = false;
		}
		HX_STACK_LINE(22)
		bool tmp11 = tmp8;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(22)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(22)
		tmp4 = !(tmp12);
	}
	else{
		HX_STACK_LINE(22)
		tmp4 = false;
	}
	HX_STACK_LINE(22)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	if ((tmp4)){
		HX_STACK_LINE(22)
		bool tmp6 = ((int)56320 <= code);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(22)
		bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(22)
		if ((tmp9)){
			HX_STACK_LINE(22)
			bool tmp10 = (code <= (int)57343);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(22)
			tmp8 = tmp10;
		}
		else{
			HX_STACK_LINE(22)
			tmp8 = false;
		}
		HX_STACK_LINE(22)
		bool tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(22)
		tmp5 = !(tmp10);
	}
	else{
		HX_STACK_LINE(22)
		tmp5 = false;
	}
	HX_STACK_LINE(22)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isScalar,return )

bool Unicode_obj::isHighSurrogate( int code){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","isHighSurrogate",0xe88f9e6b,"luxe.utils.unifill.Unicode.isHighSurrogate","luxe/utils/unifill/Unicode.hx",25,0x9b9efe54)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(26)
	bool tmp = ((int)55296 <= code);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp)){
		HX_STACK_LINE(26)
		tmp1 = (code <= (int)56319);
	}
	else{
		HX_STACK_LINE(26)
		tmp1 = false;
	}
	HX_STACK_LINE(26)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isHighSurrogate,return )

bool Unicode_obj::isLowSurrogate( int code){
	HX_STACK_FRAME("luxe.utils.unifill.Unicode","isLowSurrogate",0xaee373ef,"luxe.utils.unifill.Unicode.isLowSurrogate","luxe/utils/unifill/Unicode.hx",29,0x9b9efe54)
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(30)
	bool tmp = ((int)56320 <= code);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp)){
		HX_STACK_LINE(30)
		tmp1 = (code <= (int)57343);
	}
	else{
		HX_STACK_LINE(30)
		tmp1 = false;
	}
	HX_STACK_LINE(30)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isLowSurrogate,return )


Unicode_obj::Unicode_obj()
{
}

bool Unicode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isScalar") ) { outValue = isScalar_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isLowSurrogate") ) { outValue = isLowSurrogate_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"decodeSurrogate") ) { outValue = decodeSurrogate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isHighSurrogate") ) { outValue = isHighSurrogate_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"encodeLowSurrogate") ) { outValue = encodeLowSurrogate_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"encodeHighSurrogate") ) { outValue = encodeHighSurrogate_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Unicode_obj::minCodePoint,HX_HCSTRING("minCodePoint","\xf1","\x1b","\xf4","\x75")},
	{hx::fsInt,(void *) &Unicode_obj::maxCodePoint,HX_HCSTRING("maxCodePoint","\x9f","\x70","\xe9","\xf1")},
	{hx::fsInt,(void *) &Unicode_obj::minHighSurrogate,HX_HCSTRING("minHighSurrogate","\x24","\x8d","\xff","\xed")},
	{hx::fsInt,(void *) &Unicode_obj::maxHighSurrogate,HX_HCSTRING("maxHighSurrogate","\xd2","\xd0","\xe7","\xe0")},
	{hx::fsInt,(void *) &Unicode_obj::minLowSurrogate,HX_HCSTRING("minLowSurrogate","\x56","\x7f","\x3d","\xd8")},
	{hx::fsInt,(void *) &Unicode_obj::maxLowSurrogate,HX_HCSTRING("maxLowSurrogate","\x68","\xcb","\x57","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unicode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Unicode_obj::minCodePoint,"minCodePoint");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxCodePoint,"maxCodePoint");
	HX_MARK_MEMBER_NAME(Unicode_obj::minHighSurrogate,"minHighSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxHighSurrogate,"maxHighSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::minLowSurrogate,"minLowSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxLowSurrogate,"maxLowSurrogate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unicode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minCodePoint,"minCodePoint");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxCodePoint,"maxCodePoint");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minHighSurrogate,"minHighSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxHighSurrogate,"maxHighSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minLowSurrogate,"minLowSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxLowSurrogate,"maxLowSurrogate");
};

#endif

hx::Class Unicode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("minCodePoint","\xf1","\x1b","\xf4","\x75"),
	HX_HCSTRING("maxCodePoint","\x9f","\x70","\xe9","\xf1"),
	HX_HCSTRING("minHighSurrogate","\x24","\x8d","\xff","\xed"),
	HX_HCSTRING("maxHighSurrogate","\xd2","\xd0","\xe7","\xe0"),
	HX_HCSTRING("minLowSurrogate","\x56","\x7f","\x3d","\xd8"),
	HX_HCSTRING("maxLowSurrogate","\x68","\xcb","\x57","\x7c"),
	HX_HCSTRING("decodeSurrogate","\xca","\x22","\xcb","\x7f"),
	HX_HCSTRING("encodeHighSurrogate","\x20","\xaa","\xc1","\x44"),
	HX_HCSTRING("encodeLowSurrogate","\xda","\x15","\xdf","\x4e"),
	HX_HCSTRING("isScalar","\xb6","\x82","\x8f","\x94"),
	HX_HCSTRING("isHighSurrogate","\xcc","\xab","\xe0","\xeb"),
	HX_HCSTRING("isLowSurrogate","\xae","\xed","\xdc","\xc5"),
	::String(null()) };

void Unicode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill.Unicode","\x0d","\xe5","\xcb","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Unicode_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Unicode_obj >;
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

void Unicode_obj::__boot()
{
	minCodePoint= (int)0;
	maxCodePoint= (int)1114111;
	minHighSurrogate= (int)55296;
	maxHighSurrogate= (int)56319;
	minLowSurrogate= (int)56320;
	maxLowSurrogate= (int)57343;
}

} // end namespace luxe
} // end namespace utils
} // end namespace unifill
