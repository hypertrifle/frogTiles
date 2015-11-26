#include <hxcpp.h>

#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
namespace phoenix{
namespace geometry{

Void TextureCoordSet_obj::__construct()
{
HX_STACK_FRAME("phoenix.geometry.TextureCoordSet","new",0x918b073d,"phoenix.geometry.TextureCoordSet.new","phoenix/geometry/TextureCoord.hx",17,0x1af0f827)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	::phoenix::geometry::TextureCoord tmp = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	this->uv0 = tmp;
	HX_STACK_LINE(20)
	::phoenix::geometry::TextureCoord tmp1 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	this->uv1 = tmp1;
	HX_STACK_LINE(21)
	::phoenix::geometry::TextureCoord tmp2 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	this->uv2 = tmp2;
	HX_STACK_LINE(22)
	::phoenix::geometry::TextureCoord tmp3 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	this->uv3 = tmp3;
	HX_STACK_LINE(23)
	::phoenix::geometry::TextureCoord tmp4 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	this->uv4 = tmp4;
	HX_STACK_LINE(24)
	::phoenix::geometry::TextureCoord tmp5 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	this->uv5 = tmp5;
	HX_STACK_LINE(25)
	::phoenix::geometry::TextureCoord tmp6 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	this->uv6 = tmp6;
	HX_STACK_LINE(26)
	::phoenix::geometry::TextureCoord tmp7 = ::phoenix::geometry::TextureCoord_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	this->uv7 = tmp7;
}
;
	return null();
}

//TextureCoordSet_obj::~TextureCoordSet_obj() { }

Dynamic TextureCoordSet_obj::__CreateEmpty() { return  new TextureCoordSet_obj; }
hx::ObjectPtr< TextureCoordSet_obj > TextureCoordSet_obj::__new()
{  hx::ObjectPtr< TextureCoordSet_obj > _result_ = new TextureCoordSet_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextureCoordSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureCoordSet_obj > _result_ = new TextureCoordSet_obj();
	_result_->__construct();
	return _result_;}

::phoenix::geometry::TextureCoordSet TextureCoordSet_obj::clone( ){
	HX_STACK_FRAME("phoenix.geometry.TextureCoordSet","clone",0xfefb7b7a,"phoenix.geometry.TextureCoordSet.clone","phoenix/geometry/TextureCoord.hx",30,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::phoenix::geometry::TextureCoordSet tmp = ::phoenix::geometry::TextureCoordSet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::phoenix::geometry::TextureCoordSet _set = tmp;		HX_STACK_VAR(_set,"_set");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::phoenix::geometry::TextureCoord _this = _set->uv0;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(34)
		::phoenix::geometry::TextureCoord tmp1 = this->uv0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		_this->u = tmp1->u;
		HX_STACK_LINE(34)
		::phoenix::geometry::TextureCoord tmp2 = this->uv0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		_this->v = tmp2->v;
		HX_STACK_LINE(34)
		::phoenix::geometry::TextureCoord tmp3 = this->uv0;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		_this->w = tmp3->w;
		HX_STACK_LINE(34)
		::phoenix::geometry::TextureCoord tmp4 = this->uv0;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		_this->t = tmp4->t;
		HX_STACK_LINE(34)
		_this;
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::phoenix::geometry::TextureCoord _this = _set->uv1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(35)
		::phoenix::geometry::TextureCoord tmp1 = this->uv1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		_this->u = tmp1->u;
		HX_STACK_LINE(35)
		::phoenix::geometry::TextureCoord tmp2 = this->uv1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		_this->v = tmp2->v;
		HX_STACK_LINE(35)
		::phoenix::geometry::TextureCoord tmp3 = this->uv1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		_this->w = tmp3->w;
		HX_STACK_LINE(35)
		::phoenix::geometry::TextureCoord tmp4 = this->uv1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		_this->t = tmp4->t;
		HX_STACK_LINE(35)
		_this;
	}
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::phoenix::geometry::TextureCoord _this = _set->uv2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(36)
		::phoenix::geometry::TextureCoord tmp1 = this->uv2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		_this->u = tmp1->u;
		HX_STACK_LINE(36)
		::phoenix::geometry::TextureCoord tmp2 = this->uv2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		_this->v = tmp2->v;
		HX_STACK_LINE(36)
		::phoenix::geometry::TextureCoord tmp3 = this->uv2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		_this->w = tmp3->w;
		HX_STACK_LINE(36)
		::phoenix::geometry::TextureCoord tmp4 = this->uv2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		_this->t = tmp4->t;
		HX_STACK_LINE(36)
		_this;
	}
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::phoenix::geometry::TextureCoord _this = _set->uv3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(37)
		::phoenix::geometry::TextureCoord tmp1 = this->uv3;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		_this->u = tmp1->u;
		HX_STACK_LINE(37)
		::phoenix::geometry::TextureCoord tmp2 = this->uv3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		_this->v = tmp2->v;
		HX_STACK_LINE(37)
		::phoenix::geometry::TextureCoord tmp3 = this->uv3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		_this->w = tmp3->w;
		HX_STACK_LINE(37)
		::phoenix::geometry::TextureCoord tmp4 = this->uv3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		_this->t = tmp4->t;
		HX_STACK_LINE(37)
		_this;
	}
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::phoenix::geometry::TextureCoord _this = _set->uv4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(38)
		::phoenix::geometry::TextureCoord tmp1 = this->uv4;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		_this->u = tmp1->u;
		HX_STACK_LINE(38)
		::phoenix::geometry::TextureCoord tmp2 = this->uv4;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		_this->v = tmp2->v;
		HX_STACK_LINE(38)
		::phoenix::geometry::TextureCoord tmp3 = this->uv4;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		_this->w = tmp3->w;
		HX_STACK_LINE(38)
		::phoenix::geometry::TextureCoord tmp4 = this->uv4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		_this->t = tmp4->t;
		HX_STACK_LINE(38)
		_this;
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::phoenix::geometry::TextureCoord _this = _set->uv5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(39)
		::phoenix::geometry::TextureCoord tmp1 = this->uv5;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		_this->u = tmp1->u;
		HX_STACK_LINE(39)
		::phoenix::geometry::TextureCoord tmp2 = this->uv5;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		_this->v = tmp2->v;
		HX_STACK_LINE(39)
		::phoenix::geometry::TextureCoord tmp3 = this->uv5;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		_this->w = tmp3->w;
		HX_STACK_LINE(39)
		::phoenix::geometry::TextureCoord tmp4 = this->uv5;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		_this->t = tmp4->t;
		HX_STACK_LINE(39)
		_this;
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::phoenix::geometry::TextureCoord _this = _set->uv6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(40)
		::phoenix::geometry::TextureCoord tmp1 = this->uv6;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		_this->u = tmp1->u;
		HX_STACK_LINE(40)
		::phoenix::geometry::TextureCoord tmp2 = this->uv6;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		_this->v = tmp2->v;
		HX_STACK_LINE(40)
		::phoenix::geometry::TextureCoord tmp3 = this->uv6;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		_this->w = tmp3->w;
		HX_STACK_LINE(40)
		::phoenix::geometry::TextureCoord tmp4 = this->uv6;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		_this->t = tmp4->t;
		HX_STACK_LINE(40)
		_this;
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::phoenix::geometry::TextureCoord _this = _set->uv7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		::phoenix::geometry::TextureCoord tmp1 = this->uv7;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		_this->u = tmp1->u;
		HX_STACK_LINE(41)
		::phoenix::geometry::TextureCoord tmp2 = this->uv7;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		_this->v = tmp2->v;
		HX_STACK_LINE(41)
		::phoenix::geometry::TextureCoord tmp3 = this->uv7;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		_this->w = tmp3->w;
		HX_STACK_LINE(41)
		::phoenix::geometry::TextureCoord tmp4 = this->uv7;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		_this->t = tmp4->t;
		HX_STACK_LINE(41)
		_this;
	}
	HX_STACK_LINE(43)
	::phoenix::geometry::TextureCoordSet tmp1 = _set;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoordSet_obj,clone,return )


