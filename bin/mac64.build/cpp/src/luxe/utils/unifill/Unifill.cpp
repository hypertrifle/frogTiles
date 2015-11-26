#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_InternalEncodingIter
#include <luxe/utils/unifill/InternalEncodingIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Unifill
#include <luxe/utils/unifill/Unifill.h>
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

Void Unifill_obj::__construct()
{
	return null();
}

//Unifill_obj::~Unifill_obj() { }

Dynamic Unifill_obj::__CreateEmpty() { return  new Unifill_obj; }
hx::ObjectPtr< Unifill_obj > Unifill_obj::__new()
{  hx::ObjectPtr< Unifill_obj > _result_ = new Unifill_obj();
	_result_->__construct();
	return _result_;}

Dynamic Unifill_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Unifill_obj > _result_ = new Unifill_obj();
	_result_->__construct();
	return _result_;}

int Unifill_obj::uLength( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uLength",0x79ec6e30,"luxe.utils.unifill.Unifill.uLength","luxe/utils/unifill/Unifill.hx",14,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(14)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	int tmp1 = s.length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	int tmp2 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp,(int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unifill_obj,uLength,return )

::String Unifill_obj::uCharAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uCharAt",0x925a52b3,"luxe.utils.unifill.Unifill.uCharAt","luxe/utils/unifill/Unifill.hx",19,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(21)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		int tmp3 = ::haxe::Utf8_obj::charCodeAt(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		int codePoint = tmp3;		HX_STACK_VAR(codePoint,"codePoint");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				::haxe::io::BytesBuffer tmp5 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::haxe::io::BytesBuffer buf = tmp5;		HX_STACK_VAR(buf,"buf");
				HX_STACK_LINE(21)
				Dynamic tmp6 = buf->addByte_dyn();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				int tmp7 = codePoint;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(21)
				::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp6,tmp7);
				HX_STACK_LINE(21)
				{
					HX_STACK_LINE(21)
					::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(21)
					{
						HX_STACK_LINE(21)
						::haxe::io::Bytes tmp9 = buf->getBytes();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(21)
						::haxe::io::Bytes b = tmp9;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(21)
						{
							HX_STACK_LINE(21)
							::String tmp10 = b->toString();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(21)
							::String s1 = tmp10;		HX_STACK_VAR(s1,"s1");
							HX_STACK_LINE(21)
							tmp8 = s1;
						}
					}
					HX_STACK_LINE(21)
					::String s1 = tmp8;		HX_STACK_VAR(s1,"s1");
					HX_STACK_LINE(21)
					tmp4 = s1;
				}
			}
			HX_STACK_LINE(21)
			::String this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(21)
			tmp = this1;
		}
	}
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uCharAt,return )

int Unifill_obj::uCharCodeAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uCharCodeAt",0xe1c12d40,"luxe.utils.unifill.Unifill.uCharCodeAt","luxe/utils/unifill/Unifill.hx",31,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(33)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	int tmp2 = ::haxe::Utf8_obj::charCodeAt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uCharCodeAt,return )

