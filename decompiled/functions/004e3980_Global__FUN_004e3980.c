// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e3980
// entry: 004e3980  size: 397


void FUN_004e3980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar1 = FUN_004e4040(param_1);
  iVar2 = FUN_004e4040(param_2);
  if ((iVar1 == 3) || (iVar2 == 3)) {
    FUN_004e5630(3,param_3);
    return;
  }
  iVar1 = FUN_004e4000(param_1);
  iVar2 = FUN_004e4000(param_2);
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
  if ((iVar1 == 0) && (iVar2 == 0)) {
    FUN_004e5780(local_54);
    iVar1 = FUN_004e7250(param_1,local_54);
    if (iVar1 != 0) {
      FUN_004e5630(3,param_3);
      return;
    }
    uVar3 = FUN_004e1c60(param_2,local_18,param_4,1,local_18,1);
    FUN_004e0c40(param_1,uVar3);
    uVar3 = FUN_004e1be0(param_2,local_30,param_4,1,local_30,1);
    FUN_004e0c40(param_1,uVar3);
    FUN_004e5780(local_48);
    FUN_004e57a0(local_3c);
    FUN_004e4120(local_48,local_3c,local_48);
    FUN_004e0c40(local_30,local_48,local_30,1);
    FUN_004e0740(local_18,local_30,param_3,1);
    return;
  }
  FUN_004e5630(3,param_3);
  return;
}