TextureCoordSet_obj::TextureCoordSet_obj()
{
}

void TextureCoordSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureCoordSet);
	HX_MARK_MEMBER_NAME(uv0,"uv0");
	HX_MARK_MEMBER_NAME(uv1,"uv1");
	HX_MARK_MEMBER_NAME(uv2,"uv2");
	HX_MARK_MEMBER_NAME(uv3,"uv3");
	HX_MARK_MEMBER_NAME(uv4,"uv4");
	HX_MARK_MEMBER_NAME(uv5,"uv5");
	HX_MARK_MEMBER_NAME(uv6,"uv6");
	HX_MARK_MEMBER_NAME(uv7,"uv7");
	HX_MARK_END_CLASS();
}

void TextureCoordSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uv0,"uv0");
	HX_VISIT_MEMBER_NAME(uv1,"uv1");
	HX_VISIT_MEMBER_NAME(uv2,"uv2");
	HX_VISIT_MEMBER_NAME(uv3,"uv3");
	HX_VISIT_MEMBER_NAME(uv4,"uv4");
	HX_VISIT_MEMBER_NAME(uv5,"uv5");
	HX_VISIT_MEMBER_NAME(uv6,"uv6");
	HX_VISIT_MEMBER_NAME(uv7,"uv7");
}

