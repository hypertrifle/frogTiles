#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_BezierPath
#include <luxe/tween/BezierPath.h>
#endif
#ifndef INCLUDED_luxe_tween_ComponentPath
#include <luxe/tween/ComponentPath.h>
#endif
#ifndef INCLUDED_luxe_tween_IComponentPath
#include <luxe/tween/IComponentPath.h>
#endif
#ifndef INCLUDED_luxe_tween_LinearPath
#include <luxe/tween/LinearPath.h>
#endif
#ifndef INCLUDED_luxe_tween_MotionPath
#include <luxe/tween/MotionPath.h>
#endif
#ifndef INCLUDED_luxe_tween_RotationPath
#include <luxe/tween/RotationPath.h>
#endif
namespace luxe{
namespace tween{

Void MotionPath_obj::__construct()
{
HX_STACK_FRAME("luxe.tween.MotionPath","new",0xfe5c63e8,"luxe.tween.MotionPath.new","luxe/tween/MotionPath.hx",20,0x24788886)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	::luxe::tween::ComponentPath tmp = ::luxe::tween::ComponentPath_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	this->_x = tmp;
	HX_STACK_LINE(23)
	::luxe::tween::ComponentPath tmp1 = ::luxe::tween::ComponentPath_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	this->_y = tmp1;
	HX_STACK_LINE(25)
	this->_rotation = null();
}
;
	return null();
}

//MotionPath_obj::~MotionPath_obj() { }

Dynamic MotionPath_obj::__CreateEmpty() { return  new MotionPath_obj; }
hx::ObjectPtr< MotionPath_obj > MotionPath_obj::__new()
{  hx::ObjectPtr< MotionPath_obj > _result_ = new MotionPath_obj();
	_result_->__construct();
	return _result_;}

Dynamic MotionPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MotionPath_obj > _result_ = new MotionPath_obj();
	_result_->__construct();
	return _result_;}

