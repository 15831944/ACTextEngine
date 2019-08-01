#pragma once

#include "../stdafx.h"

#include "IFont.hpp"

using namespace TE;


// --- IFont --------------------------------------------------------------------------

void load_IFont(py::module m) {
	py::class_<IFont>m_iFont(m, "IFont");

	py::enum_<IFont::FontStyle>(m_iFont, "FontStyle")
		.value("normal", IFont::FontStyle::normal)
		.value("bold", IFont::FontStyle::bold)
		.value("italic", IFont::FontStyle::italic)
		.value("underline", IFont::FontStyle::underline)
		.export_values();

	m_iFont
		.def("GetSize", &IFont::GetSize)
		.def("GetStyle", &IFont::GetStyle)
		.def("GetFontFamily", (FontFamily* (IFont::*)(void)) &IFont::GetFontFamily, py::return_value_policy::reference)
		.def("GetFontFamily", (const FontFamily* (IFont::*)(void)const) &IFont::GetFontFamily, py::return_value_policy::reference);
}