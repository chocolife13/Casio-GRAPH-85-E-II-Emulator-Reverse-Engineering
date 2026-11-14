// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e2970
// entry: 004e2970  size: 383


undefined4 *
FUN_004e2970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_18 [24];
  
  iVar1 = FUN_004e4040(param_1);
  iVar2 = FUN_004e4040(param_2);
  if (iVar1 == -1) {
    puVar4 = param_3;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    return param_3;
  }
  if (iVar2 == -1) {
    puVar4 = param_3;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    return param_3;
  }
  if ((iVar1 == 3) || (iVar2 == 3)) {
    puVar4 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar4;
  }
  if ((iVar1 != 2) && (iVar2 != 2)) {
    iVar1 = FUN_004e4000(param_1);
    iVar2 = FUN_004e4000(param_2);
    if ((iVar1 == 0) && (iVar2 == 0)) {
      FUN_004e4120(param_1,param_2,local_18);
      FUN_004e23b0(local_18,&local_48,1);
      FUN_004e28c0(local_18,&local_30,param_4,1);
      piVar3 = (int *)FUN_004ad630(0x18);
      if (piVar3 == (int *)0x0) {
        puVar4 = (undefined4 *)FUN_004e5630(4,param_3);
        return puVar4;
      }
      puVar4 = (undefined4 *)*piVar3;
      *puVar4 = local_48;
      puVar4[1] = local_44;
      puVar4[2] = local_40;
      iVar1 = *piVar3;
      *(undefined4 *)(iVar1 + 0xc) = local_30;
      *(undefined4 *)(iVar1 + 0x10) = local_2c;
      *(undefined4 *)(iVar1 + 0x14) = local_28;
      *(undefined1 *)param_3 = 0x20;
      *(undefined2 *)((int)param_3 + 2) = 2;
      *(undefined2 *)(param_3 + 1) = 0;
      param_3[2] = piVar3;
      return param_3;
    }
    puVar4 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar4;
  }
  puVar4 = (undefined4 *)FUN_004e5630(3,param_3);
  return puVar4;
}

