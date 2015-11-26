#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_components_LevelModel
#include <components/LevelModel.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_States
#include <luxe/States.h>
#endif
#ifndef INCLUDED_luxe_components_Components
#include <luxe/components/Components.h>
#endif
#ifndef INCLUDED_snow_system_input_Keycodes
#include <snow/system/input/Keycodes.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",16,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->time = ((Float)0);
	HX_STACK_LINE(25)
	this->timerRunning = false;
	HX_STACK_LINE(23)
	this->playerX = (int)2;
	HX_STACK_LINE(21)
	this->inputDone = false;
	HX_STACK_LINE(16)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::config( Dynamic config){
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",28,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(32)
	config->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = (int)4;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",34,0x087e5c05)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/mapSprites.png","\x19","\x07","\xbb","\x75"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(34)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	config->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(39)
	Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	return tmp1;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",43,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->setup_input();
		HX_STACK_LINE(46)
		this->setup_events();
		HX_STACK_LINE(49)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),49,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::luxe::Entity tmp1 = ::luxe::Entity_obj::__new(null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::Main_obj::levelModel = tmp1;
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",50,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("level-model","\xe0","\x70","\xd9","\x9c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(50)
		Dynamic tmp2 = _Function_1_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		::components::LevelModel tmp3 = ::components::LevelModel_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::Main_obj::levelGen = tmp3;
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::luxe::Entity tmp4 = ::Main_obj::levelModel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			::luxe::Entity _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(51)
			(_this->component_count)++;
			HX_STACK_LINE(51)
			::components::LevelModel tmp5 = ::Main_obj::levelGen;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			_this->_components->add(tmp5);
		}
		HX_STACK_LINE(53)
		::components::LevelModel tmp4 = ::Main_obj::levelGen;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		int tmp5 = tmp4->getStartPosition();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		this->playerX = tmp5;
		HX_STACK_LINE(54)
		int tmp6 = this->playerX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		::String tmp7 = (HX_HCSTRING("player Start Position: ","\x6c","\xd2","\x8b","\xea") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),54,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		::haxe::Log_obj::trace(tmp7,tmp8);
	}
return null();
}


Void Main_obj::setup_events( ){
{
		HX_STACK_FRAME("Main","setup_events",0x1c9fd110,"Main.setup_events","Main.hx",59,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::Main _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		::luxe::Events tmp = ::Luxe_obj::events;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Main,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Main.hx",60,0x087e5c05)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(61)
				Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),61,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("setup_events","\xdb","\x2b","\xc5","\xf5"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(61)
				::haxe::Log_obj::trace(HX_HCSTRING("fail game","\x74","\x45","\x57","\xa6"),tmp1);
				HX_STACK_LINE(62)
				_g->finish_game(false);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(60)
		tmp->listen(HX_HCSTRING("game.fail.*","\x96","\x3a","\x3f","\x78"), Dynamic(new _Function_1_1(_g)));
		HX_STACK_LINE(64)
		::luxe::Events tmp1 = ::Luxe_obj::events;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::Main,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","Main.hx",64,0x087e5c05)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(65)
				Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),65,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("setup_events","\xdb","\x2b","\xc5","\xf5"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(65)
				::haxe::Log_obj::trace(HX_HCSTRING("win game","\x76","\xf6","\x33","\x51"),tmp2);
				HX_STACK_LINE(66)
				_g->finish_game(true);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(64)
		tmp1->listen(HX_HCSTRING("game.success.*","\x43","\x25","\xc5","\x29"), Dynamic(new _Function_1_2(_g)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setup_events,(void))

Void Main_obj::setup_input( ){
{
		HX_STACK_FRAME("Main","setup_input",0x652cedf3,"Main.setup_input","Main.hx",72,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		int tmp1 = ::snow::_system::input::Keycodes_obj::key_a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		tmp->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),tmp1);
		HX_STACK_LINE(74)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		int tmp3 = ::snow::_system::input::Keycodes_obj::left;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		tmp2->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),tmp3);
		HX_STACK_LINE(76)
		::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		int tmp5 = ::snow::_system::input::Keycodes_obj::key_d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		tmp4->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),tmp5);
		HX_STACK_LINE(77)
		::luxe::Input tmp6 = ::Luxe_obj::input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		int tmp7 = ::snow::_system::input::Keycodes_obj::right;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		tmp6->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setup_input,(void))

