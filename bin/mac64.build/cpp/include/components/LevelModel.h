#ifndef INCLUDED_components_LevelModel
#define INCLUDED_components_LevelModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
#endif
HX_DECLARE_CLASS1(components,LevelModel)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,ID)
namespace components{


class HXCPP_CLASS_ATTRIBUTES  LevelModel_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef LevelModel_obj OBJ_;
		LevelModel_obj();
		Void __construct(Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="components.LevelModel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LevelModel_obj > __new(Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LevelModel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LevelModel","\xa5","\x03","\xa3","\xe2"); }

		Array< ::Dynamic > level;
		Array< int > safeTileIndexs;
		virtual Void init( );

		virtual int getStartPosition( );
		Dynamic getStartPosition_dyn();

		virtual Void update( Float dt);

		virtual bool step( hx::Null< int >  amount,hx::Null< int >  playerX);
		Dynamic step_dyn();

		virtual Void onreset( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};

} // end namespace components

#endif /* INCLUDED_components_LevelModel */ 
