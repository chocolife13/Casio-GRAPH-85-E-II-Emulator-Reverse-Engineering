// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046e890
// entry: 0046e890  size: 194


void FUN_0046e890(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  iVar1 = FUN_004e7250(param_1,local_c);
  iVar2 = FUN_004e7b60(param_1);
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  iVar3 = FUN_004e4020(param_1);
  if (iVar3 == 0) {
    if ((iVar2 < -2) || (5 < iVar2)) {
      FUN_004e7af0(param_1,param_2,6 - (uint)(iVar1 == 1));
    }
    else {
      FUN_004e7af0(param_1,param_2,10 - (uint)(iVar1 == 1));
    }
  }
  else {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
  }
  iVar1 = FUN_004e4020(param_2);
  if (iVar1 != 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
  }
  return;
}

