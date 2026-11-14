// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005512f0
// entry: 005512f0  size: 113


undefined4 FUN_005512f0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_2 = 0;
  *param_1 = 0;
  FUN_0052f840();
  iVar1 = FUN_0052f820();
  if (iVar1 == 1) {
    return 1;
  }
  iVar1 = FUN_00527440(param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    *param_1 = iVar1 + 0x24;
    *param_1 = iVar1 + 0x24;
    return 0;
  }
  *param_2 = *param_2 + iVar1 * 0xc;
  *param_1 = *param_1 + iVar1 * 0xc;
  return 0;
}

