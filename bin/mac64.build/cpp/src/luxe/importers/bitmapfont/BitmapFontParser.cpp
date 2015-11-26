#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_importers_bitmapfont_BitmapFontParser
#include <luxe/importers/bitmapfont/BitmapFontParser.h>
#endif
namespace luxe{
namespace importers{
namespace bitmapfont{

Void BitmapFontParser_obj::__construct()
{
	return null();
}

//BitmapFontParser_obj::~BitmapFontParser_obj() { }

Dynamic BitmapFontParser_obj::__CreateEmpty() { return  new BitmapFontParser_obj; }
hx::ObjectPtr< BitmapFontParser_obj > BitmapFontParser_obj::__new()
{  hx::ObjectPtr< BitmapFontParser_obj > _result_ = new BitmapFontParser_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapFontParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFontParser_obj > _result_ = new BitmapFontParser_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapFontParser_obj::parse( ::String _font_data){
	HX_STACK_FRAME("luxe.importers.bitmapfont.BitmapFontParser","parse",0xa6a46bed,"luxe.importers.bitmapfont.BitmapFontParser.parse","luxe/importers/bitmapfont/BitmapFontParser.hx",9,0x0ee4ea77)
	HX_STACK_ARG(_font_data,"_font_data")
	HX_STACK_LINE(11)
	bool tmp = (_font_data.length == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	if ((tmp)){
		HX_STACK_LINE(12)
		HX_STACK_DO_THROW(HX_HCSTRING("BitmapFont:Parser: _font_data is 0 length","\xe8","\x56","\xed","\x92"));
	}
	HX_STACK_LINE(17)
	::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(20)
	::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		tmp2 = tmp4;
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::ds::IntMap &tmp2,::haxe::ds::IntMap &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/importers/bitmapfont/BitmapFontParser.hx",15,0x0ee4ea77)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("face","\x9d","\xb4","\xb5","\x43") , null(),false);
				__result->Add(HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45") , tmp1,false);
				__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("base_size","\xef","\xf6","\x1b","\x7c") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("char_count","\x66","\xaf","\xd5","\x85") , (int)0,false);
				__result->Add(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1") , ((Float)((int)0)),false);
				__result->Add(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("kernings","\x27","\xb8","\x8b","\x80") , tmp2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(15)
	Dynamic tmp3 = _Function_1_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	Dynamic _info = tmp3;		HX_STACK_VAR(_info,"_info");
	HX_STACK_LINE(23)
	Array< ::String > _lines = _font_data.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
	HX_STACK_LINE(25)
	bool tmp4 = (_lines->length == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	if ((tmp4)){
		HX_STACK_LINE(25)
		HX_STACK_DO_THROW(HX_HCSTRING("BitmapFont; invalid font data specified for parser.","\x57","\xb2","\x88","\x83"));
	}
	HX_STACK_LINE(27)
	::String tmp5 = _lines->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	::String _first = tmp5;		HX_STACK_VAR(_first,"_first");
	HX_STACK_LINE(28)
	::String tmp6 = _first;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	::String tmp7 = ::StringTools_obj::ltrim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	::String tmp8 = tmp7.substr((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(28)
	bool tmp9 = (tmp8 != HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(28)
	if ((tmp9)){
		HX_STACK_LINE(29)
		HX_STACK_DO_THROW(HX_HCSTRING("BitmapFont; invalid font data specified for parser. Format should be plain ascii text .fnt file only currently.","\xdc","\x12","\x81","\x6f"));
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			bool tmp10 = (_g < _lines->length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(32)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(32)
			if ((tmp11)){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			::String tmp12 = _lines->__get(_g);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(32)
			::String _line = tmp12;		HX_STACK_VAR(_line,"_line");
			HX_STACK_LINE(32)
			++(_g);
			HX_STACK_LINE(33)
			Array< ::String > _tokens = _line.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(_tokens,"_tokens");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(34)
				while((true)){
					HX_STACK_LINE(34)
					bool tmp13 = (_g1 < _tokens->length);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(34)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(34)
					if ((tmp14)){
						HX_STACK_LINE(34)
						break;
					}
					HX_STACK_LINE(34)
					::String tmp15 = _tokens->__get(_g1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(34)
					::String _current = tmp15;		HX_STACK_VAR(_current,"_current");
					HX_STACK_LINE(34)
					++(_g1);
					HX_STACK_LINE(35)
					::String tmp16 = _current;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(35)
					Dynamic tmp17 = _info;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(35)
					::luxe::importers::bitmapfont::BitmapFontParser_obj::parse_token(tmp16,_tokens,tmp17);
				}
			}
		}
	}
	HX_STACK_LINE(39)
	Dynamic tmp10 = _info;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(39)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapFontParser_obj,parse,return )

Void BitmapFontParser_obj::parse_token( ::String _token,Array< ::String > _tokens,Dynamic _info){
{
		HX_STACK_FRAME("luxe.importers.bitmapfont.BitmapFontParser","parse_token",0x41b865e7,"luxe.importers.bitmapfont.BitmapFontParser.parse_token","luxe/importers/bitmapfont/BitmapFontParser.hx",45,0x0ee4ea77)
		HX_STACK_ARG(_token,"_token")
		HX_STACK_ARG(_tokens,"_tokens")
		HX_STACK_ARG(_info,"_info")
		HX_STACK_LINE(48)
		_tokens->shift();
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp = ::luxe::importers::bitmapfont::BitmapFontParser_obj::tokenize_line(_tokens);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::haxe::ds::StringMap _items = tmp;		HX_STACK_VAR(_items,"_items");
		HX_STACK_LINE(52)
		::String tmp1 = _token;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::String _switch_1 = (tmp1);
		if (  ( _switch_1==HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"))){
			HX_STACK_LINE(55)
			::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				::String tmp3 = _items->get(HX_HCSTRING("face","\x9d","\xb4","\xb5","\x43"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(55)
				::String _s = tmp3;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(55)
				int tmp4 = _s.indexOf(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(55)
				bool tmp5 = (tmp4 != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				if ((tmp5)){
					HX_STACK_LINE(55)
					::String tmp6 = _s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(55)
					::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(55)
					_s = tmp7;
				}
				HX_STACK_LINE(55)
				tmp2 = _s;
			}
			HX_STACK_LINE(55)
			_info->__FieldRef(HX_HCSTRING("face","\x9d","\xb4","\xb5","\x43")) = tmp2;
			HX_STACK_LINE(56)
			::String tmp3 = _items->get(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			Float tmp5 = ::Std_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			_info->__FieldRef(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b")) = tmp5;
		}
		else if (  ( _switch_1==HX_HCSTRING("common","\x2b","\x75","\x2e","\xc7"))){
			HX_STACK_LINE(60)
			::String tmp2 = _items->get(HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			Float tmp4 = ::Std_obj::parseFloat(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			_info->__FieldRef(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1")) = tmp4;
			HX_STACK_LINE(61)
			::String tmp5 = _items->get(HX_HCSTRING("base","\x11","\xe8","\x10","\x41"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Float tmp7 = ::Std_obj::parseFloat(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			_info->__FieldRef(HX_HCSTRING("base_size","\xef","\xf6","\x1b","\x7c")) = tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("page","\x4f","\xda","\x51","\x4a"))){
			HX_STACK_LINE(66)
			::String tmp2 = _items->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					::String tmp7 = _items->get(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(67)
					::String _s = tmp7;		HX_STACK_VAR(_s,"_s");
					HX_STACK_LINE(67)
					int tmp8 = _s.indexOf(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(67)
					bool tmp9 = (tmp8 != (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(67)
					if ((tmp9)){
						HX_STACK_LINE(67)
						::String tmp10 = _s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(67)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(67)
						_s = tmp11;
					}
					HX_STACK_LINE(67)
					tmp6 = _s;
				}
				HX_STACK_LINE(67)
				::String _s = tmp6;		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(67)
				::String tmp7 = _s;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				tmp5 = ::StringTools_obj::trim(tmp7);
			}
			struct _Function_2_1{
				inline static Dynamic Block( ::String &tmp5,Dynamic &tmp4){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/importers/bitmapfont/BitmapFontParser.hx",65,0x0ee4ea77)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp4,false);
						__result->Add(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43") , tmp5,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(65)
			Dynamic tmp6 = _Function_2_1::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			_info->__Field(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		}
		else if (  ( _switch_1==HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"))){
			HX_STACK_LINE(72)
			::String tmp2 = _items->get(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			_info->__FieldRef(HX_HCSTRING("char_count","\x66","\xaf","\xd5","\x85")) = tmp4;
		}
		else if (  ( _switch_1==HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"))){
			HX_STACK_LINE(78)
			::String tmp2 = _items->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			::String tmp5 = _items->get(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(79)
			Float tmp7 = ::Std_obj::parseFloat(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			::String tmp8 = _items->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(80)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			Float tmp10 = ::Std_obj::parseFloat(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			::String tmp11 = _items->get(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(81)
			::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			Float tmp13 = ::Std_obj::parseFloat(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(82)
			::String tmp14 = _items->get(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(82)
			Float tmp16 = ::Std_obj::parseFloat(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(83)
			::String tmp17 = _items->get(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(83)
			::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(83)
			Float tmp19 = ::Std_obj::parseFloat(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(84)
			::String tmp20 = _items->get(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(84)
			::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(84)
			Float tmp22 = ::Std_obj::parseFloat(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(85)
			::String tmp23 = _items->get(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(85)
			::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(85)
			Float tmp25 = ::Std_obj::parseFloat(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(86)
			::String tmp26 = _items->get(HX_HCSTRING("page","\x4f","\xda","\x51","\x4a"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(86)
			::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(86)
			Dynamic tmp28 = ::Std_obj::parseInt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			struct _Function_2_1{
				inline static Dynamic Block( Float &tmp22,Dynamic &tmp28,Float &tmp13,Float &tmp19,Dynamic &tmp4,Float &tmp10,Float &tmp25,Float &tmp7,Float &tmp16){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/importers/bitmapfont/BitmapFontParser.hx",77,0x0ee4ea77)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp4,false);
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp7,false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp10,false);
						__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp13,false);
						__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp16,false);
						__result->Add(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde") , tmp19,false);
						__result->Add(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07") , tmp22,false);
						__result->Add(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe") , tmp25,false);
						__result->Add(HX_HCSTRING("page","\x4f","\xda","\x51","\x4a") , tmp28,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(77)
			Dynamic tmp29 = _Function_2_1::Block(tmp22,tmp28,tmp13,tmp19,tmp4,tmp10,tmp25,tmp7,tmp16);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(77)
			Dynamic _char = tmp29;		HX_STACK_VAR(_char,"_char");
			HX_STACK_LINE(89)
			int tmp30 = _char->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(89)
			Dynamic tmp31 = _char;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(89)
			_info->__Field(HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp30,tmp31);
		}
		else if (  ( _switch_1==HX_HCSTRING("kerning","\xcc","\xba","\x37","\xb0"))){
			HX_STACK_LINE(95)
			::String tmp2 = _items->get(HX_HCSTRING("first","\x30","\x78","\x9d","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			Dynamic _first = tmp4;		HX_STACK_VAR(_first,"_first");
			HX_STACK_LINE(96)
			::String tmp5 = _items->get(HX_HCSTRING("second","\x74","\xcf","\x47","\x64"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			Dynamic _second = tmp7;		HX_STACK_VAR(_second,"_second");
			HX_STACK_LINE(97)
			::String tmp8 = _items->get(HX_HCSTRING("amount","\xd8","\x11","\x03","\xd5"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(97)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(97)
			Float tmp10 = ::Std_obj::parseFloat(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(97)
			Float _amount = tmp10;		HX_STACK_VAR(_amount,"_amount");
			HX_STACK_LINE(99)
			Dynamic tmp11 = _first;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			::haxe::ds::IntMap tmp12 = _info->__Field(HX_HCSTRING("kernings","\x27","\xb8","\x8b","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			::haxe::ds::IntMap _map = tmp12;		HX_STACK_VAR(_map,"_map");
			HX_STACK_LINE(100)
			bool tmp13 = (_map == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			if ((tmp13)){
				HX_STACK_LINE(101)
				::haxe::ds::IntMap tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(101)
					::haxe::ds::IntMap tmp15 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(101)
					::haxe::ds::IntMap tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(101)
					tmp14 = tmp16;
				}
				HX_STACK_LINE(101)
				_map = tmp14;
				HX_STACK_LINE(102)
				Dynamic tmp15 = _first;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(102)
				::haxe::ds::IntMap tmp16 = _map;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				_info->__Field(HX_HCSTRING("kernings","\x27","\xb8","\x8b","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp15,tmp16);
			}
			HX_STACK_LINE(105)
			Dynamic tmp14 = _second;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(105)
			Float tmp15 = _amount;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(105)
			_map->set(tmp14,tmp15);
		}
		else  {
		}
;
;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapFontParser_obj,parse_token,(void))

::haxe::ds::StringMap BitmapFontParser_obj::tokenize_line( Array< ::String > _tokens){
	HX_STACK_FRAME("luxe.importers.bitmapfont.BitmapFontParser","tokenize_line",0xce8fd5b2,"luxe.importers.bitmapfont.BitmapFontParser.tokenize_line","luxe/importers/bitmapfont/BitmapFontParser.hx",114,0x0ee4ea77)
	HX_STACK_ARG(_tokens,"_tokens")
	HX_STACK_LINE(116)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		tmp = tmp2;
	}
	HX_STACK_LINE(116)
	::haxe::ds::StringMap _item_map = tmp;		HX_STACK_VAR(_item_map,"_item_map");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			bool tmp1 = (_g < _tokens->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			if ((tmp2)){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(118)
			::String tmp3 = _tokens->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			::String _token = tmp3;		HX_STACK_VAR(_token,"_token");
			HX_STACK_LINE(118)
			++(_g);
			HX_STACK_LINE(119)
			Array< ::String > _items = _token.split(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(_items,"_items");
			HX_STACK_LINE(120)
			::String tmp4 = _items->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			::String tmp5 = _items->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			_item_map->set(tmp4,tmp5);
		}
	}
	HX_STACK_LINE(123)
	::haxe::ds::StringMap tmp1 = _item_map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapFontParser_obj,tokenize_line,return )

::String BitmapFontParser_obj::trim( ::String _s){
	HX_STACK_FRAME("luxe.importers.bitmapfont.BitmapFontParser","trim",0xc7bf1668,"luxe.importers.bitmapfont.BitmapFontParser.trim","luxe/importers/bitmapfont/BitmapFontParser.hx",127,0x0ee4ea77)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(127)
	::String tmp = _s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	::String tmp1 = ::StringTools_obj::trim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapFontParser_obj,trim,return )

::String BitmapFontParser_obj::unquote( ::String _s){
	HX_STACK_FRAME("luxe.importers.bitmapfont.BitmapFontParser","unquote",0x5a0bd87d,"luxe.importers.bitmapfont.BitmapFontParser.unquote","luxe/importers/bitmapfont/BitmapFontParser.hx",128,0x0ee4ea77)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(129)
	int tmp = _s.indexOf(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	bool tmp1 = (tmp != (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	if ((tmp1)){
		HX_STACK_LINE(130)
		::String tmp2 = _s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		::String tmp3 = ::StringTools_obj::replace(tmp2,HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		_s = tmp3;
	}
	HX_STACK_LINE(131)
	::String tmp2 = _s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapFontParser_obj,unquote,return )


BitmapFontParser_obj::BitmapFontParser_obj()
{
}

bool BitmapFontParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unquote") ) { outValue = unquote_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parse_token") ) { outValue = parse_token_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tokenize_line") ) { outValue = tokenize_line_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFontParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFontParser_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFontParser_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("parse_token","\xad","\x02","\xbb","\x56"),
	HX_HCSTRING("tokenize_line","\xf8","\xaf","\x07","\x1f"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("unquote","\x43","\x1a","\x83","\x5a"),
	::String(null()) };

void BitmapFontParser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.importers.bitmapfont.BitmapFontParser","\xa8","\x54","\x97","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapFontParser_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BitmapFontParser_obj >;
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
} // end namespace importers
} // end namespace bitmapfont
