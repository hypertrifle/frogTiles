#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl
#include <luxe/utils/unifill/_Utf8/Utf8Impl.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8_Impl_
#include <luxe/utils/unifill/_Utf8/Utf8_Impl_.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{
namespace _Utf8{

Void Utf8_Impl__obj::__construct()
{
	return null();
}

//Utf8_Impl__obj::~Utf8_Impl__obj() { }

Dynamic Utf8_Impl__obj::__CreateEmpty() { return  new Utf8_Impl__obj; }
hx::ObjectPtr< Utf8_Impl__obj > Utf8_Impl__obj::__new()
{  hx::ObjectPtr< Utf8_Impl__obj > _result_ = new Utf8_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Utf8_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8_Impl__obj > _result_ = new Utf8_Impl__obj();
	_result_->__construct();
	return _result_;}

::String Utf8_Impl__obj::fromCodePoint( int codePoint){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","fromCodePoint",0x025e998a,"luxe.utils.unifill._Utf8.Utf8_Impl_.fromCodePoint","luxe/utils/unifill/Utf8.hx",11,0xbecfbbba)
	HX_STACK_ARG(codePoint,"codePoint")
	HX_STACK_LINE(12)
	::haxe::io::BytesBuffer tmp = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	::haxe::io::BytesBuffer buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(13)
	Dynamic tmp1 = buf->addByte_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	int tmp2 = codePoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp1,tmp2);
	HX_STACK_LINE(14)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		{
			HX_STACK_LINE(14)
			::haxe::io::Bytes tmp5 = buf->getBytes();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(14)
			::haxe::io::Bytes b = tmp5;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(14)
			{
				HX_STACK_LINE(14)
				::String tmp6 = b->toString();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(14)
				::String s = tmp6;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(14)
				tmp4 = s;
			}
		}
		HX_STACK_LINE(14)
		::String s = tmp4;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(14)
		tmp3 = s;
	}
	HX_STACK_LINE(14)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,fromCodePoint,return )

::String Utf8_Impl__obj::fromCodePoints( Dynamic codePoints){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","fromCodePoints",0x1067bfa9,"luxe.utils.unifill._Utf8.Utf8_Impl_.fromCodePoints","luxe/utils/unifill/Utf8.hx",20,0xbecfbbba)
	HX_STACK_ARG(codePoints,"codePoints")
	HX_STACK_LINE(21)
	::haxe::io::BytesBuffer tmp = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::haxe::io::BytesBuffer buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(22)
	Dynamic tmp1 = codePoints->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
		int c = __it->next();
		{
			HX_STACK_LINE(23)
			Dynamic tmp2 = buf->addByte_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			int tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp2,tmp3);
		}
;
	}
	HX_STACK_LINE(25)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			::haxe::io::Bytes tmp4 = buf->getBytes();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			::haxe::io::Bytes b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(25)
			{
				HX_STACK_LINE(25)
				::String tmp5 = b->toString();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(25)
				::String s = tmp5;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(25)
				tmp3 = s;
			}
		}
		HX_STACK_LINE(25)
		::String s = tmp3;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(25)
		tmp2 = s;
	}
	HX_STACK_LINE(25)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,fromCodePoints,return )

::String Utf8_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","fromString",0x3e2220ca,"luxe.utils.unifill._Utf8.Utf8_Impl_.fromString","luxe/utils/unifill/Utf8.hx",28,0xbecfbbba)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(29)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,fromString,return )

::String Utf8_Impl__obj::fromBytes( ::haxe::io::Bytes b){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","fromBytes",0xd832f292,"luxe.utils.unifill._Utf8.Utf8_Impl_.fromBytes","luxe/utils/unifill/Utf8.hx",32,0xbecfbbba)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(33)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			::String tmp2 = b->toString();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			::String s = tmp2;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(33)
			tmp1 = s;
		}
		HX_STACK_LINE(33)
		::String s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(33)
		tmp = s;
	}
	HX_STACK_LINE(33)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,fromBytes,return )

