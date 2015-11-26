#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_luxe_DebugError
#include <luxe/DebugError.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
namespace luxe{
namespace resource{

Void Resource_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("luxe.resource.Resource","new",0x99ea21c8,"luxe.resource.Resource.new","luxe/resource/Resource.hx",10,0x204e02c8)
HX_STACK_THIS(this)
HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(29)
	this->ref = (int)0;
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		bool tmp = (_options == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(33)
			::String tmp1 = HX_HCSTRING("_options was null","\x3f","\x38","\x24","\xa1");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		bool tmp = (_options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		if ((tmp)){
			HX_STACK_LINE(34)
			::String tmp1 = HX_HCSTRING("_options.id was null","\xb4","\x3b","\xea","\x09");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		bool tmp = (_options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		if ((tmp)){
			HX_STACK_LINE(36)
			::luxe::Resources tmp1 = ::Luxe_obj::resources;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			_options->__FieldRef(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")) = tmp1;
		}
		HX_STACK_LINE(36)
		_options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic );
	}
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		bool tmp = (_options->__Field(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		if ((tmp)){
			HX_STACK_LINE(37)
			_options->__FieldRef(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")) = (int)0;
		}
		HX_STACK_LINE(37)
		_options->__Field(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"), hx::paccDynamic );
	}
	HX_STACK_LINE(39)
	this->id = _options->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(40)
	this->_system = _options->__Field(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"), hx::paccDynamic );
	HX_STACK_LINE(41)
	this->resource_type = _options->__Field(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"), hx::paccDynamic );
	HX_STACK_LINE(42)
	this->set_state((int)0);
	HX_STACK_LINE(43)
	this->set_ref((int)1);
}
;
	return null();
}

//Resource_obj::~Resource_obj() { }

Dynamic Resource_obj::__CreateEmpty() { return  new Resource_obj; }
hx::ObjectPtr< Resource_obj > Resource_obj::__new(Dynamic _options)
{  hx::ObjectPtr< Resource_obj > _result_ = new Resource_obj();
	_result_->__construct(_options);
	return _result_;}

Dynamic Resource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Resource_obj > _result_ = new Resource_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Resource_obj::destroy( Dynamic __o__force){
Dynamic _force = __o__force.Default(false);
	HX_STACK_FRAME("luxe.resource.Resource","destroy",0x97c55262,"luxe.resource.Resource.destroy","luxe/resource/Resource.hx",51,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_force,"_force")
{
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(53)
			bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			if ((tmp2)){
				HX_STACK_LINE(53)
				::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(55)
		Dynamic tmp = _force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				int tmp2 = this->ref;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(56)
				bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(56)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(56)
				if ((tmp4)){
					HX_STACK_LINE(56)
					::String tmp5 = HX_HCSTRING("ref > 0","\x81","\x7a","\xcf","\xb6");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(56)
					::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(56)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::luxe::resource::Resource _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(57)
				int _g1 = _g->ref;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(57)
				int tmp2 = (_g1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				_g->set_ref(tmp2);
				HX_STACK_LINE(57)
				_g1;
			}
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				int tmp2 = this->ref;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				if ((tmp4)){
					HX_STACK_LINE(58)
					::String tmp5 = HX_HCSTRING("ref >= 0","\xfc","\xa9","\xd1","\x3e");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(58)
					::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(58)
					HX_STACK_DO_THROW(tmp6);
				}
			}
		}
		HX_STACK_LINE(63)
		int tmp2 = this->ref;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		if ((tmp4)){
			HX_STACK_LINE(63)
			tmp5 = _force;
		}
		else{
			HX_STACK_LINE(63)
			tmp5 = true;
		}
		HX_STACK_LINE(63)
		if ((tmp5)){
			HX_STACK_LINE(65)
			this->clear();
			HX_STACK_LINE(66)
			this->set_state((int)6);
			HX_STACK_LINE(67)
			::luxe::Resources tmp6 = this->_system;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Resource.hx","\x90","\xf2","\x80","\x8d"),67,HX_HCSTRING("luxe.resource.Resource","\xd6","\xdd","\xbb","\xbb"),HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			tmp6->remove(hx::ObjectPtr<OBJ_>(this),tmp7);
			HX_STACK_LINE(68)
			::luxe::Resources tmp8 = this->_system;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			tmp8->emit((int)8,hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,destroy,(void))

Void Resource_obj::invalidate( ){
{
		HX_STACK_FRAME("luxe.resource.Resource","invalidate",0x1eee4513,"luxe.resource.Resource.invalidate","luxe/resource/Resource.hx",76,0x204e02c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			bool tmp1 = (tmp != (int)6);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			if ((tmp2)){
				HX_STACK_LINE(78)
				::String tmp3 = HX_HCSTRING("state != ResourceState.destroyed","\x79","\xbe","\xa0","\xbf");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				::luxe::DebugError tmp4 = ::luxe::DebugError_obj::assertion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(80)
		this->clear();
		HX_STACK_LINE(81)
		this->set_state((int)5);
		HX_STACK_LINE(82)
		::luxe::Resources tmp = this->_system;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		tmp->emit((int)6,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,invalidate,(void))

::snow::api::Promise Resource_obj::reload( ){
	HX_STACK_FRAME("luxe.resource.Resource","reload",0xdb0fd2f1,"luxe.resource.Resource.reload","luxe/resource/Resource.hx",89,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,reload,return )

Float Resource_obj::memory_use( ){
	HX_STACK_FRAME("luxe.resource.Resource","memory_use",0x92507c61,"luxe.resource.Resource.memory_use","luxe/resource/Resource.hx",96,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,memory_use,return )

int Resource_obj::set_ref( int _ref){
	HX_STACK_FRAME("luxe.resource.Resource","set_ref",0x8d0c585e,"luxe.resource.Resource.set_ref","luxe/resource/Resource.hx",101,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_ref,"_ref")
	HX_STACK_LINE(103)
	int tmp = this->ref;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	int pre = tmp;		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(104)
	this->ref = _ref;
	HX_STACK_LINE(106)
	int tmp1 = this->ref;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	int tmp2 = pre;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	if ((tmp3)){
		HX_STACK_LINE(107)
		::luxe::Resources tmp4 = this->_system;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		tmp4->emit((int)9,hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(108)
		int tmp4 = this->ref;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		int tmp5 = pre;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		if ((tmp6)){
			HX_STACK_LINE(109)
			::luxe::Resources tmp7 = this->_system;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(109)
			tmp7->emit((int)10,hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(112)
	int tmp4 = this->ref;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,set_ref,return )

int Resource_obj::set_state( int _state){
	HX_STACK_FRAME("luxe.resource.Resource","set_state",0xc8670ddc,"luxe.resource.Resource.set_state","luxe/resource/Resource.hx",116,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_state,"_state")
	HX_STACK_LINE(118)
	this->state = _state;
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		switch( (int)(tmp1)){
			case (int)2: {
				HX_STACK_LINE(122)
				::luxe::Resources tmp2 = this->_system;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(122)
				tmp2->emit((int)3,hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(124)
				::luxe::Resources tmp2 = this->_system;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				tmp2->emit((int)4,hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(126)
				::luxe::Resources tmp2 = this->_system;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(126)
				tmp2->emit((int)5,hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(130)
	int tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,set_state,return )

Void Resource_obj::clear( ){
{
		HX_STACK_FRAME("luxe.resource.Resource","clear",0x3136ecf5,"luxe.resource.Resource.clear","luxe/resource/Resource.hx",135,0x204e02c8)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,clear,(void))

::String Resource_obj::state_string( ){
	HX_STACK_FRAME("luxe.resource.Resource","state_string",0xa1c85a17,"luxe.resource.Resource.state_string","luxe/resource/Resource.hx",140,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int tmp1 = this->state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(142)
				tmp = HX_HCSTRING("listed","\x3d","\xc8","\xf9","\xef");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(143)
				tmp = HX_HCSTRING("loading","\x7c","\xce","\xf2","\x08");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(144)
				tmp = HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(145)
				tmp = HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(146)
				tmp = HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd");
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(147)
				tmp = HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4");
			}
			;break;
			default: {
				HX_STACK_LINE(148)
				tmp = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
			}
		}
	}
	HX_STACK_LINE(141)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,state_string,return )

::String Resource_obj::type_string( ){
	HX_STACK_FRAME("luxe.resource.Resource","type_string",0xd6096c5e,"luxe.resource.Resource.type_string","luxe/resource/Resource.hx",152,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		int tmp1 = this->resource_type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		switch( (int)(tmp2)){
			case (int)3: {
				HX_STACK_LINE(154)
				tmp = HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(155)
				tmp = HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(156)
				tmp = HX_HCSTRING("json","\x28","\x42","\x68","\x46");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(157)
				tmp = HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e");
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(158)
				tmp = HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d");
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(159)
				tmp = HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43");
			}
			;break;
			default: {
				HX_STACK_LINE(160)
				int tmp3 = this->resource_type;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(160)
				tmp = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);
			}
		}
	}
	HX_STACK_LINE(153)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,type_string,return )

::String Resource_obj::toString( ){
	HX_STACK_FRAME("luxe.resource.Resource","toString",0x9c706644,"luxe.resource.Resource.toString","luxe/resource/Resource.hx",164,0x204e02c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	::String tmp1 = (HX_HCSTRING("Resource(`","\xa6","\xd3","\xbc","\x37") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	::String tmp2 = (tmp1 + HX_HCSTRING("`, ","\xd4","\xfe","\x48","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	::String tmp3 = this->type_string();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(165)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(165)
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(165)
	::String tmp6 = this->state_string();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(165)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(165)
	::String tmp8 = (tmp7 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(165)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,toString,return )


Resource_obj::Resource_obj()
{
}

void Resource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Resource);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(_system,"system");
	HX_MARK_MEMBER_NAME(resource_type,"resource_type");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(ref,"ref");
	HX_MARK_END_CLASS();
}

void Resource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(_system,"system");
	HX_VISIT_MEMBER_NAME(resource_type,"resource_type");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(ref,"ref");
}

Dynamic Resource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { return ref; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return _system; }
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ref") ) { return set_ref_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"memory_use") ) { return memory_use_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"type_string") ) { return type_string_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"state_string") ) { return state_string_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resource_type") ) { return resource_type; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Resource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { if (inCallProp == hx::paccAlways) return set_ref(inValue);ref=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return set_state(inValue);state=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _system=inValue.Cast< ::luxe::Resources >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resource_type") ) { resource_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Resource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Resource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"));
	outFields->push(HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("ref","\x53","\xd9","\x56","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Resource_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::luxe::Resources*/ ,(int)offsetof(Resource_obj,_system),HX_HCSTRING("system","\xef","\x96","\xe2","\xf2")},
	{hx::fsInt,(int)offsetof(Resource_obj,resource_type),HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c")},
	{hx::fsInt,(int)offsetof(Resource_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(Resource_obj,ref),HX_HCSTRING("ref","\x53","\xd9","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("system","\xef","\x96","\xe2","\xf2"),
	HX_HCSTRING("resource_type","\x0b","\x87","\x30","\x9c"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("ref","\x53","\xd9","\x56","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("memory_use","\xc9","\x50","\x8c","\xfa"),
	HX_HCSTRING("set_ref","\xf6","\x32","\xcd","\x19"),
	HX_HCSTRING("set_state","\x74","\xbe","\x05","\xab"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("state_string","\x7f","\x18","\xf0","\x6f"),
	HX_HCSTRING("type_string","\xf6","\x72","\x27","\xa2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#endif

hx::Class Resource_obj::__mClass;

void Resource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.resource.Resource","\xd6","\xdd","\xbb","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Resource_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Resource_obj >;
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
} // end namespace resource
