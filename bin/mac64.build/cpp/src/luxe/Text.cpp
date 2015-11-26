#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextGeometry
#include <phoenix/geometry/TextGeometry.h>
#endif
namespace luxe{

Void Text_obj::__construct(Dynamic _options,Dynamic _pos_info)
{
HX_STACK_FRAME("luxe.Text","new",0xb745fff7,"luxe.Text.new","luxe/Text.hx",83,0xeacedd78)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
HX_STACK_ARG(_pos_info,"_pos_info")
{
	HX_STACK_LINE(86)
	this->text_options = _options;
	HX_STACK_LINE(87)
	::phoenix::Rectangle tmp = ::phoenix::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	this->text_bounds = tmp;
	HX_STACK_LINE(89)
	::phoenix::Batcher _batcher = null();		HX_STACK_VAR(_batcher,"_batcher");
	HX_STACK_LINE(90)
	bool tmp1 = (_options->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	if ((tmp2)){
		HX_STACK_LINE(90)
		tmp3 = (_options->__Field(HX_HCSTRING("no_batcher_add","\x0b","\x25","\xc3","\x59"), hx::paccDynamic ) == false);
	}
	else{
		HX_STACK_LINE(90)
		tmp3 = true;
	}
	HX_STACK_LINE(90)
	if ((tmp3)){
		HX_STACK_LINE(91)
		bool tmp4 = (_options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		if ((tmp4)){
			HX_STACK_LINE(92)
			_batcher = _options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(94)
			::phoenix::Renderer tmp5 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			_batcher = tmp5->batcher;
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_options,::phoenix::Batcher &_batcher){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Text.hx",99,0xeacedd78)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , _batcher,false);
				__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , _options->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , _options->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf") , _options->__Field(HX_HCSTRING("immediate","\xf1","\x13","\xf1","\xcf"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , _options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d") , _options->__Field(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , _options->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , _options->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , _options->__Field(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , _options->__Field(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c") , _options->__Field(HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d") , _options->__Field(HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66") , _options->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec") , _options->__Field(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , _options->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53") , _options->__Field(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00") , _options->__Field(HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93") , _options->__Field(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a") , _options->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1") , _options->__Field(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96") , _options->__Field(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba") , _options->__Field(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49") , _options->__Field(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3") , _options->__Field(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"), hx::paccDynamic ),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(99)
	Dynamic tmp4 = _Function_1_1::Block(_options,_batcher);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	::phoenix::geometry::TextGeometry tmp5 = ::phoenix::geometry::TextGeometry_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	this->geom = tmp5;
	HX_STACK_LINE(140)
	::phoenix::geometry::TextGeometry tmp6 = this->geom;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(140)
	Dynamic tmp7 = this->on_geom_text_update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(140)
	Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Text.hx","\x11","\x08","\xfc","\x6b"),140,HX_HCSTRING("luxe.Text","\x85","\x38","\x43","\xb6"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(140)
	tmp6->emitter->on((int)1,tmp7,tmp8);
	HX_STACK_LINE(142)
	::phoenix::geometry::TextGeometry tmp9 = this->geom;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(142)
	_options->__FieldRef(HX_HCSTRING("geometry","\xb2","\x02","\xa9","\xd2")) = tmp9;
	HX_STACK_LINE(143)
	::phoenix::geometry::TextGeometry tmp10 = this->geom;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(143)
	::phoenix::Shader tmp11 = tmp10->state->shader;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(143)
	_options->__FieldRef(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")) = tmp11;
	HX_STACK_LINE(146)
	Dynamic tmp12 = _options;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(146)
	Dynamic tmp13 = _pos_info;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(146)
	super::__construct(tmp12,tmp13);
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		::phoenix::Vector tmp14 = this->get_pos();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(148)
		Float _x = tmp14->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(148)
		::phoenix::Vector tmp15 = this->get_pos();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(148)
		Float _y = tmp15->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(148)
		::phoenix::geometry::TextGeometry tmp16 = this->geom;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(148)
		Float _tw = tmp16->text_width;		HX_STACK_VAR(_tw,"_tw");
		HX_STACK_LINE(148)
		::phoenix::geometry::TextGeometry tmp17 = this->geom;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(148)
		Float _th = tmp17->text_height;		HX_STACK_VAR(_th,"_th");
		HX_STACK_LINE(148)
		::phoenix::geometry::TextGeometry tmp18 = this->geom;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(148)
		Float _bw = tmp18->text_width;		HX_STACK_VAR(_bw,"_bw");
		HX_STACK_LINE(148)
		::phoenix::geometry::TextGeometry tmp19 = this->geom;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(148)
		Float _bh = tmp19->text_height;		HX_STACK_VAR(_bh,"_bh");
		HX_STACK_LINE(148)
		::phoenix::Rectangle tmp20 = this->get_bounds();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(148)
		bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(148)
		if ((tmp21)){
			HX_STACK_LINE(148)
			::phoenix::Rectangle tmp22 = this->get_bounds();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(148)
			_bh = tmp22->h;
			HX_STACK_LINE(148)
			::phoenix::Rectangle tmp23 = this->get_bounds();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(148)
			_bw = tmp23->w;
			HX_STACK_LINE(148)
			::phoenix::Rectangle tmp24 = this->get_bounds();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(148)
			_x = tmp24->x;
			HX_STACK_LINE(148)
			::phoenix::Rectangle tmp25 = this->get_bounds();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(148)
			_y = tmp25->y;
			HX_STACK_LINE(148)
			Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int tmp27 = this->get_align();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(148)
				int _g = tmp27;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				int tmp28 = _g;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(148)
				switch( (int)(tmp28)){
					case (int)2: {
						HX_STACK_LINE(148)
						tmp26 = (Float(_tw) / Float((int)2));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(148)
						tmp26 = _tw;
					}
					;break;
					default: {
						HX_STACK_LINE(148)
						tmp26 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(148)
			hx::AddEq(_x,tmp26);
			HX_STACK_LINE(148)
			Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int tmp28 = this->get_align_vertical();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(148)
				int _g = tmp28;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				int tmp29 = _g;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(148)
				switch( (int)(tmp29)){
					case (int)2: {
						HX_STACK_LINE(148)
						Float tmp30 = (Float(_bh) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(148)
						Float tmp31 = (Float(_th) / Float((int)2));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(148)
						tmp27 = (tmp30 - tmp31);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(148)
						tmp27 = (_bh - _th);
					}
					;break;
					default: {
						HX_STACK_LINE(148)
						tmp27 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(148)
			hx::AddEq(_y,tmp27);
		}
		else{
			HX_STACK_LINE(148)
			Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int tmp23 = this->get_align();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(148)
				int _g = tmp23;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				int tmp24 = _g;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(148)
				switch( (int)(tmp24)){
					case (int)2: {
						HX_STACK_LINE(148)
						tmp22 = (Float(_tw) / Float((int)2));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(148)
						tmp22 = _tw;
					}
					;break;
					default: {
						HX_STACK_LINE(148)
						tmp22 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(148)
			hx::SubEq(_x,tmp22);
			HX_STACK_LINE(148)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int tmp24 = this->get_align_vertical();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(148)
				int _g = tmp24;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(148)
				int tmp25 = _g;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(148)
				switch( (int)(tmp25)){
					case (int)2: {
						HX_STACK_LINE(148)
						tmp23 = (Float(_th) / Float((int)2));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(148)
						tmp23 = _th;
					}
					;break;
					default: {
						HX_STACK_LINE(148)
						tmp23 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(148)
			hx::SubEq(_y,tmp23);
		}
		HX_STACK_LINE(148)
		::phoenix::Rectangle tmp22 = this->text_bounds;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(148)
		Float tmp23 = _x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(148)
		Float tmp24 = _y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(148)
		Float tmp25 = _tw;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(148)
		Float tmp26 = _th;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(148)
		tmp22->set(tmp23,tmp24,tmp25,tmp26);
	}
}
;
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new(Dynamic _options,Dynamic _pos_info)
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct(_options,_pos_info);
	return _result_;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String Text_obj::get_text( ){
	HX_STACK_FRAME("luxe.Text","get_text",0xce5b753f,"luxe.Text.get_text","luxe/Text.hx",22,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::String tmp1 = tmp->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_text,return )

::String Text_obj::set_text( ::String _s){
	HX_STACK_FRAME("luxe.Text","set_text",0x7cb8ceb3,"luxe.Text.set_text","luxe/Text.hx",23,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(23)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::String tmp2 = tmp->set_text(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

::phoenix::BitmapFont Text_obj::get_font( ){
	HX_STACK_FRAME("luxe.Text","get_font",0xc5220661,"luxe.Text.get_font","luxe/Text.hx",25,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::phoenix::BitmapFont tmp1 = tmp->font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_font,return )

::phoenix::BitmapFont Text_obj::set_font( ::phoenix::BitmapFont _f){
	HX_STACK_FRAME("luxe.Text","set_font",0x737f5fd5,"luxe.Text.set_font","luxe/Text.hx",26,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_f,"_f")
	HX_STACK_LINE(26)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::phoenix::BitmapFont tmp1 = tmp->font = _f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

Float Text_obj::get_point_size( ){
	HX_STACK_FRAME("luxe.Text","get_point_size",0x5942c862,"luxe.Text.get_point_size","luxe/Text.hx",28,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	Float tmp1 = tmp->point_size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_point_size,return )

Float Text_obj::set_point_size( Float _s){
	HX_STACK_FRAME("luxe.Text","set_point_size",0x7962b0d6,"luxe.Text.set_point_size","luxe/Text.hx",29,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(29)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Float tmp1 = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Float tmp2 = tmp->set_point_size(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_point_size,return )

Float Text_obj::get_letter_spacing( ){
	HX_STACK_FRAME("luxe.Text","get_letter_spacing",0x47c962fc,"luxe.Text.get_letter_spacing","luxe/Text.hx",31,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Float tmp1 = tmp->letter_spacing;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_letter_spacing,return )

Float Text_obj::set_letter_spacing( Float _s){
	HX_STACK_FRAME("luxe.Text","set_letter_spacing",0x24789570,"luxe.Text.set_letter_spacing","luxe/Text.hx",32,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(32)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Float tmp1 = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	Float tmp2 = tmp->set_letter_spacing(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_letter_spacing,return )

Float Text_obj::get_line_spacing( ){
	HX_STACK_FRAME("luxe.Text","get_line_spacing",0x41a5438a,"luxe.Text.get_line_spacing","luxe/Text.hx",34,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Float tmp1 = tmp->line_spacing;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_line_spacing,return )

Float Text_obj::set_line_spacing( Float _s){
	HX_STACK_FRAME("luxe.Text","set_line_spacing",0x97e730fe,"luxe.Text.set_line_spacing","luxe/Text.hx",35,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(35)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	Float tmp1 = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	Float tmp2 = tmp->set_line_spacing(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_line_spacing,return )

::phoenix::Rectangle Text_obj::get_bounds( ){
	HX_STACK_FRAME("luxe.Text","get_bounds",0x41a7f787,"luxe.Text.get_bounds","luxe/Text.hx",38,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::phoenix::Rectangle tmp1 = tmp->bounds;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_bounds,return )

::phoenix::Rectangle Text_obj::set_bounds( ::phoenix::Rectangle _b){
	HX_STACK_FRAME("luxe.Text","set_bounds",0x452595fb,"luxe.Text.set_bounds","luxe/Text.hx",39,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(39)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::phoenix::Rectangle tmp1 = _b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::phoenix::Rectangle tmp2 = tmp->set_bounds(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_bounds,return )

bool Text_obj::get_bounds_wrap( ){
	HX_STACK_FRAME("luxe.Text","get_bounds_wrap",0x8356b4c2,"luxe.Text.get_bounds_wrap","luxe/Text.hx",41,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	bool tmp1 = tmp->bounds_wrap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_bounds_wrap,return )

bool Text_obj::set_bounds_wrap( bool _b){
	HX_STACK_FRAME("luxe.Text","set_bounds_wrap",0x7f2231ce,"luxe.Text.set_bounds_wrap","luxe/Text.hx",42,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(42)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	bool tmp1 = _b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	bool tmp2 = tmp->set_bounds_wrap(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_bounds_wrap,return )

int Text_obj::get_align( ){
	HX_STACK_FRAME("luxe.Text","get_align",0xd5a32df3,"luxe.Text.get_align","luxe/Text.hx",45,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = tmp->align;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_align,return )

int Text_obj::set_align( int _a){
	HX_STACK_FRAME("luxe.Text","set_align",0xb8f419ff,"luxe.Text.set_align","luxe/Text.hx",46,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(46)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = _a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	int tmp2 = tmp->set_align(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_align,return )

int Text_obj::get_align_vertical( ){
	HX_STACK_FRAME("luxe.Text","get_align_vertical",0x2d6aaf82,"luxe.Text.get_align_vertical","luxe/Text.hx",48,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = tmp->align_vertical;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_align_vertical,return )

int Text_obj::set_align_vertical( int _a){
	HX_STACK_FRAME("luxe.Text","set_align_vertical",0x0a19e1f6,"luxe.Text.set_align_vertical","luxe/Text.hx",49,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(49)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	int tmp1 = _a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	int tmp2 = tmp->set_align_vertical(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_align_vertical,return )

bool Text_obj::get_sdf( ){
	HX_STACK_FRAME("luxe.Text","get_sdf",0x0583aa63,"luxe.Text.get_sdf","luxe/Text.hx",54,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = tmp->sdf;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_sdf,return )

bool Text_obj::set_sdf( bool _s){
	HX_STACK_FRAME("luxe.Text","set_sdf",0xf8853b6f,"luxe.Text.set_sdf","luxe/Text.hx",55,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(55)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	bool tmp1 = tmp->sdf = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_sdf,return )

Float Text_obj::get_smoothness( ){
	HX_STACK_FRAME("luxe.Text","get_smoothness",0xa04d99d7,"luxe.Text.get_smoothness","luxe/Text.hx",58,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	Float tmp1 = tmp->smoothness;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_smoothness,return )

Float Text_obj::set_smoothness( Float _s){
	HX_STACK_FRAME("luxe.Text","set_smoothness",0xc06d824b,"luxe.Text.set_smoothness","luxe/Text.hx",59,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(59)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	Float tmp1 = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	Float tmp2 = tmp->set_smoothness(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_smoothness,return )

Float Text_obj::get_thickness( ){
	HX_STACK_FRAME("luxe.Text","get_thickness",0x8e1ef7a2,"luxe.Text.get_thickness","luxe/Text.hx",61,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	Float tmp1 = tmp->thickness;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_thickness,return )

Float Text_obj::set_thickness( Float _t){
	HX_STACK_FRAME("luxe.Text","set_thickness",0xd324d9ae,"luxe.Text.set_thickness","luxe/Text.hx",62,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(62)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = _t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float tmp2 = tmp->set_thickness(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_thickness,return )

Float Text_obj::get_outline( ){
	HX_STACK_FRAME("luxe.Text","get_outline",0x1f569630,"luxe.Text.get_outline","luxe/Text.hx",65,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = tmp->outline;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_outline,return )

Float Text_obj::set_outline( Float _o){
	HX_STACK_FRAME("luxe.Text","set_outline",0x29c39d3c,"luxe.Text.set_outline","luxe/Text.hx",66,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_o,"_o")
	HX_STACK_LINE(66)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	Float tmp1 = _o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	Float tmp2 = tmp->set_outline(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_outline,return )

::phoenix::Color Text_obj::get_outline_color( ){
	HX_STACK_FRAME("luxe.Text","get_outline_color",0xe9b512d4,"luxe.Text.get_outline_color","luxe/Text.hx",68,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::phoenix::Color tmp1 = tmp->outline_color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_outline_color,return )

::phoenix::Color Text_obj::set_outline_color( ::phoenix::Color _c){
	HX_STACK_FRAME("luxe.Text","set_outline_color",0x0d22eae0,"luxe.Text.set_outline_color","luxe/Text.hx",69,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(69)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::phoenix::Color tmp1 = _c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	::phoenix::Color tmp2 = tmp->set_outline_color(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_outline_color,return )

Float Text_obj::get_glow_threshold( ){
	HX_STACK_FRAME("luxe.Text","get_glow_threshold",0x9478f34b,"luxe.Text.get_glow_threshold","luxe/Text.hx",72,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	Float tmp1 = tmp->glow_threshold;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_glow_threshold,return )

Float Text_obj::set_glow_threshold( Float _s){
	HX_STACK_FRAME("luxe.Text","set_glow_threshold",0x712825bf,"luxe.Text.set_glow_threshold","luxe/Text.hx",73,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(73)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	Float tmp1 = _s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	Float tmp2 = tmp->set_glow_threshold(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_glow_threshold,return )

Float Text_obj::get_glow_amount( ){
	HX_STACK_FRAME("luxe.Text","get_glow_amount",0xdfe9de38,"luxe.Text.get_glow_amount","luxe/Text.hx",75,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	Float tmp1 = tmp->glow_amount;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_glow_amount,return )

Float Text_obj::set_glow_amount( Float _e){
	HX_STACK_FRAME("luxe.Text","set_glow_amount",0xdbb55b44,"luxe.Text.set_glow_amount","luxe/Text.hx",76,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_e,"_e")
	HX_STACK_LINE(76)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	Float tmp1 = _e;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	Float tmp2 = tmp->set_glow_amount(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_glow_amount,return )

::phoenix::Color Text_obj::get_glow_color( ){
	HX_STACK_FRAME("luxe.Text","get_glow_color",0xd0b95103,"luxe.Text.get_glow_color","luxe/Text.hx",78,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	::phoenix::Color tmp1 = tmp->glow_color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_glow_color,return )

::phoenix::Color Text_obj::set_glow_color( ::phoenix::Color _c){
	HX_STACK_FRAME("luxe.Text","set_glow_color",0xf0d93977,"luxe.Text.set_glow_color","luxe/Text.hx",79,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(79)
	::phoenix::geometry::TextGeometry tmp = this->geom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::phoenix::Color tmp1 = _c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	::phoenix::Color tmp2 = tmp->set_glow_color(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_glow_color,return )

bool Text_obj::point_inside( ::phoenix::Vector p){
	HX_STACK_FRAME("luxe.Text","point_inside",0x10666cd4,"luxe.Text.point_inside","luxe/Text.hx",154,0xeacedd78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::phoenix::Vector tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		Float _x = tmp->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(156)
		::phoenix::Vector tmp1 = this->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		Float _y = tmp1->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(156)
		::phoenix::geometry::TextGeometry tmp2 = this->geom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		Float _tw = tmp2->text_width;		HX_STACK_VAR(_tw,"_tw");
		HX_STACK_LINE(156)
		::phoenix::geometry::TextGeometry tmp3 = this->geom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		Float _th = tmp3->text_height;		HX_STACK_VAR(_th,"_th");
		HX_STACK_LINE(156)
		::phoenix::geometry::TextGeometry tmp4 = this->geom;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		Float _bw = tmp4->text_width;		HX_STACK_VAR(_bw,"_bw");
		HX_STACK_LINE(156)
		::phoenix::geometry::TextGeometry tmp5 = this->geom;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		Float _bh = tmp5->text_height;		HX_STACK_VAR(_bh,"_bh");
		HX_STACK_LINE(156)
		::phoenix::Rectangle tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		if ((tmp7)){
			HX_STACK_LINE(156)
			::phoenix::Rectangle tmp8 = this->get_bounds();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			_bh = tmp8->h;
			HX_STACK_LINE(156)
			::phoenix::Rectangle tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			_bw = tmp9->w;
			HX_STACK_LINE(156)
			::phoenix::Rectangle tmp10 = this->get_bounds();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			_x = tmp10->x;
			HX_STACK_LINE(156)
			::phoenix::Rectangle tmp11 = this->get_bounds();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(156)
			_y = tmp11->y;
			HX_STACK_LINE(156)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int tmp13 = this->get_align();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(156)
				int _g = tmp13;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(156)
				int tmp14 = _g;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(156)
				switch( (int)(tmp14)){
					case (int)2: {
						HX_STACK_LINE(156)
						tmp12 = (Float(_tw) / Float((int)2));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(156)
						tmp12 = _tw;
					}
					;break;
					default: {
						HX_STACK_LINE(156)
						tmp12 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(156)
			hx::AddEq(_x,tmp12);
			HX_STACK_LINE(156)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int tmp14 = this->get_align_vertical();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(156)
				int _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(156)
				int tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(156)
				switch( (int)(tmp15)){
					case (int)2: {
						HX_STACK_LINE(156)
						Float tmp16 = (Float(_bh) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(156)
						Float tmp17 = (Float(_th) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(156)
						tmp13 = (tmp16 - tmp17);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(156)
						tmp13 = (_bh - _th);
					}
					;break;
					default: {
						HX_STACK_LINE(156)
						tmp13 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(156)
			hx::AddEq(_y,tmp13);
		}
		else{
			HX_STACK_LINE(156)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int tmp9 = this->get_align();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(156)
				int _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(156)
				int tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(156)
				switch( (int)(tmp10)){
					case (int)2: {
						HX_STACK_LINE(156)
						tmp8 = (Float(_tw) / Float((int)2));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(156)
						tmp8 = _tw;
					}
					;break;
					default: {
						HX_STACK_LINE(156)
						tmp8 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(156)
			hx::SubEq(_x,tmp8);
			HX_STACK_LINE(156)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int tmp10 = this->get_align_vertical();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(156)
				int _g = tmp10;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(156)
				int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(156)
				switch( (int)(tmp11)){
					case (int)2: {
						HX_STACK_LINE(156)
						tmp9 = (Float(_th) / Float((int)2));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(156)
						tmp9 = _th;
					}
					;break;
					default: {
						HX_STACK_LINE(156)
						tmp9 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(156)
			hx::SubEq(_y,tmp9);
		}
		HX_STACK_LINE(156)
		::phoenix::Rectangle tmp8 = this->text_bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(156)
		Float tmp11 = _tw;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(156)
		Float tmp12 = _th;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(156)
		tmp8->set(tmp9,tmp10,tmp11,tmp12);
	}
	HX_STACK_LINE(157)
	::phoenix::Rectangle tmp = this->text_bounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	::phoenix::Vector tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	bool tmp2 = tmp->point_inside(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,point_inside,return )

Void Text_obj::set_pos_from_transform( ::phoenix::Vector _p){
{
		HX_STACK_FRAME("luxe.Text","set_pos_from_transform",0x4f488928,"luxe.Text.set_pos_from_transform","luxe/Text.hx",163,0xeacedd78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_p,"_p")
		HX_STACK_LINE(165)
		::phoenix::Vector tmp = _p;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		this->super::set_pos_from_transform(tmp);
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			::phoenix::Vector tmp1 = this->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(166)
			Float _x = tmp1->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(166)
			::phoenix::Vector tmp2 = this->get_pos();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			Float _y = tmp2->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(166)
			::phoenix::geometry::TextGeometry tmp3 = this->geom;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			Float _tw = tmp3->text_width;		HX_STACK_VAR(_tw,"_tw");
			HX_STACK_LINE(166)
			::phoenix::geometry::TextGeometry tmp4 = this->geom;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			Float _th = tmp4->text_height;		HX_STACK_VAR(_th,"_th");
			HX_STACK_LINE(166)
			::phoenix::geometry::TextGeometry tmp5 = this->geom;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			Float _bw = tmp5->text_width;		HX_STACK_VAR(_bw,"_bw");
			HX_STACK_LINE(166)
			::phoenix::geometry::TextGeometry tmp6 = this->geom;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			Float _bh = tmp6->text_height;		HX_STACK_VAR(_bh,"_bh");
			HX_STACK_LINE(166)
			::phoenix::Rectangle tmp7 = this->get_bounds();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(166)
			if ((tmp8)){
				HX_STACK_LINE(166)
				::phoenix::Rectangle tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				_bh = tmp9->h;
				HX_STACK_LINE(166)
				::phoenix::Rectangle tmp10 = this->get_bounds();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				_bw = tmp10->w;
				HX_STACK_LINE(166)
				::phoenix::Rectangle tmp11 = this->get_bounds();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(166)
				_x = tmp11->x;
				HX_STACK_LINE(166)
				::phoenix::Rectangle tmp12 = this->get_bounds();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(166)
				_y = tmp12->y;
				HX_STACK_LINE(166)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					int tmp14 = this->get_align();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(166)
					int _g = tmp14;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(166)
					int tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(166)
					switch( (int)(tmp15)){
						case (int)2: {
							HX_STACK_LINE(166)
							tmp13 = (Float(_tw) / Float((int)2));
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(166)
							tmp13 = _tw;
						}
						;break;
						default: {
							HX_STACK_LINE(166)
							tmp13 = ((Float)0.0);
						}
					}
				}
				HX_STACK_LINE(166)
				hx::AddEq(_x,tmp13);
				HX_STACK_LINE(166)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					int tmp15 = this->get_align_vertical();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(166)
					int _g = tmp15;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(166)
					int tmp16 = _g;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(166)
					switch( (int)(tmp16)){
						case (int)2: {
							HX_STACK_LINE(166)
							Float tmp17 = (Float(_bh) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(166)
							Float tmp18 = (Float(_th) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(166)
							tmp14 = (tmp17 - tmp18);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(166)
							tmp14 = (_bh - _th);
						}
						;break;
						default: {
							HX_STACK_LINE(166)
							tmp14 = ((Float)0.0);
						}
					}
				}
				HX_STACK_LINE(166)
				hx::AddEq(_y,tmp14);
			}
			else{
				HX_STACK_LINE(166)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					int tmp10 = this->get_align();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(166)
					int _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(166)
					int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(166)
					switch( (int)(tmp11)){
						case (int)2: {
							HX_STACK_LINE(166)
							tmp9 = (Float(_tw) / Float((int)2));
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(166)
							tmp9 = _tw;
						}
						;break;
						default: {
							HX_STACK_LINE(166)
							tmp9 = ((Float)0.0);
						}
					}
				}
				HX_STACK_LINE(166)
				hx::SubEq(_x,tmp9);
				HX_STACK_LINE(166)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					int tmp11 = this->get_align_vertical();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(166)
					int _g = tmp11;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(166)
					int tmp12 = _g;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(166)
					switch( (int)(tmp12)){
						case (int)2: {
							HX_STACK_LINE(166)
							tmp10 = (Float(_th) / Float((int)2));
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(166)
							tmp10 = _th;
						}
						;break;
						default: {
							HX_STACK_LINE(166)
							tmp10 = ((Float)0.0);
						}
					}
				}
				HX_STACK_LINE(166)
				hx::SubEq(_y,tmp10);
			}
			HX_STACK_LINE(166)
			::phoenix::Rectangle tmp9 = this->text_bounds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(166)
			Float tmp10 = _x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(166)
			Float tmp11 = _y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(166)
			Float tmp12 = _tw;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(166)
			Float tmp13 = _th;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(166)
			tmp9->set(tmp10,tmp11,tmp12,tmp13);
		}
		HX_STACK_LINE(167)
		::phoenix::Vector tmp1 = this->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		Dynamic tmp2 = this->text_options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		tmp2->__FieldRef(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")) = tmp1;
	}
return null();
}


Void Text_obj::on_geom_text_update( Dynamic _){
{
		HX_STACK_FRAME("luxe.Text","on_geom_text_update",0x5de0a94f,"luxe.Text.on_geom_text_update","luxe/Text.hx",179,0xeacedd78)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(179)
		::phoenix::Vector tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		Float _x = tmp->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(179)
		::phoenix::Vector tmp1 = this->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		Float _y = tmp1->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(179)
		::phoenix::geometry::TextGeometry tmp2 = this->geom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		Float _tw = tmp2->text_width;		HX_STACK_VAR(_tw,"_tw");
		HX_STACK_LINE(179)
		::phoenix::geometry::TextGeometry tmp3 = this->geom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		Float _th = tmp3->text_height;		HX_STACK_VAR(_th,"_th");
		HX_STACK_LINE(179)
		::phoenix::geometry::TextGeometry tmp4 = this->geom;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		Float _bw = tmp4->text_width;		HX_STACK_VAR(_bw,"_bw");
		HX_STACK_LINE(179)
		::phoenix::geometry::TextGeometry tmp5 = this->geom;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		Float _bh = tmp5->text_height;		HX_STACK_VAR(_bh,"_bh");
		HX_STACK_LINE(179)
		::phoenix::Rectangle tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(179)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		if ((tmp7)){
			HX_STACK_LINE(179)
			::phoenix::Rectangle tmp8 = this->get_bounds();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			_bh = tmp8->h;
			HX_STACK_LINE(179)
			::phoenix::Rectangle tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			_bw = tmp9->w;
			HX_STACK_LINE(179)
			::phoenix::Rectangle tmp10 = this->get_bounds();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(179)
			_x = tmp10->x;
			HX_STACK_LINE(179)
			::phoenix::Rectangle tmp11 = this->get_bounds();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(179)
			_y = tmp11->y;
			HX_STACK_LINE(179)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				int tmp13 = this->get_align();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(179)
				int _g = tmp13;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(179)
				int tmp14 = _g;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(179)
				switch( (int)(tmp14)){
					case (int)2: {
						HX_STACK_LINE(179)
						tmp12 = (Float(_tw) / Float((int)2));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(179)
						tmp12 = _tw;
					}
					;break;
					default: {
						HX_STACK_LINE(179)
						tmp12 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(179)
			hx::AddEq(_x,tmp12);
			HX_STACK_LINE(179)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				int tmp14 = this->get_align_vertical();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(179)
				int _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(179)
				int tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(179)
				switch( (int)(tmp15)){
					case (int)2: {
						HX_STACK_LINE(179)
						Float tmp16 = (Float(_bh) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(179)
						Float tmp17 = (Float(_th) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(179)
						tmp13 = (tmp16 - tmp17);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(179)
						tmp13 = (_bh - _th);
					}
					;break;
					default: {
						HX_STACK_LINE(179)
						tmp13 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(179)
			hx::AddEq(_y,tmp13);
		}
		else{
			HX_STACK_LINE(179)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				int tmp9 = this->get_align();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				int _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(179)
				int tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(179)
				switch( (int)(tmp10)){
					case (int)2: {
						HX_STACK_LINE(179)
						tmp8 = (Float(_tw) / Float((int)2));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(179)
						tmp8 = _tw;
					}
					;break;
					default: {
						HX_STACK_LINE(179)
						tmp8 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(179)
			hx::SubEq(_x,tmp8);
			HX_STACK_LINE(179)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				int tmp10 = this->get_align_vertical();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(179)
				int _g = tmp10;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(179)
				int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(179)
				switch( (int)(tmp11)){
					case (int)2: {
						HX_STACK_LINE(179)
						tmp9 = (Float(_th) / Float((int)2));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(179)
						tmp9 = _th;
					}
					;break;
					default: {
						HX_STACK_LINE(179)
						tmp9 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(179)
			hx::SubEq(_y,tmp9);
		}
		HX_STACK_LINE(179)
		::phoenix::Rectangle tmp8 = this->text_bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(179)
		Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(179)
		Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		Float tmp11 = _tw;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(179)
		Float tmp12 = _th;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(179)
		tmp8->set(tmp9,tmp10,tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,on_geom_text_update,(void))

Void Text_obj::_update_bounds( ){
{
		HX_STACK_FRAME("luxe.Text","_update_bounds",0xa85b9f35,"luxe.Text._update_bounds","luxe/Text.hx",183,0xeacedd78)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		::phoenix::Vector tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		Float _x = tmp->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(186)
		::phoenix::Vector tmp1 = this->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		Float _y = tmp1->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(187)
		::phoenix::geometry::TextGeometry tmp2 = this->geom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		Float _tw = tmp2->text_width;		HX_STACK_VAR(_tw,"_tw");
		HX_STACK_LINE(188)
		::phoenix::geometry::TextGeometry tmp3 = this->geom;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		Float _th = tmp3->text_height;		HX_STACK_VAR(_th,"_th");
		HX_STACK_LINE(189)
		::phoenix::geometry::TextGeometry tmp4 = this->geom;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		Float _bw = tmp4->text_width;		HX_STACK_VAR(_bw,"_bw");
		HX_STACK_LINE(190)
		::phoenix::geometry::TextGeometry tmp5 = this->geom;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		Float _bh = tmp5->text_height;		HX_STACK_VAR(_bh,"_bh");
		HX_STACK_LINE(192)
		::phoenix::Rectangle tmp6 = this->get_bounds();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		if ((tmp7)){
			HX_STACK_LINE(193)
			::phoenix::Rectangle tmp8 = this->get_bounds();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(193)
			_bh = tmp8->h;
			HX_STACK_LINE(194)
			::phoenix::Rectangle tmp9 = this->get_bounds();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(194)
			_bw = tmp9->w;
			HX_STACK_LINE(195)
			::phoenix::Rectangle tmp10 = this->get_bounds();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(195)
			_x = tmp10->x;
			HX_STACK_LINE(196)
			::phoenix::Rectangle tmp11 = this->get_bounds();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(196)
			_y = tmp11->y;
			HX_STACK_LINE(198)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				int tmp13 = this->get_align();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(198)
				int _g = tmp13;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(198)
				int tmp14 = _g;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(198)
				switch( (int)(tmp14)){
					case (int)2: {
						HX_STACK_LINE(199)
						tmp12 = (Float(_tw) / Float((int)2));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(200)
						tmp12 = _tw;
					}
					;break;
					default: {
						HX_STACK_LINE(201)
						tmp12 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(198)
			hx::AddEq(_x,tmp12);
			HX_STACK_LINE(204)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				int tmp14 = this->get_align_vertical();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(204)
				int _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(204)
				int tmp15 = _g;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(204)
				switch( (int)(tmp15)){
					case (int)2: {
						HX_STACK_LINE(205)
						Float tmp16 = (Float(_bh) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(205)
						Float tmp17 = (Float(_th) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(205)
						tmp13 = (tmp16 - tmp17);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(206)
						tmp13 = (_bh - _th);
					}
					;break;
					default: {
						HX_STACK_LINE(207)
						tmp13 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(204)
			hx::AddEq(_y,tmp13);
		}
		else{
			HX_STACK_LINE(212)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				int tmp9 = this->get_align();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(212)
				int _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(212)
				int tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(212)
				switch( (int)(tmp10)){
					case (int)2: {
						HX_STACK_LINE(213)
						tmp8 = (Float(_tw) / Float((int)2));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(214)
						tmp8 = _tw;
					}
					;break;
					default: {
						HX_STACK_LINE(215)
						tmp8 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(212)
			hx::SubEq(_x,tmp8);
			HX_STACK_LINE(218)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				int tmp10 = this->get_align_vertical();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(218)
				int _g = tmp10;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(218)
				int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(218)
				switch( (int)(tmp11)){
					case (int)2: {
						HX_STACK_LINE(219)
						tmp9 = (Float(_th) / Float((int)2));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(220)
						tmp9 = _th;
					}
					;break;
					default: {
						HX_STACK_LINE(221)
						tmp9 = ((Float)0.0);
					}
				}
			}
			HX_STACK_LINE(218)
			hx::SubEq(_y,tmp9);
		}
		HX_STACK_LINE(226)
		::phoenix::Rectangle tmp8 = this->text_bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(226)
		Float tmp9 = _x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(226)
		Float tmp10 = _y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(226)
		Float tmp11 = _tw;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(226)
		Float tmp12 = _th;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(226)
		tmp8->set(tmp9,tmp10,tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,_update_bounds,(void))

Void Text_obj::init( ){
{
		HX_STACK_FRAME("luxe.Text","init",0xa2b2af99,"luxe.Text.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void Text_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Text","ondestroy",0x9f483892,"luxe.Text.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(geom,"geom");
	HX_MARK_MEMBER_NAME(text_options,"text_options");
	HX_MARK_MEMBER_NAME(text_bounds,"text_bounds");
	::luxe::Visual_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(geom,"geom");
	HX_VISIT_MEMBER_NAME(text_options,"text_options");
	HX_VISIT_MEMBER_NAME(text_bounds,"text_bounds");
	::luxe::Visual_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { if (inCallProp == hx::paccAlways) return get_sdf(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"geom") ) { return geom; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return get_font(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp == hx::paccAlways) return get_align(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == hx::paccAlways) return get_bounds(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_sdf") ) { return get_sdf_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sdf") ) { return set_sdf_dyn(); }
		if (HX_FIELD_EQ(inName,"outline") ) { if (inCallProp == hx::paccAlways) return get_outline(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_align") ) { return get_align_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == hx::paccAlways) return get_thickness(); }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { if (inCallProp == hx::paccAlways) return get_point_size(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bounds") ) { return set_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"smoothness") ) { if (inCallProp == hx::paccAlways) return get_smoothness(); }
		if (HX_FIELD_EQ(inName,"glow_color") ) { if (inCallProp == hx::paccAlways) return get_glow_color(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { if (inCallProp == hx::paccAlways) return get_bounds_wrap(); }
		if (HX_FIELD_EQ(inName,"get_outline") ) { return get_outline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_outline") ) { return set_outline_dyn(); }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { if (inCallProp == hx::paccAlways) return get_glow_amount(); }
		if (HX_FIELD_EQ(inName,"text_bounds") ) { return text_bounds; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { if (inCallProp == hx::paccAlways) return get_line_spacing(); }
		if (HX_FIELD_EQ(inName,"text_options") ) { return text_options; }
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_thickness") ) { return get_thickness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return set_thickness_dyn(); }
		if (HX_FIELD_EQ(inName,"outline_color") ) { if (inCallProp == hx::paccAlways) return get_outline_color(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_point_size") ) { return get_point_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_point_size") ) { return set_point_size_dyn(); }
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { if (inCallProp == hx::paccAlways) return get_letter_spacing(); }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { if (inCallProp == hx::paccAlways) return get_align_vertical(); }
		if (HX_FIELD_EQ(inName,"get_smoothness") ) { return get_smoothness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smoothness") ) { return set_smoothness_dyn(); }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { if (inCallProp == hx::paccAlways) return get_glow_threshold(); }
		if (HX_FIELD_EQ(inName,"get_glow_color") ) { return get_glow_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_color") ) { return set_glow_color_dyn(); }
		if (HX_FIELD_EQ(inName,"_update_bounds") ) { return _update_bounds_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bounds_wrap") ) { return get_bounds_wrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bounds_wrap") ) { return set_bounds_wrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_glow_amount") ) { return get_glow_amount_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_amount") ) { return set_glow_amount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_line_spacing") ) { return get_line_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_line_spacing") ) { return set_line_spacing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_outline_color") ) { return get_outline_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_outline_color") ) { return set_outline_color_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_letter_spacing") ) { return get_letter_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_letter_spacing") ) { return set_letter_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"get_align_vertical") ) { return get_align_vertical_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align_vertical") ) { return set_align_vertical_dyn(); }
		if (HX_FIELD_EQ(inName,"get_glow_threshold") ) { return get_glow_threshold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glow_threshold") ) { return set_glow_threshold_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"on_geom_text_update") ) { return on_geom_text_update_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pos_from_transform") ) { return set_pos_from_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sdf") ) { if (inCallProp == hx::paccAlways) return set_sdf(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"geom") ) { geom=inValue.Cast< ::phoenix::geometry::TextGeometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp == hx::paccAlways) return set_align(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == hx::paccAlways) return set_bounds(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { if (inCallProp == hx::paccAlways) return set_outline(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == hx::paccAlways) return set_thickness(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"point_size") ) { if (inCallProp == hx::paccAlways) return set_point_size(inValue); }
		if (HX_FIELD_EQ(inName,"smoothness") ) { if (inCallProp == hx::paccAlways) return set_smoothness(inValue); }
		if (HX_FIELD_EQ(inName,"glow_color") ) { if (inCallProp == hx::paccAlways) return set_glow_color(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounds_wrap") ) { if (inCallProp == hx::paccAlways) return set_bounds_wrap(inValue); }
		if (HX_FIELD_EQ(inName,"glow_amount") ) { if (inCallProp == hx::paccAlways) return set_glow_amount(inValue); }
		if (HX_FIELD_EQ(inName,"text_bounds") ) { text_bounds=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"line_spacing") ) { if (inCallProp == hx::paccAlways) return set_line_spacing(inValue); }
		if (HX_FIELD_EQ(inName,"text_options") ) { text_options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"outline_color") ) { if (inCallProp == hx::paccAlways) return set_outline_color(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { if (inCallProp == hx::paccAlways) return set_letter_spacing(inValue); }
		if (HX_FIELD_EQ(inName,"align_vertical") ) { if (inCallProp == hx::paccAlways) return set_align_vertical(inValue); }
		if (HX_FIELD_EQ(inName,"glow_threshold") ) { if (inCallProp == hx::paccAlways) return set_glow_threshold(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Text_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("geom","\xbc","\xfe","\x61","\x44"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b"));
	outFields->push(HX_HCSTRING("letter_spacing","\xea","\x8f","\xec","\x6d"));
	outFields->push(HX_HCSTRING("line_spacing","\xf8","\xb8","\xad","\x3c"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("bounds_wrap","\x14","\x47","\xee","\xec"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("align_vertical","\x70","\xdc","\x8d","\x53"));
	outFields->push(HX_HCSTRING("sdf","\xb5","\x9a","\x57","\x00"));
	outFields->push(HX_HCSTRING("smoothness","\xc5","\x37","\x00","\x93"));
	outFields->push(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));
	outFields->push(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));
	outFields->push(HX_HCSTRING("outline_color","\xa6","\x5d","\x13","\x96"));
	outFields->push(HX_HCSTRING("glow_threshold","\x39","\x20","\x9c","\xba"));
	outFields->push(HX_HCSTRING("glow_amount","\x8a","\x70","\x81","\x49"));
	outFields->push(HX_HCSTRING("glow_color","\xf1","\xee","\x6b","\xc3"));
	outFields->push(HX_HCSTRING("text_options","\x8c","\x4e","\x80","\x74"));
	outFields->push(HX_HCSTRING("text_bounds","\x07","\x6b","\xc3","\xe2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::geometry::TextGeometry*/ ,(int)offsetof(Text_obj,geom),HX_HCSTRING("geom","\xbc","\xfe","\x61","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Text_obj,text_options),HX_HCSTRING("text_options","\x8c","\x4e","\x80","\x74")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Text_obj,text_bounds),HX_HCSTRING("text_bounds","\x07","\x6b","\xc3","\xe2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("geom","\xbc","\xfe","\x61","\x44"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_font","\x58","\x19","\x7b","\xc3"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("get_point_size","\x99","\xee","\xea","\xc1"),
	HX_HCSTRING("set_point_size","\x0d","\xd7","\x0a","\xe2"),
	HX_HCSTRING("get_letter_spacing","\xb3","\x70","\x86","\x09"),
	HX_HCSTRING("set_letter_spacing","\x27","\xa3","\x35","\xe6"),
	HX_HCSTRING("get_line_spacing","\x81","\xa5","\x4c","\x41"),
	HX_HCSTRING("set_line_spacing","\xf5","\x92","\x8e","\x97"),
	HX_HCSTRING("get_bounds","\x3e","\xf6","\xa4","\x56"),
	HX_HCSTRING("set_bounds","\xb2","\x94","\x22","\x5a"),
	HX_HCSTRING("get_bounds_wrap","\xab","\xfe","\xcf","\xad"),
	HX_HCSTRING("set_bounds_wrap","\xb7","\x7b","\x9b","\xa9"),
	HX_HCSTRING("get_align","\x1c","\xb3","\x3a","\x65"),
	HX_HCSTRING("set_align","\x28","\x9f","\x8b","\x48"),
	HX_HCSTRING("get_align_vertical","\x39","\xbd","\x27","\xef"),
	HX_HCSTRING("set_align_vertical","\xad","\xef","\xd6","\xcb"),
	HX_HCSTRING("get_sdf","\x4c","\x63","\xcc","\x26"),
	HX_HCSTRING("set_sdf","\x58","\xf4","\xcd","\x19"),
	HX_HCSTRING("get_smoothness","\x0e","\xc0","\xf5","\x08"),
	HX_HCSTRING("set_smoothness","\x82","\xa8","\x15","\x29"),
	HX_HCSTRING("get_thickness","\x4b","\xc5","\xca","\x1b"),
	HX_HCSTRING("set_thickness","\x57","\xa7","\xd0","\x60"),
	HX_HCSTRING("get_outline","\x99","\x77","\xb8","\x67"),
	HX_HCSTRING("set_outline","\xa5","\x7e","\x25","\x72"),
	HX_HCSTRING("get_outline_color","\xfd","\x68","\x83","\x9c"),
	HX_HCSTRING("set_outline_color","\x09","\x41","\xf1","\xbf"),
	HX_HCSTRING("get_glow_threshold","\x02","\x01","\x36","\x56"),
	HX_HCSTRING("set_glow_threshold","\x76","\x33","\xe5","\x32"),
	HX_HCSTRING("get_glow_amount","\x21","\x28","\x63","\x0a"),
	HX_HCSTRING("set_glow_amount","\x2d","\xa5","\x2e","\x06"),
	HX_HCSTRING("get_glow_color","\x3a","\x77","\x61","\x39"),
	HX_HCSTRING("set_glow_color","\xae","\x5f","\x81","\x59"),
	HX_HCSTRING("text_options","\x8c","\x4e","\x80","\x74"),
	HX_HCSTRING("point_inside","\x4b","\xc7","\xa9","\x1d"),
	HX_HCSTRING("set_pos_from_transform","\x5f","\x3e","\x64","\xc7"),
	HX_HCSTRING("text_bounds","\x07","\x6b","\xc3","\xe2"),
	HX_HCSTRING("on_geom_text_update","\xb8","\x9b","\x8f","\x21"),
	HX_HCSTRING("_update_bounds","\x6c","\xc5","\x03","\x11"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#endif

hx::Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Text","\x85","\x38","\x43","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Text_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Text_obj >;
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