Void Main_obj::finish_game( bool won){
{
		HX_STACK_FRAME("Main","finish_game",0x8a4e7b09,"Main.finish_game","Main.hx",81,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(won,"won")
		HX_STACK_LINE(82)
		this->timerRunning = false;
		HX_STACK_LINE(84)
		Float tmp = this->time;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		Float tmp1 = (tmp * (int)100);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Float tmp3 = (Float(tmp2) / Float((int)100));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Float final_time = tmp3;		HX_STACK_VAR(final_time,"final_time");
		HX_STACK_LINE(86)
		bool tmp4 = won;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		if ((tmp4)){
			HX_STACK_LINE(86)
			tmp5 = (HX_HCSTRING("You Won! time: ","\x67","\xb5","\x25","\xce") + final_time);
		}
		else{
			HX_STACK_LINE(86)
			tmp5 = (HX_HCSTRING("You Lost! time: ","\x17","\x3f","\x3d","\x97") + final_time);
		}
		HX_STACK_LINE(86)
		::String final_string = tmp5;		HX_STACK_VAR(final_string,"final_string");
		HX_STACK_LINE(87)
		::String tmp6 = final_string;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),87,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("finish_game","\x9e","\xc2","\x47","\x8b"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		::haxe::Log_obj::trace(tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,finish_game,(void))

Void Main_obj::onkeyup( Dynamic e){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",91,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(94)
		int tmp = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		int tmp1 = ::snow::_system::input::Keycodes_obj::escape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		if ((tmp2)){
			HX_STACK_LINE(95)
			::Luxe_obj::shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float dt){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",100,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(102)
		Float tmp = dt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		this->update_input(tmp);
		HX_STACK_LINE(104)
		bool tmp1 = this->timerRunning;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		if ((tmp1)){
			HX_STACK_LINE(105)
			hx::AddEq(this->time,dt);
		}
	}
return null();
}


Void Main_obj::update_input( Float dt){
{
		HX_STACK_FRAME("Main","update_input",0xac0ee349,"Main.update_input","Main.hx",111,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(113)
		bool tmp = this->timerRunning;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		if ((tmp2)){
			HX_STACK_LINE(113)
			::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			::luxe::Input tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			bool tmp6 = tmp5->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(113)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(113)
			if ((tmp11)){
				HX_STACK_LINE(113)
				::luxe::Input tmp12 = ::Luxe_obj::input;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(113)
				::luxe::Input tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(113)
				::luxe::Input tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(113)
				tmp3 = tmp14->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
			}
			else{
				HX_STACK_LINE(113)
				tmp3 = true;
			}
		}
		else{
			HX_STACK_LINE(113)
			tmp3 = false;
		}
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(114)
			this->timerRunning = true;
		}
		HX_STACK_LINE(117)
		::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		bool tmp5 = tmp4->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		if ((tmp6)){
			HX_STACK_LINE(117)
			::luxe::Input tmp8 = ::Luxe_obj::input;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(117)
			::luxe::Input tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(117)
			::luxe::Input tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(117)
			tmp7 = tmp10->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
		}
		else{
			HX_STACK_LINE(117)
			tmp7 = false;
		}
		HX_STACK_LINE(117)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		if ((tmp7)){
			HX_STACK_LINE(117)
			bool tmp9 = this->inputDone;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(117)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(117)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(117)
			tmp8 = false;
		}
		HX_STACK_LINE(117)
		if ((tmp8)){
			HX_STACK_LINE(118)
			Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),118,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("update_input","\x14","\x3e","\x34","\x85"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			::haxe::Log_obj::trace(HX_HCSTRING("Jump Clicked","\x75","\x91","\x1b","\xfe"),tmp9);
			HX_STACK_LINE(119)
			this->inputDone = true;
			HX_STACK_LINE(120)
			this->step((int)-1,(int)1);
		}
		HX_STACK_LINE(123)
		::luxe::Input tmp9 = ::Luxe_obj::input;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		bool tmp10 = tmp9->inputreleased(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(123)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(123)
		if ((tmp10)){
			HX_STACK_LINE(123)
			bool tmp12 = this->inputDone;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(123)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(123)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(123)
			tmp11 = !(tmp14);
		}
		else{
			HX_STACK_LINE(123)
			tmp11 = false;
		}
		HX_STACK_LINE(123)
		if ((tmp11)){
			HX_STACK_LINE(124)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),124,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("update_input","\x14","\x3e","\x34","\x85"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(124)
			::haxe::Log_obj::trace(HX_HCSTRING("left clicked","\x8e","\xa1","\x0c","\xe8"),tmp12);
			HX_STACK_LINE(125)
			this->inputDone = true;
			HX_STACK_LINE(126)
			this->step((int)1,(int)1);
		}
		HX_STACK_LINE(129)
		::luxe::Input tmp12 = ::Luxe_obj::input;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(129)
		bool tmp13 = tmp12->inputreleased(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(129)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(129)
		if ((tmp13)){
			HX_STACK_LINE(129)
			bool tmp15 = this->inputDone;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(129)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(129)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(129)
			tmp14 = !(tmp17);
		}
		else{
			HX_STACK_LINE(129)
			tmp14 = false;
		}
		HX_STACK_LINE(129)
		if ((tmp14)){
			HX_STACK_LINE(130)
			Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),130,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("update_input","\x14","\x3e","\x34","\x85"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(130)
			::haxe::Log_obj::trace(HX_HCSTRING("right clicked","\x63","\x02","\xd8","\xb4"),tmp15);
			HX_STACK_LINE(131)
			this->inputDone = true;
			HX_STACK_LINE(132)
			this->step((int)0,(int)2);
		}
		HX_STACK_LINE(136)
		bool tmp15 = this->inputDone;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(136)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(136)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(136)
		if ((tmp16)){
			HX_STACK_LINE(136)
			::luxe::Input tmp18 = ::Luxe_obj::input;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(136)
			::luxe::Input tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(136)
			::luxe::Input tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(136)
			bool tmp21 = tmp20->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(136)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(136)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(136)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(136)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(136)
			tmp17 = !(tmp25);
		}
		else{
			HX_STACK_LINE(136)
			tmp17 = false;
		}
		HX_STACK_LINE(136)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(136)
		if ((tmp17)){
			HX_STACK_LINE(136)
			::luxe::Input tmp19 = ::Luxe_obj::input;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(136)
			::luxe::Input tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(136)
			bool tmp21 = tmp20->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(136)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(136)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(136)
			tmp18 = !(tmp23);
		}
		else{
			HX_STACK_LINE(136)
			tmp18 = false;
		}
		HX_STACK_LINE(136)
		if ((tmp18)){
			HX_STACK_LINE(137)
			this->inputDone = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,update_input,(void))

Void Main_obj::step( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(1);
	HX_STACK_FRAME("Main","step",0xf113cf81,"Main.step","Main.hx",141,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(142)
		int tmp = this->playerX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		this->playerX = tmp2;
		HX_STACK_LINE(143)
		::components::LevelModel tmp3 = ::Main_obj::levelGen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		int tmp5 = this->playerX;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		tmp3->step(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,step,(void))

::luxe::States Main_obj::states;

::luxe::Entity Main_obj::levelModel;

::components::LevelModel Main_obj::levelGen;


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playerX") ) { return playerX; }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputDone") ) { return inputDone; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setup_input") ) { return setup_input_dyn(); }
		if (HX_FIELD_EQ(inName,"finish_game") ) { return finish_game_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timerRunning") ) { return timerRunning; }
		if (HX_FIELD_EQ(inName,"setup_events") ) { return setup_events_dyn(); }
		if (HX_FIELD_EQ(inName,"update_input") ) { return update_input_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { outValue = states; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"levelGen") ) { outValue = levelGen; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"levelModel") ) { outValue = levelModel; return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playerX") ) { playerX=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inputDone") ) { inputDone=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timerRunning") ) { timerRunning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { states=ioValue.Cast< ::luxe::States >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"levelGen") ) { levelGen=ioValue.Cast< ::components::LevelModel >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"levelModel") ) { levelModel=ioValue.Cast< ::luxe::Entity >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("inputDone","\xac","\xad","\x98","\x09"));
	outFields->push(HX_HCSTRING("playerX","\xd7","\x09","\x15","\x8a"));
	outFields->push(HX_HCSTRING("timerRunning","\xba","\x88","\x1c","\xf0"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inputDone),HX_HCSTRING("inputDone","\xac","\xad","\x98","\x09")},
	{hx::fsInt,(int)offsetof(Main_obj,playerX),HX_HCSTRING("playerX","\xd7","\x09","\x15","\x8a")},
	{hx::fsBool,(int)offsetof(Main_obj,timerRunning),HX_HCSTRING("timerRunning","\xba","\x88","\x1c","\xf0")},
	{hx::fsFloat,(int)offsetof(Main_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::luxe::States*/ ,(void *) &Main_obj::states,HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{hx::fsObject /*::luxe::Entity*/ ,(void *) &Main_obj::levelModel,HX_HCSTRING("levelModel","\x85","\xff","\xf1","\xeb")},
	{hx::fsObject /*::components::LevelModel*/ ,(void *) &Main_obj::levelGen,HX_HCSTRING("levelGen","\x6c","\x6d","\x6e","\x26")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("inputDone","\xac","\xad","\x98","\x09"),
	HX_HCSTRING("playerX","\xd7","\x09","\x15","\x8a"),
	HX_HCSTRING("timerRunning","\xba","\x88","\x1c","\xf0"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("setup_events","\xdb","\x2b","\xc5","\xf5"),
	HX_HCSTRING("setup_input","\x88","\x35","\x26","\x66"),
	HX_HCSTRING("finish_game","\x9e","\xc2","\x47","\x8b"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("update_input","\x14","\x3e","\x34","\x85"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::states,"states");
	HX_MARK_MEMBER_NAME(Main_obj::levelModel,"levelModel");
	HX_MARK_MEMBER_NAME(Main_obj::levelGen,"levelGen");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::states,"states");
	HX_VISIT_MEMBER_NAME(Main_obj::levelModel,"levelModel");
	HX_VISIT_MEMBER_NAME(Main_obj::levelGen,"levelGen");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("levelModel","\x85","\xff","\xf1","\xeb"),
	HX_HCSTRING("levelGen","\x6c","\x6d","\x6e","\x26"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

