#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_LineGeometry
#include <phoenix/geometry/LineGeometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Vertex
#include <phoenix/geometry/Vertex.h>
#endif
namespace phoenix{
namespace geometry{

Void LineGeometry_obj::__construct(Dynamic options)
{
HX_STACK_FRAME("phoenix.geometry.LineGeometry","new",0xef3cd875,"phoenix.geometry.LineGeometry.new","phoenix/geometry/LineGeometry.hx",19,0x0bd610bb)
HX_STACK_THIS(this)
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(21)
	Dynamic tmp = options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	super::__construct(tmp);
	HX_STACK_LINE(24)
	this->set_primitive_type((int)1);
	HX_STACK_LINE(27)
	bool tmp1 = (options == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	if ((tmp1)){
		HX_STACK_LINE(27)
		return null();
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		bool tmp2 = (options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		if ((tmp2)){
			HX_STACK_LINE(30)
			::phoenix::Color tmp3 = ::phoenix::Color_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			options->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = tmp3;
		}
		HX_STACK_LINE(30)
		options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
	}
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		bool tmp2 = (options->__Field(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		if ((tmp2)){
			HX_STACK_LINE(31)
			options->__FieldRef(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6")) = options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
		}
		HX_STACK_LINE(31)
		options->__Field(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"), hx::paccDynamic );
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		bool tmp2 = (options->__Field(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		if ((tmp2)){
			HX_STACK_LINE(32)
			options->__FieldRef(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6")) = options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );
		}
		HX_STACK_LINE(32)
		options->__Field(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"), hx::paccDynamic );
	}
	HX_STACK_LINE(34)
	::phoenix::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		bool tmp3 = (options->__Field(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		if ((tmp3)){
			HX_STACK_LINE(34)
			::phoenix::Vector tmp4 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			options->__FieldRef(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00")) = tmp4;
		}
		HX_STACK_LINE(34)
		tmp2 = options->__Field(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(34)
	this->set_p0(tmp2);
	HX_STACK_LINE(35)
	::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		bool tmp4 = (options->__Field(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		if ((tmp4)){
			HX_STACK_LINE(35)
			::phoenix::Vector tmp5 = ::phoenix::Vector_obj::__new((int)64,(int)64,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			options->__FieldRef(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")) = tmp5;
		}
		HX_STACK_LINE(35)
		tmp3 = options->__Field(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"), hx::paccDynamic );
	}
	HX_STACK_LINE(35)
	this->set_p1(tmp3);
	HX_STACK_LINE(37)
	::phoenix::Vector tmp4 = this->p0;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	::phoenix::Color tmp5 = options->__Field(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	::phoenix::geometry::Vertex tmp6 = ::phoenix::geometry::Vertex_obj::__new(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	::phoenix::geometry::Vertex vert0 = tmp6;		HX_STACK_VAR(vert0,"vert0");
	HX_STACK_LINE(38)
	::phoenix::Vector tmp7 = this->p1;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(38)
	::phoenix::Color tmp8 = options->__Field(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(38)
	::phoenix::geometry::Vertex tmp9 = ::phoenix::geometry::Vertex_obj::__new(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(38)
	::phoenix::geometry::Vertex vert1 = tmp9;		HX_STACK_VAR(vert1,"vert1");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::phoenix::geometry::TextureCoord tmp10 = vert0->uv->uv0;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		::phoenix::geometry::TextureCoord _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(40)
		_this->u = (int)0;
		HX_STACK_LINE(40)
		_this->v = (int)0;
		HX_STACK_LINE(40)
		_this;
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::phoenix::geometry::TextureCoord tmp10 = vert1->uv->uv0;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		::phoenix::geometry::TextureCoord _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		_this->u = (int)1;
		HX_STACK_LINE(41)
		_this->v = (int)0;
		HX_STACK_LINE(41)
		_this;
	}
	HX_STACK_LINE(43)
	::phoenix::geometry::Vertex tmp10 = vert0;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(43)
	this->add(tmp10);
	HX_STACK_LINE(44)
	::phoenix::geometry::Vertex tmp11 = vert1;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	this->add(tmp11);
}
;
	return null();
}

//LineGeometry_obj::~LineGeometry_obj() { }

Dynamic LineGeometry_obj::__CreateEmpty() { return  new LineGeometry_obj; }
hx::ObjectPtr< LineGeometry_obj > LineGeometry_obj::__new(Dynamic options)
{  hx::ObjectPtr< LineGeometry_obj > _result_ = new LineGeometry_obj();
	_result_->__construct(options);
	return _result_;}

Dynamic LineGeometry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineGeometry_obj > _result_ = new LineGeometry_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::phoenix::Vector LineGeometry_obj::set_p0( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_p0",0x4fc5c088,"phoenix.geometry.LineGeometry.set_p0","phoenix/geometry/LineGeometry.hx",50,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(52)
	this->p0 = _p;
	HX_STACK_LINE(54)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	if ((tmp1)){
		HX_STACK_LINE(54)
		::phoenix::Vector tmp2 = this->p0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		return tmp2;
	}
	HX_STACK_LINE(56)
	::phoenix::Vector tmp2 = this->p0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	::phoenix::geometry::Vertex tmp3 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	tmp3->pos = tmp2;
	HX_STACK_LINE(58)
	::phoenix::Vector tmp4 = this->p0 = _p;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_p0,return )

::phoenix::Vector LineGeometry_obj::set_p1( ::phoenix::Vector _p){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_p1",0x4fc5c089,"phoenix.geometry.LineGeometry.set_p1","phoenix/geometry/LineGeometry.hx",62,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_p,"_p")
	HX_STACK_LINE(64)
	this->p1 = _p;
	HX_STACK_LINE(66)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	if ((tmp1)){
		HX_STACK_LINE(66)
		::phoenix::Vector tmp2 = this->p1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		return tmp2;
	}
	HX_STACK_LINE(68)
	::phoenix::Vector tmp2 = this->p1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	::phoenix::geometry::Vertex tmp3 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	tmp3->pos = tmp2;
	HX_STACK_LINE(70)
	::phoenix::Vector tmp4 = this->p1 = _p;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_p1,return )

::phoenix::Color LineGeometry_obj::set_color0( ::phoenix::Color _c){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_color0",0xaf772835,"phoenix.geometry.LineGeometry.set_color0","phoenix/geometry/LineGeometry.hx",74,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(76)
	this->color0 = _c;
	HX_STACK_LINE(78)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	if ((tmp1)){
		HX_STACK_LINE(78)
		::phoenix::Color tmp2 = this->color0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		return tmp2;
	}
	HX_STACK_LINE(80)
	::phoenix::Color tmp2 = this->color0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	::phoenix::geometry::Vertex tmp3 = this->vertices->__get((int)0).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	tmp3->color = tmp2;
	HX_STACK_LINE(82)
	::phoenix::Color tmp4 = this->color0;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_color0,return )

::phoenix::Color LineGeometry_obj::set_color1( ::phoenix::Color _c){
	HX_STACK_FRAME("phoenix.geometry.LineGeometry","set_color1",0xaf772836,"phoenix.geometry.LineGeometry.set_color1","phoenix/geometry/LineGeometry.hx",86,0x0bd610bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_c,"_c")
	HX_STACK_LINE(88)
	this->color1 = _c;
	HX_STACK_LINE(90)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	if ((tmp1)){
		HX_STACK_LINE(90)
		::phoenix::Color tmp2 = this->color1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		return tmp2;
	}
	HX_STACK_LINE(92)
	::phoenix::Color tmp2 = this->color1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	::phoenix::geometry::Vertex tmp3 = this->vertices->__get((int)1).StaticCast< ::phoenix::geometry::Vertex >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	tmp3->color = tmp2;
	HX_STACK_LINE(94)
	::phoenix::Color tmp4 = this->color1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(LineGeometry_obj,set_color1,return )


LineGeometry_obj::LineGeometry_obj()
{
}

void LineGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineGeometry);
	HX_MARK_MEMBER_NAME(p0,"p0");
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_MEMBER_NAME(color0,"color0");
	HX_MARK_MEMBER_NAME(color1,"color1");
	::phoenix::geometry::Geometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LineGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p0,"p0");
	HX_VISIT_MEMBER_NAME(p1,"p1");
	HX_VISIT_MEMBER_NAME(color0,"color0");
	HX_VISIT_MEMBER_NAME(color1,"color1");
	::phoenix::geometry::Geometry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LineGeometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p0") ) { return p0; }
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"color0") ) { return color0; }
		if (HX_FIELD_EQ(inName,"color1") ) { return color1; }
		if (HX_FIELD_EQ(inName,"set_p0") ) { return set_p0_dyn(); }
		if (HX_FIELD_EQ(inName,"set_p1") ) { return set_p1_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_color0") ) { return set_color0_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color1") ) { return set_color1_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineGeometry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p0") ) { if (inCallProp == hx::paccAlways) return set_p0(inValue);p0=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p1") ) { if (inCallProp == hx::paccAlways) return set_p1(inValue);p1=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"color0") ) { if (inCallProp == hx::paccAlways) return set_color0(inValue);color0=inValue.Cast< ::phoenix::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color1") ) { if (inCallProp == hx::paccAlways) return set_color1(inValue);color1=inValue.Cast< ::phoenix::Color >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LineGeometry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LineGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(LineGeometry_obj,p0),HX_HCSTRING("p0","\xc0","\x61","\x00","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(LineGeometry_obj,p1),HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(LineGeometry_obj,color0),HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(LineGeometry_obj,color1),HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("p0","\xc0","\x61","\x00","\x00"),
	HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"),
	HX_HCSTRING("color0","\x6d","\xc5","\x86","\xc6"),
	HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6"),
	HX_HCSTRING("set_p0","\x7d","\x4d","\x78","\x6f"),
	HX_HCSTRING("set_p1","\x7e","\x4d","\x78","\x6f"),
	HX_HCSTRING("set_color0","\xaa","\xd3","\x8b","\xba"),
	HX_HCSTRING("set_color1","\xab","\xd3","\x8b","\xba"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineGeometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineGeometry_obj::__mClass,"__mClass");
};

#endif

hx::Class LineGeometry_obj::__mClass;

void LineGeometry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.LineGeometry","\x03","\x7a","\x88","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LineGeometry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LineGeometry_obj >;
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
} // end namespace geometry
