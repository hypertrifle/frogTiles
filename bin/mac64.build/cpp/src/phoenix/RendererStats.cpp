#include <hxcpp.h>

#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
namespace phoenix{

Void RendererStats_obj::__construct()
{
HX_STACK_FRAME("phoenix.RendererStats","new",0x1cd0e80f,"phoenix.RendererStats.new","phoenix/Renderer.hx",383,0x3d4c7b7b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(392)
	this->vert_count = (int)0;
	HX_STACK_LINE(391)
	this->draw_calls = (int)0;
	HX_STACK_LINE(390)
	this->visible_count = (int)0;
	HX_STACK_LINE(389)
	this->static_batched_count = (int)0;
	HX_STACK_LINE(388)
	this->dynamic_batched_count = (int)0;
	HX_STACK_LINE(387)
	this->geometry_count = (int)0;
	HX_STACK_LINE(386)
	this->batchers = (int)0;
}
;
	return null();
}

//RendererStats_obj::~RendererStats_obj() { }

Dynamic RendererStats_obj::__CreateEmpty() { return  new RendererStats_obj; }
hx::ObjectPtr< RendererStats_obj > RendererStats_obj::__new()
{  hx::ObjectPtr< RendererStats_obj > _result_ = new RendererStats_obj();
	_result_->__construct();
	return _result_;}

Dynamic RendererStats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RendererStats_obj > _result_ = new RendererStats_obj();
	_result_->__construct();
	return _result_;}

Void RendererStats_obj::reset( ){
{
		HX_STACK_FRAME("phoenix.RendererStats","reset",0xee7deb3e,"phoenix.RendererStats.reset","phoenix/Renderer.hx",394,0x3d4c7b7b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(395)
		this->geometry_count = (int)0;
		HX_STACK_LINE(396)
		this->dynamic_batched_count = (int)0;
		HX_STACK_LINE(397)
		this->static_batched_count = (int)0;
		HX_STACK_LINE(398)
		this->visible_count = (int)0;
		HX_STACK_LINE(399)
		this->draw_calls = (int)0;
		HX_STACK_LINE(400)
		this->vert_count = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RendererStats_obj,reset,(void))

::String RendererStats_obj::toString( ){
	HX_STACK_FRAME("phoenix.RendererStats","toString",0xe4927e9d,"phoenix.RendererStats.toString","phoenix/Renderer.hx",403,0x3d4c7b7b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(405)
	::String tmp = HX_HCSTRING("Renderer Statistics\n\tbatcher count : ","\x8f","\x87","\x2b","\x5d");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	int tmp1 = this->batchers;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	::String tmp3 = (tmp2 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(405)
	::String tmp4 = (tmp3 + HX_HCSTRING("\ttotal geometry : ","\xcf","\xb6","\xd8","\x89"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(407)
	int tmp5 = this->geometry_count;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(405)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(405)
	::String tmp7 = (tmp6 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(405)
	::String tmp8 = (tmp7 + HX_HCSTRING("\tvisible geometry : ","\x3d","\x8c","\x4c","\x2a"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(408)
	int tmp9 = this->visible_count;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(405)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(405)
	::String tmp11 = (tmp10 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(405)
	::String tmp12 = (tmp11 + HX_HCSTRING("\tdynamic batched geometry : ","\xc3","\xd0","\x13","\x9c"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(409)
	int tmp13 = this->dynamic_batched_count;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(405)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(405)
	::String tmp15 = (tmp14 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(405)
	::String tmp16 = (tmp15 + HX_HCSTRING("\tstatic batched geometry : ","\x24","\x4e","\x71","\x28"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(410)
	int tmp17 = this->static_batched_count;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(405)
	::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(405)
	::String tmp19 = (tmp18 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(405)
	::String tmp20 = (tmp19 + HX_HCSTRING("\ttotal draw calls : ","\xa8","\x2f","\xeb","\x81"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(411)
	int tmp21 = this->draw_calls;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(405)
	::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(405)
	::String tmp23 = (tmp22 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(405)
	::String tmp24 = (tmp23 + HX_HCSTRING("\ttotal vertices : ","\xe8","\x3f","\x2e","\x7a"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(412)
	int tmp25 = this->vert_count;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(405)
	::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(404)
	return tmp26;
}


HX_DEFINE_DYNAMIC_FUNC0(RendererStats_obj,toString,return )


RendererStats_obj::RendererStats_obj()
{
}

Dynamic RendererStats_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { return batchers; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"draw_calls") ) { return draw_calls; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { return vert_count; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visible_count") ) { return visible_count; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"geometry_count") ) { return geometry_count; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { return static_batched_count; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { return dynamic_batched_count; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RendererStats_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"batchers") ) { batchers=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"draw_calls") ) { draw_calls=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert_count") ) { vert_count=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visible_count") ) { visible_count=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"geometry_count") ) { geometry_count=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"static_batched_count") ) { static_batched_count=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dynamic_batched_count") ) { dynamic_batched_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RendererStats_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RendererStats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"));
	outFields->push(HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"));
	outFields->push(HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"));
	outFields->push(HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"));
	outFields->push(HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"));
	outFields->push(HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"));
	outFields->push(HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(RendererStats_obj,batchers),HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,geometry_count),HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,dynamic_batched_count),HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,static_batched_count),HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,visible_count),HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,draw_calls),HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a")},
	{hx::fsInt,(int)offsetof(RendererStats_obj,vert_count),HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("batchers","\xec","\x2f","\x0e","\x4e"),
	HX_HCSTRING("geometry_count","\x42","\xa0","\x8d","\x12"),
	HX_HCSTRING("dynamic_batched_count","\x69","\x37","\xa8","\x66"),
	HX_HCSTRING("static_batched_count","\xd8","\x88","\x51","\x4c"),
	HX_HCSTRING("visible_count","\x02","\xe6","\xa7","\x70"),
	HX_HCSTRING("draw_calls","\x5a","\xc0","\x31","\x4a"),
	HX_HCSTRING("vert_count","\x81","\xdb","\x0c","\x72"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RendererStats_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RendererStats_obj::__mClass,"__mClass");
};

#endif

hx::Class RendererStats_obj::__mClass;

void RendererStats_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.RendererStats","\x9d","\x34","\x02","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RendererStats_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RendererStats_obj >;
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
