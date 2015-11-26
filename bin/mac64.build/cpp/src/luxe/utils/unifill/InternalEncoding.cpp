#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Exception
#include <luxe/utils/unifill/Exception.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_InternalEncoding
#include <luxe/utils/unifill/InternalEncoding.h>
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

Void InternalEncoding_obj::__construct()
{
	return null();
}

//InternalEncoding_obj::~InternalEncoding_obj() { }

Dynamic InternalEncoding_obj::__CreateEmpty() { return  new InternalEncoding_obj; }
hx::ObjectPtr< InternalEncoding_obj > InternalEncoding_obj::__new()
{  hx::ObjectPtr< InternalEncoding_obj > _result_ = new InternalEncoding_obj();
	_result_->__construct();
	return _result_;}

Dynamic InternalEncoding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InternalEncoding_obj > _result_ = new InternalEncoding_obj();
	_result_->__construct();
	return _result_;}

::String InternalEncoding_obj::get_internalEncoding( ){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","get_internalEncoding",0x28a1da27,"luxe.utils.unifill.InternalEncoding.get_internalEncoding","luxe/utils/unifill/InternalEncoding.hx",24,0x3061c49b)
	HX_STACK_LINE(24)
	return HX_HCSTRING("UTF-8","\x32","\x80","\xca","\x28");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InternalEncoding_obj,get_internalEncoding,return )

int InternalEncoding_obj::codeUnitAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codeUnitAt",0x2c559c12,"luxe.utils.unifill.InternalEncoding.codeUnitAt","luxe/utils/unifill/InternalEncoding.hx",35,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(36)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	int tmp1 = s.cca(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codeUnitAt,return )

int InternalEncoding_obj::codePointAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointAt",0x31323d88,"luxe.utils.unifill.InternalEncoding.codePointAt","luxe/utils/unifill/InternalEncoding.hx",43,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(44)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	int tmp2 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointAt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointAt,return )

::String InternalEncoding_obj::charAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","charAt",0x38df54d7,"luxe.utils.unifill.InternalEncoding.charAt","luxe/utils/unifill/InternalEncoding.hx",51,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(52)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::String this1 = s;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(52)
					{
						HX_STACK_LINE(52)
						int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(52)
						int tmp5 = this1.cca(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(52)
						int c = tmp5;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(52)
						bool tmp6 = (c < (int)192);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(52)
						if ((tmp6)){
							HX_STACK_LINE(52)
							tmp3 = (int)1;
						}
						else{
							HX_STACK_LINE(52)
							bool tmp7 = (c < (int)224);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(52)
							if ((tmp7)){
								HX_STACK_LINE(52)
								tmp3 = (int)2;
							}
							else{
								HX_STACK_LINE(52)
								bool tmp8 = (c < (int)240);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(52)
								if ((tmp8)){
									HX_STACK_LINE(52)
									tmp3 = (int)3;
								}
								else{
									HX_STACK_LINE(52)
									bool tmp9 = (c < (int)248);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(52)
									if ((tmp9)){
										HX_STACK_LINE(52)
										tmp3 = (int)4;
									}
									else{
										HX_STACK_LINE(52)
										tmp3 = (int)1;
									}
								}
							}
						}
					}
					HX_STACK_LINE(52)
					Dynamic len = tmp3;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(52)
					{
						HX_STACK_LINE(52)
						int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(52)
						Dynamic tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(52)
						::String tmp6 = this1.substr(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(52)
						::String s1 = tmp6;		HX_STACK_VAR(s1,"s1");
						HX_STACK_LINE(52)
						tmp2 = s1;
					}
				}
				HX_STACK_LINE(52)
				::String s1 = tmp2;		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(52)
				tmp1 = s1;
			}
		}
		HX_STACK_LINE(52)
		::String this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(52)
		tmp = this1;
	}
	HX_STACK_LINE(52)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,charAt,return )

int InternalEncoding_obj::codePointCount( ::String s,int beginIndex,int endIndex){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointCount",0xe9cf275a,"luxe.utils.unifill.InternalEncoding.codePointCount","luxe/utils/unifill/InternalEncoding.hx",59,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
	HX_STACK_LINE(60)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	int tmp2 = endIndex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	int tmp3 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,codePointCount,return )

