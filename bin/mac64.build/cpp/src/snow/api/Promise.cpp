#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_PromiseError
#include <snow/api/PromiseError.h>
#endif
#ifndef INCLUDED_snow_api_Promises
#include <snow/api/Promises.h>
#endif
namespace snow{
namespace api{

Void Promise_obj::__construct(Dynamic func)
{
HX_STACK_FRAME("snow.api.Promise","new",0xe10ada2e,"snow.api.Promise.new","snow/api/Promise.hx",25,0xcb181004)
HX_STACK_THIS(this)
HX_STACK_ARG(func,"func")
{
	HX_STACK_LINE(37)
	this->was_caught = false;
	HX_STACK_LINE(54)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	this->state = (int)0;
	HX_STACK_LINE(58)
	this->reject_reactions = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(59)
	this->fulfill_reactions = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(60)
	this->settle_reactions = cpp::ArrayBase_obj::__new();

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g,Dynamic,func)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",62,0xcb181004)
		{
			HX_STACK_LINE(71)
			func(_g->onfulfill_dyn(),_g->onreject_dyn());
			HX_STACK_LINE(74)
			Dynamic tmp = ::snow::api::Promises_obj::next_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(74)
			::snow::api::Promises_obj::defer(tmp,null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(62)
	::snow::api::Promises_obj::queue( Dynamic(new _Function_1_1(_g,func)));
}
;
	return null();
}

//Promise_obj::~Promise_obj() { }

Dynamic Promise_obj::__CreateEmpty() { return  new Promise_obj; }
hx::ObjectPtr< Promise_obj > Promise_obj::__new(Dynamic func)
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct(func);
	return _result_;}

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::snow::api::Promise Promise_obj::then( Dynamic on_fulfilled,Dynamic on_rejected){
	HX_STACK_FRAME("snow.api.Promise","then",0x0c6d8d4f,"snow.api.Promise.then","snow/api/Promise.hx",83,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_ARG(on_fulfilled,"on_fulfilled")
	HX_STACK_ARG(on_rejected,"on_rejected")
	HX_STACK_LINE(83)
	int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	int _g = tmp;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(83)
	int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	switch( (int)(tmp1)){
		case (int)0: {
			HX_STACK_LINE(86)
			Dynamic tmp2 = on_fulfilled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			this->add_fulfill(tmp2);
			HX_STACK_LINE(87)
			Dynamic tmp3 = on_rejected;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			this->add_reject(tmp3);
			HX_STACK_LINE(88)
			::snow::api::Promise tmp4 = this->new_linked_promise();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			return tmp4;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(92)
			Dynamic tmp2 = on_fulfilled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			::snow::api::Promises_obj::defer(tmp2,tmp3);
			HX_STACK_LINE(93)
			Dynamic tmp4 = this->result;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			::snow::api::Promise tmp5 = ::snow::api::Promise_obj::resolve(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			return tmp5;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(97)
			Dynamic tmp2 = on_rejected;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			::snow::api::Promises_obj::defer(tmp2,tmp3);
			HX_STACK_LINE(98)
			Dynamic tmp4 = this->result;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			::snow::api::Promise tmp5 = ::snow::api::Promise_obj::reject(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			return tmp5;
		}
		;break;
	}
	HX_STACK_LINE(83)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Promise_obj,then,return )

::snow::api::Promise Promise_obj::error( Dynamic on_rejected){
	HX_STACK_FRAME("snow.api.Promise","error",0x37116516,"snow.api.Promise.error","snow/api/Promise.hx",109,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_ARG(on_rejected,"on_rejected")
	HX_STACK_LINE(109)
	int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	int _g = tmp;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(109)
	int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	switch( (int)(tmp1)){
		case (int)0: {
			HX_STACK_LINE(112)
			Dynamic tmp2 = on_rejected;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			this->add_reject(tmp2);
			HX_STACK_LINE(113)
			::snow::api::Promise tmp3 = this->new_linked_resolve_empty();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			return tmp3;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(117)
			Dynamic tmp2 = this->result;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			::snow::api::Promise tmp3 = ::snow::api::Promise_obj::resolve(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			return tmp3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(121)
			Dynamic tmp2 = on_rejected;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			::snow::api::Promises_obj::defer(tmp2,tmp3);
			HX_STACK_LINE(122)
			Dynamic tmp4 = this->result;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			::snow::api::Promise tmp5 = ::snow::api::Promise_obj::reject(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			return tmp5;
		}
		;break;
	}
	HX_STACK_LINE(109)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,error,return )

::String Promise_obj::toString( ){
	HX_STACK_FRAME("snow.api.Promise","toString",0xf41b7c1e,"snow.api.Promise.toString","snow/api/Promise.hx",235,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	::String tmp = this->state_string();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::String tmp1 = (HX_HCSTRING("Promise { state:","\x53","\xa9","\x1a","\x7e") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	::String tmp2 = (tmp1 + HX_HCSTRING(", result:","\xc9","\xa8","\x23","\xd3"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(236)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(236)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(236)
	::String tmp6 = (tmp5 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(236)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,toString,return )

Void Promise_obj::add_settle( Dynamic f){
{
		HX_STACK_FRAME("snow.api.Promise","add_settle",0xf8fc3b1b,"snow.api.Promise.add_settle","snow/api/Promise.hx",244,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(246)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		if ((tmp1)){
			HX_STACK_LINE(247)
			Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			this->settle_reactions->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		}
		else{
			HX_STACK_LINE(249)
			Dynamic tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			Dynamic tmp3 = this->result;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			::snow::api::Promises_obj::defer(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_settle,(void))

::snow::api::Promise Promise_obj::new_linked_promise( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_promise",0x40dd1d26,"snow.api.Promise.new_linked_promise","snow/api/Promise.hx",256,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(256)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",259,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::snow::api::Promise,_g,Dynamic,r,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",259,0xcb181004)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(260)
					bool tmp = (_g->state == (int)1);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(260)
					if ((tmp)){
						HX_STACK_LINE(261)
						Dynamic tmp1 = _g->result;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(261)
						f(tmp1);
					}
					else{
						HX_STACK_LINE(263)
						Dynamic tmp1 = _g->result;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(263)
						r(tmp1);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(259)
			_g->add_settle( Dynamic(new _Function_2_1(_g,r,f)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(258)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_promise,return )

::snow::api::Promise Promise_obj::new_linked_resolve( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_resolve",0xb0536277,"snow.api.Promise.new_linked_resolve","snow/api/Promise.hx",273,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",275,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",275,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(276)
					Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(276)
					f(tmp);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(275)
			_g->add_settle( Dynamic(new _Function_2_1(f)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(274)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_resolve,return )

::snow::api::Promise Promise_obj::new_linked_reject( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_reject",0x4d777c34,"snow.api.Promise.new_linked_reject","snow/api/Promise.hx",283,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(283)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",285,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,r)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",285,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(286)
					Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(286)
					r(tmp);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(285)
			_g->add_settle( Dynamic(new _Function_2_1(r)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(284)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_reject,return )

::snow::api::Promise Promise_obj::new_linked_resolve_empty( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_resolve_empty",0x28449785,"snow.api.Promise.new_linked_resolve_empty","snow/api/Promise.hx",294,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",296,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",297,0xcb181004)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(297)
					f();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(296)
			_g->add_settle( Dynamic(new _Function_2_1(f)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(295)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_resolve_empty,return )

::snow::api::Promise Promise_obj::new_linked_reject_empty( ){
	HX_STACK_FRAME("snow.api.Promise","new_linked_reject_empty",0x845a1d02,"snow.api.Promise.new_linked_reject_empty","snow/api/Promise.hx",305,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(305)
	::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
	int __ArgCount() const { return 2; }
	Void run(Dynamic f,Dynamic r){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",307,0xcb181004)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(r,"r")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,r)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",308,0xcb181004)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(308)
					r();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(307)
			_g->add_settle( Dynamic(new _Function_2_1(r)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(306)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_reject_empty,return )

Void Promise_obj::add_fulfill( Dynamic f){
{
		HX_STACK_FRAME("snow.api.Promise","add_fulfill",0x885e59b0,"snow.api.Promise.add_fulfill","snow/api/Promise.hx",315,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(316)
		bool tmp = (f != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		if ((tmp)){
			HX_STACK_LINE(317)
			Dynamic tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(317)
			this->fulfill_reactions->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_fulfill,(void))

Void Promise_obj::add_reject( Dynamic f){
{
		HX_STACK_FRAME("snow.api.Promise","add_reject",0x8bf952ef,"snow.api.Promise.add_reject","snow/api/Promise.hx",322,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(323)
		bool tmp = (f != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		if ((tmp)){
			HX_STACK_LINE(324)
			this->was_caught = true;
			HX_STACK_LINE(325)
			Dynamic tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(325)
			this->reject_reactions->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_reject,(void))

Void Promise_obj::onfulfill( Dynamic val){
{
		HX_STACK_FRAME("snow.api.Promise","onfulfill",0x5213e64f,"snow.api.Promise.onfulfill","snow/api/Promise.hx",332,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(336)
		this->state = (int)1;
		HX_STACK_LINE(337)
		this->result = val;
		HX_STACK_LINE(339)
		while((true)){
			HX_STACK_LINE(339)
			int tmp = this->fulfill_reactions->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(339)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(339)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(339)
			if ((tmp2)){
				HX_STACK_LINE(339)
				break;
			}
			HX_STACK_LINE(340)
			Dynamic tmp3 = this->fulfill_reactions->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(340)
			Dynamic fn = tmp3;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(341)
			fn(this->result);
		}
		HX_STACK_LINE(344)
		this->onsettle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onfulfill,(void))

Void Promise_obj::onreject( Dynamic reason){
{
		HX_STACK_FRAME("snow.api.Promise","onreject",0x694a7f30,"snow.api.Promise.onreject","snow/api/Promise.hx",349,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(reason,"reason")
		HX_STACK_LINE(353)
		this->state = (int)2;
		HX_STACK_LINE(354)
		this->result = reason;
		HX_STACK_LINE(356)
		while((true)){
			HX_STACK_LINE(356)
			int tmp = this->reject_reactions->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(356)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(356)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(356)
			if ((tmp2)){
				HX_STACK_LINE(356)
				break;
			}
			HX_STACK_LINE(357)
			Dynamic tmp3 = this->reject_reactions->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(357)
			Dynamic fn = tmp3;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(358)
			fn(this->result);
		}
		HX_STACK_LINE(361)
		this->onsettle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onreject,(void))

Void Promise_obj::onsettle( ){
{
		HX_STACK_FRAME("snow.api.Promise","onsettle",0xd64d675c,"snow.api.Promise.onsettle","snow/api/Promise.hx",368,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_LINE(368)
		while((true)){
			HX_STACK_LINE(368)
			int tmp = this->settle_reactions->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(368)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(368)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(368)
			if ((tmp2)){
				HX_STACK_LINE(368)
				break;
			}
			HX_STACK_LINE(369)
			Dynamic tmp3 = this->settle_reactions->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(369)
			Dynamic fn = tmp3;		HX_STACK_VAR(fn,"fn");
			HX_STACK_LINE(370)
			fn(this->result);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,onsettle,(void))

Void Promise_obj::onexception( Dynamic err){
{
		HX_STACK_FRAME("snow.api.Promise","onexception",0xf4b49b1e,"snow.api.Promise.onexception","snow/api/Promise.hx",377,0xcb181004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
		HX_STACK_LINE(377)
		::snow::api::Promise _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::snow::api::Promise,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",381,0xcb181004)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(382)
				bool tmp = _g->was_caught;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(382)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(382)
				if ((tmp1)){
					HX_STACK_LINE(383)
					bool tmp2 = (_g->state == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(383)
					if ((tmp2)){
						HX_STACK_LINE(384)
						::String tmp3 = _g->toString();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(384)
						::snow::api::PromiseError tmp4 = ::snow::api::PromiseError_obj::UnhandledPromiseRejection(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(384)
						HX_STACK_DO_THROW(tmp4);
						HX_STACK_LINE(385)
						return null();
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(381)
		this->add_settle( Dynamic(new _Function_1_1(_g)));
		HX_STACK_LINE(395)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(395)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(395)
		if ((tmp1)){
			HX_STACK_LINE(396)
			Dynamic tmp2 = err;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(396)
			this->onreject(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onexception,(void))

::String Promise_obj::state_string( ){
	HX_STACK_FRAME("snow.api.Promise","state_string",0x9a7c64f1,"snow.api.Promise.state_string","snow/api/Promise.hx",402,0xcb181004)
	HX_STACK_THIS(this)
	HX_STACK_LINE(403)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(403)
		int tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(403)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(403)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(404)
				tmp = HX_HCSTRING("pending","\x57","\x98","\xec","\x2b");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(405)
				tmp = HX_HCSTRING("fulfilled","\x9f","\x25","\x7b","\x40");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(406)
				tmp = HX_HCSTRING("rejected","\x7e","\xff","\x83","\xab");
			}
			;break;
		}
	}
	HX_STACK_LINE(403)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,state_string,return )

::snow::api::Promise Promise_obj::all( Array< ::Dynamic > list){
	HX_STACK_FRAME("snow.api.Promise","all",0xe10102ef,"snow.api.Promise.all","snow/api/Promise.hx",136,0xcb181004)
	HX_STACK_ARG(list,"list")
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			bool tmp = (_g < list->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(139)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			if ((tmp1)){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(139)
			::snow::api::Promise tmp2 = list->__get(_g).StaticCast< ::snow::api::Promise >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			::snow::api::Promise item = tmp2;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(139)
			++(_g);
			HX_STACK_LINE(140)
			bool tmp3 = (item == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			if ((tmp3)){
				HX_STACK_LINE(140)
				HX_STACK_DO_THROW(HX_HCSTRING("Promise.all handed an array with null items within it","\x07","\x3d","\xbc","\x23"));
			}
		}
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,list)
	int __ArgCount() const { return 2; }
	Void run(Dynamic ok,Dynamic no){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",144,0xcb181004)
		HX_STACK_ARG(ok,"ok")
		HX_STACK_ARG(no,"no")
		{
			HX_STACK_LINE(146)
			Array< int > current = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(current,"current");
			HX_STACK_LINE(147)
			int total = list->length;		HX_STACK_VAR(total,"total");
			HX_STACK_LINE(148)
			cpp::ArrayBase fulfill_result = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(fulfill_result,"fulfill_result");
			HX_STACK_LINE(149)
			cpp::ArrayBase reject_result = cpp::ArrayBase_obj::__new().Add(null());		HX_STACK_VAR(reject_result,"reject_result");
			HX_STACK_LINE(150)
			Array< int > all_state = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(all_state,"all_state");

			HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_2_1,Array< int >,all_state,Dynamic,ok,int,total,cpp::ArrayBase,fulfill_result,Array< int >,current)
			int __ArgCount() const { return 2; }
			Void run(int index,Dynamic val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",152,0xcb181004)
				HX_STACK_ARG(index,"index")
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(154)
					bool tmp = (all_state->__get((int)0) != (int)0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(154)
					if ((tmp)){
						HX_STACK_LINE(154)
						return null();
					}
					HX_STACK_LINE(156)
					(current[(int)0])++;
					HX_STACK_LINE(157)
					Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(157)
					hx::IndexRef((fulfill_result).mPtr,index) = tmp1;
					HX_STACK_LINE(159)
					bool tmp2 = (total == current->__get((int)0));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(159)
					if ((tmp2)){
						HX_STACK_LINE(160)
						all_state[(int)0] = (int)1;
						HX_STACK_LINE(161)
						ok(fulfill_result);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(152)
			Dynamic single_ok =  Dynamic(new _Function_2_1(all_state,ok,total,fulfill_result,current));		HX_STACK_VAR(single_ok,"single_ok");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_2,Array< int >,all_state,Dynamic,no,cpp::ArrayBase,reject_result)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","snow/api/Promise.hx",166,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(168)
					bool tmp = (all_state->__get((int)0) != (int)0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(168)
					if ((tmp)){
						HX_STACK_LINE(168)
						return null();
					}
					HX_STACK_LINE(170)
					all_state[(int)0] = (int)2;
					HX_STACK_LINE(171)
					hx::IndexRef((reject_result).mPtr,(int)0) = val;
					HX_STACK_LINE(172)
					Dynamic tmp1 = reject_result->__GetItem((int)0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(172)
					no(tmp1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(166)
			Dynamic single_err =  Dynamic(new _Function_2_2(all_state,no,reject_result));		HX_STACK_VAR(single_err,"single_err");
			HX_STACK_LINE(176)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(177)
				while((true)){
					HX_STACK_LINE(177)
					bool tmp = (_g < list->length);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(177)
					bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(177)
					if ((tmp1)){
						HX_STACK_LINE(177)
						break;
					}
					HX_STACK_LINE(177)
					::snow::api::Promise tmp2 = list->__get(_g).StaticCast< ::snow::api::Promise >();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(177)
					::snow::api::Promise promise = tmp2;		HX_STACK_VAR(promise,"promise");
					HX_STACK_LINE(177)
					++(_g);
					HX_STACK_LINE(178)
					Dynamic tmp3 = single_ok;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(178)
					int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(178)
					Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(178)
						int a1 = tmp4;		HX_STACK_VAR(a1,"a1");

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,int,a1,Dynamic,f)
						int __ArgCount() const { return 1; }
						Void run(Dynamic a2){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","snow/api/Promise.hx",178,0xcb181004)
							HX_STACK_ARG(a2,"a2")
							{
								HX_STACK_LINE(178)
								int tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(178)
								Dynamic tmp7 = a2;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(178)
								f(tmp6,tmp7).Cast< Void >();
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(178)
						tmp5 =  Dynamic(new _Function_5_1(a1,f));
					}
					HX_STACK_LINE(178)
					::snow::api::Promise tmp6 = promise->then(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(178)
					Dynamic tmp7 = single_err;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(178)
					tmp6->error(tmp7);
					HX_STACK_LINE(179)
					(index)++;
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(144)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(list)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,all,return )

::snow::api::Promise Promise_obj::race( Array< ::Dynamic > list){
	HX_STACK_FRAME("snow.api.Promise","race",0x0b15ce83,"snow.api.Promise.race","snow/api/Promise.hx",189,0xcb181004)
	HX_STACK_ARG(list,"list")

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,list)
	int __ArgCount() const { return 2; }
	Void run(Dynamic ok,Dynamic no){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",191,0xcb181004)
		HX_STACK_ARG(ok,"ok")
		HX_STACK_ARG(no,"no")
		{
			HX_STACK_LINE(193)
			Array< bool > settled = Array_obj< bool >::__new().Add(false);		HX_STACK_VAR(settled,"settled");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,ok,Array< bool >,settled)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","snow/api/Promise.hx",194,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(195)
					bool tmp = settled->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(195)
					if ((tmp)){
						HX_STACK_LINE(195)
						return null();
					}
					HX_STACK_LINE(196)
					settled[(int)0] = true;
					HX_STACK_LINE(197)
					Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(197)
					ok(tmp1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(194)
			Dynamic single_ok =  Dynamic(new _Function_2_1(ok,settled));		HX_STACK_VAR(single_ok,"single_ok");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Dynamic,no,Array< bool >,settled)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","snow/api/Promise.hx",200,0xcb181004)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(201)
					bool tmp = settled->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(201)
					if ((tmp)){
						HX_STACK_LINE(201)
						return null();
					}
					HX_STACK_LINE(202)
					settled[(int)0] = true;
					HX_STACK_LINE(203)
					Dynamic tmp1 = val;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(203)
					no(tmp1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(200)
			Dynamic single_err =  Dynamic(new _Function_2_2(no,settled));		HX_STACK_VAR(single_err,"single_err");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(206)
				while((true)){
					HX_STACK_LINE(206)
					bool tmp = (_g < list->length);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(206)
					bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(206)
					if ((tmp1)){
						HX_STACK_LINE(206)
						break;
					}
					HX_STACK_LINE(206)
					::snow::api::Promise tmp2 = list->__get(_g).StaticCast< ::snow::api::Promise >();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(206)
					::snow::api::Promise promise = tmp2;		HX_STACK_VAR(promise,"promise");
					HX_STACK_LINE(206)
					++(_g);
					HX_STACK_LINE(207)
					Dynamic tmp3 = single_ok;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(207)
					::snow::api::Promise tmp4 = promise->then(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(207)
					Dynamic tmp5 = single_err;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(207)
					tmp4->error(tmp5);
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(191)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(list)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,race,return )

::snow::api::Promise Promise_obj::reject( Dynamic reason){
	HX_STACK_FRAME("snow.api.Promise","reject",0xa943dc51,"snow.api.Promise.reject","snow/api/Promise.hx",215,0xcb181004)
	HX_STACK_ARG(reason,"reason")

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,reason)
	int __ArgCount() const { return 2; }
	Void run(Dynamic ok,Dynamic no){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",217,0xcb181004)
		HX_STACK_ARG(ok,"ok")
		HX_STACK_ARG(no,"no")
		{
			HX_STACK_LINE(218)
			Dynamic tmp = reason;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(218)
			no(tmp);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(217)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(reason)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,reject,return )

::snow::api::Promise Promise_obj::resolve( Dynamic val){
	HX_STACK_FRAME("snow.api.Promise","resolve",0xa75b1bba,"snow.api.Promise.resolve","snow/api/Promise.hx",225,0xcb181004)
	HX_STACK_ARG(val,"val")

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,val)
	int __ArgCount() const { return 2; }
	Void run(Dynamic ok,Dynamic no){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","snow/api/Promise.hx",227,0xcb181004)
		HX_STACK_ARG(ok,"ok")
		HX_STACK_ARG(no,"no")
		{
			HX_STACK_LINE(228)
			Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(228)
			ok(tmp);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(227)
	::snow::api::Promise tmp = ::snow::api::Promise_obj::__new( Dynamic(new _Function_1_1(val)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,resolve,return )


Promise_obj::Promise_obj()
{
}

void Promise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_MEMBER_NAME(reject_reactions,"reject_reactions");
	HX_MARK_MEMBER_NAME(fulfill_reactions,"fulfill_reactions");
	HX_MARK_MEMBER_NAME(settle_reactions,"settle_reactions");
	HX_MARK_MEMBER_NAME(was_caught,"was_caught");
	HX_MARK_END_CLASS();
}

void Promise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(result,"result");
	HX_VISIT_MEMBER_NAME(reject_reactions,"reject_reactions");
	HX_VISIT_MEMBER_NAME(fulfill_reactions,"fulfill_reactions");
	HX_VISIT_MEMBER_NAME(settle_reactions,"settle_reactions");
	HX_VISIT_MEMBER_NAME(was_caught,"was_caught");
}

Dynamic Promise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return result; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"onreject") ) { return onreject_dyn(); }
		if (HX_FIELD_EQ(inName,"onsettle") ) { return onsettle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onfulfill") ) { return onfulfill_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"was_caught") ) { return was_caught; }
		if (HX_FIELD_EQ(inName,"add_settle") ) { return add_settle_dyn(); }
		if (HX_FIELD_EQ(inName,"add_reject") ) { return add_reject_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"add_fulfill") ) { return add_fulfill_dyn(); }
		if (HX_FIELD_EQ(inName,"onexception") ) { return onexception_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"state_string") ) { return state_string_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reject_reactions") ) { return reject_reactions; }
		if (HX_FIELD_EQ(inName,"settle_reactions") ) { return settle_reactions; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fulfill_reactions") ) { return fulfill_reactions; }
		if (HX_FIELD_EQ(inName,"new_linked_reject") ) { return new_linked_reject_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"new_linked_promise") ) { return new_linked_promise_dyn(); }
		if (HX_FIELD_EQ(inName,"new_linked_resolve") ) { return new_linked_resolve_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"new_linked_reject_empty") ) { return new_linked_reject_empty_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"new_linked_resolve_empty") ) { return new_linked_resolve_empty_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Promise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = all_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"race") ) { outValue = race_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reject") ) { outValue = reject_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true;  }
	}
	return false;
}

Dynamic Promise_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"was_caught") ) { was_caught=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reject_reactions") ) { reject_reactions=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"settle_reactions") ) { settle_reactions=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fulfill_reactions") ) { fulfill_reactions=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Promise_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"));
	outFields->push(HX_HCSTRING("reject_reactions","\x8a","\xa6","\x76","\xb0"));
	outFields->push(HX_HCSTRING("fulfill_reactions","\xab","\x55","\x22","\x9b"));
	outFields->push(HX_HCSTRING("settle_reactions","\xb6","\xfd","\x65","\xeb"));
	outFields->push(HX_HCSTRING("was_caught","\x12","\x4f","\x0e","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Promise_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Promise_obj,result),HX_HCSTRING("result","\xdd","\x68","\x84","\x08")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,reject_reactions),HX_HCSTRING("reject_reactions","\x8a","\xa6","\x76","\xb0")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,fulfill_reactions),HX_HCSTRING("fulfill_reactions","\xab","\x55","\x22","\x9b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,settle_reactions),HX_HCSTRING("settle_reactions","\xb6","\xfd","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(Promise_obj,was_caught),HX_HCSTRING("was_caught","\x12","\x4f","\x0e","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("reject_reactions","\x8a","\xa6","\x76","\xb0"),
	HX_HCSTRING("fulfill_reactions","\xab","\x55","\x22","\x9b"),
	HX_HCSTRING("settle_reactions","\xb6","\xfd","\x65","\xeb"),
	HX_HCSTRING("was_caught","\x12","\x4f","\x0e","\x2d"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("add_settle","\x29","\x4f","\x38","\x78"),
	HX_HCSTRING("new_linked_promise","\x34","\xef","\x80","\xc1"),
	HX_HCSTRING("new_linked_resolve","\x85","\x34","\xf7","\x30"),
	HX_HCSTRING("new_linked_reject","\xe6","\x25","\x68","\x7f"),
	HX_HCSTRING("new_linked_resolve_empty","\x13","\x68","\xbe","\x26"),
	HX_HCSTRING("new_linked_reject_empty","\x34","\x18","\x9c","\x5f"),
	HX_HCSTRING("add_fulfill","\xe2","\xd1","\xb3","\x5d"),
	HX_HCSTRING("add_reject","\xfd","\x66","\x35","\x0b"),
	HX_HCSTRING("onfulfill","\x01","\x8e","\xaa","\xd6"),
	HX_HCSTRING("onreject","\xbe","\xd3","\x9d","\xad"),
	HX_HCSTRING("onsettle","\xea","\xbb","\xa0","\x1a"),
	HX_HCSTRING("onexception","\x50","\x13","\x0a","\xca"),
	HX_HCSTRING("state_string","\x7f","\x18","\xf0","\x6f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("all","\x21","\xf9","\x49","\x00"),
	HX_HCSTRING("race","\x11","\x44","\xa4","\x4b"),
	HX_HCSTRING("reject","\x5f","\x51","\x85","\x02"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null()) };

void Promise_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.Promise","\x3c","\xeb","\xf2","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promise_obj::__GetStatic;
	__mClass->mSetStaticField = &Promise_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_obj >;
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

} // end namespace snow
} // end namespace api
