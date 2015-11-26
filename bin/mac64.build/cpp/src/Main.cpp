#include <hxcpp.h>

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
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",27,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(31)
	config->__Field(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = (int)4;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",33,0x087e5c05)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("assets/mapSprites.png","\x19","\x07","\xbb","\x75"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(33)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	config->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(38)
	Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	return tmp1;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",42,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		this->setup_input();
		HX_STACK_LINE(48)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),48,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::luxe::Entity tmp1 = ::luxe::Entity_obj::__new(null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::Main_obj::levelModel = tmp1;
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",49,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("level-model","\xe0","\x70","\xd9","\x9c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(49)
		Dynamic tmp2 = _Function_1_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::components::LevelModel tmp3 = ::components::LevelModel_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::Main_obj::levelGen = tmp3;
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::luxe::Entity tmp4 = ::Main_obj::levelModel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			::luxe::Entity _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(50)
			(_this->component_count)++;
			HX_STACK_LINE(50)
			::components::LevelModel tmp5 = ::Main_obj::levelGen;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			_this->_components->add(tmp5);
		}
		HX_STACK_LINE(52)
		::components::LevelModel tmp4 = ::Main_obj::levelGen;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		int tmp5 = tmp4->getStartPosition();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		this->playerX = tmp5;
		HX_STACK_LINE(53)
		int tmp6 = this->playerX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		::String tmp7 = (HX_HCSTRING("player Start Position: ","\x6c","\xd2","\x8b","\xea") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),53,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		::haxe::Log_obj::trace(tmp7,tmp8);
	}
return null();
}


