#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
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
#ifndef INCLUDED_snow_system_assets_AssetImage
#include <snow/system/assets/AssetImage.h>
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

Void AssetImage_obj::__construct(::snow::_system::assets::Assets _system,::String _id,Dynamic _image)
{
HX_STACK_FRAME("snow.system.assets.AssetImage","new",0x0c63c774,"snow.system.assets.AssetImage.new","snow/system/assets/Asset.hx",54,0xb13d5c26)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
HX_STACK_ARG(_id,"_id")
HX_STACK_ARG(_image,"_image")
{
	HX_STACK_LINE(56)
	::snow::_system::assets::Assets tmp = _system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	super::__construct(tmp,tmp1,(int)4);
	HX_STACK_LINE(57)
	Dynamic tmp2 = _image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	this->set_image(tmp2);
}
;
	return null();
}

//AssetImage_obj::~AssetImage_obj() { }

Dynamic AssetImage_obj::__CreateEmpty() { return  new AssetImage_obj; }
hx::ObjectPtr< AssetImage_obj > AssetImage_obj::__new(::snow::_system::assets::Assets _system,::String _id,Dynamic _image)
{  hx::ObjectPtr< AssetImage_obj > _result_ = new AssetImage_obj();
	_result_->__construct(_system,_id,_image);
	return _result_;}

