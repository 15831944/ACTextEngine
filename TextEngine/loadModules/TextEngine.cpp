// TextEngine.cpp : 定义 DLL 应用程序的导出函数。
//

#include "../stdafx.h"

#include "../implementations/FontFamilyFunc.hpp"
#include "../implementations/IFontFunc.hpp"
#include "../implementations/FontFunc.hpp"


PYBIND11_MODULE(TextEngine, m) {

	m.def("version", []() {	return "version 0.1.1"; });

// --- Add bindings here ------------------------------------------------------------------

	// --- FontFamily
	load_FontFamily(m);

	// --- IFont
	load_IFont(m);

	// --- Font
	load_Font(m);

// --- Add bindings end -------------------------------------------------------------------
}