// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532a70
// entry: 00532a70  size: 30


bool FUN_00532a70(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00532a30(param_1);
  if (cVar1 != '\0') {
    return true;
  }
  return (char)param_1 == '\x05';
}

