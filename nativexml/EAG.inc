{ simdesign.inc

  include file for many simdesign projects
  default path: \simlib\general

  Author: Nils Haeck M.Sc.
  Copyright (c) 2007 - 2011 Simdesign B.V.

}

// unicode avoid implicit string cast warning
{$ifdef UNICODE}
{$WARN IMPLICIT_STRING_CAST OFF}
{$endif UNICODE}

// Delphi and FPC versions

// Freepascal
{$ifdef FPC}
  {$MODE DELPHI}
  {$define D7UP}
{$endif FPC}

// Delphi 5
{$ifdef VER130}
  {$define D5UP}
{$endif}

//Delphi 6
{$ifdef VER140}
  {$define D5UP}
{$endif}

//Delphi 7
{$ifdef VER150}
  {$define D7UP}
{$endif}

//Delphi 8
{$ifdef VER160}
  {$define D7UP}
{$endif}

// Delphi 2005 / 9
{$ifdef VER170}
  {$define D7UP}
{$endif}

// Delphi 2006 / 10
{$ifdef VER180}
  {$define D7UP}
  // D10 publishes OnMouseEnter / OnMouseLeave
  {$define D10UP}
{$endif}

// Delphi 2007 Rad studio / 11?
{$ifdef VER185}
  {$define D7UP}
  {$define D10UP}
{$endif}

// Delphi 2007 - NET / 11?
{$ifdef VER190}
  {$define D7UP}
  {$define D10UP}
{$endif}

// Delphi 2009 / 12
// first UNICODE version, so then directive UNICODE is defined, no need for directive D12UP
{$ifdef VER200}
  {$define D7UP}
  {$define D10UP}
{$endif}

// Delphi 2010 / 14?
{$ifdef VER210}
  {$define D7UP}
  {$define D10UP}
{$endif}

// Delphi XE / 15
{$ifdef VER220}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
{$endif}

// Delphi XE2 / 16
{$ifdef VER230}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi XE3
{$ifdef VER240}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi XE4
{$ifdef VER250}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi XE5
{$ifdef VER260}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi XE6
{$ifdef VER270}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi XE7
{$ifdef VER280}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi XE8
{$ifdef VER290}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi 10
{$ifdef VER300}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi 10.1 Berlin
{$ifdef VER310}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi 10.2 Tokyo
{$ifdef VER320}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi 10.3 Rio
{$ifdef VER330}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi 10.4 Sydney
{$ifdef VER340}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
{$endif}

// Delphi 11.0 Alexandria
{$ifdef VER350}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
  {$define D28UP}
{$endif}

//Going to add a few more in here for safety although we don't know
//  the code names. However when I didn't update this it took me a month or 2
//  before I realized that XML reading was failing for floating point values and attributes
//When I added the entry for Alexandria it all started working again

// Delphi 12.0 Yukon
{$ifdef VER360}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
  {$define D28UP}
  {$define D29UP}
{$endif}

// Delphi 13.0 ??
{$ifdef VER370}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
  {$define D28UP}
  {$define D29UP}
  {$define D30UP}
{$endif}

// Delphi 14.0 ??
{$ifdef VER380}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
  {$define D28UP}
  {$define D29UP}
  {$define D30UP}
  {$define D31UP}
{$endif}

// Delphi 15.0 ??
{$ifdef VER390}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
  {$define D28UP}
  {$define D29UP}
  {$define D30UP}
  {$define D31UP}
  {$define D32UP}
{$endif}

// Delphi 16.0 ??
{$ifdef VER400}
  {$define D7UP}
  {$define D10UP}
  {$define D15UP}
  {$define D16UP}
  {$define D28UP}
  {$define D29UP}
  {$define D30UP}
  {$define D31UP}
  {$define D32UP}
  {$define D33UP}
{$endif}