Dynamic TextureCoordSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { return uv0; }
		if (HX_FIELD_EQ(inName,"uv1") ) { return uv1; }
		if (HX_FIELD_EQ(inName,"uv2") ) { return uv2; }
		if (HX_FIELD_EQ(inName,"uv3") ) { return uv3; }
		if (HX_FIELD_EQ(inName,"uv4") ) { return uv4; }
		if (HX_FIELD_EQ(inName,"uv5") ) { return uv5; }
		if (HX_FIELD_EQ(inName,"uv6") ) { return uv6; }
		if (HX_FIELD_EQ(inName,"uv7") ) { return uv7; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureCoordSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { uv0=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv1") ) { uv1=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv2") ) { uv2=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv3") ) { uv3=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv4") ) { uv4=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv5") ) { uv5=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv6") ) { uv6=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv7") ) { uv7=inValue.Cast< ::phoenix::geometry::TextureCoord >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureCoordSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextureCoordSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv1","\xb0","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv2","\xb1","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv3","\xb2","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv4","\xb3","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv5","\xb4","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv6","\xb5","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv7","\xb6","\x2e","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv0),HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv1),HX_HCSTRING("uv1","\xb0","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv2),HX_HCSTRING("uv2","\xb1","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv3),HX_HCSTRING("uv3","\xb2","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv4),HX_HCSTRING("uv4","\xb3","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv5),HX_HCSTRING("uv5","\xb4","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv6),HX_HCSTRING("uv6","\xb5","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv7),HX_HCSTRING("uv7","\xb6","\x2e","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"),
	HX_HCSTRING("uv1","\xb0","\x2e","\x59","\x00"),
	HX_HCSTRING("uv2","\xb1","\x2e","\x59","\x00"),
	HX_HCSTRING("uv3","\xb2","\x2e","\x59","\x00"),
	HX_HCSTRING("uv4","\xb3","\x2e","\x59","\x00"),
	HX_HCSTRING("uv5","\xb4","\x2e","\x59","\x00"),
	HX_HCSTRING("uv6","\xb5","\x2e","\x59","\x00"),
	HX_HCSTRING("uv7","\xb6","\x2e","\x59","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureCoordSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureCoordSet_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureCoordSet_obj::__mClass;

void TextureCoordSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.TextureCoordSet","\xcb","\xa4","\xd5","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextureCoordSet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureCoordSet_obj >;
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

} // end namespace phoenix
} // end namespace geometry