int Unifill_obj::uCodePointAt( ::String s,int index){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uCodePointAt",0x7e45822c,"luxe.utils.unifill.Unifill.uCodePointAt","luxe/utils/unifill/Unifill.hx",43,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(44)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	int tmp2 = ::haxe::Utf8_obj::charCodeAt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uCodePointAt,return )

int Unifill_obj::uIndexOf( ::String s,::String value,hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uIndexOf",0x8e18903f,"luxe.utils.unifill.Unifill.uIndexOf","luxe/utils/unifill/Unifill.hx",52,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(startIndex,"startIndex")
{
		HX_STACK_LINE(53)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::String this1 = s;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(53)
			bool tmp2 = (startIndex >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			if ((tmp2)){
				HX_STACK_LINE(53)
				int index = (int)0;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(53)
				int tmp3 = this1.length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				int len = tmp3;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(53)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(53)
				while((true)){
					HX_STACK_LINE(53)
					bool tmp4 = (i < startIndex);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(53)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(53)
					if ((tmp4)){
						HX_STACK_LINE(53)
						tmp5 = (index < len);
					}
					else{
						HX_STACK_LINE(53)
						tmp5 = false;
					}
					HX_STACK_LINE(53)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(53)
					if ((tmp6)){
						HX_STACK_LINE(53)
						break;
					}
					HX_STACK_LINE(53)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					{
						HX_STACK_LINE(53)
						int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(53)
						int tmp9 = this1.cca(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(53)
						int c = tmp9;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(53)
						bool tmp10 = (c < (int)192);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(53)
						if ((tmp10)){
							HX_STACK_LINE(53)
							tmp7 = (int)1;
						}
						else{
							HX_STACK_LINE(53)
							bool tmp11 = (c < (int)224);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(53)
							if ((tmp11)){
								HX_STACK_LINE(53)
								tmp7 = (int)2;
							}
							else{
								HX_STACK_LINE(53)
								bool tmp12 = (c < (int)240);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(53)
								if ((tmp12)){
									HX_STACK_LINE(53)
									tmp7 = (int)3;
								}
								else{
									HX_STACK_LINE(53)
									bool tmp13 = (c < (int)248);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(53)
									if ((tmp13)){
										HX_STACK_LINE(53)
										tmp7 = (int)4;
									}
									else{
										HX_STACK_LINE(53)
										tmp7 = (int)1;
									}
								}
							}
						}
					}
					HX_STACK_LINE(53)
					hx::AddEq(index,tmp7);
					HX_STACK_LINE(53)
					++(i);
				}
				HX_STACK_LINE(53)
				tmp1 = index;
			}
			else{
				HX_STACK_LINE(53)
				int index = (int)0;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(53)
				int count = (int)0;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(53)
				while((true)){
					HX_STACK_LINE(53)
					int tmp3 = count;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(53)
					int tmp4 = startIndex;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(53)
					int tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(53)
					bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(53)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					if ((tmp6)){
						HX_STACK_LINE(53)
						tmp7 = ((int)0 < index);
					}
					else{
						HX_STACK_LINE(53)
						tmp7 = false;
					}
					HX_STACK_LINE(53)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					if ((tmp8)){
						HX_STACK_LINE(53)
						break;
					}
					HX_STACK_LINE(53)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(53)
					{
						HX_STACK_LINE(53)
						::String this2 = this1;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(53)
						{
							HX_STACK_LINE(53)
							int tmp10 = (index - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(53)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(53)
							{
								HX_STACK_LINE(53)
								int tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(53)
								int tmp13 = this2.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(53)
								tmp11 = tmp13;
							}
							HX_STACK_LINE(53)
							int c1 = tmp11;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(53)
							bool tmp12 = (c1 < (int)128);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(53)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(53)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(53)
							if ((tmp13)){
								HX_STACK_LINE(53)
								tmp14 = (c1 >= (int)192);
							}
							else{
								HX_STACK_LINE(53)
								tmp14 = true;
							}
							HX_STACK_LINE(53)
							if ((tmp14)){
								HX_STACK_LINE(53)
								tmp9 = (int)1;
							}
							else{
								HX_STACK_LINE(53)
								int tmp15 = (index - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(53)
								int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(53)
								{
									HX_STACK_LINE(53)
									int tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(53)
									int tmp18 = this2.cca(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(53)
									tmp16 = tmp18;
								}
								HX_STACK_LINE(53)
								int tmp17 = (int(tmp16) & int((int)224));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(53)
								bool tmp18 = (tmp17 == (int)192);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(53)
								if ((tmp18)){
									HX_STACK_LINE(53)
									tmp9 = (int)2;
								}
								else{
									HX_STACK_LINE(53)
									int tmp19 = (index - (int)3);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(53)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(53)
									{
										HX_STACK_LINE(53)
										int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(53)
										int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(53)
										tmp20 = tmp22;
									}
									HX_STACK_LINE(53)
									int tmp21 = (int(tmp20) & int((int)240));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(53)
									bool tmp22 = (tmp21 == (int)224);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(53)
									if ((tmp22)){
										HX_STACK_LINE(53)
										tmp9 = (int)3;
									}
									else{
										HX_STACK_LINE(53)
										int tmp23 = (index - (int)4);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(53)
										int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(53)
										{
											HX_STACK_LINE(53)
											int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(53)
											int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(53)
											tmp24 = tmp26;
										}
										HX_STACK_LINE(53)
										int tmp25 = (int(tmp24) & int((int)248));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(53)
										bool tmp26 = (tmp25 == (int)240);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(53)
										if ((tmp26)){
											HX_STACK_LINE(53)
											tmp9 = (int)4;
										}
										else{
											HX_STACK_LINE(53)
											tmp9 = (int)1;
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(53)
					hx::SubEq(index,tmp9);
					HX_STACK_LINE(53)
					++(count);
				}
				HX_STACK_LINE(53)
				tmp1 = index;
			}
		}
		HX_STACK_LINE(53)
		int tmp2 = s.indexOf(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		int index = tmp2;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(54)
		bool tmp3 = (index >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		if ((tmp3)){
			HX_STACK_LINE(54)
			::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			tmp4 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp5,(int)0,tmp6);
		}
		else{
			HX_STACK_LINE(54)
			tmp4 = (int)-1;
		}
		HX_STACK_LINE(54)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Unifill_obj,uIndexOf,return )

int Unifill_obj::uLastIndexOf( ::String s,::String value,Dynamic startIndex){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uLastIndexOf",0xc7bc3789,"luxe.utils.unifill.Unifill.uLastIndexOf","luxe/utils/unifill/Unifill.hx",62,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_LINE(63)
	bool tmp = (startIndex == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	if ((tmp)){
		HX_STACK_LINE(64)
		int tmp1 = (s.length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		startIndex = tmp1;
	}
	HX_STACK_LINE(65)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		int codePointOffset = startIndex;		HX_STACK_VAR(codePointOffset,"codePointOffset");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::String this1 = s;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(65)
			bool tmp3 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			if ((tmp3)){
				HX_STACK_LINE(65)
				int index = (int)0;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(65)
				int tmp4 = this1.length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(65)
				int len = tmp4;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(65)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(65)
				while((true)){
					HX_STACK_LINE(65)
					bool tmp5 = (i < codePointOffset);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(65)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(65)
					if ((tmp5)){
						HX_STACK_LINE(65)
						tmp6 = (index < len);
					}
					else{
						HX_STACK_LINE(65)
						tmp6 = false;
					}
					HX_STACK_LINE(65)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(65)
					if ((tmp7)){
						HX_STACK_LINE(65)
						break;
					}
					HX_STACK_LINE(65)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(65)
						int tmp10 = this1.cca(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(65)
						int c = tmp10;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(65)
						bool tmp11 = (c < (int)192);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(65)
						if ((tmp11)){
							HX_STACK_LINE(65)
							tmp8 = (int)1;
						}
						else{
							HX_STACK_LINE(65)
							bool tmp12 = (c < (int)224);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(65)
							if ((tmp12)){
								HX_STACK_LINE(65)
								tmp8 = (int)2;
							}
							else{
								HX_STACK_LINE(65)
								bool tmp13 = (c < (int)240);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(65)
								if ((tmp13)){
									HX_STACK_LINE(65)
									tmp8 = (int)3;
								}
								else{
									HX_STACK_LINE(65)
									bool tmp14 = (c < (int)248);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(65)
									if ((tmp14)){
										HX_STACK_LINE(65)
										tmp8 = (int)4;
									}
									else{
										HX_STACK_LINE(65)
										tmp8 = (int)1;
									}
								}
							}
						}
					}
					HX_STACK_LINE(65)
					hx::AddEq(index,tmp8);
					HX_STACK_LINE(65)
					++(i);
				}
				HX_STACK_LINE(65)
				tmp2 = index;
			}
			else{
				HX_STACK_LINE(65)
				int index = (int)0;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(65)
				int count = (int)0;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(65)
				while((true)){
					HX_STACK_LINE(65)
					int tmp4 = count;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(65)
					int tmp5 = codePointOffset;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(65)
					int tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(65)
					bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(65)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(65)
					if ((tmp7)){
						HX_STACK_LINE(65)
						tmp8 = ((int)0 < index);
					}
					else{
						HX_STACK_LINE(65)
						tmp8 = false;
					}
					HX_STACK_LINE(65)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(65)
					if ((tmp9)){
						HX_STACK_LINE(65)
						break;
					}
					HX_STACK_LINE(65)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						::String this2 = this1;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(65)
						{
							HX_STACK_LINE(65)
							int tmp11 = (index - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(65)
							int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(65)
							{
								HX_STACK_LINE(65)
								int tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(65)
								int tmp14 = this2.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(65)
								tmp12 = tmp14;
							}
							HX_STACK_LINE(65)
							int c1 = tmp12;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(65)
							bool tmp13 = (c1 < (int)128);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(65)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(65)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(65)
							if ((tmp14)){
								HX_STACK_LINE(65)
								tmp15 = (c1 >= (int)192);
							}
							else{
								HX_STACK_LINE(65)
								tmp15 = true;
							}
							HX_STACK_LINE(65)
							if ((tmp15)){
								HX_STACK_LINE(65)
								tmp10 = (int)1;
							}
							else{
								HX_STACK_LINE(65)
								int tmp16 = (index - (int)2);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(65)
								int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(65)
								{
									HX_STACK_LINE(65)
									int tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(65)
									int tmp19 = this2.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(65)
									tmp17 = tmp19;
								}
								HX_STACK_LINE(65)
								int tmp18 = (int(tmp17) & int((int)224));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(65)
								bool tmp19 = (tmp18 == (int)192);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(65)
								if ((tmp19)){
									HX_STACK_LINE(65)
									tmp10 = (int)2;
								}
								else{
									HX_STACK_LINE(65)
									int tmp20 = (index - (int)3);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(65)
									int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(65)
									{
										HX_STACK_LINE(65)
										int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(65)
										int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(65)
										tmp21 = tmp23;
									}
									HX_STACK_LINE(65)
									int tmp22 = (int(tmp21) & int((int)240));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(65)
									bool tmp23 = (tmp22 == (int)224);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(65)
									if ((tmp23)){
										HX_STACK_LINE(65)
										tmp10 = (int)3;
									}
									else{
										HX_STACK_LINE(65)
										int tmp24 = (index - (int)4);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(65)
										int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(65)
										{
											HX_STACK_LINE(65)
											int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(65)
											int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(65)
											tmp25 = tmp27;
										}
										HX_STACK_LINE(65)
										int tmp26 = (int(tmp25) & int((int)248));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(65)
										bool tmp27 = (tmp26 == (int)240);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(65)
										if ((tmp27)){
											HX_STACK_LINE(65)
											tmp10 = (int)4;
										}
										else{
											HX_STACK_LINE(65)
											tmp10 = (int)1;
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(65)
					hx::SubEq(index,tmp10);
					HX_STACK_LINE(65)
					++(count);
				}
				HX_STACK_LINE(65)
				tmp2 = index;
			}
		}
	}
	HX_STACK_LINE(65)
	int tmp3 = s.lastIndexOf(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	int index = tmp3;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(66)
	bool tmp4 = (index >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	if ((tmp4)){
		HX_STACK_LINE(66)
		::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		tmp5 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp6,(int)0,tmp7);
	}
	else{
		HX_STACK_LINE(66)
		tmp5 = (int)-1;
	}
	HX_STACK_LINE(66)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Unifill_obj,uLastIndexOf,return )

Array< ::String > Unifill_obj::uSplit( ::String s,::String delimiter){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uSplit",0x5a3c48d0,"luxe.utils.unifill.Unifill.uSplit","luxe/utils/unifill/Unifill.hx",72,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(delimiter,"delimiter")
	HX_STACK_LINE(73)
	bool tmp = (delimiter.length == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	if ((tmp)){
		HX_STACK_LINE(74)
		Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::luxe::utils::unifill::InternalEncodingIter tmp1 = ::luxe::utils::unifill::InternalEncodingIter_obj::__new(s,(int)0,s.length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(74)
			::luxe::utils::unifill::InternalEncodingIter _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			while((true)){
				HX_STACK_LINE(74)
				bool tmp2 = (_g1->index < _g1->endIndex);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(74)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(74)
				if ((tmp3)){
					HX_STACK_LINE(74)
					break;
				}
				HX_STACK_LINE(74)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					_g1->i = _g1->index;
					HX_STACK_LINE(74)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						int tmp6 = _g1->index;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(74)
						int tmp7 = _g1->string.cca(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(74)
						int c = tmp7;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(74)
						bool tmp8 = (c < (int)192);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(74)
						if ((tmp8)){
							HX_STACK_LINE(74)
							tmp5 = (int)1;
						}
						else{
							HX_STACK_LINE(74)
							bool tmp9 = (c < (int)224);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(74)
							if ((tmp9)){
								HX_STACK_LINE(74)
								tmp5 = (int)2;
							}
							else{
								HX_STACK_LINE(74)
								bool tmp10 = (c < (int)240);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(74)
								if ((tmp10)){
									HX_STACK_LINE(74)
									tmp5 = (int)3;
								}
								else{
									HX_STACK_LINE(74)
									bool tmp11 = (c < (int)248);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(74)
									if ((tmp11)){
										HX_STACK_LINE(74)
										tmp5 = (int)4;
									}
									else{
										HX_STACK_LINE(74)
										tmp5 = (int)1;
									}
								}
							}
						}
					}
					HX_STACK_LINE(74)
					hx::AddEq(_g1->index,tmp5);
					HX_STACK_LINE(74)
					tmp4 = _g1->i;
				}
				HX_STACK_LINE(74)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(74)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::String this1 = s;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(74)
							{
								HX_STACK_LINE(74)
								int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(74)
								{
									HX_STACK_LINE(74)
									int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(74)
									int tmp10 = this1.cca(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(74)
									int c = tmp10;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(74)
									bool tmp11 = (c < (int)192);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(74)
									if ((tmp11)){
										HX_STACK_LINE(74)
										tmp8 = (int)1;
									}
									else{
										HX_STACK_LINE(74)
										bool tmp12 = (c < (int)224);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(74)
										if ((tmp12)){
											HX_STACK_LINE(74)
											tmp8 = (int)2;
										}
										else{
											HX_STACK_LINE(74)
											bool tmp13 = (c < (int)240);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(74)
											if ((tmp13)){
												HX_STACK_LINE(74)
												tmp8 = (int)3;
											}
											else{
												HX_STACK_LINE(74)
												bool tmp14 = (c < (int)248);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(74)
												if ((tmp14)){
													HX_STACK_LINE(74)
													tmp8 = (int)4;
												}
												else{
													HX_STACK_LINE(74)
													tmp8 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(74)
								Dynamic len = tmp8;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(74)
								{
									HX_STACK_LINE(74)
									int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(74)
									Dynamic tmp10 = len;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(74)
									::String tmp11 = this1.substr(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(74)
									::String s1 = tmp11;		HX_STACK_VAR(s1,"s1");
									HX_STACK_LINE(74)
									tmp7 = s1;
								}
							}
							HX_STACK_LINE(74)
							::String s1 = tmp7;		HX_STACK_VAR(s1,"s1");
							HX_STACK_LINE(74)
							tmp6 = s1;
						}
					}
					HX_STACK_LINE(74)
					::String this1 = tmp6;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(74)
					tmp5 = this1;
				}
				HX_STACK_LINE(74)
				_g->push(tmp5);
			}
		}
		HX_STACK_LINE(73)
		return _g;
	}
	else{
		HX_STACK_LINE(76)
		::String tmp1 = delimiter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		return s.split(tmp1);
	}
	HX_STACK_LINE(73)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uSplit,return )

::String Unifill_obj::uSubstr( ::String s,int startIndex,Dynamic length){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uSubstr",0x74efc87b,"luxe.utils.unifill.Unifill.uSubstr","luxe/utils/unifill/Unifill.hx",85,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(86)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(87)
		bool tmp1 = (startIndex >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(87)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(87)
			tmp2 = s.length;
		}
		HX_STACK_LINE(87)
		int index = tmp2;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::String this1 = s;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(86)
			bool tmp3 = (startIndex >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			if ((tmp3)){
				HX_STACK_LINE(86)
				int index1 = index;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(86)
				int tmp4 = this1.length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				int len = tmp4;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(86)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(86)
				while((true)){
					HX_STACK_LINE(86)
					bool tmp5 = (i < startIndex);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(86)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(86)
					if ((tmp5)){
						HX_STACK_LINE(86)
						tmp6 = (index1 < len);
					}
					else{
						HX_STACK_LINE(86)
						tmp6 = false;
					}
					HX_STACK_LINE(86)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(86)
					if ((tmp7)){
						HX_STACK_LINE(86)
						break;
					}
					HX_STACK_LINE(86)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						int tmp9 = index1;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(86)
						int tmp10 = this1.cca(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(86)
						int c = tmp10;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(86)
						bool tmp11 = (c < (int)192);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(86)
						if ((tmp11)){
							HX_STACK_LINE(86)
							tmp8 = (int)1;
						}
						else{
							HX_STACK_LINE(86)
							bool tmp12 = (c < (int)224);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(86)
							if ((tmp12)){
								HX_STACK_LINE(86)
								tmp8 = (int)2;
							}
							else{
								HX_STACK_LINE(86)
								bool tmp13 = (c < (int)240);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(86)
								if ((tmp13)){
									HX_STACK_LINE(86)
									tmp8 = (int)3;
								}
								else{
									HX_STACK_LINE(86)
									bool tmp14 = (c < (int)248);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(86)
									if ((tmp14)){
										HX_STACK_LINE(86)
										tmp8 = (int)4;
									}
									else{
										HX_STACK_LINE(86)
										tmp8 = (int)1;
									}
								}
							}
						}
					}
					HX_STACK_LINE(86)
					hx::AddEq(index1,tmp8);
					HX_STACK_LINE(86)
					++(i);
				}
				HX_STACK_LINE(86)
				tmp = index1;
			}
			else{
				HX_STACK_LINE(86)
				int index1 = index;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(86)
				int count = (int)0;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(86)
				while((true)){
					HX_STACK_LINE(86)
					int tmp4 = count;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(88)
					int tmp5 = startIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(86)
					int tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(86)
					bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(86)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(86)
					if ((tmp7)){
						HX_STACK_LINE(86)
						tmp8 = ((int)0 < index1);
					}
					else{
						HX_STACK_LINE(86)
						tmp8 = false;
					}
					HX_STACK_LINE(86)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(86)
					if ((tmp9)){
						HX_STACK_LINE(86)
						break;
					}
					HX_STACK_LINE(86)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						::String this2 = this1;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(86)
						{
							HX_STACK_LINE(86)
							int tmp11 = (index1 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(86)
							int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(86)
							{
								HX_STACK_LINE(86)
								int tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(86)
								int tmp14 = this2.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(86)
								tmp12 = tmp14;
							}
							HX_STACK_LINE(86)
							int c1 = tmp12;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(86)
							bool tmp13 = (c1 < (int)128);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(86)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(86)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(86)
							if ((tmp14)){
								HX_STACK_LINE(86)
								tmp15 = (c1 >= (int)192);
							}
							else{
								HX_STACK_LINE(86)
								tmp15 = true;
							}
							HX_STACK_LINE(86)
							if ((tmp15)){
								HX_STACK_LINE(86)
								tmp10 = (int)1;
							}
							else{
								HX_STACK_LINE(86)
								int tmp16 = (index1 - (int)2);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(86)
								int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(86)
								{
									HX_STACK_LINE(86)
									int tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(86)
									int tmp19 = this2.cca(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(86)
									tmp17 = tmp19;
								}
								HX_STACK_LINE(86)
								int tmp18 = (int(tmp17) & int((int)224));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(86)
								bool tmp19 = (tmp18 == (int)192);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(86)
								if ((tmp19)){
									HX_STACK_LINE(86)
									tmp10 = (int)2;
								}
								else{
									HX_STACK_LINE(86)
									int tmp20 = (index1 - (int)3);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(86)
									int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(86)
									{
										HX_STACK_LINE(86)
										int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(86)
										int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(86)
										tmp21 = tmp23;
									}
									HX_STACK_LINE(86)
									int tmp22 = (int(tmp21) & int((int)240));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(86)
									bool tmp23 = (tmp22 == (int)224);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(86)
									if ((tmp23)){
										HX_STACK_LINE(86)
										tmp10 = (int)3;
									}
									else{
										HX_STACK_LINE(86)
										int tmp24 = (index1 - (int)4);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(86)
										int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(86)
										{
											HX_STACK_LINE(86)
											int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(86)
											int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(86)
											tmp25 = tmp27;
										}
										HX_STACK_LINE(86)
										int tmp26 = (int(tmp25) & int((int)248));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(86)
										bool tmp27 = (tmp26 == (int)240);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(86)
										if ((tmp27)){
											HX_STACK_LINE(86)
											tmp10 = (int)4;
										}
										else{
											HX_STACK_LINE(86)
											tmp10 = (int)1;
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(86)
					hx::SubEq(index1,tmp10);
					HX_STACK_LINE(86)
					++(count);
				}
				HX_STACK_LINE(86)
				tmp = index1;
			}
		}
	}
	HX_STACK_LINE(86)
	int si = tmp;		HX_STACK_VAR(si,"si");
	HX_STACK_LINE(89)
	bool tmp1 = (length == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	if ((tmp1)){
		HX_STACK_LINE(89)
		tmp2 = s.length;
	}
	else{
		HX_STACK_LINE(90)
		bool tmp3 = (length < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		if ((tmp3)){
			HX_STACK_LINE(90)
			tmp2 = si;
		}
		else{
			HX_STACK_LINE(91)
			int codePointOffset = length;		HX_STACK_VAR(codePointOffset,"codePointOffset");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::String this1 = s;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(91)
				bool tmp4 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(91)
				if ((tmp4)){
					HX_STACK_LINE(91)
					int index = si;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(91)
					int tmp5 = this1.length;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(91)
					int len = tmp5;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(91)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(91)
					while((true)){
						HX_STACK_LINE(91)
						bool tmp6 = (i < codePointOffset);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(91)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(91)
						if ((tmp6)){
							HX_STACK_LINE(91)
							tmp7 = (index < len);
						}
						else{
							HX_STACK_LINE(91)
							tmp7 = false;
						}
						HX_STACK_LINE(91)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(91)
						if ((tmp8)){
							HX_STACK_LINE(91)
							break;
						}
						HX_STACK_LINE(91)
						int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(91)
						{
							HX_STACK_LINE(91)
							int tmp10 = index;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(91)
							int tmp11 = this1.cca(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(91)
							int c = tmp11;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(91)
							bool tmp12 = (c < (int)192);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(91)
							if ((tmp12)){
								HX_STACK_LINE(91)
								tmp9 = (int)1;
							}
							else{
								HX_STACK_LINE(91)
								bool tmp13 = (c < (int)224);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(91)
								if ((tmp13)){
									HX_STACK_LINE(91)
									tmp9 = (int)2;
								}
								else{
									HX_STACK_LINE(91)
									bool tmp14 = (c < (int)240);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(91)
									if ((tmp14)){
										HX_STACK_LINE(91)
										tmp9 = (int)3;
									}
									else{
										HX_STACK_LINE(91)
										bool tmp15 = (c < (int)248);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(91)
										if ((tmp15)){
											HX_STACK_LINE(91)
											tmp9 = (int)4;
										}
										else{
											HX_STACK_LINE(91)
											tmp9 = (int)1;
										}
									}
								}
							}
						}
						HX_STACK_LINE(91)
						hx::AddEq(index,tmp9);
						HX_STACK_LINE(91)
						++(i);
					}
					HX_STACK_LINE(91)
					tmp2 = index;
				}
				else{
					HX_STACK_LINE(91)
					int index = si;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(91)
					int count = (int)0;		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(91)
					while((true)){
						HX_STACK_LINE(91)
						int tmp5 = count;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(91)
						int tmp6 = codePointOffset;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(91)
						int tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(91)
						bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(91)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(91)
						if ((tmp8)){
							HX_STACK_LINE(91)
							tmp9 = ((int)0 < index);
						}
						else{
							HX_STACK_LINE(91)
							tmp9 = false;
						}
						HX_STACK_LINE(91)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(91)
						if ((tmp10)){
							HX_STACK_LINE(91)
							break;
						}
						HX_STACK_LINE(91)
						int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(91)
						{
							HX_STACK_LINE(91)
							::String this2 = this1;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(91)
							{
								HX_STACK_LINE(91)
								int tmp12 = (index - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(91)
								int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(91)
								{
									HX_STACK_LINE(91)
									int tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(91)
									int tmp15 = this2.cca(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(91)
									tmp13 = tmp15;
								}
								HX_STACK_LINE(91)
								int c1 = tmp13;		HX_STACK_VAR(c1,"c1");
								HX_STACK_LINE(91)
								bool tmp14 = (c1 < (int)128);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(91)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(91)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(91)
								if ((tmp15)){
									HX_STACK_LINE(91)
									tmp16 = (c1 >= (int)192);
								}
								else{
									HX_STACK_LINE(91)
									tmp16 = true;
								}
								HX_STACK_LINE(91)
								if ((tmp16)){
									HX_STACK_LINE(91)
									tmp11 = (int)1;
								}
								else{
									HX_STACK_LINE(91)
									int tmp17 = (index - (int)2);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(91)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(91)
									{
										HX_STACK_LINE(91)
										int tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(91)
										int tmp20 = this2.cca(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(91)
										tmp18 = tmp20;
									}
									HX_STACK_LINE(91)
									int tmp19 = (int(tmp18) & int((int)224));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(91)
									bool tmp20 = (tmp19 == (int)192);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(91)
									if ((tmp20)){
										HX_STACK_LINE(91)
										tmp11 = (int)2;
									}
									else{
										HX_STACK_LINE(91)
										int tmp21 = (index - (int)3);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(91)
										int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(91)
										{
											HX_STACK_LINE(91)
											int tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(91)
											int tmp24 = this2.cca(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(91)
											tmp22 = tmp24;
										}
										HX_STACK_LINE(91)
										int tmp23 = (int(tmp22) & int((int)240));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(91)
										bool tmp24 = (tmp23 == (int)224);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(91)
										if ((tmp24)){
											HX_STACK_LINE(91)
											tmp11 = (int)3;
										}
										else{
											HX_STACK_LINE(91)
											int tmp25 = (index - (int)4);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(91)
											int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(91)
											{
												HX_STACK_LINE(91)
												int tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(91)
												int tmp28 = this2.cca(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(91)
												tmp26 = tmp28;
											}
											HX_STACK_LINE(91)
											int tmp27 = (int(tmp26) & int((int)248));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(91)
											bool tmp28 = (tmp27 == (int)240);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(91)
											if ((tmp28)){
												HX_STACK_LINE(91)
												tmp11 = (int)4;
											}
											else{
												HX_STACK_LINE(91)
												tmp11 = (int)1;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(91)
						hx::SubEq(index,tmp11);
						HX_STACK_LINE(91)
						++(count);
					}
					HX_STACK_LINE(91)
					tmp2 = index;
				}
			}
		}
	}
	HX_STACK_LINE(89)
	int ei = tmp2;		HX_STACK_VAR(ei,"ei");
	HX_STACK_LINE(92)
	int tmp3 = si;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	int tmp4 = ei;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	::String tmp5 = s.substring(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Unifill_obj,uSubstr,return )

::String Unifill_obj::uSubstring( ::String s,int startIndex,Dynamic endIndex){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uSubstring",0x8eba8347,"luxe.utils.unifill.Unifill.uSubstring","luxe/utils/unifill/Unifill.hx",100,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(endIndex,"endIndex")
	HX_STACK_LINE(101)
	bool tmp = (startIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	if ((tmp)){
		HX_STACK_LINE(101)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(102)
		::String this1 = s;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(102)
		bool tmp2 = (startIndex >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		if ((tmp2)){
			HX_STACK_LINE(102)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(102)
			int tmp3 = this1.length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			int len = tmp3;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(102)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				bool tmp4 = (i < startIndex);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(102)
				if ((tmp4)){
					HX_STACK_LINE(102)
					tmp5 = (index < len);
				}
				else{
					HX_STACK_LINE(102)
					tmp5 = false;
				}
				HX_STACK_LINE(102)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				if ((tmp6)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(102)
					int tmp9 = this1.cca(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(102)
					int c = tmp9;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(102)
					bool tmp10 = (c < (int)192);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(102)
					if ((tmp10)){
						HX_STACK_LINE(102)
						tmp7 = (int)1;
					}
					else{
						HX_STACK_LINE(102)
						bool tmp11 = (c < (int)224);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(102)
						if ((tmp11)){
							HX_STACK_LINE(102)
							tmp7 = (int)2;
						}
						else{
							HX_STACK_LINE(102)
							bool tmp12 = (c < (int)240);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(102)
							if ((tmp12)){
								HX_STACK_LINE(102)
								tmp7 = (int)3;
							}
							else{
								HX_STACK_LINE(102)
								bool tmp13 = (c < (int)248);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(102)
								if ((tmp13)){
									HX_STACK_LINE(102)
									tmp7 = (int)4;
								}
								else{
									HX_STACK_LINE(102)
									tmp7 = (int)1;
								}
							}
						}
					}
				}
				HX_STACK_LINE(102)
				hx::AddEq(index,tmp7);
				HX_STACK_LINE(102)
				++(i);
			}
			HX_STACK_LINE(102)
			tmp1 = index;
		}
		else{
			HX_STACK_LINE(102)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(102)
			int count = (int)0;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				int tmp3 = count;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(102)
				int tmp4 = startIndex;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				int tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(102)
				bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				if ((tmp6)){
					HX_STACK_LINE(102)
					tmp7 = ((int)0 < index);
				}
				else{
					HX_STACK_LINE(102)
					tmp7 = false;
				}
				HX_STACK_LINE(102)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				if ((tmp8)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					::String this2 = this1;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						int tmp10 = (index - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(102)
						int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							int tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(102)
							int tmp13 = this2.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(102)
							tmp11 = tmp13;
						}
						HX_STACK_LINE(102)
						int c1 = tmp11;		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(102)
						bool tmp12 = (c1 < (int)128);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(102)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(102)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(102)
						if ((tmp13)){
							HX_STACK_LINE(102)
							tmp14 = (c1 >= (int)192);
						}
						else{
							HX_STACK_LINE(102)
							tmp14 = true;
						}
						HX_STACK_LINE(102)
						if ((tmp14)){
							HX_STACK_LINE(102)
							tmp9 = (int)1;
						}
						else{
							HX_STACK_LINE(102)
							int tmp15 = (index - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(102)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								int tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(102)
								int tmp18 = this2.cca(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(102)
								tmp16 = tmp18;
							}
							HX_STACK_LINE(102)
							int tmp17 = (int(tmp16) & int((int)224));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(102)
							bool tmp18 = (tmp17 == (int)192);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(102)
							if ((tmp18)){
								HX_STACK_LINE(102)
								tmp9 = (int)2;
							}
							else{
								HX_STACK_LINE(102)
								int tmp19 = (index - (int)3);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(102)
								int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									int tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(102)
									int tmp22 = this2.cca(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(102)
									tmp20 = tmp22;
								}
								HX_STACK_LINE(102)
								int tmp21 = (int(tmp20) & int((int)240));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(102)
								bool tmp22 = (tmp21 == (int)224);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(102)
								if ((tmp22)){
									HX_STACK_LINE(102)
									tmp9 = (int)3;
								}
								else{
									HX_STACK_LINE(102)
									int tmp23 = (index - (int)4);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(102)
									int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(102)
									{
										HX_STACK_LINE(102)
										int tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(102)
										int tmp26 = this2.cca(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(102)
										tmp24 = tmp26;
									}
									HX_STACK_LINE(102)
									int tmp25 = (int(tmp24) & int((int)248));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(102)
									bool tmp26 = (tmp25 == (int)240);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(102)
									if ((tmp26)){
										HX_STACK_LINE(102)
										tmp9 = (int)4;
									}
									else{
										HX_STACK_LINE(102)
										tmp9 = (int)1;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(102)
				hx::SubEq(index,tmp9);
				HX_STACK_LINE(102)
				++(count);
			}
			HX_STACK_LINE(102)
			tmp1 = index;
		}
	}
	HX_STACK_LINE(101)
	int si = tmp1;		HX_STACK_VAR(si,"si");
	HX_STACK_LINE(103)
	bool tmp2 = (endIndex == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	if ((tmp2)){
		HX_STACK_LINE(103)
		tmp3 = s.length;
	}
	else{
		HX_STACK_LINE(104)
		bool tmp4 = (endIndex < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		if ((tmp4)){
			HX_STACK_LINE(104)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(105)
			int codePointOffset = endIndex;		HX_STACK_VAR(codePointOffset,"codePointOffset");
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				::String this1 = s;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(105)
				bool tmp5 = (codePointOffset >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				if ((tmp5)){
					HX_STACK_LINE(105)
					int index = (int)0;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(105)
					int tmp6 = this1.length;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(105)
					int len = tmp6;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(105)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(105)
					while((true)){
						HX_STACK_LINE(105)
						bool tmp7 = (i < codePointOffset);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(105)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(105)
						if ((tmp7)){
							HX_STACK_LINE(105)
							tmp8 = (index < len);
						}
						else{
							HX_STACK_LINE(105)
							tmp8 = false;
						}
						HX_STACK_LINE(105)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(105)
						if ((tmp9)){
							HX_STACK_LINE(105)
							break;
						}
						HX_STACK_LINE(105)
						int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(105)
						{
							HX_STACK_LINE(105)
							int tmp11 = index;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(105)
							int tmp12 = this1.cca(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(105)
							int c = tmp12;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(105)
							bool tmp13 = (c < (int)192);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(105)
							if ((tmp13)){
								HX_STACK_LINE(105)
								tmp10 = (int)1;
							}
							else{
								HX_STACK_LINE(105)
								bool tmp14 = (c < (int)224);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(105)
								if ((tmp14)){
									HX_STACK_LINE(105)
									tmp10 = (int)2;
								}
								else{
									HX_STACK_LINE(105)
									bool tmp15 = (c < (int)240);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(105)
									if ((tmp15)){
										HX_STACK_LINE(105)
										tmp10 = (int)3;
									}
									else{
										HX_STACK_LINE(105)
										bool tmp16 = (c < (int)248);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(105)
										if ((tmp16)){
											HX_STACK_LINE(105)
											tmp10 = (int)4;
										}
										else{
											HX_STACK_LINE(105)
											tmp10 = (int)1;
										}
									}
								}
							}
						}
						HX_STACK_LINE(105)
						hx::AddEq(index,tmp10);
						HX_STACK_LINE(105)
						++(i);
					}
					HX_STACK_LINE(105)
					tmp3 = index;
				}
				else{
					HX_STACK_LINE(105)
					int index = (int)0;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(105)
					int count = (int)0;		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(105)
					while((true)){
						HX_STACK_LINE(105)
						int tmp6 = count;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(105)
						int tmp7 = codePointOffset;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(105)
						int tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(105)
						bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(105)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(105)
						if ((tmp9)){
							HX_STACK_LINE(105)
							tmp10 = ((int)0 < index);
						}
						else{
							HX_STACK_LINE(105)
							tmp10 = false;
						}
						HX_STACK_LINE(105)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(105)
						if ((tmp11)){
							HX_STACK_LINE(105)
							break;
						}
						HX_STACK_LINE(105)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(105)
						{
							HX_STACK_LINE(105)
							::String this2 = this1;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(105)
							{
								HX_STACK_LINE(105)
								int tmp13 = (index - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(105)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(105)
								{
									HX_STACK_LINE(105)
									int tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(105)
									int tmp16 = this2.cca(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(105)
									tmp14 = tmp16;
								}
								HX_STACK_LINE(105)
								int c1 = tmp14;		HX_STACK_VAR(c1,"c1");
								HX_STACK_LINE(105)
								bool tmp15 = (c1 < (int)128);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(105)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(105)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(105)
								if ((tmp16)){
									HX_STACK_LINE(105)
									tmp17 = (c1 >= (int)192);
								}
								else{
									HX_STACK_LINE(105)
									tmp17 = true;
								}
								HX_STACK_LINE(105)
								if ((tmp17)){
									HX_STACK_LINE(105)
									tmp12 = (int)1;
								}
								else{
									HX_STACK_LINE(105)
									int tmp18 = (index - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(105)
									int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(105)
									{
										HX_STACK_LINE(105)
										int tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(105)
										int tmp21 = this2.cca(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(105)
										tmp19 = tmp21;
									}
									HX_STACK_LINE(105)
									int tmp20 = (int(tmp19) & int((int)224));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(105)
									bool tmp21 = (tmp20 == (int)192);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(105)
									if ((tmp21)){
										HX_STACK_LINE(105)
										tmp12 = (int)2;
									}
									else{
										HX_STACK_LINE(105)
										int tmp22 = (index - (int)3);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(105)
										int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(105)
										{
											HX_STACK_LINE(105)
											int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(105)
											int tmp25 = this2.cca(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(105)
											tmp23 = tmp25;
										}
										HX_STACK_LINE(105)
										int tmp24 = (int(tmp23) & int((int)240));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(105)
										bool tmp25 = (tmp24 == (int)224);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(105)
										if ((tmp25)){
											HX_STACK_LINE(105)
											tmp12 = (int)3;
										}
										else{
											HX_STACK_LINE(105)
											int tmp26 = (index - (int)4);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(105)
											int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(105)
											{
												HX_STACK_LINE(105)
												int tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(105)
												int tmp29 = this2.cca(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(105)
												tmp27 = tmp29;
											}
											HX_STACK_LINE(105)
											int tmp28 = (int(tmp27) & int((int)248));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(105)
											bool tmp29 = (tmp28 == (int)240);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(105)
											if ((tmp29)){
												HX_STACK_LINE(105)
												tmp12 = (int)4;
											}
											else{
												HX_STACK_LINE(105)
												tmp12 = (int)1;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(105)
						hx::SubEq(index,tmp12);
						HX_STACK_LINE(105)
						++(count);
					}
					HX_STACK_LINE(105)
					tmp3 = index;
				}
			}
		}
	}
	HX_STACK_LINE(103)
	int ei = tmp3;		HX_STACK_VAR(ei,"ei");
	HX_STACK_LINE(106)
	int tmp4 = si;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	int tmp5 = ei;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(106)
	::String tmp6 = s.substring(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(106)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Unifill_obj,uSubstring,return )

::luxe::utils::unifill::CodePointIter Unifill_obj::uIterator( ::String s){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uIterator",0x945f89b8,"luxe.utils.unifill.Unifill.uIterator","luxe/utils/unifill/Unifill.hx",112,0x52105abe)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(113)
	::luxe::utils::unifill::CodePointIter tmp = ::luxe::utils::unifill::CodePointIter_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unifill_obj,uIterator,return )

int Unifill_obj::uCompare( ::String a,::String b){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uCompare",0x30c2601b,"luxe.utils.unifill.Unifill.uCompare","luxe/utils/unifill/Unifill.hx",119,0x52105abe)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(120)
	::luxe::utils::unifill::InternalEncodingIter tmp = ::luxe::utils::unifill::InternalEncodingIter_obj::__new(a,(int)0,a.length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	::luxe::utils::unifill::InternalEncodingIter aiter = tmp;		HX_STACK_VAR(aiter,"aiter");
	HX_STACK_LINE(121)
	::luxe::utils::unifill::InternalEncodingIter tmp1 = ::luxe::utils::unifill::InternalEncodingIter_obj::__new(b,(int)0,b.length);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	::luxe::utils::unifill::InternalEncodingIter biter = tmp1;		HX_STACK_VAR(biter,"biter");
	HX_STACK_LINE(122)
	while((true)){
		HX_STACK_LINE(122)
		bool tmp2 = (aiter->index < aiter->endIndex);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		if ((tmp2)){
			HX_STACK_LINE(122)
			tmp3 = (biter->index < biter->endIndex);
		}
		else{
			HX_STACK_LINE(122)
			tmp3 = false;
		}
		HX_STACK_LINE(122)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		if ((tmp4)){
			HX_STACK_LINE(122)
			break;
		}
		HX_STACK_LINE(123)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				aiter->i = aiter->index;
				HX_STACK_LINE(123)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(123)
				{
					HX_STACK_LINE(123)
					int tmp8 = aiter->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(123)
					int tmp9 = aiter->string.cca(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(123)
					int c = tmp9;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(123)
					bool tmp10 = (c < (int)192);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(123)
					if ((tmp10)){
						HX_STACK_LINE(123)
						tmp7 = (int)1;
					}
					else{
						HX_STACK_LINE(123)
						bool tmp11 = (c < (int)224);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(123)
						if ((tmp11)){
							HX_STACK_LINE(123)
							tmp7 = (int)2;
						}
						else{
							HX_STACK_LINE(123)
							bool tmp12 = (c < (int)240);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(123)
							if ((tmp12)){
								HX_STACK_LINE(123)
								tmp7 = (int)3;
							}
							else{
								HX_STACK_LINE(123)
								bool tmp13 = (c < (int)248);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(123)
								if ((tmp13)){
									HX_STACK_LINE(123)
									tmp7 = (int)4;
								}
								else{
									HX_STACK_LINE(123)
									tmp7 = (int)1;
								}
							}
						}
					}
				}
				HX_STACK_LINE(123)
				hx::AddEq(aiter->index,tmp7);
				HX_STACK_LINE(123)
				tmp6 = aiter->i;
			}
			HX_STACK_LINE(123)
			int index = tmp6;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(123)
			::String tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			tmp5 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointAt(tmp7,tmp8);
		}
		HX_STACK_LINE(123)
		int acode = tmp5;		HX_STACK_VAR(acode,"acode");
		HX_STACK_LINE(124)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				biter->i = biter->index;
				HX_STACK_LINE(124)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(124)
				{
					HX_STACK_LINE(124)
					int tmp9 = biter->index;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(124)
					int tmp10 = biter->string.cca(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(124)
					int c = tmp10;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(124)
					bool tmp11 = (c < (int)192);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(124)
					if ((tmp11)){
						HX_STACK_LINE(124)
						tmp8 = (int)1;
					}
					else{
						HX_STACK_LINE(124)
						bool tmp12 = (c < (int)224);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(124)
						if ((tmp12)){
							HX_STACK_LINE(124)
							tmp8 = (int)2;
						}
						else{
							HX_STACK_LINE(124)
							bool tmp13 = (c < (int)240);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(124)
							if ((tmp13)){
								HX_STACK_LINE(124)
								tmp8 = (int)3;
							}
							else{
								HX_STACK_LINE(124)
								bool tmp14 = (c < (int)248);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(124)
								if ((tmp14)){
									HX_STACK_LINE(124)
									tmp8 = (int)4;
								}
								else{
									HX_STACK_LINE(124)
									tmp8 = (int)1;
								}
							}
						}
					}
				}
				HX_STACK_LINE(124)
				hx::AddEq(biter->index,tmp8);
				HX_STACK_LINE(124)
				tmp7 = biter->i;
			}
			HX_STACK_LINE(124)
			int index = tmp7;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(124)
			::String tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			tmp6 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointAt(tmp8,tmp9);
		}
		HX_STACK_LINE(124)
		int bcode = tmp6;		HX_STACK_VAR(bcode,"bcode");
		HX_STACK_LINE(125)
		bool tmp7 = (acode < bcode);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(125)
		if ((tmp7)){
			HX_STACK_LINE(126)
			return (int)-1;
		}
		HX_STACK_LINE(127)
		bool tmp8 = (acode > bcode);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		if ((tmp8)){
			HX_STACK_LINE(128)
			return (int)1;
		}
	}
	HX_STACK_LINE(130)
	bool tmp2 = (biter->index < biter->endIndex);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	if ((tmp2)){
		HX_STACK_LINE(131)
		return (int)-1;
	}
	HX_STACK_LINE(132)
	bool tmp3 = (aiter->index < aiter->endIndex);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	if ((tmp3)){
		HX_STACK_LINE(133)
		return (int)1;
	}
	HX_STACK_LINE(134)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unifill_obj,uCompare,return )

::String Unifill_obj::uToString( Dynamic codePoints){
	HX_STACK_FRAME("luxe.utils.unifill.Unifill","uToString",0x39341076,"luxe.utils.unifill.Unifill.uToString","luxe/utils/unifill/Unifill.hx",141,0x52105abe)
	HX_STACK_ARG(codePoints,"codePoints")
	HX_STACK_LINE(141)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			::haxe::io::BytesBuffer tmp2 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			::haxe::io::BytesBuffer buf = tmp2;		HX_STACK_VAR(buf,"buf");
			HX_STACK_LINE(141)
			Dynamic tmp3 = codePoints->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp3);  __it->hasNext(); ){
				int c = __it->next();
				{
					HX_STACK_LINE(141)
					Dynamic tmp4 = buf->addByte_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(141)
					int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					::luxe::utils::unifill::_Utf8::Utf8Impl_obj::encode_code_point(tmp4,tmp5);
				}
;
			}
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(141)
				{
					HX_STACK_LINE(141)
					::haxe::io::Bytes tmp5 = buf->getBytes();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					::haxe::io::Bytes b = tmp5;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(141)
					{
						HX_STACK_LINE(141)
						::String tmp6 = b->toString();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(141)
						::String s = tmp6;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(141)
						tmp4 = s;
					}
				}
				HX_STACK_LINE(141)
				::String s = tmp4;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(141)
				tmp1 = s;
			}
		}
		HX_STACK_LINE(141)
		::String this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(141)
		tmp = this1;
	}
	HX_STACK_LINE(141)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unifill_obj,uToString,return )


Unifill_obj::Unifill_obj()
{
}

bool Unifill_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uSplit") ) { outValue = uSplit_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uLength") ) { outValue = uLength_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uCharAt") ) { outValue = uCharAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uSubstr") ) { outValue = uSubstr_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uIndexOf") ) { outValue = uIndexOf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uCompare") ) { outValue = uCompare_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uIterator") ) { outValue = uIterator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uToString") ) { outValue = uToString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uSubstring") ) { outValue = uSubstring_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uCharCodeAt") ) { outValue = uCharCodeAt_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uCodePointAt") ) { outValue = uCodePointAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uLastIndexOf") ) { outValue = uLastIndexOf_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unifill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unifill_obj::__mClass,"__mClass");
};

#endif

hx::Class Unifill_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("uLength","\x3b","\x4f","\xeb","\xd4"),
	HX_HCSTRING("uCharAt","\xbe","\x33","\x59","\xed"),
	HX_HCSTRING("uCharCodeAt","\xcb","\xef","\xac","\x11"),
	HX_HCSTRING("uCodePointAt","\x41","\xf9","\xa3","\x3c"),
	HX_HCSTRING("uIndexOf","\xd4","\x98","\x1e","\xd2"),
	HX_HCSTRING("uLastIndexOf","\x9e","\xae","\x1a","\x86"),
	HX_HCSTRING("uSplit","\x25","\x92","\x5d","\xdc"),
	HX_HCSTRING("uSubstr","\x86","\xa9","\xee","\xcf"),
	HX_HCSTRING("uSubstring","\x1c","\x9b","\xc3","\x66"),
	HX_HCSTRING("uIterator","\x83","\x03","\xa1","\xd5"),
	HX_HCSTRING("uCompare","\xb0","\x68","\xc8","\x74"),
	HX_HCSTRING("uToString","\x41","\x8a","\x75","\x7a"),
	::String(null()) };

void Unifill_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill.Unifill","\x63","\x02","\xc3","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Unifill_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Unifill_obj >;
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
