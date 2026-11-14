// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e2af0
// entry: 004e2af0  size: 401


undefined4 *
FUN_004e2af0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_004e4040(param_1);
  iVar2 = FUN_004e4040(param_2);
  if (iVar1 == -1) {
    puVar5 = param_3;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    return param_3;
  }
  if (iVar2 == -1) {
    puVar5 = param_3;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    return param_3;
  }
  if ((iVar1 == 3) || (iVar2 == 3)) {
    puVar5 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar5;
  }
  if ((iVar1 != 2) && (iVar2 != 2)) {
    iVar1 = FUN_004e4000(param_1);
    iVar2 = FUN_004e4000(param_2);
    if ((iVar1 == 0) && (iVar2 == 0)) {
      uVar3 = FUN_004e1c60(param_2,&local_30,param_4,1,&local_30,1);
      FUN_004e0c40(param_1,uVar3);
      uVar3 = FUN_004e1be0(param_2,&local_18,param_4,1,&local_18,1);
      FUN_004e0c40(param_1,uVar3);
      piVar4 = (int *)FUN_004ad630(0x18);
      if (piVar4 == (int *)0x0) {
        puVar5 = (undefined4 *)FUN_004e5630(4,param_3);
        return puVar5;
      }
      puVar5 = (undefined4 *)*piVar4;
      *puVar5 = local_30;
      puVar5[1] = local_2c;
      puVar5[2] = local_28;
      iVar1 = *piVar4;
      *(undefined4 *)(iVar1 + 0xc) = local_18;
      *(undefined4 *)(iVar1 + 0x10) = local_14;
      *(undefined4 *)(iVar1 + 0x14) = local_10;
      *(undefined1 *)param_3 = 0x20;
      *(undefined2 *)((int)param_3 + 2) = 2;
      *(undefined2 *)(param_3 + 1) = 0;
      param_3[2] = piVar4;
      return param_3;
    }
    puVar5 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar5;
  }
  puVar5 = (undefined4 *)FUN_004e5630(3,param_3);
  return puVar5;
}

