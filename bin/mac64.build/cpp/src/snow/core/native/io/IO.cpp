#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
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
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_File
#include <snow/api/File.h>
#endif
#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_system_io_IO
#include <snow/system/io/IO.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace snow{
namespace core{
namespace native{
namespace io{

Void IO_obj::__construct(::snow::_system::io::IO _system)
{
HX_STACK_FRAME("snow.core.native.io.IO","new",0xa08f838d,"snow.core.native.io.IO.new","snow/core/native/io/IO.hx",22,0x990c4183)
HX_STACK_THIS(this)
HX_STACK_ARG(_system,"_system")
{
	HX_STACK_LINE(22)
	this->_system = _system;
}
;
	return null();
}

//IO_obj::~IO_obj() { }

Dynamic IO_obj::__CreateEmpty() { return  new IO_obj; }
hx::ObjectPtr< IO_obj > IO_obj::__new(::snow::_system::io::IO _system)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(_system);
	return _result_;}

Dynamic IO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *IO_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::snow::modules::interfaces::IO_obj)) return operator ::snow::modules::interfaces::IO_obj *();
	return super::__ToInterface(inType);
}

IO_obj::operator ::snow::modules::interfaces::IO_obj *()
	{ return new ::snow::modules::interfaces::IO_delegate_< IO_obj >(this); }
