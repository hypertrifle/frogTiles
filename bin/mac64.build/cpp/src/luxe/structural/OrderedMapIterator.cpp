#include <hxcpp.h>

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

Void OrderedMapIterator_obj::__construct(::luxe::structural::OrderedMap omap)
{
HX_STACK_FRAME("luxe.structural.OrderedMapIterator","new",0x8b5ca708,"luxe.structural.OrderedMapIterator.new","luxe/structural/OrderedMap.hx",9,0x2ffa3116)
HX_STACK_THIS(this)
HX_STACK_ARG(omap,"omap")
{
	HX_STACK_LINE(12)
	this->index = (int)0;
	HX_STACK_LINE(15)
	this->map = omap;
}
;
	return null();
}

//OrderedMapIterator_obj::~OrderedMapIterator_obj() { }

Dynamic OrderedMapIterator_obj::__CreateEmpty() { return  new OrderedMapIterator_obj; }
hx::ObjectPtr< OrderedMapIterator_obj > OrderedMapIterator_obj::__new(::luxe::structural::OrderedMap omap)
{  hx::ObjectPtr< OrderedMapIterator_obj > _result_ = new OrderedMapIterator_obj();
	_result_->__construct(omap);
	return _result_;}

Dynamic OrderedMapIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OrderedMapIterator_obj > _result_ = new OrderedMapIterator_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool OrderedMapIterator_obj::hasNext( ){
	HX_STACK_FRAME("luxe.structural.OrderedMapIterator","hasNext",0x42c3f015,"luxe.structural.OrderedMapIterator.hasNext","luxe/structural/OrderedMap.hx",17,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	::luxe::structural::OrderedMap tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	int tmp2 = tmp1->_keys->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMapIterator_obj,hasNext,return )

Dynamic OrderedMapIterator_obj::next( ){
	HX_STACK_FRAME("luxe.structural.OrderedMapIterator","next",0x65b5814b,"luxe.structural.OrderedMapIterator.next","luxe/structural/OrderedMap.hx",19,0x2ffa3116)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::luxe::structural::OrderedMap tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		int tmp2 = (this->index)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		Dynamic tmp3 = tmp1->_keys->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		Dynamic key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(19)
		::luxe::structural::OrderedMap tmp4 = this->map;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		Dynamic tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		Dynamic tmp6 = tmp4->map->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(19)
		tmp = tmp6;
	}
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMapIterator_obj,next,return )


OrderedMapIterator_obj::OrderedMapIterator_obj()
{
}

void OrderedMapIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OrderedMapIterator);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void OrderedMapIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(index,"index");
}

Dynamic OrderedMapIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OrderedMapIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::luxe::structural::OrderedMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OrderedMapIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void OrderedMapIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::OrderedMap*/ ,(int)offsetof(OrderedMapIterator_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsInt,(int)offsetof(OrderedMapIterator_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OrderedMapIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OrderedMapIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class OrderedMapIterator_obj::__mClass;

void OrderedMapIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.OrderedMapIterator","\x16","\xc3","\xb2","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &OrderedMapIterator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OrderedMapIterator_obj >;
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
