// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aa160
// entry: 004aa160  size: 904


undefined4 FUN_004aa160(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_4;
  
  DAT_005d6c29 = 3;
  DAT_005d6c30 = '\x01';
  DAT_005d6c2c = CONCAT22(DAT_005d6c2c._2_2_,DAT_005d6d68);
  iVar1 = FUN_004aa660();
  uVar2 = iVar1 - 1;
  FUN_00523740();
  FUN_00414240();
  FUN_004aa670(uVar2);
  FUN_0040ae30();
LAB_004aa1a6:
  iVar1 = FUN_00526620(&local_4);
  uVar3 = DAT_005d6c2c;
  while (DAT_005d6c2c = uVar3, iVar1 != 0) {
    switch(local_4) {
    case 0xd:
      goto switchD_004aa1d2_caseD_d;
    case 0xe:
      local_4 = 0x4c;
      goto LAB_004aa472;
    case 0x28:
      local_4 = 0x49;
      goto LAB_004aa472;
    case 0x29:
      local_4 = 0x4a;
      goto LAB_004aa472;
    case 0x2c:
      local_4 = 0x4b;
      goto LAB_004aa472;
    case 0x30:
      local_4 = 0x5a;
      goto LAB_004aa472;
    case 0x81:
      local_4 = 0x44;
      goto LAB_004aa472;
    case 0x82:
      local_4 = 0x45;
      goto LAB_004aa472;
    case 0x83:
      local_4 = 0x46;
      goto LAB_004aa472;
    case 0x85:
      local_4 = 0x43;
      goto LAB_004aa472;
    case 0x89:
      local_4 = 0x58;
      goto LAB_004aa472;
    case 0x95:
      local_4 = 0x42;
      goto LAB_004aa472;
    case 0x99:
      local_4 = 0x59;
      goto LAB_004aa472;
    case 0xa9:
      local_4 = 0x53;
      goto LAB_004aa472;
    case 0xb9:
      local_4 = 0x54;
      goto LAB_004aa472;
    case 0xbb:
      local_4 = 0x47;
      goto LAB_004aa472;
    }
    if ((0x30 < local_4) && (((local_4 < 0x3a || (0x40 < local_4)) && (local_4 < 0x5b)))) {
      if ((local_4 < 0x31) || (0x39 < local_4)) {
        if (local_4 < 0x41) goto LAB_004aa479;
        goto LAB_004aa472;
      }
      local_4 = local_4 - 0x31;
      goto LAB_004aa479;
    }
    iVar1 = FUN_00526620(&local_4);
    uVar3 = DAT_005d6c2c;
  }
  DAT_005d6c2c._0_2_ = (ushort)uVar3;
  DAT_005d6c2c._2_2_ = (undefined2)(uVar3 >> 0x10);
  switch(local_4) {
  case 0x7531:
    local_4 = 0x41;
    goto LAB_004aa472;
  case 0x7533:
    if (DAT_005d6c30 == '\x01') {
      FUN_0052f880();
LAB_004aa4cb:
      DAT_005d6c30 = 0;
      DAT_005d6c29 = DAT_005d6806;
      FUN_0042fb70();
      return 0;
    }
    FUN_004aa670(uVar2);
    goto LAB_004aa1a6;
  case 0x7534:
switchD_004aa1d2_caseD_d:
    FUN_004aad00(0);
    DAT_005d6c30 = '\0';
    DAT_005d6c29 = DAT_005d6806;
    iVar1 = FUN_004aa640(DAT_005d6c2c & 0xffff,0);
    if (iVar1 == 3) goto LAB_004aa4cb;
    DAT_005d6c29 = 3;
    FUN_004aa670(uVar2);
    goto LAB_004aa1a6;
  case 0x7536:
    uVar3 = FUN_0040ad00();
    uVar3 = uVar3 & 1;
    goto LAB_004aa4b0;
  case 0x7542:
    if (3 < (ushort)DAT_005d6c2c) {
      DAT_005d6c2c._0_2_ = (ushort)DAT_005d6c2c - 4;
      uVar3 = DAT_005d6c2c;
    }
    goto LAB_004aa2d2;
  case 0x7544:
    if ((ushort)DAT_005d6c2c != 0) {
      DAT_005d6c2c._0_2_ = (ushort)DAT_005d6c2c - 1;
      uVar3 = DAT_005d6c2c;
    }
LAB_004aa2d2:
    DAT_005d6c2c = uVar3;
    uVar3 = DAT_005d6c2c;
    if ((DAT_005d6c2c & 0xffff) < (uint)DAT_005d6d72 * 4) {
      DAT_005d6d72 = DAT_005d6d72 - 1;
      FUN_004aa670(uVar2);
      goto LAB_004aa1a6;
    }
    break;
  case 0x7545:
    if ((int)(uVar3 & 0xffff) < (int)uVar2) {
      DAT_005d6c2c._0_2_ = (ushort)DAT_005d6c2c + 1;
      uVar3 = DAT_005d6c2c;
    }
    DAT_005d6c2c = uVar3;
    uVar3 = DAT_005d6c2c;
    if ((uint)DAT_005d6d72 * 4 + 0xc <= (DAT_005d6c2c & 0xffff)) {
      DAT_005d6d72 = DAT_005d6d72 + 1;
      FUN_004aa670(uVar2);
      goto LAB_004aa1a6;
    }
    break;
  case 0x7547:
    if ((int)uVar2 < (int)((uVar3 & 0xffff) + 4)) {
      if ((int)((uVar3 & 0xffff) >> 2) < (int)(uVar2 + ((int)uVar2 >> 0x1f & 3U)) >> 2) {
        DAT_005d6c2c._0_2_ = (ushort)uVar2;
        goto LAB_004aa33d;
      }
    }
    else {
      DAT_005d6c2c._0_2_ = (ushort)DAT_005d6c2c + 4;
LAB_004aa33d:
      uVar3 = DAT_005d6c2c;
    }
    DAT_005d6c2c = uVar3;
    uVar3 = DAT_005d6c2c;
    if ((DAT_005d6c2c & 0xffff) <= (uint)DAT_005d6d72 * 4 + 0xb) break;
    DAT_005d6d72 = DAT_005d6d72 + 1;
    FUN_004aa670(uVar2);
    goto LAB_004aa1a6;
  case 0x755e:
    local_4 = 0x48;
LAB_004aa472:
    local_4 = local_4 - 0x38;
LAB_004aa479:
    if (local_4 <= uVar2) {
      FUN_004aad00(0);
      DAT_005d6c30 = '\0';
      DAT_005d6c29 = DAT_005d6806;
      iVar1 = FUN_004aa640(local_4,0);
      if (iVar1 == 3) goto LAB_004aa4cb;
      DAT_005d6c29 = 3;
    }
    uVar3 = 0;
LAB_004aa4b0:
    FUN_005262e0(uVar3);
    uVar3 = DAT_005d6c2c;
  }
  DAT_005d6c2c = uVar3;
  FUN_004aa670(uVar2);
  goto LAB_004aa1a6;
}

