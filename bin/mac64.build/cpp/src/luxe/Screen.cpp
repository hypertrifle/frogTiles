#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Cursor
#include <luxe/Cursor.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
namespace luxe{

Void Screen_obj::__construct(::luxe::Core _core,int _w,int _h)
{
HX_STACK_FRAME("luxe.Screen","new",0x40e0e036,"luxe.Screen.new","luxe/Screen.hx",61,0xd2f30fd9)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
HX_STACK_ARG(_w,"_w")
HX_STACK_ARG(_h,"_h")
{
	HX_STACK_LINE(63)
	this->core = _core;
	HX_STACK_LINE(64)
	::luxe::Cursor tmp = ::luxe::Cursor_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	this->cursor = tmp;
	HX_STACK_LINE(66)
	this->width = _w;
	HX_STACK_LINE(67)
	this->height = _h;
}
;
	return null();
}

//Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new(::luxe::Core _core,int _w,int _h)
{  hx::ObjectPtr< Screen_obj > _result_ = new Screen_obj();
	_result_->__construct(_core,_w,_h);
	return _result_;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > _result_ = new Screen_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String Screen_obj::toString( ){
	HX_STACK_FRAME("luxe.Screen","toString",0xc38a9916,"luxe.Screen.toString","luxe/Screen.hx",71,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	int tmp = this->get_w();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::String tmp1 = (HX_HCSTRING("luxe.Screen({ w:","\xcc","\x3e","\xdf","\x17") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	::String tmp2 = (tmp1 + HX_HCSTRING(", h:","\x46","\x06","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	int tmp3 = this->get_h();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	::String tmp5 = (tmp4 + HX_HCSTRING(" })","\x2c","\xb5","\x18","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(72)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,toString,return )

bool Screen_obj::point_inside( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Screen","point_inside",0xfec30cb5,"luxe.Screen.point_inside","luxe/Screen.hx",78,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(80)
	bool tmp = (_p->x < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	if ((tmp)){
		HX_STACK_LINE(80)
		return false;
	}
	HX_STACK_LINE(81)
	bool tmp1 = (_p->y < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	if ((tmp1)){
		HX_STACK_LINE(81)
		return false;
	}
	HX_STACK_LINE(82)
	Float tmp2 = _p->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	Float tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	if ((tmp4)){
		HX_STACK_LINE(82)
		return false;
	}
	HX_STACK_LINE(83)
	Float tmp5 = _p->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(83)
	if ((tmp7)){
		HX_STACK_LINE(83)
		return false;
	}
	HX_STACK_LINE(85)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,point_inside,return )

bool Screen_obj::point_inside_xy( Float _x,Float _y){
	HX_STACK_FRAME("luxe.Screen","point_inside_xy",0xc398918b,"luxe.Screen.point_inside_xy","luxe/Screen.hx",90,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(92)
	bool tmp = (_x < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	if ((tmp)){
		HX_STACK_LINE(92)
		return false;
	}
	HX_STACK_LINE(93)
	bool tmp1 = (_y < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	if ((tmp1)){
		HX_STACK_LINE(93)
		return false;
	}
	HX_STACK_LINE(94)
	Float tmp2 = _x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	Float tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	if ((tmp4)){
		HX_STACK_LINE(94)
		return false;
	}
	HX_STACK_LINE(95)
	Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(95)
	if ((tmp7)){
		HX_STACK_LINE(95)
		return false;
	}
	HX_STACK_LINE(97)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,point_inside_xy,return )

Void Screen_obj::internal_resized( Float _w,Float _h){
{
		HX_STACK_FRAME("luxe.Screen","internal_resized",0x20806418,"luxe.Screen.internal_resized","luxe/Screen.hx",103,0xd2f30fd9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_w,"_w")
		HX_STACK_ARG(_h,"_h")
		HX_STACK_LINE(105)
		this->width = _w;
		HX_STACK_LINE(106)
		this->height = _h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,internal_resized,(void))

::phoenix::Vector Screen_obj::get_mid( ){
	HX_STACK_FRAME("luxe.Screen","get_mid",0x6c488cf5,"luxe.Screen.get_mid","luxe/Screen.hx",114,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	int tmp = this->get_w();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	int tmp3 = this->get_h();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(114)
	::phoenix::Vector tmp6 = ::phoenix::Vector_obj::__new(tmp2,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(114)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mid,return )

::phoenix::Vector Screen_obj::get_size( ){
	HX_STACK_FRAME("luxe.Screen","get_size",0x572a24b4,"luxe.Screen.get_size","luxe/Screen.hx",115,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	int tmp = this->get_w();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	int tmp1 = this->get_h();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(tmp,tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_size,return )

::phoenix::Rectangle Screen_obj::get_bounds( ){
	HX_STACK_FRAME("luxe.Screen","get_bounds",0xb6932d28,"luxe.Screen.get_bounds","luxe/Screen.hx",116,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	int tmp = this->get_w();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1 = this->get_h();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	::phoenix::Rectangle tmp2 = ::phoenix::Rectangle_obj::__new((int)0,(int)0,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_bounds,return )

int Screen_obj::get_w( ){
	HX_STACK_FRAME("luxe.Screen","get_w",0xdb31d6a4,"luxe.Screen.get_w","luxe/Screen.hx",117,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_w,return )

int Screen_obj::get_h( ){
	HX_STACK_FRAME("luxe.Screen","get_h",0xdb31d695,"luxe.Screen.get_h","luxe/Screen.hx",118,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	Float tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_h,return )


Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(mid,"mid");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mid,"mid");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(core,"core");
}

Dynamic Screen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return inCallProp == hx::paccAlways ? get_w() : w; }
		if (HX_FIELD_EQ(inName,"h") ) { return inCallProp == hx::paccAlways ? get_h() : h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { return inCallProp == hx::paccAlways ? get_mid() : mid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp == hx::paccAlways ? get_size() : size; }
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"get_w") ) { return get_w_dyn(); }
		if (HX_FIELD_EQ(inName,"get_h") ) { return get_h_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return inCallProp == hx::paccAlways ? get_bounds() : bounds; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"cursor") ) { return cursor; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_mid") ) { return get_mid_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"point_inside") ) { return point_inside_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"point_inside_xy") ) { return point_inside_xy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internal_resized") ) { return internal_resized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { mid=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::phoenix::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast< ::luxe::Cursor >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Screen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mid","\x88","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Screen_obj,mid),HX_HCSTRING("mid","\x88","\x11","\x53","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Screen_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::phoenix::Rectangle*/ ,(int)offsetof(Screen_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsInt,(int)offsetof(Screen_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Screen_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Screen_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Screen_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::luxe::Cursor*/ ,(int)offsetof(Screen_obj,cursor),HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e")},
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(Screen_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mid","\x88","\x11","\x53","\x00"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"),
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("point_inside","\x4b","\xc7","\xa9","\x1d"),
	HX_HCSTRING("point_inside_xy","\xb5","\x18","\x48","\xcd"),
	HX_HCSTRING("internal_resized","\xae","\x21","\x67","\x90"),
	HX_HCSTRING("get_mid","\x1f","\xda","\xc7","\x26"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("get_bounds","\x3e","\xf6","\xa4","\x56"),
	HX_HCSTRING("get_w","\x4e","\xa5","\x60","\x91"),
	HX_HCSTRING("get_h","\x3f","\xa5","\x60","\x91"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#endif

hx::Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Screen","\x44","\x4d","\xbb","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Screen_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Screen_obj >;
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
