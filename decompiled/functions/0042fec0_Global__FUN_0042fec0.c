// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042fec0
// entry: 0042fec0  size: 314


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042fec0(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  char local_10 [16];
  
  pbVar8 = &DAT_005d6df0;
  if (DAT_005d6c30 != '\x01') {
    pbVar5 = (byte *)FUN_004ab670(local_10);
    do {
      bVar2 = *pbVar5;
      bVar10 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_0042ff97:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0042ff9c;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar10 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_0042ff97;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_0042ff9c:
    if (iVar4 == 0) {
      return 0;
    }
    uVar6 = 0xffffffff;
    pcVar3 = local_10;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar9 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      param_1 = param_1 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar3 = local_10;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = &DAT_005d6df0;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
    return 1;
  }
  pcVar3 = s_MAIN_MENU_005be7f8;
  do {
    bVar2 = *pcVar3;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_0042ff04:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0042ff09;
    }
    if (bVar2 == 0) break;
    bVar2 = ((byte *)pcVar3)[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_0042ff04;
    pcVar3 = (char *)((byte *)pcVar3 + 2);
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_0042ff09:
  if (iVar4 == 0) {
    return 0;
  }
  *(undefined4 *)param_1 = s_MAIN_MENU_005be7f8._0_4_;
  *(undefined4 *)(param_1 + 4) = s_MAIN_MENU_005be7f8._4_4_;
  *(undefined2 *)(param_1 + 8) = s_MAIN_MENU_005be7f8._8_2_;
  DAT_005d6df4 = s_MAIN_MENU_005be7f8[4];
  DAT_005d6df4_1._0_1_ = s_MAIN_MENU_005be7f8[5];
  DAT_005d6df4_1._1_1_ = s_MAIN_MENU_005be7f8[6];
  DAT_005d6df4_1._2_1_ = s_MAIN_MENU_005be7f8[7];
  DAT_005d6df0 = s_MAIN_MENU_005be7f8[0];
  DAT_005d6df1 = s_MAIN_MENU_005be7f8[1];
  DAT_005d6df2 = s_MAIN_MENU_005be7f8[2];
  DAT_005d6df0_1._2_1_ = s_MAIN_MENU_005be7f8[3];
  DAT_005d6df8 = s_MAIN_MENU_005be7f8[8];
  DAT_005d6df8_1 = s_MAIN_MENU_005be7f8[9];
  return 1;
}

