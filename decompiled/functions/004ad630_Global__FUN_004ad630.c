// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad630
// entry: 004ad630  size: 53


int * FUN_004ad630(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004ad610(0);
  iVar2 = FUN_00407130(param_1);
  (&DAT_005d5b80)[iVar1] = iVar2;
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  (&DAT_005d5880)[iVar1] = (short)param_1;
  return &DAT_005d5b80 + iVar1;
}

