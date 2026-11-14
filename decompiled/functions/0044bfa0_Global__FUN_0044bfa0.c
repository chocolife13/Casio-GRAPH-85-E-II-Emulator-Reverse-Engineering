// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044bfa0
// entry: 0044bfa0  size: 2869


void FUN_0044bfa0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  char local_f85;
  uint local_f80;
  undefined4 local_f7c;
  int local_f78;
  char local_f74;
  byte bStack_f73;
  int local_f6c;
  undefined2 local_f66;
  undefined2 local_f64;
  undefined1 local_f62;
  char local_f60 [4];
  char local_f5c [2];
  char local_f5a;
  undefined4 local_f58;
  undefined1 local_f54;
  undefined1 auStack_f53 [19];
  undefined1 local_f40 [12];
  undefined4 local_f34 [63];
  undefined4 local_e38 [63];
  undefined4 local_d3c;
  undefined4 local_d38;
  int local_d34;
  int local_d30;
  undefined4 local_d2c;
  int local_d28;
  int local_d20;
  int local_d00;
  undefined4 local_cfc;
  int local_cf8;
  undefined4 local_cf0 [828];
  
  local_f60 = (char  [4])s________005bec28._0_4_;
  local_f5c = (char  [2])s________005bec28._4_2_;
  local_f5a = s________005bec28[6];
  iVar8 = 0;
  local_f64 = DAT_005bec24;
  local_f62 = DAT_005bec26;
  local_f66 = DAT_005ad48c;
  bVar2 = false;
  local_f58 = FUN_00526410();
  FUN_00538a00(local_f40);
  iVar7 = 0;
  do {
    puVar10 = (undefined4 *)((int)&DAT_0057fe58 + iVar8);
    puVar11 = (undefined4 *)((int)local_cf0 + iVar8);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    FUN_00538860(iVar7 + 0x14,(undefined4 *)((int)local_cf0 + iVar8));
    iVar8 = iVar8 + 0x30;
    iVar7 = iVar7 + 1;
  } while (iVar8 < 0xcf0);
  if (*(char *)(param_2[1] + 0x12) == '\x01') {
    uVar12 = 9;
  }
  else {
    uVar12 = 0;
  }
  FUN_00526070(0x17,uVar12);
  iVar8 = 0;
  local_f85 = '\x01';
  local_d20 = 0;
  local_d00 = 0;
  local_cfc = 0;
  FUN_00523740();
  FUN_00414240();
  FUN_005232d0(1,1);
  FUN_005233e0(local_f60);
  iVar7 = 0;
  puVar9 = &local_f54;
  do {
    FUN_004b79f0(*(undefined1 *)(param_2[1] + iVar8),puVar9);
    iVar4 = FUN_004b6ab0(*puVar9);
    iVar6 = iVar7;
    if (iVar4 != 0) {
      iVar6 = iVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    iVar8 = iVar8 + 1;
    iVar7 = iVar6 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar8 < 9);
  auStack_f53[iVar6] = 0;
  FUN_005232d0(7,1);
  FUN_005233e0(&local_f54);
  FUN_005232d0(0xf,1);
  FUN_005233e0(local_f60);
  if (*(char *)(param_2[1] + 0x12) == '\x01') {
    FUN_005232d0(0x15,1);
    FUN_005233e0(&local_f64);
  }
  FUN_005232d0(1,2);
  if (*(char *)(param_2[1] + 0x12) == '\x01') {
    FUN_00538e10(3);
    FUN_005387f0(0x34);
    FUN_00526420(0xf3);
  }
  else {
    FUN_0053c6f0(4);
    FUN_0053c690(10);
    FUN_0053edf0(1);
    FUN_00538e10(1);
    FUN_005387f0(0x14);
    FUN_00526420(0x40);
  }
  FUN_0044cc00(param_1,local_f34,param_2);
  FUN_005232d0(local_d2c,local_d28 + 1);
  FUN_005262e0(0);
  FUN_00527030();
  iVar7 = local_f6c;
switchD_0044c29d_caseD_2:
  do {
    while( true ) {
      while( true ) {
        FUN_00538b30();
        if (bVar2) {
          bVar2 = false;
        }
        else {
          iVar7 = FUN_0040ad00();
          local_f6c = iVar7;
          local_f78 = FUN_00526620(&local_f80);
        }
        if (local_f78 == 0) break;
        if (local_f80 != 0) {
          FUN_0044ab70(local_f80,local_f34,param_2);
          iVar8 = 0;
          puVar10 = local_f34;
          do {
            FUN_005232d0(1,iVar8 + 2);
            FUN_00523470(puVar10,0x15);
            iVar8 = iVar8 + 1;
            puVar10 = (undefined4 *)((int)puVar10 + 0x2a);
          } while (iVar8 < 6);
          goto LAB_0044c1b5;
        }
      }
      FUN_0044cd40(&local_f80,local_f34);
      if (local_f80 < 0x754a) break;
      if (local_f80 < 0x755d) {
        if (local_f80 < 0x7559) goto code_r0x0044c69a;
        if (*(char *)(param_2[1] + 0x12) != '\x01') {
          FUN_0044bb60(local_f80,local_f34);
        }
      }
      else if (local_f80 < 0x791a) {
        if (local_f80 == 0x7919) {
          FUN_00523740();
          iVar8 = FUN_0052ad00(&local_f7c);
          if (iVar8 == 0) {
            iVar8 = FUN_004b7d00(local_f7c,local_d38);
            if (((iVar8 == 0) || (iVar8 == 1)) || (iVar8 == 2)) {
              local_f85 = (char)local_f7c;
              bVar2 = true;
              local_f80 = 31000;
            }
            else {
              FUN_0052b240(4);
              FUN_00527030();
              bVar2 = false;
            }
          }
          else {
            FUN_00527030();
            bVar2 = false;
          }
        }
        else {
          if (local_f80 == 0x7563) goto LAB_0044c82b;
          if (local_f80 == 31000) {
            FUN_00523740();
            FUN_005237c0(1);
            if (local_f85 < '\x10') {
              iVar8 = (int)local_f85;
            }
            else {
              iVar8 = 0xf;
            }
            iVar8 = FUN_0052ab40(iVar8);
            if (iVar8 == -5) {
              bVar2 = true;
              local_f78 = 1;
              local_f80 = 0xf91b;
            }
            else if (iVar8 == -4) {
              bVar2 = true;
              local_f78 = 0;
              local_f80 = 0x791f;
            }
            else if (iVar8 == -3) {
              bVar2 = true;
              local_f78 = 0;
              local_f80 = 0x7919;
            }
            else {
              bVar2 = false;
            }
            local_f85 = '\x01';
            FUN_00523800(1);
            FUN_005232d0(local_d2c,local_d28 + 1);
            FUN_00527030();
          }
        }
      }
      else if (local_f80 == 0x791f) {
        FUN_00523740();
        iVar8 = FUN_0052ad90(&local_f7c);
        if (iVar8 == 0) {
          pcVar5 = (char *)FUN_004b7ca0(local_f7c);
          if (pcVar5 == (char *)0x0) {
            FUN_00527030();
            bVar2 = false;
          }
          else {
            FUN_0052f840();
            local_cfc = 1;
            thunk_FUN_0040add0();
            iVar7 = 0;
            cVar1 = *pcVar5;
            while (cVar1 != '\0') {
              iVar8 = FUN_004b7370(pcVar5[iVar7]);
              if (iVar8 == 0) {
                if (pcVar5[iVar7] == '\0') break;
                bStack_f73 = 0;
                local_f74 = pcVar5[iVar7];
              }
              else {
                local_f74 = pcVar5[iVar7 + 1];
                bStack_f73 = pcVar5[iVar7];
                iVar7 = iVar7 + 1;
              }
              FUN_0044ab70((uint)bStack_f73 << 8 | CONCAT11(bStack_f73,local_f74) & 0xff,local_f34,
                           param_2);
              pcVar5 = (char *)FUN_004b7ca0(local_f7c);
              if (local_d00 == 1) break;
              iVar8 = FUN_0052f820();
              if (iVar8 == 1) {
                FUN_005232d0(0x15,1);
                FUN_005233e0(&local_f66);
                FUN_0052b240(1);
                break;
              }
              iVar8 = iVar7 + 1;
              iVar7 = iVar7 + 1;
              cVar1 = pcVar5[iVar8];
            }
            iVar7 = 0;
            local_cfc = 0;
            puVar10 = local_f34;
            do {
              FUN_005232d0(1,iVar7 + 2);
              FUN_00523470(puVar10,0x15);
              iVar7 = iVar7 + 1;
              puVar10 = (undefined4 *)((int)puVar10 + 0x2a);
            } while (iVar7 < 6);
            FUN_005232d0(local_d2c,local_d28 + 1);
            FUN_00527030();
            bVar2 = false;
            iVar7 = local_f6c;
          }
        }
        else {
          FUN_00527030();
          bVar2 = false;
        }
      }
    }
    if (local_f80 != 0x7549) {
      if (local_f80 < 0x7532) {
        if (local_f80 == 0x7531) {
          FUN_0044b0d0(0x7531,local_f34,param_2);
          goto switchD_0044c29d_caseD_2;
        }
        switch(local_f80) {
        case 1:
          local_f80 = FUN_0044cdb0(local_f34,param_2);
          if (local_f80 == 0x754d) goto LAB_0044caae;
          if (local_f80 == 0x7562) {
            FUN_005263f0();
          }
        default:
          goto switchD_0044c29d_caseD_2;
        case 3:
          FUN_00523740();
          local_d3c = 1;
          local_d34 = 1;
          local_d2c = 1;
          local_d28 = 1;
          FUN_0044dfc0(local_f34,1,1,1);
          iVar8 = 0;
          puVar10 = local_f34;
          do {
            FUN_005232d0(1,iVar8 + 2);
            FUN_00523470(puVar10,0x15);
            iVar8 = iVar8 + 1;
            puVar10 = (undefined4 *)((int)puVar10 + 0x2a);
          } while (iVar8 < 6);
          FUN_005232d0(local_d2c,local_d28 + 1);
          FUN_005262e0(0);
          FUN_00527030();
          break;
        case 4:
          FUN_00523740();
          puVar10 = local_f34;
          puVar11 = local_e38;
          for (iVar7 = 0x3f; iVar6 = local_d28, uVar3 = local_d2c, iVar8 = local_d34,
              uVar12 = local_d3c, iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          thunk_FUN_0040add0();
          if (local_d34 != local_d30) {
            do {
              FUN_0044a770(0x7545,local_f34);
              if (local_cf8 == 1) {
                FUN_0044dfc0(local_f34,local_d34,local_d2c,local_d28);
              }
              FUN_0052f840();
              iVar7 = FUN_0052f820();
              if (iVar7 == 1) {
                FUN_0052b240(1);
                local_d3c = uVar12;
                local_d34 = iVar8;
                FUN_0044a5a0(local_f34);
                local_d2c = uVar3;
                local_d28 = iVar6;
                FUN_005232d0(uVar3,iVar6 + 1);
                FUN_00527030();
                break;
              }
            } while (local_d34 != local_d30);
          }
          FUN_0044dfc0(local_f34,local_d34,local_d2c,local_d28);
          iVar7 = 0;
          puVar10 = local_f34;
          do {
            FUN_005232d0(1,iVar7 + 2);
            FUN_00523470(puVar10,0x15);
            iVar7 = iVar7 + 1;
            puVar10 = (undefined4 *)((int)puVar10 + 0x2a);
          } while (iVar7 < 6);
          FUN_005232d0(local_d2c,local_d28 + 1);
          FUN_005262e0(0);
          FUN_00527030();
          iVar7 = local_f6c;
          goto switchD_0044c29d_caseD_2;
        case 0x1e:
          switch(iVar7) {
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
          goto switchD_0044c29d_caseD_2;
        case 0x22:
          iVar8 = FUN_00522bb0(1);
          if (iVar8 != 0) {
            FUN_0044ab70(iVar8,local_f34,param_2);
          }
          iVar8 = 0;
          puVar10 = local_f34;
          do {
            FUN_005232d0(1,iVar8 + 2);
            FUN_00523470(puVar10,0x15);
            iVar8 = iVar8 + 1;
            puVar10 = (undefined4 *)((int)puVar10 + 0x2a);
          } while (iVar8 < 6);
          goto LAB_0044c1b5;
        }
      }
      else {
        switch(local_f80) {
        case 0x7532:
          FUN_00523740();
          FUN_00414240();
          param_2[2] = param_2[1];
          goto LAB_0044caae;
        case 0x7533:
        case 0x7535:
        case 0x7536:
        case 0x7537:
        case 0x7538:
        case 0x7539:
        case 0x753a:
        case 0x753b:
        case 0x753c:
        case 0x753d:
        case 0x753e:
        case 0x753f:
        case 0x7540:
        case 0x7541:
        case 0x7543:
        case 0x7546:
          break;
        case 0x7534:
          if ((iVar7 == 0x84) || (iVar7 == 0x88)) {
            FUN_005262e0(iVar7);
            FUN_00527030();
          }
          local_f80 = 0xd;
          FUN_0044ab70(0xd,local_f34,param_2);
          iVar8 = 0;
          puVar10 = local_f34;
          do {
            FUN_005232d0(1,iVar8 + 2);
            FUN_00523470(puVar10,0x15);
            iVar8 = iVar8 + 1;
            puVar10 = (undefined4 *)((int)puVar10 + 0x2a);
          } while (iVar8 < 6);
LAB_0044c1b5:
          FUN_005232d0(local_d2c,local_d28 + 1);
          break;
        case 0x7542:
        case 0x7544:
        case 0x7545:
        case 0x7547:
          if (local_d20 == 0) {
            FUN_0044b530(local_f80,local_f34);
          }
          else {
            FUN_0044bb60(local_f80,local_f34);
          }
          break;
        default:
          goto switchD_0044c29d_caseD_2;
        }
      }
      goto switchD_0044c29d_caseD_2;
    }
    if (local_d20 == 1) {
LAB_0044c82b:
      if (*(char *)(param_2[1] + 0x12) != '\x01') {
        if (local_f80 == 0x7563) {
          FUN_0044b160(local_f34);
        }
        FUN_0044b2e0(local_f34,param_2);
        FUN_0044ab00(local_f34);
        goto LAB_0044c864;
      }
    }
    else {
      FUN_0044afa0(local_f34,param_2);
    }
  } while( true );
code_r0x0044c69a:
  switch(local_f80) {
  case 0x754d:
    FUN_00523740();
    FUN_00414240();
    FUN_0044e6f0(0,param_2,1);
    param_2[2] = *param_2;
    param_2[1] = *param_2;
LAB_0044caae:
    FUN_00538810();
    FUN_00538a50(local_f40);
    FUN_00526420(local_f58);
    return;
  case 0x7553:
    if (*(char *)(param_2[1] + 0x12) != '\x01') {
      FUN_0044b160(local_f34);
      FUN_0044ab00(local_f34);
    }
    break;
  case 0x7554:
    if (*(char *)(param_2[1] + 0x12) != '\x01') {
      FUN_0052f840();
      thunk_FUN_0040add0();
      FUN_0044b1f0(local_f34,param_2);
LAB_0044c864:
      FUN_005232d0(local_d2c,local_d28 + 1);
      FUN_00527030();
    }
    break;
  case 0x7555:
    FUN_00538710();
    if (*(char *)(param_2[1] + 0x12) == '\x01') {
      FUN_005386a0(0x50);
    }
    else {
      FUN_005386a0(0x39);
    }
    break;
  case 0x7558:
    if (local_d20 == 1) {
      FUN_00523690(0xb);
    }
  }
  goto switchD_0044c29d_caseD_2;
}

