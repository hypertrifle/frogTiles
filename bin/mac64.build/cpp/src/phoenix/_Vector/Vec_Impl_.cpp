#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix__Vector_Vec_Impl_
#include <phoenix/_Vector/Vec_Impl_.h>
#endif
namespace phoenix{
namespace _Vector{

Void Vec_Impl__obj::__construct()
{
	return null();
}

//Vec_Impl__obj::~Vec_Impl__obj() { }

Dynamic Vec_Impl__obj::__CreateEmpty() { return  new Vec_Impl__obj; }
hx::ObjectPtr< Vec_Impl__obj > Vec_Impl__obj::__new()
{  hx::ObjectPtr< Vec_Impl__obj > _result_ = new Vec_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Vec_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec_Impl__obj > _result_ = new Vec_Impl__obj();
	_result_->__construct();
	return _result_;}

::phoenix::Vector Vec_Impl__obj::_new( Dynamic _x,Dynamic _y,Dynamic _z,Dynamic _w){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_new",0x7addb3a6,"phoenix._Vector.Vec_Impl_._new","phoenix/Vector.hx",812,0x5d0bf7fb)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_LINE(812)
	::phoenix::Vector tmp = ::phoenix::Vector_obj::__new(_x,_y,_z,_w);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(812)
	::phoenix::Vector tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(812)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vec_Impl__obj,_new,return )

::phoenix::Vector Vec_Impl__obj::_multiply( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_multiply",0x4f47611e,"phoenix._Vector.Vec_Impl_._multiply","phoenix/Vector.hx",815,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(816)
	Float tmp = (lhs->x * rhs->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(816)
	Float tmp1 = (lhs->y * rhs->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(816)
	Float tmp2 = (lhs->z * rhs->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(816)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(816)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_multiply,return )

::phoenix::Vector Vec_Impl__obj::_multiply_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_multiply_scalar",0xb35d176d,"phoenix._Vector.Vec_Impl_._multiply_scalar","phoenix/Vector.hx",818,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(819)
	::phoenix::Vector tmp = lhs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(819)
	Float tmp1 = rhs;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(819)
	::phoenix::Vector tmp2 = ::phoenix::Vector_obj::Multiply(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(819)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_multiply_scalar,return )

::phoenix::Vector Vec_Impl__obj::_multiply_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_multiply_scalar_int",0x5efd23dd,"phoenix._Vector.Vec_Impl_._multiply_scalar_int","phoenix/Vector.hx",821,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(822)
	::phoenix::Vector tmp = lhs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(822)
	int tmp1 = rhs;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(822)
	::phoenix::Vector tmp2 = ::phoenix::Vector_obj::Multiply(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(822)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_multiply_scalar_int,return )

::phoenix::Vector Vec_Impl__obj::_divide( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_divide",0xf9dd1bf3,"phoenix._Vector.Vec_Impl_._divide","phoenix/Vector.hx",825,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(826)
	Float tmp = (Float(lhs->x) / Float(rhs->x));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(826)
	Float tmp1 = (Float(lhs->y) / Float(rhs->y));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(826)
	Float tmp2 = (Float(lhs->z) / Float(rhs->z));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(826)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(826)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_divide,return )

::phoenix::Vector Vec_Impl__obj::_divide_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_divide_scalar",0xf34b9138,"phoenix._Vector.Vec_Impl_._divide_scalar","phoenix/Vector.hx",828,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(829)
	Float tmp = (Float(lhs->x) / Float(rhs));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(829)
	Float tmp1 = (Float(lhs->y) / Float(rhs));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(829)
	Float tmp2 = (Float(lhs->z) / Float(rhs));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(829)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(829)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_divide_scalar,return )

::phoenix::Vector Vec_Impl__obj::_divide_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_divide_scalar_int",0x8c73df28,"phoenix._Vector.Vec_Impl_._divide_scalar_int","phoenix/Vector.hx",831,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(832)
	Float tmp = (Float(lhs->x) / Float(rhs));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(832)
	Float tmp1 = (Float(lhs->y) / Float(rhs));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(832)
	Float tmp2 = (Float(lhs->z) / Float(rhs));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(832)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(832)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_divide_scalar_int,return )

::phoenix::Vector Vec_Impl__obj::_add( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_add",0x7ad3d567,"phoenix._Vector.Vec_Impl_._add","phoenix/Vector.hx",835,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(836)
	Float tmp = (lhs->x + rhs->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(836)
	Float tmp1 = (lhs->y + rhs->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(836)
	Float tmp2 = (lhs->z + rhs->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(836)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(836)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_add,return )

::phoenix::Vector Vec_Impl__obj::_add_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_add_scalar",0x7c69ae44,"phoenix._Vector.Vec_Impl_._add_scalar","phoenix/Vector.hx",838,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(839)
	Float tmp = (lhs->x + rhs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(839)
	Float tmp1 = (lhs->y + rhs);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(839)
	Float tmp2 = (lhs->z + rhs);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(839)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(839)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_add_scalar,return )

::phoenix::Vector Vec_Impl__obj::_add_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_add_scalar_int",0x84337234,"phoenix._Vector.Vec_Impl_._add_scalar_int","phoenix/Vector.hx",841,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(842)
	Float tmp = (lhs->x + rhs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(842)
	Float tmp1 = (lhs->y + rhs);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(842)
	Float tmp2 = (lhs->z + rhs);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(842)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(842)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_add_scalar_int,return )

::phoenix::Vector Vec_Impl__obj::_subtract( ::phoenix::Vector lhs,::phoenix::Vector rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_subtract",0xaccbf40e,"phoenix._Vector.Vec_Impl_._subtract","phoenix/Vector.hx",845,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(846)
	Float tmp = (lhs->x - rhs->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(846)
	Float tmp1 = (lhs->y - rhs->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(846)
	Float tmp2 = (lhs->z - rhs->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(846)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(846)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_subtract,return )

::phoenix::Vector Vec_Impl__obj::_subtract_scalar( ::phoenix::Vector lhs,Float rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_subtract_scalar",0x32b9c27d,"phoenix._Vector.Vec_Impl_._subtract_scalar","phoenix/Vector.hx",848,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(849)
	Float tmp = (lhs->x - rhs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(849)
	Float tmp1 = (lhs->y - rhs);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(849)
	Float tmp2 = (lhs->z - rhs);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(849)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(849)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_subtract_scalar,return )

::phoenix::Vector Vec_Impl__obj::_subtract_scalar_int( ::phoenix::Vector lhs,int rhs){
	HX_STACK_FRAME("phoenix._Vector.Vec_Impl_","_subtract_scalar_int",0x77f496ed,"phoenix._Vector.Vec_Impl_._subtract_scalar_int","phoenix/Vector.hx",851,0x5d0bf7fb)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(852)
	Float tmp = (lhs->x - rhs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(852)
	Float tmp1 = (lhs->y - rhs);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(852)
	Float tmp2 = (lhs->z - rhs);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(852)
	::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(852)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec_Impl__obj,_subtract_scalar_int,return )


Vec_Impl__obj::Vec_Impl__obj()
{
}

bool Vec_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_add") ) { outValue = _add_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_divide") ) { outValue = _divide_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_multiply") ) { outValue = _multiply_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_subtract") ) { outValue = _subtract_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_add_scalar") ) { outValue = _add_scalar_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_divide_scalar") ) { outValue = _divide_scalar_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_add_scalar_int") ) { outValue = _add_scalar_int_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_multiply_scalar") ) { outValue = _multiply_scalar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_subtract_scalar") ) { outValue = _subtract_scalar_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_divide_scalar_int") ) { outValue = _divide_scalar_int_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_multiply_scalar_int") ) { outValue = _multiply_scalar_int_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_subtract_scalar_int") ) { outValue = _subtract_scalar_int_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Vec_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("_multiply","\x83","\xd9","\x22","\xe2"),
	HX_HCSTRING("_multiply_scalar","\xa8","\xa5","\x47","\x38"),
	HX_HCSTRING("_multiply_scalar_int","\x98","\xeb","\xea","\x7f"),
	HX_HCSTRING("_divide","\x18","\x41","\x89","\x2d"),
	HX_HCSTRING("_divide_scalar","\xb3","\x8a","\xe8","\x5b"),
	HX_HCSTRING("_divide_scalar_int","\x23","\xb2","\xca","\x0b"),
	HX_HCSTRING("_add","\x22","\x37","\x15","\x3f"),
	HX_HCSTRING("_add_scalar","\xe9","\xc9","\x5f","\x17"),
	HX_HCSTRING("_add_scalar_int","\x59","\xc4","\xf0","\xa4"),
	HX_HCSTRING("_subtract","\x73","\x6c","\xa7","\x3f"),
	HX_HCSTRING("_subtract_scalar","\xb8","\x50","\xa4","\xb7"),
	HX_HCSTRING("_subtract_scalar_int","\xa8","\x5e","\xe2","\x98"),
	::String(null()) };

void Vec_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix._Vector.Vec_Impl_","\x49","\x68","\xc4","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vec_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Vec_Impl__obj >;
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

} // end namespace phoenix
} // end namespace _Vector
