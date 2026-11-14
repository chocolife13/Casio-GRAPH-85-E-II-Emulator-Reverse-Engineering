// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e7d00
// entry: 004e7d00  size: 147


void FUN_004e7d00(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return;
  }
  if ((param_3 < 0) || (10 < param_3)) {
    FUN_004e5630(8,param_2);
    return;
  }
  if (param_3 == 10) {
    FUN_004e7af0(param_1,param_2,0xb);
    return;
  }
  iVar1 = FUN_004e7b60(param_1);
  iVar1 = param_3 + 2 + iVar1;
  if (iVar1 < 1) {
    FUN_004e5780(param_2);
    return;
  }
  FUN_004e7af0(param_1,param_2,iVar1);
  return;
}

