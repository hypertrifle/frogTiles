#include <hxcpp.h>

#ifndef INCLUDED_luxe_ResourceStats
#include <luxe/ResourceStats.h>
#endif
namespace luxe{

Void ResourceStats_obj::__construct()
{
HX_STACK_FRAME("luxe.ResourceStats","new",0x5187990b,"luxe.ResourceStats.new","luxe/Resources.hx",427,0x2b4e2952)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(437)
	this->unknown = (int)0;
	HX_STACK_LINE(436)
	this->bytes = (int)0;
	HX_STACK_LINE(435)
	this->jsons = (int)0;
	HX_STACK_LINE(434)
	this->texts = (int)0;
	HX_STACK_LINE(433)
	this->shaders = (int)0;
	HX_STACK_LINE(432)
	this->render_textures = (int)0;
	HX_STACK_LINE(431)
	this->textures = (int)0;
	HX_STACK_LINE(430)
	this->fonts = (int)0;
	HX_STACK_LINE(429)
	this->total = (int)0;
}
;
	return null();
}

//ResourceStats_obj::~ResourceStats_obj() { }

Dynamic ResourceStats_obj::__CreateEmpty() { return  new ResourceStats_obj; }
hx::ObjectPtr< ResourceStats_obj > ResourceStats_obj::__new()
{  hx::ObjectPtr< ResourceStats_obj > _result_ = new ResourceStats_obj();
	_result_->__construct();
	return _result_;}

Dynamic ResourceStats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResourceStats_obj > _result_ = new ResourceStats_obj();
	_result_->__construct();
	return _result_;}

::String ResourceStats_obj::toString( ){
	HX_STACK_FRAME("luxe.ResourceStats","toString",0x6d8cbc21,"luxe.ResourceStats.toString","luxe/Resources.hx",443,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_LINE(446)
	::String tmp = HX_HCSTRING("Resource Statistics\n\ttotal : ","\xb6","\xc2","\x8b","\x64");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(447)
	int tmp1 = this->total;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(446)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(446)
	::String tmp3 = (tmp2 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(446)
	::String tmp4 = (tmp3 + HX_HCSTRING("\ttexture : ","\x14","\x32","\x78","\x38"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(448)
	int tmp5 = this->textures;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(446)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(446)
	::String tmp7 = (tmp6 + HX_HCSTRING(" \n","\xea","\x1b","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(446)
	::String tmp8 = (tmp7 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(446)
	::String tmp9 = (tmp8 + HX_HCSTRING("\trender texture : ","\x2c","\x83","\x8e","\x34"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(449)
	int tmp10 = this->render_textures;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(446)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(446)
	::String tmp12 = (tmp11 + HX_HCSTRING(" \n","\xea","\x1b","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(446)
	::String tmp13 = (tmp12 + HX_HCSTRING("\tfont : ","\x6e","\x6b","\xc9","\x98"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(450)
	int tmp14 = this->fonts;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(446)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(446)
	::String tmp16 = (tmp15 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(446)
	::String tmp17 = (tmp16 + HX_HCSTRING("\tshader : ","\x98","\x37","\xcc","\xf1"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(451)
	int tmp18 = this->shaders;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(446)
	::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(446)
	::String tmp20 = (tmp19 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(446)
	::String tmp21 = (tmp20 + HX_HCSTRING("\ttext : ","\x50","\x1b","\x66","\xa1"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(452)
	int tmp22 = this->texts;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(446)
	::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(446)
	::String tmp24 = (tmp23 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(446)
	::String tmp25 = (tmp24 + HX_HCSTRING("\tjson : ","\xb5","\x04","\xfc","\x67"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(453)
	int tmp26 = this->jsons;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(446)
	::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(446)
	::String tmp28 = (tmp27 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(446)
	::String tmp29 = (tmp28 + HX_HCSTRING("\tbytes : ","\x44","\xf8","\x6b","\xcc"));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(454)
	int tmp30 = this->bytes;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(446)
	::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(446)
	::String tmp32 = (tmp31 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(446)
	::String tmp33 = (tmp32 + HX_HCSTRING("\tunknown : ","\xc5","\x6e","\xfe","\x02"));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(455)
	int tmp34 = this->unknown;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(446)
	::String tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(445)
	return tmp35;
}


HX_DEFINE_DYNAMIC_FUNC0(ResourceStats_obj,toString,return )

Void ResourceStats_obj::reset( ){
{
		HX_STACK_FRAME("luxe.ResourceStats","reset",0xc2ffd33a,"luxe.ResourceStats.reset","luxe/Resources.hx",459,0x2b4e2952)
		HX_STACK_THIS(this)
		HX_STACK_LINE(461)
		this->total = (int)0;
		HX_STACK_LINE(462)
		this->fonts = (int)0;
		HX_STACK_LINE(463)
		this->textures = (int)0;
		HX_STACK_LINE(464)
		this->render_textures = (int)0;
		HX_STACK_LINE(465)
		this->shaders = (int)0;
		HX_STACK_LINE(466)
		this->texts = (int)0;
		HX_STACK_LINE(467)
		this->jsons = (int)0;
		HX_STACK_LINE(468)
		this->bytes = (int)0;
		HX_STACK_LINE(469)
		this->unknown = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ResourceStats_obj,reset,(void))


ResourceStats_obj::ResourceStats_obj()
{
}

Dynamic ResourceStats_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"total") ) { return total; }
		if (HX_FIELD_EQ(inName,"fonts") ) { return fonts; }
		if (HX_FIELD_EQ(inName,"texts") ) { return texts; }
		if (HX_FIELD_EQ(inName,"jsons") ) { return jsons; }
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"unknown") ) { return unknown; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return textures; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"render_textures") ) { return render_textures; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ResourceStats_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"total") ) { total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fonts") ) { fonts=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texts") ) { texts=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jsons") ) { jsons=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unknown") ) { unknown=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"render_textures") ) { render_textures=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ResourceStats_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ResourceStats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("total","\xc4","\x53","\x32","\x14"));
	outFields->push(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"));
	outFields->push(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"));
	outFields->push(HX_HCSTRING("render_textures","\x81","\x68","\x3a","\xf4"));
	outFields->push(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"));
	outFields->push(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"));
	outFields->push(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"));
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ResourceStats_obj,total),HX_HCSTRING("total","\xc4","\x53","\x32","\x14")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,fonts),HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,textures),HX_HCSTRING("textures","\x38","\xf7","\xce","\x65")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,render_textures),HX_HCSTRING("render_textures","\x81","\x68","\x3a","\xf4")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,shaders),HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,texts),HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,jsons),HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(int)offsetof(ResourceStats_obj,unknown),HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("total","\xc4","\x53","\x32","\x14"),
	HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"),
	HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"),
	HX_HCSTRING("render_textures","\x81","\x68","\x3a","\xf4"),
	HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"),
	HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"),
	HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResourceStats_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourceStats_obj::__mClass,"__mClass");
};

#endif

hx::Class ResourceStats_obj::__mClass;

void ResourceStats_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.ResourceStats","\x99","\xb7","\xd5","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ResourceStats_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ResourceStats_obj >;
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
