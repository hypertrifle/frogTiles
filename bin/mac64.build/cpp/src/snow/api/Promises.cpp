#include <hxcpp.h>

#ifndef INCLUDED_snow_api_Promises
#include <snow/api/Promises.h>
#endif
namespace snow{
namespace api{

Void Promises_obj::__construct()
{
	return null();
}

//Promises_obj::~Promises_obj() { }

Dynamic Promises_obj::__CreateEmpty() { return  new Promises_obj; }
hx::ObjectPtr< Promises_obj > Promises_obj::__new()
{  hx::ObjectPtr< Promises_obj > _result_ = new Promises_obj();
	_result_->__construct();
	return _result_;}

Dynamic Promises_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Promises_obj > _result_ = new Promises_obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase Promises_obj::calls;

cpp::ArrayBase Promises_obj::defers;

Void Promises_obj::step( ){
{
		HX_STACK_FRAME("snow.api.Promises","step",0x23521563,"snow.api.Promises.step","snow/api/Promise.hx",424,0xcb181004)
		HX_STACK_LINE(426)
		::snow::api::Promises_obj::next();
		HX_STACK_LINE(428)
		while((true)){
			HX_STACK_LINE(428)
			int tmp = ::snow::api::Promises_obj::defers->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(428)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(428)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(428)
			if ((tmp2)){
				HX_STACK_LINE(428)
				break;
			}
			HX_STACK_LINE(429)
			Dynamic tmp3 = ::snow::api::Promises_obj::defers->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			Dynamic defer = tmp3;		HX_STACK_VAR(defer,"defer");
			HX_STACK_LINE(430)
			defer->__Field(HX_HCSTRING("f","\x66","\x00","\x00","\x00"), hx::paccDynamic )(defer->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic ));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Promises_obj,step,(void))

Void Promises_obj::next( ){
{
		HX_STACK_FRAME("snow.api.Promises","next",0x1ff8b30a,"snow.api.Promises.next","snow/api/Promise.hx",436,0xcb181004)
		HX_STACK_LINE(437)
		int tmp = ::snow::api::Promises_obj::calls->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(437)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(437)
		if ((tmp1)){
			HX_STACK_LINE(437)
			Dynamic tmp2 = ::snow::api::Promises_obj::calls->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(437)
			tmp2();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Promises_obj,next,(void))

Void Promises_obj::defer( Dynamic f,Dynamic a){
{
		HX_STACK_FRAME("snow.api.Promises","defer",0x1794737b,"snow.api.Promises.defer","snow/api/Promise.hx",441,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(442)
		bool tmp = (f == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		if ((tmp)){
			HX_STACK_LINE(442)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &f,Dynamic &a){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","snow/api/Promise.hx",443,0xcb181004)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("f","\x66","\x00","\x00","\x00") , f,false);
					__result->Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00") , a,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(443)
		Dynamic tmp1 = _Function_1_1::Block(f,a);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		::snow::api::Promises_obj::defers->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promises_obj,defer,(void))

Void Promises_obj::queue( Dynamic f){
{
		HX_STACK_FRAME("snow.api.Promises","queue",0x9e5cb39a,"snow.api.Promises.queue","snow/api/Promise.hx",447,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(448)
		bool tmp = (f == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		if ((tmp)){
			HX_STACK_LINE(448)
			return null();
		}
		HX_STACK_LINE(449)
		Dynamic tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(449)
		::snow::api::Promises_obj::calls->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promises_obj,queue,(void))


Promises_obj::Promises_obj()
{
}

bool Promises_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { outValue = step_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"calls") ) { outValue = calls; return true;  }
		if (HX_FIELD_EQ(inName,"defer") ) { outValue = defer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"defers") ) { outValue = defers; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Promises_obj::calls,HX_HCSTRING("calls","\x15","\x72","\x1b","\x41")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Promises_obj::defers,HX_HCSTRING("defers","\xc1","\x76","\xe1","\x66")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promises_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Promises_obj::calls,"calls");
	HX_MARK_MEMBER_NAME(Promises_obj::defers,"defers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promises_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Promises_obj::calls,"calls");
	HX_VISIT_MEMBER_NAME(Promises_obj::defers,"defers");
};

#endif

hx::Class Promises_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("calls","\x15","\x72","\x1b","\x41"),
	HX_HCSTRING("defers","\xc1","\x76","\xe1","\x66"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("defer","\x72","\x4d","\x22","\xd7"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	::String(null()) };

void Promises_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.Promises","\xb7","\xe9","\x9a","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promises_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Promises_obj >;
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

void Promises_obj::__boot()
{
	calls= cpp::ArrayBase_obj::__new();
	defers= cpp::ArrayBase_obj::__new();
}

} // end namespace snow
} // end namespace api
