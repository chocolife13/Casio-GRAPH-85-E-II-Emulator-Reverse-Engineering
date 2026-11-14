// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004df240
// entry: 004df240  size: 1766


undefined4 *
FUN_004df240(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  int *local_bc;
  int local_b4;
  int local_b0;
  uint local_a8;
  int local_a4;
  int local_98;
  int local_94;
  int local_8c;
  int local_88;
  int local_7c;
  int local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_004e5780(&local_6c);
  iVar6 = FUN_004e4000(param_2);
  if (iVar6 != 0) {
    puVar7 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar7;
  }
  iVar6 = FUN_004e9680(param_2);
  if (iVar6 == 0) {
    puVar7 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar7;
  }
  FUN_004e57a0(local_24);
  uVar8 = FUN_004e7730(local_24,local_30);
  iVar6 = FUN_004e71d0(param_2,uVar8);
  if (iVar6 == 1) {
    puVar7 = (undefined4 *)FUN_004e02c0(param_1,param_3,param_4);
    return puVar7;
  }
  iVar6 = FUN_004e72d0(param_2,&local_6c);
  if (iVar6 != 0) {
    puVar7 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar7;
  }
  FUN_004e5860(local_30);
  iVar6 = FUN_004e7310(param_2,local_30);
  if (iVar6 != 0) {
    puVar7 = (undefined4 *)FUN_004e5630(3,param_3);
    return puVar7;
  }
  iVar6 = FUN_004e50a0(param_2);
  local_b4 = 1;
  iVar9 = FUN_004e4000(param_1);
  if (iVar9 != 0) {
    local_b4 = 2;
  }
  piVar3 = (int *)param_1[2];
  cVar5 = FUN_004ada20(piVar3);
  if (cVar5 == '\x02') {
    puVar7 = (undefined4 *)FUN_004e5630(4,param_3);
    return puVar7;
  }
  bVar4 = cVar5 != '\x01' && param_1 == param_3;
  uVar1 = *(ushort *)((int)param_1 + 2);
  uVar17 = (uint)uVar1;
  uVar2 = *(ushort *)(param_1 + 1);
  if (uVar17 != uVar2) {
    if (bVar4) {
      FUN_004ad6d0(piVar3);
    }
    puVar7 = (undefined4 *)FUN_004e5630(9,param_3);
    return puVar7;
  }
  uVar15 = uVar2 * uVar17;
  iVar9 = (local_b4 * uVar15 * 3 & 0x3fff) << 2;
  piVar10 = (int *)FUN_004ad630(iVar9);
  if (piVar10 == (int *)0x0) {
    if (bVar4) {
      FUN_004ad6d0(piVar3);
    }
    puVar7 = (undefined4 *)FUN_004e5630(4,param_3);
    return puVar7;
  }
  local_bc = (int *)FUN_004ad630(iVar9);
  if (local_bc == (int *)0x0) {
    if (bVar4) {
      FUN_004ad6d0(piVar3);
    }
    FUN_004ad6d0(piVar10);
    puVar7 = (undefined4 *)FUN_004e5630(4,param_3);
    return puVar7;
  }
  uVar13 = uVar15 & 0xffff;
  iVar9 = uVar13 * local_b4;
  if (iVar9 != 0) {
    iVar11 = 0;
    local_b0 = iVar9;
    do {
      puVar19 = (undefined4 *)(*local_bc + iVar11);
      puVar7 = (undefined4 *)(iVar11 + *piVar3);
      iVar11 = iVar11 + 0xc;
      *puVar19 = *puVar7;
      puVar19[1] = puVar7[1];
      puVar19[2] = puVar7[2];
      local_b0 = local_b0 + -1;
    } while (local_b0 != 0);
  }
  local_b0 = 1;
  local_a4 = 2;
  iVar11 = 1;
  if (1 < iVar6) {
    do {
      if (iVar9 != 0) {
        iVar11 = 0;
        iVar14 = iVar9;
        do {
          puVar19 = (undefined4 *)(iVar11 + *local_bc);
          puVar7 = (undefined4 *)(iVar11 + *piVar10);
          iVar14 = iVar14 + -1;
          *puVar7 = *puVar19;
          puVar7[1] = puVar19[1];
          puVar7[2] = puVar19[2];
          iVar11 = iVar11 + 0xc;
        } while (iVar14 != 0);
      }
      local_7c = 1;
      if (uVar17 != 0) {
        local_8c = 0;
        iVar11 = uVar17 * 0xc;
        local_94 = 0xc;
        local_a8 = uVar13;
        do {
          local_74 = 1;
          iVar14 = (uVar13 * 3 + 3) * 4;
          local_88 = 0xc;
          do {
            *param_3 = local_6c;
            iVar20 = 1;
            param_3[1] = local_68;
            param_3[2] = local_64;
            iVar16 = local_94;
            iVar18 = local_88;
            local_98 = iVar14;
            do {
              iVar12 = iVar16 + -0xc + *piVar3;
              local_48 = *(undefined4 *)(iVar16 + -0xc + *piVar3);
              local_44 = *(undefined4 *)(iVar12 + 4);
              local_40 = *(undefined4 *)(iVar12 + 8);
              iVar12 = *piVar10 + -0xc + iVar18;
              local_60 = *(undefined4 *)(*piVar10 + -0xc + iVar18);
              local_5c = *(undefined4 *)(iVar12 + 4);
              local_58 = *(undefined4 *)(iVar12 + 8);
              if (local_b4 == 2) {
                iVar12 = FUN_004e4000(&local_48);
                if (iVar12 == 1) {
                  puVar7 = (undefined4 *)(*piVar3 + -0xc + (local_a8 + iVar20) * 0xc);
                  local_3c = *puVar7;
                  local_38 = puVar7[1];
                  local_34 = puVar7[2];
                }
                iVar12 = FUN_004e4000(&local_60);
                if (iVar12 == 1) {
                  iVar12 = local_98 + -0xc + *piVar10;
                  local_54 = *(undefined4 *)(local_98 + -0xc + *piVar10);
                  local_50 = *(undefined4 *)(iVar12 + 4);
                  local_4c = *(undefined4 *)(iVar12 + 8);
                }
              }
              uVar8 = FUN_004e0c40(&local_48,&local_60,local_18,param_4,param_3,param_4);
              FUN_004e0880(param_3,uVar8);
              iVar18 = iVar18 + iVar11;
              local_98 = local_98 + iVar11;
              iVar20 = iVar20 + 1;
              iVar16 = iVar16 + 0xc;
            } while (iVar20 <= (int)uVar17);
            iVar16 = FUN_0052f820();
            if (iVar16 != 0) {
              FUN_004e5630(1,param_3);
            }
            iVar16 = FUN_004e4020(param_3);
            if (iVar16 != 0) {
              FUN_004ad6d0(local_bc);
              FUN_004ad6d0(piVar10);
              if (cVar5 == '\x01' || param_1 != param_3) {
                return param_3;
              }
              FUN_004ad6d0(piVar3);
              return param_3;
            }
            if (((local_a4 == iVar6) && (local_b0 == 1)) &&
               (iVar16 = FUN_004e4000(param_3), iVar16 != 0)) {
              local_b0 = 2;
            }
            puVar7 = (undefined4 *)(*local_bc + -0xc + (local_8c + local_74) * 0xc);
            *puVar7 = *param_3;
            puVar7[1] = param_3[1];
            puVar7[2] = param_3[2];
            if (local_b4 == 2) {
              puVar7 = (undefined4 *)(*local_bc + -0xc + (local_a8 + local_74) * 0xc);
              *puVar7 = param_3[3];
              puVar7[1] = param_3[4];
              puVar7[2] = param_3[5];
            }
            local_74 = local_74 + 1;
            local_88 = local_88 + 0xc;
            iVar14 = iVar14 + 0xc;
          } while (local_74 <= (int)uVar17);
          local_7c = local_7c + 1;
          local_8c = local_8c + uVar17;
          local_94 = local_94 + iVar11;
          local_a8 = local_a8 + uVar17;
        } while (local_7c <= (int)uVar17);
      }
      local_a4 = local_a4 + 1;
      iVar11 = local_b0;
    } while (local_a4 <= iVar6);
  }
  FUN_004ad6d0(piVar10);
  if (bVar4) {
    FUN_004ad6d0(piVar3);
  }
  if (local_b4 == 2) {
    if (iVar11 != 1) {
LAB_004df902:
      *(undefined1 *)param_3 = 0xb0;
      goto LAB_004df905;
    }
    local_bc = (int *)FUN_004ad670(local_bc,(uVar15 * 3 & 0x3fff) << 2);
    if (local_bc == (int *)0x0) {
      puVar7 = (undefined4 *)FUN_004e5630(4,param_3);
      return puVar7;
    }
  }
  else if (iVar11 != 1) goto LAB_004df902;
  *(undefined1 *)param_3 = 0x30;
LAB_004df905:
  *(ushort *)((int)param_3 + 2) = uVar1;
  *(ushort *)(param_3 + 1) = uVar2;
  param_3[2] = local_bc;
  return param_3;
}

