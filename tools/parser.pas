{----------------------------------------------------------------------------}
{                                                                            }
{ File(s): tools\parser.pas                                                   }
{                                                                            }
{ Initial conversion by : ?                                                  }
{ Initial conversion on : ?                                                  }
{                                                                            }
{ This File contains part of convertion of Quake2 source to ObjectPascal.    }
{ More information about this project can be found at:                       }
{ http://ringscejs.gleentech.com/west                                        }
{                                                                            }
{ Copyright (C) 2023-2024 Kreatyve Designs, Inc.                             }
{                                                                            }
{ This program is free software; you can redistribute it and/or              }
{ modify it under the terms of the GNU General Public License                }
{ as published by the Free Software Foundation; either version 2             }
{ of the License, or (at your option) any later version.                     }
{                                                                            }
{ This program is distributed in the hope that it will be useful,            }
{ but WITHOUT ANY WARRANTY; without even the implied warranty of             }
{ MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                       }
{                                                                            }
{ See the GNU General Public License for more details.                       }
{                                                                            }
{----------------------------------------------------------------------------}
unit parser;

{$mode objfpc}{$H+}
interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, OpenGLContext, gl;



type
  TForm1 = class(TForm)
    procedure FormCreate(Sender: TObject);
    procedure GLboxPaint(Sender: TObject);
  private
    GLBox: TOpenGLControl;
  public
  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}
var

begin
end;

begin
  

end.
