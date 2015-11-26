#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8_Impl_
#include <luxe/utils/unifill/_Utf8/Utf8_Impl_.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{

Void CodePointIter_obj::__construct(::String s)
{
HX_STACK_FRAME("luxe.utils.unifill.CodePointIter","new",0x0b9c58fd,"luxe.utils.unifill.CodePointIter.new","luxe/utils/unifill/CodePointIter.hx",3,0x99e093d6)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(19)
	this->i = (int)0;
	HX_STACK_LINE(10)
	this->string = s;
	HX_STACK_LINE(11)
	this->index = (int)0;
	HX_STACK_LINE(12)
	this->endIndex = s.length;
}
;
	return null();
}

//CodePointIter_obj::~CodePointIter_obj() { }

Dynamic CodePointIter_obj::__CreateEmpty() { return  new CodePointIter_obj; }
hx::ObjectPtr< CodePointIter_obj > CodePointIter_obj::__new(::String s)
{  hx::ObjectPtr< CodePointIter_obj > _result_ = new CodePointIter_obj();
	_result_->__construct(s);
	return _result_;}

Dynamic CodePointIter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodePointIter_obj > _result_ = new CodePointIter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool CodePointIter_obj::hasNext( ){
	HX_STACK_FRAME("luxe.utils.unifill.CodePointIter","hasNext",0x4c5c408a,"luxe.utils.unifill.CodePointIter.hasNext","luxe/utils/unifill/CodePointIter.hx",15,0x99e093d6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	int tmp1 = this->endIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(CodePointIter_obj,hasNext,return )

int CodePointIter_obj::next( ){
	HX_STACK_FRAME("luxe.utils.unifill.CodePointIter","next",0x1d3185b6,"luxe.utils.unifill.CodePointIter.next","luxe/utils/unifill/CodePointIter.hx",20,0x99e093d6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	this->i = tmp;
	HX_STACK_LINE(22)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		::String tmp2 = this->string;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		int tmp3 = this->index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		int tmp4 = tmp2.cca(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		int c = tmp4;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(22)
		bool tmp5 = (c < (int)192);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		if ((tmp5)){
			HX_STACK_LINE(22)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(22)
			bool tmp6 = (c < (int)224);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(22)
			if ((tmp6)){
				HX_STACK_LINE(22)
				tmp1 = (int)2;
			}
			else{
				HX_STACK_LINE(22)
				bool tmp7 = (c < (int)240);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(22)
				if ((tmp7)){
					HX_STACK_LINE(22)
					tmp1 = (int)3;
				}
				else{
					HX_STACK_LINE(22)
					bool tmp8 = (c < (int)248);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(22)
					if ((tmp8)){
						HX_STACK_LINE(22)
						tmp1 = (int)4;
					}
					else{
						HX_STACK_LINE(22)
						tmp1 = (int)1;
					}
				}
			}
		}
	}
	HX_STACK_LINE(22)
	hx::AddEq(this->index,tmp1);
	HX_STACK_LINE(23)
	::String tmp2 = this->string;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	int tmp4 = this->i;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	int tmp5 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointAt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(CodePointIter_obj,next,return )


CodePointIter_obj::CodePointIter_obj()
{
}

void CodePointIter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CodePointIter);
	HX_MARK_MEMBER_NAME(string,"string");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(endIndex,"endIndex");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void CodePointIter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(string,"string");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(endIndex,"endIndex");
	HX_VISIT_MEMBER_NAME(i,"i");
}

Dynamic CodePointIter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { return string; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { return endIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CodePointIter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { string=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endIndex") ) { endIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CodePointIter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CodePointIter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("string","\xd1","\x28","\x30","\x11"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(CodePointIter_obj,string),HX_HCSTRING("string","\xd1","\x28","\x30","\x11")},
	{hx::fsInt,(int)offsetof(CodePointIter_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsInt,(int)offsetof(CodePointIter_obj,endIndex),HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc")},
	{hx::fsInt,(int)offsetof(CodePointIter_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("string","\xd1","\x28","\x30","\x11"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodePointIter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodePointIter_obj::__mClass,"__mClass");
};

#endif

hx::Class CodePointIter_obj::__mClass;

void CodePointIter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill.CodePointIter","\x8b","\x16","\xeb","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CodePointIter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CodePointIter_obj >;
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
