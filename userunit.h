// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'UserUnit.pas' rev: 5.00

#ifndef UserUnitHPP
#define UserUnitHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Userunit
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString __fastcall MoneyToString(System::Currency S, bool kpk, bool usd, bool fl);
extern PACKAGE AnsiString __fastcall Line2Win(AnsiString Line, Byte WinLen);

}	/* namespace Userunit */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Userunit;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UserUnit
