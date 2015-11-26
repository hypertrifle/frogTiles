#ifndef INCLUDED_snow_modules_openal_ALC
#define INCLUDED_snow_modules_openal_ALC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,modules,openal,ALC)
namespace snow{
namespace modules{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES  ALC_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALC_obj OBJ_;
		ALC_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="snow.modules.openal.ALC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALC_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALC_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALC","\xf8","\x94","\x31","\x00"); }

		static void __boot();
		static int FALSE;
		static int TRUE;
		static int FREQUENCY;
		static int REFRESH;
		static int SYNC;
		static int MONO_SOURCES;
		static int STEREO_SOURCES;
		static int NO_ERROR;
		static int INVALID_DEVICE;
		static int INVALID_CONTEXT;
		static int INVALID_ENUM;
		static int INVALID_VALUE;
		static int OUT_OF_MEMORY;
		static int ATTRIBUTES_SIZE;
		static int ALL_ATTRIBUTES;
		static int DEFAULT_DEVICE_SPECIFIER;
		static int DEVICE_SPECIFIER;
		static int EXTENSIONS;
		static int ENUMERATE_ALL_EXT;
		static int DEFAULT_ALL_DEVICES_SPECIFIER;
		static int ALL_DEVICES_SPECIFIER;
		static Dynamic createContext( Dynamic device,Array< int > attrlist);
		static Dynamic createContext_dyn();

		static bool makeContextCurrent( Dynamic context);
		static Dynamic makeContextCurrent_dyn();

		static Void processContext( Dynamic context);
		static Dynamic processContext_dyn();

		static Void suspendContext( Dynamic context);
		static Dynamic suspendContext_dyn();

		static Void destroyContext( Dynamic context);
		static Dynamic destroyContext_dyn();

		static Dynamic getCurrentContext( );
		static Dynamic getCurrentContext_dyn();

		static Dynamic getContextsDevice( Dynamic context);
		static Dynamic getContextsDevice_dyn();

		static Dynamic openDevice( ::String devicename);
		static Dynamic openDevice_dyn();

		static bool closeDevice( Dynamic device);
		static Dynamic closeDevice_dyn();

		static int getError( Dynamic device);
		static Dynamic getError_dyn();

		static ::String getString( Dynamic device,int param);
		static Dynamic getString_dyn();

		static Array< int > getIntegerv( Dynamic device,int param,int size);
		static Dynamic getIntegerv_dyn();

		static ::String INVALID_DEVICE_MEANING;
		static ::String INVALID_CONTEXT_MEANING;
		static ::String INVALID_ENUM_MEANING;
		static ::String INVALID_VALUE_MEANING;
		static ::String OUT_OF_MEMORY_MEANING;
		static ::String getErrorMeaning( int error);
		static Dynamic getErrorMeaning_dyn();

		static Dynamic alhx_alcCreateContext;
		static Dynamic &alhx_alcCreateContext_dyn() { return alhx_alcCreateContext;}
		static Dynamic alhx_alcMakeContextCurrent;
		static Dynamic &alhx_alcMakeContextCurrent_dyn() { return alhx_alcMakeContextCurrent;}
		static Dynamic alhx_alcProcessContext;
		static Dynamic &alhx_alcProcessContext_dyn() { return alhx_alcProcessContext;}
		static Dynamic alhx_alcSuspendContext;
		static Dynamic &alhx_alcSuspendContext_dyn() { return alhx_alcSuspendContext;}
		static Dynamic alhx_alcDestroyContext;
		static Dynamic &alhx_alcDestroyContext_dyn() { return alhx_alcDestroyContext;}
		static Dynamic alhx_alcGetCurrentContext;
		static Dynamic &alhx_alcGetCurrentContext_dyn() { return alhx_alcGetCurrentContext;}
		static Dynamic alhx_alcGetContextsDevice;
		static Dynamic &alhx_alcGetContextsDevice_dyn() { return alhx_alcGetContextsDevice;}
		static Dynamic alhx_alcOpenDevice;
		static Dynamic &alhx_alcOpenDevice_dyn() { return alhx_alcOpenDevice;}
		static Dynamic alhx_alcCloseDevice;
		static Dynamic &alhx_alcCloseDevice_dyn() { return alhx_alcCloseDevice;}
		static Dynamic alhx_alcGetError;
		static Dynamic &alhx_alcGetError_dyn() { return alhx_alcGetError;}
		static Dynamic alhx_alcGetString;
		static Dynamic &alhx_alcGetString_dyn() { return alhx_alcGetString;}
		static Dynamic alhx_alcGetIntegerv;
		static Dynamic &alhx_alcGetIntegerv_dyn() { return alhx_alcGetIntegerv;}
};

} // end namespace snow
} // end namespace modules
} // end namespace openal

#endif /* INCLUDED_snow_modules_openal_ALC */ 