::luxe::tween::MotionPath MotionPath_obj::bezier( Float x,Float y,Float controlX,Float controlY,hx::Null< Float >  __o_strength){
Float strength = __o_strength.Default(1);
	HX_STACK_FRAME("luxe.tween.MotionPath","bezier",0xa2a05197,"luxe.tween.MotionPath.bezier","luxe/tween/MotionPath.hx",39,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(controlX,"controlX")
	HX_STACK_ARG(controlY,"controlY")
	HX_STACK_ARG(strength,"strength")
{
		HX_STACK_LINE(41)
		::luxe::tween::ComponentPath tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::luxe::tween::BezierPath tmp1 = ::luxe::tween::BezierPath_obj::__new(x,controlX,strength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		tmp->addPath(tmp1);
		HX_STACK_LINE(42)
		::luxe::tween::ComponentPath tmp2 = this->_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		::luxe::tween::BezierPath tmp3 = ::luxe::tween::BezierPath_obj::__new(y,controlY,strength);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		tmp2->addPath(tmp3);
		HX_STACK_LINE(44)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(MotionPath_obj,bezier,return )

::luxe::tween::MotionPath MotionPath_obj::line( Float x,Float y,hx::Null< Float >  __o_strength){
Float strength = __o_strength.Default(1);
	HX_STACK_FRAME("luxe.tween.MotionPath","line",0x912b9b6c,"luxe.tween.MotionPath.line","luxe/tween/MotionPath.hx",56,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(strength,"strength")
{
		HX_STACK_LINE(58)
		::luxe::tween::ComponentPath tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::luxe::tween::LinearPath tmp1 = ::luxe::tween::LinearPath_obj::__new(x,strength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		tmp->addPath(tmp1);
		HX_STACK_LINE(59)
		::luxe::tween::ComponentPath tmp2 = this->_y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		::luxe::tween::LinearPath tmp3 = ::luxe::tween::LinearPath_obj::__new(y,strength);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		tmp2->addPath(tmp3);
		HX_STACK_LINE(61)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(MotionPath_obj,line,return )

::luxe::tween::RotationPath MotionPath_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.tween.MotionPath","get_rotation",0xa8fcacbf,"luxe.tween.MotionPath.get_rotation","luxe/tween/MotionPath.hx",73,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	::luxe::tween::RotationPath tmp = this->_rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	if ((tmp1)){
		HX_STACK_LINE(77)
		::luxe::tween::ComponentPath tmp2 = this->_x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		::luxe::tween::ComponentPath tmp3 = this->_y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		::luxe::tween::RotationPath tmp4 = ::luxe::tween::RotationPath_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		this->_rotation = tmp4;
	}
	HX_STACK_LINE(81)
	::luxe::tween::RotationPath tmp2 = this->_rotation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(MotionPath_obj,get_rotation,return )

::luxe::tween::IComponentPath MotionPath_obj::get_x( ){
	HX_STACK_FRAME("luxe.tween.MotionPath","get_x",0x915b2ad7,"luxe.tween.MotionPath.get_x","luxe/tween/MotionPath.hx",86,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::luxe::tween::ComponentPath tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MotionPath_obj,get_x,return )

::luxe::tween::IComponentPath MotionPath_obj::get_y( ){
	HX_STACK_FRAME("luxe.tween.MotionPath","get_y",0x915b2ad8,"luxe.tween.MotionPath.get_y","luxe/tween/MotionPath.hx",93,0x24788886)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	::luxe::tween::ComponentPath tmp = this->_y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MotionPath_obj,get_y,return )


MotionPath_obj::MotionPath_obj()
{
}

void MotionPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MotionPath);
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_rotation,"_rotation");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_END_CLASS();
}

void MotionPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_rotation,"_rotation");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
}

Dynamic MotionPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp == hx::paccAlways ? get_x() : x; }
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp == hx::paccAlways ? get_y() : y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bezier") ) { return bezier_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return inCallProp == hx::paccAlways ? get_rotation() : rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rotation") ) { return _rotation; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MotionPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::luxe::tween::IComponentPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< ::luxe::tween::IComponentPath >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< ::luxe::tween::ComponentPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< ::luxe::tween::ComponentPath >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::luxe::tween::RotationPath >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rotation") ) { _rotation=inValue.Cast< ::luxe::tween::RotationPath >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MotionPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MotionPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("_rotation","\x9d","\x34","\x1c","\x50"));
	outFields->push(HX_HCSTRING("_x","\x39","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::tween::RotationPath*/ ,(int)offsetof(MotionPath_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsObject /*::luxe::tween::IComponentPath*/ ,(int)offsetof(MotionPath_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::luxe::tween::IComponentPath*/ ,(int)offsetof(MotionPath_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::luxe::tween::RotationPath*/ ,(int)offsetof(MotionPath_obj,_rotation),HX_HCSTRING("_rotation","\x9d","\x34","\x1c","\x50")},
	{hx::fsObject /*::luxe::tween::ComponentPath*/ ,(int)offsetof(MotionPath_obj,_x),HX_HCSTRING("_x","\x39","\x53","\x00","\x00")},
	{hx::fsObject /*::luxe::tween::ComponentPath*/ ,(int)offsetof(MotionPath_obj,_y),HX_HCSTRING("_y","\x3a","\x53","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("_rotation","\x9d","\x34","\x1c","\x50"),
	HX_HCSTRING("_x","\x39","\x53","\x00","\x00"),
	HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"),
	HX_HCSTRING("bezier","\x1f","\x00","\x66","\xa7"),
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotionPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotionPath_obj::__mClass,"__mClass");
};

#endif

hx::Class MotionPath_obj::__mClass;

void MotionPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.MotionPath","\xf6","\x8f","\x1a","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MotionPath_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MotionPath_obj >;
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
} // end namespace tween
