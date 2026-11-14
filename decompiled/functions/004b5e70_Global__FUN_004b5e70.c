// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b5e70
// entry: 004b5e70  size: 1159


void FUN_004b5e70(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 local_8c;
  int local_88;
  undefined1 local_84 [4];
  undefined4 local_80;
  undefined1 local_7c [4];
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  uint local_70;
  undefined4 local_6c [6];
  undefined1 local_54 [4];
  undefined1 local_50 [24];
  undefined1 local_38 [28];
  undefined1 local_1c [28];
  
  local_77 = 0x52;
  local_76 = 0x52;
  local_74 = 0x52;
  local_78 = 0x45;
  local_75 = 0x4f;
  local_73 = 0;
  local_80 = 0;
  FUN_004b6410(local_7c,local_84,&local_88,&local_8c,local_54);
  bVar2 = FUN_0052f6b0(0x3d);
  uVar1 = CONCAT31((int3)((uint)unaff_EBX >> 8),bVar2);
  local_70 = CONCAT31(local_70._1_3_,bVar2) & 0xffffff0f | 0x80;
  FUN_0052f6c0(0x3d,local_70);
  if (local_88 != 0) {
    if ((((*param_1 & 0xf) == 10) || (((*param_1 & 0x80) != 0 && ((param_1[0xc] & 0xf) == 10)))) &&
       (iVar3 = FUN_004b3ee0(param_1), iVar3 == 0)) {
      FUN_004b6ef0(param_2,&local_78);
      return;
    }
    local_8c = 0;
    FUN_004b5620(param_1,param_2,&local_80,local_7c,local_84,&local_88,&local_8c);
    return;
  }
  if ((bVar2 & 0xf) == 2) {
    FUN_004e3720(param_1,local_6c,local_50);
    puVar4 = local_6c;
    pbVar5 = param_1;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      pbVar5 = pbVar5 + 4;
    }
    if (((*param_1 & 0xf) != 10) && (((*param_1 & 0x80) == 0 || ((param_1[0xc] & 0xf) != 10)))) {
      FUN_0052f6c0(0x3d,uVar1 & 0xffffff02 | 0x82);
      local_8c = 0;
      FUN_004b5620(param_1,param_2,&local_80,local_7c,local_84,&local_88,&local_8c);
      return;
    }
    FUN_0052f6c0(0x3d,uVar1 & 0xffffff04 | 0x84);
    iVar3 = FUN_004b45a0(local_38,param_1);
    if (iVar3 == -1) {
      FUN_004b6ef0(param_2,&local_78);
      return;
    }
    if (((*param_1 & 0x80) == 0) || (iVar3 = FUN_004b45a0(local_1c,param_1 + 0xc), iVar3 != -1)) {
      local_8c = 0;
      FUN_004b5620(param_1,param_2,&local_80,local_7c,local_84,&local_88,&local_8c);
      return;
    }
  }
  else {
    if (((bVar2 & 0xf) == 0) && ((*param_1 & 0x80) != 0)) {
      if (((*param_1 & 0xf) == 10) || ((param_1[0xc] & 0xf) == 10)) {
        FUN_004e56c0(param_1,local_6c);
      }
      else {
        puVar4 = local_6c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *(undefined4 *)param_1;
          param_1 = param_1 + 4;
          puVar4 = puVar4 + 1;
        }
      }
      FUN_0052f6c0(0x3d,uVar1 & 0xffffff02 | 0x82);
      local_8c = 0;
      FUN_004b5620(local_6c,param_2,&local_80,local_7c,local_84,&local_88,&local_8c);
      return;
    }
    if (((*param_1 & 0xf) == 10) || (((*param_1 & 0x80) != 0 && ((param_1[0xc] & 0xf) == 10)))) {
      FUN_004e56c0(param_1,local_6c);
      FUN_0052f6c0(0x3d,uVar1 & 0xffffff02 | 0x82);
      local_8c = 0;
      FUN_004b5620(local_6c,param_2,&local_80,local_7c,local_84,&local_88,&local_8c);
      return;
    }
    FUN_004e3720(param_1,local_6c,local_50);
    puVar4 = local_6c;
    pbVar5 = param_1;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      pbVar5 = pbVar5 + 4;
    }
    if (((*param_1 & 0xf) != 10) && (((*param_1 & 0x80) == 0 || ((param_1[0xc] & 0xf) != 10)))) {
      FUN_0052f6c0(0x3d,uVar1 & 0xffffff02 | 0x82);
      local_8c = 0;
      FUN_004b5620(param_1,param_2,&local_80,local_7c,local_84,&local_88,&local_8c);
      return;
    }
    FUN_0052f6c0(0x3d,uVar1 & 0xffffff04 | 0x84);
    iVar3 = FUN_004b45a0(local_38,param_1);
    if (iVar3 != -1) {
      if (((*param_1 & 0x80) != 0) && (iVar3 = FUN_004b45a0(local_1c,param_1 + 0xc), iVar3 == -1)) {
        FUN_004b6ef0(param_2,&local_78);
        return;
      }
      local_8c = 0;
      FUN_004b5620(param_1,param_2,&local_80,local_7c,local_84,&local_88,&local_8c);
      return;
    }
  }
  FUN_004b6ef0(param_2,&local_78);
  return;
}

