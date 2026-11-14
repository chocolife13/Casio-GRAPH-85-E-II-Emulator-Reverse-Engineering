// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043db00
// entry: 0043db00  size: 1849


int FUN_0043db00(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  char local_9f;
  undefined4 local_9c;
  int local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [38];
  short local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50 [30];
  short local_32;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_c [12];
  
  local_28 = FUN_00526410();
  FUN_00526420(0xc1);
  FUN_00538980(0,0,local_2c);
  puVar8 = &DAT_0057f430;
  puVar9 = &DAT_005ce2a0;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_00538860(0,&DAT_005ce2a0);
  FUN_005387f0(0);
  iVar5 = 1;
  if (param_1 == 0) {
    local_a8 = 0;
    iVar3 = FUN_00530120(local_50,&local_98);
    if (iVar3 != 0) {
      iVar3 = FUN_00530340(local_88);
      if (iVar3 != 0) {
        iVar3 = FUN_00530230();
        if (iVar3 != 0) {
          FUN_0052b240(4);
          iVar3 = -2;
          goto LAB_0043dce6;
        }
        iVar3 = FUN_00530340(local_88);
        if (iVar3 != 0) {
          FUN_0052b240(4);
          iVar3 = -2;
          goto LAB_0043dce6;
        }
      }
      if (local_50[local_62 + -1] == '\0') {
        local_ac = 0;
        while (local_50[0] != '\x02') {
          iVar3 = local_ac + 1;
          local_ac = local_ac + 1;
          local_50[0] = local_50[iVar3];
        }
        local_62 = (short)local_ac + 1;
      }
      FUN_005302a0(local_88);
LAB_0043dd27:
      FUN_004e5780(local_c);
      iVar7 = 1;
switchD_0043e04c_caseD_7543:
      while( true ) {
        while( true ) {
          FUN_0043e370(local_50,local_88);
          FUN_004b6ef0(&local_a0,&DAT_005beb10);
          cVar2 = FUN_0043e430(iVar7,iVar5,local_50);
          FUN_00538b30();
          iVar3 = FUN_00526620(&local_94);
          if (iVar3 == 0) break;
          local_9f = cVar2 + 'A';
          iVar3 = FUN_005244e0(1,local_94,(iVar5 - iVar7) + 3,&local_5c,&local_a0);
          if (iVar3 == 0) {
            if (param_1 == 1) {
              local_a8 = 0;
            }
            uVar4 = FUN_004e4120(&local_5c,local_c,&local_24);
            FUN_0052f780(cVar2 + 'A',uVar4);
            FUN_0043f120();
            *param_2 = 0;
            if ((iVar5 < local_32) &&
               (iVar3 = iVar5 + 1, bVar10 = iVar7 + 4 == iVar5, iVar5 = iVar3, bVar10)) {
              iVar7 = iVar7 + 1;
            }
          }
        }
        if (0x7534 < local_94) goto code_r0x0043e044;
        if (local_94 == 0x7534) break;
        if (local_94 < 5) {
          if (local_94 == 4) break;
          if (local_94 == 1) {
            local_ac = -1;
            iVar3 = -1;
            iVar6 = iVar5;
            if (0 < iVar5) {
joined_r0x0043def6:
              do {
                local_ac = iVar3 + 1;
                if (local_ac < 0x1a) {
                  iVar1 = iVar3 + 1;
                  iVar3 = local_ac;
                  if (local_50[iVar1] == '\0') goto joined_r0x0043def6;
                }
                iVar6 = iVar6 + -1;
                iVar3 = local_ac;
              } while (iVar6 != 0);
            }
            local_62 = (short)local_ac + 1;
            FUN_005302a0(local_88);
            FUN_0043e370(local_50,local_88);
            goto joined_r0x0043e235;
          }
          if (local_94 == 2) {
            iVar3 = FUN_0043e7d0(local_88,&local_ac);
            if (local_ac == 1) {
              if (param_1 == 1) {
                local_a8 = 0;
              }
              FUN_0043f120();
              *param_2 = 0;
            }
            if (iVar3 != -1) goto switchD_0043e01d_caseD_fffffff6;
            goto LAB_0043dce6;
          }
          if (local_94 == 3) {
            iVar3 = FUN_0043ead0(local_88,&local_ac);
            if (iVar3 == -1) goto LAB_0043dce6;
            FUN_0043e370(local_50,local_88);
          }
        }
        else {
          if (local_94 == 0x7531) goto switchD_0043e04c_caseD_7545;
          if (local_94 == 0x7532) goto LAB_0043dc8f;
        }
      }
      if (*param_2 == 0) {
        if ((param_1 != 0) && (local_a8 != 0)) {
          uVar4 = 0;
          goto LAB_0043dfdf;
        }
        DAT_005d6de0 = FUN_0052ff80(local_88,&local_a4,&local_9c);
        FUN_0052b240(local_9c);
        if (DAT_005d6de0 == 0) goto switchD_0043e04c_caseD_7543;
        uVar4 = 1;
        *param_2 = 1;
      }
      else {
        local_60 = 0;
        local_5e = 0;
        uVar4 = 2;
LAB_0043dfdf:
        local_a4 = FUN_0052ffc0(local_88,&local_9c);
      }
      uVar4 = FUN_0043e290(uVar4,local_a4,local_88,DAT_005d6de0,local_50);
      switch(uVar4) {
      case 0xfffffff5:
        *param_2 = 0;
      default:
switchD_0043e01d_caseD_fffffff6:
        FUN_0043e370(local_50,local_88);
        break;
      case 0xffffffff:
        goto switchD_0043e01d_caseD_ffffffff;
      }
      goto switchD_0043e04c_caseD_7543;
    }
LAB_0043dc7f:
    if (local_98 == 0) {
      FUN_0052b240(0x1e);
      iVar3 = -2;
      goto LAB_0043dce6;
    }
    FUN_0052b240(0x14);
  }
  else {
    local_a8 = 1;
    FUN_00530340(local_88);
    iVar3 = FUN_0043f5a0(local_50,local_88);
    if (iVar3 == 0) {
      FUN_005302a0(local_88);
      iVar3 = FUN_00530120(local_50,&local_98);
      if (iVar3 != 0) {
        local_a4 = FUN_0052ffc0(local_88,&local_9c);
        local_60 = 0;
        local_5e = 0;
        iVar3 = FUN_0043e290(0,local_a4,local_88,0,local_50);
        if (iVar3 == -0xb) {
          *param_2 = 0;
        }
        else if (iVar3 == -1) {
switchD_0043e01d_caseD_ffffffff:
          iVar3 = -1;
          goto LAB_0043dce6;
        }
        goto LAB_0043dd27;
      }
      goto LAB_0043dc7f;
    }
    if ((iVar3 != 0x40) && (iVar3 != 0x42)) {
      FUN_0052b240(4);
      iVar3 = -2;
      goto LAB_0043dce6;
    }
  }
LAB_0043dc8f:
  iVar3 = -2;
LAB_0043dce6:
  FUN_00538810();
  FUN_005389c0(0,0,local_2c);
  FUN_00526440();
  FUN_00526420(local_28);
  return iVar3;
code_r0x0043e044:
  switch(local_94) {
  case 0x7542:
    if (iVar5 < 2) {
      iVar5 = (int)local_32;
      if (iVar5 < 6) {
        iVar7 = 1;
      }
      else {
        iVar7 = iVar5 + -4;
      }
    }
    else {
      iVar3 = iVar5 + -1;
      bVar10 = iVar7 == iVar5;
      iVar5 = iVar3;
      if (bVar10) {
        iVar7 = iVar7 + -1;
      }
    }
  default:
    goto switchD_0043e04c_caseD_7543;
  case 0x7545:
switchD_0043e04c_caseD_7545:
    cVar2 = cVar2 + 'A';
    local_9f = cVar2;
    FUN_0052f760(cVar2,&local_24);
    FUN_004e3800(&local_24,&local_24);
    FUN_0052f780(cVar2,&local_24);
    local_54 = local_1c;
    local_5c = local_24;
    local_58 = local_20;
    if (local_94 == 0x7531) {
      local_90 = FUN_00526040();
      local_8c = 1;
    }
    else if (local_94 == 0x7545) {
      local_90 = 0x7545;
      local_8c = 0;
    }
    iVar3 = FUN_005244e0(local_8c,local_90,(iVar5 - iVar7) + 3,&local_5c,&local_a0);
    if (iVar3 == 0) {
      if (param_1 == 1) {
        local_a8 = 0;
      }
      uVar4 = FUN_004e4120(&local_5c,local_c,&local_24);
      FUN_0052f780(cVar2,uVar4);
      FUN_0043f120();
      *param_2 = 0;
      if ((iVar5 < local_32) &&
         (iVar3 = iVar5 + 1, bVar10 = iVar7 + 4 == iVar5, iVar5 = iVar3, bVar10)) {
        iVar7 = iVar7 + 1;
      }
    }
    goto switchD_0043e04c_caseD_7543;
  case 0x7547:
    if (iVar5 < local_32) {
      iVar3 = iVar5 + 1;
      bVar10 = iVar7 + 4 == iVar5;
      iVar5 = iVar3;
      if (bVar10) {
        iVar7 = iVar7 + 1;
      }
    }
    else {
      iVar7 = 1;
      iVar5 = iVar7;
    }
    goto switchD_0043e04c_caseD_7543;
  case 0x754d:
    goto switchD_0043e01d_caseD_ffffffff;
  case 0x754e:
    iVar3 = FUN_0052eb10(0);
    if (iVar3 != 0) goto switchD_0043e04c_caseD_7543;
    break;
  case 0x7555:
    FUN_0052d2d0(&DAT_005be2a4,&local_ac);
    if (local_ac != 1) goto switchD_0043e04c_caseD_7543;
  }
joined_r0x0043e235:
  if (param_1 == 1) {
    local_a8 = 0;
  }
  FUN_0043f120();
  *param_2 = 0;
  goto switchD_0043e04c_caseD_7543;
}

