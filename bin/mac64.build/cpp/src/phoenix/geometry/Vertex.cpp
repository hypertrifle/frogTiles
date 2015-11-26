#include <hxcpp.h>

#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
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

Void Vertex_obj::__construct(::phoenix::Vector _pos,::phoenix::Color _color,::phoenix::Vector _normal)
{
HX_STACK_FRAME("phoenix.geometry.Vertex","new",0xe0535453,"phoenix.geometry.Vertex.new","phoenix/geometry/Vertex.hx",18,0xf444629d)
HX_STACK_THIS(this)
HX_STACK_ARG(_pos,"_pos")
HX_STACK_ARG(_color,"_color")
HX_STACK_ARG(_normal,"_normal")
{
	HX_STACK_LINE(20)
	::phoenix::geometry::TextureCoordSet tmp = ::phoenix::geometry::TextureCoordSet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	this->uv = tmp;
	HX_STACK_LINE(22)
	this->pos = _pos;
	HX_STACK_LINE(23)
	bool tmp1 = (_color == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::phoenix::Color tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	if ((tmp1)){
		HX_STACK_LINE(23)
		tmp2 = ::phoenix::Color_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(23)
		tmp2 = _color;
	}
	HX_STACK_LINE(23)
	this->color = tmp2;
	HX_STACK_LINE(24)
	bool tmp3 = (_normal == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::phoenix::Vector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	if ((tmp3)){
		HX_STACK_LINE(24)
		tmp4 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(24)
		tmp4 = _normal;
	}
	HX_STACK_LINE(24)
	this->normal = tmp4;
}
;
	return null();
}

//Vertex_obj::~Vertex_obj() { }

Dynamic Vertex_obj::__CreateEmpty() { return  new Vertex_obj; }
hx::ObjectPtr< Vertex_obj > Vertex_obj::__new(::phoenix::Vector _pos,::phoenix::Color _color,::phoenix::Vector _normal)
{  hx::ObjectPtr< Vertex_obj > _result_ = new Vertex_obj();
	_result_->__construct(_pos,_color,_normal);
	return _result_;}

Dynamic Vertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vertex_obj > _result_ = new Vertex_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::phoenix::geometry::Vertex Vertex_obj::clone( ){
	HX_STACK_FRAME("phoenix.geometry.Vertex","clone",0xca41ba10,"phoenix.geometry.Vertex.clone","phoenix/geometry/Vertex.hx",28,0xf444629d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::phoenix::Vector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::phoenix::Vector tmp1 = this->pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		::phoenix::Vector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(30)
		tmp = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
	}
	HX_STACK_LINE(30)
	::phoenix::Color tmp1 = this->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::phoenix::Color tmp2 = tmp1->clone();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::phoenix::Vector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::phoenix::Vector tmp4 = this->normal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		::phoenix::Vector _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(30)
		tmp3 = ::phoenix::Vector_obj::__new(_this->x,_this->y,_this->z,_this->w);
	}
	HX_STACK_LINE(30)
	::phoenix::geometry::Vertex tmp4 = ::phoenix::geometry::Vertex_obj::__new(tmp,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	::phoenix::geometry::Vertex _new = tmp4;		HX_STACK_VAR(_new,"_new");
	HX_STACK_LINE(31)
	::phoenix::geometry::TextureCoordSet tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::phoenix::geometry::TextureCoordSet tmp6 = this->uv;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		::phoenix::geometry::TextureCoordSet _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(31)
		::phoenix::geometry::TextureCoordSet tmp7 = ::phoenix::geometry::TextureCoordSet_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		::phoenix::geometry::TextureCoordSet _set = tmp7;		HX_STACK_VAR(_set,"_set");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv0;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			Float tmp8 = _this->uv0->u;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			_this1->u = tmp8;
			HX_STACK_LINE(31)
			Float tmp9 = _this->uv0->v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			_this1->v = tmp9;
			HX_STACK_LINE(31)
			Float tmp10 = _this->uv0->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(31)
			_this1->w = tmp10;
			HX_STACK_LINE(31)
			Float tmp11 = _this->uv0->t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			_this1->t = tmp11;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv1;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			Float tmp8 = _this->uv1->u;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			_this1->u = tmp8;
			HX_STACK_LINE(31)
			Float tmp9 = _this->uv1->v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			_this1->v = tmp9;
			HX_STACK_LINE(31)
			Float tmp10 = _this->uv1->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(31)
			_this1->w = tmp10;
			HX_STACK_LINE(31)
			Float tmp11 = _this->uv1->t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			_this1->t = tmp11;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv2;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			Float tmp8 = _this->uv2->u;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			_this1->u = tmp8;
			HX_STACK_LINE(31)
			Float tmp9 = _this->uv2->v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			_this1->v = tmp9;
			HX_STACK_LINE(31)
			Float tmp10 = _this->uv2->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(31)
			_this1->w = tmp10;
			HX_STACK_LINE(31)
			Float tmp11 = _this->uv2->t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			_this1->t = tmp11;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv3;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			Float tmp8 = _this->uv3->u;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			_this1->u = tmp8;
			HX_STACK_LINE(31)
			Float tmp9 = _this->uv3->v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			_this1->v = tmp9;
			HX_STACK_LINE(31)
			Float tmp10 = _this->uv3->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(31)
			_this1->w = tmp10;
			HX_STACK_LINE(31)
			Float tmp11 = _this->uv3->t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			_this1->t = tmp11;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv4;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			Float tmp8 = _this->uv4->u;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			_this1->u = tmp8;
			HX_STACK_LINE(31)
			Float tmp9 = _this->uv4->v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			_this1->v = tmp9;
			HX_STACK_LINE(31)
			Float tmp10 = _this->uv4->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(31)
			_this1->w = tmp10;
			HX_STACK_LINE(31)
			Float tmp11 = _this->uv4->t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			_this1->t = tmp11;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv5;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			Float tmp8 = _this->uv5->u;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			_this1->u = tmp8;
			HX_STACK_LINE(31)
			Float tmp9 = _this->uv5->v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			_this1->v = tmp9;
			HX_STACK_LINE(31)
			Float tmp10 = _this->uv5->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(31)
			_this1->w = tmp10;
			HX_STACK_LINE(31)
			Float tmp11 = _this->uv5->t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			_this1->t = tmp11;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv6;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			Float tmp8 = _this->uv6->u;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			_this1->u = tmp8;
			HX_STACK_LINE(31)
			Float tmp9 = _this->uv6->v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			_this1->v = tmp9;
			HX_STACK_LINE(31)
			Float tmp10 = _this->uv6->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(31)
			_this1->w = tmp10;
			HX_STACK_LINE(31)
			Float tmp11 = _this->uv6->t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			_this1->t = tmp11;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::phoenix::geometry::TextureCoord _this1 = _set->uv7;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(31)
			Float tmp8 = _this->uv7->u;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			_this1->u = tmp8;
			HX_STACK_LINE(31)
			Float tmp9 = _this->uv7->v;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			_this1->v = tmp9;
			HX_STACK_LINE(31)
			Float tmp10 = _this->uv7->w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(31)
			_this1->w = tmp10;
			HX_STACK_LINE(31)
			Float tmp11 = _this->uv7->t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			_this1->t = tmp11;
			HX_STACK_LINE(31)
			_this1;
		}
		HX_STACK_LINE(31)
		tmp5 = _set;
	}
	HX_STACK_LINE(31)
	_new->uv = tmp5;
	HX_STACK_LINE(33)
	::phoenix::geometry::Vertex tmp6 = _new;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Vertex_obj,clone,return )


Vertex_obj::Vertex_obj()
{
}

void Vertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vertex);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_END_CLASS();
}

void Vertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(normal,"normal");
}

Dynamic Vertex_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return normal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast< ::phoenix::geometry::TextureCoordSet >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::phoenix::Color >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vertex_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Vertex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vertex_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::phoenix::Color*/ ,(int)offsetof(Vertex_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::geometry::TextureCoordSet*/ ,(int)offsetof(Vertex_obj,uv),HX_HCSTRING("uv","\x61","\x66","\x00","\x00")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Vertex_obj,normal),HX_HCSTRING("normal","\x27","\x72","\x69","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("uv","\x61","\x66","\x00","\x00"),
	HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vertex_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vertex_obj::__mClass,"__mClass");
};

#endif

hx::Class Vertex_obj::__mClass;

void Vertex_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.Vertex","\xe1","\x2e","\xc0","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Vertex_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vertex_obj >;
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
