# Class FontFamily

## Inherit

* Object

## Enum

### SortMode

* Unsort
* DefaultSort
* SortByName
* SortByMac

### StackingMode

* Uninitialized
* Stackable
* NonStackable

## Methods

```
__init__(self) -> None
__init__(self, unicode, GSRoot.GSCharCode=GSCharCode.CC_Legacy) -> None

__eq__(self,right) -> bool
__ne__(self,right) -> bool
GetLocalName(self) -> unicode
GetActualLocalName(self) -> unicode
GetFontNameWidthScriptName(self, GSRoot.GSCharCode, unicode) -> bool
GetMacFontIdentifier(self) -> unicode
GetFamilyGroupName(self) -> unicode
GetMacTypefaceName(self) -> unicode
GetMaxCharWidth(self, float) -> float
GetSpaceIndex(self) -> int
GetCapISize(self,float) -> float
GetTypoSize(self,float) -> float
GetAscent(self,float) -> float
GetDescent(self,float) -> float
GetLeading(self,float) -> float
GetEncodingsNum(self) -> int
GetEncoding(self,int) -> GSRoot.GSCharCode
GetFirstEncoding(self) -> GSRoot.GSCharCode
IsSubstituted(self) -> bool
GetAveCharWidth(self, float) -> float
GetLangInfo(self) -> int
BeginInputSession(TextEngine.FontFamily.StackingMode = StackingMode.NonStackable) -> None
EndInputSession() -> None
BeginOutputSession(TextEngine.FontFamily.StackingMode = StackingMode.NonStackable) -> None
EndOutputSession() -> None
SetTEModeForWriteContentForChecksum(bool) -> None
```
