#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace snow{
namespace api{

Void Libs_obj::__construct()
{
	return null();
}

//Libs_obj::~Libs_obj() { }

Dynamic Libs_obj::__CreateEmpty() { return  new Libs_obj; }
hx::ObjectPtr< Libs_obj > Libs_obj::__new()
{  hx::ObjectPtr< Libs_obj > _result_ = new Libs_obj();
	_result_->__construct();
	return _result_;}

Dynamic Libs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Libs_obj > _result_ = new Libs_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap Libs_obj::__moduleNames;

Dynamic Libs_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("snow.api.Libs","tryLoad",0xedb990e0,"snow.api.Libs.tryLoad","snow/api/Libs.hx",8,0x6ded9f4f)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(12)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(15)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		::String tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		Dynamic tmp3 = ::cpp::Lib_obj::load(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		Dynamic result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(22)
		bool tmp4 = (result != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		if ((tmp4)){
			HX_STACK_LINE(24)
			::String tmp5 = (HX_HCSTRING("Got result ","\xaf","\xe9","\x02","\x45") + name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(24)
			::snow::api::Libs_obj::loaderTrace(tmp5);
			HX_STACK_LINE(25)
			::haxe::ds::StringMap tmp6 = ::snow::api::Libs_obj::__moduleNames;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(25)
			::String tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(25)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(25)
			tmp6->set(tmp7,tmp8);
			HX_STACK_LINE(27)
			Dynamic tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(27)
			return tmp9;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(33)
				::String tmp = (HX_HCSTRING("Failed to load : ","\x1e","\xca","\x38","\x9b") + name);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(33)
				::snow::api::Libs_obj::loaderTrace(tmp);
			}
		}
	}
	HX_STACK_LINE(39)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Libs_obj,tryLoad,return )

::String Libs_obj::findHaxeLib( ::String library){
	HX_STACK_FRAME("snow.api.Libs","findHaxeLib",0x5a51b2e5,"snow.api.Libs.findHaxeLib","snow/api/Libs.hx",64,0x6ded9f4f)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(66)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(70)
		::sys::io::Process tmp = ::sys::io::Process_obj::__new(HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"),Array_obj< ::String >::__new().Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")).Add(library));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::sys::io::Process proc = tmp;		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(72)
		bool tmp1 = (proc != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(74)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(76)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(78)
				while((true)){
					HX_STACK_LINE(80)
					::String tmp2 = stream->readLine();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(80)
					::String s = tmp2;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(82)
					::String tmp3 = s.substr((int)0,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(82)
					bool tmp4 = (tmp3 != HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(82)
					if ((tmp4)){
						HX_STACK_LINE(84)
						stream->close();
						HX_STACK_LINE(85)
						proc->close();
						HX_STACK_LINE(86)
						::String tmp5 = (HX_HCSTRING("Found haxelib ","\x1f","\xa6","\x4d","\xc9") + s);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(86)
						::snow::api::Libs_obj::loaderTrace(tmp5);
						HX_STACK_LINE(87)
						::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						return tmp6;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(95)
			stream->close();
			HX_STACK_LINE(96)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(104)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Libs_obj,findHaxeLib,return )

::String Libs_obj::get_system_name( ){
	HX_STACK_FRAME("snow.api.Libs","get_system_name",0x88484b51,"snow.api.Libs.get_system_name","snow/api/Libs.hx",108,0x6ded9f4f)
	HX_STACK_LINE(112)
	Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	Dynamic sys_string = tmp;		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(113)
	::String tmp1 = sys_string().Cast< ::String >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	return tmp1;
	HX_STACK_LINE(123)
	return HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Libs_obj,get_system_name,return )

Dynamic Libs_obj::load( ::String library,::String method,hx::Null< int >  __o_args){
int args = __o_args.Default(0);
	HX_STACK_FRAME("snow.api.Libs","load",0x7bb5e0e7,"snow.api.Libs.load","snow/api/Libs.hx",160,0x6ded9f4f)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
{
		HX_STACK_LINE(173)
		::haxe::ds::StringMap tmp = ::snow::api::Libs_obj::__moduleNames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		if ((tmp1)){
			HX_STACK_LINE(173)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			{
				HX_STACK_LINE(173)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(173)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(173)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(173)
			::snow::api::Libs_obj::__moduleNames = tmp2;
		}
		HX_STACK_LINE(174)
		::haxe::ds::StringMap tmp2 = ::snow::api::Libs_obj::__moduleNames;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		::String tmp3 = library;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		if ((tmp4)){
			HX_STACK_LINE(177)
			::haxe::ds::StringMap tmp5 = ::snow::api::Libs_obj::__moduleNames;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			::String tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			::String tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			::String tmp9 = method;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(177)
			int tmp10 = args;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(177)
			Dynamic tmp11 = ::cpp::Lib_obj::load(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			return tmp11;
		}
		HX_STACK_LINE(184)
		::haxe::ds::StringMap tmp5 = ::snow::api::Libs_obj::__moduleNames;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		::String tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		::String tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		tmp5->set(tmp6,tmp7);
		HX_STACK_LINE(186)
		::String tmp8 = (HX_HCSTRING("./","\x41","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(186)
		::String tmp9 = library;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(186)
		::String tmp10 = method;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(186)
		int tmp11 = args;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(186)
		Dynamic tmp12 = ::snow::api::Libs_obj::tryLoad(tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(186)
		Dynamic result = tmp12;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(188)
		bool tmp13 = (result == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(188)
		if ((tmp13)){
			HX_STACK_LINE(189)
			::String tmp14 = (HX_HCSTRING(".\\","\x6e","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(189)
			::String tmp15 = library;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(189)
			::String tmp16 = method;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(189)
			int tmp17 = args;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(189)
			Dynamic tmp18 = ::snow::api::Libs_obj::tryLoad(tmp14,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(189)
			result = tmp18;
		}
		HX_STACK_LINE(192)
		bool tmp14 = (result == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(192)
		if ((tmp14)){
			HX_STACK_LINE(193)
			::String tmp15 = library;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(193)
			::String tmp16 = library;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(193)
			::String tmp17 = method;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(193)
			int tmp18 = args;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(193)
			Dynamic tmp19 = ::snow::api::Libs_obj::tryLoad(tmp15,tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(193)
			result = tmp19;
		}
		HX_STACK_LINE(196)
		bool tmp15 = (result == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(196)
		if ((tmp15)){
			HX_STACK_LINE(198)
			::String tmp16 = ::snow::api::Libs_obj::get_system_name();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(198)
			::String tmp17 = tmp16.substr((int)7,null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(198)
			::String tmp18 = tmp17.toLowerCase();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(198)
			bool tmp19 = (tmp18 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(198)
			::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(198)
			if ((tmp19)){
				HX_STACK_LINE(198)
				tmp20 = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
			}
			else{
				HX_STACK_LINE(198)
				tmp20 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
			}
			HX_STACK_LINE(198)
			::String slash = tmp20;		HX_STACK_VAR(slash,"slash");
			HX_STACK_LINE(199)
			::String tmp21 = ::snow::api::Libs_obj::findHaxeLib(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(199)
			::String haxelib = tmp21;		HX_STACK_VAR(haxelib,"haxelib");
			HX_STACK_LINE(201)
			bool tmp22 = (haxelib != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(201)
			if ((tmp22)){
				HX_STACK_LINE(202)
				::String tmp23 = (haxelib + slash);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(202)
				::String tmp24 = (tmp23 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(202)
				::String tmp25 = slash;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(202)
				::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(202)
				::String tmp27 = ::snow::api::Libs_obj::get_system_name();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(202)
				::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(202)
				::String tmp29 = slash;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(202)
				::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(202)
				::String tmp31 = library;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(202)
				::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(202)
				::String tmp33 = library;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(202)
				::String tmp34 = method;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(202)
				int tmp35 = args;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(202)
				Dynamic tmp36 = ::snow::api::Libs_obj::tryLoad(tmp32,tmp33,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(202)
				result = tmp36;
				HX_STACK_LINE(203)
				bool tmp37 = (result == null());		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(203)
				if ((tmp37)){
					HX_STACK_LINE(204)
					::String tmp38 = (haxelib + slash);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(204)
					::String tmp39 = (tmp38 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(204)
					::String tmp40 = slash;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(204)
					::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(204)
					::String tmp42 = ::snow::api::Libs_obj::get_system_name();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(204)
					::String tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(204)
					::String tmp44 = (tmp43 + HX_HCSTRING("64","\x3e","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(204)
					::String tmp45 = slash;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(204)
					::String tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(204)
					::String tmp47 = library;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(204)
					::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(204)
					::String tmp49 = library;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(204)
					::String tmp50 = method;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(204)
					int tmp51 = args;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(204)
					Dynamic tmp52 = ::snow::api::Libs_obj::tryLoad(tmp48,tmp49,tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(204)
					result = tmp52;
				}
			}
		}
		HX_STACK_LINE(210)
		Dynamic tmp16 = result;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(210)
		::String tmp17 = ::Std_obj::string(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(210)
		::String tmp18 = (HX_HCSTRING("Result : ","\xe9","\x19","\x2c","\x14") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(210)
		::snow::api::Libs_obj::loaderTrace(tmp18);
		HX_STACK_LINE(218)
		Dynamic tmp19 = result;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(218)
		return tmp19;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Libs_obj,load,return )

Void Libs_obj::loaderTrace( ::String message){
{
		HX_STACK_FRAME("snow.api.Libs","loaderTrace",0xfb3f14d1,"snow.api.Libs.loaderTrace","snow/api/Libs.hx",222,0x6ded9f4f)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(228)
		Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26"),(int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		Dynamic get_env = tmp;		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(229)
		Dynamic tmp1 = get_env(HX_HCSTRING("SNOW_LOAD_DEBUG","\x96","\x4f","\x75","\x60"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		bool debug = tmp2;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(237)
		bool tmp3 = debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		if ((tmp3)){
			HX_STACK_LINE(238)
			::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			::Sys_obj::println(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Libs_obj,loaderTrace,(void))


Libs_obj::Libs_obj()
{
}

bool Libs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tryLoad") ) { outValue = tryLoad_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { outValue = findHaxeLib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { outValue = loaderTrace_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { outValue = __moduleNames; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_system_name") ) { outValue = get_system_name_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Libs_obj::__moduleNames,HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Libs_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Libs_obj::__moduleNames,"__moduleNames");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Libs_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Libs_obj::__moduleNames,"__moduleNames");
};

#endif

hx::Class Libs_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28"),
	HX_HCSTRING("tryLoad","\x01","\xe9","\x75","\x4a"),
	HX_HCSTRING("findHaxeLib","\x86","\x2f","\x53","\x08"),
	HX_HCSTRING("get_system_name","\x72","\x2c","\x3b","\x2e"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loaderTrace","\x72","\x91","\x40","\xa9"),
	::String(null()) };

void Libs_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.Libs","\x4d","\x91","\x1d","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Libs_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Libs_obj >;
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

void Libs_obj::__boot()
{
	__moduleNames= null();
}

} // end namespace snow
} // end namespace api
