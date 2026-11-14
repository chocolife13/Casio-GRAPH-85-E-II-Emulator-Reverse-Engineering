// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c1380
// entry: 004c1380  size: 2488


undefined4
FUN_004c1380(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  undefined4 *puVar11;
  int *local_144;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int *local_d8 [6];
  undefined1 local_c0 [8];
  undefined4 local_b8;
  int *local_a8 [6];
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined4 local_78 [6];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_48 [8];
  int *local_40;
  undefined4 local_30 [6];
  undefined4 local_18 [6];
  
  piVar1 = (int *)param_3[2];
  FUN_004e5780(&local_fc);
  FUN_004e5800(local_30);
  iVar6 = FUN_004ad630(0x24);
  if (iVar6 == 0) {
    FUN_004e5630(4,param_3);
    return 0;
  }
  FUN_004f96c0(local_48,iVar6,3,1,1);
  iVar7 = FUN_004ad630(0x24);
  if (iVar7 == 0) {
    FUN_004e5630(4,param_3);
    FUN_004ad6d0(iVar6);
    return 0;
  }
  FUN_004f96c0(local_c0,iVar7,3,1,1);
  iVar8 = FUN_004ad630(0x6c);
  if (iVar8 == 0) {
    FUN_004e5630(4,param_3);
    FUN_004ad6d0(iVar6);
    FUN_004ad6d0(iVar7);
    return 0;
  }
  FUN_004f96c0(local_90,iVar8,3,3,1);
  local_134 = local_88;
  local_138 = local_b8;
  iVar6 = *piVar1;
  local_130 = *(undefined4 *)(iVar6 + 0x30);
  local_12c = *(undefined4 *)(iVar6 + 0x34);
  local_128 = *(undefined4 *)(iVar6 + 0x38);
  FUN_004e57e0(param_6);
  FUN_004e7be0(param_6,param_6,0xfffffff5);
  FUN_004e1790(param_6,param_6,1);
  iVar6 = *piVar1;
  puVar9 = (undefined4 *)*local_40;
  local_118 = 1;
  *puVar9 = *(undefined4 *)(iVar6 + 0x18);
  puVar9[1] = *(undefined4 *)(iVar6 + 0x1c);
  puVar9[2] = *(undefined4 *)(iVar6 + 0x20);
  iVar6 = *local_40;
  puVar9 = (undefined4 *)*piVar1;
  *(undefined4 *)(iVar6 + 0xc) = *puVar9;
  *(undefined4 *)(iVar6 + 0x10) = puVar9[1];
  *(undefined4 *)(iVar6 + 0x14) = puVar9[2];
  iVar6 = *piVar1;
  iVar7 = *local_40;
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar6 + 0xc);
  *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar6 + 0x10);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar6 + 0x14);
  iVar6 = *piVar1;
  *(undefined4 *)(iVar6 + 0x30) = local_130;
  *(undefined4 *)(iVar6 + 0x34) = local_12c;
  *(undefined4 *)(iVar6 + 0x38) = local_128;
  iVar6 = FUN_004c08b0(param_1,param_2,param_3,local_c0,local_90);
  uVar2 = local_b8;
  uVar3 = local_88;
  while( true ) {
    if (iVar6 == 0) goto LAB_004c1c90;
    local_b8 = uVar2;
    local_88 = uVar3;
    FUN_004eab60(3,local_90,local_c0);
    iVar6 = FUN_004eaee0(3,local_90,local_c0,local_d8);
    local_138 = uVar2;
    local_134 = uVar3;
    if (iVar6 == 0) break;
    FUN_004e26b0(local_d8,local_d8,1);
    iVar6 = FUN_004e4020(local_d8);
    piVar4 = local_d8[2];
    if (iVar6 != 0) break;
    local_144 = local_d8[2];
    puVar9 = local_30;
    puVar11 = param_5;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    iVar6 = 0;
    do {
      iVar7 = *piVar1;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar7 + 0x30) = local_130;
      *(undefined4 *)(iVar7 + 0x34) = local_12c;
      *(undefined4 *)(iVar7 + 0x38) = local_128;
      if (iVar6 < 7) {
        FUN_004e57a0(&local_114);
        FUN_004e7be0(&local_114,&local_114,0xffffffff);
        FUN_004e0c40(&local_114,param_5,param_5,1);
        iVar7 = FUN_004c0590(param_1,param_2,param_3,param_5,param_4,local_d8,local_48);
        if (iVar7 == 0) {
          FUN_004ad6d0(piVar4);
          goto LAB_004c1c90;
        }
        iVar7 = *piVar1;
        local_130 = *(undefined4 *)(iVar7 + 0x30);
        local_12c = *(undefined4 *)(iVar7 + 0x34);
        local_128 = *(undefined4 *)(iVar7 + 0x38);
      }
      else {
        *param_5 = local_fc;
        param_5[1] = local_f8;
        param_5[2] = local_f4;
      }
      iVar7 = FUN_004e7290(param_4,&local_130);
      if (iVar7 != 1) {
        if (iVar7 == -1) {
          FUN_004e5630(3,param_3);
          goto LAB_004c1c88;
        }
        break;
      }
      iVar7 = FUN_004e7290(param_5,&local_fc);
    } while (iVar7 == 1);
    iVar6 = FUN_004e71d0(param_5,&local_fc);
    if (iVar6 == 1) {
      FUN_004ad6d0(piVar4);
      FUN_004e26b0(local_c0,local_d8,1);
      iVar6 = FUN_004e4020(local_d8);
      piVar4 = local_d8[2];
      if (iVar6 != 0) break;
      local_144 = local_d8[2];
      iVar6 = FUN_004c7850(local_c0,local_78);
      uVar5 = local_78[2];
      if (iVar6 == 0) {
        puVar9 = local_78;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *param_3 = *puVar9;
          puVar9 = puVar9 + 1;
          param_3 = param_3 + 1;
        }
        FUN_004ad6d0(piVar4);
        goto LAB_004c1c90;
      }
      FUN_004e0c40(local_78,local_c0,local_a8,1);
      iVar6 = FUN_004e4020(local_a8);
      if (iVar6 != 0) {
        ppiVar10 = local_a8;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *param_3 = *ppiVar10;
          ppiVar10 = ppiVar10 + 1;
          param_3 = param_3 + 1;
        }
        FUN_004ad6d0(piVar4);
        FUN_004ad6d0(uVar5);
        goto LAB_004c1c90;
      }
      puVar9 = (undefined4 *)*local_a8[2];
      local_114 = *puVar9;
      local_110 = puVar9[1];
      local_10c = puVar9[2];
      FUN_004ad6d0(local_a8[2]);
      FUN_004e0c40(local_78,local_90,local_a8,1);
      FUN_004e0c40(local_a8,local_c0,local_a8,1);
      iVar6 = FUN_004e4020(local_a8);
      if (iVar6 != 0) {
        ppiVar10 = local_a8;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *param_3 = *ppiVar10;
          ppiVar10 = ppiVar10 + 1;
          param_3 = param_3 + 1;
        }
        FUN_004ad6d0(piVar4);
        FUN_004ad6d0(uVar5);
        goto LAB_004c1c90;
      }
      puVar9 = (undefined4 *)*local_a8[2];
      local_f0 = *puVar9;
      local_ec = puVar9[1];
      local_e8 = puVar9[2];
      FUN_004ad6d0(local_a8[2]);
      FUN_004ad6d0(uVar5);
      FUN_004e0dd0(&local_114,&local_f0,param_5,1);
      FUN_004e0c40(param_5,local_30,param_5,1);
      iVar6 = 0;
      do {
        iVar7 = *piVar1;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar7 + 0x30) = local_130;
        *(undefined4 *)(iVar7 + 0x34) = local_12c;
        *(undefined4 *)(iVar7 + 0x38) = local_128;
        if (iVar6 < 7) {
          FUN_004e57a0(&local_114);
          FUN_004e7be0(&local_114,&local_114,0xffffffff);
          FUN_004e0c40(&local_114,param_5,param_5,1);
          iVar7 = FUN_004c0590(param_1,param_2,param_3,param_5,param_4,local_d8,local_48);
          if (iVar7 == 0) {
            FUN_004ad6d0(piVar4);
            goto LAB_004c1c90;
          }
          iVar7 = *piVar1;
          local_130 = *(undefined4 *)(iVar7 + 0x30);
          local_12c = *(undefined4 *)(iVar7 + 0x34);
          local_128 = *(undefined4 *)(iVar7 + 0x38);
        }
        else {
          *param_5 = local_fc;
          param_5[1] = local_f8;
          param_5[2] = local_f4;
        }
        iVar7 = FUN_004e7290(param_4,&local_130);
        if (iVar7 != 1) {
          if (iVar7 == -1) {
            FUN_004e5630(3,param_3);
LAB_004c1c88:
            FUN_004ad6d0(local_144);
            goto LAB_004c1c90;
          }
          break;
        }
        iVar7 = FUN_004e7290(param_5,&local_fc);
      } while (iVar7 == 1);
    }
    local_130 = *param_4;
    local_12c = param_4[1];
    local_128 = param_4[2];
    iVar6 = *local_144;
    local_114 = *(undefined4 *)(iVar6 + 0xc);
    local_110 = *(undefined4 *)(iVar6 + 0x10);
    local_10c = *(undefined4 *)(iVar6 + 0x14);
    iVar6 = *local_40;
    local_f0 = *(undefined4 *)(iVar6 + 0xc);
    local_ec = *(undefined4 *)(iVar6 + 0x10);
    local_e8 = *(undefined4 *)(iVar6 + 0x14);
    FUN_004e0c40(param_5,&local_114,&local_114,1);
    FUN_004e0dd0(&local_114,&local_f0,&local_114,1);
    iVar6 = *local_144;
    local_f0 = *(undefined4 *)(iVar6 + 0x18);
    local_ec = *(undefined4 *)(iVar6 + 0x1c);
    local_e8 = *(undefined4 *)(iVar6 + 0x20);
    iVar6 = *local_40;
    local_60 = *(undefined4 *)(iVar6 + 0x18);
    local_5c = *(undefined4 *)(iVar6 + 0x1c);
    local_58 = *(undefined4 *)(iVar6 + 0x20);
    FUN_004e0c40(param_5,&local_f0,&local_f0,1);
    FUN_004e0dd0(&local_f0,&local_60,&local_f0,1);
    FUN_004ad6d0(local_144);
    FUN_004e23b0(&local_114,&local_114,1);
    FUN_004e23b0(&local_f0,&local_f0,1);
    iVar6 = FUN_004e7290(&local_114,&local_f0);
    iVar7 = 6;
    puVar9 = &local_114;
    if (iVar6 != 1) {
      puVar9 = &local_f0;
    }
    puVar11 = local_18;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    iVar6 = FUN_004e7290(local_18,param_6);
    if (iVar6 == 0) {
      FUN_004ad6d0(uVar3);
      FUN_004ad6d0(local_40);
      FUN_004ad6d0(uVar2);
      return 1;
    }
    if (9 < local_118) {
      FUN_004ad6d0(uVar3);
      FUN_004ad6d0(local_40);
      FUN_004ad6d0(uVar2);
      iVar6 = FUN_0052f820();
      if (iVar6 == 0) {
        return 1;
      }
      FUN_004e5630(1,param_3);
      return 0;
    }
    iVar6 = *piVar1;
    local_118 = local_118 + 1;
    puVar9 = (undefined4 *)*local_40;
    *puVar9 = *(undefined4 *)(iVar6 + 0x18);
    puVar9[1] = *(undefined4 *)(iVar6 + 0x1c);
    puVar9[2] = *(undefined4 *)(iVar6 + 0x20);
    iVar6 = *local_40;
    puVar9 = (undefined4 *)*piVar1;
    *(undefined4 *)(iVar6 + 0xc) = *puVar9;
    *(undefined4 *)(iVar6 + 0x10) = puVar9[1];
    *(undefined4 *)(iVar6 + 0x14) = puVar9[2];
    iVar6 = *piVar1;
    iVar7 = *local_40;
    *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar6 + 0x10);
    *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar6 + 0x14);
    iVar6 = *piVar1;
    *(undefined4 *)(iVar6 + 0x30) = local_130;
    *(undefined4 *)(iVar6 + 0x34) = local_12c;
    *(undefined4 *)(iVar6 + 0x38) = local_128;
    iVar6 = FUN_004c08b0(param_1,param_2,param_3,local_c0,local_90);
    uVar2 = local_b8;
    uVar3 = local_88;
  }
  ppiVar10 = local_d8;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_3 = *ppiVar10;
    ppiVar10 = ppiVar10 + 1;
    param_3 = param_3 + 1;
  }
LAB_004c1c90:
  FUN_004ad6d0(local_134);
  FUN_004ad6d0(local_40);
  FUN_004ad6d0(local_138);
  return 0;
}

