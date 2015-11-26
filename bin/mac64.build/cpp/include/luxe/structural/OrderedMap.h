#ifndef INCLUDED_luxe_structural_OrderedMap
#define INCLUDED_luxe_structural_OrderedMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(luxe,structural,OrderedMap)
HX_DECLARE_CLASS2(luxe,structural,OrderedMapIterator)
namespace luxe{
namespace structural{


class HXCPP_CLASS_ATTRIBUTES  OrderedMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OrderedMap_obj OBJ_;
		OrderedMap_obj();
		Void __construct(::haxe::IMap _map);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="luxe.structural.OrderedMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OrderedMap_obj > __new(::haxe::IMap _map);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OrderedMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::IMap_obj *();
		::String __ToString() const { return HX_HCSTRING("OrderedMap","\x4f","\x00","\xa4","\x04"); }

		::haxe::IMap map;
		int idx;
		cpp::ArrayBase _keys;
		virtual Void set( Dynamic key,Dynamic value);
		Dynamic set_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::luxe::structural::OrderedMapIterator iterator( );
		Dynamic iterator_dyn();

		virtual bool remove( Dynamic key);
		Dynamic remove_dyn();

		virtual bool exists( Dynamic key);
		Dynamic exists_dyn();

		virtual Dynamic get( Dynamic key);
		Dynamic get_dyn();

		virtual Dynamic keys( );
		Dynamic keys_dyn();

};

} // end namespace luxe
} // end namespace structural

#endif /* INCLUDED_luxe_structural_OrderedMap */ 
