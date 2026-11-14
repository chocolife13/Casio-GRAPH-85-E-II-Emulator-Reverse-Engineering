// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004badc0
// entry: 004badc0  size: 5608


undefined4 FUN_004badc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int *piVar11;
  short sVar12;
  undefined4 *puVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  bool bVar20;
  int *local_cc;
  int *local_c8;
  int *local_c4;
  int local_c0;
  uint local_bc;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  uint local_a4;
  int *local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
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
  uint local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_bc = 1;
  uVar15 = *(ushort *)(param_1 + 2);
  sVar12 = 0;
  FUN_0052f840();
  iVar1 = FUN_004e4000(param_1);
  if ((iVar1 != 0) || (iVar1 = FUN_004e4000(param_2), iVar1 != 0)) {
    uVar2 = FUN_004b8b60(param_4);
    return uVar2;
  }
  if ((param_3 != 0) && (iVar1 = FUN_004e4000(param_3), iVar1 != 0)) {
    uVar2 = FUN_004b8b60(param_4);
    return uVar2;
  }
  if (uVar15 != *(ushort *)(param_2 + 2)) {
    uVar2 = FUN_00501e90(param_4);
    return uVar2;
  }
  if ((param_3 != 0) && (uVar15 != *(ushort *)(param_3 + 2))) {
    uVar2 = FUN_00501e90(param_4);
    return uVar2;
  }
  if (uVar15 < 3) {
    uVar2 = FUN_00501ed0(param_4);
    return uVar2;
  }
  piVar11 = *(int **)(param_1 + 8);
  piVar17 = (int *)0x0;
  piVar18 = *(int **)(param_2 + 8);
  local_c4 = (int *)0x0;
  local_a0 = piVar11;
  if (param_3 != 0) {
    local_c4 = *(int **)(param_3 + 8);
    if (local_c4 == (int *)0x0) {
      uVar2 = FUN_00501ef0(param_4);
      return uVar2;
    }
    sVar12 = 0;
    uVar3 = (uint)uVar15;
    if (uVar15 != 0) {
      pcVar9 = (char *)*local_c4;
      sVar12 = 0;
      do {
        if (*pcVar9 == '\0') {
          sVar12 = sVar12 + 1;
        }
        pcVar9 = pcVar9 + 0xc;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar15 = uVar15 - sVar12;
    if (uVar15 < 3) {
      uVar2 = FUN_00501ed0(param_4);
      return uVar2;
    }
    piVar17 = (int *)FUN_004ad630((uint)uVar15 * 0xc);
    if (piVar17 == (int *)0x0) {
      uVar2 = FUN_00501ef0(param_4);
      return uVar2;
    }
  }
  local_a8 = (int *)(uint)uVar15;
  iVar1 = (int)local_a8 * 0xc;
  piVar4 = (int *)FUN_004ad630(iVar1);
  if (piVar4 == (int *)0x0) {
    if (param_3 != 0) {
      FUN_004ad6d0(piVar17);
    }
    uVar2 = FUN_00501ef0(param_4);
    return uVar2;
  }
  if (piVar11 == piVar18) {
    piVar5 = piVar4;
    if (param_3 == 0) {
      if (0 < (int)local_a8) {
        iVar1 = 0;
        local_c8 = local_a8;
        do {
          puVar13 = (undefined4 *)(iVar1 + *piVar11);
          puVar10 = (undefined4 *)(iVar1 + *piVar4);
          iVar1 = iVar1 + 0xc;
          *puVar10 = *puVar13;
          puVar10[1] = puVar13[1];
          puVar10[2] = puVar13[2];
          local_c8 = (int *)((int)local_c8 + -1);
        } while (local_c8 != (int *)0x0);
      }
    }
    else {
      if ((local_c4 == (int *)0x0) || (piVar17 == (int *)0x0)) {
        FUN_004ad6d0(local_c4);
        FUN_004ad6d0(piVar17);
        FUN_004ad6d0(piVar4);
        FUN_004ad6d0(0);
        uVar2 = FUN_00501ef0(param_4);
        return uVar2;
      }
      local_c8 = (int *)(uint)(ushort)(uVar15 + sVar12);
      if (local_c8 != (int *)0x0) {
        iVar6 = 0;
        iVar1 = 0;
        do {
          if (*(char *)(iVar1 + *local_c4) != '\0') {
            puVar10 = (undefined4 *)(iVar1 + *piVar11);
            puVar13 = (undefined4 *)(iVar6 + *piVar4);
            *puVar13 = *puVar10;
            puVar13[1] = puVar10[1];
            puVar13[2] = puVar10[2];
            puVar10 = (undefined4 *)(iVar1 + *local_c4);
            puVar13 = (undefined4 *)(*piVar17 + iVar6);
            iVar6 = iVar6 + 0xc;
            *puVar13 = *puVar10;
            puVar13[1] = puVar10[1];
            puVar13[2] = puVar10[2];
            piVar11 = local_a0;
          }
          iVar1 = iVar1 + 0xc;
          local_c8 = (int *)((int)local_c8 - 1);
        } while (local_c8 != (int *)0x0);
      }
      uVar15 = (uVar15 + sVar12) - sVar12;
    }
LAB_004bb2c5:
    if (param_3 != 0) {
      if (piVar17 == (int *)0x0) {
        FUN_004ad6d0(piVar4);
        uVar2 = FUN_00501ef0(param_4);
        return uVar2;
      }
      iVar1 = FUN_004c53d0(piVar17,piVar17,uVar15,&local_40);
      if (iVar1 != 0) goto LAB_004bbd42;
      if (local_bc == 3) {
        local_a8 = (int *)(uint)uVar15;
        iVar1 = FUN_004c8b00(local_a8,piVar4,piVar5,piVar17);
      }
      else {
        local_a8 = (int *)(uint)uVar15;
        iVar1 = FUN_004c8e60(local_a8,piVar4,piVar17);
      }
      if (iVar1 != 0) {
        uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,iVar1);
        return uVar2;
      }
      uVar14 = local_40 % 3;
      uVar3 = local_40 / 3;
      local_a4 = uVar3 + 1;
      if (uVar14 != 2) {
        local_a4 = uVar3;
      }
      uVar16 = 0;
      local_cc = (int *)0x0;
      bVar20 = local_a4 == 0;
      if (0 < (int)local_a4) {
        local_c0 = 0;
        do {
          iVar1 = FUN_004c55f0(local_c0 + *piVar17);
          uVar16 = uVar16 + iVar1;
          local_cc = (int *)((int)local_cc + 1);
          local_c0 = local_c0 + 0xc;
          bVar20 = uVar16 == local_a4;
        } while ((int)uVar16 < (int)local_a4);
      }
      if (bVar20) {
        iVar1 = 0;
        iVar6 = *piVar4 + (int)local_cc * 0xc;
        do {
          if (*(char *)(iVar6 + iVar1) != *(char *)(iVar6 + -0xc + iVar1)) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 9);
        local_b0 = local_cc;
        local_ac = local_cc;
        if (iVar1 == 9) {
          local_a4 = 0;
          local_9c = FUN_004c55f0(*piVar17 + (int)local_cc * 0xc);
          goto LAB_004bb984;
        }
LAB_004bba5f:
        if (uVar14 == 2) {
          uVar3 = uVar3 + 1;
        }
      }
      else {
        local_b0 = (int *)((int)local_cc + -1);
        local_9c = uVar16 - local_a4;
        local_ac = local_b0;
        iVar1 = FUN_004c55f0(*piVar17 + (int)local_b0 * 0xc);
        local_a4 = iVar1 - local_9c;
LAB_004bb984:
        iVar1 = FUN_004ba900(piVar4,piVar17,local_b0,&local_b0,1,&local_a4);
        if (iVar1 != 0) {
          uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,iVar1);
          return uVar2;
        }
        iVar1 = FUN_004baae0(piVar4,piVar17,local_ac,&local_ac,1,&local_9c,local_a8);
        if (iVar1 != 0) {
          uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,iVar1);
          return uVar2;
        }
        if ((int)(local_a4 - local_9c) < 0) {
          local_cc = (int *)((int)local_b0 + 1);
          goto LAB_004bba5f;
        }
        if (local_a4 != local_9c && -1 < (int)(local_a4 - local_9c)) {
          local_cc = local_ac;
          goto LAB_004bba5f;
        }
        local_cc = local_ac;
        if (uVar14 != 2) goto LAB_004bba5f;
        local_cc = (int *)((int)local_b0 + 1);
        uVar3 = uVar3 + 1;
      }
      uVar16 = 0;
      iVar1 = (int)local_a8 + -1;
      local_a4 = uVar3;
      if (0 < (int)uVar3) {
        local_c0 = iVar1 * 0xc;
        do {
          iVar6 = FUN_004c55f0(local_c0 + *piVar17);
          uVar16 = uVar16 + iVar6;
          iVar1 = iVar1 + -1;
          local_c0 = local_c0 + -0xc;
        } while ((int)uVar16 < (int)local_a4);
      }
      if (uVar16 == local_a4) {
        local_b0 = (int *)(iVar1 + 1);
        iVar1 = 0;
        iVar6 = *piVar4 + (int)local_b0 * 0xc;
        do {
          if (*(char *)(iVar6 + iVar1) != *(char *)(iVar6 + -0xc + iVar1)) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 9);
        piVar18 = local_b0;
        piVar11 = local_a8;
        local_ac = local_b0;
        if (iVar1 == 9) {
          local_a4 = 0;
          local_9c = FUN_004c55f0(*piVar17 + (int)local_b0 * 0xc);
          goto LAB_004bbb31;
        }
      }
      else {
        local_b0 = (int *)(iVar1 + 1);
        local_a4 = uVar16 - local_a4;
        local_ac = local_b0;
        iVar1 = FUN_004c55f0(*piVar17 + (int)local_b0 * 0xc);
        local_9c = iVar1 - local_a4;
LAB_004bbb31:
        iVar1 = FUN_004ba900(piVar4,piVar17,local_b0,&local_b0,0,&local_a4);
        piVar11 = local_a8;
        if (iVar1 != 0) {
          uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,iVar1);
          return uVar2;
        }
        iVar1 = FUN_004baae0(piVar4,piVar17,local_ac,&local_ac,0,&local_9c,local_a8);
        if (iVar1 != 0) {
          uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,iVar1);
          return uVar2;
        }
        if ((int)(local_a4 - local_9c) < 0) {
          piVar18 = (int *)((int)local_b0 + 1);
        }
        else {
          piVar18 = local_ac;
          if ((local_a4 == local_9c || (int)(local_a4 - local_9c) < 0) && (uVar14 != 2)) {
            piVar18 = (int *)((int)local_b0 + 1);
          }
        }
      }
      local_a0 = piVar18;
      if (((local_cc != piVar18) && (local_cc != (int *)0x0)) && (piVar18 != piVar11)) {
        FUN_004bacd0(piVar4,piVar17,0,local_cc,&local_88);
        FUN_004bacd0(piVar4,piVar17,local_cc,piVar18,&local_7c);
        FUN_004bacd0(piVar4,piVar17,piVar18,piVar11,&local_70);
        iVar1 = FUN_004e4020(&local_88);
        if (((iVar1 == 0) && (iVar1 = FUN_004e4020(&local_7c), iVar1 == 0)) &&
           (iVar1 = FUN_004e4020(&local_70), iVar1 == 0)) {
          if (piVar4 == piVar5) {
            local_64 = local_88;
            local_60 = local_84;
            local_5c = local_80;
            local_58 = local_7c;
            local_54 = local_78;
            local_50 = local_74;
            local_4c = local_70;
            local_48 = local_6c;
            local_44 = local_68;
          }
          else {
            piVar7 = (int *)((int)piVar18 - (int)local_cc);
            piVar11 = (int *)((int)piVar11 - (int)piVar18);
            piVar18 = piVar7;
            if ((int)piVar7 < (int)local_cc) {
              piVar18 = local_cc;
            }
            if ((int)piVar18 < (int)piVar11) {
              piVar18 = piVar11;
            }
            piVar8 = (int *)FUN_004ad630((int)piVar18 * 0xc);
            if (piVar8 == (int *)0x0) goto LAB_004bbd32;
            piVar18 = (int *)FUN_004ad630((int)piVar18 * 0xc);
            if (piVar18 == (int *)0x0) {
              FUN_004ad6d0(piVar8);
              uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,3);
              return uVar2;
            }
            if (0 < (int)local_cc) {
              local_c8 = local_cc;
              local_c4 = (int *)0x0;
              do {
                puVar13 = (undefined4 *)(*piVar5 + (int)local_c4);
                puVar10 = (undefined4 *)((int)local_c4 + *piVar8);
                *puVar10 = *puVar13;
                puVar10[1] = puVar13[1];
                puVar10[2] = puVar13[2];
                puVar13 = (undefined4 *)((int)local_c4 + *piVar17);
                puVar10 = (undefined4 *)((int)local_c4 + *piVar18);
                *puVar10 = *puVar13;
                puVar10[1] = puVar13[1];
                puVar10[2] = puVar13[2];
                local_c4 = (int *)((int)local_c4 + 0xc);
                local_c8 = (int *)((int)local_c8 + -1);
              } while (local_c8 != (int *)0x0);
            }
            iVar1 = FUN_004c8e60(local_cc,piVar8,piVar18);
            if (iVar1 != 0) {
              FUN_004ad6d0(piVar8);
              uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,iVar1);
              return uVar2;
            }
            FUN_004bacd0(piVar8,piVar18,0,local_cc,&local_64);
            if ((int)local_cc < (int)local_a0) {
              iVar1 = (int)local_cc * 0xc;
              local_c4 = (int *)0x0;
              local_8c = piVar7;
              do {
                puVar13 = (undefined4 *)(*piVar5 + iVar1);
                puVar10 = (undefined4 *)((int)local_c4 + *piVar8);
                *puVar10 = *puVar13;
                puVar10[1] = puVar13[1];
                puVar10[2] = puVar13[2];
                puVar10 = (undefined4 *)(iVar1 + *piVar17);
                puVar13 = (undefined4 *)((int)local_c4 + *piVar18);
                *puVar13 = *puVar10;
                puVar13[1] = puVar10[1];
                local_c4 = (int *)((int)local_c4 + 0xc);
                puVar13[2] = puVar10[2];
                iVar1 = iVar1 + 0xc;
                local_8c = (int *)((int)local_8c + -1);
              } while (local_8c != (int *)0x0);
            }
            iVar1 = FUN_004c8e60(piVar7,piVar8,piVar18);
            if (iVar1 != 0) {
              FUN_004ad6d0(piVar8);
              uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,iVar1);
              return uVar2;
            }
            FUN_004bacd0(piVar8,piVar18,0,piVar7,&local_58);
            if ((int)local_a0 < (int)local_a8) {
              iVar1 = (int)local_a0 * 0xc;
              local_c0 = 0;
              local_8c = piVar11;
              do {
                puVar10 = (undefined4 *)(iVar1 + *piVar5);
                puVar13 = (undefined4 *)(local_c0 + *piVar8);
                *puVar13 = *puVar10;
                puVar13[1] = puVar10[1];
                puVar13[2] = puVar10[2];
                puVar10 = (undefined4 *)(iVar1 + *piVar17);
                puVar13 = (undefined4 *)(local_c0 + *piVar18);
                *puVar13 = *puVar10;
                puVar13[1] = puVar10[1];
                iVar1 = iVar1 + 0xc;
                puVar13[2] = puVar10[2];
                local_c0 = local_c0 + 0xc;
                local_8c = (int *)((int)local_8c + -1);
              } while (local_8c != (int *)0x0);
            }
            iVar1 = FUN_004c8e60(piVar11,piVar8,piVar18);
            if (iVar1 != 0) {
              FUN_004ad6d0(piVar8);
              uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,iVar1);
              return uVar2;
            }
            FUN_004bacd0(piVar8,piVar18,0,piVar11,&local_4c);
            FUN_004ad6d0(piVar8);
            FUN_004ad6d0(piVar18);
            FUN_004ad6d0(piVar5);
            piVar18 = local_a0;
          }
          FUN_004ad6d0(piVar4);
          FUN_004ad6d0(piVar17);
          goto LAB_004bc067;
        }
      }
