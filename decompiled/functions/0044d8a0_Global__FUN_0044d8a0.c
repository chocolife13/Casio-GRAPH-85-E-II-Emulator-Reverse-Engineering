// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044d8a0
// entry: 0044d8a0  size: 1607


uint FUN_0044d8a0(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined4 local_18;
  uint local_14;
  int local_10;
  uint local_c;
  char *local_8;
  uint local_4;
  
  puVar2 = param_2;
  local_1c = DAT_005bec24;
  local_1a = DAT_005bec26;
  local_1e = DAT_005ad48c;
  FUN_005387f0(0x57);
  local_18 = param_2[0x82];
  puVar12 = param_2;
  puVar11 = param_2 + 0x3f;
  for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
  }
  param_2 = (undefined4 *)param_2[0x83];
  uVar8 = local_18;
  iVar7 = (int)param_2;
switchD_0044dc99_caseD_7546:
  do {
    FUN_00538b30();
    uVar3 = FUN_0040ad00();
    iVar4 = FUN_00526620(&local_14);
    if (iVar4 != 0) {
LAB_0044dcd0:
      FUN_0044a5a0(puVar2);
      puVar2[0x82] = uVar8;
      puVar2[0x83] = iVar7;
      FUN_0044ab70(local_14,puVar2,param_3);
      iVar7 = 0;
      puVar12 = puVar2;
      do {
        FUN_005232d0(1,iVar7 + 2);
        FUN_00523470(puVar12,0x15);
        iVar7 = iVar7 + 1;
        puVar12 = (undefined4 *)((int)puVar12 + 0x2a);
      } while (iVar7 < 6);
      FUN_005232d0(puVar2[0x82],puVar2[0x83] + 1);
      FUN_00538810();
      return local_14;
    }
    if (0x7542 < local_14) {
      switch(local_14) {
      case 0x7544:
      case 0x7545:
      case 0x7547:
switchD_0044dc99_caseD_7544:
        if (puVar2[0x85] != 0) {
          FUN_0044a5a0(puVar2);
          puVar2[0x83] = iVar7;
          puVar2[0x82] = uVar8;
          FUN_005232d0(uVar8,iVar7 + 1);
          FUN_00527030();
          FUN_0044bb60(local_14,puVar2);
          FUN_00538810();
          return local_14;
        }
        FUN_0044a5a0(puVar2);
        puVar2[0x83] = iVar7;
        puVar2[0x82] = uVar8;
        FUN_005232d0(uVar8,iVar7 + 1);
        FUN_00527030();
        FUN_0044b530(local_14,puVar2);
        FUN_00538810();
        return local_14;
      case 0x7549:
        FUN_0044a5a0(puVar2);
        puVar2[0x83] = iVar7;
        puVar2[0x82] = uVar8;
        FUN_005232d0(uVar8,iVar7 + 1);
        FUN_00527030();
        FUN_0044afa0(puVar2,param_3);
      case 0x7562:
        FUN_00538810();
        return local_14;
      case 0x754d:
        FUN_00523740();
        FUN_00414240();
        FUN_0044e6f0(0,param_3,1);
        param_3[2] = *param_3;
        param_3[1] = *param_3;
        FUN_00538810();
        return local_14;
      case 0x7555:
        FUN_00538710();
        if (*(char *)(param_3[1] + 0x12) == '\x01') {
          FUN_005386a0(0x50);
        }
        else {
          FUN_005386a0(0x39);
        }
      }
      goto switchD_0044dc99_caseD_7546;
    }
    if (local_14 == 0x7542) goto switchD_0044dc99_caseD_7544;
    if (local_14 < 0x7532) {
      if (local_14 == 0x7531) {
        FUN_0044a5a0(puVar2);
        puVar2[0x83] = iVar7;
        puVar2[0x82] = uVar8;
        FUN_005232d0(uVar8,iVar7 + 1);
        FUN_00527030();
        FUN_0044b0d0(local_14,puVar2,param_3);
        FUN_00538810();
        return local_14;
      }
      if (local_14 == 0x19) {
LAB_0044da2e:
        bVar1 = true;
        local_10 = 0;
        FUN_00523740();
        uVar5 = FUN_004b7550(param_1);
        iVar7 = (int)param_2;
        local_c = uVar5;
        if (uVar5 != 0) {
          uVar9 = puVar2[0x80];
          if (uVar5 < (uint)puVar2[0x81]) {
            local_4 = uVar5;
            thunk_FUN_0040add0();
            do {
              if (puVar2[0x81] - uVar5 <= uVar9) break;
              pcVar10 = (char *)(puVar2[0x7f] + uVar9);
              local_8 = param_1;
              bVar1 = true;
              if ((uVar9 == 0) || (iVar7 = FUN_004b7370(pcVar10[-1]), iVar7 == 0)) {
                bVar1 = false;
                pcVar6 = local_8;
                while ((local_c != 0 && (!bVar1))) {
                  if (*pcVar10 == *pcVar6) {
                    pcVar10 = pcVar10 + 1;
                    pcVar6 = pcVar6 + 1;
                  }
                  else {
                    bVar1 = true;
                  }
                  local_c = local_c - 1;
                }
              }
              uVar9 = uVar9 + 1;
              local_c = local_4;
              FUN_0052f840();
              iVar7 = FUN_0052f820();
              if (iVar7 == 1) {
                FUN_0052b240(1);
                bVar1 = true;
                local_10 = 1;
                break;
              }
              uVar5 = local_c;
            } while (bVar1);
          }
          FUN_005232d0(0x15,1);
          if (*(char *)(param_3[1] + 0x12) == '\x01') {
            puVar13 = &local_1c;
          }
          else {
            puVar13 = &local_1e;
          }
          FUN_005233e0(puVar13);
          if (bVar1) {
            if (local_10 != 1) {
              FUN_0044a5a0(puVar2);
              puVar2[0x83] = param_2;
              puVar2[0x82] = local_18;
              FUN_005232d0(local_18,(int)param_2 + 1);
              FUN_00527030();
              FUN_00538810();
              return local_14;
            }
LAB_0044dc5a:
            FUN_0044a5a0(puVar2);
            puVar2[0x83] = param_2;
            puVar2[0x82] = local_18;
            FUN_005232d0(local_18,(int)param_2 + 1);
          }
          else {
            uVar5 = puVar2[0x80];
            uVar8 = puVar2[0x7e];
            if (uVar5 != uVar9) {
LAB_0044db4d:
              FUN_0044a770(0x7545,puVar2);
              if (puVar2[0x8f] == 1) {
                FUN_0044dfc0(puVar2,puVar2[0x80],puVar2[0x82],puVar2[0x83]);
              }
              FUN_0052f840();
              iVar7 = FUN_0052f820();
              if (iVar7 != 1) break;
              FUN_0052b240(1);
              puVar2[0x80] = uVar5;
              puVar2[0x7e] = uVar8;
              puVar12 = puVar2 + 0x3f;
              puVar11 = puVar2;
              for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar11 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar11 = puVar11 + 1;
              }
              local_10 = 1;
            }
LAB_0044dbca:
            FUN_0044dfc0(puVar2,puVar2[0x80],puVar2[0x82],puVar2[0x83]);
            if (local_10 == 1) goto LAB_0044dc5a;
            iVar7 = 0;
            puVar12 = puVar2;
            do {
              FUN_005232d0(1,iVar7 + 2);
              FUN_00523470(puVar12,0x15);
              iVar7 = iVar7 + 1;
              puVar12 = (undefined4 *)((int)puVar12 + 0x2a);
            } while (iVar7 < 6);
            local_18 = puVar2[0x82];
            puVar12 = puVar2;
            puVar11 = puVar2 + 0x3f;
            for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar11 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar11 = puVar11 + 1;
            }
            param_2 = (undefined4 *)puVar2[0x83];
            FUN_005232d0(local_18,(int)param_2 + 1);
          }
          FUN_00527030();
          uVar8 = local_18;
          iVar7 = (int)param_2;
        }
      }
      else if (local_14 == 0x1e) {
        switch(uVar3) {
        case 4:
          FUN_005262e0(8);
          FUN_00527030();
          break;
        case 8:
          FUN_005262e0(4);
          FUN_00527030();
          break;
        case 0x84:
          FUN_005262e0(0x88);
          FUN_00527030();
          break;
        case 0x88:
          FUN_005262e0(0x84);
        default:
          FUN_00527030();
        }
      }
      else if (local_14 == 0x22) {
        local_14 = FUN_00522bb0(1);
        if (local_14 != 0) goto LAB_0044dcd0;
        FUN_0044a5a0(puVar2);
        puVar2[0x82] = uVar8;
        puVar2[0x83] = iVar7;
        FUN_005232d0(uVar8,iVar7 + 1);
        FUN_00527030();
      }
    }
    else {
      if (local_14 == 0x7532) goto LAB_0044ddbd;
      if (local_14 == 0x7534) goto LAB_0044da2e;
      if (local_14 == 0x753f) {
LAB_0044ddbd:
        FUN_0044a5a0(puVar2);
        puVar2[0x83] = iVar7;
        puVar2[0x82] = uVar8;
        FUN_005232d0(uVar8,iVar7 + 1);
        FUN_00527030();
        FUN_00538810();
        return local_14;
      }
    }
  } while( true );
  if (puVar2[0x80] == uVar9) goto LAB_0044dbca;
  goto LAB_0044db4d;
}

