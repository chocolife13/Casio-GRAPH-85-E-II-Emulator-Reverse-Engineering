// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532ad0
// entry: 00532ad0  size: 30


bool FUN_00532ad0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00532a90(param_1);
  if (cVar1 != '\0') {
    return true;
  }
  return (char)param_1 == '\n';
}

