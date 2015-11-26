#include <hxcpp.h>

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
#ifndef INCLUDED_snow_core_native_assets_Assets
#include <snow/core/native/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Assets
#include <snow/modules/interfaces/Assets.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetBytes
#include <snow/system/assets/AssetBytes.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetImage
#include <snow/system/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetJSON
#include <snow/system/assets/AssetJSON.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetText
#include <snow/system/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_system_assets_Assets
#include <snow/system/assets/Assets.h>
#endif
namespace snow{
namespace _system{
namespace assets{

Void Assets_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.system.assets.Assets","new",0x7868052c,"snow.system.assets.Assets.new","snow/system/assets/Assets.hx",16,0x91e2edc3)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(20)
	this->root = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(39)
	this->app = _app;
	HX_STACK_LINE(40)
	::snow::core::native::assets::Assets tmp = ::snow::core::native::assets::Assets_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->module = tmp;
}
;
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Assets_obj::path( ::String _id){
	HX_STACK_FRAME("snow.system.assets.Assets","path",0xe3ebe359,"snow.system.assets.Assets.path","snow/system/assets/Assets.hx",47,0x91e2edc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(47)
	::String tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	::String tmp2 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,path,return )

::snow::api::Promise Assets_obj::bytes( ::String _id){
	HX_STACK_FRAME("snow.system.assets.Assets","bytes",0x8abc0837,"snow.system.assets.Assets.bytes","snow/system/assets/Assets.hx",50,0x91e2edc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(50)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::snow::api::Promise tmp1 = ::snow::_system::assets::AssetBytes_obj::load(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,bytes,return )

::snow::api::Promise Assets_obj::text( ::String _id){
	HX_STACK_FRAME("snow.system.assets.Assets","text",0xe693ca61,"snow.system.assets.Assets.text","snow/system/assets/Assets.hx",53,0x91e2edc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(53)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::snow::api::Promise tmp1 = ::snow::_system::assets::AssetText_obj::load(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,text,return )

::snow::api::Promise Assets_obj::json( ::String _id){
	HX_STACK_FRAME("snow.system.assets.Assets","json",0xe0023fdc,"snow.system.assets.Assets.json","snow/system/assets/Assets.hx",56,0x91e2edc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(56)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::snow::api::Promise tmp1 = ::snow::_system::assets::AssetJSON_obj::load(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,json,return )

::snow::api::Promise Assets_obj::image( ::String _id){
	HX_STACK_FRAME("snow.system.assets.Assets","image",0x8a8d1f27,"snow.system.assets.Assets.image","snow/system/assets/Assets.hx",59,0x91e2edc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(59)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::snow::api::Promise tmp1 = ::snow::_system::assets::AssetImage_obj::load(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,image,return )

::snow::api::Promise Assets_obj::image_from_bytes( ::String _id,::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.system.assets.Assets","image_from_bytes",0xe3bba1ee,"snow.system.assets.Assets.image_from_bytes","snow/system/assets/Assets.hx",63,0x91e2edc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(63)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::snow::api::buffers::ArrayBufferView tmp1 = _bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	::snow::api::Promise tmp2 = ::snow::_system::assets::AssetImage_obj::load_from_bytes(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,image_from_bytes,return )

::snow::_system::assets::AssetImage Assets_obj::image_from_pixels( ::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels){
	HX_STACK_FRAME("snow.system.assets.Assets","image_from_pixels",0xc5aca84a,"snow.system.assets.Assets.image_from_pixels","snow/system/assets/Assets.hx",67,0x91e2edc3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_width,"_width")
	HX_STACK_ARG(_height,"_height")
	HX_STACK_ARG(_pixels,"_pixels")
	HX_STACK_LINE(67)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	int tmp1 = _width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	int tmp2 = _height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	::snow::api::buffers::ArrayBufferView tmp3 = _pixels;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	::snow::_system::assets::AssetImage tmp4 = ::snow::_system::assets::AssetImage_obj::load_from_pixels(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,image_from_pixels,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(app,"app");
}

Dynamic Assets_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"path") ) { return path_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text_dyn(); }
		if (HX_FIELD_EQ(inName,"json") ) { return json_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"image") ) { return image_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"image_from_bytes") ) { return image_from_bytes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"image_from_pixels") ) { return image_from_pixels_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::core::native::assets::Assets >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Assets_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::snow::core::native::assets::Assets*/ ,(int)offsetof(Assets_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Assets_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("json","\x28","\x42","\x68","\x46"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("image_from_bytes","\x3a","\xe6","\x41","\x81"),
	HX_HCSTRING("image_from_pixels","\x7e","\x26","\xa2","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
};

#endif

hx::Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.assets.Assets","\x3a","\x3f","\x63","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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
