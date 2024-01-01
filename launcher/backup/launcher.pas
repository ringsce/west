unit launcher;

{$mode objfpc}{$H+}
{$DEFINE debug}     // do this here or you can define a -dDEBUG in Project Options/Other/Custom Options, i.e. in a build mode so you can set up a Debug with leakview and a Default build mode


interface

uses
  {$IFDEF debug}
  SysUtils,
  {$ENDIF}
  Classes, Forms, Controls, Graphics, Dialogs;

type
  TForm1 = class(TForm)
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

begin
   {$IFDEF DEBUG}
  // Assuming your build mode sets -dDEBUG in Project Options/Other when defining -gh
  // This avoids interference when running a production/default build without -gh

  // Set up -gh output for the Leakview package:
  if FileExists('heap.trc') then
    DeleteFile('heap.trc');
  SetHeapTraceOutput('heap.trc');
  {$ENDIF DEBUG}
end.

