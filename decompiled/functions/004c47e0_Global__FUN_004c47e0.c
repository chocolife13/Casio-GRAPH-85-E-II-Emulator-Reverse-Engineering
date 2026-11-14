// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c47e0
// entry: 004c47e0  size: 2613


undefined4 FUN_004c47e0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
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
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_70 = *(int **)(param_1 + 8);
  local_80 = *(int **)(param_2 + 8);
  piVar4 = (int *)0x0;
  uVar6 = (uint)*(ushort *)(param_1 + 2);
  bVar7 = param_3 != 0;
  if (bVar7) {
    piVar4 = *(int **)(param_3 + 8);
  }
  local_a4 = 0;
  local_d4 = 0;
  local_a0 = 0;
  local_d0 = 0;
  local_9c = 0;
  local_cc = 0;
  local_60 = 0;
  local_c8 = 0;
  local_5c = 0;
  local_c4 = 0;
  local_58 = 0;
  local_c0 = 0;
  local_54 = 0;
  local_48 = 0;
  local_50 = 0;
  local_44 = 0;
  local_4c = 0;
  local_40 = 0;
  iVar1 = FUN_004b8b80(param_1,&local_98,local_18);
  if (iVar1 == 0) {
    *param_4 = local_98;
    param_4[1] = local_94;
    param_4[2] = local_90;
    return 0;
  }
  iVar1 = FUN_004b8b80(param_2,&local_8c,local_c);
  if (iVar1 == 0) {
    *param_4 = local_8c;
    param_4[1] = local_88;
    param_4[2] = local_84;
    return 0;
  }
  FUN_004e9030(&local_98,&local_98,&local_104);
  FUN_004e9030(&local_8c,&local_8c,&local_104);
  if (bVar7) {
    if (piVar4 == (int *)0x0) {
      FUN_004e5630(4,param_4);
      return 0;
    }
    iVar1 = 0;
    if (uVar6 != 0) {
      iVar5 = 0;
      do {
        puVar3 = (undefined4 *)(*local_70 + iVar5);
        local_f8 = *puVar3;
        local_f4 = puVar3[1];
        local_f0 = puVar3[2];
        puVar3 = (undefined4 *)(*local_80 + iVar5);
        local_ec = *puVar3;
        local_e8 = puVar3[1];
        local_e4 = puVar3[2];
        puVar3 = (undefined4 *)(iVar5 + *piVar4);
        local_bc = *puVar3;
        local_b8 = puVar3[1];
        local_b4 = puVar3[2];
        FUN_004e9030(&local_f8,&local_f8,&local_104);
        FUN_004e9030(&local_ec,&local_ec,&local_104);
        FUN_004e9030(&local_bc,&local_bc,&local_104);
        FUN_004e6c30(&local_f8,&local_98,&local_f8);
        FUN_004e6c30(&local_ec,&local_8c,&local_ec);
        FUN_004e6ab0(&local_a4,&local_bc,&local_a4);
        FUN_004e6d00(&local_f8,&local_bc,&local_104);
        FUN_004e6ab0(&local_d4,&local_104,&local_d4);
        FUN_004e6d00(&local_ec,&local_bc,&local_104);
        FUN_004e6ab0(&local_c8,&local_104,&local_c8);
        FUN_004e6d00(&local_f8,&local_ec,&local_104);
        FUN_004e6d00(&local_bc,&local_104,&local_104);
        FUN_004e6ab0(&local_48,&local_104,&local_48);
        FUN_004e6d00(&local_f8,&local_f8,&local_104);
        FUN_004e6d00(&local_104,&local_bc,&local_104);
        FUN_004e6ab0(&local_60,&local_104,&local_60);
        FUN_004e6d00(&local_ec,&local_ec,&local_104);
        FUN_004e6d00(&local_104,&local_bc,&local_104);
        FUN_004e6ab0(&local_54,&local_104,&local_54);
        iVar2 = FUN_0052f820();
        if (iVar2 != 0) goto LAB_004c4bb6;
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar1 < (int)uVar6);
    }
  }
  else if (!bVar7) {
    FUN_004e5070(uVar6,&local_a4);
    iVar5 = 0;
    iVar1 = 0;
    if (uVar6 != 0) {
      do {
        puVar3 = (undefined4 *)(*local_70 + iVar1);
        local_f8 = *puVar3;
        local_f4 = puVar3[1];
        local_f0 = puVar3[2];
        puVar3 = (undefined4 *)(*local_80 + iVar1);
        local_ec = *puVar3;
        local_e8 = puVar3[1];
        local_e4 = puVar3[2];
        FUN_004e9030(&local_f8,&local_f8,&local_104);
        FUN_004e9030(&local_ec,&local_ec,&local_104);
        FUN_004e6c30(&local_f8,&local_98,&local_f8);
        FUN_004e6c30(&local_ec,&local_8c,&local_ec);
        FUN_004e6ab0(&local_d4,&local_f8,&local_d4);
        FUN_004e6ab0(&local_c8,&local_ec,&local_c8);
        FUN_004e6d00(&local_f8,&local_ec,&local_104);
        FUN_004e6ab0(&local_48,&local_104,&local_48);
        FUN_004e6d00(&local_f8,&local_f8,&local_104);
        FUN_004e6ab0(&local_60,&local_104,&local_60);
        FUN_004e6d00(&local_ec,&local_ec,&local_104);
        FUN_004e6ab0(&local_54,&local_104,&local_54);
        iVar2 = FUN_0052f820();
        if (iVar2 != 0) goto LAB_004c4bb6;
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + 0xc;
      } while (iVar5 < (int)uVar6);
    }
  }
  FUN_004e6d00(&local_a4,&local_48,&local_104);
  FUN_004e6d00(&local_d4,&local_c8,&local_f8);
  FUN_004e6c30(&local_104,&local_f8,local_3c);
  FUN_004e6d00(&local_a4,&local_60,&local_104);
  FUN_004e6d00(&local_d4,&local_d4,&local_f8);
  FUN_004e6c30(&local_104,&local_f8,local_30);
  FUN_004e6d00(&local_a4,&local_54,&local_104);
  FUN_004e6d00(&local_c8,&local_c8,&local_f8);
  FUN_004e6c30(&local_104,&local_f8,local_24);
  piVar4 = (int *)FUN_004ad630(0x54);
  if (piVar4 != (int *)0x0) {
    FUN_004f9690(param_4,piVar4,7,1);
    FUN_004e6dd0(local_3c,local_30,&local_7c);
    iVar1 = FUN_004e4020(&local_7c);
    if (iVar1 == 0) {
      FUN_004e6d00(&local_7c,&local_d4,&local_104);
      FUN_004e6c30(&local_c8,&local_104,&local_104);
      FUN_004e6dd0(&local_104,&local_a4,&local_6c);
      local_104 = local_7c;
      local_100 = local_78;
      local_fc = local_74;
      FUN_004e6d00(&local_104,&local_98,&local_104);
      FUN_004e6c30(&local_6c,&local_104,&local_6c);
      FUN_004e6ab0(&local_6c,&local_8c,&local_6c);
      iVar1 = FUN_004e4020(&local_6c);
      if (iVar1 == 0) {
        FUN_004e6d00(local_30,local_24,&local_104);
        FUN_004e7390(&local_104,&local_104);
        FUN_004e6dd0(local_3c,&local_104,&local_e0);
        iVar1 = FUN_004e4020(&local_e0);
        if (iVar1 == 0) {
          if (uVar6 == 2) {
            FUN_004e5780(&local_104);
            iVar1 = FUN_004e7250(&local_e0,&local_104);
            if (iVar1 == 0) {
              FUN_004e57a0(&local_e0);
            }
            else {
              FUN_004e57a0(&local_e0);
              FUN_004e7730(&local_e0,&local_e0);
            }
          }
          FUN_004e57a0(&local_104);
          local_100._0_3_ = CONCAT12(4,(undefined2)local_100);
          FUN_004e7620(&local_e0,&local_f8);
          iVar1 = FUN_004e7250(&local_104,&local_f8);
          if (iVar1 != 1) {
            FUN_004e6d00(local_30,local_24,&local_104);
            FUN_004e6d00(local_3c,local_3c,&local_f8);
            FUN_004e6dd0(&local_f8,&local_104,&local_b0);
            iVar1 = FUN_004e4020(&local_b0);
            if (iVar1 == 0) {
              if (uVar6 == 2) {
                FUN_004e57a0(&local_b0);
              }
              FUN_004e57a0(&local_104);
              local_100._0_3_ = CONCAT12(4,(undefined2)local_100);
              iVar1 = FUN_004e7250(&local_104,&local_b0);
              if (iVar1 != 1) {
                FUN_004e7910(&local_e0,&local_e0);
                FUN_004e7910(&local_b0,&local_b0);
                iVar1 = FUN_004e9680(&local_e0);
                if (iVar1 == 1) {
                  FUN_004e6d00(&local_e0,&local_e0,&local_b0);
                }
                FUN_004e5780(&local_104);
                puVar3 = (undefined4 *)*piVar4;
                *puVar3 = local_7c;
                puVar3[1] = local_78;
                puVar3[2] = local_74;
                iVar1 = *piVar4;
                *(undefined4 *)(iVar1 + 0xc) = local_6c;
                *(undefined4 *)(iVar1 + 0x10) = local_68;
                *(undefined4 *)(iVar1 + 0x14) = local_64;
                iVar1 = *piVar4;
                *(undefined4 *)(iVar1 + 0x18) = local_104;
                *(undefined4 *)(iVar1 + 0x1c) = local_100;
                *(undefined4 *)(iVar1 + 0x20) = local_fc;
                iVar1 = *piVar4;
                *(undefined4 *)(iVar1 + 0x24) = local_104;
                *(undefined4 *)(iVar1 + 0x28) = local_100;
                *(undefined4 *)(iVar1 + 0x2c) = local_fc;
                iVar1 = *piVar4;
                *(undefined4 *)(iVar1 + 0x30) = local_104;
                *(undefined4 *)(iVar1 + 0x34) = local_100;
                *(undefined4 *)(iVar1 + 0x38) = local_fc;
                iVar1 = *piVar4;
                *(undefined4 *)(iVar1 + 0x3c) = local_e0;
                *(undefined4 *)(iVar1 + 0x40) = local_dc;
                *(undefined4 *)(iVar1 + 0x44) = local_d8;
                iVar1 = *piVar4;
                *(undefined4 *)(iVar1 + 0x48) = local_b0;
                *(undefined4 *)(iVar1 + 0x4c) = local_ac;
                *(undefined4 *)(iVar1 + 0x50) = local_a8;
                FUN_004e56c0(param_4,param_4);
                return 1;
              }
            }
          }
        }
      }
    }
    FUN_004e5630(3,param_4);
    FUN_004ad6d0(piVar4);
    return 0;
  }
  uVar8 = 4;
LAB_004c4bc0:
  FUN_004e5630(uVar8,param_4);
  return 0;
LAB_004c4bb6:
  uVar8 = 1;
  goto LAB_004c4bc0;
}

