#include <hxcpp.h>

#ifndef INCLUDED_luxe_utils_unifill_Exception
#include <luxe/utils/unifill/Exception.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8Impl
#include <luxe/utils/unifill/_Utf8/Utf8Impl.h>
#endif
namespace luxe{
namespace utils{
namespace unifill{
namespace _Utf8{

Void Utf8Impl_obj::__construct()
{
	return null();
}

//Utf8Impl_obj::~Utf8Impl_obj() { }

Dynamic Utf8Impl_obj::__CreateEmpty() { return  new Utf8Impl_obj; }
hx::ObjectPtr< Utf8Impl_obj > Utf8Impl_obj::__new()
{  hx::ObjectPtr< Utf8Impl_obj > _result_ = new Utf8Impl_obj();
	_result_->__construct();
	return _result_;}

Dynamic Utf8Impl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8Impl_obj > _result_ = new Utf8Impl_obj();
	_result_->__construct();
	return _result_;}

int Utf8Impl_obj::code_point_width( int c){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8Impl","code_point_width",0xe8ec57d4,"luxe.utils.unifill._Utf8.Utf8Impl.code_point_width","luxe/utils/unifill/Utf8.hx",166,0xbecfbbba)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(167)
	bool tmp = (c < (int)192);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	if ((tmp)){
		HX_STACK_LINE(167)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(167)
		bool tmp2 = (c < (int)224);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		if ((tmp2)){
			HX_STACK_LINE(167)
			tmp1 = (int)2;
		}
		else{
			HX_STACK_LINE(167)
			bool tmp3 = (c < (int)240);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
			if ((tmp3)){
				HX_STACK_LINE(167)
				tmp1 = (int)3;
			}
			else{
				HX_STACK_LINE(167)
				bool tmp4 = (c < (int)248);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				if ((tmp4)){
					HX_STACK_LINE(167)
					tmp1 = (int)4;
				}
				else{
					HX_STACK_LINE(167)
					tmp1 = (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(167)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8Impl_obj,code_point_width,return )

int Utf8Impl_obj::find_prev_code_point( Dynamic accessor,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8Impl","find_prev_code_point",0xa7890d53,"luxe.utils.unifill._Utf8.Utf8Impl.find_prev_code_point","luxe/utils/unifill/Utf8.hx",170,0xbecfbbba)
	HX_STACK_ARG(accessor,"accessor")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(171)
	int tmp = (index - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	int tmp1 = accessor(tmp).Cast< int >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	int c1 = tmp1;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(172)
	bool tmp2 = (c1 < (int)128);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	if ((tmp3)){
		HX_STACK_LINE(172)
		tmp4 = (c1 >= (int)192);
	}
	else{
		HX_STACK_LINE(172)
		tmp4 = true;
	}
	HX_STACK_LINE(172)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(172)
	if ((tmp4)){
		HX_STACK_LINE(172)
		tmp5 = (int)1;
	}
	else{
		HX_STACK_LINE(173)
		int tmp6 = (index - (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		int tmp7 = accessor(tmp6).Cast< int >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		int tmp8 = (int(tmp7) & int((int)224));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(173)
		bool tmp9 = (tmp8 == (int)192);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(173)
		if ((tmp9)){
			HX_STACK_LINE(173)
			tmp5 = (int)2;
		}
		else{
			HX_STACK_LINE(174)
			int tmp10 = (index - (int)3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			int tmp11 = accessor(tmp10).Cast< int >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			int tmp12 = (int(tmp11) & int((int)240));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(174)
			bool tmp13 = (tmp12 == (int)224);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(174)
			if ((tmp13)){
				HX_STACK_LINE(174)
				tmp5 = (int)3;
			}
			else{
				HX_STACK_LINE(175)
				int tmp14 = (index - (int)4);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(175)
				int tmp15 = accessor(tmp14).Cast< int >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(175)
				int tmp16 = (int(tmp15) & int((int)248));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(175)
				bool tmp17 = (tmp16 == (int)240);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(175)
				if ((tmp17)){
					HX_STACK_LINE(175)
					tmp5 = (int)4;
				}
				else{
					HX_STACK_LINE(176)
					tmp5 = (int)1;
				}
			}
		}
	}
	HX_STACK_LINE(172)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8Impl_obj,find_prev_code_point,return )

Void Utf8Impl_obj::encode_code_point( Dynamic addUnit,int codePoint){
{
		HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8Impl","encode_code_point",0xd40a54d8,"luxe.utils.unifill._Utf8.Utf8Impl.encode_code_point","luxe/utils/unifill/Utf8.hx",179,0xbecfbbba)
		HX_STACK_ARG(addUnit,"addUnit")
		HX_STACK_ARG(codePoint,"codePoint")
		HX_STACK_LINE(180)
		bool tmp = (codePoint <= (int)127);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		if ((tmp)){
			HX_STACK_LINE(181)
			int tmp1 = codePoint;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(181)
			addUnit(tmp1).Cast< Void >();
		}
		else{
			HX_STACK_LINE(182)
			bool tmp1 = (codePoint <= (int)2047);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			if ((tmp1)){
				HX_STACK_LINE(183)
				int tmp2 = (int(codePoint) >> int((int)6));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(183)
				int tmp3 = (int((int)192) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(183)
				addUnit(tmp3).Cast< Void >();
				HX_STACK_LINE(184)
				int tmp4 = (int(codePoint) & int((int)63));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(184)
				int tmp5 = (int((int)128) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(184)
				addUnit(tmp5).Cast< Void >();
			}
			else{
				HX_STACK_LINE(185)
				bool tmp2 = (codePoint <= (int)65535);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(185)
				if ((tmp2)){
					HX_STACK_LINE(186)
					int tmp3 = (int(codePoint) >> int((int)12));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(186)
					int tmp4 = (int((int)224) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(186)
					addUnit(tmp4).Cast< Void >();
					HX_STACK_LINE(187)
					int tmp5 = (int(codePoint) >> int((int)6));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(187)
					int tmp6 = (int(tmp5) & int((int)63));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(187)
					int tmp7 = (int((int)128) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(187)
					addUnit(tmp7).Cast< Void >();
					HX_STACK_LINE(188)
					int tmp8 = (int(codePoint) & int((int)63));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(188)
					int tmp9 = (int((int)128) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(188)
					addUnit(tmp9).Cast< Void >();
				}
				else{
					HX_STACK_LINE(189)
					bool tmp3 = (codePoint <= (int)1114111);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(189)
					if ((tmp3)){
						HX_STACK_LINE(190)
						int tmp4 = (int(codePoint) >> int((int)18));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(190)
						int tmp5 = (int((int)240) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(190)
						addUnit(tmp5).Cast< Void >();
						HX_STACK_LINE(191)
						int tmp6 = (int(codePoint) >> int((int)12));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(191)
						int tmp7 = (int(tmp6) & int((int)63));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(191)
						int tmp8 = (int((int)128) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(191)
						addUnit(tmp8).Cast< Void >();
						HX_STACK_LINE(192)
						int tmp9 = (int(codePoint) >> int((int)6));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(192)
						int tmp10 = (int(tmp9) & int((int)63));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(192)
						int tmp11 = (int((int)128) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(192)
						addUnit(tmp11).Cast< Void >();
						HX_STACK_LINE(193)
						int tmp12 = (int(codePoint) & int((int)63));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(193)
						int tmp13 = (int((int)128) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(193)
						addUnit(tmp13).Cast< Void >();
					}
					else{
						HX_STACK_LINE(195)
						int tmp4 = codePoint;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(195)
						::luxe::utils::unifill::Exception tmp5 = ::luxe::utils::unifill::Exception_obj::InvalidCodePoint(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(195)
						HX_STACK_DO_THROW(tmp5);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8Impl_obj,encode_code_point,(void))

int Utf8Impl_obj::decode_code_point( int len,Dynamic accessor,int index){
	HX_STACK_FRAME("luxe.utils.unifill._Utf8.Utf8Impl","decode_code_point",0x506510c0,"luxe.utils.unifill._Utf8.Utf8Impl.decode_code_point","luxe/utils/unifill/Utf8.hx",199,0xbecfbbba)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(accessor,"accessor")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(200)
	int i = index;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(201)
	bool tmp = (i < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	if ((tmp1)){
		HX_STACK_LINE(201)
		tmp2 = (len <= i);
	}
	else{
		HX_STACK_LINE(201)
		tmp2 = true;
	}
	HX_STACK_LINE(201)
	if ((tmp2)){
		HX_STACK_LINE(202)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		::luxe::utils::unifill::Exception tmp4 = ::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(203)
	int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	int tmp4 = accessor(tmp3).Cast< int >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(203)
	int c1 = tmp4;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(204)
	bool tmp5 = (c1 < (int)128);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(204)
	if ((tmp5)){
		HX_STACK_LINE(205)
		int tmp6 = c1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		return tmp6;
	}
	HX_STACK_LINE(207)
	bool tmp6 = (c1 < (int)192);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(207)
	if ((tmp6)){
		HX_STACK_LINE(208)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		::luxe::utils::unifill::Exception tmp8 = ::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(208)
		HX_STACK_DO_THROW(tmp8);
	}
	HX_STACK_LINE(210)
	++(i);
	HX_STACK_LINE(211)
	bool tmp7 = (i < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(211)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(211)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(211)
	if ((tmp8)){
		HX_STACK_LINE(211)
		tmp9 = (len <= i);
	}
	else{
		HX_STACK_LINE(211)
		tmp9 = true;
	}
	HX_STACK_LINE(211)
	if ((tmp9)){
		HX_STACK_LINE(212)
		int tmp10 = index;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(212)
		::luxe::utils::unifill::Exception tmp11 = ::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(212)
		HX_STACK_DO_THROW(tmp11);
	}
	HX_STACK_LINE(213)
	int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(213)
	int tmp11 = accessor(tmp10).Cast< int >();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(213)
	int c2 = tmp11;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(214)
	bool tmp12 = (c1 < (int)224);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(214)
	if ((tmp12)){
		HX_STACK_LINE(215)
		int tmp13 = (int(c1) & int((int)30));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(215)
		bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(215)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(215)
		if ((tmp14)){
			HX_STACK_LINE(215)
			int tmp16 = (int(c2) & int((int)192));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(215)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(215)
			tmp15 = (tmp17 == (int)128);
		}
		else{
			HX_STACK_LINE(215)
			tmp15 = false;
		}
		HX_STACK_LINE(215)
		if ((tmp15)){
			HX_STACK_LINE(216)
			int tmp16 = (int(c1) & int((int)63));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(216)
			int tmp17 = (int(tmp16) << int((int)6));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(216)
			int tmp18 = (int(c2) & int((int)127));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(216)
			int tmp19 = (int(tmp17) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(216)
			return tmp19;
		}
		else{
			HX_STACK_LINE(218)
			int tmp16 = index;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(218)
			::luxe::utils::unifill::Exception tmp17 = ::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(218)
			HX_STACK_DO_THROW(tmp17);
		}
	}
	HX_STACK_LINE(220)
	++(i);
	HX_STACK_LINE(221)
	bool tmp13 = (i < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(221)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(221)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(221)
	if ((tmp14)){
		HX_STACK_LINE(221)
		tmp15 = (len <= i);
	}
	else{
		HX_STACK_LINE(221)
		tmp15 = true;
	}
	HX_STACK_LINE(221)
	if ((tmp15)){
		HX_STACK_LINE(222)
		int tmp16 = index;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(222)
		::luxe::utils::unifill::Exception tmp17 = ::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(222)
		HX_STACK_DO_THROW(tmp17);
	}
	HX_STACK_LINE(223)
	int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(223)
	int tmp17 = accessor(tmp16).Cast< int >();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(223)
	int c3 = tmp17;		HX_STACK_VAR(c3,"c3");
	HX_STACK_LINE(224)
	bool tmp18 = (c1 < (int)240);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(224)
	if ((tmp18)){
		HX_STACK_LINE(225)
		int tmp19 = (int(c1) & int((int)15));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(225)
		bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(225)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(225)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(225)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(225)
		if ((tmp22)){
			HX_STACK_LINE(225)
			int tmp24 = (int(c2) & int((int)32));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(225)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(225)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(225)
			tmp23 = (tmp26 != (int)0);
		}
		else{
			HX_STACK_LINE(225)
			tmp23 = true;
		}
		HX_STACK_LINE(225)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(225)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(225)
		if ((tmp24)){
			HX_STACK_LINE(225)
			int tmp26 = (int(c2) & int((int)192));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(225)
			int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(225)
			int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(225)
			tmp25 = (tmp28 == (int)128);
		}
		else{
			HX_STACK_LINE(225)
			tmp25 = false;
		}
		HX_STACK_LINE(225)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(225)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(225)
		if ((tmp26)){
			HX_STACK_LINE(225)
			int tmp28 = (int(c3) & int((int)192));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(225)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(225)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(225)
			tmp27 = (tmp30 == (int)128);
		}
		else{
			HX_STACK_LINE(225)
			tmp27 = false;
		}
		HX_STACK_LINE(225)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(225)
		if ((tmp27)){
			HX_STACK_LINE(226)
			bool tmp29 = (c1 == (int)237);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(226)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(226)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(226)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(226)
			bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(226)
			if ((tmp33)){
				HX_STACK_LINE(226)
				bool tmp34 = ((int)160 <= c2);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(226)
				tmp32 = tmp34;
			}
			else{
				HX_STACK_LINE(226)
				tmp32 = false;
			}
			HX_STACK_LINE(226)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(226)
			bool tmp35 = tmp32;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(226)
			if ((tmp35)){
				HX_STACK_LINE(226)
				bool tmp36 = (c2 <= (int)191);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(226)
				tmp34 = tmp36;
			}
			else{
				HX_STACK_LINE(226)
				tmp34 = false;
			}
			HX_STACK_LINE(226)
			bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(226)
			tmp28 = !(tmp36);
		}
		else{
			HX_STACK_LINE(225)
			tmp28 = false;
		}
		HX_STACK_LINE(225)
		if ((tmp28)){
			HX_STACK_LINE(227)
			int tmp29 = (int(c1) & int((int)31));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(227)
			int tmp30 = (int(tmp29) << int((int)12));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(227)
			int tmp31 = (int(c2) & int((int)127));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(227)
			int tmp32 = (int(tmp31) << int((int)6));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(227)
			int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(227)
			int tmp34 = (int(c3) & int((int)127));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(227)
			int tmp35 = (int(tmp33) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(227)
			return tmp35;
		}
		else{
			HX_STACK_LINE(229)
			int tmp29 = index;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(229)
			::luxe::utils::unifill::Exception tmp30 = ::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(229)
			HX_STACK_DO_THROW(tmp30);
		}
	}
	HX_STACK_LINE(231)
	++(i);
	HX_STACK_LINE(232)
	bool tmp19 = (i < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(232)
	bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(232)
	bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(232)
	if ((tmp20)){
		HX_STACK_LINE(232)
		tmp21 = (len <= i);
	}
	else{
		HX_STACK_LINE(232)
		tmp21 = true;
	}
	HX_STACK_LINE(232)
	if ((tmp21)){
		HX_STACK_LINE(233)
		int tmp22 = index;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(233)
		::luxe::utils::unifill::Exception tmp23 = ::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(233)
		HX_STACK_DO_THROW(tmp23);
	}
	HX_STACK_LINE(234)
	int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(234)
	int tmp23 = accessor(tmp22).Cast< int >();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(234)
	int c4 = tmp23;		HX_STACK_VAR(c4,"c4");
	HX_STACK_LINE(235)
	bool tmp24 = (c1 < (int)248);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(235)
	if ((tmp24)){
		HX_STACK_LINE(236)
		int tmp25 = (int(c1) & int((int)7));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(236)
		bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(236)
		bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(236)
		bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(236)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(236)
		if ((tmp28)){
			HX_STACK_LINE(236)
			int tmp30 = (int(c2) & int((int)48));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(236)
			int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(236)
			int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(236)
			tmp29 = (tmp32 != (int)0);
		}
		else{
			HX_STACK_LINE(236)
			tmp29 = true;
		}
		HX_STACK_LINE(236)
		bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(236)
		bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(236)
		if ((tmp30)){
			HX_STACK_LINE(236)
			int tmp32 = (int(c2) & int((int)192));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(236)
			int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(236)
			int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(236)
			tmp31 = (tmp34 == (int)128);
		}
		else{
			HX_STACK_LINE(236)
			tmp31 = false;
		}
		HX_STACK_LINE(236)
		bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(236)
		bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(236)
		if ((tmp32)){
			HX_STACK_LINE(236)
			int tmp34 = (int(c3) & int((int)192));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(236)
			int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(236)
			int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(236)
			tmp33 = (tmp36 == (int)128);
		}
		else{
			HX_STACK_LINE(236)
			tmp33 = false;
		}
		HX_STACK_LINE(236)
		bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(236)
		bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(236)
		if ((tmp34)){
			HX_STACK_LINE(236)
			int tmp36 = (int(c4) & int((int)192));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(236)
			int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(236)
			int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(236)
			tmp35 = (tmp38 == (int)128);
		}
		else{
			HX_STACK_LINE(236)
			tmp35 = false;
		}
		HX_STACK_LINE(236)
		bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(236)
		if ((tmp35)){
			HX_STACK_LINE(237)
			bool tmp37 = (c1 == (int)244);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(237)
			bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(237)
			bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(237)
			bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(237)
			bool tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(237)
			if ((tmp41)){
				HX_STACK_LINE(237)
				bool tmp42 = (c2 > (int)143);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(237)
				tmp40 = tmp42;
			}
			else{
				HX_STACK_LINE(237)
				tmp40 = false;
			}
			HX_STACK_LINE(237)
			bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(237)
			bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(237)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(237)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(237)
			bool tmp46 = tmp44;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(237)
			if ((tmp46)){
				HX_STACK_LINE(237)
				bool tmp47 = (c1 > (int)244);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(237)
				tmp45 = tmp47;
			}
			else{
				HX_STACK_LINE(237)
				tmp45 = true;
			}
			HX_STACK_LINE(237)
			bool tmp47 = tmp45;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(237)
			tmp36 = !(tmp47);
		}
		else{
			HX_STACK_LINE(236)
			tmp36 = false;
		}
		HX_STACK_LINE(236)
		if ((tmp36)){
			HX_STACK_LINE(238)
			int tmp37 = (int(c1) & int((int)15));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(238)
			int tmp38 = (int(tmp37) << int((int)18));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(238)
			int tmp39 = (int(c2) & int((int)127));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(238)
			int tmp40 = (int(tmp39) << int((int)12));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(238)
			int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(238)
			int tmp42 = (int(c3) & int((int)127));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(238)
			int tmp43 = (int(tmp42) << int((int)6));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(238)
			int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(238)
			int tmp45 = (int(c4) & int((int)127));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(238)
			int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(238)
			return tmp46;
		}
		else{
			HX_STACK_LINE(240)
			int tmp37 = index;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(240)
			::luxe::utils::unifill::Exception tmp38 = ::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(240)
			HX_STACK_DO_THROW(tmp38);
		}
	}
	HX_STACK_LINE(242)
	int tmp25 = index;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(242)
	::luxe::utils::unifill::Exception tmp26 = ::luxe::utils::unifill::Exception_obj::InvalidCodeUnitSequence(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(242)
	HX_STACK_DO_THROW(tmp26);
	HX_STACK_LINE(242)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8Impl_obj,decode_code_point,return )


Utf8Impl_obj::Utf8Impl_obj()
{
}

bool Utf8Impl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"code_point_width") ) { outValue = code_point_width_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"encode_code_point") ) { outValue = encode_code_point_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"decode_code_point") ) { outValue = decode_code_point_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"find_prev_code_point") ) { outValue = find_prev_code_point_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8Impl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8Impl_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8Impl_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("code_point_width","\x45","\xbc","\xb7","\x0f"),
	HX_HCSTRING("find_prev_code_point","\x44","\xfe","\x1d","\xb2"),
	HX_HCSTRING("encode_code_point","\x47","\xd3","\x36","\x9f"),
	HX_HCSTRING("decode_code_point","\x2f","\x8f","\x91","\x1b"),
	::String(null()) };

void Utf8Impl_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.utils.unifill._Utf8.Utf8Impl","\xbf","\x39","\x1a","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8Impl_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utf8Impl_obj >;
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
