#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
namespace luxe{

Void ID_obj::__construct(::String __o__name,::String __o__id)
{
HX_STACK_FRAME("luxe.ID","new",0xa0d20805,"luxe.ID.new","luxe/Objects.hx",3,0xf92c5f83)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__name,"_name")
HX_STACK_ARG(__o__id,"_id")
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String _id = __o__id.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(8)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(12)
	this->name = _name;
	HX_STACK_LINE(13)
	bool tmp = (_id == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	if ((tmp)){
		HX_STACK_LINE(13)
		::luxe::utils::Utils tmp2 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13)
		tmp1 = tmp2->uniqueid(null());
	}
	else{
		HX_STACK_LINE(13)
		tmp1 = _id;
	}
	HX_STACK_LINE(13)
	this->id = tmp1;
}
;
	return null();
}

//ID_obj::~ID_obj() { }

Dynamic ID_obj::__CreateEmpty() { return  new ID_obj; }
hx::ObjectPtr< ID_obj > ID_obj::__new(::String __o__name,::String __o__id)
{  hx::ObjectPtr< ID_obj > _result_ = new ID_obj();
	_result_->__construct(__o__name,__o__id);
	return _result_;}

Dynamic ID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ID_obj > _result_ = new ID_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


ID_obj::ID_obj()
{
}

void ID_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ID);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void ID_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic ID_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ID_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ID_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ID_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(ID_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ID_obj::__mClass,"__mClass");
};

#endif

hx::Class ID_obj::__mClass;

void ID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.ID","\x93","\xa1","\xca","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ID_obj >;
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
