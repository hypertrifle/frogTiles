#include <hxcpp.h>

#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALC
#include <snow/modules/openal/ALC.h>
#endif
namespace snow{
namespace modules{
namespace openal{

Void ALC_obj::__construct()
{
	return null();
}

//ALC_obj::~ALC_obj() { }

Dynamic ALC_obj::__CreateEmpty() { return  new ALC_obj; }
hx::ObjectPtr< ALC_obj > ALC_obj::__new()
{  hx::ObjectPtr< ALC_obj > _result_ = new ALC_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALC_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALC_obj > _result_ = new ALC_obj();
	_result_->__construct();
	return _result_;}

int ALC_obj::FALSE;

int ALC_obj::TRUE;

int ALC_obj::FREQUENCY;

int ALC_obj::REFRESH;

int ALC_obj::SYNC;

int ALC_obj::MONO_SOURCES;

int ALC_obj::STEREO_SOURCES;

int ALC_obj::NO_ERROR;

int ALC_obj::INVALID_DEVICE;

int ALC_obj::INVALID_CONTEXT;

int ALC_obj::INVALID_ENUM;

int ALC_obj::INVALID_VALUE;

int ALC_obj::OUT_OF_MEMORY;

int ALC_obj::ATTRIBUTES_SIZE;

int ALC_obj::ALL_ATTRIBUTES;

int ALC_obj::DEFAULT_DEVICE_SPECIFIER;

int ALC_obj::DEVICE_SPECIFIER;

int ALC_obj::EXTENSIONS;

int ALC_obj::ENUMERATE_ALL_EXT;

int ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER;

int ALC_obj::ALL_DEVICES_SPECIFIER;

Dynamic ALC_obj::createContext( Dynamic device,Array< int > attrlist){
	HX_STACK_FRAME("snow.modules.openal.ALC","createContext",0x820a9236,"snow.modules.openal.ALC.createContext","snow/modules/openal/AL.hx",575,0x6eda9f6d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(attrlist,"attrlist")
	HX_STACK_LINE(576)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(576)
	Dynamic tmp1 = ::snow::modules::openal::ALC_obj::alhx_alcCreateContext(tmp,attrlist);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(576)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,createContext,return )

bool ALC_obj::makeContextCurrent( Dynamic context){
	HX_STACK_FRAME("snow.modules.openal.ALC","makeContextCurrent",0x332251d5,"snow.modules.openal.ALC.makeContextCurrent","snow/modules/openal/AL.hx",579,0x6eda9f6d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(580)
	Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	bool tmp1 = ::snow::modules::openal::ALC_obj::alhx_alcMakeContextCurrent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(580)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,makeContextCurrent,return )

Void ALC_obj::processContext( Dynamic context){
{
		HX_STACK_FRAME("snow.modules.openal.ALC","processContext",0x91a519fd,"snow.modules.openal.ALC.processContext","snow/modules/openal/AL.hx",583,0x6eda9f6d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(584)
		Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		::snow::modules::openal::ALC_obj::alhx_alcProcessContext(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,processContext,(void))

Void ALC_obj::suspendContext( Dynamic context){
{
		HX_STACK_FRAME("snow.modules.openal.ALC","suspendContext",0xc48bf890,"snow.modules.openal.ALC.suspendContext","snow/modules/openal/AL.hx",587,0x6eda9f6d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(588)
		Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		::snow::modules::openal::ALC_obj::alhx_alcSuspendContext(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,suspendContext,(void))

Void ALC_obj::destroyContext( Dynamic context){
{
		HX_STACK_FRAME("snow.modules.openal.ALC","destroyContext",0x4bb2c6d2,"snow.modules.openal.ALC.destroyContext","snow/modules/openal/AL.hx",591,0x6eda9f6d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(592)
		Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(592)
		::snow::modules::openal::ALC_obj::alhx_alcDestroyContext(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,destroyContext,(void))

Dynamic ALC_obj::getCurrentContext( ){
	HX_STACK_FRAME("snow.modules.openal.ALC","getCurrentContext",0x3c130b4f,"snow.modules.openal.ALC.getCurrentContext","snow/modules/openal/AL.hx",595,0x6eda9f6d)
	HX_STACK_LINE(596)
	Dynamic tmp = ::snow::modules::openal::ALC_obj::alhx_alcGetCurrentContext();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(596)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ALC_obj,getCurrentContext,return )

Dynamic ALC_obj::getContextsDevice( Dynamic context){
	HX_STACK_FRAME("snow.modules.openal.ALC","getContextsDevice",0x3f253ff3,"snow.modules.openal.ALC.getContextsDevice","snow/modules/openal/AL.hx",599,0x6eda9f6d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(600)
	Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(600)
	Dynamic tmp1 = ::snow::modules::openal::ALC_obj::alhx_alcGetContextsDevice(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(600)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getContextsDevice,return )

Dynamic ALC_obj::openDevice( ::String devicename){
	HX_STACK_FRAME("snow.modules.openal.ALC","openDevice",0xa902283d,"snow.modules.openal.ALC.openDevice","snow/modules/openal/AL.hx",606,0x6eda9f6d)
	HX_STACK_ARG(devicename,"devicename")
	HX_STACK_LINE(607)
	::String tmp = devicename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(607)
	Dynamic tmp1 = ::snow::modules::openal::ALC_obj::alhx_alcOpenDevice(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(607)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,openDevice,return )

bool ALC_obj::closeDevice( Dynamic device){
	HX_STACK_FRAME("snow.modules.openal.ALC","closeDevice",0xf1fe5791,"snow.modules.openal.ALC.closeDevice","snow/modules/openal/AL.hx",610,0x6eda9f6d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(611)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	bool tmp1 = ::snow::modules::openal::ALC_obj::alhx_alcCloseDevice(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(611)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,closeDevice,return )

int ALC_obj::getError( Dynamic device){
	HX_STACK_FRAME("snow.modules.openal.ALC","getError",0x6cc9424f,"snow.modules.openal.ALC.getError","snow/modules/openal/AL.hx",614,0x6eda9f6d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(615)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(615)
	int tmp1 = ::snow::modules::openal::ALC_obj::alhx_alcGetError(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(615)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getError,return )

::String ALC_obj::getString( Dynamic device,int param){
	HX_STACK_FRAME("snow.modules.openal.ALC","getString",0x8318686a,"snow.modules.openal.ALC.getString","snow/modules/openal/AL.hx",618,0x6eda9f6d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(619)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(619)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(619)
	::String tmp2 = ::snow::modules::openal::ALC_obj::alhx_alcGetString(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(619)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,getString,return )

Array< int > ALC_obj::getIntegerv( Dynamic device,int param,int size){
	HX_STACK_FRAME("snow.modules.openal.ALC","getIntegerv",0x0d5460d1,"snow.modules.openal.ALC.getIntegerv","snow/modules/openal/AL.hx",622,0x6eda9f6d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(623)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(623)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(623)
	int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(623)
	return ::snow::modules::openal::ALC_obj::alhx_alcGetIntegerv(tmp,tmp1,tmp2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ALC_obj,getIntegerv,return )

::String ALC_obj::INVALID_DEVICE_MEANING;

::String ALC_obj::INVALID_CONTEXT_MEANING;

::String ALC_obj::INVALID_ENUM_MEANING;

::String ALC_obj::INVALID_VALUE_MEANING;

::String ALC_obj::OUT_OF_MEMORY_MEANING;

::String ALC_obj::getErrorMeaning( int error){
	HX_STACK_FRAME("snow.modules.openal.ALC","getErrorMeaning",0x5d38292e,"snow.modules.openal.ALC.getErrorMeaning","snow/modules/openal/AL.hx",634,0x6eda9f6d)
	HX_STACK_ARG(error,"error")
	HX_STACK_LINE(636)
	int tmp = error;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(636)
	int tmp1 = ::snow::modules::openal::ALC_obj::INVALID_DEVICE;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(636)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(636)
	if ((tmp2)){
		HX_STACK_LINE(636)
		::String tmp3 = ::snow::modules::openal::ALC_obj::INVALID_DEVICE_MEANING;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(636)
		return tmp3;
	}
	HX_STACK_LINE(637)
	int tmp3 = error;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(637)
	int tmp4 = ::snow::modules::openal::ALC_obj::INVALID_CONTEXT;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(637)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(637)
	if ((tmp5)){
		HX_STACK_LINE(637)
		::String tmp6 = ::snow::modules::openal::ALC_obj::INVALID_CONTEXT_MEANING;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(637)
		return tmp6;
	}
	HX_STACK_LINE(638)
	int tmp6 = error;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(638)
	int tmp7 = ::snow::modules::openal::ALC_obj::INVALID_ENUM;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(638)
	bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(638)
	if ((tmp8)){
		HX_STACK_LINE(638)
		::String tmp9 = ::snow::modules::openal::ALC_obj::INVALID_ENUM_MEANING;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(638)
		return tmp9;
	}
	HX_STACK_LINE(639)
	int tmp9 = error;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(639)
	int tmp10 = ::snow::modules::openal::ALC_obj::INVALID_VALUE;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(639)
	bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(639)
	if ((tmp11)){
		HX_STACK_LINE(639)
		::String tmp12 = ::snow::modules::openal::ALC_obj::INVALID_VALUE_MEANING;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(639)
		return tmp12;
	}
	HX_STACK_LINE(640)
	int tmp12 = error;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(640)
	int tmp13 = ::snow::modules::openal::ALC_obj::OUT_OF_MEMORY;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(640)
	bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(640)
	if ((tmp14)){
		HX_STACK_LINE(640)
		::String tmp15 = ::snow::modules::openal::ALC_obj::OUT_OF_MEMORY_MEANING;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(640)
		return tmp15;
	}
	HX_STACK_LINE(642)
	return HX_HCSTRING("ALC.NO_ERROR: No Error","\x6f","\x5b","\x50","\x5c");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getErrorMeaning,return )

Dynamic ALC_obj::alhx_alcCreateContext;

Dynamic ALC_obj::alhx_alcMakeContextCurrent;

Dynamic ALC_obj::alhx_alcProcessContext;

Dynamic ALC_obj::alhx_alcSuspendContext;

Dynamic ALC_obj::alhx_alcDestroyContext;

Dynamic ALC_obj::alhx_alcGetCurrentContext;

Dynamic ALC_obj::alhx_alcGetContextsDevice;

Dynamic ALC_obj::alhx_alcOpenDevice;

Dynamic ALC_obj::alhx_alcCloseDevice;

Dynamic ALC_obj::alhx_alcGetError;

Dynamic ALC_obj::alhx_alcGetString;

Dynamic ALC_obj::alhx_alcGetIntegerv;


ALC_obj::ALC_obj()
{
}

bool ALC_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TRUE") ) { outValue = TRUE; return true;  }
		if (HX_FIELD_EQ(inName,"SYNC") ) { outValue = SYNC; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { outValue = FALSE; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REFRESH") ) { outValue = REFRESH; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { outValue = NO_ERROR; return true;  }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { outValue = FREQUENCY; return true;  }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { outValue = EXTENSIONS; return true;  }
		if (HX_FIELD_EQ(inName,"openDevice") ) { outValue = openDevice_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { outValue = closeDevice_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { outValue = MONO_SOURCES; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { outValue = INVALID_ENUM; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { outValue = INVALID_VALUE; return true;  }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { outValue = OUT_OF_MEMORY; return true;  }
		if (HX_FIELD_EQ(inName,"createContext") ) { outValue = createContext_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { outValue = STEREO_SOURCES; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { outValue = INVALID_DEVICE; return true;  }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { outValue = ALL_ATTRIBUTES; return true;  }
		if (HX_FIELD_EQ(inName,"processContext") ) { outValue = processContext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { outValue = suspendContext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"destroyContext") ) { outValue = destroyContext_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { outValue = INVALID_CONTEXT; return true;  }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { outValue = ATTRIBUTES_SIZE; return true;  }
		if (HX_FIELD_EQ(inName,"getErrorMeaning") ) { outValue = getErrorMeaning_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { outValue = DEVICE_SPECIFIER; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_alcGetError") ) { outValue = alhx_alcGetError; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { outValue = ENUMERATE_ALL_EXT; return true;  }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { outValue = getCurrentContext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { outValue = getContextsDevice_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_alcGetString") ) { outValue = alhx_alcGetString; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { outValue = makeContextCurrent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_alcOpenDevice") ) { outValue = alhx_alcOpenDevice; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"alhx_alcCloseDevice") ) { outValue = alhx_alcCloseDevice; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_alcGetIntegerv") ) { outValue = alhx_alcGetIntegerv; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"INVALID_ENUM_MEANING") ) { outValue = INVALID_ENUM_MEANING; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { outValue = ALL_DEVICES_SPECIFIER; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE_MEANING") ) { outValue = INVALID_VALUE_MEANING; return true;  }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY_MEANING") ) { outValue = OUT_OF_MEMORY_MEANING; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_alcCreateContext") ) { outValue = alhx_alcCreateContext; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE_MEANING") ) { outValue = INVALID_DEVICE_MEANING; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_alcProcessContext") ) { outValue = alhx_alcProcessContext; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_alcSuspendContext") ) { outValue = alhx_alcSuspendContext; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_alcDestroyContext") ) { outValue = alhx_alcDestroyContext; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT_MEANING") ) { outValue = INVALID_CONTEXT_MEANING; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { outValue = DEFAULT_DEVICE_SPECIFIER; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"alhx_alcGetCurrentContext") ) { outValue = alhx_alcGetCurrentContext; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_alcGetContextsDevice") ) { outValue = alhx_alcGetContextsDevice; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"alhx_alcMakeContextCurrent") ) { outValue = alhx_alcMakeContextCurrent; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { outValue = DEFAULT_ALL_DEVICES_SPECIFIER; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ALC_obj::FALSE,HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(void *) &ALC_obj::TRUE,HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(void *) &ALC_obj::FREQUENCY,HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(void *) &ALC_obj::REFRESH,HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c")},
	{hx::fsInt,(void *) &ALC_obj::SYNC,HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37")},
	{hx::fsInt,(void *) &ALC_obj::MONO_SOURCES,HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad")},
	{hx::fsInt,(void *) &ALC_obj::STEREO_SOURCES,HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60")},
	{hx::fsInt,(void *) &ALC_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_DEVICE,HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_CONTEXT,HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &ALC_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &ALC_obj::ATTRIBUTES_SIZE,HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17")},
	{hx::fsInt,(void *) &ALC_obj::ALL_ATTRIBUTES,HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04")},
	{hx::fsInt,(void *) &ALC_obj::DEFAULT_DEVICE_SPECIFIER,HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9")},
	{hx::fsInt,(void *) &ALC_obj::DEVICE_SPECIFIER,HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21")},
	{hx::fsInt,(void *) &ALC_obj::EXTENSIONS,HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(void *) &ALC_obj::ENUMERATE_ALL_EXT,HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7")},
	{hx::fsInt,(void *) &ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2")},
	{hx::fsInt,(void *) &ALC_obj::ALL_DEVICES_SPECIFIER,HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5")},
	{hx::fsString,(void *) &ALC_obj::INVALID_DEVICE_MEANING,HX_HCSTRING("INVALID_DEVICE_MEANING","\x5c","\xeb","\x5f","\xc4")},
	{hx::fsString,(void *) &ALC_obj::INVALID_CONTEXT_MEANING,HX_HCSTRING("INVALID_CONTEXT_MEANING","\x45","\x99","\x2b","\x64")},
	{hx::fsString,(void *) &ALC_obj::INVALID_ENUM_MEANING,HX_HCSTRING("INVALID_ENUM_MEANING","\xc7","\xbe","\x81","\x9b")},
	{hx::fsString,(void *) &ALC_obj::INVALID_VALUE_MEANING,HX_HCSTRING("INVALID_VALUE_MEANING","\xc7","\x32","\xcc","\x41")},
	{hx::fsString,(void *) &ALC_obj::OUT_OF_MEMORY_MEANING,HX_HCSTRING("OUT_OF_MEMORY_MEANING","\x36","\xc3","\x9a","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcCreateContext,HX_HCSTRING("alhx_alcCreateContext","\x5f","\x61","\x23","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcMakeContextCurrent,HX_HCSTRING("alhx_alcMakeContextCurrent","\x0c","\xee","\x5c","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcProcessContext,HX_HCSTRING("alhx_alcProcessContext","\xb4","\x8e","\x41","\x5a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcSuspendContext,HX_HCSTRING("alhx_alcSuspendContext","\x47","\x6d","\x28","\x8d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcDestroyContext,HX_HCSTRING("alhx_alcDestroyContext","\x89","\x3b","\x4f","\x14")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcGetCurrentContext,HX_HCSTRING("alhx_alcGetCurrentContext","\xf8","\x22","\xad","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcGetContextsDevice,HX_HCSTRING("alhx_alcGetContextsDevice","\x9c","\x57","\xbf","\xe5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcOpenDevice,HX_HCSTRING("alhx_alcOpenDevice","\x74","\x35","\x0a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcCloseDevice,HX_HCSTRING("alhx_alcCloseDevice","\x7a","\xda","\x01","\x35")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcGetError,HX_HCSTRING("alhx_alcGetError","\xc6","\xc3","\xd4","\xb5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcGetString,HX_HCSTRING("alhx_alcGetString","\x13","\x2f","\x1e","\x24")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ALC_obj::alhx_alcGetIntegerv,HX_HCSTRING("alhx_alcGetIntegerv","\xba","\xe3","\x57","\x50")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_MARK_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_MARK_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_DEVICE_MEANING,"INVALID_DEVICE_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_CONTEXT_MEANING,"INVALID_CONTEXT_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_ENUM_MEANING,"INVALID_ENUM_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_VALUE_MEANING,"INVALID_VALUE_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY_MEANING,"OUT_OF_MEMORY_MEANING");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcCreateContext,"alhx_alcCreateContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcMakeContextCurrent,"alhx_alcMakeContextCurrent");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcProcessContext,"alhx_alcProcessContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcSuspendContext,"alhx_alcSuspendContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcDestroyContext,"alhx_alcDestroyContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetCurrentContext,"alhx_alcGetCurrentContext");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetContextsDevice,"alhx_alcGetContextsDevice");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcOpenDevice,"alhx_alcOpenDevice");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcCloseDevice,"alhx_alcCloseDevice");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetError,"alhx_alcGetError");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetString,"alhx_alcGetString");
	HX_MARK_MEMBER_NAME(ALC_obj::alhx_alcGetIntegerv,"alhx_alcGetIntegerv");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_VISIT_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_VISIT_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_DEVICE_MEANING,"INVALID_DEVICE_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_CONTEXT_MEANING,"INVALID_CONTEXT_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_ENUM_MEANING,"INVALID_ENUM_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_VALUE_MEANING,"INVALID_VALUE_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY_MEANING,"OUT_OF_MEMORY_MEANING");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcCreateContext,"alhx_alcCreateContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcMakeContextCurrent,"alhx_alcMakeContextCurrent");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcProcessContext,"alhx_alcProcessContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcSuspendContext,"alhx_alcSuspendContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcDestroyContext,"alhx_alcDestroyContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetCurrentContext,"alhx_alcGetCurrentContext");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetContextsDevice,"alhx_alcGetContextsDevice");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcOpenDevice,"alhx_alcOpenDevice");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcCloseDevice,"alhx_alcCloseDevice");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetError,"alhx_alcGetError");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetString,"alhx_alcGetString");
	HX_VISIT_MEMBER_NAME(ALC_obj::alhx_alcGetIntegerv,"alhx_alcGetIntegerv");
};

#endif

hx::Class ALC_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"),
	HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"),
	HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"),
	HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c"),
	HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"),
	HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad"),
	HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93"),
	HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17"),
	HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04"),
	HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9"),
	HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7"),
	HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2"),
	HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5"),
	HX_HCSTRING("createContext","\x53","\x6e","\xba","\x01"),
	HX_HCSTRING("makeContextCurrent","\x98","\x6c","\xce","\x94"),
	HX_HCSTRING("processContext","\x40","\xd7","\xd5","\xcb"),
	HX_HCSTRING("suspendContext","\xd3","\xb5","\xbc","\xfe"),
	HX_HCSTRING("destroyContext","\x15","\x84","\xe3","\x85"),
	HX_HCSTRING("getCurrentContext","\xec","\xb9","\x7f","\x99"),
	HX_HCSTRING("getContextsDevice","\x90","\xee","\x91","\x9c"),
	HX_HCSTRING("openDevice","\x00","\x48","\x14","\xbf"),
	HX_HCSTRING("closeDevice","\x6e","\x02","\xc8","\x2b"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("INVALID_DEVICE_MEANING","\x5c","\xeb","\x5f","\xc4"),
	HX_HCSTRING("INVALID_CONTEXT_MEANING","\x45","\x99","\x2b","\x64"),
	HX_HCSTRING("INVALID_ENUM_MEANING","\xc7","\xbe","\x81","\x9b"),
	HX_HCSTRING("INVALID_VALUE_MEANING","\xc7","\x32","\xcc","\x41"),
	HX_HCSTRING("OUT_OF_MEMORY_MEANING","\x36","\xc3","\x9a","\xbf"),
	HX_HCSTRING("getErrorMeaning","\x8b","\x06","\xad","\x0d"),
	HX_HCSTRING("alhx_alcCreateContext","\x5f","\x61","\x23","\x2f"),
	HX_HCSTRING("alhx_alcMakeContextCurrent","\x0c","\xee","\x5c","\x53"),
	HX_HCSTRING("alhx_alcProcessContext","\xb4","\x8e","\x41","\x5a"),
	HX_HCSTRING("alhx_alcSuspendContext","\x47","\x6d","\x28","\x8d"),
	HX_HCSTRING("alhx_alcDestroyContext","\x89","\x3b","\x4f","\x14"),
	HX_HCSTRING("alhx_alcGetCurrentContext","\xf8","\x22","\xad","\xe2"),
	HX_HCSTRING("alhx_alcGetContextsDevice","\x9c","\x57","\xbf","\xe5"),
	HX_HCSTRING("alhx_alcOpenDevice","\x74","\x35","\x0a","\xed"),
	HX_HCSTRING("alhx_alcCloseDevice","\x7a","\xda","\x01","\x35"),
	HX_HCSTRING("alhx_alcGetError","\xc6","\xc3","\xd4","\xb5"),
	HX_HCSTRING("alhx_alcGetString","\x13","\x2f","\x1e","\x24"),
	HX_HCSTRING("alhx_alcGetIntegerv","\xba","\xe3","\x57","\x50"),
	::String(null()) };

void ALC_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.openal.ALC","\x11","\xcd","\x88","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALC_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALC_obj >;
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

void ALC_obj::__boot()
{
	FALSE= (int)0;
	TRUE= (int)1;
	FREQUENCY= (int)4103;
	REFRESH= (int)4104;
	SYNC= (int)4105;
	MONO_SOURCES= (int)4112;
	STEREO_SOURCES= (int)4113;
	NO_ERROR= (int)0;
	INVALID_DEVICE= (int)40961;
	INVALID_CONTEXT= (int)40962;
	INVALID_ENUM= (int)40963;
	INVALID_VALUE= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	ATTRIBUTES_SIZE= (int)4098;
	ALL_ATTRIBUTES= (int)4099;
	DEFAULT_DEVICE_SPECIFIER= (int)4100;
	DEVICE_SPECIFIER= (int)4101;
	EXTENSIONS= (int)4102;
	ENUMERATE_ALL_EXT= (int)1;
	DEFAULT_ALL_DEVICES_SPECIFIER= (int)4114;
	ALL_DEVICES_SPECIFIER= (int)4115;
	INVALID_DEVICE_MEANING= HX_HCSTRING("ALC.INVALID_DEVICE: Invalid device (or no device?)","\x43","\x25","\xbc","\x4c");
	INVALID_CONTEXT_MEANING= HX_HCSTRING("ALC.INVALID_CONTEXT: Invalid context (or no context?)","\x60","\xc0","\xe8","\xa0");
	INVALID_ENUM_MEANING= HX_HCSTRING("ALC.INVALID_ENUM: Invalid enum value","\x40","\x33","\xd5","\x8b");
	INVALID_VALUE_MEANING= HX_HCSTRING("ALC.INVALID_VALUE: Invalid param value","\x5c","\x64","\x5d","\xf4");
	OUT_OF_MEMORY_MEANING= HX_HCSTRING("ALC.OUT_OF_MEMORY: OpenAL has run out of memory","\x3a","\x21","\xed","\x0c");
	alhx_alcCreateContext= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcCreateContext","\x5f","\x61","\x23","\x2f"),(int)2);
	alhx_alcMakeContextCurrent= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcMakeContextCurrent","\x0c","\xee","\x5c","\x53"),(int)1);
	alhx_alcProcessContext= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcProcessContext","\xb4","\x8e","\x41","\x5a"),(int)1);
	alhx_alcSuspendContext= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcSuspendContext","\x47","\x6d","\x28","\x8d"),(int)1);
	alhx_alcDestroyContext= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcDestroyContext","\x89","\x3b","\x4f","\x14"),(int)1);
	alhx_alcGetCurrentContext= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcGetCurrentContext","\xf8","\x22","\xad","\xe2"),(int)0);
	alhx_alcGetContextsDevice= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcGetContextsDevice","\x9c","\x57","\xbf","\xe5"),(int)1);
	alhx_alcOpenDevice= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcOpenDevice","\x74","\x35","\x0a","\xed"),(int)1);
	alhx_alcCloseDevice= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcCloseDevice","\x7a","\xda","\x01","\x35"),(int)1);
	alhx_alcGetError= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcGetError","\xc6","\xc3","\xd4","\xb5"),(int)1);
	alhx_alcGetString= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcGetString","\x13","\x2f","\x1e","\x24"),(int)2);
	alhx_alcGetIntegerv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_alcGetIntegerv","\xba","\xe3","\x57","\x50"),(int)3);
}

} // end namespace snow
} // end namespace modules
} // end namespace openal
