program hud;

{$MODE DELPHI}{$H+}

uses
  Interfaces, Forms, StdCtrls,
  MainForm;

var
  MyForm: TMyForm;
begin
  Application.Initialize;
  Application.CreateForm(TMyForm, MyForm);
  Application.Run;
end.
