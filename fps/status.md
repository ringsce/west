##
Project: Ekron Delphi Engine Project
File: status.md
Author: Pedro Dias Vicente (pedrolvicente@gmail.com)
------------------------------------------------------------

Here is brief description of Delphi conversion of 
each module in Ekron Delphi conversion project.

#ekron.exe:
Not Fully converted, compiles and has no known bugs.

#ref_soft.dll:
Not Fully converted, compiles, starts, but has many bugs.

#ref_gl.dll:
Not Fully converted, compiles, starts, almost perfect.

#gamex86.dll:
Not Fully converted, compiles, starts, almost perfect.

Ekron Engine being converted for Lazarus IDE.

Main focus is on the binary engine not the library itself yet.

Do not touch on dpr file from Delphi 6+, it's not working, finding a fix. 

# First Corrections and Correlations

For M1+ you must use west_aarch64.lpr, for amd64 you should use west.lpr

For linux you must choose based on your distro, we offer a debian and fedora based projects.

More info:
https://ringscejs.gleentech.com
