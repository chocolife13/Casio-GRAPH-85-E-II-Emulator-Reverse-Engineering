// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00522bb0
// entry: 00522bb0  size: 919


undefined4 FUN_00522bb0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [4];
  undefined1 local_64 [16];
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  local_54._0_2_ = 0x78;
  local_54._2_2_ = 2;
  local_50 = 1;
  local_4c = 0x134;
  local_4a = 2;
  local_48 = 2;
  local_44 = 0x2a2;
  local_42 = 2;
  local_40 = 3;
  local_3c = 0x133;
  local_3a = 2;
  local_38 = 4;
  local_6c = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_68);
  puVar8 = &local_54;
  puVar10 = &DAT_005d02a0;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_00538860(0,&DAT_005d02a0);
  FUN_005387f0(0);
  FUN_00414620(1);
  FUN_00443b00(1,7);
  FUN_005234d0(local_64);
  FUN_00523740();
  local_70 = FUN_0040ad00();
  iVar6 = 0;
  if (*(int *)(&DAT_0058cab0 + DAT_005d67ec * 0x2760) != 0) {
    puVar3 = &DAT_0058cab0 + DAT_005d67ec * 0x2760;
    do {
      piVar1 = (int *)(puVar3 + 8);
      puVar3 = puVar3 + 8;
      iVar6 = iVar6 + 1;
    } while (*piVar1 != 0);
  }
  iVar6 = iVar6 + -1;
  FUN_005232d0(1,1);
  uVar4 = FUN_0052f6f0(600,local_34);
  FUN_005233e0(uVar4);
  iVar2 = 0;
  iVar9 = 0;
switchD_00522dec_caseD_7546:
  do {
    while( true ) {
      do {
        iVar7 = iVar2;
        FUN_00538b30();
        FUN_00522a10(iVar7,iVar9,&DAT_0058cab0 + DAT_005d67ec * 0x2760,iVar6);
        iVar5 = FUN_00526620(&local_74);
        iVar2 = iVar7;
      } while (iVar5 != 0);
      if (local_74 < 0x7543) break;
      switch(local_74) {
      case 0x7544:
        if (iVar9 < 1) {
          if (iVar6 < 0x72) {
            if (iVar9 == 0) {
LAB_00522e63:
              iVar2 = iVar7;
              iVar9 = iVar6;
            }
          }
          else if (iVar9 == 0) {
            iVar2 = 2;
            iVar9 = iVar6;
          }
        }
        else {
          if ((0x71 < iVar6) && (iVar9 == 0x13)) {
            iVar7 = 0;
          }
          iVar2 = iVar7;
          iVar9 = iVar9 + -1;
        }
        break;
      case 0x7545:
        if (iVar9 < iVar6) {
          if ((0x71 < iVar6) && (iVar9 == 0x71)) {
            iVar7 = 2;
          }
          iVar2 = iVar7;
          iVar9 = iVar9 + 1;
        }
        else if (iVar6 < 0x72) {
          if (iVar9 == iVar6) {
            iVar9 = 0;
          }
        }
        else if (iVar9 == iVar6) {
          iVar2 = 0;
          iVar9 = 0;
        }
        break;
      case 0x7547:
        iVar5 = iVar9 + 0x13;
        if (iVar6 < iVar5) {
          if (iVar6 < 0x72) {
            if (iVar9 < iVar6 - iVar6 % 0x13) {
              if (iVar6 + -0x13 <= iVar9) {
                iVar9 = iVar6;
              }
            }
            else {
              iVar9 = 0;
            }
          }
          else if (iVar9 < iVar6 - iVar6 % 0x13) {
            if (iVar6 + -0x13 <= iVar9) {
              iVar2 = 2;
              iVar9 = iVar6;
            }
          }
          else {
            iVar2 = 0;
            iVar9 = 0;
          }
        }
        else {
          iVar9 = iVar5;
          if ((iVar7 + 6) * 0x13 <= iVar5) {
            iVar2 = iVar7 + 2;
          }
        }
        break;
      case 0x754d:
        goto switchD_00522dec_caseD_754d;
      }
    }
    if (local_74 != 0x7542) {
      if (local_74 < 0x7535) {
        if (local_74 == 0x7534) {
          uVar4 = *(undefined4 *)(&DAT_0058cab0 + (iVar9 + DAT_005d67ec * 0x4ec) * 8);
          goto LAB_00522efd;
        }
        if (local_74 != 0) {
          if (local_74 < 5) {
            DAT_005d67ec = local_74 - 1;
            iVar6 = 0;
            if (*(int *)(&DAT_0058cab0 + DAT_005d67ec * 0x2760) != 0) {
              puVar3 = &DAT_0058cab0 + DAT_005d67ec * 0x2760;
              do {
                piVar1 = (int *)(puVar3 + 8);
                puVar3 = puVar3 + 8;
                iVar6 = iVar6 + 1;
              } while (*piVar1 != 0);
            }
            iVar6 = iVar6 + -1;
            iVar2 = 0;
            iVar9 = 0;
          }
          else if (local_74 == 0x7532) {
switchD_00522dec_caseD_754d:
            uVar4 = 0;
LAB_00522efd:
            FUN_00538810();
            FUN_00414630(1);
            FUN_005262e0(local_70);
            FUN_00526440();
            FUN_00526420(local_6c);
            FUN_005389c0(0,0,local_68);
            FUN_00523630(local_64);
            return uVar4;
          }
        }
      }
      else if (local_74 == 0x753f) goto switchD_00522dec_caseD_754d;
      goto switchD_00522dec_caseD_7546;
    }
    if (iVar9 < 0x13) {
      iVar2 = 2;
      iVar9 = iVar6;
      if (iVar6 < 0x72) goto LAB_00522e63;
    }
    else {
      iVar9 = iVar9 + -0x13;
      if ((iVar9 < iVar7 * 0x13 + -0x13) && (0 < iVar7)) {
        iVar2 = iVar7 + -1;
      }
    }
  } while( true );
}

