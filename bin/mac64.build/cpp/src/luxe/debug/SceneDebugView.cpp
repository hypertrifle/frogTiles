#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_Text
#include <luxe/Text.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
#ifndef INCLUDED_luxe_debug_Inspector
#include <luxe/debug/Inspector.h>
#endif
#ifndef INCLUDED_luxe_debug_SceneDebugView
#include <luxe/debug/SceneDebugView.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap
#include <luxe/structural/OrderedMap.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_snow_system_input_Keycodes
#include <snow/system/input/Keycodes.h>
#endif
namespace luxe{
namespace debug{

Void SceneDebugView_obj::__construct()
{
HX_STACK_FRAME("luxe.debug.SceneDebugView","new",0xe3b09b71,"luxe.debug.SceneDebugView.new","luxe/debug/SceneDebugView.hx",10,0xbfa62c1d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(79)
	this->hide_ids = true;
	HX_STACK_LINE(24)
	this->font_size = ((Float)15.0);
	HX_STACK_LINE(23)
	this->margin = (int)32;
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(18)
	this->set_name(HX_HCSTRING("Scenes","\xc7","\xbd","\x60","\x73"));
	HX_STACK_LINE(19)
	this->scenes = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//SceneDebugView_obj::~SceneDebugView_obj() { }

Dynamic SceneDebugView_obj::__CreateEmpty() { return  new SceneDebugView_obj; }
hx::ObjectPtr< SceneDebugView_obj > SceneDebugView_obj::__new()
{  hx::ObjectPtr< SceneDebugView_obj > _result_ = new SceneDebugView_obj();
	_result_->__construct();
	return _result_;}

Dynamic SceneDebugView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SceneDebugView_obj > _result_ = new SceneDebugView_obj();
	_result_->__construct();
	return _result_;}

Void SceneDebugView_obj::create( ){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","create",0x53c01c8b,"luxe.debug.SceneDebugView.create","luxe/debug/SceneDebugView.hx",25,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		::luxe::Debug debug = tmp;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(33)
		::phoenix::Color tmp1 = ::phoenix::Color_obj::__new((int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::phoenix::Color tmp2 = tmp1->rgb((int)16121979);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		::phoenix::Renderer tmp4 = ::Luxe_obj::renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		::phoenix::BitmapFont tmp5 = tmp4->font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			::String _result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_result,"_result");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(36)
				Array< ::Dynamic > _g1 = this->scenes;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(36)
				while((true)){
					HX_STACK_LINE(36)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(36)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(36)
					if ((tmp8)){
						HX_STACK_LINE(36)
						break;
					}
					HX_STACK_LINE(36)
					::luxe::Scene tmp9 = _g1->__get(_g).StaticCast< ::luxe::Scene >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(36)
					::luxe::Scene _scene = tmp9;		HX_STACK_VAR(_scene,"_scene");
					HX_STACK_LINE(36)
					++(_g);
					HX_STACK_LINE(36)
					bool tmp10 = this->hide_ids;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(36)
					::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(36)
					if ((tmp10)){
						HX_STACK_LINE(36)
						tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					else{
						HX_STACK_LINE(36)
						::String tmp12 = _scene->get_id();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(36)
						::String tmp13 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(36)
						tmp11 = (tmp13 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(36)
					::String _id = tmp11;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(36)
					hx::AddEq(_result,_id);
					HX_STACK_LINE(36)
					::String tmp12 = _scene->get_name();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(36)
					::String tmp13 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(36)
					::String tmp14 = (tmp13 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(36)
					hx::AddEq(_result,tmp14);
					HX_STACK_LINE(36)
					int tmp15 = _scene->get_length();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(36)
					::String tmp16 = (HX_HCSTRING("( ","\xf8","\x22","\x00","\x00") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(36)
					::String tmp17 = (tmp16 + HX_HCSTRING(" )\n","\xe1","\x6b","\x18","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(36)
					hx::AddEq(_result,tmp17);
					HX_STACK_LINE(36)
					Dynamic tmp18 = _scene->entities->iterator();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(36)
					for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp18);  __it->hasNext(); ){
						::luxe::Entity _entity = __it->next();
						{
							HX_STACK_LINE(36)
							::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(36)
							{
								HX_STACK_LINE(36)
								::String _list = _result;		HX_STACK_VAR(_list,"_list");
								HX_STACK_LINE(36)
								int _depth = (int)1;		HX_STACK_VAR(_depth,"_depth");
								HX_STACK_LINE(36)
								bool tmp20 = _entity->get_active();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(36)
								::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(36)
								if ((tmp20)){
									HX_STACK_LINE(36)
									tmp21 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
								}
								else{
									HX_STACK_LINE(36)
									tmp21 = HX_HCSTRING("/ inactive","\x7c","\x39","\x09","\x16");
								}
								HX_STACK_LINE(36)
								::String _active = tmp21;		HX_STACK_VAR(_active,"_active");
								HX_STACK_LINE(36)
								bool tmp22 = (_depth == (int)1);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(36)
								::String tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(36)
								if ((tmp22)){
									HX_STACK_LINE(36)
									::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
									HX_STACK_LINE(36)
									{
										HX_STACK_LINE(36)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(36)
										while((true)){
											HX_STACK_LINE(36)
											bool tmp24 = (_g2 < _depth);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(36)
											bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(36)
											if ((tmp25)){
												HX_STACK_LINE(36)
												break;
											}
											HX_STACK_LINE(36)
											int tmp26 = (_g2)++;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(36)
											int i = tmp26;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(36)
											hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
										}
									}
									HX_STACK_LINE(36)
									tmp23 = res;
								}
								else{
									HX_STACK_LINE(36)
									::String tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(36)
									{
										HX_STACK_LINE(36)
										::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
										HX_STACK_LINE(36)
										{
											HX_STACK_LINE(36)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(36)
											while((true)){
												HX_STACK_LINE(36)
												bool tmp25 = (_g2 < _depth);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(36)
												bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(36)
												if ((tmp26)){
													HX_STACK_LINE(36)
													break;
												}
												HX_STACK_LINE(36)
												int tmp27 = (_g2)++;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(36)
												int i = tmp27;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(36)
												hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
											}
										}
										HX_STACK_LINE(36)
										tmp24 = res;
									}
									HX_STACK_LINE(36)
									tmp23 = (tmp24 + HX_HCSTRING("> ","\x22","\x36","\x00","\x00"));
								}
								HX_STACK_LINE(36)
								::String _pre = tmp23;		HX_STACK_VAR(_pre,"_pre");
								HX_STACK_LINE(36)
								bool tmp24 = this->hide_ids;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(36)
								::String tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(36)
								if ((tmp24)){
									HX_STACK_LINE(36)
									tmp25 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
								}
								else{
									HX_STACK_LINE(36)
									tmp25 = _entity->get_id();
								}
								HX_STACK_LINE(36)
								::String _id1 = tmp25;		HX_STACK_VAR(_id1,"_id1");
								HX_STACK_LINE(36)
								::luxe::structural::OrderedMap tmp26 = _entity->_components->components;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(36)
								int tmp27 = ::Lambda_obj::count(tmp26,null());		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(36)
								int _comp_count = tmp27;		HX_STACK_VAR(_comp_count,"_comp_count");
								HX_STACK_LINE(36)
								::String tmp28 = (HX_HCSTRING("\xe2""\x80""\xa2"" ","\x1c","\xe6","\xc3","\x95") + _comp_count);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(36)
								::String _comp = tmp28;		HX_STACK_VAR(_comp,"_comp");
								HX_STACK_LINE(36)
								int tmp29 = _entity->children->length;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(36)
								::String tmp30 = (HX_HCSTRING("> ","\x22","\x36","\x00","\x00") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(36)
								::String _childs = tmp30;		HX_STACK_VAR(_childs,"_childs");
								HX_STACK_LINE(36)
								::String tmp31 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _pre);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(36)
								::String tmp32 = _id1;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(36)
								::String tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(36)
								::String tmp34 = (tmp33 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(36)
								::String tmp35 = _entity->get_name();		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(36)
								::String tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(36)
								::String tmp37 = (tmp36 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(36)
								::String tmp38 = _childs;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(36)
								::String tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(36)
								::String tmp40 = (tmp39 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(36)
								::String tmp41 = _comp;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(36)
								::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(36)
								::String tmp43 = (tmp42 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(36)
								::String tmp44 = _active;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(36)
								::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(36)
								::String tmp46 = (tmp45 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(36)
								hx::AddEq(_list,tmp46);
								HX_STACK_LINE(36)
								::luxe::structural::OrderedMap tmp47 = _entity->_components->components;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(36)
								Dynamic tmp48 = tmp47->_keys->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(36)
								for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp48);  __it->hasNext(); ){
									::String _name = __it->next();
									{
										HX_STACK_LINE(36)
										::luxe::structural::OrderedMap tmp49 = _entity->_components->components;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(36)
										::String tmp50 = _name;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(36)
										::luxe::Component tmp51 = tmp49->map->get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(36)
										::luxe::Component comp = tmp51;		HX_STACK_VAR(comp,"comp");
										HX_STACK_LINE(36)
										bool tmp52 = this->hide_ids;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(36)
										::String tmp53;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(36)
										if ((tmp52)){
											HX_STACK_LINE(36)
											tmp53 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
										}
										else{
											HX_STACK_LINE(36)
											tmp53 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + comp->id);
										}
										HX_STACK_LINE(36)
										::String _comp_id = tmp53;		HX_STACK_VAR(_comp_id,"_comp_id");
										HX_STACK_LINE(36)
										::String tmp54;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(36)
										{
											HX_STACK_LINE(36)
											::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
											HX_STACK_LINE(36)
											{
												HX_STACK_LINE(36)
												int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(36)
												while((true)){
													HX_STACK_LINE(36)
													int tmp55 = _g2;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(36)
													int tmp56 = (_depth + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(36)
													bool tmp57 = (tmp55 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(36)
													bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(36)
													if ((tmp58)){
														HX_STACK_LINE(36)
														break;
													}
													HX_STACK_LINE(36)
													int tmp59 = (_g2)++;		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(36)
													int i = tmp59;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(36)
													hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
												}
											}
											HX_STACK_LINE(36)
											tmp54 = res;
										}
										HX_STACK_LINE(36)
										::String tmp55 = (HX_HCSTRING("\xe2""\x80""\xa2""","\x84","\xed","\xab","\x00") + _comp_id);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(36)
										::String tmp56 = (tmp55 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(36)
										::String tmp57 = comp->name;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(36)
										::String tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(36)
										::String tmp59 = (tmp58 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(36)
										::String tmp60 = (tmp54 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(36)
										hx::AddEq(_list,tmp60);
									}
;
								}
								HX_STACK_LINE(36)
								{
									HX_STACK_LINE(36)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(36)
									Array< ::Dynamic > _g11 = _entity->children;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(36)
									while((true)){
										HX_STACK_LINE(36)
										bool tmp49 = (_g2 < _g11->length);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(36)
										bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(36)
										if ((tmp50)){
											HX_STACK_LINE(36)
											break;
										}
										HX_STACK_LINE(36)
										::luxe::Entity tmp51 = _g11->__get(_g2).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(36)
										::luxe::Entity _child = tmp51;		HX_STACK_VAR(_child,"_child");
										HX_STACK_LINE(36)
										++(_g2);
										HX_STACK_LINE(36)
										::String tmp52 = _list;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(36)
										::luxe::Entity tmp53 = _child;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(36)
										int tmp54 = (_depth + (int)2);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(36)
										::String tmp55 = this->list_entity(tmp52,tmp53,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(36)
										_list = tmp55;
									}
								}
								HX_STACK_LINE(36)
								tmp19 = _list;
							}
							HX_STACK_LINE(36)
							_result = tmp19;
						}
;
					}
				}
			}
			HX_STACK_LINE(36)
			tmp6 = _result;
		}
		HX_STACK_LINE(37)
		Float tmp7 = this->font_size;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		::phoenix::Batcher tmp8 = debug->batcher;		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::BitmapFont &tmp5,::String &tmp6,::phoenix::Color &tmp2,::phoenix::Vector &tmp3,Float &tmp7,::phoenix::Batcher &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/debug/SceneDebugView.hx",29,0xbfa62c1d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("debug.scene.list","\xfb","\x7c","\x82","\x23"),false);
					__result->Add(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7") , ((Float)999.3),false);
					__result->Add(HX_HCSTRING("no_scene","\x8e","\xa7","\x34","\x10") , true,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , tmp2,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp3,false);
					__result->Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43") , tmp5,false);
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp6,false);
					__result->Add(HX_HCSTRING("point_size","\x50","\x66","\xf5","\x4b") , tmp7,false);
					__result->Add(HX_HCSTRING("batcher","\xa7","\x22","\x10","\xc0") , tmp8,false);
					__result->Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		Dynamic tmp9 = _Function_1_1::Block(tmp5,tmp6,tmp2,tmp3,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(29)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("SceneDebugView.hx","\xb2","\x9a","\x0d","\x30"),29,HX_HCSTRING("luxe.debug.SceneDebugView","\xff","\x0e","\xa8","\x61"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(29)
		::luxe::Text tmp11 = ::luxe::Text_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(29)
		this->items_list = tmp11;
		HX_STACK_LINE(42)
		::luxe::Text tmp12 = this->items_list;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(42)
		tmp12->geometry->id = HX_HCSTRING("debug.scene.list.geometry","\x85","\x6c","\x5b","\xb1");
		HX_STACK_LINE(44)
		this->resize();
	}
return null();
}


Void SceneDebugView_obj::add_scene( ::luxe::Scene _scene){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","add_scene",0x10bccf3f,"luxe.debug.SceneDebugView.add_scene","luxe/debug/SceneDebugView.hx",50,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_scene,"_scene")
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::luxe::Scene tmp = _scene;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(52)
			int tmp1 = this->scenes->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			if ((tmp3)){
				HX_STACK_LINE(52)
				::String tmp4 = HX_HCSTRING("scenes.indexOf(_scene) == -1","\x5a","\x3b","\x7b","\x64");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(52)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(54)
		::luxe::Scene tmp = _scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		this->scenes->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SceneDebugView_obj,add_scene,(void))

bool SceneDebugView_obj::remove_scene( ::luxe::Scene _scene){
	HX_STACK_FRAME("luxe.debug.SceneDebugView","remove_scene",0x527612a0,"luxe.debug.SceneDebugView.remove_scene","luxe/debug/SceneDebugView.hx",58,0xbfa62c1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_scene,"_scene")
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::luxe::Scene tmp = _scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		int tmp1 = this->scenes->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		if ((tmp3)){
			HX_STACK_LINE(61)
			::String tmp4 = HX_HCSTRING("scenes.indexOf(_scene) != -1","\x3e","\xfd","\x42","\x45");		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(63)
	::luxe::Scene tmp = _scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	bool tmp1 = this->scenes->remove(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	bool _result = tmp1;		HX_STACK_VAR(_result,"_result");
	HX_STACK_LINE(65)
	this->refresh();
	HX_STACK_LINE(67)
	bool tmp2 = _result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(SceneDebugView_obj,remove_scene,return )

Void SceneDebugView_obj::onkeydown( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","onkeydown",0xd43bbc13,"luxe.debug.SceneDebugView.onkeydown","luxe/debug/SceneDebugView.hx",71,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(73)
		int tmp = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		int tmp1 = ::snow::_system::input::Keycodes_obj::key_2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		if ((tmp2)){
			HX_STACK_LINE(73)
			tmp3 = this->visible;
		}
		else{
			HX_STACK_LINE(73)
			tmp3 = false;
		}
		HX_STACK_LINE(73)
		if ((tmp3)){
			HX_STACK_LINE(74)
			this->toggle_ids();
		}
	}
return null();
}


Void SceneDebugView_obj::toggle_ids( ){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","toggle_ids",0x38f48bdc,"luxe.debug.SceneDebugView.toggle_ids","luxe/debug/SceneDebugView.hx",80,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		bool tmp = this->hide_ids;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		this->hide_ids = tmp1;
		HX_STACK_LINE(82)
		this->refresh();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SceneDebugView_obj,toggle_ids,(void))

::String SceneDebugView_obj::tabs( int _d){
	HX_STACK_FRAME("luxe.debug.SceneDebugView","tabs",0x5acb944d,"luxe.debug.SceneDebugView.tabs","luxe/debug/SceneDebugView.hx",86,0xbfa62c1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_d,"_d")
	HX_STACK_LINE(87)
	::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			bool tmp = (_g < _d);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(88)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(88)
			if ((tmp1)){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(88)
			hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
		}
	}
	HX_STACK_LINE(89)
	::String tmp = res;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(SceneDebugView_obj,tabs,return )

::String SceneDebugView_obj::list_entity( ::String _list,::luxe::Entity e,hx::Null< int >  __o__depth){
int _depth = __o__depth.Default(1);
	HX_STACK_FRAME("luxe.debug.SceneDebugView","list_entity",0x6ce93435,"luxe.debug.SceneDebugView.list_entity","luxe/debug/SceneDebugView.hx",92,0xbfa62c1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_list,"_list")
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(_depth,"_depth")
{
		HX_STACK_LINE(94)
		bool tmp = e->get_active();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		if ((tmp)){
			HX_STACK_LINE(94)
			tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(94)
			tmp1 = HX_HCSTRING("/ inactive","\x7c","\x39","\x09","\x16");
		}
		HX_STACK_LINE(94)
		::String _active = tmp1;		HX_STACK_VAR(_active,"_active");
		HX_STACK_LINE(95)
		bool tmp2 = (_depth == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		if ((tmp2)){
			HX_STACK_LINE(95)
			::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(95)
				while((true)){
					HX_STACK_LINE(95)
					bool tmp4 = (_g < _depth);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(95)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(95)
					if ((tmp5)){
						HX_STACK_LINE(95)
						break;
					}
					HX_STACK_LINE(95)
					int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(95)
					hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
				}
			}
			HX_STACK_LINE(95)
			tmp3 = res;
		}
		else{
			HX_STACK_LINE(95)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(95)
				{
					HX_STACK_LINE(95)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(95)
					while((true)){
						HX_STACK_LINE(95)
						bool tmp5 = (_g < _depth);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(95)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(95)
						if ((tmp6)){
							HX_STACK_LINE(95)
							break;
						}
						HX_STACK_LINE(95)
						int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						int i = tmp7;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(95)
						hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
					}
				}
				HX_STACK_LINE(95)
				tmp4 = res;
			}
			HX_STACK_LINE(95)
			tmp3 = (tmp4 + HX_HCSTRING("> ","\x22","\x36","\x00","\x00"));
		}
		HX_STACK_LINE(95)
		::String _pre = tmp3;		HX_STACK_VAR(_pre,"_pre");
		HX_STACK_LINE(96)
		bool tmp4 = this->hide_ids;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		if ((tmp4)){
			HX_STACK_LINE(96)
			tmp5 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(96)
			tmp5 = e->get_id();
		}
		HX_STACK_LINE(96)
		::String _id = tmp5;		HX_STACK_VAR(_id,"_id");
		HX_STACK_LINE(97)
		::luxe::structural::OrderedMap tmp6 = e->_components->components;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		int tmp7 = ::Lambda_obj::count(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		int _comp_count = tmp7;		HX_STACK_VAR(_comp_count,"_comp_count");
		HX_STACK_LINE(98)
		::String tmp8 = (HX_HCSTRING("\xe2""\x80""\xa2"" ","\x1c","\xe6","\xc3","\x95") + _comp_count);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		::String _comp = tmp8;		HX_STACK_VAR(_comp,"_comp");
		HX_STACK_LINE(99)
		int tmp9 = e->children->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		::String tmp10 = (HX_HCSTRING("> ","\x22","\x36","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		::String _childs = tmp10;		HX_STACK_VAR(_childs,"_childs");
		HX_STACK_LINE(101)
		::String tmp11 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _pre);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		::String tmp12 = _id;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(101)
		::String tmp14 = (tmp13 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(101)
		::String tmp15 = e->get_name();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(101)
		::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(101)
		::String tmp17 = (tmp16 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(101)
		::String tmp18 = _childs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(101)
		::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(101)
		::String tmp20 = (tmp19 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(101)
		::String tmp21 = _comp;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(101)
		::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(101)
		::String tmp23 = (tmp22 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(101)
		::String tmp24 = _active;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(101)
		::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(101)
		::String tmp26 = (tmp25 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(101)
		hx::AddEq(_list,tmp26);
		HX_STACK_LINE(103)
		::luxe::structural::OrderedMap tmp27 = e->_components->components;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(103)
		Dynamic tmp28 = tmp27->_keys->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(103)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp28);  __it->hasNext(); ){
			::String _name = __it->next();
			{
				HX_STACK_LINE(104)
				::luxe::structural::OrderedMap tmp29 = e->_components->components;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(104)
				::String tmp30 = _name;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(104)
				::luxe::Component tmp31 = tmp29->map->get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(104)
				::luxe::Component comp = tmp31;		HX_STACK_VAR(comp,"comp");
				HX_STACK_LINE(105)
				bool tmp32 = this->hide_ids;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(105)
				::String tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(105)
				if ((tmp32)){
					HX_STACK_LINE(105)
					tmp33 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(105)
					tmp33 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + comp->id);
				}
				HX_STACK_LINE(105)
				::String _comp_id = tmp33;		HX_STACK_VAR(_comp_id,"_comp_id");
				HX_STACK_LINE(106)
				::String tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(106)
				{
					HX_STACK_LINE(106)
					::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(106)
						while((true)){
							HX_STACK_LINE(106)
							int tmp35 = _g;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(106)
							int tmp36 = (_depth + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(106)
							bool tmp37 = (tmp35 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(106)
							bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(106)
							if ((tmp38)){
								HX_STACK_LINE(106)
								break;
							}
							HX_STACK_LINE(106)
							int tmp39 = (_g)++;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(106)
							int i = tmp39;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(106)
							hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
						}
					}
					HX_STACK_LINE(106)
					tmp34 = res;
				}
				HX_STACK_LINE(106)
				::String tmp35 = (HX_HCSTRING("\xe2""\x80""\xa2""","\x84","\xed","\xab","\x00") + _comp_id);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(106)
				::String tmp36 = (tmp35 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(106)
				::String tmp37 = comp->name;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(106)
				::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(106)
				::String tmp39 = (tmp38 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(106)
				::String tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(106)
				hx::AddEq(_list,tmp40);
			}
;
		}
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			Array< ::Dynamic > _g1 = e->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(109)
			while((true)){
				HX_STACK_LINE(109)
				bool tmp29 = (_g < _g1->length);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(109)
				bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(109)
				if ((tmp30)){
					HX_STACK_LINE(109)
					break;
				}
				HX_STACK_LINE(109)
				::luxe::Entity tmp31 = _g1->__get(_g).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(109)
				::luxe::Entity _child = tmp31;		HX_STACK_VAR(_child,"_child");
				HX_STACK_LINE(109)
				++(_g);
				HX_STACK_LINE(110)
				::String tmp32 = _list;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(110)
				::luxe::Entity tmp33 = _child;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(110)
				int tmp34 = (_depth + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(110)
				::String tmp35 = this->list_entity(tmp32,tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(110)
				_list = tmp35;
			}
		}
		HX_STACK_LINE(113)
		::String tmp29 = _list;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(113)
		return tmp29;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(SceneDebugView_obj,list_entity,return )

::String SceneDebugView_obj::get_list( ){
	HX_STACK_FRAME("luxe.debug.SceneDebugView","get_list",0x74e24f36,"luxe.debug.SceneDebugView.get_list","luxe/debug/SceneDebugView.hx",116,0xbfa62c1d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	::String _result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_result,"_result");
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		Array< ::Dynamic > _g1 = this->scenes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(120)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(120)
			if ((tmp1)){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			::luxe::Scene tmp2 = _g1->__get(_g).StaticCast< ::luxe::Scene >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			::luxe::Scene _scene = tmp2;		HX_STACK_VAR(_scene,"_scene");
			HX_STACK_LINE(120)
			++(_g);
			HX_STACK_LINE(121)
			bool tmp3 = this->hide_ids;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			if ((tmp3)){
				HX_STACK_LINE(121)
				tmp4 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			else{
				HX_STACK_LINE(121)
				::String tmp5 = _scene->get_id();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(121)
				::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				tmp4 = (tmp6 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(121)
			::String _id = tmp4;		HX_STACK_VAR(_id,"_id");
			HX_STACK_LINE(123)
			hx::AddEq(_result,_id);
			HX_STACK_LINE(124)
			::String tmp5 = _scene->get_name();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			::String tmp7 = (tmp6 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			hx::AddEq(_result,tmp7);
			HX_STACK_LINE(125)
			int tmp8 = _scene->get_length();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(125)
			::String tmp9 = (HX_HCSTRING("( ","\xf8","\x22","\x00","\x00") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(125)
			::String tmp10 = (tmp9 + HX_HCSTRING(" )\n","\xe1","\x6b","\x18","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(125)
			hx::AddEq(_result,tmp10);
			HX_STACK_LINE(126)
			Dynamic tmp11 = _scene->entities->iterator();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(126)
			for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp11);  __it->hasNext(); ){
				::luxe::Entity _entity = __it->next();
				{
					HX_STACK_LINE(127)
					::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(127)
					{
						HX_STACK_LINE(127)
						::String _list = _result;		HX_STACK_VAR(_list,"_list");
						HX_STACK_LINE(127)
						int _depth = (int)1;		HX_STACK_VAR(_depth,"_depth");
						HX_STACK_LINE(127)
						bool tmp13 = _entity->get_active();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(127)
						::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(127)
						if ((tmp13)){
							HX_STACK_LINE(127)
							tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						else{
							HX_STACK_LINE(127)
							tmp14 = HX_HCSTRING("/ inactive","\x7c","\x39","\x09","\x16");
						}
						HX_STACK_LINE(127)
						::String _active = tmp14;		HX_STACK_VAR(_active,"_active");
						HX_STACK_LINE(127)
						bool tmp15 = (_depth == (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(127)
						::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(127)
						if ((tmp15)){
							HX_STACK_LINE(127)
							::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
							HX_STACK_LINE(127)
							{
								HX_STACK_LINE(127)
								int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(127)
								while((true)){
									HX_STACK_LINE(127)
									bool tmp17 = (_g2 < _depth);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(127)
									bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(127)
									if ((tmp18)){
										HX_STACK_LINE(127)
										break;
									}
									HX_STACK_LINE(127)
									int tmp19 = (_g2)++;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(127)
									int i = tmp19;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(127)
									hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
								}
							}
							HX_STACK_LINE(127)
							tmp16 = res;
						}
						else{
							HX_STACK_LINE(127)
							::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(127)
							{
								HX_STACK_LINE(127)
								::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
								HX_STACK_LINE(127)
								{
									HX_STACK_LINE(127)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(127)
									while((true)){
										HX_STACK_LINE(127)
										bool tmp18 = (_g2 < _depth);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(127)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(127)
										if ((tmp19)){
											HX_STACK_LINE(127)
											break;
										}
										HX_STACK_LINE(127)
										int tmp20 = (_g2)++;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(127)
										int i = tmp20;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(127)
										hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
									}
								}
								HX_STACK_LINE(127)
								tmp17 = res;
							}
							HX_STACK_LINE(127)
							tmp16 = (tmp17 + HX_HCSTRING("> ","\x22","\x36","\x00","\x00"));
						}
						HX_STACK_LINE(127)
						::String _pre = tmp16;		HX_STACK_VAR(_pre,"_pre");
						HX_STACK_LINE(127)
						bool tmp17 = this->hide_ids;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(127)
						::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(127)
						if ((tmp17)){
							HX_STACK_LINE(127)
							tmp18 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						else{
							HX_STACK_LINE(127)
							tmp18 = _entity->get_id();
						}
						HX_STACK_LINE(127)
						::String _id1 = tmp18;		HX_STACK_VAR(_id1,"_id1");
						HX_STACK_LINE(127)
						::luxe::structural::OrderedMap tmp19 = _entity->_components->components;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(127)
						int tmp20 = ::Lambda_obj::count(tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(127)
						int _comp_count = tmp20;		HX_STACK_VAR(_comp_count,"_comp_count");
						HX_STACK_LINE(127)
						::String tmp21 = (HX_HCSTRING("\xe2""\x80""\xa2"" ","\x1c","\xe6","\xc3","\x95") + _comp_count);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(127)
						::String _comp = tmp21;		HX_STACK_VAR(_comp,"_comp");
						HX_STACK_LINE(127)
						int tmp22 = _entity->children->length;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(127)
						::String tmp23 = (HX_HCSTRING("> ","\x22","\x36","\x00","\x00") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(127)
						::String _childs = tmp23;		HX_STACK_VAR(_childs,"_childs");
						HX_STACK_LINE(127)
						::String tmp24 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _pre);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(127)
						::String tmp25 = _id1;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(127)
						::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(127)
						::String tmp27 = (tmp26 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(127)
						::String tmp28 = _entity->get_name();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(127)
						::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(127)
						::String tmp30 = (tmp29 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(127)
						::String tmp31 = _childs;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(127)
						::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(127)
						::String tmp33 = (tmp32 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(127)
						::String tmp34 = _comp;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(127)
						::String tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(127)
						::String tmp36 = (tmp35 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(127)
						::String tmp37 = _active;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(127)
						::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(127)
						::String tmp39 = (tmp38 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(127)
						hx::AddEq(_list,tmp39);
						HX_STACK_LINE(127)
						::luxe::structural::OrderedMap tmp40 = _entity->_components->components;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(127)
						Dynamic tmp41 = tmp40->_keys->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(127)
						for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp41);  __it->hasNext(); ){
							::String _name = __it->next();
							{
								HX_STACK_LINE(127)
								::luxe::structural::OrderedMap tmp42 = _entity->_components->components;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(127)
								::String tmp43 = _name;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(127)
								::luxe::Component tmp44 = tmp42->map->get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(127)
								::luxe::Component comp = tmp44;		HX_STACK_VAR(comp,"comp");
								HX_STACK_LINE(127)
								bool tmp45 = this->hide_ids;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(127)
								::String tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(127)
								if ((tmp45)){
									HX_STACK_LINE(127)
									tmp46 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
								}
								else{
									HX_STACK_LINE(127)
									tmp46 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + comp->id);
								}
								HX_STACK_LINE(127)
								::String _comp_id = tmp46;		HX_STACK_VAR(_comp_id,"_comp_id");
								HX_STACK_LINE(127)
								::String tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(127)
								{
									HX_STACK_LINE(127)
									::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
									HX_STACK_LINE(127)
									{
										HX_STACK_LINE(127)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(127)
										while((true)){
											HX_STACK_LINE(127)
											int tmp48 = _g2;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(127)
											int tmp49 = (_depth + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(127)
											bool tmp50 = (tmp48 < tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(127)
											bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(127)
											if ((tmp51)){
												HX_STACK_LINE(127)
												break;
											}
											HX_STACK_LINE(127)
											int tmp52 = (_g2)++;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(127)
											int i = tmp52;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(127)
											hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
										}
									}
									HX_STACK_LINE(127)
									tmp47 = res;
								}
								HX_STACK_LINE(127)
								::String tmp48 = (HX_HCSTRING("\xe2""\x80""\xa2""","\x84","\xed","\xab","\x00") + _comp_id);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(127)
								::String tmp49 = (tmp48 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(127)
								::String tmp50 = comp->name;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(127)
								::String tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(127)
								::String tmp52 = (tmp51 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(127)
								::String tmp53 = (tmp47 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(127)
								hx::AddEq(_list,tmp53);
							}
;
						}
						HX_STACK_LINE(127)
						{
							HX_STACK_LINE(127)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(127)
							Array< ::Dynamic > _g11 = _entity->children;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(127)
							while((true)){
								HX_STACK_LINE(127)
								bool tmp42 = (_g2 < _g11->length);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(127)
								bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(127)
								if ((tmp43)){
									HX_STACK_LINE(127)
									break;
								}
								HX_STACK_LINE(127)
								::luxe::Entity tmp44 = _g11->__get(_g2).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(127)
								::luxe::Entity _child = tmp44;		HX_STACK_VAR(_child,"_child");
								HX_STACK_LINE(127)
								++(_g2);
								HX_STACK_LINE(127)
								::String tmp45 = _list;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(127)
								::luxe::Entity tmp46 = _child;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(127)
								int tmp47 = (_depth + (int)2);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(127)
								::String tmp48 = this->list_entity(tmp45,tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(127)
								_list = tmp48;
							}
						}
						HX_STACK_LINE(127)
						tmp12 = _list;
					}
					HX_STACK_LINE(127)
					_result = tmp12;
				}
;
			}
		}
	}
	HX_STACK_LINE(131)
	::String tmp = _result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SceneDebugView_obj,get_list,return )

Void SceneDebugView_obj::refresh( ){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","refresh",0xd00f016c,"luxe.debug.SceneDebugView.refresh","luxe/debug/SceneDebugView.hx",135,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		::luxe::Text tmp = this->items_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::String _result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_result,"_result");
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(137)
				Array< ::Dynamic > _g1 = this->scenes;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(137)
				while((true)){
					HX_STACK_LINE(137)
					bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(137)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(137)
					if ((tmp3)){
						HX_STACK_LINE(137)
						break;
					}
					HX_STACK_LINE(137)
					::luxe::Scene tmp4 = _g1->__get(_g).StaticCast< ::luxe::Scene >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(137)
					::luxe::Scene _scene = tmp4;		HX_STACK_VAR(_scene,"_scene");
					HX_STACK_LINE(137)
					++(_g);
					HX_STACK_LINE(137)
					bool tmp5 = this->hide_ids;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(137)
					::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(137)
					if ((tmp5)){
						HX_STACK_LINE(137)
						tmp6 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					else{
						HX_STACK_LINE(137)
						::String tmp7 = _scene->get_id();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(137)
						::String tmp8 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(137)
						tmp6 = (tmp8 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(137)
					::String _id = tmp6;		HX_STACK_VAR(_id,"_id");
					HX_STACK_LINE(137)
					hx::AddEq(_result,_id);
					HX_STACK_LINE(137)
					::String tmp7 = _scene->get_name();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(137)
					::String tmp8 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(137)
					::String tmp9 = (tmp8 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(137)
					hx::AddEq(_result,tmp9);
					HX_STACK_LINE(137)
					int tmp10 = _scene->get_length();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					::String tmp11 = (HX_HCSTRING("( ","\xf8","\x22","\x00","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(137)
					::String tmp12 = (tmp11 + HX_HCSTRING(" )\n","\xe1","\x6b","\x18","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(137)
					hx::AddEq(_result,tmp12);
					HX_STACK_LINE(137)
					Dynamic tmp13 = _scene->entities->iterator();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(137)
					for(::cpp::FastIterator_obj< ::luxe::Entity > *__it = ::cpp::CreateFastIterator< ::luxe::Entity >(tmp13);  __it->hasNext(); ){
						::luxe::Entity _entity = __it->next();
						{
							HX_STACK_LINE(137)
							::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(137)
							{
								HX_STACK_LINE(137)
								::String _list = _result;		HX_STACK_VAR(_list,"_list");
								HX_STACK_LINE(137)
								int _depth = (int)1;		HX_STACK_VAR(_depth,"_depth");
								HX_STACK_LINE(137)
								bool tmp15 = _entity->get_active();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(137)
								::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(137)
								if ((tmp15)){
									HX_STACK_LINE(137)
									tmp16 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
								}
								else{
									HX_STACK_LINE(137)
									tmp16 = HX_HCSTRING("/ inactive","\x7c","\x39","\x09","\x16");
								}
								HX_STACK_LINE(137)
								::String _active = tmp16;		HX_STACK_VAR(_active,"_active");
								HX_STACK_LINE(137)
								bool tmp17 = (_depth == (int)1);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(137)
								::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(137)
								if ((tmp17)){
									HX_STACK_LINE(137)
									::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
									HX_STACK_LINE(137)
									{
										HX_STACK_LINE(137)
										int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(137)
										while((true)){
											HX_STACK_LINE(137)
											bool tmp19 = (_g2 < _depth);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(137)
											bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(137)
											if ((tmp20)){
												HX_STACK_LINE(137)
												break;
											}
											HX_STACK_LINE(137)
											int tmp21 = (_g2)++;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(137)
											int i = tmp21;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(137)
											hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
										}
									}
									HX_STACK_LINE(137)
									tmp18 = res;
								}
								else{
									HX_STACK_LINE(137)
									::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(137)
									{
										HX_STACK_LINE(137)
										::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
										HX_STACK_LINE(137)
										{
											HX_STACK_LINE(137)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(137)
											while((true)){
												HX_STACK_LINE(137)
												bool tmp20 = (_g2 < _depth);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(137)
												bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(137)
												if ((tmp21)){
													HX_STACK_LINE(137)
													break;
												}
												HX_STACK_LINE(137)
												int tmp22 = (_g2)++;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(137)
												int i = tmp22;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(137)
												hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
											}
										}
										HX_STACK_LINE(137)
										tmp19 = res;
									}
									HX_STACK_LINE(137)
									tmp18 = (tmp19 + HX_HCSTRING("> ","\x22","\x36","\x00","\x00"));
								}
								HX_STACK_LINE(137)
								::String _pre = tmp18;		HX_STACK_VAR(_pre,"_pre");
								HX_STACK_LINE(137)
								bool tmp19 = this->hide_ids;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(137)
								::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(137)
								if ((tmp19)){
									HX_STACK_LINE(137)
									tmp20 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
								}
								else{
									HX_STACK_LINE(137)
									tmp20 = _entity->get_id();
								}
								HX_STACK_LINE(137)
								::String _id1 = tmp20;		HX_STACK_VAR(_id1,"_id1");
								HX_STACK_LINE(137)
								::luxe::structural::OrderedMap tmp21 = _entity->_components->components;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(137)
								int tmp22 = ::Lambda_obj::count(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(137)
								int _comp_count = tmp22;		HX_STACK_VAR(_comp_count,"_comp_count");
								HX_STACK_LINE(137)
								::String tmp23 = (HX_HCSTRING("\xe2""\x80""\xa2"" ","\x1c","\xe6","\xc3","\x95") + _comp_count);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(137)
								::String _comp = tmp23;		HX_STACK_VAR(_comp,"_comp");
								HX_STACK_LINE(137)
								int tmp24 = _entity->children->length;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(137)
								::String tmp25 = (HX_HCSTRING("> ","\x22","\x36","\x00","\x00") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(137)
								::String _childs = tmp25;		HX_STACK_VAR(_childs,"_childs");
								HX_STACK_LINE(137)
								::String tmp26 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _pre);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(137)
								::String tmp27 = _id1;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(137)
								::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(137)
								::String tmp29 = (tmp28 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(137)
								::String tmp30 = _entity->get_name();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(137)
								::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(137)
								::String tmp32 = (tmp31 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(137)
								::String tmp33 = _childs;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(137)
								::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(137)
								::String tmp35 = (tmp34 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(137)
								::String tmp36 = _comp;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(137)
								::String tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(137)
								::String tmp38 = (tmp37 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(137)
								::String tmp39 = _active;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(137)
								::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(137)
								::String tmp41 = (tmp40 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(137)
								hx::AddEq(_list,tmp41);
								HX_STACK_LINE(137)
								::luxe::structural::OrderedMap tmp42 = _entity->_components->components;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(137)
								Dynamic tmp43 = tmp42->_keys->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(137)
								for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp43);  __it->hasNext(); ){
									::String _name = __it->next();
									{
										HX_STACK_LINE(137)
										::luxe::structural::OrderedMap tmp44 = _entity->_components->components;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(137)
										::String tmp45 = _name;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(137)
										::luxe::Component tmp46 = tmp44->map->get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(137)
										::luxe::Component comp = tmp46;		HX_STACK_VAR(comp,"comp");
										HX_STACK_LINE(137)
										bool tmp47 = this->hide_ids;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(137)
										::String tmp48;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(137)
										if ((tmp47)){
											HX_STACK_LINE(137)
											tmp48 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
										}
										else{
											HX_STACK_LINE(137)
											tmp48 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + comp->id);
										}
										HX_STACK_LINE(137)
										::String _comp_id = tmp48;		HX_STACK_VAR(_comp_id,"_comp_id");
										HX_STACK_LINE(137)
										::String tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(137)
										{
											HX_STACK_LINE(137)
											::String res = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(res,"res");
											HX_STACK_LINE(137)
											{
												HX_STACK_LINE(137)
												int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(137)
												while((true)){
													HX_STACK_LINE(137)
													int tmp50 = _g2;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(137)
													int tmp51 = (_depth + (int)1);		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(137)
													bool tmp52 = (tmp50 < tmp51);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(137)
													bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(137)
													if ((tmp53)){
														HX_STACK_LINE(137)
														break;
													}
													HX_STACK_LINE(137)
													int tmp54 = (_g2)++;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(137)
													int i = tmp54;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(137)
													hx::AddEq(res,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
												}
											}
											HX_STACK_LINE(137)
											tmp49 = res;
										}
										HX_STACK_LINE(137)
										::String tmp50 = (HX_HCSTRING("\xe2""\x80""\xa2""","\x84","\xed","\xab","\x00") + _comp_id);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(137)
										::String tmp51 = (tmp50 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(137)
										::String tmp52 = comp->name;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(137)
										::String tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(137)
										::String tmp54 = (tmp53 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(137)
										::String tmp55 = (tmp49 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(137)
										hx::AddEq(_list,tmp55);
									}
;
								}
								HX_STACK_LINE(137)
								{
									HX_STACK_LINE(137)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(137)
									Array< ::Dynamic > _g11 = _entity->children;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(137)
									while((true)){
										HX_STACK_LINE(137)
										bool tmp44 = (_g2 < _g11->length);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(137)
										bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(137)
										if ((tmp45)){
											HX_STACK_LINE(137)
											break;
										}
										HX_STACK_LINE(137)
										::luxe::Entity tmp46 = _g11->__get(_g2).StaticCast< ::luxe::Entity >();		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(137)
										::luxe::Entity _child = tmp46;		HX_STACK_VAR(_child,"_child");
										HX_STACK_LINE(137)
										++(_g2);
										HX_STACK_LINE(137)
										::String tmp47 = _list;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(137)
										::luxe::Entity tmp48 = _child;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(137)
										int tmp49 = (_depth + (int)2);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(137)
										::String tmp50 = this->list_entity(tmp47,tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(137)
										_list = tmp50;
									}
								}
								HX_STACK_LINE(137)
								tmp14 = _list;
							}
							HX_STACK_LINE(137)
							_result = tmp14;
						}
;
					}
				}
			}
			HX_STACK_LINE(137)
			tmp1 = _result;
		}
		HX_STACK_LINE(137)
		tmp->set_text(tmp1);
	}
return null();
}


Void SceneDebugView_obj::process( ){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","process",0xd438ca00,"luxe.debug.SceneDebugView.process","luxe/debug/SceneDebugView.hx",141,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(143)
			return null();
		}
		HX_STACK_LINE(145)
		bool _has_changed = false;		HX_STACK_VAR(_has_changed,"_has_changed");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			Array< ::Dynamic > _g1 = this->scenes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			while((true)){
				HX_STACK_LINE(147)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(147)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(147)
				if ((tmp3)){
					HX_STACK_LINE(147)
					break;
				}
				HX_STACK_LINE(147)
				::luxe::Scene tmp4 = _g1->__get(_g).StaticCast< ::luxe::Scene >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				::luxe::Scene _scene = tmp4;		HX_STACK_VAR(_scene,"_scene");
				HX_STACK_LINE(147)
				++(_g);
				HX_STACK_LINE(148)
				bool tmp5 = _scene->_has_changed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(148)
				if ((tmp5)){
					HX_STACK_LINE(149)
					_has_changed = true;
					HX_STACK_LINE(150)
					_scene->_has_changed = false;
				}
			}
		}
		HX_STACK_LINE(154)
		bool tmp2 = _has_changed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		if ((tmp2)){
			HX_STACK_LINE(156)
			this->refresh();
		}
	}
return null();
}


Void SceneDebugView_obj::onmousewheel( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","onmousewheel",0xd9102104,"luxe.debug.SceneDebugView.onmousewheel","luxe/debug/SceneDebugView.hx",164,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(165)
		::luxe::Text tmp = this->items_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		Float tmp1 = tmp->text_bounds->h;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		Float h = tmp1;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(166)
		::luxe::Debug tmp2 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		::phoenix::Vector tmp3 = tmp2->inspector->size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		int tmp5 = this->margin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		Float vh = tmp6;		HX_STACK_VAR(vh,"vh");
		HX_STACK_LINE(167)
		Float tmp7 = (h - vh);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		Float diff = tmp7;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(169)
		::luxe::Text tmp8 = this->items_list;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		::phoenix::Vector tmp9 = tmp8->get_pos();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		Float new_y = tmp9->y;		HX_STACK_VAR(new_y,"new_y");
		HX_STACK_LINE(170)
		::luxe::Debug tmp10 = ::Luxe_obj::debug;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(170)
		Float tmp11 = tmp10->padding->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(170)
		int tmp12 = this->margin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(170)
		Float tmp13 = (tmp12 * ((Float)1.5));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(170)
		Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(170)
		Float max_y = tmp14;		HX_STACK_VAR(max_y,"max_y");
		HX_STACK_LINE(171)
		Float min_y = max_y;		HX_STACK_VAR(min_y,"min_y");
		HX_STACK_LINE(173)
		bool tmp15 = (diff > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(173)
		if ((tmp15)){
			HX_STACK_LINE(174)
			Float tmp16 = max_y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(174)
			Float tmp17 = diff;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(174)
			int tmp18 = this->margin;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(174)
			int tmp19 = (tmp18 * (int)2);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(174)
			Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(174)
			Float tmp21 = (tmp16 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(174)
			min_y = tmp21;
		}
		HX_STACK_LINE(177)
		int tmp16 = this->margin;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(177)
		Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(177)
		int tmp18 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(177)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(177)
		hx::SubEq(new_y,tmp19);
		HX_STACK_LINE(178)
		bool tmp20 = (new_y < min_y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(178)
		Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(178)
		if ((tmp20)){
			HX_STACK_LINE(178)
			tmp21 = min_y;
		}
		else{
			HX_STACK_LINE(178)
			bool tmp22 = (new_y > max_y);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(178)
			if ((tmp22)){
				HX_STACK_LINE(178)
				tmp21 = max_y;
			}
			else{
				HX_STACK_LINE(178)
				tmp21 = new_y;
			}
		}
		HX_STACK_LINE(178)
		new_y = tmp21;
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			::luxe::Text tmp22 = this->items_list;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(179)
			::phoenix::Vector tmp23 = tmp22->get_pos();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(179)
			::phoenix::Vector _this = tmp23;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(179)
			_this->y = new_y;
			HX_STACK_LINE(179)
			bool tmp24 = _this->_construct;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(179)
			if ((tmp24)){
				HX_STACK_LINE(179)
				_this->y;
			}
			else{
				HX_STACK_LINE(179)
				bool tmp25 = (_this->listen_y != null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(179)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(179)
				if ((tmp25)){
					HX_STACK_LINE(179)
					bool tmp27 = _this->ignore_listeners;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(179)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(179)
					tmp26 = !(tmp28);
				}
				else{
					HX_STACK_LINE(179)
					tmp26 = false;
				}
				HX_STACK_LINE(179)
				if ((tmp26)){
					HX_STACK_LINE(179)
					Float tmp27 = new_y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(179)
					_this->listen_y(tmp27);
				}
				HX_STACK_LINE(179)
				_this->y;
			}
		}
	}
return null();
}


Void SceneDebugView_obj::show( ){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","show",0x5a27b8cc,"luxe.debug.SceneDebugView.show","luxe/debug/SceneDebugView.hx",184,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		this->super::show();
		HX_STACK_LINE(187)
		this->refresh();
		HX_STACK_LINE(188)
		::luxe::Text tmp = this->items_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		tmp->set_visible(true);
	}
return null();
}


Void SceneDebugView_obj::hide( ){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","hide",0x52e31891,"luxe.debug.SceneDebugView.hide","luxe/debug/SceneDebugView.hx",192,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		this->super::hide();
		HX_STACK_LINE(195)
		::luxe::Text tmp = this->items_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		tmp->set_visible(false);
	}
return null();
}


Void SceneDebugView_obj::resize( ){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","resize",0xe02c0f83,"luxe.debug.SceneDebugView.resize","luxe/debug/SceneDebugView.hx",201,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		::luxe::Debug tmp = ::Luxe_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		::luxe::Debug debug = tmp;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(206)
		::phoenix::Vector tmp1 = debug->inspector->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		int tmp3 = this->margin;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		::phoenix::Vector tmp6 = debug->inspector->pos;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		int tmp8 = this->margin;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		Float tmp9 = (tmp8 * ((Float)1.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(207)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(208)
		::phoenix::Vector tmp11 = debug->inspector->size;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(208)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(208)
		int tmp13 = this->margin;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(208)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(209)
		::phoenix::Vector tmp15 = debug->inspector->size;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(209)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(209)
		int tmp17 = this->margin;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(209)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(209)
		int tmp19 = this->margin;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(209)
		Float tmp20 = (tmp19 * ((Float)1.5));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(209)
		Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(205)
		::phoenix::Rectangle tmp22 = ::phoenix::Rectangle_obj::__new(tmp5,tmp10,tmp14,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(205)
		::phoenix::Rectangle viewrect = tmp22;		HX_STACK_VAR(viewrect,"viewrect");
		HX_STACK_LINE(212)
		Float tmp23 = debug->padding->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(212)
		int tmp24 = this->margin;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(212)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(212)
		Float left = tmp25;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(213)
		Float tmp26 = debug->padding->y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(213)
		int tmp27 = this->margin;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(213)
		Float tmp28 = (tmp27 * ((Float)1.5));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(213)
		Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(213)
		Float top = tmp29;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(215)
		::luxe::Text tmp30 = this->items_list;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(215)
		bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(215)
		if ((tmp31)){
			HX_STACK_LINE(216)
			::luxe::Text tmp32 = this->items_list;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(216)
			::phoenix::Vector tmp33 = ::phoenix::Vector_obj::__new(left,top,null(),null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(216)
			tmp32->set_pos(tmp33);
			HX_STACK_LINE(217)
			::luxe::Text tmp34 = this->items_list;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(217)
			::phoenix::Rectangle tmp35 = viewrect;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(217)
			tmp34->set_clip_rect(tmp35);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SceneDebugView_obj,resize,(void))

Void SceneDebugView_obj::onwindowsized( Dynamic e){
{
		HX_STACK_FRAME("luxe.debug.SceneDebugView","onwindowsized",0x75635e25,"luxe.debug.SceneDebugView.onwindowsized","luxe/debug/SceneDebugView.hx",221,0xbfa62c1d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(221)
		this->resize();
	}
return null();
}



SceneDebugView_obj::SceneDebugView_obj()
{
}

void SceneDebugView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SceneDebugView);
	HX_MARK_MEMBER_NAME(items_list,"items_list");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(font_size,"font_size");
	HX_MARK_MEMBER_NAME(scenes,"scenes");
	HX_MARK_MEMBER_NAME(hide_ids,"hide_ids");
	::luxe::Objects_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SceneDebugView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(items_list,"items_list");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(font_size,"font_size");
	HX_VISIT_MEMBER_NAME(scenes,"scenes");
	HX_VISIT_MEMBER_NAME(hide_ids,"hide_ids");
	::luxe::Objects_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SceneDebugView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { return tabs_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"scenes") ) { return scenes; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hide_ids") ) { return hide_ids; }
		if (HX_FIELD_EQ(inName,"get_list") ) { return get_list_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { return font_size; }
		if (HX_FIELD_EQ(inName,"add_scene") ) { return add_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"items_list") ) { return items_list; }
		if (HX_FIELD_EQ(inName,"toggle_ids") ) { return toggle_ids_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"list_entity") ) { return list_entity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"remove_scene") ) { return remove_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onwindowsized") ) { return onwindowsized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SceneDebugView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scenes") ) { scenes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hide_ids") ) { hide_ids=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { font_size=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"items_list") ) { items_list=inValue.Cast< ::luxe::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SceneDebugView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SceneDebugView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("items_list","\x3d","\x0c","\x48","\xaf"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18"));
	outFields->push(HX_HCSTRING("scenes","\xa7","\x49","\xcc","\x3e"));
	outFields->push(HX_HCSTRING("hide_ids","\xfb","\x06","\x10","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Text*/ ,(int)offsetof(SceneDebugView_obj,items_list),HX_HCSTRING("items_list","\x3d","\x0c","\x48","\xaf")},
	{hx::fsInt,(int)offsetof(SceneDebugView_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsFloat,(int)offsetof(SceneDebugView_obj,font_size),HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SceneDebugView_obj,scenes),HX_HCSTRING("scenes","\xa7","\x49","\xcc","\x3e")},
	{hx::fsBool,(int)offsetof(SceneDebugView_obj,hide_ids),HX_HCSTRING("hide_ids","\xfb","\x06","\x10","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("items_list","\x3d","\x0c","\x48","\xaf"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("scenes","\xa7","\x49","\xcc","\x3e"),
	HX_HCSTRING("add_scene","\x6e","\xe1","\x48","\xf8"),
	HX_HCSTRING("remove_scene","\xd1","\x47","\x52","\xaf"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("hide_ids","\xfb","\x06","\x10","\xad"),
	HX_HCSTRING("toggle_ids","\xcd","\x62","\xf8","\xeb"),
	HX_HCSTRING("tabs","\x7e","\xb0","\xf6","\x4c"),
	HX_HCSTRING("list_entity","\x24","\x70","\x41","\x5d"),
	HX_HCSTRING("get_list","\xe7","\xd7","\x6d","\xc7"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("onwindowsized","\xd4","\xb3","\x35","\x59"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SceneDebugView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneDebugView_obj::__mClass,"__mClass");
};

#endif

hx::Class SceneDebugView_obj::__mClass;

void SceneDebugView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.debug.SceneDebugView","\xff","\x0e","\xa8","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SceneDebugView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SceneDebugView_obj >;
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
