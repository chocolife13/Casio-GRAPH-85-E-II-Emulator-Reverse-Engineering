// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00431030
// entry: 00431030  size: 1190


void FUN_00431030(int param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint local_ec;
  undefined4 local_e0 [6];
  byte bStack_c5;
  undefined4 local_c4;
  char local_58 [36];
  char local_34 [36];
  undefined1 local_10 [16];
  
  FUN_005234d0(local_10);
  uVar8 = 0;
  local_ec = 0;
  bVar3 = false;
  FUN_00431b90(param_1);
  bVar1 = *param_2;
  if (bVar1 == 0) {
    FUN_004b6ef0(&local_c4,&DAT_005a91c0);
    goto LAB_00431491;
  }
  switch(bVar1 >> 4) {
  case 0:
    goto switchD_0043109a_caseD_0;
  case 1:
    goto switchD_0043109a_caseD_1;
  default:
    goto switchD_0043109a_caseD_2;
  case 5:
    break;
  case 6:
    bVar3 = true;
switchD_0043109a_caseD_1:
    if ((bVar1 & 0xf) == 0) {
      local_ec = (uint)(param_2[1] >> 4);
      goto switchD_0043109a_caseD_2;
    }
    if (((bVar1 & 0xf) == 1) && ((param_2[1] & 0xf0) < 0x41)) {
      local_ec = (param_2[1] >> 4) + 10;
      goto switchD_0043109a_caseD_2;
    }
    goto LAB_004312e2;
  }
  bVar3 = true;
switchD_0043109a_caseD_0:
  if ((bVar1 & 0xf) != 8) {
    if ((bVar1 & 0xf) == 9) {
      local_ec = (param_2[1] >> 4) - 10;
      goto switchD_0043109a_caseD_2;
    }
LAB_004310da:
    uVar5 = 3;
LAB_004310df:
    FUN_0052b240(uVar5);
    goto LAB_004310e8;
  }
  if ((param_2[1] & 0xf0) < 0x70) goto LAB_004310da;
  local_ec = (param_2[1] >> 4) - 0x14;
switchD_0043109a_caseD_2:
  iVar10 = 0;
  pcVar9 = local_58;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + 4;
  }
  pcVar9 = local_34;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + 4;
  }
  puVar12 = &local_c4;
  for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = 0;
  if ((int)local_ec < 0) {
    if ((int)(local_ec + 1) < 0) {
      uVar8 = -(local_ec + 1);
      uVar7 = uVar8 >> 2;
      pcVar9 = local_34;
      while (uVar7 != 0) {
        uVar7 = uVar7 - 1;
        builtin_strncpy(pcVar9,"0000",4);
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = '0';
        pcVar9 = pcVar9 + 1;
      }
    }
    local_34[uVar8] = (param_2[1] & 0xf) + 0x30;
    uVar8 = uVar8 + 1;
  }
  else {
    iVar10 = 1;
    local_58[0] = (param_2[1] & 0xf) + 0x30;
  }
  iVar6 = 8;
  bVar2 = false;
  do {
    if ((param_2[iVar6] & 0xf) != 0) break;
    if ((param_2[iVar6] & 0xf0) != 0) {
      bVar2 = true;
      break;
    }
    iVar6 = iVar6 + -1;
  } while (1 < iVar6);
  iVar4 = 2;
  iVar11 = local_ec - 1;
  if (1 < iVar6) {
    pcVar9 = local_34 + uVar8;
    do {
      if (iVar11 < 0) {
        *pcVar9 = (param_2[iVar4] >> 4) + 0x30;
        pcVar9 = pcVar9 + 1;
      }
      else {
        local_58[iVar10] = (param_2[iVar4] >> 4) + 0x30;
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + -1;
      }
      if ((iVar4 != iVar6) || (!bVar2)) {
        if (iVar11 < 0) {
          *pcVar9 = (param_2[iVar4] & 0xf) + 0x30;
          pcVar9 = pcVar9 + 1;
        }
        else {
          local_58[iVar10] = (param_2[iVar4] & 0xf) + 0x30;
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + -1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar6);
  }
  if ((0 < (int)local_ec) && (uVar8 = (local_ec - iVar10) + 1, 0 < (int)uVar8)) {
    uVar7 = uVar8 >> 2;
    pcVar9 = local_58 + iVar10;
    while (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      builtin_strncpy(pcVar9,"0000",4);
      pcVar9 = pcVar9 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar9 = '0';
      pcVar9 = pcVar9 + 1;
    }
  }
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 0) {
    if (local_58[0] == '\0') {
      FUN_004b6ef0(&local_c4,&DAT_005be8d4);
LAB_00431452:
      FUN_004b6e70(&local_c4,local_34);
    }
    else {
      FUN_004b6ef0(&local_c4,local_58);
      if (local_34[0] != '\0') {
        FUN_004b6e70(&local_c4,&DAT_005a918c);
        goto LAB_00431452;
      }
    }
    if (bVar3) {
      FUN_004b6ef0(local_e0,&local_c4);
      FUN_004b6ef0(&local_c4,&DAT_005a9190);
      FUN_004b6e70(&local_c4,local_e0);
    }
  }
  else if ((0 < iVar6) && (iVar6 < 4)) {
    FUN_00431620(local_58,&local_c4);
    if (*(int *)(param_1 + 8) == 0) {
      if ((0x37 < (byte)local_c4) || (0x19 < (byte)local_c4)) {
        FUN_004b6ef0(local_e0,&DAT_005a91c0);
        FUN_004b6e70(local_e0,&local_c4);
        FUN_004b6ef0(&local_c4,local_e0);
      }
    }
    else {
      iVar10 = FUN_004b6bd0(&local_c4);
      iVar6 = *(int *)(param_1 + 8);
      if (iVar6 < iVar10) {
LAB_004312e2:
        uVar5 = 0xf;
        goto LAB_004310df;
      }
      puVar12 = local_e0;
      for (uVar8 = iVar6 + 1U >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = 0x30303030;
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = iVar6 + 1U & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = 0x30;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((int)local_e0 + (iVar6 - iVar10)) = 0;
      FUN_004b6e70(local_e0,&local_c4);
      FUN_004b6ef0(&local_c4,local_e0);
    }
    if (bVar3) {
      FUN_00431500(&local_c4);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar6 = FUN_004b6ca0(&local_c4);
      FUN_004b6ef0(local_e0,&local_c4);
      iVar10 = 0;
      iVar11 = 0;
      if (0 < iVar6) {
        iVar4 = *(int *)(param_1 + 0xc);
        iVar13 = iVar6;
        do {
          iVar13 = iVar13 + -1;
          *(undefined1 *)((int)&local_c4 + iVar10 + iVar11) =
               *(undefined1 *)((int)local_e0 + iVar10);
          if (iVar13 % iVar4 == 0) {
            iVar11 = iVar11 + 1;
            *(undefined1 *)((int)&local_c4 + iVar10 + iVar11) = 0x20;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar6);
      }
      (&bStack_c5)[iVar10 + iVar11] = 0;
    }
  }
LAB_00431491:
  FUN_005232d0(1,3);
  iVar6 = FUN_004b6bd0(&local_c4);
  iVar10 = 0x14;
  do {
    if (iVar10 < iVar6) break;
    FUN_00523420(&DAT_005ad48c);
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  FUN_00523470(&local_c4,0x15);
LAB_004310e8:
  FUN_00523630(local_10);
  return;
}

