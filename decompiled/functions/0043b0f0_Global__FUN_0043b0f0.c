// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043b0f0
// entry: 0043b0f0  size: 966


undefined4 FUN_0043b0f0(undefined4 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint local_18;
  undefined4 local_14;
  
  piVar5 = param_2;
  if (((param_2[9] == 1) || (param_2[0xd] == 1)) ||
     (((param_2[1] == *param_2 || (iVar6 = FUN_005262f0(), iVar6 == 2)) &&
      (FUN_0043a310(0x7544,param_2,1), param_2[1] == *param_2)))) {
    return 0;
  }
  iVar6 = param_2[6];
  iVar3 = param_2[0x16];
  iVar4 = param_2[7];
  local_18 = param_2[1];
  iVar7 = FUN_00439aa0(param_2[4] + -1,0x7545,0,param_2);
  uVar8 = *param_2 - 1;
  if (uVar8 < param_2[1] - 1U) {
    do {
      puVar10 = (undefined1 *)(param_2[0xb6] + uVar8);
      uVar8 = uVar8 + 1;
      *puVar10 = puVar10[iVar7];
    } while (uVar8 < param_2[1] - 1U);
  }
  iVar9 = param_2[1];
  param_2[1] = iVar9 - iVar7;
  iVar9 = FUN_004071b0(param_2[0xb6],(iVar9 - iVar7) + 0xffU & 0xffffff00);
  param_2[0xb6] = iVar9;
  if (iVar9 == 0) {
    FUN_0052b240(4);
    return 0xffffffff;
  }
  iVar14 = param_2[1];
  *(undefined1 *)(iVar9 + -1 + iVar14) = 0;
  iVar9 = FUN_004b7370(CONCAT31((int3)((uint)iVar14 >> 8),
                                *(undefined1 *)(param_2[0xb7] + -1 + param_2[4])));
  uVar8 = param_2[4];
  if (iVar9 == 0) {
    if (uVar8 < param_2[5] - 1U) {
      do {
        puVar10 = (undefined1 *)(param_2[0xb7] + uVar8);
        uVar8 = uVar8 + 1;
        puVar10[-1] = *puVar10;
      } while (uVar8 < param_2[5] - 1U);
    }
    local_14 = 1;
    param_2[5] = param_2[5] + -1;
  }
  else {
    if (uVar8 < param_2[5] - 1U) {
      do {
        iVar9 = param_2[0xb7] + uVar8;
        uVar8 = uVar8 + 1;
        *(undefined1 *)(iVar9 + -1) = *(undefined1 *)(iVar9 + 1);
      } while (uVar8 < param_2[5] - 1U);
    }
    local_14 = 2;
    param_2[5] = param_2[5] + -2;
  }
  iVar9 = FUN_004071b0(param_2[0xb7],param_2[5] + 0xffU & 0xffffff00);
  param_2[0xb7] = iVar9;
  if (iVar9 == 0) {
    return 0xffffffff;
  }
  *(undefined1 *)(iVar9 + -1 + param_2[5]) = 0;
  uVar8 = param_2[1];
  uVar11 = *param_2 - 1;
  if (local_18 < uVar8) {
    local_18 = uVar8 - 1;
  }
  uVar16 = uVar11;
  if (uVar11 < uVar8) {
    do {
      if (uVar16 < uVar8 - 1) {
        iVar9 = FUN_004b6ab0(CONCAT31((int3)(uVar11 >> 8),*(undefined1 *)(piVar5[0xb6] + uVar16)));
        if (iVar9 == 0) {
          param_2._0_1_ = *(char *)(piVar5[0xb6] + uVar16);
          *(char *)(piVar5[0x16] + piVar5[7] * 0x2a + 0x35 + (int)piVar5) = (char)param_2;
        }
        else {
          param_2._0_1_ = *(char *)(piVar5[0xb6] + uVar16);
          cVar2 = ((char *)(piVar5[0xb6] + uVar16))[1];
          *(char *)(piVar5[0x16] + piVar5[7] * 0x2a + 0x35 + (int)piVar5) = (char)param_2;
          uVar16 = uVar16 + 1;
          *(char *)(piVar5[0x16] + piVar5[7] * 0x2a + 0x36 + (int)piVar5) = cVar2;
          piVar5[0x16] = piVar5[0x16] + 1;
        }
      }
      else {
        iVar9 = piVar5[0x16];
        uVar8 = piVar5[6];
        if (iVar7 != 0) {
          iVar13 = piVar5[7] * 0x2a;
          iVar14 = iVar7;
          do {
            if (0x126 < iVar13) break;
            iVar1 = iVar13 + iVar9;
            iVar9 = iVar9 + 1;
            uVar8 = uVar8 + 1;
            *(undefined1 *)(iVar1 + 0x35 + (int)piVar5) = 0x20;
            if (0x15 < uVar8) {
              iVar9 = 1;
              iVar13 = iVar13 + 0x2a;
              uVar8 = 1;
            }
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        param_2._0_1_ = '\0';
      }
      if ((((char)param_2 == '\r') || ((char)param_2 == '\f')) ||
         (uVar11 = piVar5[1] - 2, uVar16 == uVar11)) {
        for (uVar8 = piVar5[0x16]; uVar8 < 0x2a; uVar8 = uVar8 + 1) {
          *(undefined1 *)(uVar8 + piVar5[7] * 0x2a + 0x36 + (int)piVar5) = 0x20;
        }
        uVar11 = piVar5[1] - 2;
        if ((uVar16 == uVar11) && (uVar11 = piVar5[7], uVar11 < 7)) {
          uVar12 = uVar11 * -0x2a + 0x126;
          puVar17 = (undefined4 *)((int)piVar5 + uVar11 * 0x2a + 0x60);
          for (uVar8 = uVar12 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar17 = 0x20202020;
            puVar17 = puVar17 + 1;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar17 = 0x20;
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          }
          uVar11 = 0;
        }
      }
      iVar9 = piVar5[6];
      piVar5[6] = iVar9 + 1U;
      piVar5[0x16] = piVar5[0x16] + 1;
      if (((0x15 < iVar9 + 1U) || ((char)param_2 == '\r')) || ((char)param_2 == '\f')) {
        piVar5[6] = 1;
        uVar11 = piVar5[7] + 1;
        piVar5[0x16] = 1;
        piVar5[7] = uVar11;
        if (7 < uVar11) {
          uVar16 = local_18;
        }
      }
      uVar8 = piVar5[1];
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar8);
  }
  uVar8 = 0;
  piVar15 = piVar5 + 0x18;
  do {
    uVar8 = uVar8 + 1;
    FUN_005232d0(1,uVar8);
    FUN_00523470(piVar15,0x15);
    piVar15 = (int *)((int)piVar15 + 0x2a);
  } while (uVar8 < 7);
  piVar5[0x16] = iVar3;
  piVar5[6] = iVar6;
  piVar5[7] = iVar4;
  FUN_005232d0(iVar6,iVar4);
  return local_14;
}

