#include <hxcpp.h>

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
#ifndef INCLUDED_snow_system_assets_AssetText
#include <snow/system/assets/AssetText.h>
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

Void AssetText_obj::__construct(::snow::_system::assets::Assets _system,::String _id,::String _text)
{
HX_STACK_FRAME("snow.system.assets.AssetText","new",0x9866bc58,"snow.system.assets.AssetText.new","snow/system/assets/Asset.hx",243,0xb13d5c26)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_text,"_text")
{
	HX_STACK_LINE(245)
	::snow::_system::assets::Assets tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	super::__construct(tmp,tmp1,(int)2);
	HX_STACK_LINE(246)
	::String tmp2 = _text;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	this->set_text(tmp2);
}
;
	return null();
}

//AssetText_obj::~AssetText_obj() { }

Dynamic AssetText_obj::__CreateEmpty() { return  new AssetText_obj; }
hx::ObjectPtr< AssetText_obj > AssetText_obj::__new(::snow::_system::assets::Assets _system,::String _id,::String _text)
{  hx::ObjectPtr< AssetText_obj > _result_ = new AssetText_obj();
	_result_->__construct(_system,_id,_text);
	return _result_;}

Dynamic AssetText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetText_obj > _result_ = new AssetText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::snow::api::Promise AssetText_obj::reload( ){
	HX_STACK_FRAME("snow.system.assets.AssetText","reload",0x3c1e3261,"snow.system.assets.AssetText.reload","snow/system/assets/Asset.hx",253,0xb13d5c26)
	HX_STACK_THIS(this)
	HX_STACK_LINE(253)
	::snow::_system::assets::AssetText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::_system::assets::AssetText,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/system/assets/Asset.hx",255,0xb13d5c26)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(257)
			::snow::Snow tmp = _g->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(257)
			::String tmp1 = _g->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(257)
			::String tmp2 = _g->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(257)
			::String tmp3 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp1).Add(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			Dynamic tmp4 = ::snow::_system::assets::AssetText_obj::processor_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			::snow::api::Promise tmp5 = tmp->io->__Field(HX_HCSTRING("data_flow","\x63","\x45","\x91","\xa9"), hx::paccDynamic )(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::snow::_system::assets::AssetText,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::String _text){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/system/assets/Asset.hx",257,0xb13d5c26)
				HX_STACK_ARG(_text,"_text")
				{
					HX_STACK_LINE(259)
					::String tmp6 = _text;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(259)
					_g->__Field(HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"), hx::paccDynamic )(tmp6);
					HX_STACK_LINE(260)
					::snow::_system::assets::AssetText tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(260)
					resolve(tmp7);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(257)
			::snow::api::Promise tmp6 = tmp5->then( Dynamic(new _Function_2_1(_g,resolve)),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(262)
			Dynamic tmp7 = reject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			tmp6->error(tmp7);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(255)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetText_obj,reload,return )

Void AssetText_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.assets.AssetText","destroy",0x234a74f2,"snow.system.assets.AssetText.destroy","snow/system/assets/Asset.hx",269,0xb13d5c26)
		HX_STACK_THIS(this)
		HX_STACK_LINE(269)
		this->set_text(null());
	}
return null();
}


::String AssetText_obj::set_text( ::String _text){
	HX_STACK_FRAME("snow.system.assets.AssetText","set_text",0x680c92b2,"snow.system.assets.AssetText.set_text","snow/system/assets/Asset.hx",293,0xb13d5c26)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_text,"_text")
	HX_STACK_LINE(295)
	bool tmp = (_text != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	this->loaded = tmp;
	HX_STACK_LINE(296)
	::String tmp1 = this->text = _text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetText_obj,set_text,return )

::snow::api::Promise AssetText_obj::load( ::snow::_system::assets::Assets _system,::String _id){
	HX_STACK_FRAME("snow.system.assets.AssetText","load",0xc033272e,"snow.system.assets.AssetText.load","snow/system/assets/Asset.hx",275,0xb13d5c26)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(277)
	::snow::_system::assets::AssetText tmp = ::snow::_system::assets::AssetText_obj::__new(_system,_id,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	::snow::api::Promise tmp1 = tmp->__Field(HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetText_obj,load,return )

::snow::api::Promise AssetText_obj::processor( ::snow::Snow _app,::String _id,::snow::api::buffers::ArrayBufferView _data){
	HX_STACK_FRAME("snow.system.assets.AssetText","processor",0x416bf34a,"snow.system.assets.AssetText.processor","snow/system/assets/Asset.hx",282,0xb13d5c26)
	HX_STACK_ARG(_app,"_app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_LINE(284)
	bool tmp = (_data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	if ((tmp)){
		HX_STACK_LINE(284)
		::snow::types::Error tmp1 = ::snow::types::Error_obj::error(HX_HCSTRING("AssetText processor: data was null","\xff","\xb9","\x3d","\xb3"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		::snow::api::Promise tmp2 = ::snow::api::Promise_obj::reject(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		return tmp2;
	}
	HX_STACK_LINE(286)
	::haxe::io::Bytes tmp1 = _data->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	::String tmp2 = tmp1->toString();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	::snow::api::Promise tmp3 = ::snow::api::Promise_obj::resolve(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetText_obj,processor,return )


AssetText_obj::AssetText_obj()
{
}

void AssetText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetText);
	HX_MARK_MEMBER_NAME(text,"text");
	::snow::_system::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	::snow::_system::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetText_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic AssetText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AssetText_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AssetText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AssetText_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetText_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetText_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("processor","\x52","\xbd","\x0b","\xd3"),
	::String(null()) };

void AssetText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.assets.AssetText","\x66","\xf0","\x13","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetText_obj::__GetStatic;
	__mClass->mSetStaticField = &AssetText_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetText_obj >;
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
