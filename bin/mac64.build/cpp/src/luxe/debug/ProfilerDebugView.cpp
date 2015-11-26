#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
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
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
#endif
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#include <luxe/debug/ProfilerDebugView.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerBar
#include <luxe/debug/_ProfilerDebugView/ProfilerBar.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerGraph
#include <luxe/debug/_ProfilerDebugView/ProfilerGraph.h>
#endif
#ifndef INCLUDED_luxe_debug__ProfilerDebugView_ProfilerValue
#include <luxe/debug/_ProfilerDebugView/ProfilerValue.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
namespace luxe{
namespace debug{

Void ProfilerDebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.ProfilerDebugView","new",0x4a00bf2e,"luxe.debug.ProfilerDebugView.new","luxe/debug/ProfilerDebugView.hx",13,0xef83e3c4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(150)
	this->_setup = false;
	HX_STACK_LINE(99)
	this->_byte_levels = Array_obj< ::String >::__new().Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")).Add(HX_HCSTRING("Kb","\xb7","\x41","\x00","\x00")).Add(HX_HCSTRING("MB","\x55","\x43","\x00","\x00")).Add(HX_HCSTRING("GB","\x1b","\x3e","\x00","\x00")).Add(HX_HCSTRING("TB","\x6e","\x49","\x00","\x00"));
	HX_STACK_LINE(98)
	this->minpeak = ((Float)1.0);
	HX_STACK_LINE(97)
	this->peak = ((Float)1.0);
	HX_STACK_LINE(96)
	this->nexttick = ((Float)0.0);
	HX_STACK_LINE(95)
	this->tickamount = ((Float)0.017);
	HX_STACK_LINE(38)
	this->margin = (int)32;
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(33)
	this->set_name(HX_HCSTRING("Profiler","\x49","\x77","\x88","\xc6"));
	HX_STACK_LINE(34)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		tmp = tmp2;
	}
	HX_STACK_LINE(34)
	::luxe::debug::ProfilerDebugView_obj::lists = tmp;
}
;
	return null();
}

//ProfilerDebugView_obj::~ProfilerDebugView_obj() { }

Dynamic ProfilerDebugView_obj::__CreateEmpty() { return  new ProfilerDebugView_obj; }
hx::ObjectPtr< ProfilerDebugView_obj > ProfilerDebugView_obj::__new()
{  hx::ObjectPtr< ProfilerDebugView_obj > _result_ = new ProfilerDebugView_obj();
	_result_->__construct();
	return _result_;}

Dynamic ProfilerDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProfilerDebugView_obj > _result_ = new ProfilerDebugView_obj();
	_result_->__construct();
	return _result_;}

