// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043b620
// entry: 0043b620  size: 944


void FUN_0043b620(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int local_90;
  undefined4 local_84;
  undefined1 local_6f [21];
  undefined1 local_5a;
  char local_58 [43];
  undefined4 local_2d [11];
  
  bVar3 = false;
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x14)) {
    do {
      FUN_00439d70(*(undefined4 *)(param_1 + 0x2d8),0x7545,1,param_1);
    } while (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14));
  }
  pcVar6 = local_58;
  for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  pcVar10 = (char *)(param_1 + 0x2ac);
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  iVar7 = FUN_004b6f30(pcVar10,0xd);
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 1;
    uVar5 = FUN_004b6ca0(pcVar10);
    pcVar6 = local_58;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar6 = pcVar6 + 1;
    }
    if ((iVar1 == 2) && (param_2 == 1)) {
      if (*(int *)(param_1 + 0x1c) == 7) {
        *(undefined4 *)(param_1 + 0x1c) = 6;
      }
      iVar7 = *(int *)(param_1 + 0x1c);
      iVar9 = 0;
      pcVar6 = (char *)(param_1 + 0x60 + iVar7 * 0x2a);
      do {
        if (*pcVar6 != ' ') {
          puVar13 = &local_84;
          for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = 0x20202020;
            puVar13 = puVar13 + 1;
          }
          *(undefined2 *)puVar13 = 0x2020;
          *(undefined1 *)((int)puVar13 + 2) = 0x20;
          local_5a = 0;
          FUN_005232d0(1,iVar7 + 1);
          FUN_005233e0(&local_84);
          puVar13 = &local_84;
          puVar12 = (undefined4 *)(param_1 + 0x60 + *(int *)(param_1 + 0x1c) * 0x2a);
          for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar12 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = *(undefined2 *)puVar13;
          break;
        }
        iVar9 = iVar9 + 1;
        pcVar6 = pcVar6 + 1;
      } while (iVar9 < 0x2a);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 2;
    uVar5 = FUN_004b6ca0((undefined4 *)(iVar7 + 1));
    puVar13 = (undefined4 *)(iVar7 + 1);
    puVar12 = local_2d;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
    cVar4 = *pcVar10;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    if (cVar4 != '\r') {
      pcVar6 = local_58;
      do {
        *pcVar6 = cVar4;
        cVar4 = pcVar10[1];
        pcVar6 = pcVar6 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar4 != '\r');
    }
  }
  iVar7 = *(int *)(param_1 + 0x54);
  local_90 = 0;
  if (0 < iVar7) {
    do {
      uVar5 = *(uint *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined4 *)(param_1 + 0x58) = 1;
      if (uVar5 < 7) {
        if ((*(int *)(param_1 + 0x14) != 1) && (local_90 == 1)) {
          *(uint *)(param_1 + 0x1c) = uVar5 + 1;
        }
      }
      else if (param_2 == 0) {
        if (((*(int *)(param_1 + 0x44) == 1) && (*(int *)(param_1 + 0x14) != 1)) ||
           (iVar7 = FUN_0043c020(param_1), iVar7 == 1)) {
          puVar13 = (undefined4 *)(param_1 + 0x60);
          iVar7 = 6;
          puVar12 = puVar13;
          do {
            iVar7 = iVar7 + -1;
            puVar11 = (undefined4 *)((int)puVar12 + 0x2a);
            puVar14 = puVar12;
            for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar14 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar14 = puVar14 + 1;
            }
            *(undefined2 *)puVar14 = *(undefined2 *)puVar11;
            puVar12 = (undefined4 *)((int)puVar12 + 0x2a);
          } while (iVar7 != 0);
          puVar12 = (undefined4 *)(param_1 + 0x15c);
          for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar12 = 0x20202020;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = 0x2020;
          iVar7 = 0;
          do {
            iVar7 = iVar7 + 1;
            FUN_005232d0(1,iVar7);
            FUN_00523470(puVar13,0x15);
            puVar13 = (undefined4 *)((int)puVar13 + 0x2a);
          } while (iVar7 < 7);
        }
      }
      else if (iVar2 == 7) {
        if (iVar1 == iVar7) {
          if ((!bVar3) && (iVar7 == 2)) {
            bVar3 = true;
            *(uint *)(param_1 + 0x1c) = uVar5 - 1;
          }
        }
        else if (!bVar3) {
          puVar13 = (undefined4 *)(param_1 + 0x60);
          iVar7 = 6;
          puVar12 = puVar13;
          do {
            iVar7 = iVar7 + -1;
            puVar11 = (undefined4 *)((int)puVar12 + 0x2a);
            puVar14 = puVar12;
            for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar14 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar14 = puVar14 + 1;
            }
            *(undefined2 *)puVar14 = *(undefined2 *)puVar11;
            puVar12 = (undefined4 *)((int)puVar12 + 0x2a);
          } while (iVar7 != 0);
          puVar12 = (undefined4 *)(param_1 + 0x15c);
          for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar12 = 0x20202020;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = 0x2020;
          iVar7 = 0;
          do {
            iVar7 = iVar7 + 1;
            FUN_005232d0(1,iVar7);
            FUN_00523470(puVar13,0x15);
            puVar13 = (undefined4 *)((int)puVar13 + 0x2a);
          } while (iVar7 < 7);
          bVar3 = true;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        }
      }
      puVar13 = &local_84;
      for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar13 = 0x20202020;
        puVar13 = puVar13 + 1;
      }
      *(undefined2 *)puVar13 = 0x2020;
      local_5a = 0;
      iVar7 = FUN_004b6bd0(local_58 + local_90 * 0x2b,local_58 + local_90 * 0x2b);
      FUN_004b6ef0(local_6f + -iVar7);
      FUN_005232d0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      FUN_005233e0(&local_84);
      puVar13 = &local_84;
      puVar12 = (undefined4 *)(param_1 + 0x36 + *(int *)(param_1 + 0x1c) * 0x2a);
      for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar12 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined2 *)puVar12 = *(undefined2 *)puVar13;
      iVar7 = *(int *)(param_1 + 0x54);
      if (((iVar7 == 2) && (*(int *)(param_1 + 0x14) == 1)) &&
         ((*(int *)(param_1 + 0x1c) != 7 && (local_90 != 1)))) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
      local_90 = local_90 + 1;
    } while (local_90 < iVar7);
  }
  FUN_00523740();
  uVar5 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x34) = 1;
  if (uVar5 == 7) {
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (uVar5 < 7) {
    *(uint *)(param_1 + 0x1c) = uVar5 + 1;
  }
  return;
}

