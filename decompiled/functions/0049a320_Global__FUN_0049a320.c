// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049a320
// entry: 0049a320  size: 864


undefined4 FUN_0049a320(uint param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined3 uVar12;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar13;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 local_64 [24];
  undefined1 local_4c [24];
  undefined1 local_34 [52];
  
  bVar1 = false;
  FUN_00496700(DAT_005d6d88,&local_74);
  FUN_00496700(DAT_005d6d88 + -1,&local_6c);
  iVar9 = DAT_005d6d88;
  if (local_74 != 0x4000000) {
    if (((local_6c != 0x4000000) || (local_74 != 0x3000000)) ||
       (pcVar6 = (char *)FUN_00495770(DAT_005d6d88), *pcVar6 != '\0')) goto LAB_0049a528;
    iVar9 = DAT_005d6d88;
    if (local_74 != 0x4000000) {
      local_74 = local_6c;
      local_70 = local_68;
      iVar9 = DAT_005d6d88 + -1;
    }
  }
  pbVar7 = (byte *)FUN_00496880(iVar9);
  pbVar13 = pbVar7 + 0x18;
  uVar12 = (undefined3)((uint)pbVar7 >> 8);
  bVar4 = *pbVar7 & 0x70;
  if (((bVar4 == 0x20) && (0x14 < *(ushort *)(pbVar7 + 2))) ||
     ((bVar4 == 0x30 && ((uVar12 = 0, 6 < *(ushort *)(pbVar7 + 2) || (6 < *(ushort *)(pbVar7 + 4))))
      ))) {
LAB_0049a528:
    iVar9 = FUN_004956d0(DAT_005d6d88);
    if ((iVar9 == 0x3000000) && (pcVar6 = (char *)FUN_00495770(DAT_005d6d88), *pcVar6 == '\0')) {
      return 1;
    }
    return 0;
  }
  if (0x794a < param_1) {
    if ((0x794a < param_1) && (param_1 < 0x794d)) {
      if ((*pbVar7 & 0x60) == 0x20) goto LAB_0049a528;
      do {
        pbVar7[0x29] = pbVar7[0x28];
        *(undefined2 *)(pbVar7 + 0x24) = *(undefined2 *)(pbVar7 + 0x20);
        *(undefined2 *)(pbVar7 + 0x26) = *(undefined2 *)(pbVar7 + 0x22);
        FUN_0052f6c0(0x3d,CONCAT31(uVar12,pbVar7[0x28]));
        FUN_004b6a70((int)*(short *)(pbVar7 + 0x24));
        FUN_004b6a90((int)*(short *)(pbVar7 + 0x26));
        FUN_004b6330(pbVar7,local_34,param_1 == 0x794c);
        if (param_1 == 0x794b) {
          pbVar7[0x1e] = 9;
          pbVar7[0x1f] = 0;
        }
        else {
          pbVar7[0x1e] = 10;
          pbVar7[0x1f] = 0;
        }
        uVar5 = FUN_004b6a50();
        *(undefined2 *)(pbVar7 + 0x20) = uVar5;
        uVar5 = FUN_004b6a60();
        *(undefined2 *)(pbVar7 + 0x22) = uVar5;
        bVar4 = FUN_0052f6b0(0x3d);
        pbVar7[0x28] = bVar4;
        uVar10 = FUN_00526090(0x2b);
      } while (((uVar10 & 0x80) != 0) && (uVar12 = (undefined3)(uVar10 >> 8), pbVar7[0x29] == 0));
    }
    goto LAB_0049a5f9;
  }
  if (param_1 == 0x794a) {
    pbVar7[0x1e] = 5;
    pbVar7[0x1f] = 0;
    goto LAB_0049a5f9;
  }
  if (param_1 == 0x754a) {
    if (*(short *)(pbVar7 + 0x1e) == 8) {
      cVar3 = FUN_00495570(pbVar13,0);
      cVar2 = FUN_00526090(0x57);
      if (cVar3 == cVar2) {
        pbVar7[0x1e] = 0;
        pbVar7[0x1f] = 0;
        goto LAB_0049a4de;
      }
    }
    iVar8 = FUN_0049a020(pbVar7);
    if (iVar8 == 0) {
      FUN_004e3720(pbVar7,local_64,local_4c);
      FUN_00496410(iVar9,&local_74,local_64);
      pbVar7 = (byte *)FUN_00496880(iVar9);
      pbVar13 = pbVar7 + 0x18;
    }
    pbVar13[6] = 8;
    pbVar13[7] = 0;
  }
  else {
    if (param_1 != 0x755e) goto LAB_0049a5f9;
    iVar8 = FUN_0049a020(pbVar7);
    if (iVar8 == 0) {
      FUN_004e3720(pbVar7,local_64,local_4c);
    }
    else {
      FUN_004e56c0(pbVar7,local_64);
    }
    FUN_00496410(iVar9,&local_74,local_64);
    pbVar7 = (byte *)FUN_00496880(iVar9);
    pbVar13 = pbVar7 + 0x18;
    pbVar7[0x1e] = 0;
    pbVar7[0x1f] = 0;
  }
LAB_0049a4de:
  cVar3 = FUN_00526090(0x2a);
  if (cVar3 == '\x02') {
    bVar1 = true;
  }
LAB_0049a5f9:
  uVar11 = FUN_00526090(0x57,0);
  FUN_004955a0(pbVar13,uVar11);
  bVar4 = FUN_00526090(0x2b);
  pbVar13[0x12] = bVar4;
  if (bVar1) {
    uVar11 = 1;
  }
  else {
    uVar11 = FUN_00526090(0x2a,1);
  }
  FUN_004955a0(pbVar13,uVar11);
  uVar11 = FUN_00526090(0x13,2);
  FUN_004955a0(pbVar13,uVar11);
  FUN_00499740(pbVar7,pbVar13);
  if (bVar1) {
    FUN_004955a0(pbVar13,1,1);
  }
  DAT_005d6d80 = 1;
  return 1;
}

