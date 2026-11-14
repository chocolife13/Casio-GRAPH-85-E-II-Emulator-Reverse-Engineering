// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ef4f0
// entry: 004ef4f0  size: 199


undefined4 * FUN_004ef4f0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_c [12];
  
  puVar3 = param_2;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_004e4020(param_2);
  if (iVar2 == 0) {
    iVar2 = 0x20;
    if (param_3 == 1) {
      iVar2 = 0x10;
      FUN_004e5860(local_c);
    }
    else {
      FUN_004e58f0(local_c);
    }
    iVar1 = FUN_004e7290(param_2,local_c);
    if ((iVar1 != -1) && (iVar1 == 0)) {
      if (iVar2 == 0x20) {
        FUN_004e5920(local_c);
      }
      else {
        FUN_004e5890(local_c);
      }
      iVar2 = FUN_004e7250(param_2,local_c);
      if ((iVar2 != -1) && (iVar2 == 0)) {
        FUN_004e76a0(param_2,param_2);
        return param_2;
      }
    }
    FUN_004e5630(3,param_2);
  }
  return param_2;
}

