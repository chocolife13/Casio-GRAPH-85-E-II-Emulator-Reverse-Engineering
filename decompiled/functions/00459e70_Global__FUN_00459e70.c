// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00459e70
// entry: 00459e70  size: 2262


int FUN_00459e70(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 local_1c4;
  uint local_1c0;
  uint local_1bc;
  undefined1 local_1b8 [12];
  undefined1 local_1ac [12];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 *local_194;
  undefined4 local_190;
  uint local_18c;
  uint local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178 [12];
  undefined4 local_16c;
  uint local_168;
  uint local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  uint local_144;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  uint local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_118 [12];
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [12];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_130);
  FUN_004e57a0(local_178);
  FUN_004e57c0(local_30);
  FUN_004e5a60(&local_16c);
  FUN_004e5a40(&local_190);
  FUN_004e5a80(&local_148);
  local_d8 = local_130;
  local_cc = local_130;
  local_c0 = local_130;
  local_b4 = local_130;
  local_a8 = local_130;
  local_d4 = local_12c;
  local_c8 = local_12c;
  local_bc = local_12c;
  local_b0 = local_12c;
  local_a4 = local_12c;
  local_d0 = local_128;
  local_c4 = local_128;
  local_b8 = local_128;
  local_ac = local_128;
  local_a0 = local_128;
  local_144 = local_144 & 0xffffff;
  local_140 = local_140 & 0xffffff00;
  local_dc = 1;
  iVar5 = FUN_0045e040(local_3c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                       &local_124,local_6c);
  if (iVar5 == 0) {
    iVar5 = FUN_004e72d0(local_3c,local_30);
    if (iVar5 != 0) {
      return 3;
    }
    FUN_004e6d00(local_6c,local_6c,local_1b8);
    uVar6 = FUN_004e6c30(local_3c,local_178,local_1ac,local_48);
    FUN_004e6d00(local_1b8,uVar6);
    iVar5 = FUN_0045e040(local_100,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                         &local_e8,local_60);
    if (iVar5 == 0) {
      iVar5 = FUN_004e7210(local_3c,local_100);
      if (iVar5 != 0) {
        return 9;
      }
      FUN_004e6d00(local_60,local_60,local_1b8);
      uVar6 = FUN_004e6c30(local_100,local_178,local_1ac,local_c);
      FUN_004e6d00(local_1b8,uVar6);
      iVar5 = FUN_0045e3c0(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                           *(undefined4 *)(param_2 + 0x10),local_124,local_120,local_11c,local_e8,
                           local_e4,local_e0,local_118);
      if (iVar5 == 0) {
        iVar5 = FUN_004e7250(local_48,local_178);
        if (iVar5 != 0) {
          FUN_004e6d00(local_48,&local_190,local_1ac);
          uVar6 = FUN_004e7620(local_118,local_1b8,local_1ac);
          iVar5 = FUN_004e7290(uVar6);
          if (iVar5 != 0) {
            return 3;
          }
        }
        FUN_004e6dd0(local_118,local_48,&local_154);
        iVar5 = FUN_004e4020(&local_154);
        if (iVar5 == 0) {
          uVar6 = FUN_004e6d00(&local_154,&local_124,local_1b8,&local_10c);
          FUN_004e6c30(&local_e8,uVar6);
          iVar5 = FUN_004e4020(&local_10c);
          if (iVar5 == 0) {
            uVar6 = FUN_004e6c30(local_100,local_178,local_1b8,local_6c,local_1ac);
            FUN_004e6d00(uVar6);
            uVar6 = FUN_004e6d00(local_1ac,local_60,local_1b8,&local_184);
            FUN_004e6dd0(local_118,uVar6);
            iVar5 = FUN_004e4020(&local_184);
            if (iVar5 == 0) {
              FUN_004e6c30(local_100,local_30,&local_1a0);
              uVar6 = FUN_004e6d00(&local_154,local_118,local_1b8,local_1ac);
              FUN_004e6c30(local_c,uVar6);
              uVar6 = FUN_004e6dd0(local_1ac,&local_1a0,local_1b8,&local_f4);
              FUN_004e7390(uVar6);
              iVar5 = FUN_004e4020(&local_f4);
              if (iVar5 == 0) {
                FUN_004e6d00(&local_184,&local_184,&local_13c);
                iVar5 = FUN_004e4020(&local_13c);
                if (iVar5 == 0) {
                  uVar6 = FUN_004e7390(&local_1a0,local_1ac,local_1b8);
                  FUN_004e6d00(&local_184,uVar6);
                  uVar6 = FUN_004e6c30(local_178,&local_13c,local_24,local_1ac);
                  FUN_004e7390(uVar6);
                  FUN_004e6d00(&local_190,local_1ac,local_18);
                  uVar6 = FUN_004e7620(local_1b8,local_24,local_18);
                  iVar5 = FUN_004e7310(uVar6);
                  if (iVar5 == 0) {
                    FUN_004e6dd0(local_1b8,local_1ac,&local_1c4);
                  }
                  else {
                    local_1c4 = local_148;
                    local_1c0 = local_144;
                    local_1bc = local_140;
                  }
                  iVar5 = FUN_004e4020(&local_1c4);
                  if (iVar5 == 0) {
                    local_194 = (undefined4 *)(param_2 + 0x14);
                    puVar7 = (undefined4 *)(param_2 + 0x2c);
                    puVar1 = (undefined4 *)(param_2 + 0x38);
                    puVar2 = (undefined4 *)(param_2 + 0x44);
                    *local_194 = local_1c4;
                    *(uint *)(param_2 + 0x18) = local_1c0;
                    *(uint *)(param_2 + 0x1c) = local_1bc;
                    *puVar7 = local_1a0;
                    *(undefined4 *)(param_2 + 0x30) = local_19c;
                    *(undefined4 *)(param_2 + 0x34) = local_198;
                    *puVar1 = local_10c;
                    *(undefined4 *)(param_2 + 0x3c) = local_108;
                    *(undefined4 *)(param_2 + 0x40) = local_104;
                    *puVar2 = local_154;
                    *(undefined4 *)(param_2 + 0x48) = local_150;
                    *(undefined4 *)(param_2 + 0x4c) = local_14c;
                    *(undefined4 *)(param_2 + 0x50) = local_f4;
                    *(undefined4 *)(param_2 + 0x54) = local_f0;
                    *(undefined4 *)(param_2 + 0x58) = local_ec;
                    *(undefined4 *)(param_2 + 0x5c) = local_184;
                    *(undefined4 *)(param_2 + 0x60) = local_180;
                    *(undefined4 *)(param_2 + 100) = local_17c;
                    *(undefined4 *)(param_2 + 0x68) = local_13c;
                    *(undefined4 *)(param_2 + 0x6c) = local_138;
                    *(undefined4 *)(param_2 + 0x70) = local_134;
                    FUN_004e7910(local_194,local_194);
                    FUN_004e7910(puVar7,puVar7);
                    FUN_004e7910(puVar1,puVar1);
                    FUN_004e7910(puVar2,puVar2);
                    FUN_004e7910(param_2 + 0x50,param_2 + 0x50);
                    iVar3 = param_2 + 0x5c;
                    FUN_004e7910(iVar3,iVar3);
                    iVar4 = param_2 + 0x68;
                    FUN_004e7910(iVar4,iVar4);
                    local_a8 = local_1a0;
                    local_a4 = local_19c;
                    local_a0 = local_198;
                    if (*(int *)(param_2 + 4) == 0) {
                      uVar6 = FUN_004e7620(&local_1c4,&local_54,&local_cc);
                      FUN_004e7730(uVar6);
                      local_c0 = local_54;
                      local_bc = local_50;
                      local_b8 = local_4c;
                      iVar5 = FUN_00454b60(0,&local_dc);
                      if (iVar5 != 0) {
                        return iVar5;
                      }
                      FUN_004e6c30(local_178,&local_90,&local_160);
                    }
                    else {
                      if (*(int *)(param_2 + 4) == 1) {
                        local_cc = local_16c;
                        local_c8 = local_168;
                        local_c4 = local_164;
                        local_c0 = local_1c4;
                        local_bc = local_1c0;
                        local_b8 = local_1bc;
                      }
                      else {
                        local_cc = local_1c4;
                        local_c8 = local_1c0;
                        local_c4 = local_1bc;
                        local_c0 = local_190;
                        local_bc = local_18c;
                        local_b8 = local_188;
                      }
                      iVar5 = FUN_00454b60(0,&local_dc);
                      if (iVar5 != 0) {
                        return iVar5;
                      }
                      local_160 = local_90;
                      local_15c = local_8c;
                      local_158 = local_88;
                    }
                    puVar7 = (undefined4 *)(param_2 + 0x20);
                    *puVar7 = local_160;
                    *(undefined4 *)(param_2 + 0x24) = local_15c;
                    *(undefined4 *)(param_2 + 0x28) = local_158;
                    FUN_004e7910(puVar7,puVar7);
                    iVar5 = FUN_004518b0(puVar7);
                    if (iVar5 == 0) {
                      iVar5 = FUN_004e71d0(iVar4,local_178);
                      if (iVar5 != 0) {
                        iVar5 = FUN_004e7290(iVar3,&local_130);
                        if (iVar5 != 0) {
                          *local_194 = local_190;
                          local_194[1] = local_18c;
                          local_194[2] = local_188;
                          return 0;
                        }
                        iVar5 = FUN_004e7250(iVar3,&local_130);
                        if (iVar5 != 0) {
                          *local_194 = local_16c;
                          local_194[1] = local_168;
                          local_194[2] = local_164;
                        }
                      }
                      iVar5 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar5;
}