int Utf8_Impl__obj::codeUnitAt( ::String this1,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","codeUnitAt",0x14fc6493,"luxe.utils.unifill._Utf8.Utf8_Impl_.codeUnitAt","luxe/utils/unifill/Utf8.hx",41,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(42)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	int tmp1 = this1.cca(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,codeUnitAt,return )

int Utf8_Impl__obj::codePointAt( ::String this1,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","codePointAt",0xda7ae5e7,"luxe.utils.unifill._Utf8.Utf8_Impl_.codePointAt","luxe/utils/unifill/Utf8.hx",49,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(50)
	int tmp = this1.length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,this1)
	int __ArgCount() const { return 1; }
	int run(int i){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/utils/unifill/Utf8.hx",50,0xbecfbbba)
		HX_STACK_ARG(i,"i")
		{
			HX_STACK_LINE(50)
			int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			int tmp3 = this1.cca(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(50)
	int tmp2 = ::luxe::utils::unifill::_Utf8::Utf8Impl_obj::decode_code_point(tmp, Dynamic(new _Function_1_1(this1)),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,codePointAt,return )

::String Utf8_Impl__obj::charAt( ::String this1,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","charAt",0xf4f588d8,"luxe.utils.unifill._Utf8.Utf8_Impl_.charAt","luxe/utils/unifill/Utf8.hx",57,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(58)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				int tmp4 = this1.cca(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				int c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(58)
				bool tmp5 = (c < (int)192);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				if ((tmp5)){
					HX_STACK_LINE(58)
					tmp2 = (int)1;
				}
				else{
					HX_STACK_LINE(58)
					bool tmp6 = (c < (int)224);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(58)
					if ((tmp6)){
						HX_STACK_LINE(58)
						tmp2 = (int)2;
					}
					else{
						HX_STACK_LINE(58)
						bool tmp7 = (c < (int)240);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(58)
						if ((tmp7)){
							HX_STACK_LINE(58)
							tmp2 = (int)3;
						}
						else{
							HX_STACK_LINE(58)
							bool tmp8 = (c < (int)248);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(58)
							if ((tmp8)){
								HX_STACK_LINE(58)
								tmp2 = (int)4;
							}
							else{
								HX_STACK_LINE(58)
								tmp2 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(58)
			Dynamic len = tmp2;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				Dynamic tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				::String tmp5 = this1.substr(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				::String s = tmp5;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(58)
				tmp1 = s;
			}
		}
		HX_STACK_LINE(58)
		::String s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(58)
		tmp = s;
	}
	HX_STACK_LINE(58)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,charAt,return )

int Utf8_Impl__obj::codePointCount( ::String this1,int beginIndex,int endIndex){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","codePointCount",0x882ac45b,"luxe.utils.unifill._Utf8.Utf8_Impl_.codePointCount","luxe/utils/unifill/Utf8.hx",65,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
	HX_STACK_LINE(66)
	int index = beginIndex;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(67)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(68)
	while((true)){
		HX_STACK_LINE(68)
		bool tmp = (index < endIndex);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		if ((tmp1)){
			HX_STACK_LINE(68)
			break;
		}
		HX_STACK_LINE(69)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			int tmp4 = this1.cca(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			int c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(69)
			bool tmp5 = (c < (int)192);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			if ((tmp5)){
				HX_STACK_LINE(69)
				tmp2 = (int)1;
			}
			else{
				HX_STACK_LINE(69)
				bool tmp6 = (c < (int)224);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(69)
				if ((tmp6)){
					HX_STACK_LINE(69)
					tmp2 = (int)2;
				}
				else{
					HX_STACK_LINE(69)
					bool tmp7 = (c < (int)240);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(69)
					if ((tmp7)){
						HX_STACK_LINE(69)
						tmp2 = (int)3;
					}
					else{
						HX_STACK_LINE(69)
						bool tmp8 = (c < (int)248);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(69)
						if ((tmp8)){
							HX_STACK_LINE(69)
							tmp2 = (int)4;
						}
						else{
							HX_STACK_LINE(69)
							tmp2 = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(69)
		hx::AddEq(index,tmp2);
		HX_STACK_LINE(70)
		++(i);
	}
	HX_STACK_LINE(72)
	int tmp = i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,codePointCount,return )

int Utf8_Impl__obj::codePointWidthAt( ::String this1,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","codePointWidthAt",0x0f507725,"luxe.utils.unifill._Utf8.Utf8_Impl_.codePointWidthAt","luxe/utils/unifill/Utf8.hx",79,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(80)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	int tmp1 = this1.cca(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	int c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(81)
	bool tmp2 = (c < (int)192);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	if ((tmp2)){
		HX_STACK_LINE(81)
		tmp3 = (int)1;
	}
	else{
		HX_STACK_LINE(81)
		bool tmp4 = (c < (int)224);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		if ((tmp4)){
			HX_STACK_LINE(81)
			tmp3 = (int)2;
		}
		else{
			HX_STACK_LINE(81)
			bool tmp5 = (c < (int)240);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			if ((tmp5)){
				HX_STACK_LINE(81)
				tmp3 = (int)3;
			}
			else{
				HX_STACK_LINE(81)
				bool tmp6 = (c < (int)248);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				if ((tmp6)){
					HX_STACK_LINE(81)
					tmp3 = (int)4;
				}
				else{
					HX_STACK_LINE(81)
					tmp3 = (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(81)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,codePointWidthAt,return )

int Utf8_Impl__obj::codePointWidthBefore( ::String this1,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","codePointWidthBefore",0xfb4477b1,"luxe.utils.unifill._Utf8.Utf8_Impl_.codePointWidthBefore","luxe/utils/unifill/Utf8.hx",88,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(89)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		int tmp1 = (index - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			int tmp4 = this1.cca(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(89)
		int c1 = tmp2;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(89)
		bool tmp3 = (c1 < (int)128);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		if ((tmp4)){
			HX_STACK_LINE(89)
			tmp5 = (c1 >= (int)192);
		}
		else{
			HX_STACK_LINE(89)
			tmp5 = true;
		}
		HX_STACK_LINE(89)
		if ((tmp5)){
			HX_STACK_LINE(89)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(89)
			int tmp6 = (index - (int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				int tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(89)
				int tmp9 = this1.cca(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(89)
				tmp7 = tmp9;
			}
			HX_STACK_LINE(89)
			int tmp8 = (int(tmp7) & int((int)224));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(89)
			bool tmp9 = (tmp8 == (int)192);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(89)
			if ((tmp9)){
				HX_STACK_LINE(89)
				tmp = (int)2;
			}
			else{
				HX_STACK_LINE(89)
				int tmp10 = (index - (int)3);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(89)
				int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(89)
				{
					HX_STACK_LINE(89)
					int tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(89)
					int tmp13 = this1.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(89)
					tmp11 = tmp13;
				}
				HX_STACK_LINE(89)
				int tmp12 = (int(tmp11) & int((int)240));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(89)
				bool tmp13 = (tmp12 == (int)224);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(89)
				if ((tmp13)){
					HX_STACK_LINE(89)
					tmp = (int)3;
				}
				else{
					HX_STACK_LINE(89)
					int tmp14 = (index - (int)4);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(89)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(89)
						int tmp17 = this1.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(89)
						tmp15 = tmp17;
					}
					HX_STACK_LINE(89)
					int tmp16 = (int(tmp15) & int((int)248));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(89)
					bool tmp17 = (tmp16 == (int)240);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(89)
					if ((tmp17)){
						HX_STACK_LINE(89)
						tmp = (int)4;
					}
					else{
						HX_STACK_LINE(89)
						tmp = (int)1;
					}
				}
			}
		}
	}
	HX_STACK_LINE(89)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_Impl__obj,codePointWidthBefore,return )

int Utf8_Impl__obj::offsetByCodePoints( ::String this1,int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","offsetByCodePoints",0x6fb2f209,"luxe.utils.unifill._Utf8.Utf8_Impl_.offsetByCodePoints","luxe/utils/unifill/Utf8.hx",96,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(97)
	bool tmp = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	if ((tmp)){
		HX_STACK_LINE(98)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(98)
		int tmp2 = this1.length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		int len = tmp2;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(98)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			bool tmp3 = (i < codePointOffset);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			if ((tmp3)){
				HX_STACK_LINE(98)
				tmp4 = (index1 < len);
			}
			else{
				HX_STACK_LINE(98)
				tmp4 = false;
			}
			HX_STACK_LINE(98)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			if ((tmp5)){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				int tmp7 = index1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(98)
				int tmp8 = this1.cca(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				int c = tmp8;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(98)
				bool tmp9 = (c < (int)192);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				if ((tmp9)){
					HX_STACK_LINE(98)
					tmp6 = (int)1;
				}
				else{
					HX_STACK_LINE(98)
					bool tmp10 = (c < (int)224);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(98)
					if ((tmp10)){
						HX_STACK_LINE(98)
						tmp6 = (int)2;
					}
					else{
						HX_STACK_LINE(98)
						bool tmp11 = (c < (int)240);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(98)
						if ((tmp11)){
							HX_STACK_LINE(98)
							tmp6 = (int)3;
						}
						else{
							HX_STACK_LINE(98)
							bool tmp12 = (c < (int)248);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(98)
							if ((tmp12)){
								HX_STACK_LINE(98)
								tmp6 = (int)4;
							}
							else{
								HX_STACK_LINE(98)
								tmp6 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(98)
			hx::AddEq(index1,tmp6);
			HX_STACK_LINE(98)
			++(i);
		}
		HX_STACK_LINE(98)
		tmp1 = index1;
	}
	else{
		HX_STACK_LINE(100)
		int index1 = index;		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(100)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			int tmp3 = codePointOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			if ((tmp5)){
				HX_STACK_LINE(100)
				tmp6 = ((int)0 < index1);
			}
			else{
				HX_STACK_LINE(100)
				tmp6 = false;
			}
			HX_STACK_LINE(100)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			if ((tmp7)){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(100)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				::String this2 = this1;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(100)
				{
					HX_STACK_LINE(100)
					int tmp9 = (index1 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(100)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						int tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(100)
						int tmp12 = this2.cca(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(100)
						tmp10 = tmp12;
					}
					HX_STACK_LINE(100)
					int c1 = tmp10;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(100)
					bool tmp11 = (c1 < (int)128);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(100)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(100)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(100)
					if ((tmp12)){
						HX_STACK_LINE(100)
						tmp13 = (c1 >= (int)192);
					}
					else{
						HX_STACK_LINE(100)
						tmp13 = true;
					}
					HX_STACK_LINE(100)
					if ((tmp13)){
						HX_STACK_LINE(100)
						tmp8 = (int)1;
					}
					else{
						HX_STACK_LINE(100)
						int tmp14 = (index1 - (int)2);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(100)
						int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(100)
							int tmp17 = this2.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(100)
							tmp15 = tmp17;
						}
						HX_STACK_LINE(100)
						int tmp16 = (int(tmp15) & int((int)224));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(100)
						bool tmp17 = (tmp16 == (int)192);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(100)
						if ((tmp17)){
							HX_STACK_LINE(100)
							tmp8 = (int)2;
						}
						else{
							HX_STACK_LINE(100)
							int tmp18 = (index1 - (int)3);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(100)
							int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(100)
							{
								HX_STACK_LINE(100)
								int tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(100)
								int tmp21 = this2.cca(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(100)
								tmp19 = tmp21;
							}
							HX_STACK_LINE(100)
							int tmp20 = (int(tmp19) & int((int)240));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(100)
							bool tmp21 = (tmp20 == (int)224);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(100)
							if ((tmp21)){
								HX_STACK_LINE(100)
								tmp8 = (int)3;
							}
							else{
								HX_STACK_LINE(100)
								int tmp22 = (index1 - (int)4);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(100)
								int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(100)
								{
									HX_STACK_LINE(100)
									int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(100)
									int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(100)
									tmp23 = tmp25;
								}
								HX_STACK_LINE(100)
								int tmp24 = (int(tmp23) & int((int)248));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(100)
								bool tmp25 = (tmp24 == (int)240);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(100)
								if ((tmp25)){
									HX_STACK_LINE(100)
									tmp8 = (int)4;
								}
								else{
									HX_STACK_LINE(100)
									tmp8 = (int)1;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(100)
			hx::SubEq(index1,tmp8);
			HX_STACK_LINE(100)
			++(count);
		}
		HX_STACK_LINE(100)
		tmp1 = index1;
	}
	HX_STACK_LINE(97)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,offsetByCodePoints,return )

::String Utf8_Impl__obj::substr( ::String this1,int index,Dynamic len){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","substr",0xd78afea0,"luxe.utils.unifill._Utf8.Utf8_Impl_.substr","luxe/utils/unifill/Utf8.hx",107,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(108)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			Dynamic tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			::String tmp4 = this1.substr(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			::String s = tmp4;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(108)
			tmp1 = s;
		}
		HX_STACK_LINE(108)
		::String s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(108)
		tmp = s;
	}
	HX_STACK_LINE(108)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,substr,return )

Void Utf8_Impl__obj::validate( ::String this1){
{
		HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","validate",0xae19d9c5,"luxe.utils.unifill._Utf8.Utf8_Impl_.validate","luxe/utils/unifill/Utf8.hx",117,0xbecfbbba)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(118)
		int tmp = this1.length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		int len = tmp;		HX_STACK_VAR(len,"len");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,this1)
		int __ArgCount() const { return 1; }
		int run(int i){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/utils/unifill/Utf8.hx",119,0xbecfbbba)
			HX_STACK_ARG(i,"i")
			{
				HX_STACK_LINE(119)
				int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(119)
				int tmp2 = this1.cca(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				return tmp2;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(119)
		Dynamic accessor =  Dynamic(new _Function_1_1(this1));		HX_STACK_VAR(accessor,"accessor");
		HX_STACK_LINE(120)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp1 = (i < len);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(121)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			if ((tmp2)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(122)
			int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			Dynamic tmp4 = accessor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			::luxe::utils::unifill::_Utf8::Utf8Impl_obj::decode_code_point(tmp3,tmp4,tmp5);
			HX_STACK_LINE(123)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(123)
				int tmp8 = this1.cca(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				int c = tmp8;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(123)
				bool tmp9 = (c < (int)192);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(123)
				if ((tmp9)){
					HX_STACK_LINE(123)
					tmp6 = (int)1;
				}
				else{
					HX_STACK_LINE(123)
					bool tmp10 = (c < (int)224);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(123)
					if ((tmp10)){
						HX_STACK_LINE(123)
						tmp6 = (int)2;
					}
					else{
						HX_STACK_LINE(123)
						bool tmp11 = (c < (int)240);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(123)
						if ((tmp11)){
							HX_STACK_LINE(123)
							tmp6 = (int)3;
						}
						else{
							HX_STACK_LINE(123)
							bool tmp12 = (c < (int)248);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(123)
							if ((tmp12)){
								HX_STACK_LINE(123)
								tmp6 = (int)4;
							}
							else{
								HX_STACK_LINE(123)
								tmp6 = (int)1;
							}
						}
					}
				}
			}
			HX_STACK_LINE(123)
			hx::AddEq(i,tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,validate,(void))

::String Utf8_Impl__obj::toString( ::String this1){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","toString",0xe1a4d9db,"luxe.utils.unifill._Utf8.Utf8_Impl_.toString","luxe/utils/unifill/Utf8.hx",127,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(128)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,toString,return )

::haxe::io::Bytes Utf8_Impl__obj::toBytes( ::String this1){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","toBytes",0x1ca9c6a1,"luxe.utils.unifill._Utf8.Utf8_Impl_.toBytes","luxe/utils/unifill/Utf8.hx",131,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(132)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,toBytes,return )

::String Utf8_Impl__obj::_new( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","_new",0xcc4f1b10,"luxe.utils.unifill._Utf8.Utf8_Impl_._new","luxe/utils/unifill/Utf8.hx",136,0xbecfbbba)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(136)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,_new,return )

int Utf8_Impl__obj::get_length( ::String this1){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","get_length",0x793cf79e,"luxe.utils.unifill._Utf8.Utf8_Impl_.get_length","luxe/utils/unifill/Utf8.hx",139,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(140)
	int tmp = this1.length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_Impl__obj,get_length,return )

int Utf8_Impl__obj::forward_offset_by_code_points( ::String this1,int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","forward_offset_by_code_points",0xaa547030,"luxe.utils.unifill._Utf8.Utf8_Impl_.forward_offset_by_code_points","luxe/utils/unifill/Utf8.hx",143,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(144)
	int tmp = this1.length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	int len = tmp;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(145)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(146)
	while((true)){
		HX_STACK_LINE(146)
		bool tmp1 = (i < codePointOffset);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp1)){
			HX_STACK_LINE(146)
			tmp2 = (index < len);
		}
		else{
			HX_STACK_LINE(146)
			tmp2 = false;
		}
		HX_STACK_LINE(146)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		if ((tmp3)){
			HX_STACK_LINE(146)
			break;
		}
		HX_STACK_LINE(147)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			int tmp6 = this1.cca(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			int c = tmp6;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(147)
			bool tmp7 = (c < (int)192);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			if ((tmp7)){
				HX_STACK_LINE(147)
				tmp4 = (int)1;
			}
			else{
				HX_STACK_LINE(147)
				bool tmp8 = (c < (int)224);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				if ((tmp8)){
					HX_STACK_LINE(147)
					tmp4 = (int)2;
				}
				else{
					HX_STACK_LINE(147)
					bool tmp9 = (c < (int)240);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(147)
					if ((tmp9)){
						HX_STACK_LINE(147)
						tmp4 = (int)3;
					}
					else{
						HX_STACK_LINE(147)
						bool tmp10 = (c < (int)248);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(147)
						if ((tmp10)){
							HX_STACK_LINE(147)
							tmp4 = (int)4;
						}
						else{
							HX_STACK_LINE(147)
							tmp4 = (int)1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(147)
		hx::AddEq(index,tmp4);
		HX_STACK_LINE(148)
		++(i);
	}
	HX_STACK_LINE(150)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,forward_offset_by_code_points,return )

int Utf8_Impl__obj::backward_offset_by_code_points( ::String this1,int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8_Impl_","backward_offset_by_code_points",0x0d7216cc,"luxe.utils.unifill._Utf8.Utf8_Impl_.backward_offset_by_code_points","luxe/utils/unifill/Utf8.hx",153,0xbecfbbba)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(154)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(155)
	while((true)){
		HX_STACK_LINE(155)
		bool tmp = (count < codePointOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		if ((tmp)){
			HX_STACK_LINE(155)
			tmp1 = ((int)0 < index);
		}
		else{
			HX_STACK_LINE(155)
			tmp1 = false;
		}
		HX_STACK_LINE(155)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		if ((tmp2)){
			HX_STACK_LINE(155)
			break;
		}
		HX_STACK_LINE(156)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::String this2 = this1;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int tmp4 = (index - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(156)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					int tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(156)
					int tmp7 = this2.cca(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(156)
					tmp5 = tmp7;
				}
				HX_STACK_LINE(156)
				int c1 = tmp5;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(156)
				bool tmp6 = (c1 < (int)128);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(156)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(156)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(156)
				if ((tmp7)){
					HX_STACK_LINE(156)
					tmp8 = (c1 >= (int)192);
				}
				else{
					HX_STACK_LINE(156)
					tmp8 = true;
				}
				HX_STACK_LINE(156)
				if ((tmp8)){
					HX_STACK_LINE(156)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(156)
					int tmp9 = (index - (int)2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(156)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						int tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(156)
						int tmp12 = this2.cca(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(156)
						tmp10 = tmp12;
					}
					HX_STACK_LINE(156)
					int tmp11 = (int(tmp10) & int((int)224));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(156)
					bool tmp12 = (tmp11 == (int)192);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(156)
					if ((tmp12)){
						HX_STACK_LINE(156)
						tmp3 = (int)2;
					}
					else{
						HX_STACK_LINE(156)
						int tmp13 = (index - (int)3);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(156)
						int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(156)
						{
							HX_STACK_LINE(156)
							int tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(156)
							int tmp16 = this2.cca(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(156)
							tmp14 = tmp16;
						}
						HX_STACK_LINE(156)
						int tmp15 = (int(tmp14) & int((int)240));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(156)
						bool tmp16 = (tmp15 == (int)224);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(156)
						if ((tmp16)){
							HX_STACK_LINE(156)
							tmp3 = (int)3;
						}
						else{
							HX_STACK_LINE(156)
							int tmp17 = (index - (int)4);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(156)
							int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(156)
							{
								HX_STACK_LINE(156)
								int tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(156)
								int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(156)
								tmp18 = tmp20;
							}
							HX_STACK_LINE(156)
							int tmp19 = (int(tmp18) & int((int)248));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(156)
							bool tmp20 = (tmp19 == (int)240);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(156)
							if ((tmp20)){
								HX_STACK_LINE(156)
								tmp3 = (int)4;
							}
							else{
								HX_STACK_LINE(156)
								tmp3 = (int)1;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(156)
		hx::SubEq(index,tmp3);
		HX_STACK_LINE(157)
		++(count);
	}
	HX_STACK_LINE(159)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_Impl__obj,backward_offset_by_code_points,return )


Utf8_Impl__obj::Utf8_Impl__obj()
{
}

bool Utf8_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"charAt") ) { outValue = charAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"substr") ) { outValue = substr_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { outValue = codeUnitAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codePointAt") ) { outValue = codePointAt_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromCodePoint") ) { outValue = fromCodePoint_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromCodePoints") ) { outValue = fromCodePoints_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"codePointCount") ) { outValue = codePointCount_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"codePointWidthAt") ) { outValue = codePointWidthAt_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"offsetByCodePoints") ) { outValue = offsetByCodePoints_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"codePointWidthBefore") ) { outValue = codePointWidthBefore_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"forward_offset_by_code_points") ) { outValue = forward_offset_by_code_points_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"backward_offset_by_code_points") ) { outValue = backward_offset_by_code_points_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromCodePoint","\x19","\x4d","\x4f","\xce"),
	HX_HCSTRING("fromCodePoints","\x3a","\x29","\x14","\xb7"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("codeUnitAt","\xa4","\x71","\x4e","\x2b"),
	HX_HCSTRING("codePointAt","\xb6","\x47","\xf4","\x4b"),
	HX_HCSTRING("charAt","\x69","\x79","\x75","\xb7"),
	HX_HCSTRING("codePointCount","\xec","\x2d","\xd7","\x2e"),
	HX_HCSTRING("codePointWidthAt","\xf6","\x26","\x17","\x09"),
	HX_HCSTRING("codePointWidthBefore","\x02","\xe4","\x4d","\xc6"),
	HX_HCSTRING("offsetByCodePoints","\x1a","\xf8","\x61","\x6c"),
	HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("forward_offset_by_code_points","\xbf","\x71","\x4d","\xf8"),
	HX_HCSTRING("backward_offset_by_code_points","\x5d","\x72","\x5a","\xf9"),
	::String(null()) };

void Utf8_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill._Utf8.Utf8_Impl_","\x1f","\x39","\xe0","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utf8_Impl__obj >;
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
} // end namespace unifill
} // end namespace _Utf8
