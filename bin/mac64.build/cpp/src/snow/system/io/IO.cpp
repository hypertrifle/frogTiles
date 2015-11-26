#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace snow{
namespace _system{
namespace io{

Void IO_obj::__construct(::snow::Snow _app)
{
HX_STACK_FRAME("snow.system.io.IO","new",0x7b9ec76c,"snow.system.io.IO.new","snow/system/io/IO.hx",14,0x9d2af803)
HX_STACK_THIS(this)
HX_STACK_ARG(_app,"_app")
{
	HX_STACK_LINE(25)
	this->string_save_prefix = HX_HCSTRING("slot","\xfe","\xdd","\x55","\x4c");
	HX_STACK_LINE(31)
	this->app = _app;
	HX_STACK_LINE(33)
	::snow::core::native::io::IO tmp = ::snow::core::native::io::IO_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	this->module = tmp;
	HX_STACK_LINE(35)
	::snow::core::native::io::IO tmp1 = this->module;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	tmp1->init();
}
;
	return null();
}

//IO_obj::~IO_obj() { }

Dynamic IO_obj::__CreateEmpty() { return  new IO_obj; }
hx::ObjectPtr< IO_obj > IO_obj::__new(::snow::Snow _app)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(_app);
	return _result_;}

Dynamic IO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void IO_obj::url_open( ::String _url){
{
		HX_STACK_FRAME("snow.system.io.IO","url_open",0x1ecb1f4e,"snow.system.io.IO.url_open","snow/system/io/IO.hx",40,0x9d2af803)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(42)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::String tmp1 = _url;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		tmp->url_open(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,url_open,(void))

::snow::api::Promise IO_obj::data_load( ::String _path,Dynamic _options){
	HX_STACK_FRAME("snow.system.io.IO","data_load",0xe4ea8fa7,"snow.system.io.IO.data_load","snow/system/io/IO.hx",48,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(50)
	::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Dynamic tmp2 = _options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	::snow::api::Promise tmp3 = tmp->data_load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,data_load,return )

bool IO_obj::data_save( ::String _path,::snow::api::buffers::ArrayBufferView _data,Dynamic _options){
	HX_STACK_FRAME("snow.system.io.IO","data_save",0xe98080be,"snow.system.io.IO.data_save","snow/system/io/IO.hx",57,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_ARG(_data,"_data")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(59)
	::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::String tmp1 = _path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	::snow::api::buffers::ArrayBufferView tmp2 = _data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	Dynamic tmp3 = _options;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	bool tmp4 = tmp->data_save(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,data_save,return )

::snow::api::Promise IO_obj::data_flow( ::String _id,Dynamic _processor,Dynamic _provider){
	HX_STACK_FRAME("snow.system.io.IO","data_flow",0xe0f10d6f,"snow.system.io.IO.data_flow","snow/system/io/IO.hx",64,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_processor,"_processor")
	HX_STACK_ARG(_provider,"_provider")
	HX_STACK_LINE(64)
	::snow::_system::io::IO _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(66)
	bool tmp = (_provider == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	if ((tmp)){
		HX_STACK_LINE(66)
		Dynamic tmp1 = this->default_provider_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		_provider = tmp1;
	}

	HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,Dynamic,_processor,::snow::_system::io::IO,_g,::String,_id,Dynamic,_provider)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/system/io/IO.hx",68,0x9d2af803)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(70)
			::snow::Snow tmp1 = _g->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			::String tmp2 = _id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::snow::api::Promise tmp3 = _provider(tmp1,tmp2).Cast< ::snow::api::Promise >();		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_2_1,Dynamic,_processor,::snow::_system::io::IO,_g,Dynamic,reject,Dynamic,resolve,::String,_id)
			int __ArgCount() const { return 1; }
			Void run(Dynamic data){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/system/io/IO.hx",72,0x9d2af803)
				HX_STACK_ARG(data,"data")
				{
					HX_STACK_LINE(73)
					bool tmp4 = (_processor != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(73)
					if ((tmp4)){
						HX_STACK_LINE(74)
						::snow::Snow tmp5 = _g->__Field(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(74)
						::String tmp6 = _id;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(74)
						Dynamic tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(74)
						::snow::api::Promise tmp8 = _processor(tmp5,tmp6,tmp7).Cast< ::snow::api::Promise >();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(74)
						Dynamic tmp9 = resolve;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(74)
						Dynamic tmp10 = reject;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(74)
						tmp8->then(tmp9,tmp10);
					}
					else{
						HX_STACK_LINE(76)
						Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(76)
						resolve(tmp5);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(70)
			::snow::api::Promise tmp4 = tmp3->then( Dynamic(new _Function_2_1(_processor,_g,reject,resolve,_id)),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			Dynamic tmp5 = reject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			tmp4->error(tmp5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(68)
	::snow::api::Promise tmp1 = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_processor,_g,_id,_provider)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,data_flow,return )

::String IO_obj::string_save_path( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.system.io.IO","string_save_path",0xd2135e6d,"snow.system.io.IO.string_save_path","snow/system/io/IO.hx",93,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(95)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		int tmp1 = _slot;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::String tmp2 = tmp->string_save_path(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_save_path,return )

bool IO_obj::string_save( ::String _key,::String _value,hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.system.io.IO","string_save",0x1c1ecbb7,"snow.system.io.IO.string_save","snow/system/io/IO.hx",107,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_value,"_value")
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(109)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			::haxe::ds::IntMap tmp1 = this->string_slots;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(109)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			if ((tmp2)){
				HX_STACK_LINE(109)
				::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(109)
					::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(109)
					::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(109)
					tmp3 = tmp5;
				}
				HX_STACK_LINE(109)
				this->string_slots = tmp3;
			}
			HX_STACK_LINE(109)
			::haxe::ds::IntMap tmp3 = this->string_slots;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			int tmp4 = _slot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			::haxe::ds::StringMap tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			::haxe::ds::StringMap _string_map = tmp5;		HX_STACK_VAR(_string_map,"_string_map");
			HX_STACK_LINE(109)
			bool tmp6 = (_string_map == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			if ((tmp6)){
				HX_STACK_LINE(109)
				::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(109)
					::snow::core::native::io::IO tmp8 = this->module;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(109)
					::snow::core::native::io::IO _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(109)
					int tmp9 = _slot;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(109)
					::String tmp10 = _this->string_save_path(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(109)
					::snow::api::buffers::ArrayBufferView tmp11 = _this->_data_load(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(109)
					::snow::api::buffers::ArrayBufferView _data = tmp11;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(109)
					bool tmp12 = (_data == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(109)
					if ((tmp12)){
						HX_STACK_LINE(109)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(109)
						::haxe::io::Bytes tmp13 = _data->buffer;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(109)
						tmp7 = tmp13->toString();
					}
				}
				HX_STACK_LINE(109)
				::String _string = tmp7;		HX_STACK_VAR(_string,"_string");
				HX_STACK_LINE(109)
				bool tmp8 = (_string == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(109)
				if ((tmp8)){
					HX_STACK_LINE(109)
					::haxe::ds::StringMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						::haxe::ds::StringMap tmp10 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(109)
						::haxe::ds::StringMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(109)
						tmp9 = tmp11;
					}
					HX_STACK_LINE(109)
					_string_map = tmp9;
				}
				else{
					HX_STACK_LINE(109)
					::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						{
							HX_STACK_LINE(109)
							bool tmp10 = (_string == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(109)
							if ((tmp10)){
								HX_STACK_LINE(109)
								::snow::api::DebugError tmp11 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(109)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(109)
						::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(109)
						::haxe::io::Bytes tmp11 = ::haxe::crypto::Base64_obj::decode(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(109)
						::haxe::io::Bytes _bytes = tmp11;		HX_STACK_VAR(_bytes,"_bytes");
						HX_STACK_LINE(109)
						tmp9 = _bytes->toString();
					}
					HX_STACK_LINE(109)
					_string = tmp9;
					HX_STACK_LINE(109)
					::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(109)
					Dynamic tmp11 = ::haxe::Unserializer_obj::run(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(109)
					_string_map = tmp11;
				}
				HX_STACK_LINE(109)
				::haxe::ds::IntMap tmp9 = this->string_slots;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(109)
				int tmp10 = _slot;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(109)
				::haxe::ds::StringMap tmp11 = _string_map;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(109)
				tmp9->set(tmp10,tmp11);
			}
			HX_STACK_LINE(109)
			tmp = _string_map;
		}
		HX_STACK_LINE(109)
		::haxe::ds::StringMap _string_map = tmp;		HX_STACK_VAR(_string_map,"_string_map");
		HX_STACK_LINE(111)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				bool tmp2 = (_key == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(111)
				if ((tmp2)){
					HX_STACK_LINE(111)
					::snow::api::DebugError tmp3 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(111)
					HX_STACK_DO_THROW(tmp3);
				}
			}
			HX_STACK_LINE(111)
			::String tmp2 = _key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			::haxe::io::Bytes _bytes = tmp3;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(111)
			::haxe::io::Bytes tmp4 = _bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			tmp1 = ::haxe::crypto::Base64_obj::encode(tmp4,null());
		}
		HX_STACK_LINE(111)
		::String _encoded_key = tmp1;		HX_STACK_VAR(_encoded_key,"_encoded_key");
		HX_STACK_LINE(114)
		bool tmp2 = (_value == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(118)
			::String tmp3 = _encoded_key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			_string_map->remove(tmp3);
		}
		else{
			HX_STACK_LINE(122)
			::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					bool tmp4 = (_value == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(122)
					if ((tmp4)){
						HX_STACK_LINE(122)
						::snow::api::DebugError tmp5 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(122)
						HX_STACK_DO_THROW(tmp5);
					}
				}
				HX_STACK_LINE(122)
				::String tmp4 = _value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(122)
				::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::ofString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				::haxe::io::Bytes _bytes = tmp5;		HX_STACK_VAR(_bytes,"_bytes");
				HX_STACK_LINE(122)
				::haxe::io::Bytes tmp6 = _bytes;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				tmp3 = ::haxe::crypto::Base64_obj::encode(tmp6,null());
			}
			HX_STACK_LINE(122)
			::String _encoded_value = tmp3;		HX_STACK_VAR(_encoded_value,"_encoded_value");
			HX_STACK_LINE(126)
			::String tmp4 = _encoded_key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			::String tmp5 = _encoded_value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			_string_map->set(tmp4,tmp5);
		}
		HX_STACK_LINE(130)
		::haxe::ds::StringMap tmp3 = _string_map;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		::String tmp4 = ::haxe::Serializer_obj::run(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		::String _contents = tmp4;		HX_STACK_VAR(_contents,"_contents");
		HX_STACK_LINE(131)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(131)
				bool tmp6 = (_contents == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(131)
				if ((tmp6)){
					HX_STACK_LINE(131)
					::snow::api::DebugError tmp7 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(131)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(131)
			::String tmp6 = _contents;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::ofString(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			::haxe::io::Bytes _bytes = tmp7;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(131)
			::haxe::io::Bytes tmp8 = _bytes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			tmp5 = ::haxe::crypto::Base64_obj::encode(tmp8,null());
		}
		HX_STACK_LINE(131)
		_contents = tmp5;
		HX_STACK_LINE(133)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::snow::core::native::io::IO tmp7 = this->module;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			::snow::core::native::io::IO _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(133)
			int tmp8 = _slot;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(133)
			::String tmp9 = _this->string_save_path(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(133)
			::String _path = tmp9;		HX_STACK_VAR(_path,"_path");
			HX_STACK_LINE(133)
			::snow::api::buffers::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::String tmp11 = _contents;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(133)
				::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::ofString(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(133)
				::haxe::io::Bytes bytes = tmp12;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(133)
				{
					HX_STACK_LINE(133)
					::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(133)
					bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(133)
					if ((tmp13)){
						HX_STACK_LINE(133)
						::snow::api::buffers::ArrayBufferView tmp14 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(133)
						this1 = tmp14;
					}
					else{
						HX_STACK_LINE(133)
						bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(133)
						if ((tmp14)){
							HX_STACK_LINE(133)
							::snow::api::buffers::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(133)
							{
								HX_STACK_LINE(133)
								::snow::api::buffers::ArrayBufferView tmp16 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(133)
								::snow::api::buffers::ArrayBufferView _this1 = tmp16;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(133)
								_this1->byteOffset = (int)0;
								HX_STACK_LINE(133)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(133)
								_this1->length = tmp17;
								HX_STACK_LINE(133)
								int tmp18 = (_this1->length * _this1->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(133)
								_this1->byteLength = tmp18;
								HX_STACK_LINE(133)
								::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(133)
								{
									HX_STACK_LINE(133)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(133)
									int tmp20 = _this1->byteLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(133)
									::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(133)
									this2 = tmp21;
									HX_STACK_LINE(133)
									tmp19 = this2;
								}
								HX_STACK_LINE(133)
								_this1->buffer = tmp19;
								HX_STACK_LINE(133)
								_this1->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(133)
								tmp15 = _this1;
							}
							HX_STACK_LINE(133)
							this1 = tmp15;
						}
						else{
							HX_STACK_LINE(133)
							bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(133)
							if ((tmp15)){
								HX_STACK_LINE(133)
								::snow::api::buffers::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(133)
								{
									HX_STACK_LINE(133)
									::snow::api::buffers::ArrayBufferView tmp17 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(133)
									::snow::api::buffers::ArrayBufferView _this1 = tmp17;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(133)
									::haxe::io::Bytes tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(133)
									::haxe::io::Bytes srcData = tmp18;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(133)
									int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(133)
									int srcLength = tmp19;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(133)
									int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(133)
									int srcByteOffset = tmp20;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(133)
									int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(133)
									int srcElementSize = tmp21;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(133)
									int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(133)
									int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(133)
									int tmp23 = _this1->type;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(133)
									bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(133)
									if ((tmp24)){
										HX_STACK_LINE(133)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(133)
										int tmp25 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(133)
										int cloneLength = tmp25;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(133)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(133)
										{
											HX_STACK_LINE(133)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(133)
											int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(133)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(133)
											this2 = tmp28;
											HX_STACK_LINE(133)
											tmp26 = this2;
										}
										HX_STACK_LINE(133)
										_this1->buffer = tmp26;
										HX_STACK_LINE(133)
										::haxe::io::Bytes tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(133)
										int tmp28 = srcByteOffset;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(133)
										int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(133)
										_this1->buffer->blit((int)0,tmp27,tmp28,tmp29);
									}
									else{
										HX_STACK_LINE(133)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(133)
									int tmp25 = (_this1->bytesPerElement * srcLength);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(133)
									_this1->byteLength = tmp25;
									HX_STACK_LINE(133)
									_this1->byteOffset = (int)0;
									HX_STACK_LINE(133)
									_this1->length = srcLength;
									HX_STACK_LINE(133)
									tmp16 = _this1;
								}
								HX_STACK_LINE(133)
								this1 = tmp16;
							}
							else{
								HX_STACK_LINE(133)
								bool tmp16 = (bytes != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(133)
								if ((tmp16)){
									HX_STACK_LINE(133)
									::snow::api::buffers::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(133)
									{
										HX_STACK_LINE(133)
										::snow::api::buffers::ArrayBufferView tmp18 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(133)
										::snow::api::buffers::ArrayBufferView _this1 = tmp18;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(133)
										bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(133)
										if ((tmp19)){
											HX_STACK_LINE(133)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(133)
										int tmp20 = hx::Mod((int)0,_this1->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(133)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(133)
										if ((tmp21)){
											HX_STACK_LINE(133)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(133)
										int bufferByteLength = bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(133)
										int elementSize = _this1->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(133)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(133)
										bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(133)
										if ((tmp22)){
											HX_STACK_LINE(133)
											int tmp23 = bufferByteLength;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(133)
											newByteLength = tmp23;
											HX_STACK_LINE(133)
											int tmp24 = hx::Mod(bufferByteLength,_this1->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(133)
											bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(133)
											if ((tmp25)){
												HX_STACK_LINE(133)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(133)
											bool tmp26 = (newByteLength < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(133)
											if ((tmp26)){
												HX_STACK_LINE(133)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(133)
											int tmp23 = (null() * _this1->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(133)
											newByteLength = tmp23;
											HX_STACK_LINE(133)
											int tmp24 = newByteLength;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(133)
											int newRange = tmp24;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(133)
											bool tmp25 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(133)
											if ((tmp25)){
												HX_STACK_LINE(133)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(133)
										_this1->buffer = bytes;
										HX_STACK_LINE(133)
										_this1->byteOffset = (int)0;
										HX_STACK_LINE(133)
										_this1->byteLength = newByteLength;
										HX_STACK_LINE(133)
										Float tmp23 = (Float(newByteLength) / Float(_this1->bytesPerElement));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(133)
										int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(133)
										_this1->length = tmp24;
										HX_STACK_LINE(133)
										tmp17 = _this1;
									}
									HX_STACK_LINE(133)
									this1 = tmp17;
								}
								else{
									HX_STACK_LINE(133)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
								}
							}
						}
					}
					HX_STACK_LINE(133)
					tmp10 = this1;
				}
			}
			HX_STACK_LINE(133)
			::snow::api::buffers::ArrayBufferView _data = tmp10;		HX_STACK_VAR(_data,"_data");
			HX_STACK_LINE(133)
			::String tmp11 = _path;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(133)
			::snow::api::buffers::ArrayBufferView tmp12 = _data;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(133)
			tmp6 = _this->data_save(tmp11,tmp12,null());
		}
		HX_STACK_LINE(133)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,string_save,return )

::String IO_obj::string_load( ::String _key,hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.system.io.IO","string_load",0x1788daa0,"snow.system.io.IO.string_load","snow/system/io/IO.hx",140,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(142)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			::haxe::ds::IntMap tmp1 = this->string_slots;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(142)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(142)
			if ((tmp2)){
				HX_STACK_LINE(142)
				::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(142)
					::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(142)
					tmp3 = tmp5;
				}
				HX_STACK_LINE(142)
				this->string_slots = tmp3;
			}
			HX_STACK_LINE(142)
			::haxe::ds::IntMap tmp3 = this->string_slots;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			int tmp4 = _slot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			::haxe::ds::StringMap tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			::haxe::ds::StringMap _string_map = tmp5;		HX_STACK_VAR(_string_map,"_string_map");
			HX_STACK_LINE(142)
			bool tmp6 = (_string_map == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			if ((tmp6)){
				HX_STACK_LINE(142)
				::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					::snow::core::native::io::IO tmp8 = this->module;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(142)
					::snow::core::native::io::IO _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(142)
					int tmp9 = _slot;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(142)
					::String tmp10 = _this->string_save_path(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(142)
					::snow::api::buffers::ArrayBufferView tmp11 = _this->_data_load(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(142)
					::snow::api::buffers::ArrayBufferView _data = tmp11;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(142)
					bool tmp12 = (_data == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(142)
					if ((tmp12)){
						HX_STACK_LINE(142)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(142)
						::haxe::io::Bytes tmp13 = _data->buffer;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(142)
						tmp7 = tmp13->toString();
					}
				}
				HX_STACK_LINE(142)
				::String _string = tmp7;		HX_STACK_VAR(_string,"_string");
				HX_STACK_LINE(142)
				bool tmp8 = (_string == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(142)
				if ((tmp8)){
					HX_STACK_LINE(142)
					::haxe::ds::StringMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(142)
					{
						HX_STACK_LINE(142)
						::haxe::ds::StringMap tmp10 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(142)
						::haxe::ds::StringMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(142)
						tmp9 = tmp11;
					}
					HX_STACK_LINE(142)
					_string_map = tmp9;
				}
				else{
					HX_STACK_LINE(142)
					::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(142)
					{
						HX_STACK_LINE(142)
						{
							HX_STACK_LINE(142)
							bool tmp10 = (_string == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(142)
							if ((tmp10)){
								HX_STACK_LINE(142)
								::snow::api::DebugError tmp11 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(142)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(142)
						::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(142)
						::haxe::io::Bytes tmp11 = ::haxe::crypto::Base64_obj::decode(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(142)
						::haxe::io::Bytes _bytes = tmp11;		HX_STACK_VAR(_bytes,"_bytes");
						HX_STACK_LINE(142)
						tmp9 = _bytes->toString();
					}
					HX_STACK_LINE(142)
					_string = tmp9;
					HX_STACK_LINE(142)
					::String tmp10 = _string;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(142)
					Dynamic tmp11 = ::haxe::Unserializer_obj::run(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(142)
					_string_map = tmp11;
				}
				HX_STACK_LINE(142)
				::haxe::ds::IntMap tmp9 = this->string_slots;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(142)
				int tmp10 = _slot;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(142)
				::haxe::ds::StringMap tmp11 = _string_map;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(142)
				tmp9->set(tmp10,tmp11);
			}
			HX_STACK_LINE(142)
			tmp = _string_map;
		}
		HX_STACK_LINE(142)
		::haxe::ds::StringMap _string_map = tmp;		HX_STACK_VAR(_string_map,"_string_map");
		HX_STACK_LINE(144)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				bool tmp2 = (_key == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(144)
				if ((tmp2)){
					HX_STACK_LINE(144)
					::snow::api::DebugError tmp3 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(144)
					HX_STACK_DO_THROW(tmp3);
				}
			}
			HX_STACK_LINE(144)
			::String tmp2 = _key;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			::haxe::io::Bytes _bytes = tmp3;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(144)
			::haxe::io::Bytes tmp4 = _bytes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			tmp1 = ::haxe::crypto::Base64_obj::encode(tmp4,null());
		}
		HX_STACK_LINE(144)
		::String _encoded_key = tmp1;		HX_STACK_VAR(_encoded_key,"_encoded_key");
		HX_STACK_LINE(145)
		::String tmp2 = _encoded_key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		::String tmp3 = _string_map->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		::String _encoded_value = tmp3;		HX_STACK_VAR(_encoded_value,"_encoded_value");
		HX_STACK_LINE(149)
		bool tmp4 = (_encoded_value == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		if ((tmp4)){
			HX_STACK_LINE(150)
			return null();
		}
		HX_STACK_LINE(153)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				bool tmp6 = (_encoded_value == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				if ((tmp6)){
					HX_STACK_LINE(153)
					::snow::api::DebugError tmp7 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(153)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(153)
			::String tmp6 = _encoded_value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			::haxe::io::Bytes tmp7 = ::haxe::crypto::Base64_obj::decode(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			::haxe::io::Bytes _bytes = tmp7;		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(153)
			tmp5 = _bytes->toString();
		}
		HX_STACK_LINE(153)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,string_load,return )

bool IO_obj::string_destroy( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.system.io.IO","string_destroy",0xeba0f4c0,"snow.system.io.IO.string_destroy","snow/system/io/IO.hx",159,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(161)
		::haxe::ds::IntMap tmp = this->string_slots;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		if ((tmp1)){
			HX_STACK_LINE(162)
			::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(162)
				::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(162)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(162)
			this->string_slots = tmp2;
		}
		else{
			HX_STACK_LINE(164)
			::haxe::ds::IntMap tmp2 = this->string_slots;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			int tmp3 = _slot;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			tmp2->remove(tmp3);
		}
		HX_STACK_LINE(167)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			::snow::core::native::io::IO tmp3 = this->module;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
			int tmp4 = _slot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(167)
			::String tmp5 = tmp3->string_save_path(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			::String _path = tmp5;		HX_STACK_VAR(_path,"_path");
			HX_STACK_LINE(167)
			bool _result = true;		HX_STACK_VAR(_result,"_result");
			HX_STACK_LINE(167)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(167)
				::String tmp6 = _path;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(167)
				::sys::FileSystem_obj::deleteFile(tmp6);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(167)
						_result = false;
					}
				}
			}
			HX_STACK_LINE(167)
			tmp2 = _result;
		}
		HX_STACK_LINE(167)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_destroy,return )

::haxe::ds::StringMap IO_obj::string_slots_sync( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("snow.system.io.IO","string_slots_sync",0x2fdc9d5f,"snow.system.io.IO.string_slots_sync","snow/system/io/IO.hx",177,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(180)
		::haxe::ds::IntMap tmp = this->string_slots;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(181)
			::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(181)
				::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(181)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(181)
			this->string_slots = tmp2;
		}
		HX_STACK_LINE(184)
		::haxe::ds::IntMap tmp2 = this->string_slots;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		int tmp3 = _slot;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		::haxe::ds::StringMap tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		::haxe::ds::StringMap _string_map = tmp4;		HX_STACK_VAR(_string_map,"_string_map");
		HX_STACK_LINE(186)
		bool tmp5 = (_string_map == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		if ((tmp5)){
			HX_STACK_LINE(188)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(188)
			{
				HX_STACK_LINE(188)
				::snow::core::native::io::IO tmp7 = this->module;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(188)
				::snow::core::native::io::IO _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(188)
				int tmp8 = _slot;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::String tmp9 = _this->string_save_path(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				::snow::api::buffers::ArrayBufferView tmp10 = _this->_data_load(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(188)
				::snow::api::buffers::ArrayBufferView _data = tmp10;		HX_STACK_VAR(_data,"_data");
				HX_STACK_LINE(188)
				bool tmp11 = (_data == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(188)
				if ((tmp11)){
					HX_STACK_LINE(188)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(188)
					::haxe::io::Bytes tmp12 = _data->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(188)
					tmp6 = tmp12->toString();
				}
			}
			HX_STACK_LINE(188)
			::String _string = tmp6;		HX_STACK_VAR(_string,"_string");
			HX_STACK_LINE(189)
			bool tmp7 = (_string == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(189)
			if ((tmp7)){
				HX_STACK_LINE(190)
				::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(190)
					::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(190)
					tmp8 = tmp10;
				}
				HX_STACK_LINE(190)
				_string_map = tmp8;
			}
			else{
				HX_STACK_LINE(192)
				::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(192)
				{
					HX_STACK_LINE(192)
					{
						HX_STACK_LINE(192)
						bool tmp9 = (_string == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(192)
						if ((tmp9)){
							HX_STACK_LINE(192)
							::snow::api::DebugError tmp10 = ::snow::api::DebugError_obj::null_assertion(HX_HCSTRING("_string was null","\x8e","\xd0","\x63","\x3a"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(192)
							HX_STACK_DO_THROW(tmp10);
						}
					}
					HX_STACK_LINE(192)
					::String tmp9 = _string;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(192)
					::haxe::io::Bytes tmp10 = ::haxe::crypto::Base64_obj::decode(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(192)
					::haxe::io::Bytes _bytes = tmp10;		HX_STACK_VAR(_bytes,"_bytes");
					HX_STACK_LINE(192)
					tmp8 = _bytes->toString();
				}
				HX_STACK_LINE(192)
				_string = tmp8;
				HX_STACK_LINE(193)
				::String tmp9 = _string;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(193)
				Dynamic tmp10 = ::haxe::Unserializer_obj::run(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(193)
				_string_map = tmp10;
			}
			HX_STACK_LINE(196)
			::haxe::ds::IntMap tmp8 = this->string_slots;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(196)
			int tmp9 = _slot;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(196)
			::haxe::ds::StringMap tmp10 = _string_map;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(196)
			tmp8->set(tmp9,tmp10);
		}
		HX_STACK_LINE(200)
		::haxe::ds::StringMap tmp6 = _string_map;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_slots_sync,return )

::snow::api::Promise IO_obj::default_provider( ::snow::Snow _app,::String _id){
	HX_STACK_FRAME("snow.system.io.IO","default_provider",0xa5fc0123,"snow.system.io.IO.default_provider","snow/system/io/IO.hx",207,0x9d2af803)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_app,"_app")
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(207)
	::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	::snow::api::Promise tmp2 = tmp->data_load(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,default_provider,return )

Void IO_obj::on_event( Dynamic _event){
{
		HX_STACK_FRAME("snow.system.io.IO","on_event",0x67a28f2e,"snow.system.io.IO.on_event","snow/system/io/IO.hx",210,0x9d2af803)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(212)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		Dynamic tmp1 = _event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		tmp->on_event(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,on_event,(void))

Void IO_obj::update( ){
{
		HX_STACK_FRAME("snow.system.io.IO","update",0x019d7e7d,"snow.system.io.IO.update","snow/system/io/IO.hx",217,0x9d2af803)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		tmp->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,update,(void))

Void IO_obj::destroy( ){
{
		HX_STACK_FRAME("snow.system.io.IO","destroy",0xeee79a06,"snow.system.io.IO.destroy","snow/system/io/IO.hx",224,0x9d2af803)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		::snow::core::native::io::IO tmp = this->module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		tmp->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,destroy,(void))


IO_obj::IO_obj()
{
}

void IO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IO);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(string_save_prefix,"string_save_prefix");
	HX_MARK_MEMBER_NAME(string_slots,"string_slots");
	HX_MARK_END_CLASS();
}

void IO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(string_save_prefix,"string_save_prefix");
	HX_VISIT_MEMBER_NAME(string_slots,"string_slots");
}

Dynamic IO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { return module; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"url_open") ) { return url_open_dyn(); }
		if (HX_FIELD_EQ(inName,"on_event") ) { return on_event_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"data_load") ) { return data_load_dyn(); }
		if (HX_FIELD_EQ(inName,"data_save") ) { return data_save_dyn(); }
		if (HX_FIELD_EQ(inName,"data_flow") ) { return data_flow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"string_save") ) { return string_save_dyn(); }
		if (HX_FIELD_EQ(inName,"string_load") ) { return string_load_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"string_slots") ) { return string_slots; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"string_destroy") ) { return string_destroy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"string_save_path") ) { return string_save_path_dyn(); }
		if (HX_FIELD_EQ(inName,"default_provider") ) { return default_provider_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"string_slots_sync") ) { return string_slots_sync_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"string_save_prefix") ) { return string_save_prefix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IO_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast< ::snow::core::native::io::IO >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"string_slots") ) { string_slots=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"string_save_prefix") ) { string_save_prefix=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool IO_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void IO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"));
	outFields->push(HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e"));
	outFields->push(HX_HCSTRING("string_slots","\x87","\xc3","\x77","\xdd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(IO_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsObject /*::snow::core::native::io::IO*/ ,(int)offsetof(IO_obj,module),HX_HCSTRING("module","\xac","\x34","\xd3","\xc0")},
	{hx::fsString,(int)offsetof(IO_obj,string_save_prefix),HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(IO_obj,string_slots),HX_HCSTRING("string_slots","\x87","\xc3","\x77","\xdd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"),
	HX_HCSTRING("string_save_prefix","\xe6","\x3d","\x79","\x2e"),
	HX_HCSTRING("url_open","\xda","\x21","\xed","\xd3"),
	HX_HCSTRING("data_load","\x9b","\xc7","\x8a","\xad"),
	HX_HCSTRING("data_save","\xb2","\xb8","\x20","\xb2"),
	HX_HCSTRING("data_flow","\x63","\x45","\x91","\xa9"),
	HX_HCSTRING("string_slots","\x87","\xc3","\x77","\xdd"),
	HX_HCSTRING("string_save_path","\xf9","\xcc","\x0c","\xb8"),
	HX_HCSTRING("string_save","\xab","\xe8","\x33","\x77"),
	HX_HCSTRING("string_load","\x94","\xf7","\x9d","\x72"),
	HX_HCSTRING("string_destroy","\x4c","\x68","\xed","\x0e"),
	HX_HCSTRING("string_slots_sync","\x53","\xe9","\x23","\x84"),
	HX_HCSTRING("default_provider","\xaf","\x6f","\xf5","\x8b"),
	HX_HCSTRING("on_event","\xba","\x91","\xc4","\x1c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#endif

hx::Class IO_obj::__mClass;

void IO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.system.io.IO","\x7a","\xe1","\xfb","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &IO_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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

} // end namespace snow
} // end namespace system
} // end namespace io
