#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
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
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_GeometryUtils
#include <luxe/utils/GeometryUtils.h>
#endif
#ifndef INCLUDED_luxe_utils_Random
#include <luxe/utils/Random.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
namespace luxe{
namespace utils{

Void Utils_obj::__construct(::luxe::Core _luxe)
{
HX_STACK_FRAME("luxe.utils.Utils","new",0x3458be4e,"luxe.utils.Utils.new","luxe/utils/Utils.hx",18,0x2d9d0da4)
HX_STACK_THIS(this)
HX_STACK_ARG(_luxe,"_luxe")
{
	HX_STACK_LINE(21)
	this->core = _luxe;
	HX_STACK_LINE(23)
	::luxe::utils::GeometryUtils tmp = ::luxe::utils::GeometryUtils_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	this->geometry = tmp;
	HX_STACK_LINE(24)
	Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	Float tmp2 = (tmp1 * (int)16777215);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	::luxe::utils::Random tmp3 = ::luxe::utils::Random_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	this->random = tmp3;
	HX_STACK_LINE(26)
	this->_byte_levels = Array_obj< ::String >::__new().Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")).Add(HX_HCSTRING("Kb","\xb7","\x41","\x00","\x00")).Add(HX_HCSTRING("MB","\x55","\x43","\x00","\x00")).Add(HX_HCSTRING("GB","\x1b","\x3e","\x00","\x00")).Add(HX_HCSTRING("TB","\x6e","\x49","\x00","\x00"));
}
;
	return null();
}

//Utils_obj::~Utils_obj() { }

Dynamic Utils_obj::__CreateEmpty() { return  new Utils_obj; }
hx::ObjectPtr< Utils_obj > Utils_obj::__new(::luxe::Core _luxe)
{  hx::ObjectPtr< Utils_obj > _result_ = new Utils_obj();
	_result_->__construct(_luxe);
	return _result_;}

Dynamic Utils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utils_obj > _result_ = new Utils_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Utils_obj::pos_info( Dynamic pos){
	HX_STACK_FRAME("luxe.utils.Utils","pos_info",0x7ca7118b,"luxe.utils.Utils.pos_info","luxe/utils/Utils.hx",31,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(32)
	::String tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + pos->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::String tmp1 = (tmp + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	int tmp2 = pos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	::String tmp4 = (tmp3 + HX_HCSTRING(":(","\xae","\x32","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	::String tmp5 = pos->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	::String tmp7 = (tmp6 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	::String tmp8 = pos->__Field(HX_HCSTRING("methodName","\xcc","\x19","\x0f","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(32)
	::String tmp10 = (tmp9 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(32)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,pos_info,return )

::String Utils_obj::uniqueid( Dynamic val){
	HX_STACK_FRAME("luxe.utils.Utils","uniqueid",0xd69a687e,"luxe.utils.Utils.uniqueid","luxe/utils/Utils.hx",37,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(41)
	bool tmp = (val == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(43)
		int tmp1 = ::Std_obj::random((int)2147483647);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		val = tmp1;
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::String run(int value){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/utils/Utils.hx",47,0x2d9d0da4)
		HX_STACK_ARG(value,"value")
		{
			HX_STACK_LINE(48)
			bool tmp1 = (value > (int)9);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			if ((tmp1)){
				HX_STACK_LINE(49)
				int tmp2 = (value - (int)10);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				int tmp3 = ((int)65 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				int ascii = tmp3;		HX_STACK_VAR(ascii,"ascii");
				HX_STACK_LINE(50)
				bool tmp4 = (ascii > (int)90);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(50)
				if ((tmp4)){
					HX_STACK_LINE(50)
					hx::AddEq(ascii,(int)6);
				}
				HX_STACK_LINE(51)
				int tmp5 = ascii;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				::String tmp6 = ::String::fromCharCode(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				return tmp6;
			}
			else{
				HX_STACK_LINE(52)
				int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				::String tmp4 = tmp3.charAt((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(52)
				return tmp4;
			}
			HX_STACK_LINE(48)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(47)
	Dynamic to_char =  Dynamic(new _Function_1_1());		HX_STACK_VAR(to_char,"to_char");
	HX_STACK_LINE(55)
	int tmp1 = hx::Mod(val,(int)62);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	int r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(56)
	Float tmp3 = (Float(val) / Float((int)62));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	int q = tmp4;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(57)
	bool tmp5 = (q > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	if ((tmp5)){
		HX_STACK_LINE(57)
		int tmp6 = q;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		::String tmp7 = this->uniqueid(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(57)
		int tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		::String tmp9 = to_char(tmp8).Cast< ::String >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		return tmp10;
	}
	else{
		HX_STACK_LINE(58)
		int tmp6 = r;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		::String tmp7 = to_char(tmp6).Cast< ::String >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		return tmp8;
	}
	HX_STACK_LINE(57)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,uniqueid,return )

int Utils_obj::uniquehash( ){
	HX_STACK_FRAME("luxe.utils.Utils","uniquehash",0x7fb8eb31,"luxe.utils.Utils.uniquehash","luxe/utils/Utils.hx",65,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::String tmp = this->uniqueid(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	int tmp1 = this->hash(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,uniquehash,return )

int Utils_obj::hash( ::String string){
	HX_STACK_FRAME("luxe.utils.Utils","hash",0x95537220,"luxe.utils.Utils.hash","luxe/utils/Utils.hx",71,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(string,"string")
	HX_STACK_LINE(72)
	::String tmp = string;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	int tmp1 = this->hashdjb2(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,hash,return )

int Utils_obj::hashdjb2( ::String string){
	HX_STACK_FRAME("luxe.utils.Utils","hashdjb2",0x98311cb6,"luxe.utils.Utils.hashdjb2","luxe/utils/Utils.hx",77,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(string,"string")
	HX_STACK_LINE(80)
	int _hash = (int)5381;		HX_STACK_VAR(_hash,"_hash");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		int _g = string.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(81)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			if ((tmp1)){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(81)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(82)
			int tmp3 = (int(_hash) << int((int)5));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			int tmp4 = _hash;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			Dynamic tmp7 = string.charCodeAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			int tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			_hash = tmp8;
		}
	}
	HX_STACK_LINE(85)
	int tmp = _hash;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,hashdjb2,return )

::String Utils_obj::uniqueid2( ){
	HX_STACK_FRAME("luxe.utils.Utils","uniqueid2",0xf08105f4,"luxe.utils.Utils.uniqueid2","luxe/utils/Utils.hx",90,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	::String tmp5 = ::haxe::crypto::Md5_obj::encode(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,uniqueid2,return )

::String Utils_obj::stacktrace( Dynamic __o__depth){
Dynamic _depth = __o__depth.Default(100);
	HX_STACK_FRAME("luxe.utils.Utils","stacktrace",0x8b198e0f,"luxe.utils.Utils.stacktrace","luxe/utils/Utils.hx",97,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_depth,"_depth")
{
		HX_STACK_LINE(99)
		::String result = HX_HCSTRING("\n","\x0a","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(101)
		Array< ::Dynamic > stack = ::haxe::CallStack_obj::callStack();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(103)
		stack->shift().StaticCast< ::haxe::StackItem >();
		HX_STACK_LINE(104)
		stack->reverse();
		HX_STACK_LINE(106)
		int tmp = stack->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		Dynamic tmp1 = _depth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		int total = tmp3;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			while((true)){
				HX_STACK_LINE(108)
				bool tmp4 = (_g < total);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(108)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(108)
				if ((tmp5)){
					HX_STACK_LINE(108)
					break;
				}
				HX_STACK_LINE(108)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(109)
				::haxe::StackItem tmp7 = stack->__get(i).StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(109)
				::haxe::StackItem stackitem = tmp7;		HX_STACK_VAR(stackitem,"stackitem");
				HX_STACK_LINE(111)
				{
					HX_STACK_LINE(111)
					::haxe::StackItem tmp8 = stack->__get(i).StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(111)
					::haxe::StackItem _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(111)
					switch( (int)(_g1->__Index())){
						case (int)2: {
							HX_STACK_LINE(111)
							int tmp9 = (::haxe::StackItem(_g1))->__Param(2);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(111)
							int line = tmp9;		HX_STACK_VAR(line,"line");
							HX_STACK_LINE(111)
							::String tmp10 = (::haxe::StackItem(_g1))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(111)
							::String file = tmp10;		HX_STACK_VAR(file,"file");
							HX_STACK_LINE(111)
							::haxe::StackItem tmp11 = (::haxe::StackItem(_g1))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(111)
							::haxe::StackItem s = tmp11;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(112)
							{
								HX_STACK_LINE(113)
								bool tmp12 = (s != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(113)
								if ((tmp12)){
									HX_STACK_LINE(113)
									switch( (int)(s->__Index())){
										case (int)3: {
											HX_STACK_LINE(113)
											::String tmp13 = (::haxe::StackItem(s))->__Param(1);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(113)
											::String method = tmp13;		HX_STACK_VAR(method,"method");
											HX_STACK_LINE(113)
											::String tmp14 = (::haxe::StackItem(s))->__Param(0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(113)
											::String classname = tmp14;		HX_STACK_VAR(classname,"classname");
											HX_STACK_LINE(114)
											{
												HX_STACK_LINE(115)
												::String tmp15 = (HX_HCSTRING("   at ","\xad","\xef","\xae","\x4d") + file);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(115)
												::String tmp16 = (tmp15 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(115)
												int tmp17 = line;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(115)
												::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(115)
												::String tmp19 = (tmp18 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(115)
												::String tmp20 = classname;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(115)
												::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(115)
												::String tmp22 = (tmp21 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(115)
												::String tmp23 = method;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(115)
												::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(115)
												hx::AddEq(result,tmp24);
											}
										}
										;break;
										default: {
										}
									}
								}
								else{
								}
							}
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(121)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(121)
				int tmp9 = (total - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(121)
				bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(121)
				if ((tmp10)){
					HX_STACK_LINE(122)
					hx::AddEq(result,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
				}
			}
		}
		HX_STACK_LINE(126)
		::String tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,stacktrace,return )

bool Utils_obj::path_is_relative( ::String _path){
	HX_STACK_FRAME("luxe.utils.Utils","path_is_relative",0x5216f779,"luxe.utils.Utils.path_is_relative","luxe/utils/Utils.hx",131,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_path,"_path")
	HX_STACK_LINE(133)
	::String tmp = _path.charAt((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	bool tmp1 = (tmp != HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(133)
	if ((tmp2)){
		HX_STACK_LINE(134)
		::String tmp4 = _path.charAt((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		tmp3 = (tmp6 != HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(133)
		tmp3 = false;
	}
	HX_STACK_LINE(133)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(133)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(133)
	if ((tmp4)){
		HX_STACK_LINE(135)
		int tmp6 = _path.indexOf(HX_HCSTRING(":\\","\xe2","\x32","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		int tmp9 = (int)-1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(135)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(135)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(135)
		tmp5 = (tmp8 == tmp11);
	}
	else{
		HX_STACK_LINE(133)
		tmp5 = false;
	}
	HX_STACK_LINE(133)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(133)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(133)
	if ((tmp6)){
		HX_STACK_LINE(136)
		int tmp8 = _path.indexOf(HX_HCSTRING(":/","\xb5","\x32","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(136)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(136)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(136)
		int tmp11 = (int)-1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(136)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(136)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(136)
		tmp7 = (tmp10 == tmp13);
	}
	else{
		HX_STACK_LINE(133)
		tmp7 = false;
	}
	HX_STACK_LINE(133)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(133)
	if ((tmp7)){
		HX_STACK_LINE(138)
		int tmp9 = _path.indexOf(HX_HCSTRING("//","\x20","\x29","\x00","\x00"),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(138)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(138)
		int tmp11 = (int)-1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(138)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(138)
		bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(138)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(138)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(138)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(138)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(138)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(138)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(138)
		bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(138)
		if ((tmp20)){
			HX_STACK_LINE(139)
			int tmp21 = _path.indexOf(HX_HCSTRING("//","\x20","\x29","\x00","\x00"),null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(139)
			int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(139)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(139)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(139)
			int tmp25 = _path.indexOf(HX_HCSTRING("#","\x23","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(139)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(139)
			int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(139)
			int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(139)
			bool tmp29 = (tmp24 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(139)
			tmp19 = tmp29;
		}
		else{
			HX_STACK_LINE(138)
			tmp19 = true;
		}
		HX_STACK_LINE(138)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(138)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(138)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(138)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(138)
		if ((tmp24)){
			HX_STACK_LINE(140)
			int tmp25 = _path.indexOf(HX_HCSTRING("//","\x20","\x29","\x00","\x00"),null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(140)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(140)
			int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(140)
			int tmp28 = _path.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(140)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(140)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(140)
			tmp8 = (tmp27 > tmp30);
		}
		else{
			HX_STACK_LINE(138)
			tmp8 = true;
		}
	}
	else{
		HX_STACK_LINE(133)
		tmp8 = false;
	}
	HX_STACK_LINE(133)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,path_is_relative,return )

Array< ::String > Utils_obj::find_assets_sequence( ::String _name,::String __o__ext,::String __o__start){
::String _ext = __o__ext.Default(HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));
::String _start = __o__start.Default(HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
	HX_STACK_FRAME("luxe.utils.Utils","find_assets_sequence",0x9fff7fc9,"luxe.utils.Utils.find_assets_sequence","luxe/utils/Utils.hx",144,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_name,"_name")
	HX_STACK_ARG(_ext,"_ext")
	HX_STACK_ARG(_start,"_start")
{
		HX_STACK_LINE(146)
		Array< ::String > _final = Array_obj< ::String >::__new();		HX_STACK_VAR(_final,"_final");
		HX_STACK_LINE(148)
		::String _sequence_type = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_sequence_type,"_sequence_type");
		HX_STACK_LINE(149)
		::EReg _pattern_regex = null();		HX_STACK_VAR(_pattern_regex,"_pattern_regex");
		HX_STACK_LINE(152)
		::String tmp = (_name + _start);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		::String tmp1 = _ext;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		::String _type0 = tmp2;		HX_STACK_VAR(_type0,"_type0");
		HX_STACK_LINE(153)
		::String tmp3 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + _name);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		::String tmp4 = (tmp3 + HX_HCSTRING(")(\\d\\b)","\x1c","\x4d","\x73","\xe2"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		::EReg tmp5 = ::EReg_obj::__new(tmp4,HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		::EReg _type0_re = tmp5;		HX_STACK_VAR(_type0_re,"_type0_re");
		HX_STACK_LINE(154)
		::String tmp6 = (_name + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		::String tmp7 = _start;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		::String tmp9 = _ext;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(154)
		::String _type1 = tmp10;		HX_STACK_VAR(_type1,"_type1");
		HX_STACK_LINE(155)
		::String tmp11 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + _name);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(155)
		::String tmp12 = (tmp11 + HX_HCSTRING(")(_\\d\\b)","\xbb","\xf5","\x92","\xdf"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(155)
		::EReg tmp13 = ::EReg_obj::__new(tmp12,HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(155)
		::EReg _type1_re = tmp13;		HX_STACK_VAR(_type1_re,"_type1_re");
		HX_STACK_LINE(156)
		::String tmp14 = (_name + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(156)
		::String tmp15 = _start;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(156)
		::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(156)
		::String tmp17 = _ext;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(156)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(156)
		::String _type2 = tmp18;		HX_STACK_VAR(_type2,"_type2");
		HX_STACK_LINE(157)
		::String tmp19 = (HX_HCSTRING("(","\x28","\x00","\x00","\x00") + _name);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(157)
		::String tmp20 = (tmp19 + HX_HCSTRING(")(-\\d\\b)","\x2d","\xeb","\xba","\xe1"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(157)
		::EReg tmp21 = ::EReg_obj::__new(tmp20,HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(157)
		::EReg _type2_re = tmp21;		HX_STACK_VAR(_type2_re,"_type2_re");
		HX_STACK_LINE(160)
		::luxe::Resources tmp22 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(160)
		::String tmp23 = _type0;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(160)
		bool tmp24 = tmp22->cache->exists(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(160)
		if ((tmp24)){
			HX_STACK_LINE(161)
			_sequence_type = _type0;
			HX_STACK_LINE(162)
			_pattern_regex = _type0_re;
		}
		else{
			HX_STACK_LINE(163)
			::luxe::Resources tmp25 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(163)
			::String tmp26 = _type1;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(163)
			bool tmp27 = tmp25->cache->exists(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(163)
			if ((tmp27)){
				HX_STACK_LINE(164)
				_sequence_type = _type1;
				HX_STACK_LINE(165)
				_pattern_regex = _type1_re;
			}
			else{
				HX_STACK_LINE(166)
				::luxe::Resources tmp28 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(166)
				::String tmp29 = _type2;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(166)
				bool tmp30 = tmp28->cache->exists(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(166)
				if ((tmp30)){
					HX_STACK_LINE(167)
					_sequence_type = _type2;
					HX_STACK_LINE(168)
					_pattern_regex = _type2_re;
				}
				else{
					HX_STACK_LINE(170)
					::String tmp31 = (HX_HCSTRING("Sequence requested from ","\x85","\xe3","\x98","\xf0") + _name);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(170)
					::String tmp32 = (tmp31 + HX_HCSTRING(" but no assets found like `","\xf2","\x48","\x70","\x9c"));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(170)
					::String tmp33 = _type0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(170)
					::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(170)
					::String tmp35 = (tmp34 + HX_HCSTRING("` or `","\xe3","\x7f","\xca","\x18"));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(170)
					::String tmp36 = _type1;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(170)
					::String tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(170)
					::String tmp38 = (tmp37 + HX_HCSTRING("` or `","\xe3","\x7f","\xca","\x18"));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(170)
					::String tmp39 = _type2;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(170)
					::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(170)
					::String tmp41 = (tmp40 + HX_HCSTRING("`","\x60","\x00","\x00","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(170)
					Dynamic tmp42 = hx::SourceInfo(HX_HCSTRING("Utils.hx","\x4d","\x09","\x60","\x4c"),170,HX_HCSTRING("luxe.utils.Utils","\x5c","\x3f","\x34","\xb4"),HX_HCSTRING("find_assets_sequence","\x77","\xf9","\x76","\xfb"));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(170)
					::haxe::Log_obj::trace(tmp41,tmp42);
				}
			}
		}
		HX_STACK_LINE(173)
		bool tmp25 = (_sequence_type != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(173)
		if ((tmp25)){
			HX_STACK_LINE(174)
			::luxe::Core tmp26 = this->core;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(174)
			::haxe::ds::StringMap tmp27 = tmp26->resources->cache;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(174)
			Dynamic tmp28 = tmp27->iterator();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(174)
			for(::cpp::FastIterator_obj< ::luxe::resource::Resource > *__it = ::cpp::CreateFastIterator< ::luxe::resource::Resource >(tmp28);  __it->hasNext(); ){
				::luxe::resource::Resource _asset = __it->next();
				{
					HX_STACK_LINE(176)
					::String tmp29 = _asset->id;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(176)
					bool tmp30 = _pattern_regex->match(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(176)
					if ((tmp30)){
						HX_STACK_LINE(177)
						::String tmp31 = _asset->id;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(177)
						_final->push(tmp31);
					}
				}
;
			}

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 2; }
			int run(::String a,::String b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/utils/Utils.hx",181,0x2d9d0da4)
				HX_STACK_ARG(a,"a")
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(181)
					bool tmp29 = (a == b);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(181)
					if ((tmp29)){
						HX_STACK_LINE(181)
						return (int)0;
					}
					HX_STACK_LINE(181)
					bool tmp30 = (a < b);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(181)
					if ((tmp30)){
						HX_STACK_LINE(181)
						return (int)-1;
					}
					HX_STACK_LINE(181)
					return (int)1;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(181)
			_final->sort( Dynamic(new _Function_2_1()));
		}
		HX_STACK_LINE(184)
		return _final;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,find_assets_sequence,return )

Array< ::String > Utils_obj::text_wrap_column_knuth_plass( ::String _string,hx::Null< int >  __o__column){
int _column = __o__column.Default(80);
	HX_STACK_FRAME("luxe.utils.Utils","text_wrap_column_knuth_plass",0x0e2647d8,"luxe.utils.Utils.text_wrap_column_knuth_plass","luxe/utils/Utils.hx",190,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_column,"_column")
{
		HX_STACK_LINE(192)
		Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(218)
		Array< ::String > words = Array_obj< ::String >::__new();		HX_STACK_VAR(words,"words");
		HX_STACK_LINE(219)
		Array< int > lengths = Array_obj< int >::__new();		HX_STACK_VAR(lengths,"lengths");
		HX_STACK_LINE(220)
		::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(220)
				::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(220)
				tmp1 = tmp3;
			}
			HX_STACK_LINE(220)
			::haxe::ds::IntMap _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(220)
			_g->set((int)0,(int)0);
			HX_STACK_LINE(220)
			tmp = _g;
		}
		HX_STACK_LINE(220)
		::haxe::ds::IntMap badness = tmp;		HX_STACK_VAR(badness,"badness");
		HX_STACK_LINE(221)
		::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(221)
			::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(221)
		::haxe::ds::IntMap extra = tmp1;		HX_STACK_VAR(extra,"extra");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			::String s = _string;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(223)
			::EReg tmp2 = ::EReg_obj::__new(HX_HCSTRING("(\\b[^\\s]+\\b)","\xcd","\x3a","\x67","\xc4"),HX_HCSTRING("gm","\x26","\x5a","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			::EReg rgx = tmp2;		HX_STACK_VAR(rgx,"rgx");
			HX_STACK_LINE(223)
			while((true)){
				HX_STACK_LINE(223)
				::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(223)
				bool tmp4 = rgx->match(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(223)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(223)
				if ((tmp5)){
					HX_STACK_LINE(223)
					break;
				}
				HX_STACK_LINE(223)
				::String tmp6 = rgx->matched((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(223)
				words->push(tmp6);
				HX_STACK_LINE(223)
				::String tmp7 = rgx->matchedRight();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(223)
				s = tmp7;
			}
			HX_STACK_LINE(223)
			bool tmp3 = (words->length == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			if ((tmp3)){
				HX_STACK_LINE(223)
				::String tmp4 = _string;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(223)
				words->push(tmp4);
			}
			HX_STACK_LINE(223)
			words;
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< int >,lengths)
		int __ArgCount() const { return 1; }
		Void run(::String w){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/utils/Utils.hx",224,0x2d9d0da4)
			HX_STACK_ARG(w,"w")
			{
				HX_STACK_LINE(224)
				int tmp2 = w.length;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(224)
				lengths->push(tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(224)
		words->map( Dynamic(new _Function_1_1(lengths))).StaticCast< Array<Dynamic> >();
		HX_STACK_LINE(226)
		int n = words->length;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			int _g2 = (int)1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(228)
			int tmp2 = (n + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			int _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(228)
			while((true)){
				HX_STACK_LINE(228)
				bool tmp3 = (_g2 < _g1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(228)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(228)
				if ((tmp4)){
					HX_STACK_LINE(228)
					break;
				}
				HX_STACK_LINE(228)
				int tmp5 = (_g2)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(228)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(230)
				::haxe::ds::IntMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					::haxe::ds::IntMap tmp7 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(230)
					::haxe::ds::IntMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(230)
					tmp6 = tmp8;
				}
				HX_STACK_LINE(230)
				::haxe::ds::IntMap sums = tmp6;		HX_STACK_VAR(sums,"sums");
				HX_STACK_LINE(231)
				int k = i;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(233)
				while((true)){
					HX_STACK_LINE(233)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						int total = (int)0;		HX_STACK_VAR(total,"total");
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							int tmp8 = (k - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(233)
							int _g = tmp8;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(233)
							while((true)){
								HX_STACK_LINE(233)
								bool tmp9 = (_g < i);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(233)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(233)
								if ((tmp10)){
									HX_STACK_LINE(233)
									break;
								}
								HX_STACK_LINE(233)
								int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(233)
								int i1 = tmp11;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(233)
								int tmp12 = lengths->__get(i1);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(233)
								hx::AddEq(total,tmp12);
							}
						}
						HX_STACK_LINE(233)
						int tmp8 = total;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(233)
						int tmp9 = (i - k);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(233)
						int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(233)
						tmp7 = (tmp8 + tmp10);
					}
					HX_STACK_LINE(233)
					int tmp8 = _column;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(233)
					bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(233)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(233)
					if ((tmp9)){
						HX_STACK_LINE(233)
						tmp10 = (k > (int)0);
					}
					else{
						HX_STACK_LINE(233)
						tmp10 = false;
					}
					HX_STACK_LINE(233)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(233)
					if ((tmp11)){
						HX_STACK_LINE(233)
						break;
					}
					HX_STACK_LINE(234)
					int tmp12 = _column;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(234)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						int total = (int)0;		HX_STACK_VAR(total,"total");
						HX_STACK_LINE(234)
						{
							HX_STACK_LINE(234)
							int tmp14 = (k - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(234)
							int _g = tmp14;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(234)
							while((true)){
								HX_STACK_LINE(234)
								bool tmp15 = (_g < i);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(234)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(234)
								if ((tmp16)){
									HX_STACK_LINE(234)
									break;
								}
								HX_STACK_LINE(234)
								int tmp17 = (_g)++;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(234)
								int i1 = tmp17;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(234)
								int tmp18 = lengths->__get(i1);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(234)
								hx::AddEq(total,tmp18);
							}
						}
						HX_STACK_LINE(234)
						int tmp14 = total;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(234)
						int tmp15 = (i - k);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(234)
						int tmp16 = (tmp15 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(234)
						tmp13 = (tmp14 + tmp16);
					}
					HX_STACK_LINE(234)
					int tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(234)
					int a = tmp14;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(235)
						int tmp15 = a;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(235)
						Float tmp16 = ::Math_obj::pow(tmp15,(int)3);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(235)
						int tmp17 = (k - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(235)
						Dynamic tmp18 = badness->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(235)
						Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(235)
						Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(235)
						int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(235)
						int k1 = tmp21;		HX_STACK_VAR(k1,"k1");
						HX_STACK_LINE(235)
						int tmp22 = k1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(235)
						int tmp23 = k;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(235)
						sums->set(tmp22,tmp23);
						HX_STACK_LINE(235)
						k;
					}
					HX_STACK_LINE(236)
					hx::SubEq(k,(int)1);
				}
				HX_STACK_LINE(239)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					int min = (int)1073741823;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(239)
					Dynamic tmp8 = sums->keys();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(239)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp8);  __it->hasNext(); ){
						int item = __it->next();
						{
							HX_STACK_LINE(239)
							bool tmp9 = (item < min);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(239)
							if ((tmp9)){
								HX_STACK_LINE(239)
								min = item;
							}
						}
;
					}
					HX_STACK_LINE(239)
					tmp7 = min;
				}
				HX_STACK_LINE(239)
				int mn = tmp7;		HX_STACK_VAR(mn,"mn");
				HX_STACK_LINE(240)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(240)
					int tmp10 = mn;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					badness->set(tmp9,tmp10);
					HX_STACK_LINE(240)
					tmp8 = mn;
				}
				HX_STACK_LINE(240)
				tmp8;
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					int tmp9 = mn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(241)
					Dynamic tmp10 = sums->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(241)
					int v = tmp10;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(241)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(241)
					int tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(241)
					extra->set(tmp11,tmp12);
					HX_STACK_LINE(241)
					v;
				}
			}
		}
		HX_STACK_LINE(245)
		int line = (int)1;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(246)
		while((true)){
			HX_STACK_LINE(246)
			bool tmp2 = (n > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(246)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			if ((tmp3)){
				HX_STACK_LINE(246)
				break;
			}
			HX_STACK_LINE(247)
			int tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			Dynamic tmp5 = extra->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(247)
			int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(247)
			::String tmp9 = words->slice(tmp7,tmp8)->join(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(247)
			result->unshift(tmp9);
			HX_STACK_LINE(248)
			int tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(248)
			Dynamic tmp11 = extra->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(248)
			Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(248)
			int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(248)
			n = tmp13;
			HX_STACK_LINE(249)
			hx::AddEq(line,(int)1);
		}
		HX_STACK_LINE(252)
		bool tmp2 = (result->length == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		if ((tmp2)){
			HX_STACK_LINE(252)
			::String tmp3 = _string;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			result->push(tmp3);
		}
		HX_STACK_LINE(253)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,text_wrap_column_knuth_plass,return )

::String Utils_obj::text_wrap_column( ::String _text,::String __o__brk,hx::Null< int >  __o__column){
::String _brk = __o__brk.Default(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
int _column = __o__column.Default(80);
	HX_STACK_FRAME("luxe.utils.Utils","text_wrap_column",0x0983136b,"luxe.utils.Utils.text_wrap_column","luxe/utils/Utils.hx",259,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_text,"_text")
	HX_STACK_ARG(_brk,"_brk")
	HX_STACK_ARG(_column,"_column")
{
		HX_STACK_LINE(265)
		::String tmp = (HX_HCSTRING("(.{1,","\xd0","\x84","\xcc","\x26") + _column);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		::String tmp1 = (tmp + HX_HCSTRING("})(?: +|$)\n?|(.{","\x2d","\x01","\xcf","\x7a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		int tmp2 = _column;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		::String tmp4 = (tmp3 + HX_HCSTRING("})","\x0c","\x6d","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		::EReg tmp5 = ::EReg_obj::__new(tmp4,HX_HCSTRING("gimu","\x0a","\x06","\x65","\x44"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		::String tmp6 = _text;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(265)
		::String tmp7 = (HX_HCSTRING("$1$2","\x5b","\xfc","\xf0","\x17") + _brk);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(265)
		::String tmp8 = tmp5->replace(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(265)
		::String result = tmp8;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(267)
		::String tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(267)
		::String tmp10 = ::StringTools_obj::rtrim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(267)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,text_wrap_column,return )

::String Utils_obj::bytes_to_string( int bytes,Dynamic __o_precision){
Dynamic precision = __o_precision.Default(3);
	HX_STACK_FRAME("luxe.utils.Utils","bytes_to_string",0xf09ebd2f,"luxe.utils.Utils.bytes_to_string","luxe/utils/Utils.hx",272,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(precision,"precision")
{
		HX_STACK_LINE(274)
		int tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		Float tmp1 = ::Math_obj::log(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		Float tmp2 = ::Math_obj::log((int)1024);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		int index = tmp4;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(275)
		int tmp5 = bytes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		Float tmp7 = ::Math_obj::pow((int)1024,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(275)
		Float _byte_value = tmp8;		HX_STACK_VAR(_byte_value,"_byte_value");
		HX_STACK_LINE(276)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(276)
			int precision1 = precision;		HX_STACK_VAR(precision1,"precision1");
			HX_STACK_LINE(276)
			int tmp10 = precision1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(276)
			Float tmp11 = ::Math_obj::pow((int)10,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(276)
			Float n = tmp11;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(276)
			Float tmp12 = (_byte_value * n);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(276)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(276)
			Float tmp14 = n;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(276)
			tmp9 = (Float(tmp13) / Float(tmp14));
		}
		HX_STACK_LINE(276)
		_byte_value = tmp9;
		HX_STACK_LINE(278)
		::String tmp10 = (_byte_value + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(278)
		::String tmp11 = this->_byte_levels->__get(index);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(278)
		::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(278)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,bytes_to_string,return )

::haxe::io::Bytes Utils_obj::array_to_bytes( Array< int > array){
	HX_STACK_FRAME("luxe.utils.Utils","array_to_bytes",0x20cc2edf,"luxe.utils.Utils.array_to_bytes","luxe/utils/Utils.hx",283,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(285)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	if ((tmp)){
		HX_STACK_LINE(285)
		return null();
	}
	HX_STACK_LINE(286)
	int tmp1 = array->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(287)
	{
		HX_STACK_LINE(287)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(287)
		int _g = bytes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(287)
		while((true)){
			HX_STACK_LINE(287)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			if ((tmp4)){
				HX_STACK_LINE(287)
				break;
			}
			HX_STACK_LINE(287)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(287)
			int n = tmp5;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(287)
			int tmp6 = array->__get(n);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			bytes->b[n] = tmp6;
		}
	}
	HX_STACK_LINE(289)
	::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,array_to_bytes,return )

::snow::api::buffers::ArrayBufferView Utils_obj::premultiply_alpha( ::snow::api::buffers::ArrayBufferView _pixels){
	HX_STACK_FRAME("luxe.utils.Utils","premultiply_alpha",0xe2216d94,"luxe.utils.Utils.premultiply_alpha","luxe/utils/Utils.hx",296,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pixels,"_pixels")
	HX_STACK_LINE(298)
	int tmp = _pixels->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	int count = tmp;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(299)
	int tmp1 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,_pixels->byteOffset);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(299)
	Dynamic read = tmp2;		HX_STACK_VAR(read,"read");
	HX_STACK_LINE(300)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(302)
	while((true)){
		HX_STACK_LINE(302)
		bool tmp3 = (index < count);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(302)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(302)
		if ((tmp4)){
			HX_STACK_LINE(302)
			break;
		}
		HX_STACK_LINE(304)
		int tmp5 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,(_pixels->byteOffset + index));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(304)
		Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(304)
		Dynamic r = tmp6;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(305)
		int tmp7 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)1))));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(305)
		Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(305)
		Dynamic g = tmp8;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(306)
		int tmp9 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(306)
		Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(306)
		Dynamic b = tmp10;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(307)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			int tmp12 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)3))));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(307)
			Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(307)
			int a = tmp13;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(307)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				int _int = a;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(307)
				bool tmp15 = (_int < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(307)
				if ((tmp15)){
					HX_STACK_LINE(307)
					tmp14 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(307)
					tmp14 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(307)
			tmp11 = (Float(tmp14) / Float(((Float)255.0)));
		}
		HX_STACK_LINE(307)
		Float a = tmp11;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				int a1 = r;		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(309)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					int _int = a1;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(309)
					bool tmp14 = (_int < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(309)
					if ((tmp14)){
						HX_STACK_LINE(309)
						tmp13 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(309)
						tmp13 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(309)
				Float tmp14 = a;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(309)
				tmp12 = (tmp13 * tmp14);
			}
			HX_STACK_LINE(309)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(309)
			int val = tmp13;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(309)
			::__hxcpp_memory_set_byte(_pixels->buffer->b,(_pixels->byteOffset + index),val);
		}
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				int a1 = g;		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(310)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					int _int = a1;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(310)
					bool tmp14 = (_int < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(310)
					if ((tmp14)){
						HX_STACK_LINE(310)
						tmp13 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(310)
						tmp13 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(310)
				Float tmp14 = a;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(310)
				tmp12 = (tmp13 * tmp14);
			}
			HX_STACK_LINE(310)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(310)
			int val = tmp13;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(310)
			::__hxcpp_memory_set_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)1))),val);
		}
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				int a1 = b;		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(311)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					int _int = a1;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(311)
					bool tmp14 = (_int < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(311)
					if ((tmp14)){
						HX_STACK_LINE(311)
						tmp13 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(311)
						tmp13 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(311)
				Float tmp14 = a;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(311)
				tmp12 = (tmp13 * tmp14);
			}
			HX_STACK_LINE(311)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(311)
			int val = tmp13;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(311)
			::__hxcpp_memory_set_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)2))),val);
		}
		HX_STACK_LINE(313)
		hx::AddEq(index,(int)4);
	}
	HX_STACK_LINE(317)
	::snow::api::buffers::ArrayBufferView tmp3 = _pixels;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(317)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,premultiply_alpha,return )

::snow::api::buffers::ArrayBufferView Utils_obj::premultiply_alpha_normalized( ::snow::api::buffers::ArrayBufferView _pixels){
	HX_STACK_FRAME("luxe.utils.Utils","premultiply_alpha_normalized",0x57d04442,"luxe.utils.Utils.premultiply_alpha_normalized","luxe/utils/Utils.hx",324,0x2d9d0da4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pixels,"_pixels")
	HX_STACK_LINE(326)
	int tmp = _pixels->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	int count = tmp;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(327)
	int tmp1 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,_pixels->byteOffset);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	Dynamic read = tmp2;		HX_STACK_VAR(read,"read");
	HX_STACK_LINE(328)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(330)
	while((true)){
		HX_STACK_LINE(330)
		bool tmp3 = (index < count);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(330)
		if ((tmp4)){
			HX_STACK_LINE(330)
			break;
		}
		HX_STACK_LINE(332)
		int tmp5 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,(_pixels->byteOffset + index));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(332)
		Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(332)
		Dynamic r = tmp6;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(333)
		int tmp7 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)1))));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(333)
		Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(333)
		Dynamic g = tmp8;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(334)
		int tmp9 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(334)
		Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(334)
		Dynamic b = tmp10;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(335)
		int tmp11 = ::__hxcpp_memory_get_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)3))));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(335)
		Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(335)
		Dynamic a = tmp12;		HX_STACK_VAR(a,"a");
		struct _Function_2_1{
			inline static int Block( Dynamic &r,Dynamic &a){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/Utils.hx",337,0x2d9d0da4)
				{
					HX_STACK_LINE(337)
					int a1 = r;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(337)
					int b1 = a;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(337)
					return (a1 * b1);
				}
				return null();
			}
		};
		HX_STACK_LINE(337)
		::__hxcpp_memory_set_byte(_pixels->buffer->b,(_pixels->byteOffset + index),_Function_2_1::Block(r,a));
		struct _Function_2_2{
			inline static int Block( Dynamic &g,Dynamic &a){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/Utils.hx",338,0x2d9d0da4)
				{
					HX_STACK_LINE(338)
					int a1 = g;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(338)
					int b1 = a;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(338)
					return (a1 * b1);
				}
				return null();
			}
		};
		HX_STACK_LINE(338)
		::__hxcpp_memory_set_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)1))),_Function_2_2::Block(g,a));
		struct _Function_2_3{
			inline static int Block( Dynamic &b,Dynamic &a){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/utils/Utils.hx",339,0x2d9d0da4)
				{
					HX_STACK_LINE(339)
					int a1 = b;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(339)
					int b1 = a;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(339)
					return (a1 * b1);
				}
				return null();
			}
		};
		HX_STACK_LINE(339)
		::__hxcpp_memory_set_byte(_pixels->buffer->b,(_pixels->byteOffset + ((index + (int)2))),_Function_2_3::Block(b,a));
		HX_STACK_LINE(341)
		hx::AddEq(index,(int)4);
	}
	HX_STACK_LINE(345)
	::snow::api::buffers::ArrayBufferView tmp3 = _pixels;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,premultiply_alpha_normalized,return )


Utils_obj::Utils_obj()
{
}

void Utils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utils);
	HX_MARK_MEMBER_NAME(geometry,"geometry");
	HX_MARK_MEMBER_NAME(random,"random");
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(_byte_levels,"_byte_levels");
	HX_MARK_END_CLASS();
}

void Utils_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(geometry,"geometry");
	HX_VISIT_MEMBER_NAME(random,"random");
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(_byte_levels,"_byte_levels");
}

Dynamic Utils_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { return random; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { return geometry; }
		if (HX_FIELD_EQ(inName,"pos_info") ) { return pos_info_dyn(); }
		if (HX_FIELD_EQ(inName,"uniqueid") ) { return uniqueid_dyn(); }
		if (HX_FIELD_EQ(inName,"hashdjb2") ) { return hashdjb2_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uniqueid2") ) { return uniqueid2_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uniquehash") ) { return uniquehash_dyn(); }
		if (HX_FIELD_EQ(inName,"stacktrace") ) { return stacktrace_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_byte_levels") ) { return _byte_levels; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"array_to_bytes") ) { return array_to_bytes_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytes_to_string") ) { return bytes_to_string_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"path_is_relative") ) { return path_is_relative_dyn(); }
		if (HX_FIELD_EQ(inName,"text_wrap_column") ) { return text_wrap_column_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"premultiply_alpha") ) { return premultiply_alpha_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"find_assets_sequence") ) { return find_assets_sequence_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"text_wrap_column_knuth_plass") ) { return text_wrap_column_knuth_plass_dyn(); }
		if (HX_FIELD_EQ(inName,"premultiply_alpha_normalized") ) { return premultiply_alpha_normalized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Utils_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { random=inValue.Cast< ::luxe::utils::Random >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"geometry") ) { geometry=inValue.Cast< ::luxe::utils::GeometryUtils >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_byte_levels") ) { _byte_levels=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Utils_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Utils_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"));
	outFields->push(HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"));
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("_byte_levels","\x07","\xd0","\x72","\xd7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::utils::GeometryUtils*/ ,(int)offsetof(Utils_obj,geometry),HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")},
	{hx::fsObject /*::luxe::utils::Random*/ ,(int)offsetof(Utils_obj,random),HX_HCSTRING("random","\x03","\x22","\x8f","\xb7")},
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Utils_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Utils_obj,_byte_levels),HX_HCSTRING("_byte_levels","\x07","\xd0","\x72","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2"),
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("_byte_levels","\x07","\xd0","\x72","\xd7"),
	HX_HCSTRING("pos_info","\x39","\x3e","\xb7","\x01"),
	HX_HCSTRING("uniqueid","\x2c","\x95","\xaa","\x5b"),
	HX_HCSTRING("uniquehash","\x5f","\x1f","\xb0","\x8a"),
	HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"),
	HX_HCSTRING("hashdjb2","\x64","\x49","\x41","\x1d"),
	HX_HCSTRING("uniqueid2","\x86","\xf1","\x97","\xd9"),
	HX_HCSTRING("stacktrace","\x3d","\xc2","\x10","\x96"),
	HX_HCSTRING("path_is_relative","\x27","\x82","\x48","\x45"),
	HX_HCSTRING("find_assets_sequence","\x77","\xf9","\x76","\xfb"),
	HX_HCSTRING("text_wrap_column_knuth_plass","\x86","\x1f","\x54","\xb3"),
	HX_HCSTRING("text_wrap_column","\x19","\x9e","\xb4","\xfc"),
	HX_HCSTRING("bytes_to_string","\x41","\xa2","\x75","\xb9"),
	HX_HCSTRING("array_to_bytes","\x0d","\x12","\xdc","\xc5"),
	HX_HCSTRING("premultiply_alpha","\x26","\x3b","\x49","\xba"),
	HX_HCSTRING("premultiply_alpha_normalized","\xf0","\x1b","\xfe","\xfc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
};

#endif

hx::Class Utils_obj::__mClass;

void Utils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.Utils","\x5c","\x3f","\x34","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Utils_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Utils_obj >;
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
} // end namespace utils