LAB_004bbd32:
      iVar1 = 3;
LAB_004bbd42:
      uVar2 = FUN_004ba7d0(local_bc + 4,piVar4,piVar5,piVar17,param_4,iVar1);
      return uVar2;
    }
    if (local_bc != 1) goto LAB_004bb08c;
    piVar11 = (int *)(uint)uVar15;
    local_a8 = piVar11;
    iVar1 = FUN_004c9110(piVar11,piVar4);
  }
  else {
    piVar5 = (int *)FUN_004ad630(iVar1);
    if (piVar5 == (int *)0x0) {
      if (param_3 != 0) {
        FUN_004ad6d0(piVar17);
      }
      FUN_004ad6d0(piVar4);
      uVar2 = FUN_00501ef0(param_4);
      return uVar2;
    }
    local_bc = 3;
    if (param_3 != 0) {
      if ((local_c4 == (int *)0x0) || (piVar17 == (int *)0x0)) {
        FUN_004ad6d0(local_c4);
        FUN_004ad6d0(piVar17);
        FUN_004ad6d0(piVar4);
        FUN_004ad6d0(piVar5);
        uVar2 = FUN_00501ef0(param_4);
        return uVar2;
      }
      local_c8 = (int *)(uint)(ushort)(uVar15 + sVar12);
      if (local_c8 != (int *)0x0) {
        iVar6 = 0;
        iVar1 = 0;
        do {
          if (*(char *)(*local_c4 + iVar1) != '\0') {
            puVar10 = (undefined4 *)(iVar1 + *piVar11);
            puVar13 = (undefined4 *)(iVar6 + *piVar4);
            *puVar13 = *puVar10;
            puVar13[1] = puVar10[1];
            puVar13[2] = puVar10[2];
            puVar10 = (undefined4 *)(iVar1 + *piVar18);
            puVar13 = (undefined4 *)(*piVar5 + iVar6);
            *puVar13 = *puVar10;
            puVar13[1] = puVar10[1];
            puVar13[2] = puVar10[2];
            puVar13 = (undefined4 *)(*piVar17 + iVar6);
            puVar10 = (undefined4 *)(*local_c4 + iVar1);
            iVar6 = iVar6 + 0xc;
            *puVar13 = *puVar10;
            puVar13[1] = puVar10[1];
            puVar13[2] = puVar10[2];
            piVar11 = local_a0;
          }
          iVar1 = iVar1 + 0xc;
          local_c8 = (int *)((int)local_c8 - 1);
        } while (local_c8 != (int *)0x0);
      }
      uVar15 = (uVar15 + sVar12) - sVar12;
      goto LAB_004bb2c5;
    }
    if (0 < (int)local_a8) {
      iVar1 = 0;
      local_c8 = local_a8;
      do {
        puVar10 = (undefined4 *)(iVar1 + *piVar11);
        puVar13 = (undefined4 *)(iVar1 + *piVar4);
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        puVar13 = (undefined4 *)(iVar1 + *piVar18);
        puVar10 = (undefined4 *)(*piVar5 + iVar1);
        iVar1 = iVar1 + 0xc;
        *puVar10 = *puVar13;
        puVar10[1] = puVar13[1];
        puVar10[2] = puVar13[2];
        local_c8 = (int *)((int)local_c8 + -1);
      } while (local_c8 != (int *)0x0);
    }
LAB_004bb08c:
    local_a8 = (int *)(uint)uVar15;
    iVar1 = FUN_004c8e60(local_a8,piVar4,piVar5);
    piVar11 = local_a8;
  }
  if (iVar1 != 0) {
    uVar2 = FUN_004ba7d0(local_bc,piVar4,piVar5,0,param_4,iVar1);
    return uVar2;
  }
  piVar18 = (int *)((int)piVar11 / 3);
  iVar1 = (int)piVar11 % 3;
  if (iVar1 == 2) {
    piVar18 = (int *)((int)piVar18 + 1);
  }
  local_a0 = piVar18;
  iVar6 = FUN_004ba820(piVar4,piVar18,&local_b0,1);
  if (iVar6 != 0) {
    uVar2 = FUN_004ba7d0(local_bc,piVar4,piVar5,0,param_4,iVar6);
    return uVar2;
  }
  iVar6 = FUN_004baa00(piVar4,piVar18,&local_ac,1,piVar11);
  if (iVar6 != 0) {
    uVar2 = FUN_004ba7d0(local_bc,piVar4,piVar5,0,param_4,iVar6);
    return uVar2;
  }
  iVar6 = (int)piVar18 + (((int)piVar18 - (int)local_b0) - (int)local_ac) + -1;
  if (iVar6 < 0) {
    local_cc = (int *)((int)local_b0 + 1);
  }
  else {
    local_cc = local_ac;
    if (iVar6 < 1) {
      if ((int)piVar18 - (int)local_b0 == 1) {
        local_cc = (int *)((int)local_b0 + 1);
      }
      else if (iVar1 == 2) {
        local_cc = (int *)((int)local_b0 + 1);
      }
    }
  }
  iVar19 = (int)piVar11 - (int)local_a0;
  iVar6 = FUN_004ba820(piVar4,iVar19,&local_b0,0);
  if (iVar6 != 0) {
    uVar2 = FUN_004ba7d0(local_bc,piVar4,piVar5,0,param_4,iVar6);
    return uVar2;
  }
  iVar6 = FUN_004baa00(piVar4,iVar19,&local_ac,0,piVar11);
  piVar11 = local_a8;
  if (iVar6 != 0) {
    uVar2 = FUN_004ba7d0(local_bc,piVar4,piVar5,0,param_4,iVar6);
    return uVar2;
  }
  iVar6 = iVar19 + -1 + ((iVar19 - (int)local_b0) - (int)local_ac);
  if ((iVar6 < 0) ||
     ((piVar18 = local_ac, iVar6 < 1 && ((iVar19 - (int)local_b0 == 1 || (iVar1 != 2)))))) {
    piVar18 = (int *)((int)local_b0 + 1);
  }
  if (((local_cc == piVar18) || (local_cc == (int *)0x0)) || (piVar18 == local_a8)) {
    uVar2 = FUN_004ba7d0(local_bc,piVar4,piVar5,0,param_4,3);
    return uVar2;
  }
  FUN_004baca0(piVar4,0,local_cc,&local_88);
  FUN_004baca0(piVar4,local_cc,piVar18,&local_7c);
  FUN_004baca0(piVar4,piVar18,piVar11,&local_70);
  iVar1 = FUN_004e4020(&local_88);
  if (((iVar1 != 0) || (iVar1 = FUN_004e4020(&local_7c), iVar1 != 0)) ||
     (iVar1 = FUN_004e4020(&local_70), iVar1 != 0)) {
    uVar2 = FUN_004ba7d0(local_bc,piVar4,piVar5,0,param_4,3);
    return uVar2;
  }
  FUN_004ad6d0(piVar4);
  if ((local_bc & 2) != 0) {
    piVar4 = (int *)((int)piVar18 - (int)local_cc);
    piVar11 = (int *)((int)piVar11 - (int)piVar18);
    piVar17 = piVar4;
    if ((int)piVar4 < (int)local_cc) {
      piVar17 = local_cc;
    }
    if ((int)piVar17 < (int)piVar11) {
      piVar17 = piVar11;
    }
    piVar17 = (int *)FUN_004ad630((int)piVar17 * 0xc);
    if (piVar17 == (int *)0x0) {
      FUN_004ad6d0(piVar5);
      uVar2 = FUN_00501ef0(param_4);
      return uVar2;
    }
    if (0 < (int)local_cc) {
      iVar1 = 0;
      local_c8 = local_cc;
      do {
        puVar10 = (undefined4 *)(*piVar5 + iVar1);
        puVar13 = (undefined4 *)(iVar1 + *piVar17);
        iVar1 = iVar1 + 0xc;
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        local_c8 = (int *)((int)local_c8 + -1);
      } while (local_c8 != (int *)0x0);
    }
    local_c4 = (int *)FUN_004c9110(local_cc,piVar17);
    if (local_c4 == (int *)0x0) {
      FUN_004baca0(piVar17,0,local_cc,&local_64);
      if ((int)local_cc < (int)piVar18) {
        local_c4 = (int *)0x0;
        iVar1 = (int)local_cc * 0xc;
        local_c8 = piVar4;
        do {
          puVar10 = (undefined4 *)(*piVar5 + iVar1);
          puVar13 = (undefined4 *)((int)local_c4 + *piVar17);
          iVar1 = iVar1 + 0xc;
          *puVar13 = *puVar10;
          puVar13[1] = puVar10[1];
          puVar13[2] = puVar10[2];
          local_c4 = (int *)((int)local_c4 + 0xc);
          local_c8 = (int *)((int)local_c8 + -1);
        } while (local_c8 != (int *)0x0);
      }
      local_c4 = (int *)FUN_004c9110(piVar4,piVar17);
      if (local_c4 == (int *)0x0) {
        FUN_004baca0(piVar17,0,piVar4,&local_58);
        if ((int)piVar18 < (int)local_a8) {
          local_c0 = 0;
          iVar1 = (int)piVar18 * 0xc;
          local_c8 = piVar11;
          do {
            puVar10 = (undefined4 *)(*piVar5 + iVar1);
            puVar13 = (undefined4 *)(local_c0 + *piVar17);
            iVar1 = iVar1 + 0xc;
            *puVar13 = *puVar10;
            puVar13[1] = puVar10[1];
            puVar13[2] = puVar10[2];
            local_c0 = local_c0 + 0xc;
            local_c8 = (int *)((int)local_c8 + -1);
          } while (local_c8 != (int *)0x0);
        }
        FUN_004ad6d0(piVar5);
        iVar1 = FUN_004c9110(piVar11,piVar17);
        if (iVar1 != 0) {
          FUN_004ad6d0(piVar5);
          FUN_004e5630(iVar1,param_4);
          return 0;
        }
        FUN_004baca0(piVar17,0,piVar11,&local_4c);
        FUN_004ad6d0(piVar17);
        goto LAB_004bc067;
      }
    }
    FUN_004ad6d0(piVar5);
    FUN_004e5630(local_c4,param_4);
    return 0;
  }
  local_64 = local_88;
  local_60 = local_84;
  local_5c = local_80;
  local_58 = local_7c;
  local_54 = local_78;
  local_50 = local_74;
  local_4c = local_70;
  local_48 = local_6c;
  local_44 = local_68;
