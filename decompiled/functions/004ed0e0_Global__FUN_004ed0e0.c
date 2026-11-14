// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ed0e0
// entry: 004ed0e0  size: 1618


int FUN_004ed0e0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_174;
  int local_170;
  int local_16c;
  int *local_168;
  int *local_164;
  int local_160;
  undefined4 local_15c [6];
  undefined4 local_144 [6];
  int local_12c;
  int local_128;
  undefined4 local_124 [6];
  undefined4 local_10c [6];
  undefined1 local_f4 [24];
  undefined1 local_dc [24];
  undefined1 local_c4 [24];
  undefined4 local_ac [6];
  undefined1 local_94 [24];
  int local_7c [31];
  
  FUN_004e5780(local_ac);
  local_16c = 1;
  if (0 < param_3) {
    local_168 = (int *)0x18;
    do {
      puVar8 = (undefined4 *)(*param_1 + -0x18 + (int)local_168);
      puVar10 = local_124;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_004e3800(local_124,local_f4);
      FUN_004e3870(local_124,local_c4);
      iVar7 = 1;
      iVar3 = 1;
      local_170 = 0x18;
      do {
        if (local_16c != iVar3) {
          puVar8 = (undefined4 *)(*param_1 + -0x18 + local_170);
          puVar10 = local_10c;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          FUN_004e3800(local_10c,local_dc);
          iVar4 = FUN_004e7250(local_f4,local_dc);
          if (iVar4 == 0) {
            iVar4 = FUN_004e71d0(local_f4,local_dc);
            if (iVar4 != 0) {
              FUN_004e3870(local_10c,local_94);
              iVar4 = FUN_004e7250(local_c4,local_94);
              if (iVar4 == 0) {
                iVar4 = FUN_004e71d0(local_c4,local_94);
              }
              else {
                iVar4 = 0;
                iVar7 = iVar7 + 1;
              }
              if ((local_16c < iVar3) && (iVar4 != 0)) goto LAB_004ed231;
            }
          }
          else {
LAB_004ed231:
            iVar7 = iVar7 + 1;
          }
        }
        iVar3 = iVar3 + 1;
        local_170 = local_170 + 0x18;
      } while (iVar3 <= param_3);
      local_16c = local_16c + 1;
      puVar8 = local_124;
      puVar10 = (undefined4 *)(*param_2 + -0x18 + iVar7 * 0x18);
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_168 = (int *)((int)local_168 + 0x18);
    } while (local_16c <= param_3);
  }
  piVar9 = local_7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  if (0 < param_3) {
    piVar9 = local_7c;
    for (iVar3 = param_3; piVar9 = piVar9 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar9 = 1;
    }
  }
  iVar3 = 0;
  local_174 = 0;
  local_16c = 1;
  if (0 < param_3) {
    local_170 = 0x18;
    piVar9 = local_7c;
    do {
      piVar9 = piVar9 + 1;
      if (*piVar9 != 0) {
        puVar8 = (undefined4 *)(local_170 + -0x18 + *param_2);
        puVar10 = local_124;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar8 = local_124;
        puVar10 = local_144;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        FUN_004e3800(local_124,local_f4);
        local_12c = FUN_004e71d0(local_f4,local_ac);
        FUN_004e3870(local_124,local_c4);
        local_128 = FUN_004e71d0(local_c4,local_ac);
        local_160 = local_16c + 1;
        if (local_160 <= param_3) {
          iVar7 = iVar3 * 0x18;
          local_168 = piVar9;
          piVar1 = (int *)local_170;
LAB_004ed39c:
          local_164 = (int *)((int)piVar1 + 0x18);
          local_168 = local_168 + 1;
          iVar3 = local_174;
          if (*local_168 != 0) {
            puVar8 = (undefined4 *)((int)piVar1 + *param_2);
            puVar10 = local_10c;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            FUN_004e3800(local_10c,local_dc);
            iVar3 = local_12c;
            if (local_12c == 0) {
              uVar2 = FUN_004e0b00(local_dc,local_f4,local_15c,1,local_f4,local_15c,1,local_15c,1);
              uVar2 = FUN_004e0ef0(uVar2);
            }
            else {
              uVar2 = FUN_004e0b00(local_dc,local_f4,local_15c,1,local_15c);
            }
            FUN_004e23b0(uVar2);
            iVar4 = FUN_004e7290(local_15c,param_4);
            if (iVar4 == 0) goto code_r0x004ed469;
            FUN_004e5070(*piVar9,local_15c);
            FUN_004e0ef0(local_144,local_15c,local_144,1);
            local_174 = local_174 + 1;
            puVar8 = local_144;
            puVar10 = (undefined4 *)(*param_1 + -0x18 + local_174 * 0x18);
            for (iVar7 = 6; iVar3 = local_174, iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
          }
        }
LAB_004ed602:
        if (local_16c == param_3) {
          iVar3 = iVar3 + 1;
          puVar8 = local_144;
          puVar10 = (undefined4 *)(*param_1 + -0x18 + iVar3 * 0x18);
          for (iVar7 = 6; local_174 = iVar3, iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
        }
      }
      local_16c = local_16c + 1;
      local_170 = local_170 + 0x18;
    } while (local_16c <= param_3);
  }
  iVar3 = iVar3 + 1;
  if (iVar3 <= param_3) {
    iVar7 = iVar3 * 0x18;
    iVar3 = (param_3 - iVar3) + 1;
    do {
      iVar4 = iVar7 + -0x18;
      iVar7 = iVar7 + 0x18;
      iVar3 = iVar3 + -1;
      puVar8 = local_ac;
      puVar10 = (undefined4 *)(iVar4 + *param_1);
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (0 < param_3) {
    local_164 = local_7c;
    iVar7 = 0;
    local_170 = param_3;
    do {
      local_164 = local_164 + 1;
      iVar4 = iVar7;
      if (*local_164 != 0) {
        iVar3 = iVar3 + 1;
        iVar4 = iVar7 + 0x18;
        FUN_004e5070(*local_164,local_15c);
        puVar8 = local_15c;
        puVar10 = (undefined4 *)(iVar7 + *param_2);
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      local_170 = local_170 + -1;
      iVar7 = iVar4;
    } while (local_170 != 0);
  }
  iVar7 = iVar3 + 1;
  if (iVar7 <= param_3) {
    iVar4 = iVar7 * 0x18;
    iVar7 = (param_3 - iVar7) + 1;
    do {
      iVar5 = iVar4 + -0x18;
      iVar4 = iVar4 + 0x18;
      iVar7 = iVar7 + -1;
      puVar8 = local_ac;
      puVar10 = (undefined4 *)(iVar5 + *param_2);
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
    } while (iVar7 != 0);
  }
  return iVar3;
code_r0x004ed469:
  if ((iVar3 == 0) || (local_128 == 0)) {
    uVar2 = FUN_004e0b00(local_10c,local_124,local_15c,1,local_124,local_15c,1,local_15c,1);
    uVar2 = FUN_004e0ef0(uVar2);
  }
  else {
    uVar2 = FUN_004e0b00(local_10c,local_124,local_15c,1,local_15c,1);
  }
  FUN_004e23b0(uVar2);
  iVar3 = FUN_004e7290(local_15c,param_4);
  if (iVar3 == 0) {
    *piVar9 = *piVar9 + 1;
    *local_168 = 0;
    FUN_004e0880(local_144,local_10c,local_144,1);
  }
  iVar3 = iVar7;
  if (local_160 == param_3) {
    FUN_004e5070(*piVar9,local_15c);
    FUN_004e0ef0(local_144,local_15c,local_144,1);
    local_174 = local_174 + 1;
    iVar3 = iVar7 + 0x18;
    puVar8 = local_144;
    puVar10 = (undefined4 *)(iVar7 + *param_1);
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  local_160 = local_160 + 1;
  iVar7 = iVar3;
  iVar3 = local_174;
  piVar1 = local_164;
  if (param_3 < local_160) goto LAB_004ed602;
  goto LAB_004ed39c;
}

