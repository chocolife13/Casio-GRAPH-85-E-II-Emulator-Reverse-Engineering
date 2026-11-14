// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004840c0
// entry: 004840c0  size: 714


int FUN_004840c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 local_cc [24];
  undefined1 local_b4 [24];
  undefined1 local_9c [24];
  undefined1 local_84 [24];
  undefined4 local_6c [15];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_00481e10(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_00483d60(param_2,local_b4);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_00483d60(param_3,local_9c);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((param_1 < 0x11) || (0x12 < param_1)) {
    if ((param_4 != 0) && (iVar1 = FUN_00483d60(param_4,local_84), iVar1 != 0)) {
      return iVar1;
    }
  }
  else {
    param_4 = 0;
  }
  switch(param_1) {
  case 9:
    uVar2 = 1;
    goto LAB_00484175;
  case 10:
    if (param_4 == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = local_84;
    }
    iVar1 = FUN_004badc0(local_b4,local_9c,puVar5,local_cc);
    break;
  case 0xb:
    uVar2 = 2;
    goto LAB_00484175;
  case 0xc:
    uVar2 = 3;
    goto LAB_00484175;
  case 0xd:
    uVar2 = 4;
LAB_00484175:
    if (param_4 == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = local_84;
    }
    iVar1 = FUN_004b8ce0(local_b4,local_9c,puVar5,uVar2,local_cc);
    break;
  case 0xe:
    if (param_4 == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = local_84;
    }
    iVar1 = FUN_004bc3b0(local_b4,local_9c,puVar5,local_cc);
    break;
  case 0xf:
    if (param_4 == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = local_84;
    }
    iVar1 = FUN_004bc770(local_b4,local_9c,puVar5,local_cc);
    break;
  case 0x10:
    if (param_4 == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = local_84;
    }
    iVar1 = FUN_004bcb40(local_b4,local_9c,puVar5,local_cc);
    break;
  case 0x11:
    iVar1 = FUN_004bcf80(local_b4,local_9c,local_cc);
    break;
  case 0x12:
    iVar1 = FUN_004c01e0(local_b4,local_9c,local_cc);
    break;
  default:
    return 0;
  }
  if (iVar1 != 1) {
    iVar1 = FUN_004e4020(local_cc);
    return iVar1;
  }
  FUN_004da220(local_cc,local_6c);
  iVar1 = 8;
  puVar3 = local_6c;
  puVar4 = param_5;
  do {
    iVar1 = iVar1 + -1;
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    puVar3 = puVar3 + 3;
    puVar4 = puVar4 + 6;
  } while (iVar1 != 0);
  if ((param_1 != 9) && ((param_1 < 0xe || (0x10 < param_1)))) {
    return 0;
  }
  param_5[0xc] = local_30;
  param_5[0xd] = local_2c;
  param_5[0xe] = local_28;
  param_5[0x12] = local_24;
  param_5[0x13] = local_20;
  param_5[0x14] = local_1c;
  return 0;
}

