// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532a50
// entry: 00532a50  size: 30


bool FUN_00532a50(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00532a10(param_1);
  if (cVar1 != '\0') {
    return true;
  }
  return (char)param_1 == '\x05';
}

