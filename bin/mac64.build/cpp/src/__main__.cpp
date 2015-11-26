#include <hxcpp.h>

#include <stdio.h>

extern "C" void __hxcpp_main();

extern "C" void __hxcpp_lib_main();

#ifndef INCLUDED_LuxeApp
#include <LuxeApp.h>
#endif



#include <hx/HxcppMain.h>

void __hxcpp_main() {
::LuxeApp_obj::main();
	}

void __hxcpp_lib_main() {
	HX_TOP_OF_STACK
	hx::Boot();
	__boot_all();
	__hxcpp_main();
	}
