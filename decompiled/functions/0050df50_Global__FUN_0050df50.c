// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050df50
// entry: 0050df50  size: 730


void FUN_0050df50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5
                 )

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = *(uint *)(param_5 * 0x20 + 0x18 + *(int *)(param_4 + 0x8dc));
  if ((uVar2 & 0x10) != 0) {
    if ((uVar2 & 0x100) == 0) {
      if ((uVar2 & 1) == 0) {
        FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,1,&local_18);
        local_2c = local_14;
        local_30 = local_18;
        local_28 = local_10;
        if ((*(byte *)(param_4 + 0x8e1) & 2) == 0) {
          uVar3 = *(undefined1 *)(param_4 + 0x8e4);
          param_5 = param_5 + 2;
        }
        else {
          uVar3 = *(undefined1 *)(param_4 + 0x8e4);
          param_5 = param_5 * 3 + 2;
        }
        FUN_00528ac0(uVar3,param_1,param_5,&local_18);
        local_24 = local_18;
        local_20 = local_14;
        local_1c = local_10;
        FUN_004d5480(&local_24,&local_30,param_2,param_3,(*(byte *)(param_4 + 0x8e0) & 0xc) >> 2);
        goto LAB_0050e208;
      }
      if ((*(byte *)(param_4 + 0x8e1) & 2) == 0) {
        FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,param_5 * 2 + 2,&local_18);
        *param_2 = local_18;
        param_2[1] = local_14;
        param_2[2] = local_10;
        uVar3 = *(undefined1 *)(param_4 + 0x8e4);
        param_5 = param_5 * 2;
      }
      else {
        FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,param_5 * 5 + 2,&local_18);
        *param_2 = local_18;
        param_2[1] = local_14;
        param_2[2] = local_10;
        uVar3 = *(undefined1 *)(param_4 + 0x8e4);
        param_5 = param_5 * 5;
      }
      FUN_00528ac0(uVar3,param_1,param_5 + 3,&local_18);
    }
    else {
      FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,1,&local_18);
      *param_2 = local_18;
      param_2[1] = local_14;
      param_2[2] = local_10;
      if ((*(byte *)(param_4 + 0x8e1) & 2) == 0) {
        FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,param_5 + 2,&local_18);
      }
      else {
        FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,param_5 * 2 + 2,&local_18);
      }
    }
    *param_3 = local_18;
    param_3[1] = local_14;
    param_3[2] = local_10;
    goto LAB_0050e208;
  }
  if ((uVar2 & 4) == 0) goto LAB_0050e208;
  FUN_00528ac0(*(undefined1 *)(param_4 + 0x8e4),param_1,1,&local_18);
  *param_2 = local_18;
  param_2[1] = local_14;
  param_2[2] = local_10;
  cVar1 = *(char *)(param_5 * 0x20 + 0x1e + *(int *)(param_4 + 0x8dc));
  if (((cVar1 == '\b') || (cVar1 == '\t')) || (cVar1 == '\n')) {
    param_5 = param_5 * 2 + 3;
LAB_0050e1df:
    uVar3 = *(undefined1 *)(param_4 + 0x8e4);
  }
  else {
    if ((*(byte *)(param_4 + 0x8e1) & 2) == 0) {
      param_5 = param_5 + 2;
      goto LAB_0050e1df;
    }
    uVar3 = *(undefined1 *)(param_4 + 0x8e4);
    param_5 = param_5 * 2 + 2;
  }
  FUN_00528ac0(uVar3,param_1,param_5,&local_18);
  *param_3 = local_18;
  param_3[1] = local_14;
  param_3[2] = local_10;
LAB_0050e208:
  FUN_0052f780(0x58,param_2);
  FUN_0052f780(0x59,param_3);
  return;
}

