// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004300e0
// entry: 004300e0  size: 788


undefined4 FUN_004300e0(byte *param_1,char *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char *pcVar3;
  ushort uVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  pcVar3 = param_2;
  bVar5 = *param_1 & 0xf0;
  if (bVar5 == 0xf0) {
    *(undefined4 *)param_2 = s_ERROR_005a8cfc._0_4_;
    *(undefined2 *)(param_2 + 4) = s_ERROR_005a8cfc._4_2_;
    return 1;
  }
  if (bVar5 == 0x80) {
    *(undefined4 *)param_2 = s_UNDEF_005a8cf4._0_4_;
    *(undefined2 *)(param_2 + 4) = s_UNDEF_005a8cf4._4_2_;
    return 0;
  }
  if (bVar5 == 0x90) {
    *(undefined4 *)param_2 = DAT_005a8cec;
    param_2[4] = DAT_005a8cf0;
    return 0;
  }
  if (bVar5 == 0xa0) {
    *(undefined4 *)param_2 = s_FALSE_005a8ce4._0_4_;
    *(undefined2 *)(param_2 + 4) = s_FALSE_005a8ce4._4_2_;
    return 0;
  }
  if (bVar5 == 0x40) {
    if (0x5000 < *(ushort *)(param_1 + 10)) {
      *(undefined4 *)param_2 = s__INFINITY_005a8cd8._0_4_;
      *(undefined4 *)(param_2 + 4) = s__INFINITY_005a8cd8._4_4_;
      *(undefined2 *)(param_2 + 8) = s__INFINITY_005a8cd8._8_2_;
      return 0;
    }
    *(undefined4 *)param_2 = s_INFINITY_005a8ccc._0_4_;
    *(undefined4 *)(param_2 + 4) = s_INFINITY_005a8ccc._4_4_;
    param_2[8] = s_INFINITY_005a8ccc[8];
    return 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  bVar2 = true;
  local_8 = (undefined2)uVar1;
  uStack_6._0_1_ = (char)((uint)uVar1 >> 0x10);
  uStack_6._1_1_ = (undefined1)((uint)uVar1 >> 0x18);
  uVar4 = (ushort)((uint)uVar1 >> 0x10);
  local_10 = *(undefined4 *)param_1;
  local_c = *(undefined4 *)(param_1 + 4);
  if (uVar4 == 0) {
    builtin_strncpy(param_2,"+0.00000000000000E+000",0x17);
    return 0;
  }
  if (uVar4 < 0x5000) {
    *param_2 = '+';
  }
  else {
    uVar4 = uVar4 + 0xb000;
    *param_2 = '-';
    uStack_6._0_1_ = (char)uVar4;
    uStack_6._1_1_ = (undefined1)(uVar4 >> 8);
  }
  uVar10 = 1;
  pbVar6 = (byte *)&local_10;
  iVar8 = 8;
  do {
    if (bVar2) {
      if (bVar2) goto LAB_00430284;
    }
    else {
      uVar11 = (uint)uVar10;
      uVar10 = uVar10 + 1;
      param_2[uVar11] = ((char)*pbVar6 >> 4 & 0xfU) + 0x30;
LAB_00430284:
      bVar5 = *pbVar6;
      uVar11 = (uint)uVar10;
      uStack_6 = uVar4;
      *pbVar6 = bVar5 & 0xf;
      uVar10 = uVar10 + 1;
      param_2[uVar11] = (bVar5 & 0xf) + 0x30;
      if (uVar10 == 2) {
        param_2[2] = '.';
        uVar10 = 3;
      }
      bVar2 = false;
      uVar4 = uStack_6;
    }
    uStack_6._0_1_ = (char)uVar4;
    pbVar6 = pbVar6 + 1;
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      param_2[uVar10] = 'E';
      param_2._0_2_ =
           (uVar4 & 0xf) +
           (((byte)((char)uStack_6 >> 4) & 0xf) +
           (((ushort)((uint)CONCAT22(uStack_4,uVar4) >> 8) & 0xf) +
           ((ushort)(CONCAT22(uStack_4,uVar4) >> 0xc) & 0xf) * 10) * 10) * 10;
      if ((short)param_2 < 1000) {
        param_2._0_2_ = 1000 - (short)param_2;
        pcVar3[(ushort)(uVar10 + 1)] = '-';
      }
      else {
        param_2._0_2_ = (short)param_2 + -1000;
        pcVar3[(ushort)(uVar10 + 1)] = '+';
      }
      iVar9 = (int)(short)param_2;
      iVar7 = (int)(short)(iVar9 / 1000);
      iVar8 = (iVar9 + iVar7 * -1000) / 100;
      param_2 = (char *)(((iVar9 + ((int)(short)iVar8 + iVar7 * 10) * -100) / 10 +
                         ((iVar9 / 1000) * 0x10 + iVar8) * 0x10) * 0x10 + iVar9 % 10);
      uVar10 = uVar10 + 4;
      pcVar3[uVar10 + 1] = '\0';
      iVar8 = 3;
      do {
        bVar5 = (byte)param_2;
        param_2 = (char *)(uint)(ushort)((short)param_2 >> 4);
        uVar11 = (uint)uVar10;
        uVar10 = uVar10 - 1;
        iVar8 = iVar8 + -1;
        pcVar3[uVar11] = (bVar5 & 0xf) + 0x30;
      } while (iVar8 != 0);
      return 0;
    }
  } while( true );
}

