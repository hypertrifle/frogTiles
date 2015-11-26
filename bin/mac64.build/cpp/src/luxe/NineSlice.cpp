#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_NineSlice
#include <luxe/NineSlice.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
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
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
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
#ifndef INCLUDED_phoenix_geometry_QuadPackGeometry
#include <phoenix/geometry/QuadPackGeometry.h>
#endif
namespace luxe{

Void NineSlice_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.NineSlice","new",0xa11773da,"luxe.NineSlice.new","luxe/NineSlice.hx",26,0xccc9c257)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(43)
	this->added = false;
	HX_STACK_LINE(41)
	this->midheight = ((Float)0.0);
	HX_STACK_LINE(40)
	this->midwidth = ((Float)0.0);
	HX_STACK_LINE(38)
	this->is_set = false;
	HX_STACK_LINE(37)
	this->source_h = ((Float)0.0);
	HX_STACK_LINE(36)
	this->source_w = ((Float)0.0);
	HX_STACK_LINE(35)
	this->source_y = ((Float)0.0);
	HX_STACK_LINE(34)
	this->source_x = ((Float)0.0);
	HX_STACK_LINE(33)
	this->height = ((Float)0.0);
	HX_STACK_LINE(32)
	this->bottom = ((Float)32);
	HX_STACK_LINE(31)
	this->width = ((Float)0.0);
	HX_STACK_LINE(30)
	this->right = ((Float)32);
	HX_STACK_LINE(29)
	this->left = ((Float)32);
	HX_STACK_LINE(28)
	this->top = ((Float)32);
	HX_STACK_LINE(53)
	this->slices = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(57)
	bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",58,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("no_geometry","\xb0","\x09","\x1b","\xda") , true,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(58)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		_options = tmp1;
	}
	else{
		HX_STACK_LINE(62)
		_options->__FieldRef(HX_HCSTRING("no_geometry","\xb0","\x09","\x1b","\xda")) = true;
	}
	HX_STACK_LINE(65)
	this->nineslice_options = _options;
	HX_STACK_LINE(67)
	bool tmp1 = (_options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	if ((tmp1)){
		HX_STACK_LINE(68)
		this->_batcher = _options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(70)
		::phoenix::Renderer tmp2 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		this->_batcher = tmp2->batcher;
	}
	HX_STACK_LINE(74)
	Dynamic tmp2 = _options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("NineSlice.hx","\x1e","\x8d","\x3e","\x12"),74,HX_HCSTRING("luxe.NineSlice","\xe8","\x3e","\x6e","\x46"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	super::__construct(tmp2,tmp3);
	HX_STACK_LINE(77)
	bool tmp4 = (_options->__Field(HX_HCSTRING("top","\x95","\x66","\x58","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	if ((tmp4)){
		HX_STACK_LINE(77)
		this->top = _options->__Field(HX_HCSTRING("top","\x95","\x66","\x58","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(78)
	bool tmp5 = (_options->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	if ((tmp5)){
		HX_STACK_LINE(78)
		this->left = _options->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic );
	}
	HX_STACK_LINE(79)
	bool tmp6 = (_options->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	if ((tmp6)){
		HX_STACK_LINE(79)
		this->right = _options->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic );
	}
	HX_STACK_LINE(80)
	bool tmp7 = (_options->__Field(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(80)
	if ((tmp7)){
		HX_STACK_LINE(80)
		this->bottom = _options->__Field(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"), hx::paccDynamic );
	}
	HX_STACK_LINE(82)
	bool tmp8 = (_options->__Field(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(82)
	if ((tmp8)){
		HX_STACK_LINE(82)
		this->source_x = _options->__Field(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66"), hx::paccDynamic );
	}
	HX_STACK_LINE(83)
	bool tmp9 = (_options->__Field(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(83)
	if ((tmp9)){
		HX_STACK_LINE(83)
		this->source_y = _options->__Field(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66"), hx::paccDynamic );
	}
	HX_STACK_LINE(84)
	bool tmp10 = (_options->__Field(HX_HCSTRING("source_w","\xd3","\x30","\xa4","\x66"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(84)
	if ((tmp10)){
		HX_STACK_LINE(85)
		this->source_w = _options->__Field(HX_HCSTRING("source_w","\xd3","\x30","\xa4","\x66"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(87)
		::phoenix::Texture tmp11 = this->texture;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(87)
		this->source_w = tmp11->width;
	}
	HX_STACK_LINE(90)
	bool tmp11 = (_options->__Field(HX_HCSTRING("source_h","\xc4","\x30","\xa4","\x66"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(90)
	if ((tmp11)){
		HX_STACK_LINE(91)
		this->source_h = _options->__Field(HX_HCSTRING("source_h","\xc4","\x30","\xa4","\x66"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(93)
		::phoenix::Texture tmp12 = this->texture;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(93)
		this->source_h = tmp12->height;
	}
	HX_STACK_LINE(96)
	this->set_geometry(null());
}
;
	return null();
}

//NineSlice_obj::~NineSlice_obj() { }

Dynamic NineSlice_obj::__CreateEmpty() { return  new NineSlice_obj; }
hx::ObjectPtr< NineSlice_obj > NineSlice_obj::__new(Dynamic _options)
{  hx::ObjectPtr< NineSlice_obj > _result_ = new NineSlice_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic NineSlice_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NineSlice_obj > _result_ = new NineSlice_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NineSlice_obj::lock( ){
{
		HX_STACK_FRAME("luxe.NineSlice","lock",0x52230331,"luxe.NineSlice.lock","luxe/NineSlice.hx",100,0xccc9c257)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		bool tmp = this->is_set;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		if ((tmp)){
			HX_STACK_LINE(101)
			::phoenix::geometry::QuadPackGeometry tmp2 = this->_geometry;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			::phoenix::geometry::QuadPackGeometry tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			tmp1 = (tmp3 != null());
		}
		else{
			HX_STACK_LINE(101)
			tmp1 = false;
		}
		HX_STACK_LINE(101)
		if ((tmp1)){
			HX_STACK_LINE(102)
			::phoenix::geometry::QuadPackGeometry tmp2 = this->_geometry;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			tmp2->set_locked(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NineSlice_obj,lock,(void))

Void NineSlice_obj::dirty( ){
{
		HX_STACK_FRAME("luxe.NineSlice","dirty",0xed5f460c,"luxe.NineSlice.dirty","luxe/NineSlice.hx",106,0xccc9c257)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		bool tmp = this->is_set;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		if ((tmp)){
			HX_STACK_LINE(107)
			::phoenix::geometry::QuadPackGeometry tmp2 = this->_geometry;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			::phoenix::geometry::QuadPackGeometry tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			tmp1 = (tmp3 != null());
		}
		else{
			HX_STACK_LINE(107)
			tmp1 = false;
		}
		HX_STACK_LINE(107)
		if ((tmp1)){
			HX_STACK_LINE(108)
			::phoenix::geometry::QuadPackGeometry tmp2 = this->_geometry;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			tmp2->set_dirty(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NineSlice_obj,dirty,(void))

Void NineSlice_obj::update_size( Float _width,Float _height){
{
		HX_STACK_FRAME("luxe.NineSlice","update_size",0x2a7a6371,"luxe.NineSlice.update_size","luxe/NineSlice.hx",112,0xccc9c257)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_width,"_width")
		HX_STACK_ARG(_height,"_height")
		HX_STACK_LINE(114)
		this->width = _width;
		HX_STACK_LINE(115)
		this->height = _height;
		HX_STACK_LINE(117)
		Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		Float tmp1 = this->left;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		Float tmp3 = this->right;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		this->midwidth = tmp5;
		HX_STACK_LINE(118)
		Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		Float tmp7 = this->top;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		Float tmp9 = this->bottom;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(118)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(118)
		Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(118)
		this->midheight = tmp11;
		HX_STACK_LINE(121)
		Float tmp12 = this->left;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(121)
		Dynamic tmp13 = this->slices->__GetItem((int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(121)
		tmp13->__FieldRef(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87")) = tmp12;
		HX_STACK_LINE(122)
		Float tmp14 = this->top;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(122)
		Dynamic tmp15 = this->slices->__GetItem((int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(122)
		tmp15->__FieldRef(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3")) = tmp14;
		HX_STACK_LINE(123)
		Float tmp16 = this->source_x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(123)
		Dynamic tmp17 = this->slices->__GetItem((int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(123)
		tmp17->__FieldRef(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")) = tmp16;
		HX_STACK_LINE(124)
		Float tmp18 = this->source_y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(124)
		Dynamic tmp19 = this->slices->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(124)
		tmp19->__FieldRef(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")) = tmp18;
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			Dynamic tmp20 = this->slices->__GetItem((int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(125)
			::phoenix::Vector _this = tmp20->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(125)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(125)
			_this->ignore_listeners = true;
			HX_STACK_LINE(125)
			{
				HX_STACK_LINE(125)
				_this->x = (int)0;
				HX_STACK_LINE(125)
				bool tmp21 = _this->_construct;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(125)
				if ((tmp21)){
					HX_STACK_LINE(125)
					_this->x;
				}
				else{
					HX_STACK_LINE(125)
					bool tmp22 = (_this->listen_x != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(125)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(125)
					if ((tmp22)){
						HX_STACK_LINE(125)
						bool tmp24 = _this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(125)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(125)
						tmp23 = !(tmp25);
					}
					else{
						HX_STACK_LINE(125)
						tmp23 = false;
					}
					HX_STACK_LINE(125)
					if ((tmp23)){
						HX_STACK_LINE(125)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(125)
					_this->x;
				}
			}
			HX_STACK_LINE(125)
			{
				HX_STACK_LINE(125)
				_this->y = (int)0;
				HX_STACK_LINE(125)
				bool tmp21 = _this->_construct;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(125)
				if ((tmp21)){
					HX_STACK_LINE(125)
					_this->y;
				}
				else{
					HX_STACK_LINE(125)
					bool tmp22 = (_this->listen_y != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(125)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(125)
					if ((tmp22)){
						HX_STACK_LINE(125)
						bool tmp24 = _this->ignore_listeners;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(125)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(125)
						tmp23 = !(tmp25);
					}
					else{
						HX_STACK_LINE(125)
						tmp23 = false;
					}
					HX_STACK_LINE(125)
					if ((tmp23)){
						HX_STACK_LINE(125)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(125)
					_this->y;
				}
			}
			HX_STACK_LINE(125)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(125)
			bool tmp21 = (_this->listen_x != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(125)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(125)
			if ((tmp21)){
				HX_STACK_LINE(125)
				bool tmp23 = _this->ignore_listeners;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(125)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(125)
				tmp22 = !(tmp24);
			}
			else{
				HX_STACK_LINE(125)
				tmp22 = false;
			}
			HX_STACK_LINE(125)
			if ((tmp22)){
				HX_STACK_LINE(125)
				Float tmp23 = _this->x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(125)
				_this->listen_x(tmp23);
			}
			HX_STACK_LINE(125)
			bool tmp23 = (_this->listen_y != null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(125)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(125)
			if ((tmp23)){
				HX_STACK_LINE(125)
				bool tmp25 = _this->ignore_listeners;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(125)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(125)
				tmp24 = !(tmp26);
			}
			else{
				HX_STACK_LINE(125)
				tmp24 = false;
			}
			HX_STACK_LINE(125)
			if ((tmp24)){
				HX_STACK_LINE(125)
				Float tmp25 = _this->y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(125)
				_this->listen_y(tmp25);
			}
			HX_STACK_LINE(125)
			_this;
		}
		HX_STACK_LINE(126)
		Float tmp20 = this->left;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(126)
		Dynamic tmp21 = this->slices->__GetItem((int)0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(126)
		tmp21->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp20;
		HX_STACK_LINE(127)
		Float tmp22 = this->top;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(127)
		Dynamic tmp23 = this->slices->__GetItem((int)0);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(127)
		tmp23->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp22;
		HX_STACK_LINE(130)
		Float tmp24 = this->source_w;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(130)
		Float tmp25 = this->left;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(130)
		Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(130)
		Float tmp27 = this->right;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(130)
		Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(130)
		Dynamic tmp29 = this->slices->__GetItem((int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(130)
		tmp29->__FieldRef(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87")) = tmp28;
		HX_STACK_LINE(131)
		Float tmp30 = this->top;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(131)
		Dynamic tmp31 = this->slices->__GetItem((int)1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(131)
		tmp31->__FieldRef(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3")) = tmp30;
		HX_STACK_LINE(132)
		Float tmp32 = this->source_x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(132)
		Float tmp33 = this->left;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(132)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(132)
		Dynamic tmp35 = this->slices->__GetItem((int)1);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(132)
		tmp35->__FieldRef(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")) = tmp34;
		HX_STACK_LINE(133)
		Float tmp36 = this->source_y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(133)
		Dynamic tmp37 = this->slices->__GetItem((int)1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(133)
		tmp37->__FieldRef(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")) = tmp36;
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			Dynamic tmp38 = this->slices->__GetItem((int)1);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(134)
			::phoenix::Vector _this = tmp38->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			Float tmp39 = this->left;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(134)
			Float _x = tmp39;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(134)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(134)
			_this->ignore_listeners = true;
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				_this->x = _x;
				HX_STACK_LINE(134)
				bool tmp40 = _this->_construct;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(134)
				if ((tmp40)){
					HX_STACK_LINE(134)
					_this->x;
				}
				else{
					HX_STACK_LINE(134)
					bool tmp41 = (_this->listen_x != null());		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(134)
					bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(134)
					if ((tmp41)){
						HX_STACK_LINE(134)
						bool tmp43 = _this->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(134)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(134)
						tmp42 = !(tmp44);
					}
					else{
						HX_STACK_LINE(134)
						tmp42 = false;
					}
					HX_STACK_LINE(134)
					if ((tmp42)){
						HX_STACK_LINE(134)
						Float tmp43 = _x;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(134)
						_this->listen_x(tmp43);
					}
					HX_STACK_LINE(134)
					_this->x;
				}
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				_this->y = (int)0;
				HX_STACK_LINE(134)
				bool tmp40 = _this->_construct;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(134)
				if ((tmp40)){
					HX_STACK_LINE(134)
					_this->y;
				}
				else{
					HX_STACK_LINE(134)
					bool tmp41 = (_this->listen_y != null());		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(134)
					bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(134)
					if ((tmp41)){
						HX_STACK_LINE(134)
						bool tmp43 = _this->ignore_listeners;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(134)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(134)
						tmp42 = !(tmp44);
					}
					else{
						HX_STACK_LINE(134)
						tmp42 = false;
					}
					HX_STACK_LINE(134)
					if ((tmp42)){
						HX_STACK_LINE(134)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(134)
					_this->y;
				}
			}
			HX_STACK_LINE(134)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(134)
			bool tmp40 = (_this->listen_x != null());		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(134)
			bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(134)
			if ((tmp40)){
				HX_STACK_LINE(134)
				bool tmp42 = _this->ignore_listeners;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(134)
				bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(134)
				tmp41 = !(tmp43);
			}
			else{
				HX_STACK_LINE(134)
				tmp41 = false;
			}
			HX_STACK_LINE(134)
			if ((tmp41)){
				HX_STACK_LINE(134)
				Float tmp42 = _this->x;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(134)
				_this->listen_x(tmp42);
			}
			HX_STACK_LINE(134)
			bool tmp42 = (_this->listen_y != null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(134)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(134)
			if ((tmp42)){
				HX_STACK_LINE(134)
				bool tmp44 = _this->ignore_listeners;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(134)
				bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(134)
				tmp43 = !(tmp45);
			}
			else{
				HX_STACK_LINE(134)
				tmp43 = false;
			}
			HX_STACK_LINE(134)
			if ((tmp43)){
				HX_STACK_LINE(134)
				Float tmp44 = _this->y;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(134)
				_this->listen_y(tmp44);
			}
			HX_STACK_LINE(134)
			_this;
		}
		HX_STACK_LINE(135)
		Float tmp38 = this->width;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(135)
		Float tmp39 = this->left;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(135)
		Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(135)
		Float tmp41 = this->right;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(135)
		Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(135)
		Dynamic tmp43 = this->slices->__GetItem((int)1);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(135)
		tmp43->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp42;
		HX_STACK_LINE(136)
		Float tmp44 = this->top;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(136)
		Dynamic tmp45 = this->slices->__GetItem((int)1);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(136)
		tmp45->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp44;
		HX_STACK_LINE(139)
		Float tmp46 = this->right;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(139)
		Dynamic tmp47 = this->slices->__GetItem((int)2);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(139)
		tmp47->__FieldRef(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87")) = tmp46;
		HX_STACK_LINE(140)
		Float tmp48 = this->top;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(140)
		Dynamic tmp49 = this->slices->__GetItem((int)2);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(140)
		tmp49->__FieldRef(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3")) = tmp48;
		HX_STACK_LINE(141)
		Float tmp50 = this->source_x;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(141)
		Float tmp51 = this->source_w;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(141)
		Float tmp52 = this->right;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(141)
		Float tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(141)
		Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(141)
		Dynamic tmp55 = this->slices->__GetItem((int)2);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(141)
		tmp55->__FieldRef(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")) = tmp54;
		HX_STACK_LINE(142)
		Float tmp56 = this->source_y;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(142)
		Dynamic tmp57 = this->slices->__GetItem((int)2);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(142)
		tmp57->__FieldRef(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")) = tmp56;
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			Dynamic tmp58 = this->slices->__GetItem((int)2);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(143)
			::phoenix::Vector _this = tmp58->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(143)
			Float tmp59 = this->left;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(143)
			Float tmp60 = this->midwidth;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(143)
			Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(143)
			Float _x = tmp61;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(143)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(143)
			_this->ignore_listeners = true;
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				_this->x = _x;
				HX_STACK_LINE(143)
				bool tmp62 = _this->_construct;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(143)
				if ((tmp62)){
					HX_STACK_LINE(143)
					_this->x;
				}
				else{
					HX_STACK_LINE(143)
					bool tmp63 = (_this->listen_x != null());		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(143)
					bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(143)
					if ((tmp63)){
						HX_STACK_LINE(143)
						bool tmp65 = _this->ignore_listeners;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(143)
						bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(143)
						tmp64 = !(tmp66);
					}
					else{
						HX_STACK_LINE(143)
						tmp64 = false;
					}
					HX_STACK_LINE(143)
					if ((tmp64)){
						HX_STACK_LINE(143)
						Float tmp65 = _x;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(143)
						_this->listen_x(tmp65);
					}
					HX_STACK_LINE(143)
					_this->x;
				}
			}
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				_this->y = (int)0;
				HX_STACK_LINE(143)
				bool tmp62 = _this->_construct;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(143)
				if ((tmp62)){
					HX_STACK_LINE(143)
					_this->y;
				}
				else{
					HX_STACK_LINE(143)
					bool tmp63 = (_this->listen_y != null());		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(143)
					bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(143)
					if ((tmp63)){
						HX_STACK_LINE(143)
						bool tmp65 = _this->ignore_listeners;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(143)
						bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(143)
						tmp64 = !(tmp66);
					}
					else{
						HX_STACK_LINE(143)
						tmp64 = false;
					}
					HX_STACK_LINE(143)
					if ((tmp64)){
						HX_STACK_LINE(143)
						_this->listen_y((int)0);
					}
					HX_STACK_LINE(143)
					_this->y;
				}
			}
			HX_STACK_LINE(143)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(143)
			bool tmp62 = (_this->listen_x != null());		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(143)
			bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(143)
			if ((tmp62)){
				HX_STACK_LINE(143)
				bool tmp64 = _this->ignore_listeners;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(143)
				bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(143)
				tmp63 = !(tmp65);
			}
			else{
				HX_STACK_LINE(143)
				tmp63 = false;
			}
			HX_STACK_LINE(143)
			if ((tmp63)){
				HX_STACK_LINE(143)
				Float tmp64 = _this->x;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(143)
				_this->listen_x(tmp64);
			}
			HX_STACK_LINE(143)
			bool tmp64 = (_this->listen_y != null());		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(143)
			bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(143)
			if ((tmp64)){
				HX_STACK_LINE(143)
				bool tmp66 = _this->ignore_listeners;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(143)
				bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(143)
				tmp65 = !(tmp67);
			}
			else{
				HX_STACK_LINE(143)
				tmp65 = false;
			}
			HX_STACK_LINE(143)
			if ((tmp65)){
				HX_STACK_LINE(143)
				Float tmp66 = _this->y;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(143)
				_this->listen_y(tmp66);
			}
			HX_STACK_LINE(143)
			_this;
		}
		HX_STACK_LINE(144)
		Float tmp58 = this->right;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(144)
		Dynamic tmp59 = this->slices->__GetItem((int)2);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(144)
		tmp59->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp58;
		HX_STACK_LINE(145)
		Float tmp60 = this->top;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(145)
		Dynamic tmp61 = this->slices->__GetItem((int)2);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(145)
		tmp61->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp60;
		HX_STACK_LINE(149)
		Float tmp62 = this->left;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(149)
		Dynamic tmp63 = this->slices->__GetItem((int)3);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(149)
		tmp63->__FieldRef(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87")) = tmp62;
		HX_STACK_LINE(150)
		Float tmp64 = this->source_h;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(150)
		Float tmp65 = this->top;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(150)
		Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(150)
		Float tmp67 = this->bottom;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(150)
		Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(150)
		Dynamic tmp69 = this->slices->__GetItem((int)3);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(150)
		tmp69->__FieldRef(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3")) = tmp68;
		HX_STACK_LINE(151)
		Float tmp70 = this->source_x;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(151)
		Dynamic tmp71 = this->slices->__GetItem((int)3);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(151)
		tmp71->__FieldRef(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")) = tmp70;
		HX_STACK_LINE(152)
		Float tmp72 = this->source_y;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(152)
		Float tmp73 = this->top;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(152)
		Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(152)
		Dynamic tmp75 = this->slices->__GetItem((int)3);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(152)
		tmp75->__FieldRef(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")) = tmp74;
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			Dynamic tmp76 = this->slices->__GetItem((int)3);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(153)
			::phoenix::Vector _this = tmp76->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(153)
			Float tmp77 = this->top;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(153)
			Float _y = tmp77;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(153)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(153)
			_this->ignore_listeners = true;
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				_this->x = (int)0;
				HX_STACK_LINE(153)
				bool tmp78 = _this->_construct;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(153)
				if ((tmp78)){
					HX_STACK_LINE(153)
					_this->x;
				}
				else{
					HX_STACK_LINE(153)
					bool tmp79 = (_this->listen_x != null());		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(153)
					bool tmp80;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(153)
					if ((tmp79)){
						HX_STACK_LINE(153)
						bool tmp81 = _this->ignore_listeners;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(153)
						bool tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(153)
						tmp80 = !(tmp82);
					}
					else{
						HX_STACK_LINE(153)
						tmp80 = false;
					}
					HX_STACK_LINE(153)
					if ((tmp80)){
						HX_STACK_LINE(153)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(153)
					_this->x;
				}
			}
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				_this->y = _y;
				HX_STACK_LINE(153)
				bool tmp78 = _this->_construct;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(153)
				if ((tmp78)){
					HX_STACK_LINE(153)
					_this->y;
				}
				else{
					HX_STACK_LINE(153)
					bool tmp79 = (_this->listen_y != null());		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(153)
					bool tmp80;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(153)
					if ((tmp79)){
						HX_STACK_LINE(153)
						bool tmp81 = _this->ignore_listeners;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(153)
						bool tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(153)
						tmp80 = !(tmp82);
					}
					else{
						HX_STACK_LINE(153)
						tmp80 = false;
					}
					HX_STACK_LINE(153)
					if ((tmp80)){
						HX_STACK_LINE(153)
						Float tmp81 = _y;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(153)
						_this->listen_y(tmp81);
					}
					HX_STACK_LINE(153)
					_this->y;
				}
			}
			HX_STACK_LINE(153)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(153)
			bool tmp78 = (_this->listen_x != null());		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(153)
			bool tmp79;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(153)
			if ((tmp78)){
				HX_STACK_LINE(153)
				bool tmp80 = _this->ignore_listeners;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(153)
				bool tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(153)
				tmp79 = !(tmp81);
			}
			else{
				HX_STACK_LINE(153)
				tmp79 = false;
			}
			HX_STACK_LINE(153)
			if ((tmp79)){
				HX_STACK_LINE(153)
				Float tmp80 = _this->x;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(153)
				_this->listen_x(tmp80);
			}
			HX_STACK_LINE(153)
			bool tmp80 = (_this->listen_y != null());		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(153)
			bool tmp81;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(153)
			if ((tmp80)){
				HX_STACK_LINE(153)
				bool tmp82 = _this->ignore_listeners;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(153)
				bool tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(153)
				tmp81 = !(tmp83);
			}
			else{
				HX_STACK_LINE(153)
				tmp81 = false;
			}
			HX_STACK_LINE(153)
			if ((tmp81)){
				HX_STACK_LINE(153)
				Float tmp82 = _this->y;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(153)
				_this->listen_y(tmp82);
			}
			HX_STACK_LINE(153)
			_this;
		}
		HX_STACK_LINE(154)
		Float tmp76 = this->left;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(154)
		Dynamic tmp77 = this->slices->__GetItem((int)3);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(154)
		tmp77->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp76;
		HX_STACK_LINE(155)
		Float tmp78 = this->height;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(155)
		Float tmp79 = this->top;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(155)
		Float tmp80 = (tmp78 - tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(155)
		Float tmp81 = this->bottom;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(155)
		Float tmp82 = (tmp80 - tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(155)
		Dynamic tmp83 = this->slices->__GetItem((int)3);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(155)
		tmp83->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp82;
		HX_STACK_LINE(158)
		Float tmp84 = this->source_w;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(158)
		Float tmp85 = this->left;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(158)
		Float tmp86 = (tmp84 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(158)
		Float tmp87 = this->right;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(158)
		Float tmp88 = (tmp86 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(158)
		Dynamic tmp89 = this->slices->__GetItem((int)4);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(158)
		tmp89->__FieldRef(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87")) = tmp88;
		HX_STACK_LINE(159)
		Float tmp90 = this->source_h;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(159)
		Float tmp91 = this->top;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(159)
		Float tmp92 = (tmp90 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(159)
		Float tmp93 = this->bottom;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(159)
		Float tmp94 = (tmp92 - tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(159)
		Dynamic tmp95 = this->slices->__GetItem((int)4);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(159)
		tmp95->__FieldRef(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3")) = tmp94;
		HX_STACK_LINE(160)
		Float tmp96 = this->source_x;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(160)
		Float tmp97 = this->left;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(160)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(160)
		Dynamic tmp99 = this->slices->__GetItem((int)4);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(160)
		tmp99->__FieldRef(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")) = tmp98;
		HX_STACK_LINE(161)
		Float tmp100 = this->source_y;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(161)
		Float tmp101 = this->top;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(161)
		Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(161)
		Dynamic tmp103 = this->slices->__GetItem((int)4);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(161)
		tmp103->__FieldRef(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")) = tmp102;
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			Dynamic tmp104 = this->slices->__GetItem((int)4);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(162)
			::phoenix::Vector _this = tmp104->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(162)
			Float tmp105 = this->left;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(162)
			Float _x = tmp105;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(162)
			Float tmp106 = this->top;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(162)
			Float _y = tmp106;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(162)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(162)
			_this->ignore_listeners = true;
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				_this->x = _x;
				HX_STACK_LINE(162)
				bool tmp107 = _this->_construct;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(162)
				if ((tmp107)){
					HX_STACK_LINE(162)
					_this->x;
				}
				else{
					HX_STACK_LINE(162)
					bool tmp108 = (_this->listen_x != null());		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(162)
					bool tmp109;		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(162)
					if ((tmp108)){
						HX_STACK_LINE(162)
						bool tmp110 = _this->ignore_listeners;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(162)
						bool tmp111 = tmp110;		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(162)
						tmp109 = !(tmp111);
					}
					else{
						HX_STACK_LINE(162)
						tmp109 = false;
					}
					HX_STACK_LINE(162)
					if ((tmp109)){
						HX_STACK_LINE(162)
						Float tmp110 = _x;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(162)
						_this->listen_x(tmp110);
					}
					HX_STACK_LINE(162)
					_this->x;
				}
			}
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				_this->y = _y;
				HX_STACK_LINE(162)
				bool tmp107 = _this->_construct;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(162)
				if ((tmp107)){
					HX_STACK_LINE(162)
					_this->y;
				}
				else{
					HX_STACK_LINE(162)
					bool tmp108 = (_this->listen_y != null());		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(162)
					bool tmp109;		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(162)
					if ((tmp108)){
						HX_STACK_LINE(162)
						bool tmp110 = _this->ignore_listeners;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(162)
						bool tmp111 = tmp110;		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(162)
						tmp109 = !(tmp111);
					}
					else{
						HX_STACK_LINE(162)
						tmp109 = false;
					}
					HX_STACK_LINE(162)
					if ((tmp109)){
						HX_STACK_LINE(162)
						Float tmp110 = _y;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(162)
						_this->listen_y(tmp110);
					}
					HX_STACK_LINE(162)
					_this->y;
				}
			}
			HX_STACK_LINE(162)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(162)
			bool tmp107 = (_this->listen_x != null());		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(162)
			bool tmp108;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(162)
			if ((tmp107)){
				HX_STACK_LINE(162)
				bool tmp109 = _this->ignore_listeners;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(162)
				bool tmp110 = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(162)
				tmp108 = !(tmp110);
			}
			else{
				HX_STACK_LINE(162)
				tmp108 = false;
			}
			HX_STACK_LINE(162)
			if ((tmp108)){
				HX_STACK_LINE(162)
				Float tmp109 = _this->x;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(162)
				_this->listen_x(tmp109);
			}
			HX_STACK_LINE(162)
			bool tmp109 = (_this->listen_y != null());		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(162)
			bool tmp110;		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(162)
			if ((tmp109)){
				HX_STACK_LINE(162)
				bool tmp111 = _this->ignore_listeners;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(162)
				bool tmp112 = tmp111;		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(162)
				tmp110 = !(tmp112);
			}
			else{
				HX_STACK_LINE(162)
				tmp110 = false;
			}
			HX_STACK_LINE(162)
			if ((tmp110)){
				HX_STACK_LINE(162)
				Float tmp111 = _this->y;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(162)
				_this->listen_y(tmp111);
			}
			HX_STACK_LINE(162)
			_this;
		}
		HX_STACK_LINE(163)
		Float tmp104 = this->width;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(163)
		Float tmp105 = this->left;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(163)
		Float tmp106 = (tmp104 - tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(163)
		Float tmp107 = this->right;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(163)
		Float tmp108 = (tmp106 - tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(163)
		Dynamic tmp109 = this->slices->__GetItem((int)4);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(163)
		tmp109->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp108;
		HX_STACK_LINE(164)
		Float tmp110 = this->height;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(164)
		Float tmp111 = this->top;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(164)
		Float tmp112 = (tmp110 - tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(164)
		Float tmp113 = this->bottom;		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(164)
		Float tmp114 = (tmp112 - tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(164)
		Dynamic tmp115 = this->slices->__GetItem((int)4);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(164)
		tmp115->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp114;
		HX_STACK_LINE(167)
		Float tmp116 = this->right;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(167)
		Dynamic tmp117 = this->slices->__GetItem((int)5);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(167)
		tmp117->__FieldRef(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87")) = tmp116;
		HX_STACK_LINE(168)
		Float tmp118 = this->source_h;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(168)
		Float tmp119 = this->top;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(168)
		Float tmp120 = (tmp118 - tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(168)
		Float tmp121 = this->bottom;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(168)
		Float tmp122 = (tmp120 - tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(168)
		Dynamic tmp123 = this->slices->__GetItem((int)5);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(168)
		tmp123->__FieldRef(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3")) = tmp122;
		HX_STACK_LINE(169)
		Float tmp124 = this->source_x;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(169)
		Float tmp125 = this->source_w;		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(169)
		Float tmp126 = this->right;		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(169)
		Float tmp127 = (tmp125 - tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(169)
		Float tmp128 = (tmp124 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(169)
		Dynamic tmp129 = this->slices->__GetItem((int)5);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(169)
		tmp129->__FieldRef(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")) = tmp128;
		HX_STACK_LINE(170)
		Float tmp130 = this->source_y;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(170)
		Float tmp131 = this->top;		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(170)
		Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(170)
		Dynamic tmp133 = this->slices->__GetItem((int)5);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(170)
		tmp133->__FieldRef(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")) = tmp132;
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			Dynamic tmp134 = this->slices->__GetItem((int)5);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(171)
			::phoenix::Vector _this = tmp134->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(171)
			Float tmp135 = this->left;		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(171)
			Float tmp136 = this->midwidth;		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(171)
			Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(171)
			Float _x = tmp137;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(171)
			Float tmp138 = this->top;		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(171)
			Float _y = tmp138;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(171)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(171)
			_this->ignore_listeners = true;
			HX_STACK_LINE(171)
			{
				HX_STACK_LINE(171)
				_this->x = _x;
				HX_STACK_LINE(171)
				bool tmp139 = _this->_construct;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(171)
				if ((tmp139)){
					HX_STACK_LINE(171)
					_this->x;
				}
				else{
					HX_STACK_LINE(171)
					bool tmp140 = (_this->listen_x != null());		HX_STACK_VAR(tmp140,"tmp140");
					HX_STACK_LINE(171)
					bool tmp141;		HX_STACK_VAR(tmp141,"tmp141");
					HX_STACK_LINE(171)
					if ((tmp140)){
						HX_STACK_LINE(171)
						bool tmp142 = _this->ignore_listeners;		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(171)
						bool tmp143 = tmp142;		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(171)
						tmp141 = !(tmp143);
					}
					else{
						HX_STACK_LINE(171)
						tmp141 = false;
					}
					HX_STACK_LINE(171)
					if ((tmp141)){
						HX_STACK_LINE(171)
						Float tmp142 = _x;		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(171)
						_this->listen_x(tmp142);
					}
					HX_STACK_LINE(171)
					_this->x;
				}
			}
			HX_STACK_LINE(171)
			{
				HX_STACK_LINE(171)
				_this->y = _y;
				HX_STACK_LINE(171)
				bool tmp139 = _this->_construct;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(171)
				if ((tmp139)){
					HX_STACK_LINE(171)
					_this->y;
				}
				else{
					HX_STACK_LINE(171)
					bool tmp140 = (_this->listen_y != null());		HX_STACK_VAR(tmp140,"tmp140");
					HX_STACK_LINE(171)
					bool tmp141;		HX_STACK_VAR(tmp141,"tmp141");
					HX_STACK_LINE(171)
					if ((tmp140)){
						HX_STACK_LINE(171)
						bool tmp142 = _this->ignore_listeners;		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(171)
						bool tmp143 = tmp142;		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(171)
						tmp141 = !(tmp143);
					}
					else{
						HX_STACK_LINE(171)
						tmp141 = false;
					}
					HX_STACK_LINE(171)
					if ((tmp141)){
						HX_STACK_LINE(171)
						Float tmp142 = _y;		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(171)
						_this->listen_y(tmp142);
					}
					HX_STACK_LINE(171)
					_this->y;
				}
			}
			HX_STACK_LINE(171)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(171)
			bool tmp139 = (_this->listen_x != null());		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(171)
			bool tmp140;		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(171)
			if ((tmp139)){
				HX_STACK_LINE(171)
				bool tmp141 = _this->ignore_listeners;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(171)
				bool tmp142 = tmp141;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(171)
				tmp140 = !(tmp142);
			}
			else{
				HX_STACK_LINE(171)
				tmp140 = false;
			}
			HX_STACK_LINE(171)
			if ((tmp140)){
				HX_STACK_LINE(171)
				Float tmp141 = _this->x;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(171)
				_this->listen_x(tmp141);
			}
			HX_STACK_LINE(171)
			bool tmp141 = (_this->listen_y != null());		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(171)
			bool tmp142;		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(171)
			if ((tmp141)){
				HX_STACK_LINE(171)
				bool tmp143 = _this->ignore_listeners;		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(171)
				bool tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(171)
				tmp142 = !(tmp144);
			}
			else{
				HX_STACK_LINE(171)
				tmp142 = false;
			}
			HX_STACK_LINE(171)
			if ((tmp142)){
				HX_STACK_LINE(171)
				Float tmp143 = _this->y;		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(171)
				_this->listen_y(tmp143);
			}
			HX_STACK_LINE(171)
			_this;
		}
		HX_STACK_LINE(172)
		Float tmp134 = this->right;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(172)
		Dynamic tmp135 = this->slices->__GetItem((int)5);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(172)
		tmp135->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp134;
		HX_STACK_LINE(173)
		Float tmp136 = this->height;		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(173)
		Float tmp137 = this->top;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(173)
		Float tmp138 = (tmp136 - tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(173)
		Float tmp139 = this->bottom;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(173)
		Float tmp140 = (tmp138 - tmp139);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(173)
		Dynamic tmp141 = this->slices->__GetItem((int)5);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(173)
		tmp141->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp140;
		HX_STACK_LINE(177)
		Float tmp142 = this->left;		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(177)
		Dynamic tmp143 = this->slices->__GetItem((int)6);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(177)
		tmp143->__FieldRef(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87")) = tmp142;
		HX_STACK_LINE(178)
		Float tmp144 = this->bottom;		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(178)
		Dynamic tmp145 = this->slices->__GetItem((int)6);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(178)
		tmp145->__FieldRef(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3")) = tmp144;
		HX_STACK_LINE(179)
		Float tmp146 = this->source_x;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(179)
		Dynamic tmp147 = this->slices->__GetItem((int)6);		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(179)
		tmp147->__FieldRef(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")) = tmp146;
		HX_STACK_LINE(180)
		Float tmp148 = this->source_y;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(180)
		Float tmp149 = this->source_h;		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(180)
		Float tmp150 = this->bottom;		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(180)
		Float tmp151 = (tmp149 - tmp150);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(180)
		Float tmp152 = (tmp148 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(180)
		Dynamic tmp153 = this->slices->__GetItem((int)6);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(180)
		tmp153->__FieldRef(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")) = tmp152;
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			Dynamic tmp154 = this->slices->__GetItem((int)6);		HX_STACK_VAR(tmp154,"tmp154");
			HX_STACK_LINE(181)
			::phoenix::Vector _this = tmp154->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(181)
			Float tmp155 = this->top;		HX_STACK_VAR(tmp155,"tmp155");
			HX_STACK_LINE(181)
			Float tmp156 = this->midheight;		HX_STACK_VAR(tmp156,"tmp156");
			HX_STACK_LINE(181)
			Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
			HX_STACK_LINE(181)
			Float _y = tmp157;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(181)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(181)
			_this->ignore_listeners = true;
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				_this->x = (int)0;
				HX_STACK_LINE(181)
				bool tmp158 = _this->_construct;		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(181)
				if ((tmp158)){
					HX_STACK_LINE(181)
					_this->x;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp159 = (_this->listen_x != null());		HX_STACK_VAR(tmp159,"tmp159");
					HX_STACK_LINE(181)
					bool tmp160;		HX_STACK_VAR(tmp160,"tmp160");
					HX_STACK_LINE(181)
					if ((tmp159)){
						HX_STACK_LINE(181)
						bool tmp161 = _this->ignore_listeners;		HX_STACK_VAR(tmp161,"tmp161");
						HX_STACK_LINE(181)
						bool tmp162 = tmp161;		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(181)
						tmp160 = !(tmp162);
					}
					else{
						HX_STACK_LINE(181)
						tmp160 = false;
					}
					HX_STACK_LINE(181)
					if ((tmp160)){
						HX_STACK_LINE(181)
						_this->listen_x((int)0);
					}
					HX_STACK_LINE(181)
					_this->x;
				}
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				_this->y = _y;
				HX_STACK_LINE(181)
				bool tmp158 = _this->_construct;		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(181)
				if ((tmp158)){
					HX_STACK_LINE(181)
					_this->y;
				}
				else{
					HX_STACK_LINE(181)
					bool tmp159 = (_this->listen_y != null());		HX_STACK_VAR(tmp159,"tmp159");
					HX_STACK_LINE(181)
					bool tmp160;		HX_STACK_VAR(tmp160,"tmp160");
					HX_STACK_LINE(181)
					if ((tmp159)){
						HX_STACK_LINE(181)
						bool tmp161 = _this->ignore_listeners;		HX_STACK_VAR(tmp161,"tmp161");
						HX_STACK_LINE(181)
						bool tmp162 = tmp161;		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(181)
						tmp160 = !(tmp162);
					}
					else{
						HX_STACK_LINE(181)
						tmp160 = false;
					}
					HX_STACK_LINE(181)
					if ((tmp160)){
						HX_STACK_LINE(181)
						Float tmp161 = _y;		HX_STACK_VAR(tmp161,"tmp161");
						HX_STACK_LINE(181)
						_this->listen_y(tmp161);
					}
					HX_STACK_LINE(181)
					_this->y;
				}
			}
			HX_STACK_LINE(181)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(181)
			bool tmp158 = (_this->listen_x != null());		HX_STACK_VAR(tmp158,"tmp158");
			HX_STACK_LINE(181)
			bool tmp159;		HX_STACK_VAR(tmp159,"tmp159");
			HX_STACK_LINE(181)
			if ((tmp158)){
				HX_STACK_LINE(181)
				bool tmp160 = _this->ignore_listeners;		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(181)
				bool tmp161 = tmp160;		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(181)
				tmp159 = !(tmp161);
			}
			else{
				HX_STACK_LINE(181)
				tmp159 = false;
			}
			HX_STACK_LINE(181)
			if ((tmp159)){
				HX_STACK_LINE(181)
				Float tmp160 = _this->x;		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(181)
				_this->listen_x(tmp160);
			}
			HX_STACK_LINE(181)
			bool tmp160 = (_this->listen_y != null());		HX_STACK_VAR(tmp160,"tmp160");
			HX_STACK_LINE(181)
			bool tmp161;		HX_STACK_VAR(tmp161,"tmp161");
			HX_STACK_LINE(181)
			if ((tmp160)){
				HX_STACK_LINE(181)
				bool tmp162 = _this->ignore_listeners;		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(181)
				bool tmp163 = tmp162;		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(181)
				tmp161 = !(tmp163);
			}
			else{
				HX_STACK_LINE(181)
				tmp161 = false;
			}
			HX_STACK_LINE(181)
			if ((tmp161)){
				HX_STACK_LINE(181)
				Float tmp162 = _this->y;		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(181)
				_this->listen_y(tmp162);
			}
			HX_STACK_LINE(181)
			_this;
		}
		HX_STACK_LINE(182)
		Float tmp154 = this->left;		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(182)
		Dynamic tmp155 = this->slices->__GetItem((int)6);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(182)
		tmp155->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp154;
		HX_STACK_LINE(183)
		Float tmp156 = this->bottom;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(183)
		Dynamic tmp157 = this->slices->__GetItem((int)6);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(183)
		tmp157->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp156;
		HX_STACK_LINE(186)
		Float tmp158 = this->source_w;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(186)
		Float tmp159 = this->left;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(186)
		Float tmp160 = (tmp158 - tmp159);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(186)
		Float tmp161 = this->right;		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(186)
		Float tmp162 = (tmp160 - tmp161);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(186)
		Dynamic tmp163 = this->slices->__GetItem((int)7);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(186)
		tmp163->__FieldRef(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87")) = tmp162;
		HX_STACK_LINE(187)
		Float tmp164 = this->bottom;		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(187)
		Dynamic tmp165 = this->slices->__GetItem((int)7);		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(187)
		tmp165->__FieldRef(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3")) = tmp164;
		HX_STACK_LINE(188)
		Float tmp166 = this->source_x;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(188)
		Float tmp167 = this->left;		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(188)
		Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(188)
		Dynamic tmp169 = this->slices->__GetItem((int)7);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(188)
		tmp169->__FieldRef(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")) = tmp168;
		HX_STACK_LINE(189)
		Float tmp170 = this->source_y;		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(189)
		Float tmp171 = this->source_h;		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(189)
		Float tmp172 = this->bottom;		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(189)
		Float tmp173 = (tmp171 - tmp172);		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(189)
		Float tmp174 = (tmp170 + tmp173);		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(189)
		Dynamic tmp175 = this->slices->__GetItem((int)7);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(189)
		tmp175->__FieldRef(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")) = tmp174;
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			Dynamic tmp176 = this->slices->__GetItem((int)7);		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(190)
			::phoenix::Vector _this = tmp176->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(190)
			Float tmp177 = this->left;		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(190)
			Float _x = tmp177;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(190)
			Float tmp178 = this->top;		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(190)
			Float tmp179 = this->midheight;		HX_STACK_VAR(tmp179,"tmp179");
			HX_STACK_LINE(190)
			Float tmp180 = (tmp178 + tmp179);		HX_STACK_VAR(tmp180,"tmp180");
			HX_STACK_LINE(190)
			Float _y = tmp180;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(190)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(190)
			_this->ignore_listeners = true;
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				_this->x = _x;
				HX_STACK_LINE(190)
				bool tmp181 = _this->_construct;		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(190)
				if ((tmp181)){
					HX_STACK_LINE(190)
					_this->x;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp182 = (_this->listen_x != null());		HX_STACK_VAR(tmp182,"tmp182");
					HX_STACK_LINE(190)
					bool tmp183;		HX_STACK_VAR(tmp183,"tmp183");
					HX_STACK_LINE(190)
					if ((tmp182)){
						HX_STACK_LINE(190)
						bool tmp184 = _this->ignore_listeners;		HX_STACK_VAR(tmp184,"tmp184");
						HX_STACK_LINE(190)
						bool tmp185 = tmp184;		HX_STACK_VAR(tmp185,"tmp185");
						HX_STACK_LINE(190)
						tmp183 = !(tmp185);
					}
					else{
						HX_STACK_LINE(190)
						tmp183 = false;
					}
					HX_STACK_LINE(190)
					if ((tmp183)){
						HX_STACK_LINE(190)
						Float tmp184 = _x;		HX_STACK_VAR(tmp184,"tmp184");
						HX_STACK_LINE(190)
						_this->listen_x(tmp184);
					}
					HX_STACK_LINE(190)
					_this->x;
				}
			}
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				_this->y = _y;
				HX_STACK_LINE(190)
				bool tmp181 = _this->_construct;		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(190)
				if ((tmp181)){
					HX_STACK_LINE(190)
					_this->y;
				}
				else{
					HX_STACK_LINE(190)
					bool tmp182 = (_this->listen_y != null());		HX_STACK_VAR(tmp182,"tmp182");
					HX_STACK_LINE(190)
					bool tmp183;		HX_STACK_VAR(tmp183,"tmp183");
					HX_STACK_LINE(190)
					if ((tmp182)){
						HX_STACK_LINE(190)
						bool tmp184 = _this->ignore_listeners;		HX_STACK_VAR(tmp184,"tmp184");
						HX_STACK_LINE(190)
						bool tmp185 = tmp184;		HX_STACK_VAR(tmp185,"tmp185");
						HX_STACK_LINE(190)
						tmp183 = !(tmp185);
					}
					else{
						HX_STACK_LINE(190)
						tmp183 = false;
					}
					HX_STACK_LINE(190)
					if ((tmp183)){
						HX_STACK_LINE(190)
						Float tmp184 = _y;		HX_STACK_VAR(tmp184,"tmp184");
						HX_STACK_LINE(190)
						_this->listen_y(tmp184);
					}
					HX_STACK_LINE(190)
					_this->y;
				}
			}
			HX_STACK_LINE(190)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(190)
			bool tmp181 = (_this->listen_x != null());		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(190)
			bool tmp182;		HX_STACK_VAR(tmp182,"tmp182");
			HX_STACK_LINE(190)
			if ((tmp181)){
				HX_STACK_LINE(190)
				bool tmp183 = _this->ignore_listeners;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(190)
				bool tmp184 = tmp183;		HX_STACK_VAR(tmp184,"tmp184");
				HX_STACK_LINE(190)
				tmp182 = !(tmp184);
			}
			else{
				HX_STACK_LINE(190)
				tmp182 = false;
			}
			HX_STACK_LINE(190)
			if ((tmp182)){
				HX_STACK_LINE(190)
				Float tmp183 = _this->x;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(190)
				_this->listen_x(tmp183);
			}
			HX_STACK_LINE(190)
			bool tmp183 = (_this->listen_y != null());		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(190)
			bool tmp184;		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(190)
			if ((tmp183)){
				HX_STACK_LINE(190)
				bool tmp185 = _this->ignore_listeners;		HX_STACK_VAR(tmp185,"tmp185");
				HX_STACK_LINE(190)
				bool tmp186 = tmp185;		HX_STACK_VAR(tmp186,"tmp186");
				HX_STACK_LINE(190)
				tmp184 = !(tmp186);
			}
			else{
				HX_STACK_LINE(190)
				tmp184 = false;
			}
			HX_STACK_LINE(190)
			if ((tmp184)){
				HX_STACK_LINE(190)
				Float tmp185 = _this->y;		HX_STACK_VAR(tmp185,"tmp185");
				HX_STACK_LINE(190)
				_this->listen_y(tmp185);
			}
			HX_STACK_LINE(190)
			_this;
		}
		HX_STACK_LINE(191)
		Float tmp176 = this->width;		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(191)
		Float tmp177 = this->left;		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(191)
		Float tmp178 = (tmp176 - tmp177);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(191)
		Float tmp179 = this->right;		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(191)
		Float tmp180 = (tmp178 - tmp179);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(191)
		Dynamic tmp181 = this->slices->__GetItem((int)7);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(191)
		tmp181->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp180;
		HX_STACK_LINE(192)
		Float tmp182 = this->bottom;		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(192)
		Dynamic tmp183 = this->slices->__GetItem((int)7);		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(192)
		tmp183->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp182;
		HX_STACK_LINE(195)
		Float tmp184 = this->right;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(195)
		Dynamic tmp185 = this->slices->__GetItem((int)8);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(195)
		tmp185->__FieldRef(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87")) = tmp184;
		HX_STACK_LINE(196)
		Float tmp186 = this->bottom;		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(196)
		Dynamic tmp187 = this->slices->__GetItem((int)8);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(196)
		tmp187->__FieldRef(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3")) = tmp186;
		HX_STACK_LINE(197)
		Float tmp188 = this->source_x;		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(197)
		Float tmp189 = this->source_w;		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(197)
		Float tmp190 = this->right;		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(197)
		Float tmp191 = (tmp189 - tmp190);		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(197)
		Float tmp192 = (tmp188 + tmp191);		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(197)
		Dynamic tmp193 = this->slices->__GetItem((int)8);		HX_STACK_VAR(tmp193,"tmp193");
		HX_STACK_LINE(197)
		tmp193->__FieldRef(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")) = tmp192;
		HX_STACK_LINE(198)
		Float tmp194 = this->source_y;		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(198)
		Float tmp195 = this->source_h;		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(198)
		Float tmp196 = this->bottom;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(198)
		Float tmp197 = (tmp195 - tmp196);		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(198)
		Float tmp198 = (tmp194 + tmp197);		HX_STACK_VAR(tmp198,"tmp198");
		HX_STACK_LINE(198)
		Dynamic tmp199 = this->slices->__GetItem((int)8);		HX_STACK_VAR(tmp199,"tmp199");
		HX_STACK_LINE(198)
		tmp199->__FieldRef(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")) = tmp198;
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			Dynamic tmp200 = this->slices->__GetItem((int)8);		HX_STACK_VAR(tmp200,"tmp200");
			HX_STACK_LINE(199)
			::phoenix::Vector _this = tmp200->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(199)
			Float tmp201 = this->left;		HX_STACK_VAR(tmp201,"tmp201");
			HX_STACK_LINE(199)
			Float tmp202 = this->midwidth;		HX_STACK_VAR(tmp202,"tmp202");
			HX_STACK_LINE(199)
			Float tmp203 = (tmp201 + tmp202);		HX_STACK_VAR(tmp203,"tmp203");
			HX_STACK_LINE(199)
			Float _x = tmp203;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(199)
			Float tmp204 = this->top;		HX_STACK_VAR(tmp204,"tmp204");
			HX_STACK_LINE(199)
			Float tmp205 = this->midheight;		HX_STACK_VAR(tmp205,"tmp205");
			HX_STACK_LINE(199)
			Float tmp206 = (tmp204 + tmp205);		HX_STACK_VAR(tmp206,"tmp206");
			HX_STACK_LINE(199)
			Float _y = tmp206;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(199)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(199)
			_this->ignore_listeners = true;
			HX_STACK_LINE(199)
			{
				HX_STACK_LINE(199)
				_this->x = _x;
				HX_STACK_LINE(199)
				bool tmp207 = _this->_construct;		HX_STACK_VAR(tmp207,"tmp207");
				HX_STACK_LINE(199)
				if ((tmp207)){
					HX_STACK_LINE(199)
					_this->x;
				}
				else{
					HX_STACK_LINE(199)
					bool tmp208 = (_this->listen_x != null());		HX_STACK_VAR(tmp208,"tmp208");
					HX_STACK_LINE(199)
					bool tmp209;		HX_STACK_VAR(tmp209,"tmp209");
					HX_STACK_LINE(199)
					if ((tmp208)){
						HX_STACK_LINE(199)
						bool tmp210 = _this->ignore_listeners;		HX_STACK_VAR(tmp210,"tmp210");
						HX_STACK_LINE(199)
						bool tmp211 = tmp210;		HX_STACK_VAR(tmp211,"tmp211");
						HX_STACK_LINE(199)
						tmp209 = !(tmp211);
					}
					else{
						HX_STACK_LINE(199)
						tmp209 = false;
					}
					HX_STACK_LINE(199)
					if ((tmp209)){
						HX_STACK_LINE(199)
						Float tmp210 = _x;		HX_STACK_VAR(tmp210,"tmp210");
						HX_STACK_LINE(199)
						_this->listen_x(tmp210);
					}
					HX_STACK_LINE(199)
					_this->x;
				}
			}
			HX_STACK_LINE(199)
			{
				HX_STACK_LINE(199)
				_this->y = _y;
				HX_STACK_LINE(199)
				bool tmp207 = _this->_construct;		HX_STACK_VAR(tmp207,"tmp207");
				HX_STACK_LINE(199)
				if ((tmp207)){
					HX_STACK_LINE(199)
					_this->y;
				}
				else{
					HX_STACK_LINE(199)
					bool tmp208 = (_this->listen_y != null());		HX_STACK_VAR(tmp208,"tmp208");
					HX_STACK_LINE(199)
					bool tmp209;		HX_STACK_VAR(tmp209,"tmp209");
					HX_STACK_LINE(199)
					if ((tmp208)){
						HX_STACK_LINE(199)
						bool tmp210 = _this->ignore_listeners;		HX_STACK_VAR(tmp210,"tmp210");
						HX_STACK_LINE(199)
						bool tmp211 = tmp210;		HX_STACK_VAR(tmp211,"tmp211");
						HX_STACK_LINE(199)
						tmp209 = !(tmp211);
					}
					else{
						HX_STACK_LINE(199)
						tmp209 = false;
					}
					HX_STACK_LINE(199)
					if ((tmp209)){
						HX_STACK_LINE(199)
						Float tmp210 = _y;		HX_STACK_VAR(tmp210,"tmp210");
						HX_STACK_LINE(199)
						_this->listen_y(tmp210);
					}
					HX_STACK_LINE(199)
					_this->y;
				}
			}
			HX_STACK_LINE(199)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(199)
			bool tmp207 = (_this->listen_x != null());		HX_STACK_VAR(tmp207,"tmp207");
			HX_STACK_LINE(199)
			bool tmp208;		HX_STACK_VAR(tmp208,"tmp208");
			HX_STACK_LINE(199)
			if ((tmp207)){
				HX_STACK_LINE(199)
				bool tmp209 = _this->ignore_listeners;		HX_STACK_VAR(tmp209,"tmp209");
				HX_STACK_LINE(199)
				bool tmp210 = tmp209;		HX_STACK_VAR(tmp210,"tmp210");
				HX_STACK_LINE(199)
				tmp208 = !(tmp210);
			}
			else{
				HX_STACK_LINE(199)
				tmp208 = false;
			}
			HX_STACK_LINE(199)
			if ((tmp208)){
				HX_STACK_LINE(199)
				Float tmp209 = _this->x;		HX_STACK_VAR(tmp209,"tmp209");
				HX_STACK_LINE(199)
				_this->listen_x(tmp209);
			}
			HX_STACK_LINE(199)
			bool tmp209 = (_this->listen_y != null());		HX_STACK_VAR(tmp209,"tmp209");
			HX_STACK_LINE(199)
			bool tmp210;		HX_STACK_VAR(tmp210,"tmp210");
			HX_STACK_LINE(199)
			if ((tmp209)){
				HX_STACK_LINE(199)
				bool tmp211 = _this->ignore_listeners;		HX_STACK_VAR(tmp211,"tmp211");
				HX_STACK_LINE(199)
				bool tmp212 = tmp211;		HX_STACK_VAR(tmp212,"tmp212");
				HX_STACK_LINE(199)
				tmp210 = !(tmp212);
			}
			else{
				HX_STACK_LINE(199)
				tmp210 = false;
			}
			HX_STACK_LINE(199)
			if ((tmp210)){
				HX_STACK_LINE(199)
				Float tmp211 = _this->y;		HX_STACK_VAR(tmp211,"tmp211");
				HX_STACK_LINE(199)
				_this->listen_y(tmp211);
			}
			HX_STACK_LINE(199)
			_this;
		}
		HX_STACK_LINE(200)
		Float tmp200 = this->right;		HX_STACK_VAR(tmp200,"tmp200");
		HX_STACK_LINE(200)
		Dynamic tmp201 = this->slices->__GetItem((int)8);		HX_STACK_VAR(tmp201,"tmp201");
		HX_STACK_LINE(200)
		tmp201->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp200;
		HX_STACK_LINE(201)
		Float tmp202 = this->bottom;		HX_STACK_VAR(tmp202,"tmp202");
		HX_STACK_LINE(201)
		Dynamic tmp203 = this->slices->__GetItem((int)8);		HX_STACK_VAR(tmp203,"tmp203");
		HX_STACK_LINE(201)
		tmp203->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp202;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NineSlice_obj,update_size,(void))

Void NineSlice_obj::set( Float _width,Float _height){
{
		HX_STACK_FRAME("luxe.NineSlice","set",0xa11b3f1c,"luxe.NineSlice.set","luxe/NineSlice.hx",205,0xccc9c257)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_width,"_width")
		HX_STACK_ARG(_height,"_height")
		HX_STACK_LINE(207)
		bool tmp = this->added;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		if ((tmp)){
			HX_STACK_LINE(208)
			::phoenix::geometry::QuadPackGeometry tmp1 = this->_geometry;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(208)
			tmp1->drop(null());
			HX_STACK_LINE(209)
			this->added = false;
		}
		HX_STACK_LINE(213)
		int tmp1 = this->slices->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		this->slices->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp1);
		HX_STACK_LINE(214)
		this->width = _width;
		HX_STACK_LINE(215)
		this->height = _height;
		HX_STACK_LINE(217)
		Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		Float tmp3 = this->left;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		Float tmp5 = this->right;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		this->midwidth = tmp7;
		HX_STACK_LINE(218)
		Float tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(218)
		Float tmp9 = this->top;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(218)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(218)
		Float tmp11 = this->bottom;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(218)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(218)
		Float tmp13 = ::Math_obj::abs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(218)
		this->midheight = tmp13;
		HX_STACK_LINE(222)
		Float tmp14 = this->left;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(223)
		Float tmp15 = this->top;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(224)
		Float tmp16 = this->source_x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(225)
		Float tmp17 = this->source_y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(226)
		::phoenix::Vector tmp18 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(227)
		Float tmp19 = this->left;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(228)
		Float tmp20 = this->top;		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp17,Float &tmp20,Float &tmp19,Float &tmp15,Float &tmp16,::phoenix::Vector &tmp18,Float &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",221,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87") , tmp14,false);
					__result->Add(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3") , tmp15,false);
					__result->Add(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66") , tmp16,false);
					__result->Add(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66") , tmp17,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp18,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp19,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp20,false);
					__result->Add(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(221)
		Dynamic tmp21 = _Function_1_1::Block(tmp17,tmp20,tmp19,tmp15,tmp16,tmp18,tmp14);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(221)
		this->slices->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
		HX_STACK_LINE(233)
		Float tmp22 = this->source_w;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(233)
		Float tmp23 = this->left;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(233)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(233)
		Float tmp25 = this->right;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(233)
		Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(234)
		Float tmp27 = this->top;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(235)
		Float tmp28 = this->source_x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(235)
		Float tmp29 = this->left;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(235)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(236)
		Float tmp31 = this->source_y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(237)
		Float tmp32 = this->left;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(237)
		::phoenix::Vector tmp33 = ::phoenix::Vector_obj::__new(tmp32,(int)0,null(),null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(238)
		Float tmp34 = this->width;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(238)
		Float tmp35 = this->left;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(238)
		Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(238)
		Float tmp37 = this->right;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(238)
		Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(239)
		Float tmp39 = this->top;		HX_STACK_VAR(tmp39,"tmp39");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Vector &tmp33,Float &tmp38,Float &tmp26,Float &tmp31,Float &tmp27,Float &tmp39,Float &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",232,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87") , tmp26,false);
					__result->Add(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3") , tmp27,false);
					__result->Add(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66") , tmp30,false);
					__result->Add(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66") , tmp31,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp33,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp38,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp39,false);
					__result->Add(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(232)
		Dynamic tmp40 = _Function_1_2::Block(tmp33,tmp38,tmp26,tmp31,tmp27,tmp39,tmp30);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(232)
		this->slices->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp40);
		HX_STACK_LINE(244)
		Float tmp41 = this->right;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(245)
		Float tmp42 = this->top;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(246)
		Float tmp43 = this->source_x;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(246)
		Float tmp44 = this->source_w;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(246)
		Float tmp45 = this->right;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(246)
		Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(246)
		Float tmp47 = (tmp43 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(247)
		Float tmp48 = this->source_y;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(248)
		Float tmp49 = this->left;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(248)
		Float tmp50 = this->midwidth;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(248)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(248)
		::phoenix::Vector tmp52 = ::phoenix::Vector_obj::__new(tmp51,(int)0,null(),null());		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(249)
		Float tmp53 = this->right;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(250)
		Float tmp54 = this->top;		HX_STACK_VAR(tmp54,"tmp54");
		struct _Function_1_3{
			inline static Dynamic Block( Float &tmp48,Float &tmp54,Float &tmp42,::phoenix::Vector &tmp52,Float &tmp47,Float &tmp41,Float &tmp53){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",243,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87") , tmp41,false);
					__result->Add(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3") , tmp42,false);
					__result->Add(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66") , tmp47,false);
					__result->Add(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66") , tmp48,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp52,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp53,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp54,false);
					__result->Add(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(243)
		Dynamic tmp55 = _Function_1_3::Block(tmp48,tmp54,tmp42,tmp52,tmp47,tmp41,tmp53);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(243)
		this->slices->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp55);
		HX_STACK_LINE(257)
		Float tmp56 = this->left;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(258)
		Float tmp57 = this->source_h;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(258)
		Float tmp58 = this->top;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(258)
		Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(258)
		Float tmp60 = this->bottom;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(258)
		Float tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(259)
		Float tmp62 = this->source_x;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(260)
		Float tmp63 = this->source_y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(260)
		Float tmp64 = this->top;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(260)
		Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(261)
		Float tmp66 = this->top;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(261)
		::phoenix::Vector tmp67 = ::phoenix::Vector_obj::__new((int)0,tmp66,null(),null());		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(262)
		Float tmp68 = this->left;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(263)
		Float tmp69 = this->height;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(263)
		Float tmp70 = this->top;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(263)
		Float tmp71 = (tmp69 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(263)
		Float tmp72 = this->bottom;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(263)
		Float tmp73 = (tmp71 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		struct _Function_1_4{
			inline static Dynamic Block( Float &tmp73,Float &tmp68,Float &tmp62,Float &tmp56,Float &tmp61,::phoenix::Vector &tmp67,Float &tmp65){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",256,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87") , tmp56,false);
					__result->Add(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3") , tmp61,false);
					__result->Add(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66") , tmp62,false);
					__result->Add(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66") , tmp65,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp67,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp68,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp73,false);
					__result->Add(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(256)
		Dynamic tmp74 = _Function_1_4::Block(tmp73,tmp68,tmp62,tmp56,tmp61,tmp67,tmp65);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(256)
		this->slices->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp74);
		HX_STACK_LINE(268)
		Float tmp75 = this->source_w;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(268)
		Float tmp76 = this->left;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(268)
		Float tmp77 = (tmp75 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(268)
		Float tmp78 = this->right;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(268)
		Float tmp79 = (tmp77 - tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(269)
		Float tmp80 = this->source_h;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(269)
		Float tmp81 = this->top;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(269)
		Float tmp82 = (tmp80 - tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(269)
		Float tmp83 = this->bottom;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(269)
		Float tmp84 = (tmp82 - tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(270)
		Float tmp85 = this->source_x;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(270)
		Float tmp86 = this->left;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(270)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(271)
		Float tmp88 = this->source_y;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(271)
		Float tmp89 = this->top;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(271)
		Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(272)
		Float tmp91 = this->left;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(272)
		Float tmp92 = this->top;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(272)
		::phoenix::Vector tmp93 = ::phoenix::Vector_obj::__new(tmp91,tmp92,null(),null());		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(273)
		Float tmp94 = this->width;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(273)
		Float tmp95 = this->left;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(273)
		Float tmp96 = (tmp94 - tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(273)
		Float tmp97 = this->right;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(273)
		Float tmp98 = (tmp96 - tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(274)
		Float tmp99 = this->height;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(274)
		Float tmp100 = this->top;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(274)
		Float tmp101 = (tmp99 - tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(274)
		Float tmp102 = this->bottom;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(274)
		Float tmp103 = (tmp101 - tmp102);		HX_STACK_VAR(tmp103,"tmp103");
		struct _Function_1_5{
			inline static Dynamic Block( Float &tmp98,Float &tmp103,Float &tmp90,Float &tmp79,Float &tmp84,Float &tmp87,::phoenix::Vector &tmp93){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",267,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87") , tmp79,false);
					__result->Add(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3") , tmp84,false);
					__result->Add(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66") , tmp87,false);
					__result->Add(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66") , tmp90,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp93,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp98,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp103,false);
					__result->Add(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(267)
		Dynamic tmp104 = _Function_1_5::Block(tmp98,tmp103,tmp90,tmp79,tmp84,tmp87,tmp93);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(267)
		this->slices->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp104);
		HX_STACK_LINE(279)
		Float tmp105 = this->right;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(280)
		Float tmp106 = this->source_h;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(280)
		Float tmp107 = this->top;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(280)
		Float tmp108 = (tmp106 - tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(280)
		Float tmp109 = this->bottom;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(280)
		Float tmp110 = (tmp108 - tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(281)
		Float tmp111 = this->source_x;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(281)
		Float tmp112 = this->source_w;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(281)
		Float tmp113 = this->right;		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(281)
		Float tmp114 = (tmp112 - tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(281)
		Float tmp115 = (tmp111 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(282)
		Float tmp116 = this->source_y;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(282)
		Float tmp117 = this->top;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(282)
		Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(283)
		Float tmp119 = this->left;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(283)
		Float tmp120 = this->midwidth;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(283)
		Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(283)
		Float tmp122 = this->top;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(283)
		::phoenix::Vector tmp123 = ::phoenix::Vector_obj::__new(tmp121,tmp122,null(),null());		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(284)
		Float tmp124 = this->right;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(285)
		Float tmp125 = this->height;		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(285)
		Float tmp126 = this->top;		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(285)
		Float tmp127 = (tmp125 - tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(285)
		Float tmp128 = this->bottom;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(285)
		Float tmp129 = (tmp127 - tmp128);		HX_STACK_VAR(tmp129,"tmp129");
		struct _Function_1_6{
			inline static Dynamic Block( Float &tmp110,Float &tmp118,Float &tmp124,Float &tmp115,::phoenix::Vector &tmp123,Float &tmp129,Float &tmp105){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",278,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87") , tmp105,false);
					__result->Add(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3") , tmp110,false);
					__result->Add(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66") , tmp115,false);
					__result->Add(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66") , tmp118,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp123,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp124,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp129,false);
					__result->Add(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(278)
		Dynamic tmp130 = _Function_1_6::Block(tmp110,tmp118,tmp124,tmp115,tmp123,tmp129,tmp105);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(278)
		this->slices->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp130);
		HX_STACK_LINE(292)
		Float tmp131 = this->left;		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(293)
		Float tmp132 = this->bottom;		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(294)
		Float tmp133 = this->source_x;		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(295)
		Float tmp134 = this->source_y;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(295)
		Float tmp135 = this->source_h;		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(295)
		Float tmp136 = this->bottom;		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(295)
		Float tmp137 = (tmp135 - tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(295)
		Float tmp138 = (tmp134 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(296)
		Float tmp139 = this->top;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(296)
		Float tmp140 = this->midheight;		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(296)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(296)
		::phoenix::Vector tmp142 = ::phoenix::Vector_obj::__new((int)0,tmp141,null(),null());		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(297)
		Float tmp143 = this->left;		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(298)
		Float tmp144 = this->bottom;		HX_STACK_VAR(tmp144,"tmp144");
		struct _Function_1_7{
			inline static Dynamic Block( ::phoenix::Vector &tmp142,Float &tmp144,Float &tmp138,Float &tmp132,Float &tmp143,Float &tmp131,Float &tmp133){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",291,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87") , tmp131,false);
					__result->Add(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3") , tmp132,false);
					__result->Add(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66") , tmp133,false);
					__result->Add(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66") , tmp138,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp142,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp143,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp144,false);
					__result->Add(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(291)
		Dynamic tmp145 = _Function_1_7::Block(tmp142,tmp144,tmp138,tmp132,tmp143,tmp131,tmp133);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(291)
		this->slices->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp145);
		HX_STACK_LINE(303)
		Float tmp146 = this->source_w;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(303)
		Float tmp147 = this->left;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(303)
		Float tmp148 = (tmp146 - tmp147);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(303)
		Float tmp149 = this->right;		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(303)
		Float tmp150 = (tmp148 - tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(304)
		Float tmp151 = this->bottom;		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(305)
		Float tmp152 = this->source_x;		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(305)
		Float tmp153 = this->left;		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(305)
		Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(306)
		Float tmp155 = this->source_y;		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(306)
		Float tmp156 = this->source_h;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(306)
		Float tmp157 = this->bottom;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(306)
		Float tmp158 = (tmp156 - tmp157);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(306)
		Float tmp159 = (tmp155 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(307)
		Float tmp160 = this->left;		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(307)
		Float tmp161 = this->top;		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(307)
		Float tmp162 = this->midheight;		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(307)
		Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(307)
		::phoenix::Vector tmp164 = ::phoenix::Vector_obj::__new(tmp160,tmp163,null(),null());		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(308)
		Float tmp165 = this->width;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(308)
		Float tmp166 = this->left;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(308)
		Float tmp167 = (tmp165 - tmp166);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(308)
		Float tmp168 = this->right;		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(308)
		Float tmp169 = (tmp167 - tmp168);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(309)
		Float tmp170 = this->bottom;		HX_STACK_VAR(tmp170,"tmp170");
		struct _Function_1_8{
			inline static Dynamic Block( ::phoenix::Vector &tmp164,Float &tmp151,Float &tmp150,Float &tmp159,Float &tmp169,Float &tmp154,Float &tmp170){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",302,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87") , tmp150,false);
					__result->Add(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3") , tmp151,false);
					__result->Add(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66") , tmp154,false);
					__result->Add(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66") , tmp159,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp164,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp169,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp170,false);
					__result->Add(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(302)
		Dynamic tmp171 = _Function_1_8::Block(tmp164,tmp151,tmp150,tmp159,tmp169,tmp154,tmp170);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(302)
		this->slices->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp171);
		HX_STACK_LINE(314)
		Float tmp172 = this->right;		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(315)
		Float tmp173 = this->bottom;		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(316)
		Float tmp174 = this->source_x;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(316)
		Float tmp175 = this->source_w;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(316)
		Float tmp176 = this->right;		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(316)
		Float tmp177 = (tmp175 - tmp176);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(316)
		Float tmp178 = (tmp174 + tmp177);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(317)
		Float tmp179 = this->source_y;		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(317)
		Float tmp180 = this->source_h;		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(317)
		Float tmp181 = this->bottom;		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(317)
		Float tmp182 = (tmp180 - tmp181);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(317)
		Float tmp183 = (tmp179 + tmp182);		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(318)
		Float tmp184 = this->left;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(318)
		Float tmp185 = this->midwidth;		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(318)
		Float tmp186 = (tmp184 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(318)
		Float tmp187 = this->top;		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(318)
		Float tmp188 = this->midheight;		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(318)
		Float tmp189 = (tmp187 + tmp188);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(318)
		::phoenix::Vector tmp190 = ::phoenix::Vector_obj::__new(tmp186,tmp189,null(),null());		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(319)
		Float tmp191 = this->right;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(320)
		Float tmp192 = this->bottom;		HX_STACK_VAR(tmp192,"tmp192");
		struct _Function_1_9{
			inline static Dynamic Block( Float &tmp192,Float &tmp178,Float &tmp173,::phoenix::Vector &tmp190,Float &tmp172,Float &tmp183,Float &tmp191){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",313,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87") , tmp172,false);
					__result->Add(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3") , tmp173,false);
					__result->Add(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66") , tmp178,false);
					__result->Add(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66") , tmp183,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp190,false);
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp191,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp192,false);
					__result->Add(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(313)
		Dynamic tmp193 = _Function_1_9::Block(tmp192,tmp178,tmp173,tmp190,tmp172,tmp183,tmp191);		HX_STACK_VAR(tmp193,"tmp193");
		HX_STACK_LINE(313)
		this->slices->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp193);
		HX_STACK_LINE(324)
		this->is_set = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NineSlice_obj,set,(void))

::phoenix::Vector NineSlice_obj::set_size( ::phoenix::Vector _v){
	HX_STACK_FRAME("luxe.NineSlice","set_size",0x2a233804,"luxe.NineSlice.set_size","luxe/NineSlice.hx",328,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(330)
	bool tmp = this->is_set;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	if ((tmp1)){
		HX_STACK_LINE(330)
		::phoenix::Vector tmp2 = _v;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		return tmp2;
	}
	HX_STACK_LINE(332)
	Float tmp2 = _v->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	Float tmp3 = _v->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(332)
	this->update_size(tmp2,tmp3);
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(334)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(334)
		cpp::ArrayBase _g1 = this->slices;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			bool tmp4 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(334)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(334)
			if ((tmp5)){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(334)
			Dynamic tmp6 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(334)
			Dynamic slice = tmp6;		HX_STACK_VAR(slice,"slice");
			HX_STACK_LINE(334)
			++(_g);
			HX_STACK_LINE(335)
			::phoenix::geometry::QuadPackGeometry tmp7 = this->_geometry;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(335)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(335)
			if ((tmp8)){
				HX_STACK_LINE(336)
				::phoenix::geometry::QuadPackGeometry tmp9 = this->_geometry;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(336)
				int tmp10 = slice->__Field(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(336)
				Float tmp11 = slice->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(336)
				Float tmp12 = slice->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(336)
				Float tmp13 = slice->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(336)
				Float tmp14 = slice->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(336)
				::phoenix::Rectangle tmp15 = ::phoenix::Rectangle_obj::__new(tmp11,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(336)
				tmp9->quad_resize(tmp10,tmp15);
			}
		}
	}
	HX_STACK_LINE(340)
	::phoenix::Vector tmp4 = _v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(340)
	return tmp4;
}


Void NineSlice_obj::_create( ::phoenix::Vector _pos,Float _w,Float _h,Dynamic __o__reset){
Dynamic _reset = __o__reset.Default(false);
	HX_STACK_FRAME("luxe.NineSlice","_create",0x383a6115,"luxe.NineSlice._create","luxe/NineSlice.hx",344,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pos,"_pos")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_ARG(_h,"_h")
	HX_STACK_ARG(_reset,"_reset")
{
		HX_STACK_LINE(346)
		bool tmp = this->is_set;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(346)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(346)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(346)
		if ((tmp3)){
			HX_STACK_LINE(346)
			tmp4 = _reset;
		}
		else{
			HX_STACK_LINE(346)
			tmp4 = true;
		}
		HX_STACK_LINE(346)
		if ((tmp4)){
			HX_STACK_LINE(347)
			Float tmp5 = _w;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			Float tmp6 = _h;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(347)
			this->set(tmp5,tmp6);
		}
		HX_STACK_LINE(350)
		::phoenix::Color tmp5 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(350)
		::phoenix::Color _color = tmp5;		HX_STACK_VAR(_color,"_color");
		HX_STACK_LINE(353)
		::phoenix::Texture tmp6 = this->texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(354)
		::phoenix::Color tmp7 = _color;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(355)
		Dynamic tmp8 = this->nineslice_options;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(355)
		Dynamic tmp9 = tmp8->__Field(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(356)
		Dynamic tmp10 = this->nineslice_options;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(356)
		Dynamic tmp11 = tmp10->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(357)
		::phoenix::Batcher tmp12 = this->_batcher;		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Texture &tmp6,Dynamic &tmp9,Dynamic &tmp11,::phoenix::Color &tmp7,::phoenix::Batcher &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",352,0xccc9c257)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , tmp6,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp7,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , tmp9,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , tmp11,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp12,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(352)
		Dynamic tmp13 = _Function_1_1::Block(tmp6,tmp9,tmp11,tmp7,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(352)
		::phoenix::geometry::QuadPackGeometry tmp14 = ::phoenix::geometry::QuadPackGeometry_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(352)
		this->_geometry = tmp14;
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(360)
			cpp::ArrayBase _g1 = this->slices;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(360)
			while((true)){
				HX_STACK_LINE(360)
				bool tmp15 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(360)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(360)
				if ((tmp16)){
					HX_STACK_LINE(360)
					break;
				}
				HX_STACK_LINE(360)
				Dynamic tmp17 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(360)
				Dynamic slice = tmp17;		HX_STACK_VAR(slice,"slice");
				HX_STACK_LINE(360)
				++(_g);
				HX_STACK_LINE(362)
				::phoenix::geometry::QuadPackGeometry tmp18 = this->_geometry;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(363)
				Float tmp19 = slice->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(364)
				Float tmp20 = slice->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(365)
				Float tmp21 = slice->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(366)
				Float tmp22 = slice->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(367)
				Dynamic tmp23 = this->nineslice_options;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(367)
				::phoenix::Color tmp24 = tmp23->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(368)
				::phoenix::Rectangle tmp25 = ::phoenix::Rectangle_obj::__new(slice->__Field(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66"), hx::paccDynamic ),slice->__Field(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66"), hx::paccDynamic ),slice->__Field(HX_HCSTRING("source_width","\x62","\x44","\xbc","\x87"), hx::paccDynamic ),slice->__Field(HX_HCSTRING("source_height","\x0b","\x0a","\x4f","\xf3"), hx::paccDynamic ));		HX_STACK_VAR(tmp25,"tmp25");
				struct _Function_3_1{
					inline static Dynamic Block( Float &tmp22,Float &tmp20,Float &tmp19,Float &tmp21,::phoenix::Color &tmp24,::phoenix::Rectangle &tmp25){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/NineSlice.hx",362,0xccc9c257)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp19,false);
							__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp20,false);
							__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp21,false);
							__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp22,false);
							__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp24,false);
							__result->Add(HX_HCSTRING("uv","\x61","\x66","\x00","\x00") , tmp25,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(362)
				Dynamic tmp26 = _Function_3_1::Block(tmp22,tmp20,tmp19,tmp21,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(362)
				int tmp27 = tmp18->quad_add(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(362)
				slice->__FieldRef(HX_HCSTRING("geometry_id","\x88","\xaa","\x54","\x45")) = tmp27;
			}
		}
		HX_STACK_LINE(375)
		::phoenix::geometry::QuadPackGeometry tmp15 = this->_geometry;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(375)
		::String tmp16 = tmp15->id;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(375)
		::String tmp17 = (HX_HCSTRING("NineSlice","\xa0","\x79","\x78","\x0d") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(375)
		::phoenix::geometry::QuadPackGeometry tmp18 = this->_geometry;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(375)
		tmp18->id = tmp17;
		HX_STACK_LINE(376)
		::phoenix::geometry::QuadPackGeometry tmp19 = this->_geometry;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(376)
		this->set_geometry(tmp19);
		HX_STACK_LINE(377)
		::phoenix::Vector tmp20 = _pos;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(377)
		this->set_pos(tmp20);
		HX_STACK_LINE(379)
		this->added = true;
		HX_STACK_LINE(380)
		this->is_set = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NineSlice_obj,_create,(void))

Void NineSlice_obj::create( ::phoenix::Vector _pos,Float _w,Float _h,Dynamic __o__reset){
Dynamic _reset = __o__reset.Default(false);
	HX_STACK_FRAME("luxe.NineSlice","create",0x8597abc2,"luxe.NineSlice.create","luxe/NineSlice.hx",384,0xccc9c257)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pos,"_pos")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_ARG(_h,"_h")
	HX_STACK_ARG(_reset,"_reset")
{
		HX_STACK_LINE(386)
		::phoenix::Texture tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		if ((tmp1)){
			HX_STACK_LINE(387)
			::phoenix::Vector tmp2 = _pos;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(387)
			Float tmp3 = _w;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(387)
			Float tmp4 = _h;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			Dynamic tmp5 = _reset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			this->_create(tmp2,tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(NineSlice_obj,create,(void))

Void NineSlice_obj::init( ){
{
		HX_STACK_FRAME("luxe.NineSlice","init",0x5026a256,"luxe.NineSlice.init","luxe/macros/EntityRules.hx",35,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::init();
	}
return null();
}


Void NineSlice_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.NineSlice","ondestroy",0x3fba38b5,"luxe.NineSlice.ondestroy","luxe/macros/EntityRules.hx",47,0xed942299)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::ondestroy();
	}
return null();
}



NineSlice_obj::NineSlice_obj()
{
}

void NineSlice_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NineSlice);
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(bottom,"bottom");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(source_x,"source_x");
	HX_MARK_MEMBER_NAME(source_y,"source_y");
	HX_MARK_MEMBER_NAME(source_w,"source_w");
	HX_MARK_MEMBER_NAME(source_h,"source_h");
	HX_MARK_MEMBER_NAME(is_set,"is_set");
	HX_MARK_MEMBER_NAME(midwidth,"midwidth");
	HX_MARK_MEMBER_NAME(midheight,"midheight");
	HX_MARK_MEMBER_NAME(slices,"slices");
	HX_MARK_MEMBER_NAME(added,"added");
	HX_MARK_MEMBER_NAME(nineslice_options,"nineslice_options");
	HX_MARK_MEMBER_NAME(_geometry,"_geometry");
	HX_MARK_MEMBER_NAME(_batcher,"_batcher");
	::luxe::Visual_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NineSlice_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(bottom,"bottom");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(source_x,"source_x");
	HX_VISIT_MEMBER_NAME(source_y,"source_y");
	HX_VISIT_MEMBER_NAME(source_w,"source_w");
	HX_VISIT_MEMBER_NAME(source_h,"source_h");
	HX_VISIT_MEMBER_NAME(is_set,"is_set");
	HX_VISIT_MEMBER_NAME(midwidth,"midwidth");
	HX_VISIT_MEMBER_NAME(midheight,"midheight");
	HX_VISIT_MEMBER_NAME(slices,"slices");
	HX_VISIT_MEMBER_NAME(added,"added");
	HX_VISIT_MEMBER_NAME(nineslice_options,"nineslice_options");
	HX_VISIT_MEMBER_NAME(_geometry,"_geometry");
	HX_VISIT_MEMBER_NAME(_batcher,"_batcher");
	::luxe::Visual_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NineSlice_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return top; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"added") ) { return added; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return bottom; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"is_set") ) { return is_set; }
		if (HX_FIELD_EQ(inName,"slices") ) { return slices; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_create") ) { return _create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"source_x") ) { return source_x; }
		if (HX_FIELD_EQ(inName,"source_y") ) { return source_y; }
		if (HX_FIELD_EQ(inName,"source_w") ) { return source_w; }
		if (HX_FIELD_EQ(inName,"source_h") ) { return source_h; }
		if (HX_FIELD_EQ(inName,"midwidth") ) { return midwidth; }
		if (HX_FIELD_EQ(inName,"_batcher") ) { return _batcher; }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"midheight") ) { return midheight; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { return _geometry; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"update_size") ) { return update_size_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nineslice_options") ) { return nineslice_options; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NineSlice_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"added") ) { added=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"is_set") ) { is_set=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slices") ) { slices=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"source_x") ) { source_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source_y") ) { source_y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source_w") ) { source_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source_h") ) { source_h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"midwidth") ) { midwidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_batcher") ) { _batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"midheight") ) { midheight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_geometry") ) { _geometry=inValue.Cast< ::phoenix::geometry::QuadPackGeometry >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nineslice_options") ) { nineslice_options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NineSlice_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void NineSlice_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66"));
	outFields->push(HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66"));
	outFields->push(HX_HCSTRING("source_w","\xd3","\x30","\xa4","\x66"));
	outFields->push(HX_HCSTRING("source_h","\xc4","\x30","\xa4","\x66"));
	outFields->push(HX_HCSTRING("is_set","\x8d","\x79","\xb0","\x71"));
	outFields->push(HX_HCSTRING("midwidth","\x7e","\x17","\xdb","\x2e"));
	outFields->push(HX_HCSTRING("midheight","\x6f","\xef","\x28","\x87"));
	outFields->push(HX_HCSTRING("slices","\xe1","\x03","\x04","\x70"));
	outFields->push(HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"));
	outFields->push(HX_HCSTRING("nineslice_options","\xbf","\x96","\x3b","\x67"));
	outFields->push(HX_HCSTRING("_geometry","\x11","\xfa","\x3e","\x1a"));
	outFields->push(HX_HCSTRING("_batcher","\x28","\x7c","\xc8","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(NineSlice_obj,top),HX_HCSTRING("top","\x95","\x66","\x58","\x00")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,bottom),HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,source_x),HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,source_y),HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,source_w),HX_HCSTRING("source_w","\xd3","\x30","\xa4","\x66")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,source_h),HX_HCSTRING("source_h","\xc4","\x30","\xa4","\x66")},
	{hx::fsBool,(int)offsetof(NineSlice_obj,is_set),HX_HCSTRING("is_set","\x8d","\x79","\xb0","\x71")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,midwidth),HX_HCSTRING("midwidth","\x7e","\x17","\xdb","\x2e")},
	{hx::fsFloat,(int)offsetof(NineSlice_obj,midheight),HX_HCSTRING("midheight","\x6f","\xef","\x28","\x87")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(NineSlice_obj,slices),HX_HCSTRING("slices","\xe1","\x03","\x04","\x70")},
	{hx::fsBool,(int)offsetof(NineSlice_obj,added),HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NineSlice_obj,nineslice_options),HX_HCSTRING("nineslice_options","\xbf","\x96","\x3b","\x67")},
	{hx::fsObject /*::phoenix::geometry::QuadPackGeometry*/ ,(int)offsetof(NineSlice_obj,_geometry),HX_HCSTRING("_geometry","\x11","\xfa","\x3e","\x1a")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(NineSlice_obj,_batcher),HX_HCSTRING("_batcher","\x28","\x7c","\xc8","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("top","\x95","\x66","\x58","\x00"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("source_x","\xd4","\x30","\xa4","\x66"),
	HX_HCSTRING("source_y","\xd5","\x30","\xa4","\x66"),
	HX_HCSTRING("source_w","\xd3","\x30","\xa4","\x66"),
	HX_HCSTRING("source_h","\xc4","\x30","\xa4","\x66"),
	HX_HCSTRING("is_set","\x8d","\x79","\xb0","\x71"),
	HX_HCSTRING("midwidth","\x7e","\x17","\xdb","\x2e"),
	HX_HCSTRING("midheight","\x6f","\xef","\x28","\x87"),
	HX_HCSTRING("slices","\xe1","\x03","\x04","\x70"),
	HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),
	HX_HCSTRING("nineslice_options","\xbf","\x96","\x3b","\x67"),
	HX_HCSTRING("_geometry","\x11","\xfa","\x3e","\x1a"),
	HX_HCSTRING("_batcher","\x28","\x7c","\xc8","\xf9"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("update_size","\xf7","\xb5","\xcf","\x51"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("_create","\x9b","\x78","\x86","\xea"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NineSlice_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NineSlice_obj::__mClass,"__mClass");
};

#endif

hx::Class NineSlice_obj::__mClass;

void NineSlice_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.NineSlice","\xe8","\x3e","\x6e","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &NineSlice_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NineSlice_obj >;
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
