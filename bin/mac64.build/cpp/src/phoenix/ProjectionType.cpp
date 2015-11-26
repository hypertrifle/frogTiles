#include <hxcpp.h>

#ifndef INCLUDED_phoenix_ProjectionType
#include <phoenix/ProjectionType.h>
#endif
namespace phoenix{

::phoenix::ProjectionType ProjectionType_obj::custom;

::phoenix::ProjectionType ProjectionType_obj::ortho;

::phoenix::ProjectionType ProjectionType_obj::perspective;

HX_DEFINE_CREATE_ENUM(ProjectionType_obj)

int ProjectionType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f")) return 2;
	if (inName==HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35")) return 0;
	if (inName==HX_HCSTRING("perspective","\x7c","\xe5","\xf1","\xc0")) return 1;
	return super::__FindIndex(inName);
}

int ProjectionType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f")) return 0;
	if (inName==HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35")) return 0;
	if (inName==HX_HCSTRING("perspective","\x7c","\xe5","\xf1","\xc0")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ProjectionType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f")) return custom;
	if (inName==HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35")) return ortho;
	if (inName==HX_HCSTRING("perspective","\x7c","\xe5","\xf1","\xc0")) return perspective;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35"),
	HX_HCSTRING("perspective","\x7c","\xe5","\xf1","\xc0"),
	HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProjectionType_obj::custom,"custom");
	HX_MARK_MEMBER_NAME(ProjectionType_obj::ortho,"ortho");
	HX_MARK_MEMBER_NAME(ProjectionType_obj::perspective,"perspective");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProjectionType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProjectionType_obj::custom,"custom");
	HX_VISIT_MEMBER_NAME(ProjectionType_obj::ortho,"ortho");
	HX_VISIT_MEMBER_NAME(ProjectionType_obj::perspective,"perspective");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ProjectionType_obj::__mClass;

Dynamic __Create_ProjectionType_obj() { return new ProjectionType_obj; }

void ProjectionType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("phoenix.ProjectionType","\x08","\x7d","\xde","\x51"), hx::TCanCast< ProjectionType_obj >,sStaticFields,sMemberFields,
	&__Create_ProjectionType_obj, &__Create,
	&super::__SGetClass(), &CreateProjectionType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ProjectionType_obj::__boot()
{
hx::Static(custom) = hx::CreateEnum< ProjectionType_obj >(HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"),2);
hx::Static(ortho) = hx::CreateEnum< ProjectionType_obj >(HX_HCSTRING("ortho","\x38","\x17","\x2d","\x35"),0);
hx::Static(perspective) = hx::CreateEnum< ProjectionType_obj >(HX_HCSTRING("perspective","\x7c","\xe5","\xf1","\xc0"),1);
}


} // end namespace phoenix
