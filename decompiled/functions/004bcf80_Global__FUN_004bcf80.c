// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004bcf80
// entry: 004bcf80  size: 4660


bool FUN_004bcf80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int local_1d0;
  int local_1cc;
  int *local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  uint local_1a8;
  undefined4 local_1a4 [6];
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c [6];
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_c8 [8];
  int *local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int *local_98;
  int *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_0052f840();
  piVar1 = (int *)param_1[2];
  local_94 = (int *)param_2[2];
  FUN_004e5780(&local_134);
  local_110 = local_134;
  local_10c = local_130;
  local_108 = local_12c;
  local_14c[0] = local_134;
  local_14c[1] = local_130;
  local_14c[2] = local_12c;
  local_1c0 = local_134;
  local_1bc = local_130;
  local_1b8 = local_12c;
  local_90 = local_134;
  local_8c = local_130;
  local_88 = local_12c;
  local_18c = local_134;
  local_188 = local_130;
  local_184 = local_12c;
  iVar2 = FUN_004e4020(param_1);
  if (iVar2 != 0) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return false;
  }
  iVar2 = FUN_004e4020(param_2);
  if (iVar2 != 0) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    return false;
  }
  iVar2 = FUN_004e4000(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_004e4000(param_2), iVar2 == 0)) {
    iVar2 = FUN_004e4020(param_1);
    if (iVar2 != 0) {
      return false;
    }
    iVar2 = FUN_004e4000(param_1);
    if (iVar2 == 0) {
      uVar11 = (uint)*(ushort *)((int)param_1 + 2);
      if (*(ushort *)((int)param_1 + 2) < 4) {
        uVar12 = 3;
      }
      else if (uVar11 == *(ushort *)((int)param_2 + 2)) {
        piVar3 = (int *)FUN_004ad630(0x30);
        local_98 = piVar3;
        if (piVar3 != (int *)0x0) {
          FUN_004f9690(param_3,piVar3,4,1);
          piVar4 = (int *)FUN_004ad630(0x24);
          if (piVar4 == (int *)0x0) {
            FUN_004e5630(4,param_3);
            FUN_004ad6d0(piVar3);
            return false;
          }
          FUN_004f96c0(local_c8,piVar4,3,1,1);
          local_15c = (uVar11 * 3 & 0x3fff) << 2;
          piVar5 = (int *)FUN_004ad630(local_15c);
          if (piVar5 == (int *)0x0) {
            FUN_004e5630(4,param_3);
            FUN_004ad6d0(piVar3);
            FUN_004ad6d0(piVar4);
            return false;
          }
          FUN_004f9690(local_78,piVar5,uVar11,1);
          piVar6 = (int *)FUN_004ad630(local_15c);
          if (piVar6 == (int *)0x0) {
            FUN_004e5630(4,param_3);
            FUN_004ad6d0(piVar3);
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(piVar5);
            return false;
          }
          FUN_004f9690(local_60,piVar6,uVar11,1);
          if (uVar11 != 0) {
            local_1d0 = 0;
            local_1a8 = uVar11;
            do {
              puVar10 = (undefined4 *)(local_1d0 + *piVar1);
              puVar7 = (undefined4 *)(local_1d0 + *piVar5);
              *puVar7 = *puVar10;
              puVar7[1] = puVar10[1];
              puVar7[2] = puVar10[2];
              puVar10 = (undefined4 *)(local_1d0 + *local_94);
              puVar7 = (undefined4 *)(local_1d0 + *piVar6);
              *puVar7 = *puVar10;
              puVar7[1] = puVar10[1];
              puVar7[2] = puVar10[2];
              local_1d0 = local_1d0 + 0xc;
              local_1a8 = local_1a8 - 1;
            } while (local_1a8 != 0);
          }
          iVar2 = FUN_004c8e60(uVar11,piVar5,piVar6);
          if (iVar2 != 0) {
            FUN_004e5630(iVar2,param_3);
            FUN_004ad6d0(piVar3);
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(piVar6);
            return false;
          }
          puVar7 = (undefined4 *)*piVar5;
          local_1cc = 1;
          local_1a8 = 0;
          local_1d0 = 0xc;
          local_128 = *puVar7;
          local_124 = puVar7[1];
          local_120 = puVar7[2];
          do {
            if ((int)(uVar11 - 1) <= (int)local_1a8) {
              if (local_1cc < 4) {
                uVar12 = 3;
                goto LAB_004bd415;
              }
              break;
            }
            puVar7 = (undefined4 *)(local_1d0 + *piVar5);
            local_48 = *puVar7;
            local_44 = puVar7[1];
            local_40 = puVar7[2];
            iVar2 = FUN_004e71d0(&local_128,&local_48);
            if (iVar2 != 1) {
              local_1cc = local_1cc + 1;
              puVar7 = (undefined4 *)(local_1d0 + *piVar5);
              local_128 = *puVar7;
              local_124 = puVar7[1];
              local_120 = puVar7[2];
            }
            local_1a8 = local_1a8 + 1;
            local_1d0 = local_1d0 + 0xc;
          } while (local_1cc < 4);
          iVar2 = FUN_0052f820();
          if (iVar2 != 0) {
            FUN_004ad6d0(piVar3);
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(piVar6);
            FUN_004e5630(1,param_3);
            return false;
          }
          iVar2 = FUN_004ad630(local_15c);
          if (iVar2 == 0) {
            uVar12 = 4;
LAB_004bd415:
            FUN_004e5630(uVar12,param_3);
            FUN_004ad6d0(piVar3);
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(piVar6);
            return false;
          }
          FUN_004f9690(&local_b0,iVar2,uVar11,1);
          iVar8 = FUN_004ad630(local_15c);
          if (iVar8 == 0) {
            FUN_004e5630(4,param_3);
            FUN_004ad6d0(piVar3);
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(piVar6);
            FUN_004ad6d0(iVar2);
            return false;
          }
          FUN_004f9690(local_30,iVar8,uVar11,1);
          iVar9 = FUN_0052f820();
          if (iVar9 == 0) {
            iVar9 = FUN_004be1c0(local_78,&local_b0,local_30,&local_90,&local_18c);
            if (iVar9 == 0) {
              *param_3 = local_b0;
              param_3[1] = local_ac;
              param_3[2] = local_a8;
              FUN_004ad6d0(piVar3);
              FUN_004ad6d0(piVar4);
              FUN_004ad6d0(piVar5);
              FUN_004ad6d0(piVar6);
              FUN_004ad6d0(iVar2);
              FUN_004ad6d0(iVar8);
              return false;
            }
            iVar9 = FUN_0052f820();
            if (iVar9 == 0) {
              iVar9 = FUN_004be430(local_78,local_60,&local_1c0,&local_110,local_14c);
              if (iVar9 == 0) {
                *param_3 = local_1c0;
                param_3[1] = local_1bc;
                param_3[2] = local_1b8;
                FUN_004ad6d0(piVar3);
              }
              else {
                iVar9 = FUN_004e71d0(&local_1c0,&local_134);
                if (iVar9 == 1) {
                  FUN_004e5070(4,&local_128);
                  FUN_004e0c40(&local_128,local_14c,&local_1c0,0);
                }
                else {
                  if (iVar9 == -1) {
                    *param_3 = local_1c0;
                    param_3[1] = local_1bc;
                    param_3[2] = local_1b8;
                    FUN_004ad6d0(piVar3);
                    goto LAB_004bded3;
                  }
                  iVar9 = FUN_004bec40(local_78,local_60,&local_b0,local_30,&local_1c0,&local_90,
                                       &local_18c,local_c8);
                  piVar1 = local_c0;
                  if (iVar9 == 0) {
                    *param_3 = local_1c0;
                    param_3[1] = local_1bc;
                    param_3[2] = local_1b8;
                    FUN_004ad6d0(piVar3);
                    FUN_004ad6d0(local_c0);
                    FUN_004ad6d0(piVar5);
                    FUN_004ad6d0(piVar6);
                    FUN_004ad6d0(iVar2);
                    FUN_004ad6d0(iVar8);
                    return false;
                  }
                  local_16c = local_1b8;
                  local_1a4[2] = local_1b8;
                  local_174 = local_1c0;
                  local_1a4[0] = local_1c0;
                  local_1c8 = local_c0;
                  local_d8 = local_184;
                  local_f0 = local_184;
                  local_150 = local_184;
                  local_e0 = local_18c;
                  local_f8 = local_18c;
                  local_158 = local_18c;
                  local_170 = local_1bc;
                  local_1a4[1] = local_1bc;
                  local_dc = local_188;
                  local_f4 = local_188;
                  local_154 = local_188;
                  local_1c4 = 0;
                  iVar9 = FUN_004e7290(&local_18c,&local_134);
                  if (iVar9 != 1) {
                    if (iVar9 == -1) {
                      *param_3 = local_18c;
                      param_3[1] = local_188;
                      param_3[2] = local_184;
                      FUN_004ad6d0(piVar3);
                      FUN_004ad6d0(piVar1);
                      FUN_004ad6d0(piVar5);
                      FUN_004ad6d0(piVar6);
                      FUN_004ad6d0(iVar2);
                      FUN_004ad6d0(iVar8);
                      return false;
                    }
                    local_174 = local_1a4[0];
                    local_170 = local_1a4[1];
                    local_16c = local_1a4[2];
                    local_e0 = local_f8;
                    local_dc = local_f4;
                    local_d8 = local_f0;
                    FUN_004e0880(local_1a4,local_14c,local_1a4,0);
                    local_1c0 = local_1a4[0];
                    local_1bc = local_1a4[1];
                    local_1b8 = local_1a4[2];
                    iVar9 = FUN_004bec40(local_78,local_60,&local_b0,local_30,&local_1c0,&local_90,
                                         &local_18c,local_c8);
                    local_1c8 = local_c0;
                    do {
                      if (iVar9 == 0) {
                        *param_3 = local_1c0;
                        param_3[1] = local_1bc;
                        param_3[2] = local_1b8;
                        FUN_004ad6d0(piVar3);
                        FUN_004ad6d0(local_1c8);
                        FUN_004ad6d0(piVar5);
                        FUN_004ad6d0(piVar6);
                        FUN_004ad6d0(iVar2);
                        FUN_004ad6d0(iVar8);
                        return false;
                      }
                      local_f8 = local_18c;
                      local_f4 = local_188;
                      local_f0 = local_184;
                      local_c0 = local_1c8;
                      iVar9 = FUN_004e7210(&local_18c,&local_158);
                      if (iVar9 == -1) {
LAB_004bdcfb:
                        FUN_004e5630(3,param_3);
                        FUN_004ad6d0(piVar3);
                        FUN_004ad6d0(local_1c8);
                        FUN_004ad6d0(piVar5);
                        FUN_004ad6d0(piVar6);
                        FUN_004ad6d0(iVar2);
                        FUN_004ad6d0(iVar8);
                        return false;
                      }
                      if (iVar9 == 1) {
                        local_1c4 = 0;
                        local_158 = local_18c;
                        local_154 = local_188;
                        local_150 = local_184;
                      }
                      else {
                        local_1c4 = local_1c4 + 1;
                        if (4 < local_1c4) goto LAB_004bdcfb;
                      }
                      iVar9 = FUN_004e7250(&local_f8,&local_134);
                      if (iVar9 != 1) goto LAB_004bdd43;
                      local_174 = local_1a4[0];
                      local_170 = local_1a4[1];
                      local_16c = local_1a4[2];
                      local_e0 = local_f8;
                      local_dc = local_f4;
                      local_d8 = local_f0;
                      FUN_004e0880(local_1a4,local_14c,local_1a4,0);
                      local_1c0 = local_1a4[0];
                      local_1bc = local_1a4[1];
                      local_1b8 = local_1a4[2];
                      iVar9 = FUN_004bec40(local_78,local_60,&local_b0,local_30,&local_1c0,&local_90
                                           ,&local_18c,local_c8);
                      local_1c8 = local_c0;
                    } while( true );
                  }
                  do {
                    local_1a4[0] = local_174;
                    local_1a4[1] = local_170;
                    local_1a4[2] = local_16c;
                    local_f8 = local_e0;
                    local_f4 = local_dc;
                    local_f0 = local_d8;
                    FUN_004e0b00(&local_174,local_14c,&local_174,0);
                    iVar9 = FUN_004e7310(&local_174,local_14c);
                    if (iVar9 == 1) {
                      local_1c0 = local_174;
                      local_1bc = local_170;
                      local_1b8 = local_16c;
                      iVar9 = FUN_004bec40(local_78,local_60,&local_b0,local_30,&local_1c0,&local_90
                                           ,&local_18c,local_c8);
                      piVar1 = local_c0;
                      if (iVar9 == 0) {
                        *param_3 = local_1c0;
                        param_3[1] = local_1bc;
                        param_3[2] = local_1b8;
                        FUN_004ad6d0(piVar3);
                        local_1c8 = local_c0;
                        goto LAB_004bde1e;
                      }
                      local_e0 = local_18c;
                      local_dc = local_188;
                      local_1c8 = local_c0;
                      local_d8 = local_184;
                      iVar9 = FUN_004e7210(&local_18c,&local_158);
                      if (iVar9 == -1) {
LAB_004bd9dc:
                        FUN_004e5630(3,param_3);
                        FUN_004ad6d0(piVar3);
                        FUN_004ad6d0(piVar1);
                        FUN_004ad6d0(piVar5);
                        FUN_004ad6d0(piVar6);
                        FUN_004ad6d0(iVar2);
                        FUN_004ad6d0(iVar8);
                        return false;
                      }
                      if (iVar9 == 1) {
                        local_1c4 = 0;
                        local_158 = local_18c;
                        local_154 = local_188;
                        local_150 = local_184;
                      }
                      else {
                        local_1c4 = local_1c4 + 1;
                        if (4 < local_1c4) goto LAB_004bd9dc;
                      }
                    }
                    iVar9 = FUN_004e7290(&local_e0,&local_134);
                  } while ((iVar9 == 1) && (iVar9 = FUN_004e7310(&local_174,local_14c), iVar9 == 1))
                  ;
LAB_004bdd43:
                  iVar9 = FUN_004e7250(&local_174,local_14c);
                  if (iVar9 == 1) {
                    local_1c0 = local_14c[0];
                    local_1bc = local_14c[1];
                    local_1b8 = local_14c[2];
                  }
                  else {
                    iVar9 = FUN_004bf760(local_78,local_60,&local_b0,local_30,&local_174,local_1a4,
                                         &local_110,local_14c,&local_e0,&local_f8,&local_1c0,
                                         &local_90,&local_18c,local_c8);
                    if (iVar9 == 0) {
                      *param_3 = local_b0;
                      param_3[1] = local_ac;
                      param_3[2] = local_a8;
                      FUN_004ad6d0(piVar3);
LAB_004bde1e:
                      FUN_004ad6d0(local_1c8);
                      FUN_004ad6d0(piVar5);
                      FUN_004ad6d0(piVar6);
                      FUN_004ad6d0(iVar2);
                      FUN_004ad6d0(iVar8);
                      return false;
                    }
                    local_1c0 = local_1a4[0];
                    local_1bc = local_1a4[1];
                    local_1b8 = local_1a4[2];
                  }
                }
                iVar9 = FUN_004bec40(local_78,local_60,&local_b0,local_30,&local_1c0,&local_90,
                                     &local_18c,local_c8);
                if (iVar9 != 0) {
                  puVar7 = (undefined4 *)*local_c0;
                  local_174 = *puVar7;
                  local_170 = puVar7[1];
                  local_16c = puVar7[2];
                  iVar9 = *local_c0;
                  local_1a4[0] = *(undefined4 *)(iVar9 + 0xc);
                  local_1a4[1] = *(undefined4 *)(iVar9 + 0x10);
                  local_1a4[2] = *(undefined4 *)(iVar9 + 0x14);
                  iVar9 = *local_c0;
                  local_110 = *(undefined4 *)(iVar9 + 0x18);
                  local_10c = *(undefined4 *)(iVar9 + 0x1c);
                  local_108 = *(undefined4 *)(iVar9 + 0x20);
                  iVar9 = FUN_004e71d0(local_1a4,&local_134);
                  if ((iVar9 == 1) && (iVar9 = FUN_004e71d0(&local_110,&local_134), iVar9 == 1)) {
                    puVar7 = local_1a4;
                    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *puVar7 = 0;
                      puVar7 = puVar7 + 1;
                    }
                    puVar7 = local_14c;
                    for (iVar9 = 6; piVar3 = local_98, iVar9 != 0; iVar9 = iVar9 + -1) {
                      *puVar7 = 0;
                      puVar7 = puVar7 + 1;
                    }
                  }
                  else {
                    local_128 = local_110;
                    local_124 = local_10c;
                    local_120 = local_108;
                    local_11c = local_1a4[0];
                    local_118 = local_1a4[1];
                    local_114 = local_1a4[2];
                    FUN_004e4120(&local_128,&local_11c,&local_128);
                    FUN_004e28c0(&local_128,local_14c,1,1);
                    FUN_004e2770(&local_110,&local_48,1);
                    FUN_004e2770(local_1a4,local_18,1);
                    FUN_004e0880(&local_48,local_18,&local_48,1);
                    FUN_004e1790(&local_48,local_1a4,1);
                  }
                  local_110 = local_1c0;
                  local_10c = local_1bc;
                  local_108 = local_1b8;
                  puVar7 = (undefined4 *)*piVar3;
                  *puVar7 = local_1a4[0];
                  puVar7[1] = local_1a4[1];
                  puVar7[2] = local_1a4[2];
                  iVar9 = *piVar3;
                  *(undefined4 *)(iVar9 + 0xc) = local_1c0;
                  *(undefined4 *)(iVar9 + 0x10) = local_1bc;
                  *(undefined4 *)(iVar9 + 0x14) = local_1b8;
                  iVar9 = *piVar3;
                  *(undefined4 *)(iVar9 + 0x18) = local_14c[0];
                  *(undefined4 *)(iVar9 + 0x1c) = local_14c[1];
                  *(undefined4 *)(iVar9 + 0x20) = local_14c[2];
                  iVar9 = *piVar3;
                  *(undefined4 *)(iVar9 + 0x24) = local_174;
                  *(undefined4 *)(iVar9 + 0x28) = local_170;
                  *(undefined4 *)(iVar9 + 0x2c) = local_16c;
                  FUN_004ad6d0(local_c0);
                  FUN_004ad6d0(piVar5);
                  FUN_004ad6d0(piVar6);
                  FUN_004ad6d0(iVar2);
                  FUN_004ad6d0(iVar8);
                  iVar2 = FUN_0052f820();
                  if (iVar2 == 0) {
                    FUN_004e3e70(param_3,param_3);
                    iVar2 = FUN_004e4020(param_3);
                    return iVar2 == 0;
                  }
                  uVar12 = 1;
                  goto LAB_004be19f;
                }
                *param_3 = local_1c0;
                param_3[1] = local_1bc;
                param_3[2] = local_1b8;
                FUN_004ad6d0(piVar3);
                piVar4 = local_c0;
              }
LAB_004bded3:
              FUN_004ad6d0(piVar4);
              FUN_004ad6d0(piVar5);
              FUN_004ad6d0(piVar6);
              FUN_004ad6d0(iVar2);
              FUN_004ad6d0(iVar8);
              return false;
            }
            FUN_004ad6d0(piVar3);
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(piVar6);
            FUN_004ad6d0(iVar2);
          }
          else {
            FUN_004ad6d0(piVar3);
            FUN_004ad6d0(piVar4);
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(piVar6);
            FUN_004ad6d0(iVar2);
          }
          FUN_004ad6d0(iVar8);
          FUN_004e5630(1,param_3);
          return false;
        }
        uVar12 = 4;
      }
      else {
        uVar12 = 9;
      }
      goto LAB_004be19f;
    }
  }
  uVar12 = 0x19;
LAB_004be19f:
  FUN_004e5630(uVar12,param_3);
  return false;
}

