#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap
#include <luxe/structural/OrderedMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMapIterator
#include <luxe/structural/OrderedMapIterator.h>
#endif
namespace luxe{
namespace structural{

Void OrderedMap_obj::__construct(::haxe::IMap _map)
{
HX_STACK_FRAME("luxe.structural.OrderedMap","new",0x58ad39fa,"luxe.structural.OrderedMap.new","luxe/structural/OrderedMap.hx",23,0x2ffa3116)
HX_STACK_THIS(this)
HX_STACK_ARG(_map,"_map")
{
	HX_STACK_LINE(26)
	this->idx = (int)0;
	HX_STACK_LINE(32)
	this->_keys = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(33)
	this->map = _map;
}
;
	return null();
}

//OrderedMap_obj::~OrderedMap_obj() { }

Dynamic OrderedMap_obj::__CreateEmpty() { return  new OrderedMap_obj; }
hx::ObjectPtr< OrderedMap_obj > OrderedMap_obj::__new(::haxe::IMap _map)
{  hx::ObjectPtr< OrderedMap_obj > _result_ = new OrderedMap_obj();
	_result_->__construct(_map);
	return _result_;}

Dynamic OrderedMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OrderedMap_obj > _result_ = new OrderedMap_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *OrderedMap_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::IMap_obj)) return operator ::haxe::IMap_obj *();
	return super::__ToInterface(inType);
}

OrderedMap_obj::operator ::haxe::IMap_obj *()
	{ return new ::haxe::IMap_delegate_< OrderedMap_obj >(this); }
Void OrderedMap_obj::set( Dynamic key,Dynamic value){
{
		HX_STACK_FRAME("luxe.structural.OrderedMap","set",0x58b1053c,"luxe.structural.OrderedMap.set","luxe/structural/OrderedMap.hx",36,0x2ffa3116)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(37)
		::haxe::IMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		Dynamic tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		if ((tmp3)){
			HX_STACK_LINE(37)
			Dynamic tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			this->_keys->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		}
		HX_STACK_LINE(38)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			::haxe::IMap tmp5 = this->map;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			Dynamic tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(38)
			tmp5->set(tmp6,tmp7);
			HX_STACK_LINE(38)
			tmp4 = value;
		}
		HX_STACK_LINE(38)
		tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(OrderedMap_obj,set,(void))

::String OrderedMap_obj::toString( ){
	HX_STACK_FRAME("luxe.structural.OrderedMap","toString",0x094e58d2,"luxe.structural.OrderedMap.toString","luxe/structural/OrderedMap.hx",41,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	::String _ret = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_ret,"_ret");
	HX_STACK_LINE(42)
	int _cnt = (int)0;		HX_STACK_VAR(_cnt,"_cnt");
	HX_STACK_LINE(42)
	int tmp = this->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	int _len = tmp;		HX_STACK_VAR(_len,"_len");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		cpp::ArrayBase _g1 = this->_keys;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			if ((tmp2)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			Dynamic k = tmp3;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(43)
			++(_g);
			HX_STACK_LINE(43)
			Dynamic tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			::String tmp7 = (tmp6 + HX_HCSTRING(" => ","\x7f","\x53","\x55","\x15"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			::haxe::IMap tmp8 = this->map;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			Dynamic tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(43)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			::String tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			int tmp14 = (_cnt)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(43)
			int tmp15 = (_len - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(43)
			bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(43)
			::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(43)
			if ((tmp16)){
				HX_STACK_LINE(43)
				tmp17 = HX_HCSTRING(", ","\x74","\x26","\x00","\x00");
			}
			else{
				HX_STACK_LINE(43)
				tmp17 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(43)
			::String tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(43)
			hx::AddEq(_ret,tmp18);
		}
	}
	HX_STACK_LINE(44)
	::String tmp1 = (HX_HCSTRING("{","\x7b","\x00","\x00","\x00") + _ret);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	::String tmp2 = (tmp1 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMap_obj,toString,return )

::luxe::structural::OrderedMapIterator OrderedMap_obj::iterator( ){
	HX_STACK_FRAME("luxe.structural.OrderedMap","iterator",0x6479d214,"luxe.structural.OrderedMap.iterator","luxe/structural/OrderedMap.hx",47,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::luxe::structural::OrderedMapIterator tmp = ::luxe::structural::OrderedMapIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMap_obj,iterator,return )

bool OrderedMap_obj::remove( Dynamic key){
	HX_STACK_FRAME("luxe.structural.OrderedMap","remove",0x7701aeea,"luxe.structural.OrderedMap.remove","luxe/structural/OrderedMap.hx",48,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(48)
	::haxe::IMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	Dynamic tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	bool tmp3 = tmp->remove(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	if ((tmp3)){
		HX_STACK_LINE(48)
		Dynamic tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		tmp4 = this->_keys->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp6);
	}
	else{
		HX_STACK_LINE(48)
		tmp4 = false;
	}
	HX_STACK_LINE(48)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(OrderedMap_obj,remove,return )

bool OrderedMap_obj::exists( Dynamic key){
	HX_STACK_FRAME("luxe.structural.OrderedMap","exists",0x32593082,"luxe.structural.OrderedMap.exists","luxe/structural/OrderedMap.hx",49,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(49)
	::haxe::IMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	Dynamic tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(OrderedMap_obj,exists,return )

Dynamic OrderedMap_obj::get( Dynamic key){
	HX_STACK_FRAME("luxe.structural.OrderedMap","get",0x58a7ea30,"luxe.structural.OrderedMap.get","luxe/structural/OrderedMap.hx",50,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(50)
	::haxe::IMap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	Dynamic tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(OrderedMap_obj,get,return )

Dynamic OrderedMap_obj::keys( ){
	HX_STACK_FRAME("luxe.structural.OrderedMap","keys",0x3ce9df1a,"luxe.structural.OrderedMap.keys","luxe/structural/OrderedMap.hx",51,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	Dynamic tmp = this->_keys->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMap_obj,keys,return )


OrderedMap_obj::OrderedMap_obj()
{
}

void OrderedMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OrderedMap);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(idx,"idx");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_END_CLASS();
}

void OrderedMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(idx,"idx");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
}

Dynamic OrderedMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		if (HX_FIELD_EQ(inName,"idx") ) { return idx; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OrderedMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::haxe::IMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idx") ) { idx=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OrderedMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void OrderedMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("idx","\x3d","\x04","\x50","\x00"));
	outFields->push(HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::IMap*/ ,(int)offsetof(OrderedMap_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsInt,(int)offsetof(OrderedMap_obj,idx),HX_HCSTRING("idx","\x3d","\x04","\x50","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(OrderedMap_obj,_keys),HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("idx","\x3d","\x04","\x50","\x00"),
	HX_HCSTRING("_keys","\xd3","\xfd","\x17","\xfa"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OrderedMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OrderedMap_obj::__mClass,"__mClass");
};

#endif

hx::Class OrderedMap_obj::__mClass;

void OrderedMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.OrderedMap","\x08","\x75","\xde","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &OrderedMap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OrderedMap_obj >;
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
} // end namespace structural
