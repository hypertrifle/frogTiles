#ifndef INCLUDED_snow_api_buffers_TAError
#define INCLUDED_snow_api_buffers_TAError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,api,buffers,TAError)
namespace snow{
namespace api{
namespace buffers{


class TAError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TAError_obj OBJ_;

	public:
		TAError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("snow.api.buffers.TAError","\xe1","\x15","\xb8","\x2f"); }
		::String __ToString() const { return HX_HCSTRING("TAError.","\xb3","\x90","\x7d","\xd9") + tag; }

		static ::snow::api::buffers::TAError RangeError;
		static inline ::snow::api::buffers::TAError RangeError_dyn() { return RangeError; }
};

} // end namespace snow
} // end namespace api
} // end namespace buffers

#endif /* INCLUDED_snow_api_buffers_TAError */ 
