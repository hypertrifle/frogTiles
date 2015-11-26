#ifndef INCLUDED_luxe_Tag
#define INCLUDED_luxe_Tag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Tag)
namespace luxe{


class HXCPP_CLASS_ATTRIBUTES  Tag_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tag_obj OBJ_;
		Tag_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="luxe.Tag")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tag_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tag_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Tag","\x3a","\x12","\x40","\x00"); }

		static void __boot();
		static ::String update;
		static ::String renderdt;
		static ::String game_update;
		static ::String render;
		static ::String debug;
		static ::String updates;
		static ::String events;
		static ::String audio;
		static ::String input;
		static ::String timer;
		static ::String scene;
		static ::String debug_batch;
};

} // end namespace luxe

#endif /* INCLUDED_luxe_Tag */ 
