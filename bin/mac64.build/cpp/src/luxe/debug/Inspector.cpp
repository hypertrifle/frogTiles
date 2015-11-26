#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
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
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
namespace luxe{
namespace debug{

Void Inspector_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.debug.Inspector","new",0x11b57a36,"luxe.debug.Inspector.new","luxe/debug/Inspector.hx",25,0x41b2cfbc)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(27)
	::luxe::Core tmp = ::Luxe_obj::core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1 = tmp->screen->get_w();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	Float tmp2 = (tmp1 * ((Float)0.2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	::luxe::Core tmp4 = ::Luxe_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	int tmp5 = tmp4->screen->get_h();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	Float tmp6 = (tmp5 * ((Float)0.6));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(27)
	::phoenix::Vector tmp8 = ::phoenix::Vector_obj::__new(tmp3,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	this->set_size(tmp8);
	HX_STACK_LINE(28)
	::luxe::Core tmp9 = ::Luxe_obj::core;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(28)
	int tmp10 = tmp9->screen->get_w();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(28)
	Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(28)
	::phoenix::Vector tmp12 = this->size;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(28)
	Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(28)
	Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(28)
	Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(28)
	::luxe::Core tmp16 = ::Luxe_obj::core;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(28)
	int tmp17 = tmp16->screen->get_h();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(28)
	Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(28)
	::phoenix::Vector tmp19 = this->size;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(28)
	Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(28)
	Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(28)
	Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(28)
	::phoenix::Vector tmp23 = ::phoenix::Vector_obj::__new(tmp15,tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(28)
	this->set_pos(tmp23);
	HX_STACK_LINE(31)
	::phoenix::Renderer tmp24 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(31)
	this->batcher = tmp24->batcher;
	HX_STACK_LINE(33)
	bool tmp25 = (_options != null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(33)
	if ((tmp25)){
		HX_STACK_LINE(35)
		bool tmp26 = (_options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(35)
		if ((tmp26)){
			HX_STACK_LINE(35)
			this->batcher = _options->__Field(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"), hx::paccDynamic );
		}
		HX_STACK_LINE(36)
		bool tmp27 = (_options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(36)
		if ((tmp27)){
			HX_STACK_LINE(36)
			::phoenix::Vector tmp28 = _options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(36)
			this->set_size(tmp28);
		}
		HX_STACK_LINE(37)
		bool tmp28 = (_options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(37)
		if ((tmp28)){
			HX_STACK_LINE(37)
			::phoenix::Vector tmp29 = _options->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(37)
			this->set_pos(tmp29);
		}
	}
}
;
	return null();
}

//Inspector_obj::~Inspector_obj() { }

Dynamic Inspector_obj::__CreateEmpty() { return  new Inspector_obj; }
hx::ObjectPtr< Inspector_obj > Inspector_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Inspector_obj > _result_ = new Inspector_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Inspector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Inspector_obj > _result_ = new Inspector_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Inspector_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","refresh",0xb2cb26b1,"luxe.debug.Inspector.refresh","luxe/debug/Inspector.hx",43,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::luxe::Sprite tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		if ((tmp1)){
			HX_STACK_LINE(46)
			this->create_window();
		}
		HX_STACK_LINE(49)
		Dynamic tmp2 = this->onrefresh_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		if ((tmp3)){
			HX_STACK_LINE(50)
			this->onrefresh();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,refresh,(void))

Void Inspector_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","show",0x7065c667,"luxe.debug.Inspector.show","luxe/debug/Inspector.hx",55,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->refresh();
		HX_STACK_LINE(57)
		::luxe::Sprite tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		tmp->set_visible(true);
		HX_STACK_LINE(58)
		::luxe::Text tmp1 = this->title;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		tmp1->set_visible(true);
		HX_STACK_LINE(59)
		::luxe::Text tmp2 = this->version;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		tmp2->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,show,(void))

Void Inspector_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","hide",0x6921262c,"luxe.debug.Inspector.hide","luxe/debug/Inspector.hx",62,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		::luxe::Sprite tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		tmp->set_visible(false);
		HX_STACK_LINE(64)
		::luxe::Text tmp1 = this->title;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		tmp1->set_visible(false);
		HX_STACK_LINE(65)
		::luxe::Text tmp2 = this->version;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		tmp2->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,hide,(void))

::phoenix::Vector Inspector_obj::set_size( ::phoenix::Vector _size){
	HX_STACK_FRAME("luxe.debug.Inspector","set_size",0xa9c4a428,"luxe.debug.Inspector.set_size","luxe/debug/Inspector.hx",68,0x41b2cfbc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_size,"_size")
	HX_STACK_LINE(70)
	bool tmp = (_size != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp)){
		HX_STACK_LINE(70)
		::luxe::Sprite tmp2 = this->window;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		::luxe::Sprite tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(70)
		tmp1 = false;
	}
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(71)
		::luxe::Sprite tmp2 = this->window;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		::phoenix::Vector tmp3 = _size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		tmp2->set_size(tmp3);
		HX_STACK_LINE(72)
		::luxe::Sprite tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		tmp4->geometry->set_dirty(true);
	}
	HX_STACK_LINE(75)
	::luxe::Text tmp2 = this->version;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	if ((tmp3)){
		HX_STACK_LINE(76)
		::luxe::Text tmp4 = this->version;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		::phoenix::Vector tmp5 = this->pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		Float tmp7 = (_size->x - (int)14);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		::phoenix::Vector tmp9 = this->pos;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		Float tmp11 = (tmp10 + (int)6);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(76)
		::phoenix::Vector tmp12 = ::phoenix::Vector_obj::__new(tmp8,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(76)
		tmp4->set_pos(tmp12);
	}
	HX_STACK_LINE(79)
	::phoenix::Vector tmp4 = this->size = _size;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Inspector_obj,set_size,return )

::phoenix::Vector Inspector_obj::set_pos( ::phoenix::Vector _pos){
	HX_STACK_FRAME("luxe.debug.Inspector","set_pos",0xdf76040d,"luxe.debug.Inspector.set_pos","luxe/debug/Inspector.hx",83,0x41b2cfbc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_pos,"_pos")
	HX_STACK_LINE(85)
	bool tmp = (_pos != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(85)
		::luxe::Sprite tmp2 = this->window;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::luxe::Sprite tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(85)
		tmp1 = false;
	}
	HX_STACK_LINE(85)
	if ((tmp1)){
		HX_STACK_LINE(86)
		::luxe::Sprite tmp2 = this->window;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		::phoenix::Vector tmp3 = _pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		tmp2->set_pos(tmp3);
		HX_STACK_LINE(87)
		::luxe::Sprite tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		tmp4->geometry->set_dirty(true);
	}
	HX_STACK_LINE(90)
	::luxe::Text tmp2 = this->title;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	if ((tmp3)){
		HX_STACK_LINE(91)
		::luxe::Text tmp4 = this->title;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		Float tmp5 = (_pos->x + (int)14);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		Float tmp6 = (_pos->y + (int)6);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		::phoenix::Vector tmp7 = ::phoenix::Vector_obj::__new(tmp5,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		tmp4->set_pos(tmp7);
	}
	HX_STACK_LINE(94)
	::luxe::Text tmp4 = this->version;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(94)
	if ((tmp5)){
		HX_STACK_LINE(95)
		::luxe::Text tmp6 = this->version;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		Float tmp7 = _pos->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		::phoenix::Vector tmp8 = this->size;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		Float tmp10 = (tmp9 - (int)14);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		Float tmp12 = (_pos->y + (int)6);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(95)
		::phoenix::Vector tmp13 = ::phoenix::Vector_obj::__new(tmp11,tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		tmp6->set_pos(tmp13);
	}
	HX_STACK_LINE(98)
	::phoenix::Vector tmp6 = this->pos = _pos;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(98)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Inspector_obj,set_pos,return )

Void Inspector_obj::create_window( ){
{
		HX_STACK_FRAME("luxe.debug.Inspector","create_window",0x5f51e769,"luxe.debug.Inspector.create_window","luxe/debug/Inspector.hx",102,0x41b2cfbc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::phoenix::Batcher tmp = this->batcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		::phoenix::Color tmp1 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		::phoenix::Color tmp2 = tmp1->rgb((int)1447449);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		::phoenix::Vector tmp3 = this->size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		::phoenix::Vector tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Batcher &tmp,::phoenix::Vector &tmp4,::phoenix::Color &tmp2,::phoenix::Vector &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/Inspector.hx",104,0x41b2cfbc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.window","\xab","\xd8","\x11","\x5a"),false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp,false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.1),false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp2,false);
					__result->Add(HX_HCSTRING("centered","\x74","\x5d","\x50","\x8f") , false,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , tmp3,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(104)
		Dynamic tmp5 = _Function_1_1::Block(tmp,tmp4,tmp2,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		::luxe::Sprite tmp6 = ::luxe::Sprite_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		this->window = tmp6;
		HX_STACK_LINE(118)
		::phoenix::Batcher tmp7 = this->batcher;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		::phoenix::Color tmp8 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		::phoenix::Color tmp9 = tmp8->rgb((int)16121979);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		::phoenix::Vector tmp10 = this->pos;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(123)
		Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(123)
		Float tmp12 = (tmp11 + (int)14);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(123)
		::phoenix::Vector tmp13 = this->pos;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(123)
		Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(123)
		Float tmp15 = (tmp14 + (int)6);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(123)
		::phoenix::Vector tmp16 = ::phoenix::Vector_obj::__new(tmp12,tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Color &tmp9,::phoenix::Batcher &tmp7,::phoenix::Vector &tmp16){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/Inspector.hx",116,0x41b2cfbc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.title","\x3d","\x01","\x84","\x48"),false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp7,false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.2),false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp9,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp16,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("Inspector","\xd7","\xd9","\xe1","\x99"),false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)15)),false);
					__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(116)
		Dynamic tmp17 = _Function_1_2::Block(tmp9,tmp7,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(116)
		Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Inspector.hx","\x47","\xe9","\x4b","\x06"),116,HX_HCSTRING("luxe.debug.Inspector","\x44","\xe7","\xba","\x56"),HX_HCSTRING("create_window","\x13","\x56","\xf5","\xdb"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(116)
		::luxe::Text tmp19 = ::luxe::Text_obj::__new(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(116)
		this->title = tmp19;
		HX_STACK_LINE(132)
		::phoenix::Batcher tmp20 = this->batcher;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(136)
		::phoenix::Color tmp21 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(136)
		::phoenix::Color tmp22 = tmp21->rgb((int)5526617);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(137)
		::phoenix::Vector tmp23 = this->pos;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(137)
		Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(137)
		::phoenix::Vector tmp25 = this->size;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(137)
		Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(137)
		Float tmp27 = (tmp26 - (int)14);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(137)
		Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(137)
		::phoenix::Vector tmp29 = this->pos;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(137)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(137)
		Float tmp31 = (tmp30 + (int)6);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(137)
		::phoenix::Vector tmp32 = ::phoenix::Vector_obj::__new(tmp28,tmp31,null(),null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(139)
		::String tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::luxe::Core tmp34 = ::Luxe_obj::core;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(139)
			::luxe::Core _this = tmp34;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			::String tmp35 = ::Luxe_obj::build;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(139)
			::String tmp36 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(139)
			::String tmp37 = (tmp36 + HX_HCSTRING(" / debug:","\x78","\xa2","\x67","\x75"));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(139)
			bool tmp38 = _this->app->debug;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(139)
			::String tmp39 = ::Std_obj::string(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(139)
			::String tmp40 = (tmp37 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(139)
			::String tmp41 = (tmp40 + HX_HCSTRING(" / os:","\x05","\x42","\xbc","\xf0"));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(139)
			::String tmp42 = _this->app->os;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(139)
			::String tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(139)
			::String tmp44 = (tmp43 + HX_HCSTRING(" / platform:","\xd6","\x0a","\x95","\x7c"));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(139)
			::String tmp45 = _this->app->platform;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(139)
			tmp33 = (tmp44 + tmp45);
		}
		HX_STACK_LINE(139)
		::String tmp34 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_1_3{
			inline static Dynamic Block( ::phoenix::Color &tmp22,::phoenix::Batcher &tmp20,::String &tmp34,::phoenix::Vector &tmp32){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/Inspector.hx",130,0x41b2cfbc)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.version","\xfd","\xc5","\x08","\x0a"),false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp20,false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.2),false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp22,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp32,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp34,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)13)),false);
					__result->Add(HX_HCSTRING("align","\xc5","\x56","\x91","\x21") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(130)
		Dynamic tmp35 = _Function_1_3::Block(tmp22,tmp20,tmp34,tmp32);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(130)
		Dynamic tmp36 = hx::SourceInfo(HX_HCSTRING("Inspector.hx","\x47","\xe9","\x4b","\x06"),130,HX_HCSTRING("luxe.debug.Inspector","\x44","\xe7","\xba","\x56"),HX_HCSTRING("create_window","\x13","\x56","\xf5","\xdb"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(130)
		::luxe::Text tmp37 = ::luxe::Text_obj::__new(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(130)
		this->version = tmp37;
		HX_STACK_LINE(144)
		::luxe::Sprite tmp38 = this->window;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(144)
		tmp38->set_locked(true);
		HX_STACK_LINE(145)
		::luxe::Sprite tmp39 = this->window;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(145)
		tmp39->geometry->id = HX_HCSTRING("debug.Inspector","\xfc","\xfb","\x99","\xc1");
		HX_STACK_LINE(146)
		::luxe::Text tmp40 = this->title;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(146)
		tmp40->geometry->id = HX_HCSTRING("debug.title.text","\x7e","\xdd","\x85","\xe1");
		HX_STACK_LINE(147)
		::luxe::Text tmp41 = this->version;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(147)
		tmp41->geometry->id = HX_HCSTRING("debug.version.text","\xbe","\xe0","\xbf","\xd8");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Inspector_obj,create_window,(void))


Inspector_obj::Inspector_obj()
{
}

void Inspector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Inspector);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(batcher,"batcher");
	HX_MARK_MEMBER_NAME(onrefresh,"onrefresh");
	HX_MARK_END_CLASS();
}

void Inspector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(batcher,"batcher");
	HX_VISIT_MEMBER_NAME(onrefresh,"onrefresh");
}

Dynamic Inspector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"batcher") ) { return batcher; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onrefresh") ) { return onrefresh; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"create_window") ) { return create_window_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Inspector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::luxe::Text >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::luxe::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batcher") ) { batcher=inValue.Cast< ::phoenix::Batcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onrefresh") ) { onrefresh=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Inspector_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Inspector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Inspector_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Inspector_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(Inspector_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(Inspector_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Inspector_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::phoenix::Batcher*/ ,(int)offsetof(Inspector_obj,batcher),HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Inspector_obj,onrefresh),HX_HCSTRING("onrefresh","\x9c","\x6a","\x7a","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0"),
	HX_HCSTRING("onrefresh","\x9c","\x6a","\x7a","\xf7"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("create_window","\x13","\x56","\xf5","\xdb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Inspector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Inspector_obj::__mClass,"__mClass");
};

#endif

hx::Class Inspector_obj::__mClass;

void Inspector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.Inspector","\x44","\xe7","\xba","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Inspector_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Inspector_obj >;
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
} // end namespace debug
