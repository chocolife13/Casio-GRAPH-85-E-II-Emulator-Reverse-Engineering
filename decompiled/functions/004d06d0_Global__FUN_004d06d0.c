// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d06d0
// entry: 004d06d0  size: 407


undefined4
FUN_004d06d0(uint param_1,int param_2,undefined4 param_3,uint *param_4,undefined1 *param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  iVar2 = FUN_004e4020(param_2);
  if (iVar2 != 0) {
    FUN_004e5630(3,&local_18);
    if (param_1 == 0) {
      puVar5 = (undefined4 *)(param_2 + 0x3c);
    }
    else {
      puVar5 = (undefined4 *)(param_2 + 0x48);
    }
    *puVar5 = local_18;
    puVar5[1] = local_14;
    puVar5[2] = local_10;
    return 0;
  }
  if (param_1 == 0) {
    *param_4 = *(uint *)(param_2 + 0x54);
    *param_5 = *(undefined1 *)(param_2 + 0x5c);
    uVar4 = *(undefined1 *)(param_2 + 0x5d);
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x58);
    if (uVar3 <= *(uint *)(param_2 + 0x54)) {
      if (*(uint *)(param_2 + 0x54) != uVar3) {
        return 0;
      }
      FUN_004e5780(param_2 + 0x48);
      return 1;
    }
    *param_4 = uVar3;
    *param_5 = *(undefined1 *)(param_2 + 0x5e);
    uVar4 = *(undefined1 *)(param_2 + 0x5f);
  }
  param_5[1] = uVar4;
  FUN_004e5780(&local_24);
  FUN_004e7910(param_2,&local_18);
  local_c = local_24;
  local_8 = local_20;
  local_4 = local_1c;
  FUN_0052f780(param_3,&local_18);
  uVar3 = FUN_0052f6b0(0x3b);
  param_1 = uVar3 & 0xff;
  FUN_0052f6c0(0x3b,uVar3 | 2);
  if (param_7 == 0) {
    uVar6 = 0x8904;
  }
  else {
    uVar6 = 0x8104;
  }
  uVar6 = FUN_004fc460(param_4,param_5,&local_18,param_6,uVar6);
  FUN_0052f6c0(0x3b,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x48) = local_18;
    *(undefined4 *)(param_2 + 0x4c) = local_14;
    *(undefined4 *)(param_2 + 0x50) = local_10;
    return uVar6;
  }
  *(undefined4 *)(param_2 + 0x3c) = local_18;
  *(undefined4 *)(param_2 + 0x40) = local_14;
  *(undefined4 *)(param_2 + 0x44) = local_10;
  FUN_004e5780(param_2 + 0x48);
  return uVar6;
}

