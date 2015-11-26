#include <hxcpp.h>

#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetJSON
#include <snow/system/assets/AssetJSON.h>
#endif
#ifndef INCLUDED_snow_system_assets_Assets
#include <snow/system/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_system_io_IO
#include <snow/system/io/IO.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace snow{
namespace _system{
namespace assets{

Void AssetJSON_obj::__construct(::snow::_system::assets::Assets _system,::String _id,Dynamic _json)
{
HX_STACK_FRAME("snow.system.assets.AssetJSON","new",0x2a101733,"snow.system.assets.AssetJSON.new","snow/system/assets/Asset.hx",309,0xb13d5c26)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_json,"_json")
{
	HX_STACK_LINE(311)
	::snow::_system::assets::Assets tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	super::__construct(tmp,tmp1,(int)3);
	HX_STACK_LINE(312)
	Dynamic tmp2 = _json;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(312)
	this->set_json(tmp2);
}
;
	return null();
}

//AssetJSON_obj::~AssetJSON_obj() { }

Dynamic AssetJSON_obj::__CreateEmpty() { return  new AssetJSON_obj; }
hx::ObjectPtr< AssetJSON_obj > AssetJSON_obj::__new(::snow::_system::assets::Assets _system,::String _id,Dynamic _json)
{  hx::ObjectPtr< AssetJSON_obj > _result_ = new AssetJSON_obj();
	_result_->__construct(_system,_id,_json);
	return _result_;}

Dynamic AssetJSON_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetJSON_obj > _result_ = new AssetJSON_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::snow::api::Promise AssetJSON_obj::reload( ){
	HX_STACK_FRAME("snow.system.assets.AssetJSON","reload",0x680ad266,"snow.system.assets.AssetJSON.reload","snow/system/assets/Asset.hx",319,0xb13d5c26)
	HX_STACK_THIS(this)
	HX_STACK_LINE(319)
	::snow::_system::assets::AssetJSON _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::_system::assets::AssetJSON,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/system/assets/Asset.hx",321,0xb13d5c26)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(323)
			::snow::Snow tmp = _g->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(323)
			::String tmp1 = _g->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(323)
			::String tmp2 = _g->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(323)
			::String tmp3 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp1).Add(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(323)
			Dynamic tmp4 = ::snow::_system::assets::AssetJSON_obj::processor_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(323)
			::snow::api::Promise tmp5 = tmp->io->__Field(HX_HCSTRING("data_flow","\x63","\x45","\x91","\xa9"), hx::paccDynamic )(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::snow::_system::assets::AssetJSON,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _json){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/system/assets/Asset.hx",323,0xb13d5c26)
				HX_STACK_ARG(_json,"_json")
				{
					HX_STACK_LINE(325)
					Dynamic tmp6 = _json;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(325)
					_g->__Field(HX_HCSTRING("set_json","\x25","\x57","\x80","\x74"), hx::paccDynamic )(tmp6);
					HX_STACK_LINE(326)
					::snow::_system::assets::AssetJSON tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(326)
					resolve(tmp7);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(323)
			::snow::api::Promise tmp6 = tmp5->then( Dynamic(new _Function_2_1(_g,resolve)),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(328)
			Dynamic tmp7 = reject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(323)
			tmp6->error(tmp7);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(321)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetJSON_obj,reload,return )

Void AssetJSON_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.assets.AssetJSON","destroy",0x6669d94d,"snow.system.assets.AssetJSON.destroy","snow/system/assets/Asset.hx",335,0xb13d5c26)
		HX_STACK_THIS(this)
		HX_STACK_LINE(335)
		this->set_json(null());
	}
return null();
}


Dynamic AssetJSON_obj::set_json( Dynamic _json){
	HX_STACK_FRAME("snow.system.assets.AssetJSON","set_json",0xd9d37372,"snow.system.assets.AssetJSON.set_json","snow/system/assets/Asset.hx",369,0xb13d5c26)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_json,"_json")
	HX_STACK_LINE(371)
	bool tmp = (_json != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	this->loaded = tmp;
	HX_STACK_LINE(372)
	Dynamic tmp1 = this->json = _json;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetJSON_obj,set_json,return )

::snow::api::Promise AssetJSON_obj::load( ::snow::_system::assets::Assets _system,::String _id){
	HX_STACK_FRAME("snow.system.assets.AssetJSON","load",0xa2b94bf3,"snow.system.assets.AssetJSON.load","snow/system/assets/Asset.hx",341,0xb13d5c26)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(343)
	::snow::_system::assets::AssetJSON tmp = ::snow::_system::assets::AssetJSON_obj::__new(_system,_id,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	::snow::api::Promise tmp1 = tmp->__Field(HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(343)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetJSON_obj,load,return )

::snow::api::Promise AssetJSON_obj::processor( ::snow::Snow _app,::String _id,::snow::api::buffers::ArrayBufferView _data){
	HX_STACK_FRAME("snow.system.assets.AssetJSON","processor",0x16716465,"snow.system.assets.AssetJSON.processor","snow/system/assets/Asset.hx",348,0xb13d5c26)
	HX_STACK_ARG(_app,"_app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_LINE(350)
	bool tmp = (_data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	if ((tmp)){
		HX_STACK_LINE(350)
		::snow::types::Error tmp1 = ::snow::types::Error_obj::error(HX_HCSTRING("AssetJSON: data was null","\x36","\x36","\x57","\x6d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		::snow::api::Promise tmp2 = ::snow::api::Promise_obj::reject(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		return tmp2;
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::buffers::ArrayBufferView,_data)
	int __ArgCount() const { return 2; }
	Dynamic run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/system/assets/Asset.hx",352,0xb13d5c26)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(354)
			Dynamic _data_json = null();		HX_STACK_VAR(_data_json,"_data_json");
			HX_STACK_LINE(356)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(356)
				Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					::haxe::io::Bytes tmp2 = _data->buffer;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(356)
					::String tmp3 = tmp2->toString();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(356)
					::String text = tmp3;		HX_STACK_VAR(text,"text");
					HX_STACK_LINE(356)
					::haxe::format::JsonParser tmp4 = ::haxe::format::JsonParser_obj::__new(text);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(356)
					tmp1 = tmp4->parseRec();
				}
				HX_STACK_LINE(356)
				_data_json = tmp1;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(358)
						Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(358)
						::snow::types::Error tmp2 = ::snow::types::Error_obj::parse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(358)
						Dynamic tmp3 = reject(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(358)
						return tmp3;
					}
				}
			}
			HX_STACK_LINE(360)
			Dynamic tmp1 = _data_json;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(360)
			Dynamic tmp2 = resolve(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(352)
	::snow::api::Promise tmp1 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_data)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(352)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetJSON_obj,processor,return )


AssetJSON_obj::AssetJSON_obj()
{
}

void AssetJSON_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetJSON);
	HX_MARK_MEMBER_NAME(json,"json");
	::snow::_system::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetJSON_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(json,"json");
	::snow::_system::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetJSON_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { return json; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_json") ) { return set_json_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetJSON_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"processor") ) { outValue = processor_dyn(); return true;  }
	}
	return false;
}

Dynamic AssetJSON_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { if (inCallProp == hx::paccAlways) return set_json(inValue);json=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AssetJSON_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AssetJSON_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("json","\x28","\x42","\x68","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AssetJSON_obj,json),HX_HCSTRING("json","\x28","\x42","\x68","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("json","\x28","\x42","\x68","\x46"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_json","\x25","\x57","\x80","\x74"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetJSON_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetJSON_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetJSON_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("processor","\x52","\xbd","\x0b","\xd3"),
	::String(null()) };

void AssetJSON_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.assets.AssetJSON","\xc1","\x01","\x6a","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetJSON_obj::__GetStatic;
	__mClass->mSetStaticField = &AssetJSON_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetJSON_obj >;
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
