#include <hxcpp.h>

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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
#ifndef INCLUDED_snow_system_window_Windowing
#include <snow/system/window/Windowing.h>
#endif
namespace luxe{

Void Cursor_obj::__construct(::luxe::Screen _screen)
{
HX_STACK_FRAME("luxe.Cursor","new",0xa48b30a0,"luxe.Cursor.new","luxe/Screen.hx",127,0xd2f30fd9)
HX_STACK_THIS(this)
HX_STACK_ARG(_screen,"_screen")
{
	HX_STACK_LINE(143)
	this->ignore = false;
	HX_STACK_LINE(137)
	this->lock = false;
	HX_STACK_LINE(132)
	this->grab = false;
	HX_STACK_LINE(130)
	this->visible = true;
	HX_STACK_LINE(148)
	this->screen = _screen;
	HX_STACK_LINE(149)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	this->set_pos(tmp);
}
;
	return null();
}

//Cursor_obj::~Cursor_obj() { }

Dynamic Cursor_obj::__CreateEmpty() { return  new Cursor_obj; }
hx::ObjectPtr< Cursor_obj > Cursor_obj::__new(::luxe::Screen _screen)
{  hx::ObjectPtr< Cursor_obj > _result_ = new Cursor_obj();
	_result_->__construct(_screen);
	return _result_;}

Dynamic Cursor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cursor_obj > _result_ = new Cursor_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Cursor_obj::set_internal( ::phoenix::Vector _pos){
{
		HX_STACK_FRAME("luxe.Cursor","set_internal",0x8f03d67a,"luxe.Cursor.set_internal","luxe/Screen.hx",154,0xd2f30fd9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pos,"_pos")
		HX_STACK_LINE(156)
		this->ignore = true;
		HX_STACK_LINE(157)
		::phoenix::Vector tmp = _pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		this->set_pos(tmp);
		HX_STACK_LINE(158)
		this->ignore = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_internal,(void))

bool Cursor_obj::get_visible( ){
	HX_STACK_FRAME("luxe.Cursor","get_visible",0xa01078c9,"luxe.Cursor.get_visible","luxe/Screen.hx",164,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(166)
	bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_visible,return )

bool Cursor_obj::set_visible( bool _visible){
	HX_STACK_FRAME("luxe.Cursor","set_visible",0xaa7d7fd5,"luxe.Cursor.set_visible","luxe/Screen.hx",170,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_visible,"_visible")
	HX_STACK_LINE(172)
	::luxe::Screen tmp = this->screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::snow::Snow tmp1 = tmp->core->app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	bool tmp2 = _visible;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	tmp1->windowing->__Field(HX_HCSTRING("enable_cursor","\x52","\x18","\x1a","\x72"), hx::paccDynamic )(tmp2);
	HX_STACK_LINE(174)
	bool tmp3 = this->visible = _visible;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_visible,return )

bool Cursor_obj::get_grab( ){
	HX_STACK_FRAME("luxe.Cursor","get_grab",0x520a4315,"luxe.Cursor.get_grab","luxe/Screen.hx",178,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(180)
	bool tmp = this->grab;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_grab,return )

bool Cursor_obj::get_lock( ){
	HX_STACK_FRAME("luxe.Cursor","get_lock",0x55560f34,"luxe.Cursor.get_lock","luxe/Screen.hx",184,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	bool tmp = this->lock;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_lock,return )

bool Cursor_obj::set_grab( bool _grab){
	HX_STACK_FRAME("luxe.Cursor","set_grab",0x00679c89,"luxe.Cursor.set_grab","luxe/Screen.hx",190,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_grab,"_grab")
	HX_STACK_LINE(192)
	::luxe::Screen tmp = this->screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	::snow::Snow tmp1 = tmp->core->app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	bool tmp2 = _grab;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	tmp1->window->__Field(HX_HCSTRING("set_grab","\xc9","\xe4","\x83","\x72"), hx::paccDynamic )(tmp2);
	HX_STACK_LINE(194)
	bool tmp3 = this->grab = _grab;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_grab,return )

bool Cursor_obj::set_lock( bool _lock){
	HX_STACK_FRAME("luxe.Cursor","set_lock",0x03b368a8,"luxe.Cursor.set_lock","luxe/Screen.hx",198,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_lock,"_lock")
	HX_STACK_LINE(200)
	::luxe::Screen tmp = this->screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	::snow::Snow tmp1 = tmp->core->app;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	bool tmp2 = _lock;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	tmp1->windowing->__Field(HX_HCSTRING("enable_cursor_lock","\x38","\x36","\x5b","\x04"), hx::paccDynamic )(tmp2);
	HX_STACK_LINE(202)
	bool tmp3 = this->lock = _lock;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_lock,return )

::phoenix::Vector Cursor_obj::get_pos( ){
	HX_STACK_FRAME("luxe.Cursor","get_pos",0x03d6a66b,"luxe.Cursor.get_pos","luxe/Screen.hx",206,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	::phoenix::Vector tmp = this->pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Cursor_obj,get_pos,return )

::phoenix::Vector Cursor_obj::set_pos( ::phoenix::Vector _p){
	HX_STACK_FRAME("luxe.Cursor","set_pos",0xf6d83777,"luxe.Cursor.set_pos","luxe/Screen.hx",212,0xd2f30fd9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(214)
	::phoenix::Vector tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	if ((tmp2)){
		HX_STACK_LINE(214)
		tmp3 = (_p != null());
	}
	else{
		HX_STACK_LINE(214)
		tmp3 = false;
	}
	HX_STACK_LINE(214)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(214)
	if ((tmp3)){
		HX_STACK_LINE(214)
		bool tmp5 = this->ignore;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(214)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(214)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(214)
		tmp4 = !(tmp7);
	}
	else{
		HX_STACK_LINE(214)
		tmp4 = false;
	}
	HX_STACK_LINE(214)
	if ((tmp4)){
		HX_STACK_LINE(215)
		::luxe::Screen tmp5 = this->screen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(215)
		::snow::Snow tmp6 = tmp5->core->app;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(215)
		Float tmp7 = _p->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(215)
		Float tmp9 = _p->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(215)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(215)
		tmp6->window->__Field(HX_HCSTRING("set_cursor_position","\x95","\x40","\x0e","\x8b"), hx::paccDynamic )(tmp8,tmp10);
	}
	HX_STACK_LINE(218)
	::phoenix::Vector tmp5 = this->pos = _p;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Cursor_obj,set_pos,return )


Cursor_obj::Cursor_obj()
{
}

void Cursor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cursor);
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(grab,"grab");
	HX_MARK_MEMBER_NAME(lock,"lock");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_END_CLASS();
}

void Cursor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(grab,"grab");
	HX_VISIT_MEMBER_NAME(lock,"lock");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
}

Dynamic Cursor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return inCallProp == hx::paccAlways ? get_pos() : pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { return inCallProp == hx::paccAlways ? get_grab() : grab; }
		if (HX_FIELD_EQ(inName,"lock") ) { return inCallProp == hx::paccAlways ? get_lock() : lock; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"ignore") ) { return ignore; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return inCallProp == hx::paccAlways ? get_visible() : visible; }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_grab") ) { return get_grab_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lock") ) { return get_lock_dyn(); }
		if (HX_FIELD_EQ(inName,"set_grab") ) { return set_grab_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lock") ) { return set_lock_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_internal") ) { return set_internal_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cursor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue);pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { if (inCallProp == hx::paccAlways) return set_grab(inValue);grab=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lock") ) { if (inCallProp == hx::paccAlways) return set_lock(inValue);lock=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::luxe::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignore") ) { ignore=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Cursor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Cursor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"));
	outFields->push(HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"));
	outFields->push(HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Cursor_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(Cursor_obj,grab),HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44")},
	{hx::fsBool,(int)offsetof(Cursor_obj,lock),HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Cursor_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::luxe::Screen*/ ,(int)offsetof(Cursor_obj,screen),HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsBool,(int)offsetof(Cursor_obj,ignore),HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"),
	HX_HCSTRING("set_internal","\xba","\x3e","\x89","\xf2"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_grab","\x55","\x8b","\x26","\xc4"),
	HX_HCSTRING("get_lock","\x74","\x57","\x72","\xc7"),
	HX_HCSTRING("set_grab","\xc9","\xe4","\x83","\x72"),
	HX_HCSTRING("set_lock","\xe8","\xb0","\xcf","\x75"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cursor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cursor_obj::__mClass,"__mClass");
};

#endif

hx::Class Cursor_obj::__mClass;

void Cursor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Cursor","\xae","\xa0","\x46","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Cursor_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Cursor_obj >;
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
