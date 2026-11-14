// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b5ad0
// entry: 004b5ad0  size: 916


void FUN_004b5ad0(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 unaff_EBX;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  int local_7c;
  int local_78;
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  byte local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [4];
  undefined1 local_50 [28];
  undefined1 local_34 [24];
  undefined1 local_1c [28];
  
  local_83 = 0x52;
  local_82 = 0x52;
  local_80 = 0x52;
  local_84 = 0x45;
  local_81 = 0x4f;
  local_7f = 0;
  local_78 = 0;
  FUN_004b6410(local_70,local_74,&local_7c,&local_8c,local_54);
  bVar2 = FUN_0052f6b0(0x3d);
  uVar1 = CONCAT31((int3)((uint)unaff_EBX >> 8),bVar2);
  local_88 = CONCAT31(local_88._1_3_,bVar2) & 0xffffff0f | 0x80;
  FUN_0052f6c0(0x3d,local_88);
  if (local_7c == 0) {
    if (((*param_1 & 0xf) == 10) || (((*param_1 & 0x80) != 0 && ((param_1[0xc] & 0xf) == 10)))) {
      if ((bVar2 & 0xf) != 1) {
        FUN_004e3720(param_1,local_6c,local_34);
        local_88 = CONCAT31(local_88._1_3_,0x88);
        pbVar5 = local_6c;
        pbVar6 = param_1;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
          pbVar6 = pbVar6 + 4;
        }
        if ((((bVar2 & 0xf) == 8) || (cVar3 = FUN_00526090(0x57), cVar3 == '\x01')) &&
           (iVar4 = FUN_004b6670(param_1,local_6c), iVar4 == 1)) {
          local_88 = CONCAT31(local_88._1_3_,0x81);
        }
        FUN_0052f6c0(0x3d,local_88);
        iVar4 = FUN_004b45a0(local_50,local_6c);
        if (iVar4 == -1) {
          FUN_004b6ef0(param_2,&local_84);
          return;
        }
        goto LAB_004b5d76;
      }
      pbVar5 = local_6c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pbVar5 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pbVar5 = pbVar5 + 4;
      }
      FUN_0052f6c0(0x3d,uVar1 & 0xffffff08 | 0x88);
      iVar4 = FUN_004b45a0(local_50,local_6c);
    }
    else {
      FUN_004e3720(param_1,local_6c,local_34);
      pbVar5 = local_6c;
      pbVar6 = param_1;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar6 = pbVar6 + 4;
      }
      bVar2 = *param_1;
      if ((((bVar2 & 0x80) == 0) && ((bVar2 & 0xf) != 10)) ||
         (((bVar2 & 0x80) != 0 && (((bVar2 & 0xf) != 10 && ((param_1[0xc] & 0xf) != 10)))))) {
        FUN_0052f6c0(0x3d,uVar1 & 0xffffff02 | 0x82);
        local_8c = 0;
        FUN_004b5620(local_6c,param_2,&local_78,local_70,local_74,&local_7c,&local_8c);
        return;
      }
      pbVar5 = param_1;
      pbVar6 = local_6c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar6 = pbVar6 + 4;
      }
      local_88 = CONCAT31(local_88._1_3_,0x88);
      cVar3 = FUN_00526090(0x57);
      if ((cVar3 == '\x01') && (iVar4 = FUN_004b6670(param_1,local_6c), iVar4 == 1)) {
        local_88 = CONCAT31(local_88._1_3_,0x81);
      }
      FUN_0052f6c0(0x3d,local_88);
      iVar4 = FUN_004b45a0(local_50,local_6c);
    }
    if (iVar4 != -1) {
LAB_004b5d76:
      if (((local_6c[0] & 0x80) != 0) && (iVar4 = FUN_004b45a0(local_1c,local_60), iVar4 == -1)) {
        FUN_004b6ef0(param_2,&local_84);
        return;
      }
      local_8c = 0;
      FUN_004b5620(local_6c,param_2,&local_78,local_70,local_74,&local_7c,&local_8c);
      return;
    }
  }
  else if ((((*param_1 & 0xf) != 10) && (((*param_1 & 0x80) == 0 || ((param_1[0xc] & 0xf) != 10))))
          || (iVar4 = FUN_004b3ee0(param_1), iVar4 != 0)) {
    local_8c = 0;
    FUN_004b5620(param_1,param_2,&local_78,local_70,local_74,&local_7c,&local_8c);
    return;
  }
  FUN_004b6ef0(param_2,&local_84);
  return;
}