int InternalEncoding_obj::codePointWidthAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointWidthAt",0x6d12d7e4,"luxe.utils.unifill.InternalEncoding.codePointWidthAt","luxe/utils/unifill/InternalEncoding.hx",67,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(68)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		int tmp2 = s.cca(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		int c = tmp2;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(68)
		bool tmp3 = (c < (int)192);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		if ((tmp3)){
			HX_STACK_LINE(68)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(68)
			bool tmp4 = (c < (int)224);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			if ((tmp4)){
				HX_STACK_LINE(68)
				tmp = (int)2;
			}
			else{
				HX_STACK_LINE(68)
				bool tmp5 = (c < (int)240);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				if ((tmp5)){
					HX_STACK_LINE(68)
					tmp = (int)3;
				}
				else{
					HX_STACK_LINE(68)
					bool tmp6 = (c < (int)248);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(68)
					if ((tmp6)){
						HX_STACK_LINE(68)
						tmp = (int)4;
					}
					else{
						HX_STACK_LINE(68)
						tmp = (int)1;
					}
				}
			}
		}
	}
	HX_STACK_LINE(68)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointWidthAt,return )

int InternalEncoding_obj::codePointWidthBefore( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","codePointWidthBefore",0xd33fa3f0,"luxe.utils.unifill.InternalEncoding.codePointWidthBefore","luxe/utils/unifill/InternalEncoding.hx",75,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(76)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		::String this1 = s;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int tmp1 = (index - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(76)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				int tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				int tmp4 = this1.cca(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(76)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(76)
			int c1 = tmp2;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(76)
			bool tmp3 = (c1 < (int)128);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			if ((tmp4)){
				HX_STACK_LINE(76)
				tmp5 = (c1 >= (int)192);
			}
			else{
				HX_STACK_LINE(76)
				tmp5 = true;
			}
			HX_STACK_LINE(76)
			if ((tmp5)){
				HX_STACK_LINE(76)
				tmp = (int)1;
			}
			else{
				HX_STACK_LINE(76)
				int tmp6 = (index - (int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(76)
					int tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(76)
					int tmp9 = this1.cca(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(76)
					tmp7 = tmp9;
				}
				HX_STACK_LINE(76)
				int tmp8 = (int(tmp7) & int((int)224));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(76)
				bool tmp9 = (tmp8 == (int)192);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(76)
				if ((tmp9)){
					HX_STACK_LINE(76)
					tmp = (int)2;
				}
				else{
					HX_STACK_LINE(76)
					int tmp10 = (index - (int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(76)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(76)
						int tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(76)
						int tmp13 = this1.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(76)
						tmp11 = tmp13;
					}
					HX_STACK_LINE(76)
					int tmp12 = (int(tmp11) & int((int)240));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(76)
					bool tmp13 = (tmp12 == (int)224);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(76)
					if ((tmp13)){
						HX_STACK_LINE(76)
						tmp = (int)3;
					}
					else{
						HX_STACK_LINE(76)
						int tmp14 = (index - (int)4);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(76)
						int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(76)
						{
							HX_STACK_LINE(76)
							int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(76)
							int tmp17 = this1.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(76)
							tmp15 = tmp17;
						}
						HX_STACK_LINE(76)
						int tmp16 = (int(tmp15) & int((int)248));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(76)
						bool tmp17 = (tmp16 == (int)240);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(76)
						if ((tmp17)){
							HX_STACK_LINE(76)
							tmp = (int)4;
						}
						else{
							HX_STACK_LINE(76)
							tmp = (int)1;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(76)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointWidthBefore,return )

int InternalEncoding_obj::offsetByCodePoints( ::String s,int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","offsetByCodePoints",0x8b5e4088,"luxe.utils.unifill.InternalEncoding.offsetByCodePoints","luxe/utils/unifill/InternalEncoding.hx",83,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(84)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		::String this1 = s;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(84)
		bool tmp1 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		if ((tmp1)){
			HX_STACK_LINE(84)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(84)
			int tmp2 = this1.length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			int len = tmp2;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(84)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				bool tmp3 = (i < codePointOffset);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(84)
				if ((tmp3)){
					HX_STACK_LINE(84)
					tmp4 = (index1 < len);
				}
				else{
					HX_STACK_LINE(84)
					tmp4 = false;
				}
				HX_STACK_LINE(84)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				if ((tmp5)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					int tmp7 = index1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(84)
					int tmp8 = this1.cca(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(84)
					int c = tmp8;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(84)
					bool tmp9 = (c < (int)192);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(84)
					if ((tmp9)){
						HX_STACK_LINE(84)
						tmp6 = (int)1;
					}
					else{
						HX_STACK_LINE(84)
						bool tmp10 = (c < (int)224);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(84)
						if ((tmp10)){
							HX_STACK_LINE(84)
							tmp6 = (int)2;
						}
						else{
							HX_STACK_LINE(84)
							bool tmp11 = (c < (int)240);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(84)
							if ((tmp11)){
								HX_STACK_LINE(84)
								tmp6 = (int)3;
							}
							else{
								HX_STACK_LINE(84)
								bool tmp12 = (c < (int)248);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(84)
								if ((tmp12)){
									HX_STACK_LINE(84)
									tmp6 = (int)4;
								}
								else{
									HX_STACK_LINE(84)
									tmp6 = (int)1;
								}
							}
						}
					}
				}
				HX_STACK_LINE(84)
				hx::AddEq(index1,tmp6);
				HX_STACK_LINE(84)
				++(i);
			}
			HX_STACK_LINE(84)
			tmp = index1;
		}
		else{
			HX_STACK_LINE(84)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(84)
			int count = (int)0;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(84)
				int tmp3 = codePointOffset;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(84)
				bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				if ((tmp5)){
					HX_STACK_LINE(84)
					tmp6 = ((int)0 < index1);
				}
				else{
					HX_STACK_LINE(84)
					tmp6 = false;
				}
				HX_STACK_LINE(84)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				if ((tmp7)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					::String this2 = this1;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						int tmp9 = (index1 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(84)
						int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(84)
						{
							HX_STACK_LINE(84)
							int tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(84)
							int tmp12 = this2.cca(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(84)
							tmp10 = tmp12;
						}
						HX_STACK_LINE(84)
						int c1 = tmp10;		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(84)
						bool tmp11 = (c1 < (int)128);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(84)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(84)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(84)
						if ((tmp12)){
							HX_STACK_LINE(84)
							tmp13 = (c1 >= (int)192);
						}
						else{
							HX_STACK_LINE(84)
							tmp13 = true;
						}
						HX_STACK_LINE(84)
						if ((tmp13)){
							HX_STACK_LINE(84)
							tmp8 = (int)1;
						}
						else{
							HX_STACK_LINE(84)
							int tmp14 = (index1 - (int)2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(84)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(84)
							{
								HX_STACK_LINE(84)
								int tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(84)
								int tmp17 = this2.cca(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(84)
								tmp15 = tmp17;
							}
							HX_STACK_LINE(84)
							int tmp16 = (int(tmp15) & int((int)224));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(84)
							bool tmp17 = (tmp16 == (int)192);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(84)
							if ((tmp17)){
								HX_STACK_LINE(84)
								tmp8 = (int)2;
							}
							else{
								HX_STACK_LINE(84)
								int tmp18 = (index1 - (int)3);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(84)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(84)
								{
									HX_STACK_LINE(84)
									int tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(84)
									int tmp21 = this2.cca(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(84)
									tmp19 = tmp21;
								}
								HX_STACK_LINE(84)
								int tmp20 = (int(tmp19) & int((int)240));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(84)
								bool tmp21 = (tmp20 == (int)224);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(84)
								if ((tmp21)){
									HX_STACK_LINE(84)
									tmp8 = (int)3;
								}
								else{
									HX_STACK_LINE(84)
									int tmp22 = (index1 - (int)4);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(84)
									int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(84)
									{
										HX_STACK_LINE(84)
										int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(84)
										int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(84)
										tmp23 = tmp25;
									}
									HX_STACK_LINE(84)
									int tmp24 = (int(tmp23) & int((int)248));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(84)
									bool tmp25 = (tmp24 == (int)240);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(84)
									if ((tmp25)){
										HX_STACK_LINE(84)
										tmp8 = (int)4;
									}
									else{
										HX_STACK_LINE(84)
										tmp8 = (int)1;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(84)
				hx::SubEq(index1,tmp8);
				HX_STACK_LINE(84)
				++(count);
			}
			HX_STACK_LINE(84)
			tmp = index1;
		}
	}
	HX_STACK_LINE(84)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,offsetByCodePoints,return )

int InternalEncoding_obj::backwardOffsetByCodePoints( ::String s,int index,int codePointOffset){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","backwardOffsetByCodePoints",0x9c28134b,"luxe.utils.unifill.InternalEncoding.backwardOffsetByCodePoints","luxe/utils/unifill/InternalEncoding.hx",92,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(codePointOffset,"codePointOffset")
	HX_STACK_LINE(93)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::String this1 = s;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(93)
		int tmp1 = codePointOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		int tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		int codePointOffset1 = tmp2;		HX_STACK_VAR(codePointOffset1,"codePointOffset1");
		HX_STACK_LINE(93)
		bool tmp3 = (codePointOffset1 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		if ((tmp3)){
			HX_STACK_LINE(93)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(93)
			int tmp4 = this1.length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			int len = tmp4;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(93)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(93)
			while((true)){
				HX_STACK_LINE(93)
				bool tmp5 = (i < codePointOffset1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(93)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(93)
				if ((tmp5)){
					HX_STACK_LINE(93)
					tmp6 = (index1 < len);
				}
				else{
					HX_STACK_LINE(93)
					tmp6 = false;
				}
				HX_STACK_LINE(93)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				if ((tmp7)){
					HX_STACK_LINE(93)
					break;
				}
				HX_STACK_LINE(93)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				{
					HX_STACK_LINE(93)
					int tmp9 = index1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(93)
					int tmp10 = this1.cca(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(93)
					int c = tmp10;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(93)
					bool tmp11 = (c < (int)192);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(93)
					if ((tmp11)){
						HX_STACK_LINE(93)
						tmp8 = (int)1;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp12 = (c < (int)224);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(93)
						if ((tmp12)){
							HX_STACK_LINE(93)
							tmp8 = (int)2;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp13 = (c < (int)240);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(93)
							if ((tmp13)){
								HX_STACK_LINE(93)
								tmp8 = (int)3;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp14 = (c < (int)248);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(93)
								if ((tmp14)){
									HX_STACK_LINE(93)
									tmp8 = (int)4;
								}
								else{
									HX_STACK_LINE(93)
									tmp8 = (int)1;
								}
							}
						}
					}
				}
				HX_STACK_LINE(93)
				hx::AddEq(index1,tmp8);
				HX_STACK_LINE(93)
				++(i);
			}
			HX_STACK_LINE(93)
			tmp = index1;
		}
		else{
			HX_STACK_LINE(93)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(93)
			int count = (int)0;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(93)
			while((true)){
				HX_STACK_LINE(93)
				int tmp4 = count;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(93)
				int tmp5 = codePointOffset1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(93)
				int tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(93)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				if ((tmp7)){
					HX_STACK_LINE(93)
					tmp8 = ((int)0 < index1);
				}
				else{
					HX_STACK_LINE(93)
					tmp8 = false;
				}
				HX_STACK_LINE(93)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				if ((tmp9)){
					HX_STACK_LINE(93)
					break;
				}
				HX_STACK_LINE(93)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(93)
				{
					HX_STACK_LINE(93)
					::String this2 = this1;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					{
						HX_STACK_LINE(93)
						int tmp11 = (index1 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(93)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(93)
						{
							HX_STACK_LINE(93)
							int tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(93)
							int tmp14 = this2.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(93)
							tmp12 = tmp14;
						}
						HX_STACK_LINE(93)
						int c1 = tmp12;		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(93)
						bool tmp13 = (c1 < (int)128);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(93)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(93)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(93)
						if ((tmp14)){
							HX_STACK_LINE(93)
							tmp15 = (c1 >= (int)192);
						}
						else{
							HX_STACK_LINE(93)
							tmp15 = true;
						}
						HX_STACK_LINE(93)
						if ((tmp15)){
							HX_STACK_LINE(93)
							tmp10 = (int)1;
						}
						else{
							HX_STACK_LINE(93)
							int tmp16 = (index1 - (int)2);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(93)
							int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								int tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(93)
								int tmp19 = this2.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(93)
								tmp17 = tmp19;
							}
							HX_STACK_LINE(93)
							int tmp18 = (int(tmp17) & int((int)224));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(93)
							bool tmp19 = (tmp18 == (int)192);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(93)
							if ((tmp19)){
								HX_STACK_LINE(93)
								tmp10 = (int)2;
							}
							else{
								HX_STACK_LINE(93)
								int tmp20 = (index1 - (int)3);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(93)
								int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(93)
									int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(93)
									tmp21 = tmp23;
								}
								HX_STACK_LINE(93)
								int tmp22 = (int(tmp21) & int((int)240));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(93)
								bool tmp23 = (tmp22 == (int)224);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(93)
								if ((tmp23)){
									HX_STACK_LINE(93)
									tmp10 = (int)3;
								}
								else{
									HX_STACK_LINE(93)
									int tmp24 = (index1 - (int)4);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(93)
									int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(93)
										int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(93)
										tmp25 = tmp27;
									}
									HX_STACK_LINE(93)
									int tmp26 = (int(tmp25) & int((int)248));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(93)
									bool tmp27 = (tmp26 == (int)240);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(93)
									if ((tmp27)){
										HX_STACK_LINE(93)
										tmp10 = (int)4;
									}
									else{
										HX_STACK_LINE(93)
										tmp10 = (int)1;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(93)
				hx::SubEq(index1,tmp10);
				HX_STACK_LINE(93)
				++(count);
			}
			HX_STACK_LINE(93)
			tmp = index1;
		}
	}
	HX_STACK_LINE(93)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,backwardOffsetByCodePoints,return )

::String InternalEncoding_obj::fromCodePoint( int codePoint){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","fromCodePoint",0xf753db6b,"luxe.utils.unifill.InternalEncoding.fromCodePoint","luxe/utils/unifill/InternalEncoding.hx",99,0x3061c49b)
	HX_STACK_ARG(codePoint,"codePoint")
	HX_STACK_LINE(100)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::haxe::io::BytesBuffer tmp2 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			::haxe::io::BytesBuffer buf = tmp2;		HX_STACK_VAR(buf,"buf");
			HX_STACK_LINE(100)
			Dynamic tmp3 = buf->addByte_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			int tmp4 = codePoint;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp3,tmp4);
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				{
					HX_STACK_LINE(100)
					::haxe::io::Bytes tmp6 = buf->getBytes();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(100)
					::haxe::io::Bytes b = tmp6;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						::String tmp7 = b->toString();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(100)
						::String s = tmp7;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(100)
						tmp5 = s;
					}
				}
				HX_STACK_LINE(100)
				::String s = tmp5;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(100)
				tmp1 = s;
			}
		}
		HX_STACK_LINE(100)
		::String this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(100)
		tmp = this1;
	}
	HX_STACK_LINE(100)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,fromCodePoint,return )

::String InternalEncoding_obj::fromCodePoints( Dynamic codePoints){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","fromCodePoints",0x720c22a8,"luxe.utils.unifill.InternalEncoding.fromCodePoints","luxe/utils/unifill/InternalEncoding.hx",106,0x3061c49b)
	HX_STACK_ARG(codePoints,"codePoints")
	HX_STACK_LINE(107)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::haxe::io::BytesBuffer tmp2 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			::haxe::io::BytesBuffer buf = tmp2;		HX_STACK_VAR(buf,"buf");
			HX_STACK_LINE(107)
			Dynamic tmp3 = codePoints->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp3);  __it->hasNext(); ){
				int c = __it->next();
				{
					HX_STACK_LINE(107)
					Dynamic tmp4 = buf->addByte_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(107)
					int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(107)
					::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp4,tmp5);
				}
;
			}
			HX_STACK_LINE(107)
			{
				HX_STACK_LINE(107)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					::haxe::io::Bytes tmp5 = buf->getBytes();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(107)
					::haxe::io::Bytes b = tmp5;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::String tmp6 = b->toString();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(107)
						::String s = tmp6;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(107)
						tmp4 = s;
					}
				}
				HX_STACK_LINE(107)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(107)
				tmp1 = s;
			}
		}
		HX_STACK_LINE(107)
		::String this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(107)
		tmp = this1;
	}
	HX_STACK_LINE(107)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,fromCodePoints,return )

Void InternalEncoding_obj::validate( ::String s){
{
		HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","validate",0x190de384,"luxe.utils.unifill.InternalEncoding.validate","luxe/utils/unifill/InternalEncoding.hx",116,0x3061c49b)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(117)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::validate(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,validate,(void))

bool InternalEncoding_obj::isValidString( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill.InternalEncoding","isValidString",0x6c95d575,"luxe.utils.unifill.InternalEncoding.isValidString","luxe/utils/unifill/InternalEncoding.hx",124,0x3061c49b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(124)
	try
	{
	HX_STACK_CATCHABLE(::luxe::utils::unifill::Exception, 0);
	{
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(125)
			::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::validate(tmp);
		}
		HX_STACK_LINE(126)
		return true;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::luxe::utils::unifill::Exception >() ){
			HX_STACK_BEGIN_CATCH
			::luxe::utils::unifill::Exception e = __e;{
				HX_STACK_LINE(128)
				switch( (int)(e->__Index())){
					case (int)1: {
						HX_STACK_LINE(128)
						int tmp = (::luxe::utils::unifill::Exception(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(128)
						int index = tmp;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(130)
						return false;
					}
					;break;
					default: {
						HX_STACK_LINE(132)
						::luxe::utils::unifill::Exception tmp = e;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(132)
						HX_STACK_DO_THROW(tmp);
					}
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(124)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,isValidString,return )


InternalEncoding_obj::InternalEncoding_obj()
{
}

bool InternalEncoding_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"charAt") ) { outValue = charAt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { outValue = codeUnitAt_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codePointAt") ) { outValue = codePointAt_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromCodePoint") ) { outValue = fromCodePoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidString") ) { outValue = isValidString_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"codePointCount") ) { outValue = codePointCount_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromCodePoints") ) { outValue = fromCodePoints_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internalEncoding") ) { if (inCallProp == hx::paccAlways) { outValue = get_internalEncoding(); return true; } }
		if (HX_FIELD_EQ(inName,"codePointWidthAt") ) { outValue = codePointWidthAt_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"offsetByCodePoints") ) { outValue = offsetByCodePoints_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_internalEncoding") ) { outValue = get_internalEncoding_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"codePointWidthBefore") ) { outValue = codePointWidthBefore_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backwardOffsetByCodePoints") ) { outValue = backwardOffsetByCodePoints_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InternalEncoding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InternalEncoding_obj::__mClass,"__mClass");
};

#endif

hx::Class InternalEncoding_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_internalEncoding","\x39","\x1a","\xb0","\x1b"),
	HX_HCSTRING("codeUnitAt","\xa4","\x71","\x4e","\x2b"),
	HX_HCSTRING("codePointAt","\xb6","\x47","\xf4","\x4b"),
	HX_HCSTRING("charAt","\x69","\x79","\x75","\xb7"),
	HX_HCSTRING("codePointCount","\xec","\x2d","\xd7","\x2e"),
	HX_HCSTRING("codePointWidthAt","\xf6","\x26","\x17","\x09"),
	HX_HCSTRING("codePointWidthBefore","\x02","\xe4","\x4d","\xc6"),
	HX_HCSTRING("offsetByCodePoints","\x1a","\xf8","\x61","\x6c"),
	HX_HCSTRING("backwardOffsetByCodePoints","\xdd","\xac","\xe8","\x97"),
	HX_HCSTRING("fromCodePoint","\x19","\x4d","\x4f","\xce"),
	HX_HCSTRING("fromCodePoints","\x3a","\x29","\x14","\xb7"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("isValidString","\x23","\x47","\x91","\x43"),
	::String(null()) };

void InternalEncoding_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill.InternalEncoding","\x40","\x63","\x30","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InternalEncoding_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InternalEncoding_obj >;
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
