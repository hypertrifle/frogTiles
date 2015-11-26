#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_importers_bitmapfont_BitmapFontParser
#include <luxe/importers/bitmapfont/BitmapFontParser.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_CodePointIter
#include <luxe/utils/unifill/CodePointIter.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill_Unifill
#include <luxe/utils/unifill/Unifill.h>
#endif
#ifndef INCLUDED_luxe_utils_unifill__Utf8_Utf8_Impl_
#include <luxe/utils/unifill/_Utf8/Utf8_Impl_.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetText
#include <snow/system/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_system_assets_Assets
#include <snow/system/assets/Assets.h>
#endif
namespace phoenix{

Void BitmapFont_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("phoenix.BitmapFont","new",0x6066476f,"phoenix.BitmapFont.new","phoenix/BitmapFont.hx",46,0xdfcf0e40)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		if ((tmp)){
			HX_STACK_LINE(48)
			::String tmp1 = HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(50)
	_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)6;
	HX_STACK_LINE(52)
	Dynamic tmp = _options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	super::__construct(tmp);
	HX_STACK_LINE(54)
	bool tmp1 = (_options->__Field(HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	if ((tmp1)){
		HX_STACK_LINE(55)
		this->texture_path = _options->__Field(HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(57)
		::String tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		::String tmp3 = ::haxe::io::Path_obj::directory(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		this->texture_path = tmp3;
	}
	HX_STACK_LINE(60)
	::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(60)
	this->pages = tmp2;
	HX_STACK_LINE(62)
	bool tmp3 = (_options->__Field(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	if ((tmp3)){
		HX_STACK_LINE(62)
		bool tmp4 = (_options->__Field(HX_HCSTRING("font_data","\xda","\xa5","\x22","\x0e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		if ((tmp4)){
			HX_STACK_LINE(230)
			::String tmp5 = HX_HCSTRING(" ( BitmapFont create from pages + font_data requires both of those options","\x22","\xf0","\xc8","\x94");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			::String tmp6 = (tmp5 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			::String tmp7 = (HX_HCSTRING("_options.font_data was null","\x13","\xa6","\x8e","\xf7") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			::luxe::DebugError tmp8 = ::luxe::DebugError_obj::null_assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			HX_STACK_DO_THROW(tmp8);
		}
	}
	HX_STACK_LINE(63)
	bool tmp4 = (_options->__Field(HX_HCSTRING("font_data","\xda","\xa5","\x22","\x0e"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	if ((tmp4)){
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			bool tmp5 = (_options->__Field(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			if ((tmp5)){
				HX_STACK_LINE(230)
				::String tmp6 = HX_HCSTRING(" ( BitmapFont create from pages + font_data requires both of those options","\x22","\xf0","\xc8","\x94");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(230)
				::String tmp7 = (tmp6 + HX_HCSTRING(" )","\x09","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				::String tmp8 = (HX_HCSTRING("_options.pages was null","\xe9","\x9f","\xdc","\x8f") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(65)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(67)
		::String tmp5 = _options->__Field(HX_HCSTRING("font_data","\xda","\xa5","\x22","\x0e"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		Dynamic tmp6 = ::luxe::importers::bitmapfont::BitmapFontParser_obj::parse(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		this->set_info(tmp6);
		HX_STACK_LINE(68)
		this->apply_pages(_options->__Field(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd"), hx::paccDynamic ));
	}
}
;
	return null();
}

//BitmapFont_obj::~BitmapFont_obj() { }

Dynamic BitmapFont_obj::__CreateEmpty() { return  new BitmapFont_obj; }
hx::ObjectPtr< BitmapFont_obj > BitmapFont_obj::__new(Dynamic _options)
{  hx::ObjectPtr< BitmapFont_obj > _result_ = new BitmapFont_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic BitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFont_obj > _result_ = new BitmapFont_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic BitmapFont_obj::kerning( int _first,int _second){
	HX_STACK_FRAME("phoenix.BitmapFont","kerning",0xd354655b,"phoenix.BitmapFont.kerning","phoenix/BitmapFont.hx",79,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_first,"_first")
	HX_STACK_ARG(_second,"_second")
	HX_STACK_LINE(81)
	Dynamic tmp = this->info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = _first;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	::haxe::ds::IntMap tmp2 = tmp->__Field(HX_HCSTRING("kernings","\x27","\xb8","\x8b","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	::haxe::ds::IntMap _map = tmp2;		HX_STACK_VAR(_map,"_map");
	HX_STACK_LINE(83)
	bool tmp3 = (_map != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	if ((tmp3)){
		HX_STACK_LINE(83)
		int tmp5 = _second;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		tmp4 = _map->exists(tmp6);
	}
	else{
		HX_STACK_LINE(83)
		tmp4 = false;
	}
	HX_STACK_LINE(83)
	if ((tmp4)){
		HX_STACK_LINE(84)
		int tmp5 = _second;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		Dynamic tmp6 = _map->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		return tmp7;
	}
	HX_STACK_LINE(87)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,kerning,return )

::String BitmapFont_obj::wrap_string_to_bounds( ::String _string,::phoenix::Rectangle _bounds,hx::Null< Float >  __o__point_size,hx::Null< Float >  __o__letter_spc){
Float _point_size = __o__point_size.Default(((Float)1.0));
Float _letter_spc = __o__letter_spc.Default(((Float)0.0));
	HX_STACK_FRAME("phoenix.BitmapFont","wrap_string_to_bounds",0x606853ef,"phoenix.BitmapFont.wrap_string_to_bounds","phoenix/BitmapFont.hx",93,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_bounds,"_bounds")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_letter_spc,"_letter_spc")
{
		HX_STACK_LINE(93)
		::phoenix::BitmapFont _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		bool tmp = (_bounds == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		if ((tmp)){
			HX_STACK_LINE(96)
			::String tmp1 = _string;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			return tmp1;
		}
		HX_STACK_LINE(99)
		Float _cur_x = ((Float)0.0);		HX_STACK_VAR(_cur_x,"_cur_x");
		HX_STACK_LINE(99)
		int _idx = (int)0;		HX_STACK_VAR(_idx,"_idx");
		HX_STACK_LINE(100)
		::String _final_str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_final_str,"_final_str");
		HX_STACK_LINE(106)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Float _max_w = ((Float)0.0);		HX_STACK_VAR(_max_w,"_max_w");
			HX_STACK_LINE(106)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			bool _push_widths = tmp2;		HX_STACK_VAR(_push_widths,"_push_widths");
			HX_STACK_LINE(106)
			Array< ::String > _lines = ::luxe::utils::unifill::Unifill_obj::uSplit(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(106)
				while((true)){
					HX_STACK_LINE(106)
					bool tmp3 = (_g1 < _lines->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(106)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(106)
					if ((tmp4)){
						HX_STACK_LINE(106)
						break;
					}
					HX_STACK_LINE(106)
					::String tmp5 = _lines->__get(_g1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(106)
					::String _line = tmp5;		HX_STACK_VAR(_line,"_line");
					HX_STACK_LINE(106)
					++(_g1);
					HX_STACK_LINE(106)
					::String tmp6 = _line;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(106)
					Float tmp7 = _point_size;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(106)
					Float tmp8 = _letter_spc;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(106)
					Float tmp9 = _g->width_of_line(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(106)
					Float _cur_w = tmp9;		HX_STACK_VAR(_cur_w,"_cur_w");
					HX_STACK_LINE(106)
					Float tmp10 = _max_w;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(106)
					Float tmp11 = _cur_w;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(106)
					Float tmp12 = ::Math_obj::max(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(106)
					_max_w = tmp12;
					HX_STACK_LINE(106)
					bool tmp13 = _push_widths;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(106)
					if ((tmp13)){
						HX_STACK_LINE(106)
						Float tmp14 = _cur_w;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(106)
						hx::Throw(HX_CSTRING("Invalid field access on null object"))(tmp14);
					}
				}
			}
			HX_STACK_LINE(106)
			tmp1 = _max_w;
		}
		HX_STACK_LINE(106)
		Float _spacew = tmp1;		HX_STACK_VAR(_spacew,"_spacew");
		HX_STACK_LINE(118)
		Array< ::String > _strings = _string.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(_strings,"_strings");
		HX_STACK_LINE(119)
		int _count = _strings->length;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(121)
			while((true)){
				HX_STACK_LINE(121)
				bool tmp2 = (_g1 < _strings->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(121)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(121)
				if ((tmp3)){
					HX_STACK_LINE(121)
					break;
				}
				HX_STACK_LINE(121)
				::String tmp4 = _strings->__get(_g1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(121)
				::String _str = tmp4;		HX_STACK_VAR(_str,"_str");
				HX_STACK_LINE(121)
				++(_g1);
				HX_STACK_LINE(122)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					int startIndex = (int)0;		HX_STACK_VAR(startIndex,"startIndex");
					HX_STACK_LINE(122)
					int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(122)
					{
						HX_STACK_LINE(122)
						::String this1 = _str;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(122)
						bool tmp7 = (startIndex >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(122)
						if ((tmp7)){
							HX_STACK_LINE(122)
							int index = (int)0;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(122)
							int tmp8 = this1.length;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(122)
							int len = tmp8;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(122)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(122)
							while((true)){
								HX_STACK_LINE(122)
								bool tmp9 = (i < startIndex);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(122)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(122)
								if ((tmp9)){
									HX_STACK_LINE(122)
									tmp10 = (index < len);
								}
								else{
									HX_STACK_LINE(122)
									tmp10 = false;
								}
								HX_STACK_LINE(122)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(122)
								if ((tmp11)){
									HX_STACK_LINE(122)
									break;
								}
								HX_STACK_LINE(122)
								int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									int tmp13 = index;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(122)
									int tmp14 = this1.cca(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(122)
									int c = tmp14;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(122)
									bool tmp15 = (c < (int)192);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(122)
									if ((tmp15)){
										HX_STACK_LINE(122)
										tmp12 = (int)1;
									}
									else{
										HX_STACK_LINE(122)
										bool tmp16 = (c < (int)224);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(122)
										if ((tmp16)){
											HX_STACK_LINE(122)
											tmp12 = (int)2;
										}
										else{
											HX_STACK_LINE(122)
											bool tmp17 = (c < (int)240);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(122)
											if ((tmp17)){
												HX_STACK_LINE(122)
												tmp12 = (int)3;
											}
											else{
												HX_STACK_LINE(122)
												bool tmp18 = (c < (int)248);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(122)
												if ((tmp18)){
													HX_STACK_LINE(122)
													tmp12 = (int)4;
												}
												else{
													HX_STACK_LINE(122)
													tmp12 = (int)1;
												}
											}
										}
									}
								}
								HX_STACK_LINE(122)
								hx::AddEq(index,tmp12);
								HX_STACK_LINE(122)
								++(i);
							}
							HX_STACK_LINE(122)
							tmp6 = index;
						}
						else{
							HX_STACK_LINE(122)
							int index = (int)0;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(122)
							int count = (int)0;		HX_STACK_VAR(count,"count");
							HX_STACK_LINE(122)
							while((true)){
								HX_STACK_LINE(122)
								int tmp8 = count;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(122)
								int tmp9 = startIndex;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(122)
								int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(122)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(122)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(122)
								if ((tmp11)){
									HX_STACK_LINE(122)
									tmp12 = ((int)0 < index);
								}
								else{
									HX_STACK_LINE(122)
									tmp12 = false;
								}
								HX_STACK_LINE(122)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(122)
								if ((tmp13)){
									HX_STACK_LINE(122)
									break;
								}
								HX_STACK_LINE(122)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(122)
								{
									HX_STACK_LINE(122)
									::String this2 = this1;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(122)
									{
										HX_STACK_LINE(122)
										int tmp15 = (index - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(122)
										int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(122)
										{
											HX_STACK_LINE(122)
											int tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(122)
											int tmp18 = this2.cca(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(122)
											tmp16 = tmp18;
										}
										HX_STACK_LINE(122)
										int c1 = tmp16;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(122)
										bool tmp17 = (c1 < (int)128);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(122)
										bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(122)
										bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(122)
										if ((tmp18)){
											HX_STACK_LINE(122)
											tmp19 = (c1 >= (int)192);
										}
										else{
											HX_STACK_LINE(122)
											tmp19 = true;
										}
										HX_STACK_LINE(122)
										if ((tmp19)){
											HX_STACK_LINE(122)
											tmp14 = (int)1;
										}
										else{
											HX_STACK_LINE(122)
											int tmp20 = (index - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(122)
											int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(122)
											{
												HX_STACK_LINE(122)
												int tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(122)
												int tmp23 = this2.cca(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(122)
												tmp21 = tmp23;
											}
											HX_STACK_LINE(122)
											int tmp22 = (int(tmp21) & int((int)224));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(122)
											bool tmp23 = (tmp22 == (int)192);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(122)
											if ((tmp23)){
												HX_STACK_LINE(122)
												tmp14 = (int)2;
											}
											else{
												HX_STACK_LINE(122)
												int tmp24 = (index - (int)3);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(122)
												int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(122)
												{
													HX_STACK_LINE(122)
													int tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(122)
													int tmp27 = this2.cca(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(122)
													tmp25 = tmp27;
												}
												HX_STACK_LINE(122)
												int tmp26 = (int(tmp25) & int((int)240));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(122)
												bool tmp27 = (tmp26 == (int)224);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(122)
												if ((tmp27)){
													HX_STACK_LINE(122)
													tmp14 = (int)3;
												}
												else{
													HX_STACK_LINE(122)
													int tmp28 = (index - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(122)
													int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(122)
													{
														HX_STACK_LINE(122)
														int tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(122)
														int tmp31 = this2.cca(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(122)
														tmp29 = tmp31;
													}
													HX_STACK_LINE(122)
													int tmp30 = (int(tmp29) & int((int)248));		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(122)
													bool tmp31 = (tmp30 == (int)240);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(122)
													if ((tmp31)){
														HX_STACK_LINE(122)
														tmp14 = (int)4;
													}
													else{
														HX_STACK_LINE(122)
														tmp14 = (int)1;
													}
												}
											}
										}
									}
								}
								HX_STACK_LINE(122)
								hx::SubEq(index,tmp14);
								HX_STACK_LINE(122)
								++(count);
							}
							HX_STACK_LINE(122)
							tmp6 = index;
						}
					}
					HX_STACK_LINE(122)
					int tmp7 = _str.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(122)
					int index = tmp7;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(122)
					bool tmp8 = (index >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(122)
					if ((tmp8)){
						HX_STACK_LINE(122)
						::String tmp9 = _str;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(122)
						int tmp10 = index;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(122)
						tmp5 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp9,(int)0,tmp10);
					}
					else{
						HX_STACK_LINE(122)
						tmp5 = (int)-1;
					}
				}
				HX_STACK_LINE(122)
				bool tmp6 = (tmp5 == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				if ((tmp6)){
					HX_STACK_LINE(123)
					bool tmp7 = (_str == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(123)
					if ((tmp7)){
						HX_STACK_LINE(123)
						_str = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");
					}
					HX_STACK_LINE(124)
					{
						HX_STACK_LINE(124)
						Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(124)
						{
							HX_STACK_LINE(124)
							Float _max_w = ((Float)0.0);		HX_STACK_VAR(_max_w,"_max_w");
							HX_STACK_LINE(124)
							bool _push_widths = false;		HX_STACK_VAR(_push_widths,"_push_widths");
							HX_STACK_LINE(124)
							::String tmp9 = _str;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(124)
							Array< ::String > _lines = ::luxe::utils::unifill::Unifill_obj::uSplit(tmp9,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
							HX_STACK_LINE(124)
							{
								HX_STACK_LINE(124)
								int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(124)
								while((true)){
									HX_STACK_LINE(124)
									bool tmp10 = (_g2 < _lines->length);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(124)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(124)
									if ((tmp11)){
										HX_STACK_LINE(124)
										break;
									}
									HX_STACK_LINE(124)
									::String tmp12 = _lines->__get(_g2);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(124)
									::String _line = tmp12;		HX_STACK_VAR(_line,"_line");
									HX_STACK_LINE(124)
									++(_g2);
									HX_STACK_LINE(124)
									::String tmp13 = _line;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(124)
									Float tmp14 = _point_size;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(124)
									Float tmp15 = _letter_spc;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(124)
									Float tmp16 = _g->width_of_line(tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(124)
									Float _cur_w = tmp16;		HX_STACK_VAR(_cur_w,"_cur_w");
									HX_STACK_LINE(124)
									Float tmp17 = _max_w;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(124)
									Float tmp18 = _cur_w;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(124)
									Float tmp19 = ::Math_obj::max(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(124)
									_max_w = tmp19;
									HX_STACK_LINE(124)
									bool tmp20 = _push_widths;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(124)
									if ((tmp20)){
										HX_STACK_LINE(124)
										Float tmp21 = _cur_w;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(124)
										hx::Throw(HX_CSTRING("Invalid field access on null object"))(tmp21);
									}
								}
							}
							HX_STACK_LINE(124)
							tmp8 = _max_w;
						}
						HX_STACK_LINE(124)
						Float _w = tmp8;		HX_STACK_VAR(_w,"_w");
						HX_STACK_LINE(124)
						Float tmp9 = (_cur_x + _w);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(124)
						Float tmp10 = _bounds->w;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(124)
						bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(124)
						if ((tmp11)){
							HX_STACK_LINE(124)
							_cur_x = (int)0;
							HX_STACK_LINE(124)
							hx::AddEq(_final_str,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
						}
						HX_STACK_LINE(124)
						hx::AddEq(_cur_x,_w);
						HX_STACK_LINE(124)
						hx::AddEq(_final_str,_str);
					}
				}
				else{
					HX_STACK_LINE(126)
					int _widx = (int)0;		HX_STACK_VAR(_widx,"_widx");
					HX_STACK_LINE(127)
					Array< ::String > _words = _str.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_words,"_words");
					HX_STACK_LINE(128)
					{
						HX_STACK_LINE(128)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(128)
						while((true)){
							HX_STACK_LINE(128)
							bool tmp7 = (_g11 < _words->length);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(128)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(128)
							if ((tmp8)){
								HX_STACK_LINE(128)
								break;
							}
							HX_STACK_LINE(128)
							::String tmp9 = _words->__get(_g11);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(128)
							::String _word = tmp9;		HX_STACK_VAR(_word,"_word");
							HX_STACK_LINE(128)
							++(_g11);
							HX_STACK_LINE(130)
							bool tmp10 = (_word != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(130)
							if ((tmp10)){
								HX_STACK_LINE(131)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(131)
								{
									HX_STACK_LINE(131)
									Float _max_w = ((Float)0.0);		HX_STACK_VAR(_max_w,"_max_w");
									HX_STACK_LINE(131)
									bool _push_widths = false;		HX_STACK_VAR(_push_widths,"_push_widths");
									HX_STACK_LINE(131)
									::String tmp12 = _word;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(131)
									Array< ::String > _lines = ::luxe::utils::unifill::Unifill_obj::uSplit(tmp12,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
									HX_STACK_LINE(131)
									{
										HX_STACK_LINE(131)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(131)
										while((true)){
											HX_STACK_LINE(131)
											bool tmp13 = (_g2 < _lines->length);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(131)
											bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(131)
											if ((tmp14)){
												HX_STACK_LINE(131)
												break;
											}
											HX_STACK_LINE(131)
											::String tmp15 = _lines->__get(_g2);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(131)
											::String _line = tmp15;		HX_STACK_VAR(_line,"_line");
											HX_STACK_LINE(131)
											++(_g2);
											HX_STACK_LINE(131)
											::String tmp16 = _line;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(131)
											Float tmp17 = _point_size;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(131)
											Float tmp18 = _letter_spc;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(131)
											Float tmp19 = _g->width_of_line(tmp16,tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(131)
											Float _cur_w = tmp19;		HX_STACK_VAR(_cur_w,"_cur_w");
											HX_STACK_LINE(131)
											Float tmp20 = _max_w;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(131)
											Float tmp21 = _cur_w;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(131)
											Float tmp22 = ::Math_obj::max(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(131)
											_max_w = tmp22;
											HX_STACK_LINE(131)
											bool tmp23 = _push_widths;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(131)
											if ((tmp23)){
												HX_STACK_LINE(131)
												Float tmp24 = _cur_w;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(131)
												hx::Throw(HX_CSTRING("Invalid field access on null object"))(tmp24);
											}
										}
									}
									HX_STACK_LINE(131)
									tmp11 = _max_w;
								}
								HX_STACK_LINE(131)
								Float _w = tmp11;		HX_STACK_VAR(_w,"_w");
								HX_STACK_LINE(131)
								Float tmp12 = (_cur_x + _w);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(131)
								Float tmp13 = _bounds->w;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(131)
								bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(131)
								if ((tmp14)){
									HX_STACK_LINE(131)
									_cur_x = (int)0;
									HX_STACK_LINE(131)
									hx::AddEq(_final_str,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
								}
								HX_STACK_LINE(131)
								hx::AddEq(_cur_x,_w);
								HX_STACK_LINE(131)
								hx::AddEq(_final_str,_word);
							}
							else{
								HX_STACK_LINE(133)
								_cur_x = (int)0;
							}
							HX_STACK_LINE(136)
							int tmp11 = _widx;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(136)
							int tmp12 = (_words->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(136)
							bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(136)
							if ((tmp13)){
								HX_STACK_LINE(137)
								hx::AddEq(_final_str,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
								HX_STACK_LINE(138)
								_cur_x = (int)0;
							}
							HX_STACK_LINE(141)
							(_widx)++;
						}
					}
				}
				HX_STACK_LINE(146)
				int tmp7 = _idx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(146)
				int tmp8 = (_count - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(146)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(146)
				if ((tmp9)){
					HX_STACK_LINE(147)
					hx::AddEq(_final_str,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(148)
					Float tmp10 = (_spacew + _letter_spc);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(148)
					hx::AddEq(_cur_x,tmp10);
				}
				HX_STACK_LINE(151)
				(_idx)++;
			}
		}
		HX_STACK_LINE(155)
		::String tmp2 = _final_str;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapFont_obj,wrap_string_to_bounds,return )

Float BitmapFont_obj::width_of_line( ::String _string,hx::Null< Float >  __o__point_size,hx::Null< Float >  __o__letter_spc){
Float _point_size = __o__point_size.Default(((Float)1.0));
Float _letter_spc = __o__letter_spc.Default(((Float)0.0));
	HX_STACK_FRAME("phoenix.BitmapFont","width_of_line",0x6ed884b2,"phoenix.BitmapFont.width_of_line","phoenix/BitmapFont.hx",160,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_letter_spc,"_letter_spc")
{
		HX_STACK_LINE(163)
		Float _cur_x = ((Float)0.0);		HX_STACK_VAR(_cur_x,"_cur_x");
		HX_STACK_LINE(165)
		Float _cur_w = ((Float)0.0);		HX_STACK_VAR(_cur_w,"_cur_w");
		HX_STACK_LINE(167)
		Float tmp = _point_size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		Dynamic tmp1 = this->info;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		Float tmp2 = tmp1->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		Float _ratio = tmp3;		HX_STACK_VAR(_ratio,"_ratio");
		HX_STACK_LINE(169)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(170)
		::String tmp4 = _string;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		int tmp5 = _string.length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		int tmp6 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointCount(tmp4,(int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		int _len = tmp6;		HX_STACK_VAR(_len,"_len");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			::luxe::utils::unifill::CodePointIter tmp7 = ::luxe::utils::unifill::CodePointIter_obj::__new(_string);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			::luxe::utils::unifill::CodePointIter _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				bool tmp8 = (_g->index < _g->endIndex);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(172)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(172)
				if ((tmp9)){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(172)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				{
					HX_STACK_LINE(172)
					_g->i = _g->index;
					HX_STACK_LINE(172)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(172)
					{
						HX_STACK_LINE(172)
						int tmp12 = _g->index;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(172)
						int tmp13 = _g->string.cca(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						int c = tmp13;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(172)
						bool tmp14 = (c < (int)192);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(172)
						if ((tmp14)){
							HX_STACK_LINE(172)
							tmp11 = (int)1;
						}
						else{
							HX_STACK_LINE(172)
							bool tmp15 = (c < (int)224);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(172)
							if ((tmp15)){
								HX_STACK_LINE(172)
								tmp11 = (int)2;
							}
							else{
								HX_STACK_LINE(172)
								bool tmp16 = (c < (int)240);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(172)
								if ((tmp16)){
									HX_STACK_LINE(172)
									tmp11 = (int)3;
								}
								else{
									HX_STACK_LINE(172)
									bool tmp17 = (c < (int)248);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(172)
									if ((tmp17)){
										HX_STACK_LINE(172)
										tmp11 = (int)4;
									}
									else{
										HX_STACK_LINE(172)
										tmp11 = (int)1;
									}
								}
							}
						}
					}
					HX_STACK_LINE(172)
					hx::AddEq(_g->index,tmp11);
					HX_STACK_LINE(172)
					::String tmp12 = _g->string;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					int tmp13 = _g->i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(172)
					int tmp14 = ::luxe::utils::unifill::_Utf8::Utf8_Impl__obj::codePointAt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(172)
					tmp10 = tmp14;
				}
				HX_STACK_LINE(172)
				int _uglyph = tmp10;		HX_STACK_VAR(_uglyph,"_uglyph");
				HX_STACK_LINE(174)
				int _index = _uglyph;		HX_STACK_VAR(_index,"_index");
				HX_STACK_LINE(175)
				Dynamic tmp11 = this->info;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				int tmp12 = _index;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(175)
				Dynamic tmp13 = tmp11->__Field(HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(175)
				Dynamic _char = tmp13;		HX_STACK_VAR(_char,"_char");
				HX_STACK_LINE(176)
				bool tmp14 = (_char == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(176)
				if ((tmp14)){
					HX_STACK_LINE(176)
					Dynamic tmp15 = this->space_char;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					_char = tmp15;
				}
				HX_STACK_LINE(180)
				Float tmp15 = _char->__Field(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(180)
				Float tmp16 = _char->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(180)
				Float tmp17 = _char->__Field(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(180)
				Float tmp18 = ::Math_obj::max(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(180)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(180)
				Float tmp20 = _ratio;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(180)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(180)
				Float _cw = tmp21;		HX_STACK_VAR(_cw,"_cw");
				HX_STACK_LINE(181)
				Float tmp22 = _cur_x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(181)
				Float tmp23 = (_char->__Field(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"), hx::paccDynamic ) * _ratio);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(181)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(181)
				Float _cx = tmp24;		HX_STACK_VAR(_cx,"_cx");
				HX_STACK_LINE(183)
				Float _spacing = _char->__Field(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"), hx::paccDynamic );		HX_STACK_VAR(_spacing,"_spacing");
				HX_STACK_LINE(184)
				int tmp25 = i;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(184)
				int tmp26 = (_len - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(184)
				bool tmp27 = (tmp25 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(184)
				if ((tmp27)){
					HX_STACK_LINE(185)
					::String tmp28 = _string;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(185)
					int tmp29 = (i + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(185)
					int tmp30 = ::haxe::Utf8_obj::charCodeAt(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(185)
					int _next_index = tmp30;		HX_STACK_VAR(_next_index,"_next_index");
					HX_STACK_LINE(186)
					Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						Dynamic tmp32 = this->info;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(186)
						int tmp33 = _index;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(186)
						::haxe::ds::IntMap tmp34 = tmp32->__Field(HX_HCSTRING("kernings","\x27","\xb8","\x8b","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(186)
						::haxe::ds::IntMap _map = tmp34;		HX_STACK_VAR(_map,"_map");
						HX_STACK_LINE(186)
						bool tmp35 = (_map != null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(186)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(186)
						if ((tmp35)){
							HX_STACK_LINE(186)
							int tmp37 = _next_index;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(186)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(186)
							tmp36 = _map->exists(tmp38);
						}
						else{
							HX_STACK_LINE(186)
							tmp36 = false;
						}
						HX_STACK_LINE(186)
						if ((tmp36)){
							HX_STACK_LINE(186)
							int tmp37 = _next_index;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(186)
							Dynamic tmp38 = _map->get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(186)
							tmp31 = tmp38;
						}
						else{
							HX_STACK_LINE(186)
							tmp31 = (int)0;
						}
					}
					HX_STACK_LINE(186)
					hx::AddEq(_spacing,tmp31);
					HX_STACK_LINE(187)
					bool tmp32 = (_next_index >= (int)32);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(187)
					if ((tmp32)){
						HX_STACK_LINE(187)
						hx::AddEq(_spacing,_letter_spc);
					}
				}
				HX_STACK_LINE(190)
				Float tmp28 = (_spacing * _ratio);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(190)
				hx::AddEq(_cur_x,tmp28);
				HX_STACK_LINE(191)
				Float tmp29 = _cur_w;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(191)
				Float tmp30 = (_cx + _cw);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(191)
				Float tmp31 = ::Math_obj::max(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(191)
				_cur_w = tmp31;
				HX_STACK_LINE(193)
				++(i);
			}
		}
		HX_STACK_LINE(196)
		Float tmp7 = _cur_w;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFont_obj,width_of_line,return )

Float BitmapFont_obj::width_of( ::String _string,hx::Null< Float >  __o__point_size,hx::Null< Float >  __o__letter_spc,Array< Float > _line_widths){
Float _point_size = __o__point_size.Default(((Float)1.0));
Float _letter_spc = __o__letter_spc.Default(((Float)0.0));
	HX_STACK_FRAME("phoenix.BitmapFont","width_of",0x45eb5b81,"phoenix.BitmapFont.width_of","phoenix/BitmapFont.hx",202,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_letter_spc,"_letter_spc")
	HX_STACK_ARG(_line_widths,"_line_widths")
{
		HX_STACK_LINE(205)
		Float _max_w = ((Float)0.0);		HX_STACK_VAR(_max_w,"_max_w");
		HX_STACK_LINE(206)
		bool tmp = (_line_widths != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		bool _push_widths = tmp;		HX_STACK_VAR(_push_widths,"_push_widths");
		HX_STACK_LINE(207)
		::String tmp1 = _string;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		Array< ::String > _lines = ::luxe::utils::unifill::Unifill_obj::uSplit(tmp1,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(209)
			while((true)){
				HX_STACK_LINE(209)
				bool tmp2 = (_g < _lines->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(209)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(209)
				if ((tmp3)){
					HX_STACK_LINE(209)
					break;
				}
				HX_STACK_LINE(209)
				::String tmp4 = _lines->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(209)
				::String _line = tmp4;		HX_STACK_VAR(_line,"_line");
				HX_STACK_LINE(209)
				++(_g);
				HX_STACK_LINE(211)
				::String tmp5 = _line;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(211)
				Float tmp6 = _point_size;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(211)
				Float tmp7 = _letter_spc;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(211)
				Float tmp8 = this->width_of_line(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(211)
				Float _cur_w = tmp8;		HX_STACK_VAR(_cur_w,"_cur_w");
				HX_STACK_LINE(213)
				Float tmp9 = _max_w;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(213)
				Float tmp10 = _cur_w;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(213)
				Float tmp11 = ::Math_obj::max(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(213)
				_max_w = tmp11;
				HX_STACK_LINE(215)
				bool tmp12 = _push_widths;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(215)
				if ((tmp12)){
					HX_STACK_LINE(216)
					Float tmp13 = _cur_w;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(216)
					_line_widths->push(tmp13);
				}
			}
		}
		HX_STACK_LINE(222)
		Float tmp2 = _max_w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapFont_obj,width_of,return )

Float BitmapFont_obj::height_of( ::String _string,Float _point_size,hx::Null< Float >  __o__line_spc){
Float _line_spc = __o__line_spc.Default(((Float)0.0));
	HX_STACK_FRAME("phoenix.BitmapFont","height_of",0x5232c5fe,"phoenix.BitmapFont.height_of","phoenix/BitmapFont.hx",227,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_line_spc,"_line_spc")
{
		HX_STACK_LINE(229)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			Array< ::String > _lines = _string.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
			HX_STACK_LINE(229)
			Float tmp1 = _point_size;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(229)
			Dynamic tmp2 = this->info;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			Float tmp3 = tmp2->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			Float tmp4 = (Float(tmp1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			Float _ratio = tmp4;		HX_STACK_VAR(_ratio,"_ratio");
			HX_STACK_LINE(229)
			int tmp5 = _lines->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			Dynamic tmp6 = this->info;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(229)
			Float tmp7 = tmp6->__Field(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(229)
			Float tmp8 = _line_spc;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(229)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(229)
			Float tmp10 = _ratio;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(229)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(229)
			tmp = (tmp5 * tmp11);
		}
		HX_STACK_LINE(229)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFont_obj,height_of,return )

::phoenix::Vector BitmapFont_obj::dimensions_of( ::String _string,Float _point_size,::phoenix::Vector _into,hx::Null< Float >  __o__letter_spc,hx::Null< Float >  __o__line_spc){
Float _letter_spc = __o__letter_spc.Default(((Float)0.0));
Float _line_spc = __o__line_spc.Default(((Float)0.0));
	HX_STACK_FRAME("phoenix.BitmapFont","dimensions_of",0x35ee66d8,"phoenix.BitmapFont.dimensions_of","phoenix/BitmapFont.hx",235,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_string,"_string")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_into,"_into")
	HX_STACK_ARG(_letter_spc,"_letter_spc")
	HX_STACK_ARG(_line_spc,"_line_spc")
{
		HX_STACK_LINE(237)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			Float _max_w = ((Float)0.0);		HX_STACK_VAR(_max_w,"_max_w");
			HX_STACK_LINE(237)
			bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(237)
			bool _push_widths = tmp1;		HX_STACK_VAR(_push_widths,"_push_widths");
			HX_STACK_LINE(237)
			::String tmp2 = _string;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(237)
			Array< ::String > _lines = ::luxe::utils::unifill::Unifill_obj::uSplit(tmp2,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(237)
				while((true)){
					HX_STACK_LINE(237)
					bool tmp3 = (_g < _lines->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(237)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(237)
					if ((tmp4)){
						HX_STACK_LINE(237)
						break;
					}
					HX_STACK_LINE(237)
					::String tmp5 = _lines->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(237)
					::String _line = tmp5;		HX_STACK_VAR(_line,"_line");
					HX_STACK_LINE(237)
					++(_g);
					HX_STACK_LINE(237)
					::String tmp6 = _line;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(237)
					Float tmp7 = _point_size;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(237)
					Float tmp8 = _letter_spc;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(237)
					Float tmp9 = this->width_of_line(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(237)
					Float _cur_w = tmp9;		HX_STACK_VAR(_cur_w,"_cur_w");
					HX_STACK_LINE(237)
					Float tmp10 = _max_w;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(237)
					Float tmp11 = _cur_w;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(237)
					Float tmp12 = ::Math_obj::max(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(237)
					_max_w = tmp12;
					HX_STACK_LINE(237)
					bool tmp13 = _push_widths;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(237)
					if ((tmp13)){
						HX_STACK_LINE(237)
						Float tmp14 = _cur_w;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(237)
						hx::Throw(HX_CSTRING("Invalid field access on null object"))(tmp14);
					}
				}
			}
			HX_STACK_LINE(237)
			tmp = _max_w;
		}
		HX_STACK_LINE(237)
		Float _width = tmp;		HX_STACK_VAR(_width,"_width");
		HX_STACK_LINE(238)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			Array< ::String > _lines = _string.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(_lines,"_lines");
			HX_STACK_LINE(238)
			Float tmp2 = _point_size;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			Dynamic tmp3 = this->info;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			Float tmp4 = tmp3->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			Float tmp5 = (Float(tmp2) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			Float _ratio = tmp5;		HX_STACK_VAR(_ratio,"_ratio");
			HX_STACK_LINE(238)
			int tmp6 = _lines->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(238)
			Dynamic tmp7 = this->info;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			Float tmp8 = tmp7->__Field(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			Float tmp9 = _line_spc;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(238)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(238)
			Float tmp11 = _ratio;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(238)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(238)
			tmp1 = (tmp6 * tmp12);
		}
		HX_STACK_LINE(238)
		Float _height = tmp1;		HX_STACK_VAR(_height,"_height");
		HX_STACK_LINE(240)
		::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			bool prev = _into->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(240)
			_into->ignore_listeners = true;
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				_into->x = _width;
				HX_STACK_LINE(240)
				bool tmp3 = _into->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(240)
				if ((tmp3)){
					HX_STACK_LINE(240)
					_into->x;
				}
				else{
					HX_STACK_LINE(240)
					bool tmp4 = (_into->listen_x != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(240)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(240)
					if ((tmp4)){
						HX_STACK_LINE(240)
						bool tmp6 = _into->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(240)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(240)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(240)
						tmp5 = false;
					}
					HX_STACK_LINE(240)
					if ((tmp5)){
						HX_STACK_LINE(240)
						Float tmp6 = _width;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(240)
						_into->listen_x(tmp6);
					}
					HX_STACK_LINE(240)
					_into->x;
				}
			}
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				_into->y = _height;
				HX_STACK_LINE(240)
				bool tmp3 = _into->_construct;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(240)
				if ((tmp3)){
					HX_STACK_LINE(240)
					_into->y;
				}
				else{
					HX_STACK_LINE(240)
					bool tmp4 = (_into->listen_y != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(240)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(240)
					if ((tmp4)){
						HX_STACK_LINE(240)
						bool tmp6 = _into->ignore_listeners;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(240)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(240)
						tmp5 = !(tmp7);
					}
					else{
						HX_STACK_LINE(240)
						tmp5 = false;
					}
					HX_STACK_LINE(240)
					if ((tmp5)){
						HX_STACK_LINE(240)
						Float tmp6 = _height;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(240)
						_into->listen_y(tmp6);
					}
					HX_STACK_LINE(240)
					_into->y;
				}
			}
			HX_STACK_LINE(240)
			_into->ignore_listeners = prev;
			HX_STACK_LINE(240)
			bool tmp3 = (_into->listen_x != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(240)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			if ((tmp3)){
				HX_STACK_LINE(240)
				bool tmp5 = _into->ignore_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(240)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				tmp4 = !(tmp6);
			}
			else{
				HX_STACK_LINE(240)
				tmp4 = false;
			}
			HX_STACK_LINE(240)
			if ((tmp4)){
				HX_STACK_LINE(240)
				Float tmp5 = _into->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(240)
				_into->listen_x(tmp5);
			}
			HX_STACK_LINE(240)
			bool tmp5 = (_into->listen_y != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			if ((tmp5)){
				HX_STACK_LINE(240)
				bool tmp7 = _into->ignore_listeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(240)
				tmp6 = false;
			}
			HX_STACK_LINE(240)
			if ((tmp6)){
				HX_STACK_LINE(240)
				Float tmp7 = _into->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				_into->listen_y(tmp7);
			}
			HX_STACK_LINE(240)
			tmp2 = _into;
		}
		HX_STACK_LINE(240)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFont_obj,dimensions_of,return )

Float BitmapFont_obj::height_of_lines( Array< ::String > _lines,Float _point_size,hx::Null< Float >  __o__line_spc){
Float _line_spc = __o__line_spc.Default(((Float)0.0));
	HX_STACK_FRAME("phoenix.BitmapFont","height_of_lines",0xbb497dbe,"phoenix.BitmapFont.height_of_lines","phoenix/BitmapFont.hx",245,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_lines,"_lines")
	HX_STACK_ARG(_point_size,"_point_size")
	HX_STACK_ARG(_line_spc,"_line_spc")
{
		HX_STACK_LINE(247)
		Float tmp = _point_size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		Dynamic tmp1 = this->info;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		Float tmp2 = tmp1->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		Float _ratio = tmp3;		HX_STACK_VAR(_ratio,"_ratio");
		HX_STACK_LINE(249)
		int tmp4 = _lines->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		Dynamic tmp5 = this->info;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		Float tmp6 = tmp5->__Field(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(249)
		Float tmp7 = _line_spc;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(249)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(249)
		Float tmp9 = _ratio;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(249)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(249)
		Float tmp11 = (tmp4 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(249)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFont_obj,height_of_lines,return )

Float BitmapFont_obj::line_height_to_point_size( Float _pixel_height,hx::Null< Float >  __o__line_spc){
Float _line_spc = __o__line_spc.Default(((Float)0.0));
	HX_STACK_FRAME("phoenix.BitmapFont","line_height_to_point_size",0x40f4e7f6,"phoenix.BitmapFont.line_height_to_point_size","phoenix/BitmapFont.hx",255,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pixel_height,"_pixel_height")
	HX_STACK_ARG(_line_spc,"_line_spc")
{
		HX_STACK_LINE(257)
		Float tmp = _pixel_height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		Dynamic tmp1 = this->info;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		Float tmp2 = tmp1->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		Dynamic tmp3 = this->info;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		Float tmp4 = tmp3->__Field(HX_HCSTRING("line_height","\x12","\xa8","\xc5","\xe1"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		Float tmp5 = _line_spc;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(257)
		Float tmp7 = (Float(tmp2) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(257)
		Float tmp8 = (tmp * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(257)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,line_height_to_point_size,return )

Void BitmapFont_obj::clear( ){
{
		HX_STACK_FRAME("phoenix.BitmapFont","clear",0xab450a5c,"phoenix.BitmapFont.clear","phoenix/BitmapFont.hx",263,0xdfcf0e40)
		HX_STACK_THIS(this)
		HX_STACK_LINE(265)
		this->set_info(null());
		HX_STACK_LINE(266)
		int _i = (int)0;		HX_STACK_VAR(_i,"_i");
		HX_STACK_LINE(267)
		::haxe::ds::IntMap tmp = this->pages;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
			int _pageid = __it->next();
			{
				HX_STACK_LINE(268)
				::haxe::ds::IntMap tmp2 = this->pages;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(268)
				int tmp3 = _pageid;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(268)
				::phoenix::Texture tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(268)
				::phoenix::Texture _page = tmp4;		HX_STACK_VAR(_page,"_page");
				HX_STACK_LINE(269)
				_page->destroy(null());
				HX_STACK_LINE(270)
				::haxe::ds::IntMap tmp5 = this->pages;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(270)
				int tmp6 = _pageid;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(270)
				tmp5->remove(tmp6);
				HX_STACK_LINE(271)
				_page = null();
			}
;
		}
	}
return null();
}


::snow::api::Promise BitmapFont_obj::reload( ){
	HX_STACK_FRAME("phoenix.BitmapFont","reload",0x2d5b6faa,"phoenix.BitmapFont.reload","phoenix/BitmapFont.hx",276,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	::phoenix::BitmapFont _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(278)
	{
		HX_STACK_LINE(278)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		if ((tmp2)){
			HX_STACK_LINE(278)
			::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(278)
			::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(280)
	this->clear();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::phoenix::BitmapFont,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic resolve,Dynamic reject){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","phoenix/BitmapFont.hx",282,0xdfcf0e40)
		HX_STACK_ARG(resolve,"resolve")
		HX_STACK_ARG(reject,"reject")
		{
			HX_STACK_LINE(284)
			_g->set_state((int)2);
			HX_STACK_LINE(287)
			::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(287)
			::snow::_system::assets::Assets tmp1 = tmp->app->assets;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			::String tmp2 = _g->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			::snow::api::Promise tmp3 = ::snow::_system::assets::AssetText_obj::load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			::snow::api::Promise _font_get = tmp3;		HX_STACK_VAR(_font_get,"_font_get");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::phoenix::BitmapFont,_g,Dynamic,reject,Dynamic,resolve)
			int __ArgCount() const { return 1; }
			Void run(::snow::_system::assets::AssetText _asset){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","phoenix/BitmapFont.hx",289,0xdfcf0e40)
				HX_STACK_ARG(_asset,"_asset")
				{
					HX_STACK_LINE(292)
					::String tmp4 = _asset->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(292)
					Dynamic tmp5 = ::luxe::importers::bitmapfont::BitmapFontParser_obj::parse(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(292)
					_g->set_info(tmp5);
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						bool tmp6 = (_g->info == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(294)
						if ((tmp6)){
							HX_STACK_LINE(294)
							::String tmp7 = HX_HCSTRING("info was null","\xd0","\x22","\x4b","\xfc");		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(294)
							::luxe::DebugError tmp8 = ::luxe::DebugError_obj::null_assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(294)
							HX_STACK_DO_THROW(tmp8);
						}
					}
					HX_STACK_LINE(296)
					Array< ::Dynamic > _tex_get = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_tex_get,"_tex_get");
					HX_STACK_LINE(298)
					{
						HX_STACK_LINE(298)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(298)
						cpp::ArrayBase _g2 = _g->info->__Field(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(298)
						while((true)){
							HX_STACK_LINE(298)
							bool tmp6 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(298)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(298)
							if ((tmp7)){
								HX_STACK_LINE(298)
								break;
							}
							HX_STACK_LINE(298)
							Dynamic tmp8 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(298)
							Dynamic _page = tmp8;		HX_STACK_VAR(_page,"_page");
							HX_STACK_LINE(298)
							++(_g1);
							HX_STACK_LINE(300)
							::String tmp9 = ::haxe::io::Path_obj::join(Array_obj< ::String >::__new().Add(_g->texture_path).Add(_page->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic )));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(300)
							::String _path = tmp9;		HX_STACK_VAR(_path,"_path");
							HX_STACK_LINE(301)
							::haxe::ds::StringMap tmp10 = _g->_system->cache;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(301)
							::String tmp11 = _path;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(301)
							::luxe::resource::Resource tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(301)
							::phoenix::Texture _prior = ((::phoenix::Texture)(tmp12));		HX_STACK_VAR(_prior,"_prior");
							HX_STACK_LINE(303)
							bool tmp13 = (_prior != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(303)
							if ((tmp13)){
								HX_STACK_LINE(304)
								::snow::api::Promise tmp14 = _prior->reload();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(304)
								_tex_get->push(tmp14);
							}
							else{
								HX_STACK_LINE(306)
								::String tmp14 = _path;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(306)
								::snow::api::Promise tmp15 = _g->_system->load_texture(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(306)
								_tex_get->push(tmp15);
							}
						}
					}
					HX_STACK_LINE(311)
					::snow::api::Promise tmp6 = ::snow::api::Promise_obj::all(_tex_get);		HX_STACK_VAR(tmp6,"tmp6");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::phoenix::BitmapFont,_g,Dynamic,resolve)
					int __ArgCount() const { return 1; }
					Void run(Array< ::Dynamic > _pages){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","phoenix/BitmapFont.hx",311,0xdfcf0e40)
						HX_STACK_ARG(_pages,"_pages")
						{
							HX_STACK_LINE(313)
							_g->apply_pages(_pages);
							HX_STACK_LINE(315)
							_g->set_state((int)3);
							HX_STACK_LINE(316)
							::phoenix::BitmapFont tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(316)
							resolve(tmp7);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(311)
					::snow::api::Promise tmp7 = tmp6->then( Dynamic(new _Function_3_1(_g,resolve)),null());		HX_STACK_VAR(tmp7,"tmp7");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_2,::phoenix::BitmapFont,_g,Dynamic,reject)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _error){
						HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","phoenix/BitmapFont.hx",318,0xdfcf0e40)
						HX_STACK_ARG(_error,"_error")
						{
							HX_STACK_LINE(320)
							_g->set_state((int)4);
							HX_STACK_LINE(321)
							Dynamic tmp8 = _error;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(321)
							reject(tmp8);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(311)
					tmp7->error( Dynamic(new _Function_3_2(_g,reject)));
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(289)
			::snow::api::Promise tmp4 = _font_get->then( Dynamic(new _Function_2_1(_g,reject,resolve)),null());		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,::phoenix::BitmapFont,_g,Dynamic,reject)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","phoenix/BitmapFont.hx",325,0xdfcf0e40)
				HX_STACK_ARG(_error,"_error")
				{
					HX_STACK_LINE(327)
					_g->set_state((int)4);
					HX_STACK_LINE(328)
					Dynamic tmp5 = _error;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(328)
					reject(tmp5);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(289)
			tmp4->error( Dynamic(new _Function_2_2(_g,reject)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(282)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	return tmp;
}


Void BitmapFont_obj::apply_pages( Array< ::Dynamic > _pages){
{
		HX_STACK_FRAME("phoenix.BitmapFont","apply_pages",0x16a15c82,"phoenix.BitmapFont.apply_pages","phoenix/BitmapFont.hx",338,0xdfcf0e40)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pages,"_pages")
		HX_STACK_LINE(340)
		int _pageid = (int)0;		HX_STACK_VAR(_pageid,"_pageid");
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(342)
			while((true)){
				HX_STACK_LINE(342)
				bool tmp = (_g < _pages->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(342)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(342)
				if ((tmp1)){
					HX_STACK_LINE(342)
					break;
				}
				HX_STACK_LINE(342)
				::phoenix::Texture tmp2 = _pages->__get(_g).StaticCast< ::phoenix::Texture >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(342)
				::phoenix::Texture _page = tmp2;		HX_STACK_VAR(_page,"_page");
				HX_STACK_LINE(342)
				++(_g);
				HX_STACK_LINE(343)
				_page->slot = _pageid;
				HX_STACK_LINE(344)
				::haxe::ds::IntMap tmp3 = this->pages;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(344)
				int tmp4 = _pageid;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(344)
				::phoenix::Texture tmp5 = _page;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(344)
				tmp3->set(tmp4,tmp5);
				HX_STACK_LINE(345)
				++(_pageid);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,apply_pages,(void))

Dynamic BitmapFont_obj::set_info( Dynamic _info){
	HX_STACK_FRAME("phoenix.BitmapFont","set_info",0x09cbdffc,"phoenix.BitmapFont.set_info","phoenix/BitmapFont.hx",350,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_info,"_info")
	HX_STACK_LINE(352)
	this->info = _info;
	HX_STACK_LINE(354)
	Dynamic tmp = this->info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	if ((tmp1)){
		HX_STACK_LINE(355)
		Dynamic tmp2 = this->info;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		Dynamic tmp3 = tmp2->__Field(HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )((int)32);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		this->space_char = tmp3;
	}
	HX_STACK_LINE(358)
	Dynamic tmp2 = this->info;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(358)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,set_info,return )

::String BitmapFont_obj::toString( ){
	HX_STACK_FRAME("phoenix.BitmapFont","toString",0xce67633d,"phoenix.BitmapFont.toString","phoenix/BitmapFont.hx",362,0xdfcf0e40)
	HX_STACK_THIS(this)
	HX_STACK_LINE(363)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	::String tmp1 = (HX_HCSTRING("BitmapFont(","\xea","\x8c","\x1a","\x29") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	return tmp2;
}



BitmapFont_obj::BitmapFont_obj()
{
}

void BitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFont);
	HX_MARK_MEMBER_NAME(pages,"pages");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(space_char,"space_char");
	HX_MARK_MEMBER_NAME(texture_path,"texture_path");
	::luxe::resource::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pages,"pages");
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(space_char,"space_char");
	HX_VISIT_MEMBER_NAME(texture_path,"texture_path");
	::luxe::resource::Resource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapFont_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return pages; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { return kerning_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"width_of") ) { return width_of_dyn(); }
		if (HX_FIELD_EQ(inName,"set_info") ) { return set_info_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"height_of") ) { return height_of_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"space_char") ) { return space_char; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"apply_pages") ) { return apply_pages_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"texture_path") ) { return texture_path; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"width_of_line") ) { return width_of_line_dyn(); }
		if (HX_FIELD_EQ(inName,"dimensions_of") ) { return dimensions_of_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"height_of_lines") ) { return height_of_lines_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"wrap_string_to_bounds") ) { return wrap_string_to_bounds_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"line_height_to_point_size") ) { return line_height_to_point_size_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { if (inCallProp == hx::paccAlways) return set_info(inValue);info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"space_char") ) { space_char=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"texture_path") ) { texture_path=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapFont_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd"));
	outFields->push(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));
	outFields->push(HX_HCSTRING("space_char","\x2f","\xe0","\xd7","\xc2"));
	outFields->push(HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(BitmapFont_obj,pages),HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapFont_obj,info),HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapFont_obj,space_char),HX_HCSTRING("space_char","\x2f","\xe0","\xd7","\xc2")},
	{hx::fsString,(int)offsetof(BitmapFont_obj,texture_path),HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pages","\x44","\x2b","\x4d","\xbd"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("space_char","\x2f","\xe0","\xd7","\xc2"),
	HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62"),
	HX_HCSTRING("kerning","\xcc","\xba","\x37","\xb0"),
	HX_HCSTRING("wrap_string_to_bounds","\x20","\xed","\xa7","\x33"),
	HX_HCSTRING("width_of_line","\xe3","\x04","\x63","\x93"),
	HX_HCSTRING("width_of","\xf0","\xc8","\xf2","\xaf"),
	HX_HCSTRING("height_of","\xaf","\x19","\xab","\xae"),
	HX_HCSTRING("dimensions_of","\x09","\xe7","\x78","\x5a"),
	HX_HCSTRING("height_of_lines","\x2f","\x2c","\x99","\xf7"),
	HX_HCSTRING("line_height_to_point_size","\xa7","\x6d","\x17","\xa5"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("apply_pages","\x73","\xbe","\x9a","\xc0"),
	HX_HCSTRING("set_info","\x6b","\x4d","\xd3","\x73"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFont_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFont_obj::__mClass;

void BitmapFont_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.BitmapFont","\xfd","\x63","\xdc","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BitmapFont_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFont_obj >;
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

} // end namespace phoenix
