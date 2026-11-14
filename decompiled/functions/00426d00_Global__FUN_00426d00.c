// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00426d00
// entry: 00426d00  size: 786


void FUN_00426d00(undefined4 *param_1,char *param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  char *local_22c;
  char **local_228;
  char *local_224 [4];
  undefined1 local_214 [16];
  char local_204 [4];
  undefined1 auStack_200 [128];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_80 [128];
  
  *param_1 = DAT_005be3e4;
  param_1[1] = DAT_005be3e8;
  *(undefined4 *)param_2 = s_ADDIN3_A_005be3d8._0_4_;
  local_224[1] = s_AppName__005be3cc;
  *(undefined4 *)(param_2 + 4) = s_ADDIN3_A_005be3d8._4_4_;
  local_224[2] = s_ValName__005be3c0;
  param_2[8] = s_ADDIN3_A_005be3d8[8];
  local_224[3] = s_ValSize__005be3b4;
  *param_3 = 0xc;
  iVar8 = 1;
  puVar3 = &local_180;
  iVar4 = 3;
  do {
    *(undefined1 *)puVar3 = 0;
    puVar3 = puVar3 + 0x20;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_005234d0(local_214);
  FUN_00525b70(3);
switchD_00426ed9_caseD_7533:
  local_22c = (char *)&local_180;
  local_228 = local_224;
  iVar4 = 1;
  do {
    local_228 = local_228 + 1;
    uVar5 = 0xffffffff;
    pcVar9 = *local_228;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = local_204;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar9 = local_22c;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar9 = local_204;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = pcVar10 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_005232d0(3,iVar4 + 2);
    if (iVar8 == iVar4) {
      FUN_00523490(local_204);
    }
    else {
      FUN_00523470(local_204,0x13);
    }
    local_22c = local_22c + 0x80;
    bVar2 = iVar4 < 3;
    iVar4 = iVar4 + 1;
  } while (bVar2);
  if (iVar8 == 3) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0x84;
  }
  FUN_005262e0(uVar12);
  iVar4 = FUN_00526620(local_224);
  if (iVar4 == 0) goto code_r0x00426ed1;
  FUN_005232d0(3,iVar8 + 2);
  uVar5 = 0xffffffff;
  pcVar9 = local_224[iVar8];
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = local_204;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  FUN_00523470(local_204,0x13);
  uVar12 = 1;
  goto LAB_00426f1e;
code_r0x00426ed1:
  switch(local_224[0]) {
  case (char *)0x7534:
    *param_1 = local_180;
    param_1[1] = local_17c;
    *(undefined4 *)param_2 = local_100;
    *(undefined4 *)(param_2 + 4) = local_fc;
    *(undefined1 *)(param_1 + 2) = 0;
    param_2[8] = '\0';
    if ((char)local_180 == '\0') {
      *param_1 = DAT_005be3e4;
      param_1[1] = DAT_005be3e8;
    }
    if ((char)local_100 == '\0') {
      *(undefined4 *)param_2 = s_ADDIN3_A_005be3d8._0_4_;
      *(undefined4 *)(param_2 + 4) = s_ADDIN3_A_005be3d8._4_4_;
      param_2[8] = s_ADDIN3_A_005be3d8[8];
    }
    uVar5 = FUN_0055401d(local_80);
    *param_3 = uVar5;
    if (uVar5 == 0) {
      *param_3 = 0xc;
    }
    *param_3 = *param_3 + 3 & 0xfffffffc;
  case (char *)0x7532:
  case (char *)0x754d:
    FUN_00525bc0();
    FUN_00523630(local_214);
    return;
  case (char *)0x7542:
    if (1 < iVar8) {
      iVar8 = iVar8 + -1;
    }
    break;
  case (char *)0x7545:
    FUN_005232d0(3,iVar8 + 2);
    uVar5 = 0xffffffff;
    pcVar9 = local_224[iVar8];
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = local_204;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00523470(local_204,0x13);
    uVar12 = 0;
LAB_00426f1e:
    FUN_00426b20(iVar8,auStack_200 + iVar8 * 0x80,local_224,uVar12);
  case (char *)0x7547:
    if (iVar8 < 3) {
      iVar8 = iVar8 + 1;
    }
  }
  goto switchD_00426ed9_caseD_7533;
}

