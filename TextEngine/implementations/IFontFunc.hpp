#pragma once

#include "../stdafx.h"

#include "IFont.hpp"

using namespace TE;


// --- IFont --------------------------------------------------------------------------

void load_IFont(py::module m) {
	py::class_<IFont>m_iFont(m, "IFont");

	py::enum_<IFont::FontStyle>(m_iFont, "FontStyle")
		.value("Normal", IFont::FontStyle::normal)
		.value("Bold", IFont::FontStyle::bold)
		.value("Italic", IFont::FontStyle::italic)
		.value("Underline", IFont::FontStyle::underline)
		.export_values();

	m_iFont
		.def("GetSize", &IFont::GetSize)
		.def("GetStyle", &IFont::GetStyle)
		.def("GetFontFamily", (const FontFamily* (IFont::*)(void) const) &IFont::GetFontFamily, py::return_value_policy::reference);
}