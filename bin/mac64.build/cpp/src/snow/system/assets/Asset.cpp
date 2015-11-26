#include <hxcpp.h>

#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_Assets
#include <snow/system/assets/Assets.h>
#endif
namespace snow{
namespace _system{
namespace assets{

Void Asset_obj::__construct(::snow::_system::assets::Assets _system,::String _id,hx::Null< int >  __o__type)
{
HX_STACK_FRAME("snow.system.assets.Asset","new",0x74fc988b,"snow.system.assets.Asset.new","snow/system/assets/Asset.hx",12,0xb13d5c26)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(__o__type,"_type")
int _type = __o__type.Default(0);
{
	HX_STACK_LINE(19)
	this->loaded = false;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		if ((tmp)){
			HX_STACK_LINE(29)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(29)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		bool tmp = (_system == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		if ((tmp)){
			HX_STACK_LINE(30)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_system was null","\xb0","\xae","\xad","\x1a"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(32)
	this->_system = _system;
	HX_STACK_LINE(33)
	this->type = _type;
	HX_STACK_LINE(34)
	this->id = _id;
}
;
	return null();
}

//Asset_obj::~Asset_obj() { }

Dynamic Asset_obj::__CreateEmpty() { return  new Asset_obj; }
hx::ObjectPtr< Asset_obj > Asset_obj::__new(::snow::_system::assets::Assets _system,::String _id,hx::Null< int >  __o__type)
{  hx::ObjectPtr< Asset_obj > _result_ = new Asset_obj();
	_result_->__construct(_system,_id,__o__type);
	return _result_;}

Dynamic Asset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Asset_obj > _result_ = new Asset_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Asset_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.assets.Asset","destroy",0xf36de6a5,"snow.system.assets.Asset.destroy","snow/system/assets/Asset.hx",39,0xb13d5c26)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Asset_obj,destroy,(void))


Asset_obj::Asset_obj()
{
}

void Asset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Asset);
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void Asset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic Asset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Asset_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::snow::_system::assets::Assets >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Asset_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Asset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::_system::assets::Assets*/ ,(int)offsetof(Asset_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{hx::fsString,(int)offsetof(Asset_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Asset_obj,loaded),HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{hx::fsInt,(int)offsetof(Asset_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Asset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Asset_obj::__mClass,"__mClass");
};

#endif

hx::Class Asset_obj::__mClass;

void Asset_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.assets.Asset","\x19","\xf7","\xf4","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Asset_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Asset_obj >;
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

} // end namespace snow
} // end namespace system
} // end namespace assets
