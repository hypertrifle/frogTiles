#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
namespace luxe{

Void Objects_obj::__construct(::String __o__name,::String __o__id)
{
HX_STACK_FRAME("luxe.Objects","new",0xcbec42ee,"luxe.Objects.new","luxe/Objects.hx",21,0xf92c5f83)
HX_STACK_THIS(this)
HX_STACK_ARG(__o__name,"_name")
HX_STACK_ARG(__o__id,"_id")
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String _id = __o__id.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(26)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(24)
	this->id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	::String tmp = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->set_name(tmp);
	HX_STACK_LINE(32)
	bool tmp1 = (_id == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(32)
		::luxe::utils::Utils tmp3 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		tmp2 = tmp3->uniqueid(null());
	}
	else{
		HX_STACK_LINE(32)
		tmp2 = _id;
	}
	HX_STACK_LINE(32)
	this->set_id(tmp2);
}
;
	return null();
}

//Objects_obj::~Objects_obj() { }

Dynamic Objects_obj::__CreateEmpty() { return  new Objects_obj; }
hx::ObjectPtr< Objects_obj > Objects_obj::__new(::String __o__name,::String __o__id)
{  hx::ObjectPtr< Objects_obj > _result_ = new Objects_obj();
	_result_->__construct(__o__name,__o__id);
	return _result_;}

Dynamic Objects_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Objects_obj > _result_ = new Objects_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String Objects_obj::set_name( ::String _name){
	HX_STACK_FRAME("luxe.Objects","set_name",0x1a4f11fa,"luxe.Objects.set_name","luxe/Objects.hx",38,0xf92c5f83)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_LINE(38)
	::String tmp = this->name = _name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Objects_obj,set_name,return )

::String Objects_obj::set_id( ::String _id){
	HX_STACK_FRAME("luxe.Objects","set_id",0xab0f61ca,"luxe.Objects.set_id","luxe/Objects.hx",39,0xf92c5f83)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(39)
	::String tmp = this->id = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Objects_obj,set_id,return )

::String Objects_obj::get_name( ){
	HX_STACK_FRAME("luxe.Objects","get_name",0x6bf1b886,"luxe.Objects.get_name","luxe/Objects.hx",40,0xf92c5f83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Objects_obj,get_name,return )

::String Objects_obj::get_id( ){
	HX_STACK_FRAME("luxe.Objects","get_id",0xdec70d56,"luxe.Objects.get_id","luxe/Objects.hx",41,0xf92c5f83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Objects_obj,get_id,return )


Objects_obj::Objects_obj()
{
}

void Objects_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Objects);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	::luxe::Emitter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Objects_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	::luxe::Emitter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Objects_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return inCallProp == hx::paccAlways ? get_id() : id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return inCallProp == hx::paccAlways ? get_name() : name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Objects_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return set_id(inValue);id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue);name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Objects_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Objects_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Objects_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(Objects_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Objects_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Objects_obj::__mClass,"__mClass");
};

#endif

hx::Class Objects_obj::__mClass;

void Objects_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Objects","\xfc","\xf3","\x40","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Objects_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Objects_obj >;
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
