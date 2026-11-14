// decompiled from GRAPH85emulator.exe
// function: Global::__amsg_exit
// entry: 005559c4  size: 34


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_005d5390 == 1) {
    FUN_0055aba7();
  }
  FUN_0055abe0(param_1);
  (*(code *)PTR___exit_005cbf60)(0xff);
  return;
}