Void Main_obj::setup_events( ){
{
		HX_STACK_FRAME("Main","setup_events",0x1c9fd110,"Main.setup_events","Main.hx",58,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::luxe::Events tmp = ::Luxe_obj::events;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		Dynamic tmp1 = this->on_game_fail_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		tmp->listen(HX_HCSTRING("game.fail","\xda","\xe7","\x11","\x62"),tmp1);
		HX_STACK_LINE(60)
		::luxe::Events tmp2 = ::Luxe_obj::events;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		Dynamic tmp3 = this->on_game_success_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		tmp2->listen(HX_HCSTRING("game.success","\x47","\xdd","\x9d","\x60"),tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setup_events,(void))

Void Main_obj::on_game_fail( Dynamic e){
{
		HX_STACK_FRAME("Main","on_game_fail",0xfcc41360,"Main.on_game_fail","Main.hx",64,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(65)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),65,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("on_game_fail","\x2b","\x6e","\xe9","\xd5"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::haxe::Log_obj::trace(HX_HCSTRING("fail game","\x74","\x45","\x57","\xa6"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,on_game_fail,(void))

Void Main_obj::on_game_success( Dynamic e){
{
		HX_STACK_FRAME("Main","on_game_success",0xc5eb2981,"Main.on_game_success","Main.hx",68,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(69)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),69,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("on_game_success","\x96","\x5f","\x48","\x75"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::haxe::Log_obj::trace(HX_HCSTRING("win game","\x76","\xf6","\x33","\x51"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,on_game_success,(void))

Void Main_obj::setup_input( ){
{
		HX_STACK_FRAME("Main","setup_input",0x652cedf3,"Main.setup_input","Main.hx",73,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		int tmp1 = ::snow::_system::input::Keycodes_obj::key_a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		tmp->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),tmp1);
		HX_STACK_LINE(75)
		::luxe::Input tmp2 = ::Luxe_obj::input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		int tmp3 = ::snow::_system::input::Keycodes_obj::left;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		tmp2->bind_key(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),tmp3);
		HX_STACK_LINE(77)
		::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		int tmp5 = ::snow::_system::input::Keycodes_obj::key_d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		tmp4->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),tmp5);
		HX_STACK_LINE(78)
		::luxe::Input tmp6 = ::Luxe_obj::input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		int tmp7 = ::snow::_system::input::Keycodes_obj::right;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		tmp6->bind_key(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setup_input,(void))

Void Main_obj::onkeyup( Dynamic e){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",82,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(84)
		int tmp = e->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		int tmp1 = ::snow::_system::input::Keycodes_obj::escape;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp2)){
			HX_STACK_LINE(85)
			::Luxe_obj::shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float dt){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",90,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(92)
		Float tmp = dt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		this->update_input(tmp);
	}
return null();
}


Void Main_obj::update_input( Float dt){
{
		HX_STACK_FRAME("Main","update_input",0xac0ee349,"Main.update_input","Main.hx",97,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(99)
		::luxe::Input tmp = ::Luxe_obj::input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		bool tmp1 = tmp->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		if ((tmp2)){
			HX_STACK_LINE(99)
			::luxe::Input tmp4 = ::Luxe_obj::input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			::luxe::Input tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			::luxe::Input tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			tmp3 = tmp6->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
		}
		else{
			HX_STACK_LINE(99)
			tmp3 = false;
		}
		HX_STACK_LINE(99)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		if ((tmp3)){
			HX_STACK_LINE(99)
			bool tmp5 = this->inputDone;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			tmp4 = !(tmp7);
		}
		else{
			HX_STACK_LINE(99)
			tmp4 = false;
		}
		HX_STACK_LINE(99)
		if ((tmp4)){
			HX_STACK_LINE(100)
			Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),100,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("update_input","\x14","\x3e","\x34","\x85"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			::haxe::Log_obj::trace(HX_HCSTRING("Jump Clicked","\x75","\x91","\x1b","\xfe"),tmp5);
			HX_STACK_LINE(101)
			this->inputDone = true;
			HX_STACK_LINE(102)
			this->step((int)-1,(int)1);
		}
		HX_STACK_LINE(105)
		::luxe::Input tmp5 = ::Luxe_obj::input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		bool tmp6 = tmp5->inputreleased(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		if ((tmp6)){
			HX_STACK_LINE(105)
			bool tmp8 = this->inputDone;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(105)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(105)
			tmp7 = false;
		}
		HX_STACK_LINE(105)
		if ((tmp7)){
			HX_STACK_LINE(106)
			Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),106,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("update_input","\x14","\x3e","\x34","\x85"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			::haxe::Log_obj::trace(HX_HCSTRING("left clicked","\x8e","\xa1","\x0c","\xe8"),tmp8);
			HX_STACK_LINE(107)
			this->inputDone = true;
			HX_STACK_LINE(108)
			this->step((int)1,(int)1);
		}
		HX_STACK_LINE(111)
		::luxe::Input tmp8 = ::Luxe_obj::input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(111)
		bool tmp9 = tmp8->inputreleased(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(111)
		if ((tmp9)){
			HX_STACK_LINE(111)
			bool tmp11 = this->inputDone;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(111)
			tmp10 = !(tmp13);
		}
		else{
			HX_STACK_LINE(111)
			tmp10 = false;
		}
		HX_STACK_LINE(111)
		if ((tmp10)){
			HX_STACK_LINE(112)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),112,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("update_input","\x14","\x3e","\x34","\x85"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(112)
			::haxe::Log_obj::trace(HX_HCSTRING("right clicked","\x63","\x02","\xd8","\xb4"),tmp11);
			HX_STACK_LINE(113)
			this->inputDone = true;
			HX_STACK_LINE(114)
			this->step((int)0,(int)2);
		}
		HX_STACK_LINE(118)
		bool tmp11 = this->inputDone;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(118)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(118)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(118)
		if ((tmp12)){
			HX_STACK_LINE(118)
			::luxe::Input tmp14 = ::Luxe_obj::input;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(118)
			::luxe::Input tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(118)
			::luxe::Input tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(118)
			bool tmp17 = tmp16->inputdown(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(118)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(118)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(118)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(118)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(118)
			tmp13 = !(tmp21);
		}
		else{
			HX_STACK_LINE(118)
			tmp13 = false;
		}
		HX_STACK_LINE(118)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(118)
		if ((tmp13)){
			HX_STACK_LINE(118)
			::luxe::Input tmp15 = ::Luxe_obj::input;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(118)
			::luxe::Input tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(118)
			bool tmp17 = tmp16->inputdown(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(118)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(118)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(118)
			tmp14 = !(tmp19);
		}
		else{
			HX_STACK_LINE(118)
			tmp14 = false;
		}
		HX_STACK_LINE(118)
		if ((tmp14)){
			HX_STACK_LINE(119)
			this->inputDone = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,update_input,(void))

Void Main_obj::step( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(1);
	HX_STACK_FRAME("Main","step",0xf113cf81,"Main.step","Main.hx",123,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(124)
		int tmp = this->playerX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		this->playerX = tmp2;
		HX_STACK_LINE(125)
		::components::LevelModel tmp3 = ::Main_obj::levelGen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		int tmp5 = this->playerX;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
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
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timerRunning") ) { return timerRunning; }
		if (HX_FIELD_EQ(inName,"setup_events") ) { return setup_events_dyn(); }
		if (HX_FIELD_EQ(inName,"on_game_fail") ) { return on_game_fail_dyn(); }
		if (HX_FIELD_EQ(inName,"update_input") ) { return update_input_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"on_game_success") ) { return on_game_success_dyn(); }
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
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inputDone),HX_HCSTRING("inputDone","\xac","\xad","\x98","\x09")},
	{hx::fsInt,(int)offsetof(Main_obj,playerX),HX_HCSTRING("playerX","\xd7","\x09","\x15","\x8a")},
	{hx::fsBool,(int)offsetof(Main_obj,timerRunning),HX_HCSTRING("timerRunning","\xba","\x88","\x1c","\xf0")},
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
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("setup_events","\xdb","\x2b","\xc5","\xf5"),
	HX_HCSTRING("on_game_fail","\x2b","\x6e","\xe9","\xd5"),
	HX_HCSTRING("on_game_success","\x96","\x5f","\x48","\x75"),
	HX_HCSTRING("setup_input","\x88","\x35","\x26","\x66"),
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

