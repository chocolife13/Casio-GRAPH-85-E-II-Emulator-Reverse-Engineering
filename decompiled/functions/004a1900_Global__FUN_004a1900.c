// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a1900
// entry: 004a1900  size: 1101


void FUN_004a1900(byte *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  char local_e4 [12];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  byte local_cc [16];
  undefined2 local_bc [28];
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined1 local_70 [12];
  undefined1 local_64 [48];
  undefined1 local_34 [52];
  
  local_84 = DAT_005bec50;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_e4[0] = '\0';
  local_e4[1] = 0;
  local_e4[2] = 0;
  local_e4[3] = 0;
  local_e4[4] = 0;
  local_e4[5] = 0;
  local_e4[6] = 0;
  local_e4[7] = 0;
  local_e4[8] = 0;
  local_bc[0] = 0;
  local_bc[1] = 0;
  local_bc[2] = 0;
  local_bc[3] = 0;
  local_bc[4] = 0;
  local_bc[5] = 0;
  local_bc[6] = 0;
  local_bc[7] = 0;
  local_bc[8] = 0;
  local_bc[9] = 0;
  local_bc[10] = 0;
  local_bc[0xb] = 0;
  local_bc[0xc] = 0;
  local_bc[0xd] = 0;
  local_bc[0xe] = 0;
  local_bc[0xf] = 0;
  local_bc[0x10] = 0;
  local_bc[0x11] = 0;
  local_bc[0x12] = 0;
  local_bc[0x13] = 0;
  local_bc[0x14] = 0;
  local_bc[0x15] = 0;
  local_bc[0x16] = 0;
  local_bc[0x17] = 0;
  local_bc[0x18] = 0;
  local_bc[0x19] = 0;
  local_bc[0x1a] = 0;
  local_80 = DAT_005bec54;
  local_7c = DAT_005bec58;
  local_7a = DAT_005bec5a;
  local_cc[0] = 0;
  local_cc[1] = 0;
  local_cc[2] = 0;
  local_cc[3] = 0;
  local_cc[4] = 0;
  local_cc[5] = 0;
  local_cc[6] = 0;
  local_cc[7] = 0;
  local_cc[8] = 0;
  local_cc[9] = 0;
  local_cc[10] = 0;
  local_cc[0xb] = 0;
  local_cc[0xc] = 0;
  local_74 = FUN_00526410();
  FUN_00538a00(local_70);
  FUN_00538980(0,0,local_78);
  FUN_00526420(0xf7);
  FUN_004a00d0(local_64,&DAT_00584f08,1);
  FUN_005387f0(0);
  FUN_00414240();
  FUN_005232d0(1,1);
  uVar3 = FUN_0052f6f0(0x220,local_34,0x15);
  FUN_00523470(uVar3);
  FUN_005232d0(1,2);
  uVar3 = FUN_004b6bd0(&local_84);
  FUN_00523470(&local_84,uVar3);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
  if ((param_1[4] != 0) && ((*param_1 & 0xf) == 0)) {
    uVar7 = 0xffffffff;
    pbVar9 = param_1 + 4;
    do {
      pbVar10 = pbVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pbVar10 = pbVar9 + 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar10;
    } while (bVar1 != 0);
    uVar7 = ~uVar7;
    pbVar9 = pbVar10 + -uVar7;
    pbVar10 = local_cc;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar10 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    }
  }
switchD_004a1b56_caseD_7533:
  do {
    FUN_00538b30();
    uVar3 = FUN_0040ad00();
    iVar4 = FUN_00526620(&local_d8);
    if (iVar4 == 0) goto code_r0x004a1b4e;
    iVar4 = FUN_00450420(local_d8);
  } while (iVar4 == 0);
  goto LAB_004a1b65;
code_r0x004a1b4e:
  switch(local_d8) {
  case 0x7531:
    local_d8 = 0x58;
LAB_004a1b65:
    local_d0 = FUN_005254d0(local_e4,8,local_d0,local_d8);
    local_d4 = FUN_005252d0(local_e4,local_d4,local_d0,2,2,9);
    break;
  case 0x7532:
  case 0x754d:
switchD_004a1b56_caseD_7532:
    FUN_00523740();
    FUN_00538810();
    FUN_00538a50(local_70);
    FUN_005389c0(0,0,local_78);
    FUN_00526420(local_74);
    FUN_005262e0(0);
    return;
  case 0x7534:
    iVar4 = FUN_004b7550(local_e4);
    if (iVar4 == 0) {
      FUN_00450f60(uVar3);
    }
    else {
      FUN_0042aac0(local_bc,local_e4,0xc);
      uVar7 = 0xffffffff;
      pcVar11 = local_e4;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      local_bc[~uVar7 - 1] = 0x2a;
      uVar7 = 0xffffffff;
      pcVar11 = local_e4;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      local_bc[~uVar7] = 0x2e;
      uVar7 = 0xffffffff;
      pcVar11 = local_e4;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      local_bc[~uVar7 + 1] = 0x2a;
      iVar4 = FUN_004a0cf0(*(undefined2 *)(param_1 + 2),param_1,3);
      iVar5 = FUN_004a0cf0(*(undefined2 *)(param_1 + 2),param_1,0);
      do {
        FUN_0042aac0(local_bc + 0xe,*(int *)(param_1 + 0x20) + 0x10 + iVar5 * 0x1c,0xc);
        iVar6 = FUN_0041e0c0(local_bc,local_bc + 0xe);
        if (iVar6 == 1) {
          FUN_004a02e0(param_1,local_cc,*(int *)(param_1 + 0x20) + 0x10 + iVar5 * 0x1c,1);
          goto switchD_004a1b56_caseD_7532;
        }
        iVar5 = FUN_004a0cf0(iVar5,param_1);
      } while (iVar5 <= iVar4);
      FUN_004a20c0(0x84,0x85,0x86,1);
    }
    break;
  case 0x753f:
    FUN_005262e0(0x84);
  case 0x7544:
  case 0x7545:
  case 0x7549:
    FUN_00524a50(local_e4,8,&local_d4,&local_d0,&local_d8,2,2);
    local_d4 = FUN_005252d0(local_e4,local_d4,local_d0,2,2,9);
  }
  goto switchD_004a1b56_caseD_7533;
}

