#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_luxe_ResourceStats
#include <luxe/ResourceStats.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_resource_BytesResource
#include <luxe/resource/BytesResource.h>
#endif
#ifndef INCLUDED_luxe_resource_JSONResource
#include <luxe/resource/JSONResource.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_luxe_resource_TextResource
#include <luxe/resource/TextResource.h>
#endif
#ifndef INCLUDED_phoenix_BitmapFont
#include <phoenix/BitmapFont.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetBytes
#include <snow/system/assets/AssetBytes.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetJSON
#include <snow/system/assets/AssetJSON.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetText
#include <snow/system/assets/AssetText.h>
#endif
namespace luxe{

Void Resources_obj::__construct()
{
HX_STACK_FRAME("luxe.Resources","new",0xf66d287f,"luxe.Resources.new","luxe/Resources.hx",30,0x2b4e2952)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->parcels = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(32)
	::luxe::Emitter tmp = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	this->emitter = tmp;
	HX_STACK_LINE(33)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(33)
	this->cache = tmp1;
	HX_STACK_LINE(34)
	::luxe::ResourceStats tmp2 = ::luxe::ResourceStats_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	this->stats = tmp2;
}
;
	return null();
}

//Resources_obj::~Resources_obj() { }

Dynamic Resources_obj::__CreateEmpty() { return  new Resources_obj; }
hx::ObjectPtr< Resources_obj > Resources_obj::__new()
{  hx::ObjectPtr< Resources_obj > _result_ = new Resources_obj();
	_result_->__construct();
	return _result_;}

Dynamic Resources_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Resources_obj > _result_ = new Resources_obj();
	_result_->__construct();
	return _result_;}

