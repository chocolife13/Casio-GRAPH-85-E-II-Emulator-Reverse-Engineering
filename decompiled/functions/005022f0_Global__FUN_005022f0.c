// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005022f0
// entry: 005022f0  size: 96


undefined4 FUN_005022f0(char param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_400 [1024];
  
  FUN_00502110(local_400);
  if (param_1 == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = (-(param_1 != '\x01') & 0x10U) + 1;
  }
  iVar2 = FUN_0052eb10(cVar1);
  if (iVar2 == 0) {
    FUN_00515dd0();
    return 1;
  }
  FUN_00502140(local_400);
  return 0;
}

