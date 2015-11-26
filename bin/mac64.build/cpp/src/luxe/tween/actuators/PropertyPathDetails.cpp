#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_IComponentPath
#include <luxe/tween/IComponentPath.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyPathDetails
#include <luxe/tween/actuators/PropertyPathDetails.h>
#endif
namespace luxe{
namespace tween{
namespace actuators{

Void PropertyPathDetails_obj::__construct(Dynamic target,::String propertyName,::luxe::tween::IComponentPath path,hx::Null< bool >  __o_isField)
{
HX_STACK_FRAME("luxe.tween.actuators.PropertyPathDetails","new",0x45a6c34b,"luxe.tween.actuators.PropertyPathDetails.new","luxe/tween/actuators/MotionPathActuator.hx",224,0xdb065698)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(propertyName,"propertyName")
HX_STACK_ARG(path,"path")
HX_STACK_ARG(__o_isField,"isField")
bool isField = __o_isField.Default(true);
{
	HX_STACK_LINE(226)
	Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	::String tmp1 = propertyName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	bool tmp2 = isField;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	super::__construct(tmp,tmp1,(int)0,(int)0,tmp2);
	HX_STACK_LINE(228)
	this->path = path;
}
;
	return null();
}

//PropertyPathDetails_obj::~PropertyPathDetails_obj() { }

Dynamic PropertyPathDetails_obj::__CreateEmpty() { return  new PropertyPathDetails_obj; }
hx::ObjectPtr< PropertyPathDetails_obj > PropertyPathDetails_obj::__new(Dynamic target,::String propertyName,::luxe::tween::IComponentPath path,hx::Null< bool >  __o_isField)
{  hx::ObjectPtr< PropertyPathDetails_obj > _result_ = new PropertyPathDetails_obj();
	_result_->__construct(target,propertyName,path,__o_isField);
	return _result_;}

Dynamic PropertyPathDetails_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PropertyPathDetails_obj > _result_ = new PropertyPathDetails_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}


PropertyPathDetails_obj::PropertyPathDetails_obj()
{
}

void PropertyPathDetails_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyPathDetails);
	HX_MARK_MEMBER_NAME(path,"path");
	::luxe::tween::actuators::PropertyDetails_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PropertyPathDetails_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	::luxe::tween::actuators::PropertyDetails_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PropertyPathDetails_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PropertyPathDetails_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::luxe::tween::IComponentPath >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PropertyPathDetails_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PropertyPathDetails_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::tween::IComponentPath*/ ,(int)offsetof(PropertyPathDetails_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PropertyPathDetails_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PropertyPathDetails_obj::__mClass,"__mClass");
};

#endif

hx::Class PropertyPathDetails_obj::__mClass;

void PropertyPathDetails_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.actuators.PropertyPathDetails","\xd9","\xc1","\x02","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PropertyPathDetails_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PropertyPathDetails_obj >;
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
} // end namespace actuators
