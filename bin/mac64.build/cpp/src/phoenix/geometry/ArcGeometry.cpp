#include <hxcpp.h>

#ifndef INCLUDED_phoenix_geometry_ArcGeometry
#include <phoenix/geometry/ArcGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_CircleGeometry
#include <phoenix/geometry/CircleGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_RingGeometry
#include <phoenix/geometry/RingGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void ArcGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.ArcGeometry","new",0xa02c36f9,"phoenix.geometry.ArcGeometry.new","phoenix/geometry/ArcGeometry.hx",15,0x6c6a0a77)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(17)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
	HX_STACK_LINE(21)
	this->vertices->pop().StaticCast< ::phoenix::geometry::Vertex >();
	HX_STACK_LINE(22)
	this->vertices->pop().StaticCast< ::phoenix::geometry::Vertex >();
	HX_STACK_LINE(25)
	this->set_primitive_type((int)1);
}
;
	return null();
}

//ArcGeometry_obj::~ArcGeometry_obj() { }

Dynamic ArcGeometry_obj::__CreateEmpty() { return  new ArcGeometry_obj; }
hx::ObjectPtr< ArcGeometry_obj > ArcGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< ArcGeometry_obj > _result_ = new ArcGeometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic ArcGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArcGeometry_obj > _result_ = new ArcGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


ArcGeometry_obj::ArcGeometry_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArcGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArcGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class ArcGeometry_obj::__mClass;

void ArcGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.ArcGeometry","\x87","\x46","\x3d","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArcGeometry_obj >;
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
