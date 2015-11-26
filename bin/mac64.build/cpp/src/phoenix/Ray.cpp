#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Ray
#include <phoenix/Ray.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace phoenix{

Void Ray_obj::__construct(::phoenix::Vector _screen_pos,::phoenix::Camera _camera,::phoenix::Rectangle _viewport)
{
HX_STACK_FRAME("phoenix.Ray","new",0xbe8943dd,"phoenix.Ray.new","phoenix/Ray.hx",17,0x66221cf4)
HX_STACK_THIS(this)
HX_STACK_ARG(_screen_pos,"_screen_pos")
HX_STACK_ARG(_camera,"_camera")
HX_STACK_ARG(_viewport,"_viewport")
{
	HX_STACK_LINE(19)
	bool tmp = (_viewport == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	if ((tmp)){
		HX_STACK_LINE(20)
		::luxe::Core tmp1 = ::Luxe_obj::core;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		int tmp2 = tmp1->screen->get_w();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::luxe::Core tmp3 = ::Luxe_obj::core;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		int tmp4 = tmp3->screen->get_h();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		::phoenix::Rectangle tmp5 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		_viewport = tmp5;
	}
	HX_STACK_LINE(23)
	bool tmp1 = (_camera == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp1)){
		HX_STACK_LINE(23)
		HX_STACK_DO_THROW(HX_HCSTRING("Camera required for a ray!","\x93","\x2f","\x73","\xfe"));
	}
	HX_STACK_LINE(25)
	this->camera = _camera;
	HX_STACK_LINE(26)
	this->viewport = _viewport;
	HX_STACK_LINE(28)
	::phoenix::Vector tmp2 = _screen_pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	this->refresh(tmp2);
}
;
	return null();
}

//Ray_obj::~Ray_obj() { }

Dynamic Ray_obj::__CreateEmpty() { return  new Ray_obj; }
hx::ObjectPtr< Ray_obj > Ray_obj::__new(::phoenix::Vector _screen_pos,::phoenix::Camera _camera,::phoenix::Rectangle _viewport)
{  hx::ObjectPtr< Ray_obj > _result_ = new Ray_obj();
	_result_->__construct(_screen_pos,_camera,_viewport);
	return _result_;}

Dynamic Ray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ray_obj > _result_ = new Ray_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Ray_obj::refresh( ::phoenix::Vector _screen_pos){
{
		HX_STACK_FRAME("phoenix.Ray","refresh",0x77a24fd8,"phoenix.Ray.refresh","phoenix/Ray.hx",32,0x66221cf4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_screen_pos,"_screen_pos")
		HX_STACK_LINE(35)
		Float tmp = _screen_pos->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::phoenix::Rectangle tmp1 = this->viewport;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Float tmp2 = tmp1->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		Float tmp4 = (tmp3 - ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Float tmp5 = (tmp4 * ((Float)2.0));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		Float ndc_x = tmp5;		HX_STACK_VAR(ndc_x,"ndc_x");
		HX_STACK_LINE(36)
		::phoenix::Rectangle tmp6 = this->viewport;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		Float tmp7 = tmp6->h;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		Float tmp8 = _screen_pos->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		::phoenix::Rectangle tmp10 = this->viewport;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		Float tmp11 = tmp10->h;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		Float tmp12 = (Float(tmp9) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		Float tmp13 = (tmp12 - ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		Float tmp14 = (tmp13 * ((Float)2.0));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		Float ndc_y = tmp14;		HX_STACK_VAR(ndc_y,"ndc_y");
		HX_STACK_LINE(39)
		::phoenix::Vector tmp15 = ::phoenix::Vector_obj::__new(ndc_x,ndc_y,((Float)0.0),((Float)1.0));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(39)
		::phoenix::Vector start_ndc = tmp15;		HX_STACK_VAR(start_ndc,"start_ndc");
		HX_STACK_LINE(40)
		::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new(ndc_x,ndc_y,((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(40)
		::phoenix::Vector end_ndc = tmp16;		HX_STACK_VAR(end_ndc,"end_ndc");
		HX_STACK_LINE(42)
		::phoenix::Camera tmp17 = this->camera;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(42)
		::phoenix::Vector tmp18 = start_ndc;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(42)
		::phoenix::Vector tmp19 = tmp17->unproject(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(42)
		this->origin = tmp19;
		HX_STACK_LINE(43)
		::phoenix::Camera tmp20 = this->camera;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(43)
		::phoenix::Vector tmp21 = end_ndc;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(43)
		::phoenix::Vector tmp22 = tmp20->unproject(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(43)
		this->end = tmp22;
		HX_STACK_LINE(44)
		::phoenix::Vector tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::phoenix::Vector tmp24 = this->end;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(44)
			::phoenix::Vector a = tmp24;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(44)
			::phoenix::Vector tmp25 = this->origin;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(44)
			::phoenix::Vector b = tmp25;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(44)
			Float tmp26 = (a->x - b->x);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(44)
			Float tmp27 = (a->y - b->y);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(44)
			Float tmp28 = (a->z - b->z);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(44)
			tmp23 = ::phoenix::Vector_obj::__new(tmp26,tmp27,tmp28,null());
		}
		HX_STACK_LINE(44)
		this->dir = tmp23;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,refresh,(void))


Ray_obj::Ray_obj()
{
}

void Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ray);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(viewport,"viewport");
	HX_MARK_END_CLASS();
}

void Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(viewport,"viewport");
}

Dynamic Ray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::phoenix::Camera >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { viewport=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Ray_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,origin),HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Ray_obj,dir),HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")},
	{hx::fsObject /*::phoenix::Camera*/ ,(int)offsetof(Ray_obj,camera),HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Ray_obj,viewport),HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#endif

hx::Class Ray_obj::__mClass;

void Ray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.Ray","\x6b","\x11","\x91","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Ray_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ray_obj >;
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
