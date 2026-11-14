// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e1050
// entry: 004e1050  size: 405


void FUN_004e1050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar1 = FUN_004e4040(param_1);
  iVar2 = FUN_004e4040(param_2);
  if (iVar1 == -1) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
    return;
  }
  if (iVar2 == -1) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    }
    return;
  }
  if (iVar2 == 3) {
    FUN_004e5630(3,param_3);
    return;
  }
  if (iVar1 == 3) {
    if (iVar2 == 2) {
      FUN_004e5630(3,param_3);
      return;
    }
    FUN_004df240(param_1,param_2,param_3,param_4);
    return;
  }
  if ((iVar1 == 2) || (iVar2 == 2)) {
    FUN_004da9f0(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_004e5780(local_54);
  iVar1 = FUN_004e4000(param_1);
  iVar2 = FUN_004e4000(param_2);
  if ((iVar1 == 0) && (iVar2 == 0)) {
    iVar1 = FUN_004e7310(param_1,local_54);
    iVar2 = FUN_004e9680(param_2);
    if ((iVar1 != 0) || (iVar2 != 0)) {
      FUN_004e6fb0(param_1,param_2,param_3);
      return;
    }
    if (param_4 == 0) {
      FUN_004e7070(param_1,param_2,param_3);
      return;
    }
  }
  FUN_004e4080(param_1,local_18);
  FUN_004e4080(param_2,local_30);
  FUN_004e9f00(local_18,local_30,local_48);
  FUN_004e4120(local_48,local_3c,param_3);
  return;
}

