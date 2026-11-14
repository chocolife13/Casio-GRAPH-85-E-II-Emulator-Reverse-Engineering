// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005386a0
// entry: 005386a0  size: 83


void FUN_005386a0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_005d57e0;
  do {
    if (*piVar1 == -1) {
      if (0x1f < iVar2) {
        FUN_00525bd0(4,&DAT_005c428c);
        return;
      }
      (&DAT_005d57e0)[iVar2] = param_1;
      (&DAT_005d57e4)[iVar2] = 0xffffffff;
      return;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5d5860);
  FUN_00525bd0(4,&DAT_005c428c);
  return;
}