Dynamic AssetImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetImage_obj > _result_ = new AssetImage_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::snow::api::Promise AssetImage_obj::reload( ){
	HX_STACK_FRAME("snow.system.assets.AssetImage","reload",0xfc1c00c5,"snow.system.assets.AssetImage.reload","snow/system/assets/Asset.hx",64,0xb13d5c26)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	::snow::_system::assets::AssetImage _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(66)
	this->loaded = false;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::_system::assets::AssetImage,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/system/assets/Asset.hx",68,0xb13d5c26)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(70)
			::snow::Snow tmp = _g->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			::String tmp1 = _g->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			::String tmp2 = _g->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::String tmp3 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp1).Add(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			Dynamic tmp4 = ::snow::_system::assets::AssetImage_obj::provider_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			::snow::api::Promise tmp5 = tmp->io->__Field(HX_HCSTRING("data_flow","\x63","\x45","\x91","\xa9"), hx::paccDynamic )(tmp3,null(),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			::snow::api::Promise _load = tmp5;		HX_STACK_VAR(_load,"_load");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::snow::_system::assets::AssetImage,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _image){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/system/assets/Asset.hx",73,0xb13d5c26)
				HX_STACK_ARG(_image,"_image")
				{
					HX_STACK_LINE(74)
					Dynamic tmp6 = _image;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(74)
					_g->__Field(HX_HCSTRING("set_image","\xbe","\x67","\x63","\xe4"), hx::paccDynamic )(tmp6);
					HX_STACK_LINE(75)
					::snow::_system::assets::AssetImage tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(75)
					resolve(tmp7);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(72)
			::snow::api::Promise tmp6 = _load->then( Dynamic(new _Function_2_1(_g,resolve)),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			Dynamic tmp7 = reject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			tmp6->error(tmp7);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(68)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetImage_obj,reload,return )

Void AssetImage_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.assets.AssetImage","destroy",0x61613e0e,"snow.system.assets.AssetImage.destroy","snow/system/assets/Asset.hx",84,0xb13d5c26)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		this->set_image(null());
	}
return null();
}


::snow::api::Promise AssetImage_obj::reload_from_bytes( ::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.system.assets.AssetImage","reload_from_bytes",0xb46c0910,"snow.system.assets.AssetImage.reload_from_bytes","snow/system/assets/Asset.hx",88,0xb13d5c26)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(88)
	::snow::_system::assets::AssetImage _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(90)
	this->loaded = false;

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::snow::_system::assets::AssetImage,_g,::snow::api::buffers::ArrayBufferView,_bytes)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/system/assets/Asset.hx",92,0xb13d5c26)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(94)
			::snow::core::native::assets::Assets tmp = _g->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(94)
			::String tmp1 = _g->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(94)
			::snow::api::buffers::ArrayBufferView tmp2 = _bytes;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			::snow::api::Promise tmp3 = tmp->image_info_from_bytes(tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			::snow::api::Promise _load = tmp3;		HX_STACK_VAR(_load,"_load");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::snow::_system::assets::AssetImage,_g,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _image){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/system/assets/Asset.hx",96,0xb13d5c26)
				HX_STACK_ARG(_image,"_image")
				{
					HX_STACK_LINE(97)
					Dynamic tmp4 = _image;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(97)
					_g->__Field(HX_HCSTRING("set_image","\xbe","\x67","\x63","\xe4"), hx::paccDynamic )(tmp4);
					HX_STACK_LINE(98)
					::snow::_system::assets::AssetImage tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(98)
					resolve(tmp5);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(96)
			::snow::api::Promise tmp4 = _load->then( Dynamic(new _Function_2_1(_g,resolve)),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			Dynamic tmp5 = reject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			tmp4->error(tmp5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(92)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g,_bytes)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetImage_obj,reload_from_bytes,return )

Void AssetImage_obj::reload_from_pixels( int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels){
{
		HX_STACK_FRAME("snow.system.assets.AssetImage","reload_from_pixels",0x8f567ee8,"snow.system.assets.AssetImage.reload_from_pixels","snow/system/assets/Asset.hx",106,0xb13d5c26)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_width,"_width")
		HX_STACK_ARG(_height,"_height")
		HX_STACK_ARG(_pixels,"_pixels")
		HX_STACK_LINE(108)
		this->loaded = false;
		HX_STACK_LINE(110)
		::snow::_system::assets::Assets tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		::String tmp1 = this->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		int tmp2 = _width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		int tmp3 = _height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		::snow::api::buffers::ArrayBufferView tmp4 = _pixels;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		Dynamic tmp5 = tmp->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("image_info_from_pixels","\xb5","\xe8","\xe3","\x8a"), hx::paccDynamic )(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		this->set_image(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AssetImage_obj,reload_from_pixels,(void))

Dynamic AssetImage_obj::set_image( Dynamic _image){
	HX_STACK_FRAME("snow.system.assets.AssetImage","set_image",0x5af3e5d2,"snow.system.assets.AssetImage.set_image","snow/system/assets/Asset.hx",167,0xb13d5c26)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_image,"_image")
	HX_STACK_LINE(169)
	bool tmp = (_image != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	this->loaded = tmp;
	HX_STACK_LINE(170)
	Dynamic tmp1 = this->image = _image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetImage_obj,set_image,return )

::snow::api::Promise AssetImage_obj::load( ::snow::_system::assets::Assets _system,::String _id){
	HX_STACK_FRAME("snow.system.assets.AssetImage","load",0xc99fd492,"snow.system.assets.AssetImage.load","snow/system/assets/Asset.hx",116,0xb13d5c26)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		if ((tmp)){
			HX_STACK_LINE(118)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		bool tmp = (_system == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		if ((tmp)){
			HX_STACK_LINE(119)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_system was null","\xb0","\xae","\xad","\x1a"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(121)
	::snow::_system::assets::AssetImage tmp = ::snow::_system::assets::AssetImage_obj::__new(_system,_id,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	::snow::api::Promise tmp1 = tmp->__Field(HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetImage_obj,load,return )

::snow::api::Promise AssetImage_obj::load_from_bytes( ::snow::_system::assets::Assets _system,::String _id,::snow::api::buffers::ArrayBufferView _bytes){
	HX_STACK_FRAME("snow.system.assets.AssetImage","load_from_bytes",0x8d6dde63,"snow.system.assets.AssetImage.load_from_bytes","snow/system/assets/Asset.hx",125,0xb13d5c26)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_bytes,"_bytes")
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(127)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		bool tmp = (_bytes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		if ((tmp)){
			HX_STACK_LINE(128)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_bytes was null","\xd2","\x33","\xd5","\x32"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		bool tmp = (_system == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		if ((tmp)){
			HX_STACK_LINE(129)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_system was null","\xb0","\xae","\xad","\x1a"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(129)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(131)
	::snow::_system::assets::AssetImage tmp = ::snow::_system::assets::AssetImage_obj::__new(_system,_id,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	::snow::api::buffers::ArrayBufferView tmp1 = _bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	::snow::api::Promise tmp2 = tmp->__Field(HX_HCSTRING("reload_from_bytes","\xfc","\x56","\x51","\xe1"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetImage_obj,load_from_bytes,return )

::snow::_system::assets::AssetImage AssetImage_obj::load_from_pixels( ::snow::_system::assets::Assets _system,::String _id,int _width,int _height,::snow::api::buffers::ArrayBufferView _pixels){
	HX_STACK_FRAME("snow.system.assets.AssetImage","load_from_pixels",0x97ef5235,"snow.system.assets.AssetImage.load_from_pixels","snow/system/assets/Asset.hx",135,0xb13d5c26)
	HX_STACK_ARG(_system,"_system")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_width,"_width")
	HX_STACK_ARG(_height,"_height")
	HX_STACK_ARG(_pixels,"_pixels")
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		if ((tmp)){
			HX_STACK_LINE(137)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(137)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		bool tmp = (_pixels == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		if ((tmp)){
			HX_STACK_LINE(138)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_pixels was null","\xb2","\x5e","\x44","\xbb"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(138)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		bool tmp = (_system == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		if ((tmp)){
			HX_STACK_LINE(139)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_system was null","\xb0","\xae","\xad","\x1a"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(141)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	int tmp1 = _width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	int tmp2 = _height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	::snow::api::buffers::ArrayBufferView tmp3 = _pixels;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	Dynamic tmp4 = _system->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("image_info_from_pixels","\xb5","\xe8","\xe3","\x8a"), hx::paccDynamic )(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(141)
	Dynamic info = tmp4;		HX_STACK_VAR(info,"info");
	HX_STACK_LINE(143)
	::snow::_system::assets::AssetImage tmp5 = ::snow::_system::assets::AssetImage_obj::__new(_system,_id,info);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(143)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AssetImage_obj,load_from_pixels,return )

::snow::api::Promise AssetImage_obj::provider( ::snow::Snow _app,::String _path){
	HX_STACK_FRAME("snow.system.assets.AssetImage","provider",0x260dd19d,"snow.system.assets.AssetImage.provider","snow/system/assets/Asset.hx",149,0xb13d5c26)
	HX_STACK_ARG(_app,"_app")
	HX_STACK_ARG(_path,"_path")
	HX_STACK_LINE(151)
	::snow::core::native::assets::Assets tmp = _app->assets->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	::snow::api::Promise tmp2 = tmp->image_load_info(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetImage_obj,provider,return )

::snow::api::Promise AssetImage_obj::processor( ::snow::Snow _app,::String _id,::snow::api::buffers::ArrayBufferView _data){
	HX_STACK_FRAME("snow.system.assets.AssetImage","processor",0x499c3b66,"snow.system.assets.AssetImage.processor","snow/system/assets/Asset.hx",156,0xb13d5c26)
	HX_STACK_ARG(_app,"_app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_LINE(158)
	bool tmp = (_data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	if ((tmp)){
		HX_STACK_LINE(158)
		::snow::types::Error tmp1 = ::snow::types::Error_obj::error(HX_HCSTRING("AssetImage processor: data was null","\x71","\x8b","\x7d","\xf6"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		::snow::api::Promise tmp2 = ::snow::api::Promise_obj::reject(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		return tmp2;
	}
	HX_STACK_LINE(160)
	::snow::core::native::assets::Assets tmp1 = _app->assets->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	::String tmp2 = _id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	::snow::api::buffers::ArrayBufferView tmp3 = _data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	::snow::api::Promise tmp4 = tmp1->image_info_from_bytes(tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(160)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetImage_obj,processor,return )


AssetImage_obj::AssetImage_obj()
{
}

void AssetImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetImage);
	HX_MARK_MEMBER_NAME(image,"image");
	::snow::_system::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	::snow::_system::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AssetImage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_image") ) { return set_image_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"reload_from_bytes") ) { return reload_from_bytes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"reload_from_pixels") ) { return reload_from_pixels_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetImage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"provider") ) { outValue = provider_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"processor") ) { outValue = processor_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"load_from_bytes") ) { outValue = load_from_bytes_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"load_from_pixels") ) { outValue = load_from_pixels_dyn(); return true;  }
	}
	return false;
}

Dynamic AssetImage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { if (inCallProp == hx::paccAlways) return set_image(inValue);image=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AssetImage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AssetImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AssetImage_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reload_from_bytes","\xfc","\x56","\x51","\xe1"),
	HX_HCSTRING("reload_from_pixels","\x7c","\x5f","\x15","\xab"),
	HX_HCSTRING("set_image","\xbe","\x67","\x63","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetImage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetImage_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetImage_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("load_from_bytes","\x4f","\x99","\xbd","\xfa"),
	HX_HCSTRING("load_from_pixels","\xc9","\x25","\x63","\xd0"),
	HX_HCSTRING("provider","\x31","\xf1","\x39","\x23"),
	HX_HCSTRING("processor","\x52","\xbd","\x0b","\xd3"),
	::String(null()) };

void AssetImage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.assets.AssetImage","\x82","\x3d","\x2e","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetImage_obj::__GetStatic;
	__mClass->mSetStaticField = &AssetImage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetImage_obj >;
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
