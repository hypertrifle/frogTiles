#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_api_Libs
#include <snow/api/Libs.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_openal_AL
#include <snow/modules/openal/AL.h>
#endif
namespace snow{
namespace modules{
namespace openal{

Void AL_obj::__construct()
{
	return null();
}

//AL_obj::~AL_obj() { }

Dynamic AL_obj::__CreateEmpty() { return  new AL_obj; }
hx::ObjectPtr< AL_obj > AL_obj::__new()
{  hx::ObjectPtr< AL_obj > _result_ = new AL_obj();
	_result_->__construct();
	return _result_;}

Dynamic AL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AL_obj > _result_ = new AL_obj();
	_result_->__construct();
	return _result_;}

int AL_obj::NONE;

int AL_obj::FALSE;

int AL_obj::TRUE;

int AL_obj::SOURCE_RELATIVE;

int AL_obj::CONE_INNER_ANGLE;

int AL_obj::CONE_OUTER_ANGLE;

int AL_obj::PITCH;

int AL_obj::POSITION;

int AL_obj::DIRECTION;

int AL_obj::VELOCITY;

int AL_obj::LOOPING;

int AL_obj::BUFFER;

int AL_obj::GAIN;

int AL_obj::MIN_GAIN;

int AL_obj::MAX_GAIN;

int AL_obj::ORIENTATION;

int AL_obj::SOURCE_STATE;

int AL_obj::INITIAL;

int AL_obj::PLAYING;

int AL_obj::PAUSED;

int AL_obj::STOPPED;

int AL_obj::BUFFERS_QUEUED;

int AL_obj::BUFFERS_PROCESSED;

int AL_obj::REFERENCE_DISTANCE;

int AL_obj::ROLLOFF_FACTOR;

int AL_obj::CONE_OUTER_GAIN;

int AL_obj::MAX_DISTANCE;

int AL_obj::SEC_OFFSET;

int AL_obj::SAMPLE_OFFSET;

int AL_obj::BYTE_OFFSET;

int AL_obj::SOURCE_TYPE;

int AL_obj::STATIC;

int AL_obj::STREAMING;

int AL_obj::UNDETERMINED;

int AL_obj::FORMAT_MONO8;

int AL_obj::FORMAT_MONO16;

int AL_obj::FORMAT_STEREO8;

int AL_obj::FORMAT_STEREO16;

int AL_obj::FREQUENCY;

int AL_obj::BITS;

int AL_obj::CHANNELS;

int AL_obj::SIZE;

int AL_obj::NO_ERROR;

int AL_obj::INVALID_NAME;

int AL_obj::INVALID_ENUM;

int AL_obj::INVALID_VALUE;

int AL_obj::INVALID_OPERATION;

int AL_obj::OUT_OF_MEMORY;

int AL_obj::VENDOR;

int AL_obj::VERSION;

int AL_obj::RENDERER;

int AL_obj::EXTENSIONS;

int AL_obj::DOPPLER_FACTOR;

int AL_obj::SPEED_OF_SOUND;

int AL_obj::DOPPLER_VELOCITY;

int AL_obj::DISTANCE_MODEL;

int AL_obj::INVERSE_DISTANCE;

int AL_obj::INVERSE_DISTANCE_CLAMPED;

int AL_obj::LINEAR_DISTANCE;

int AL_obj::LINEAR_DISTANCE_CLAMPED;

int AL_obj::EXPONENT_DISTANCE;

int AL_obj::EXPONENT_DISTANCE_CLAMPED;

Void AL_obj::dopplerFactor( Float value){
{
		HX_STACK_FRAME("snow.modules.openal.AL","dopplerFactor",0x978af361,"snow.modules.openal.AL.dopplerFactor","snow/modules/openal/AL.hx",88,0x6eda9f6d)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(89)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		::snow::modules::openal::AL_obj::alhx_DopplerFactor(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerFactor,(void))

Void AL_obj::dopplerVelocity( Float value){
{
		HX_STACK_FRAME("snow.modules.openal.AL","dopplerVelocity",0xb074a52f,"snow.modules.openal.AL.dopplerVelocity","snow/modules/openal/AL.hx",92,0x6eda9f6d)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(93)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		::snow::modules::openal::AL_obj::alhx_DopplerVelocity(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerVelocity,(void))

Void AL_obj::speedOfSound( Float value){
{
		HX_STACK_FRAME("snow.modules.openal.AL","speedOfSound",0x47283e6d,"snow.modules.openal.AL.speedOfSound","snow/modules/openal/AL.hx",96,0x6eda9f6d)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(97)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::snow::modules::openal::AL_obj::alhx_SpeedOfSound(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,speedOfSound,(void))

Void AL_obj::distanceModel( int distanceModel){
{
		HX_STACK_FRAME("snow.modules.openal.AL","distanceModel",0xfc6705b8,"snow.modules.openal.AL.distanceModel","snow/modules/openal/AL.hx",100,0x6eda9f6d)
		HX_STACK_ARG(distanceModel,"distanceModel")
		HX_STACK_LINE(101)
		int tmp = distanceModel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		::snow::modules::openal::AL_obj::alhx_DistanceModel(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,distanceModel,(void))

Void AL_obj::enable( int capability){
{
		HX_STACK_FRAME("snow.modules.openal.AL","enable",0x5bd2607f,"snow.modules.openal.AL.enable","snow/modules/openal/AL.hx",106,0x6eda9f6d)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(107)
		int tmp = capability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::snow::modules::openal::AL_obj::alhx_Enable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,enable,(void))

Void AL_obj::disable( int capability){
{
		HX_STACK_FRAME("snow.modules.openal.AL","disable",0x2f69746c,"snow.modules.openal.AL.disable","snow/modules/openal/AL.hx",110,0x6eda9f6d)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(111)
		int tmp = capability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		::snow::modules::openal::AL_obj::alhx_Disable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,disable,(void))

bool AL_obj::isEnabled( int capability){
	HX_STACK_FRAME("snow.modules.openal.AL","isEnabled",0x6e7b353b,"snow.modules.openal.AL.isEnabled","snow/modules/openal/AL.hx",114,0x6eda9f6d)
	HX_STACK_ARG(capability,"capability")
	HX_STACK_LINE(115)
	int tmp = capability;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	bool tmp1 = ::snow::modules::openal::AL_obj::alhx_IsEnabled(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isEnabled,return )

::String AL_obj::getString( int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getString",0x79d2658b,"snow.modules.openal.AL.getString","snow/modules/openal/AL.hx",120,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(121)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	::String tmp1 = ::snow::modules::openal::AL_obj::alhx_GetString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getString,return )

Array< bool > AL_obj::getBooleanv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.modules.openal.AL","getBooleanv",0x4444c808,"snow.modules.openal.AL.getBooleanv","snow/modules/openal/AL.hx",124,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(125)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		Dynamic tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		return ::snow::modules::openal::AL_obj::alhx_GetBooleanv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBooleanv,return )

Array< int > AL_obj::getIntegerv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.modules.openal.AL","getIntegerv",0xa460a832,"snow.modules.openal.AL.getIntegerv","snow/modules/openal/AL.hx",128,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(129)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		Dynamic tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		return ::snow::modules::openal::AL_obj::alhx_GetIntegerv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getIntegerv,return )

Array< Float > AL_obj::getFloatv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.modules.openal.AL","getFloatv",0xa9f86014,"snow.modules.openal.AL.getFloatv","snow/modules/openal/AL.hx",132,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(133)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		Dynamic tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		return ::snow::modules::openal::AL_obj::alhx_GetFloatv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getFloatv,return )

Array< Float > AL_obj::getDoublev( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.modules.openal.AL","getDoublev",0x644d6a4b,"snow.modules.openal.AL.getDoublev","snow/modules/openal/AL.hx",136,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(137)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		Dynamic tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		return ::snow::modules::openal::AL_obj::alhx_GetDoublev(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getDoublev,return )

bool AL_obj::getBoolean( int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getBoolean",0xa351d0ae,"snow.modules.openal.AL.getBoolean","snow/modules/openal/AL.hx",140,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(141)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	bool tmp1 = ::snow::modules::openal::AL_obj::alhx_GetBoolean(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getBoolean,return )

int AL_obj::getInteger( int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getInteger",0x3c6ea3c4,"snow.modules.openal.AL.getInteger","snow/modules/openal/AL.hx",144,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(145)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	int tmp1 = ::snow::modules::openal::AL_obj::alhx_GetInteger(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getInteger,return )

Float AL_obj::getFloat( int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getFloat",0x3345fe22,"snow.modules.openal.AL.getFloat","snow/modules/openal/AL.hx",148,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(149)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	Float tmp1 = ::snow::modules::openal::AL_obj::alhx_GetFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getFloat,return )

Float AL_obj::getDouble( int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getDouble",0x9b6d67cb,"snow.modules.openal.AL.getDouble","snow/modules/openal/AL.hx",152,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(153)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	Float tmp1 = ::snow::modules::openal::AL_obj::alhx_GetDouble(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getDouble,return )

int AL_obj::getError( ){
	HX_STACK_FRAME("snow.modules.openal.AL","getError",0xa3d9044e,"snow.modules.openal.AL.getError","snow/modules/openal/AL.hx",156,0x6eda9f6d)
	HX_STACK_LINE(157)
	int tmp = ::snow::modules::openal::AL_obj::alhx_GetError();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getError,return )

bool AL_obj::isExtensionPresent( ::String extname){
	HX_STACK_FRAME("snow.modules.openal.AL","isExtensionPresent",0x9eb6b542,"snow.modules.openal.AL.isExtensionPresent","snow/modules/openal/AL.hx",162,0x6eda9f6d)
	HX_STACK_ARG(extname,"extname")
	HX_STACK_LINE(163)
	::String tmp = extname;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	bool tmp1 = ::snow::modules::openal::AL_obj::alhx_IsExtensionPresent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isExtensionPresent,return )

Dynamic AL_obj::getProcAddress( ::String fname){
	HX_STACK_FRAME("snow.modules.openal.AL","getProcAddress",0xd628f1c4,"snow.modules.openal.AL.getProcAddress","snow/modules/openal/AL.hx",168,0x6eda9f6d)
	HX_STACK_ARG(fname,"fname")
	HX_STACK_LINE(168)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getProcAddress,return )

int AL_obj::getEnumValue( ::String ename){
	HX_STACK_FRAME("snow.modules.openal.AL","getEnumValue",0x7463f436,"snow.modules.openal.AL.getEnumValue","snow/modules/openal/AL.hx",171,0x6eda9f6d)
	HX_STACK_ARG(ename,"ename")
	HX_STACK_LINE(172)
	::String tmp = ename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	int tmp1 = ::snow::modules::openal::AL_obj::alhx_GetEnumValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getEnumValue,return )

Void AL_obj::listenerf( int param,Float value){
{
		HX_STACK_FRAME("snow.modules.openal.AL","listenerf",0xdfda18f6,"snow.modules.openal.AL.listenerf","snow/modules/openal/AL.hx",177,0x6eda9f6d)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(178)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		::snow::modules::openal::AL_obj::alhx_Listenerf(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerf,(void))

Void AL_obj::listener3f( int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("snow.modules.openal.AL","listener3f",0xfefb9243,"snow.modules.openal.AL.listener3f","snow/modules/openal/AL.hx",181,0x6eda9f6d)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(182)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		Float tmp1 = value1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		Float tmp2 = value2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		Float tmp3 = value3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		::snow::modules::openal::AL_obj::alhx_Listener3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3f,(void))

Void AL_obj::listenerfv( int param,Array< Float > values){
{
		HX_STACK_FRAME("snow.modules.openal.AL","listenerfv",0xfefbbec0,"snow.modules.openal.AL.listenerfv","snow/modules/openal/AL.hx",185,0x6eda9f6d)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(186)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::snow::modules::openal::AL_obj::alhx_Listenerfv(tmp,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerfv,(void))

Void AL_obj::listeneri( int param,int value){
{
		HX_STACK_FRAME("snow.modules.openal.AL","listeneri",0xdfda18f9,"snow.modules.openal.AL.listeneri","snow/modules/openal/AL.hx",189,0x6eda9f6d)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(190)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		::snow::modules::openal::AL_obj::alhx_Listeneri(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneri,(void))

Void AL_obj::listener3i( int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("snow.modules.openal.AL","listener3i",0xfefb9246,"snow.modules.openal.AL.listener3i","snow/modules/openal/AL.hx",193,0x6eda9f6d)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(194)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		int tmp1 = value1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		int tmp2 = value2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		int tmp3 = value3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		::snow::modules::openal::AL_obj::alhx_Listener3i(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3i,(void))

Void AL_obj::listeneriv( int param,Array< int > values){
{
		HX_STACK_FRAME("snow.modules.openal.AL","listeneriv",0xfefbc15d,"snow.modules.openal.AL.listeneriv","snow/modules/openal/AL.hx",197,0x6eda9f6d)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(198)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		::snow::modules::openal::AL_obj::alhx_Listeneriv(tmp,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneriv,(void))

Float AL_obj::getListenerf( int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getListenerf",0x3feb58f8,"snow.modules.openal.AL.getListenerf","snow/modules/openal/AL.hx",201,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(202)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	Float tmp1 = ::snow::modules::openal::AL_obj::alhx_GetListenerf(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListenerf,return )

Array< Float > AL_obj::getListener3f( int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getListener3f",0xae025401,"snow.modules.openal.AL.getListener3f","snow/modules/openal/AL.hx",205,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(206)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	return ::snow::modules::openal::AL_obj::alhx_GetListener3f(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3f,return )

Array< Float > AL_obj::getListenerfv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.modules.openal.AL","getListenerfv",0xae02807e,"snow.modules.openal.AL.getListenerfv","snow/modules/openal/AL.hx",209,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(210)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		Dynamic tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		return ::snow::modules::openal::AL_obj::alhx_GetListenerfv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListenerfv,return )

int AL_obj::getListeneri( int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getListeneri",0x3feb58fb,"snow.modules.openal.AL.getListeneri","snow/modules/openal/AL.hx",213,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(214)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	int tmp1 = ::snow::modules::openal::AL_obj::alhx_GetListeneri(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListeneri,return )

Array< int > AL_obj::getListener3i( int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getListener3i",0xae025404,"snow.modules.openal.AL.getListener3i","snow/modules/openal/AL.hx",217,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(218)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	return ::snow::modules::openal::AL_obj::alhx_GetListener3i(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3i,return )

Array< int > AL_obj::getListeneriv( int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.modules.openal.AL","getListeneriv",0xae02831b,"snow.modules.openal.AL.getListeneriv","snow/modules/openal/AL.hx",221,0x6eda9f6d)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(222)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		Dynamic tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		return ::snow::modules::openal::AL_obj::alhx_GetListeneriv(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListeneriv,return )

Array< int > AL_obj::genSources( int n){
	HX_STACK_FRAME("snow.modules.openal.AL","genSources",0x876d4884,"snow.modules.openal.AL.genSources","snow/modules/openal/AL.hx",227,0x6eda9f6d)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(228)
	int tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	return ::snow::modules::openal::AL_obj::alhx_GenSources(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genSources,return )

Void AL_obj::deleteSources( Array< int > sources){
{
		HX_STACK_FRAME("snow.modules.openal.AL","deleteSources",0x405867d1,"snow.modules.openal.AL.deleteSources","snow/modules/openal/AL.hx",231,0x6eda9f6d)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(232)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		::snow::modules::openal::AL_obj::alhx_DeleteSources(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSources,(void))

bool AL_obj::isSource( int source){
	HX_STACK_FRAME("snow.modules.openal.AL","isSource",0x5b737561,"snow.modules.openal.AL.isSource","snow/modules/openal/AL.hx",235,0x6eda9f6d)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(236)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	bool tmp1 = ::snow::modules::openal::AL_obj::alhx_IsSource(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isSource,return )

Void AL_obj::sourcef( int source,int param,Float value){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourcef",0x375a19af,"snow.modules.openal.AL.sourcef","snow/modules/openal/AL.hx",241,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(242)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		::snow::modules::openal::AL_obj::alhx_Sourcef(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcef,(void))

Void AL_obj::source3f( int source,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("snow.modules.openal.AL","source3f",0x377c336a,"snow.modules.openal.AL.source3f","snow/modules/openal/AL.hx",245,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(246)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		Float tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		Float tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(246)
		Float tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(246)
		::snow::modules::openal::AL_obj::alhx_Source3f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3f,(void))

Void AL_obj::sourcefv( int source,int param,Array< Float > values){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourcefv",0x377c5fe7,"snow.modules.openal.AL.sourcefv","snow/modules/openal/AL.hx",249,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(250)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		::snow::modules::openal::AL_obj::alhx_Sourcefv(tmp,tmp1,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcefv,(void))

Void AL_obj::sourcei( int source,int param,int value){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourcei",0x375a19b2,"snow.modules.openal.AL.sourcei","snow/modules/openal/AL.hx",253,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(254)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		::snow::modules::openal::AL_obj::alhx_Sourcei(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcei,(void))

Void AL_obj::source3i( int source,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("snow.modules.openal.AL","source3i",0x377c336d,"snow.modules.openal.AL.source3i","snow/modules/openal/AL.hx",257,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(258)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		int tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		int tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		int tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		::snow::modules::openal::AL_obj::alhx_Source3i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3i,(void))

Void AL_obj::sourceiv( int source,int param,Array< int > values){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourceiv",0x377c6284,"snow.modules.openal.AL.sourceiv","snow/modules/openal/AL.hx",261,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(262)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		::snow::modules::openal::AL_obj::alhx_Sourceiv(tmp,tmp1,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceiv,(void))

Float AL_obj::getSourcef( int source,int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getSourcef",0xde9bf531,"snow.modules.openal.AL.getSourcef","snow/modules/openal/AL.hx",265,0x6eda9f6d)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(266)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	Float tmp2 = ::snow::modules::openal::AL_obj::alhx_GetSourcef(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcef,return )

Array< Float > AL_obj::getSource3f( int source,int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getSource3f",0xe9da69a8,"snow.modules.openal.AL.getSource3f","snow/modules/openal/AL.hx",269,0x6eda9f6d)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(270)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	return ::snow::modules::openal::AL_obj::alhx_GetSource3f(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3f,return )

Array< Float > AL_obj::getSourcefv( int source,int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getSourcefv",0xe9da9625,"snow.modules.openal.AL.getSourcefv","snow/modules/openal/AL.hx",273,0x6eda9f6d)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(274)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	return ::snow::modules::openal::AL_obj::alhx_GetSourcefv(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcefv,return )

int AL_obj::getSourcei( int source,int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getSourcei",0xde9bf534,"snow.modules.openal.AL.getSourcei","snow/modules/openal/AL.hx",277,0x6eda9f6d)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(278)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(278)
	int tmp2 = ::snow::modules::openal::AL_obj::alhx_GetSourcei(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcei,return )

Array< int > AL_obj::getSource3i( int source,int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getSource3i",0xe9da69ab,"snow.modules.openal.AL.getSource3i","snow/modules/openal/AL.hx",281,0x6eda9f6d)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(282)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	return ::snow::modules::openal::AL_obj::alhx_GetSource3i(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3i,return )

Array< int > AL_obj::getSourceiv( int source,int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.modules.openal.AL","getSourceiv",0xe9da98c2,"snow.modules.openal.AL.getSourceiv","snow/modules/openal/AL.hx",285,0x6eda9f6d)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(286)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		Dynamic tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		return ::snow::modules::openal::AL_obj::alhx_GetSourceiv(tmp,tmp1,tmp2);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getSourceiv,return )

Void AL_obj::sourcePlayv( Array< int > sources){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourcePlayv",0x50d669ab,"snow.modules.openal.AL.sourcePlayv","snow/modules/openal/AL.hx",291,0x6eda9f6d)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(292)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		::snow::modules::openal::AL_obj::alhx_SourcePlayv(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlayv,(void))

Void AL_obj::sourceStopv( Array< int > sources){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourceStopv",0x105e73dd,"snow.modules.openal.AL.sourceStopv","snow/modules/openal/AL.hx",295,0x6eda9f6d)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(296)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(296)
		::snow::modules::openal::AL_obj::alhx_SourceStopv(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStopv,(void))

Void AL_obj::sourceRewindv( Array< int > sources){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourceRewindv",0x29677004,"snow.modules.openal.AL.sourceRewindv","snow/modules/openal/AL.hx",299,0x6eda9f6d)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(300)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		::snow::modules::openal::AL_obj::alhx_SourceRewindv(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewindv,(void))

Void AL_obj::sourcePausev( Array< int > sources){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourcePausev",0x229152f7,"snow.modules.openal.AL.sourcePausev","snow/modules/openal/AL.hx",303,0x6eda9f6d)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(304)
		int tmp = sources->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		::snow::modules::openal::AL_obj::alhx_SourcePausev(tmp,sources);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePausev,(void))

Void AL_obj::sourcePlay( int source){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourcePlay",0x48af746b,"snow.modules.openal.AL.sourcePlay","snow/modules/openal/AL.hx",307,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(308)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		::snow::modules::openal::AL_obj::alhx_SourcePlay(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlay,(void))

Void AL_obj::sourceStop( int source){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourceStop",0x4ab13679,"snow.modules.openal.AL.sourceStop","snow/modules/openal/AL.hx",311,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(312)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		::snow::modules::openal::AL_obj::alhx_SourceStop(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStop,(void))

Void AL_obj::sourceRewind( int source){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourceRewind",0x3e2d3c32,"snow.modules.openal.AL.sourceRewind","snow/modules/openal/AL.hx",315,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(316)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		::snow::modules::openal::AL_obj::alhx_SourceRewind(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewind,(void))

Void AL_obj::sourcePause( int source){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourcePause",0x49a0389f,"snow.modules.openal.AL.sourcePause","snow/modules/openal/AL.hx",319,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(320)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		::snow::modules::openal::AL_obj::alhx_SourcePause(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePause,(void))

Void AL_obj::sourceQueueBuffers( int source,int nb,Array< int > buffers){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourceQueueBuffers",0x2ce89759,"snow.modules.openal.AL.sourceQueueBuffers","snow/modules/openal/AL.hx",323,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(nb,"nb")
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(324)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		int tmp1 = nb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		::snow::modules::openal::AL_obj::alhx_SourceQueueBuffers(tmp,tmp1,buffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceQueueBuffers,(void))

Array< int > AL_obj::sourceUnqueueBuffers( int source,int nb){
	HX_STACK_FRAME("snow.modules.openal.AL","sourceUnqueueBuffers",0x05df2af2,"snow.modules.openal.AL.sourceUnqueueBuffers","snow/modules/openal/AL.hx",327,0x6eda9f6d)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(nb,"nb")
	HX_STACK_LINE(328)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	int tmp1 = nb;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	return ::snow::modules::openal::AL_obj::alhx_SourceUnqueueBuffers(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceUnqueueBuffers,return )

Array< int > AL_obj::genBuffers( int n){
	HX_STACK_FRAME("snow.modules.openal.AL","genBuffers",0x7fb4dcbf,"snow.modules.openal.AL.genBuffers","snow/modules/openal/AL.hx",333,0x6eda9f6d)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(334)
	int tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	return ::snow::modules::openal::AL_obj::alhx_GenBuffers(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genBuffers,return )

Void AL_obj::deleteBuffers( Array< int > buffers){
{
		HX_STACK_FRAME("snow.modules.openal.AL","deleteBuffers",0x389ffc0c,"snow.modules.openal.AL.deleteBuffers","snow/modules/openal/AL.hx",337,0x6eda9f6d)
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(338)
		int tmp = buffers->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(338)
		::snow::modules::openal::AL_obj::alhx_DeleteBuffers(tmp,buffers);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffers,(void))

bool AL_obj::isBuffer( int buffer){
	HX_STACK_FRAME("snow.modules.openal.AL","isBuffer",0xf9d68186,"snow.modules.openal.AL.isBuffer","snow/modules/openal/AL.hx",341,0x6eda9f6d)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(342)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	bool tmp1 = ::snow::modules::openal::AL_obj::alhx_IsBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isBuffer,return )

Void AL_obj::bufferData( int buffer,int format,::snow::api::buffers::ArrayBufferView data,int frequency){
{
		HX_STACK_FRAME("snow.modules.openal.AL","bufferData",0x69651f46,"snow.modules.openal.AL.bufferData","snow/modules/openal/AL.hx",347,0x6eda9f6d)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(frequency,"frequency")
		HX_STACK_LINE(348)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		int tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(348)
		int tmp2 = data->byteOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(348)
		int tmp3 = data->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(348)
		int tmp4 = frequency;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		::snow::modules::openal::AL_obj::alhx_BufferData(tmp,tmp1,data->buffer->b,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,bufferData,(void))

Void AL_obj::bufferf( int buffer,int param,Float value){
{
		HX_STACK_FRAME("snow.modules.openal.AL","bufferf",0x2fa1adea,"snow.modules.openal.AL.bufferf","snow/modules/openal/AL.hx",351,0x6eda9f6d)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(352)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		::snow::modules::openal::AL_obj::alhx_Bufferf(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferf,(void))

Void AL_obj::buffer3f( int buffer,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("snow.modules.openal.AL","buffer3f",0x7dd652cf,"snow.modules.openal.AL.buffer3f","snow/modules/openal/AL.hx",355,0x6eda9f6d)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(356)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		Float tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		Float tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		Float tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		::snow::modules::openal::AL_obj::alhx_Buffer3f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3f,(void))

Void AL_obj::bufferfv( int buffer,int param,Array< Float > values){
{
		HX_STACK_FRAME("snow.modules.openal.AL","bufferfv",0x7dd67f4c,"snow.modules.openal.AL.bufferfv","snow/modules/openal/AL.hx",359,0x6eda9f6d)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(360)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(360)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(360)
		::snow::modules::openal::AL_obj::alhx_Bufferfv(tmp,tmp1,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferfv,(void))

Void AL_obj::bufferi( int buffer,int param,int value){
{
		HX_STACK_FRAME("snow.modules.openal.AL","bufferi",0x2fa1aded,"snow.modules.openal.AL.bufferi","snow/modules/openal/AL.hx",363,0x6eda9f6d)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(364)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		::snow::modules::openal::AL_obj::alhx_Bufferi(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferi,(void))

Void AL_obj::buffer3i( int buffer,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("snow.modules.openal.AL","buffer3i",0x7dd652d2,"snow.modules.openal.AL.buffer3i","snow/modules/openal/AL.hx",367,0x6eda9f6d)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(368)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		int tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		int tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(368)
		int tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		::snow::modules::openal::AL_obj::alhx_Buffer3i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3i,(void))

Void AL_obj::bufferiv( int buffer,int param,Array< int > values){
{
		HX_STACK_FRAME("snow.modules.openal.AL","bufferiv",0x7dd681e9,"snow.modules.openal.AL.bufferiv","snow/modules/openal/AL.hx",371,0x6eda9f6d)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(372)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		::snow::modules::openal::AL_obj::alhx_Bufferiv(tmp,tmp1,values);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferiv,(void))

Float AL_obj::getBufferf( int buffer,int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getBufferf",0xd6e3896c,"snow.modules.openal.AL.getBufferf","snow/modules/openal/AL.hx",375,0x6eda9f6d)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(376)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(376)
	Float tmp2 = ::snow::modules::openal::AL_obj::alhx_GetBufferf(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(376)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferf,return )

Array< Float > AL_obj::getBuffer3f( int buffer,int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getBuffer3f",0x3034890d,"snow.modules.openal.AL.getBuffer3f","snow/modules/openal/AL.hx",379,0x6eda9f6d)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(380)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(380)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(380)
	return ::snow::modules::openal::AL_obj::alhx_GetBuffer3f(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3f,return )

Array< Float > AL_obj::getBufferfv( int buffer,int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.modules.openal.AL","getBufferfv",0x3034b58a,"snow.modules.openal.AL.getBufferfv","snow/modules/openal/AL.hx",383,0x6eda9f6d)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(384)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		Dynamic tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		return ::snow::modules::openal::AL_obj::alhx_GetBufferfv(tmp,tmp1,tmp2);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferfv,return )

int AL_obj::getBufferi( int buffer,int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getBufferi",0xd6e3896f,"snow.modules.openal.AL.getBufferi","snow/modules/openal/AL.hx",387,0x6eda9f6d)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(388)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	int tmp2 = ::snow::modules::openal::AL_obj::alhx_GetBufferi(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(388)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferi,return )

Array< int > AL_obj::getBuffer3i( int buffer,int param){
	HX_STACK_FRAME("snow.modules.openal.AL","getBuffer3i",0x30348910,"snow.modules.openal.AL.getBuffer3i","snow/modules/openal/AL.hx",391,0x6eda9f6d)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(392)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(392)
	return ::snow::modules::openal::AL_obj::alhx_GetBuffer3i(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3i,return )

Array< int > AL_obj::getBufferiv( int buffer,int param,Dynamic __o_count){
Dynamic count = __o_count.Default(1);
	HX_STACK_FRAME("snow.modules.openal.AL","getBufferiv",0x3034b827,"snow.modules.openal.AL.getBufferiv","snow/modules/openal/AL.hx",395,0x6eda9f6d)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(396)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		Dynamic tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		return ::snow::modules::openal::AL_obj::alhx_GetBufferiv(tmp,tmp1,tmp2);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferiv,return )

int AL_obj::genSource( ){
	HX_STACK_FRAME("snow.modules.openal.AL","genSource",0xa153250f,"snow.modules.openal.AL.genSource","snow/modules/openal/AL.hx",402,0x6eda9f6d)
	HX_STACK_LINE(403)
	int tmp = ::snow::modules::openal::AL_obj::alhx_GenSource();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genSource,return )

Void AL_obj::deleteSource( int source){
{
		HX_STACK_FRAME("snow.modules.openal.AL","deleteSource",0xd5d02e62,"snow.modules.openal.AL.deleteSource","snow/modules/openal/AL.hx",406,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(407)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		::snow::modules::openal::AL_obj::alhx_DeleteSource(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSource,(void))

int AL_obj::genBuffer( ){
	HX_STACK_FRAME("snow.modules.openal.AL","genBuffer",0x3fb63134,"snow.modules.openal.AL.genBuffer","snow/modules/openal/AL.hx",410,0x6eda9f6d)
	HX_STACK_LINE(411)
	int tmp = ::snow::modules::openal::AL_obj::alhx_GenBuffer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genBuffer,return )

Void AL_obj::deleteBuffer( int buffer){
{
		HX_STACK_FRAME("snow.modules.openal.AL","deleteBuffer",0x74333a87,"snow.modules.openal.AL.deleteBuffer","snow/modules/openal/AL.hx",414,0x6eda9f6d)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(415)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		::snow::modules::openal::AL_obj::alhx_DeleteBuffer(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffer,(void))

Void AL_obj::sourceQueueBuffer( int source,int buffer){
{
		HX_STACK_FRAME("snow.modules.openal.AL","sourceQueueBuffer",0x969647da,"snow.modules.openal.AL.sourceQueueBuffer","snow/modules/openal/AL.hx",418,0x6eda9f6d)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(419)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		::snow::modules::openal::AL_obj::alhx_SourceQueueBuffers(tmp,(int)1,Array_obj< int >::__new().Add(buffer));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceQueueBuffer,(void))

int AL_obj::sourceUnqueueBuffer( int source){
	HX_STACK_FRAME("snow.modules.openal.AL","sourceUnqueueBuffer",0x7e4dea61,"snow.modules.openal.AL.sourceUnqueueBuffer","snow/modules/openal/AL.hx",422,0x6eda9f6d)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(423)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(423)
	Array< int > res = ::snow::modules::openal::AL_obj::alhx_SourceUnqueueBuffers(tmp,(int)1);		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(424)
	int tmp1 = res->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(424)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceUnqueueBuffer,return )

::String AL_obj::INVALID_NAME_MEANING;

::String AL_obj::INVALID_ENUM_MEANING;

::String AL_obj::INVALID_VALUE_MEANING;

::String AL_obj::INVALID_OPERATION_MEANING;

::String AL_obj::OUT_OF_MEMORY_MEANING;

::String AL_obj::getErrorMeaning( int error){
	HX_STACK_FRAME("snow.modules.openal.AL","getErrorMeaning",0xb752350f,"snow.modules.openal.AL.getErrorMeaning","snow/modules/openal/AL.hx",433,0x6eda9f6d)
	HX_STACK_ARG(error,"error")
	HX_STACK_LINE(435)
	int tmp = error;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(435)
	int tmp1 = ::snow::modules::openal::AL_obj::INVALID_NAME;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(435)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(435)
	if ((tmp2)){
		HX_STACK_LINE(435)
		::String tmp3 = ::snow::modules::openal::AL_obj::INVALID_NAME_MEANING;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		return tmp3;
	}
	HX_STACK_LINE(436)
	int tmp3 = error;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(436)
	int tmp4 = ::snow::modules::openal::AL_obj::INVALID_ENUM;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(436)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(436)
	if ((tmp5)){
		HX_STACK_LINE(436)
		::String tmp6 = ::snow::modules::openal::AL_obj::INVALID_ENUM_MEANING;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		return tmp6;
	}
	HX_STACK_LINE(437)
	int tmp6 = error;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(437)
	int tmp7 = ::snow::modules::openal::AL_obj::INVALID_VALUE;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(437)
	bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(437)
	if ((tmp8)){
		HX_STACK_LINE(437)
		::String tmp9 = ::snow::modules::openal::AL_obj::INVALID_VALUE_MEANING;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(437)
		return tmp9;
	}
	HX_STACK_LINE(438)
	int tmp9 = error;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(438)
	int tmp10 = ::snow::modules::openal::AL_obj::INVALID_OPERATION;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(438)
	bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(438)
	if ((tmp11)){
		HX_STACK_LINE(438)
		::String tmp12 = ::snow::modules::openal::AL_obj::INVALID_OPERATION_MEANING;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(438)
		return tmp12;
	}
	HX_STACK_LINE(439)
	int tmp12 = error;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(439)
	int tmp13 = ::snow::modules::openal::AL_obj::OUT_OF_MEMORY;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(439)
	bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(439)
	if ((tmp14)){
		HX_STACK_LINE(439)
		::String tmp15 = ::snow::modules::openal::AL_obj::OUT_OF_MEMORY_MEANING;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(439)
		return tmp15;
	}
	HX_STACK_LINE(441)
	return HX_HCSTRING("AL.NO_ERROR: No Error","\x5c","\xdb","\x9b","\x7b");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getErrorMeaning,return )

Dynamic AL_obj::alhx_DopplerFactor;

Dynamic AL_obj::alhx_DopplerVelocity;

Dynamic AL_obj::alhx_SpeedOfSound;

Dynamic AL_obj::alhx_DistanceModel;

Dynamic AL_obj::alhx_Enable;

Dynamic AL_obj::alhx_Disable;

Dynamic AL_obj::alhx_IsEnabled;

Dynamic AL_obj::alhx_GetString;

Dynamic AL_obj::alhx_GetBooleanv;

Dynamic AL_obj::alhx_GetIntegerv;

Dynamic AL_obj::alhx_GetFloatv;

Dynamic AL_obj::alhx_GetDoublev;

Dynamic AL_obj::alhx_GetBoolean;

Dynamic AL_obj::alhx_GetInteger;

Dynamic AL_obj::alhx_GetFloat;

Dynamic AL_obj::alhx_GetDouble;

Dynamic AL_obj::alhx_GetError;

Dynamic AL_obj::alhx_IsExtensionPresent;

Dynamic AL_obj::alhx_GetProcAddress;

Dynamic AL_obj::alhx_GetEnumValue;

Dynamic AL_obj::alhx_Listenerf;

Dynamic AL_obj::alhx_Listener3f;

Dynamic AL_obj::alhx_Listenerfv;

Dynamic AL_obj::alhx_Listeneri;

Dynamic AL_obj::alhx_Listener3i;

Dynamic AL_obj::alhx_Listeneriv;

Dynamic AL_obj::alhx_GetListenerf;

Dynamic AL_obj::alhx_GetListener3f;

Dynamic AL_obj::alhx_GetListenerfv;

Dynamic AL_obj::alhx_GetListeneri;

Dynamic AL_obj::alhx_GetListener3i;

Dynamic AL_obj::alhx_GetListeneriv;

Dynamic AL_obj::alhx_GenSources;

Dynamic AL_obj::alhx_DeleteSources;

Dynamic AL_obj::alhx_IsSource;

Dynamic AL_obj::alhx_Sourcef;

Dynamic AL_obj::alhx_Source3f;

Dynamic AL_obj::alhx_Sourcefv;

Dynamic AL_obj::alhx_Sourcei;

Dynamic AL_obj::alhx_Source3i;

Dynamic AL_obj::alhx_Sourceiv;

Dynamic AL_obj::alhx_GetSourcef;

Dynamic AL_obj::alhx_GetSource3f;

Dynamic AL_obj::alhx_GetSourcefv;

Dynamic AL_obj::alhx_GetSourcei;

Dynamic AL_obj::alhx_GetSource3i;

Dynamic AL_obj::alhx_GetSourceiv;

Dynamic AL_obj::alhx_SourcePlayv;

Dynamic AL_obj::alhx_SourceStopv;

Dynamic AL_obj::alhx_SourceRewindv;

Dynamic AL_obj::alhx_SourcePausev;

Dynamic AL_obj::alhx_SourceQueueBuffers;

Dynamic AL_obj::alhx_SourceUnqueueBuffers;

Dynamic AL_obj::alhx_SourcePlay;

Dynamic AL_obj::alhx_SourceStop;

Dynamic AL_obj::alhx_SourceRewind;

Dynamic AL_obj::alhx_SourcePause;

Dynamic AL_obj::alhx_GenBuffers;

Dynamic AL_obj::alhx_DeleteBuffers;

Dynamic AL_obj::alhx_IsBuffer;

Dynamic AL_obj::alhx_BufferData;

Dynamic AL_obj::alhx_Bufferf;

Dynamic AL_obj::alhx_Buffer3f;

Dynamic AL_obj::alhx_Bufferfv;

Dynamic AL_obj::alhx_Bufferi;

Dynamic AL_obj::alhx_Buffer3i;

Dynamic AL_obj::alhx_Bufferiv;

Dynamic AL_obj::alhx_GetBufferf;

Dynamic AL_obj::alhx_GetBuffer3f;

Dynamic AL_obj::alhx_GetBufferfv;

Dynamic AL_obj::alhx_GetBufferi;

Dynamic AL_obj::alhx_GetBuffer3i;

Dynamic AL_obj::alhx_GetBufferiv;

Dynamic AL_obj::alhx_GenSource;

Dynamic AL_obj::alhx_DeleteSource;

Dynamic AL_obj::alhx_GenBuffer;

Dynamic AL_obj::alhx_DeleteBuffer;


AL_obj::AL_obj()
{
}

bool AL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { outValue = NONE; return true;  }
		if (HX_FIELD_EQ(inName,"TRUE") ) { outValue = TRUE; return true;  }
		if (HX_FIELD_EQ(inName,"GAIN") ) { outValue = GAIN; return true;  }
		if (HX_FIELD_EQ(inName,"BITS") ) { outValue = BITS; return true;  }
		if (HX_FIELD_EQ(inName,"SIZE") ) { outValue = SIZE; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { outValue = FALSE; return true;  }
		if (HX_FIELD_EQ(inName,"PITCH") ) { outValue = PITCH; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { outValue = BUFFER; return true;  }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { outValue = PAUSED; return true;  }
		if (HX_FIELD_EQ(inName,"STATIC") ) { outValue = STATIC; return true;  }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { outValue = VENDOR; return true;  }
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { outValue = LOOPING; return true;  }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { outValue = INITIAL; return true;  }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { outValue = PLAYING; return true;  }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { outValue = STOPPED; return true;  }
		if (HX_FIELD_EQ(inName,"VERSION") ) { outValue = VERSION; return true;  }
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcef") ) { outValue = sourcef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcei") ) { outValue = sourcei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferf") ) { outValue = bufferf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferi") ) { outValue = bufferi_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { outValue = POSITION; return true;  }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { outValue = VELOCITY; return true;  }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { outValue = MIN_GAIN; return true;  }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { outValue = MAX_GAIN; return true;  }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { outValue = CHANNELS; return true;  }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { outValue = NO_ERROR; return true;  }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { outValue = RENDERER; return true;  }
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isSource") ) { outValue = isSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"source3f") ) { outValue = source3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { outValue = sourcefv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"source3i") ) { outValue = source3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { outValue = sourceiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { outValue = isBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"buffer3f") ) { outValue = buffer3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { outValue = bufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { outValue = buffer3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { outValue = bufferiv_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { outValue = DIRECTION; return true;  }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { outValue = STREAMING; return true;  }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { outValue = FREQUENCY; return true;  }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { outValue = isEnabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { outValue = getFloatv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDouble") ) { outValue = getDouble_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listenerf") ) { outValue = listenerf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listeneri") ) { outValue = listeneri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genSource") ) { outValue = genSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genBuffer") ) { outValue = genBuffer_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { outValue = SEC_OFFSET; return true;  }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { outValue = EXTENSIONS; return true;  }
		if (HX_FIELD_EQ(inName,"getDoublev") ) { outValue = getDoublev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { outValue = getBoolean_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInteger") ) { outValue = getInteger_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listener3f") ) { outValue = listener3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { outValue = listenerfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listener3i") ) { outValue = listener3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { outValue = listeneriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genSources") ) { outValue = genSources_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { outValue = getSourcef_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { outValue = getSourcei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { outValue = sourcePlay_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { outValue = sourceStop_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { outValue = genBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { outValue = getBufferf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { outValue = getBufferi_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { outValue = ORIENTATION; return true;  }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { outValue = BYTE_OFFSET; return true;  }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { outValue = SOURCE_TYPE; return true;  }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { outValue = getBooleanv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { outValue = getSource3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { outValue = getSourcefv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { outValue = getSource3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { outValue = getSourceiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { outValue = sourcePlayv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { outValue = sourceStopv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { outValue = sourcePause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { outValue = getBuffer3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { outValue = getBufferfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { outValue = getBuffer3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { outValue = getBufferiv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Enable") ) { outValue = alhx_Enable; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { outValue = SOURCE_STATE; return true;  }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { outValue = MAX_DISTANCE; return true;  }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { outValue = UNDETERMINED; return true;  }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { outValue = FORMAT_MONO8; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { outValue = INVALID_NAME; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { outValue = INVALID_ENUM; return true;  }
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { outValue = speedOfSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { outValue = getEnumValue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { outValue = getListenerf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { outValue = getListeneri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { outValue = sourcePausev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { outValue = sourceRewind_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSource") ) { outValue = deleteSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { outValue = deleteBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Disable") ) { outValue = alhx_Disable; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Sourcef") ) { outValue = alhx_Sourcef; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Sourcei") ) { outValue = alhx_Sourcei; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Bufferf") ) { outValue = alhx_Bufferf; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Bufferi") ) { outValue = alhx_Bufferi; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { outValue = SAMPLE_OFFSET; return true;  }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { outValue = FORMAT_MONO16; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { outValue = INVALID_VALUE; return true;  }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { outValue = OUT_OF_MEMORY; return true;  }
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { outValue = dopplerFactor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { outValue = distanceModel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { outValue = getListener3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { outValue = getListenerfv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { outValue = getListener3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { outValue = getListeneriv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { outValue = deleteSources_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { outValue = sourceRewindv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { outValue = deleteBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetFloat") ) { outValue = alhx_GetFloat; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetError") ) { outValue = alhx_GetError; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_IsSource") ) { outValue = alhx_IsSource; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Source3f") ) { outValue = alhx_Source3f; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Sourcefv") ) { outValue = alhx_Sourcefv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Source3i") ) { outValue = alhx_Source3i; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Sourceiv") ) { outValue = alhx_Sourceiv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_IsBuffer") ) { outValue = alhx_IsBuffer; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Buffer3f") ) { outValue = alhx_Buffer3f; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Bufferfv") ) { outValue = alhx_Bufferfv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Buffer3i") ) { outValue = alhx_Buffer3i; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Bufferiv") ) { outValue = alhx_Bufferiv; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { outValue = BUFFERS_QUEUED; return true;  }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { outValue = ROLLOFF_FACTOR; return true;  }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { outValue = FORMAT_STEREO8; return true;  }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { outValue = DOPPLER_FACTOR; return true;  }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { outValue = SPEED_OF_SOUND; return true;  }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { outValue = DISTANCE_MODEL; return true;  }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { outValue = getProcAddress_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_IsEnabled") ) { outValue = alhx_IsEnabled; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetString") ) { outValue = alhx_GetString; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetFloatv") ) { outValue = alhx_GetFloatv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetDouble") ) { outValue = alhx_GetDouble; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Listenerf") ) { outValue = alhx_Listenerf; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Listeneri") ) { outValue = alhx_Listeneri; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GenSource") ) { outValue = alhx_GenSource; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GenBuffer") ) { outValue = alhx_GenBuffer; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { outValue = SOURCE_RELATIVE; return true;  }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { outValue = CONE_OUTER_GAIN; return true;  }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { outValue = FORMAT_STEREO16; return true;  }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { outValue = LINEAR_DISTANCE; return true;  }
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { outValue = dopplerVelocity_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getErrorMeaning") ) { outValue = getErrorMeaning_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetDoublev") ) { outValue = alhx_GetDoublev; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetBoolean") ) { outValue = alhx_GetBoolean; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetInteger") ) { outValue = alhx_GetInteger; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Listener3f") ) { outValue = alhx_Listener3f; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Listenerfv") ) { outValue = alhx_Listenerfv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Listener3i") ) { outValue = alhx_Listener3i; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_Listeneriv") ) { outValue = alhx_Listeneriv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GenSources") ) { outValue = alhx_GenSources; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetSourcef") ) { outValue = alhx_GetSourcef; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetSourcei") ) { outValue = alhx_GetSourcei; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourcePlay") ) { outValue = alhx_SourcePlay; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourceStop") ) { outValue = alhx_SourceStop; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GenBuffers") ) { outValue = alhx_GenBuffers; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_BufferData") ) { outValue = alhx_BufferData; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferf") ) { outValue = alhx_GetBufferf; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferi") ) { outValue = alhx_GetBufferi; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { outValue = CONE_INNER_ANGLE; return true;  }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { outValue = CONE_OUTER_ANGLE; return true;  }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { outValue = DOPPLER_VELOCITY; return true;  }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { outValue = INVERSE_DISTANCE; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetBooleanv") ) { outValue = alhx_GetBooleanv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetIntegerv") ) { outValue = alhx_GetIntegerv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetSource3f") ) { outValue = alhx_GetSource3f; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetSourcefv") ) { outValue = alhx_GetSourcefv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetSource3i") ) { outValue = alhx_GetSource3i; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetSourceiv") ) { outValue = alhx_GetSourceiv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourcePlayv") ) { outValue = alhx_SourcePlayv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourceStopv") ) { outValue = alhx_SourceStopv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourcePause") ) { outValue = alhx_SourcePause; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetBuffer3f") ) { outValue = alhx_GetBuffer3f; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferfv") ) { outValue = alhx_GetBufferfv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetBuffer3i") ) { outValue = alhx_GetBuffer3i; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetBufferiv") ) { outValue = alhx_GetBufferiv; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { outValue = BUFFERS_PROCESSED; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { outValue = INVALID_OPERATION; return true;  }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { outValue = EXPONENT_DISTANCE; return true;  }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { outValue = sourceQueueBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SpeedOfSound") ) { outValue = alhx_SpeedOfSound; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetEnumValue") ) { outValue = alhx_GetEnumValue; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetListenerf") ) { outValue = alhx_GetListenerf; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetListeneri") ) { outValue = alhx_GetListeneri; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourcePausev") ) { outValue = alhx_SourcePausev; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourceRewind") ) { outValue = alhx_SourceRewind; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_DeleteSource") ) { outValue = alhx_DeleteSource; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_DeleteBuffer") ) { outValue = alhx_DeleteBuffer; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { outValue = REFERENCE_DISTANCE; return true;  }
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { outValue = isExtensionPresent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { outValue = sourceQueueBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_DopplerFactor") ) { outValue = alhx_DopplerFactor; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_DistanceModel") ) { outValue = alhx_DistanceModel; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetListener3f") ) { outValue = alhx_GetListener3f; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetListenerfv") ) { outValue = alhx_GetListenerfv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetListener3i") ) { outValue = alhx_GetListener3i; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetListeneriv") ) { outValue = alhx_GetListeneriv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_DeleteSources") ) { outValue = alhx_DeleteSources; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourceRewindv") ) { outValue = alhx_SourceRewindv; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_DeleteBuffers") ) { outValue = alhx_DeleteBuffers; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { outValue = sourceUnqueueBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alhx_GetProcAddress") ) { outValue = alhx_GetProcAddress; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { outValue = sourceUnqueueBuffers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_NAME_MEANING") ) { outValue = INVALID_NAME_MEANING; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM_MEANING") ) { outValue = INVALID_ENUM_MEANING; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_DopplerVelocity") ) { outValue = alhx_DopplerVelocity; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE_MEANING") ) { outValue = INVALID_VALUE_MEANING; return true;  }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY_MEANING") ) { outValue = OUT_OF_MEMORY_MEANING; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { outValue = LINEAR_DISTANCE_CLAMPED; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_IsExtensionPresent") ) { outValue = alhx_IsExtensionPresent; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourceQueueBuffers") ) { outValue = alhx_SourceQueueBuffers; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { outValue = INVERSE_DISTANCE_CLAMPED; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { outValue = EXPONENT_DISTANCE_CLAMPED; return true;  }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION_MEANING") ) { outValue = INVALID_OPERATION_MEANING; return true;  }
		if (HX_FIELD_EQ(inName,"alhx_SourceUnqueueBuffers") ) { outValue = alhx_SourceUnqueueBuffers; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &AL_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &AL_obj::FALSE,HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(void *) &AL_obj::TRUE,HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(void *) &AL_obj::SOURCE_RELATIVE,HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe")},
	{hx::fsInt,(void *) &AL_obj::CONE_INNER_ANGLE,HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93")},
	{hx::fsInt,(void *) &AL_obj::CONE_OUTER_ANGLE,HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc")},
	{hx::fsInt,(void *) &AL_obj::PITCH,HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40")},
	{hx::fsInt,(void *) &AL_obj::POSITION,HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24")},
	{hx::fsInt,(void *) &AL_obj::DIRECTION,HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b")},
	{hx::fsInt,(void *) &AL_obj::VELOCITY,HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78")},
	{hx::fsInt,(void *) &AL_obj::LOOPING,HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0")},
	{hx::fsInt,(void *) &AL_obj::BUFFER,HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83")},
	{hx::fsInt,(void *) &AL_obj::GAIN,HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f")},
	{hx::fsInt,(void *) &AL_obj::MIN_GAIN,HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21")},
	{hx::fsInt,(void *) &AL_obj::MAX_GAIN,HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4")},
	{hx::fsInt,(void *) &AL_obj::ORIENTATION,HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4")},
	{hx::fsInt,(void *) &AL_obj::SOURCE_STATE,HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab")},
	{hx::fsInt,(void *) &AL_obj::INITIAL,HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b")},
	{hx::fsInt,(void *) &AL_obj::PLAYING,HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09")},
	{hx::fsInt,(void *) &AL_obj::PAUSED,HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2")},
	{hx::fsInt,(void *) &AL_obj::STOPPED,HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3")},
	{hx::fsInt,(void *) &AL_obj::BUFFERS_QUEUED,HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71")},
	{hx::fsInt,(void *) &AL_obj::BUFFERS_PROCESSED,HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac")},
	{hx::fsInt,(void *) &AL_obj::REFERENCE_DISTANCE,HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a")},
	{hx::fsInt,(void *) &AL_obj::ROLLOFF_FACTOR,HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56")},
	{hx::fsInt,(void *) &AL_obj::CONE_OUTER_GAIN,HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3")},
	{hx::fsInt,(void *) &AL_obj::MAX_DISTANCE,HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5")},
	{hx::fsInt,(void *) &AL_obj::SEC_OFFSET,HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac")},
	{hx::fsInt,(void *) &AL_obj::SAMPLE_OFFSET,HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4")},
	{hx::fsInt,(void *) &AL_obj::BYTE_OFFSET,HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36")},
	{hx::fsInt,(void *) &AL_obj::SOURCE_TYPE,HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf")},
	{hx::fsInt,(void *) &AL_obj::STATIC,HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8")},
	{hx::fsInt,(void *) &AL_obj::STREAMING,HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1")},
	{hx::fsInt,(void *) &AL_obj::UNDETERMINED,HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_MONO8,HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_MONO16,HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_STEREO8,HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda")},
	{hx::fsInt,(void *) &AL_obj::FORMAT_STEREO16,HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32")},
	{hx::fsInt,(void *) &AL_obj::FREQUENCY,HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(void *) &AL_obj::BITS,HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b")},
	{hx::fsInt,(void *) &AL_obj::CHANNELS,HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4")},
	{hx::fsInt,(void *) &AL_obj::SIZE,HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37")},
	{hx::fsInt,(void *) &AL_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &AL_obj::INVALID_NAME,HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19")},
	{hx::fsInt,(void *) &AL_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &AL_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &AL_obj::INVALID_OPERATION,HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(void *) &AL_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &AL_obj::VENDOR,HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(void *) &AL_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(void *) &AL_obj::RENDERER,HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(void *) &AL_obj::EXTENSIONS,HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(void *) &AL_obj::DOPPLER_FACTOR,HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56")},
	{hx::fsInt,(void *) &AL_obj::SPEED_OF_SOUND,HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba")},
	{hx::fsInt,(void *) &AL_obj::DOPPLER_VELOCITY,HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d")},
	{hx::fsInt,(void *) &AL_obj::DISTANCE_MODEL,HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00")},
	{hx::fsInt,(void *) &AL_obj::INVERSE_DISTANCE,HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d")},
	{hx::fsInt,(void *) &AL_obj::INVERSE_DISTANCE_CLAMPED,HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28")},
	{hx::fsInt,(void *) &AL_obj::LINEAR_DISTANCE,HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14")},
	{hx::fsInt,(void *) &AL_obj::LINEAR_DISTANCE_CLAMPED,HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2")},
	{hx::fsInt,(void *) &AL_obj::EXPONENT_DISTANCE,HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8")},
	{hx::fsInt,(void *) &AL_obj::EXPONENT_DISTANCE_CLAMPED,HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57")},
	{hx::fsString,(void *) &AL_obj::INVALID_NAME_MEANING,HX_HCSTRING("INVALID_NAME_MEANING","\x11","\x20","\x12","\xc6")},
	{hx::fsString,(void *) &AL_obj::INVALID_ENUM_MEANING,HX_HCSTRING("INVALID_ENUM_MEANING","\xc7","\xbe","\x81","\x9b")},
	{hx::fsString,(void *) &AL_obj::INVALID_VALUE_MEANING,HX_HCSTRING("INVALID_VALUE_MEANING","\xc7","\x32","\xcc","\x41")},
	{hx::fsString,(void *) &AL_obj::INVALID_OPERATION_MEANING,HX_HCSTRING("INVALID_OPERATION_MEANING","\x7d","\xa1","\x16","\x56")},
	{hx::fsString,(void *) &AL_obj::OUT_OF_MEMORY_MEANING,HX_HCSTRING("OUT_OF_MEMORY_MEANING","\x36","\xc3","\x9a","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_DopplerFactor,HX_HCSTRING("alhx_DopplerFactor","\xf9","\x1f","\x85","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_DopplerVelocity,HX_HCSTRING("alhx_DopplerVelocity","\xc7","\x27","\xc5","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SpeedOfSound,HX_HCSTRING("alhx_SpeedOfSound","\xd5","\xac","\xce","\x22")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_DistanceModel,HX_HCSTRING("alhx_DistanceModel","\x50","\x32","\x61","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Enable,HX_HCSTRING("alhx_Enable","\xe7","\x90","\xfc","\x10")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Disable,HX_HCSTRING("alhx_Disable","\x04","\x9f","\x29","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_IsEnabled,HX_HCSTRING("alhx_IsEnabled","\xd3","\x35","\x8d","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetString,HX_HCSTRING("alhx_GetString","\x23","\x66","\xe4","\xd9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetBooleanv,HX_HCSTRING("alhx_GetBooleanv","\xa0","\x1e","\x4a","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetIntegerv,HX_HCSTRING("alhx_GetIntegerv","\xca","\xfe","\x65","\xad")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetFloatv,HX_HCSTRING("alhx_GetFloatv","\xac","\x60","\x0a","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetDoublev,HX_HCSTRING("alhx_GetDoublev","\xb3","\xee","\xfb","\x13")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetBoolean,HX_HCSTRING("alhx_GetBoolean","\x16","\x55","\x00","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetInteger,HX_HCSTRING("alhx_GetInteger","\x2c","\x28","\x1d","\xec")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetFloat,HX_HCSTRING("alhx_GetFloat","\x8a","\x18","\xab","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetDouble,HX_HCSTRING("alhx_GetDouble","\x63","\x68","\x7f","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetError,HX_HCSTRING("alhx_GetError","\xb6","\x1e","\x3e","\x9c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_IsExtensionPresent,HX_HCSTRING("alhx_IsExtensionPresent","\xaa","\xe1","\x9b","\xd8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetProcAddress,HX_HCSTRING("alhx_GetProcAddress","\x2c","\xca","\x15","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetEnumValue,HX_HCSTRING("alhx_GetEnumValue","\x9e","\x62","\x0a","\x50")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Listenerf,HX_HCSTRING("alhx_Listenerf","\x8e","\x19","\xec","\x3f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Listener3f,HX_HCSTRING("alhx_Listener3f","\xab","\x16","\xaa","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Listenerfv,HX_HCSTRING("alhx_Listenerfv","\x28","\x43","\xaa","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Listeneri,HX_HCSTRING("alhx_Listeneri","\x91","\x19","\xec","\x3f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Listener3i,HX_HCSTRING("alhx_Listener3i","\xae","\x16","\xaa","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Listeneriv,HX_HCSTRING("alhx_Listeneriv","\xc5","\x45","\xaa","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetListenerf,HX_HCSTRING("alhx_GetListenerf","\x60","\xc7","\x91","\x1b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetListener3f,HX_HCSTRING("alhx_GetListener3f","\x99","\x80","\xfc","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetListenerfv,HX_HCSTRING("alhx_GetListenerfv","\x16","\xad","\xfc","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetListeneri,HX_HCSTRING("alhx_GetListeneri","\x63","\xc7","\x91","\x1b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetListener3i,HX_HCSTRING("alhx_GetListener3i","\x9c","\x80","\xfc","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetListeneriv,HX_HCSTRING("alhx_GetListeneriv","\xb3","\xaf","\xfc","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GenSources,HX_HCSTRING("alhx_GenSources","\xec","\xcc","\x1b","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_DeleteSources,HX_HCSTRING("alhx_DeleteSources","\x69","\x94","\x52","\x96")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_IsSource,HX_HCSTRING("alhx_IsSource","\xc9","\x8f","\xd8","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Sourcef,HX_HCSTRING("alhx_Sourcef","\x47","\x44","\x1a","\x07")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Source3f,HX_HCSTRING("alhx_Source3f","\xd2","\x4d","\xe1","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Sourcefv,HX_HCSTRING("alhx_Sourcefv","\x4f","\x7a","\xe1","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Sourcei,HX_HCSTRING("alhx_Sourcei","\x4a","\x44","\x1a","\x07")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Source3i,HX_HCSTRING("alhx_Source3i","\xd5","\x4d","\xe1","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Sourceiv,HX_HCSTRING("alhx_Sourceiv","\xec","\x7c","\xe1","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetSourcef,HX_HCSTRING("alhx_GetSourcef","\x99","\x79","\x4a","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetSource3f,HX_HCSTRING("alhx_GetSource3f","\x40","\xc0","\xdf","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetSourcefv,HX_HCSTRING("alhx_GetSourcefv","\xbd","\xec","\xdf","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetSourcei,HX_HCSTRING("alhx_GetSourcei","\x9c","\x79","\x4a","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetSource3i,HX_HCSTRING("alhx_GetSource3i","\x43","\xc0","\xdf","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetSourceiv,HX_HCSTRING("alhx_GetSourceiv","\x5a","\xef","\xdf","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourcePlayv,HX_HCSTRING("alhx_SourcePlayv","\x43","\xc0","\xdb","\x59")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourceStopv,HX_HCSTRING("alhx_SourceStopv","\x75","\xca","\x63","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourceRewindv,HX_HCSTRING("alhx_SourceRewindv","\x9c","\x9c","\x61","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourcePausev,HX_HCSTRING("alhx_SourcePausev","\x5f","\xc1","\x37","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourceQueueBuffers,HX_HCSTRING("alhx_SourceQueueBuffers","\xc1","\xc3","\xcd","\x66")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourceUnqueueBuffers,HX_HCSTRING("alhx_SourceUnqueueBuffers","\x5a","\x41","\xb6","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourcePlay,HX_HCSTRING("alhx_SourcePlay","\xd3","\xf8","\x5d","\xf8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourceStop,HX_HCSTRING("alhx_SourceStop","\xe1","\xba","\x5f","\xfa")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourceRewind,HX_HCSTRING("alhx_SourceRewind","\x9a","\xaa","\xd3","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_SourcePause,HX_HCSTRING("alhx_SourcePause","\x37","\x8f","\xa5","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GenBuffers,HX_HCSTRING("alhx_GenBuffers","\x27","\x61","\x63","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_DeleteBuffers,HX_HCSTRING("alhx_DeleteBuffers","\xa4","\x28","\x9a","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_IsBuffer,HX_HCSTRING("alhx_IsBuffer","\xee","\x9b","\x3b","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_BufferData,HX_HCSTRING("alhx_BufferData","\xae","\xa3","\x13","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Bufferf,HX_HCSTRING("alhx_Bufferf","\x82","\xd8","\x61","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Buffer3f,HX_HCSTRING("alhx_Buffer3f","\x37","\x6d","\x3b","\x76")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Bufferfv,HX_HCSTRING("alhx_Bufferfv","\xb4","\x99","\x3b","\x76")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Bufferi,HX_HCSTRING("alhx_Bufferi","\x85","\xd8","\x61","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Buffer3i,HX_HCSTRING("alhx_Buffer3i","\x3a","\x6d","\x3b","\x76")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_Bufferiv,HX_HCSTRING("alhx_Bufferiv","\x51","\x9c","\x3b","\x76")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetBufferf,HX_HCSTRING("alhx_GetBufferf","\xd4","\x0d","\x92","\x86")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetBuffer3f,HX_HCSTRING("alhx_GetBuffer3f","\xa5","\xdf","\x39","\x39")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetBufferfv,HX_HCSTRING("alhx_GetBufferfv","\x22","\x0c","\x3a","\x39")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetBufferi,HX_HCSTRING("alhx_GetBufferi","\xd7","\x0d","\x92","\x86")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetBuffer3i,HX_HCSTRING("alhx_GetBuffer3i","\xa8","\xdf","\x39","\x39")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GetBufferiv,HX_HCSTRING("alhx_GetBufferiv","\xbf","\x0e","\x3a","\x39")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GenSource,HX_HCSTRING("alhx_GenSource","\xa7","\x25","\x65","\x01")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_DeleteSource,HX_HCSTRING("alhx_DeleteSource","\xca","\x9c","\x76","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_GenBuffer,HX_HCSTRING("alhx_GenBuffer","\xcc","\x31","\xc8","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AL_obj::alhx_DeleteBuffer,HX_HCSTRING("alhx_DeleteBuffer","\xef","\xa8","\xd9","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_MARK_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_MARK_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_MARK_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_MARK_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_MARK_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_MARK_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_MARK_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_MARK_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_MARK_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_MARK_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_MARK_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_MARK_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_MARK_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_MARK_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_MARK_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_NAME_MEANING,"INVALID_NAME_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_ENUM_MEANING,"INVALID_ENUM_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_VALUE_MEANING,"INVALID_VALUE_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_OPERATION_MEANING,"INVALID_OPERATION_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::OUT_OF_MEMORY_MEANING,"OUT_OF_MEMORY_MEANING");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DopplerFactor,"alhx_DopplerFactor");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DopplerVelocity,"alhx_DopplerVelocity");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SpeedOfSound,"alhx_SpeedOfSound");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DistanceModel,"alhx_DistanceModel");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Enable,"alhx_Enable");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Disable,"alhx_Disable");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_IsEnabled,"alhx_IsEnabled");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetString,"alhx_GetString");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBooleanv,"alhx_GetBooleanv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetIntegerv,"alhx_GetIntegerv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetFloatv,"alhx_GetFloatv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetDoublev,"alhx_GetDoublev");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBoolean,"alhx_GetBoolean");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetInteger,"alhx_GetInteger");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetFloat,"alhx_GetFloat");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetDouble,"alhx_GetDouble");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetError,"alhx_GetError");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_IsExtensionPresent,"alhx_IsExtensionPresent");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetProcAddress,"alhx_GetProcAddress");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetEnumValue,"alhx_GetEnumValue");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listenerf,"alhx_Listenerf");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listener3f,"alhx_Listener3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listenerfv,"alhx_Listenerfv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listeneri,"alhx_Listeneri");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listener3i,"alhx_Listener3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Listeneriv,"alhx_Listeneriv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListenerf,"alhx_GetListenerf");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListener3f,"alhx_GetListener3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListenerfv,"alhx_GetListenerfv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListeneri,"alhx_GetListeneri");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListener3i,"alhx_GetListener3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetListeneriv,"alhx_GetListeneriv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GenSources,"alhx_GenSources");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DeleteSources,"alhx_DeleteSources");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_IsSource,"alhx_IsSource");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Sourcef,"alhx_Sourcef");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Source3f,"alhx_Source3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Sourcefv,"alhx_Sourcefv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Sourcei,"alhx_Sourcei");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Source3i,"alhx_Source3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Sourceiv,"alhx_Sourceiv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSourcef,"alhx_GetSourcef");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSource3f,"alhx_GetSource3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSourcefv,"alhx_GetSourcefv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSourcei,"alhx_GetSourcei");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSource3i,"alhx_GetSource3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetSourceiv,"alhx_GetSourceiv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourcePlayv,"alhx_SourcePlayv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceStopv,"alhx_SourceStopv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceRewindv,"alhx_SourceRewindv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourcePausev,"alhx_SourcePausev");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceQueueBuffers,"alhx_SourceQueueBuffers");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceUnqueueBuffers,"alhx_SourceUnqueueBuffers");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourcePlay,"alhx_SourcePlay");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceStop,"alhx_SourceStop");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourceRewind,"alhx_SourceRewind");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_SourcePause,"alhx_SourcePause");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GenBuffers,"alhx_GenBuffers");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DeleteBuffers,"alhx_DeleteBuffers");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_IsBuffer,"alhx_IsBuffer");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_BufferData,"alhx_BufferData");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Bufferf,"alhx_Bufferf");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Buffer3f,"alhx_Buffer3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Bufferfv,"alhx_Bufferfv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Bufferi,"alhx_Bufferi");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Buffer3i,"alhx_Buffer3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_Bufferiv,"alhx_Bufferiv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBufferf,"alhx_GetBufferf");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBuffer3f,"alhx_GetBuffer3f");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBufferfv,"alhx_GetBufferfv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBufferi,"alhx_GetBufferi");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBuffer3i,"alhx_GetBuffer3i");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GetBufferiv,"alhx_GetBufferiv");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GenSource,"alhx_GenSource");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DeleteSource,"alhx_DeleteSource");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_GenBuffer,"alhx_GenBuffer");
	HX_MARK_MEMBER_NAME(AL_obj::alhx_DeleteBuffer,"alhx_DeleteBuffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_VISIT_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_VISIT_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_VISIT_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_VISIT_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_VISIT_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_VISIT_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_VISIT_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_VISIT_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_VISIT_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_VISIT_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_VISIT_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_VISIT_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_VISIT_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_VISIT_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_NAME_MEANING,"INVALID_NAME_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_ENUM_MEANING,"INVALID_ENUM_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_VALUE_MEANING,"INVALID_VALUE_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_OPERATION_MEANING,"INVALID_OPERATION_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::OUT_OF_MEMORY_MEANING,"OUT_OF_MEMORY_MEANING");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DopplerFactor,"alhx_DopplerFactor");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DopplerVelocity,"alhx_DopplerVelocity");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SpeedOfSound,"alhx_SpeedOfSound");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DistanceModel,"alhx_DistanceModel");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Enable,"alhx_Enable");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Disable,"alhx_Disable");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_IsEnabled,"alhx_IsEnabled");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetString,"alhx_GetString");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBooleanv,"alhx_GetBooleanv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetIntegerv,"alhx_GetIntegerv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetFloatv,"alhx_GetFloatv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetDoublev,"alhx_GetDoublev");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBoolean,"alhx_GetBoolean");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetInteger,"alhx_GetInteger");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetFloat,"alhx_GetFloat");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetDouble,"alhx_GetDouble");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetError,"alhx_GetError");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_IsExtensionPresent,"alhx_IsExtensionPresent");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetProcAddress,"alhx_GetProcAddress");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetEnumValue,"alhx_GetEnumValue");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listenerf,"alhx_Listenerf");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listener3f,"alhx_Listener3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listenerfv,"alhx_Listenerfv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listeneri,"alhx_Listeneri");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listener3i,"alhx_Listener3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Listeneriv,"alhx_Listeneriv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListenerf,"alhx_GetListenerf");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListener3f,"alhx_GetListener3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListenerfv,"alhx_GetListenerfv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListeneri,"alhx_GetListeneri");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListener3i,"alhx_GetListener3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetListeneriv,"alhx_GetListeneriv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GenSources,"alhx_GenSources");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DeleteSources,"alhx_DeleteSources");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_IsSource,"alhx_IsSource");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Sourcef,"alhx_Sourcef");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Source3f,"alhx_Source3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Sourcefv,"alhx_Sourcefv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Sourcei,"alhx_Sourcei");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Source3i,"alhx_Source3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Sourceiv,"alhx_Sourceiv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSourcef,"alhx_GetSourcef");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSource3f,"alhx_GetSource3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSourcefv,"alhx_GetSourcefv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSourcei,"alhx_GetSourcei");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSource3i,"alhx_GetSource3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetSourceiv,"alhx_GetSourceiv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourcePlayv,"alhx_SourcePlayv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceStopv,"alhx_SourceStopv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceRewindv,"alhx_SourceRewindv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourcePausev,"alhx_SourcePausev");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceQueueBuffers,"alhx_SourceQueueBuffers");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceUnqueueBuffers,"alhx_SourceUnqueueBuffers");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourcePlay,"alhx_SourcePlay");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceStop,"alhx_SourceStop");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourceRewind,"alhx_SourceRewind");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_SourcePause,"alhx_SourcePause");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GenBuffers,"alhx_GenBuffers");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DeleteBuffers,"alhx_DeleteBuffers");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_IsBuffer,"alhx_IsBuffer");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_BufferData,"alhx_BufferData");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Bufferf,"alhx_Bufferf");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Buffer3f,"alhx_Buffer3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Bufferfv,"alhx_Bufferfv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Bufferi,"alhx_Bufferi");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Buffer3i,"alhx_Buffer3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_Bufferiv,"alhx_Bufferiv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBufferf,"alhx_GetBufferf");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBuffer3f,"alhx_GetBuffer3f");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBufferfv,"alhx_GetBufferfv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBufferi,"alhx_GetBufferi");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBuffer3i,"alhx_GetBuffer3i");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GetBufferiv,"alhx_GetBufferiv");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GenSource,"alhx_GenSource");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DeleteSource,"alhx_DeleteSource");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_GenBuffer,"alhx_GenBuffer");
	HX_VISIT_MEMBER_NAME(AL_obj::alhx_DeleteBuffer,"alhx_DeleteBuffer");
};

#endif

hx::Class AL_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"),
	HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"),
	HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe"),
	HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93"),
	HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc"),
	HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40"),
	HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24"),
	HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b"),
	HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78"),
	HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0"),
	HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"),
	HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f"),
	HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21"),
	HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4"),
	HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4"),
	HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab"),
	HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b"),
	HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09"),
	HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2"),
	HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3"),
	HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71"),
	HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac"),
	HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a"),
	HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56"),
	HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3"),
	HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5"),
	HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac"),
	HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4"),
	HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36"),
	HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf"),
	HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8"),
	HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1"),
	HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50"),
	HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a"),
	HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6"),
	HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda"),
	HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32"),
	HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"),
	HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b"),
	HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4"),
	HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56"),
	HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba"),
	HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d"),
	HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00"),
	HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d"),
	HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28"),
	HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14"),
	HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2"),
	HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8"),
	HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57"),
	HX_HCSTRING("dopplerFactor","\xdd","\x2d","\x05","\x6f"),
	HX_HCSTRING("dopplerVelocity","\xab","\x76","\xcf","\x06"),
	HX_HCSTRING("speedOfSound","\x71","\xe7","\x21","\x0a"),
	HX_HCSTRING("distanceModel","\x34","\x40","\xe1","\xd3"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("getBooleanv","\x84","\x2b","\x02","\xe7"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getFloatv","\x90","\xac","\xac","\xbd"),
	HX_HCSTRING("getDoublev","\x4f","\x0a","\x5c","\x8e"),
	HX_HCSTRING("getBoolean","\xb2","\x70","\x60","\xcd"),
	HX_HCSTRING("getInteger","\xc8","\x43","\x7d","\x66"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("isExtensionPresent","\x46","\xf9","\x2a","\xb4"),
	HX_HCSTRING("getProcAddress","\xc8","\xe3","\xa1","\x89"),
	HX_HCSTRING("getEnumValue","\x3a","\x9d","\x5d","\x37"),
	HX_HCSTRING("listenerf","\x72","\x65","\x8e","\xf3"),
	HX_HCSTRING("listener3f","\x47","\x32","\x0a","\x29"),
	HX_HCSTRING("listenerfv","\xc4","\x5e","\x0a","\x29"),
	HX_HCSTRING("listeneri","\x75","\x65","\x8e","\xf3"),
	HX_HCSTRING("listener3i","\x4a","\x32","\x0a","\x29"),
	HX_HCSTRING("listeneriv","\x61","\x61","\x0a","\x29"),
	HX_HCSTRING("getListenerf","\xfc","\x01","\xe5","\x02"),
	HX_HCSTRING("getListener3f","\x7d","\x8e","\x7c","\x85"),
	HX_HCSTRING("getListenerfv","\xfa","\xba","\x7c","\x85"),
	HX_HCSTRING("getListeneri","\xff","\x01","\xe5","\x02"),
	HX_HCSTRING("getListener3i","\x80","\x8e","\x7c","\x85"),
	HX_HCSTRING("getListeneriv","\x97","\xbd","\x7c","\x85"),
	HX_HCSTRING("genSources","\x88","\xe8","\x7b","\xb1"),
	HX_HCSTRING("deleteSources","\x4d","\xa2","\xd2","\x17"),
	HX_HCSTRING("isSource","\x65","\x4c","\x9b","\x8a"),
	HX_HCSTRING("sourcef","\x2b","\x0f","\x49","\xb9"),
	HX_HCSTRING("source3f","\x6e","\x0a","\xa4","\x66"),
	HX_HCSTRING("sourcefv","\xeb","\x36","\xa4","\x66"),
	HX_HCSTRING("sourcei","\x2e","\x0f","\x49","\xb9"),
	HX_HCSTRING("source3i","\x71","\x0a","\xa4","\x66"),
	HX_HCSTRING("sourceiv","\x88","\x39","\xa4","\x66"),
	HX_HCSTRING("getSourcef","\x35","\x95","\xaa","\x08"),
	HX_HCSTRING("getSource3f","\x24","\xcd","\x97","\x8c"),
	HX_HCSTRING("getSourcefv","\xa1","\xf9","\x97","\x8c"),
	HX_HCSTRING("getSourcei","\x38","\x95","\xaa","\x08"),
	HX_HCSTRING("getSource3i","\x27","\xcd","\x97","\x8c"),
	HX_HCSTRING("getSourceiv","\x3e","\xfc","\x97","\x8c"),
	HX_HCSTRING("sourcePlayv","\x27","\xcd","\x93","\xf3"),
	HX_HCSTRING("sourceStopv","\x59","\xd7","\x1b","\xb3"),
	HX_HCSTRING("sourceRewindv","\x80","\xaa","\xe1","\x00"),
	HX_HCSTRING("sourcePausev","\xfb","\xfb","\x8a","\xe5"),
	HX_HCSTRING("sourcePlay","\x6f","\x14","\xbe","\x72"),
	HX_HCSTRING("sourceStop","\x7d","\xd6","\xbf","\x74"),
	HX_HCSTRING("sourceRewind","\x36","\xe5","\x26","\x01"),
	HX_HCSTRING("sourcePause","\x1b","\x9c","\x5d","\xec"),
	HX_HCSTRING("sourceQueueBuffers","\x5d","\xdb","\x5c","\x42"),
	HX_HCSTRING("sourceUnqueueBuffers","\xf6","\x77","\xef","\x93"),
	HX_HCSTRING("genBuffers","\xc3","\x7c","\xc3","\xa9"),
	HX_HCSTRING("deleteBuffers","\x88","\x36","\x1a","\x10"),
	HX_HCSTRING("isBuffer","\x8a","\x58","\xfe","\x28"),
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("bufferf","\x66","\xa3","\x90","\xb1"),
	HX_HCSTRING("buffer3f","\xd3","\x29","\xfe","\xac"),
	HX_HCSTRING("bufferfv","\x50","\x56","\xfe","\xac"),
	HX_HCSTRING("bufferi","\x69","\xa3","\x90","\xb1"),
	HX_HCSTRING("buffer3i","\xd6","\x29","\xfe","\xac"),
	HX_HCSTRING("bufferiv","\xed","\x58","\xfe","\xac"),
	HX_HCSTRING("getBufferf","\x70","\x29","\xf2","\x00"),
	HX_HCSTRING("getBuffer3f","\x89","\xec","\xf1","\xd2"),
	HX_HCSTRING("getBufferfv","\x06","\x19","\xf2","\xd2"),
	HX_HCSTRING("getBufferi","\x73","\x29","\xf2","\x00"),
	HX_HCSTRING("getBuffer3i","\x8c","\xec","\xf1","\xd2"),
	HX_HCSTRING("getBufferiv","\xa3","\x1b","\xf2","\xd2"),
	HX_HCSTRING("genSource","\x8b","\x71","\x07","\xb5"),
	HX_HCSTRING("deleteSource","\x66","\xd7","\xc9","\x98"),
	HX_HCSTRING("genBuffer","\xb0","\x7d","\x6a","\x53"),
	HX_HCSTRING("deleteBuffer","\x8b","\xe3","\x2c","\x37"),
	HX_HCSTRING("sourceQueueBuffer","\x56","\x70","\x65","\x56"),
	HX_HCSTRING("sourceUnqueueBuffer","\xdd","\x29","\x95","\x2e"),
	HX_HCSTRING("INVALID_NAME_MEANING","\x11","\x20","\x12","\xc6"),
	HX_HCSTRING("INVALID_ENUM_MEANING","\xc7","\xbe","\x81","\x9b"),
	HX_HCSTRING("INVALID_VALUE_MEANING","\xc7","\x32","\xcc","\x41"),
	HX_HCSTRING("INVALID_OPERATION_MEANING","\x7d","\xa1","\x16","\x56"),
	HX_HCSTRING("OUT_OF_MEMORY_MEANING","\x36","\xc3","\x9a","\xbf"),
	HX_HCSTRING("getErrorMeaning","\x8b","\x06","\xad","\x0d"),
	HX_HCSTRING("alhx_DopplerFactor","\xf9","\x1f","\x85","\xed"),
	HX_HCSTRING("alhx_DopplerVelocity","\xc7","\x27","\xc5","\x1a"),
	HX_HCSTRING("alhx_SpeedOfSound","\xd5","\xac","\xce","\x22"),
	HX_HCSTRING("alhx_DistanceModel","\x50","\x32","\x61","\x52"),
	HX_HCSTRING("alhx_Enable","\xe7","\x90","\xfc","\x10"),
	HX_HCSTRING("alhx_Disable","\x04","\x9f","\x29","\xff"),
	HX_HCSTRING("alhx_IsEnabled","\xd3","\x35","\x8d","\xce"),
	HX_HCSTRING("alhx_GetString","\x23","\x66","\xe4","\xd9"),
	HX_HCSTRING("alhx_GetBooleanv","\xa0","\x1e","\x4a","\x4d"),
	HX_HCSTRING("alhx_GetIntegerv","\xca","\xfe","\x65","\xad"),
	HX_HCSTRING("alhx_GetFloatv","\xac","\x60","\x0a","\x0a"),
	HX_HCSTRING("alhx_GetDoublev","\xb3","\xee","\xfb","\x13"),
	HX_HCSTRING("alhx_GetBoolean","\x16","\x55","\x00","\x53"),
	HX_HCSTRING("alhx_GetInteger","\x2c","\x28","\x1d","\xec"),
	HX_HCSTRING("alhx_GetFloat","\x8a","\x18","\xab","\x2b"),
	HX_HCSTRING("alhx_GetDouble","\x63","\x68","\x7f","\xfb"),
	HX_HCSTRING("alhx_GetError","\xb6","\x1e","\x3e","\x9c"),
	HX_HCSTRING("alhx_IsExtensionPresent","\xaa","\xe1","\x9b","\xd8"),
	HX_HCSTRING("alhx_GetProcAddress","\x2c","\xca","\x15","\xbb"),
	HX_HCSTRING("alhx_GetEnumValue","\x9e","\x62","\x0a","\x50"),
	HX_HCSTRING("alhx_Listenerf","\x8e","\x19","\xec","\x3f"),
	HX_HCSTRING("alhx_Listener3f","\xab","\x16","\xaa","\xae"),
	HX_HCSTRING("alhx_Listenerfv","\x28","\x43","\xaa","\xae"),
	HX_HCSTRING("alhx_Listeneri","\x91","\x19","\xec","\x3f"),
	HX_HCSTRING("alhx_Listener3i","\xae","\x16","\xaa","\xae"),
	HX_HCSTRING("alhx_Listeneriv","\xc5","\x45","\xaa","\xae"),
	HX_HCSTRING("alhx_GetListenerf","\x60","\xc7","\x91","\x1b"),
	HX_HCSTRING("alhx_GetListener3f","\x99","\x80","\xfc","\x03"),
	HX_HCSTRING("alhx_GetListenerfv","\x16","\xad","\xfc","\x03"),
	HX_HCSTRING("alhx_GetListeneri","\x63","\xc7","\x91","\x1b"),
	HX_HCSTRING("alhx_GetListener3i","\x9c","\x80","\xfc","\x03"),
	HX_HCSTRING("alhx_GetListeneriv","\xb3","\xaf","\xfc","\x03"),
	HX_HCSTRING("alhx_GenSources","\xec","\xcc","\x1b","\x37"),
	HX_HCSTRING("alhx_DeleteSources","\x69","\x94","\x52","\x96"),
	HX_HCSTRING("alhx_IsSource","\xc9","\x8f","\xd8","\x53"),
	HX_HCSTRING("alhx_Sourcef","\x47","\x44","\x1a","\x07"),
	HX_HCSTRING("alhx_Source3f","\xd2","\x4d","\xe1","\x2f"),
	HX_HCSTRING("alhx_Sourcefv","\x4f","\x7a","\xe1","\x2f"),
	HX_HCSTRING("alhx_Sourcei","\x4a","\x44","\x1a","\x07"),
	HX_HCSTRING("alhx_Source3i","\xd5","\x4d","\xe1","\x2f"),
	HX_HCSTRING("alhx_Sourceiv","\xec","\x7c","\xe1","\x2f"),
	HX_HCSTRING("alhx_GetSourcef","\x99","\x79","\x4a","\x8e"),
	HX_HCSTRING("alhx_GetSource3f","\x40","\xc0","\xdf","\xf2"),
	HX_HCSTRING("alhx_GetSourcefv","\xbd","\xec","\xdf","\xf2"),
	HX_HCSTRING("alhx_GetSourcei","\x9c","\x79","\x4a","\x8e"),
	HX_HCSTRING("alhx_GetSource3i","\x43","\xc0","\xdf","\xf2"),
	HX_HCSTRING("alhx_GetSourceiv","\x5a","\xef","\xdf","\xf2"),
	HX_HCSTRING("alhx_SourcePlayv","\x43","\xc0","\xdb","\x59"),
	HX_HCSTRING("alhx_SourceStopv","\x75","\xca","\x63","\x19"),
	HX_HCSTRING("alhx_SourceRewindv","\x9c","\x9c","\x61","\x7f"),
	HX_HCSTRING("alhx_SourcePausev","\x5f","\xc1","\x37","\xfe"),
	HX_HCSTRING("alhx_SourceQueueBuffers","\xc1","\xc3","\xcd","\x66"),
	HX_HCSTRING("alhx_SourceUnqueueBuffers","\x5a","\x41","\xb6","\x64"),
	HX_HCSTRING("alhx_SourcePlay","\xd3","\xf8","\x5d","\xf8"),
	HX_HCSTRING("alhx_SourceStop","\xe1","\xba","\x5f","\xfa"),
	HX_HCSTRING("alhx_SourceRewind","\x9a","\xaa","\xd3","\x19"),
	HX_HCSTRING("alhx_SourcePause","\x37","\x8f","\xa5","\x52"),
	HX_HCSTRING("alhx_GenBuffers","\x27","\x61","\x63","\x2f"),
	HX_HCSTRING("alhx_DeleteBuffers","\xa4","\x28","\x9a","\x8e"),
	HX_HCSTRING("alhx_IsBuffer","\xee","\x9b","\x3b","\xf2"),
	HX_HCSTRING("alhx_BufferData","\xae","\xa3","\x13","\x19"),
	HX_HCSTRING("alhx_Bufferf","\x82","\xd8","\x61","\xff"),
	HX_HCSTRING("alhx_Buffer3f","\x37","\x6d","\x3b","\x76"),
	HX_HCSTRING("alhx_Bufferfv","\xb4","\x99","\x3b","\x76"),
	HX_HCSTRING("alhx_Bufferi","\x85","\xd8","\x61","\xff"),
	HX_HCSTRING("alhx_Buffer3i","\x3a","\x6d","\x3b","\x76"),
	HX_HCSTRING("alhx_Bufferiv","\x51","\x9c","\x3b","\x76"),
	HX_HCSTRING("alhx_GetBufferf","\xd4","\x0d","\x92","\x86"),
	HX_HCSTRING("alhx_GetBuffer3f","\xa5","\xdf","\x39","\x39"),
	HX_HCSTRING("alhx_GetBufferfv","\x22","\x0c","\x3a","\x39"),
	HX_HCSTRING("alhx_GetBufferi","\xd7","\x0d","\x92","\x86"),
	HX_HCSTRING("alhx_GetBuffer3i","\xa8","\xdf","\x39","\x39"),
	HX_HCSTRING("alhx_GetBufferiv","\xbf","\x0e","\x3a","\x39"),
	HX_HCSTRING("alhx_GenSource","\xa7","\x25","\x65","\x01"),
	HX_HCSTRING("alhx_DeleteSource","\xca","\x9c","\x76","\xb1"),
	HX_HCSTRING("alhx_GenBuffer","\xcc","\x31","\xc8","\x9f"),
	HX_HCSTRING("alhx_DeleteBuffer","\xef","\xa8","\xd9","\x4f"),
	::String(null()) };

void AL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.openal.AL","\xf2","\x46","\x15","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AL_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AL_obj >;
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

void AL_obj::__boot()
{
	NONE= (int)0;
	FALSE= (int)0;
	TRUE= (int)1;
	SOURCE_RELATIVE= (int)514;
	CONE_INNER_ANGLE= (int)4097;
	CONE_OUTER_ANGLE= (int)4098;
	PITCH= (int)4099;
	POSITION= (int)4100;
	DIRECTION= (int)4101;
	VELOCITY= (int)4102;
	LOOPING= (int)4103;
	BUFFER= (int)4105;
	GAIN= (int)4106;
	MIN_GAIN= (int)4109;
	MAX_GAIN= (int)4110;
	ORIENTATION= (int)4111;
	SOURCE_STATE= (int)4112;
	INITIAL= (int)4113;
	PLAYING= (int)4114;
	PAUSED= (int)4115;
	STOPPED= (int)4116;
	BUFFERS_QUEUED= (int)4117;
	BUFFERS_PROCESSED= (int)4118;
	REFERENCE_DISTANCE= (int)4128;
	ROLLOFF_FACTOR= (int)4129;
	CONE_OUTER_GAIN= (int)4130;
	MAX_DISTANCE= (int)4131;
	SEC_OFFSET= (int)4132;
	SAMPLE_OFFSET= (int)4133;
	BYTE_OFFSET= (int)4134;
	SOURCE_TYPE= (int)4135;
	STATIC= (int)4136;
	STREAMING= (int)4137;
	UNDETERMINED= (int)4144;
	FORMAT_MONO8= (int)4352;
	FORMAT_MONO16= (int)4353;
	FORMAT_STEREO8= (int)4354;
	FORMAT_STEREO16= (int)4355;
	FREQUENCY= (int)8193;
	BITS= (int)8194;
	CHANNELS= (int)8195;
	SIZE= (int)8196;
	NO_ERROR= (int)0;
	INVALID_NAME= (int)40961;
	INVALID_ENUM= (int)40962;
	INVALID_VALUE= (int)40963;
	INVALID_OPERATION= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	VENDOR= (int)45057;
	VERSION= (int)45058;
	RENDERER= (int)45059;
	EXTENSIONS= (int)45060;
	DOPPLER_FACTOR= (int)49152;
	SPEED_OF_SOUND= (int)49155;
	DOPPLER_VELOCITY= (int)49153;
	DISTANCE_MODEL= (int)53248;
	INVERSE_DISTANCE= (int)53249;
	INVERSE_DISTANCE_CLAMPED= (int)53250;
	LINEAR_DISTANCE= (int)53251;
	LINEAR_DISTANCE_CLAMPED= (int)53252;
	EXPONENT_DISTANCE= (int)53253;
	EXPONENT_DISTANCE_CLAMPED= (int)53254;
	INVALID_NAME_MEANING= HX_HCSTRING("AL.INVALID_NAME: Invalid parameter name","\xc7","\x71","\xae","\xb1");
	INVALID_ENUM_MEANING= HX_HCSTRING("AL.INVALID_ENUM: Invalid enum value","\xed","\xd7","\x93","\x79");
	INVALID_VALUE_MEANING= HX_HCSTRING("AL.INVALID_VALUE: Invalid parameter value","\xe5","\xf1","\x73","\xb6");
	INVALID_OPERATION_MEANING= HX_HCSTRING("AL.INVALID_OPERATION: Illegal operation or call","\x76","\xd3","\x4a","\x4b");
	OUT_OF_MEMORY_MEANING= HX_HCSTRING("AL.OUT_OF_MEMORY: OpenAL has run out of memory","\xad","\x11","\x86","\xac");
	alhx_DopplerFactor= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_DopplerFactor","\xf9","\x1f","\x85","\xed"),(int)1);
	alhx_DopplerVelocity= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_DopplerVelocity","\xc7","\x27","\xc5","\x1a"),(int)1);
	alhx_SpeedOfSound= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SpeedOfSound","\xd5","\xac","\xce","\x22"),(int)1);
	alhx_DistanceModel= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_DistanceModel","\x50","\x32","\x61","\x52"),(int)1);
	alhx_Enable= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Enable","\xe7","\x90","\xfc","\x10"),(int)1);
	alhx_Disable= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Disable","\x04","\x9f","\x29","\xff"),(int)1);
	alhx_IsEnabled= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_IsEnabled","\xd3","\x35","\x8d","\xce"),(int)1);
	alhx_GetString= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetString","\x23","\x66","\xe4","\xd9"),(int)1);
	alhx_GetBooleanv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetBooleanv","\xa0","\x1e","\x4a","\x4d"),(int)2);
	alhx_GetIntegerv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetIntegerv","\xca","\xfe","\x65","\xad"),(int)2);
	alhx_GetFloatv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetFloatv","\xac","\x60","\x0a","\x0a"),(int)2);
	alhx_GetDoublev= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetDoublev","\xb3","\xee","\xfb","\x13"),(int)2);
	alhx_GetBoolean= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetBoolean","\x16","\x55","\x00","\x53"),(int)1);
	alhx_GetInteger= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetInteger","\x2c","\x28","\x1d","\xec"),(int)1);
	alhx_GetFloat= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetFloat","\x8a","\x18","\xab","\x2b"),(int)1);
	alhx_GetDouble= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetDouble","\x63","\x68","\x7f","\xfb"),(int)1);
	alhx_GetError= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetError","\xb6","\x1e","\x3e","\x9c"),(int)0);
	alhx_IsExtensionPresent= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_IsExtensionPresent","\xaa","\xe1","\x9b","\xd8"),(int)1);
	alhx_GetProcAddress= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetProcAddress","\x2c","\xca","\x15","\xbb"),(int)1);
	alhx_GetEnumValue= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetEnumValue","\x9e","\x62","\x0a","\x50"),(int)1);
	alhx_Listenerf= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Listenerf","\x8e","\x19","\xec","\x3f"),(int)2);
	alhx_Listener3f= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Listener3f","\xab","\x16","\xaa","\xae"),(int)4);
	alhx_Listenerfv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Listenerfv","\x28","\x43","\xaa","\xae"),(int)2);
	alhx_Listeneri= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Listeneri","\x91","\x19","\xec","\x3f"),(int)2);
	alhx_Listener3i= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Listener3i","\xae","\x16","\xaa","\xae"),(int)4);
	alhx_Listeneriv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Listeneriv","\xc5","\x45","\xaa","\xae"),(int)2);
	alhx_GetListenerf= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetListenerf","\x60","\xc7","\x91","\x1b"),(int)1);
	alhx_GetListener3f= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetListener3f","\x99","\x80","\xfc","\x03"),(int)1);
	alhx_GetListenerfv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetListenerfv","\x16","\xad","\xfc","\x03"),(int)2);
	alhx_GetListeneri= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetListeneri","\x63","\xc7","\x91","\x1b"),(int)1);
	alhx_GetListener3i= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetListener3i","\x9c","\x80","\xfc","\x03"),(int)1);
	alhx_GetListeneriv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetListeneriv","\xb3","\xaf","\xfc","\x03"),(int)2);
	alhx_GenSources= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GenSources","\xec","\xcc","\x1b","\x37"),(int)1);
	alhx_DeleteSources= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_DeleteSources","\x69","\x94","\x52","\x96"),(int)2);
	alhx_IsSource= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_IsSource","\xc9","\x8f","\xd8","\x53"),(int)1);
	alhx_Sourcef= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Sourcef","\x47","\x44","\x1a","\x07"),(int)3);
	alhx_Source3f= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Source3f","\xd2","\x4d","\xe1","\x2f"),(int)5);
	alhx_Sourcefv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Sourcefv","\x4f","\x7a","\xe1","\x2f"),(int)3);
	alhx_Sourcei= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Sourcei","\x4a","\x44","\x1a","\x07"),(int)3);
	alhx_Source3i= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Source3i","\xd5","\x4d","\xe1","\x2f"),(int)5);
	alhx_Sourceiv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Sourceiv","\xec","\x7c","\xe1","\x2f"),(int)3);
	alhx_GetSourcef= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetSourcef","\x99","\x79","\x4a","\x8e"),(int)2);
	alhx_GetSource3f= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetSource3f","\x40","\xc0","\xdf","\xf2"),(int)2);
	alhx_GetSourcefv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetSourcefv","\xbd","\xec","\xdf","\xf2"),(int)2);
	alhx_GetSourcei= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetSourcei","\x9c","\x79","\x4a","\x8e"),(int)2);
	alhx_GetSource3i= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetSource3i","\x43","\xc0","\xdf","\xf2"),(int)2);
	alhx_GetSourceiv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetSourceiv","\x5a","\xef","\xdf","\xf2"),(int)3);
	alhx_SourcePlayv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourcePlayv","\x43","\xc0","\xdb","\x59"),(int)2);
	alhx_SourceStopv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourceStopv","\x75","\xca","\x63","\x19"),(int)2);
	alhx_SourceRewindv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourceRewindv","\x9c","\x9c","\x61","\x7f"),(int)2);
	alhx_SourcePausev= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourcePausev","\x5f","\xc1","\x37","\xfe"),(int)2);
	alhx_SourceQueueBuffers= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourceQueueBuffers","\xc1","\xc3","\xcd","\x66"),(int)3);
	alhx_SourceUnqueueBuffers= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourceUnqueueBuffers","\x5a","\x41","\xb6","\x64"),(int)2);
	alhx_SourcePlay= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourcePlay","\xd3","\xf8","\x5d","\xf8"),(int)1);
	alhx_SourceStop= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourceStop","\xe1","\xba","\x5f","\xfa"),(int)1);
	alhx_SourceRewind= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourceRewind","\x9a","\xaa","\xd3","\x19"),(int)1);
	alhx_SourcePause= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_SourcePause","\x37","\x8f","\xa5","\x52"),(int)1);
	alhx_GenBuffers= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GenBuffers","\x27","\x61","\x63","\x2f"),(int)1);
	alhx_DeleteBuffers= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_DeleteBuffers","\xa4","\x28","\x9a","\x8e"),(int)2);
	alhx_IsBuffer= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_IsBuffer","\xee","\x9b","\x3b","\xf2"),(int)1);
	alhx_BufferData= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_BufferData","\xae","\xa3","\x13","\x19"),(int)-1);
	alhx_Bufferf= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Bufferf","\x82","\xd8","\x61","\xff"),(int)3);
	alhx_Buffer3f= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Buffer3f","\x37","\x6d","\x3b","\x76"),(int)5);
	alhx_Bufferfv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Bufferfv","\xb4","\x99","\x3b","\x76"),(int)3);
	alhx_Bufferi= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Bufferi","\x85","\xd8","\x61","\xff"),(int)3);
	alhx_Buffer3i= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Buffer3i","\x3a","\x6d","\x3b","\x76"),(int)5);
	alhx_Bufferiv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_Bufferiv","\x51","\x9c","\x3b","\x76"),(int)3);
	alhx_GetBufferf= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetBufferf","\xd4","\x0d","\x92","\x86"),(int)2);
	alhx_GetBuffer3f= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetBuffer3f","\xa5","\xdf","\x39","\x39"),(int)2);
	alhx_GetBufferfv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetBufferfv","\x22","\x0c","\x3a","\x39"),(int)3);
	alhx_GetBufferi= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetBufferi","\xd7","\x0d","\x92","\x86"),(int)2);
	alhx_GetBuffer3i= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetBuffer3i","\xa8","\xdf","\x39","\x39"),(int)2);
	alhx_GetBufferiv= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GetBufferiv","\xbf","\x0e","\x3a","\x39"),(int)3);
	alhx_GenSource= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GenSource","\xa7","\x25","\x65","\x01"),(int)0);
	alhx_DeleteSource= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_DeleteSource","\xca","\x9c","\x76","\xb1"),(int)1);
	alhx_GenBuffer= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_GenBuffer","\xcc","\x31","\xc8","\x9f"),(int)0);
	alhx_DeleteBuffer= ::snow::api::Libs_obj::load(HX_HCSTRING("snow","\x83","\x62","\x57","\x4c"),HX_HCSTRING("alhx_DeleteBuffer","\xef","\xa8","\xd9","\x4f"),(int)1);
}

} // end namespace snow
} // end namespace modules
} // end namespace openal
