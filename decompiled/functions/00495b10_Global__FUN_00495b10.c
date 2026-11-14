// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495b10
// entry: 00495b10  size: 1063


undefined4 FUN_00495b10(int param_1,uint *param_2,byte *param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *local_3c;
  uint local_38;
  undefined2 local_34;
  undefined2 local_32;
  uint local_30;
  uint local_2c [10];
  undefined2 local_4;
  undefined1 uStack_2;
  byte bStack_1;
  
  iVar8 = 0;
  FUN_0052f840();
  DAT_005d6d80 = 1;
  cVar2 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,&local_30,&local_3c);
  if (cVar2 != '\0') {
    return 0;
  }
  uVar7 = *param_2;
  if (uVar7 < 0x6000001) {
    if (uVar7 == 0x6000000) {
      iVar8 = 0x14;
      goto LAB_00495c20;
    }
    if (uVar7 == 0x3000000) {
      iVar8 = 8;
      goto LAB_00495c20;
    }
    if (uVar7 != 0x4000000) goto LAB_00495c20;
    bVar3 = *param_3;
    if ((bVar3 & 0x70) == 0x20) {
      iVar8 = (uint)*(ushort *)(param_3 + 2) * 0xc;
      if (((bVar3 & 0x80) == 0) || ((bVar3 & 0xf0) == 0xf0)) goto LAB_00495bd0;
      iVar8 = (uint)*(ushort *)(param_3 + 2) * 0x18 + 0x2c;
    }
    else {
      if ((bVar3 & 0x70) == 0x30) {
        iVar8 = (uint)*(ushort *)(param_3 + 4) * (uint)*(ushort *)(param_3 + 2) * 0xc;
        if (((bVar3 & 0x80) != 0) && ((bVar3 & 0xf0) != 0xf0)) {
          iVar8 = (uint)*(ushort *)(param_3 + 4) * (uint)*(ushort *)(param_3 + 2) * 0x18;
        }
      }
LAB_00495bd0:
      iVar8 = iVar8 + 0x2c;
    }
  }
  else {
    if (uVar7 == 0x81000000) {
      iVar5 = FUN_00495a60(param_3);
      if (iVar5 == 0) {
        *param_2 = 0x82000000;
LAB_00495c1b:
        iVar8 = 4;
      }
    }
    else if (uVar7 == 0x82000000) {
      iVar5 = FUN_00495a60(param_3);
      if (iVar5 == 0) goto LAB_00495c1b;
      *param_2 = 0x81000000;
    }
LAB_00495c20:
    iVar5 = FUN_004b7550(param_3);
    iVar8 = iVar8 + (iVar5 + 4U & 0xfffffffc);
  }
  iVar5 = FUN_004955f0(iVar8 + 4);
  if (iVar5 == 0) {
    return 0;
  }
  uVar7 = local_3c[param_1 + 1];
  if (local_3c[param_1 + 1] == 0) {
    uVar7 = local_30;
  }
  local_38 = uVar7 & 0xffffff | *param_2;
  FUN_004abeb0(4,&local_38,param_1 * 4 + 4);
  iVar5 = local_3c[1];
  piVar6 = local_3c;
  while (iVar5 != 0) {
    piVar6[1] = iVar5 + 4;
    iVar5 = piVar6[2];
    piVar6 = piVar6 + 1;
  }
  piVar6 = local_3c + param_1 + 2;
  iVar5 = local_3c[param_1 + 2];
  while (iVar5 != 0) {
    *piVar6 = iVar5 + iVar8;
    piVar1 = piVar6 + 1;
    piVar6 = piVar6 + 1;
    iVar5 = *piVar1;
  }
  uVar7 = *param_2;
  uVar9 = local_3c[param_1 + 1] & 0xffffff;
  if (uVar7 < 0x6000001) {
    if (uVar7 == 0x6000000) {
      local_2c[2] = 0;
      local_2c[3] = 0;
      local_2c[4] = 0;
      local_2c[5] = 0;
      FUN_004abeb0(0x10,local_2c + 2,uVar9);
      iVar8 = FUN_004b7550(param_3);
      uVar7 = iVar8 + 4U & 0xfffffffc;
      FUN_004abeb0(uVar7,param_3,uVar9 + 0x10);
      local_38 = 0;
      FUN_004abeb0(4,&local_38,uVar9 + 0x10 + uVar7);
      goto LAB_00495ec3;
    }
    if (uVar7 == 0x3000000) {
      local_2c[0] = param_2[1];
      local_2c[1] = 0;
      FUN_004abeb0(8,local_2c,uVar9);
      uVar9 = uVar9 + 8;
    }
    else if (uVar7 == 0x4000000) {
      FUN_004abeb0(0x18,param_3,uVar9);
      local_2c[6] = 0;
      local_2c[7] = 0;
      local_2c[8] = 0;
      local_2c[9] = 0;
      _local_4 = 0;
      bVar3 = FUN_00526090(0x57);
      _local_4 = CONCAT13(bStack_1 ^ (bVar3 ^ bStack_1) & 3,_local_4);
      uVar4 = FUN_00526090(0x2b);
      _local_4 = CONCAT12(uVar4,local_4);
      bVar3 = FUN_00526090(0x2a);
      bStack_1 = (bVar3 & 7) << 2 | bStack_1 & 0xe3;
      cVar2 = FUN_00526090(0x13);
      _local_4 = CONCAT13(cVar2 << 5 | bStack_1 & 0x1f,_local_4);
      FUN_004abeb0(0x14,local_2c + 6,uVar9 + 0x18);
      bVar3 = *param_3;
      if ((bVar3 & 0x70) == 0x20) {
        iVar8 = (uint)*(ushort *)(param_3 + 2) * 0xc;
        if (((bVar3 & 0x80) != 0) && ((bVar3 & 0xf0) != 0xf0)) {
          iVar8 = (uint)*(ushort *)(param_3 + 2) * 0x18;
        }
        FUN_004abeb0(iVar8,**(undefined4 **)(param_3 + 8),uVar9 + 0x2c);
        FUN_004fd9e0(param_3);
      }
      else if ((bVar3 & 0x70) == 0x30) {
        iVar8 = (uint)*(ushort *)(param_3 + 4) * (uint)*(ushort *)(param_3 + 2) * 0xc;
        if (((bVar3 & 0x80) != 0) && ((bVar3 & 0xf0) != 0xf0)) {
          iVar8 = (uint)*(ushort *)(param_3 + 4) * (uint)*(ushort *)(param_3 + 2) * 0x18;
        }
        FUN_004abeb0(iVar8,**(undefined4 **)(param_3 + 8),uVar9 + 0x2c);
        FUN_004fd9e0(param_3);
      }
      goto LAB_00495ec3;
    }
  }
  else if (uVar7 == 0x82000000) {
    local_32 = *(undefined2 *)((int)param_2 + 6);
    local_34 = (undefined2)param_2[1];
    FUN_004abeb0(4,&local_34,uVar9);
    uVar9 = uVar9 + 4;
  }
  iVar8 = FUN_004b7550(param_3);
  FUN_004abeb0(iVar8 + 4U & 0xfffffffc,param_3,uVar9);
LAB_00495ec3:
  *local_3c = *local_3c + 1;
  DAT_005d6dbc = DAT_005d6dbc + 1;
  iVar8 = FUN_0055b770(DAT_005d6d84,s_EACT1_005bfd10);
  if ((iVar8 == 0) && (param_1 <= DAT_005d6d78)) {
    DAT_005d6d78 = DAT_005d6d78 + 1;
  }
  if (DAT_005d6d88 < param_1) {
    iVar8 = FUN_00495970(DAT_005d6d88);
    DAT_005d6d90 = DAT_005d6d90 + iVar8;
  }
  DAT_005d6d88 = param_1;
  return 1;
}

