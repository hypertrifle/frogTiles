#include <hxcpp.h>

#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif
namespace phoenix{
namespace geometry{

Void GeometryKey_obj::__construct()
{
HX_STACK_FRAME("phoenix.geometry.GeometryKey","new",0xbf3d7a62,"phoenix.geometry.GeometryKey.new","phoenix/geometry/Geometry.hx",773,0xdab136cf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(784)
	this->clip = false;
	HX_STACK_LINE(783)
	this->depth = ((Float)0);
	HX_STACK_LINE(779)
	this->uuid = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(778)
	this->sequence = (int)0;
	HX_STACK_LINE(777)
	this->timestamp = ((Float)0);
}
;
	return null();
}

//GeometryKey_obj::~GeometryKey_obj() { }

Dynamic GeometryKey_obj::__CreateEmpty() { return  new GeometryKey_obj; }
hx::ObjectPtr< GeometryKey_obj > GeometryKey_obj::__new()
{  hx::ObjectPtr< GeometryKey_obj > _result_ = new GeometryKey_obj();
	_result_->__construct();
	return _result_;}

Dynamic GeometryKey_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeometryKey_obj > _result_ = new GeometryKey_obj();
	_result_->__construct();
	return _result_;}


GeometryKey_obj::GeometryKey_obj()
{
}

void GeometryKey_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryKey);
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(sequence,"sequence");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_END_CLASS();
}

void GeometryKey_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(sequence,"sequence");
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(clip,"clip");
}

Dynamic GeometryKey_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid; }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sequence") ) { return sequence; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return primitive_type; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeometryKey_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip") ) { clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::phoenix::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::phoenix::Texture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sequence") ) { sequence=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { primitive_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GeometryKey_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GeometryKey_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8"));
	outFields->push(HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"));
	outFields->push(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GeometryKey_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsInt,(int)offsetof(GeometryKey_obj,sequence),HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8")},
	{hx::fsString,(int)offsetof(GeometryKey_obj,uuid),HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d")},
	{hx::fsInt,(int)offsetof(GeometryKey_obj,primitive_type),HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(GeometryKey_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(GeometryKey_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsFloat,(int)offsetof(GeometryKey_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsBool,(int)offsetof(GeometryKey_obj,clip),HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("sequence","\x41","\x1e","\xed","\xe8"),
	HX_HCSTRING("uuid","\x3b","\x1a","\xaf","\x4d"),
	HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryKey_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryKey_obj::__mClass,"__mClass");
};

#endif

hx::Class GeometryKey_obj::__mClass;

void GeometryKey_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.GeometryKey","\x70","\x61","\x5c","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GeometryKey_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeometryKey_obj >;
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
