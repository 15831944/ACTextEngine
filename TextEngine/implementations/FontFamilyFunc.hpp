#pragma once

#include "../stdafx.h"

#include "FontFamily.hpp"

using namespace TE;


// --- FontFamily --------------------------------------------------------------------

void load_FontFamily(py::module m) {
	py::class_<FontFamily>m_fontFamily(m, "FontFamily");

	py::enum_<FontFamily::SortMode>(m_fontFamily, "SortMode")
		.value("Unsort", FontFamily::SortMode::Unsort)
		.value("DefaultSort", FontFamily::SortMode::DefaultSort)
		.value("SortByName", FontFamily::SortMode::SortByName)
		.value("SortByMac", FontFamily::SortMode::SortByMac)
		.export_values();

	py::enum_<FontFamily::StackingMode>(m_fontFamily, "StackingMode")
		.value("Uninitialized", FontFamily::StackingMode::Uninitialized)
		.value("Stackable", FontFamily::StackingMode::Stackable)
		.value("NonStackable", FontFamily::StackingMode::NonStackable)
		.export_values();

	m_fontFamily
		.def(py::init<>())
		.def(py::init<GS::UniString &, GSCharCode>(),
			py::arg("name"),
			py::arg("charCode") = GSCharCode::CC_Legacy)
		.def(py::init<FontFamily &>())
		.def(py::self == py::self)
		.def(py::self != py::self)
		.def("GetLocalName", &FontFamily::GetLocalName, py::return_value_policy::reference_internal)
		.def("GetActualLocalName", &FontFamily::GetActualLocalName, py::return_value_policy::reference_internal)
		.def("GetFontNameWidthScriptName", &FontFamily::GetFontNameWidthScriptName)
		.def("GetMacFontIdentifier", &FontFamily::GetMacFontIdentifier, py::return_value_policy::reference_internal)
		.def("GetFamilyGroupName", &FontFamily::GetFamilyGroupName, py::return_value_policy::reference_internal)
		.def("GetMacTypefaceName", &FontFamily::GetMacTypefaceName, py::return_value_policy::reference_internal)
		.def("GetMaxCharWidth", &FontFamily::GetMaxCharWidth)
		.def("GetSpaceIndex", &FontFamily::GetSpaceIndex)
		.def("GetCapISize", &FontFamily::GetCapISize)
		.def("GetTypoSize", &FontFamily::GetTypoSize)
		.def("GetAscent", &FontFamily::GetAscent)
		.def("GetDescent", &FontFamily::GetDescent)
		.def("GetLeading", &FontFamily::GetLeading)
		.def("GetEncodingsNum", &FontFamily::GetEncodingsNum)
		.def("GetEncoding", &FontFamily::GetEncoding)
		//.def("EnumerateEncodings", &FontFamily::EnumerateEncodings)
		.def("GetFirstEncoding", &FontFamily::GetFirstEncoding)
		//operator GS::HashValue () const;
		.def("IsSubstituted", &FontFamily::IsSubstituted)
		.def("GetAveCharWidth", &FontFamily::GetAveCharWidth)
		.def("GetLangInfo", &FontFamily::GetLangInfo)
		.def_static("BeginInputSession", &FontFamily::BeginInputSession,
			py::arg("pStackable")= FontFamily::StackingMode::NonStackable)
		.def_static("EndInputSession", &FontFamily::EndInputSession)
		.def_static("BeginOutputSession", &FontFamily::BeginOutputSession,
			py::arg("pStackable") = FontFamily::StackingMode::NonStackable)
		.def_static("EndOutputSession", &FontFamily::EndOutputSession)
		.def_static("SetTEModeForWriteContentForChecksum", &FontFamily::SetTEModeForWriteContentForChecksum);
}