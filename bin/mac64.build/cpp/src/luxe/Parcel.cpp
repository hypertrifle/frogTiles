#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_Timer
#include <snow/api/Timer.h>
#endif
#ifndef INCLUDED_snow_core_native_Core
#include <snow/core/native/Core.h>
#endif
namespace luxe{

Void Parcel_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.Parcel","new",0xe0269013,"luxe.Parcel.new","luxe/Parcel.hx",73,0x19b0ca9c)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(102)
	this->load_start_delay = ((Float)0.2);
	HX_STACK_LINE(101)
	this->load_time_spacing = ((Float)0.05);
	HX_STACK_LINE(100)
	this->start_load = ((Float)0.0);
	HX_STACK_LINE(88)
	this->time_to_load = ((Float)0.0);
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		if ((tmp)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",106,0x19b0ca9c)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(106)
			Dynamic tmp1 = _Function_3_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			_options = tmp1;
		}
		HX_STACK_LINE(106)
		_options;
	}
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		bool tmp = (_options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		if ((tmp)){
			HX_STACK_LINE(107)
			::luxe::Resources tmp1 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			_options->__FieldRef(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")) = tmp1;
		}
		HX_STACK_LINE(107)
		_options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic );
	}
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		bool tmp = (_options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		if ((tmp)){
			HX_STACK_LINE(108)
			::luxe::utils::Utils tmp1 = ::Luxe_obj::utils;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			::String tmp2 = tmp1->uniqueid(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			_options->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = tmp2;
		}
		HX_STACK_LINE(108)
		_options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(110)
	bool tmp = (_options->__Field(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	if ((tmp)){
		HX_STACK_LINE(110)
		this->oncomplete = _options->__Field(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83"), hx::paccDynamic );
	}
	HX_STACK_LINE(111)
	bool tmp1 = (_options->__Field(HX_HCSTRING("onprogress","\xcc","\x0f","\x30","\x8a"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	if ((tmp1)){
		HX_STACK_LINE(111)
		this->onprogress = _options->__Field(HX_HCSTRING("onprogress","\xcc","\x0f","\x30","\x8a"), hx::paccDynamic );
	}
	HX_STACK_LINE(112)
	bool tmp2 = (_options->__Field(HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	if ((tmp2)){
		HX_STACK_LINE(112)
		this->onfailed = _options->__Field(HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93"), hx::paccDynamic );
	}
	HX_STACK_LINE(114)
	bool tmp3 = (_options->__Field(HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	if ((tmp3)){
		HX_STACK_LINE(114)
		this->load_time_spacing = _options->__Field(HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88"), hx::paccDynamic );
	}
	HX_STACK_LINE(115)
	bool tmp4 = (_options->__Field(HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	if ((tmp4)){
		HX_STACK_LINE(115)
		this->load_start_delay = _options->__Field(HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20"), hx::paccDynamic );
	}
	HX_STACK_LINE(117)
	this->state = (int)0;
	HX_STACK_LINE(118)
	this->loaded = Array_obj< ::String >::__new();
	HX_STACK_LINE(119)
	::luxe::Emitter tmp5 = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(119)
	this->emitter = tmp5;
	HX_STACK_LINE(120)
	this->_system = _options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic );
	HX_STACK_LINE(121)
	this->id = _options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(122)
	Dynamic tmp6 = this->empty_list();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(122)
	this->list = tmp6;
	HX_STACK_LINE(124)
	bool tmp7 = (_options->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(124)
	if ((tmp7)){
		HX_STACK_LINE(124)
		Dynamic tmp8 = this->list;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(124)
		tmp8->__FieldRef(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")) = _options->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic );
	}
	HX_STACK_LINE(125)
	bool tmp8 = (_options->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(125)
	if ((tmp8)){
		HX_STACK_LINE(125)
		Dynamic tmp9 = this->list;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(125)
		tmp9->__FieldRef(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d")) = _options->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic );
	}
	HX_STACK_LINE(126)
	bool tmp9 = (_options->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(126)
	if ((tmp9)){
		HX_STACK_LINE(126)
		Dynamic tmp10 = this->list;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		tmp10->__FieldRef(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54")) = _options->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic );
	}
	HX_STACK_LINE(127)
	bool tmp10 = (_options->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(127)
	if ((tmp10)){
		HX_STACK_LINE(127)
		Dynamic tmp11 = this->list;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(127)
		tmp11->__FieldRef(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65")) = _options->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic );
	}
	HX_STACK_LINE(128)
	bool tmp11 = (_options->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(128)
	if ((tmp11)){
		HX_STACK_LINE(128)
		Dynamic tmp12 = this->list;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(128)
		tmp12->__FieldRef(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04")) = _options->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic );
	}
	HX_STACK_LINE(129)
	bool tmp12 = (_options->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(129)
	if ((tmp12)){
		HX_STACK_LINE(129)
		Dynamic tmp13 = this->list;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(129)
		tmp13->__FieldRef(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")) = _options->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic );
	}
	HX_STACK_LINE(130)
	bool tmp13 = (_options->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(130)
	if ((tmp13)){
		HX_STACK_LINE(130)
		Dynamic tmp14 = this->list;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(130)
		tmp14->__FieldRef(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32")) = _options->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic );
	}
	HX_STACK_LINE(132)
	::luxe::Resources tmp14 = this->_system;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(132)
	tmp14->track(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Parcel_obj::~Parcel_obj() { }

Dynamic Parcel_obj::__CreateEmpty() { return  new Parcel_obj; }
hx::ObjectPtr< Parcel_obj > Parcel_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Parcel_obj > _result_ = new Parcel_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Parcel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parcel_obj > _result_ = new Parcel_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Parcel_obj::on( int ev,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Parcel","on",0x596658cc,"luxe.Parcel.on","luxe/Parcel.hx",138,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(138)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		int tmp1 = ev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),138,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		tmp->on(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,on,(void))

Void Parcel_obj::off( int ev,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Parcel","off",0xe0275322,"luxe.Parcel.off","luxe/Parcel.hx",139,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(139)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		int tmp1 = ev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),139,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		tmp->off(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,off,(void))

Void Parcel_obj::emit( int ev,Dynamic data){
{
		HX_STACK_FRAME("luxe.Parcel","emit",0x3baa9b40,"luxe.Parcel.emit","luxe/Parcel.hx",140,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(140)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		int tmp1 = ev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),140,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		tmp->emit(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parcel_obj,emit,(void))

bool Parcel_obj::is_loaded( ::String _id){
	HX_STACK_FRAME("luxe.Parcel","is_loaded",0x1e01b6ed,"luxe.Parcel.is_loaded","luxe/Parcel.hx",144,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(144)
	::String tmp = _id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	int tmp1 = this->loaded->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,is_loaded,return )

Void Parcel_obj::load( ::String _load_id){
{
		HX_STACK_FRAME("luxe.Parcel","load",0x404c9713,"luxe.Parcel.load","luxe/Parcel.hx",147,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_load_id,"_load_id")
		HX_STACK_LINE(147)
		Array< ::String > _load_id1 = Array_obj< ::String >::__new().Add(_load_id);		HX_STACK_VAR(_load_id1,"_load_id1");
		HX_STACK_LINE(147)
		::luxe::Parcel _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		this->state = (int)1;
		HX_STACK_LINE(151)
		::luxe::Timer tmp = ::Luxe_obj::timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		Float tmp1 = this->load_start_delay;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::luxe::Parcel,_g,Array< ::String >,_load_id1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","luxe/Parcel.hx",151,0x19b0ca9c)
			{
				HX_STACK_LINE(153)
				::snow::core::native::Core tmp2 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(153)
				Float tmp3 = tmp2->timestamp();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(153)
				_g->start_load = tmp3;
				HX_STACK_LINE(155)
				{
					HX_STACK_LINE(155)
					bool tmp4 = (_load_id1->__get((int)0) == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(155)
					if ((tmp4)){
						HX_STACK_LINE(155)
						_load_id1[(int)0] = _g->id;
					}
					HX_STACK_LINE(155)
					_load_id1->__get((int)0);
				}
				HX_STACK_LINE(166)
				int tmp4 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(166)
				int tmp5 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(166)
				int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				int tmp7 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				int tmp9 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				int tmp11 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(166)
				int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(166)
				int tmp13 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(166)
				int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(166)
				int tmp15 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(166)
				int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(166)
				bool tmp17 = (tmp16 == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(166)
				if ((tmp17)){
					HX_STACK_LINE(167)
					{
						HX_STACK_LINE(167)
						_g->state = (int)2;
						HX_STACK_LINE(167)
						::snow::core::native::Core tmp18 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(167)
						Float tmp19 = tmp18->timestamp();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(167)
						Float tmp20 = _g->start_load;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(167)
						Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(167)
						_g->time_to_load = tmp21;
						HX_STACK_LINE(167)
						::luxe::Parcel tmp22 = _g;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(167)
						Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),581,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("do_complete","\x2d","\xd7","\x89","\x7e"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(167)
						_g->emitter->emit((int)2,tmp22,tmp23);
						HX_STACK_LINE(167)
						bool tmp24 = (_g->oncomplete != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(167)
						if ((tmp24)){
							HX_STACK_LINE(167)
							::luxe::Parcel tmp25 = _g;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(167)
							_g->oncomplete(tmp25);
						}
					}
					HX_STACK_LINE(168)
					return null();
				}
				HX_STACK_LINE(171)
				Array< int > _index = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(_index,"_index");
				HX_STACK_LINE(183)
				{
					HX_STACK_LINE(183)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(183)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(183)
					while((true)){
						HX_STACK_LINE(183)
						bool tmp18 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(183)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(183)
						if ((tmp19)){
							HX_STACK_LINE(183)
							break;
						}
						HX_STACK_LINE(183)
						Dynamic tmp20 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(183)
						Dynamic _bytes = tmp20;		HX_STACK_VAR(_bytes,"_bytes");
						HX_STACK_LINE(183)
						++(_g1);
						HX_STACK_LINE(185)
						::String tmp21 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(185)
						int tmp22 = _g->loaded->indexOf(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(185)
						bool tmp23 = (tmp22 != (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(185)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(185)
						if ((tmp24)){
							HX_STACK_LINE(187)
							::String tmp25 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(187)
							_g->loaded->push(tmp25);
							HX_STACK_LINE(188)
							::luxe::Timer tmp26 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(188)
							Float tmp27 = _g->load_time_spacing;		HX_STACK_VAR(tmp27,"tmp27");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,Dynamic,_bytes)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",190,0x19b0ca9c)
								{
									HX_STACK_LINE(190)
									::String _item_id = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");
									HX_STACK_LINE(190)
									::String tmp28 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(190)
									::snow::api::Promise tmp29 = _g->_system->load_bytes(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(190)
									::snow::api::Promise _load = tmp29;		HX_STACK_VAR(_load,"_load");

									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(::luxe::resource::Resource _res){
										HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","luxe/Parcel.hx",190,0x19b0ca9c)
										HX_STACK_ARG(_res,"_res")
										{
											HX_STACK_LINE(190)
											::String tmp30 = _item_id;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(190)
											::String tmp31 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(190)
											::luxe::resource::Resource tmp32 = _res;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(190)
											int tmp33 = ++(_index[(int)0]);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int tmp35 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(190)
											int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(190)
											int tmp37 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(190)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(190)
											int tmp39 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(190)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(190)
											int tmp41 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(190)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(190)
											int tmp43 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(190)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(190)
											int tmp45 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(190)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(190)
											_g->one_loaded(tmp30,tmp31,tmp32,tmp33,tmp46);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))


									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(Dynamic _err){
										HX_STACK_FRAME("*","_Function_6_2",0x5204b87d,"*._Function_6_2","luxe/Parcel.hx",190,0x19b0ca9c)
										HX_STACK_ARG(_err,"_err")
										{
											HX_STACK_LINE(190)
											::String tmp30 = _item_id;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(190)
											::String tmp31 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(190)
											Dynamic tmp32 = _err;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(190)
											int tmp33 = ++(_index[(int)0]);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int tmp35 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(190)
											int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(190)
											int tmp37 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(190)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(190)
											int tmp39 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(190)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(190)
											int tmp41 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(190)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(190)
											int tmp43 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(190)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(190)
											int tmp45 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(190)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(190)
											_g->one_failed(tmp30,tmp31,tmp32,tmp33,tmp46);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))

									HX_STACK_LINE(190)
									_load->then( Dynamic(new _Function_6_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_6_2(_g,_load_id1,_index,_item_id)));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(188)
							tmp26->schedule(tmp27, Dynamic(new _Function_5_1(_g,_load_id1,_index,_bytes)),null());
						}
						else{
							HX_STACK_LINE(195)
							::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(195)
							::String tmp26 = (tmp25 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(195)
							::String tmp27 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(195)
							::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(195)
							::String tmp29 = (tmp28 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(195)
							::String tmp30 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(195)
							Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),195,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(195)
							::haxe::Log_obj::trace(tmp30,tmp31);
							HX_STACK_LINE(196)
							::String tmp32 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(196)
							::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(196)
							::haxe::ds::StringMap tmp34 = _g->_system->cache;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(196)
							::String tmp35 = _bytes->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(196)
							::luxe::resource::Resource tmp36 = tmp34->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(196)
							::luxe::resource::Resource tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(196)
							int tmp38 = ++(_index[(int)0]);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(196)
							int tmp39 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(196)
							int tmp40 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(196)
							int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(196)
							int tmp42 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(196)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(196)
							int tmp44 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(196)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(196)
							int tmp46 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(196)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(196)
							int tmp48 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(196)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(196)
							int tmp50 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(196)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(196)
							_g->one_loaded(tmp32,tmp33,tmp37,tmp38,tmp51);
						}
					}
				}
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(203)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(203)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(203)
					while((true)){
						HX_STACK_LINE(203)
						bool tmp18 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(203)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(203)
						if ((tmp19)){
							HX_STACK_LINE(203)
							break;
						}
						HX_STACK_LINE(203)
						Dynamic tmp20 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(203)
						Dynamic _text = tmp20;		HX_STACK_VAR(_text,"_text");
						HX_STACK_LINE(203)
						++(_g1);
						HX_STACK_LINE(205)
						::String tmp21 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(205)
						int tmp22 = _g->loaded->indexOf(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(205)
						bool tmp23 = (tmp22 != (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(205)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(205)
						if ((tmp24)){
							HX_STACK_LINE(207)
							::String tmp25 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(207)
							_g->loaded->push(tmp25);
							HX_STACK_LINE(208)
							::luxe::Timer tmp26 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(208)
							Float tmp27 = (_g->load_time_spacing * _index->__get((int)0));		HX_STACK_VAR(tmp27,"tmp27");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,Dynamic,_text)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",210,0x19b0ca9c)
								{
									HX_STACK_LINE(210)
									::String _item_id = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");
									HX_STACK_LINE(210)
									::String tmp28 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(210)
									::snow::api::Promise tmp29 = _g->_system->load_text(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(210)
									::snow::api::Promise _load = tmp29;		HX_STACK_VAR(_load,"_load");

									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(::luxe::resource::Resource _res){
										HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","luxe/Parcel.hx",210,0x19b0ca9c)
										HX_STACK_ARG(_res,"_res")
										{
											HX_STACK_LINE(210)
											::String tmp30 = _item_id;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(210)
											::String tmp31 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(210)
											::luxe::resource::Resource tmp32 = _res;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(210)
											int tmp33 = ++(_index[(int)0]);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(210)
											int tmp34 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(210)
											int tmp35 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(210)
											int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(210)
											int tmp37 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(210)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(210)
											int tmp39 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(210)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(210)
											int tmp41 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(210)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(210)
											int tmp43 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(210)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(210)
											int tmp45 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(210)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(210)
											_g->one_loaded(tmp30,tmp31,tmp32,tmp33,tmp46);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))


									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(Dynamic _err){
										HX_STACK_FRAME("*","_Function_6_2",0x5204b87d,"*._Function_6_2","luxe/Parcel.hx",210,0x19b0ca9c)
										HX_STACK_ARG(_err,"_err")
										{
											HX_STACK_LINE(210)
											::String tmp30 = _item_id;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(210)
											::String tmp31 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(210)
											Dynamic tmp32 = _err;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(210)
											int tmp33 = ++(_index[(int)0]);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(210)
											int tmp34 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(210)
											int tmp35 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(210)
											int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(210)
											int tmp37 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(210)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(210)
											int tmp39 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(210)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(210)
											int tmp41 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(210)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(210)
											int tmp43 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(210)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(210)
											int tmp45 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(210)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(210)
											_g->one_failed(tmp30,tmp31,tmp32,tmp33,tmp46);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))

									HX_STACK_LINE(210)
									_load->then( Dynamic(new _Function_6_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_6_2(_g,_load_id1,_index,_item_id)));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(208)
							tmp26->schedule(tmp27, Dynamic(new _Function_5_1(_g,_load_id1,_index,_text)),null());
						}
						else{
							HX_STACK_LINE(215)
							::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(215)
							::String tmp26 = (tmp25 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(215)
							::String tmp27 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(215)
							::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(215)
							::String tmp29 = (tmp28 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(215)
							::String tmp30 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(215)
							Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),215,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(215)
							::haxe::Log_obj::trace(tmp30,tmp31);
							HX_STACK_LINE(216)
							::String tmp32 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(216)
							::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(216)
							::haxe::ds::StringMap tmp34 = _g->_system->cache;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(216)
							::String tmp35 = _text->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(216)
							::luxe::resource::Resource tmp36 = tmp34->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(216)
							::luxe::resource::Resource tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(216)
							int tmp38 = ++(_index[(int)0]);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(216)
							int tmp39 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(216)
							int tmp40 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(216)
							int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(216)
							int tmp42 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(216)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(216)
							int tmp44 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(216)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(216)
							int tmp46 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(216)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(216)
							int tmp48 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(216)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(216)
							int tmp50 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(216)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(216)
							_g->one_loaded(tmp32,tmp33,tmp37,tmp38,tmp51);
						}
					}
				}
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(223)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(223)
					while((true)){
						HX_STACK_LINE(223)
						bool tmp18 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(223)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(223)
						if ((tmp19)){
							HX_STACK_LINE(223)
							break;
						}
						HX_STACK_LINE(223)
						Dynamic tmp20 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(223)
						Dynamic _json = tmp20;		HX_STACK_VAR(_json,"_json");
						HX_STACK_LINE(223)
						++(_g1);
						HX_STACK_LINE(225)
						::String tmp21 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(225)
						int tmp22 = _g->loaded->indexOf(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(225)
						bool tmp23 = (tmp22 != (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(225)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(225)
						if ((tmp24)){
							HX_STACK_LINE(227)
							::String tmp25 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(227)
							_g->loaded->push(tmp25);
							HX_STACK_LINE(228)
							::luxe::Timer tmp26 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(228)
							Float tmp27 = (_g->load_time_spacing * _index->__get((int)0));		HX_STACK_VAR(tmp27,"tmp27");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Dynamic,_json,Array< ::String >,_load_id1,Array< int >,_index)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",230,0x19b0ca9c)
								{
									HX_STACK_LINE(230)
									::String _item_id = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");
									HX_STACK_LINE(230)
									::String tmp28 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(230)
									::snow::api::Promise tmp29 = _g->_system->load_json(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(230)
									::snow::api::Promise _load = tmp29;		HX_STACK_VAR(_load,"_load");

									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(::luxe::resource::Resource _res){
										HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","luxe/Parcel.hx",230,0x19b0ca9c)
										HX_STACK_ARG(_res,"_res")
										{
											HX_STACK_LINE(230)
											::String tmp30 = _item_id;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(230)
											::String tmp31 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(230)
											::luxe::resource::Resource tmp32 = _res;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(230)
											int tmp33 = ++(_index[(int)0]);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(230)
											int tmp34 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(230)
											int tmp35 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(230)
											int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(230)
											int tmp37 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(230)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(230)
											int tmp39 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(230)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(230)
											int tmp41 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(230)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(230)
											int tmp43 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(230)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(230)
											int tmp45 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(230)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(230)
											_g->one_loaded(tmp30,tmp31,tmp32,tmp33,tmp46);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))


									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
									int __ArgCount() const { return 1; }
									Void run(Dynamic _err){
										HX_STACK_FRAME("*","_Function_6_2",0x5204b87d,"*._Function_6_2","luxe/Parcel.hx",230,0x19b0ca9c)
										HX_STACK_ARG(_err,"_err")
										{
											HX_STACK_LINE(230)
											::String tmp30 = _item_id;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(230)
											::String tmp31 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(230)
											Dynamic tmp32 = _err;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(230)
											int tmp33 = ++(_index[(int)0]);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(230)
											int tmp34 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(230)
											int tmp35 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(230)
											int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(230)
											int tmp37 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(230)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(230)
											int tmp39 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(230)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(230)
											int tmp41 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(230)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(230)
											int tmp43 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(230)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(230)
											int tmp45 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(230)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(230)
											_g->one_failed(tmp30,tmp31,tmp32,tmp33,tmp46);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))

									HX_STACK_LINE(230)
									_load->then( Dynamic(new _Function_6_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_6_2(_g,_load_id1,_index,_item_id)));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(228)
							tmp26->schedule(tmp27, Dynamic(new _Function_5_1(_g,_json,_load_id1,_index)),null());
						}
						else{
							HX_STACK_LINE(235)
							::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(235)
							::String tmp26 = (tmp25 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(235)
							::String tmp27 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(235)
							::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(235)
							::String tmp29 = (tmp28 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(235)
							::String tmp30 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(235)
							Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),235,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(235)
							::haxe::Log_obj::trace(tmp30,tmp31);
							HX_STACK_LINE(236)
							::String tmp32 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(236)
							::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(236)
							::haxe::ds::StringMap tmp34 = _g->_system->cache;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(236)
							::String tmp35 = _json->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(236)
							::luxe::resource::Resource tmp36 = tmp34->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(236)
							::luxe::resource::Resource tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(236)
							int tmp38 = ++(_index[(int)0]);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(236)
							int tmp39 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(236)
							int tmp40 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(236)
							int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(236)
							int tmp42 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(236)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(236)
							int tmp44 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(236)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(236)
							int tmp46 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(236)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(236)
							int tmp48 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(236)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(236)
							int tmp50 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(236)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(236)
							_g->one_loaded(tmp32,tmp33,tmp37,tmp38,tmp51);
						}
					}
				}
				HX_STACK_LINE(243)
				{
					HX_STACK_LINE(243)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(243)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(243)
					while((true)){
						HX_STACK_LINE(243)
						bool tmp18 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(243)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(243)
						if ((tmp19)){
							HX_STACK_LINE(243)
							break;
						}
						HX_STACK_LINE(243)
						Dynamic tmp20 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(243)
						Dynamic _texture = tmp20;		HX_STACK_VAR(_texture,"_texture");
						HX_STACK_LINE(243)
						++(_g1);
						HX_STACK_LINE(245)
						::String tmp21 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(245)
						int tmp22 = _g->loaded->indexOf(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(245)
						bool tmp23 = (tmp22 != (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(245)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(245)
						if ((tmp24)){
							HX_STACK_LINE(247)
							::String tmp25 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(247)
							_g->loaded->push(tmp25);
							HX_STACK_LINE(248)
							::luxe::Timer tmp26 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(248)
							Float tmp27 = (_g->load_time_spacing * _index->__get((int)0));		HX_STACK_VAR(tmp27,"tmp27");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,Dynamic,_texture)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",248,0x19b0ca9c)
								{
									HX_STACK_LINE(250)
									::String tmp28 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
									struct _Function_6_1{
										inline static Dynamic Block( Dynamic &_texture){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",250,0x19b0ca9c)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac") , _texture->__Field(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60") , _texture->__Field(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60") , _texture->__Field(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65") , _texture->__Field(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65") , _texture->__Field(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65"), hx::paccDynamic ),false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(250)
									Dynamic tmp29 = _Function_6_1::Block(_texture);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(250)
									::snow::api::Promise tmp30 = _g->_system->load_texture(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(250)
									::snow::api::Promise _load = tmp30;		HX_STACK_VAR(_load,"_load");
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										::String _item_id = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");

										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(::luxe::resource::Resource _res){
											HX_STACK_FRAME("*","_Function_7_1",0x52057abd,"*._Function_7_1","luxe/Parcel.hx",258,0x19b0ca9c)
											HX_STACK_ARG(_res,"_res")
											{
												HX_STACK_LINE(258)
												::String tmp31 = _item_id;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(258)
												::String tmp32 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(258)
												::luxe::resource::Resource tmp33 = _res;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(258)
												int tmp34 = ++(_index[(int)0]);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(258)
												int tmp35 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(258)
												int tmp36 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(258)
												int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(258)
												int tmp38 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(258)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(258)
												int tmp40 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(258)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(258)
												int tmp42 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(258)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(258)
												int tmp44 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(258)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(258)
												int tmp46 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(258)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												_g->one_loaded(tmp31,tmp32,tmp33,tmp34,tmp47);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))


										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(Dynamic _err){
											HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","luxe/Parcel.hx",258,0x19b0ca9c)
											HX_STACK_ARG(_err,"_err")
											{
												HX_STACK_LINE(258)
												::String tmp31 = _item_id;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(258)
												::String tmp32 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(258)
												Dynamic tmp33 = _err;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(258)
												int tmp34 = ++(_index[(int)0]);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(258)
												int tmp35 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(258)
												int tmp36 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(258)
												int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(258)
												int tmp38 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(258)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(258)
												int tmp40 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(258)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(258)
												int tmp42 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(258)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(258)
												int tmp44 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(258)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(258)
												int tmp46 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(258)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(258)
												_g->one_failed(tmp31,tmp32,tmp33,tmp34,tmp47);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))

										HX_STACK_LINE(258)
										_load->then( Dynamic(new _Function_7_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_7_2(_g,_load_id1,_index,_item_id)));
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(248)
							tmp26->schedule(tmp27, Dynamic(new _Function_5_1(_g,_load_id1,_index,_texture)),null());
						}
						else{
							HX_STACK_LINE(263)
							::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(263)
							::String tmp26 = (tmp25 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(263)
							::String tmp27 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(263)
							::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(263)
							::String tmp29 = (tmp28 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(263)
							::String tmp30 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(263)
							Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),263,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(263)
							::haxe::Log_obj::trace(tmp30,tmp31);
							HX_STACK_LINE(264)
							::String tmp32 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(264)
							::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(264)
							::haxe::ds::StringMap tmp34 = _g->_system->cache;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(264)
							::String tmp35 = _texture->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(264)
							::luxe::resource::Resource tmp36 = tmp34->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(264)
							::luxe::resource::Resource tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(264)
							int tmp38 = ++(_index[(int)0]);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(264)
							int tmp39 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(264)
							int tmp40 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(264)
							int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(264)
							int tmp42 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(264)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(264)
							int tmp44 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(264)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(264)
							int tmp46 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(264)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(264)
							int tmp48 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(264)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(264)
							int tmp50 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(264)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(264)
							_g->one_loaded(tmp32,tmp33,tmp37,tmp38,tmp51);
						}
					}
				}
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(271)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(271)
					while((true)){
						HX_STACK_LINE(271)
						bool tmp18 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(271)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(271)
						if ((tmp19)){
							HX_STACK_LINE(271)
							break;
						}
						HX_STACK_LINE(271)
						Dynamic tmp20 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(271)
						Dynamic _font = tmp20;		HX_STACK_VAR(_font,"_font");
						HX_STACK_LINE(271)
						++(_g1);
						HX_STACK_LINE(273)
						::String tmp21 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(273)
						int tmp22 = _g->loaded->indexOf(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(273)
						bool tmp23 = (tmp22 != (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(273)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(273)
						if ((tmp24)){
							HX_STACK_LINE(275)
							::String tmp25 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(275)
							_g->loaded->push(tmp25);
							HX_STACK_LINE(276)
							::luxe::Timer tmp26 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(276)
							Float tmp27 = (_g->load_time_spacing * _index->__get((int)0));		HX_STACK_VAR(tmp27,"tmp27");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Dynamic,_font,Array< ::String >,_load_id1,Array< int >,_index)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",276,0x19b0ca9c)
								{
									HX_STACK_LINE(278)
									::String tmp28 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
									struct _Function_6_1{
										inline static Dynamic Block( Dynamic &_font){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",278,0x19b0ca9c)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62") , _font->__Field(HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62"), hx::paccDynamic ),false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(278)
									Dynamic tmp29 = _Function_6_1::Block(_font);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(278)
									::snow::api::Promise tmp30 = _g->_system->load_font(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(278)
									::snow::api::Promise _load = tmp30;		HX_STACK_VAR(_load,"_load");
									HX_STACK_LINE(282)
									{
										HX_STACK_LINE(282)
										::String _item_id = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");

										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(::luxe::resource::Resource _res){
											HX_STACK_FRAME("*","_Function_7_1",0x52057abd,"*._Function_7_1","luxe/Parcel.hx",282,0x19b0ca9c)
											HX_STACK_ARG(_res,"_res")
											{
												HX_STACK_LINE(282)
												::String tmp31 = _item_id;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(282)
												::String tmp32 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(282)
												::luxe::resource::Resource tmp33 = _res;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(282)
												int tmp34 = ++(_index[(int)0]);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(282)
												int tmp35 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(282)
												int tmp36 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(282)
												int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(282)
												int tmp38 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(282)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(282)
												int tmp40 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(282)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(282)
												int tmp42 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(282)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(282)
												int tmp44 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(282)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(282)
												int tmp46 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(282)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(282)
												_g->one_loaded(tmp31,tmp32,tmp33,tmp34,tmp47);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))


										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(Dynamic _err){
											HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","luxe/Parcel.hx",282,0x19b0ca9c)
											HX_STACK_ARG(_err,"_err")
											{
												HX_STACK_LINE(282)
												::String tmp31 = _item_id;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(282)
												::String tmp32 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(282)
												Dynamic tmp33 = _err;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(282)
												int tmp34 = ++(_index[(int)0]);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(282)
												int tmp35 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(282)
												int tmp36 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(282)
												int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(282)
												int tmp38 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(282)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(282)
												int tmp40 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(282)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(282)
												int tmp42 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(282)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(282)
												int tmp44 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(282)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(282)
												int tmp46 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(282)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(282)
												_g->one_failed(tmp31,tmp32,tmp33,tmp34,tmp47);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))

										HX_STACK_LINE(282)
										_load->then( Dynamic(new _Function_7_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_7_2(_g,_load_id1,_index,_item_id)));
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(276)
							tmp26->schedule(tmp27, Dynamic(new _Function_5_1(_g,_font,_load_id1,_index)),null());
						}
						else{
							HX_STACK_LINE(287)
							::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(287)
							::String tmp26 = (tmp25 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(287)
							::String tmp27 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(287)
							::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(287)
							::String tmp29 = (tmp28 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(287)
							::String tmp30 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(287)
							Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),287,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(287)
							::haxe::Log_obj::trace(tmp30,tmp31);
							HX_STACK_LINE(288)
							::String tmp32 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(288)
							::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(288)
							::haxe::ds::StringMap tmp34 = _g->_system->cache;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(288)
							::String tmp35 = _font->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(288)
							::luxe::resource::Resource tmp36 = tmp34->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(288)
							::luxe::resource::Resource tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(288)
							int tmp38 = ++(_index[(int)0]);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(288)
							int tmp39 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(288)
							int tmp40 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(288)
							int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(288)
							int tmp42 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(288)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(288)
							int tmp44 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(288)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(288)
							int tmp46 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(288)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(288)
							int tmp48 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(288)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(288)
							int tmp50 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(288)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(288)
							_g->one_loaded(tmp32,tmp33,tmp37,tmp38,tmp51);
						}
					}
				}
				HX_STACK_LINE(295)
				{
					HX_STACK_LINE(295)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(295)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(295)
					while((true)){
						HX_STACK_LINE(295)
						bool tmp18 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(295)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(295)
						if ((tmp19)){
							HX_STACK_LINE(295)
							break;
						}
						HX_STACK_LINE(295)
						Dynamic tmp20 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(295)
						Dynamic _shader = tmp20;		HX_STACK_VAR(_shader,"_shader");
						HX_STACK_LINE(295)
						++(_g1);
						HX_STACK_LINE(297)
						::String tmp21 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(297)
						int tmp22 = _g->loaded->indexOf(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(297)
						bool tmp23 = (tmp22 != (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(297)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(297)
						if ((tmp24)){
							HX_STACK_LINE(299)
							::String tmp25 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(299)
							_g->loaded->push(tmp25);
							HX_STACK_LINE(300)
							::luxe::Timer tmp26 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(300)
							Float tmp27 = (_g->load_time_spacing * _index->__get((int)0));		HX_STACK_VAR(tmp27,"tmp27");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,Dynamic,_shader)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",300,0x19b0ca9c)
								{
									HX_STACK_LINE(302)
									::String tmp28 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
									struct _Function_6_1{
										inline static Dynamic Block( Dynamic &_shader){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",302,0x19b0ca9c)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , _shader->__Field(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"), hx::paccDynamic ),false);
												__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , _shader->__Field(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"), hx::paccDynamic ),false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(302)
									Dynamic tmp29 = _Function_6_1::Block(_shader);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(302)
									::snow::api::Promise tmp30 = _g->_system->load_shader(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(302)
									::snow::api::Promise _load = tmp30;		HX_STACK_VAR(_load,"_load");
									HX_STACK_LINE(307)
									{
										HX_STACK_LINE(307)
										::String _item_id = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_item_id,"_item_id");

										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_1,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(::luxe::resource::Resource _res){
											HX_STACK_FRAME("*","_Function_7_1",0x52057abd,"*._Function_7_1","luxe/Parcel.hx",307,0x19b0ca9c)
											HX_STACK_ARG(_res,"_res")
											{
												HX_STACK_LINE(307)
												::String tmp31 = _item_id;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(307)
												::String tmp32 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(307)
												::luxe::resource::Resource tmp33 = _res;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(307)
												int tmp34 = ++(_index[(int)0]);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(307)
												int tmp35 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(307)
												int tmp36 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(307)
												int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(307)
												int tmp38 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(307)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(307)
												int tmp40 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(307)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(307)
												int tmp42 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(307)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(307)
												int tmp44 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(307)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(307)
												int tmp46 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(307)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(307)
												_g->one_loaded(tmp31,tmp32,tmp33,tmp34,tmp47);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))


										HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_7_2,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index,::String,_item_id)
										int __ArgCount() const { return 1; }
										Void run(Dynamic _err){
											HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","luxe/Parcel.hx",307,0x19b0ca9c)
											HX_STACK_ARG(_err,"_err")
											{
												HX_STACK_LINE(307)
												::String tmp31 = _item_id;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(307)
												::String tmp32 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(307)
												Dynamic tmp33 = _err;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(307)
												int tmp34 = ++(_index[(int)0]);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(307)
												int tmp35 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(307)
												int tmp36 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(307)
												int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(307)
												int tmp38 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(307)
												int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(307)
												int tmp40 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(307)
												int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(307)
												int tmp42 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(307)
												int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(307)
												int tmp44 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(307)
												int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(307)
												int tmp46 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(307)
												int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(307)
												_g->one_failed(tmp31,tmp32,tmp33,tmp34,tmp47);
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))

										HX_STACK_LINE(307)
										_load->then( Dynamic(new _Function_7_1(_g,_load_id1,_index,_item_id)), Dynamic(new _Function_7_2(_g,_load_id1,_index,_item_id)));
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(300)
							tmp26->schedule(tmp27, Dynamic(new _Function_5_1(_g,_load_id1,_index,_shader)),null());
						}
						else{
							HX_STACK_LINE(312)
							::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(312)
							::String tmp26 = (tmp25 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(312)
							::String tmp27 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(312)
							::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(312)
							::String tmp29 = (tmp28 + HX_HCSTRING(" loaded, skipped","\xf7","\x9a","\x71","\xd8"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(312)
							::String tmp30 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(312)
							Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),312,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(312)
							::haxe::Log_obj::trace(tmp30,tmp31);
							HX_STACK_LINE(313)
							::String tmp32 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(313)
							::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(313)
							::haxe::ds::StringMap tmp34 = _g->_system->cache;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(313)
							::String tmp35 = _shader->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(313)
							::luxe::resource::Resource tmp36 = tmp34->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(313)
							::luxe::resource::Resource tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(313)
							int tmp38 = ++(_index[(int)0]);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(313)
							int tmp39 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(313)
							int tmp40 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(313)
							int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(313)
							int tmp42 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(313)
							int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(313)
							int tmp44 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(313)
							int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(313)
							int tmp46 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(313)
							int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(313)
							int tmp48 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(313)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(313)
							int tmp50 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(313)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(313)
							_g->one_loaded(tmp32,tmp33,tmp37,tmp38,tmp51);
						}
					}
				}
				HX_STACK_LINE(320)
				{
					HX_STACK_LINE(320)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(320)
					cpp::ArrayBase _g2 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(320)
					while((true)){
						HX_STACK_LINE(320)
						bool tmp18 = (_g1 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(320)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(320)
						if ((tmp19)){
							HX_STACK_LINE(320)
							break;
						}
						HX_STACK_LINE(320)
						Dynamic tmp20 = _g2->__GetItem(_g1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(320)
						Dynamic _sound = tmp20;		HX_STACK_VAR(_sound,"_sound");
						HX_STACK_LINE(320)
						++(_g1);
						HX_STACK_LINE(322)
						::luxe::Audio tmp21 = ::Luxe_obj::audio;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(322)
						::String tmp22 = _sound->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(322)
						bool tmp23 = tmp21->exists(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(322)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(322)
						if ((tmp24)){
							HX_STACK_LINE(325)
							::luxe::Timer tmp25 = ::Luxe_obj::timer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(325)
							Float tmp26 = (_g->load_time_spacing * _index->__get((int)0));		HX_STACK_VAR(tmp26,"tmp26");

							HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_5_1,Dynamic,_sound,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","luxe/Parcel.hx",325,0x19b0ca9c)
								{
									HX_STACK_LINE(327)
									::luxe::Audio tmp27 = ::Luxe_obj::audio;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(328)
									::String tmp28 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(329)
									::String tmp29 = _sound->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(330)
									bool tmp30 = _sound->__Field(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(327)
									::snow::api::Promise tmp31 = tmp27->create(tmp28,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(327)
									::snow::api::Promise _load = tmp31;		HX_STACK_VAR(_load,"_load");

									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_1,Dynamic,_sound,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index)
									int __ArgCount() const { return 1; }
									Void run(Dynamic _){
										HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","luxe/Parcel.hx",333,0x19b0ca9c)
										HX_STACK_ARG(_,"_")
										{
											HX_STACK_LINE(334)
											::String tmp32 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(334)
											::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(334)
											int tmp34 = ++(_index[(int)0]);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(334)
											int tmp35 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(334)
											int tmp36 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(334)
											int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(334)
											int tmp38 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(334)
											int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(334)
											int tmp40 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(334)
											int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(334)
											int tmp42 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(334)
											int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(334)
											int tmp44 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(334)
											int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(334)
											int tmp46 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(334)
											int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(334)
											_g->one_loaded(tmp32,tmp33,null(),tmp34,tmp47);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))


									HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_6_2,Dynamic,_sound,::luxe::Parcel,_g,Array< ::String >,_load_id1,Array< int >,_index)
									int __ArgCount() const { return 1; }
									Void run(Dynamic _err){
										HX_STACK_FRAME("*","_Function_6_2",0x5204b87d,"*._Function_6_2","luxe/Parcel.hx",335,0x19b0ca9c)
										HX_STACK_ARG(_err,"_err")
										{
											HX_STACK_LINE(336)
											::String tmp32 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(336)
											::String tmp33 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(336)
											Dynamic tmp34 = _err;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(336)
											int tmp35 = ++(_index[(int)0]);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(336)
											int tmp36 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(336)
											int tmp37 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(336)
											int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(336)
											int tmp39 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(336)
											int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(336)
											int tmp41 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(336)
											int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(336)
											int tmp43 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(336)
											int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(336)
											int tmp45 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(336)
											int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(336)
											int tmp47 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(336)
											int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(336)
											_g->one_failed(tmp32,tmp33,tmp34,tmp35,tmp48);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1((void))

									HX_STACK_LINE(333)
									_load->then( Dynamic(new _Function_6_1(_sound,_g,_load_id1,_index)), Dynamic(new _Function_6_2(_sound,_g,_load_id1,_index)));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(325)
							tmp25->schedule(tmp26, Dynamic(new _Function_5_1(_sound,_g,_load_id1,_index)),null());
						}
						else{
							HX_STACK_LINE(342)
							::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + _g->id);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(342)
							::String tmp26 = (tmp25 + HX_HCSTRING(" / already had ","\xae","\x8a","\xa4","\x34"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(342)
							::String tmp27 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(342)
							::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(342)
							::String tmp29 = (tmp28 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(342)
							::String tmp30 = _sound->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(342)
							::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(342)
							::String tmp32 = (tmp31 + HX_HCSTRING(") loaded, skipped","\x20","\x3d","\x7e","\xd1"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(342)
							::String tmp33 = (HX_HCSTRING("   i / parcel / ","\x80","\x3e","\xbc","\xdf") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(342)
							Dynamic tmp34 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),342,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(342)
							::haxe::Log_obj::trace(tmp33,tmp34);
							HX_STACK_LINE(343)
							::String tmp35 = _sound->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(343)
							::String tmp36 = _load_id1->__get((int)0);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(343)
							int tmp37 = ++(_index[(int)0]);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(343)
							int tmp38 = _g->list->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(343)
							int tmp39 = _g->list->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(343)
							int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(343)
							int tmp41 = _g->list->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(343)
							int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(343)
							int tmp43 = _g->list->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(343)
							int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(343)
							int tmp45 = _g->list->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(343)
							int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(343)
							int tmp47 = _g->list->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(343)
							int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(343)
							int tmp49 = _g->list->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(343)
							int tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(343)
							_g->one_loaded(tmp35,tmp36,null(),tmp37,tmp50);
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(151)
		tmp->schedule(tmp1, Dynamic(new _Function_1_1(_g,_load_id1)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,load,(void))

Void Parcel_obj::unload( Dynamic __o__empty_list){
Dynamic _empty_list = __o__empty_list.Default(false);
	HX_STACK_FRAME("luxe.Parcel","unload",0x6b0c732c,"luxe.Parcel.unload","luxe/Parcel.hx",354,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_empty_list,"_empty_list")
{
		HX_STACK_LINE(354)
		::luxe::Parcel _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(361)
			Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(361)
			cpp::ArrayBase _g11 = tmp->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(361)
			while((true)){
				HX_STACK_LINE(361)
				bool tmp1 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(361)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(361)
				if ((tmp2)){
					HX_STACK_LINE(361)
					break;
				}
				HX_STACK_LINE(361)
				Dynamic tmp3 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(361)
				Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(361)
				++(_g1);
				HX_STACK_LINE(361)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(361)
				::String tmp4 = _id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(361)
				_g->_system->destroy(tmp4,null());
				HX_STACK_LINE(361)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(361)
				_g->loaded->remove(tmp5);
			}
		}
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(362)
			Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(362)
			cpp::ArrayBase _g11 = tmp->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(362)
			while((true)){
				HX_STACK_LINE(362)
				bool tmp1 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(362)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(362)
				if ((tmp2)){
					HX_STACK_LINE(362)
					break;
				}
				HX_STACK_LINE(362)
				Dynamic tmp3 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(362)
				Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(362)
				++(_g1);
				HX_STACK_LINE(362)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(362)
				::String tmp4 = _id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(362)
				_g->_system->destroy(tmp4,null());
				HX_STACK_LINE(362)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(362)
				_g->loaded->remove(tmp5);
			}
		}
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(363)
			Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(363)
			cpp::ArrayBase _g11 = tmp->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(363)
			while((true)){
				HX_STACK_LINE(363)
				bool tmp1 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(363)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(363)
				if ((tmp2)){
					HX_STACK_LINE(363)
					break;
				}
				HX_STACK_LINE(363)
				Dynamic tmp3 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(363)
				Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(363)
				++(_g1);
				HX_STACK_LINE(363)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(363)
				::String tmp4 = _id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(363)
				_g->_system->destroy(tmp4,null());
				HX_STACK_LINE(363)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(363)
				_g->loaded->remove(tmp5);
			}
		}
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(364)
			Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(364)
			cpp::ArrayBase _g11 = tmp->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(364)
			while((true)){
				HX_STACK_LINE(364)
				bool tmp1 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(364)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(364)
				if ((tmp2)){
					HX_STACK_LINE(364)
					break;
				}
				HX_STACK_LINE(364)
				Dynamic tmp3 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(364)
				Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(364)
				++(_g1);
				HX_STACK_LINE(364)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(364)
				::String tmp4 = _id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(364)
				_g->_system->destroy(tmp4,null());
				HX_STACK_LINE(364)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(364)
				_g->loaded->remove(tmp5);
			}
		}
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(365)
			Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(365)
			cpp::ArrayBase _g11 = tmp->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(365)
			while((true)){
				HX_STACK_LINE(365)
				bool tmp1 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(365)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(365)
				if ((tmp2)){
					HX_STACK_LINE(365)
					break;
				}
				HX_STACK_LINE(365)
				Dynamic tmp3 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(365)
				Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(365)
				++(_g1);
				HX_STACK_LINE(365)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(365)
				::String tmp4 = _id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(365)
				_g->_system->destroy(tmp4,null());
				HX_STACK_LINE(365)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(365)
				_g->loaded->remove(tmp5);
			}
		}
		HX_STACK_LINE(366)
		{
			HX_STACK_LINE(366)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(366)
			Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(366)
			cpp::ArrayBase _g11 = tmp->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(366)
			while((true)){
				HX_STACK_LINE(366)
				bool tmp1 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(366)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(366)
				if ((tmp2)){
					HX_STACK_LINE(366)
					break;
				}
				HX_STACK_LINE(366)
				Dynamic tmp3 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(366)
				Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(366)
				++(_g1);
				HX_STACK_LINE(366)
				::String _id = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_id,"_id");
				HX_STACK_LINE(366)
				::String tmp4 = _id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(366)
				_g->_system->destroy(tmp4,null());
				HX_STACK_LINE(366)
				::String tmp5 = _id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(366)
				_g->loaded->remove(tmp5);
			}
		}
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(367)
			Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(367)
			cpp::ArrayBase _g11 = tmp->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic );		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(367)
			while((true)){
				HX_STACK_LINE(367)
				bool tmp1 = (_g1 < _g11->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(367)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(367)
				if ((tmp2)){
					HX_STACK_LINE(367)
					break;
				}
				HX_STACK_LINE(367)
				Dynamic tmp3 = _g11->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(367)
				Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(367)
				++(_g1);
				HX_STACK_LINE(367)
				::luxe::Audio tmp4 = ::Luxe_obj::audio;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(367)
				::String tmp5 = item->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(367)
				tmp4->uncreate(tmp5);
			}
		}
		HX_STACK_LINE(369)
		Dynamic tmp = _empty_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		if ((tmp)){
			HX_STACK_LINE(370)
			this->list = null();
			HX_STACK_LINE(371)
			Dynamic tmp1 = this->empty_list();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(371)
			this->list = tmp1;
		}
		HX_STACK_LINE(374)
		this->state = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,unload,(void))

Void Parcel_obj::from_json( Dynamic _json_object){
{
		HX_STACK_FRAME("luxe.Parcel","from_json",0x3b42e050,"luxe.Parcel.from_json","luxe/Parcel.hx",378,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_json_object,"_json_object")
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			bool tmp = (_json_object == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(380)
			if ((tmp)){
				HX_STACK_LINE(380)
				::String tmp1 = HX_HCSTRING("_json_object was null","\xe7","\x68","\xbd","\x92");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(380)
				::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(380)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(382)
		bool tmp = (_json_object->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		if ((tmp)){
			HX_STACK_LINE(383)
			cpp::ArrayBase _bytes = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )));		HX_STACK_VAR(_bytes,"_bytes");
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(384)
				while((true)){
					HX_STACK_LINE(384)
					bool tmp1 = (_g < _bytes->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(384)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(384)
					if ((tmp2)){
						HX_STACK_LINE(384)
						break;
					}
					HX_STACK_LINE(384)
					Dynamic tmp3 = _bytes->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(384)
					Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(384)
					++(_g);
					HX_STACK_LINE(385)
					bool tmp4 = (item != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(385)
					if ((tmp4)){
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							bool tmp5 = (item == null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(386)
							if ((tmp5)){
								HX_STACK_LINE(386)
								::String tmp6 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(386)
								::luxe::DebugError tmp7 = ::luxe::DebugError_obj::null_assertion(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(386)
								HX_STACK_DO_THROW(tmp7);
							}
						}
						HX_STACK_LINE(387)
						{
							HX_STACK_LINE(387)
							bool tmp5 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(387)
							if ((tmp5)){
								HX_STACK_LINE(387)
								::String tmp6 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(387)
								::luxe::DebugError tmp7 = ::luxe::DebugError_obj::null_assertion(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(387)
								HX_STACK_DO_THROW(tmp7);
							}
						}
						HX_STACK_LINE(389)
						Dynamic tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(389)
						Dynamic tmp6 = item;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(389)
						tmp5->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
					}
				}
			}
		}
		HX_STACK_LINE(394)
		bool tmp1 = (_json_object->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		if ((tmp1)){
			HX_STACK_LINE(395)
			cpp::ArrayBase _texts = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic )));		HX_STACK_VAR(_texts,"_texts");
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(396)
				while((true)){
					HX_STACK_LINE(396)
					bool tmp2 = (_g < _texts->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(396)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(396)
					if ((tmp3)){
						HX_STACK_LINE(396)
						break;
					}
					HX_STACK_LINE(396)
					Dynamic tmp4 = _texts->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(396)
					Dynamic item = tmp4;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(396)
					++(_g);
					HX_STACK_LINE(397)
					bool tmp5 = (item != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(397)
					if ((tmp5)){
						HX_STACK_LINE(398)
						{
							HX_STACK_LINE(398)
							bool tmp6 = (item == null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(398)
							if ((tmp6)){
								HX_STACK_LINE(398)
								::String tmp7 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(398)
								::luxe::DebugError tmp8 = ::luxe::DebugError_obj::null_assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(398)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(399)
						{
							HX_STACK_LINE(399)
							bool tmp6 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(399)
							if ((tmp6)){
								HX_STACK_LINE(399)
								::String tmp7 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(399)
								::luxe::DebugError tmp8 = ::luxe::DebugError_obj::null_assertion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(399)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(401)
						Dynamic tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(401)
						Dynamic tmp7 = item;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(401)
						tmp6->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
					}
				}
			}
		}
		HX_STACK_LINE(406)
		bool tmp2 = (_json_object->__Field(HX_HCSTRING("json","\x28","\x42","\x68","\x46"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(406)
		if ((tmp2)){
			HX_STACK_LINE(407)
			cpp::ArrayBase _jsons = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("json","\x28","\x42","\x68","\x46"), hx::paccDynamic )));		HX_STACK_VAR(_jsons,"_jsons");
			HX_STACK_LINE(408)
			{
				HX_STACK_LINE(408)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(408)
				while((true)){
					HX_STACK_LINE(408)
					bool tmp3 = (_g < _jsons->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(408)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(408)
					if ((tmp4)){
						HX_STACK_LINE(408)
						break;
					}
					HX_STACK_LINE(408)
					Dynamic tmp5 = _jsons->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(408)
					Dynamic item = tmp5;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(408)
					++(_g);
					HX_STACK_LINE(409)
					bool tmp6 = (item != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(409)
					if ((tmp6)){
						HX_STACK_LINE(410)
						{
							HX_STACK_LINE(410)
							bool tmp7 = (item == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(410)
							if ((tmp7)){
								HX_STACK_LINE(410)
								::String tmp8 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(410)
								::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(410)
								HX_STACK_DO_THROW(tmp9);
							}
						}
						HX_STACK_LINE(411)
						{
							HX_STACK_LINE(411)
							bool tmp7 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(411)
							if ((tmp7)){
								HX_STACK_LINE(411)
								::String tmp8 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(411)
								::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(411)
								HX_STACK_DO_THROW(tmp9);
							}
						}
						HX_STACK_LINE(413)
						Dynamic tmp7 = this->list;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(413)
						Dynamic tmp8 = item;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(413)
						tmp7->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
					}
				}
			}
		}
		HX_STACK_LINE(418)
		bool tmp3 = (_json_object->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		if ((tmp3)){
			HX_STACK_LINE(419)
			cpp::ArrayBase _textures = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )));		HX_STACK_VAR(_textures,"_textures");
			HX_STACK_LINE(420)
			{
				HX_STACK_LINE(420)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(420)
				while((true)){
					HX_STACK_LINE(420)
					bool tmp4 = (_g < _textures->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(420)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(420)
					if ((tmp5)){
						HX_STACK_LINE(420)
						break;
					}
					HX_STACK_LINE(420)
					Dynamic tmp6 = _textures->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(420)
					Dynamic item = tmp6;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(420)
					++(_g);
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						bool tmp7 = (item == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(421)
						if ((tmp7)){
							HX_STACK_LINE(421)
							::String tmp8 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(421)
							::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(421)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						bool tmp7 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(422)
						if ((tmp7)){
							HX_STACK_LINE(422)
							::String tmp8 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(422)
							::luxe::DebugError tmp9 = ::luxe::DebugError_obj::null_assertion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(422)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(445)
					Dynamic tmp7 = this->list;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(447)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						::String _filter_type = item->__Field(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60"), hx::paccDynamic );		HX_STACK_VAR(_filter_type,"_filter_type");
						HX_STACK_LINE(447)
						bool tmp9 = (_filter_type == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(447)
						if ((tmp9)){
							HX_STACK_LINE(447)
							tmp8 = null();
						}
						else{
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								bool tmp10 = (_filter_type == HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(447)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(447)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(447)
								if ((tmp11)){
									HX_STACK_LINE(447)
									tmp12 = (_filter_type == HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"));
								}
								else{
									HX_STACK_LINE(447)
									tmp12 = true;
								}
								HX_STACK_LINE(447)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(447)
								if ((tmp13)){
									HX_STACK_LINE(447)
									::String tmp14 = HX_HCSTRING("_filter_type == 'nearest' || _filter_type == 'linear'","\xcb","\x04","\xdb","\xd6");		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(447)
									::luxe::DebugError tmp15 = ::luxe::DebugError_obj::assertion(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(447)
									HX_STACK_DO_THROW(tmp15);
								}
							}
							HX_STACK_LINE(447)
							::String tmp10 = _filter_type;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(447)
							::String _switch_1 = (tmp10);
							if (  ( _switch_1==HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"))){
								HX_STACK_LINE(447)
								tmp8 = (int)9728;
							}
							else if (  ( _switch_1==HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"))){
								HX_STACK_LINE(447)
								tmp8 = (int)9729;
							}
							else  {
								HX_STACK_LINE(447)
								tmp8 = null();
							}
;
;
						}
					}
					HX_STACK_LINE(448)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(448)
					{
						HX_STACK_LINE(448)
						::String _filter_type = item->__Field(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60"), hx::paccDynamic );		HX_STACK_VAR(_filter_type,"_filter_type");
						HX_STACK_LINE(448)
						bool tmp10 = (_filter_type == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(448)
						if ((tmp10)){
							HX_STACK_LINE(448)
							tmp9 = null();
						}
						else{
							HX_STACK_LINE(448)
							{
								HX_STACK_LINE(448)
								bool tmp11 = (_filter_type == HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(448)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(448)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(448)
								if ((tmp12)){
									HX_STACK_LINE(448)
									tmp13 = (_filter_type == HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"));
								}
								else{
									HX_STACK_LINE(448)
									tmp13 = true;
								}
								HX_STACK_LINE(448)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(448)
								if ((tmp14)){
									HX_STACK_LINE(448)
									::String tmp15 = HX_HCSTRING("_filter_type == 'nearest' || _filter_type == 'linear'","\xcb","\x04","\xdb","\xd6");		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(448)
									::luxe::DebugError tmp16 = ::luxe::DebugError_obj::assertion(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(448)
									HX_STACK_DO_THROW(tmp16);
								}
							}
							HX_STACK_LINE(448)
							::String tmp11 = _filter_type;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(448)
							::String _switch_2 = (tmp11);
							if (  ( _switch_2==HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"))){
								HX_STACK_LINE(448)
								tmp9 = (int)9728;
							}
							else if (  ( _switch_2==HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"))){
								HX_STACK_LINE(448)
								tmp9 = (int)9729;
							}
							else  {
								HX_STACK_LINE(448)
								tmp9 = null();
							}
;
;
						}
					}
					HX_STACK_LINE(449)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(449)
					{
						HX_STACK_LINE(449)
						::String _clamp_type = item->__Field(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65"), hx::paccDynamic );		HX_STACK_VAR(_clamp_type,"_clamp_type");
						HX_STACK_LINE(449)
						bool tmp11 = (_clamp_type == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(449)
						if ((tmp11)){
							HX_STACK_LINE(449)
							tmp10 = null();
						}
						else{
							HX_STACK_LINE(449)
							{
								HX_STACK_LINE(449)
								bool tmp12 = (_clamp_type == HX_HCSTRING("edge","\x3d","\xc8","\x0e","\x43"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(449)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(449)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(449)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(449)
								if ((tmp14)){
									HX_STACK_LINE(449)
									tmp15 = (_clamp_type == HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
								}
								else{
									HX_STACK_LINE(449)
									tmp15 = true;
								}
								HX_STACK_LINE(449)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(449)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(449)
								if ((tmp16)){
									HX_STACK_LINE(449)
									tmp17 = (_clamp_type == HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55"));
								}
								else{
									HX_STACK_LINE(449)
									tmp17 = true;
								}
								HX_STACK_LINE(449)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(449)
								if ((tmp18)){
									HX_STACK_LINE(449)
									::String tmp19 = HX_HCSTRING("_clamp_type == 'edge' || _clamp_type == 'repeat' || _clamp_type == 'mirror'","\x5c","\xa3","\xdf","\xbb");		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(449)
									::luxe::DebugError tmp20 = ::luxe::DebugError_obj::assertion(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(449)
									HX_STACK_DO_THROW(tmp20);
								}
							}
							HX_STACK_LINE(449)
							::String tmp12 = _clamp_type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(449)
							::String _switch_3 = (tmp12);
							if (  ( _switch_3==HX_HCSTRING("edge","\x3d","\xc8","\x0e","\x43"))){
								HX_STACK_LINE(449)
								tmp10 = (int)33071;
							}
							else if (  ( _switch_3==HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55"))){
								HX_STACK_LINE(449)
								tmp10 = (int)33648;
							}
							else if (  ( _switch_3==HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"))){
								HX_STACK_LINE(449)
								tmp10 = (int)10497;
							}
							else  {
								HX_STACK_LINE(449)
								tmp10 = null();
							}
;
;
						}
					}
					HX_STACK_LINE(450)
					Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(450)
					{
						HX_STACK_LINE(450)
						::String _clamp_type = item->__Field(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65"), hx::paccDynamic );		HX_STACK_VAR(_clamp_type,"_clamp_type");
						HX_STACK_LINE(450)
						bool tmp12 = (_clamp_type == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(450)
						if ((tmp12)){
							HX_STACK_LINE(450)
							tmp11 = null();
						}
						else{
							HX_STACK_LINE(450)
							{
								HX_STACK_LINE(450)
								bool tmp13 = (_clamp_type == HX_HCSTRING("edge","\x3d","\xc8","\x0e","\x43"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(450)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(450)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(450)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(450)
								if ((tmp15)){
									HX_STACK_LINE(450)
									tmp16 = (_clamp_type == HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
								}
								else{
									HX_STACK_LINE(450)
									tmp16 = true;
								}
								HX_STACK_LINE(450)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(450)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(450)
								if ((tmp17)){
									HX_STACK_LINE(450)
									tmp18 = (_clamp_type == HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55"));
								}
								else{
									HX_STACK_LINE(450)
									tmp18 = true;
								}
								HX_STACK_LINE(450)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(450)
								if ((tmp19)){
									HX_STACK_LINE(450)
									::String tmp20 = HX_HCSTRING("_clamp_type == 'edge' || _clamp_type == 'repeat' || _clamp_type == 'mirror'","\x5c","\xa3","\xdf","\xbb");		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(450)
									::luxe::DebugError tmp21 = ::luxe::DebugError_obj::assertion(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(450)
									HX_STACK_DO_THROW(tmp21);
								}
							}
							HX_STACK_LINE(450)
							::String tmp13 = _clamp_type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(450)
							::String _switch_4 = (tmp13);
							if (  ( _switch_4==HX_HCSTRING("edge","\x3d","\xc8","\x0e","\x43"))){
								HX_STACK_LINE(450)
								tmp11 = (int)33071;
							}
							else if (  ( _switch_4==HX_HCSTRING("mirror","\x3f","\x72","\xaa","\x55"))){
								HX_STACK_LINE(450)
								tmp11 = (int)33648;
							}
							else if (  ( _switch_4==HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"))){
								HX_STACK_LINE(450)
								tmp11 = (int)10497;
							}
							else  {
								HX_STACK_LINE(450)
								tmp11 = null();
							}
;
;
						}
					}
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &item,Dynamic &tmp9,Dynamic &tmp11,Dynamic &tmp10,Dynamic &tmp8){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",445,0x19b0ca9c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , ((::String)(item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ))),false);
								__result->Add(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60") , tmp8,false);
								__result->Add(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60") , tmp9,false);
								__result->Add(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65") , tmp10,false);
								__result->Add(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65") , tmp11,false);
								__result->Add(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac") , item->__Field(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac"), hx::paccDynamic ),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(445)
					Dynamic tmp12 = _Function_4_1::Block(item,tmp9,tmp11,tmp10,tmp8);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(445)
					tmp7->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
				}
			}
		}
		HX_STACK_LINE(457)
		bool tmp4 = (_json_object->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(457)
		if ((tmp4)){
			HX_STACK_LINE(458)
			cpp::ArrayBase _fonts = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )));		HX_STACK_VAR(_fonts,"_fonts");
			HX_STACK_LINE(459)
			{
				HX_STACK_LINE(459)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(459)
				while((true)){
					HX_STACK_LINE(459)
					bool tmp5 = (_g < _fonts->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(459)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(459)
					if ((tmp6)){
						HX_STACK_LINE(459)
						break;
					}
					HX_STACK_LINE(459)
					Dynamic tmp7 = _fonts->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(459)
					Dynamic item = tmp7;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(459)
					++(_g);
					HX_STACK_LINE(460)
					bool tmp8 = (item != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(460)
					if ((tmp8)){
						HX_STACK_LINE(461)
						{
							HX_STACK_LINE(461)
							bool tmp9 = (item == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(461)
							if ((tmp9)){
								HX_STACK_LINE(461)
								::String tmp10 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(461)
								::luxe::DebugError tmp11 = ::luxe::DebugError_obj::null_assertion(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(461)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(462)
						{
							HX_STACK_LINE(462)
							bool tmp9 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(462)
							if ((tmp9)){
								HX_STACK_LINE(462)
								::String tmp10 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(462)
								::luxe::DebugError tmp11 = ::luxe::DebugError_obj::null_assertion(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(462)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(464)
						Dynamic tmp9 = this->list;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(464)
						Dynamic tmp10 = item;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(464)
						tmp9->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
					}
				}
			}
		}
		HX_STACK_LINE(469)
		bool tmp5 = (_json_object->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(469)
		if ((tmp5)){
			HX_STACK_LINE(470)
			cpp::ArrayBase _shaders = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )));		HX_STACK_VAR(_shaders,"_shaders");
			HX_STACK_LINE(471)
			{
				HX_STACK_LINE(471)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(471)
				while((true)){
					HX_STACK_LINE(471)
					bool tmp6 = (_g < _shaders->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(471)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(471)
					if ((tmp7)){
						HX_STACK_LINE(471)
						break;
					}
					HX_STACK_LINE(471)
					Dynamic tmp8 = _shaders->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(471)
					Dynamic item = tmp8;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(471)
					++(_g);
					HX_STACK_LINE(472)
					bool tmp9 = (item != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(472)
					if ((tmp9)){
						HX_STACK_LINE(473)
						{
							HX_STACK_LINE(473)
							bool tmp10 = (item == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(473)
							if ((tmp10)){
								HX_STACK_LINE(473)
								::String tmp11 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(473)
								::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(473)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							bool tmp10 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(474)
							if ((tmp10)){
								HX_STACK_LINE(474)
								::String tmp11 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(474)
								::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(474)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(475)
						{
							HX_STACK_LINE(475)
							bool tmp10 = (item->__Field(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(475)
							if ((tmp10)){
								HX_STACK_LINE(475)
								::String tmp11 = HX_HCSTRING("item.frag_id was null","\xb1","\x05","\x52","\x6e");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(475)
								::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(475)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(476)
						{
							HX_STACK_LINE(476)
							bool tmp10 = (item->__Field(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(476)
							if ((tmp10)){
								HX_STACK_LINE(476)
								::String tmp11 = HX_HCSTRING("item.vert_id was null","\xb0","\x63","\xd6","\xc8");		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(476)
								::luxe::DebugError tmp12 = ::luxe::DebugError_obj::null_assertion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(476)
								HX_STACK_DO_THROW(tmp12);
							}
						}
						HX_STACK_LINE(478)
						Dynamic tmp10 = this->list;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(478)
						Dynamic tmp11 = item;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(478)
						tmp10->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
					}
				}
			}
		}
		HX_STACK_LINE(483)
		bool tmp6 = (_json_object->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(483)
		if ((tmp6)){
			HX_STACK_LINE(484)
			cpp::ArrayBase _sounds = ((cpp::ArrayBase)(_json_object->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )));		HX_STACK_VAR(_sounds,"_sounds");
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(485)
				while((true)){
					HX_STACK_LINE(485)
					bool tmp7 = (_g < _sounds->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(485)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(485)
					if ((tmp8)){
						HX_STACK_LINE(485)
						break;
					}
					HX_STACK_LINE(485)
					Dynamic tmp9 = _sounds->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(485)
					Dynamic item = tmp9;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(485)
					++(_g);
					HX_STACK_LINE(486)
					bool tmp10 = (item != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(486)
					if ((tmp10)){
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							bool tmp11 = (item == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(487)
							if ((tmp11)){
								HX_STACK_LINE(487)
								::String tmp12 = HX_HCSTRING("item was null","\x8b","\x59","\x54","\x85");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(487)
								::luxe::DebugError tmp13 = ::luxe::DebugError_obj::null_assertion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(487)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(488)
						{
							HX_STACK_LINE(488)
							bool tmp11 = (item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(488)
							if ((tmp11)){
								HX_STACK_LINE(488)
								::String tmp12 = HX_HCSTRING("item.id was null","\xe8","\xf1","\x00","\xe6");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(488)
								::luxe::DebugError tmp13 = ::luxe::DebugError_obj::null_assertion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(488)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(489)
						{
							HX_STACK_LINE(489)
							bool tmp11 = (item->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(489)
							if ((tmp11)){
								HX_STACK_LINE(489)
								::String tmp12 = HX_HCSTRING("item.name was null","\xb8","\xa0","\x41","\xe7");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(489)
								::luxe::DebugError tmp13 = ::luxe::DebugError_obj::null_assertion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(489)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(493)
						Dynamic tmp11 = this->list;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(493)
						Dynamic tmp12 = item;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(493)
						tmp11->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,from_json,(void))

Void Parcel_obj::one_loaded( ::String _item_id,::String _load_id,::luxe::resource::Resource _resource,int _index,int _total){
{
		HX_STACK_FRAME("luxe.Parcel","one_loaded",0x9bab64ab,"luxe.Parcel.one_loaded","luxe/Parcel.hx",502,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_item_id,"_item_id")
		HX_STACK_ARG(_load_id,"_load_id")
		HX_STACK_ARG(_resource,"_resource")
		HX_STACK_ARG(_index,"_index")
		HX_STACK_ARG(_total,"_total")
		struct _Function_1_1{
			inline static Dynamic Block( ::String &_load_id,int &_total,int &_index,::String &_item_id,::luxe::resource::Resource &_resource){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",506,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _item_id,false);
					__result->Add(HX_HCSTRING("load_id","\x94","\x33","\xeb","\x08") , _load_id,false);
					__result->Add(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12") , _resource,false);
					__result->Add(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe") , _index,false);
					__result->Add(HX_HCSTRING("total","\xc4","\x53","\x32","\x14") , _total,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(506)
		Dynamic tmp = _Function_1_1::Block(_load_id,_total,_index,_item_id,_resource);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(506)
		Dynamic _state = tmp;		HX_STACK_VAR(_state,"_state");
		HX_STACK_LINE(514)
		::luxe::Emitter tmp1 = this->emitter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(514)
		Dynamic tmp2 = _state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(514)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),514,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("one_loaded","\xfe","\x77","\xd2","\x5b"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(514)
		tmp1->emit((int)1,tmp2,tmp3);
		HX_STACK_LINE(516)
		Dynamic tmp4 = this->onprogress_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(516)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(516)
		if ((tmp5)){
			HX_STACK_LINE(517)
			Dynamic tmp6 = _state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(517)
			this->onprogress(tmp6);
		}
		HX_STACK_LINE(520)
		bool tmp6 = (_index == _total);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(520)
		if ((tmp6)){
			HX_STACK_LINE(521)
			this->state = (int)2;
			HX_STACK_LINE(521)
			::snow::core::native::Core tmp7 = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(521)
			Float tmp8 = tmp7->timestamp();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(521)
			Float tmp9 = this->start_load;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(521)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(521)
			this->time_to_load = tmp10;
			HX_STACK_LINE(521)
			::luxe::Emitter tmp11 = this->emitter;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(521)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),581,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("do_complete","\x2d","\xd7","\x89","\x7e"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(521)
			tmp11->emit((int)2,hx::ObjectPtr<OBJ_>(this),tmp12);
			HX_STACK_LINE(521)
			Dynamic tmp13 = this->oncomplete_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(521)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(521)
			if ((tmp14)){
				HX_STACK_LINE(521)
				this->oncomplete(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Parcel_obj,one_loaded,(void))

Void Parcel_obj::one_failed( ::String _item_id,::String _load_id,Dynamic _error,int _index,int _total){
{
		HX_STACK_FRAME("luxe.Parcel","one_failed",0x2b3ae263,"luxe.Parcel.one_failed","luxe/Parcel.hx",526,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_item_id,"_item_id")
		HX_STACK_ARG(_load_id,"_load_id")
		HX_STACK_ARG(_error,"_error")
		HX_STACK_ARG(_index,"_index")
		HX_STACK_ARG(_total,"_total")
		struct _Function_1_1{
			inline static Dynamic Block( ::String &_load_id,int &_total,int &_index,Dynamic &_error,::String &_item_id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",530,0x19b0ca9c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _item_id,false);
					__result->Add(HX_HCSTRING("load_id","\x94","\x33","\xeb","\x08") , _load_id,false);
					__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") , _error,false);
					__result->Add(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe") , _index,false);
					__result->Add(HX_HCSTRING("total","\xc4","\x53","\x32","\x14") , _total,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(530)
		Dynamic tmp = _Function_1_1::Block(_load_id,_total,_index,_error,_item_id);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(530)
		Dynamic _state = tmp;		HX_STACK_VAR(_state,"_state");
		HX_STACK_LINE(538)
		::luxe::Emitter tmp1 = this->emitter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(538)
		Dynamic tmp2 = _state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(538)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),538,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("one_failed","\xb6","\xf5","\x61","\xeb"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(538)
		tmp1->emit((int)3,tmp2,tmp3);
		HX_STACK_LINE(540)
		Dynamic tmp4 = this->onfailed_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(540)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(540)
		if ((tmp5)){
			HX_STACK_LINE(541)
			Dynamic tmp6 = _state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(541)
			this->onfailed(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Parcel_obj,one_failed,(void))

Array< ::String > Parcel_obj::get_listed( ){
	HX_STACK_FRAME("luxe.Parcel","get_listed",0x205a24b3,"luxe.Parcel.get_listed","luxe/Parcel.hx",547,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(548)
	Array< ::String > _result = Array_obj< ::String >::__new();		HX_STACK_VAR(_result,"_result");
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(550)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(550)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(550)
		while((true)){
			HX_STACK_LINE(550)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(550)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(550)
			if ((tmp2)){
				HX_STACK_LINE(550)
				break;
			}
			HX_STACK_LINE(550)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(550)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(550)
			++(_g);
			HX_STACK_LINE(550)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(550)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(551)
	{
		HX_STACK_LINE(551)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(551)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(551)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(551)
		while((true)){
			HX_STACK_LINE(551)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(551)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(551)
			if ((tmp2)){
				HX_STACK_LINE(551)
				break;
			}
			HX_STACK_LINE(551)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(551)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(551)
			++(_g);
			HX_STACK_LINE(551)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(551)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(552)
	{
		HX_STACK_LINE(552)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(552)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(552)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(552)
		while((true)){
			HX_STACK_LINE(552)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(552)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(552)
			if ((tmp2)){
				HX_STACK_LINE(552)
				break;
			}
			HX_STACK_LINE(552)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(552)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(552)
			++(_g);
			HX_STACK_LINE(552)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(552)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(553)
	{
		HX_STACK_LINE(553)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(553)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(553)
		while((true)){
			HX_STACK_LINE(553)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(553)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(553)
			if ((tmp2)){
				HX_STACK_LINE(553)
				break;
			}
			HX_STACK_LINE(553)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(553)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(553)
			++(_g);
			HX_STACK_LINE(553)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(553)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(554)
	{
		HX_STACK_LINE(554)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(554)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(554)
		while((true)){
			HX_STACK_LINE(554)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(554)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(554)
			if ((tmp2)){
				HX_STACK_LINE(554)
				break;
			}
			HX_STACK_LINE(554)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(554)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(554)
			++(_g);
			HX_STACK_LINE(554)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(554)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(555)
	{
		HX_STACK_LINE(555)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(555)
		Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(555)
		cpp::ArrayBase _g1 = tmp->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(555)
		while((true)){
			HX_STACK_LINE(555)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(555)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(555)
			if ((tmp2)){
				HX_STACK_LINE(555)
				break;
			}
			HX_STACK_LINE(555)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(555)
			Dynamic item = tmp3;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(555)
			++(_g);
			HX_STACK_LINE(555)
			::String tmp4 = item->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(555)
			_result->push(tmp4);
		}
	}
	HX_STACK_LINE(559)
	return _result;
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,get_listed,return )

int Parcel_obj::get_length( ){
	HX_STACK_FRAME("luxe.Parcel","get_length",0xcf67f15c,"luxe.Parcel.get_length","luxe/Parcel.hx",562,0x19b0ca9c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(564)
	Dynamic tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	int tmp1 = tmp->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(565)
	Dynamic tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(565)
	int tmp3 = tmp2->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(564)
	int tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(566)
	Dynamic tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(566)
	int tmp6 = tmp5->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(564)
	int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(567)
	Dynamic tmp8 = this->list;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(567)
	int tmp9 = tmp8->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(564)
	int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(568)
	Dynamic tmp11 = this->list;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(568)
	int tmp12 = tmp11->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(564)
	int tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(569)
	Dynamic tmp14 = this->list;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(569)
	int tmp15 = tmp14->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(564)
	int tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(570)
	Dynamic tmp17 = this->list;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(570)
	int tmp18 = tmp17->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(564)
	int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(563)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,get_length,return )

Void Parcel_obj::do_complete( ::String _load_id){
{
		HX_STACK_FRAME("luxe.Parcel","do_complete",0x1c8001e0,"luxe.Parcel.do_complete","luxe/Parcel.hx",574,0x19b0ca9c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_load_id,"_load_id")
		HX_STACK_LINE(576)
		this->state = (int)2;
		HX_STACK_LINE(577)
		::snow::core::native::Core tmp = ::snow::Snow_obj::core;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(577)
		Float tmp1 = tmp->timestamp();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(577)
		Float tmp2 = this->start_load;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(577)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(577)
		this->time_to_load = tmp3;
		HX_STACK_LINE(581)
		::luxe::Emitter tmp4 = this->emitter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(581)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Parcel.hx","\x75","\x8d","\x70","\x20"),581,HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c"),HX_HCSTRING("do_complete","\x2d","\xd7","\x89","\x7e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(581)
		tmp4->emit((int)2,hx::ObjectPtr<OBJ_>(this),tmp5);
		HX_STACK_LINE(583)
		Dynamic tmp6 = this->oncomplete_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(583)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(583)
		if ((tmp7)){
			HX_STACK_LINE(584)
			this->oncomplete(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parcel_obj,do_complete,(void))

Dynamic Parcel_obj::empty_list( ){
	HX_STACK_FRAME("luxe.Parcel","empty_list",0x27c28b3d,"luxe.Parcel.empty_list","luxe/Parcel.hx",589,0x19b0ca9c)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Parcel.hx",590,0x19b0ca9c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32") , cpp::ArrayBase_obj::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(590)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Parcel_obj,empty_list,return )


Parcel_obj::Parcel_obj()
{
}

void Parcel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parcel);
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(time_to_load,"time_to_load");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(oncomplete,"oncomplete");
	HX_MARK_MEMBER_NAME(onprogress,"onprogress");
	HX_MARK_MEMBER_NAME(onfailed,"onfailed");
	HX_MARK_MEMBER_NAME(start_load,"start_load");
	HX_MARK_MEMBER_NAME(load_time_spacing,"load_time_spacing");
	HX_MARK_MEMBER_NAME(load_start_delay,"load_start_delay");
	HX_MARK_END_CLASS();
}

void Parcel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_system,"system");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(time_to_load,"time_to_load");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(oncomplete,"oncomplete");
	HX_VISIT_MEMBER_NAME(onprogress,"onprogress");
	HX_VISIT_MEMBER_NAME(onfailed,"onfailed");
	HX_VISIT_MEMBER_NAME(start_load,"start_load");
	HX_VISIT_MEMBER_NAME(load_time_spacing,"load_time_spacing");
	HX_VISIT_MEMBER_NAME(load_start_delay,"load_start_delay");
}

Dynamic Parcel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"listed") ) { if (inCallProp == hx::paccAlways) return get_listed(); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onfailed") ) { return onfailed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_loaded") ) { return is_loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"from_json") ) { return from_json_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oncomplete") ) { return oncomplete; }
		if (HX_FIELD_EQ(inName,"onprogress") ) { return onprogress; }
		if (HX_FIELD_EQ(inName,"start_load") ) { return start_load; }
		if (HX_FIELD_EQ(inName,"one_loaded") ) { return one_loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"one_failed") ) { return one_failed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_listed") ) { return get_listed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"empty_list") ) { return empty_list_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"do_complete") ) { return do_complete_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"time_to_load") ) { return time_to_load; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"load_start_delay") ) { return load_start_delay; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"load_time_spacing") ) { return load_time_spacing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parcel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::luxe::Resources >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onfailed") ) { onfailed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oncomplete") ) { oncomplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onprogress") ) { onprogress=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start_load") ) { start_load=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"time_to_load") ) { time_to_load=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"load_start_delay") ) { load_start_delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"load_time_spacing") ) { load_time_spacing=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Parcel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Parcel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("listed","\x3d","\xc8","\xf9","\xef"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("time_to_load","\x38","\x0d","\xc3","\x2c"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	outFields->push(HX_HCSTRING("start_load","\x63","\x1e","\xb2","\x83"));
	outFields->push(HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88"));
	outFields->push(HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Resources*/ ,(int)offsetof(Parcel_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{hx::fsString,(int)offsetof(Parcel_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Parcel_obj,loaded),HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{hx::fsFloat,(int)offsetof(Parcel_obj,time_to_load),HX_HCSTRING("time_to_load","\x38","\x0d","\xc3","\x2c")},
	{hx::fsInt,(int)offsetof(Parcel_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(Parcel_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,oncomplete),HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,onprogress),HX_HCSTRING("onprogress","\xcc","\x0f","\x30","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Parcel_obj,onfailed),HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93")},
	{hx::fsFloat,(int)offsetof(Parcel_obj,start_load),HX_HCSTRING("start_load","\x63","\x1e","\xb2","\x83")},
	{hx::fsFloat,(int)offsetof(Parcel_obj,load_time_spacing),HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88")},
	{hx::fsFloat,(int)offsetof(Parcel_obj,load_start_delay),HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("time_to_load","\x38","\x0d","\xc3","\x2c"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83"),
	HX_HCSTRING("onprogress","\xcc","\x0f","\x30","\x8a"),
	HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93"),
	HX_HCSTRING("start_load","\x63","\x1e","\xb2","\x83"),
	HX_HCSTRING("load_time_spacing","\x0a","\xc7","\x97","\x88"),
	HX_HCSTRING("load_start_delay","\xcd","\xf1","\xb2","\x20"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("is_loaded","\xfa","\xae","\x93","\xfd"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("from_json","\x5d","\xd8","\xd4","\x1a"),
	HX_HCSTRING("one_loaded","\xfe","\x77","\xd2","\x5b"),
	HX_HCSTRING("one_failed","\xb6","\xf5","\x61","\xeb"),
	HX_HCSTRING("get_listed","\x06","\x38","\x81","\xe0"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("do_complete","\x2d","\xd7","\x89","\x7e"),
	HX_HCSTRING("empty_list","\x90","\x9e","\xe9","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parcel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parcel_obj::__mClass,"__mClass");
};

#endif

hx::Class Parcel_obj::__mClass;

void Parcel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Parcel","\xa1","\x8a","\xda","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Parcel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Parcel_obj >;
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
