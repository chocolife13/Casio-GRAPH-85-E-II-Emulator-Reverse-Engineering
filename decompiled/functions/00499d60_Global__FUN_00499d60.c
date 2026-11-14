// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00499d60
// entry: 00499d60  size: 656


undefined4 FUN_00499d60(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [22];
  char acStack_36 [2];
  undefined4 local_34 [13];
  
  iVar7 = 0;
  local_58 = 0;
  local_64 = 0;
  FUN_005262e0(0);
  iVar3 = FUN_004a97f0(local_50,local_54);
  FUN_00497820(3,local_4c);
  FUN_00525b40(5);
  iVar8 = local_64;
  do {
    local_64 = iVar8;
    iVar8 = 2;
    do {
      iVar4 = FUN_004a9810(iVar7 + -2 + iVar8,param_1);
      if (iVar4 == 0) goto switchD_00499f57_caseD_7532;
      uVar2 = FUN_004a9480();
      if (*param_1 < uVar2) {
        FUN_005232d0(1,iVar8);
        FUN_0052f6f0(*(undefined4 *)(param_1 + 4),local_34);
        uVar5 = FUN_004b6bd0(local_34);
        while (0x12 < uVar5) {
          iVar4 = FUN_004b6ca0(local_34);
          iVar4 = FUN_004b6ab0(acStack_36[iVar4 + 1]);
          if (iVar4 == 0) {
            iVar4 = FUN_004b6ca0(local_34);
            acStack_36[iVar4 + 1] = '\0';
          }
          else {
            iVar4 = FUN_004b6ca0(local_34);
            acStack_36[iVar4] = '\0';
          }
          uVar5 = FUN_004b6bd0(local_34);
        }
        FUN_0051ea40(local_34,0x12);
      }
      else {
        FUN_005232d0(3,iVar8);
        puVar9 = *(undefined4 **)(param_1 + 4);
        puVar10 = local_34;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        *(undefined1 *)puVar10 = 0;
        puVar10 = local_34;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        FUN_0051ea40(local_34,0x10);
      }
      if (iVar8 == 2) {
        if (iVar7 == 0) {
LAB_00499ec0:
          pcVar11 = (char *)&DAT_005ad48c;
        }
        else {
          pcVar11 = &DAT_005beb20;
        }
      }
      else {
        if ((iVar8 != 6) || (iVar7 == iVar3 + -5)) goto LAB_00499ec0;
        pcVar11 = &DAT_005beb1c;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar13 = pcVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar11 = (char *)local_34;
      do {
        pcVar12 = pcVar11;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar5;
      pcVar13 = pcVar12 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (iVar8 + -2 == local_64) {
        FUN_00523400(local_34);
      }
      else {
        FUN_005233e0(local_34);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 7);
    iVar8 = FUN_00526620(&local_5c);
    while (iVar8 != 0) {
      iVar8 = FUN_00526620(&local_5c);
    }
    iVar8 = local_64;
    switch(local_5c) {
    case 0x7534:
      local_58 = FUN_004a9810(local_64 + iVar7,param_1);
    case 0x7532:
    case 0x754d:
switchD_00499f57_caseD_7532:
      FUN_00497860(3,local_4c);
      return local_58;
    case 0x7542:
      if (local_64 == 0) {
        if (iVar7 == 0) {
          local_64 = 4;
          iVar7 = iVar3 + -5;
          iVar8 = local_64;
        }
        else {
          iVar7 = iVar7 + -1;
        }
      }
      else {
        iVar8 = local_64 + -1;
      }
      break;
    case 0x7547:
      iVar8 = local_64 + 1;
      if (local_64 + 1 == 5) {
        if (iVar7 == iVar3 + -5) {
          iVar7 = 0;
          local_64 = 0;
          iVar8 = local_64;
        }
        else {
          iVar7 = iVar7 + 1;
          iVar8 = local_64;
        }
      }
    }
  } while( true );
}

