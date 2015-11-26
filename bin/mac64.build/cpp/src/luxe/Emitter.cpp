#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
namespace luxe{

Void Emitter_obj::__construct()
{
HX_STACK_FRAME("luxe.Emitter","new",0xbd9e6488,"luxe.Emitter.new","luxe/Emitter.hx",19,0xe597ef29)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(121)
	this->_checking = false;
	HX_STACK_LINE(31)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->_to_remove = tmp;
	HX_STACK_LINE(32)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	this->connected = tmp1;
	HX_STACK_LINE(34)
	::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	this->bindings = tmp2;
}
;
	return null();
}

//Emitter_obj::~Emitter_obj() { }

Dynamic Emitter_obj::__CreateEmpty() { return  new Emitter_obj; }
hx::ObjectPtr< Emitter_obj > Emitter_obj::__new()
{  hx::ObjectPtr< Emitter_obj > _result_ = new Emitter_obj();
	_result_->__construct();
	return _result_;}

Dynamic Emitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Emitter_obj > _result_ = new Emitter_obj();
	_result_->__construct();
	return _result_;}

Void Emitter_obj::emit( Dynamic event,Dynamic data,Dynamic pos){
{
		HX_STACK_FRAME("luxe.Emitter","emit",0x270cad2b,"luxe.Emitter.emit","luxe/Emitter.hx",39,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(41)
		this->_check();
		HX_STACK_LINE(43)
		::haxe::ds::IntMap tmp = this->bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Dynamic tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		cpp::ArrayBase list = tmp->get(tmp1);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(44)
		bool tmp2 = (list != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		if ((tmp2)){
			HX_STACK_LINE(44)
			tmp3 = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);
		}
		else{
			HX_STACK_LINE(44)
			tmp3 = false;
		}
		HX_STACK_LINE(44)
		if ((tmp3)){
			HX_STACK_LINE(45)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			while((true)){
				HX_STACK_LINE(45)
				bool tmp4 = (_g < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				if ((tmp5)){
					HX_STACK_LINE(45)
					break;
				}
				HX_STACK_LINE(45)
				Dynamic tmp6 = list->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				Dynamic handler = tmp6;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(45)
				++(_g);
				HX_STACK_LINE(47)
				Dynamic tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				handler(tmp7).Cast< Void >();
			}
		}
		HX_STACK_LINE(53)
		this->_check();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,emit,(void))

Void Emitter_obj::on( Dynamic event,Dynamic handler,Dynamic pos){
{
		HX_STACK_FRAME("luxe.Emitter","on",0x64b989f7,"luxe.Emitter.on","luxe/Emitter.hx",58,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(60)
		this->_check();
		HX_STACK_LINE(64)
		::haxe::ds::IntMap tmp = this->bindings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		Dynamic tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		if ((tmp3)){
			HX_STACK_LINE(66)
			::haxe::ds::IntMap tmp4 = this->bindings;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			Dynamic tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			tmp4->set(tmp5,cpp::ArrayBase_obj::__new().Add(handler));
			HX_STACK_LINE(67)
			::List tmp6 = this->connected;		HX_STACK_VAR(tmp6,"tmp6");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &pos,Dynamic &handler,Dynamic &event){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Emitter.hx",67,0xe597ef29)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , handler,false);
						__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
						__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , pos,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(67)
			Dynamic tmp7 = _Function_2_1::Block(pos,handler,event);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			tmp6->push(tmp7);
		}
		else{
			HX_STACK_LINE(70)
			::haxe::ds::IntMap tmp4 = this->bindings;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			Dynamic tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			cpp::ArrayBase list = tmp4->get(tmp5);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(71)
			Dynamic tmp6 = handler;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			int tmp7 = list->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			bool tmp8 = (tmp7 == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			if ((tmp8)){
				HX_STACK_LINE(72)
				Dynamic tmp9 = handler;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(72)
				list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
				HX_STACK_LINE(73)
				::List tmp10 = this->connected;		HX_STACK_VAR(tmp10,"tmp10");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pos,Dynamic &handler,Dynamic &event){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Emitter.hx",73,0xe597ef29)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , handler,false);
							__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
							__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , pos,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(73)
				Dynamic tmp11 = _Function_3_1::Block(pos,handler,event);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				tmp10->push(tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,on,(void))

bool Emitter_obj::off( Dynamic event,Dynamic handler,Dynamic pos){
	HX_STACK_FRAME("luxe.Emitter","off",0xbd9f2797,"luxe.Emitter.off","luxe/Emitter.hx",80,0xe597ef29)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(82)
	this->_check();
	HX_STACK_LINE(84)
	bool success = false;		HX_STACK_VAR(success,"success");
	HX_STACK_LINE(86)
	::haxe::ds::IntMap tmp = this->bindings;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	Dynamic tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	if ((tmp2)){
		HX_STACK_LINE(90)
		::List tmp3 = this->_to_remove;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &handler,Dynamic &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Emitter.hx",90,0xe597ef29)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
					__result->Add(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45") , handler,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(90)
		Dynamic tmp4 = _Function_2_1::Block(handler,event);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		tmp3->push(tmp4);
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::List tmp5 = this->connected;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			::_List::ListIterator tmp6 = ::_List::ListIterator_obj::__new(tmp5->h);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(92)
			::_List::ListIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				bool tmp7 = (_g->head != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				if ((tmp8)){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(92)
				Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					Dynamic tmp10 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					_g->val = tmp10;
					HX_STACK_LINE(92)
					Dynamic tmp11 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					_g->head = tmp11;
					HX_STACK_LINE(92)
					tmp9 = _g->val;
				}
				HX_STACK_LINE(92)
				Dynamic _info = tmp9;		HX_STACK_VAR(_info,"_info");
				HX_STACK_LINE(93)
				bool tmp10 = (_info->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic ) == event);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(93)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(93)
				if ((tmp10)){
					HX_STACK_LINE(93)
					tmp11 = (_info->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic ) == handler);
				}
				else{
					HX_STACK_LINE(93)
					tmp11 = false;
				}
				HX_STACK_LINE(93)
				if ((tmp11)){
					HX_STACK_LINE(94)
					::List tmp12 = this->connected;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(94)
					Dynamic tmp13 = _info;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(94)
					tmp12->remove(tmp13);
				}
			}
		}
		HX_STACK_LINE(99)
		success = true;
	}
	HX_STACK_LINE(103)
	bool tmp3 = success;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,off,return )

cpp::ArrayBase Emitter_obj::connections( Dynamic handler){
	HX_STACK_FRAME("luxe.Emitter","connections",0x18f076bd,"luxe.Emitter.connections","luxe/Emitter.hx",107,0xe597ef29)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(109)
	cpp::ArrayBase list = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		::List tmp = this->connected;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->h);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		while((true)){
			HX_STACK_LINE(111)
			bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			if ((tmp3)){
				HX_STACK_LINE(111)
				break;
			}
			HX_STACK_LINE(111)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(111)
				_g->val = tmp5;
				HX_STACK_LINE(111)
				Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(111)
				_g->head = tmp6;
				HX_STACK_LINE(111)
				tmp4 = _g->val;
			}
			HX_STACK_LINE(111)
			Dynamic _info = tmp4;		HX_STACK_VAR(_info,"_info");
			HX_STACK_LINE(112)
			bool tmp5 = (_info->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic ) == handler);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			if ((tmp5)){
				HX_STACK_LINE(113)
				Dynamic tmp6 = _info;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(113)
				list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
			}
		}
	}
	HX_STACK_LINE(117)
	return list;
}


HX_DEFINE_DYNAMIC_FUNC1(Emitter_obj,connections,return )

Void Emitter_obj::_check( ){
{
		HX_STACK_FRAME("luxe.Emitter","_check",0x5c9854e1,"luxe.Emitter._check","luxe/Emitter.hx",123,0xe597ef29)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		bool tmp = this->_checking;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		if ((tmp)){
			HX_STACK_LINE(126)
			return null();
		}
		HX_STACK_LINE(129)
		this->_checking = true;
		HX_STACK_LINE(131)
		::List tmp1 = this->_to_remove;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		if ((tmp3)){
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::List tmp4 = this->_to_remove;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(133)
				::_List::ListIterator tmp5 = ::_List::ListIterator_obj::__new(tmp4->h);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(133)
				::_List::ListIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(133)
				while((true)){
					HX_STACK_LINE(133)
					bool tmp6 = (_g->head != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(133)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(133)
					if ((tmp7)){
						HX_STACK_LINE(133)
						break;
					}
					HX_STACK_LINE(133)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(133)
					{
						HX_STACK_LINE(133)
						Dynamic tmp9 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(133)
						_g->val = tmp9;
						HX_STACK_LINE(133)
						Dynamic tmp10 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(133)
						_g->head = tmp10;
						HX_STACK_LINE(133)
						tmp8 = _g->val;
					}
					HX_STACK_LINE(133)
					Dynamic _node = tmp8;		HX_STACK_VAR(_node,"_node");
					HX_STACK_LINE(135)
					::haxe::ds::IntMap tmp9 = this->bindings;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(135)
					Dynamic tmp10 = _node->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(135)
					cpp::ArrayBase list = tmp9->get(tmp10);		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(136)
					Dynamic tmp11 = _node->__Field(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(136)
					list->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
					HX_STACK_LINE(139)
					bool tmp12 = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(139)
					if ((tmp12)){
						HX_STACK_LINE(140)
						::haxe::ds::IntMap tmp13 = this->bindings;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(140)
						Dynamic tmp14 = _node->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(140)
						tmp13->remove(tmp14);
					}
				}
			}
			HX_STACK_LINE(145)
			this->_to_remove = null();
			HX_STACK_LINE(146)
			::List tmp4 = ::List_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			this->_to_remove = tmp4;
		}
		HX_STACK_LINE(150)
		this->_checking = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Emitter_obj,_check,(void))


Emitter_obj::Emitter_obj()
{
}

void Emitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Emitter);
	HX_MARK_MEMBER_NAME(bindings,"bindings");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(_to_remove,"_to_remove");
	HX_MARK_MEMBER_NAME(_checking,"_checking");
	HX_MARK_END_CLASS();
}

void Emitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bindings,"bindings");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(_to_remove,"_to_remove");
	HX_VISIT_MEMBER_NAME(_checking,"_checking");
}

Dynamic Emitter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_check") ) { return _check_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bindings") ) { return bindings; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		if (HX_FIELD_EQ(inName,"_checking") ) { return _checking; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_to_remove") ) { return _to_remove; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"connections") ) { return connections_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Emitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bindings") ) { bindings=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_checking") ) { _checking=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_to_remove") ) { _to_remove=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Emitter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Emitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bindings","\x8e","\x51","\xac","\xc8"));
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("_to_remove","\x89","\x39","\xe5","\x30"));
	outFields->push(HX_HCSTRING("_checking","\x79","\x18","\x91","\xf4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Emitter_obj,bindings),HX_HCSTRING("bindings","\x8e","\x51","\xac","\xc8")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Emitter_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Emitter_obj,_to_remove),HX_HCSTRING("_to_remove","\x89","\x39","\xe5","\x30")},
	{hx::fsBool,(int)offsetof(Emitter_obj,_checking),HX_HCSTRING("_checking","\x79","\x18","\x91","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bindings","\x8e","\x51","\xac","\xc8"),
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("_to_remove","\x89","\x39","\xe5","\x30"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("connections","\x95","\x7a","\x39","\x7b"),
	HX_HCSTRING("_checking","\x79","\x18","\x91","\xf4"),
	HX_HCSTRING("_check","\x09","\xe0","\x9d","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Emitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Emitter_obj::__mClass,"__mClass");
};

#endif

hx::Class Emitter_obj::__mClass;

void Emitter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Emitter","\x96","\xc0","\xe7","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Emitter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Emitter_obj >;
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
