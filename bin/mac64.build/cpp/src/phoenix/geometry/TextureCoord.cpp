#include <hxcpp.h>

#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
namespace phoenix{
namespace geometry{

Void TextureCoord_obj::__construct(hx::Null< Float >  __o__u,hx::Null< Float >  __o__v,hx::Null< Float >  __o__w,hx::Null< Float >  __o__t)
{
HX_STACK_FRAME("phoenix.geometry.TextureCoord","new",0x17ac6f89,"phoenix.geometry.TextureCoord.new","phoenix/geometry/TextureCoord.hx",51,0x1af0f827)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__u,"_u")
HX_STACK_ARG(__o__v,"_v")
HX_STACK_ARG(__o__w,"_w")
HX_STACK_ARG(__o__t,"_t")
Float _u = __o__u.Default(((Float)0.0));
Float _v = __o__v.Default(((Float)0.0));
Float _w = __o__w.Default(((Float)0.0));
Float _t = __o__t.Default(((Float)0.0));
{
	HX_STACK_LINE(57)
	this->t = ((Float)0.0);
	HX_STACK_LINE(56)
	this->w = ((Float)0.0);
	HX_STACK_LINE(55)
	this->v = ((Float)0.0);
	HX_STACK_LINE(54)
	this->u = ((Float)0.0);
	HX_STACK_LINE(62)
	this->u = _u;
	HX_STACK_LINE(63)
	this->v = _v;
	HX_STACK_LINE(64)
	this->w = _w;
	HX_STACK_LINE(65)
	this->t = _t;
}
;
	return null();
}

//TextureCoord_obj::~TextureCoord_obj() { }

Dynamic TextureCoord_obj::__CreateEmpty() { return  new TextureCoord_obj; }
hx::ObjectPtr< TextureCoord_obj > TextureCoord_obj::__new(hx::Null< Float >  __o__u,hx::Null< Float >  __o__v,hx::Null< Float >  __o__w,hx::Null< Float >  __o__t)
{  hx::ObjectPtr< TextureCoord_obj > _result_ = new TextureCoord_obj();
	_result_->__construct(__o__u,__o__v,__o__w,__o__t);
	return _result_;}

Dynamic TextureCoord_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureCoord_obj > _result_ = new TextureCoord_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::phoenix::geometry::TextureCoord TextureCoord_obj::clone( ){
	HX_STACK_FRAME("phoenix.geometry.TextureCoord","clone",0x5e808ec6,"phoenix.geometry.TextureCoord.clone","phoenix/geometry/TextureCoord.hx",69,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	Float tmp = this->u;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	Float tmp1 = this->v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	Float tmp2 = this->w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	Float tmp3 = this->t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	::phoenix::geometry::TextureCoord tmp4 = ::phoenix::geometry::TextureCoord_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoord_obj,clone,return )

::phoenix::geometry::TextureCoord TextureCoord_obj::set( Float _u,Float _v,Float _w,Float _t){
	HX_STACK_FRAME("phoenix.geometry.TextureCoord","set",0x17b03acb,"phoenix.geometry.TextureCoord.set","phoenix/geometry/TextureCoord.hx",75,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_u,"_u")
	HX_STACK_ARG(_v,"_v")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(77)
	this->u = _u;
	HX_STACK_LINE(78)
	this->v = _v;
	HX_STACK_LINE(79)
	this->w = _w;
	HX_STACK_LINE(80)
	this->t = _t;
	HX_STACK_LINE(82)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(TextureCoord_obj,set,return )

::phoenix::geometry::TextureCoord TextureCoord_obj::set_uv( Float _u,Float _v){
	HX_STACK_FRAME("phoenix.geometry.TextureCoord","set_uv",0xb326d295,"phoenix.geometry.TextureCoord.set_uv","phoenix/geometry/TextureCoord.hx",86,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_u,"_u")
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(88)
	this->u = _u;
	HX_STACK_LINE(89)
	this->v = _v;
	HX_STACK_LINE(91)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(TextureCoord_obj,set_uv,return )

::String TextureCoord_obj::toString( ){
	HX_STACK_FRAME("phoenix.geometry.TextureCoord","toString",0xa5179ce3,"phoenix.geometry.TextureCoord.toString","phoenix/geometry/TextureCoord.hx",95,0x1af0f827)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	Float tmp = this->v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	::String tmp1 = (HX_HCSTRING("{ u:","\xaa","\xec","\x65","\x51") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	::String tmp2 = (tmp1 + HX_HCSTRING(", v:","\x78","\x12","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	Float tmp3 = this->v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	::String tmp5 = (tmp4 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoord_obj,toString,return )


TextureCoord_obj::TextureCoord_obj()
{
}

Dynamic TextureCoord_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { return u; }
		if (HX_FIELD_EQ(inName,"v") ) { return v; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"t") ) { return t; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_uv") ) { return set_uv_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureCoord_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { u=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureCoord_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextureCoord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("u","\x75","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,u),HX_HCSTRING("u","\x75","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("u","\x75","\x00","\x00","\x00"),
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_uv","\x1e","\x52","\x78","\x6f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureCoord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureCoord_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureCoord_obj::__mClass;

void TextureCoord_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.TextureCoord","\x17","\xf7","\xf1","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextureCoord_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureCoord_obj >;
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
