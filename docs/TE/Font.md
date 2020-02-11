# Class Font

## Inherit

* [IFont](IFont.md)

## Methods

```
__init__(self) -> None

__eq__(self,right) -> bool
__ne__(self,right) -> bool
GetTypoSize(self) -> float
GetCapISize(self) -> float
GetAscent(self) -> float
GetDescent(self) -> float
GetLeading(self) -> float
GetPSFontName(self) -> unicode
Set(self,float,int,unicode,GSRoot.GSCharCode=GSCharCode.CC_Legacy) -> None
Set(self,TextEngine.FontFamily) -> None
SetSize(self,float) -> None
SetTypoSize(self,float) -> None
SetCapISize(self,float) -> None
SetStyle(self,int) -> None
SetFontName(self,unicode,GSRoot.GSCharCode=GSCharCode.CC_Legacy) -> None
IsIntegrate(self) -> bool
SetIntegrity(self,bool) -> None
```
