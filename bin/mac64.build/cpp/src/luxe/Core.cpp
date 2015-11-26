#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_luxe_Audio
#include <luxe/Audio.h>
#endif
#ifndef INCLUDED_luxe_Camera
#include <luxe/Camera.h>
#endif
#ifndef INCLUDED_luxe_Core
#include <luxe/Core.h>
#endif
#ifndef INCLUDED_luxe_Cursor
#include <luxe/Cursor.h>
#endif
#ifndef INCLUDED_luxe_Debug
#include <luxe/Debug.h>
#endif
#ifndef INCLUDED_luxe_Draw
#include <luxe/Draw.h>
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
#ifndef INCLUDED_luxe_GamepadEventType
#include <luxe/GamepadEventType.h>
#endif
#ifndef INCLUDED_luxe_IO
#include <luxe/IO.h>
#endif
#ifndef INCLUDED_luxe_Input
#include <luxe/Input.h>
#endif
#ifndef INCLUDED_luxe_InteractState
#include <luxe/InteractState.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Parcel
#include <luxe/Parcel.h>
#endif
#ifndef INCLUDED_luxe_Physics
#include <luxe/Physics.h>
#endif
#ifndef INCLUDED_luxe_Resources
#include <luxe/Resources.h>
#endif
#ifndef INCLUDED_luxe_Scene
#include <luxe/Scene.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Tag
#include <luxe/Tag.h>
#endif
#ifndef INCLUDED_luxe_TextEventType
#include <luxe/TextEventType.h>
#endif
#ifndef INCLUDED_luxe_Timer
#include <luxe/Timer.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_structural_BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBST_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_luxe_utils_Utils
#include <luxe/utils/Utils.h>
#endif
#ifndef INCLUDED_phoenix_Batcher
#include <phoenix/Batcher.h>
#endif
#ifndef INCLUDED_phoenix_Camera
#include <phoenix/Camera.h>
#endif
#ifndef INCLUDED_phoenix_Rectangle
#include <phoenix/Rectangle.h>
#endif
#ifndef INCLUDED_phoenix_RenderState
#include <phoenix/RenderState.h>
#endif
#ifndef INCLUDED_phoenix_Renderer
#include <phoenix/Renderer.h>
#endif
#ifndef INCLUDED_phoenix_RendererStats
#include <phoenix/RendererStats.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_modules_opengl_native_GL_FFI
#include <snow/modules/opengl/native/GL_FFI.h>
#endif
#ifndef INCLUDED_snow_system_assets_Asset
#include <snow/system/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_system_assets_AssetImage
#include <snow/system/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_system_assets_Assets
#include <snow/system/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_system_input_Scancodes
#include <snow/system/input/Scancodes.h>
#endif
#ifndef INCLUDED_snow_system_window_Window
#include <snow/system/window/Window.h>
#endif
#ifndef INCLUDED_snow_types_Error
#include <snow/types/Error.h>
#endif
namespace luxe{

Void Core_obj::__construct(::luxe::Game _game,Dynamic _config)
{
HX_STACK_FRAME("luxe.Core","new",0x819c31a9,"luxe.Core.new","luxe/Core.hx",36,0xa921e806)
HX_STACK_THIS(this)
HX_STACK_ARG(_game,"_game")
HX_STACK_ARG(_config,"_config")
{
	HX_STACK_LINE(75)
	this->inited = false;
	HX_STACK_LINE(74)
	this->has_shutdown = false;
	HX_STACK_LINE(73)
	this->shutting_down = false;
	HX_STACK_LINE(52)
	this->headless = false;
	HX_STACK_LINE(50)
	this->console_visible = false;
	HX_STACK_LINE(81)
	super::__construct();
	HX_STACK_LINE(83)
	this->init_config = _config;
	HX_STACK_LINE(84)
	this->game = _game;
	HX_STACK_LINE(87)
	::luxe::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	tmp->app = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(90)
	::luxe::Emitter tmp1 = ::luxe::Emitter_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	this->emitter = tmp1;
	HX_STACK_LINE(93)
	::Luxe_obj::core = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(94)
	::luxe::utils::Utils tmp2 = ::luxe::utils::Utils_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	::Luxe_obj::utils = tmp2;
}
;
	return null();
}

//Core_obj::~Core_obj() { }

Dynamic Core_obj::__CreateEmpty() { return  new Core_obj; }
hx::ObjectPtr< Core_obj > Core_obj::__new(::luxe::Game _game,Dynamic _config)
{  hx::ObjectPtr< Core_obj > _result_ = new Core_obj();
	_result_->__construct(_game,_config);
	return _result_;}

Dynamic Core_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Core_obj > _result_ = new Core_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Core_obj::ready( ){
{
		HX_STACK_FRAME("luxe.Core","ready",0x93d4a5ec,"luxe.Core.ready","luxe/Core.hx",100,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::luxe::Core _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		if ((tmp)){
			HX_STACK_LINE(103)
			::String tmp1 = (HX_HCSTRING("log / level to ","\xdc","\xcc","\x48","\x9e") + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			::String tmp2 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),103,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			::haxe::Log_obj::trace(tmp2,tmp3);
			HX_STACK_LINE(104)
			::String tmp4 = (HX_HCSTRING("log / filter : ","\x41","\x69","\x13","\x1f") + null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			::String tmp5 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),104,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			::haxe::Log_obj::trace(tmp5,tmp6);
			HX_STACK_LINE(105)
			::String tmp7 = (HX_HCSTRING("log / exclude : ","\x99","\x61","\xf3","\xe1") + null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(105)
			::String tmp8 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(105)
			Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),105,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			::haxe::Log_obj::trace(tmp8,tmp9);
		}
		HX_STACK_LINE(108)
		::String tmp1 = ::haxe::Resource_obj::getString(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		::Luxe_obj::version = tmp1;
		HX_STACK_LINE(110)
		::String tmp2 = ::Luxe_obj::version;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		::String tmp3 = ::haxe::Resource_obj::getString(HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		::Luxe_obj::build = tmp4;
		HX_STACK_LINE(112)
		::String tmp5 = ::Luxe_obj::build;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		::String tmp6 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		::String tmp7 = (tmp6 + HX_HCSTRING(" / debug:","\x78","\xa2","\x67","\x75"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		::snow::Snow tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		bool tmp9 = tmp8->debug;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		::String tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		::String tmp12 = (tmp11 + HX_HCSTRING(" / os:","\x05","\x42","\xbc","\xf0"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(112)
		::snow::Snow tmp13 = this->app;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(112)
		::String tmp14 = tmp13->os;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(112)
		::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(112)
		::String tmp16 = (tmp15 + HX_HCSTRING(" / platform:","\xd6","\x0a","\x95","\x7c"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(112)
		::snow::Snow tmp17 = this->app;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(112)
		::String tmp18 = tmp17->platform;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(112)
		::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(112)
		::String tmp20 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(112)
		Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),112,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(112)
		::haxe::Log_obj::trace(tmp20,tmp21);
		HX_STACK_LINE(115)
		::snow::Snow tmp22 = this->app;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(115)
		::snow::_system::window::Window tmp23 = tmp22->window;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(115)
		bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(115)
		this->headless = tmp24;
		HX_STACK_LINE(124)
		bool tmp25 = this->headless;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(124)
		bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(124)
		if ((tmp26)){
			HX_STACK_LINE(126)
			::String _font_name = HX_HCSTRING("default.png","\x7c","\xfa","\xa2","\x05");		HX_STACK_VAR(_font_name,"_font_name");
			HX_STACK_LINE(127)
			::snow::api::buffers::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(127)
			{
				HX_STACK_LINE(127)
				::String tmp28 = _font_name;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(127)
				::haxe::io::Bytes tmp29 = ::haxe::Resource_obj::getBytes(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(127)
				::haxe::io::Bytes bytes = tmp29;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					::snow::api::buffers::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(127)
					bool tmp30 = false;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(127)
					if ((tmp30)){
						HX_STACK_LINE(127)
						::snow::api::buffers::ArrayBufferView tmp31 = ::snow::api::buffers::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(127)
						this1 = tmp31;
					}
					else{
						HX_STACK_LINE(127)
						bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(127)
						if ((tmp31)){
							HX_STACK_LINE(127)
							::snow::api::buffers::ArrayBufferView tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(127)
							{
								HX_STACK_LINE(127)
								::snow::api::buffers::ArrayBufferView tmp33 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(127)
								::snow::api::buffers::ArrayBufferView _this = tmp33;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(127)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(127)
								int tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(127)
								_this->length = tmp34;
								HX_STACK_LINE(127)
								int tmp35 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(127)
								_this->byteLength = tmp35;
								HX_STACK_LINE(127)
								::haxe::io::Bytes tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(127)
								{
									HX_STACK_LINE(127)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(127)
									int tmp37 = _this->byteLength;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(127)
									::haxe::io::Bytes tmp38 = ::haxe::io::Bytes_obj::alloc(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(127)
									this2 = tmp38;
									HX_STACK_LINE(127)
									tmp36 = this2;
								}
								HX_STACK_LINE(127)
								_this->buffer = tmp36;
								HX_STACK_LINE(127)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(127)
								tmp32 = _this;
							}
							HX_STACK_LINE(127)
							this1 = tmp32;
						}
						else{
							HX_STACK_LINE(127)
							bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(127)
							if ((tmp32)){
								HX_STACK_LINE(127)
								::snow::api::buffers::ArrayBufferView tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(127)
								{
									HX_STACK_LINE(127)
									::snow::api::buffers::ArrayBufferView tmp34 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(127)
									::snow::api::buffers::ArrayBufferView _this = tmp34;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(127)
									::haxe::io::Bytes tmp35 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(127)
									::haxe::io::Bytes srcData = tmp35;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(127)
									int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(127)
									int srcLength = tmp36;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(127)
									int tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(127)
									int srcByteOffset = tmp37;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(127)
									int tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(127)
									int srcElementSize = tmp38;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(127)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(127)
									int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(127)
									int tmp40 = _this->type;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(127)
									bool tmp41 = (tmp39 == tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(127)
									if ((tmp41)){
										HX_STACK_LINE(127)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(127)
										int tmp42 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(127)
										int cloneLength = tmp42;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(127)
										::haxe::io::Bytes tmp43;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(127)
										{
											HX_STACK_LINE(127)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(127)
											int tmp44 = cloneLength;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(127)
											::haxe::io::Bytes tmp45 = ::haxe::io::Bytes_obj::alloc(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(127)
											this2 = tmp45;
											HX_STACK_LINE(127)
											tmp43 = this2;
										}
										HX_STACK_LINE(127)
										_this->buffer = tmp43;
										HX_STACK_LINE(127)
										::haxe::io::Bytes tmp44 = srcData;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(127)
										int tmp45 = srcByteOffset;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(127)
										int tmp46 = cloneLength;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(127)
										_this->buffer->blit((int)0,tmp44,tmp45,tmp46);
									}
									else{
										HX_STACK_LINE(127)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(127)
									int tmp42 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(127)
									_this->byteLength = tmp42;
									HX_STACK_LINE(127)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(127)
									_this->length = srcLength;
									HX_STACK_LINE(127)
									tmp33 = _this;
								}
								HX_STACK_LINE(127)
								this1 = tmp33;
							}
							else{
								HX_STACK_LINE(127)
								bool tmp33 = (bytes != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(127)
								if ((tmp33)){
									HX_STACK_LINE(127)
									::snow::api::buffers::ArrayBufferView tmp34;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(127)
									{
										HX_STACK_LINE(127)
										::snow::api::buffers::ArrayBufferView tmp35 = ::snow::api::buffers::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(127)
										::snow::api::buffers::ArrayBufferView _this = tmp35;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(127)
										bool tmp36 = false;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(127)
										if ((tmp36)){
											HX_STACK_LINE(127)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(127)
										int tmp37 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(127)
										bool tmp38 = (tmp37 != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(127)
										if ((tmp38)){
											HX_STACK_LINE(127)
											HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
										}
										HX_STACK_LINE(127)
										int bufferByteLength = bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(127)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(127)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(127)
										bool tmp39 = true;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(127)
										if ((tmp39)){
											HX_STACK_LINE(127)
											int tmp40 = bufferByteLength;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(127)
											newByteLength = tmp40;
											HX_STACK_LINE(127)
											int tmp41 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(127)
											bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(127)
											if ((tmp42)){
												HX_STACK_LINE(127)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
											HX_STACK_LINE(127)
											bool tmp43 = (newByteLength < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(127)
											if ((tmp43)){
												HX_STACK_LINE(127)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(127)
											int tmp40 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(127)
											newByteLength = tmp40;
											HX_STACK_LINE(127)
											int tmp41 = newByteLength;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(127)
											int newRange = tmp41;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(127)
											bool tmp42 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(127)
											if ((tmp42)){
												HX_STACK_LINE(127)
												HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(127)
										_this->buffer = bytes;
										HX_STACK_LINE(127)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(127)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(127)
										Float tmp40 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(127)
										int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(127)
										_this->length = tmp41;
										HX_STACK_LINE(127)
										tmp34 = _this;
									}
									HX_STACK_LINE(127)
									this1 = tmp34;
								}
								else{
									HX_STACK_LINE(127)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
								}
							}
						}
					}
					HX_STACK_LINE(127)
					tmp27 = this1;
				}
			}
			HX_STACK_LINE(127)
			::snow::api::buffers::ArrayBufferView _font_image = tmp27;		HX_STACK_VAR(_font_image,"_font_image");
			HX_STACK_LINE(128)
			::snow::Snow tmp28 = this->app;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(128)
			::snow::_system::assets::Assets tmp29 = tmp28->assets;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(128)
			::String tmp30 = _font_name;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(128)
			::snow::api::buffers::ArrayBufferView tmp31 = _font_image;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(128)
			::snow::api::Promise tmp32 = ::snow::_system::assets::AssetImage_obj::load_from_bytes(tmp29,tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(128)
			::snow::api::Promise _font_load = tmp32;		HX_STACK_VAR(_font_load,"_font_load");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::luxe::Core,_g)
			int __ArgCount() const { return 1; }
			Void run(::snow::_system::assets::AssetImage asset){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/Core.hx",130,0xa921e806)
				HX_STACK_ARG(asset,"asset")
				{
					HX_STACK_LINE(131)
					::snow::_system::assets::AssetImage tmp33 = asset;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(131)
					_g->init(tmp33);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(130)
			::snow::api::Promise tmp33 = _font_load->then( Dynamic(new _Function_2_1(_g)),null());		HX_STACK_VAR(tmp33,"tmp33");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::luxe::Core,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic error){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","luxe/Core.hx",132,0xa921e806)
				HX_STACK_ARG(error,"error")
				{
					HX_STACK_LINE(133)
					::String tmp34 = HX_HCSTRING("     i / luxe / failed to load default font, things will probably not look right... $error","\xe1","\x3b","\xbe","\x2d");		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(133)
					Dynamic tmp35 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),133,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(133)
					::haxe::Log_obj::trace(tmp34,tmp35);
					HX_STACK_LINE(134)
					_g->init(null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(130)
			tmp33->error( Dynamic(new _Function_2_2(_g)));
		}
		else{
			HX_STACK_LINE(139)
			this->init(null());
		}
	}
return null();
}


Void Core_obj::ondestroy( ){
{
		HX_STACK_FRAME("luxe.Core","ondestroy",0x53c5bbc4,"luxe.Core.ondestroy","luxe/Core.hx",147,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		this->shutting_down = true;
		HX_STACK_LINE(151)
		::String tmp = HX_HCSTRING("     i / luxe / shutting down...","\x81","\x39","\x65","\xfc");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),151,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		::haxe::Log_obj::trace(tmp,tmp1);
		HX_STACK_LINE(154)
		::luxe::Game tmp2 = this->game;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		tmp2->ondestroy();
		HX_STACK_LINE(157)
		::luxe::Emitter tmp3 = this->emitter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),157,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		tmp3->emit((int)8,null(),tmp4);
		HX_STACK_LINE(160)
		::phoenix::Renderer tmp5 = this->renderer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		if ((tmp6)){
			HX_STACK_LINE(161)
			::phoenix::Renderer tmp7 = this->renderer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			tmp7->destroy();
		}
		HX_STACK_LINE(164)
		::luxe::Physics tmp7 = this->physics;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		tmp7->destroy();
		HX_STACK_LINE(165)
		::luxe::Input tmp8 = this->input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(165)
		tmp8->destroy();
		HX_STACK_LINE(166)
		::luxe::Audio tmp9 = this->audio;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(166)
		tmp9->destroy();
		HX_STACK_LINE(167)
		::luxe::Timer tmp10 = this->timer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		tmp10->destroy();
		HX_STACK_LINE(168)
		::luxe::Events tmp11 = this->events;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(168)
		tmp11->destroy();
		HX_STACK_LINE(169)
		::luxe::Debug tmp12 = this->debug;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(169)
		tmp12->destroy();
		HX_STACK_LINE(172)
		this->emitter = null();
		HX_STACK_LINE(173)
		this->input = null();
		HX_STACK_LINE(174)
		this->audio = null();
		HX_STACK_LINE(175)
		this->events = null();
		HX_STACK_LINE(176)
		this->timer = null();
		HX_STACK_LINE(177)
		this->debug = null();
		HX_STACK_LINE(178)
		::Luxe_obj::utils = null();
		HX_STACK_LINE(181)
		this->has_shutdown = true;
		HX_STACK_LINE(183)
		::String tmp13 = HX_HCSTRING("     i / luxe / goodbye.","\x30","\x50","\x16","\xe9");		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(183)
		Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),183,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(183)
		::haxe::Log_obj::trace(tmp13,tmp14);
	}
return null();
}


Void Core_obj::init( ::snow::_system::assets::AssetImage asset){
{
		HX_STACK_FRAME("luxe.Core","init",0xe3c7f9a7,"luxe.Core.init","luxe/Core.hx",187,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(193)
		::luxe::Debug tmp = ::luxe::Debug_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		::luxe::Debug tmp1 = this->debug = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		::Luxe_obj::debug = tmp1;
		HX_STACK_LINE(194)
		::luxe::IO tmp2 = ::luxe::IO_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		::luxe::IO tmp3 = this->io = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		::Luxe_obj::io = tmp3;
		HX_STACK_LINE(196)
		::luxe::Draw tmp4 = ::luxe::Draw_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		this->draw = tmp4;
		HX_STACK_LINE(197)
		::luxe::Timer tmp5 = ::luxe::Timer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		this->timer = tmp5;
		HX_STACK_LINE(198)
		::luxe::Events tmp6 = ::luxe::Events_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		this->events = tmp6;
		HX_STACK_LINE(199)
		::luxe::Audio tmp7 = ::luxe::Audio_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		this->audio = tmp7;
		HX_STACK_LINE(200)
		::luxe::Input tmp8 = ::luxe::Input_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(200)
		this->input = tmp8;
		HX_STACK_LINE(201)
		::luxe::Physics tmp9 = ::luxe::Physics_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		this->physics = tmp9;
		HX_STACK_LINE(204)
		::luxe::Resources tmp10 = ::luxe::Resources_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(204)
		this->resources = tmp10;
		HX_STACK_LINE(205)
		::luxe::Resources tmp11 = this->resources;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(205)
		::Luxe_obj::resources = tmp11;
		HX_STACK_LINE(207)
		bool tmp12 = this->headless;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(207)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(207)
		if ((tmp13)){
			HX_STACK_LINE(209)
			Dynamic tmp14 = this->window_event_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(209)
			::snow::Snow tmp15 = this->app;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(209)
			tmp15->window->__FieldRef(HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78")) = tmp14;
			HX_STACK_LINE(211)
			::phoenix::Renderer tmp16 = ::phoenix::Renderer_obj::__new(hx::ObjectPtr<OBJ_>(this),asset);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(211)
			this->renderer = tmp16;
			HX_STACK_LINE(213)
			::phoenix::Renderer tmp17 = this->renderer;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			::Luxe_obj::renderer = tmp17;
		}
		HX_STACK_LINE(218)
		int _window_w = (int)0;		HX_STACK_VAR(_window_w,"_window_w");
		HX_STACK_LINE(219)
		int _window_h = (int)0;		HX_STACK_VAR(_window_h,"_window_h");
		HX_STACK_LINE(221)
		::snow::Snow tmp14 = this->app;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(221)
		::snow::_system::window::Window tmp15 = tmp14->window;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(221)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(221)
		if ((tmp16)){
			HX_STACK_LINE(222)
			::snow::Snow tmp17 = this->app;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(222)
			int tmp18 = tmp17->window->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(222)
			_window_w = tmp18;
			HX_STACK_LINE(223)
			::snow::Snow tmp19 = this->app;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(223)
			int tmp20 = tmp19->window->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(223)
			_window_h = tmp20;
		}
		HX_STACK_LINE(227)
		::luxe::Screen tmp17 = ::luxe::Screen_obj::__new(hx::ObjectPtr<OBJ_>(this),_window_w,_window_h);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(227)
		this->screen = tmp17;
		HX_STACK_LINE(232)
		::luxe::Debug tmp18 = this->debug;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(232)
		tmp18->init();
		HX_STACK_LINE(233)
		::luxe::IO tmp19 = this->io;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(233)
		tmp19->init();
		HX_STACK_LINE(234)
		::luxe::Timer tmp20 = this->timer;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(234)
		tmp20->init();
		HX_STACK_LINE(235)
		::luxe::Audio tmp21 = this->audio;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(235)
		tmp21->init();
		HX_STACK_LINE(236)
		::luxe::Input tmp22 = this->input;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(236)
		tmp22->init();
		HX_STACK_LINE(238)
		bool tmp23 = this->headless;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(238)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(238)
		if ((tmp24)){
			HX_STACK_LINE(239)
			::phoenix::Renderer tmp25 = this->renderer;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(239)
			tmp25->init();
		}
		HX_STACK_LINE(242)
		::luxe::Physics tmp25 = this->physics;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(242)
		tmp25->init();
		HX_STACK_LINE(244)
		::luxe::Audio tmp26 = this->audio;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(244)
		::Luxe_obj::audio = tmp26;
		HX_STACK_LINE(245)
		::luxe::Draw tmp27 = this->draw;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(245)
		::Luxe_obj::draw = tmp27;
		HX_STACK_LINE(246)
		::luxe::Events tmp28 = this->events;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(246)
		::Luxe_obj::events = tmp28;
		HX_STACK_LINE(247)
		::luxe::Timer tmp29 = this->timer;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(247)
		::Luxe_obj::timer = tmp29;
		HX_STACK_LINE(248)
		::luxe::Input tmp30 = this->input;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(248)
		::Luxe_obj::input = tmp30;
		HX_STACK_LINE(250)
		bool tmp31 = this->headless;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(250)
		bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(250)
		if ((tmp32)){
			HX_STACK_LINE(251)
			::phoenix::Renderer tmp33 = this->renderer;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(251)
			::phoenix::Camera tmp34 = tmp33->camera;		HX_STACK_VAR(tmp34,"tmp34");
			struct _Function_2_1{
				inline static Dynamic Block( ::phoenix::Camera &tmp34){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",251,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("default camera","\x24","\x50","\x2a","\x4c"),false);
						__result->Add(HX_HCSTRING("view","\x65","\x32","\x4f","\x4e") , tmp34,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(251)
			Dynamic tmp35 = _Function_2_1::Block(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(251)
			::luxe::Camera tmp36 = ::luxe::Camera_obj::__new(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(251)
			::Luxe_obj::camera = tmp36;
		}
		HX_STACK_LINE(254)
		::luxe::Physics tmp33 = this->physics;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(254)
		::Luxe_obj::physics = tmp33;
		HX_STACK_LINE(256)
		::luxe::Scene tmp34 = ::luxe::Scene_obj::__new(HX_HCSTRING("default scene","\xad","\xc4","\x21","\x0a"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(256)
		this->scene = tmp34;
		HX_STACK_LINE(257)
		::luxe::Scene tmp35 = this->scene;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(257)
		::Luxe_obj::scene = tmp35;
		HX_STACK_LINE(259)
		bool tmp36 = this->headless;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(259)
		bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(259)
		if ((tmp37)){
			HX_STACK_LINE(260)
			::luxe::Scene tmp38 = this->scene;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(260)
			::luxe::Camera tmp39 = ::Luxe_obj::camera;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(260)
			Dynamic tmp40 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),260,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(260)
			tmp38->add(tmp39,tmp40);
			HX_STACK_LINE(261)
			::luxe::Debug tmp41 = this->debug;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(261)
			tmp41->create_debug_console();
		}
		HX_STACK_LINE(265)
		this->internal_pre_ready();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,init,(void))

Void Core_obj::internal_pre_ready( ){
{
		HX_STACK_FRAME("luxe.Core","internal_pre_ready",0x6e762e1c,"luxe.Core.internal_pre_ready","luxe/Core.hx",269,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		bool tmp = this->headless;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		if ((tmp1)){
			HX_STACK_LINE(276)
			::String tmp2 = ::snow::modules::opengl::native::GL_FFI_obj::snow_gl_version();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(276)
			::String tmp3 = (HX_HCSTRING("opengl ","\xd1","\x7c","\x43","\x40") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(276)
			::String tmp4 = (HX_HCSTRING("     i / luxe / ","\xb3","\x5b","\x0a","\x3e") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(276)
			Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),276,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(276)
			::haxe::Log_obj::trace(tmp4,tmp5);
			HX_STACK_LINE(283)
			::luxe::Resources tmp6 = this->resources;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(284)
			Dynamic tmp7 = this->appconfig;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(285)
			Dynamic tmp8 = this->appconfig;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(286)
			Dynamic tmp9 = this->appconfig;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(287)
			Dynamic tmp10 = this->appconfig;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(288)
			Dynamic tmp11 = this->appconfig;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			Dynamic tmp12 = this->appconfig;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(290)
			Dynamic tmp13 = this->appconfig;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(291)
			Dynamic tmp14 = this->internal_ready_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			struct _Function_2_1{
				inline static Dynamic Block( ::luxe::Resources &tmp6,Dynamic &tmp13,Dynamic &tmp9,Dynamic &tmp11,Dynamic &tmp10,Dynamic &tmp7,Dynamic &tmp8,Dynamic &tmp12,Dynamic &tmp14){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",281,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , HX_HCSTRING("default_parcel","\xc7","\xbb","\xe2","\xbd"),false);
						__result->Add(HX_HCSTRING("system","\xef","\x96","\xe2","\xf2") , tmp6,false);
						__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , tmp7->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , tmp8->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , tmp9->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , tmp10->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04") , tmp11->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f") , tmp12->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32") , tmp13->__Field(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"), hx::paccDynamic )->__Field(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("oncomplete","\xd8","\x18","\xcd","\x83") , tmp14,false);

						HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
						int __ArgCount() const { return 1; }
						Void run(Dynamic _error){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","luxe/Core.hx",292,0xa921e806)
							HX_STACK_ARG(_error,"_error")
							{
								HX_STACK_LINE(293)
								::String tmp15 = HX_HCSTRING("     i / luxe / config / preload / failed to load","\x2c","\x0a","\x8d","\x9c");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(293)
								Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),293,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(293)
								::haxe::Log_obj::trace(tmp15,tmp16);
								HX_STACK_LINE(294)
								Dynamic tmp17 = _error;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(294)
								::snow::types::Error tmp18 = ::snow::types::Error_obj::error(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(294)
								HX_STACK_DO_THROW(tmp18);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						__result->Add(HX_HCSTRING("onfailed","\x1c","\x48","\x17","\x93") ,  Dynamic(new _Function_3_1()),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(281)
			Dynamic tmp15 = _Function_2_1::Block(tmp6,tmp13,tmp9,tmp11,tmp10,tmp7,tmp8,tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(281)
			::luxe::Parcel tmp16 = ::luxe::Parcel_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(281)
			::luxe::Parcel default_parcel = tmp16;		HX_STACK_VAR(default_parcel,"default_parcel");
			HX_STACK_LINE(298)
			default_parcel->load(null());
		}
		else{
			HX_STACK_LINE(302)
			this->internal_ready(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,internal_pre_ready,(void))

Void Core_obj::internal_ready( ::luxe::Parcel _){
{
		HX_STACK_FRAME("luxe.Core","internal_ready",0x0ed45bf8,"luxe.Core.internal_ready","luxe/Core.hx",308,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(312)
		::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		::snow::_system::window::Window tmp1 = tmp->window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		if ((tmp2)){
			HX_STACK_LINE(312)
			bool tmp4 = this->headless;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(312)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(312)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(312)
			tmp3 = false;
		}
		HX_STACK_LINE(312)
		if ((tmp3)){
			HX_STACK_LINE(314)
			Dynamic tmp4 = this->render_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(314)
			::snow::Snow tmp5 = this->app;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(314)
			tmp5->window->__FieldRef(HX_HCSTRING("onrender","\xb5","\xed","\x41","\xb0")) = tmp4;
			HX_STACK_LINE(317)
			::luxe::Debug tmp6 = this->debug;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(317)
			::String tmp7 = ::luxe::Tag_obj::update;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(317)
			tmp6->start(tmp7,(int)50);
			HX_STACK_LINE(318)
			::luxe::Debug tmp8 = this->debug;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(318)
			::String tmp9 = ::luxe::Tag_obj::renderdt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(318)
			tmp8->start(tmp9,(int)50);
		}
		HX_STACK_LINE(324)
		::luxe::Game tmp4 = this->game;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		tmp4->ready();
		HX_STACK_LINE(327)
		bool tmp5 = this->shutting_down;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(327)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(327)
		if ((tmp6)){
			HX_STACK_LINE(331)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(331)
			Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),331,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("internal_ready","\xa1","\xda","\xfc","\xd2"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(331)
			tmp7->emit((int)2,null(),tmp8);
			HX_STACK_LINE(332)
			this->inited = true;
			HX_STACK_LINE(335)
			::luxe::Physics tmp9 = this->physics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(335)
			tmp9->reset();
			HX_STACK_LINE(338)
			::snow::Snow tmp10 = this->app;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(338)
			Dynamic tmp11 = tmp10->snow_config->__Field(HX_HCSTRING("has_loop","\xa9","\x9c","\xf3","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(338)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(338)
			if ((tmp12)){
				HX_STACK_LINE(339)
				this->shutdown();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,internal_ready,(void))

Void Core_obj::shutdown( ){
{
		HX_STACK_FRAME("luxe.Core","shutdown",0x12d152ad,"luxe.Core.shutdown","luxe/Core.hx",346,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(349)
		this->shutting_down = true;
		HX_STACK_LINE(352)
		{
			HX_STACK_LINE(352)
			::snow::Snow tmp = this->app;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(352)
			Dynamic func = tmp->shutdown_dyn();		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(352)
			{
				HX_STACK_LINE(352)
				bool tmp1 = (func != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(352)
				if ((tmp1)){
					HX_STACK_LINE(352)
					Dynamic tmp2 = func;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(352)
					::snow::Snow_obj::next_queue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,shutdown,(void))

Void Core_obj::on( int event,Dynamic handler){
{
		HX_STACK_FRAME("luxe.Core","on",0x6fef7bf6,"luxe.Core.on","luxe/Core.hx",357,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(358)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),358,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(358)
		tmp->on(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,on,(void))

bool Core_obj::off( int event,Dynamic handler){
	HX_STACK_FRAME("luxe.Core","off",0x819cf4b8,"luxe.Core.off","luxe/Core.hx",362,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(363)
	::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),363,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("off","\x6f","\x93","\x54","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(363)
	bool tmp4 = tmp->off(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(363)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,off,return )

Void Core_obj::emit( int event,Dynamic data){
{
		HX_STACK_FRAME("luxe.Core","emit",0xe1225cea,"luxe.Core.emit","luxe/Core.hx",367,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(368)
		::luxe::Emitter tmp = this->emitter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		int tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),368,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(368)
		tmp->emit(tmp1,tmp2,tmp3);
		HX_STACK_LINE(368)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,emit,(void))

Void Core_obj::ontickstart( ){
{
		HX_STACK_FRAME("luxe.Core","ontickstart",0x9574b52f,"luxe.Core.ontickstart","luxe/Core.hx",371,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(372)
		bool tmp = this->has_shutdown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		if ((tmp1)){
			HX_STACK_LINE(372)
			::luxe::Emitter tmp2 = this->emitter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(372)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),372,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ontickstart","\xe6","\x62","\x8c","\xec"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(372)
			tmp2->emit((int)4,null(),tmp3);
		}
	}
return null();
}


Void Core_obj::ontickend( ){
{
		HX_STACK_FRAME("luxe.Core","ontickend",0x4a248768,"luxe.Core.ontickend","luxe/Core.hx",375,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		bool tmp = this->has_shutdown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		if ((tmp1)){
			HX_STACK_LINE(376)
			::luxe::Emitter tmp2 = this->emitter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),376,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ontickend","\x5f","\x89","\x3e","\x25"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			tmp2->emit((int)5,null(),tmp3);
		}
	}
return null();
}


Void Core_obj::onevent( Dynamic event){
{
		HX_STACK_FRAME("luxe.Core","onevent",0x24a23064,"luxe.Core.onevent","luxe/Core.hx",380,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(382)
		::luxe::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		Dynamic tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		tmp->onevent(tmp1);
	}
return null();
}


Void Core_obj::update( Float dt){
{
		HX_STACK_FRAME("luxe.Core","update",0x50b05860,"luxe.Core.update","luxe/Core.hx",387,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(393)
		bool tmp = this->has_shutdown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(393)
		if ((tmp)){
			HX_STACK_LINE(393)
			return null();
		}
		HX_STACK_LINE(394)
		bool tmp1 = this->inited;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		if ((tmp2)){
			HX_STACK_LINE(394)
			return null();
		}
		HX_STACK_LINE(396)
		::luxe::Debug tmp3 = this->debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		::String tmp4 = ::luxe::Tag_obj::update;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		tmp3->end(tmp4);
		HX_STACK_LINE(397)
		::luxe::Debug tmp5 = this->debug;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(397)
		::String tmp6 = ::luxe::Tag_obj::update;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		tmp5->start(tmp6,null());
		HX_STACK_LINE(402)
		::luxe::Timer tmp7 = this->timer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(402)
		tmp7->process();
		HX_STACK_LINE(406)
		::luxe::Input tmp8 = this->input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(406)
		tmp8->process();
		HX_STACK_LINE(410)
		::luxe::Audio tmp9 = this->audio;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(410)
		tmp9->process();
		HX_STACK_LINE(414)
		::luxe::Events tmp10 = this->events;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(414)
		tmp10->process();
		HX_STACK_LINE(418)
		::luxe::Physics tmp11 = this->physics;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(418)
		tmp11->process();
		HX_STACK_LINE(421)
		::luxe::Debug tmp12 = this->debug;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(421)
		::String tmp13 = ::luxe::Tag_obj::updates;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(421)
		tmp12->start(tmp13,null());
		HX_STACK_LINE(422)
		::luxe::Emitter tmp14 = this->emitter;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(422)
		Float tmp15 = dt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(422)
		Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),422,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(422)
		tmp14->emit((int)6,tmp15,tmp16);
		HX_STACK_LINE(423)
		::luxe::Debug tmp17 = this->debug;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(423)
		::String tmp18 = ::luxe::Tag_obj::updates;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(423)
		tmp17->end(tmp18);
		HX_STACK_LINE(426)
		::luxe::Debug tmp19 = this->debug;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(426)
		::String tmp20 = ::luxe::Tag_obj::game_update;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(426)
		tmp19->start(tmp20,null());
		HX_STACK_LINE(427)
		::luxe::Game tmp21 = this->game;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(427)
		Float tmp22 = dt;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(427)
		tmp21->update(tmp22);
		HX_STACK_LINE(428)
		::luxe::Debug tmp23 = this->debug;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(428)
		::String tmp24 = ::luxe::Tag_obj::game_update;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(428)
		tmp23->end(tmp24);
		HX_STACK_LINE(432)
		::luxe::Debug tmp25 = this->debug;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(432)
		tmp25->process();
	}
return null();
}


Void Core_obj::window_event( Dynamic _event){
{
		HX_STACK_FRAME("luxe.Core","window_event",0x26e7e4e2,"luxe.Core.window_event","luxe/Core.hx",437,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_event,"_event")
		HX_STACK_LINE(439)
		bool tmp = this->shutting_down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(439)
		if ((tmp)){
			HX_STACK_LINE(439)
			return null();
		}
		HX_STACK_LINE(440)
		bool tmp1 = this->inited;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(440)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(440)
		if ((tmp2)){
			HX_STACK_LINE(440)
			return null();
		}
		HX_STACK_LINE(442)
		::luxe::Emitter tmp3 = this->emitter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		Dynamic tmp4 = _event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(442)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),442,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("window_event","\x4b","\x37","\x88","\x04"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		tmp3->emit((int)28,tmp4,tmp5);
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			Dynamic _g = _event->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(444)
			bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(444)
			if ((tmp6)){
				HX_STACK_LINE(444)
				Dynamic tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(444)
				switch( (int)(tmp7)){
					case (int)5: {
						HX_STACK_LINE(447)
						::luxe::Emitter tmp8 = this->emitter;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(447)
						Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(447)
						Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),447,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("window_event","\x4b","\x37","\x88","\x04"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(447)
						tmp8->emit((int)29,tmp9,tmp10);
						HX_STACK_LINE(448)
						::luxe::Game tmp11 = this->game;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(448)
						Dynamic tmp12 = _event;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(448)
						tmp11->onwindowmoved(tmp12);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(452)
						::luxe::Screen tmp8 = this->screen;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(452)
						tmp8->internal_resized(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(453)
						::phoenix::Renderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(453)
						tmp9->internal_resized(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(454)
						::luxe::Emitter tmp10 = this->emitter;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(454)
						Dynamic tmp11 = _event;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(454)
						Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),454,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("window_event","\x4b","\x37","\x88","\x04"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(454)
						tmp10->emit((int)30,tmp11,tmp12);
						HX_STACK_LINE(455)
						::luxe::Game tmp13 = this->game;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(455)
						Dynamic tmp14 = _event;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(455)
						tmp13->onwindowresized(tmp14);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(459)
						::luxe::Screen tmp8 = this->screen;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(459)
						tmp8->internal_resized(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(460)
						::phoenix::Renderer tmp9 = this->renderer;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(460)
						tmp9->internal_resized(_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),_event->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
						HX_STACK_LINE(461)
						::luxe::Emitter tmp10 = this->emitter;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(461)
						Dynamic tmp11 = _event;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(461)
						Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),461,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("window_event","\x4b","\x37","\x88","\x04"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(461)
						tmp10->emit((int)31,tmp11,tmp12);
						HX_STACK_LINE(462)
						::luxe::Game tmp13 = this->game;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(462)
						Dynamic tmp14 = _event;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(462)
						tmp13->onwindowsized(tmp14);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(466)
						::luxe::Emitter tmp8 = this->emitter;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(466)
						Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(466)
						Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),466,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("window_event","\x4b","\x37","\x88","\x04"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(466)
						tmp8->emit((int)32,tmp9,tmp10);
						HX_STACK_LINE(467)
						::luxe::Game tmp11 = this->game;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(467)
						Dynamic tmp12 = _event;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(467)
						tmp11->onwindowminimized(tmp12);
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(471)
						::luxe::Emitter tmp8 = this->emitter;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(471)
						Dynamic tmp9 = _event;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(471)
						Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),471,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("window_event","\x4b","\x37","\x88","\x04"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(471)
						tmp8->emit((int)33,tmp9,tmp10);
						HX_STACK_LINE(472)
						::luxe::Game tmp11 = this->game;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(472)
						Dynamic tmp12 = _event;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(472)
						tmp11->onwindowrestored(tmp12);
					}
					;break;
					default: {
					}
				}
			}
			else{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,window_event,(void))

Void Core_obj::render( ::snow::_system::window::Window window){
{
		HX_STACK_FRAME("luxe.Core","render",0xced43dad,"luxe.Core.render","luxe/Core.hx",481,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(483)
		bool tmp = this->shutting_down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(483)
		if ((tmp)){
			HX_STACK_LINE(483)
			return null();
		}
		HX_STACK_LINE(484)
		bool tmp1 = this->inited;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(484)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(484)
		if ((tmp2)){
			HX_STACK_LINE(484)
			return null();
		}
		HX_STACK_LINE(486)
		::luxe::Debug tmp3 = this->debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(486)
		::String tmp4 = ::luxe::Tag_obj::renderdt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(486)
		tmp3->end(tmp4);
		HX_STACK_LINE(487)
		::luxe::Debug tmp5 = this->debug;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(487)
		::String tmp6 = ::luxe::Tag_obj::renderdt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(487)
		tmp5->start(tmp6,null());
		HX_STACK_LINE(489)
		bool tmp7 = this->headless;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(489)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(489)
		if ((tmp8)){
			HX_STACK_LINE(491)
			::luxe::Debug tmp9 = this->debug;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(491)
			::String tmp10 = ::luxe::Tag_obj::render;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(491)
			tmp9->start(tmp10,null());
			HX_STACK_LINE(493)
			::luxe::Emitter tmp11 = this->emitter;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(493)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),493,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(493)
			tmp11->emit((int)9,null(),tmp12);
			HX_STACK_LINE(494)
			::luxe::Game tmp13 = this->game;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(494)
			tmp13->onprerender();
			HX_STACK_LINE(496)
			::luxe::Emitter tmp14 = this->emitter;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(496)
			Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),496,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(496)
			tmp14->emit((int)10,null(),tmp15);
			HX_STACK_LINE(497)
			::luxe::Game tmp16 = this->game;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(497)
			tmp16->onrender();
			HX_STACK_LINE(498)
			::phoenix::Renderer tmp17 = this->renderer;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(498)
			tmp17->process();
			HX_STACK_LINE(500)
			::luxe::Emitter tmp18 = this->emitter;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(500)
			Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),500,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(500)
			tmp18->emit((int)11,null(),tmp19);
			HX_STACK_LINE(501)
			::luxe::Game tmp20 = this->game;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(501)
			tmp20->onpostrender();
			HX_STACK_LINE(503)
			::luxe::Debug tmp21 = this->debug;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(503)
			::String tmp22 = ::luxe::Tag_obj::render;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(503)
			tmp21->end(tmp22);
			HX_STACK_LINE(507)
			::luxe::Debug tmp23 = this->debug;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(507)
			::phoenix::Batcher _batch = tmp23->batcher;		HX_STACK_VAR(_batch,"_batch");
			HX_STACK_LINE(509)
			bool tmp24 = _batch->enabled;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(509)
			if ((tmp24)){
				HX_STACK_LINE(511)
				::luxe::Debug tmp25 = this->debug;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(511)
				::String tmp26 = ::luxe::Tag_obj::debug_batch;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(511)
				tmp25->start(tmp26,null());
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					_batch->draw_calls = (int)0;
					HX_STACK_LINE(513)
					_batch->vert_count = (int)0;
					HX_STACK_LINE(513)
					::phoenix::Batcher tmp27 = _batch;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(513)
					Dynamic tmp28 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),357,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(513)
					_batch->emitter->emit((int)1,tmp27,tmp28);
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						_batch->view->process();
						HX_STACK_LINE(513)
						::phoenix::RenderState tmp29 = _batch->renderer->state;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(513)
						::phoenix::Rectangle tmp30 = _batch->view->get_viewport();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(513)
						Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(513)
						::phoenix::Rectangle tmp32 = _batch->view->get_viewport();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(513)
						Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(513)
						::phoenix::Rectangle tmp34 = _batch->view->get_viewport();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(513)
						Float tmp35 = tmp34->w;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(513)
						::phoenix::Rectangle tmp36 = _batch->view->get_viewport();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(513)
						Float tmp37 = tmp36->h;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(513)
						tmp29->viewport(tmp31,tmp33,tmp35,tmp37);
					}
					HX_STACK_LINE(513)
					_batch->batch(false);
					HX_STACK_LINE(513)
					::phoenix::Batcher tmp29 = _batch;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(513)
					Dynamic tmp30 = hx::SourceInfo(HX_HCSTRING("Batcher.hx","\x97","\x06","\x68","\x88"),363,HX_HCSTRING("phoenix.Batcher","\xa8","\xb2","\x34","\x67"),HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(513)
					_batch->emitter->emit((int)2,tmp29,tmp30);
				}
				HX_STACK_LINE(515)
				int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(515)
				{
					HX_STACK_LINE(515)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry tmp28 = _batch->geometry->root;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(515)
					::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry _node = tmp28;		HX_STACK_VAR(_node,"_node");
					HX_STACK_LINE(515)
					bool tmp29 = (_node == null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(515)
					if ((tmp29)){
						HX_STACK_LINE(515)
						tmp27 = (int)0;
					}
					else{
						HX_STACK_LINE(515)
						tmp27 = _node->nodecount;
					}
				}
				HX_STACK_LINE(515)
				::phoenix::Renderer tmp28 = this->renderer;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(515)
				hx::AddEq(tmp28->stats->geometry_count,tmp27);
				HX_STACK_LINE(516)
				::phoenix::Renderer tmp29 = this->renderer;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(516)
				hx::AddEq(tmp29->stats->dynamic_batched_count,_batch->dynamic_batched_count);
				HX_STACK_LINE(517)
				::phoenix::Renderer tmp30 = this->renderer;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(517)
				hx::AddEq(tmp30->stats->static_batched_count,_batch->static_batched_count);
				HX_STACK_LINE(518)
				::phoenix::Renderer tmp31 = this->renderer;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(518)
				hx::AddEq(tmp31->stats->visible_count,_batch->visible_count);
				HX_STACK_LINE(519)
				::phoenix::Renderer tmp32 = this->renderer;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(519)
				hx::AddEq(tmp32->stats->draw_calls,_batch->draw_calls);
				HX_STACK_LINE(520)
				::phoenix::Renderer tmp33 = this->renderer;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(520)
				hx::AddEq(tmp33->stats->vert_count,_batch->vert_count);
				HX_STACK_LINE(522)
				::luxe::Debug tmp34 = this->debug;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(522)
				::String tmp35 = ::luxe::Tag_obj::debug_batch;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(522)
				tmp34->end(tmp35);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,render,(void))

Void Core_obj::show_console( hx::Null< bool >  __o__show){
bool _show = __o__show.Default(true);
	HX_STACK_FRAME("luxe.Core","show_console",0xc6c98c6c,"luxe.Core.show_console","luxe/Core.hx",532,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_show,"_show")
{
		HX_STACK_LINE(534)
		this->console_visible = _show;
		HX_STACK_LINE(535)
		::luxe::Debug tmp = this->debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(535)
		bool tmp1 = this->console_visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(535)
		tmp->show_console(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,show_console,(void))

Void Core_obj::onkeydown( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onkeydown",0xe0adcc4b,"luxe.Core.onkeydown","luxe/Core.hx",541,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(543)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(543)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(543)
		if ((tmp1)){
			HX_STACK_LINE(543)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,bool &repeat,int &window_id,Dynamic &mod,int &scancode,int &keycode){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",545,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26") , scancode,false);
					__result->Add(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0") , keycode,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_HCSTRING("mod","\xc2","\x16","\x53","\x00") , mod,false);
					__result->Add(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06") , repeat,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , window_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(545)
		Dynamic tmp2 = _Function_1_1::Block(timestamp,repeat,window_id,mod,scancode,keycode);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(545)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(555)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(555)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(555)
		if ((tmp4)){
			HX_STACK_LINE(558)
			::luxe::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(558)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(558)
			tmp5->check_named_keys(tmp6,true);
			HX_STACK_LINE(559)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(559)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(559)
			Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),559,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(559)
			tmp7->emit((int)12,tmp8,tmp9);
			HX_STACK_LINE(561)
			::luxe::Game tmp10 = this->game;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(561)
			Dynamic tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(561)
			tmp10->onkeydown(tmp11);
			HX_STACK_LINE(563)
			int tmp12 = scancode;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(563)
			int tmp13 = ::snow::_system::input::Scancodes_obj::grave;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(563)
			bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(563)
			if ((tmp14)){
				HX_STACK_LINE(564)
				bool tmp15 = this->console_visible;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(564)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(564)
				this->show_console(tmp16);
			}
		}
	}
return null();
}


Void Core_obj::onkeyup( int keycode,int scancode,bool repeat,Dynamic mod,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onkeyup",0x8ddc3e04,"luxe.Core.onkeyup","luxe/Core.hx",571,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keycode,"keycode")
		HX_STACK_ARG(scancode,"scancode")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(mod,"mod")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(573)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(573)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(573)
		if ((tmp1)){
			HX_STACK_LINE(573)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,bool &repeat,int &window_id,Dynamic &mod,int &scancode,int &keycode){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",575,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("scancode","\x2a","\xb1","\xec","\x26") , scancode,false);
					__result->Add(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0") , keycode,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_HCSTRING("mod","\xc2","\x16","\x53","\x00") , mod,false);
					__result->Add(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06") , repeat,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , window_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(575)
		Dynamic tmp2 = _Function_1_1::Block(timestamp,repeat,window_id,mod,scancode,keycode);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(575)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(585)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(585)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(585)
		if ((tmp4)){
			HX_STACK_LINE(588)
			::luxe::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(588)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(588)
			tmp5->check_named_keys(tmp6,null());
			HX_STACK_LINE(589)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(589)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(589)
			Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),589,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(589)
			tmp7->emit((int)13,tmp8,tmp9);
			HX_STACK_LINE(591)
			::luxe::Game tmp10 = this->game;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(591)
			Dynamic tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(591)
			tmp10->onkeyup(tmp11);
		}
	}
return null();
}


Void Core_obj::ontextinput( ::String text,int start,int length,int type,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","ontextinput",0xed363987,"luxe.Core.ontextinput","luxe/Core.hx",597,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(599)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(599)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(599)
		if ((tmp1)){
			HX_STACK_LINE(599)
			return null();
		}
		HX_STACK_LINE(601)
		::luxe::TextEventType _type = ::luxe::TextEventType_obj::unknown;		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(603)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(604)
				_type = ::luxe::TextEventType_obj::edit;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(605)
				_type = ::luxe::TextEventType_obj::input;
			}
			;break;
			default: {
				HX_STACK_LINE(607)
				return null();
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( int &length,::luxe::TextEventType &_type,Float &timestamp,int &window_id,::String &text,int &start){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",611,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , text,false);
					__result->Add(HX_HCSTRING("start","\x62","\x74","\x0b","\x84") , start,false);
					__result->Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f") , length,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , _type,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , window_id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(611)
		Dynamic tmp3 = _Function_1_1::Block(length,_type,timestamp,window_id,text,start);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(611)
		Dynamic event = tmp3;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(620)
		bool tmp4 = this->shutting_down;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(620)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(620)
		if ((tmp5)){
			HX_STACK_LINE(622)
			::luxe::Emitter tmp6 = this->emitter;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(622)
			Dynamic tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(622)
			Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),622,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(622)
			tmp6->emit((int)14,tmp7,tmp8);
			HX_STACK_LINE(624)
			::luxe::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(624)
			Dynamic tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(624)
			tmp9->ontextinput(tmp10);
		}
	}
return null();
}


Void Core_obj::oninputdown( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Core","oninputdown",0x4817deb6,"luxe.Core.oninputdown","luxe/Core.hx",632,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(634)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(634)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(634)
		if ((tmp1)){
			HX_STACK_LINE(634)
			return null();
		}
		HX_STACK_LINE(636)
		bool tmp2 = this->shutting_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(636)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(636)
		if ((tmp3)){
			HX_STACK_LINE(638)
			::luxe::Emitter tmp4 = this->emitter;		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &event,::String &name){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",638,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , name,false);
						__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(638)
			Dynamic tmp5 = _Function_2_1::Block(event,name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(638)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),638,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("oninputdown","\x6d","\x8c","\x2f","\x9f"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(638)
			tmp4->emit((int)15,tmp5,tmp6);
			HX_STACK_LINE(640)
			::luxe::Game tmp7 = this->game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(640)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(640)
			Dynamic tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(640)
			tmp7->oninputdown(tmp8,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,oninputdown,(void))

Void Core_obj::oninputup( ::String name,Dynamic event){
{
		HX_STACK_FRAME("luxe.Core","oninputup",0x035e4faf,"luxe.Core.oninputup","luxe/Core.hx",646,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(648)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(648)
		if ((tmp1)){
			HX_STACK_LINE(648)
			return null();
		}
		HX_STACK_LINE(650)
		bool tmp2 = this->shutting_down;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(650)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(650)
		if ((tmp3)){
			HX_STACK_LINE(652)
			::luxe::Emitter tmp4 = this->emitter;		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &event,::String &name){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",652,0xa921e806)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , name,false);
						__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(652)
			Dynamic tmp5 = _Function_2_1::Block(event,name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(652)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),652,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("oninputup","\xa6","\x51","\x78","\xde"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(652)
			tmp4->emit((int)16,tmp5,tmp6);
			HX_STACK_LINE(654)
			::luxe::Game tmp7 = this->game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(654)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(654)
			Dynamic tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(654)
			tmp7->oninputup(tmp8,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Core_obj,oninputup,(void))

Void Core_obj::onmousedown( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmousedown",0x2d41da51,"luxe.Core.onmousedown","luxe/Core.hx",662,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(664)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		if ((tmp1)){
			HX_STACK_LINE(664)
			return null();
		}
		HX_STACK_LINE(668)
		::luxe::Screen tmp2 = this->screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(668)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(668)
		tmp2->cursor->set_internal(tmp3);
		HX_STACK_LINE(671)
		Float tmp4 = timestamp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(672)
		int tmp5 = window_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(674)
		int tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(675)
		int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(676)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(677)
		int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(678)
		int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(679)
		::luxe::Screen tmp11 = this->screen;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(679)
		::phoenix::Vector tmp12 = tmp11->cursor->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp5,int &tmp6,int &tmp9,Float &tmp4,int &tmp10,int &tmp7,int &tmp8,::phoenix::Vector &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",670,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp4,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , tmp5,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , tmp6,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f") , tmp9,false);
					__result->Add(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50") , tmp10,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp12,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(670)
		Dynamic tmp13 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp10,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(670)
		Dynamic event = tmp13;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(682)
		bool tmp14 = this->shutting_down;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(682)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(682)
		if ((tmp15)){
			HX_STACK_LINE(684)
			::luxe::Input tmp16 = this->input;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(684)
			Dynamic tmp17 = event;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(684)
			tmp16->check_named_mouse(tmp17,true);
			HX_STACK_LINE(685)
			::luxe::Emitter tmp18 = this->emitter;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(685)
			Dynamic tmp19 = event;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(685)
			Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),685,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(685)
			tmp18->emit((int)17,tmp19,tmp20);
			HX_STACK_LINE(686)
			::luxe::Game tmp21 = this->game;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(686)
			Dynamic tmp22 = event;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(686)
			tmp21->onmousedown(tmp22);
		}
	}
return null();
}


Void Core_obj::onmouseup( int x,int y,int button,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmouseup",0xefb29e8a,"luxe.Core.onmouseup","luxe/Core.hx",692,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(694)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(694)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(694)
		if ((tmp1)){
			HX_STACK_LINE(694)
			return null();
		}
		HX_STACK_LINE(697)
		::luxe::Screen tmp2 = this->screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(697)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(697)
		tmp2->cursor->set_internal(tmp3);
		HX_STACK_LINE(700)
		Float tmp4 = timestamp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(701)
		int tmp5 = window_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(703)
		int tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(704)
		int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(705)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(706)
		int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(707)
		int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(708)
		::luxe::Screen tmp11 = this->screen;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(708)
		::phoenix::Vector tmp12 = tmp11->cursor->get_pos();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp5,int &tmp6,int &tmp9,Float &tmp4,int &tmp10,int &tmp7,int &tmp8,::phoenix::Vector &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",699,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp4,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , tmp5,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , tmp6,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f") , tmp9,false);
					__result->Add(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50") , tmp10,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp12,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(699)
		Dynamic tmp13 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp10,tmp7,tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(699)
		Dynamic event = tmp13;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(711)
		bool tmp14 = this->shutting_down;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(711)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(711)
		if ((tmp15)){
			HX_STACK_LINE(713)
			::luxe::Input tmp16 = this->input;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(713)
			Dynamic tmp17 = event;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(713)
			tmp16->check_named_mouse(tmp17,null());
			HX_STACK_LINE(714)
			::luxe::Emitter tmp18 = this->emitter;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(714)
			Dynamic tmp19 = event;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(714)
			Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),714,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(714)
			tmp18->emit((int)18,tmp19,tmp20);
			HX_STACK_LINE(715)
			::luxe::Game tmp21 = this->game;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(715)
			Dynamic tmp22 = event;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(715)
			tmp21->onmouseup(tmp22);
		}
	}
return null();
}


Void Core_obj::onmousemove( int x,int y,int xrel,int yrel,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmousemove",0x3334c500,"luxe.Core.onmousemove","luxe/Core.hx",721,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(xrel,"xrel")
		HX_STACK_ARG(yrel,"yrel")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(723)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(723)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(723)
		if ((tmp1)){
			HX_STACK_LINE(723)
			return null();
		}
		HX_STACK_LINE(726)
		::luxe::Screen tmp2 = this->screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(726)
		::phoenix::Vector tmp3 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(726)
		tmp2->cursor->set_internal(tmp3);
		HX_STACK_LINE(729)
		Float tmp4 = timestamp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(730)
		int tmp5 = window_id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(733)
		int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(734)
		int tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(735)
		int tmp8 = xrel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(736)
		int tmp9 = yrel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(737)
		::luxe::Screen tmp10 = this->screen;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(737)
		::phoenix::Vector tmp11 = tmp10->cursor->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp5,int &tmp6,int &tmp9,::phoenix::Vector &tmp11,Float &tmp4,int &tmp7,int &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",728,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp4,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , tmp5,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::move,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , (int)0,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f") , tmp8,false);
					__result->Add(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50") , tmp9,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp11,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(728)
		Dynamic tmp12 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp11,tmp4,tmp7,tmp8);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(728)
		Dynamic event = tmp12;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(740)
		bool tmp13 = this->shutting_down;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(740)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(740)
		if ((tmp14)){
			HX_STACK_LINE(742)
			::luxe::Emitter tmp15 = this->emitter;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(742)
			Dynamic tmp16 = event;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(742)
			Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),742,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(742)
			tmp15->emit((int)19,tmp16,tmp17);
			HX_STACK_LINE(743)
			::luxe::Game tmp18 = this->game;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(743)
			Dynamic tmp19 = event;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(743)
			tmp18->onmousemove(tmp19);
		}
	}
return null();
}


Void Core_obj::onmousewheel( int x,int y,Float timestamp,int window_id){
{
		HX_STACK_FRAME("luxe.Core","onmousewheel",0x584c03cc,"luxe.Core.onmousewheel","luxe/Core.hx",749,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_ARG(window_id,"window_id")
		HX_STACK_LINE(751)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(751)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(751)
		if ((tmp1)){
			HX_STACK_LINE(751)
			return null();
		}
		HX_STACK_LINE(754)
		Float tmp2 = timestamp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		int tmp3 = window_id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(758)
		int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(759)
		int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(760)
		int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(761)
		int tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(762)
		::luxe::Screen tmp8 = this->screen;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(762)
		::phoenix::Vector tmp9 = tmp8->cursor->get_pos();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp5,int &tmp6,::phoenix::Vector &tmp9,int &tmp4,Float &tmp2,int &tmp3,int &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",753,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp2,false);
					__result->Add(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96") , tmp3,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::wheel,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , (int)0,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("xrel","\xe1","\x73","\xa8","\x4f") , tmp6,false);
					__result->Add(HX_HCSTRING("yrel","\x80","\xaa","\x51","\x50") , tmp7,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(753)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp2,tmp3,tmp7);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(753)
		Dynamic event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(765)
		bool tmp11 = this->shutting_down;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(765)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(765)
		if ((tmp12)){
			HX_STACK_LINE(767)
			::luxe::Input tmp13 = this->input;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(767)
			Dynamic tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(767)
			tmp13->check_named_mouse(tmp14,false);
			HX_STACK_LINE(768)
			::luxe::Emitter tmp15 = this->emitter;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(768)
			Dynamic tmp16 = event;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(768)
			Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),768,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(768)
			tmp15->emit((int)20,tmp16,tmp17);
			HX_STACK_LINE(769)
			::luxe::Game tmp18 = this->game;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(769)
			Dynamic tmp19 = event;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(769)
			tmp18->onmousewheel(tmp19);
		}
	}
return null();
}


Void Core_obj::ontouchdown( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ontouchdown",0x4659b0eb,"luxe.Core.ontouchdown","luxe/Core.hx",779,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(781)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(781)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(781)
		if ((tmp1)){
			HX_STACK_LINE(781)
			return null();
		}
		HX_STACK_LINE(783)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(783)
		this->_touch_pos = tmp2;
		HX_STACK_LINE(787)
		Float tmp3 = timestamp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(788)
		int tmp4 = touch_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(789)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(790)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(791)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(792)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(793)
		::phoenix::Vector tmp9 = this->_touch_pos;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp5,Float &tmp6,::phoenix::Vector &tmp9,int &tmp4,Float &tmp3,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",785,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp3,false);
					__result->Add(HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("dx","\x94","\x57","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("dy","\x95","\x57","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(785)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp3,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(785)
		Dynamic event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(796)
		bool tmp11 = this->shutting_down;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(796)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(796)
		if ((tmp12)){
			HX_STACK_LINE(798)
			::luxe::Emitter tmp13 = this->emitter;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(798)
			Dynamic tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(798)
			Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),798,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(798)
			tmp13->emit((int)21,tmp14,tmp15);
			HX_STACK_LINE(800)
			::luxe::Game tmp16 = this->game;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(800)
			Dynamic tmp17 = event;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(800)
			tmp16->ontouchdown(tmp17);
		}
	}
return null();
}


Void Core_obj::ontouchup( Float x,Float y,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ontouchup",0x0837baa4,"luxe.Core.ontouchup","luxe/Core.hx",822,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(824)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(824)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(824)
		if ((tmp1)){
			HX_STACK_LINE(824)
			return null();
		}
		HX_STACK_LINE(826)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(826)
		this->_touch_pos = tmp2;
		HX_STACK_LINE(830)
		Float tmp3 = timestamp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(831)
		int tmp4 = touch_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(832)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(833)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(834)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(835)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(836)
		::phoenix::Vector tmp9 = this->_touch_pos;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp5,Float &tmp6,::phoenix::Vector &tmp9,int &tmp4,Float &tmp3,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",828,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp3,false);
					__result->Add(HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("dx","\x94","\x57","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("dy","\x95","\x57","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(828)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp3,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(828)
		Dynamic event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(839)
		bool tmp11 = this->shutting_down;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(839)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(839)
		if ((tmp12)){
			HX_STACK_LINE(841)
			::luxe::Emitter tmp13 = this->emitter;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(841)
			Dynamic tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(841)
			Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),841,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(841)
			tmp13->emit((int)22,tmp14,tmp15);
			HX_STACK_LINE(842)
			::luxe::Game tmp16 = this->game;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(842)
			Dynamic tmp17 = event;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(842)
			tmp16->ontouchup(tmp17);
		}
	}
return null();
}


Void Core_obj::ontouchmove( Float x,Float y,Float dx,Float dy,int touch_id,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ontouchmove",0x4c4c9b9a,"luxe.Core.ontouchmove","luxe/Core.hx",848,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(touch_id,"touch_id")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(850)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(850)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(850)
		if ((tmp1)){
			HX_STACK_LINE(850)
			return null();
		}
		HX_STACK_LINE(852)
		::phoenix::Vector tmp2 = ::phoenix::Vector_obj::__new(x,y,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(852)
		this->_touch_pos = tmp2;
		HX_STACK_LINE(856)
		Float tmp3 = timestamp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(857)
		int tmp4 = touch_id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(858)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(859)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(860)
		Float tmp7 = dx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(861)
		Float tmp8 = dy;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(862)
		::phoenix::Vector tmp9 = this->_touch_pos;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp5,Float &tmp6,::phoenix::Vector &tmp9,int &tmp4,Float &tmp3,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",854,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::move,false);
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , tmp3,false);
					__result->Add(HX_HCSTRING("touch_id","\x9b","\x7b","\x1d","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp5,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp6,false);
					__result->Add(HX_HCSTRING("dx","\x94","\x57","\x00","\x00") , tmp7,false);
					__result->Add(HX_HCSTRING("dy","\x95","\x57","\x00","\x00") , tmp8,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp9,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(854)
		Dynamic tmp10 = _Function_1_1::Block(tmp5,tmp6,tmp9,tmp4,tmp3,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(854)
		Dynamic event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(865)
		bool tmp11 = this->shutting_down;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(865)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(865)
		if ((tmp12)){
			HX_STACK_LINE(867)
			::luxe::Emitter tmp13 = this->emitter;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(867)
			Dynamic tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(867)
			Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),867,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(867)
			tmp13->emit((int)23,tmp14,tmp15);
			HX_STACK_LINE(868)
			::luxe::Game tmp16 = this->game;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(868)
			Dynamic tmp17 = event;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(868)
			tmp16->ontouchmove(tmp17);
		}
	}
return null();
}


Void Core_obj::ongamepadaxis( int gamepad,int axis,Float value,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepadaxis",0x56021d8c,"luxe.Core.ongamepadaxis","luxe/Core.hx",876,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(878)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(878)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(878)
		if ((tmp1)){
			HX_STACK_LINE(878)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( int &axis,Float &timestamp,Float &value,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",880,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::GamepadEventType_obj::axis,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::axis,false);
					__result->Add(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89") , gamepad,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , (int)-1,false);
					__result->Add(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40") , axis,false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(880)
		Dynamic tmp2 = _Function_1_1::Block(axis,timestamp,value,gamepad);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(880)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(891)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(891)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(891)
		if ((tmp4)){
			HX_STACK_LINE(893)
			::luxe::Emitter tmp5 = this->emitter;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(893)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(893)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),893,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(893)
			tmp5->emit((int)24,tmp6,tmp7);
			HX_STACK_LINE(894)
			::luxe::Game tmp8 = this->game;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(894)
			Dynamic tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(894)
			tmp8->ongamepadaxis(tmp9);
		}
	}
return null();
}


Void Core_obj::ongamepaddown( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepaddown",0x57f6f94d,"luxe.Core.ongamepaddown","luxe/Core.hx",900,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(902)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(902)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(902)
		if ((tmp1)){
			HX_STACK_LINE(902)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,int &button,Float &value,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",904,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::GamepadEventType_obj::button,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::down,false);
					__result->Add(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89") , gamepad,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , button,false);
					__result->Add(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40") , (int)-1,false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(904)
		Dynamic tmp2 = _Function_1_1::Block(timestamp,button,value,gamepad);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(904)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(915)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(915)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(915)
		if ((tmp4)){
			HX_STACK_LINE(917)
			::luxe::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(917)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(917)
			tmp5->check_named_gamepad_buttons(tmp6,true);
			HX_STACK_LINE(918)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(918)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(918)
			Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),918,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(918)
			tmp7->emit((int)25,tmp8,tmp9);
			HX_STACK_LINE(919)
			::luxe::Game tmp10 = this->game;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(919)
			Dynamic tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(919)
			tmp10->ongamepaddown(tmp11);
		}
	}
return null();
}


Void Core_obj::ongamepadup( int gamepad,int button,Float value,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepadup",0x8890c686,"luxe.Core.ongamepadup","luxe/Core.hx",925,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(927)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(927)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(927)
		if ((tmp1)){
			HX_STACK_LINE(927)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,int &button,Float &value,int &gamepad){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",929,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::luxe::GamepadEventType_obj::button,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::up,false);
					__result->Add(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89") , gamepad,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , button,false);
					__result->Add(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40") , (int)-1,false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(929)
		Dynamic tmp2 = _Function_1_1::Block(timestamp,button,value,gamepad);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(929)
		Dynamic event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(940)
		bool tmp3 = this->shutting_down;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(940)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(940)
		if ((tmp4)){
			HX_STACK_LINE(942)
			::luxe::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(942)
			Dynamic tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(942)
			tmp5->check_named_gamepad_buttons(tmp6,false);
			HX_STACK_LINE(943)
			::luxe::Emitter tmp7 = this->emitter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(943)
			Dynamic tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(943)
			Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Core.hx","\x9f","\x12","\x4f","\x2a"),943,HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab"),HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(943)
			tmp7->emit((int)26,tmp8,tmp9);
			HX_STACK_LINE(944)
			::luxe::Game tmp10 = this->game;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(944)
			Dynamic tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(944)
			tmp10->ongamepadup(tmp11);
		}
	}
return null();
}


Void Core_obj::ongamepaddevice( int gamepad,::String id,int type,Float timestamp){
{
		HX_STACK_FRAME("luxe.Core","ongamepaddevice",0xbbf32e41,"luxe.Core.ongamepaddevice","luxe/Core.hx",950,0xa921e806)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(952)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(952)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(952)
		if ((tmp1)){
			HX_STACK_LINE(952)
			return null();
		}
		HX_STACK_LINE(954)
		::luxe::GamepadEventType _event_type = ::luxe::GamepadEventType_obj::unknown;		HX_STACK_VAR(_event_type,"_event_type");
		HX_STACK_LINE(956)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(956)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(958)
				_event_type = ::luxe::GamepadEventType_obj::device_added;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(960)
				_event_type = ::luxe::GamepadEventType_obj::device_removed;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(962)
				_event_type = ::luxe::GamepadEventType_obj::device_remapped;
			}
			;break;
			default: {
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &timestamp,::luxe::GamepadEventType &_event_type,int &gamepad,::String &id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",966,0xa921e806)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5") , timestamp,false);
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , _event_type,false);
					__result->Add(HX_HCSTRING("state","\x11","\x76","\x0b","\x84") , ::luxe::InteractState_obj::none,false);
					__result->Add(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89") , gamepad,false);
					__result->Add(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9") , (int)-1,false);
					__result->Add(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40") , (int)-1,false);
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , ((Float)((int)0)),false);
					__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , id,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(966)
		Dynamic tmp3 = _Function_1_1::Block(timestamp,_event_type,gamepad,id);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(966)
		Dynamic event = tmp3;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(977)
		bool tmp4 = this->shutting_down;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(977)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(977)
		if ((tmp5)){
			HX_STACK_LINE(979)
			::luxe::Game tmp6 = this->game;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(979)
			Dynamic tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(979)
			tmp6->ongamepaddevice(tmp7);
		}
	}
return null();
}


Dynamic Core_obj::config( Dynamic config){
	HX_STACK_FRAME("luxe.Core","config",0x917d2919,"luxe.Core.config","luxe/Core.hx",986,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(989)
	this->appconfig = config;
	HX_STACK_LINE(992)
	Dynamic tmp = this->init_config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(992)
	Dynamic tmp1 = tmp->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(992)
	Dynamic tmp2 = this->appconfig;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(992)
	tmp2->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp1;
	HX_STACK_LINE(993)
	Dynamic tmp3 = this->init_config;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(993)
	Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(993)
	Dynamic tmp5 = this->appconfig;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(993)
	tmp5->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp4;
	HX_STACK_LINE(994)
	Dynamic tmp6 = this->init_config;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(994)
	Dynamic tmp7 = tmp6->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(994)
	Dynamic tmp8 = this->appconfig;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(994)
	tmp8->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")) = tmp7;
	HX_STACK_LINE(995)
	Dynamic tmp9 = this->init_config;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(995)
	Dynamic tmp10 = tmp9->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(995)
	Dynamic tmp11 = this->appconfig;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(995)
	tmp11->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17")) = tmp10;
	HX_STACK_LINE(996)
	Dynamic tmp12 = this->init_config;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(996)
	Dynamic tmp13 = tmp12->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(996)
	Dynamic tmp14 = this->appconfig;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(996)
	tmp14->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9")) = tmp13;
	HX_STACK_LINE(997)
	Dynamic tmp15 = this->init_config;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(997)
	::String tmp16 = tmp15->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(997)
	Dynamic tmp17 = this->appconfig;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(997)
	tmp17->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = tmp16;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/Core.hx",999,0xa921e806)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("texts","\x26","\x4b","\x99","\x0d") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("jsons","\x4b","\xa1","\xd1","\x54") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("textures","\x38","\xf7","\xce","\x65") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f") , cpp::ArrayBase_obj::__new(),false);
				__result->Add(HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32") , cpp::ArrayBase_obj::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(999)
	Dynamic tmp18 = _Function_1_1::Block();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(999)
	Dynamic tmp19 = this->appconfig;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(999)
	tmp19->__FieldRef(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35")) = tmp18;
	HX_STACK_LINE(1010)
	::luxe::Game tmp20 = this->game;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1010)
	Dynamic tmp21 = this->appconfig;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1010)
	Dynamic tmp22 = tmp20->config(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1010)
	this->appconfig = tmp22;
	HX_STACK_LINE(1013)
	Dynamic tmp23 = this->appconfig;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1013)
	Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1013)
	return tmp24;
}


::String Core_obj::runtime_info( ){
	HX_STACK_FRAME("luxe.Core","runtime_info",0x09d4be0c,"luxe.Core.runtime_info","luxe/Core.hx",1018,0xa921e806)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1018)
	::String tmp = ::Luxe_obj::build;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1018)
	::String tmp1 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1018)
	::String tmp2 = (tmp1 + HX_HCSTRING(" / debug:","\x78","\xa2","\x67","\x75"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1018)
	::snow::Snow tmp3 = this->app;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1018)
	bool tmp4 = tmp3->debug;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1018)
	::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1018)
	::String tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1018)
	::String tmp7 = (tmp6 + HX_HCSTRING(" / os:","\x05","\x42","\xbc","\xf0"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1018)
	::snow::Snow tmp8 = this->app;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1018)
	::String tmp9 = tmp8->os;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1018)
	::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1018)
	::String tmp11 = (tmp10 + HX_HCSTRING(" / platform:","\xd6","\x0a","\x95","\x7c"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1018)
	::snow::Snow tmp12 = this->app;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1018)
	::String tmp13 = tmp12->platform;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1018)
	::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1018)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,runtime_info,return )


Core_obj::Core_obj()
{
}

void Core_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Core);
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(appconfig,"appconfig");
	HX_MARK_MEMBER_NAME(console_visible,"console_visible");
	HX_MARK_MEMBER_NAME(headless,"headless");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(debug,"debug");
	HX_MARK_MEMBER_NAME(io,"io");
	HX_MARK_MEMBER_NAME(draw,"draw");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(resources,"resources");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(physics,"physics");
	HX_MARK_MEMBER_NAME(shutting_down,"shutting_down");
	HX_MARK_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(init_config,"init_config");
	HX_MARK_MEMBER_NAME(_touch_pos,"_touch_pos");
	::snow::App_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Core_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(appconfig,"appconfig");
	HX_VISIT_MEMBER_NAME(console_visible,"console_visible");
	HX_VISIT_MEMBER_NAME(headless,"headless");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	HX_VISIT_MEMBER_NAME(io,"io");
	HX_VISIT_MEMBER_NAME(draw,"draw");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(resources,"resources");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(physics,"physics");
	HX_VISIT_MEMBER_NAME(shutting_down,"shutting_down");
	HX_VISIT_MEMBER_NAME(has_shutdown,"has_shutdown");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(init_config,"init_config");
	HX_VISIT_MEMBER_NAME(_touch_pos,"_touch_pos");
	::snow::App_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Core_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { return io; }
		if (HX_FIELD_EQ(inName,"on") ) { return on_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"off") ) { return off_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"physics") ) { return physics; }
		if (HX_FIELD_EQ(inName,"onevent") ) { return onevent_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"headless") ) { return headless; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"appconfig") ) { return appconfig; }
		if (HX_FIELD_EQ(inName,"resources") ) { return resources; }
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"ontickend") ) { return ontickend_dyn(); }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputup") ) { return oninputup_dyn(); }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchup") ) { return ontouchup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_touch_pos") ) { return _touch_pos; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"init_config") ) { return init_config; }
		if (HX_FIELD_EQ(inName,"ontickstart") ) { return ontickstart_dyn(); }
		if (HX_FIELD_EQ(inName,"ontextinput") ) { return ontextinput_dyn(); }
		if (HX_FIELD_EQ(inName,"oninputdown") ) { return oninputdown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchdown") ) { return ontouchdown_dyn(); }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepadup") ) { return ongamepadup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { return has_shutdown; }
		if (HX_FIELD_EQ(inName,"window_event") ) { return window_event_dyn(); }
		if (HX_FIELD_EQ(inName,"show_console") ) { return show_console_dyn(); }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel_dyn(); }
		if (HX_FIELD_EQ(inName,"runtime_info") ) { return runtime_info_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { return shutting_down; }
		if (HX_FIELD_EQ(inName,"ongamepadaxis") ) { return ongamepadaxis_dyn(); }
		if (HX_FIELD_EQ(inName,"ongamepaddown") ) { return ongamepaddown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"internal_ready") ) { return internal_ready_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"console_visible") ) { return console_visible; }
		if (HX_FIELD_EQ(inName,"ongamepaddevice") ) { return ongamepaddevice_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"internal_pre_ready") ) { return internal_pre_ready_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Core_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"io") ) { io=inValue.Cast< ::luxe::IO >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::luxe::Game >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draw") ) { draw=inValue.Cast< ::luxe::Draw >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::luxe::Debug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::luxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::luxe::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::luxe::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::luxe::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::luxe::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::luxe::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::luxe::Emitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physics") ) { physics=inValue.Cast< ::luxe::Physics >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"headless") ) { headless=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::phoenix::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"appconfig") ) { appconfig=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resources") ) { resources=inValue.Cast< ::luxe::Resources >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_touch_pos") ) { _touch_pos=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"init_config") ) { init_config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"has_shutdown") ) { has_shutdown=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shutting_down") ) { shutting_down=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"console_visible") ) { console_visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Core_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Core_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	outFields->push(HX_HCSTRING("appconfig","\x23","\x02","\xc1","\xec"));
	outFields->push(HX_HCSTRING("console_visible","\x4a","\x6c","\x20","\x9e"));
	outFields->push(HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48"));
	outFields->push(HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"));
	outFields->push(HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"));
	outFields->push(HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"));
	outFields->push(HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"));
	outFields->push(HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"));
	outFields->push(HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"));
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("init_config","\x51","\xaf","\x62","\x21"));
	outFields->push(HX_HCSTRING("_touch_pos","\x95","\x81","\x56","\x75"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Game*/ ,(int)offsetof(Core_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Core_obj,appconfig),HX_HCSTRING("appconfig","\x23","\x02","\xc1","\xec")},
	{hx::fsBool,(int)offsetof(Core_obj,console_visible),HX_HCSTRING("console_visible","\x4a","\x6c","\x20","\x9e")},
	{hx::fsBool,(int)offsetof(Core_obj,headless),HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48")},
	{hx::fsObject /*::luxe::Emitter*/ ,(int)offsetof(Core_obj,emitter),HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe")},
	{hx::fsObject /*::luxe::Debug*/ ,(int)offsetof(Core_obj,debug),HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{hx::fsObject /*::luxe::IO*/ ,(int)offsetof(Core_obj,io),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00")},
	{hx::fsObject /*::luxe::Draw*/ ,(int)offsetof(Core_obj,draw),HX_HCSTRING("draw","\x04","\x2c","\x70","\x42")},
	{hx::fsObject /*::luxe::Timer*/ ,(int)offsetof(Core_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*::luxe::Events*/ ,(int)offsetof(Core_obj,events),HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{hx::fsObject /*::luxe::Input*/ ,(int)offsetof(Core_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::luxe::Audio*/ ,(int)offsetof(Core_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsObject /*::luxe::Scene*/ ,(int)offsetof(Core_obj,scene),HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78")},
	{hx::fsObject /*::luxe::Resources*/ ,(int)offsetof(Core_obj,resources),HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39")},
	{hx::fsObject /*::phoenix::Renderer*/ ,(int)offsetof(Core_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::luxe::Screen*/ ,(int)offsetof(Core_obj,screen),HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsObject /*::luxe::Physics*/ ,(int)offsetof(Core_obj,physics),HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe")},
	{hx::fsBool,(int)offsetof(Core_obj,shutting_down),HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20")},
	{hx::fsBool,(int)offsetof(Core_obj,has_shutdown),HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e")},
	{hx::fsBool,(int)offsetof(Core_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Core_obj,init_config),HX_HCSTRING("init_config","\x51","\xaf","\x62","\x21")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Core_obj,_touch_pos),HX_HCSTRING("_touch_pos","\x95","\x81","\x56","\x75")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("appconfig","\x23","\x02","\xc1","\xec"),
	HX_HCSTRING("console_visible","\x4a","\x6c","\x20","\x9e"),
	HX_HCSTRING("headless","\x79","\x4c","\xd6","\x48"),
	HX_HCSTRING("emitter","\x6e","\x35","\xf6","\xbe"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"),
	HX_HCSTRING("resources","\xe5","\xd7","\xb0","\x39"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("physics","\xc7","\x38","\x51","\xbe"),
	HX_HCSTRING("shutting_down","\xdf","\xe7","\x30","\x20"),
	HX_HCSTRING("has_shutdown","\x5b","\xf9","\x20","\x9e"),
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("init_config","\x51","\xaf","\x62","\x21"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("ondestroy","\xbb","\xbd","\xdf","\x2e"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("internal_pre_ready","\x45","\xb5","\x6d","\x32"),
	HX_HCSTRING("internal_ready","\xa1","\xda","\xfc","\xd2"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("off","\x6f","\x93","\x54","\x00"),
	HX_HCSTRING("emit","\x53","\x9e","\x15","\x43"),
	HX_HCSTRING("ontickstart","\xe6","\x62","\x8c","\xec"),
	HX_HCSTRING("ontickend","\x5f","\x89","\x3e","\x25"),
	HX_HCSTRING("onevent","\x9b","\xf6","\xd4","\x78"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("window_event","\x4b","\x37","\x88","\x04"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("show_console","\xd5","\xde","\x69","\xa4"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("ontextinput","\x3e","\xe7","\x4d","\x44"),
	HX_HCSTRING("oninputdown","\x6d","\x8c","\x2f","\x9f"),
	HX_HCSTRING("oninputup","\xa6","\x51","\x78","\xde"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("_touch_pos","\x95","\x81","\x56","\x75"),
	HX_HCSTRING("ontouchdown","\xa2","\x5e","\x71","\x9d"),
	HX_HCSTRING("ontouchup","\x9b","\xbc","\x51","\xe3"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ongamepadaxis","\x03","\xe7","\xa9","\x64"),
	HX_HCSTRING("ongamepaddown","\xc4","\xc2","\x9e","\x66"),
	HX_HCSTRING("ongamepadup","\x3d","\x74","\xa8","\xdf"),
	HX_HCSTRING("ongamepaddevice","\x78","\x83","\x39","\x9b"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("runtime_info","\x75","\x10","\x75","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Core_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Core_obj::__mClass,"__mClass");
};

#endif

hx::Class Core_obj::__mClass;

void Core_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.Core","\x37","\x29","\x0e","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Core_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Core_obj >;
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