::String IO_obj::app_path( ){
	HX_STACK_FRAME("snow.core.native.io.IO","app_path",0x2c6746f6,"snow.core.native.io.IO.app_path","snow/core/native/io/IO.hx",27,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	::String tmp = ::snow::core::native::io::IO_obj::snow_app_path();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,app_path,return )

::String IO_obj::app_path_prefs( ){
	HX_STACK_FRAME("snow.core.native.io.IO","app_path_prefs",0x8c2f72e7,"snow.core.native.io.IO.app_path_prefs","snow/core/native/io/IO.hx",35,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::snow::_system::io::IO tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Dynamic tmp1 = tmp->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("snow_config","\x3e","\xac","\x52","\xc7"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	Array< ::String > _parts = tmp1->__Field(HX_HCSTRING("app_package","\xa8","\x8a","\xe2","\xb9"), hx::paccDynamic )->__Field(HX_HCSTRING("split","\xda","\xea","\x6e","\x81"), hx::paccDynamic )(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(_parts,"_parts");
	HX_STACK_LINE(38)
	::String tmp2 = _parts->pop();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	::String _appname = tmp2;		HX_STACK_VAR(_appname,"_appname");
	HX_STACK_LINE(39)
	::String tmp3 = _parts->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	::String _org = tmp3;		HX_STACK_VAR(_org,"_org");
	HX_STACK_LINE(41)
	::String tmp4 = _org;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	::String tmp5 = _appname;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	::String tmp6 = ::snow::core::native::io::IO_obj::snow_pref_path(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,app_path_prefs,return )

Void IO_obj::watch_add( ::String _path){
{
		HX_STACK_FRAME("snow.core.native.io.IO","watch_add",0x17eef3de,"snow.core.native.io.IO.watch_add","snow/core/native/io/IO.hx",53,0x990c4183)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_path,"_path")
		HX_STACK_LINE(55)
		bool tmp = (_path != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp)){
			HX_STACK_LINE(55)
			tmp1 = (_path.length > (int)0);
		}
		else{
			HX_STACK_LINE(55)
			tmp1 = false;
		}
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(56)
			::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			::String tmp3 = ::snow::core::native::io::IO_obj::path_resolve(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			::snow::core::native::io::IO_obj::snow_io_add_watch(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,watch_add,(void))

Void IO_obj::watch_remove( ::String _path){
{
		HX_STACK_FRAME("snow.core.native.io.IO","watch_remove",0xa8278ea7,"snow.core.native.io.IO.watch_remove","snow/core/native/io/IO.hx",63,0x990c4183)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_path,"_path")
		HX_STACK_LINE(65)
		bool tmp = (_path != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		if ((tmp)){
			HX_STACK_LINE(65)
			tmp1 = (_path.length > (int)0);
		}
		else{
			HX_STACK_LINE(65)
			tmp1 = false;
		}
		HX_STACK_LINE(65)
		if ((tmp1)){
			HX_STACK_LINE(66)
			::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			::String tmp3 = ::snow::core::native::io::IO_obj::path_resolve(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::snow::core::native::io::IO_obj::snow_io_remove_watch(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,watch_remove,(void))

::String IO_obj::dialog_open( ::String __o__title,cpp::ArrayBase _filters){
::String _title = __o__title.Default(HX_HCSTRING("Select file","\x00","\x8a","\xfe","\x5a"));
	HX_STACK_FRAME("snow.core.native.io.IO","dialog_open",0x2b99ee0e,"snow.core.native.io.IO.dialog_open","snow/core/native/io/IO.hx",76,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
	HX_STACK_ARG(_filters,"_filters")
{
		HX_STACK_LINE(79)
		bool tmp = (_filters == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		if ((tmp)){
			HX_STACK_LINE(80)
			_filters = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(83)
		::String tmp1 = _title;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		::String tmp2 = ::snow::core::native::io::IO_obj::snow_io_dialog_open(tmp1,_filters);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,dialog_open,return )

::String IO_obj::dialog_save( ::String __o__title,Dynamic _filter){
::String _title = __o__title.Default(HX_HCSTRING("Save file","\x1f","\xd6","\xe0","\x4d"));
	HX_STACK_FRAME("snow.core.native.io.IO","dialog_save",0x2e337581,"snow.core.native.io.IO.dialog_save","snow/core/native/io/IO.hx",90,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
	HX_STACK_ARG(_filter,"_filter")
{
		HX_STACK_LINE(95)
		cpp::ArrayBase _filters = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_filters,"_filters");
		HX_STACK_LINE(97)
		bool tmp = (_filter != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		if ((tmp)){
			HX_STACK_LINE(98)
			Dynamic tmp1 = _filter;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			_filters->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(101)
		::String tmp1 = _title;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		::String tmp2 = ::snow::core::native::io::IO_obj::snow_io_dialog_save(tmp1,_filters);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,dialog_save,return )

::String IO_obj::dialog_folder( ::String __o__title){
::String _title = __o__title.Default(HX_HCSTRING("Select folder","\x32","\x1b","\x9c","\x73"));
	HX_STACK_FRAME("snow.core.native.io.IO","dialog_folder",0x907879f2,"snow.core.native.io.IO.dialog_folder","snow/core/native/io/IO.hx",108,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_title,"_title")
{
		HX_STACK_LINE(110)
		::String tmp = _title;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		::String tmp1 = ::snow::core::native::io::IO_obj::snow_io_dialog_folder(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,dialog_folder,return )

::String IO_obj::string_save_path( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.core.native.io.IO","string_save_path",0xb8b4e1ac,"snow.core.native.io.IO.string_save_path","snow/core/native/io/IO.hx",124,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(126)
		::String tmp = this->app_path_prefs();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		::String _pref_path = tmp;		HX_STACK_VAR(_pref_path,"_pref_path");
		HX_STACK_LINE(127)
		::String tmp1 = _pref_path;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		::snow::_system::io::IO tmp2 = this->_system;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		::String tmp3 = tmp2->__Field(HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		::String tmp5 = (tmp4 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		int tmp6 = _slot;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(127)
		::String tmp8 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(tmp1).Add(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		::String _path = tmp8;		HX_STACK_VAR(_path,"_path");
		HX_STACK_LINE(129)
		::String tmp9 = _path;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(129)
		::String tmp10 = ::haxe::io::Path_obj::normalize(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_save_path,return )

Void IO_obj::url_open( ::String _url){
{
		HX_STACK_FRAME("snow.core.native.io.IO","url_open",0x5d77cb8d,"snow.core.native.io.IO.url_open","snow/core/native/io/IO.hx",136,0x990c4183)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(138)
		bool tmp = (_url != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		if ((tmp)){
			HX_STACK_LINE(138)
			tmp1 = (_url.length > (int)0);
		}
		else{
			HX_STACK_LINE(138)
			tmp1 = false;
		}
		HX_STACK_LINE(138)
		if ((tmp1)){
			HX_STACK_LINE(139)
			::String tmp2 = _url;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			::snow::core::native::io::IO_obj::snow_io_url_open(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,url_open,(void))

::snow::api::Promise IO_obj::data_load( ::String _path,Dynamic _options){
	HX_STACK_FRAME("snow.core.native.io.IO","data_load",0x7d549a88,"snow.core.native.io.IO.data_load","snow/core/native/io/IO.hx",148,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(148)
	::snow::core::native::io::IO _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,_options,::snow::core::native::io::IO,_g,::String,_path)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/core/native/io/IO.hx",150,0x990c4183)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(152)
			::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(152)
			Dynamic tmp1 = _options;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			::snow::api::buffers::ArrayBufferView tmp2 = _g->_data_load(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			::snow::api::buffers::ArrayBufferView _dest = tmp2;		HX_STACK_VAR(_dest,"_dest");
			HX_STACK_LINE(154)
			bool tmp3 = (_dest == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(154)
			if ((tmp3)){
				HX_STACK_LINE(155)
				::String tmp4 = (HX_HCSTRING("data_load file cannot be opened ","\x38","\x25","\x32","\xa2") + _path);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(155)
				::snow::types::Error tmp5 = ::snow::types::Error_obj::error(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(155)
				reject(tmp5);
				HX_STACK_LINE(156)
				return null();
			}
			HX_STACK_LINE(159)
			::snow::api::buffers::ArrayBufferView tmp4 = _dest;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			resolve(tmp4);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(150)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_options,_g,_path)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,data_load,return )

bool IO_obj::data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options){
	HX_STACK_FRAME("snow.core.native.io.IO","data_save",0x81ea8b9f,"snow.core.native.io.IO.data_save","snow/core/native/io/IO.hx",168,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(170)
	bool tmp = (_options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	if ((tmp)){
		HX_STACK_LINE(170)
		tmp1 = _options->__Field(HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(170)
		tmp1 = false;
	}
	HX_STACK_LINE(170)
	bool _binary = tmp1;		HX_STACK_VAR(_binary,"_binary");
	HX_STACK_LINE(171)
	::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(171)
	bool tmp3 = _binary;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(171)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(171)
	if ((tmp3)){
		HX_STACK_LINE(171)
		tmp4 = HX_HCSTRING("wb","\x0b","\x68","\x00","\x00");
	}
	else{
		HX_STACK_LINE(171)
		tmp4 = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
	}
	HX_STACK_LINE(171)
	::snow::api::File tmp5 = ::snow::api::File_obj::from_file(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(171)
	::snow::api::File _file = tmp5;		HX_STACK_VAR(_file,"_file");
	HX_STACK_LINE(173)
	bool tmp6 = (_file != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(173)
	if ((tmp6)){
		HX_STACK_LINE(174)
		::snow::api::buffers::ArrayBufferView tmp7 = _data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		int tmp8 = _data->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		int tmp9 = _file->write(tmp7,tmp8,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		int count = tmp9;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(176)
		_file->close();
		HX_STACK_LINE(178)
		bool tmp10 = (count == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(178)
		return tmp10;
	}
	HX_STACK_LINE(181)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,data_save,return )

Void IO_obj::init( ){
{
		HX_STACK_FRAME("snow.core.native.io.IO","init",0xd9bc4f43,"snow.core.native.io.IO.init","snow/core/native/io/IO.hx",187,0x990c4183)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,init,(void))

Void IO_obj::update( ){
{
		HX_STACK_FRAME("snow.core.native.io.IO","update",0xec9a4cfc,"snow.core.native.io.IO.update","snow/core/native/io/IO.hx",188,0x990c4183)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,update,(void))

Void IO_obj::destroy( ){
{
		HX_STACK_FRAME("snow.core.native.io.IO","destroy",0xa11f7aa7,"snow.core.native.io.IO.destroy","snow/core/native/io/IO.hx",189,0x990c4183)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,destroy,(void))

Void IO_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.core.native.io.IO","on_event",0xa64f3b6d,"snow.core.native.io.IO.on_event","snow/core/native/io/IO.hx",190,0x990c4183)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,on_event,(void))

bool IO_obj::string_slot_destroy( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_destroy",0x9973ab14,"snow.core.native.io.IO.string_slot_destroy","snow/core/native/io/IO.hx",194,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(196)
		int tmp = _slot;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		::String tmp1 = this->string_save_path(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		::String _path = tmp1;		HX_STACK_VAR(_path,"_path");
		HX_STACK_LINE(197)
		bool _result = true;		HX_STACK_VAR(_result,"_result");
		HX_STACK_LINE(201)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(202)
			::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			::sys::FileSystem_obj::deleteFile(tmp2);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(204)
					_result = false;
				}
			}
		}
		HX_STACK_LINE(207)
		bool tmp2 = _result;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slot_destroy,return )

bool IO_obj::string_slot_save( hx::Null< int >  __o__slot,::String _contents){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_save",0x0c1f98e3,"snow.core.native.io.IO.string_slot_save","snow/core/native/io/IO.hx",212,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
	HX_STACK_ARG(_contents,"_contents")
{
		HX_STACK_LINE(214)
		int tmp = _slot;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(214)
		::String tmp1 = this->string_save_path(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		::String _path = tmp1;		HX_STACK_VAR(_path,"_path");
		HX_STACK_LINE(215)
		::snow::api::buffers::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::String tmp3 = _contents;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(215)
			::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::ofString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			::haxe::io::Bytes bytes = tmp4;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(215)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(215)
				if ((tmp5)){
					HX_STACK_LINE(215)
					::snow::api::buffers::ArrayBufferView tmp6 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(215)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(215)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(215)
					if ((tmp6)){
						HX_STACK_LINE(215)
						::snow::api::buffers::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::snow::api::buffers::ArrayBufferView tmp8 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(215)
							::snow::api::buffers::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(215)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(215)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(215)
							_this->length = tmp9;
							HX_STACK_LINE(215)
							int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(215)
							_this->byteLength = tmp10;
							HX_STACK_LINE(215)
							::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(215)
								int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(215)
								::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(215)
								this2 = tmp13;
								HX_STACK_LINE(215)
								tmp11 = this2;
							}
							HX_STACK_LINE(215)
							_this->buffer = tmp11;
							HX_STACK_LINE(215)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(215)
							tmp7 = _this;
						}
						HX_STACK_LINE(215)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(215)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(215)
						if ((tmp7)){
							HX_STACK_LINE(215)
							::snow::api::buffers::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								::snow::api::buffers::ArrayBufferView tmp9 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(215)
								::snow::api::buffers::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(215)
								::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(215)
								::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(215)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(215)
								int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(215)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(215)
								int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(215)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(215)
								int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(215)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(215)
								int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(215)
								int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(215)
								bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(215)
								if ((tmp16)){
									HX_STACK_LINE(215)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(215)
									int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(215)
									int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(215)
									::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(215)
									{
										HX_STACK_LINE(215)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(215)
										int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(215)
										::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(215)
										this2 = tmp20;
										HX_STACK_LINE(215)
										tmp18 = this2;
									}
									HX_STACK_LINE(215)
									_this->buffer = tmp18;
									HX_STACK_LINE(215)
									::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(215)
									int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(215)
									int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(215)
									_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
								}
								else{
									HX_STACK_LINE(215)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(215)
								int tmp17 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(215)
								_this->byteLength = tmp17;
								HX_STACK_LINE(215)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(215)
								_this->length = srcLength;
								HX_STACK_LINE(215)
								tmp8 = _this;
							}
							HX_STACK_LINE(215)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(215)
							bool tmp8 = (bytes != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(215)
							if ((tmp8)){
								HX_STACK_LINE(215)
								::snow::api::buffers::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(215)
									::snow::api::buffers::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(215)
									bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(215)
									if ((tmp11)){
										HX_STACK_LINE(215)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(215)
									int tmp12 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(215)
									bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(215)
									if ((tmp13)){
										HX_STACK_LINE(215)
										HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
									}
									HX_STACK_LINE(215)
									int bufferByteLength = bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(215)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(215)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(215)
									bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(215)
									if ((tmp14)){
										HX_STACK_LINE(215)
										int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(215)
										newByteLength = tmp15;
										HX_STACK_LINE(215)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(215)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(215)
										if ((tmp17)){
											HX_STACK_LINE(215)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(215)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(215)
										if ((tmp18)){
											HX_STACK_LINE(215)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(215)
										int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(215)
										newByteLength = tmp15;
										HX_STACK_LINE(215)
										int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(215)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(215)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(215)
										if ((tmp17)){
											HX_STACK_LINE(215)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(215)
									_this->buffer = bytes;
									HX_STACK_LINE(215)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(215)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(215)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(215)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(215)
									_this->length = tmp16;
									HX_STACK_LINE(215)
									tmp9 = _this;
								}
								HX_STACK_LINE(215)
								this1 = tmp9;
							}
							else{
								HX_STACK_LINE(215)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(215)
				tmp2 = this1;
			}
		}
		HX_STACK_LINE(215)
		::snow::api::buffers::ArrayBufferView _data = tmp2;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(217)
		::String tmp3 = _path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		::snow::api::buffers::ArrayBufferView tmp4 = _data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		bool tmp5 = this->data_save(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,string_slot_save,return )

::String IO_obj::string_slot_load( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_load",0x0789a7cc,"snow.core.native.io.IO.string_slot_load","snow/core/native/io/IO.hx",223,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(225)
		int tmp = _slot;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		::String tmp1 = this->string_save_path(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		::snow::api::buffers::ArrayBufferView tmp2 = this->_data_load(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		::snow::api::buffers::ArrayBufferView _data = tmp2;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(227)
		bool tmp3 = (_data == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		if ((tmp3)){
			HX_STACK_LINE(228)
			return null();
		}
		HX_STACK_LINE(231)
		::haxe::io::Bytes tmp4 = _data->buffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		::String tmp5 = tmp4->toString();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slot_load,return )

::String IO_obj::string_slot_encode( ::String _string){
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_encode",0xdc91353c,"snow.core.native.io.IO.string_slot_encode","snow/core/native/io/IO.hx",235,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_LINE(236)
	{
		HX_STACK_LINE(236)
		bool tmp = (_string == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		if ((tmp)){
			HX_STACK_LINE(236)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(237)
	::String tmp = _string;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	::haxe::io::Bytes _bytes = tmp1;		HX_STACK_VAR(_bytes,"_bytes");
	HX_STACK_LINE(238)
	::haxe::io::Bytes tmp2 = _bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	::String tmp3 = ::haxe::crypto::Base64_obj::encode(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slot_encode,return )

::String IO_obj::string_slot_decode( ::String _string){
	HX_STACK_FRAME("snow.core.native.io.IO","string_slot_decode",0x479aa054,"snow.core.native.io.IO.string_slot_decode","snow/core/native/io/IO.hx",241,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		bool tmp = (_string == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		if ((tmp)){
			HX_STACK_LINE(242)
			::snow::api::DebugError tmp1 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(243)
	::String tmp = _string;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	::haxe::io::Bytes tmp1 = ::haxe::crypto::Base64_obj::decode(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	::haxe::io::Bytes _bytes = tmp1;		HX_STACK_VAR(_bytes,"_bytes");
	HX_STACK_LINE(244)
	::String tmp2 = _bytes->toString();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slot_decode,return )

::snow::api::buffers::ArrayBufferView IO_obj::_data_load( ::String _path,Dynamic _options){
	HX_STACK_FRAME("snow.core.native.io.IO","_data_load",0x09fbffcf,"snow.core.native.io.IO._data_load","snow/core/native/io/IO.hx",248,0x990c4183)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(250)
	bool tmp = (_options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	if ((tmp)){
		HX_STACK_LINE(250)
		tmp1 = _options->__Field(HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(250)
		tmp1 = false;
	}
	HX_STACK_LINE(250)
	bool _binary = tmp1;		HX_STACK_VAR(_binary,"_binary");
	HX_STACK_LINE(251)
	::String tmp2 = _path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	bool tmp3 = _binary;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(251)
	if ((tmp3)){
		HX_STACK_LINE(251)
		tmp4 = HX_HCSTRING("rb","\xb0","\x63","\x00","\x00");
	}
	else{
		HX_STACK_LINE(251)
		tmp4 = HX_HCSTRING("r","\x72","\x00","\x00","\x00");
	}
	HX_STACK_LINE(251)
	::snow::api::File tmp5 = ::snow::api::File_obj::from_file(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(251)
	::snow::api::File _file = tmp5;		HX_STACK_VAR(_file,"_file");
	HX_STACK_LINE(253)
	bool tmp6 = (_file == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(253)
	if ((tmp6)){
		HX_STACK_LINE(253)
		return null();
	}
	HX_STACK_LINE(256)
	_file->seek((int)0,(int)2);
	HX_STACK_LINE(258)
	Dynamic tmp7 = _file->tell();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(258)
	Dynamic size = tmp7;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(261)
	_file->seek((int)0,(int)0);
	HX_STACK_LINE(264)
	::snow::api::buffers::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(264)
	{
		HX_STACK_LINE(264)
		::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(264)
		bool tmp9 = (size != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(264)
		if ((tmp9)){
			HX_STACK_LINE(264)
			::snow::api::buffers::ArrayBufferView tmp10 = ::snow::api::buffers::ArrayBufferView_obj::__new(size,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			this1 = tmp10;
		}
		else{
			HX_STACK_LINE(264)
			bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			if ((tmp10)){
				HX_STACK_LINE(264)
				::snow::api::buffers::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					::snow::api::buffers::ArrayBufferView tmp12 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(264)
					::snow::api::buffers::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(264)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(264)
					int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(264)
					_this->length = tmp13;
					HX_STACK_LINE(264)
					int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(264)
					_this->byteLength = tmp14;
					HX_STACK_LINE(264)
					::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(264)
						int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(264)
						::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(264)
						this2 = tmp17;
						HX_STACK_LINE(264)
						tmp15 = this2;
					}
					HX_STACK_LINE(264)
					_this->buffer = tmp15;
					HX_STACK_LINE(264)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(264)
					tmp11 = _this;
				}
				HX_STACK_LINE(264)
				this1 = tmp11;
			}
			else{
				HX_STACK_LINE(264)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(264)
				if ((tmp11)){
					HX_STACK_LINE(264)
					::snow::api::buffers::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::snow::api::buffers::ArrayBufferView tmp13 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(264)
						::snow::api::buffers::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(264)
						::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(264)
						::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(264)
						int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(264)
						int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(264)
						int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(264)
						int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(264)
						int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(264)
						int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(264)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(264)
						int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(264)
						int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(264)
						bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(264)
						if ((tmp20)){
							HX_STACK_LINE(264)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(264)
							int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(264)
							int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(264)
							::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(264)
							{
								HX_STACK_LINE(264)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(264)
								int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(264)
								::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(264)
								this2 = tmp24;
								HX_STACK_LINE(264)
								tmp22 = this2;
							}
							HX_STACK_LINE(264)
							_this->buffer = tmp22;
							HX_STACK_LINE(264)
							::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(264)
							int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(264)
							int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(264)
							_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
						}
						else{
							HX_STACK_LINE(264)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(264)
						int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(264)
						_this->byteLength = tmp21;
						HX_STACK_LINE(264)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(264)
						_this->length = srcLength;
						HX_STACK_LINE(264)
						tmp12 = _this;
					}
					HX_STACK_LINE(264)
					this1 = tmp12;
				}
				else{
					HX_STACK_LINE(264)
					bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(264)
					if ((tmp12)){
						HX_STACK_LINE(264)
						::snow::api::buffers::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(264)
							::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(264)
							::snow::api::buffers::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(264)
							bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(264)
							if ((tmp15)){
								HX_STACK_LINE(264)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(264)
							int tmp16 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(264)
							bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(264)
							if ((tmp17)){
								HX_STACK_LINE(264)
								HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
							}
							HX_STACK_LINE(264)
							int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(264)
							int bufferByteLength = tmp18;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(264)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(264)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(264)
							bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(264)
							if ((tmp19)){
								HX_STACK_LINE(264)
								int tmp20 = bufferByteLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(264)
								newByteLength = tmp20;
								HX_STACK_LINE(264)
								int tmp21 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(264)
								bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(264)
								if ((tmp22)){
									HX_STACK_LINE(264)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
								HX_STACK_LINE(264)
								bool tmp23 = (newByteLength < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(264)
								if ((tmp23)){
									HX_STACK_LINE(264)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(264)
								int tmp20 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(264)
								newByteLength = tmp20;
								HX_STACK_LINE(264)
								int tmp21 = newByteLength;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(264)
								int newRange = tmp21;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(264)
								bool tmp22 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(264)
								if ((tmp22)){
									HX_STACK_LINE(264)
									HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(264)
							_this->buffer = null();
							HX_STACK_LINE(264)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(264)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(264)
							Float tmp20 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(264)
							int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(264)
							_this->length = tmp21;
							HX_STACK_LINE(264)
							tmp13 = _this;
						}
						HX_STACK_LINE(264)
						this1 = tmp13;
					}
					else{
						HX_STACK_LINE(264)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
					}
				}
			}
		}
		HX_STACK_LINE(264)
		tmp8 = this1;
	}
	HX_STACK_LINE(264)
	::snow::api::buffers::ArrayBufferView _dest = tmp8;		HX_STACK_VAR(_dest,"_dest");
	HX_STACK_LINE(265)
	::snow::api::buffers::ArrayBufferView tmp9 = _dest;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(265)
	int tmp10 = _dest->length;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(265)
	Dynamic tmp11 = _file->read(tmp9,tmp10,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(265)
	Dynamic _read = tmp11;		HX_STACK_VAR(_read,"_read");
	HX_STACK_LINE(268)
	_file->close();
	HX_STACK_LINE(270)
	::snow::api::buffers::ArrayBufferView tmp12 = _dest;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(270)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,_data_load,return )

bool IO_obj::isAbsolute( ::String path){
	HX_STACK_FRAME("snow.core.native.io.IO","isAbsolute",0x3f139cf4,"snow.core.native.io.IO.isAbsolute","snow/core/native/io/IO.hx",276,0x990c4183)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(277)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	bool tmp1 = ::StringTools_obj::startsWith(tmp,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	if ((tmp1)){
		HX_STACK_LINE(277)
		return true;
	}
	HX_STACK_LINE(278)
	::String tmp2 = path.charAt((int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	bool tmp3 = (tmp2 == HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	if ((tmp3)){
		HX_STACK_LINE(278)
		return true;
	}
	HX_STACK_LINE(279)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IO_obj,isAbsolute,return )

::String IO_obj::path_resolve( ::String _path){
	HX_STACK_FRAME("snow.core.native.io.IO","path_resolve",0xec3cfe45,"snow.core.native.io.IO.path_resolve","snow/core/native/io/IO.hx",283,0x990c4183)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_LINE(285)
	::String tmp = _path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	bool tmp1 = ::snow::core::native::io::IO_obj::isAbsolute(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	if ((tmp2)){
		HX_STACK_LINE(286)
		::String tmp3 = _path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		::String tmp4 = ::sys::FileSystem_obj::fullPath(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(286)
		_path = tmp4;
	}
	HX_STACK_LINE(289)
	::String tmp3 = _path;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	::String tmp4 = ::haxe::io::Path_obj::normalize(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(289)
	_path = tmp4;
	HX_STACK_LINE(290)
	::String tmp5 = _path;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(290)
	::String tmp6 = ::haxe::io::Path_obj::removeTrailingSlashes(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(290)
	_path = tmp6;
	HX_STACK_LINE(292)
	::String tmp7 = _path;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(292)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IO_obj,path_resolve,return )

Dynamic IO_obj::snow_io_url_open;

Dynamic IO_obj::snow_app_path;

Dynamic IO_obj::snow_pref_path;

Dynamic IO_obj::snow_io_add_watch;

Dynamic IO_obj::snow_io_remove_watch;

Dynamic IO_obj::snow_io_dialog_open;

Dynamic IO_obj::snow_io_dialog_save;

Dynamic IO_obj::snow_io_dialog_folder;


IO_obj::IO_obj()
{
}

void IO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IO);
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_END_CLASS();
}

void IO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
}

Dynamic IO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"app_path") ) { return app_path_dyn(); }
		if (HX_FIELD_EQ(inName,"url_open") ) { return url_open_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"watch_add") ) { return watch_add_dyn(); }
		if (HX_FIELD_EQ(inName,"data_load") ) { return data_load_dyn(); }
		if (HX_FIELD_EQ(inName,"data_save") ) { return data_save_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_data_load") ) { return _data_load_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dialog_open") ) { return dialog_open_dyn(); }
		if (HX_FIELD_EQ(inName,"dialog_save") ) { return dialog_save_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"watch_remove") ) { return watch_remove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialog_folder") ) { return dialog_folder_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"app_path_prefs") ) { return app_path_prefs_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"string_save_path") ) { return string_save_path_dyn(); }
		if (HX_FIELD_EQ(inName,"string_slot_save") ) { return string_slot_save_dyn(); }
		if (HX_FIELD_EQ(inName,"string_slot_load") ) { return string_slot_load_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"string_slot_encode") ) { return string_slot_encode_dyn(); }
		if (HX_FIELD_EQ(inName,"string_slot_decode") ) { return string_slot_decode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"string_slot_destroy") ) { return string_slot_destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool IO_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"isAbsolute") ) { outValue = isAbsolute_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"path_resolve") ) { outValue = path_resolve_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"snow_app_path") ) { outValue = snow_app_path; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snow_pref_path") ) { outValue = snow_pref_path; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"snow_io_url_open") ) { outValue = snow_io_url_open; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_io_add_watch") ) { outValue = snow_io_add_watch; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"snow_io_dialog_open") ) { outValue = snow_io_dialog_open; return true;  }
		if (HX_FIELD_EQ(inName,"snow_io_dialog_save") ) { outValue = snow_io_dialog_save; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_io_remove_watch") ) { outValue = snow_io_remove_watch; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_io_dialog_folder") ) { outValue = snow_io_dialog_folder; return true;  }
	}
	return false;
}

Dynamic IO_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::snow::_system::io::IO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool IO_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"snow_app_path") ) { snow_app_path=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snow_pref_path") ) { snow_pref_path=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"snow_io_url_open") ) { snow_io_url_open=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"snow_io_add_watch") ) { snow_io_add_watch=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"snow_io_dialog_open") ) { snow_io_dialog_open=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"snow_io_dialog_save") ) { snow_io_dialog_save=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"snow_io_remove_watch") ) { snow_io_remove_watch=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"snow_io_dialog_folder") ) { snow_io_dialog_folder=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void IO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::_system::io::IO*/ ,(int)offsetof(IO_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &IO_obj::snow_io_url_open,HX_HCSTRING("snow_io_url_open","\x97","\x59","\x73","\x11")},
	{hx::fsObject /*Dynamic*/ ,(void *) &IO_obj::snow_app_path,HX_HCSTRING("snow_app_path","\xbf","\x49","\x3a","\xc3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &IO_obj::snow_pref_path,HX_HCSTRING("snow_pref_path","\xc5","\xab","\x6f","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &IO_obj::snow_io_add_watch,HX_HCSTRING("snow_io_add_watch","\x14","\xac","\x86","\xdc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &IO_obj::snow_io_remove_watch,HX_HCSTRING("snow_io_remove_watch","\x11","\xdf","\xce","\x50")},
	{hx::fsObject /*Dynamic*/ ,(void *) &IO_obj::snow_io_dialog_open,HX_HCSTRING("snow_io_dialog_open","\x44","\x42","\x67","\xc9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &IO_obj::snow_io_dialog_save,HX_HCSTRING("snow_io_dialog_save","\xb7","\xc9","\x00","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &IO_obj::snow_io_dialog_folder,HX_HCSTRING("snow_io_dialog_folder","\xa8","\xc7","\x6b","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("app_path","\x43","\x9d","\xdc","\xa2"),
	HX_HCSTRING("app_path_prefs","\xf4","\x00","\x3e","\x80"),
	HX_HCSTRING("watch_add","\xf1","\x20","\x25","\x48"),
	HX_HCSTRING("watch_remove","\x74","\x8f","\xda","\xc8"),
	HX_HCSTRING("dialog_open","\xe1","\xc5","\x83","\x77"),
	HX_HCSTRING("dialog_save","\x54","\x4d","\x1d","\x7a"),
	HX_HCSTRING("dialog_folder","\x85","\x2c","\x66","\x0c"),
	HX_HCSTRING("string_save_path","\xf9","\xcc","\x0c","\xb8"),
	HX_HCSTRING("url_open","\xda","\x21","\xed","\xd3"),
	HX_HCSTRING("data_load","\x9b","\xc7","\x8a","\xad"),
	HX_HCSTRING("data_save","\xb2","\xb8","\x20","\xb2"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("string_slot_destroy","\xe7","\x0d","\x86","\x12"),
	HX_HCSTRING("string_slot_save","\x30","\x84","\x77","\x0b"),
	HX_HCSTRING("string_slot_load","\x19","\x93","\xe1","\x06"),
	HX_HCSTRING("string_slot_encode","\xc9","\x4d","\x34","\x52"),
	HX_HCSTRING("string_slot_decode","\xe1","\xb8","\x3d","\xbd"),
	HX_HCSTRING("_data_load","\x5c","\x43","\x2d","\x09"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IO_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IO_obj::snow_io_url_open,"snow_io_url_open");
	HX_MARK_MEMBER_NAME(IO_obj::snow_app_path,"snow_app_path");
	HX_MARK_MEMBER_NAME(IO_obj::snow_pref_path,"snow_pref_path");
	HX_MARK_MEMBER_NAME(IO_obj::snow_io_add_watch,"snow_io_add_watch");
	HX_MARK_MEMBER_NAME(IO_obj::snow_io_remove_watch,"snow_io_remove_watch");
	HX_MARK_MEMBER_NAME(IO_obj::snow_io_dialog_open,"snow_io_dialog_open");
	HX_MARK_MEMBER_NAME(IO_obj::snow_io_dialog_save,"snow_io_dialog_save");
	HX_MARK_MEMBER_NAME(IO_obj::snow_io_dialog_folder,"snow_io_dialog_folder");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IO_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IO_obj::snow_io_url_open,"snow_io_url_open");
	HX_VISIT_MEMBER_NAME(IO_obj::snow_app_path,"snow_app_path");
	HX_VISIT_MEMBER_NAME(IO_obj::snow_pref_path,"snow_pref_path");
	HX_VISIT_MEMBER_NAME(IO_obj::snow_io_add_watch,"snow_io_add_watch");
	HX_VISIT_MEMBER_NAME(IO_obj::snow_io_remove_watch,"snow_io_remove_watch");
	HX_VISIT_MEMBER_NAME(IO_obj::snow_io_dialog_open,"snow_io_dialog_open");
	HX_VISIT_MEMBER_NAME(IO_obj::snow_io_dialog_save,"snow_io_dialog_save");
	HX_VISIT_MEMBER_NAME(IO_obj::snow_io_dialog_folder,"snow_io_dialog_folder");
};

#endif

hx::Class IO_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("isAbsolute","\x81","\xe0","\x44","\x3e"),
	HX_HCSTRING("path_resolve","\x12","\xff","\xef","\x0c"),
	HX_HCSTRING("snow_io_url_open","\x97","\x59","\x73","\x11"),
	HX_HCSTRING("snow_app_path","\xbf","\x49","\x3a","\xc3"),
	HX_HCSTRING("snow_pref_path","\xc5","\xab","\x6f","\x21"),
	HX_HCSTRING("snow_io_add_watch","\x14","\xac","\x86","\xdc"),
	HX_HCSTRING("snow_io_remove_watch","\x11","\xdf","\xce","\x50"),
	HX_HCSTRING("snow_io_dialog_open","\x44","\x42","\x67","\xc9"),
	HX_HCSTRING("snow_io_dialog_save","\xb7","\xc9","\x00","\xcc"),
	HX_HCSTRING("snow_io_dialog_folder","\xa8","\xc7","\x6b","\x3b"),
	::String(null()) };

void IO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.io.IO","\x1b","\xb9","\x31","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IO_obj::__GetStatic;
	__mClass->mSetStaticField = &IO_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IO_obj >;
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

void IO_obj::__boot()
{
	snow_io_url_open= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_io_url_open","\x97","\x59","\x73","\x11"),(int)1);
	snow_app_path= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_app_path","\xbf","\x49","\x3a","\xc3"),(int)0);
	snow_pref_path= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_pref_path","\xc5","\xab","\x6f","\x21"),(int)2);
	snow_io_add_watch= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_io_add_watch","\x14","\xac","\x86","\xdc"),(int)1);
	snow_io_remove_watch= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_io_remove_watch","\x11","\xdf","\xce","\x50"),(int)1);
	snow_io_dialog_open= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_io_dialog_open","\x44","\x42","\x67","\xc9"),(int)2);
	snow_io_dialog_save= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_io_dialog_save","\xb7","\xc9","\x00","\xcc"),(int)2);
	snow_io_dialog_folder= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("snow_io_dialog_folder","\xa8","\xc7","\x6b","\x3b"),(int)1);
}

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace io
