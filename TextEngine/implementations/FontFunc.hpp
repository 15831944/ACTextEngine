#pragma once

#include "../stdafx.h"

#include "Font.hpp"

using namespace TE;


void load_Font(py::module m) {
	py::class_<Font, IFont>(m, "Font")
		.def(py::init<>())
		.def(py::init<IFont &>())
		.def(py::init<Font &>())
		//.def(py::self == )
		.def(py::self == py::self)
		//.def(py::self != )
		.def(py::self != py::self)
		.def("GetSize", &Font::GetSize)
		.def("GetTypoSize", &Font::GetTypoSize)
		.def("GetCapISize", &Font::GetCapISize)
		.def("GetAscent", &Font::GetAscent)
		.def("GetDescent", &Font::GetDescent)
		.def("GetLeading", &Font::GetLeading)
		.def("GetPSFontName", &Font::GetPSFontName)
		.def("GetStyle", &Font::GetStyle)
		.def("GetFontFamily", (FontFamily *(Font::*)(void)) &Font::GetFontFamily, py::return_value_policy::reference)
		.def("GetFontFamily", (const FontFamily *(Font::*)(void)const) &Font::GetFontFamily, py::return_value_policy::reference)
		.def("Set", (void (Font::*)(double, Int32, const GS::UniString &, GSCharCode)) &Font::Set,
			py::arg("size"),
			py::arg("style"), 
			py::arg("fontName"), 
			py::arg("charCode") = GSCharCode::CC_Legacy)
		.def("Set",  (void (Font::*)(const FontFamily &)) &Font::Set)
		.def("SetSize", &Font::SetSize)
		.def("SetTypoSize", &Font::SetTypoSize)
		.def("SetCapISize", &Font::SetCapISize)
		.def("SetStyle", &Font::SetStyle)
		.def("SetFontName", &Font::SetFontName,
			py::arg("fontName"),
			py::arg("charCode") = GSCharCode::CC_Legacy)
		.def("IsIntegrate", &Font::IsIntegrate)
		.def("SetIntegrity", &Font::SetIntegrity);
}