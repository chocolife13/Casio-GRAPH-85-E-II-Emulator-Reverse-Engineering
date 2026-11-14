// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00496410
// entry: 00496410  size: 752


undefined4 FUN_00496410(int param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int local_1c;
  undefined1 local_18 [4];
  undefined4 local_14 [5];
  
  iVar12 = 0;
  bVar3 = false;
  if (DAT_005d6dbc <= param_1) {
    return 0;
  }
  iVar6 = FUN_00495770(param_1);
  if (iVar6 != 0) {
    iVar7 = FUN_004b7550(param_3);
    iVar6 = FUN_004b79b0(iVar6,param_3,iVar7 + 1);
    if (iVar6 == 0) {
      return 1;
    }
  }
  iVar6 = FUN_00495670(param_1);
  uVar2 = *param_2;
  if (uVar2 < 0x6000001) {
    if (uVar2 == 0x6000000) {
      iVar12 = FUN_004956d0(param_1);
      if (iVar12 == 0x6000000) {
        bVar3 = true;
        uVar8 = FUN_00495770(param_1);
        iVar12 = FUN_004b7550(uVar8);
        iVar12 = iVar6 - (iVar12 + 4U & 0xfffffffc);
      }
      else {
        iVar12 = 0x14;
      }
    }
    else if (uVar2 == 0x3000000) {
      iVar12 = 8;
    }
    else if (uVar2 == 0x4000000) {
      bVar1 = *param_3;
      if ((bVar1 & 0x70) == 0x20) {
        iVar12 = (uint)*(ushort *)(param_3 + 2) * 0xc;
        if (((bVar1 & 0x80) != 0) && ((bVar1 & 0xf0) != 0xf0)) {
          iVar12 = (uint)*(ushort *)(param_3 + 2) * 0x18 + 0x2c;
          goto LAB_0049656b;
        }
      }
      else if ((bVar1 & 0x70) == 0x30) {
        iVar12 = (uint)*(ushort *)(param_3 + 4) * (uint)*(ushort *)(param_3 + 2) * 0xc;
        if (((bVar1 & 0x80) != 0) && ((bVar1 & 0xf0) != 0xf0)) {
          iVar12 = (uint)*(ushort *)(param_3 + 4) * (uint)*(ushort *)(param_3 + 2) * 0x18;
        }
      }
      iVar12 = iVar12 + 0x2c;
      goto LAB_0049656b;
    }
  }
  else {
    if (uVar2 == 0x81000000) {
      iVar7 = FUN_00495a60(param_3);
    }
    else {
      if (uVar2 != 0x82000000) goto LAB_0049655b;
      iVar7 = FUN_00495a60(param_3);
    }
    if (iVar7 == 0) {
      iVar12 = 4;
    }
  }
LAB_0049655b:
  iVar7 = FUN_004b7550(param_3);
  iVar12 = iVar12 + (iVar7 + 4U & 0xfffffffc);
LAB_0049656b:
  iVar7 = iVar12 - iVar6;
  if ((0 < iVar7) && (iVar9 = FUN_004955f0(iVar7), iVar9 == 0)) {
    return 0;
  }
  FUN_0052f840();
  uVar4 = DAT_005d6d88;
  uVar8 = DAT_005d6d78;
  DAT_005d6d80 = 1;
  if (bVar3) {
    cVar5 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,local_18,&local_1c);
    if (cVar5 != '\0') {
      return 0;
    }
    uVar2 = *(uint *)(local_1c + 4 + param_1 * 4);
    if (iVar7 < 1) {
      if (iVar7 < 0) {
        FUN_004acb90(iVar6 - iVar12,(uVar2 & 0xffffff) + 0x10);
      }
    }
    else {
      FUN_004abeb0(iVar7,param_3,(uVar2 & 0xffffff) + 0x10);
    }
    iVar7 = FUN_004b7550(param_3,param_3,(uVar2 & 0xffffff) + 0x10);
    FUN_004ac2f0(iVar7 + 4U & 0xfffffffc);
    iVar7 = *(int *)(local_1c + 8 + param_1 * 4);
    piVar10 = (int *)(local_1c + 8 + param_1 * 4);
    uVar8 = DAT_005d6d78;
    uVar4 = DAT_005d6d88;
    if (iVar7 != 0) {
      do {
        *piVar10 = (iVar7 - iVar6) + iVar12;
        iVar7 = piVar10[1];
        piVar10 = piVar10 + 1;
      } while (iVar7 != 0);
      return 1;
    }
  }
  else {
    if (*param_2 == 0x4000000) {
      iVar12 = FUN_00495720(param_1);
      puVar11 = (undefined4 *)(iVar12 + 0x18);
      puVar13 = local_14;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
    }
    FUN_004958b0(param_1);
    FUN_00495b10(param_1,param_2,param_3);
    if (*param_2 == 0x4000000) {
      iVar12 = FUN_00495720(param_1);
      puVar11 = local_14;
      puVar13 = (undefined4 *)(iVar12 + 0x18);
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
    }
  }
  DAT_005d6d88 = uVar4;
  DAT_005d6d78 = uVar8;
  return 1;
}

