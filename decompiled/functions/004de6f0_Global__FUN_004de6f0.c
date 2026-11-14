// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004de6f0
// entry: 004de6f0  size: 1409


undefined4 *
FUN_004de6f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int local_a8;
  int *local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_98 = 1;
  iVar6 = FUN_004e4000(param_1);
  iVar7 = FUN_004e4000(param_2);
  if ((iVar6 != 0) || (iVar7 != 0)) {
    local_98 = 2;
  }
  local_a8 = 0;
  if (param_1 == param_3) {
    local_a8 = 1;
  }
  else if (param_2 == param_3) {
    local_a8 = 2;
  }
  piVar16 = (int *)param_1[2];
  cVar5 = FUN_004ada20(piVar16);
  if (cVar5 == '\x02') {
    puVar8 = (undefined4 *)FUN_004e5630(4,param_3);
    return puVar8;
  }
  if (cVar5 == '\x01') {
    local_a8 = 0;
  }
  piVar4 = (int *)param_2[2];
  cVar5 = FUN_004ada20(piVar4);
  if (cVar5 == '\x02') {
    puVar8 = (undefined4 *)FUN_004e5630(4,param_3);
    return puVar8;
  }
  if (cVar5 == '\x01') {
    local_a8 = 0;
  }
  uVar11 = (uint)*(ushort *)(param_1 + 1);
  uVar1 = *(ushort *)((int)param_1 + 2);
  uVar15 = (uint)uVar1;
  uVar2 = *(ushort *)((int)param_2 + 2);
  uVar3 = *(ushort *)(param_2 + 1);
  uVar13 = (uint)uVar3;
  if (uVar11 != uVar2) {
    if ((local_a8 == 1) || (piVar16 = piVar4, local_a8 == 2)) {
      FUN_004ad6d0(piVar16);
    }
    puVar8 = (undefined4 *)FUN_004e5630(9,param_3);
    return puVar8;
  }
  iVar6 = uVar13 * uVar15;
  local_a0 = (int *)FUN_004ad630(local_98 * iVar6 * 0xc);
  if (local_a0 == (int *)0x0) {
    if ((local_a8 == 1) || (piVar16 = piVar4, local_a8 == 2)) {
      FUN_004ad6d0(piVar16);
    }
    puVar8 = (undefined4 *)FUN_004e5630(4,param_3);
    return puVar8;
  }
  local_94 = 1;
  FUN_004e5780(&local_54);
  local_70 = 1;
  if (uVar1 != 0) {
    local_88 = 0xc;
    local_80 = 0;
    local_90 = 0;
    do {
      local_8c = 1;
      if (uVar13 != 0) {
        local_7c = 0xc;
        do {
          iVar7 = 1;
          *param_3 = local_54;
          param_3[1] = local_50;
          param_3[2] = local_4c;
          if (uVar11 != 0) {
            local_78 = 0;
            iVar12 = local_88;
            iVar14 = local_7c;
            do {
              iVar9 = *piVar16 + -0xc + iVar12;
              local_48 = *(undefined4 *)(*piVar16 + -0xc + iVar12);
              local_44 = *(undefined4 *)(iVar9 + 4);
              local_40 = *(undefined4 *)(iVar9 + 8);
              iVar9 = *piVar4 + -0xc + iVar14;
              local_30 = *(undefined4 *)(*piVar4 + -0xc + iVar14);
              local_2c = *(undefined4 *)(iVar9 + 4);
              local_28 = *(undefined4 *)(iVar9 + 8);
              if (local_98 == 2) {
                iVar9 = FUN_004e4000(&local_48);
                if (iVar9 == 1) {
                  puVar8 = (undefined4 *)
                           (*piVar16 + -0xc + ((uVar11 * uVar15 & 0xffff) + local_90 + iVar7) * 0xc)
                  ;
                  local_3c = *puVar8;
                  local_38 = puVar8[1];
                  local_34 = puVar8[2];
                }
                iVar9 = FUN_004e4000(&local_30);
                if (iVar9 == 1) {
                  puVar8 = (undefined4 *)
                           (*piVar4 + -0xc + ((uVar2 * uVar13 & 0xffff) + local_78 + local_8c) * 0xc
                           );
                  local_24 = *puVar8;
                  local_20 = puVar8[1];
                  local_1c = puVar8[2];
                }
              }
              uVar10 = FUN_004e0c40(&local_48,&local_30,local_18,param_4,param_3,param_4);
              FUN_004e0880(param_3,uVar10);
              local_78 = local_78 + uVar13;
              iVar7 = iVar7 + 1;
              iVar12 = iVar12 + 0xc;
              iVar14 = iVar14 + uVar13 * 0xc;
            } while (iVar7 <= (int)uVar11);
          }
          iVar7 = FUN_0052f820();
          if (iVar7 != 0) {
            FUN_004e5630(1,param_3);
          }
          iVar7 = FUN_004e4020(param_3);
          if (iVar7 != 0) {
            FUN_004ad6d0(local_a0);
            if (local_a8 == 1) {
              FUN_004ad6d0(piVar16);
              return param_3;
            }
            if (local_a8 != 2) {
              return param_3;
            }
            FUN_004ad6d0(piVar4);
            return param_3;
          }
          iVar7 = FUN_004e4000(param_3);
          if (iVar7 != 0) {
            local_94 = 2;
          }
          puVar8 = (undefined4 *)(*local_a0 + -0xc + (local_80 + local_8c) * 0xc);
          *puVar8 = *param_3;
          puVar8[1] = param_3[1];
          puVar8[2] = param_3[2];
          if (local_98 == 2) {
            puVar8 = (undefined4 *)(*local_a0 + -0xc + (local_80 + local_8c + iVar6) * 0xc);
            *puVar8 = param_3[3];
            puVar8[1] = param_3[4];
            puVar8[2] = param_3[5];
          }
          local_8c = local_8c + 1;
          local_7c = local_7c + 0xc;
        } while (local_8c <= (int)uVar13);
      }
      local_90 = local_90 + uVar11;
      local_70 = local_70 + 1;
      local_88 = local_88 + uVar11 * 0xc;
      local_80 = local_80 + uVar13;
    } while (local_70 <= (int)uVar15);
  }
  if ((local_a8 == 1) || (piVar16 = piVar4, local_a8 == 2)) {
    FUN_004ad6d0(piVar16);
  }
  if (local_98 == 2) {
    if (local_94 != 1) {
LAB_004dec52:
      *(undefined1 *)param_3 = 0xb0;
      goto LAB_004dec55;
    }
    local_a0 = (int *)FUN_004ad670(local_a0,(iVar6 * 3 & 0x3fffU) << 2);
    if (local_a0 == (int *)0x0) {
      puVar8 = (undefined4 *)FUN_004e5630(4,param_3);
      return puVar8;
    }
  }
  else if (local_94 != 1) goto LAB_004dec52;
  *(undefined1 *)param_3 = 0x30;
LAB_004dec55:
  *(ushort *)((int)param_3 + 2) = uVar1;
  *(ushort *)(param_3 + 1) = uVar3;
  param_3[2] = local_a0;
  return param_3;
}