LAB_004bc067:
  piVar11 = (int *)FUN_004ad630(0x6c);
  if (piVar11 == (int *)0x0) {
    uVar2 = FUN_00501ef0(param_4);
    return uVar2;
  }
  FUN_004e6c30(&local_70,&local_88,local_18);
  FUN_004e6c30(&local_4c,&local_64,&local_98);
  FUN_004e6dd0(&local_98,local_18,local_30);
  FUN_004e5640(local_30,&local_98);
  FUN_004e7910(&local_98,&local_98);
  iVar1 = FUN_004e4020(&local_98);
  if (iVar1 == 0) {
    puVar10 = (undefined4 *)*piVar11;
    *puVar10 = local_98;
    puVar10[1] = local_94;
    puVar10[2] = local_90;
    FUN_004e6d00(local_30,&local_88,&local_98);
    FUN_004e6c30(&local_64,&local_98,local_3c);
    FUN_004e6d00(local_30,&local_7c,local_24);
    FUN_004e6ab0(local_24,local_3c,&local_98);
    FUN_004e6ab0(&local_98,&local_98,&local_98);
    FUN_004e6ab0(&local_98,&local_58,&local_98);
    FUN_004e5070(3,local_c);
    FUN_004e6dd0(&local_98,local_c,&local_98);
    FUN_004e6c30(&local_98,local_24,local_3c);
    FUN_004e5640(local_3c,&local_98);
    FUN_004e7910(&local_98,&local_98);
    iVar1 = FUN_004e4020(&local_98);
    if (iVar1 == 0) {
      iVar1 = *piVar11;
      *(undefined4 *)(iVar1 + 0xc) = local_98;
      *(undefined4 *)(iVar1 + 0x10) = local_94;
      *(undefined4 *)(iVar1 + 0x14) = local_90;
      iVar1 = *piVar11;
      *(undefined4 *)(iVar1 + 0x18) = local_88;
      *(undefined4 *)(iVar1 + 0x1c) = local_84;
      *(undefined4 *)(iVar1 + 0x20) = local_80;
      iVar1 = *piVar11;
      *(undefined4 *)(iVar1 + 0x24) = local_64;
      *(undefined4 *)(iVar1 + 0x28) = local_60;
      *(undefined4 *)(iVar1 + 0x2c) = local_5c;
      iVar1 = *piVar11;
      *(undefined4 *)(iVar1 + 0x30) = local_7c;
      *(undefined4 *)(iVar1 + 0x34) = local_78;
      *(undefined4 *)(iVar1 + 0x38) = local_74;
      iVar1 = *piVar11;
      *(undefined4 *)(iVar1 + 0x3c) = local_58;
      *(undefined4 *)(iVar1 + 0x40) = local_54;
      *(undefined4 *)(iVar1 + 0x44) = local_50;
      iVar1 = *piVar11;
      *(undefined4 *)(iVar1 + 0x48) = local_70;
      *(undefined4 *)(iVar1 + 0x4c) = local_6c;
      *(undefined4 *)(iVar1 + 0x50) = local_68;
      iVar1 = *piVar11;
      *(undefined4 *)(iVar1 + 0x54) = local_4c;
      *(undefined4 *)(iVar1 + 0x58) = local_48;
      *(undefined4 *)(iVar1 + 0x5c) = local_44;
      *(undefined1 *)(*piVar11 + 0x60) = local_cc._0_1_;
      *(char *)(*piVar11 + 0x61) = (char)piVar18;
      FUN_004f9690(param_4,piVar11,9,1);
      return 1;
    }
  }
  FUN_004ad6d0(piVar11);
  uVar2 = FUN_00501ed0(param_4);
  return uVar2;
}

