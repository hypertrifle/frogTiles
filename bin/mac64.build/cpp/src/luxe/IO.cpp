#include <hxcpp.h>

#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_IO
#include <luxe/IO.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_system_io_IO
#include <snow/system/io/IO.h>
#endif
namespace luxe{

Void IO_obj::__construct(::luxe::Core _core)
{
HX_STACK_FRAME("luxe.IO","new",0xf63a6990,"luxe.IO.new","luxe/IO.hx",11,0xc6be543f)
HX_STACK_THIS(this)
HX_STACK_ARG(_core,"_core")
{
	HX_STACK_LINE(11)
	this->core = _core;
}
;
	return null();
}

//IO_obj::~IO_obj() { }

Dynamic IO_obj::__CreateEmpty() { return  new IO_obj; }
hx::ObjectPtr< IO_obj > IO_obj::__new(::luxe::Core _core)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(_core);
	return _result_;}

Dynamic IO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IO_obj > _result_ = new IO_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void IO_obj::url_open( ::String _url){
{
		HX_STACK_FRAME("luxe.IO","url_open",0x879d3aaa,"luxe.IO.url_open","luxe/IO.hx",27,0xc6be543f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_url,"_url")
		HX_STACK_LINE(27)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		::snow::_system::io::IO tmp1 = tmp->app->io;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::String tmp2 = _url;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp1->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("url_open","\xda","\x21","\xed","\xd3"), hx::paccDynamic )(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,url_open,(void))

bool IO_obj::string_save( ::String _key,::String _value,hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("luxe.IO","string_save",0x981f31db,"luxe.IO.string_save","luxe/IO.hx",37,0xc6be543f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_value,"_value")
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(39)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::snow::_system::io::IO tmp1 = tmp->app->io;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		::String tmp2 = _key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::String tmp3 = _value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		int tmp4 = _slot;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		bool tmp5 = tmp1->__Field(HX_HCSTRING("string_save","\xab","\xe8","\x33","\x77"), hx::paccDynamic )(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(IO_obj,string_save,return )

::String IO_obj::string_load( ::String _key,hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("luxe.IO","string_load",0x938940c4,"luxe.IO.string_load","luxe/IO.hx",46,0xc6be543f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_key,"_key")
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(48)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::snow::_system::io::IO tmp1 = tmp->app->io;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::String tmp2 = _key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		int tmp3 = _slot;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		::String tmp4 = tmp1->__Field(HX_HCSTRING("string_load","\x94","\xf7","\x9d","\x72"), hx::paccDynamic )(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IO_obj,string_load,return )

bool IO_obj::string_destroy( hx::Null< int >  __o__slot){
int _slot = __o__slot.Default(0);
	HX_STACK_FRAME("luxe.IO","string_destroy",0x732ffd1c,"luxe.IO.string_destroy","luxe/IO.hx",54,0xc6be543f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_slot,"_slot")
{
		HX_STACK_LINE(56)
		::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		::snow::_system::io::IO tmp1 = tmp->app->io;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		int tmp2 = _slot;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		bool tmp3 = tmp1->__Field(HX_HCSTRING("string_destroy","\x4c","\x68","\xed","\x0e"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(IO_obj,string_destroy,return )

::String IO_obj::get_app_path( ){
	HX_STACK_FRAME("luxe.IO","get_app_path",0x04eb121c,"luxe.IO.get_app_path","luxe/IO.hx",64,0xc6be543f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	::snow::_system::io::IO tmp1 = tmp->app->io;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	::String tmp2 = tmp1->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("app_path","\x43","\x9d","\xdc","\xa2"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,get_app_path,return )

::String IO_obj::get_app_path_prefs( ){
	HX_STACK_FRAME("luxe.IO","get_app_path_prefs",0xda4d1e8d,"luxe.IO.get_app_path_prefs","luxe/IO.hx",70,0xc6be543f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	::luxe::Core tmp = this->core;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::snow::_system::io::IO tmp1 = tmp->app->io;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	::String tmp2 = tmp1->__Field(HX_HCSTRING("module","\xac","\x34","\xd3","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("app_path_prefs","\xf4","\x00","\x3e","\x80"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,get_app_path_prefs,return )

Void IO_obj::init( ){
{
		HX_STACK_FRAME("luxe.IO","init",0x799aabe0,"luxe.IO.init","luxe/IO.hx",78,0xc6be543f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IO_obj,init,(void))


IO_obj::IO_obj()
{
}

void IO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IO);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_END_CLASS();
}

void IO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
}

Dynamic IO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return core; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"app_path") ) { if (inCallProp == hx::paccAlways) return get_app_path(); }
		if (HX_FIELD_EQ(inName,"url_open") ) { return url_open_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"string_save") ) { return string_save_dyn(); }
		if (HX_FIELD_EQ(inName,"string_load") ) { return string_load_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_app_path") ) { return get_app_path_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"app_path_prefs") ) { if (inCallProp == hx::paccAlways) return get_app_path_prefs(); }
		if (HX_FIELD_EQ(inName,"string_destroy") ) { return string_destroy_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_app_path_prefs") ) { return get_app_path_prefs_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IO_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast< ::luxe::Core >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool IO_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void IO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"));
	outFields->push(HX_HCSTRING("app_path","\x43","\x9d","\xdc","\xa2"));
	outFields->push(HX_HCSTRING("app_path_prefs","\xf4","\x00","\x3e","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Core*/ ,(int)offsetof(IO_obj,core),HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("url_open","\xda","\x21","\xed","\xd3"),
	HX_HCSTRING("string_save","\xab","\xe8","\x33","\x77"),
	HX_HCSTRING("string_load","\x94","\xf7","\x9d","\x72"),
	HX_HCSTRING("string_destroy","\x4c","\x68","\xed","\x0e"),
	HX_HCSTRING("get_app_path","\x4c","\x51","\xf6","\x57"),
	HX_HCSTRING("get_app_path_prefs","\xbd","\xe1","\xd7","\x1b"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#endif

hx::Class IO_obj::__mClass;

void IO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.IO","\x9e","\xa1","\xca","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &IO_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IO_obj >;
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
