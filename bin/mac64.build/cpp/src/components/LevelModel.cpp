#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
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
#ifndef INCLUDED_luxe_Events
#include <luxe/Events.h>
#endif
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
namespace components{

Void LevelModel_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("components.LevelModel","new",0x6bc9036f,"components.LevelModel.new","components/LevelModel.hx",13,0x9417d240)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(15)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	super::__construct(tmp);
	HX_STACK_LINE(20)
	this->level = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)9).Add((int)0).Add((int)0)).Add(Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)).Add(Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)2).Add((int)0).Add((int)0)).Add(Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)).Add(Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)2)).Add(Array_obj< int >::__new().Add((int)0).Add((int)2).Add((int)0).Add((int)0).Add((int)0)).Add(Array_obj< int >::__new().Add((int)0).Add((int)8).Add((int)2).Add((int)0).Add((int)2));
	HX_STACK_LINE(24)
	this->safeTileIndexs = Array_obj< int >::__new().Add((int)0).Add((int)8);
}
;
	return null();
}

//LevelModel_obj::~LevelModel_obj() { }

Dynamic LevelModel_obj::__CreateEmpty() { return  new LevelModel_obj; }
hx::ObjectPtr< LevelModel_obj > LevelModel_obj::__new(Dynamic options)
{  hx::ObjectPtr< LevelModel_obj > _result_ = new LevelModel_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic LevelModel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelModel_obj > _result_ = new LevelModel_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void LevelModel_obj::init( ){
{
		HX_STACK_FRAME("components.LevelModel","init",0xe0d2b521,"components.LevelModel.init","components/LevelModel.hx",28,0x9417d240)
		HX_STACK_THIS(this)
	}
return null();
}


int LevelModel_obj::getStartPosition( ){
	HX_STACK_FRAME("components.LevelModel","getStartPosition",0xf9057c46,"components.LevelModel.getStartPosition","components/LevelModel.hx",36,0x9417d240)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	int tmp = this->level->__get((int)0).StaticCast< Array< int > >()->indexOf((int)9,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(LevelModel_obj,getStartPosition,return )

Void LevelModel_obj::update( Float dt){
{
		HX_STACK_FRAME("components.LevelModel","update",0xb27c665a,"components.LevelModel.update","components/LevelModel.hx",40,0x9417d240)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
	}
return null();
}


bool LevelModel_obj::step( hx::Null< int >  __o_amount,hx::Null< int >  __o_playerX){
int amount = __o_amount.Default(1);
int playerX = __o_playerX.Default(2);
	HX_STACK_FRAME("components.LevelModel","step",0xe773615d,"components.LevelModel.step","components/LevelModel.hx",45,0x9417d240)
	HX_STACK_THIS(this)
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(playerX,"playerX")
{
		HX_STACK_LINE(47)
		bool safe = false;		HX_STACK_VAR(safe,"safe");
		HX_STACK_LINE(49)
		int tmp = amount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		int tmp1 = this->level->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		if ((tmp2)){
			HX_STACK_LINE(51)
			::luxe::Events tmp3 = ::Luxe_obj::events;		HX_STACK_VAR(tmp3,"tmp3");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","components/LevelModel.hx",51,0x9417d240)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(51)
			Dynamic tmp4 = _Function_2_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			tmp3->fire(HX_HCSTRING("game.fail.toofar","\xd7","\x26","\x66","\xb9"),tmp4,null());
			HX_STACK_LINE(52)
			Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("LevelModel.hx","\x39","\x54","\x14","\x8e"),52,HX_HCSTRING("components.LevelModel","\xfd","\x1f","\x31","\xc8"),HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			::haxe::Log_obj::trace(HX_HCSTRING("cant jump that far!","\x4d","\xc1","\x46","\x9d"),tmp5);
			HX_STACK_LINE(53)
			bool tmp6 = safe;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			return tmp6;
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			while((true)){
				HX_STACK_LINE(58)
				bool tmp3 = (_g < amount);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				if ((tmp4)){
					HX_STACK_LINE(58)
					break;
				}
				HX_STACK_LINE(58)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(59)
				Array< int > prev = this->level->shift().StaticCast< Array< int > >();		HX_STACK_VAR(prev,"prev");
			}
		}
		HX_STACK_LINE(63)
		int tmp3 = this->level->__get((int)0).StaticCast< Array< int > >()->__get(playerX);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		int tmp4 = this->safeTileIndexs->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		bool tmp5 = (tmp4 != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		if ((tmp5)){
			HX_STACK_LINE(65)
			safe = true;
		}
		else{
			HX_STACK_LINE(68)
			safe = false;
		}
		HX_STACK_LINE(71)
		int tmp6 = this->level->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		bool tmp7 = (tmp6 <= (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		if ((tmp7)){
			HX_STACK_LINE(73)
			bool tmp8 = safe;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			if ((tmp8)){
				HX_STACK_LINE(75)
				::luxe::Events tmp9 = ::Luxe_obj::events;		HX_STACK_VAR(tmp9,"tmp9");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","components/LevelModel.hx",75,0x9417d240)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(75)
				Dynamic tmp10 = _Function_3_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(75)
				tmp9->fire(HX_HCSTRING("game.success.complete","\xc0","\xa0","\x0e","\x29"),tmp10,null());
			}
			else{
				HX_STACK_LINE(79)
				::luxe::Events tmp9 = ::Luxe_obj::events;		HX_STACK_VAR(tmp9,"tmp9");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","components/LevelModel.hx",79,0x9417d240)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(79)
				Dynamic tmp10 = _Function_3_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(79)
				tmp9->fire(HX_HCSTRING("game.fail.hitBadTile","\x94","\x29","\xa3","\xe1"),tmp10,null());
			}
		}
		HX_STACK_LINE(84)
		::luxe::Events tmp8 = ::Luxe_obj::events;		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","components/LevelModel.hx",84,0x9417d240)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		Dynamic tmp9 = _Function_1_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(84)
		tmp8->fire(HX_HCSTRING("game.redraw","\x33","\x8a","\xd8","\x8e"),tmp9,null());
		HX_STACK_LINE(85)
		bool tmp10 = safe;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(LevelModel_obj,step,return )

Void LevelModel_obj::onreset( ){
{
		HX_STACK_FRAME("components.LevelModel","onreset",0xc665dedf,"components.LevelModel.onreset","components/LevelModel.hx",88,0x9417d240)
		HX_STACK_THIS(this)
	}
return null();
}


Void LevelModel_obj::ondestroy( ){
{
		HX_STACK_FRAME("components.LevelModel","ondestroy",0x567f260a,"components.LevelModel.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void LevelModel_obj::onremoved( ){
{
		HX_STACK_FRAME("components.LevelModel","onremoved",0x24f918b0,"components.LevelModel.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



LevelModel_obj::LevelModel_obj()
{
}

void LevelModel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LevelModel);
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(safeTileIndexs,"safeTileIndexs");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LevelModel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(safeTileIndexs,"safeTileIndexs");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LevelModel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"safeTileIndexs") ) { return safeTileIndexs; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getStartPosition") ) { return getStartPosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LevelModel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"safeTileIndexs") ) { safeTileIndexs=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LevelModel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LevelModel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("level","\x84","\x15","\x63","\x72"));
	outFields->push(HX_HCSTRING("safeTileIndexs","\x9c","\xee","\x0c","\xdb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LevelModel_obj,level),HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(LevelModel_obj,safeTileIndexs),HX_HCSTRING("safeTileIndexs","\x9c","\xee","\x0c","\xdb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("safeTileIndexs","\x9c","\xee","\x0c","\xdb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("getStartPosition","\xb5","\xac","\xd6","\x39"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("onreset","\x50","\x78","\xd8","\xe9"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("onremoved","\x61","\xb0","\x59","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelModel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelModel_obj::__mClass,"__mClass");
};

#endif

hx::Class LevelModel_obj::__mClass;

void LevelModel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("components.LevelModel","\xfd","\x1f","\x31","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LevelModel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LevelModel_obj >;
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

} // end namespace components