Void ProfilerDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","create",0x5ed52cee,"luxe.debug.ProfilerDebugView.create","luxe/debug/ProfilerDebugView.hx",39,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		::luxe::Debug debug = tmp;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(46)
		::phoenix::Vector tmp1 = debug->inspector->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		int tmp3 = this->margin;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		::phoenix::Vector tmp6 = debug->inspector->pos;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		int tmp8 = this->margin;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		Float tmp9 = (tmp8 * ((Float)1.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(48)
		::phoenix::Vector tmp11 = debug->inspector->size;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(48)
		int tmp13 = this->margin;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(48)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(49)
		::phoenix::Vector tmp15 = debug->inspector->size;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(49)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(49)
		int tmp17 = this->margin;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(49)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(49)
		int tmp19 = this->margin;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(49)
		Float tmp20 = (tmp19 * ((Float)1.5));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(49)
		Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(45)
		::phoenix::Rectangle tmp22 = ::phoenix::Rectangle_obj::__new(tmp5,tmp10,tmp14,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(45)
		::phoenix::Rectangle viewrect = tmp22;		HX_STACK_VAR(viewrect,"viewrect");
		HX_STACK_LINE(52)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp23 = ::luxe::debug::_ProfilerDebugView::ProfilerGraph_obj::__new(HX_HCSTRING("usage","\x21","\x5d","\x2f","\xaa"),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(52)
		this->memgraph = tmp23;
		HX_STACK_LINE(53)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp24 = ::luxe::debug::_ProfilerDebugView::ProfilerGraph_obj::__new(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),false);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(53)
		this->memgraph2 = tmp24;
		HX_STACK_LINE(54)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp25 = ::luxe::debug::_ProfilerDebugView::ProfilerGraph_obj::__new(HX_HCSTRING("large","\xbb","\x33","\xbb","\x6f"),false);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(54)
		this->memgraph3 = tmp25;
		HX_STACK_LINE(55)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp26 = ::luxe::debug::_ProfilerDebugView::ProfilerGraph_obj::__new(HX_HCSTRING("reserved","\xa8","\xf6","\xa5","\x4e"),false);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(55)
		this->memgraph4 = tmp26;
		HX_STACK_LINE(57)
		int gh = (int)48;		HX_STACK_VAR(gh,"gh");
		HX_STACK_LINE(58)
		::phoenix::Vector tmp27 = ::phoenix::Vector_obj::__new(viewrect->x,viewrect->h,null(),null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(58)
		::phoenix::Vector gp = tmp27;		HX_STACK_VAR(gp,"gp");
		HX_STACK_LINE(59)
		Float gw = viewrect->w;		HX_STACK_VAR(gw,"gw");
		HX_STACK_LINE(61)
		::phoenix::Color tmp28 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(61)
		::phoenix::Color tmp29 = tmp28->rgb((int)16121979);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(61)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp30 = this->memgraph;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(61)
		tmp30->color = tmp29;
		HX_STACK_LINE(62)
		::phoenix::Color tmp31 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(62)
		::phoenix::Color tmp32 = tmp31->rgb((int)31734);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(62)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp33 = this->memgraph2;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(62)
		tmp33->color = tmp32;
		HX_STACK_LINE(63)
		::phoenix::Color tmp34 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,((Float)0.5));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(63)
		::phoenix::Color tmp35 = tmp34->rgb((int)16121882);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(63)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp36 = this->memgraph3;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(63)
		tmp36->color = tmp35;
		HX_STACK_LINE(64)
		::phoenix::Color tmp37 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,((Float)0.5));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(64)
		::phoenix::Color tmp38 = tmp37->rgb((int)63099);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(64)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp39 = this->memgraph4;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(64)
		tmp39->color = tmp38;
		HX_STACK_LINE(66)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp40 = this->memgraph4;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(66)
		int tmp41 = tmp40->history = (int)256;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(66)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp42 = this->memgraph3;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(66)
		int tmp43 = tmp42->history = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(66)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp44 = this->memgraph2;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(66)
		int tmp45 = tmp44->history = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(66)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp46 = this->memgraph;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(66)
		tmp46->history = tmp45;
		HX_STACK_LINE(67)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp47 = this->memgraph4;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(67)
		Float tmp48 = tmp47->height = gh;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(67)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp49 = this->memgraph3;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(67)
		Float tmp50 = tmp49->height = tmp48;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(67)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp51 = this->memgraph2;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(67)
		Float tmp52 = tmp51->height = tmp50;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(67)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp53 = this->memgraph;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(67)
		tmp53->height = tmp52;
		HX_STACK_LINE(68)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp54 = this->memgraph4;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(68)
		Float tmp55 = tmp54->width = gw;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(68)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp56 = this->memgraph3;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(68)
		Float tmp57 = tmp56->width = tmp55;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(68)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp58 = this->memgraph2;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(68)
		Float tmp59 = tmp58->width = tmp57;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(68)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp60 = this->memgraph;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(68)
		tmp60->width = tmp59;
		HX_STACK_LINE(70)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp61 = this->memgraph;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(70)
		tmp61->create();
		HX_STACK_LINE(71)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp62 = this->memgraph2;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(71)
		tmp62->create();
		HX_STACK_LINE(72)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp63 = this->memgraph3;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(72)
		tmp63->create();
		HX_STACK_LINE(73)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp64 = this->memgraph4;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(73)
		tmp64->create();
		HX_STACK_LINE(75)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp65 = this->memgraph;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(75)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp66 = this->memgraph2;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(75)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp67 = this->memgraph3;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(75)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp68 = this->memgraph4;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(75)
		::phoenix::Vector tmp69 = gp;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(75)
		::phoenix::Vector tmp70 = tmp68->set_pos(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(75)
		::phoenix::Vector tmp71 = tmp67->set_pos(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(75)
		::phoenix::Vector tmp72 = tmp66->set_pos(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(75)
		tmp65->set_pos(tmp72);
		HX_STACK_LINE(80)
		::phoenix::Vector tmp73;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::phoenix::Vector tmp74 = ::phoenix::Vector_obj::__new(gp->x,gp->y,gp->z,gp->w);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(80)
			::phoenix::Vector _this = tmp74;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(80)
			Float _z = (int)0;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				Float tmp75 = _this->x;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(80)
				Float _x = tmp75;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(80)
				Float tmp76 = _this->y;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(80)
				int tmp77 = gh;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(80)
				int tmp78 = -(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(80)
				Float tmp79 = (tmp76 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(80)
				Float _y = tmp79;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(80)
				Float tmp80 = (_this->z + _z);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(80)
				Float _z1 = tmp80;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(80)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(80)
				_this->ignore_listeners = true;
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					_this->x = _x;
					HX_STACK_LINE(80)
					bool tmp81 = _this->_construct;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(80)
					if ((tmp81)){
						HX_STACK_LINE(80)
						_this->x;
					}
					else{
						HX_STACK_LINE(80)
						bool tmp82 = (_this->listen_x != null());		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(80)
						bool tmp83;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(80)
						if ((tmp82)){
							HX_STACK_LINE(80)
							bool tmp84 = _this->ignore_listeners;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(80)
							bool tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(80)
							tmp83 = !(tmp85);
						}
						else{
							HX_STACK_LINE(80)
							tmp83 = false;
						}
						HX_STACK_LINE(80)
						if ((tmp83)){
							HX_STACK_LINE(80)
							Float tmp84 = _x;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(80)
							_this->listen_x(tmp84);
						}
						HX_STACK_LINE(80)
						_this->x;
					}
				}
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					_this->y = _y;
					HX_STACK_LINE(80)
					bool tmp81 = _this->_construct;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(80)
					if ((tmp81)){
						HX_STACK_LINE(80)
						_this->y;
					}
					else{
						HX_STACK_LINE(80)
						bool tmp82 = (_this->listen_y != null());		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(80)
						bool tmp83;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(80)
						if ((tmp82)){
							HX_STACK_LINE(80)
							bool tmp84 = _this->ignore_listeners;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(80)
							bool tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(80)
							tmp83 = !(tmp85);
						}
						else{
							HX_STACK_LINE(80)
							tmp83 = false;
						}
						HX_STACK_LINE(80)
						if ((tmp83)){
							HX_STACK_LINE(80)
							Float tmp84 = _y;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(80)
							_this->listen_y(tmp84);
						}
						HX_STACK_LINE(80)
						_this->y;
					}
				}
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					_this->z = _z1;
					HX_STACK_LINE(80)
					bool tmp81 = _this->_construct;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(80)
					if ((tmp81)){
						HX_STACK_LINE(80)
						_this->z;
					}
					else{
						HX_STACK_LINE(80)
						bool tmp82 = (_this->listen_z != null());		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(80)
						bool tmp83;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(80)
						if ((tmp82)){
							HX_STACK_LINE(80)
							bool tmp84 = _this->ignore_listeners;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(80)
							bool tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(80)
							tmp83 = !(tmp85);
						}
						else{
							HX_STACK_LINE(80)
							tmp83 = false;
						}
						HX_STACK_LINE(80)
						if ((tmp83)){
							HX_STACK_LINE(80)
							Float tmp84 = _z1;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(80)
							_this->listen_z(tmp84);
						}
						HX_STACK_LINE(80)
						_this->z;
					}
				}
				HX_STACK_LINE(80)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(80)
				bool tmp81 = (_this->listen_x != null());		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(80)
				bool tmp82;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(80)
				if ((tmp81)){
					HX_STACK_LINE(80)
					bool tmp83 = _this->ignore_listeners;		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(80)
					bool tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(80)
					tmp82 = !(tmp84);
				}
				else{
					HX_STACK_LINE(80)
					tmp82 = false;
				}
				HX_STACK_LINE(80)
				if ((tmp82)){
					HX_STACK_LINE(80)
					Float tmp83 = _this->x;		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(80)
					_this->listen_x(tmp83);
				}
				HX_STACK_LINE(80)
				bool tmp83 = (_this->listen_y != null());		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(80)
				bool tmp84;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(80)
				if ((tmp83)){
					HX_STACK_LINE(80)
					bool tmp85 = _this->ignore_listeners;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(80)
					bool tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(80)
					tmp84 = !(tmp86);
				}
				else{
					HX_STACK_LINE(80)
					tmp84 = false;
				}
				HX_STACK_LINE(80)
				if ((tmp84)){
					HX_STACK_LINE(80)
					Float tmp85 = _this->y;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(80)
					_this->listen_y(tmp85);
				}
				HX_STACK_LINE(80)
				bool tmp85 = (_this->listen_z != null());		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(80)
				bool tmp86;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(80)
				if ((tmp85)){
					HX_STACK_LINE(80)
					bool tmp87 = _this->ignore_listeners;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(80)
					bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(80)
					tmp86 = !(tmp88);
				}
				else{
					HX_STACK_LINE(80)
					tmp86 = false;
				}
				HX_STACK_LINE(80)
				if ((tmp86)){
					HX_STACK_LINE(80)
					Float tmp87 = _this->z;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(80)
					_this->listen_z(tmp87);
				}
				HX_STACK_LINE(80)
				_this;
			}
			HX_STACK_LINE(80)
			tmp73 = _this;
		}
		HX_STACK_LINE(81)
		::phoenix::Color tmp74 = ::luxe::debug::ProfilerDebugView_obj::color_normal;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(81)
		::phoenix::Color tmp75 = tmp74->clone();		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(85)
		::luxe::Debug tmp76 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(85)
		::phoenix::Batcher tmp77 = tmp76->batcher;		HX_STACK_VAR(tmp77,"tmp77");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Vector &tmp73,::phoenix::Color &tmp75,::phoenix::Batcher &tmp77){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",77,0xef83e3c4)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("profiler.memgraph","\xfe","\xca","\x8a","\xd2"),false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp73,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp75,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , ((Dynamic)((int)12)),false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , HX_HCSTRING("1 mb","\xe4","\x1b","\x7c","\x20"),false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp77,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(77)
		Dynamic tmp78 = _Function_1_1::Block(tmp73,tmp75,tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(77)
		Dynamic tmp79 = hx::SourceInfo(HX_HCSTRING("ProfilerDebugView.hx","\x4f","\x00","\x72","\x91"),77,HX_HCSTRING("luxe.debug.ProfilerDebugView","\x3c","\x50","\xd2","\x3f"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(77)
		::luxe::Text tmp80 = ::luxe::Text_obj::__new(tmp78,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(77)
		this->memtext = tmp80;
		HX_STACK_LINE(89)
		::luxe::Text tmp81 = this->memtext;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(89)
		tmp81->color->a = ((Float)0.4);
	}
return null();
}


Void ProfilerDebugView_obj::update_graph( ::luxe::debug::_ProfilerDebugView::ProfilerGraph graph,Float val){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","update_graph",0x793250ca,"luxe.debug.ProfilerDebugView.update_graph","luxe/debug/ProfilerDebugView.hx",101,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graph,"graph")
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(103)
		Float tmp = val;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		Float tmp1 = ::Math_obj::log(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		Float tmp2 = ::Math_obj::log((int)1024);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		int _byte_index = tmp4;		HX_STACK_VAR(_byte_index,"_byte_index");
		HX_STACK_LINE(104)
		Float tmp5 = val;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		int tmp6 = _byte_index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		Float tmp7 = ::Math_obj::pow((int)1024,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		Float _byte_value = tmp8;		HX_STACK_VAR(_byte_value,"_byte_value");
		HX_STACK_LINE(106)
		Float tmp9 = _byte_value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		Float tmp10 = this->peak;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(106)
		if ((tmp11)){
			HX_STACK_LINE(107)
			Float tmp12 = _byte_value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(107)
			Float tmp13 = (_byte_value * ((Float)0.1));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(107)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(107)
			int tmp15 = ::Math_obj::ceil(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(107)
			this->peak = tmp15;
		}
		HX_STACK_LINE(110)
		Float tmp12 = _byte_value;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(110)
		Float tmp13 = this->minpeak;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(110)
		bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(110)
		if ((tmp14)){
			HX_STACK_LINE(111)
			Float tmp15 = _byte_value;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(111)
			Float tmp16 = (_byte_value * ((Float)0.1));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(111)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(111)
			int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(111)
			this->minpeak = tmp18;
		}
		HX_STACK_LINE(114)
		Float tmp15 = graph->max;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(114)
		Float tmp16 = this->peak;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(114)
		bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(114)
		if ((tmp17)){
			HX_STACK_LINE(115)
			Float tmp18 = this->peak;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(115)
			graph->set_max(tmp18);
		}
		HX_STACK_LINE(118)
		Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			Float tmp19 = ::Math_obj::pow((int)10,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(118)
			Float n = tmp19;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(118)
			Float tmp20 = (_byte_value * n);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(118)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(118)
			Float tmp22 = n;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(118)
			tmp18 = (Float(tmp21) / Float(tmp22));
		}
		HX_STACK_LINE(118)
		graph->set_ping(tmp18);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ProfilerDebugView_obj,update_graph,(void))

Void ProfilerDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","process",0x7b92103d,"luxe.debug.ProfilerDebugView.process","luxe/debug/ProfilerDebugView.hx",122,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		int tmp = ::cpp::vm::Gc_obj::memInfo((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		int u = tmp;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(127)
		int tmp1 = ::cpp::vm::Gc_obj::memInfo((int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		int c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(128)
		int tmp2 = ::cpp::vm::Gc_obj::memInfo((int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(129)
		int tmp3 = ::cpp::vm::Gc_obj::memInfo((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		int r = tmp3;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(131)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp4 = this->memgraph;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		int tmp5 = u;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		this->update_graph(tmp4,tmp5);
		HX_STACK_LINE(132)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp6 = this->memgraph2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(132)
		this->update_graph(tmp6,tmp7);
		HX_STACK_LINE(133)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp8 = this->memgraph3;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		int tmp9 = l;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(133)
		this->update_graph(tmp8,tmp9);
		HX_STACK_LINE(134)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp10 = this->memgraph4;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(134)
		int tmp11 = r;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		this->update_graph(tmp10,tmp11);
		HX_STACK_LINE(136)
		int tmp12 = u;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(136)
		Float tmp13 = ::Math_obj::log(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(136)
		Float tmp14 = ::Math_obj::log((int)1024);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(136)
		Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(136)
		int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(136)
		int _index = tmp16;		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(137)
		::String tmp17 = this->_byte_levels->__get(_index);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(137)
		::String s = tmp17;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(139)
		::luxe::Text tmp18 = this->memtext;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(140)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp19 = this->memgraph;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(140)
		Float tmp20 = tmp19->max;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(140)
		::String tmp21 = (HX_HCSTRING("(y axis) ","\xa7","\x9b","\xb1","\x57") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(140)
		::String tmp22 = (tmp21 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(140)
		::String tmp23 = s;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(140)
		::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(140)
		::String tmp25 = (tmp24 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(141)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp26 = this->memgraph;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(141)
		Float tmp27 = tmp26->ping;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(141)
		::String tmp28 = (HX_HCSTRING("usage/pink: ","\x0a","\xf5","\x29","\x65") + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(141)
		::String tmp29 = (tmp28 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(141)
		::String tmp30 = s;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(141)
		::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(141)
		::String tmp32 = (tmp31 + HX_HCSTRING("  |  ","\x7c","\x97","\x57","\x82"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(140)
		::String tmp33 = (tmp25 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(142)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp34 = this->memgraph2;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(142)
		Float tmp35 = tmp34->ping;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(142)
		::String tmp36 = (HX_HCSTRING("current/blue: ","\x16","\xea","\x96","\x8e") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(142)
		::String tmp37 = (tmp36 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(142)
		::String tmp38 = s;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(142)
		::String tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(142)
		::String tmp40 = (tmp39 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(140)
		::String tmp41 = (tmp33 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(143)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp42 = this->memgraph3;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(143)
		Float tmp43 = tmp42->ping;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(143)
		::String tmp44 = (HX_HCSTRING("large/red: ","\xa3","\xe9","\x53","\x46") + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(143)
		::String tmp45 = (tmp44 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(143)
		::String tmp46 = s;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(143)
		::String tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(143)
		::String tmp48 = (tmp47 + HX_HCSTRING("  |  ","\x7c","\x97","\x57","\x82"));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(140)
		::String tmp49 = (tmp41 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(144)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp50 = this->memgraph4;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(144)
		Float tmp51 = tmp50->ping;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(144)
		::String tmp52 = (HX_HCSTRING("reserved/green: ","\x82","\x8a","\x9c","\x9f") + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(144)
		::String tmp53 = (tmp52 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(144)
		::String tmp54 = s;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(144)
		::String tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(144)
		::String tmp56 = (tmp55 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(140)
		::String tmp57 = (tmp49 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(139)
		tmp18->set_text(tmp57);
	}
return null();
}


Void ProfilerDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","show",0x79f6da6f,"luxe.debug.ProfilerDebugView.show","luxe/debug/ProfilerDebugView.hx",206,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		::haxe::ds::StringMap tmp = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		for(::cpp::FastIterator_obj< ::luxe::debug::_ProfilerDebugView::ProfilerValue > *__it = ::cpp::CreateFastIterator< ::luxe::debug::_ProfilerDebugView::ProfilerValue >(tmp1);  __it->hasNext(); ){
			::luxe::debug::_ProfilerDebugView::ProfilerValue _item = __it->next();
			{
				HX_STACK_LINE(209)
				bool tmp2 = _item->hidden;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(209)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(209)
				if ((tmp3)){
					HX_STACK_LINE(210)
					_item->bar->show();
				}
			}
;
		}
		HX_STACK_LINE(215)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp2 = this->memgraph;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		tmp2->show();
		HX_STACK_LINE(216)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp3 = this->memgraph2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		tmp3->show();
		HX_STACK_LINE(217)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp4 = this->memgraph3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		tmp4->show();
		HX_STACK_LINE(218)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp5 = this->memgraph4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(218)
		tmp5->show();
		HX_STACK_LINE(219)
		::luxe::Text tmp6 = this->memtext;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(219)
		tmp6->set_visible(true);
		HX_STACK_LINE(222)
		bool tmp7 = this->_setup;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		if ((tmp8)){
			HX_STACK_LINE(227)
			this->_setup = true;
		}
	}
return null();
}


Void ProfilerDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","hide",0x72b23a34,"luxe.debug.ProfilerDebugView.hide","luxe/debug/ProfilerDebugView.hx",232,0xef83e3c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		::haxe::ds::StringMap tmp = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		for(::cpp::FastIterator_obj< ::luxe::debug::_ProfilerDebugView::ProfilerValue > *__it = ::cpp::CreateFastIterator< ::luxe::debug::_ProfilerDebugView::ProfilerValue >(tmp1);  __it->hasNext(); ){
			::luxe::debug::_ProfilerDebugView::ProfilerValue _item = __it->next();
			_item->bar->hide();
		}
		HX_STACK_LINE(239)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp2 = this->memgraph;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		tmp2->hide();
		HX_STACK_LINE(240)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp3 = this->memgraph2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		tmp3->hide();
		HX_STACK_LINE(241)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp4 = this->memgraph3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(241)
		tmp4->hide();
		HX_STACK_LINE(242)
		::luxe::debug::_ProfilerDebugView::ProfilerGraph tmp5 = this->memgraph4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		tmp5->hide();
		HX_STACK_LINE(243)
		::luxe::Text tmp6 = this->memtext;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(243)
		tmp6->set_visible(false);
	}
return null();
}


::haxe::ds::StringMap ProfilerDebugView_obj::lists;

::phoenix::Color ProfilerDebugView_obj::color_red;

::phoenix::Color ProfilerDebugView_obj::color_green;

::phoenix::Color ProfilerDebugView_obj::color_normal;

Void ProfilerDebugView_obj::add_offset( ::String _id,::String _offset){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","add_offset",0xd9745423,"luxe.debug.ProfilerDebugView.add_offset","luxe/debug/ProfilerDebugView.hx",152,0xef83e3c4)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_offset,"_offset")
		HX_STACK_LINE(153)
		::haxe::ds::StringMap tmp = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		::luxe::debug::_ProfilerDebugView::ProfilerValue tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = tmp2;		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(154)
		::haxe::ds::StringMap tmp3 = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		::String tmp4 = _offset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		::luxe::debug::_ProfilerDebugView::ProfilerValue tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _offsetitem = tmp5;		HX_STACK_VAR(_offsetitem,"_offsetitem");
		HX_STACK_LINE(155)
		bool tmp6 = (_item != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		if ((tmp6)){
			HX_STACK_LINE(155)
			tmp7 = (_offsetitem != null());
		}
		else{
			HX_STACK_LINE(155)
			tmp7 = false;
		}
		HX_STACK_LINE(155)
		if ((tmp7)){
			HX_STACK_LINE(156)
			::luxe::debug::_ProfilerDebugView::ProfilerValue tmp8 = _offsetitem;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			_item->offsets->push(tmp8);
		}
		else{
			HX_STACK_LINE(158)
			::String tmp8 = (HX_HCSTRING("not found for ","\x82","\xd1","\x5d","\x8e") + _id);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			::String tmp9 = (tmp8 + HX_HCSTRING(" or ","\x7d","\x71","\x7b","\x15"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(158)
			::String tmp10 = _offset;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(158)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("ProfilerDebugView.hx","\x4f","\x00","\x72","\x91"),158,HX_HCSTRING("luxe.debug.ProfilerDebugView","\x3c","\x50","\xd2","\x3f"),HX_HCSTRING("add_offset","\x31","\xad","\xef","\x68"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(158)
			::haxe::Log_obj::trace(tmp11,tmp12);
			HX_STACK_LINE(159)
			::luxe::debug::_ProfilerDebugView::ProfilerValue tmp13 = _item;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(159)
			::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(159)
			::String tmp15 = (tmp14 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(159)
			::luxe::debug::_ProfilerDebugView::ProfilerValue tmp16 = _offsetitem;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(159)
			::String tmp17 = ::Std_obj::string(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(159)
			::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(159)
			Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("ProfilerDebugView.hx","\x4f","\x00","\x72","\x91"),159,HX_HCSTRING("luxe.debug.ProfilerDebugView","\x3c","\x50","\xd2","\x3f"),HX_HCSTRING("add_offset","\x31","\xad","\xef","\x68"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(159)
			::haxe::Log_obj::trace(tmp18,tmp19);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ProfilerDebugView_obj,add_offset,(void))

Void ProfilerDebugView_obj::hide_item( ::String _id){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","hide_item",0xfe5b2a3e,"luxe.debug.ProfilerDebugView.hide_item","luxe/debug/ProfilerDebugView.hx",163,0xef83e3c4)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_LINE(164)
		::haxe::ds::StringMap tmp = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		::luxe::debug::_ProfilerDebugView::ProfilerValue tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = tmp2;		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(165)
		bool tmp3 = (_item != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		if ((tmp3)){
			HX_STACK_LINE(166)
			_item->hidden = true;
			HX_STACK_LINE(167)
			_item->bar->hide();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProfilerDebugView_obj,hide_item,(void))

Void ProfilerDebugView_obj::show_item( ::String _id){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","show_item",0xd160d423,"luxe.debug.ProfilerDebugView.show_item","luxe/debug/ProfilerDebugView.hx",171,0xef83e3c4)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_LINE(172)
		::haxe::ds::StringMap tmp = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		::luxe::debug::_ProfilerDebugView::ProfilerValue tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = tmp2;		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(173)
		bool tmp3 = (_item != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		if ((tmp3)){
			HX_STACK_LINE(174)
			_item->hidden = false;
			HX_STACK_LINE(175)
			_item->bar->show();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProfilerDebugView_obj,show_item,(void))

Void ProfilerDebugView_obj::start( ::String _id,Dynamic _max){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","start",0x45ec32b0,"luxe.debug.ProfilerDebugView.start","luxe/debug/ProfilerDebugView.hx",179,0xef83e3c4)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_ARG(_max,"_max")
		HX_STACK_LINE(181)
		::haxe::ds::StringMap tmp = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		::luxe::debug::_ProfilerDebugView::ProfilerValue tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = tmp2;		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(183)
		bool tmp3 = (_item == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		if ((tmp3)){
			HX_STACK_LINE(185)
			::String tmp4 = _id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			Dynamic tmp6 = _max;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(185)
			::phoenix::Color tmp7 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(185)
			::phoenix::Color tmp8 = tmp7->rgb((int)16121979);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(185)
			::luxe::debug::_ProfilerDebugView::ProfilerBar tmp9 = ::luxe::debug::_ProfilerDebugView::ProfilerBar_obj::__new(tmp5,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(185)
			::luxe::debug::_ProfilerDebugView::ProfilerValue tmp10 = ::luxe::debug::_ProfilerDebugView::ProfilerValue_obj::__new(tmp4,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(185)
			_item = tmp10;
			HX_STACK_LINE(186)
			::luxe::Debug tmp11 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(186)
			Float tmp12 = tmp11->padding->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(186)
			Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(186)
			::luxe::Debug tmp14 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(186)
			Float tmp15 = tmp14->padding->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(186)
			Float tmp16 = (tmp15 * (int)3);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(186)
			::haxe::ds::StringMap tmp17 = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(186)
			Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(186)
			int tmp19 = ::Lambda_obj::count(tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(186)
			int tmp20 = (tmp19 * (int)20);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(186)
			Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(186)
			::phoenix::Vector tmp22 = ::phoenix::Vector_obj::__new(tmp13,tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(186)
			_item->bar->set_pos(tmp22);
			HX_STACK_LINE(187)
			::haxe::ds::StringMap tmp23 = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(187)
			::String tmp24 = _id;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(187)
			::luxe::debug::_ProfilerDebugView::ProfilerValue tmp25 = _item;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(187)
			tmp23->set(tmp24,tmp25);
		}
		HX_STACK_LINE(190)
		::snow::core::native::Core tmp4 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		Float tmp5 = tmp4->timestamp();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		_item->start = tmp5;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ProfilerDebugView_obj,start,(void))

Void ProfilerDebugView_obj::end( ::String _id){
{
		HX_STACK_FRAME("luxe.debug.ProfilerDebugView","end",0x49f9f2a9,"luxe.debug.ProfilerDebugView.end","luxe/debug/ProfilerDebugView.hx",194,0xef83e3c4)
		HX_STACK_ARG(_id,"_id")
		HX_STACK_LINE(196)
		::haxe::ds::StringMap tmp = ::luxe::debug::ProfilerDebugView_obj::lists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		::luxe::debug::_ProfilerDebugView::ProfilerValue tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		::luxe::debug::_ProfilerDebugView::ProfilerValue _item = tmp2;		HX_STACK_VAR(_item,"_item");
		HX_STACK_LINE(198)
		bool tmp3 = (_item != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		if ((tmp3)){
			HX_STACK_LINE(199)
			_item->set();
		}
		else{
			HX_STACK_LINE(201)
			::String tmp4 = (HX_HCSTRING("Debug / profile end called for ","\xa0","\x65","\xef","\xfa") + _id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			::String tmp5 = (tmp4 + HX_HCSTRING(" but no start called","\xbb","\x30","\x0a","\x13"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			HX_STACK_DO_THROW(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProfilerDebugView_obj,end,(void))


ProfilerDebugView_obj::ProfilerDebugView_obj()
{
}

void ProfilerDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProfilerDebugView);
	HX_MARK_MEMBER_NAME(memgraph,"memgraph");
	HX_MARK_MEMBER_NAME(memgraph2,"memgraph2");
	HX_MARK_MEMBER_NAME(memgraph3,"memgraph3");
	HX_MARK_MEMBER_NAME(memgraph4,"memgraph4");
	HX_MARK_MEMBER_NAME(memtext,"memtext");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(tickamount,"tickamount");
	HX_MARK_MEMBER_NAME(nexttick,"nexttick");
	HX_MARK_MEMBER_NAME(peak,"peak");
	HX_MARK_MEMBER_NAME(minpeak,"minpeak");
	HX_MARK_MEMBER_NAME(_byte_levels,"_byte_levels");
	HX_MARK_MEMBER_NAME(_setup,"_setup");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProfilerDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(memgraph,"memgraph");
	HX_VISIT_MEMBER_NAME(memgraph2,"memgraph2");
	HX_VISIT_MEMBER_NAME(memgraph3,"memgraph3");
	HX_VISIT_MEMBER_NAME(memgraph4,"memgraph4");
	HX_VISIT_MEMBER_NAME(memtext,"memtext");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(tickamount,"tickamount");
	HX_VISIT_MEMBER_NAME(nexttick,"nexttick");
	HX_VISIT_MEMBER_NAME(peak,"peak");
	HX_VISIT_MEMBER_NAME(minpeak,"minpeak");
	HX_VISIT_MEMBER_NAME(_byte_levels,"_byte_levels");
	HX_VISIT_MEMBER_NAME(_setup,"_setup");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ProfilerDebugView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"peak") ) { return peak; }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_setup") ) { return _setup; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memtext") ) { return memtext; }
		if (HX_FIELD_EQ(inName,"minpeak") ) { return minpeak; }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"memgraph") ) { return memgraph; }
		if (HX_FIELD_EQ(inName,"nexttick") ) { return nexttick; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"memgraph2") ) { return memgraph2; }
		if (HX_FIELD_EQ(inName,"memgraph3") ) { return memgraph3; }
		if (HX_FIELD_EQ(inName,"memgraph4") ) { return memgraph4; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tickamount") ) { return tickamount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_byte_levels") ) { return _byte_levels; }
		if (HX_FIELD_EQ(inName,"update_graph") ) { return update_graph_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ProfilerDebugView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { outValue = end_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lists") ) { outValue = lists; return true;  }
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"color_red") ) { outValue = color_red; return true;  }
		if (HX_FIELD_EQ(inName,"hide_item") ) { outValue = hide_item_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"show_item") ) { outValue = show_item_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"add_offset") ) { outValue = add_offset_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_green") ) { outValue = color_green; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"color_normal") ) { outValue = color_normal; return true;  }
	}
	return false;
}

Dynamic ProfilerDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"peak") ) { peak=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setup") ) { _setup=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memtext") ) { memtext=inValue.Cast< ::luxe::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minpeak") ) { minpeak=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"memgraph") ) { memgraph=inValue.Cast< ::luxe::debug::_ProfilerDebugView::ProfilerGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nexttick") ) { nexttick=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"memgraph2") ) { memgraph2=inValue.Cast< ::luxe::debug::_ProfilerDebugView::ProfilerGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memgraph3") ) { memgraph3=inValue.Cast< ::luxe::debug::_ProfilerDebugView::ProfilerGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memgraph4") ) { memgraph4=inValue.Cast< ::luxe::debug::_ProfilerDebugView::ProfilerGraph >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tickamount") ) { tickamount=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_byte_levels") ) { _byte_levels=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProfilerDebugView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lists") ) { lists=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"color_red") ) { color_red=ioValue.Cast< ::phoenix::Color >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"color_green") ) { color_green=ioValue.Cast< ::phoenix::Color >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"color_normal") ) { color_normal=ioValue.Cast< ::phoenix::Color >(); return true; }
	}
	return false;
}

void ProfilerDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("memgraph","\x19","\xd5","\x42","\xf1"));
	outFields->push(HX_HCSTRING("memgraph2","\xf9","\xa0","\x37","\x29"));
	outFields->push(HX_HCSTRING("memgraph3","\xfa","\xa0","\x37","\x29"));
	outFields->push(HX_HCSTRING("memgraph4","\xfb","\xa0","\x37","\x29"));
	outFields->push(HX_HCSTRING("memtext","\x42","\x09","\x56","\x26"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("tickamount","\xf5","\x38","\xc0","\xfb"));
	outFields->push(HX_HCSTRING("nexttick","\xd0","\x3d","\xf0","\x0d"));
	outFields->push(HX_HCSTRING("peak","\x1f","\xde","\x54","\x4a"));
	outFields->push(HX_HCSTRING("minpeak","\xb1","\x20","\x85","\x50"));
	outFields->push(HX_HCSTRING("_byte_levels","\x07","\xd0","\x72","\xd7"));
	outFields->push(HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::debug::_ProfilerDebugView::ProfilerGraph*/ ,(int)offsetof(ProfilerDebugView_obj,memgraph),HX_HCSTRING("memgraph","\x19","\xd5","\x42","\xf1")},
	{hx::fsObject /*::luxe::debug::_ProfilerDebugView::ProfilerGraph*/ ,(int)offsetof(ProfilerDebugView_obj,memgraph2),HX_HCSTRING("memgraph2","\xf9","\xa0","\x37","\x29")},
	{hx::fsObject /*::luxe::debug::_ProfilerDebugView::ProfilerGraph*/ ,(int)offsetof(ProfilerDebugView_obj,memgraph3),HX_HCSTRING("memgraph3","\xfa","\xa0","\x37","\x29")},
	{hx::fsObject /*::luxe::debug::_ProfilerDebugView::ProfilerGraph*/ ,(int)offsetof(ProfilerDebugView_obj,memgraph4),HX_HCSTRING("memgraph4","\xfb","\xa0","\x37","\x29")},
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(ProfilerDebugView_obj,memtext),HX_HCSTRING("memtext","\x42","\x09","\x56","\x26")},
	{hx::fsInt,(int)offsetof(ProfilerDebugView_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsFloat,(int)offsetof(ProfilerDebugView_obj,tickamount),HX_HCSTRING("tickamount","\xf5","\x38","\xc0","\xfb")},
	{hx::fsFloat,(int)offsetof(ProfilerDebugView_obj,nexttick),HX_HCSTRING("nexttick","\xd0","\x3d","\xf0","\x0d")},
	{hx::fsFloat,(int)offsetof(ProfilerDebugView_obj,peak),HX_HCSTRING("peak","\x1f","\xde","\x54","\x4a")},
	{hx::fsFloat,(int)offsetof(ProfilerDebugView_obj,minpeak),HX_HCSTRING("minpeak","\xb1","\x20","\x85","\x50")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ProfilerDebugView_obj,_byte_levels),HX_HCSTRING("_byte_levels","\x07","\xd0","\x72","\xd7")},
	{hx::fsBool,(int)offsetof(ProfilerDebugView_obj,_setup),HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &ProfilerDebugView_obj::lists,HX_HCSTRING("lists","\x55","\xb6","\x05","\x75")},
	{hx::fsObject /*::phoenix::Color*/ ,(void *) &ProfilerDebugView_obj::color_red,HX_HCSTRING("color_red","\x35","\x7d","\xb6","\x2f")},
	{hx::fsObject /*::phoenix::Color*/ ,(void *) &ProfilerDebugView_obj::color_green,HX_HCSTRING("color_green","\xa7","\x73","\x68","\x1b")},
	{hx::fsObject /*::phoenix::Color*/ ,(void *) &ProfilerDebugView_obj::color_normal,HX_HCSTRING("color_normal","\xc3","\x54","\xe6","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("memgraph","\x19","\xd5","\x42","\xf1"),
	HX_HCSTRING("memgraph2","\xf9","\xa0","\x37","\x29"),
	HX_HCSTRING("memgraph3","\xfa","\xa0","\x37","\x29"),
	HX_HCSTRING("memgraph4","\xfb","\xa0","\x37","\x29"),
	HX_HCSTRING("memtext","\x42","\x09","\x56","\x26"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("tickamount","\xf5","\x38","\xc0","\xfb"),
	HX_HCSTRING("nexttick","\xd0","\x3d","\xf0","\x0d"),
	HX_HCSTRING("peak","\x1f","\xde","\x54","\x4a"),
	HX_HCSTRING("minpeak","\xb1","\x20","\x85","\x50"),
	HX_HCSTRING("_byte_levels","\x07","\xd0","\x72","\xd7"),
	HX_HCSTRING("update_graph","\x58","\x89","\x00","\x61"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProfilerDebugView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProfilerDebugView_obj::lists,"lists");
	HX_MARK_MEMBER_NAME(ProfilerDebugView_obj::color_red,"color_red");
	HX_MARK_MEMBER_NAME(ProfilerDebugView_obj::color_green,"color_green");
	HX_MARK_MEMBER_NAME(ProfilerDebugView_obj::color_normal,"color_normal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProfilerDebugView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProfilerDebugView_obj::lists,"lists");
	HX_VISIT_MEMBER_NAME(ProfilerDebugView_obj::color_red,"color_red");
	HX_VISIT_MEMBER_NAME(ProfilerDebugView_obj::color_green,"color_green");
	HX_VISIT_MEMBER_NAME(ProfilerDebugView_obj::color_normal,"color_normal");
};

#endif

hx::Class ProfilerDebugView_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lists","\x55","\xb6","\x05","\x75"),
	HX_HCSTRING("color_red","\x35","\x7d","\xb6","\x2f"),
	HX_HCSTRING("color_green","\xa7","\x73","\x68","\x1b"),
	HX_HCSTRING("color_normal","\xc3","\x54","\xe6","\xfa"),
	HX_HCSTRING("add_offset","\x31","\xad","\xef","\x68"),
	HX_HCSTRING("hide_item","\xf0","\x2c","\x02","\xc1"),
	HX_HCSTRING("show_item","\xd5","\xd6","\x07","\x94"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	::String(null()) };

void ProfilerDebugView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.ProfilerDebugView","\x3c","\x50","\xd2","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ProfilerDebugView_obj::__GetStatic;
	__mClass->mSetStaticField = &ProfilerDebugView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProfilerDebugView_obj >;
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

void ProfilerDebugView_obj::__boot()
{
struct _Function_0_1{
	inline static ::phoenix::Color Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",17,0xef83e3c4)
		{
			HX_STACK_LINE(17)
			::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(17)
			return tmp->rgb((int)13369344);
		}
		return null();
	}
};
	color_red= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::phoenix::Color Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",18,0xef83e3c4)
		{
			HX_STACK_LINE(18)
			::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(18)
			return tmp->rgb((int)2263108);
		}
		return null();
	}
};
	color_green= _Function_0_2::Block();
struct _Function_0_3{
	inline static ::phoenix::Color Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/ProfilerDebugView.hx",19,0xef83e3c4)
		{
			HX_STACK_LINE(19)
			::phoenix::Color tmp = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(19)
			return tmp->rgb((int)15790320);
		}
		return null();
	}
};
	color_normal= _Function_0_3::Block();
}

} // end namespace luxe
} // end namespace debug
