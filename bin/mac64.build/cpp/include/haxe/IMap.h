#ifndef INCLUDED_haxe_IMap
#define INCLUDED_haxe_IMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  IMap_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IMap_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Dynamic get( Dynamic k)=0;
		virtual Dynamic get_dyn()=0;
		virtual Void set( Dynamic k,Dynamic v)=0;
		virtual Dynamic set_dyn()=0;
		virtual bool exists( Dynamic k)=0;
		virtual Dynamic exists_dyn()=0;
		virtual bool remove( Dynamic k)=0;
		virtual Dynamic remove_dyn()=0;
};

#define DELEGATE_haxe_IMap \
virtual Dynamic get( Dynamic k) { return mDelegate->get(k);}  \
virtual Dynamic get_dyn() { return mDelegate->get_dyn();}  \
virtual Void set( Dynamic k,Dynamic v) { return mDelegate->set(k,v);}  \
virtual Dynamic set_dyn() { return mDelegate->set_dyn();}  \
virtual bool exists( Dynamic k) { return mDelegate->exists(k);}  \
virtual Dynamic exists_dyn() { return mDelegate->exists_dyn();}  \
virtual bool remove( Dynamic k) { return mDelegate->remove(k);}  \
virtual Dynamic remove_dyn() { return mDelegate->remove_dyn();}  \


template<typename IMPL>
class IMap_delegate_ : public IMap_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IMap_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_IMap
};

} // end namespace haxe

#endif /* INCLUDED_haxe_IMap */ 
