// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00576820
// entry: 00576820  size: 57


undefined4 __thiscall FUN_00576820(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((0 < param_2) && (iVar1 = FUN_00553d5c(param_2,param_3), iVar1 == 0)) {
    return 0;
  }
  FUN_00553b50(*(undefined4 *)(param_1 + 0x5c));
  *(int *)(param_1 + 0x5c) = iVar1;
  *(int *)(param_1 + 0x58) = param_2;
  return 1;
}

