// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e14d0
// entry: 004e14d0  size: 249


undefined4 * FUN_004e14d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_004e4040(param_1);
  iVar2 = FUN_004e4040(param_2);
  if (iVar1 == -1) {
    puVar3 = param_3;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    return param_3;
  }
  if (iVar2 == -1) {
    puVar3 = param_3;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    return param_3;
  }
  if ((iVar1 == 3) || (iVar2 == 3)) {
    puVar3 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar3;
  }
  if ((iVar1 != 2) && (iVar2 != 2)) {
    iVar1 = FUN_004e4000(param_1);
    iVar2 = FUN_004e4000(param_2);
    if ((iVar1 == 0) && (iVar2 == 0)) {
      puVar3 = (undefined4 *)FUN_004e72b0(param_1,param_2,param_3);
      return puVar3;
    }
    puVar3 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar3;
  }
  iVar1 = FUN_004e4000(param_1);
  iVar2 = FUN_004e4000(param_2);
  if ((iVar1 == 0) && (iVar2 == 0)) {
    FUN_004db990(param_1,param_2,param_3);
    return param_3;
  }
  puVar3 = (undefined4 *)FUN_004e5630(0x19,param_3);
  return puVar3;
}