Void Resources_obj::track( ::luxe::Parcel _cache){
{
		HX_STACK_FRAME("luxe.Resources","track",0xc7566c6a,"luxe.Resources.track","luxe/Resources.hx",39,0x2b4e2952)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_cache,"_cache")
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			bool tmp = (_cache == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(41)
			if ((tmp)){
				HX_STACK_LINE(41)
				::String tmp1 = HX_HCSTRING("_cache was null","\x1b","\x2f","\x49","\x0c");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(41)
				::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(41)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::luxe::Parcel tmp = _cache;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			int tmp1 = this->parcels->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			if ((tmp3)){
				HX_STACK_LINE(42)
				::String tmp4 = HX_HCSTRING("parcels.indexOf(_cache) == -1","\x47","\xd5","\x0c","\x9e");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(44)
		::luxe::Parcel tmp = _cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		this->parcels->push(tmp);
		HX_STACK_LINE(45)
		::luxe::Parcel tmp1 = _cache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		this->emit((int)11,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,track,(void))

Void Resources_obj::untrack( ::luxe::Parcel _cache){
{
		HX_STACK_FRAME("luxe.Resources","untrack",0xa5c1d931,"luxe.Resources.untrack","luxe/Resources.hx",49,0x2b4e2952)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_cache,"_cache")
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			bool tmp = (_cache == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			if ((tmp)){
				HX_STACK_LINE(51)
				::String tmp1 = HX_HCSTRING("_cache was null","\x1b","\x2f","\x49","\x0c");		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(51)
				::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(51)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(53)
		::luxe::Parcel tmp = _cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		bool tmp1 = this->parcels->remove(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		bool removed = tmp1;		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(55)
		bool tmp2 = removed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		if ((tmp2)){
			HX_STACK_LINE(56)
			::luxe::Parcel tmp3 = _cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			this->emit((int)12,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,untrack,(void))

Void Resources_obj::add( ::luxe::resource::Resource resource){
{
		HX_STACK_FRAME("luxe.Resources","add",0xf6634a40,"luxe.Resources.add","luxe/Resources.hx",64,0x2b4e2952)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resource,"resource")
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			::String tmp1 = resource->id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			if ((tmp4)){
				HX_STACK_LINE(66)
				::String tmp5 = HX_HCSTRING("!cache.exists(resource.id)","\xad","\x72","\xb7","\xbe");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(66)
				::luxe::DebugError tmp6 = ::luxe::DebugError_obj::assertion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(68)
		::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		::String tmp1 = resource->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		::luxe::resource::Resource tmp2 = resource;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		tmp->set(tmp1,tmp2);
		HX_STACK_LINE(70)
		::luxe::resource::Resource tmp3 = resource;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		this->emit((int)2,tmp3);
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				int _g = resource->resource_type;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(72)
				int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				switch( (int)(tmp4)){
					case (int)0: {
						HX_STACK_LINE(72)
						::luxe::ResourceStats tmp5 = this->stats;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						hx::AddEq(tmp5->unknown,(int)1);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(72)
						::luxe::ResourceStats tmp5 = this->stats;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						hx::AddEq(tmp5->bytes,(int)1);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(72)
						::luxe::ResourceStats tmp5 = this->stats;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						hx::AddEq(tmp5->texts,(int)1);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(72)
						::luxe::ResourceStats tmp5 = this->stats;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						hx::AddEq(tmp5->jsons,(int)1);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(72)
						::luxe::ResourceStats tmp5 = this->stats;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						hx::AddEq(tmp5->textures,(int)1);
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(72)
						::luxe::ResourceStats tmp5 = this->stats;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						hx::AddEq(tmp5->render_textures,(int)1);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(72)
						::luxe::ResourceStats tmp5 = this->stats;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						hx::AddEq(tmp5->fonts,(int)1);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(72)
						::luxe::ResourceStats tmp5 = this->stats;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						hx::AddEq(tmp5->shaders,(int)1);
					}
					;break;
				}
			}
			HX_STACK_LINE(72)
			::luxe::ResourceStats tmp4 = this->stats;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			hx::AddEq(tmp4->total,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,add,(void))

bool Resources_obj::remove( ::luxe::resource::Resource resource,Dynamic _pos){
	HX_STACK_FRAME("luxe.Resources","remove",0x6353e185,"luxe.Resources.remove","luxe/Resources.hx",77,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resource,"resource")
	HX_STACK_ARG(_pos,"_pos")
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		::String tmp1 = resource->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		if ((tmp3)){
			HX_STACK_LINE(79)
			::String tmp4 = HX_HCSTRING("cache.exists(resource.id)","\xee","\x50","\xde","\x37");		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			::luxe::DebugError tmp5 = ::luxe::DebugError_obj::assertion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			HX_STACK_DO_THROW(tmp5);
		}
	}
	HX_STACK_LINE(81)
	::luxe::resource::Resource tmp = resource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	this->emit((int)7,tmp);
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g = resource->resource_type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			switch( (int)(tmp1)){
				case (int)0: {
					HX_STACK_LINE(83)
					::luxe::ResourceStats tmp2 = this->stats;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					hx::AddEq(tmp2->unknown,(int)-1);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(83)
					::luxe::ResourceStats tmp2 = this->stats;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					hx::AddEq(tmp2->bytes,(int)-1);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(83)
					::luxe::ResourceStats tmp2 = this->stats;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					hx::AddEq(tmp2->texts,(int)-1);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(83)
					::luxe::ResourceStats tmp2 = this->stats;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					hx::AddEq(tmp2->jsons,(int)-1);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(83)
					::luxe::ResourceStats tmp2 = this->stats;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					hx::AddEq(tmp2->textures,(int)-1);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(83)
					::luxe::ResourceStats tmp2 = this->stats;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					hx::AddEq(tmp2->render_textures,(int)-1);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(83)
					::luxe::ResourceStats tmp2 = this->stats;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					hx::AddEq(tmp2->fonts,(int)-1);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(83)
					::luxe::ResourceStats tmp2 = this->stats;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					hx::AddEq(tmp2->shaders,(int)-1);
				}
				;break;
			}
		}
		HX_STACK_LINE(83)
		::luxe::ResourceStats tmp1 = this->stats;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		hx::AddEq(tmp1->total,(int)-1);
	}
	HX_STACK_LINE(85)
	::haxe::ds::StringMap tmp1 = this->cache;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	::String tmp2 = resource->id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	bool tmp3 = tmp1->remove(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Resources_obj,remove,return )

bool Resources_obj::destroy( ::String _id,Dynamic __o__force){
Dynamic _force = __o__force.Default(false);
	HX_STACK_FRAME("luxe.Resources","destroy",0xb7978099,"luxe.Resources.destroy","luxe/Resources.hx",90,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_force,"_force")
{
		HX_STACK_LINE(92)
		::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		::luxe::resource::Resource resource = tmp2;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(94)
		bool tmp3 = (resource == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		if ((tmp3)){
			HX_STACK_LINE(94)
			return false;
		}
		HX_STACK_LINE(96)
		Dynamic tmp4 = _force;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		resource->destroy(tmp4);
		HX_STACK_LINE(98)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Resources_obj,destroy,return )

bool Resources_obj::invalidate( ::String _id){
	HX_STACK_FRAME("luxe.Resources","invalidate",0xba87933c,"luxe.Resources.invalidate","luxe/Resources.hx",103,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(105)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	::luxe::resource::Resource resource = tmp2;		HX_STACK_VAR(resource,"resource");
	HX_STACK_LINE(107)
	bool tmp3 = (resource == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	if ((tmp3)){
		HX_STACK_LINE(107)
		return false;
	}
	HX_STACK_LINE(109)
	resource->invalidate();
	HX_STACK_LINE(111)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,invalidate,return )

Void Resources_obj::on( int ev,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Resources","on",0xe58db1e0,"luxe.Resources.on","luxe/Resources.hx",117,0x2b4e2952)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(119)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		int tmp1 = ev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Resources.hx","\x19","\xf4","\xc2","\x70"),119,HX_HCSTRING("luxe.Resources","\x0d","\x7d","\x79","\x14"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		tmp->on(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Resources_obj,on,(void))

Void Resources_obj::off( int ev,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Resources","off",0xf66deb8e,"luxe.Resources.off","luxe/Resources.hx",123,0x2b4e2952)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(125)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		int tmp1 = ev;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Resources.hx","\x19","\xf4","\xc2","\x70"),125,HX_HCSTRING("luxe.Resources","\x0d","\x7d","\x79","\x14"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		tmp->off(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Resources_obj,off,(void))

Void Resources_obj::emit( int ev,Dynamic data){
{
		HX_STACK_FRAME("luxe.Resources","emit",0xa3296154,"luxe.Resources.emit","luxe/Resources.hx",129,0x2b4e2952)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ev,"ev")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(131)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Resources.hx","\x19","\xf4","\xc2","\x70"),131,HX_HCSTRING("luxe.Resources","\x0d","\x7d","\x79","\x14"),HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		tmp->emit((int)1,tmp1,tmp2);
		HX_STACK_LINE(132)
		::luxe::Emitter tmp3 = this->emitter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		int tmp4 = ev;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(132)
		Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Resources.hx","\x19","\xf4","\xc2","\x70"),132,HX_HCSTRING("luxe.Resources","\x0d","\x7d","\x79","\x14"),HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		tmp3->emit(tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Resources_obj,emit,(void))

::snow::api::Promise Resources_obj::load_bytes( ::String _id){
	HX_STACK_FRAME("luxe.Resources","load_bytes",0x6d738413,"luxe.Resources.load_bytes","luxe/Resources.hx",139,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		if ((tmp)){
			HX_STACK_LINE(141)
			::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(143)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	::luxe::resource::BytesResource _resource = ((::luxe::resource::BytesResource)(tmp2));		HX_STACK_VAR(_resource,"_resource");
	HX_STACK_LINE(145)
	bool tmp3 = (_resource != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	if ((tmp3)){
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::luxe::resource::BytesResource _g = _resource;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			int _g1 = _g->ref;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			int tmp4 = (_g1 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			_g->set_ref(tmp4);
			HX_STACK_LINE(147)
			_g1;
		}
		HX_STACK_LINE(148)
		::luxe::resource::BytesResource tmp4 = _resource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		::snow::api::Promise tmp5 = ::snow::api::Promise_obj::resolve(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		return tmp5;
	}
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::luxe::Resources_obj > __this,::String &_id){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Resources.hx",153,0x2b4e2952)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _id,false);
				__result->Add(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2") , __this,false);
				__result->Add(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(153)
	Dynamic tmp4 = _Function_1_1::Block(this,_id);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(153)
	::luxe::resource::BytesResource tmp5 = ::luxe::resource::BytesResource_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(153)
	_resource = tmp5;
	HX_STACK_LINE(159)
	::luxe::resource::BytesResource tmp6 = _resource;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(159)
	this->add(tmp6);
	HX_STACK_LINE(161)
	::snow::api::Promise tmp7 = _resource->reload();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(161)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,load_bytes,return )

::snow::api::Promise Resources_obj::load_text( ::String _id){
	HX_STACK_FRAME("luxe.Resources","load_text",0x00d97e05,"luxe.Resources.load_text","luxe/Resources.hx",165,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		if ((tmp)){
			HX_STACK_LINE(167)
			::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(167)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(169)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	::luxe::resource::TextResource _resource = ((::luxe::resource::TextResource)(tmp2));		HX_STACK_VAR(_resource,"_resource");
	HX_STACK_LINE(171)
	bool tmp3 = (_resource != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(171)
	if ((tmp3)){
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			::luxe::resource::TextResource _g = _resource;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(173)
			int _g1 = _g->ref;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(173)
			int tmp4 = (_g1 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			_g->set_ref(tmp4);
			HX_STACK_LINE(173)
			_g1;
		}
		HX_STACK_LINE(174)
		::luxe::resource::TextResource tmp4 = _resource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		::snow::api::Promise tmp5 = ::snow::api::Promise_obj::resolve(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		return tmp5;
	}
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::luxe::Resources_obj > __this,::String &_id){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Resources.hx",179,0x2b4e2952)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _id,false);
				__result->Add(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2") , __this,false);
				__result->Add(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(179)
	Dynamic tmp4 = _Function_1_1::Block(this,_id);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	::luxe::resource::TextResource tmp5 = ::luxe::resource::TextResource_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	_resource = tmp5;
	HX_STACK_LINE(185)
	::luxe::resource::TextResource tmp6 = _resource;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(185)
	this->add(tmp6);
	HX_STACK_LINE(187)
	::snow::api::Promise tmp7 = _resource->reload();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(187)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,load_text,return )

::snow::api::Promise Resources_obj::load_json( ::String _id){
	HX_STACK_FRAME("luxe.Resources","load_json",0xfa47f380,"luxe.Resources.load_json","luxe/Resources.hx",191,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		if ((tmp)){
			HX_STACK_LINE(193)
			::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(195)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	::luxe::resource::JSONResource _resource = ((::luxe::resource::JSONResource)(tmp2));		HX_STACK_VAR(_resource,"_resource");
	HX_STACK_LINE(197)
	bool tmp3 = (_resource != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	if ((tmp3)){
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			::luxe::resource::JSONResource _g = _resource;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(199)
			int _g1 = _g->ref;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(199)
			int tmp4 = (_g1 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			_g->set_ref(tmp4);
			HX_STACK_LINE(199)
			_g1;
		}
		HX_STACK_LINE(200)
		::luxe::resource::JSONResource tmp4 = _resource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		::snow::api::Promise tmp5 = ::snow::api::Promise_obj::resolve(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		return tmp5;
	}
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::luxe::Resources_obj > __this,::String &_id){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Resources.hx",205,0x2b4e2952)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _id,false);
				__result->Add(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2") , __this,false);
				__result->Add(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(205)
	Dynamic tmp4 = _Function_1_1::Block(this,_id);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(205)
	::luxe::resource::JSONResource tmp5 = ::luxe::resource::JSONResource_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(205)
	_resource = tmp5;
	HX_STACK_LINE(211)
	::luxe::resource::JSONResource tmp6 = _resource;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(211)
	this->add(tmp6);
	HX_STACK_LINE(213)
	::snow::api::Promise tmp7 = _resource->reload();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(213)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,load_json,return )

::snow::api::Promise Resources_obj::load_texture( ::String _id,Dynamic _options){
	HX_STACK_FRAME("luxe.Resources","load_texture",0x99507e83,"luxe.Resources.load_texture","luxe/Resources.hx",217,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(219)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		if ((tmp)){
			HX_STACK_LINE(219)
			::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(219)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(221)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(221)
	::phoenix::Texture _resource = ((::phoenix::Texture)(tmp2));		HX_STACK_VAR(_resource,"_resource");
	HX_STACK_LINE(223)
	bool tmp3 = (_resource != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(223)
	if ((tmp3)){
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			::phoenix::Texture _g = _resource;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(225)
			int _g1 = _g->ref;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(225)
			int tmp4 = (_g1 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			_g->set_ref(tmp4);
			HX_STACK_LINE(225)
			_g1;
		}
		HX_STACK_LINE(226)
		::phoenix::Texture tmp4 = _resource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		::snow::api::Promise tmp5 = ::snow::api::Promise_obj::resolve(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		return tmp5;
	}
	HX_STACK_LINE(233)
	Dynamic _filter_min = null();		HX_STACK_VAR(_filter_min,"_filter_min");
	HX_STACK_LINE(234)
	Dynamic _filter_mag = null();		HX_STACK_VAR(_filter_mag,"_filter_mag");
	HX_STACK_LINE(235)
	Dynamic _clamp_s = null();		HX_STACK_VAR(_clamp_s,"_clamp_s");
	HX_STACK_LINE(236)
	Dynamic _clamp_t = null();		HX_STACK_VAR(_clamp_t,"_clamp_t");
	HX_STACK_LINE(237)
	Dynamic _premultiply = null();		HX_STACK_VAR(_premultiply,"_premultiply");
	HX_STACK_LINE(239)
	bool tmp4 = (_options != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(239)
	if ((tmp4)){
		HX_STACK_LINE(240)
		_filter_min = _options->__Field(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60"), hx::paccDynamic );
		HX_STACK_LINE(241)
		_filter_mag = _options->__Field(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60"), hx::paccDynamic );
		HX_STACK_LINE(242)
		_clamp_s = _options->__Field(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65"), hx::paccDynamic );
		HX_STACK_LINE(243)
		_clamp_t = _options->__Field(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65"), hx::paccDynamic );
		HX_STACK_LINE(244)
		_premultiply = _options->__Field(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac"), hx::paccDynamic );
	}
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::luxe::Resources_obj > __this,Dynamic &_clamp_t,Dynamic &_filter_mag,Dynamic &_clamp_s,Dynamic &_premultiply,::String &_id,Dynamic &_filter_min){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Resources.hx",247,0x2b4e2952)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _id,false);
				__result->Add(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2") , __this,false);
				__result->Add(HX_HCSTRING("filter_min","\x4b","\xb2","\x89","\x60") , _filter_min,false);
				__result->Add(HX_HCSTRING("filter_mag","\x4c","\xab","\x89","\x60") , _filter_mag,false);
				__result->Add(HX_HCSTRING("clamp_s","\xef","\xba","\x97","\x65") , _clamp_s,false);
				__result->Add(HX_HCSTRING("clamp_t","\xf0","\xba","\x97","\x65") , _clamp_t,false);
				__result->Add(HX_HCSTRING("load_premultiply_alpha","\x8d","\xfb","\xf5","\xac") , _premultiply,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(247)
	Dynamic tmp5 = _Function_1_1::Block(this,_clamp_t,_filter_mag,_clamp_s,_premultiply,_id,_filter_min);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(247)
	::phoenix::Texture tmp6 = ::phoenix::Texture_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(247)
	_resource = tmp6;
	HX_STACK_LINE(257)
	::phoenix::Texture tmp7 = _resource;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(257)
	this->add(tmp7);
	HX_STACK_LINE(259)
	::snow::api::Promise tmp8 = _resource->reload();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(259)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Resources_obj,load_texture,return )

::snow::api::Promise Resources_obj::load_font( ::String _id,Dynamic _options){
	HX_STACK_FRAME("luxe.Resources","load_font",0xf7a00f27,"luxe.Resources.load_font","luxe/Resources.hx",263,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(265)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		if ((tmp)){
			HX_STACK_LINE(265)
			::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(265)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(265)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(267)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
	::phoenix::BitmapFont _resource = ((::phoenix::BitmapFont)(tmp2));		HX_STACK_VAR(_resource,"_resource");
	HX_STACK_LINE(269)
	bool tmp3 = (_resource != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	if ((tmp3)){
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			::phoenix::BitmapFont _g = _resource;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(271)
			int _g1 = _g->ref;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(271)
			int tmp4 = (_g1 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			_g->set_ref(tmp4);
			HX_STACK_LINE(271)
			_g1;
		}
		HX_STACK_LINE(272)
		::phoenix::BitmapFont tmp4 = _resource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		::snow::api::Promise tmp5 = ::snow::api::Promise_obj::resolve(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		return tmp5;
	}
	HX_STACK_LINE(277)
	::String _texture_path = null();		HX_STACK_VAR(_texture_path,"_texture_path");
	HX_STACK_LINE(278)
	bool tmp4 = (_options != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(278)
	if ((tmp4)){
		HX_STACK_LINE(279)
		_texture_path = _options->__Field(HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62"), hx::paccDynamic );
	}
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::luxe::Resources_obj > __this,::String &_id,::String &_texture_path){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Resources.hx",282,0x2b4e2952)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _id,false);
				__result->Add(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2") , __this,false);
				__result->Add(HX_HCSTRING("texture_path","\xc9","\x3e","\xd5","\x62") , _texture_path,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(282)
	Dynamic tmp5 = _Function_1_1::Block(this,_id,_texture_path);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(282)
	::phoenix::BitmapFont tmp6 = ::phoenix::BitmapFont_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(282)
	_resource = tmp6;
	HX_STACK_LINE(288)
	::phoenix::BitmapFont tmp7 = _resource;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(288)
	this->add(tmp7);
	HX_STACK_LINE(290)
	::snow::api::Promise tmp8 = _resource->reload();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(290)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Resources_obj,load_font,return )

::snow::api::Promise Resources_obj::load_shader( ::String _id,Dynamic _options){
	HX_STACK_FRAME("luxe.Resources","load_shader",0x4d51767d,"luxe.Resources.load_shader","luxe/Resources.hx",294,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_ARG(_options,"_options")
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(296)
		bool tmp = (_id == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(296)
		if ((tmp)){
			HX_STACK_LINE(296)
			::String tmp1 = HX_HCSTRING("_id was null","\xc4","\x57","\x88","\xc5");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(296)
			::luxe::DebugError tmp2 = ::luxe::DebugError_obj::null_assertion(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(296)
			HX_STACK_DO_THROW(tmp2);
		}
	}
	HX_STACK_LINE(298)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	::phoenix::Shader _resource = ((::phoenix::Shader)(tmp2));		HX_STACK_VAR(_resource,"_resource");
	HX_STACK_LINE(300)
	bool tmp3 = (_resource != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(300)
	if ((tmp3)){
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			::phoenix::Shader _g = _resource;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(302)
			int _g1 = _g->ref;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(302)
			int tmp4 = (_g1 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			_g->set_ref(tmp4);
			HX_STACK_LINE(302)
			_g1;
		}
		HX_STACK_LINE(303)
		::phoenix::Shader tmp4 = _resource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(303)
		::snow::api::Promise tmp5 = ::snow::api::Promise_obj::resolve(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		return tmp5;
	}
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::luxe::Resources_obj > __this,Dynamic &_options,::String &_id){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Resources.hx",308,0x2b4e2952)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , _id,false);
				__result->Add(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2") , __this,false);
				__result->Add(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44") , _options->__Field(HX_HCSTRING("frag_id","\x08","\x24","\x78","\x44"), hx::paccDynamic ),false);
				__result->Add(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d") , _options->__Field(HX_HCSTRING("vert_id","\xe9","\x81","\x93","\x7d"), hx::paccDynamic ),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(308)
	Dynamic tmp4 = _Function_1_1::Block(this,_options,_id);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(308)
	::phoenix::Shader tmp5 = ::phoenix::Shader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(308)
	_resource = tmp5;
	HX_STACK_LINE(315)
	::phoenix::Shader tmp6 = _resource;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(315)
	this->add(tmp6);
	HX_STACK_LINE(317)
	::snow::api::Promise tmp7 = _resource->reload();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(317)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Resources_obj,load_shader,return )

bool Resources_obj::has( ::String _id){
	HX_STACK_FRAME("luxe.Resources","has",0xf6689779,"luxe.Resources.has","luxe/Resources.hx",324,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(324)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(324)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,has,return )

::luxe::resource::Resource Resources_obj::get( ::String _id){
	HX_STACK_FRAME("luxe.Resources","get",0xf667d8b5,"luxe.Resources.get","luxe/Resources.hx",325,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(325)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(325)
	::luxe::resource::Resource tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(325)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,get,return )

::luxe::resource::BytesResource Resources_obj::bytes( ::String _id){
	HX_STACK_FRAME("luxe.Resources","bytes",0x6ecee64a,"luxe.Resources.bytes","luxe/Resources.hx",326,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(326)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(326)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(326)
	::luxe::resource::BytesResource tmp3 = ((::luxe::resource::BytesResource)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(326)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,bytes,return )

::luxe::resource::TextResource Resources_obj::text( ::String _id){
	HX_STACK_FRAME("luxe.Resources","text",0xad0d8fae,"luxe.Resources.text","luxe/Resources.hx",327,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(327)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	::luxe::resource::TextResource tmp3 = ((::luxe::resource::TextResource)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,text,return )

::luxe::resource::JSONResource Resources_obj::json( ::String _id){
	HX_STACK_FRAME("luxe.Resources","json",0xa67c0529,"luxe.Resources.json","luxe/Resources.hx",328,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(328)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	::luxe::resource::JSONResource tmp3 = ((::luxe::resource::JSONResource)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(328)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,json,return )

::phoenix::Texture Resources_obj::texture( ::String _id){
	HX_STACK_FRAME("luxe.Resources","texture",0x31f21c7a,"luxe.Resources.texture","luxe/Resources.hx",329,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(329)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(329)
	::phoenix::Texture tmp3 = ((::phoenix::Texture)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(329)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,texture,return )

::phoenix::BitmapFont Resources_obj::font( ::String _id){
	HX_STACK_FRAME("luxe.Resources","font",0xa3d420d0,"luxe.Resources.font","luxe/Resources.hx",330,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(330)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	::phoenix::BitmapFont tmp3 = ((::phoenix::BitmapFont)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(330)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,font,return )

::phoenix::Shader Resources_obj::shader( ::String _id){
	HX_STACK_FRAME("luxe.Resources","shader",0x7bec0466,"luxe.Resources.shader","luxe/Resources.hx",331,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(331)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(331)
	::phoenix::Shader tmp3 = ((::phoenix::Shader)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(331)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,shader,return )

Dynamic Resources_obj::fetch( ::String _id){
	HX_STACK_FRAME("luxe.Resources","fetch",0xaf30f219,"luxe.Resources.fetch","luxe/Resources.hx",335,0x2b4e2952)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(336)
	::haxe::ds::StringMap tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	::String tmp1 = _id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(336)
	::luxe::resource::Resource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(336)
	Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(336)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Resources_obj,fetch,return )

Void Resources_obj::update_stats( ::luxe::resource::Resource _res,int _offset){
{
		HX_STACK_FRAME("luxe.Resources","update_stats",0x2c221c2a,"luxe.Resources.update_stats","luxe/Resources.hx",339,0x2b4e2952)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_res,"_res")
		HX_STACK_ARG(_offset,"_offset")
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			int _g = _res->resource_type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(341)
			int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(341)
			switch( (int)(tmp)){
				case (int)0: {
					HX_STACK_LINE(342)
					::luxe::ResourceStats tmp1 = this->stats;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(342)
					hx::AddEq(tmp1->unknown,_offset);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(343)
					::luxe::ResourceStats tmp1 = this->stats;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(343)
					hx::AddEq(tmp1->bytes,_offset);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(344)
					::luxe::ResourceStats tmp1 = this->stats;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(344)
					hx::AddEq(tmp1->texts,_offset);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(345)
					::luxe::ResourceStats tmp1 = this->stats;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(345)
					hx::AddEq(tmp1->jsons,_offset);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(346)
					::luxe::ResourceStats tmp1 = this->stats;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(346)
					hx::AddEq(tmp1->textures,_offset);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(347)
					::luxe::ResourceStats tmp1 = this->stats;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(347)
					hx::AddEq(tmp1->render_textures,_offset);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(348)
					::luxe::ResourceStats tmp1 = this->stats;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(348)
					hx::AddEq(tmp1->fonts,_offset);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(349)
					::luxe::ResourceStats tmp1 = this->stats;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(349)
					hx::AddEq(tmp1->shaders,_offset);
				}
				;break;
			}
		}
		HX_STACK_LINE(352)
		::luxe::ResourceStats tmp = this->stats;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		hx::AddEq(tmp->total,_offset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Resources_obj,update_stats,(void))


Resources_obj::Resources_obj()
{
}

void Resources_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Resources);
	HX_MARK_MEMBER_NAME(parcels,"parcels");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_END_CLASS();
}

void Resources_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parcels,"parcels");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(stats,"stats");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
}

Dynamic Resources_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text_dyn(); }
		if (HX_FIELD_EQ(inName,"json") ) { return json_dyn(); }
		if (HX_FIELD_EQ(inName,"font") ) { return font_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"track") ) { return track_dyn(); }
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"fetch") ) { return fetch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"parcels") ) { return parcels; }
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"untrack") ) { return untrack_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"texture") ) { return texture_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"load_text") ) { return load_text_dyn(); }
		if (HX_FIELD_EQ(inName,"load_json") ) { return load_json_dyn(); }
		if (HX_FIELD_EQ(inName,"load_font") ) { return load_font_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"load_bytes") ) { return load_bytes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"load_shader") ) { return load_shader_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"load_texture") ) { return load_texture_dyn(); }
		if (HX_FIELD_EQ(inName,"update_stats") ) { return update_stats_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Resources_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::luxe::ResourceStats >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"parcels") ) { parcels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Resources_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Resources_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parcels","\x8a","\x37","\x6d","\xdf"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	outFields->push(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Resources_obj,parcels),HX_HCSTRING("parcels","\x8a","\x37","\x6d","\xdf")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Resources_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::luxe::ResourceStats*/ ,(int)offsetof(Resources_obj,stats),HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(Resources_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parcels","\x8a","\x37","\x6d","\xdf"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),
	HX_HCSTRING("untrack","\x92","\x85","\xb0","\x12"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("load_bytes","\x52","\x0a","\x16","\x3a"),
	HX_HCSTRING("load_text","\xa6","\xc4","\x14","\x88"),
	HX_HCSTRING("load_json","\x21","\x3a","\x83","\x81"),
	HX_HCSTRING("load_texture","\x82","\x52","\x50","\xb8"),
	HX_HCSTRING("load_font","\xc8","\x55","\xdb","\x7e"),
	HX_HCSTRING("load_shader","\x5e","\x67","\xe4","\x8e"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("json","\x28","\x42","\x68","\x46"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("fetch","\x3a","\x14","\xfa","\xfd"),
	HX_HCSTRING("update_stats","\x29","\xf0","\x21","\x4b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resources_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resources_obj::__mClass,"__mClass");
};

#endif

hx::Class Resources_obj::__mClass;

void Resources_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Resources","\x0d","\x7d","\x79","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Resources_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Resources_obj >;
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
